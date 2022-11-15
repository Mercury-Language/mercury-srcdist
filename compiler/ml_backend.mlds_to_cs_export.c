/*
** Automatically generated from `mlds_to_cs_export.m'
** by the Mercury compiler,
** version rotd-2022-11-15
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


// :- module ml_backend.mlds_to_cs_export.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_cs_export__init
ENDINIT
*/

#include "ml_backend.mlds_to_cs_export.mih"


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
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "hlds.code_model.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_cs_data.mih"
#include "ml_backend.mlds_to_cs_func.mih"
#include "ml_backend.mlds_to_cs_name.mih"
#include "ml_backend.mlds_to_cs_type.mih"
#include "ml_backend.mlds_to_cs_util.mih"
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




static MR_bool MR_CALL 
ml_backend__mlds_to_cs_export__IntroducedFrom__pred__output_export_for_csharp__77__1_2_p_0(
  MR_Word Lang_12,
  MR_Word HeadVar__2_38);

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enum_constant_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word MLDS_Type_11,
  MR_Word ExportedConstant_12);

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enum_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enum_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ExportedEnum_10);

static void MR_CALL 
ml_backend__mlds_to_cs_export__write_argument_name_for_csharp_4_p_0(
  MR_Word Arg_5,
  MR_Word Stream_6);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_export__is_out_argument_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_export_for_csharp_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_export__output_export_for_csharp_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_export__output_export_for_csharp_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_export_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word Export_10);

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enums_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exports_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_1[2][9];

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_2[1][5];

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_3[1][4];

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_4[2][3];

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_5[1][7];

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_6[1][10];




static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_1[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_2[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_3[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_4[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_export_scalar_common_3[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_export__output_export_for_csharp_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_export_scalar_common_5[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_export__output_export_for_csharp_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0)),
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



static MR_bool MR_CALL 
ml_backend__mlds_to_cs_export__IntroducedFrom__pred__output_export_for_csharp__77__1_2_p_0(
  MR_Word Lang_12,
  MR_Word HeadVar__2_38)
{
  MR_bool succeeded = (Lang_12 == HeadVar__2_38);

  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enum_constant_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word MLDS_Type_11,
  MR_Word ExportedConstant_12)
{
  MR_String Name_14 = ((MR_String) ((MR_hl_field(0, ExportedConstant_12, (MR_Integer) 0))));
  MR_Word Initializer_15 = ((MR_Word) ((MR_hl_field(0, ExportedConstant_12, (MR_Integer) 1))));
  MR_Integer Var_28;

  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "public static readonly ");
  ml_backend__mlds_to_cs_type__output_type_for_csharp_5_p_0(Info_8, MLDS_Type_11, Stream_9);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_9, Name_14);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
  Var_28 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
  ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_9_p_0(Info_8, Stream_9, (MR_Integer) 0, Var_28, Initializer_15, (MR_Word) ((MR_Unsigned) 0U), (MR_String) ";");
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enum_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_export__output_exported_enum_constant_for_csharp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enum_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ExportedEnum_10)
{
  MR_Word Lang_12 = ((MR_Unsigned) ((MR_hl_field(0, ExportedEnum_10, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word TypeCtor_14 = ((MR_Word) ((MR_hl_field(0, ExportedEnum_10, (MR_Integer) 2))));
  MR_Word ExportedConstants_15 = ((MR_Word) ((MR_hl_field(0, ExportedEnum_10, (MR_Integer) 3))));

  switch (Lang_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ClassName_16;
        MR_Integer ClassArity_17;
        MR_Word ClassId_18;
        MR_Word MLDS_Type_19;
        MR_Word Var_23;
        MR_Box conv0_STATE_VARIABLE_IO_21;

        ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_14, &ClassName_16, &ClassArity_17);
        {
          ClassId_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ClassId_18, 0) = ((MR_Box) (ClassName_16));
          MR_hl_field(0, ClassId_18, 1) = ((MR_Box) (ClassArity_17));
          MR_hl_field(0, ClassId_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
        }
        MLDS_Type_19 = (MR_Word) (MR_mkword(1, (MR_Word) (ClassId_18)));
        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_23, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_export_scalar_common_6[0]));
          MR_hl_field(0, Var_23, 1) = ((MR_Box) (ml_backend__mlds_to_cs_export__output_exported_enum_for_csharp_6_p_0_1));
          MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_23, 3) = ((MR_Box) (Info_7));
          MR_hl_field(0, Var_23, 4) = ((MR_Box) (Stream_8));
          MR_hl_field(0, Var_23, 5) = ((MR_Box) (Indent_9));
          MR_hl_field(0, Var_23, 6) = ((MR_Box) (MLDS_Type_19));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, ExportedConstants_15, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_21);
      }
      break;
    case (MR_Integer) 2:
      {
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__write_argument_name_for_csharp_4_p_0(
  MR_Word Arg_5,
  MR_Word Stream_6)
{
  MR_bool succeeded;
  MR_Word Name_8 = ((MR_Word) ((MR_hl_field(0, Arg_5, (MR_Integer) 0))));
  MR_Word Type_9 = ((MR_Word) ((MR_hl_field(0, Arg_5, (MR_Integer) 1))));

  succeeded = ((((MR_tag((MR_Word) Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_9, (MR_Integer) 0)))) == (MR_Integer) 7)));
  if (succeeded)
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "out ");
  ml_backend__mlds_to_cs_name__output_local_var_name_for_csharp_4_p_0(Stream_6, Name_8);
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_export__is_out_argument_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word Type_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
  if (succeeded)
  {
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_export_for_csharp_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_export__write_argument_name_for_csharp_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_export__output_export_for_csharp_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_cs_export__is_out_argument_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_export__output_export_for_csharp_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_cs_export__IntroducedFrom__pred__output_export_for_csharp__77__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_export_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word Export_10)
{
  MR_bool succeeded;
  MR_Word Lang_12 = ((MR_Unsigned) ((MR_hl_field(0, Export_10, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_String ExportName_13 = ((MR_String) ((MR_hl_field(0, Export_10, (MR_Integer) 1))));
  MR_Word MLDS_Name_14 = ((MR_Word) ((MR_hl_field(0, Export_10, (MR_Integer) 2))));
  MR_Word MLDS_Signature_15 = ((MR_Word) ((MR_hl_field(0, Export_10, (MR_Integer) 3))));
  MR_Word Parameters_18 = ((MR_Word) ((MR_hl_field(0, MLDS_Signature_15, (MR_Integer) 0))));
  MR_Word ReturnTypes_19 = ((MR_Word) ((MR_hl_field(0, MLDS_Signature_15, (MR_Integer) 1))));
  MR_Word OutArgs_24;
  MR_Word InArgs_25;
  MR_Word RestOutArgs_26;
  MR_Word Var_35;
  MR_Integer Var_54;
  MR_Integer Var_61;
  MR_Word Var_73;
  MR_Word ModuleName_82;
  MR_Word FuncName_83;

  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_export_scalar_common_2[0]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (ml_backend__mlds_to_cs_export__output_export_for_csharp_6_p_0_1));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (Lang_12));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__require__expect_3_p_0(Var_35, (MR_String) "predicate \140ml_backend.mlds_to_cs_export.output_export_for_csharp\'/6", (MR_String) "foreign_export for language other than C#.");
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "public static ");
  mercury__io__nl_3_p_0(Stream_8);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  if ((ReturnTypes_19 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "void ");
  else
  {
    MR_Word Var_80 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_19, (MR_Integer) 1))));
    MR_Word Var_81 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_19, (MR_Integer) 0))));

    if ((Var_80 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      ml_backend__mlds_to_cs_type__output_type_for_csharp_5_p_0(Info_7, Var_81, Stream_8);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_export.output_export_for_csharp\'/6", (MR_String) "multiple return values in export method");
        return;
      }
  }
  mercury__io__write_string_4_p_0(Stream_8, ExportName_13);
  Var_54 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  ml_backend__mlds_to_cs_func__output_params_for_csharp_6_p_0(Info_7, Var_54, Parameters_18, Stream_8);
  mercury__io__nl_3_p_0(Stream_8);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
  Var_61 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Var_61);
  mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds_to_cs_export_scalar_common_4[0]), Parameters_18, &OutArgs_24, &InArgs_25);
  if ((ReturnTypes_19 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((OutArgs_24 == (MR_Word) ((MR_Unsigned) 0U)))
      RestOutArgs_26 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word FirstOutArg_27 = ((MR_Word) ((MR_hl_field(1, OutArgs_24, (MR_Integer) 0))));
      MR_Word FirstOutArgName_28;

      RestOutArgs_26 = ((MR_Word) ((MR_hl_field(1, OutArgs_24, (MR_Integer) 1))));
      FirstOutArgName_28 = ((MR_Word) ((MR_hl_field(0, FirstOutArg_27, (MR_Integer) 0))));
      ml_backend__mlds_to_cs_name__output_local_var_name_for_csharp_4_p_0(Stream_8, FirstOutArgName_28);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " = ");
    }
  else
  {
    MR_Word RetTypeB_31 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_19, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "return (");
    ml_backend__mlds_to_cs_type__output_type_for_csharp_5_p_0(Info_7, RetTypeB_31, Stream_8);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
    RestOutArgs_26 = OutArgs_24;
  }
  Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), InArgs_25, RestOutArgs_26);
  ModuleName_82 = ((MR_Word) ((MR_hl_field(0, MLDS_Name_14, (MR_Integer) 0))));
  FuncName_83 = ((MR_Word) ((MR_hl_field(0, MLDS_Name_14, (MR_Integer) 1))));
  ml_backend__mlds_to_cs_name__output_qual_name_prefix_cs_5_p_0(Stream_8, ModuleName_82, (MR_Integer) 0);
  ml_backend__mlds_to_cs_name__output_function_name_for_csharp_4_p_0(Stream_8, FuncName_83);
  mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
  parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds_to_cs_export_scalar_common_4[1]), (MR_String) ", ", Var_73, Stream_8);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n");
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enums_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_export__output_exported_enum_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enums_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ExportedEnums_10)
{
  MR_Word Var_14;
  MR_Box conv0_STATE_VARIABLE_IO_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_export_scalar_common_1[1]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (ml_backend__mlds_to_cs_export__output_exported_enums_for_csharp_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (Indent_9));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, ExportedEnums_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exports_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_export__output_export_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_cs_export__output_exports_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word Exports_10)
{
  MR_Word Var_14;
  MR_Box conv0_STATE_VARIABLE_IO_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_export_scalar_common_1[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (ml_backend__mlds_to_cs_export__output_exports_for_csharp_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (Indent_9));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, Exports_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

void mercury__ml_backend__mlds_to_cs_export__init(void)
{
}

void mercury__ml_backend__mlds_to_cs_export__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_cs_export__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_cs_export__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_cs_export.
