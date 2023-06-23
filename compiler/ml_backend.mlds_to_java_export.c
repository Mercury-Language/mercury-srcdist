/*
** Automatically generated from `mlds_to_java_export.m'
** by the Mercury compiler,
** version rotd-2023-06-23
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


// :- module ml_backend.mlds_to_java_export.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_java_export__init
ENDINIT
*/

#include "ml_backend.mlds_to_java_export.mih"


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
#include "term_context.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_java_data.mih"
#include "ml_backend.mlds_to_java_func.mih"
#include "ml_backend.mlds_to_java_name.mih"
#include "ml_backend.mlds_to_java_type.mih"
#include "ml_backend.mlds_to_java_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
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



struct ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0_s {
  MR_bool ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__succeeded;
  MR_Word ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Parameters_18;
  jmp_buf ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__commit_0;
  MR_Word ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Param_67;
  MR_Word ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Var_103;
  MR_Box ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__conv0_Param_67;
};


static MR_Word MR_CALL 
ml_backend__mlds_to_java_export__IntroducedFrom__func__write_export_call_for_java__235__1_1_f_0(
  MR_Word LambdaHeadVar__1_24);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_export__IntroducedFrom__pred__output_export_for_java__79__1_2_p_0(
  MR_Word Lang_12,
  MR_Word HeadVar__2_38);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exported_enum_constant_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word MLDS_Type_11,
  MR_Word ExportedConstant_12);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exported_enum_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exported_enum_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ExportedEnum_10);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_export__has_ptr_type_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ml_backend__mlds_to_java_export__assign_ref_output_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word Arg_12,
  MR_Integer N_13,
  MR_Integer * HeadVar__6_6);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_param_ref_out_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Argument_9,
  MR_Word Stream_10);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_6_p_0(
  MR_Word Info0_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word Export_10);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word Export_10);

static MR_Box MR_CALL 
ml_backend__mlds_to_java_export__output_export_no_ref_out_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__mlds_to_java_export__output_export_no_ref_out_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_no_ref_out_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word Export_10);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exported_enums_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exports_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_1[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_2[3][9];

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_3[3][5];

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_4[5][3];

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_5[1][4];

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_6[1][11];

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_7[1][10];




static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_1[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_2[3][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
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
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_3[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_4[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_3[0])),
    ((MR_Box) (ml_backend__mlds_to_java_export__output_export_no_ref_out_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_3[1])),
    ((MR_Box) (ml_backend__mlds_to_java_export__output_export_no_ref_out_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_5[0])),
    ((MR_Box) (ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_3[0])),
    ((MR_Box) (ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_3[1])),
    ((MR_Box) (ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_5[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_6[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_7[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
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


static MR_Word MR_CALL 
ml_backend__mlds_to_java_export__IntroducedFrom__func__write_export_call_for_java__235__1_1_f_0(
  MR_Word LambdaHeadVar__1_24)
{
  MR_Word LambdaHeadVar__2_25 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_24, (MR_Integer) 0))));

  return LambdaHeadVar__2_25;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_export__IntroducedFrom__pred__output_export_for_java__79__1_2_p_0(
  MR_Word Lang_12,
  MR_Word HeadVar__2_38)
{
  MR_bool succeeded = (Lang_12 == HeadVar__2_38);

  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exported_enum_constant_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word MLDS_Type_11,
  MR_Word ExportedConstant_12)
{
  MR_String IndentStr_14;
  MR_String Name_15;
  MR_Word Initializer_16;
  MR_String Var_25;
  MR_Integer Var_30;

  IndentStr_14 = libs__indent__indent2_string_1_f_0(Indent_10);
  Name_15 = ((MR_String) ((MR_hl_field(0, ExportedConstant_12, (MR_Integer) 0))));
  Initializer_16 = ((MR_Word) ((MR_hl_field(0, ExportedConstant_12, (MR_Integer) 1))));
  Var_25 = ml_backend__mlds_to_java_type__type_to_string_for_java_2_f_0(Info_8, MLDS_Type_11);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "public static final ");
  mercury__io__write_string_4_p_0(Stream_9, Var_25);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_9, Name_15);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
  Var_30 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
  ml_backend__mlds_to_java_data__output_initializer_body_for_java_9_p_0(Info_8, Stream_9, (MR_Integer) 0, Var_30, Initializer_16, (MR_Word) ((MR_Unsigned) 0U), (MR_String) ";");
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exported_enum_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_export__output_exported_enum_constant_for_java_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exported_enum_for_java_6_p_0(
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
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ClassName_16;
        MR_Integer ClassArity_17;
        MR_Word MLDS_Type_18;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Box conv0_STATE_VARIABLE_IO_20;

        ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_14, &ClassName_16, &ClassArity_17);
        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_21, 0) = ((MR_Box) (ClassName_16));
          MR_hl_field(0, Var_21, 1) = ((MR_Box) (ClassArity_17));
        }
        MLDS_Type_18 = (MR_Word) (MR_mkword(2, (MR_Word) (Var_21)));
        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_22, 0) = ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_7[0]));
          MR_hl_field(0, Var_22, 1) = ((MR_Box) (ml_backend__mlds_to_java_export__output_exported_enum_for_java_6_p_0_1));
          MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_22, 3) = ((MR_Box) (Info_7));
          MR_hl_field(0, Var_22, 4) = ((MR_Box) (Stream_8));
          MR_hl_field(0, Var_22, 5) = ((MR_Box) (Indent_9));
          MR_hl_field(0, Var_22, 6) = ((MR_Box) (MLDS_Type_18));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_22, ExportedConstants_15, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_20);
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_export__has_ptr_type_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  succeeded = ((((MR_tag((MR_Word) Var_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_5, (MR_Integer) 0)))) == (MR_Integer) 8)));
  if (succeeded)
  {
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_java_export__assign_ref_output_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word Arg_12,
  MR_Integer N_13,
  MR_Integer * HeadVar__6_6)
{
  MR_bool succeeded;
  MR_String IndentStr_15;
  MR_Word VarName_16;
  MR_Word Type_17;
  MR_String VarNameStr_19;
  MR_String TypeName_21;
  MR_String Var_44;
  MR_Word InnerType_20;

  *HeadVar__6_6 = (MR_Integer) ((MR_Unsigned) N_13 + (MR_Unsigned) 1);
  IndentStr_15 = libs__indent__indent2_string_1_f_0(Indent_11);
  VarName_16 = ((MR_Word) ((MR_hl_field(0, Arg_12, (MR_Integer) 0))));
  Type_17 = ((MR_Word) ((MR_hl_field(0, Arg_12, (MR_Integer) 1))));
  VarNameStr_19 = ml_backend__mlds_to_java_name__local_var_name_to_string_for_java_1_f_0(VarName_16);
  succeeded = ((((MR_tag((MR_Word) Type_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_17, (MR_Integer) 0)))) == (MR_Integer) 8)));
  if (succeeded)
  {
    InnerType_20 = ((MR_Word) ((MR_hl_field(3, Type_17, (MR_Integer) 1))));
    ml_backend__mlds_to_java_type__boxed_type_to_string_for_java_3_p_0(Info_9, InnerType_20, &TypeName_21);
  }
  else
    ml_backend__mlds_to_java_type__boxed_type_to_string_for_java_3_p_0(Info_9, Type_17, &TypeName_21);
  mercury__io__write_string_4_p_0(Stream_10, IndentStr_15);
  mercury__io__write_string_4_p_0(Stream_10, VarNameStr_19);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ".val = (");
  mercury__io__write_string_4_p_0(Stream_10, TypeName_21);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") results[");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_export_scalar_common_1[0]), N_13, &Var_44);
  mercury__io__write_string_4_p_0(Stream_10, Var_44);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "];\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_param_ref_out_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Argument_9,
  MR_Word Stream_10)
{
  MR_bool succeeded;
  MR_Word VarName_12 = ((MR_Word) ((MR_hl_field(0, Argument_9, (MR_Integer) 0))));
  MR_Word Type_13 = ((MR_Word) ((MR_hl_field(0, Argument_9, (MR_Integer) 1))));
  MR_String IndentStr_15;
  MR_String VarNameStr_16;
  MR_Word InnerType_17;

  IndentStr_15 = libs__indent__indent2_string_1_f_0(Indent_8);
  VarNameStr_16 = ml_backend__mlds_to_java_name__local_var_name_to_string_for_java_1_f_0(VarName_12);
  succeeded = ((((MR_tag((MR_Word) Type_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_13, (MR_Integer) 0)))) == (MR_Integer) 8)));
  if (succeeded)
  {
    InnerType_17 = ((MR_Word) ((MR_hl_field(3, Type_13, (MR_Integer) 1))));
    {
      MR_String InnerTypeStr_18;

      ml_backend__mlds_to_java_type__boxed_type_to_string_for_java_3_p_0(Info_7, InnerType_17, &InnerTypeStr_18);
      mercury__io__write_string_4_p_0(Stream_10, IndentStr_15);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "jmercury.runtime.Ref<");
      mercury__io__write_string_4_p_0(Stream_10, InnerTypeStr_18);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "> ");
      mercury__io__write_string_4_p_0(Stream_10, VarNameStr_16);
    }
  }
  else
  {
    MR_String TypeStr_19;

    TypeStr_19 = ml_backend__mlds_to_java_type__type_to_string_for_java_2_f_0(Info_7, Type_13);
    mercury__io__write_string_4_p_0(Stream_10, IndentStr_15);
    mercury__io__write_string_4_p_0(Stream_10, TypeStr_19);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_10, VarNameStr_16);
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_java_export__IntroducedFrom__pred__output_export_for_java__79__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_2(
  void * env_ptr_arg)
{
  struct ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0_s * env_ptr = (struct ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_4(
  void * env_ptr_arg)
{
  struct ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0_s * env_ptr = (struct ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Param_67 = ((MR_Word) ((env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__conv0_Param_67));
  ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_3(env_ptr);
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_3(
  void * env_ptr_arg)
{
  struct ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0_s * env_ptr = (struct ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_100 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Param_67, (MR_Integer) 0))));
    MR_Word Var_102;
    MR_Word Var_101;

    (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Var_103 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Param_67, (MR_Integer) 1))));
    Var_102 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Param_67, (MR_Integer) 2))));
    (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Var_103)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Var_103, (MR_Integer) 0)))) == (MR_Integer) 8)));
    if ((env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__succeeded)
    {
      Var_101 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Var_103, (MR_Integer) 1))));
      ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_2(env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_5(
  void * env_ptr_arg)
{
  struct ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0_s * env_ptr = (struct ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), &(env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__conv0_Param_67, (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Parameters_18, ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_4, env_ptr);
      (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_6_p_0(
  MR_Word Info0_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word Export_10)
{
  struct ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0_s env;

  {
    MR_Word Lang_12 = ((MR_Unsigned) ((MR_hl_field(0, Export_10, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_String ExportName_13 = ((MR_String) ((MR_hl_field(0, Export_10, (MR_Integer) 1))));
    MR_Word MLDS_Signature_15 = ((MR_Word) ((MR_hl_field(0, Export_10, (MR_Integer) 3))));
    MR_Word UnivQTVars_16 = ((MR_Word) ((MR_hl_field(0, Export_10, (MR_Integer) 4))));
    MR_Word ReturnTypes_19;
    MR_Word Info_20;
    MR_String IndentStr_21;
    MR_String UnivQTVarsStr_22;
    MR_String PadStr_23;
    MR_Word Var_35;
    MR_String Var_58;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_String Var_73;
    MR_Word Var_74;
    MR_Word Var_76;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Export_10, (MR_Integer) 2))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, Export_10, (MR_Integer) 5))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Export_10, (MR_Integer) 0)));
    MR_Word Var_75;
    MR_Word Var_77;
    MR_Unsigned packed_word_1;
    MR_Unsigned packed_word_2;

    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_35, 0) = ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_3[2]));
      MR_hl_field(0, Var_35, 1) = ((MR_Box) (ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_1));
      MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_35, 3) = ((MR_Box) (Lang_12));
      MR_hl_field(0, Var_35, 4) = ((MR_Box) ((MR_Integer) 2));
    }
    mercury__require__expect_3_p_0(Var_35, (MR_String) "predicate \140ml_backend.mlds_to_java_export.output_export_for_java\'/6", (MR_String) "foreign_export for language other than Java.");
    (env).ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Parameters_18 = ((MR_Word) ((MR_hl_field(0, MLDS_Signature_15, (MR_Integer) 0))));
    ReturnTypes_19 = ((MR_Word) ((MR_hl_field(0, MLDS_Signature_15, (MR_Integer) 1))));
    Var_68 = ((MR_Word) ((MR_hl_field(0, Info0_7, (MR_Integer) 0))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Info0_7, (MR_Integer) 1)));
    Var_69 = ((((MR_Unsigned) ((MR_hl_field(0, Info0_7, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    Var_70 = ((((MR_Unsigned) ((MR_hl_field(0, Info0_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    Var_71 = ((MR_Unsigned) ((MR_hl_field(0, Info0_7, (MR_Integer) 1))) & (MR_Integer) 1);
    Var_72 = ((MR_Word) ((MR_hl_field(0, Info0_7, (MR_Integer) 2))));
    Var_73 = ((MR_String) ((MR_hl_field(0, Info0_7, (MR_Integer) 3))));
    Var_74 = ((MR_Word) ((MR_hl_field(0, Info0_7, (MR_Integer) 4))));
    packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, Info0_7, (MR_Integer) 5)));
    Var_75 = ((((MR_Unsigned) ((MR_hl_field(0, Info0_7, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
    Var_76 = ((MR_Unsigned) ((MR_hl_field(0, Info0_7, (MR_Integer) 5))) & (MR_Integer) 3);
    Var_77 = ((MR_Word) ((MR_hl_field(0, Info0_7, (MR_Integer) 6))));
    {
      Info_20 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Info_20, 0) = ((MR_Box) (Var_68));
      MR_hl_field(0, Info_20, 1) = (MR_Box) (packed_word_1);
      MR_hl_field(0, Info_20, 2) = ((MR_Box) (Var_72));
      MR_hl_field(0, Info_20, 3) = ((MR_Box) (Var_73));
      MR_hl_field(0, Info_20, 4) = ((MR_Box) (Var_74));
      MR_hl_field(0, Info_20, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (MR_Unsigned) (Var_76)));
      MR_hl_field(0, Info_20, 6) = ((MR_Box) (UnivQTVars_16));
    }
    IndentStr_21 = libs__indent__indent2_string_1_f_0(Indent_9);
    UnivQTVarsStr_22 = ml_backend__mlds_to_target_util__generic_tvars_to_string_1_f_0(UnivQTVars_16);
    (env).ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__succeeded = (strcmp(UnivQTVarsStr_22, (MR_String) "") == 0);
    if ((env).ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__succeeded)
      PadStr_23 = (MR_String) "";
    else
      PadStr_23 = (MR_String) " ";
    mercury__io__write_string_4_p_0(Stream_8, IndentStr_21);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "public static");
    mercury__io__write_string_4_p_0(Stream_8, PadStr_23);
    mercury__io__write_string_4_p_0(Stream_8, UnivQTVarsStr_22);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
    libs__indent__write_indent2_4_p_0(Stream_8, Indent_9);
    if ((ReturnTypes_19 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "void");
    else
    {
      MR_Word Var_90 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_19, (MR_Integer) 1))));
      MR_Word Var_91 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_19, (MR_Integer) 0))));

      if ((Var_90 == (MR_Word) ((MR_Unsigned) 0U)))
        ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_20, Stream_8, Var_91);
      else
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "java.lang.Object []");
    }
    Var_58 = mercury__string__f_43_43_2_f_0((MR_String) " ", ExportName_13);
    mercury__io__write_string_4_p_0(Stream_8, Var_58);
    ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_5(&env);
    if ((env).ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__succeeded)
      if ((ReturnTypes_19 == (MR_Word) ((MR_Unsigned) 0U)))
        ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0(Info_20, Stream_8, Indent_9, Export_10);
      else
      {
        MR_Word Var_92 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_19, (MR_Integer) 1))));
        MR_Word Var_93 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_19, (MR_Integer) 0))));

        if ((Var_92 == (MR_Word) ((MR_Unsigned) 0U)))
          ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0(Info_20, Stream_8, Indent_9, Export_10);
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_export.output_export_for_java\'/6", (MR_String) "multiple return values");
            return;
          }
      }
    else
      ml_backend__mlds_to_java_export__output_export_no_ref_out_6_p_0(Info_20, Stream_8, Indent_9, Export_10);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv2_HeadVar__6_6;

  ml_backend__mlds_to_java_export__assign_ref_output_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_HeadVar__6_6);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__6_6));
}

static MR_Box MR_CALL 
ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = ml_backend__mlds_to_java_name__local_var_name_to_string_for_java_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_25;

  conv0_LambdaHeadVar__2_25 = ml_backend__mlds_to_java_export__IntroducedFrom__func__write_export_call_for_java__235__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_25));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_export__output_export_param_ref_out_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_java_export__has_ptr_type_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word Export_10)
{
  MR_bool succeeded;
  MR_Word QualFuncName_14 = ((MR_Word) ((MR_hl_field(0, Export_10, (MR_Integer) 2))));
  MR_Word MLDS_Signature_15 = ((MR_Word) ((MR_hl_field(0, Export_10, (MR_Integer) 3))));
  MR_Integer Indent1_18 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  MR_String IndentStr_19;
  MR_String Indent1Str_20;
  MR_Word Parameters_21;
  MR_Word ReturnTypes_22;
  MR_Word RefParams_23;
  MR_Word NonRefParams_24;
  MR_Integer FirstRefArg_25;
  MR_Word Var_48;
  MR_Word ModuleName_87;
  MR_Word FuncName_88;
  MR_String Qualifier_89;
  MR_String FuncNameStr_90;
  MR_Word ParamVars_91;
  MR_Word ParamVarStrs_92;
  MR_String ParamVarsStr_93;
  MR_Box conv4_Var_26;
  MR_Box conv3_STATE_VARIABLE_IO_49_49;

  IndentStr_19 = libs__indent__indent2_string_1_f_0(Indent_9);
  Indent1Str_20 = libs__indent__indent2_string_1_f_0(Indent1_18);
  Parameters_21 = ((MR_Word) ((MR_hl_field(0, MLDS_Signature_15, (MR_Integer) 0))));
  ReturnTypes_22 = ((MR_Word) ((MR_hl_field(0, MLDS_Signature_15, (MR_Integer) 1))));
  mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds_to_java_export_scalar_common_4[2]), Parameters_21, &RefParams_23, &NonRefParams_24);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
  if (!((Parameters_21 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_80;
    MR_Integer Var_83;

    mercury__io__nl_3_p_0(Stream_8);
    Var_83 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_80, 0) = ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_2[2]));
      MR_hl_field(0, Var_80, 1) = ((MR_Box) (ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0_2));
      MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_80, 3) = ((MR_Box) (Info_7));
      MR_hl_field(0, Var_80, 4) = ((MR_Box) (Var_83));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Var_80, (MR_String) ",\n", Parameters_21, Stream_8);
  }
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
  mercury__io__nl_3_p_0(Stream_8);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_19);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
  mercury__io__write_string_4_p_0(Stream_8, Indent1Str_20);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "java.lang.Object[] results = ");
  ModuleName_87 = ((MR_Word) ((MR_hl_field(0, QualFuncName_14, (MR_Integer) 0))));
  FuncName_88 = ((MR_Word) ((MR_hl_field(0, QualFuncName_14, (MR_Integer) 1))));
  Qualifier_89 = ml_backend__mlds_to_java_name__qualifier_to_string_for_java_2_f_0(ModuleName_87, (MR_Integer) 0);
  FuncNameStr_90 = ml_backend__mlds_to_java_name__function_name_to_string_for_java_1_f_0(FuncName_88);
  ParamVars_91 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), (MR_Word) (&ml_backend__mlds_to_java_export_scalar_common_4[3]), NonRefParams_24);
  ParamVarStrs_92 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_java_export_scalar_common_4[4]), ParamVars_91);
  ParamVarsStr_93 = mercury__string__join_list_2_f_0((MR_String) ", ", ParamVarStrs_92);
  mercury__io__write_string_4_p_0(Stream_8, Qualifier_89);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
  mercury__io__write_string_4_p_0(Stream_8, FuncNameStr_90);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
  mercury__io__write_string_4_p_0(Stream_8, ParamVarsStr_93);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
  succeeded = (ReturnTypes_22 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    FirstRefArg_25 = (MR_Integer) 0;
  else
  {
    MR_Word Var_44;
    MR_Word Var_45;

    succeeded = (ReturnTypes_22 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_44 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_22, (MR_Integer) 0))));
      Var_45 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_22, (MR_Integer) 1))));
      succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 16U));
      if (succeeded)
        succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      FirstRefArg_25 = (MR_Integer) 1;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_export.output_export_ref_out\'/6", (MR_String) "unexpected ReturnTypes");
        return;
      }
  }
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_6[0]));
    MR_hl_field(0, Var_48, 1) = ((MR_Box) (ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0_5));
    MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_48, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_48, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_48, 5) = ((MR_Box) (Indent1_18));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, RefParams_23, ((MR_Box) (FirstRefArg_25)), &conv4_Var_26, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_49_49);
  switch (FirstRefArg_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_4_p_0(Stream_8, Indent1Str_20);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "return ((java.lang.Boolean) results[0]).booleanValue();\n");
      }
      break;
  }
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_19);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n");
}

static MR_Box MR_CALL 
ml_backend__mlds_to_java_export__output_export_no_ref_out_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = ml_backend__mlds_to_java_name__local_var_name_to_string_for_java_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__mlds_to_java_export__output_export_no_ref_out_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_25;

  conv0_LambdaHeadVar__2_25 = ml_backend__mlds_to_java_export__IntroducedFrom__func__write_export_call_for_java__235__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_25));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_no_ref_out_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word Export_10)
{
  MR_Word QualFuncName_14 = ((MR_Word) ((MR_hl_field(0, Export_10, (MR_Integer) 2))));
  MR_Word MLDS_Signature_15 = ((MR_Word) ((MR_hl_field(0, Export_10, (MR_Integer) 3))));
  MR_Integer Indent1_18 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  MR_String IndentStr_19;
  MR_String Indent1Str_20;
  MR_Word Parameters_21;
  MR_Word ReturnTypes_22;
  MR_Word ModuleName_68;
  MR_Word FuncName_69;
  MR_String Qualifier_70;
  MR_String FuncNameStr_71;
  MR_Word ParamVars_72;
  MR_Word ParamVarStrs_73;
  MR_String ParamVarsStr_74;

  IndentStr_19 = libs__indent__indent2_string_1_f_0(Indent_9);
  Indent1Str_20 = libs__indent__indent2_string_1_f_0(Indent1_18);
  Parameters_21 = ((MR_Word) ((MR_hl_field(0, MLDS_Signature_15, (MR_Integer) 0))));
  ReturnTypes_22 = ((MR_Word) ((MR_hl_field(0, MLDS_Signature_15, (MR_Integer) 1))));
  ml_backend__mlds_to_java_func__output_params_for_java_6_p_0(Info_7, Stream_8, Indent1_18, Parameters_21);
  mercury__io__nl_3_p_0(Stream_8);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_19);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
  mercury__io__write_string_4_p_0(Stream_8, Indent1Str_20);
  if (!((ReturnTypes_22 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_22, (MR_Integer) 1))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_22, (MR_Integer) 0))));

    if ((Var_58 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_47;

      Var_47 = ml_backend__mlds_to_java_type__type_to_string_for_java_2_f_0(Info_7, Var_59);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "return (");
      mercury__io__write_string_4_p_0(Stream_8, Var_47);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
    }
    else
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "return ");
  }
  ModuleName_68 = ((MR_Word) ((MR_hl_field(0, QualFuncName_14, (MR_Integer) 0))));
  FuncName_69 = ((MR_Word) ((MR_hl_field(0, QualFuncName_14, (MR_Integer) 1))));
  Qualifier_70 = ml_backend__mlds_to_java_name__qualifier_to_string_for_java_2_f_0(ModuleName_68, (MR_Integer) 0);
  FuncNameStr_71 = ml_backend__mlds_to_java_name__function_name_to_string_for_java_1_f_0(FuncName_69);
  ParamVars_72 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), (MR_Word) (&ml_backend__mlds_to_java_export_scalar_common_4[0]), Parameters_21);
  ParamVarStrs_73 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_java_export_scalar_common_4[1]), ParamVars_72);
  ParamVarsStr_74 = mercury__string__join_list_2_f_0((MR_String) ", ", ParamVarStrs_73);
  mercury__io__write_string_4_p_0(Stream_8, Qualifier_70);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
  mercury__io__write_string_4_p_0(Stream_8, FuncNameStr_71);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
  mercury__io__write_string_4_p_0(Stream_8, ParamVarsStr_74);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_19);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exported_enums_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_export__output_exported_enum_for_java_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_java_export__output_exported_enums_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ExportedEnums_10)
{
  MR_Word Var_14;
  MR_Box conv0_STATE_VARIABLE_IO_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_2[1]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (ml_backend__mlds_to_java_export__output_exported_enums_for_java_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (Indent_9));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, ExportedEnums_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exports_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_export__output_export_for_java_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_java_export__output_exports_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word Exports_10)
{
  MR_Word Var_14;
  MR_Box conv0_STATE_VARIABLE_IO_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_2[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (ml_backend__mlds_to_java_export__output_exports_for_java_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (Indent_9));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, Exports_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

void mercury__ml_backend__mlds_to_java_export__init(void)
{
}

void mercury__ml_backend__mlds_to_java_export__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_java_export__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_java_export__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_java_export.
