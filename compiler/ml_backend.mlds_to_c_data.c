/*
** Automatically generated from `mlds_to_c_data.m'
** by the Mercury compiler,
** version rotd-2022-02-23
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
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
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
#include "parse_tree.java_names.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__IntroducedFrom__pred__mlds_output_rval_const__1021__1_2_p_0(
  MR_Word Lang_14,
  MR_Word HeadVar__2_65);

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_code_addr_4_p_0(
  MR_Word Stream_5,
  MR_Word CodeAddr_6);

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

static /* final */ const MR_Box ml_backend__mlds_to_c_data_scalar_common_4[1][9];




static /* final */ const MR_Box ml_backend__mlds_to_c_data_scalar_common_1[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
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

static /* final */ const MR_Box ml_backend__mlds_to_c_data_scalar_common_4[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
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



static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__IntroducedFrom__pred__mlds_output_rval_const__1021__1_2_p_0(
  MR_Word Lang_14,
  MR_Word HeadVar__2_65)
{
  MR_bool succeeded = (Lang_14 == HeadVar__2_65);

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
        ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0(Opts_7, (MR_Integer) 0, Initializer_10, Stream_8);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_10, (MR_Integer) 1))));

        if (!((Var_27 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) " = ");
          ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0(Opts_7, (MR_Integer) 0, Initializer_10, Stream_8);
        }
      }
      break;
    case (MR_Integer) 3:
      {
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " = ");
        ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0(Opts_7, (MR_Integer) 0, Initializer_10, Stream_8);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word Initializer_9,
  MR_Word Stream_10)
{
  switch (MR_tag((MR_Word) Initializer_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Rval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Initializer_9, (MR_Integer) 0))));

        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_8);
        ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_12, Stream_10);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FieldInitializers_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_9, (MR_Integer) 1))));

        if ((FieldInitializers_14 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_initializer_body\'/6", (MR_String) "FieldInitializers = []");
            return;
          }
        else
        {
          MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldInitializers_14, (MR_Integer) 1))));
          MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldInitializers_14, (MR_Integer) 0))));

          if ((Var_76 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_8);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{ ");
            ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0(Opts_7, (MR_Integer) 0, Var_77, Stream_10);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) " }");
          }
          else
          {
            MR_Word Var_44;
            MR_Integer Var_47;

            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_8);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
            Var_47 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
            {
              Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&ml_backend__mlds_to_c_data_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0_2));
              MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (Opts_7));
              MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (Var_47));
            }
            parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Var_44, (MR_String) ",\n", FieldInitializers_14, Stream_10);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_8);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}");
          }
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ElementInitializers_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Initializer_9, (MR_Integer) 0))));

        if ((ElementInitializers_19 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_8);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{ 0 }\n");
        }
        else
        {
          MR_Word Var_27;
          MR_Integer Var_30;

          ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_8);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
          Var_30 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) 1);
          {
            Var_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&ml_backend__mlds_to_c_data_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0_1));
            MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (Opts_7));
            MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (Var_30));
          }
          parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Var_27, (MR_String) ",\n", ElementInitializers_19, Stream_10);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
          ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_8);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}");
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
          MR_Word MaybePtag_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_7, (MR_Integer) 0))));
          MR_Word PtrRval_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_7, (MR_Integer) 1))));
          MR_Word PtrType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_7, (MR_Integer) 2))));
          MR_Word FieldId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_7, (MR_Integer) 3))));
          MR_Word FieldType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_7, (MR_Integer) 4))));

          if (((MR_tag((MR_Word) FieldId_13)) == (MR_Integer) 1))
          {
            MR_Word QualFieldVarName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_13, (MR_Integer) 0))));
            MR_Word CtorType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_13, (MR_Integer) 1))));
            MR_Word Var_43;
            uint8_t Var_44;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            succeeded = (MaybePtag_10 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtag_10, (MR_Integer) 0))));
              Var_44 = (uint8_t) (Var_43);
              succeeded = (Var_44 == UINT8_C(0));
            }
            if (succeeded)
            {
              MR_Word PtrAddrLval_23;

              succeeded = ml_backend__mlds____Unify____mlds_type_0_0(PtrType_12, CtorType_22);
              if (!(succeeded))
                ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(Opts_6, Stream_8, CtorType_22);
              succeeded = ((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                PtrAddrLval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PtrRval_11, (MR_Integer) 1))));
                ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_6, PtrAddrLval_23, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ").");
              }
              else
              {
                ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_6, Stream_8, PtrRval_11);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")->");
              }
            }
            else
            {
              ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(Opts_6, Stream_8, CtorType_22);
              if ((MaybePtag_10 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_strip_tag(");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, PtrRval_11, Stream_8);
              }
              else
              {
                MR_Word Ptag_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtag_10, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_body(");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                ml_backend__mlds_to_c_data__mlds_output_ptag_4_p_0(Stream_8, Ptag_84);
              }
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))->");
            }
            ml_backend__mlds_to_c_name__mlds_output_fully_qualified_field_var_name_4_p_0(Stream_8, QualFieldVarName_21);
          }
          else
          {
            MR_Word OffsetRval_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_13, (MR_Integer) 0))));

            if ((FieldType_14 == (MR_Word) ((MR_Unsigned) 20U)))
              succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) FieldType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FieldType_14, (MR_Integer) 0)))) == (MR_Integer) 0))))
            {
              MR_Word MercuryType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_14, (MR_Integer) 1))));

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
                MR_Word Ptag_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtag_10, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_hl_field(");
                ml_backend__mlds_to_c_data__mlds_output_ptag_4_p_0(Stream_8, Ptag_20);
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
          MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_3_input_1_Opts_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Stream_7;
          MR_Word next_value_of_tscc_proc_3_input_3_Rval_8;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_3_input_1_Opts_6 = Opts_6;
          next_value_of_tscc_proc_3_input_2_Stream_7 = Stream_8;
          next_value_of_tscc_proc_3_input_3_Rval_8 = Rval_24;
          tscc_proc_3_input_1_Opts_6 = next_value_of_tscc_proc_3_input_1_Opts_6;
          tscc_proc_3_input_2_Stream_7 = next_value_of_tscc_proc_3_input_2_Stream_7;
          tscc_proc_3_input_3_Rval_8 = next_value_of_tscc_proc_3_input_3_Rval_8;
          goto top_of_proc_3;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word GlobalVar_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_7, (MR_Integer) 0))));
          MR_String Var_36;

          Var_36 = ml_backend__mlds_to_c_name__global_var_name_1_f_0(GlobalVar_26);
          mercury__io__write_string_4_p_0(Stream_8, Var_36);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LocalVarName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_c_name__mlds_output_local_var_name_4_p_0(Stream_8, LocalVarName_31);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word QualGlobalVarName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));
              MR_Word MLDS_ModuleName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_27, (MR_Integer) 0))));
              MR_Word GlobalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_27, (MR_Integer) 1))));

              ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_5_p_0(Stream_8, MLDS_ModuleName_29, GlobalVarName_30);
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
          MR_Word ModuleName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 0))));
          MR_Integer TypeNum_23;
          MR_Integer RowNum_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 3))));
          MR_Word ModuleSymName_25;
          MR_String MangledModuleName_26;
          MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 2))));
          MR_String Var_159;
          MR_String Var_169;

          TypeNum_23 = (MR_Integer) (Var_51);
          ModuleSymName_25 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_21);
          MangledModuleName_26 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_25);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_26);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_23, &Var_159);
          mercury__io__write_string_4_p_0(Stream_8, Var_159);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), RowNum_24, &Var_169);
          mercury__io__write_string_4_p_0(Stream_8, Var_169);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ScalarCommon_92 = (MR_Word) (MR_body((MR_Word) (Rval_7), (MR_Integer) 1));
          MR_Word ModuleName_93;
          MR_Integer TypeNum_95;
          MR_Integer RowNum_96;
          MR_Word ModuleSymName_97;
          MR_String MangledModuleName_98;
          MR_Word Var_100;
          MR_String Var_137;
          MR_String Var_147;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
          ModuleName_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_92, (MR_Integer) 0))));
          Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_92, (MR_Integer) 2))));
          RowNum_96 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_92, (MR_Integer) 3))));
          TypeNum_95 = (MR_Integer) (Var_100);
          ModuleSymName_97 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_93);
          MangledModuleName_98 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_97);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_98);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_95, &Var_137);
          mercury__io__write_string_4_p_0(Stream_8, Var_137);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), RowNum_96, &Var_147);
          mercury__io__write_string_4_p_0(Stream_8, Var_147);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_7, (MR_Integer) 0))));
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Ptag_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word BaseRval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_mkword(");
              ml_backend__mlds_to_c_data__mlds_output_ptag_4_p_0(Stream_8, Ptag_11);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, BaseRval_12, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_5_p_0(Stream_8, Const_13);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_4_input_1_Opts_7 = Opts_6;
              MR_Word next_value_of_tscc_proc_4_input_2_Stream_8 = Stream_8;
              MR_Word next_value_of_tscc_proc_4_input_3_Type_9 = Type_79;
              MR_Word next_value_of_tscc_proc_4_input_4_Rval_10 = SubRval_80;

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
              MR_Word Type_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_unboxed_rval_6_p_0(Opts_6, Stream_8, Type_81, SubRval_82);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_cast_rval_6_p_0(Opts_6, Stream_8, Type_14, SubRval_15);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_unop_6_p_0(Opts_6, Stream_8, Unop_16, SubRval_83);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word BinOp_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word RvalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));
              MR_Word RvalB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 3))));

              ml_backend__mlds_to_c_data__mlds_output_binop_7_p_0(Opts_6, Stream_8, BinOp_17, RvalA_18, RvalB_19);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Lval_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Opts_6;
              MR_Word next_value_of_tscc_proc_1_input_2_Lval_7;
              MR_Word next_value_of_tscc_proc_1_input_3_Stream_8;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Opts_6 = Opts_6;
              next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_84;
              next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;
              tscc_proc_1_input_1_Opts_6 = next_value_of_tscc_proc_1_input_1_Opts_6;
              tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
              tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word VectorCommon_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word RowRval_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));
              MR_Integer StartRowNum_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_27, (MR_Integer) 3))));
              MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_27, (MR_Integer) 2))));
              MR_Word ModuleName_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_27, (MR_Integer) 0))));
              MR_Integer TypeNum_88 = (MR_Integer) (Var_36);
              MR_Word ModuleSymName_89;
              MR_String MangledModuleName_90;
              MR_String Var_115;
              MR_String Var_125;

              ModuleSymName_89 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_86);
              MangledModuleName_90 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_89);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
              mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_90);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_vector_common_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_88, &Var_115);
              mercury__io__write_string_4_p_0(Stream_8, Var_115);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), StartRowNum_29, &Var_125);
              mercury__io__write_string_4_p_0(Stream_8, Var_125);
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
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_8, (MR_Integer) 0))));

      if (((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0)))) == (MR_Integer) 1))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 1);
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
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_10, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word InnerRval_13;
    MR_Word OtherType_12;

    if (succeeded)
    {
      OtherType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_10, (MR_Integer) 1))));
      InnerRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_10, (MR_Integer) 2))));
      succeeded = ml_backend__mlds____Unify____mlds_type_0_0(Type_9, OtherType_12);
      if (!(succeeded))
      {
        MR_Word Var_47;

        Var_47 = ml_backend__mlds_to_c_data__is_an_address_1_f_0(InnerRval_13);
        succeeded = (Var_47 == (MR_Integer) 1);
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word MercuryType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) MercuryType_25)) {
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
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
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
            case (MR_Integer) 3:
              {
                MR_Word IntType_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 1))) & (MR_Integer) 15);

                switch (IntType_24) {
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
          MR_Word MaybePtag_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_7, (MR_Integer) 0))));
          MR_Word PtrRval_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_7, (MR_Integer) 1))));
          MR_Word PtrType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_7, (MR_Integer) 2))));
          MR_Word FieldId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_7, (MR_Integer) 3))));
          MR_Word FieldType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_7, (MR_Integer) 4))));

          if (((MR_tag((MR_Word) FieldId_13)) == (MR_Integer) 1))
          {
            MR_Word QualFieldVarName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_13, (MR_Integer) 0))));
            MR_Word CtorType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_13, (MR_Integer) 1))));
            MR_Word Var_43;
            uint8_t Var_44;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            succeeded = (MaybePtag_10 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtag_10, (MR_Integer) 0))));
              Var_44 = (uint8_t) (Var_43);
              succeeded = (Var_44 == UINT8_C(0));
            }
            if (succeeded)
            {
              MR_Word PtrAddrLval_23;

              succeeded = ml_backend__mlds____Unify____mlds_type_0_0(PtrType_12, CtorType_22);
              if (!(succeeded))
                ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(Opts_6, Stream_8, CtorType_22);
              succeeded = ((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                PtrAddrLval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PtrRval_11, (MR_Integer) 1))));
                ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_6, PtrAddrLval_23, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ").");
              }
              else
              {
                ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_6, Stream_8, PtrRval_11);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")->");
              }
            }
            else
            {
              ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(Opts_6, Stream_8, CtorType_22);
              if ((MaybePtag_10 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_strip_tag(");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, PtrRval_11, Stream_8);
              }
              else
              {
                MR_Word Ptag_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtag_10, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_body(");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                ml_backend__mlds_to_c_data__mlds_output_ptag_4_p_0(Stream_8, Ptag_84);
              }
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))->");
            }
            ml_backend__mlds_to_c_name__mlds_output_fully_qualified_field_var_name_4_p_0(Stream_8, QualFieldVarName_21);
          }
          else
          {
            MR_Word OffsetRval_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_13, (MR_Integer) 0))));

            if ((FieldType_14 == (MR_Word) ((MR_Unsigned) 20U)))
              succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) FieldType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FieldType_14, (MR_Integer) 0)))) == (MR_Integer) 0))))
            {
              MR_Word MercuryType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_14, (MR_Integer) 1))));

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
                MR_Word Ptag_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtag_10, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_hl_field(");
                ml_backend__mlds_to_c_data__mlds_output_ptag_4_p_0(Stream_8, Ptag_20);
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
          MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_3_input_1_Opts_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Stream_7;
          MR_Word next_value_of_tscc_proc_3_input_3_Rval_8;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_3_input_1_Opts_6 = Opts_6;
          next_value_of_tscc_proc_3_input_2_Stream_7 = Stream_8;
          next_value_of_tscc_proc_3_input_3_Rval_8 = Rval_24;
          tscc_proc_3_input_1_Opts_6 = next_value_of_tscc_proc_3_input_1_Opts_6;
          tscc_proc_3_input_2_Stream_7 = next_value_of_tscc_proc_3_input_2_Stream_7;
          tscc_proc_3_input_3_Rval_8 = next_value_of_tscc_proc_3_input_3_Rval_8;
          goto top_of_proc_3;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word GlobalVar_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_7, (MR_Integer) 0))));
          MR_String Var_36;

          Var_36 = ml_backend__mlds_to_c_name__global_var_name_1_f_0(GlobalVar_26);
          mercury__io__write_string_4_p_0(Stream_8, Var_36);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LocalVarName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_c_name__mlds_output_local_var_name_4_p_0(Stream_8, LocalVarName_31);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word QualGlobalVarName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));
              MR_Word MLDS_ModuleName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_27, (MR_Integer) 0))));
              MR_Word GlobalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_27, (MR_Integer) 1))));

              ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_5_p_0(Stream_8, MLDS_ModuleName_29, GlobalVarName_30);
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
          MR_Word ModuleName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 0))));
          MR_Integer TypeNum_23;
          MR_Integer RowNum_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 3))));
          MR_Word ModuleSymName_25;
          MR_String MangledModuleName_26;
          MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 2))));
          MR_String Var_159;
          MR_String Var_169;

          TypeNum_23 = (MR_Integer) (Var_51);
          ModuleSymName_25 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_21);
          MangledModuleName_26 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_25);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_26);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_23, &Var_159);
          mercury__io__write_string_4_p_0(Stream_8, Var_159);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), RowNum_24, &Var_169);
          mercury__io__write_string_4_p_0(Stream_8, Var_169);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ScalarCommon_92 = (MR_Word) (MR_body((MR_Word) (Rval_7), (MR_Integer) 1));
          MR_Word ModuleName_93;
          MR_Integer TypeNum_95;
          MR_Integer RowNum_96;
          MR_Word ModuleSymName_97;
          MR_String MangledModuleName_98;
          MR_Word Var_100;
          MR_String Var_137;
          MR_String Var_147;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
          ModuleName_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_92, (MR_Integer) 0))));
          Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_92, (MR_Integer) 2))));
          RowNum_96 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_92, (MR_Integer) 3))));
          TypeNum_95 = (MR_Integer) (Var_100);
          ModuleSymName_97 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_93);
          MangledModuleName_98 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_97);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_98);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_95, &Var_137);
          mercury__io__write_string_4_p_0(Stream_8, Var_137);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), RowNum_96, &Var_147);
          mercury__io__write_string_4_p_0(Stream_8, Var_147);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_7, (MR_Integer) 0))));
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Ptag_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word BaseRval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_mkword(");
              ml_backend__mlds_to_c_data__mlds_output_ptag_4_p_0(Stream_8, Ptag_11);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, BaseRval_12, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_5_p_0(Stream_8, Const_13);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_4_input_1_Opts_7 = Opts_6;
              MR_Word next_value_of_tscc_proc_4_input_2_Stream_8 = Stream_8;
              MR_Word next_value_of_tscc_proc_4_input_3_Type_9 = Type_79;
              MR_Word next_value_of_tscc_proc_4_input_4_Rval_10 = SubRval_80;

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
              MR_Word Type_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_unboxed_rval_6_p_0(Opts_6, Stream_8, Type_81, SubRval_82);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_cast_rval_6_p_0(Opts_6, Stream_8, Type_14, SubRval_15);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_unop_6_p_0(Opts_6, Stream_8, Unop_16, SubRval_83);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word BinOp_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word RvalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));
              MR_Word RvalB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 3))));

              ml_backend__mlds_to_c_data__mlds_output_binop_7_p_0(Opts_6, Stream_8, BinOp_17, RvalA_18, RvalB_19);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Lval_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Opts_6;
              MR_Word next_value_of_tscc_proc_1_input_2_Lval_7;
              MR_Word next_value_of_tscc_proc_1_input_3_Stream_8;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Opts_6 = Opts_6;
              next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_84;
              next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;
              tscc_proc_1_input_1_Opts_6 = next_value_of_tscc_proc_1_input_1_Opts_6;
              tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
              tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word VectorCommon_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word RowRval_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));
              MR_Integer StartRowNum_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_27, (MR_Integer) 3))));
              MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_27, (MR_Integer) 2))));
              MR_Word ModuleName_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_27, (MR_Integer) 0))));
              MR_Integer TypeNum_88 = (MR_Integer) (Var_36);
              MR_Word ModuleSymName_89;
              MR_String MangledModuleName_90;
              MR_String Var_115;
              MR_String Var_125;

              ModuleSymName_89 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_86);
              MangledModuleName_90 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_89);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
              mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_90);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_vector_common_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_88, &Var_115);
              mercury__io__write_string_4_p_0(Stream_8, Var_115);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), StartRowNum_29, &Var_125);
              mercury__io__write_string_4_p_0(Stream_8, Var_125);
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
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_8, (MR_Integer) 0))));

      if (((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0)))) == (MR_Integer) 1))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 1);
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
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_10, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word InnerRval_13;
    MR_Word OtherType_12;

    if (succeeded)
    {
      OtherType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_10, (MR_Integer) 1))));
      InnerRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_10, (MR_Integer) 2))));
      succeeded = ml_backend__mlds____Unify____mlds_type_0_0(Type_9, OtherType_12);
      if (!(succeeded))
      {
        MR_Word Var_47;

        Var_47 = ml_backend__mlds_to_c_data__is_an_address_1_f_0(InnerRval_13);
        succeeded = (Var_47 == (MR_Integer) 1);
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word MercuryType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) MercuryType_25)) {
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
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
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
            case (MR_Integer) 3:
              {
                MR_Word IntType_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 1))) & (MR_Integer) 15);

                switch (IntType_24) {
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
          MR_Word MaybePtag_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_7, (MR_Integer) 0))));
          MR_Word PtrRval_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_7, (MR_Integer) 1))));
          MR_Word PtrType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_7, (MR_Integer) 2))));
          MR_Word FieldId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_7, (MR_Integer) 3))));
          MR_Word FieldType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_7, (MR_Integer) 4))));

          if (((MR_tag((MR_Word) FieldId_13)) == (MR_Integer) 1))
          {
            MR_Word QualFieldVarName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_13, (MR_Integer) 0))));
            MR_Word CtorType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_13, (MR_Integer) 1))));
            MR_Word Var_43;
            uint8_t Var_44;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            succeeded = (MaybePtag_10 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtag_10, (MR_Integer) 0))));
              Var_44 = (uint8_t) (Var_43);
              succeeded = (Var_44 == UINT8_C(0));
            }
            if (succeeded)
            {
              MR_Word PtrAddrLval_23;

              succeeded = ml_backend__mlds____Unify____mlds_type_0_0(PtrType_12, CtorType_22);
              if (!(succeeded))
                ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(Opts_6, Stream_8, CtorType_22);
              succeeded = ((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                PtrAddrLval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PtrRval_11, (MR_Integer) 1))));
                ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_6, PtrAddrLval_23, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ").");
              }
              else
              {
                ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_6, Stream_8, PtrRval_11);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")->");
              }
            }
            else
            {
              ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(Opts_6, Stream_8, CtorType_22);
              if ((MaybePtag_10 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_strip_tag(");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, PtrRval_11, Stream_8);
              }
              else
              {
                MR_Word Ptag_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtag_10, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_body(");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                ml_backend__mlds_to_c_data__mlds_output_ptag_4_p_0(Stream_8, Ptag_84);
              }
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))->");
            }
            ml_backend__mlds_to_c_name__mlds_output_fully_qualified_field_var_name_4_p_0(Stream_8, QualFieldVarName_21);
          }
          else
          {
            MR_Word OffsetRval_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_13, (MR_Integer) 0))));

            if ((FieldType_14 == (MR_Word) ((MR_Unsigned) 20U)))
              succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) FieldType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FieldType_14, (MR_Integer) 0)))) == (MR_Integer) 0))))
            {
              MR_Word MercuryType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_14, (MR_Integer) 1))));

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
                MR_Word Ptag_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtag_10, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_hl_field(");
                ml_backend__mlds_to_c_data__mlds_output_ptag_4_p_0(Stream_8, Ptag_20);
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
          MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_3_input_1_Opts_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Stream_7;
          MR_Word next_value_of_tscc_proc_3_input_3_Rval_8;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_3_input_1_Opts_6 = Opts_6;
          next_value_of_tscc_proc_3_input_2_Stream_7 = Stream_8;
          next_value_of_tscc_proc_3_input_3_Rval_8 = Rval_24;
          tscc_proc_3_input_1_Opts_6 = next_value_of_tscc_proc_3_input_1_Opts_6;
          tscc_proc_3_input_2_Stream_7 = next_value_of_tscc_proc_3_input_2_Stream_7;
          tscc_proc_3_input_3_Rval_8 = next_value_of_tscc_proc_3_input_3_Rval_8;
          goto top_of_proc_3;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word GlobalVar_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_7, (MR_Integer) 0))));
          MR_String Var_36;

          Var_36 = ml_backend__mlds_to_c_name__global_var_name_1_f_0(GlobalVar_26);
          mercury__io__write_string_4_p_0(Stream_8, Var_36);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LocalVarName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_c_name__mlds_output_local_var_name_4_p_0(Stream_8, LocalVarName_31);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word QualGlobalVarName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));
              MR_Word MLDS_ModuleName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_27, (MR_Integer) 0))));
              MR_Word GlobalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_27, (MR_Integer) 1))));

              ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_5_p_0(Stream_8, MLDS_ModuleName_29, GlobalVarName_30);
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
          MR_Word ModuleName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 0))));
          MR_Integer TypeNum_23;
          MR_Integer RowNum_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 3))));
          MR_Word ModuleSymName_25;
          MR_String MangledModuleName_26;
          MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 2))));
          MR_String Var_159;
          MR_String Var_169;

          TypeNum_23 = (MR_Integer) (Var_51);
          ModuleSymName_25 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_21);
          MangledModuleName_26 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_25);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_26);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_23, &Var_159);
          mercury__io__write_string_4_p_0(Stream_8, Var_159);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), RowNum_24, &Var_169);
          mercury__io__write_string_4_p_0(Stream_8, Var_169);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ScalarCommon_92 = (MR_Word) (MR_body((MR_Word) (Rval_7), (MR_Integer) 1));
          MR_Word ModuleName_93;
          MR_Integer TypeNum_95;
          MR_Integer RowNum_96;
          MR_Word ModuleSymName_97;
          MR_String MangledModuleName_98;
          MR_Word Var_100;
          MR_String Var_137;
          MR_String Var_147;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
          ModuleName_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_92, (MR_Integer) 0))));
          Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_92, (MR_Integer) 2))));
          RowNum_96 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_92, (MR_Integer) 3))));
          TypeNum_95 = (MR_Integer) (Var_100);
          ModuleSymName_97 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_93);
          MangledModuleName_98 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_97);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_98);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_95, &Var_137);
          mercury__io__write_string_4_p_0(Stream_8, Var_137);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), RowNum_96, &Var_147);
          mercury__io__write_string_4_p_0(Stream_8, Var_147);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_7, (MR_Integer) 0))));
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Ptag_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word BaseRval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_mkword(");
              ml_backend__mlds_to_c_data__mlds_output_ptag_4_p_0(Stream_8, Ptag_11);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, BaseRval_12, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_5_p_0(Stream_8, Const_13);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_4_input_1_Opts_7 = Opts_6;
              MR_Word next_value_of_tscc_proc_4_input_2_Stream_8 = Stream_8;
              MR_Word next_value_of_tscc_proc_4_input_3_Type_9 = Type_79;
              MR_Word next_value_of_tscc_proc_4_input_4_Rval_10 = SubRval_80;

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
              MR_Word Type_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_unboxed_rval_6_p_0(Opts_6, Stream_8, Type_81, SubRval_82);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_cast_rval_6_p_0(Opts_6, Stream_8, Type_14, SubRval_15);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_unop_6_p_0(Opts_6, Stream_8, Unop_16, SubRval_83);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word BinOp_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word RvalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));
              MR_Word RvalB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 3))));

              ml_backend__mlds_to_c_data__mlds_output_binop_7_p_0(Opts_6, Stream_8, BinOp_17, RvalA_18, RvalB_19);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Lval_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Opts_6;
              MR_Word next_value_of_tscc_proc_1_input_2_Lval_7;
              MR_Word next_value_of_tscc_proc_1_input_3_Stream_8;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Opts_6 = Opts_6;
              next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_84;
              next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;
              tscc_proc_1_input_1_Opts_6 = next_value_of_tscc_proc_1_input_1_Opts_6;
              tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
              tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word VectorCommon_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word RowRval_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));
              MR_Integer StartRowNum_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_27, (MR_Integer) 3))));
              MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_27, (MR_Integer) 2))));
              MR_Word ModuleName_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_27, (MR_Integer) 0))));
              MR_Integer TypeNum_88 = (MR_Integer) (Var_36);
              MR_Word ModuleSymName_89;
              MR_String MangledModuleName_90;
              MR_String Var_115;
              MR_String Var_125;

              ModuleSymName_89 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_86);
              MangledModuleName_90 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_89);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
              mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_90);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_vector_common_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_88, &Var_115);
              mercury__io__write_string_4_p_0(Stream_8, Var_115);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), StartRowNum_29, &Var_125);
              mercury__io__write_string_4_p_0(Stream_8, Var_125);
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
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_8, (MR_Integer) 0))));

      if (((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0)))) == (MR_Integer) 1))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 1);
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
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_10, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word InnerRval_13;
    MR_Word OtherType_12;

    if (succeeded)
    {
      OtherType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_10, (MR_Integer) 1))));
      InnerRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_10, (MR_Integer) 2))));
      succeeded = ml_backend__mlds____Unify____mlds_type_0_0(Type_9, OtherType_12);
      if (!(succeeded))
      {
        MR_Word Var_47;

        Var_47 = ml_backend__mlds_to_c_data__is_an_address_1_f_0(InnerRval_13);
        succeeded = (Var_47 == (MR_Integer) 1);
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word MercuryType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) MercuryType_25)) {
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
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
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
            case (MR_Integer) 3:
              {
                MR_Word IntType_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 1))) & (MR_Integer) 15);

                switch (IntType_24) {
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
          MR_Word MaybePtag_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_7, (MR_Integer) 0))));
          MR_Word PtrRval_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_7, (MR_Integer) 1))));
          MR_Word PtrType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_7, (MR_Integer) 2))));
          MR_Word FieldId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_7, (MR_Integer) 3))));
          MR_Word FieldType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_7, (MR_Integer) 4))));

          if (((MR_tag((MR_Word) FieldId_13)) == (MR_Integer) 1))
          {
            MR_Word QualFieldVarName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_13, (MR_Integer) 0))));
            MR_Word CtorType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_13, (MR_Integer) 1))));
            MR_Word Var_43;
            uint8_t Var_44;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            succeeded = (MaybePtag_10 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtag_10, (MR_Integer) 0))));
              Var_44 = (uint8_t) (Var_43);
              succeeded = (Var_44 == UINT8_C(0));
            }
            if (succeeded)
            {
              MR_Word PtrAddrLval_23;

              succeeded = ml_backend__mlds____Unify____mlds_type_0_0(PtrType_12, CtorType_22);
              if (!(succeeded))
                ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(Opts_6, Stream_8, CtorType_22);
              succeeded = ((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                PtrAddrLval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PtrRval_11, (MR_Integer) 1))));
                ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_6, PtrAddrLval_23, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ").");
              }
              else
              {
                ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_6, Stream_8, PtrRval_11);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")->");
              }
            }
            else
            {
              ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(Opts_6, Stream_8, CtorType_22);
              if ((MaybePtag_10 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_strip_tag(");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, PtrRval_11, Stream_8);
              }
              else
              {
                MR_Word Ptag_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtag_10, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_body(");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                ml_backend__mlds_to_c_data__mlds_output_ptag_4_p_0(Stream_8, Ptag_84);
              }
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))->");
            }
            ml_backend__mlds_to_c_name__mlds_output_fully_qualified_field_var_name_4_p_0(Stream_8, QualFieldVarName_21);
          }
          else
          {
            MR_Word OffsetRval_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_13, (MR_Integer) 0))));

            if ((FieldType_14 == (MR_Word) ((MR_Unsigned) 20U)))
              succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) FieldType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FieldType_14, (MR_Integer) 0)))) == (MR_Integer) 0))))
            {
              MR_Word MercuryType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_14, (MR_Integer) 1))));

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
                MR_Word Ptag_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtag_10, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_hl_field(");
                ml_backend__mlds_to_c_data__mlds_output_ptag_4_p_0(Stream_8, Ptag_20);
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
          MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_3_input_1_Opts_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Stream_7;
          MR_Word next_value_of_tscc_proc_3_input_3_Rval_8;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_3_input_1_Opts_6 = Opts_6;
          next_value_of_tscc_proc_3_input_2_Stream_7 = Stream_8;
          next_value_of_tscc_proc_3_input_3_Rval_8 = Rval_24;
          tscc_proc_3_input_1_Opts_6 = next_value_of_tscc_proc_3_input_1_Opts_6;
          tscc_proc_3_input_2_Stream_7 = next_value_of_tscc_proc_3_input_2_Stream_7;
          tscc_proc_3_input_3_Rval_8 = next_value_of_tscc_proc_3_input_3_Rval_8;
          goto top_of_proc_3;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word GlobalVar_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_7, (MR_Integer) 0))));
          MR_String Var_36;

          Var_36 = ml_backend__mlds_to_c_name__global_var_name_1_f_0(GlobalVar_26);
          mercury__io__write_string_4_p_0(Stream_8, Var_36);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LocalVarName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_c_name__mlds_output_local_var_name_4_p_0(Stream_8, LocalVarName_31);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word QualGlobalVarName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));
              MR_Word MLDS_ModuleName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_27, (MR_Integer) 0))));
              MR_Word GlobalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_27, (MR_Integer) 1))));

              ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_5_p_0(Stream_8, MLDS_ModuleName_29, GlobalVarName_30);
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
          MR_Word ModuleName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 0))));
          MR_Integer TypeNum_23;
          MR_Integer RowNum_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 3))));
          MR_Word ModuleSymName_25;
          MR_String MangledModuleName_26;
          MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 2))));
          MR_String Var_159;
          MR_String Var_169;

          TypeNum_23 = (MR_Integer) (Var_51);
          ModuleSymName_25 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_21);
          MangledModuleName_26 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_25);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_26);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_23, &Var_159);
          mercury__io__write_string_4_p_0(Stream_8, Var_159);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), RowNum_24, &Var_169);
          mercury__io__write_string_4_p_0(Stream_8, Var_169);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ScalarCommon_92 = (MR_Word) (MR_body((MR_Word) (Rval_7), (MR_Integer) 1));
          MR_Word ModuleName_93;
          MR_Integer TypeNum_95;
          MR_Integer RowNum_96;
          MR_Word ModuleSymName_97;
          MR_String MangledModuleName_98;
          MR_Word Var_100;
          MR_String Var_137;
          MR_String Var_147;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
          ModuleName_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_92, (MR_Integer) 0))));
          Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_92, (MR_Integer) 2))));
          RowNum_96 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_92, (MR_Integer) 3))));
          TypeNum_95 = (MR_Integer) (Var_100);
          ModuleSymName_97 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_93);
          MangledModuleName_98 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_97);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_98);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_95, &Var_137);
          mercury__io__write_string_4_p_0(Stream_8, Var_137);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), RowNum_96, &Var_147);
          mercury__io__write_string_4_p_0(Stream_8, Var_147);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_7, (MR_Integer) 0))));
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Ptag_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word BaseRval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_mkword(");
              ml_backend__mlds_to_c_data__mlds_output_ptag_4_p_0(Stream_8, Ptag_11);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, BaseRval_12, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_5_p_0(Stream_8, Const_13);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_4_input_1_Opts_7 = Opts_6;
              MR_Word next_value_of_tscc_proc_4_input_2_Stream_8 = Stream_8;
              MR_Word next_value_of_tscc_proc_4_input_3_Type_9 = Type_79;
              MR_Word next_value_of_tscc_proc_4_input_4_Rval_10 = SubRval_80;

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
              MR_Word Type_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_unboxed_rval_6_p_0(Opts_6, Stream_8, Type_81, SubRval_82);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_cast_rval_6_p_0(Opts_6, Stream_8, Type_14, SubRval_15);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_unop_6_p_0(Opts_6, Stream_8, Unop_16, SubRval_83);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word BinOp_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word RvalA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));
              MR_Word RvalB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 3))));

              ml_backend__mlds_to_c_data__mlds_output_binop_7_p_0(Opts_6, Stream_8, BinOp_17, RvalA_18, RvalB_19);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Lval_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Opts_6;
              MR_Word next_value_of_tscc_proc_1_input_2_Lval_7;
              MR_Word next_value_of_tscc_proc_1_input_3_Stream_8;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Opts_6 = Opts_6;
              next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_84;
              next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;
              tscc_proc_1_input_1_Opts_6 = next_value_of_tscc_proc_1_input_1_Opts_6;
              tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
              tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word VectorCommon_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
              MR_Word RowRval_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2))));
              MR_Integer StartRowNum_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_27, (MR_Integer) 3))));
              MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_27, (MR_Integer) 2))));
              MR_Word ModuleName_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_27, (MR_Integer) 0))));
              MR_Integer TypeNum_88 = (MR_Integer) (Var_36);
              MR_Word ModuleSymName_89;
              MR_String MangledModuleName_90;
              MR_String Var_115;
              MR_String Var_125;

              ModuleSymName_89 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_86);
              MangledModuleName_90 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_89);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
              mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_90);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_vector_common_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_88, &Var_115);
              mercury__io__write_string_4_p_0(Stream_8, Var_115);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), StartRowNum_29, &Var_125);
              mercury__io__write_string_4_p_0(Stream_8, Var_125);
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
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_8, (MR_Integer) 0))));

      if (((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0)))) == (MR_Integer) 1))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 1);
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
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_10, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word InnerRval_13;
    MR_Word OtherType_12;

    if (succeeded)
    {
      OtherType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_10, (MR_Integer) 1))));
      InnerRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_10, (MR_Integer) 2))));
      succeeded = ml_backend__mlds____Unify____mlds_type_0_0(Type_9, OtherType_12);
      if (!(succeeded))
      {
        MR_Word Var_47;

        Var_47 = ml_backend__mlds_to_c_data__is_an_address_1_f_0(InnerRval_13);
        succeeded = (Var_47 == (MR_Integer) 1);
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word MercuryType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) MercuryType_25)) {
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
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
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
            case (MR_Integer) 3:
              {
                MR_Word IntType_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 1))) & (MR_Integer) 15);

                switch (IntType_24) {
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
  MR_bool succeeded = ((((MR_tag((MR_Word) Rval_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
  MR_Word Const_12;

  if (succeeded)
  {
    Const_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_10, (MR_Integer) 1))));
    {
      MR_Integer Int_13;

      switch (MR_tag((MR_Word) Const_12)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          {
            Int_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Const_12, (MR_Integer) 0))));
            succeeded = (Int_13 >= (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_12, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                int8_t Int8_14 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_12, (MR_Integer) 1)));

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
                int16_t Int16_15 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_12, (MR_Integer) 1)));

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
                int32_t Int32_16 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_12, (MR_Integer) 1)));

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
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_12, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  Uint_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Const_12, (MR_Integer) 1))));
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  uint8_t Uint8_18 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_12, (MR_Integer) 1)));

                  Uint_17 = mercury__uint8__cast_to_uint_1_f_0(Uint8_18);
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 4:
                {
                  uint16_t Uint16_19 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_12, (MR_Integer) 1)));

                  Uint_17 = mercury__uint16__cast_to_uint_1_f_0(Uint16_19);
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 6:
                {
                  uint32_t Uint32_20 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_12, (MR_Integer) 1)));

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

  if (((((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
    succeeded = MR_TRUE;
  else
  if (((((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
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
            MR_Word Var_193;

            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_nth_code_unit(");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
            succeeded = ((((MR_tag((MR_Word) Y_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_193 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_12, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_193)) == (MR_Integer) 2);
              if (succeeded)
                YN_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_193, (MR_Integer) 0))));
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
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "==");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0)");
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(strcmp(");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "!=");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0)");
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(strcmp(");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0)");
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(strcmp(");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ">");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0)");
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(strcmp(");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<=");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0)");
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(strcmp(");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ">=");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0)");
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

            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_float_from_dword");
            succeeded = ml_backend__mlds_to_c_data__is_aligned_dword_field_3_p_0(X_11, Y_12, &PtrRval_38);
            if (succeeded)
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "_ptr(MR_dword_ptr(");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, PtrRval_38, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "))");
            }
            else
            {
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
            MR_Word PtrRval_353;

            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_int64_from_dword");
            succeeded = ml_backend__mlds_to_c_data__is_aligned_dword_field_3_p_0(X_11, Y_12, &PtrRval_353);
            if (succeeded)
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "_ptr(MR_dword_ptr(");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, PtrRval_353, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "))");
            }
            else
            {
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
            MR_Word PtrRval_988;

            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_uint64_from_dword");
            succeeded = ml_backend__mlds_to_c_data__is_aligned_dword_field_3_p_0(X_11, Y_12, &PtrRval_988);
            if (succeeded)
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "_ptr(MR_dword_ptr(");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, PtrRval_988, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "))");
            }
            else
            {
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
        MR_Word IntType_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Op_10, (MR_Integer) 0))) & (MR_Integer) 15);

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
        MR_Word IntType_837 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Op_10, (MR_Integer) 0))) & (MR_Integer) 15);

        switch (IntType_837) {
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
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Op_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word IntType_665 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_10, (MR_Integer) 1))) & (MR_Integer) 15);

            switch (IntType_665) {
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
            MR_Word ShiftType_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_10, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Integer YInt_35;
            MR_Word Var_90;

            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<<");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            succeeded = ((((MR_tag((MR_Word) Y_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_12, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_90)) == (MR_Integer) 2);
              if (succeeded)
                YInt_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_90, (MR_Integer) 0))));
            }
            if (succeeded)
              mercury__io__write_int_4_p_0(Stream_9, YInt_35);
            else
            {
              MR_Unsigned YUInt_36;
              MR_Word Var_92;

              succeeded = ((((MR_tag((MR_Word) Y_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_12, (MR_Integer) 1))));
                succeeded = ((((MR_tag((MR_Word) Var_92)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_92, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                  YUInt_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_92, (MR_Integer) 1))));
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
            MR_Word ShiftType_1030 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_10, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Integer YInt_1024;
            MR_Word Var_1014;

            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ">>");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            succeeded = ((((MR_tag((MR_Word) Y_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_1014 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_12, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_1014)) == (MR_Integer) 2);
              if (succeeded)
                YInt_1024 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_1014, (MR_Integer) 0))));
            }
            if (succeeded)
              mercury__io__write_int_4_p_0(Stream_9, YInt_1024);
            else
            {
              MR_Unsigned YUInt_1020;
              MR_Word Var_1015;

              succeeded = ((((MR_tag((MR_Word) Y_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Y_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_1015 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Y_12, (MR_Integer) 1))));
                succeeded = ((((MR_tag((MR_Word) Var_1015)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_1015, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                  YUInt_1020 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_1015, (MR_Integer) 1))));
              }
              if (succeeded)
                mercury__io__write_uint_4_p_0(Stream_9, YUInt_1020);
              else
              {
                switch (ShiftType_1030) {
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
            MR_Integer N_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Op_10, (MR_Integer) 1))));

            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_offset_streq(");
            mercury__io__write_int_4_p_0(Stream_9, N_37);
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
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(Opts_7, Stream_8, Type_9);
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
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(Opts_7, Stream_8, Type_9);
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
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
        ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(Opts_7, Stream_8, Type_9);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
        ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MercuryType_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) MercuryType_23)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(Opts_7, Stream_8, Type_9);
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
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(Opts_7, Stream_8, Type_9);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(Opts_7, Stream_8, Type_9);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word IntType_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 1))) & (MR_Integer) 15);

            switch (IntType_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(Opts_7, Stream_8, Type_9);
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
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(Opts_7, Stream_8, Type_9);
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
  ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(Opts_7, Stream_8, Type_9);
  mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
  ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
  mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_data__IntroducedFrom__pred__mlds_output_rval_const__1021__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

        ml_backend__mlds_to_c_data__mlds_output_code_addr_4_p_0(Stream_7, CodeAddr_21);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer N_112 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Const_8, (MR_Integer) 0))));

        backend_libs__c_util__output_int_expr_4_p_0(Stream_7, N_112);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Unsigned U_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 1))));

            backend_libs__c_util__output_uint_expr_4_p_0(Stream_7, U_12);
          }
          break;
        case (MR_Integer) 1:
          {
            int8_t N_88 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 1)));

            backend_libs__c_util__output_int8_expr_4_p_0(Stream_7, N_88);
          }
          break;
        case (MR_Integer) 2:
          {
            uint8_t N_89 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 1)));

            backend_libs__c_util__output_uint8_expr_4_p_0(Stream_7, N_89);
          }
          break;
        case (MR_Integer) 3:
          {
            int16_t N_90 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 1)));

            backend_libs__c_util__output_int16_expr_4_p_0(Stream_7, N_90);
          }
          break;
        case (MR_Integer) 4:
          {
            uint16_t N_91 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 1)));

            backend_libs__c_util__output_uint16_expr_4_p_0(Stream_7, N_91);
          }
          break;
        case (MR_Integer) 5:
          {
            int32_t N_92 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 1)));

            backend_libs__c_util__output_int32_expr_4_p_0(Stream_7, N_92);
          }
          break;
        case (MR_Integer) 6:
          {
            uint32_t N_93 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 1)));

            backend_libs__c_util__output_uint32_expr_4_p_0(Stream_7, N_93);
          }
          break;
        case (MR_Integer) 7:
          {
            int64_t N_94 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 1)));

            backend_libs__c_util__output_int64_expr_4_p_0(Stream_7, N_94);
          }
          break;
        case (MR_Integer) 8:
          {
            uint64_t N_95 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 1)));

            backend_libs__c_util__output_uint64_expr_4_p_0(Stream_7, N_95);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 1))));

            backend_libs__c_util__output_int_expr_4_p_0(Stream_7, N_10);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Integer C_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 1))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(MR_Char) ");
            mercury__io__write_int_4_p_0(Stream_7, C_13);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Float FloatVal_17 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 1)));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(MR_Float) ");
            backend_libs__c_util__output_float_literal_4_p_0(Stream_7, FloatVal_17);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_String String_18 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 1))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(MR_String) ");
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\"");
            backend_libs__c_util__output_quoted_string_4_p_0(Stream_7, String_18);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\"");
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word String_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 1))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\"");
            backend_libs__c_util__output_quoted_multi_string_4_p_0(Stream_7, String_96);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\"");
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Lang_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_String Value_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 2))));
            MR_Word Var_62;

            {
              Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&ml_backend__mlds_to_c_data_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_5_p_0_1));
              MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (Lang_14));
              MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_62, (MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_rval_const\'/5", (MR_String) "mlconst_foreign for language other than C");
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "((int) ");
            mercury__io__write_string_4_p_0(Stream_7, Value_15);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 15:
          {
            MR_String NamedConst_20 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 2))));

            mercury__io__write_string_4_p_0(Stream_7, NamedConst_20);
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word LocalVarName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 1))));
            MR_String MangledLocalVarName_23;
            MR_String Var_41;

            Var_41 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_22);
            MangledLocalVarName_23 = parse_tree__prog_foreign__name_mangle_1_f_0(Var_41);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "&");
            mercury__io__write_string_4_p_0(Stream_7, MangledLocalVarName_23);
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word MLDS_ModuleName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 1))));
            MR_Word GlobalVarName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 2))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "&");
            ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_5_p_0(Stream_7, MLDS_ModuleName_24, GlobalVarName_25);
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word RttiId_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 2))));
            MR_Word MLDS_ModuleName_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 1))));
            MR_Word GlobalVarName_101;
            MR_Word IsArray_102;

            {
              GlobalVarName_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), GlobalVarName_101, 0) = ((MR_Box) (RttiId_27));
            }
            IsArray_102 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(RttiId_27);
            switch (IsArray_102) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "&");
                break;
            }
            ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_5_p_0(Stream_7, MLDS_ModuleName_100, GlobalVarName_101);
          }
          break;
        case (MR_Integer) 19:
          {
            MR_Word QualProcLabel_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 1))));
            MR_Word TablingId_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 2))));
            MR_Word ProcLabel_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualProcLabel_28, (MR_Integer) 1))));
            MR_Word MLDS_ModuleName_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualProcLabel_28, (MR_Integer) 0))));
            MR_Word GlobalVarName_108;
            MR_Word IsArray_109;

            {
              GlobalVarName_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), GlobalVarName_108, 0) = ((MR_Box) (ProcLabel_30));
              MR_hl_field(MR_mktag(2), GlobalVarName_108, 1) = ((MR_Box) (TablingId_29));
            }
            IsArray_109 = backend_libs__rtti__tabling_id_has_array_type_1_f_0(TablingId_29);
            switch (IsArray_109) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "&");
                break;
            }
            ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_5_p_0(Stream_7, MLDS_ModuleName_107, GlobalVarName_108);
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word MLDS_Type_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 1))));

            succeeded = (MLDS_Type_31 == (MR_Word) ((MR_Unsigned) 4U));
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

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_code_addr_4_p_0(
  MR_Word Stream_5,
  MR_Word CodeAddr_6)
{
  MR_Word QualFuncLabel_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CodeAddr_6, (MR_Integer) 0))));
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncLabel_8, (MR_Integer) 0))));
  MR_Word FuncLabel_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncLabel_8, (MR_Integer) 1))));
  MR_Word ProcLabel_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_11, (MR_Integer) 0))));
  MR_Word MaybeAux_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_11, (MR_Integer) 1))));
  MR_Word QualProcLabel_14;
  MR_String Var_18;

  {
    QualProcLabel_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), QualProcLabel_14, 0) = ((MR_Box) (ModuleName_10));
    MR_hl_field(MR_mktag(0), QualProcLabel_14, 1) = ((MR_Box) (ProcLabel_12));
  }
  ml_backend__mlds_to_c_name__mlds_output_fully_qualified_proc_label_4_p_0(Stream_5, QualProcLabel_14);
  Var_18 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_13);
  mercury__io__write_string_4_p_0(Stream_5, Var_18);
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
    LvalX_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RvalX_4, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) RvalY_5)) == (MR_Integer) 2);
    if (succeeded)
    {
      LvalY_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RvalY_5, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) LvalX_6)) == (MR_Integer) 0);
      if (succeeded)
      {
        Ptag_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LvalX_6, (MR_Integer) 0))));
        PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LvalX_6, (MR_Integer) 1))));
        PtrType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LvalX_6, (MR_Integer) 2))));
        FieldIdX_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LvalX_6, (MR_Integer) 3))));
        FieldType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LvalX_6, (MR_Integer) 4))));
        succeeded = ((MR_tag((MR_Word) LvalY_7)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LvalY_7, (MR_Integer) 0))));
          Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LvalY_7, (MR_Integer) 1))));
          Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LvalY_7, (MR_Integer) 2))));
          FieldIdY_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LvalY_7, (MR_Integer) 3))));
          Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LvalY_7, (MR_Integer) 4))));
          TypeInfo_25_25 = (MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_2[0]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (LvalX_6));
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
                    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldIdX_11, (MR_Integer) 0))));
                    succeeded = ((((MR_tag((MR_Word) Var_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Offset_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_16, (MR_Integer) 0))));
                        succeeded = ((MR_tag((MR_Word) FieldIdY_13)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldIdY_13, (MR_Integer) 0))));
                          succeeded = ((((MR_tag((MR_Word) Var_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_17, (MR_Integer) 1))));
                            succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 2);
                            if (succeeded)
                            {
                              Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_18, (MR_Integer) 0))));
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubRval_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_3 = SubRval_6;

              // direct tailcall eliminated
              ;
              Rval_3 = next_value_of_Rval_3;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_24, (MR_Integer) 0))))) {
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
              MR_Word SubRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 2))));
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

void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_ptag_4_p_0(
  MR_Word Stream_5,
  MR_Word Ptag_6)
{
  uint8_t PtagUint8_8 = (uint8_t) (Ptag_6);

  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "MR_mktag(");
  mercury__io__write_uint8_4_p_0(Stream_5, PtagUint8_8);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
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
