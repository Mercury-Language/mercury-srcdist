/*
** Automatically generated from `mlds_to_c_global.m'
** by the Mercury compiler,
** version rotd-2022-02-19
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


// :- module ml_backend.mlds_to_c_global.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_c_global__init
ENDINIT
*/

#include "ml_backend.mlds_to_c_global.mih"


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
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c_class.mih"
#include "ml_backend.mlds_to_c_data.mih"
#include "ml_backend.mlds_to_c_name.mih"
#include "ml_backend.mlds_to_c_stmt.mih"
#include "ml_backend.mlds_to_c_type.mih"
#include "ml_backend.mlds_to_c_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_c_global__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_alloc_id_0__plain_ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0;

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_alloc_site_defn_7_p_0(
  MR_Word _Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word MLDS_ModuleName_11,
  MR_Word HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_c_global__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_97_108_108_111_99_95_115_105_116_101_95_100_101_102_110_95_95_91_49_93_95_48_7_p_0(
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word MLDS_ModuleName_11,
  MR_Word HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_cell_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word Initializer_12,
  MR_Integer STATE_VARIABLE_RowNum_0_18,
  MR_Integer * STATE_VARIABLE_RowNum_19);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_struct_field_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word FieldType_12,
  MR_Integer Num_13,
  MR_Integer * HeadVar__6_6);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_global_var_defn_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word Separate_12,
  MR_Word MLDS_ModuleName_13,
  MR_Word GlobalVarDefn_14);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_global_var_decl_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Word MLDS_ModuleName_11,
  MR_Word GlobalVarName_12,
  MR_Word Type_13,
  MR_Word InitializerSize_14);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_global_var_decl_opts_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word MLDS_ModuleName_11,
  MR_Word GlobalVarDefn_12);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_alloc_site_defns_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defn_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_String MangledModuleName_11,
  MR_Word HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_defns_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_decl_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_decl_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_String MangledModuleName_11,
  MR_Word HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_type_and_name_9_p_0(
  MR_Word Opts_10,
  MR_Word Stream_11,
  MR_String MangledModuleName_12,
  MR_Integer TypeRawNum_13,
  MR_Word Type_14,
  MR_Word InitArraySize_15,
  MR_Integer NumRows_16);


static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_1[1][3];

static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_2[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_3[2][11];

static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_4[1][10];




static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_2[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_3[2][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_4[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_global__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_alloc_id_0__plain_ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_c_global__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_alloc_id_0__plain_ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0),
    (MR_PseudoTypeInfo) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0)
  }
};

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_alloc_site_defn_7_p_0(
  MR_Word _Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word MLDS_ModuleName_11,
  MR_Word HeadVar__5_5)
{
  ml_backend__mlds_to_c_global__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_97_108_108_111_99_95_115_105_116_101_95_100_101_102_110_95_95_91_49_93_95_48_7_p_0(Stream_9, Indent_10, MLDS_ModuleName_11, HeadVar__5_5);
}

static void MR_CALL 
ml_backend__mlds_to_c_global__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_97_108_108_111_99_95_115_105_116_101_95_100_101_102_110_95_95_91_49_93_95_48_7_p_0(
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word MLDS_ModuleName_11,
  MR_Word HeadVar__5_5)
{
  MR_Word AllocData_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1))));
  MR_Word FuncName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocData_13, (MR_Integer) 0))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocData_13, (MR_Integer) 1))));
  MR_String Type_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), AllocData_13, (MR_Integer) 2))));
  MR_Integer Size_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), AllocData_13, (MR_Integer) 3))));
  MR_Word QualFuncName_19;
  MR_String FileName_20;
  MR_Integer LineNumber_21;

  {
    QualFuncName_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), QualFuncName_19, 0) = ((MR_Box) (MLDS_ModuleName_11));
    MR_hl_field(MR_mktag(0), QualFuncName_19, 1) = ((MR_Box) (FuncName_15));
  }
  mercury__term__context_file_2_p_0(Context_16, &FileName_20);
  mercury__term__context_line_2_p_0(Context_16, &LineNumber_21);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{ ");
  ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_4_p_0(Stream_9, QualFuncName_19);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", \"");
  backend_libs__c_util__output_quoted_string_4_p_0(Stream_9, FileName_20);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\", ");
  mercury__io__write_int_4_p_0(Stream_9, LineNumber_21);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", \"");
  backend_libs__c_util__output_quoted_string_4_p_0(Stream_9, Type_17);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\", ");
  mercury__io__write_int_4_p_0(Stream_9, Size_18);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "},\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_cell_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word Initializer_12,
  MR_Integer STATE_VARIABLE_RowNum_0_18,
  MR_Integer * STATE_VARIABLE_RowNum_19)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Initializer_12)) == (MR_Integer) 2);
  MR_Char EndChar_17;
  MR_String Var_40;
  MR_String Var_50;
  MR_Word Var_22;
  MR_Word Var_23;

  if (succeeded)
  {
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_12, (MR_Integer) 1))));
    succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 1))));
      succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
    EndChar_17 = (MR_Char) 32;
  else
    EndChar_17 = (MR_Char) 10;
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "/* row ");
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), (MR_Integer) 3, STATE_VARIABLE_RowNum_0_18, &Var_40);
  mercury__io__write_string_4_p_0(Stream_10, Var_40);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) " */");
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), EndChar_17, &Var_50);
  mercury__io__write_string_4_p_0(Stream_10, Var_50);
  *STATE_VARIABLE_RowNum_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RowNum_0_18 + (MR_Unsigned) 1);
  ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0(Opts_9, Indent_11, Initializer_12, Stream_10);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_struct_field_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word FieldType_12,
  MR_Integer Num_13,
  MR_Integer * HeadVar__6_6)
{
  MR_bool succeeded;
  MR_String Var_31;
  MR_String TypeName_15;

  *HeadVar__6_6 = (MR_Integer) ((MR_Unsigned) Num_13 + (MR_Unsigned) 1);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
  if ((FieldType_12 == (MR_Word) ((MR_Unsigned) 4U)))
  {
    TypeName_15 = (MR_String) "MR_Float_Aligned";
    succeeded = MR_TRUE;
  }
  else
  if (((((MR_tag((MR_Word) FieldType_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
  {
    MR_Word IntType_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 1))) & (MR_Integer) 15);

    switch (IntType_16) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 8:
        {
          TypeName_15 = (MR_String) "MR_Int64Aligned";
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 9:
        {
          TypeName_15 = (MR_String) "MR_Uint64Aligned";
          succeeded = MR_TRUE;
        }
        break;
    }
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
    mercury__io__write_string_4_p_0(Stream_10, TypeName_15);
  else
    ml_backend__mlds_to_c_type__mlds_output_type_prefix_5_p_0(Opts_9, Stream_10, FieldType_12);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) " f");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), Num_13, &Var_31);
  mercury__io__write_string_4_p_0(Stream_10, Var_31);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ";\n");
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_global_var_defns_8_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word Separate_4,
  MR_Word ModuleName_5,
  MR_Word HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word GlobalVarDefn_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word GlobalVarDefns_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__6_6;

      ml_backend__mlds_to_c_global__mlds_output_global_var_defn_8_p_0(Opts_1, Stream_2, Indent_3, Separate_4, ModuleName_5, GlobalVarDefn_22);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = GlobalVarDefns_23;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_global_var_defn_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word Separate_12,
  MR_Word MLDS_ModuleName_13,
  MR_Word GlobalVarDefn_14)
{
  MR_bool succeeded;
  MR_Word GlobalVarName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_14, (MR_Integer) 0))));
  MR_Word Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_14, (MR_Integer) 1))));
  MR_Word Flags_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_14, (MR_Integer) 2))));
  MR_Word Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_14, (MR_Integer) 3))));
  MR_Word Initializer_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_14, (MR_Integer) 4))));
  MR_Word GCStmt_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_14, (MR_Integer) 5))));
  MR_Word Access_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_18, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  MR_Word ShouldModuleQual_24;
  MR_Word Var_31;
  MR_Word Var_36;
  MR_Word Access_63;
  MR_Word Constness_64;

  ShouldModuleQual_24 = ml_backend__mlds_to_c_name__should_module_qualify_global_var_name_1_f_0(GlobalVarName_16);
  succeeded = (Access_22 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (ShouldModuleQual_24 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) GlobalVarName_16)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
      succeeded = !(succeeded);
    }
  }
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_global.mlds_output_global_var_defn\'/8", (MR_String) "whole-program visible global var is not module qualified");
      return;
    }
  switch (Separate_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__nl_3_p_0(Stream_10);
      break;
  }
  Var_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_10, Var_31, Context_17);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
  Access_63 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_18, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  Constness_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_18, (MR_Integer) 0))) & (MR_Integer) 1);
  switch (Access_63) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "static ");
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
  switch (Constness_64) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "const ");
      break;
    case (MR_Integer) 0:
      {
      }
      break;
  }
  Var_36 = ml_backend__mlds__get_initializer_array_size_1_f_0(Initializer_20);
  ml_backend__mlds_to_c_global__mlds_output_global_var_decl_8_p_0(Opts_9, Stream_10, MLDS_ModuleName_13, GlobalVarName_16, Type_19, Var_36);
  ml_backend__mlds_to_c_data__mlds_output_initializer_6_p_0(Opts_9, Stream_10, Type_19, Initializer_20);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ";\n");
  ml_backend__mlds_to_c_stmt__mlds_output_gc_statement_7_p_0(Opts_9, Stream_10, Indent_11, GCStmt_21, (MR_String) "");
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_global_var_decl_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Word MLDS_ModuleName_11,
  MR_Word GlobalVarName_12,
  MR_Word Type_13,
  MR_Word InitializerSize_14)
{
  ml_backend__mlds_to_c_type__mlds_output_type_prefix_5_p_0(Opts_9, Stream_10, Type_13);
  mercury__io__write_char_4_p_0(Stream_10, (MR_Char) 32);
  ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_5_p_0(Stream_10, MLDS_ModuleName_11, GlobalVarName_12);
  ml_backend__mlds_to_c_type__mlds_output_type_suffix_6_p_0(Opts_9, Stream_10, Type_13, InitializerSize_14);
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_global_var_decls_7_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word ModuleName_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word GlobalVarDefn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word GlobalVarDefns_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__5_5;

      mercury__io__nl_3_p_0(Stream_2);
      ml_backend__mlds_to_c_global__mlds_output_global_var_decl_opts_7_p_0(Opts_1, Stream_2, Indent_3, ModuleName_4, GlobalVarDefn_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = GlobalVarDefns_20;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_global_var_decl_opts_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word MLDS_ModuleName_11,
  MR_Word GlobalVarDefn_12)
{
  MR_Word GlobalVarName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_12, (MR_Integer) 0))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_12, (MR_Integer) 1))));
  MR_Word Flags_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_12, (MR_Integer) 2))));
  MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_12, (MR_Integer) 3))));
  MR_Word Initializer_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_12, (MR_Integer) 4))));
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_27;
  MR_Word Access_51;
  MR_Word Constness_52;

  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_22, Context_15);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
  Access_51 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_16, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  Constness_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_16, (MR_Integer) 0))) & (MR_Integer) 1);
  switch (Access_51) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "static ");
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "extern ");
      break;
  }
  switch (Constness_52) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "const ");
      break;
    case (MR_Integer) 0:
      {
      }
      break;
  }
  Var_27 = ml_backend__mlds__get_initializer_array_size_1_f_0(Initializer_18);
  ml_backend__mlds_to_c_type__mlds_output_type_prefix_5_p_0(Opts_8, Stream_9, Type_17);
  mercury__io__write_char_4_p_0(Stream_9, (MR_Char) 32);
  ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_5_p_0(Stream_9, MLDS_ModuleName_11, GlobalVarName_14);
  ml_backend__mlds_to_c_type__mlds_output_type_suffix_6_p_0(Opts_8, Stream_9, Type_17, Var_27);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_alloc_site_defns_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_global__mlds_output_alloc_site_defn_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_alloc_site_defns_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word MLDS_ModuleName_11,
  MR_Word AllocSites_12)
{
  if (!((AllocSites_12 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Integer NumAllocSites_16;
    MR_Word Var_25;
    MR_Integer Var_27;
    MR_String Var_40;
    MR_Box conv0_STATE_VARIABLE_IO_26_26;

    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
    mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_1[0]), AllocSites_12, &NumAllocSites_16);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "static MR_AllocSiteInfo MR_alloc_sites[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), NumAllocSites_16, &Var_40);
    mercury__io__write_string_4_p_0(Stream_9, Var_40);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "] = {\n");
    Var_27 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&ml_backend__mlds_to_c_global_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (ml_backend__mlds_to_c_global__mlds_output_alloc_site_defns_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Opts_8));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (Stream_9));
      MR_hl_field(MR_mktag(0), Var_25, 5) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_25, 6) = ((MR_Box) (MLDS_ModuleName_11));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_25, AllocSites_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_26_26);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
  }
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_alloc_site_decls_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word AllocSites_8)
{
  if (!((AllocSites_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Integer NumAllocSites_12;
    MR_String Var_25;

    mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_1[0]), AllocSites_8, &NumAllocSites_12);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Indent_7);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static MR_AllocSiteInfo MR_alloc_sites[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), NumAllocSites_12, &Var_25);
    mercury__io__write_string_4_p_0(Stream_6, Var_25);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "];\n");
  }
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defns_7_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_String MangledModuleName_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word CellGroup_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word CellGroups_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__5_5;

      ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defn_7_p_0(Opts_1, Stream_2, Indent_3, MangledModuleName_4, CellGroup_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = CellGroups_20;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_STATE_VARIABLE_RowNum_19;

  ml_backend__mlds_to_c_global__mlds_output_cell_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RowNum_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RowNum_19));
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defn_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_String MangledModuleName_11,
  MR_Word HeadVar__5_5)
{
  MR_Word TypeNum_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0))));
  MR_Word CellGroup_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1))));
  MR_Integer TypeRawNum_15 = (MR_Integer) (TypeNum_12);
  MR_Word Type_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_13, (MR_Integer) 0))));
  MR_Word RowCords_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_13, (MR_Integer) 4))));
  MR_Word Rows_21;
  MR_Integer NumRows_22;
  MR_Word Var_43;
  MR_Integer Var_46;
  MR_String Var_64;
  MR_String Var_74;
  MR_Box conv2_Var_23;
  MR_Box conv1_STATE_VARIABLE_IO_45_45;

  Rows_21 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowCords_20);
  mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Rows_21, &NumRows_22);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\nstatic /* final */ const ");
  ml_backend__mlds_to_c_type__mlds_output_type_prefix_5_p_0(Opts_8, Stream_9, Type_16);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_9, MangledModuleName_11);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "_vector_common_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), TypeRawNum_15, &Var_64);
  mercury__io__write_string_4_p_0(Stream_9, Var_64);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "[");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), NumRows_22, &Var_74);
  mercury__io__write_string_4_p_0(Stream_9, Var_74);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "]");
  ml_backend__mlds_to_c_type__mlds_output_type_suffix_6_p_0(Opts_8, Stream_9, Type_16, (MR_Word) ((MR_Unsigned) 0U));
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n");
  Var_46 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&ml_backend__mlds_to_c_global_scalar_common_3[1]));
    MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defn_7_p_0_1));
    MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Opts_8));
    MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (Stream_9));
    MR_hl_field(MR_mktag(0), Var_43, 5) = ((MR_Box) (Var_46));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_43, Rows_21, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_23, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_45_45);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_decls_8_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word ModuleName_4,
  MR_String MangledModuleName_5,
  MR_Word HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word CellGroup_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word CellGroups_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word TypeNum_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_22, (MR_Integer) 0))));
      MR_Word CellGroup_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_22, (MR_Integer) 1))));
      MR_Integer TypeRawNum_39 = (MR_Integer) (TypeNum_36);
      MR_Word Type_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_37, (MR_Integer) 0))));
      MR_Word ClassDefn_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_37, (MR_Integer) 1))));
      MR_Word Rows_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_37, (MR_Integer) 4))));
      MR_Integer NumRows_45;
      MR_String Var_71;
      MR_String Var_81;
      MR_Word next_value_of_HeadVar__6_6;

      ml_backend__mlds_to_c_class__mlds_output_class_defn_7_p_0(Opts_1, Stream_2, Indent_3, ModuleName_4, ClassDefn_41);
      ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_2, Indent_3);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\nstatic /* final */ const ");
      ml_backend__mlds_to_c_type__mlds_output_type_prefix_5_p_0(Opts_1, Stream_2, Type_40);
      NumRows_45 = mercury__cord__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Rows_44);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) " ");
      mercury__io__write_string_4_p_0(Stream_2, MangledModuleName_5);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "_vector_common_");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), TypeRawNum_39, &Var_71);
      mercury__io__write_string_4_p_0(Stream_2, Var_71);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "[");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), NumRows_45, &Var_81);
      mercury__io__write_string_4_p_0(Stream_2, Var_81);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "]");
      ml_backend__mlds_to_c_type__mlds_output_type_suffix_6_p_0(Opts_1, Stream_2, Type_40, (MR_Word) ((MR_Unsigned) 0U));
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) ";\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = CellGroups_23;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_defns_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_STATE_VARIABLE_RowNum_19;

  ml_backend__mlds_to_c_global__mlds_output_cell_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RowNum_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RowNum_19));
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_defns_7_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_String MangledModuleName_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word CellGroup_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word CellGroups_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word TypeNum_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_19, (MR_Integer) 0))));
      MR_Word CellGroup_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_19, (MR_Integer) 1))));
      MR_Integer TypeRawNum_35 = (MR_Integer) (TypeNum_32);
      MR_Word Type_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_33, (MR_Integer) 0))));
      MR_Word InitArraySize_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_33, (MR_Integer) 1))));
      MR_Word RowCords_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_33, (MR_Integer) 4))));
      MR_Word Rows_41;
      MR_Integer NumRows_42;
      MR_Word Var_50;
      MR_Integer Var_53;
      MR_Box conv2_Var_43;
      MR_Box conv1_STATE_VARIABLE_IO_34_52;
      MR_Word next_value_of_HeadVar__5_5;

      Rows_41 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowCords_40);
      mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Rows_41, &NumRows_42);
      ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_2, Indent_3);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\nstatic /* final */ const ");
      ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_type_and_name_9_p_0(Opts_1, Stream_2, MangledModuleName_4, TypeRawNum_35, Type_36, InitArraySize_37, NumRows_42);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) " = {\n");
      Var_53 = (MR_Integer) ((MR_Unsigned) Indent_3 + (MR_Unsigned) 1);
      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&ml_backend__mlds_to_c_global_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_defns_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (Opts_1));
        MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (Stream_2));
        MR_hl_field(MR_mktag(0), Var_50, 5) = ((MR_Box) (Var_53));
      }
      mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, Rows_41, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_43, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_34_52);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "};\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = CellGroups_20;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_decls_7_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_String MangledModuleName_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word CellGroup_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word CellGroups_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__5_5;

      ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_decl_7_p_0(Opts_1, Stream_2, Indent_3, MangledModuleName_4, CellGroup_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = CellGroups_20;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_decl_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__6_6;

  ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_struct_field_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_HeadVar__6_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_decl_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_String MangledModuleName_11,
  MR_Word HeadVar__5_5)
{
  MR_bool succeeded;
  MR_Word TypeNum_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0))));
  MR_Word CellGroup_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1))));
  MR_Integer TypeRawNum_15 = (MR_Integer) (TypeNum_12);
  MR_Word Type_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_13, (MR_Integer) 0))));
  MR_Word InitArraySize_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_13, (MR_Integer) 1))));
  MR_Word Rows_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_13, (MR_Integer) 4))));
  MR_Integer NumRows_22;
  MR_Word ElemTypes_21;

  succeeded = ((((MR_tag((MR_Word) Type_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_16, (MR_Integer) 0)))) == (MR_Integer) 6)));
  if (succeeded)
  {
    ElemTypes_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_16, (MR_Integer) 1))));
    {
      MR_Word Var_51;
      MR_Integer Var_54;
      MR_String Var_74;
      MR_Box conv2_Var_42;
      MR_Box conv1_STATE_VARIABLE_IO_29_53;

      backend_libs__c_util__output_pragma_pack_push_3_p_0(Stream_9);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "struct ");
      mercury__io__write_string_4_p_0(Stream_9, MangledModuleName_11);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "_scalar_cell_group_");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), TypeRawNum_15, &Var_74);
      mercury__io__write_string_4_p_0(Stream_9, Var_74);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) " {\n");
      Var_54 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&ml_backend__mlds_to_c_global_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_decl_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (Opts_8));
        MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) (Stream_9));
        MR_hl_field(MR_mktag(0), Var_51, 5) = ((MR_Box) (Var_54));
      }
      mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_51, ElemTypes_21, ((MR_Box) ((MR_Integer) 1)), &conv2_Var_42, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_29_53);
      ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
      backend_libs__c_util__output_pragma_pack_pop_3_p_0(Stream_9);
    }
  }
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\nstatic /* final */ const ");
  NumRows_22 = mercury__cord__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Rows_20);
  ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_type_and_name_9_p_0(Opts_8, Stream_9, MangledModuleName_11, TypeRawNum_15, Type_16, InitArraySize_17, NumRows_22);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_type_and_name_9_p_0(
  MR_Word Opts_10,
  MR_Word Stream_11,
  MR_String MangledModuleName_12,
  MR_Integer TypeRawNum_13,
  MR_Word Type_14,
  MR_Word InitArraySize_15,
  MR_Integer NumRows_16)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Type_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_14, (MR_Integer) 0)))) == (MR_Integer) 6)));
  MR_String Var_58;
  MR_String Var_68;

  if (succeeded)
  {
    MR_String Var_45;

    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "struct ");
    mercury__io__write_string_4_p_0(Stream_11, MangledModuleName_12);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "_scalar_cell_group_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), TypeRawNum_13, &Var_45);
    mercury__io__write_string_4_p_0(Stream_11, Var_45);
  }
  else
    ml_backend__mlds_to_c_type__mlds_output_type_prefix_5_p_0(Opts_10, Stream_11, Type_14);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_11, MangledModuleName_12);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "_scalar_common_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), TypeRawNum_13, &Var_58);
  mercury__io__write_string_4_p_0(Stream_11, Var_58);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "[");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), NumRows_16, &Var_68);
  mercury__io__write_string_4_p_0(Stream_11, Var_68);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "]");
  succeeded = ((((MR_tag((MR_Word) Type_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_14, (MR_Integer) 0)))) == (MR_Integer) 6)));
  if (succeeded)
  {
  }
  if (!(succeeded))
    ml_backend__mlds_to_c_type__mlds_output_type_suffix_6_p_0(Opts_10, Stream_11, Type_14, InitArraySize_15);
}

void mercury__ml_backend__mlds_to_c_global__init(void)
{
}

void mercury__ml_backend__mlds_to_c_global__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_c_global__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_c_global__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_c_global.
