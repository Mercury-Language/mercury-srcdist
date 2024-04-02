/*
** Automatically generated from `mlds_to_cs_class.m'
** by the Mercury compiler,
** version rotd-2024-04-02
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


// :- module ml_backend.mlds_to_cs_class.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_cs_class__init
ENDINIT
*/

#include "ml_backend.mlds_to_cs_class.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.proc_requests.mih"
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
#include "ml_backend.mlds_to_cs_data.mih"
#include "ml_backend.mlds_to_cs_func.mih"
#include "ml_backend.mlds_to_cs_name.mih"
#include "ml_backend.mlds_to_cs_type.mih"
#include "ml_backend.mlds_to_cs_util.mih"
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
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_class__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_class__maybe__pti_maybe_1__plain_ml_backend__mlds__type_ctor_info_mlds_interface_id_0;

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_enum_constant_for_csharp__291__1_2_p_0(
  MR_Word Lang_17,
  MR_Word HeadVar__2_35);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_enum_class_defn_for_csharp__151__1_2_p_0(
  MR_Word Implements_16,
  MR_Word HeadVar__2_68);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_enum_class_defn_for_csharp__149__1_2_p_0(
  MR_Word Inherits_15,
  MR_Word HeadVar__2_64);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_class_defn_for_csharp__75__1_2_p_0(
  MR_Word MemberMethods_22,
  MR_Word HeadVar__2_46);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_constant_for_csharp_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_constant_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_String IndentStr_9,
  MR_Word EnumConstDefn_10);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_field_var_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word FieldVarDefn_10);

static MR_String MR_CALL 
ml_backend__mlds_to_cs_class__interface_to_string_for_csharp_1_f_0(
  MR_Word InterfaceId_3);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_struct_defn_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_env_defn_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_class_defn_for_csharp_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_class_defn_for_csharp_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_class_defn_for_csharp_6_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_class_defn_for_csharp_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_1(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_class__get_superclass_names_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs_class__get_superclass_names_3_f_0(
  MR_Word Info_5,
  MR_Word Inherits_6,
  MR_Word Interfaces_7);


static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_1[2][2];

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_2[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_3[5][5];

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_4[1][3];

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_5[3][9];

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_6[1][10];




static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_3[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds_to_cs_class__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_class__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_enum_class_inherits_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_enum_class_inherits_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds_to_cs_class__maybe__pti_maybe_1__plain_ml_backend__mlds__type_ctor_info_mlds_interface_id_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_class__maybe__pti_maybe_1__plain_ml_backend__mlds__type_ctor_info_mlds_interface_id_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_4[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_3[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_class__get_superclass_names_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_5[3][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_enum_const_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_class_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
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


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_class__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_class__maybe__pti_maybe_1__plain_ml_backend__mlds__type_ctor_info_mlds_interface_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0) }
};

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_enum_constant_for_csharp__291__1_2_p_0(
  MR_Word Lang_17,
  MR_Word HeadVar__2_35)
{
  MR_bool succeeded = (Lang_17 == HeadVar__2_35);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_enum_class_defn_for_csharp__151__1_2_p_0(
  MR_Word Implements_16,
  MR_Word HeadVar__2_68)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__mlds_to_cs_class_scalar_common_1[1]), ((MR_Box) (Implements_16)), ((MR_Box) (HeadVar__2_68)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_enum_class_defn_for_csharp__149__1_2_p_0(
  MR_Word Inherits_15,
  MR_Word HeadVar__2_64)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds____Unify____mlds_enum_class_inherits_0_0(Inherits_15, HeadVar__2_64);
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_class_defn_for_csharp__75__1_2_p_0(
  MR_Word MemberMethods_22,
  MR_Word HeadVar__2_46)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__mlds_to_cs_class_scalar_common_1[0]), ((MR_Box) (MemberMethods_22)), ((MR_Box) (HeadVar__2_46)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_constant_for_csharp_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_enum_constant_for_csharp__291__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_constant_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_String IndentStr_9,
  MR_Word EnumConstDefn_10)
{
  MR_bool succeeded;
  MR_Word VarName_12 = ((MR_Word) ((MR_hl_field(0, EnumConstDefn_10, (MR_Integer) 0))));
  MR_Word EnumConst_14 = ((MR_Word) ((MR_hl_field(0, EnumConstDefn_10, (MR_Integer) 2))));
  MR_String VarNameStr_15;

  VarNameStr_15 = ml_backend__mlds_to_cs_name__field_var_name_to_ll_string_for_csharp_1_f_0(VarName_12);
  if (((MR_tag((MR_Word) EnumConst_14)) == (MR_Integer) 1))
  {
    MR_Word Lang_17 = ((MR_Unsigned) ((MR_hl_field(1, EnumConst_14, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_String EnumNameStr_18 = ((MR_String) ((MR_hl_field(1, EnumConst_14, (MR_Integer) 1))));
    MR_Word Type_19 = ((MR_Word) ((MR_hl_field(1, EnumConst_14, (MR_Integer) 2))));
    MR_String TypeStr_20;
    MR_Word Var_32;

    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_32, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_3[4]));
      MR_hl_field(0, Var_32, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_enum_constant_for_csharp_6_p_0_1));
      MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_32, 3) = ((MR_Box) (Lang_17));
      MR_hl_field(0, Var_32, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__require__expect_3_p_0(Var_32, (MR_String) "predicate \140ml_backend.mlds_to_cs_class.output_enum_constant_for_csharp\'/6", (MR_String) "Lang != lang_csharp");
    TypeStr_20 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_7, Type_19);
    mercury__io__write_string_4_p_0(Stream_8, IndentStr_9);
    mercury__io__write_string_4_p_0(Stream_8, VarNameStr_15);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) " = (");
    mercury__io__write_string_4_p_0(Stream_8, TypeStr_20);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
    mercury__io__write_string_4_p_0(Stream_8, EnumNameStr_18);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n");
  }
  else
  {
    MR_Unsigned EnumUInt_16 = ((MR_Unsigned) ((MR_hl_field(0, EnumConst_14, (MR_Integer) 0))));
    MR_String Var_54;

    mercury__io__write_string_4_p_0(Stream_8, IndentStr_9);
    mercury__io__write_string_4_p_0(Stream_8, VarNameStr_15);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) " = ");
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_cs_class_scalar_common_2[0]), (MR_Integer) 1, EnumUInt_16, &Var_54);
    mercury__io__write_string_4_p_0(Stream_8, Var_54);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_field_var_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word FieldVarDefn_10)
{
  MR_Word FieldVarName_12 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, (MR_Integer) 0))));
  MR_Word Flags_14 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, (MR_Integer) 2))));
  MR_Word Type_15 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, (MR_Integer) 3))));
  MR_Word Initializer_16 = ((MR_Word) ((MR_hl_field(0, FieldVarDefn_10, (MR_Integer) 4))));
  MR_String IndentStr_18;
  MR_Word PerInstance_19;
  MR_Word Constness_20;
  MR_String PerInstancePrefix_22;
  MR_String ConstnessPrefix_23;
  MR_String TypeStr_24;
  MR_String FieldVarNameStr_25;
  MR_Unsigned Var_44;

  IndentStr_18 = libs__indent__indent2_string_1_f_0(Indent_9);
  PerInstance_19 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_14, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  Constness_20 = ((MR_Unsigned) ((MR_hl_field(0, Flags_14, (MR_Integer) 0))) & (MR_Integer) 1);
  switch (PerInstance_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      PerInstancePrefix_22 = (MR_String) "static ";
      break;
    case (MR_Integer) 1:
      PerInstancePrefix_22 = (MR_String) "";
      break;
  }
  switch (Constness_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      ConstnessPrefix_23 = (MR_String) "readonly ";
      break;
    case (MR_Integer) 0:
      ConstnessPrefix_23 = (MR_String) "";
      break;
  }
  TypeStr_24 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_7, Type_15);
  FieldVarNameStr_25 = ml_backend__mlds_to_cs_name__field_var_name_to_ll_string_for_csharp_1_f_0(FieldVarName_12);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_18);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "public ");
  mercury__io__write_string_4_p_0(Stream_8, PerInstancePrefix_22);
  mercury__io__write_string_4_p_0(Stream_8, ConstnessPrefix_23);
  mercury__io__write_string_4_p_0(Stream_8, TypeStr_24);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_8, FieldVarNameStr_25);
  Var_44 = (Indent_9 + (MR_Unsigned) 1U);
  ml_backend__mlds_to_cs_data__output_initializer_for_csharp_9_p_0(Info_7, Stream_8, (MR_Word) ((MR_Unsigned) 0U), Var_44, Type_15, Initializer_16, (MR_String) ";");
}

static MR_String MR_CALL 
ml_backend__mlds_to_cs_class__interface_to_string_for_csharp_1_f_0(
  MR_Word InterfaceId_3)
{
  MR_bool succeeded;
  MR_String String_4;
  MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(0, InterfaceId_3, (MR_Integer) 0))));
  MR_String ClassName_6 = ((MR_String) ((MR_hl_field(0, InterfaceId_3, (MR_Integer) 1))));
  MR_Word SymName_7;
  MR_String ModuleNameStr_8;

  SymName_7 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_5);
  parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(SymName_7, (MR_Integer) 0, (MR_String) ".", &ModuleNameStr_8);
  succeeded = (strcmp(ClassName_6, (MR_String) "MercuryType") == 0);
  if (succeeded)
    String_4 = mercury__string__f_43_43_2_f_0(ModuleNameStr_8, (MR_String) ".MercuryType");
  else
  {
    MR_String Var_28;
    MR_String Var_35;
    MR_String Var_37;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_class_scalar_common_2[0]), (MR_Integer) 0, &Var_28);
    Var_35 = mercury__string__f_43_43_2_f_0(ClassName_6, Var_28);
    Var_37 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_35);
    String_4 = mercury__string__f_43_43_2_f_0(ModuleNameStr_8, Var_37);
  }
  return String_4;
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_struct_defn_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_class__output_field_var_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_cs_class__output_struct_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word StructDefn_10)
{
  MR_String StructName_12 = ((MR_String) ((MR_hl_field(0, StructDefn_10, (MR_Integer) 0))));
  MR_Word MemberFields_14 = ((MR_Word) ((MR_hl_field(0, StructDefn_10, (MR_Integer) 2))));
  MR_Word MaybeCtor_15 = ((MR_Word) ((MR_hl_field(0, StructDefn_10, (MR_Integer) 3))));
  MR_Word Ctor_16;
  MR_Unsigned Indent1_17;
  MR_String IndentStr_18;
  MR_String StructNameStr_19;
  MR_Word Var_38;
  MR_Word Var_41;
  MR_Box conv0_STATE_VARIABLE_IO_39_39;

  if ((MaybeCtor_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_class.output_struct_defn_for_csharp\'/6", (MR_String) "MaybeCtor = no");
      return;
    }
  else
    Ctor_16 = ((MR_Word) ((MR_hl_field(1, MaybeCtor_15, (MR_Integer) 0))));
  Indent1_17 = (Indent_9 + (MR_Unsigned) 1U);
  IndentStr_18 = libs__indent__indent2_string_1_f_0(Indent_9);
  StructNameStr_19 = ml_backend__mlds_to_cs_name__unqual_class_name_to_ll_string_for_csharp_2_f_0(StructName_12, (MR_Integer) 0);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_18);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "private struct ");
  mercury__io__write_string_4_p_0(Stream_8, StructNameStr_19);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_18);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_5[0]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_struct_defn_for_csharp_6_p_0_1));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_38, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_38, 5) = ((MR_Box) (Indent1_17));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_38, MemberFields_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_39_39);
  mercury__io__nl_3_p_0(Stream_8);
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (StructName_12));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  ml_backend__mlds_to_cs_func__output_function_defn_for_csharp_7_p_0(Info_7, Stream_8, Indent1_17, Var_41, Ctor_16);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_18);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n\n");
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_env_defn_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_class__output_field_var_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_cs_class__output_env_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word EnvDefn_10)
{
  MR_String EnvName_12 = ((MR_String) ((MR_hl_field(0, EnvDefn_10, (MR_Integer) 0))));
  MR_Word MemberFields_14 = ((MR_Word) ((MR_hl_field(0, EnvDefn_10, (MR_Integer) 2))));
  MR_String IndentStr_15;
  MR_Unsigned Indent1_16;
  MR_String Indent1Str_17;
  MR_String EnvNameStr_18;
  MR_String EnvTypeStr_19;
  MR_Word Var_49;
  MR_Box conv0_STATE_VARIABLE_IO_50_50;

  IndentStr_15 = libs__indent__indent2_string_1_f_0(Indent_9);
  Indent1_16 = (Indent_9 + (MR_Unsigned) 1U);
  Indent1Str_17 = libs__indent__indent2_string_1_f_0(Indent1_16);
  EnvNameStr_18 = ml_backend__mlds_to_cs_name__unqual_class_name_to_ll_string_for_csharp_2_f_0(EnvName_12, (MR_Integer) 0);
  EnvTypeStr_19 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_7, (MR_Word) ((MR_Unsigned) 24U));
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_15);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[System.Serializable]\n");
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_15);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "private class ");
  mercury__io__write_string_4_p_0(Stream_8, EnvNameStr_18);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_8, Indent1Str_17);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ": ");
  mercury__io__write_string_4_p_0(Stream_8, EnvTypeStr_19);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_15);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_5[0]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_env_defn_for_csharp_6_p_0_1));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_49, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_49, 5) = ((MR_Box) (Indent1_16));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, MemberFields_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_50_50);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_15);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n\n");
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_class_defn_for_csharp_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_func__output_function_defn_for_csharp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_class_defn_for_csharp_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_class__output_enum_constant_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_class_defn_for_csharp_6_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_enum_class_defn_for_csharp__151__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_class_defn_for_csharp_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_enum_class_defn_for_csharp__149__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_cs_class__output_enum_class_defn_for_csharp_6_p_0(
  MR_Word Info0_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word EnumDefn_10)
{
  MR_bool succeeded;
  MR_String ClassName_12 = ((MR_String) ((MR_hl_field(0, EnumDefn_10, (MR_Integer) 0))));
  MR_Integer ClassArity_13 = ((MR_Integer) ((MR_hl_field(0, EnumDefn_10, (MR_Integer) 1))));
  MR_Word Inherits_15 = ((MR_Word) ((MR_hl_field(0, EnumDefn_10, (MR_Integer) 3))));
  MR_Word Implements_16 = ((MR_Word) ((MR_hl_field(0, EnumDefn_10, (MR_Integer) 4))));
  MR_Word TypeParams_17 = ((MR_Word) ((MR_hl_field(0, EnumDefn_10, (MR_Integer) 5))));
  MR_Word EnumConsts_19 = ((MR_Word) ((MR_hl_field(0, EnumDefn_10, (MR_Integer) 7))));
  MR_Word Ctors_20 = ((MR_Word) ((MR_hl_field(0, EnumDefn_10, (MR_Integer) 8))));
  MR_Word Info_21;
  MR_String IndentStr_22;
  MR_String ClassNameStr_27;
  MR_Word OutputGenerics_28;
  MR_String GenericTypeParamsStr_29;
  MR_Unsigned Indent1_30;
  MR_String Indent2Str_31;
  MR_Word CtorsAux_32;
  MR_Word Var_61;
  MR_Word Var_65;
  MR_Word Var_75;
  MR_Word Var_77;
  MR_Word Var_84 = ((MR_Word) ((MR_hl_field(0, Info0_7, (MR_Integer) 0))));
  MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, Info0_7, (MR_Integer) 2))));
  MR_String Var_89 = ((MR_String) ((MR_hl_field(0, Info0_7, (MR_Integer) 3))));
  MR_Word Var_90 = ((MR_Word) ((MR_hl_field(0, Info0_7, (MR_Integer) 4))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Info0_7, (MR_Integer) 1)));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Info0_7, (MR_Integer) 5)));
  MR_Box conv0_STATE_VARIABLE_IO_76_76;
  MR_Box conv1_STATE_VARIABLE_IO_78_78;

  {
    Info_21 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_21, 0) = ((MR_Box) (Var_84));
    MR_hl_field(0, Info_21, 1) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Info_21, 2) = ((MR_Box) (Var_88));
    MR_hl_field(0, Info_21, 3) = ((MR_Box) (Var_89));
    MR_hl_field(0, Info_21, 4) = ((MR_Box) (Var_90));
    MR_hl_field(0, Info_21, 5) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Info_21, 6) = ((MR_Box) (TypeParams_17));
  }
  IndentStr_22 = libs__indent__indent2_string_1_f_0(Indent_9);
  ClassNameStr_27 = ml_backend__mlds_to_cs_name__unqual_class_name_to_ll_string_for_csharp_2_f_0(ClassName_12, ClassArity_13);
  OutputGenerics_28 = ((((MR_Unsigned) ((MR_hl_field(0, Info_21, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
  switch (OutputGenerics_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      GenericTypeParamsStr_29 = (MR_String) "";
      break;
    case (MR_Integer) 0:
      GenericTypeParamsStr_29 = ml_backend__mlds_to_target_util__generic_tvars_to_string_1_f_0(TypeParams_17);
      break;
  }
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_22);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[System.Serializable]\n");
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_22);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "public ");
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "");
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "");
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "");
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "enum ");
  mercury__io__write_string_4_p_0(Stream_8, ClassNameStr_27);
  mercury__io__write_string_4_p_0(Stream_8, GenericTypeParamsStr_29);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_3[2]));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_enum_class_defn_for_csharp_6_p_0_1));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (Inherits_15));
    MR_hl_field(0, Var_61, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_61, (MR_String) "predicate \140ml_backend.mlds_to_cs_class.output_enum_class_defn_for_csharp\'/6", (MR_String) "Inherits != inherits_nothing");
  {
    Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_65, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_3[3]));
    MR_hl_field(0, Var_65, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_enum_class_defn_for_csharp_6_p_0_2));
    MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_65, 3) = ((MR_Box) (Implements_16));
    MR_hl_field(0, Var_65, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_65, (MR_String) "predicate \140ml_backend.mlds_to_cs_class.output_enum_class_defn_for_csharp\'/6", (MR_String) "Implements != no");
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_22);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
  Indent1_30 = (Indent_9 + (MR_Unsigned) 1U);
  Indent2Str_31 = libs__indent__indent2_string_1_f_0(Indent1_30);
  {
    Var_75 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_75, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_5[2]));
    MR_hl_field(0, Var_75, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_enum_class_defn_for_csharp_6_p_0_3));
    MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_75, 3) = ((MR_Box) (Info_21));
    MR_hl_field(0, Var_75, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_75, 5) = ((MR_Box) (Indent2Str_31));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_enum_const_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_75, EnumConsts_19, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_76_76);
  {
    CtorsAux_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CtorsAux_32, 0) = ((MR_Box) (ClassName_12));
    MR_hl_field(1, CtorsAux_32, 1) = ((MR_Box) (ClassArity_13));
  }
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_6[0]));
    MR_hl_field(0, Var_77, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_enum_class_defn_for_csharp_6_p_0_4));
    MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_77, 3) = ((MR_Box) (Info_21));
    MR_hl_field(0, Var_77, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_77, 5) = ((MR_Box) (Indent1_30));
    MR_hl_field(0, Var_77, 6) = ((MR_Box) (CtorsAux_32));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_77, Ctors_20, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_78_78);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_22);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n\n");
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_func__output_function_defn_for_csharp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_class__output_field_var_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_cs_class__IntroducedFrom__pred__output_class_defn_for_csharp__75__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0(
  MR_Word Info0_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word ClassDefn_10)
{
  MR_bool succeeded;
  MR_String ClassName_12 = ((MR_String) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 0))));
  MR_Integer ClassArity_13 = ((MR_Integer) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 1))));
  MR_Word Flags_15 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 3))));
  MR_Word Inherits_17 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 5))));
  MR_Word Implements_18 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 6))));
  MR_Word TypeParams_19 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 7))));
  MR_Word MemberFields_20 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 8))));
  MR_Word MemberClasses_21 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 9))));
  MR_Word MemberMethods_22 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 10))));
  MR_Word Ctors_23 = ((MR_Word) ((MR_hl_field(0, ClassDefn_10, (MR_Integer) 11))));
  MR_Word Info_24;
  MR_String IndentStr_25;
  MR_Word Access_26;
  MR_Word Overridability_27;
  MR_Word Constness_28;
  MR_String AccessPrefix_29;
  MR_String OverridePrefix_30;
  MR_String ConstnessPrefix_31;
  MR_String ClassNameStr_32;
  MR_Word OutputGenerics_33;
  MR_String GenericTypeParamsStr_34;
  MR_Word SuperClassNames_35;
  MR_Unsigned Indent1_39;
  MR_Word CtorsAux_40;
  MR_Word Var_43;
  MR_Word Var_81;
  MR_Word Var_83;
  MR_Word Var_86;
  MR_Word Var_93;
  MR_Word Var_97;
  MR_String Var_98;
  MR_Word Var_99;
  MR_Unsigned packed_word_0;
  MR_Unsigned packed_word_1;
  MR_Box conv0_STATE_VARIABLE_IO_82_82;
  MR_Box conv1_STATE_VARIABLE_IO_84_84;
  MR_Box conv2_STATE_VARIABLE_IO_87_87;

  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_43, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_3[1]));
    MR_hl_field(0, Var_43, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_1));
    MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_43, 3) = ((MR_Box) (MemberMethods_22));
    MR_hl_field(0, Var_43, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140ml_backend.mlds_to_cs_class.output_class_defn_for_csharp\'/6", (MR_String) "MemberMethods != []");
  Var_93 = ((MR_Word) ((MR_hl_field(0, Info0_7, (MR_Integer) 0))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Info0_7, (MR_Integer) 1)));
  Var_97 = ((MR_Word) ((MR_hl_field(0, Info0_7, (MR_Integer) 2))));
  Var_98 = ((MR_String) ((MR_hl_field(0, Info0_7, (MR_Integer) 3))));
  Var_99 = ((MR_Word) ((MR_hl_field(0, Info0_7, (MR_Integer) 4))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Info0_7, (MR_Integer) 5)));
  {
    Info_24 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_24, 0) = ((MR_Box) (Var_93));
    MR_hl_field(0, Info_24, 1) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Info_24, 2) = ((MR_Box) (Var_97));
    MR_hl_field(0, Info_24, 3) = ((MR_Box) (Var_98));
    MR_hl_field(0, Info_24, 4) = ((MR_Box) (Var_99));
    MR_hl_field(0, Info_24, 5) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Info_24, 6) = ((MR_Box) (TypeParams_19));
  }
  IndentStr_25 = libs__indent__indent2_string_1_f_0(Indent_9);
  Access_26 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_15, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
  Overridability_27 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_15, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  Constness_28 = ((MR_Unsigned) ((MR_hl_field(0, Flags_15, (MR_Integer) 0))) & (MR_Integer) 1);
  switch (Access_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      AccessPrefix_29 = (MR_String) "private ";
      break;
    case (MR_Integer) 0:
      AccessPrefix_29 = (MR_String) "public ";
      break;
  }
  switch (Overridability_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      OverridePrefix_30 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      OverridePrefix_30 = (MR_String) "sealed ";
      break;
  }
  switch (Constness_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      ConstnessPrefix_31 = (MR_String) "readonly ";
      break;
    case (MR_Integer) 0:
      ConstnessPrefix_31 = (MR_String) "";
      break;
  }
  ClassNameStr_32 = ml_backend__mlds_to_cs_name__unqual_class_name_to_ll_string_for_csharp_2_f_0(ClassName_12, ClassArity_13);
  OutputGenerics_33 = ((((MR_Unsigned) ((MR_hl_field(0, Info_24, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
  switch (OutputGenerics_33) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      GenericTypeParamsStr_34 = (MR_String) "";
      break;
    case (MR_Integer) 0:
      GenericTypeParamsStr_34 = ml_backend__mlds_to_target_util__generic_tvars_to_string_1_f_0(TypeParams_19);
      break;
  }
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_25);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[System.Serializable]\n");
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_25);
  mercury__io__write_string_4_p_0(Stream_8, AccessPrefix_29);
  mercury__io__write_string_4_p_0(Stream_8, OverridePrefix_30);
  mercury__io__write_string_4_p_0(Stream_8, ConstnessPrefix_31);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "class ");
  mercury__io__write_string_4_p_0(Stream_8, ClassNameStr_32);
  mercury__io__write_string_4_p_0(Stream_8, GenericTypeParamsStr_34);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  SuperClassNames_35 = ml_backend__mlds_to_cs_class__get_superclass_names_3_f_0(Info_24, Inherits_17, Implements_18);
  if (!((SuperClassNames_35 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String SuperClassesStr_38;

    SuperClassesStr_38 = mercury__string__join_list_2_f_0((MR_String) ", ", SuperClassNames_35);
    mercury__io__write_string_4_p_0(Stream_8, IndentStr_25);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "  : ");
    mercury__io__write_string_4_p_0(Stream_8, SuperClassesStr_38);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  }
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_25);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
  Indent1_39 = (Indent_9 + (MR_Unsigned) 1U);
  {
    Var_81 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_81, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_5[0]));
    MR_hl_field(0, Var_81, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_2));
    MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_81, 3) = ((MR_Box) (Info_24));
    MR_hl_field(0, Var_81, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_81, 5) = ((MR_Box) (Indent1_39));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_81, MemberFields_20, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_82_82);
  {
    Var_83 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_83, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_5[1]));
    MR_hl_field(0, Var_83, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_3));
    MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_83, 3) = ((MR_Box) (Info_24));
    MR_hl_field(0, Var_83, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_83, 5) = ((MR_Box) (Indent1_39));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_83, MemberClasses_21, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_84_84);
  mercury__io__nl_3_p_0(Stream_8);
  {
    CtorsAux_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CtorsAux_40, 0) = ((MR_Box) (ClassName_12));
    MR_hl_field(1, CtorsAux_40, 1) = ((MR_Box) (ClassArity_13));
  }
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_class_scalar_common_6[0]));
    MR_hl_field(0, Var_86, 1) = ((MR_Box) (ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0_4));
    MR_hl_field(0, Var_86, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_86, 3) = ((MR_Box) (Info_24));
    MR_hl_field(0, Var_86, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_86, 5) = ((MR_Box) (Indent1_39));
    MR_hl_field(0, Var_86, 6) = ((MR_Box) (CtorsAux_40));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_86, Ctors_23, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_87_87);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_25);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n\n");
}

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_class__get_superclass_names_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_String_4;

  conv0_String_4 = ml_backend__mlds_to_cs_class__interface_to_string_for_csharp_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_String_4));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs_class__get_superclass_names_3_f_0(
  MR_Word Info_5,
  MR_Word Inherits_6,
  MR_Word Interfaces_7)
{
  MR_Word Supers_8;
  MR_Word Supers0_9;

  Supers0_9 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_interface_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_cs_class_scalar_common_4[0]), Interfaces_7);
  if ((Inherits_6 == (MR_Word) ((MR_Unsigned) 0U)))
    Supers_8 = Supers0_9;
  else
  {
    MR_Word BaseClassId_10 = (MR_Word) (MR_body((MR_Word) (Inherits_6), (MR_Integer) 1));
    MR_Word BaseClassType_11 = (MR_Word) (MR_mkword(1, (MR_Word) (BaseClassId_10)));
    MR_String BaseClassTypeName_12;

    BaseClassTypeName_12 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_5, BaseClassType_11);
    {
      Supers_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Supers_8, 0) = ((MR_Box) (BaseClassTypeName_12));
      MR_hl_field(1, Supers_8, 1) = ((MR_Box) (Supers0_9));
    }
  }
  return Supers_8;
}

void mercury__ml_backend__mlds_to_cs_class__init(void)
{
}

void mercury__ml_backend__mlds_to_cs_class__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_cs_class__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_cs_class__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_cs_class.
