/*
** Automatically generated from `mlds_to_c_global.m'
** by the Mercury compiler,
** version rotd-2026-07-04
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
#include "backend_libs.c_util.mih"
#include "backend_libs.rtti.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
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
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c_class.mih"
#include "ml_backend.mlds_to_c_data.mih"
#include "ml_backend.mlds_to_c_name.mih"
#include "ml_backend.mlds_to_c_stmt.mih"
#include "ml_backend.mlds_to_c_type.mih"
#include "ml_backend.mlds_to_c_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.java_names.mih"
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
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_c_global__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_alloc_id_0__plain_ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_global__ml_backend__mlds_to_c_global__enum_functor_desc_maybe_blank_line_between_defns_0_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_global__ml_backend__mlds_to_c_global__enum_functor_desc_maybe_blank_line_between_defns_0_1;

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_global__ml_backend__mlds_to_c_global__enum_ordinal_ordered_maybe_blank_line_between_defns_0[2];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_global__ml_backend__mlds_to_c_global__enum_name_ordered_maybe_blank_line_between_defns_0[2];

static const MR_Integer ml_backend__mlds_to_c_global__ml_backend__mlds_to_c_global__functor_number_map_maybe_blank_line_between_defns_0[2];

static MR_bool MR_CALL 
ml_backend__mlds_to_c_global__IntroducedFrom__pred__mlds_output_scalar_cell_group_struct_field__228__1_2_p_0(
  MR_String TypeSuffix_19,
  MR_String HeadVar__2_35);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_alloc_site_defn_7_p_0(
  MR_Word _Opts_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word MLDS_ModuleName_11,
  MR_Word HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_c_global__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_97_108_108_111_99_95_115_105_116_101_95_100_101_102_110_95_95_91_49_93_95_48_7_p_0(
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word MLDS_ModuleName_11,
  MR_Word HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_cell_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Unsigned Indent_11,
  MR_Word Initializer_12,
  MR_Integer STATE_VARIABLE_RowNum_0_20,
  MR_Integer * STATE_VARIABLE_RowNum_21);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_struct_field_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_struct_field_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Unsigned Indent_11,
  MR_Word FieldType_12,
  MR_Integer Num_13,
  MR_Integer * HeadVar__6_6);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_global_var_defn_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Unsigned Indent_11,
  MR_Word BlankLine_12,
  MR_Word MLDS_ModuleName_13,
  MR_Word GlobalVarDefn_14);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_alloc_site_defns_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defns_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_defns_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_decls_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_String MR_CALL 
ml_backend__mlds_to_c_global__scalar_cell_group_type_and_name_to_string_for_c_6_f_0(
  MR_Word Opts_8,
  MR_String MangledModuleName_9,
  MR_Integer TypeRawNum_10,
  MR_Word Type_11,
  MR_Word InitArraySize_12,
  MR_Integer NumRows_13);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_global____Unify____maybe_blank_line_between_defns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_global____Compare____maybe_blank_line_between_defns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_1[1][3];

static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_2[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_3[2][11];

static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_4[1][10];

static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_5[1][5];




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
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_3[2][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_global__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_alloc_id_0__plain_ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_global_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_c_global__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_alloc_id_0__plain_ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0),
    (MR_PseudoTypeInfo) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0)
  }
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_global__ml_backend__mlds_to_c_global__enum_functor_desc_maybe_blank_line_between_defns_0_0 = {
  (MR_String) "no_blank_line_between_defns",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_global__ml_backend__mlds_to_c_global__enum_functor_desc_maybe_blank_line_between_defns_0_1 = {
  (MR_String) "blank_line_between_defns",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_global__ml_backend__mlds_to_c_global__enum_ordinal_ordered_maybe_blank_line_between_defns_0[2] = {
  &ml_backend__mlds_to_c_global__ml_backend__mlds_to_c_global__enum_functor_desc_maybe_blank_line_between_defns_0_0,
  &ml_backend__mlds_to_c_global__ml_backend__mlds_to_c_global__enum_functor_desc_maybe_blank_line_between_defns_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_global__ml_backend__mlds_to_c_global__enum_name_ordered_maybe_blank_line_between_defns_0[2] = {
  &ml_backend__mlds_to_c_global__ml_backend__mlds_to_c_global__enum_functor_desc_maybe_blank_line_between_defns_0_1,
  &ml_backend__mlds_to_c_global__ml_backend__mlds_to_c_global__enum_functor_desc_maybe_blank_line_between_defns_0_0
};

static const MR_Integer ml_backend__mlds_to_c_global__ml_backend__mlds_to_c_global__functor_number_map_maybe_blank_line_between_defns_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_c_global__ml_backend__mlds_to_c_global__type_ctor_info_maybe_blank_line_between_defns_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_c_global____Unify____maybe_blank_line_between_defns_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_global____Compare____maybe_blank_line_between_defns_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_global",
  (MR_String) "maybe_blank_line_between_defns",
  { ml_backend__mlds_to_c_global__ml_backend__mlds_to_c_global__enum_name_ordered_maybe_blank_line_between_defns_0 },
  { ml_backend__mlds_to_c_global__ml_backend__mlds_to_c_global__enum_ordinal_ordered_maybe_blank_line_between_defns_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__mlds_to_c_global__ml_backend__mlds_to_c_global__functor_number_map_maybe_blank_line_between_defns_0,

};

static MR_bool MR_CALL 
ml_backend__mlds_to_c_global__IntroducedFrom__pred__mlds_output_scalar_cell_group_struct_field__228__1_2_p_0(
  MR_String TypeSuffix_19,
  MR_String HeadVar__2_35)
{
  MR_bool succeeded = (strcmp(TypeSuffix_19, HeadVar__2_35) == 0);

  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_c_global____Compare____maybe_blank_line_between_defns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_c_global____Unify____maybe_blank_line_between_defns_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_alloc_site_defn_7_p_0(
  MR_Word _Opts_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word MLDS_ModuleName_11,
  MR_Word HeadVar__5_5)
{
  ml_backend__mlds_to_c_global__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_97_108_108_111_99_95_115_105_116_101_95_100_101_102_110_95_95_91_49_93_95_48_7_p_0(Stream_9, Indent_10, MLDS_ModuleName_11, HeadVar__5_5);
}

static void MR_CALL 
ml_backend__mlds_to_c_global__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_97_108_108_111_99_95_115_105_116_101_95_100_101_102_110_95_95_91_49_93_95_48_7_p_0(
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word MLDS_ModuleName_11,
  MR_Word HeadVar__5_5)
{
  MR_Word AllocData_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_5, 1))));
  MR_Word FuncName_15 = ((MR_Word) ((MR_hl_field(0, AllocData_13, 0))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, AllocData_13, 1))));
  MR_String Type_17 = ((MR_String) ((MR_hl_field(0, AllocData_13, 2))));
  MR_Integer Size_18 = ((MR_Integer) ((MR_hl_field(0, AllocData_13, 3))));
  MR_Word QualFuncName_19;
  MR_String QualFuncNameStr_20;
  MR_String TypeStr_21;
  MR_String FileName_22;
  MR_Integer LineNumber_23;
  MR_String FileNameStr_24;
  MR_String IndentStr_25;
  MR_String Var_53;
  MR_String Var_66;

  {
    QualFuncName_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, QualFuncName_19, 0) = ((MR_Box) (MLDS_ModuleName_11));
    MR_hl_field(0, QualFuncName_19, 1) = ((MR_Box) (FuncName_15));
  }
  QualFuncNameStr_20 = ml_backend__mlds_to_c_name__qual_function_name_to_string_for_c_1_f_0(QualFuncName_19);
  TypeStr_21 = backend_libs__c_util__quote_string_c_1_f_0(Type_17);
  FileName_22 = ((MR_String) ((MR_hl_field(0, Context_16, 0))));
  LineNumber_23 = ((MR_Integer) ((MR_hl_field(0, Context_16, 1))));
  FileNameStr_24 = backend_libs__c_util__quote_string_c_1_f_0(FileName_22);
  IndentStr_25 = libs__indent__indent2_string_1_f_0(Indent_10);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_25);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{ ");
  mercury__io__write_string_4_p_0(Stream_9, QualFuncNameStr_20);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_9, FileNameStr_24);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), LineNumber_23, &Var_53);
  mercury__io__write_string_4_p_0(Stream_9, Var_53);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_9, TypeStr_21);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), Size_18, &Var_66);
  mercury__io__write_string_4_p_0(Stream_9, Var_66);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " },\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_cell_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Unsigned Indent_11,
  MR_Word Initializer_12,
  MR_Integer STATE_VARIABLE_RowNum_0_20,
  MR_Integer * STATE_VARIABLE_RowNum_21)
{
  MR_bool succeeded;
  MR_String IndentStr_15;
  MR_Char EndChar_18;
  MR_String Var_43;
  MR_String Var_53;
  MR_Word Var_24;
  MR_Word Var_25;

  IndentStr_15 = libs__indent__indent2_string_1_f_0(Indent_11);
  succeeded = ((MR_tag((MR_Word) Initializer_12)) == (MR_Integer) 2);
  if (succeeded)
  {
    Var_24 = ((MR_Word) ((MR_hl_field(2, Initializer_12, 1))));
    succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_25 = ((MR_Word) ((MR_hl_field(1, Var_24, 1))));
      succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
    EndChar_18 = (MR_Char) 32;
  else
    EndChar_18 = (MR_Char) 10;
  *STATE_VARIABLE_RowNum_21 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_RowNum_0_20 + (MR_Unsigned) 1);
  mercury__io__write_string_4_p_0(Stream_10, IndentStr_15);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "/* row ");
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), (MR_Integer) 3, STATE_VARIABLE_RowNum_0_20, &Var_43);
  mercury__io__write_string_4_p_0(Stream_10, Var_43);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) " */");
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), EndChar_18, &Var_53);
  mercury__io__write_string_4_p_0(Stream_10, Var_53);
  ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0(Opts_9, Stream_10, Indent_11, Initializer_12);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n");
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_struct_field_8_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_global__IntroducedFrom__pred__mlds_output_scalar_cell_group_struct_field__228__1_2_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_struct_field_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Unsigned Indent_11,
  MR_Word FieldType_12,
  MR_Integer Num_13,
  MR_Integer * HeadVar__6_6)
{
  MR_bool succeeded;
  MR_String IndentStr_15;
  MR_String TypeName_16;

  *HeadVar__6_6 = (MR_Integer) ((MR_Unsigned) Num_13 + (MR_Unsigned) 1);
  IndentStr_15 = libs__indent__indent2_string_1_f_0(Indent_11);
  if ((FieldType_12 == (MR_Word) ((MR_Unsigned) 4U)))
  {
    TypeName_16 = (MR_String) "MR_Float_Aligned";
    succeeded = MR_TRUE;
  }
  else
  if (((((MR_tag((MR_Word) FieldType_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldType_12, 0)))) == (MR_Integer) 6))))
  {
    MR_Word IntType_17 = ((MR_Unsigned) ((MR_hl_field(3, FieldType_12, 1))) & (MR_Integer) 15);

    switch (IntType_17) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 8:
        {
          TypeName_16 = (MR_String) "MR_Int64Aligned";
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 9:
        {
          TypeName_16 = (MR_String) "MR_Uint64Aligned";
          succeeded = MR_TRUE;
        }
        break;
    }
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    MR_String Var_51;

    mercury__io__write_string_4_p_0(Stream_10, IndentStr_15);
    mercury__io__write_string_4_p_0(Stream_10, TypeName_16);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) " f");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), Num_13, &Var_51);
    mercury__io__write_string_4_p_0(Stream_10, Var_51);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ";\n");
  }
  else
  {
    MR_String TypePrefix_18;
    MR_String TypeSuffix_19;
    MR_Word Var_32;
    MR_String Var_64;

    ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_no_size_4_p_0(Opts_9, FieldType_12, &TypePrefix_18, &TypeSuffix_19);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_32, 0) = ((MR_Box) (&ml_backend__mlds_to_c_global_scalar_common_5[0]));
      MR_hl_field(0, Var_32, 1) = ((MR_Box) (ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_struct_field_8_p_0_1));
      MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_32, 3) = ((MR_Box) (TypeSuffix_19));
      MR_hl_field(0, Var_32, 4) = ((MR_Box) ((MR_String) ""));
    }
    mercury__require__expect_3_p_0(Var_32, (MR_String) "predicate \140ml_backend.mlds_to_c_global.mlds_output_scalar_cell_group_struct_field\'/8", (MR_String) "TypeSuffix is not empty");
    mercury__io__write_string_4_p_0(Stream_10, IndentStr_15);
    mercury__io__write_string_4_p_0(Stream_10, TypePrefix_18);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) " f");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), Num_13, &Var_64);
    mercury__io__write_string_4_p_0(Stream_10, Var_64);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ";\n");
  }
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_global_var_defns_8_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Unsigned Indent_3,
  MR_Word BlankLine_4,
  MR_Word ModuleName_5,
  MR_Word HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word GlobalVarDefn_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word GlobalVarDefns_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word next_value_of_HeadVar__6_6;

      ml_backend__mlds_to_c_global__mlds_output_global_var_defn_8_p_0(Opts_1, Stream_2, Indent_3, BlankLine_4, ModuleName_5, GlobalVarDefn_22);
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
  MR_Unsigned Indent_11,
  MR_Word BlankLine_12,
  MR_Word MLDS_ModuleName_13,
  MR_Word GlobalVarDefn_14)
{
  MR_bool succeeded;
  MR_Word GlobalVarName_16 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_14, 0))));
  MR_Word Context_17 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_14, 1))));
  MR_Word Flags_18 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_14, 2))));
  MR_Word Type_19 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_14, 3))));
  MR_Word Initializer_20 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_14, 4))));
  MR_Word GCStmt_21 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_14, 5))));
  MR_Word Access_22 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_18, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word ShouldModuleQual_24;
  MR_String IndentStr_26;
  MR_String FlagsPrefix_27;
  MR_String TypeNameStr_28;
  MR_Word Var_34;
  MR_Word Var_37;
  MR_Word Access_68;
  MR_Word Constness_69;
  MR_String AccessPrefix_70;
  MR_String ConstnessPrefix_71;
  MR_String TypePrefix_72;
  MR_String TypeSuffix_73;
  MR_String QualGlobalVarNameStr_74;
  MR_String Var_83;
  MR_String Var_85;

  ShouldModuleQual_24 = ml_backend__mlds_to_c_name__should_module_qualify_global_var_name_1_f_0(GlobalVarName_16);
  succeeded = (Access_22 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (ShouldModuleQual_24 == (MR_Integer) 0);
    if (succeeded)
      succeeded = ((MR_tag((MR_Word) GlobalVarName_16)) != (MR_Integer) 1);
  }
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_global.mlds_output_global_var_defn\'/8", (MR_String) "whole-program visible global var is not module qualified");
      return;
    }
  switch (BlankLine_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__nl_3_p_0(Stream_10);
      break;
    case (MR_Integer) 0:
      {
      }
      break;
  }
  Var_34 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_9, 3))) >> 16)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_10, Var_34, Context_17);
  IndentStr_26 = libs__indent__indent2_string_1_f_0(Indent_11);
  Access_68 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_18, 0))) >> 1)) & (MR_Integer) 1);
  Constness_69 = ((MR_Unsigned) ((MR_hl_field(0, Flags_18, 0))) & (MR_Integer) 1);
  switch (Access_68) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      AccessPrefix_70 = (MR_String) "static ";
      break;
    case (MR_Integer) 1:
      AccessPrefix_70 = (MR_String) "";
      break;
  }
  switch (Constness_69) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      ConstnessPrefix_71 = (MR_String) "const ";
      break;
    case (MR_Integer) 0:
      ConstnessPrefix_71 = (MR_String) "";
      break;
  }
  FlagsPrefix_27 = mercury__string__f_43_43_2_f_0(AccessPrefix_70, ConstnessPrefix_71);
  Var_37 = ml_backend__mlds__get_initializer_array_size_1_f_0(Initializer_20);
  ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0(Opts_9, Type_19, Var_37, &TypePrefix_72, &TypeSuffix_73);
  QualGlobalVarNameStr_74 = ml_backend__mlds_to_c_name__maybe_qual_global_var_name_to_string_for_c_2_f_0(MLDS_ModuleName_13, GlobalVarName_16);
  Var_83 = mercury__string__f_43_43_2_f_0(QualGlobalVarNameStr_74, TypeSuffix_73);
  Var_85 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_83);
  TypeNameStr_28 = mercury__string__f_43_43_2_f_0(TypePrefix_72, Var_85);
  mercury__io__write_string_4_p_0(Stream_10, IndentStr_26);
  mercury__io__write_string_4_p_0(Stream_10, FlagsPrefix_27);
  mercury__io__write_string_4_p_0(Stream_10, TypeNameStr_28);
  ml_backend__mlds_to_c_data__mlds_output_initializer_6_p_0(Opts_9, Stream_10, Type_19, Initializer_20);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ";\n");
  ml_backend__mlds_to_c_stmt__mlds_output_gc_statement_7_p_0(Opts_9, Stream_10, Indent_11, GCStmt_21, (MR_String) "");
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_global_var_decls_7_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Unsigned Indent_3,
  MR_Word ModuleName_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word GlobalVarDefn_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word GlobalVarDefns_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word GlobalVarName_26;
      MR_Word Context_27;
      MR_Word Flags_28;
      MR_Word Type_29;
      MR_Word Initializer_30;
      MR_String IndentStr_32;
      MR_String FlagsPrefix_33;
      MR_String TypeNameStr_34;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Access_66;
      MR_Word Constness_67;
      MR_String AccessPrefix_68;
      MR_String ConstnessPrefix_69;
      MR_String TypePrefix_70;
      MR_String TypeSuffix_71;
      MR_String QualGlobalVarNameStr_72;
      MR_String Var_81;
      MR_String Var_83;
      MR_Word next_value_of_HeadVar__5_5;

      mercury__io__nl_3_p_0(Stream_2);
      GlobalVarName_26 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_19, 0))));
      Context_27 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_19, 1))));
      Flags_28 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_19, 2))));
      Type_29 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_19, 3))));
      Initializer_30 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_19, 4))));
      IndentStr_32 = libs__indent__indent2_string_1_f_0(Indent_3);
      Access_66 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_28, 0))) >> 1)) & (MR_Integer) 1);
      Constness_67 = ((MR_Unsigned) ((MR_hl_field(0, Flags_28, 0))) & (MR_Integer) 1);
      switch (Access_66) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          AccessPrefix_68 = (MR_String) "static ";
          break;
        case (MR_Integer) 1:
          AccessPrefix_68 = (MR_String) "extern ";
          break;
      }
      switch (Constness_67) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ConstnessPrefix_69 = (MR_String) "const ";
          break;
        case (MR_Integer) 0:
          ConstnessPrefix_69 = (MR_String) "";
          break;
      }
      FlagsPrefix_33 = mercury__string__f_43_43_2_f_0(AccessPrefix_68, ConstnessPrefix_69);
      Var_36 = ml_backend__mlds__get_initializer_array_size_1_f_0(Initializer_30);
      ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0(Opts_1, Type_29, Var_36, &TypePrefix_70, &TypeSuffix_71);
      QualGlobalVarNameStr_72 = ml_backend__mlds_to_c_name__maybe_qual_global_var_name_to_string_for_c_2_f_0(ModuleName_4, GlobalVarName_26);
      Var_81 = mercury__string__f_43_43_2_f_0(QualGlobalVarNameStr_72, TypeSuffix_71);
      Var_83 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_81);
      TypeNameStr_34 = mercury__string__f_43_43_2_f_0(TypePrefix_70, Var_83);
      Var_37 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_1, 3))) >> 16)) & (MR_Integer) 1);
      ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_2, Var_37, Context_27);
      mercury__io__write_string_4_p_0(Stream_2, IndentStr_32);
      mercury__io__write_string_4_p_0(Stream_2, FlagsPrefix_33);
      mercury__io__write_string_4_p_0(Stream_2, TypeNameStr_34);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) ";\n");
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
ml_backend__mlds_to_c_global__mlds_output_alloc_site_defns_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_global__mlds_output_alloc_site_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_alloc_site_defns_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word MLDS_ModuleName_11,
  MR_Word AllocSites_12)
{
  if (!((AllocSites_12 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Integer NumAllocSites_16;
    MR_String IndentStr_17;
    MR_Word Var_27;
    MR_Unsigned Var_29;
    MR_String Var_45;
    MR_Box conv0_STATE_VARIABLE_IO_2_28;

    mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_1[0]), AllocSites_12, &NumAllocSites_16);
    IndentStr_17 = libs__indent__indent2_string_1_f_0(Indent_10);
    mercury__io__write_string_4_p_0(Stream_9, IndentStr_17);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "static MR_AllocSiteInfo MR_alloc_sites[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), NumAllocSites_16, &Var_45);
    mercury__io__write_string_4_p_0(Stream_9, Var_45);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "] = {\n");
    Var_29 = (Indent_10 + (MR_Unsigned) 1U);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_27, 0) = ((MR_Box) (&ml_backend__mlds_to_c_global_scalar_common_4[0]));
      MR_hl_field(0, Var_27, 1) = ((MR_Box) (ml_backend__mlds_to_c_global__mlds_output_alloc_site_defns_7_p_0_1));
      MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_27, 3) = ((MR_Box) (Opts_8));
      MR_hl_field(0, Var_27, 4) = ((MR_Box) (Stream_9));
      MR_hl_field(0, Var_27, 5) = ((MR_Box) (Var_29));
      MR_hl_field(0, Var_27, 6) = ((MR_Box) (MLDS_ModuleName_11));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_27, AllocSites_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_2_28);
    mercury__io__write_string_4_p_0(Stream_9, IndentStr_17);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
  }
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_alloc_site_decls_5_p_0(
  MR_Word Stream_6,
  MR_Unsigned Indent_7,
  MR_Word AllocSites_8)
{
  if (!((AllocSites_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Integer NumAllocSites_12;
    MR_String IndentStr_13;
    MR_String Var_28;

    mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_1[0]), AllocSites_8, &NumAllocSites_12);
    IndentStr_13 = libs__indent__indent2_string_1_f_0(Indent_7);
    mercury__io__write_string_4_p_0(Stream_6, IndentStr_13);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static MR_AllocSiteInfo MR_alloc_sites[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), NumAllocSites_12, &Var_28);
    mercury__io__write_string_4_p_0(Stream_6, Var_28);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "];\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defns_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_STATE_VARIABLE_RowNum_21;

  ml_backend__mlds_to_c_global__mlds_output_cell_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RowNum_21);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RowNum_21));
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defns_7_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Unsigned Indent_3,
  MR_String MangledModuleName_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word CellGroup_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word CellGroups_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word TypeNum_25 = ((MR_Word) ((MR_hl_field(0, CellGroup_19, 0))));
      MR_Word CellGroup_26 = ((MR_Word) ((MR_hl_field(0, CellGroup_19, 1))));
      MR_Integer TypeRawNum_27 = (MR_Integer) (TypeNum_25);
      MR_Word Type_28 = ((MR_Word) ((MR_hl_field(0, CellGroup_26, 0))));
      MR_Word RowCords_32 = ((MR_Word) ((MR_hl_field(0, CellGroup_26, 4))));
      MR_Word Rows_33;
      MR_Integer NumRows_34;
      MR_String IndentStr_35;
      MR_String TypePrefix_36;
      MR_String TypeSuffix_37;
      MR_Word Var_41;
      MR_Unsigned Var_44;
      MR_String Var_61;
      MR_String Var_66;
      MR_Box conv2_Var_38;
      MR_Box conv1_STATE_VARIABLE_IO_2_43;
      MR_Word next_value_of_HeadVar__5_5;

      Rows_33 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowCords_32);
      mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Rows_33, &NumRows_34);
      IndentStr_35 = libs__indent__indent2_string_1_f_0(Indent_3);
      ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0(Opts_1, Type_28, (MR_Word) ((MR_Unsigned) 0U), &TypePrefix_36, &TypeSuffix_37);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_2, IndentStr_35);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "static /* final */ const ");
      mercury__io__write_string_4_p_0(Stream_2, TypePrefix_36);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) " ");
      mercury__io__write_string_4_p_0(Stream_2, MangledModuleName_4);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "_vector_common_");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), TypeRawNum_27, &Var_61);
      mercury__io__write_string_4_p_0(Stream_2, Var_61);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "[");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), NumRows_34, &Var_66);
      mercury__io__write_string_4_p_0(Stream_2, Var_66);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "]");
      mercury__io__write_string_4_p_0(Stream_2, TypeSuffix_37);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) " = {\n");
      Var_44 = (Indent_3 + (MR_Unsigned) 1U);
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_41, 0) = ((MR_Box) (&ml_backend__mlds_to_c_global_scalar_common_3[1]));
        MR_hl_field(0, Var_41, 1) = ((MR_Box) (ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defns_7_p_0_1));
        MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_41, 3) = ((MR_Box) (Opts_1));
        MR_hl_field(0, Var_41, 4) = ((MR_Box) (Stream_2));
        MR_hl_field(0, Var_41, 5) = ((MR_Box) (Var_44));
      }
      mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_41, Rows_33, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_38, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_2_43);
      mercury__io__write_string_4_p_0(Stream_2, IndentStr_35);
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
ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_decls_8_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Unsigned Indent_3,
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
      MR_Word CellGroup_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word CellGroups_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word TypeNum_28 = ((MR_Word) ((MR_hl_field(0, CellGroup_22, 0))));
      MR_Word CellGroup_29 = ((MR_Word) ((MR_hl_field(0, CellGroup_22, 1))));
      MR_Integer TypeRawNum_30 = (MR_Integer) (TypeNum_28);
      MR_Word Type_31 = ((MR_Word) ((MR_hl_field(0, CellGroup_29, 0))));
      MR_Word StructDefn_32 = ((MR_Word) ((MR_hl_field(0, CellGroup_29, 1))));
      MR_Word Rows_35 = ((MR_Word) ((MR_hl_field(0, CellGroup_29, 4))));
      MR_Integer NumRows_36;
      MR_String IndentStr_37;
      MR_String TypePrefix_38;
      MR_String TypeSuffix_39;
      MR_String Var_69;
      MR_String Var_79;
      MR_Word next_value_of_HeadVar__6_6;

      NumRows_36 = mercury__cord__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Rows_35);
      IndentStr_37 = libs__indent__indent2_string_1_f_0(Indent_3);
      ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0(Opts_1, Type_31, (MR_Word) ((MR_Unsigned) 0U), &TypePrefix_38, &TypeSuffix_39);
      ml_backend__mlds_to_c_class__mlds_output_struct_defn_7_p_0(Opts_1, Stream_2, Indent_3, ModuleName_4, StructDefn_32);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_2, IndentStr_37);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "static /* final */ const ");
      mercury__io__write_string_4_p_0(Stream_2, TypePrefix_38);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) " ");
      mercury__io__write_string_4_p_0(Stream_2, MangledModuleName_5);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "_vector_common_");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), TypeRawNum_30, &Var_69);
      mercury__io__write_string_4_p_0(Stream_2, Var_69);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "[");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), NumRows_36, &Var_79);
      mercury__io__write_string_4_p_0(Stream_2, Var_79);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "]");
      mercury__io__write_string_4_p_0(Stream_2, TypeSuffix_39);
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
  MR_Integer conv0_STATE_VARIABLE_RowNum_21;

  ml_backend__mlds_to_c_global__mlds_output_cell_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RowNum_21);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RowNum_21));
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_defns_7_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Unsigned Indent_3,
  MR_String MangledModuleName_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word CellGroup_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word CellGroups_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word TypeNum_25 = ((MR_Word) ((MR_hl_field(0, CellGroup_19, 0))));
      MR_Word CellGroup_26 = ((MR_Word) ((MR_hl_field(0, CellGroup_19, 1))));
      MR_Integer TypeRawNum_27 = (MR_Integer) (TypeNum_25);
      MR_Word Type_28 = ((MR_Word) ((MR_hl_field(0, CellGroup_26, 0))));
      MR_Word InitArraySize_29 = ((MR_Word) ((MR_hl_field(0, CellGroup_26, 1))));
      MR_Word RowCords_32 = ((MR_Word) ((MR_hl_field(0, CellGroup_26, 4))));
      MR_Word Rows_33;
      MR_Integer NumRows_34;
      MR_String IndentStr_35;
      MR_String TypeNameStr_36;
      MR_Word Var_39;
      MR_Unsigned Var_42;
      MR_Box conv2_Var_37;
      MR_Box conv1_STATE_VARIABLE_IO_2_41;
      MR_Word next_value_of_HeadVar__5_5;

      Rows_33 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowCords_32);
      mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Rows_33, &NumRows_34);
      IndentStr_35 = libs__indent__indent2_string_1_f_0(Indent_3);
      TypeNameStr_36 = ml_backend__mlds_to_c_global__scalar_cell_group_type_and_name_to_string_for_c_6_f_0(Opts_1, MangledModuleName_4, TypeRawNum_27, Type_28, InitArraySize_29, NumRows_34);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_2, IndentStr_35);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "static /* final */ const ");
      mercury__io__write_string_4_p_0(Stream_2, TypeNameStr_36);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) " = {\n");
      Var_42 = (Indent_3 + (MR_Unsigned) 1U);
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_39, 0) = ((MR_Box) (&ml_backend__mlds_to_c_global_scalar_common_3[1]));
        MR_hl_field(0, Var_39, 1) = ((MR_Box) (ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_defns_7_p_0_1));
        MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_39, 3) = ((MR_Box) (Opts_1));
        MR_hl_field(0, Var_39, 4) = ((MR_Box) (Stream_2));
        MR_hl_field(0, Var_39, 5) = ((MR_Box) (Var_42));
      }
      mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_39, Rows_33, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_37, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_2_41);
      mercury__io__write_string_4_p_0(Stream_2, IndentStr_35);
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

static void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_decls_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__6_6;

  ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_struct_field_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_HeadVar__6_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
}

void MR_CALL 
ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_decls_7_p_0(
  MR_Word Opts_1,
  MR_Word Stream_2,
  MR_Unsigned Indent_3,
  MR_String MangledModuleName_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word CellGroup_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word CellGroups_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word TypeNum_25 = ((MR_Word) ((MR_hl_field(0, CellGroup_19, 0))));
      MR_Word CellGroup_26 = ((MR_Word) ((MR_hl_field(0, CellGroup_19, 1))));
      MR_Integer TypeRawNum_27 = (MR_Integer) (TypeNum_25);
      MR_Word Type_28 = ((MR_Word) ((MR_hl_field(0, CellGroup_26, 0))));
      MR_Word InitArraySize_29 = ((MR_Word) ((MR_hl_field(0, CellGroup_26, 1))));
      MR_Word Rows_32 = ((MR_Word) ((MR_hl_field(0, CellGroup_26, 4))));
      MR_Integer NumRows_34;
      MR_String TypeNameStr_35;
      MR_Word ElemTypes_33;
      MR_Word next_value_of_HeadVar__5_5;

      succeeded = ((((MR_tag((MR_Word) Type_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_28, 0)))) == (MR_Integer) 9)));
      if (succeeded)
      {
        ElemTypes_33 = ((MR_Word) ((MR_hl_field(3, Type_28, 1))));
        {
          MR_String IndentStr_46;
          MR_Word Var_50;
          MR_Unsigned Var_53;
          MR_String Var_66;
          MR_Box conv2_Var_47;
          MR_Box conv1_STATE_VARIABLE_IO_3_52;

          backend_libs__c_util__output_pragma_pack_push_3_p_0(Stream_2);
          IndentStr_46 = libs__indent__indent2_string_1_f_0(Indent_3);
          mercury__io__write_string_4_p_0(Stream_2, IndentStr_46);
          mercury__io__write_string_4_p_0(Stream_2, (MR_String) "struct ");
          mercury__io__write_string_4_p_0(Stream_2, MangledModuleName_4);
          mercury__io__write_string_4_p_0(Stream_2, (MR_String) "_scalar_cell_group_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), TypeRawNum_27, &Var_66);
          mercury__io__write_string_4_p_0(Stream_2, Var_66);
          mercury__io__write_string_4_p_0(Stream_2, (MR_String) " {\n");
          Var_53 = (Indent_3 + (MR_Unsigned) 1U);
          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_50, 0) = ((MR_Box) (&ml_backend__mlds_to_c_global_scalar_common_3[0]));
            MR_hl_field(0, Var_50, 1) = ((MR_Box) (ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_decls_7_p_0_1));
            MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_50, 3) = ((MR_Box) (Opts_1));
            MR_hl_field(0, Var_50, 4) = ((MR_Box) (Stream_2));
            MR_hl_field(0, Var_50, 5) = ((MR_Box) (Var_53));
          }
          mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, ElemTypes_33, ((MR_Box) ((MR_Integer) 1)), &conv2_Var_47, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_3_52);
          mercury__io__write_string_4_p_0(Stream_2, IndentStr_46);
          mercury__io__write_string_4_p_0(Stream_2, (MR_String) "};\n");
          backend_libs__c_util__output_pragma_pack_pop_3_p_0(Stream_2);
        }
      }
      NumRows_34 = mercury__cord__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Rows_32);
      TypeNameStr_35 = ml_backend__mlds_to_c_global__scalar_cell_group_type_and_name_to_string_for_c_6_f_0(Opts_1, MangledModuleName_4, TypeRawNum_27, Type_28, InitArraySize_29, NumRows_34);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\nstatic /* final */ const ");
      mercury__io__write_string_4_p_0(Stream_2, TypeNameStr_35);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) ";\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = CellGroups_20;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

static MR_String MR_CALL 
ml_backend__mlds_to_c_global__scalar_cell_group_type_and_name_to_string_for_c_6_f_0(
  MR_Word Opts_8,
  MR_String MangledModuleName_9,
  MR_Integer TypeRawNum_10,
  MR_Word Type_11,
  MR_Word InitArraySize_12,
  MR_Integer NumRows_13)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Type_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_11, 0)))) == (MR_Integer) 9)));
  MR_String Str_14;

  if (succeeded)
  {
    MR_String Var_43;
    MR_String Var_50;
    MR_String Var_52;
    MR_String Var_53;
    MR_String Var_60;
    MR_String Var_62;
    MR_String Var_63;
    MR_String Var_65;
    MR_String Var_66;
    MR_String Var_73;
    MR_String Var_75;
    MR_String Var_76;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), NumRows_13, &Var_43);
    Var_50 = mercury__string__f_43_43_2_f_0(Var_43, (MR_String) "]");
    Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_50);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), TypeRawNum_10, &Var_53);
    Var_60 = mercury__string__f_43_43_2_f_0(Var_53, Var_52);
    Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "_scalar_common_", Var_60);
    Var_63 = mercury__string__f_43_43_2_f_0(MangledModuleName_9, Var_62);
    Var_65 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_63);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), TypeRawNum_10, &Var_66);
    Var_73 = mercury__string__f_43_43_2_f_0(Var_66, Var_65);
    Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "_scalar_cell_group_", Var_73);
    Var_76 = mercury__string__f_43_43_2_f_0(MangledModuleName_9, Var_75);
    Str_14 = mercury__string__f_43_43_2_f_0((MR_String) "struct ", Var_76);
  }
  else
  {
    MR_String TypePrefix_16;
    MR_String TypeSuffix_17;
    MR_String Var_79;
    MR_String Var_80;
    MR_String Var_87;
    MR_String Var_89;
    MR_String Var_90;
    MR_String Var_97;
    MR_String Var_99;
    MR_String Var_100;
    MR_String Var_102;

    ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0(Opts_8, Type_11, InitArraySize_12, &TypePrefix_16, &TypeSuffix_17);
    Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "]", TypeSuffix_17);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), NumRows_13, &Var_80);
    Var_87 = mercury__string__f_43_43_2_f_0(Var_80, Var_79);
    Var_89 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_87);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_global_scalar_common_2[0]), TypeRawNum_10, &Var_90);
    Var_97 = mercury__string__f_43_43_2_f_0(Var_90, Var_89);
    Var_99 = mercury__string__f_43_43_2_f_0((MR_String) "_scalar_common_", Var_97);
    Var_100 = mercury__string__f_43_43_2_f_0(MangledModuleName_9, Var_99);
    Var_102 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_100);
    Str_14 = mercury__string__f_43_43_2_f_0(TypePrefix_16, Var_102);
  }
  return Str_14;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_global____Unify____maybe_blank_line_between_defns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_to_c_global____Unify____maybe_blank_line_between_defns_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_global____Compare____maybe_blank_line_between_defns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_to_c_global____Compare____maybe_blank_line_between_defns_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ml_backend__mlds_to_c_global__init(void)
{
}

void mercury__ml_backend__mlds_to_c_global__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&ml_backend__mlds_to_c_global__ml_backend__mlds_to_c_global__type_ctor_info_maybe_blank_line_between_defns_0);
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
