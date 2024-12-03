/*
** Automatically generated from `mlds_to_cs_export.m'
** by the Mercury compiler,
** version rotd-2024-12-03
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
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
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
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_cs_data.mih"
#include "ml_backend.mlds_to_cs_func.mih"
#include "ml_backend.mlds_to_cs_name.mih"
#include "ml_backend.mlds_to_cs_type.mih"
#include "ml_backend.mlds_to_cs_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static MR_bool MR_CALL 
ml_backend__mlds_to_cs_export__IntroducedFrom__pred__output_export_for_csharp__77__1_2_p_0(
  MR_Word Lang_12,
  MR_Word HeadVar__2_41);

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enum_constant_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
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
  MR_Unsigned Indent_9,
  MR_Word ExportedEnum_10);

static MR_String MR_CALL 
ml_backend__mlds_to_cs_export__maybe_out_argument_name_for_csharp_1_f_0(
  MR_Word Arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_export__is_out_argument_1_p_0(
  MR_Word HeadVar__1_1);

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
  MR_Unsigned Indent_9,
  MR_Word Export_10);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_export__export_call_to_string_for_csharp_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
ml_backend__mlds_to_cs_export__export_call_to_string_for_csharp_2_f_0(
  MR_Word QualFuncName_4,
  MR_Word Args_5);

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

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_2[2][5];

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_3[2][3];

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_4[1][4];

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_5[1][10];




static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_1[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_2[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_3[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_export_scalar_common_2[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_export__export_call_to_string_for_csharp_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_export_scalar_common_4[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_export__output_export_for_csharp_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_4[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_export_scalar_common_5[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
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
  MR_Word HeadVar__2_41)
{
  MR_bool succeeded = (Lang_12 == HeadVar__2_41);

  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enum_constant_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word MLDS_Type_11,
  MR_Word ExportedConstant_12)
{
  MR_String IndentStr_14;
  MR_String Name_15;
  MR_Word Initializer_16;
  MR_String TypeStr_17;
  MR_Unsigned Var_30;

  IndentStr_14 = libs__indent__indent2_string_1_f_0(Indent_10);
  Name_15 = ((MR_String) ((MR_hl_field(0, ExportedConstant_12, (MR_Integer) 0))));
  Initializer_16 = ((MR_Word) ((MR_hl_field(0, ExportedConstant_12, (MR_Integer) 1))));
  TypeStr_17 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_8, MLDS_Type_11);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "public static readonly ");
  mercury__io__write_string_4_p_0(Stream_9, TypeStr_17);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_9, Name_15);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
  Var_30 = (Indent_10 + (MR_Unsigned) 1U);
  ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_9_p_0(Info_8, Stream_9, (MR_Integer) 0, Var_30, Initializer_16, (MR_Word) ((MR_Unsigned) 0U), (MR_String) ";");
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enum_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_export__output_exported_enum_constant_for_csharp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enum_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
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
        MR_Word EnumModuleName_16;
        MR_String EnumName_17;
        MR_Integer EnumArity_18;
        MR_Word EnumId_19;
        MR_Word MLDS_Type_20;
        MR_Word Var_23;
        MR_Box conv0_STATE_VARIABLE_IO_22;

        ml_backend__ml_type_gen__ml_gen_type_name_4_p_0(TypeCtor_14, &EnumModuleName_16, &EnumName_17, &EnumArity_18);
        {
          EnumId_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, EnumId_19, 0) = ((MR_Box) (EnumModuleName_16));
          MR_hl_field(0, EnumId_19, 1) = ((MR_Box) (EnumName_17));
          MR_hl_field(0, EnumId_19, 2) = ((MR_Box) (EnumArity_18));
        }
        MLDS_Type_20 = (MR_Word) (MR_mkword(2, (MR_Word) (EnumId_19)));
        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_23, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_export_scalar_common_5[0]));
          MR_hl_field(0, Var_23, 1) = ((MR_Box) (ml_backend__mlds_to_cs_export__output_exported_enum_for_csharp_6_p_0_1));
          MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_23, 3) = ((MR_Box) (Info_7));
          MR_hl_field(0, Var_23, 4) = ((MR_Box) (Stream_8));
          MR_hl_field(0, Var_23, 5) = ((MR_Box) (Indent_9));
          MR_hl_field(0, Var_23, 6) = ((MR_Box) (MLDS_Type_20));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, ExportedConstants_15, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_22);
      }
      break;
    case (MR_Integer) 2:
      {
      }
      break;
  }
}

static MR_String MR_CALL 
ml_backend__mlds_to_cs_export__maybe_out_argument_name_for_csharp_1_f_0(
  MR_Word Arg_3)
{
  MR_bool succeeded;
  MR_String ArgStr_4;
  MR_Word Name_5 = ((MR_Word) ((MR_hl_field(0, Arg_3, (MR_Integer) 0))));
  MR_Word Type_6 = ((MR_Word) ((MR_hl_field(0, Arg_3, (MR_Integer) 1))));
  MR_String NameStr_8;

  NameStr_8 = ml_backend__mlds_to_cs_name__local_var_name_to_ll_string_for_csharp_1_f_0(Name_5);
  succeeded = ((((MR_tag((MR_Word) Type_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_6, (MR_Integer) 0)))) == (MR_Integer) 10)));
  if (succeeded)
    ArgStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "out ", NameStr_8);
  else
    ArgStr_4 = NameStr_8;
  return ArgStr_4;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_export__is_out_argument_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word Type_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  succeeded = ((((MR_tag((MR_Word) Type_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
  if (succeeded)
  {
  }
  return succeeded;
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
  MR_Unsigned Indent_9,
  MR_Word Export_10)
{
  MR_bool succeeded;
  MR_Word Lang_12 = ((MR_Unsigned) ((MR_hl_field(0, Export_10, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_String ExportName_13 = ((MR_String) ((MR_hl_field(0, Export_10, (MR_Integer) 1))));
  MR_Word QualFuncName_14 = ((MR_Word) ((MR_hl_field(0, Export_10, (MR_Integer) 2))));
  MR_Word MLDS_Signature_15 = ((MR_Word) ((MR_hl_field(0, Export_10, (MR_Integer) 3))));
  MR_Word Parameters_18;
  MR_Word OutArgs_19;
  MR_Word InArgs_20;
  MR_Word ReturnTypes_21;
  MR_String ParamsStr_22;
  MR_String IndentStr_23;
  MR_Word Var_38;
  MR_Unsigned Var_43;

  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_export_scalar_common_2[1]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (ml_backend__mlds_to_cs_export__output_export_for_csharp_6_p_0_1));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (Lang_12));
    MR_hl_field(0, Var_38, 4) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__require__expect_3_p_0(Var_38, (MR_String) "predicate \140ml_backend.mlds_to_cs_export.output_export_for_csharp\'/6", (MR_String) "foreign_export for language other than C#.");
  Parameters_18 = ((MR_Word) ((MR_hl_field(0, MLDS_Signature_15, (MR_Integer) 0))));
  ReturnTypes_21 = ((MR_Word) ((MR_hl_field(0, MLDS_Signature_15, (MR_Integer) 1))));
  mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds_to_cs_export_scalar_common_3[1]), Parameters_18, &OutArgs_19, &InArgs_20);
  Var_43 = (Indent_9 + (MR_Unsigned) 1U);
  ParamsStr_22 = ml_backend__mlds_to_cs_func__params_to_string_for_csharp_3_f_0(Info_7, Var_43, Parameters_18);
  IndentStr_23 = libs__indent__indent2_string_1_f_0(Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_23);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "public static\n");
  if ((ReturnTypes_21 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((OutArgs_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String ExportCallStr_24;

      ExportCallStr_24 = ml_backend__mlds_to_cs_export__export_call_to_string_for_csharp_2_f_0(QualFuncName_14, InArgs_20);
      mercury__io__write_string_4_p_0(Stream_8, IndentStr_23);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "void ");
      mercury__io__write_string_4_p_0(Stream_8, ExportName_13);
      mercury__io__write_string_4_p_0(Stream_8, ParamsStr_22);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_8, IndentStr_23);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "  ");
      mercury__io__write_string_4_p_0(Stream_8, IndentStr_23);
      mercury__io__write_string_4_p_0(Stream_8, ExportCallStr_24);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ";\n");
      mercury__io__write_string_4_p_0(Stream_8, IndentStr_23);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n");
    }
    else
    {
      MR_Word FirstOutArg_25 = ((MR_Word) ((MR_hl_field(1, OutArgs_19, (MR_Integer) 0))));
      MR_Word RestOutArgs_26 = ((MR_Word) ((MR_hl_field(1, OutArgs_19, (MR_Integer) 1))));
      MR_Word FirstOutArgName_27 = ((MR_Word) ((MR_hl_field(0, FirstOutArg_25, (MR_Integer) 0))));
      MR_String FirstOutArgNameStr_30;
      MR_Word Var_76;
      MR_String ExportCallStr_140;

      FirstOutArgNameStr_30 = ml_backend__mlds_to_cs_name__local_var_name_to_ll_string_for_csharp_1_f_0(FirstOutArgName_27);
      Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), InArgs_20, RestOutArgs_26);
      ExportCallStr_140 = ml_backend__mlds_to_cs_export__export_call_to_string_for_csharp_2_f_0(QualFuncName_14, Var_76);
      mercury__io__write_string_4_p_0(Stream_8, IndentStr_23);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "void ");
      mercury__io__write_string_4_p_0(Stream_8, ExportName_13);
      mercury__io__write_string_4_p_0(Stream_8, ParamsStr_22);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_8, IndentStr_23);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "  ");
      mercury__io__write_string_4_p_0(Stream_8, IndentStr_23);
      mercury__io__write_string_4_p_0(Stream_8, FirstOutArgNameStr_30);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " = ");
      mercury__io__write_string_4_p_0(Stream_8, ExportCallStr_140);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ";\n");
      mercury__io__write_string_4_p_0(Stream_8, IndentStr_23);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n");
    }
  else
  {
    MR_Word Var_145 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_21, (MR_Integer) 1))));
    MR_Word Var_146 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_21, (MR_Integer) 0))));

    if ((Var_145 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String RetTypeStr_32;
      MR_Word Var_106;
      MR_String ExportCallStr_141;

      RetTypeStr_32 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_7, Var_146);
      Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), InArgs_20, OutArgs_19);
      ExportCallStr_141 = ml_backend__mlds_to_cs_export__export_call_to_string_for_csharp_2_f_0(QualFuncName_14, Var_106);
      mercury__io__write_string_4_p_0(Stream_8, IndentStr_23);
      mercury__io__write_string_4_p_0(Stream_8, RetTypeStr_32);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
      mercury__io__write_string_4_p_0(Stream_8, ExportName_13);
      mercury__io__write_string_4_p_0(Stream_8, ParamsStr_22);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_8, IndentStr_23);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
      mercury__io__write_string_4_p_0(Stream_8, IndentStr_23);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "  return (");
      mercury__io__write_string_4_p_0(Stream_8, RetTypeStr_32);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
      mercury__io__write_string_4_p_0(Stream_8, ExportCallStr_141);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ";\n");
      mercury__io__write_string_4_p_0(Stream_8, IndentStr_23);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n");
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_export.output_export_for_csharp\'/6", (MR_String) "multiple return values in export method");
        return;
      }
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_export__export_call_to_string_for_csharp_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_ArgStr_4;

  conv0_ArgStr_4 = ml_backend__mlds_to_cs_export__maybe_out_argument_name_for_csharp_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ArgStr_4));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
ml_backend__mlds_to_cs_export__export_call_to_string_for_csharp_2_f_0(
  MR_Word QualFuncName_4,
  MR_Word Args_5)
{
  MR_String CallStr_6;
  MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(0, QualFuncName_4, (MR_Integer) 0))));
  MR_Word FuncName_8 = ((MR_Word) ((MR_hl_field(0, QualFuncName_4, (MR_Integer) 1))));
  MR_String Qualifier_9;
  MR_String FuncNameStr_10;
  MR_Word ArgStrs_11;
  MR_String ArgsStr_12;
  MR_String Var_29;
  MR_String Var_31;
  MR_String Var_32;
  MR_String Var_34;

  Qualifier_9 = ml_backend__mlds_to_cs_name__qualifier_to_nll_string_for_csharp_2_f_0(ModuleName_7, (MR_Integer) 0);
  FuncNameStr_10 = ml_backend__mlds_to_cs_name__function_name_to_ll_string_for_csharp_1_f_0(FuncName_8);
  ArgStrs_11 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_cs_export_scalar_common_3[0]), Args_5);
  ArgsStr_12 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgStrs_11);
  Var_29 = mercury__string__f_43_43_2_f_0(ArgsStr_12, (MR_String) ")");
  Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_29);
  Var_32 = mercury__string__f_43_43_2_f_0(FuncNameStr_10, Var_31);
  Var_34 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_32);
  CallStr_6 = mercury__string__f_43_43_2_f_0(Qualifier_9, Var_34);
  return CallStr_6;
}

static void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enums_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_export__output_exported_enum_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_cs_export__output_exported_enums_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
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

  ml_backend__mlds_to_cs_export__output_export_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_cs_export__output_exports_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
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
