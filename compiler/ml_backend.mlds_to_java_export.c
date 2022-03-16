/*
** Automatically generated from `mlds_to_java_export.m'
** by the Mercury compiler,
** version rotd-2022-03-16
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
#include "parse_tree.file_names.mih"
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
  MR_Word ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Param_60;
  MR_Word ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Var_90;
  MR_Box ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__conv0_Param_60;
};


static MR_bool MR_CALL 
ml_backend__mlds_to_java_export__IntroducedFrom__pred__output_export_for_java__79__1_2_p_0(
  MR_Word Lang_12,
  MR_Word HeadVar__2_35);

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
ml_backend__mlds_to_java_export__write_argument_name_for_java_4_p_0(
  MR_Word Arg_5,
  MR_Word Stream_6);

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
ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

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

static void MR_CALL 
ml_backend__mlds_to_java_export__write_export_call_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_java_export__write_export_call_for_java_5_p_0(
  MR_Word Stream_6,
  MR_Word QualFuncName_7,
  MR_Word Parameters_8);

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_no_ref_out_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_3[1][7];

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_4[3][3];

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_5[1][4];

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_6[1][11];

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_7[1][5];

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_8[1][10];




static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_1[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_2[3][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
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
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_3[1][7] = {
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

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_4[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_3[0])),
    ((MR_Box) (ml_backend__mlds_to_java_export__output_export_no_ref_out_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_3[0])),
    ((MR_Box) (ml_backend__mlds_to_java_export__write_export_call_for_java_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_5[0])),
    ((MR_Box) (ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0_1)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_7[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_export_scalar_common_8[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
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



static MR_bool MR_CALL 
ml_backend__mlds_to_java_export__IntroducedFrom__pred__output_export_for_java__79__1_2_p_0(
  MR_Word Lang_12,
  MR_Word HeadVar__2_35)
{
  MR_bool succeeded = (Lang_12 == HeadVar__2_35);

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
  MR_String Name_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), ExportedConstant_12, (MR_Integer) 0))));
  MR_Word Initializer_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedConstant_12, (MR_Integer) 1))));
  MR_Integer Var_28;

  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "public static final ");
  ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_8, MLDS_Type_11, Stream_9);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_9, Name_14);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
  Var_28 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
  ml_backend__mlds_to_java_data__output_initializer_body_for_java_9_p_0(Info_8, Stream_9, (MR_Integer) 0, Var_28, Initializer_15, (MR_Word) ((MR_Unsigned) 0U), (MR_String) ";");
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exported_enum_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_export__output_exported_enum_constant_for_java_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_exported_enum_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ExportedEnum_10)
{
  MR_Word Lang_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ExportedEnum_10, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word TypeCtor_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedEnum_10, (MR_Integer) 2))));
  MR_Word ExportedConstants_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedEnum_10, (MR_Integer) 3))));

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
        MR_Word Var_23;
        MR_Box conv0_STATE_VARIABLE_IO_20;

        ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_14, &ClassName_16, &ClassArity_17);
        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (ClassName_16));
          MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ClassArity_17));
          MR_hl_field(MR_mktag(0), Var_21, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
        }
        MLDS_Type_18 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_21)));
        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ml_backend__mlds_to_java_export__output_exported_enum_for_java_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Info_7));
          MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Stream_8));
          MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (Indent_9));
          MR_hl_field(MR_mktag(0), Var_23, 6) = ((MR_Box) (MLDS_Type_18));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, ExportedConstants_15, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_20);
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_export__has_ptr_type_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

  succeeded = ((((MR_tag((MR_Word) Var_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_5, (MR_Integer) 0)))) == (MR_Integer) 7)));
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
  MR_Word VarName_15;
  MR_Word Type_16;
  MR_String TypeString_19;
  MR_String Var_38;
  MR_Word InnerType_18;

  *HeadVar__6_6 = (MR_Integer) ((MR_Unsigned) N_13 + (MR_Unsigned) 1);
  VarName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_12, (MR_Integer) 0))));
  Type_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_12, (MR_Integer) 1))));
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
  ml_backend__mlds_to_java_name__output_local_var_name_for_java_4_p_0(Stream_10, VarName_15);
  succeeded = ((((MR_tag((MR_Word) Type_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_16, (MR_Integer) 0)))) == (MR_Integer) 7)));
  if (succeeded)
  {
    InnerType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_16, (MR_Integer) 1))));
    ml_backend__mlds_to_java_type__boxed_type_to_string_for_java_3_p_0(Info_9, InnerType_18, &TypeString_19);
  }
  else
    ml_backend__mlds_to_java_type__boxed_type_to_string_for_java_3_p_0(Info_9, Type_16, &TypeString_19);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ".val = (");
  mercury__io__write_string_4_p_0(Stream_10, TypeString_19);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") results[");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_export_scalar_common_1[0]), N_13, &Var_38);
  mercury__io__write_string_4_p_0(Stream_10, Var_38);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "];\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_export__write_argument_name_for_java_4_p_0(
  MR_Word Arg_5,
  MR_Word Stream_6)
{
  MR_Word VarName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_5, (MR_Integer) 0))));

  ml_backend__mlds_to_java_name__output_local_var_name_for_java_4_p_0(Stream_6, VarName_8);
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_param_ref_out_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Argument_9,
  MR_Word Stream_10)
{
  MR_bool succeeded;
  MR_Word VarName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Argument_9, (MR_Integer) 0))));
  MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Argument_9, (MR_Integer) 1))));
  MR_Word InnerType_15;

  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_8);
  succeeded = ((((MR_tag((MR_Word) Type_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_13, (MR_Integer) 0)))) == (MR_Integer) 7)));
  if (succeeded)
  {
    InnerType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_13, (MR_Integer) 1))));
    {
      MR_String InnerTypeString_16;

      ml_backend__mlds_to_java_type__boxed_type_to_string_for_java_3_p_0(Info_7, InnerType_15, &InnerTypeString_16);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "jmercury.runtime.Ref<");
      mercury__io__write_string_4_p_0(Stream_10, InnerTypeString_16);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "> ");
    }
  }
  else
  {
    ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_7, Type_13, Stream_10);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) " ");
  }
  ml_backend__mlds_to_java_name__output_local_var_name_for_java_4_p_0(Stream_10, VarName_12);
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_java_export__IntroducedFrom__pred__output_export_for_java__79__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

  (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Param_60 = ((MR_Word) ((env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__conv0_Param_60));
  ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_3(env_ptr);
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_3(
  void * env_ptr_arg)
{
  struct ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0_s * env_ptr = (struct ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Param_60, (MR_Integer) 0))));
    MR_Word Var_89;
    MR_Word Var_88;

    (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Param_60, (MR_Integer) 1))));
    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Param_60, (MR_Integer) 2))));
    (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Var_90)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Var_90, (MR_Integer) 0)))) == (MR_Integer) 7)));
    if ((env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__succeeded)
    {
      Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Var_90, (MR_Integer) 1))));
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
      mercury__list__member_2_p_1((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), &(env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__conv0_Param_60, (env_ptr)->ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Parameters_18, ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_4, env_ptr);
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
    MR_Word Lang_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Export_10, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_String ExportName_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Export_10, (MR_Integer) 1))));
    MR_Word MLDS_Signature_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_10, (MR_Integer) 3))));
    MR_Word UnivQTVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_10, (MR_Integer) 4))));
    MR_Word ReturnTypes_19;
    MR_Word Info_20;
    MR_Word Var_32;
    MR_String Var_51;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_String Var_66;
    MR_Word Var_67;
    MR_Word Var_69;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_10, (MR_Integer) 2))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_10, (MR_Integer) 5))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Export_10, (MR_Integer) 0)));
    MR_Word Var_68;
    MR_Word Var_70;
    MR_Unsigned packed_word_1;
    MR_Unsigned packed_word_2;

    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (Lang_12));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) ((MR_Integer) 2));
    }
    mercury__require__expect_3_p_0(Var_32, (MR_String) "predicate \140ml_backend.mlds_to_java_export.output_export_for_java\'/6", (MR_String) "foreign_export for language other than Java.");
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "public static ");
    ml_backend__mlds_to_target_util__output_generic_tvars_4_p_0(Stream_8, UnivQTVars_16);
    mercury__io__nl_3_p_0(Stream_8);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
    (env).ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__Parameters_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_Signature_15, (MR_Integer) 0))));
    ReturnTypes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_Signature_15, (MR_Integer) 1))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 0))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 1)));
    Var_62 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    Var_63 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    Var_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 1))) & (MR_Integer) 1);
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 2))));
    Var_66 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 3))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 4))));
    packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 5)));
    Var_68 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
    Var_69 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 5))) & (MR_Integer) 3);
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_7, (MR_Integer) 6))));
    {
      Info_20 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_20, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), Info_20, 1) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), Info_20, 2) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), Info_20, 3) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), Info_20, 4) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), Info_20, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (MR_Unsigned) (Var_69)));
      MR_hl_field(MR_mktag(0), Info_20, 6) = ((MR_Box) (UnivQTVars_16));
    }
    if ((ReturnTypes_19 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "void");
    else
    {
      MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_19, (MR_Integer) 1))));
      MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_19, (MR_Integer) 0))));

      if ((Var_83 == (MR_Word) ((MR_Unsigned) 0U)))
        ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_20, Var_84, Stream_8);
      else
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "java.lang.Object []");
    }
    Var_51 = mercury__string__f_43_43_2_f_0((MR_String) " ", ExportName_13);
    mercury__io__write_string_4_p_0(Stream_8, Var_51);
    ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_5(&env);
    if ((env).ml_backend__mlds_to_java_export__output_export_for_java_6_p_0_env_0__succeeded)
      if ((ReturnTypes_19 == (MR_Word) ((MR_Unsigned) 0U)))
        ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0(Info_20, Stream_8, Indent_9, Export_10);
      else
      {
        MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_19, (MR_Integer) 1))));
        MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_19, (MR_Integer) 0))));

        if ((Var_85 == (MR_Word) ((MR_Unsigned) 0U)))
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
ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__6_6;

  ml_backend__mlds_to_java_export__assign_ref_output_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_HeadVar__6_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
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

  ml_backend__mlds_to_java_export__output_export_param_ref_out_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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
  MR_Word QualFuncName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_10, (MR_Integer) 2))));
  MR_Word MLDS_Signature_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_10, (MR_Integer) 3))));
  MR_Word Parameters_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_Signature_15, (MR_Integer) 0))));
  MR_Word ReturnTypes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_Signature_15, (MR_Integer) 1))));
  MR_Word RefParams_20;
  MR_Word NonRefParams_21;
  MR_Integer FirstRefArg_22;
  MR_Integer Var_33;
  MR_Word Var_43;
  MR_Integer Var_45;
  MR_Box conv2_Var_23;
  MR_Box conv1_STATE_VARIABLE_IO_44_44;

  mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds_to_java_export_scalar_common_4[2]), Parameters_18, &RefParams_20, &NonRefParams_21);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
  if (!((Parameters_18 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_75;
    MR_Integer Var_78;

    mercury__io__nl_3_p_0(Stream_8);
    Var_78 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_2[2]));
      MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (Info_7));
      MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) (Var_78));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Var_75, (MR_String) ",\n", Parameters_18, Stream_8);
  }
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
  mercury__io__nl_3_p_0(Stream_8);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
  Var_33 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Var_33);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "java.lang.Object[] results = ");
  ml_backend__mlds_to_java_export__write_export_call_for_java_5_p_0(Stream_8, QualFuncName_14, NonRefParams_21);
  succeeded = (ReturnTypes_19 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    FirstRefArg_22 = (MR_Integer) 0;
  else
  {
    MR_Word Var_39;
    MR_Word Var_40;

    succeeded = (ReturnTypes_19 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_19, (MR_Integer) 0))));
      Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_19, (MR_Integer) 1))));
      succeeded = (Var_39 == (MR_Word) ((MR_Unsigned) 16U));
      if (succeeded)
        succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      FirstRefArg_22 = (MR_Integer) 1;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_export.output_export_ref_out\'/6", (MR_String) "unexpected ReturnTypes");
        return;
      }
  }
  Var_45 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_6[0]));
    MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (ml_backend__mlds_to_java_export__output_export_ref_out_6_p_0_3));
    MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Info_7));
    MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(MR_mktag(0), Var_43, 5) = ((MR_Box) (Var_45));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_43, RefParams_20, ((MR_Box) (FirstRefArg_22)), &conv2_Var_23, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_44_44);
  switch (FirstRefArg_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Var_47 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);

        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Var_47);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "return ((java.lang.Boolean) results[0]).booleanValue();\n");
      }
      break;
  }
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_export__write_export_call_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_export__write_argument_name_for_java_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ml_backend__mlds_to_java_export__write_export_call_for_java_5_p_0(
  MR_Word Stream_6,
  MR_Word QualFuncName_7,
  MR_Word Parameters_8)
{
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_7, (MR_Integer) 0))));
  MR_Word FuncName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_7, (MR_Integer) 1))));

  ml_backend__mlds_to_java_name__output_qual_name_prefix_java_5_p_0(Stream_6, ModuleName_10, (MR_Integer) 0);
  ml_backend__mlds_to_java_name__output_function_name_for_java_4_p_0(Stream_6, FuncName_11);
  mercury__io__write_char_4_p_0(Stream_6, (MR_Char) 40);
  parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds_to_java_export_scalar_common_4[1]), (MR_String) ", ", Parameters_8, Stream_6);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ");\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_no_ref_out_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_export__write_argument_name_for_java_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ml_backend__mlds_to_java_export__output_export_no_ref_out_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word Export_10)
{
  MR_Word QualFuncName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_10, (MR_Integer) 2))));
  MR_Word MLDS_Signature_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_10, (MR_Integer) 3))));
  MR_Word Parameters_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_Signature_15, (MR_Integer) 0))));
  MR_Word ReturnTypes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_Signature_15, (MR_Integer) 1))));
  MR_Integer Var_26 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  MR_Integer Var_33;
  MR_Word ModuleName_57;
  MR_Word FuncName_58;

  ml_backend__mlds_to_java_func__output_params_for_java_6_p_0(Info_7, Stream_8, Var_26, Parameters_18);
  mercury__io__nl_3_p_0(Stream_8);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
  Var_33 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Var_33);
  if (!((ReturnTypes_19 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_19, (MR_Integer) 1))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReturnTypes_19, (MR_Integer) 0))));

    if ((Var_49 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "return (");
      ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_7, Var_50, Stream_8);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
    }
    else
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "return ");
  }
  ModuleName_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_14, (MR_Integer) 0))));
  FuncName_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_14, (MR_Integer) 1))));
  ml_backend__mlds_to_java_name__output_qual_name_prefix_java_5_p_0(Stream_8, ModuleName_57, (MR_Integer) 0);
  ml_backend__mlds_to_java_name__output_function_name_for_java_4_p_0(Stream_8, FuncName_58);
  mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
  parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds_to_java_export_scalar_common_4[0]), (MR_String) ", ", Parameters_18, Stream_8);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
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

  ml_backend__mlds_to_java_export__output_exported_enum_for_java_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_2[1]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (ml_backend__mlds_to_java_export__output_exported_enums_for_java_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Info_7));
    MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (Indent_9));
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

  ml_backend__mlds_to_java_export__output_export_for_java_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&ml_backend__mlds_to_java_export_scalar_common_2[0]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (ml_backend__mlds_to_java_export__output_exports_for_java_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Info_7));
    MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (Indent_9));
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
