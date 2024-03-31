/*
** Automatically generated from `mlds_to_c_export.m'
** by the Mercury compiler,
** version rotd-2024-03-31
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


// :- module ml_backend.mlds_to_c_export.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_c_export__init
ENDINIT
*/

#include "ml_backend.mlds_to_c_export.mih"


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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
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
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c_func.mih"
#include "ml_backend.mlds_to_c_name.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_exported_enum_constant_hashdef__422__1_2_p_0(
  MR_Word Lang_12,
  MR_Word HeadVar__2_31);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__204__1_1_p_0(
  MR_Word LambdaHeadVar__1_41);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__199__1_1_p_0(
  MR_Word LambdaHeadVar__1_39);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_func_name__83__1_2_p_0(
  MR_Word Lang_14,
  MR_Word HeadVar__2_28);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn__60__1_2_p_0(
  MR_Word Lang_14,
  MR_Word HeadVar__2_26);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_exported_enum_constant_hashdef_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_exported_enum_constant_hashdef_4_p_0(
  MR_Word Stream_5,
  MR_Word ExportedConstant_6);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_export_enum_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Unsigned _Indent_9,
  MR_Word ExportedEnum_10);

static void MR_CALL 
ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_51_93_95_48_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word ExportedEnum_10);

static MR_String MR_CALL 
ml_backend__mlds_to_c_export__pragma_export_arg_to_string_2_f_0(
  MR_Word Opts_4,
  MR_Word Arg_5);

static MR_String MR_CALL 
ml_backend__mlds_to_c_export__pragma_output_arg_to_unbox_string_1_f_0(
  MR_Word Arg_3);

static MR_String MR_CALL 
ml_backend__mlds_to_c_export__pragma_input_arg_to_box_string_1_f_0(
  MR_Word Arg_3);

static MR_String MR_CALL 
ml_backend__mlds_to_c_export__pragma_output_arg_to_decl_2_f_0(
  MR_Word Opts_4,
  MR_Word Arg_5);

static MR_String MR_CALL 
ml_backend__mlds_to_c_export__pragma_input_arg_to_decl_2_f_0(
  MR_Word Opts_4,
  MR_Word Arg_5);

static void MR_CALL 
ml_backend__mlds_to_c_export__export_type_to_prefix_suffix_ignore_opts_4_p_0(
  MR_Word _Opts_5,
  MR_Word MLDS_Type_6,
  MR_String * TypePrefix_7,
  MR_String * TypeSuffix_8);

static void MR_CALL 
ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_111_114_116_95_116_121_112_101_95_116_111_95_112_114_101_102_105_120_95_115_117_102_102_105_120_95_105_103_110_111_114_101_95_111_112_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word MLDS_Type_6,
  MR_String * TypePrefix_7,
  MR_String * TypeSuffix_8);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_export_enums_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_7_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_7_p_0_1(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word FuncName_9,
  MR_Word Signature_10);

static MR_Box MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word FuncName_9,
  MR_Word Parameters_10);

static MR_String MR_CALL 
ml_backend__mlds_to_c_export__export_type_to_string_for_c_1_f_0(
  MR_Word MLDS_Type_3);


static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_1[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_2[1][6];

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_3[1][4];

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_4[6][3];

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_5[3][5];

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_6[3][7];

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_7[1][9];




static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_1[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_2[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_3[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_4[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_3[0])),
    ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_3[0])),
    ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_5[0])),
    ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_5[0])),
    ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_5[1])),
    ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_6[1])),
    ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_5[3][5] = {
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
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

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_6[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_7[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0)),
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
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_exported_enum_constant_hashdef__422__1_2_p_0(
  MR_Word Lang_12,
  MR_Word HeadVar__2_31)
{
  MR_bool succeeded = (Lang_12 == HeadVar__2_31);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__204__1_1_p_0(
  MR_Word LambdaHeadVar__1_41)
{
  MR_bool succeeded;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Type_124 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_41, (MR_Integer) 1))));

  succeeded = ((((MR_tag((MR_Word) Type_124)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_124, (MR_Integer) 0)))) == (MR_Integer) 10)));
  if (succeeded)
  {
    Var_42 = ((MR_Word) ((MR_hl_field(3, Type_124, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) Var_42)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_42, (MR_Integer) 0)))) == (MR_Integer) 7)));
    if (succeeded)
    {
      Var_43 = ((MR_Word) ((MR_hl_field(3, Var_42, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_Integer) 0);
      if (succeeded)
      {
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__199__1_1_p_0(
  MR_Word LambdaHeadVar__1_39)
{
  MR_bool succeeded;
  MR_Word Type_17 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_39, (MR_Integer) 1))));
  MR_Word Var_40;

  succeeded = ((((MR_tag((MR_Word) Type_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_17, (MR_Integer) 0)))) == (MR_Integer) 7)));
  if (succeeded)
  {
    Var_40 = ((MR_Word) ((MR_hl_field(3, Type_17, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 0);
    if (succeeded)
    {
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_func_name__83__1_2_p_0(
  MR_Word Lang_14,
  MR_Word HeadVar__2_28)
{
  MR_bool succeeded = (Lang_14 == HeadVar__2_28);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn__60__1_2_p_0(
  MR_Word Lang_14,
  MR_Word HeadVar__2_26)
{
  MR_bool succeeded = (Lang_14 == HeadVar__2_26);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_exported_enum_constant_hashdef_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_exported_enum_constant_hashdef__422__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_exported_enum_constant_hashdef_4_p_0(
  MR_Word Stream_5,
  MR_Word ExportedConstant_6)
{
  MR_bool succeeded;
  MR_String Name_8 = ((MR_String) ((MR_hl_field(0, ExportedConstant_6, (MR_Integer) 0))));
  MR_Word Initializer_9 = ((MR_Word) ((MR_hl_field(0, ExportedConstant_6, (MR_Integer) 1))));
  MR_Integer N_10;
  MR_Word Var_17;
  MR_Word Var_18;

  succeeded = ((MR_tag((MR_Word) Initializer_9)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_17 = ((MR_Word) ((MR_hl_field(1, Initializer_9, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(3, Var_17, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) Var_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_18, (MR_Integer) 0)))) == (MR_Integer) 9)));
      if (succeeded)
        N_10 = ((MR_Integer) ((MR_hl_field(3, Var_18, (MR_Integer) 1))));
    }
  }
  if (succeeded)
  {
    MR_String Var_48;

    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "#define ");
    mercury__io__write_string_4_p_0(Stream_5, Name_8);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_1[0]), N_10, &Var_48);
    mercury__io__write_string_4_p_0(Stream_5, Var_48);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
  }
  else
  {
    MR_Word Lang_12;
    MR_String Value_13;
    MR_Word Var_26;
    MR_Word Var_27;

    succeeded = ((MR_tag((MR_Word) Initializer_9)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_26 = ((MR_Word) ((MR_hl_field(1, Initializer_9, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_27 = ((MR_Word) ((MR_hl_field(3, Var_26, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_27, (MR_Integer) 0)))) == (MR_Integer) 14)));
        if (succeeded)
        {
          Lang_12 = ((MR_Unsigned) ((MR_hl_field(3, Var_27, (MR_Integer) 1))) & (MR_Integer) 3);
          Value_13 = ((MR_String) ((MR_hl_field(3, Var_27, (MR_Integer) 2))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_28;

      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_28, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_5[2]));
        MR_hl_field(0, Var_28, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_exported_enum_constant_hashdef_4_p_0_1));
        MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_28, 3) = ((MR_Box) (Lang_12));
        MR_hl_field(0, Var_28, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_28, (MR_String) "predicate \140ml_backend.mlds_to_c_export.mlds_output_exported_enum_constant_hashdef\'/4", (MR_String) "mlconst_foreign for language other than C.");
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "#define ");
      mercury__io__write_string_4_p_0(Stream_5, Name_8);
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
      mercury__io__write_string_4_p_0(Stream_5, Value_13);
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.mlds_output_exported_enum_constant_hashdef\'/4", (MR_String) "tag for export enumeration is not enum or foreign");
        return;
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_export_enum_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Unsigned _Indent_9,
  MR_Word ExportedEnum_10)
{
  ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_51_93_95_48_6_p_0(Opts_7, Stream_8, ExportedEnum_10);
}

static void MR_CALL 
ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_export__mlds_output_exported_enum_constant_hashdef_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_51_93_95_48_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word ExportedEnum_10)
{
  MR_Word Lang_12 = ((MR_Unsigned) ((MR_hl_field(0, ExportedEnum_10, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, ExportedEnum_10, (MR_Integer) 1))));
  MR_Word ExportConstants_15 = ((MR_Word) ((MR_hl_field(0, ExportedEnum_10, (MR_Integer) 3))));

  switch (Lang_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_7, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
        MR_Word Var_20;
        MR_Box conv0_STATE_VARIABLE_IO_17;

        ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_8, Var_18, Context_13);
        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_20, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_6[2]));
          MR_hl_field(0, Var_20, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_51_93_95_48_6_p_0_1));
          MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_20, 3) = ((MR_Box) (Stream_8));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_20, ExportConstants_15, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
    case (MR_Integer) 2:
      {
      }
      break;
  }
}

static MR_String MR_CALL 
ml_backend__mlds_to_c_export__pragma_export_arg_to_string_2_f_0(
  MR_Word Opts_4,
  MR_Word Arg_5)
{
  MR_bool succeeded;
  MR_String ArgStr_6;
  MR_Word LocalVarName_7 = ((MR_Word) ((MR_hl_field(0, Arg_5, (MR_Integer) 0))));
  MR_Word Type_8 = ((MR_Word) ((MR_hl_field(0, Arg_5, (MR_Integer) 1))));
  MR_Word BoxedLocalVarName_10;
  MR_String Name_20;
  MR_Integer Seq_21;
  MR_Word Var_15;

  succeeded = ((MR_tag((MR_Word) LocalVarName_7)) == (MR_Integer) 1);
  if (succeeded)
  {
    Name_20 = ((MR_String) ((MR_hl_field(1, LocalVarName_7, (MR_Integer) 0))));
    Seq_21 = ((MR_Integer) ((MR_hl_field(1, LocalVarName_7, (MR_Integer) 1))));
    {
      BoxedLocalVarName_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, BoxedLocalVarName_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, BoxedLocalVarName_10, 1) = ((MR_Box) (Name_20));
      MR_hl_field(3, BoxedLocalVarName_10, 2) = ((MR_Box) (Seq_21));
    }
  }
  else
  {
    MR_String NameStr_22;
    MR_Word Var_23;

    NameStr_22 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_7);
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (NameStr_22));
    }
    {
      BoxedLocalVarName_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, BoxedLocalVarName_10, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, BoxedLocalVarName_10, 1) = ((MR_Box) (Var_23));
    }
  }
  succeeded = ((((MR_tag((MR_Word) Type_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_8, (MR_Integer) 0)))) == (MR_Integer) 7)));
  if (succeeded)
  {
    Var_15 = ((MR_Word) ((MR_hl_field(3, Type_8, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
    if (succeeded)
    {
    }
  }
  if (succeeded)
    ArgStr_6 = ml_backend__mlds_to_c_name__local_var_name_to_string_for_c_1_f_0(BoxedLocalVarName_10);
  else
  {
    MR_Word Var_16;
    MR_Word Var_17;

    succeeded = ((((MR_tag((MR_Word) Type_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_8, (MR_Integer) 0)))) == (MR_Integer) 10)));
    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(3, Type_8, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_16, (MR_Integer) 0)))) == (MR_Integer) 7)));
      if (succeeded)
      {
        Var_17 = ((MR_Word) ((MR_hl_field(3, Var_16, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
        if (succeeded)
        {
        }
      }
    }
    if (succeeded)
    {
      MR_String Var_19;

      Var_19 = ml_backend__mlds_to_c_name__local_var_name_to_string_for_c_1_f_0(BoxedLocalVarName_10);
      ArgStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "&", Var_19);
    }
    else
    {
      MR_String CastPrefix_13;
      MR_String LocalVarNameStr_14;

      CastPrefix_13 = ml_backend__mlds_to_c_type__cast_to_prefix_string_for_c_2_f_0(Opts_4, Type_8);
      LocalVarNameStr_14 = ml_backend__mlds_to_c_name__local_var_name_to_string_for_c_1_f_0(LocalVarName_7);
      ArgStr_6 = mercury__string__f_43_43_2_f_0(CastPrefix_13, LocalVarNameStr_14);
    }
  }
  return ArgStr_6;
}

static MR_String MR_CALL 
ml_backend__mlds_to_c_export__pragma_output_arg_to_unbox_string_1_f_0(
  MR_Word Arg_3)
{
  MR_bool succeeded;
  MR_String UnboxStr_4;
  MR_Word LocalVarName_5 = ((MR_Word) ((MR_hl_field(0, Arg_3, (MR_Integer) 0))));
  MR_Word PtrType_6 = ((MR_Word) ((MR_hl_field(0, Arg_3, (MR_Integer) 1))));
  MR_Word Type_8;
  MR_String TypeStr_9;
  MR_Word BoxedLocalVarName_10;
  MR_String BoxedLocalVarNameStr_11;
  MR_String LocalVarNameStr_12;
  MR_String Var_22;
  MR_String Var_24;
  MR_String Var_25;
  MR_String Var_27;
  MR_String Var_28;
  MR_String TypePrefix_34;
  MR_Word Type_30;
  MR_String Name_74;
  MR_Integer Seq_75;

  succeeded = ((((MR_tag((MR_Word) PtrType_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrType_6, (MR_Integer) 0)))) == (MR_Integer) 10)));
  if (succeeded)
  {
    Type_30 = ((MR_Word) ((MR_hl_field(3, PtrType_6, (MR_Integer) 1))));
    Type_8 = Type_30;
  }
  else
  {
    MR_Box conv0_Type_8;

    conv0_Type_8 = mercury__require__unexpected_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_String) "function \140ml_backend.mlds_to_c_export.pointed_to_type\'/1", (MR_String) "not pointer");
    Type_8 = ((MR_Word) (conv0_Type_8));
  }
  switch (MR_tag((MR_Word) Type_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Type_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
          TypePrefix_34 = (MR_String) "MR_Word";
          break;
        case (MR_Integer) 1:
          TypePrefix_34 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 0U));
          break;
        case (MR_Integer) 2:
          TypePrefix_34 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 4U));
          break;
        case (MR_Integer) 3:
          TypePrefix_34 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 8U));
          break;
        case (MR_Integer) 4:
          TypePrefix_34 = (MR_String) "MR_bool";
          break;
        case (MR_Integer) 9:
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.export_type_to_prefix_suffix\'/3", (MR_String) "unknown_type");
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      TypePrefix_34 = (MR_String) "MR_Word";
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 5:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 11:
          TypePrefix_34 = (MR_String) "MR_Word";
          break;
        case (MR_Integer) 3:
          {
            MR_Word MerType_39 = ((MR_Word) ((MR_hl_field(3, Type_8, (MR_Integer) 1))));

            TypePrefix_34 = backend_libs__foreign__maybe_foreign_type_to_c_string_2_f_0(MerType_39, (MR_Word) ((MR_Unsigned) 0U));
          }
          break;
        case (MR_Integer) 4:
          TypePrefix_34 = (MR_String) "MR_ArrayPtr";
          break;
        case (MR_Integer) 6:
          {
            MR_Word IntType_50 = ((MR_Unsigned) ((MR_hl_field(3, Type_8, (MR_Integer) 1))) & (MR_Integer) 15);
            MR_Word Var_58;

            {
              Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_58, 0) = (MR_Box) ((MR_Unsigned) (IntType_50));
            }
            TypePrefix_34 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0(Var_58);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ForeignType_51 = ((MR_Word) ((MR_hl_field(3, Type_8, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ForeignType_51)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, ForeignType_51, (MR_Integer) 0))));

                  TypePrefix_34 = (MR_String) (Var_62);
                }
                break;
              case (MR_Integer) 1:
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.export_type_to_prefix_suffix\'/3", (MR_String) "java foreign_type");
                break;
              case (MR_Integer) 2:
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.export_type_to_prefix_suffix\'/3", (MR_String) "csharp foreign_type");
                break;
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word BaseType_54 = ((MR_Word) ((MR_hl_field(3, Type_8, (MR_Integer) 1))));
            MR_String BaseTypeStr_55;

            BaseTypeStr_55 = ml_backend__mlds_to_c_export__export_type_to_string_for_c_1_f_0(BaseType_54);
            TypePrefix_34 = mercury__string__f_43_43_2_f_0(BaseTypeStr_55, (MR_String) " *");
          }
          break;
        case (MR_Integer) 12:
          TypePrefix_34 = (MR_String) "MR_Word";
          break;
      }
      break;
  }
  succeeded = (strcmp((MR_String) "", (MR_String) "") == 0);
  if (succeeded)
    TypeStr_9 = TypePrefix_34;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_c_export.export_type_to_string_for_c\'/1", (MR_String) "TypeSuffix is not empty");
  succeeded = ((MR_tag((MR_Word) LocalVarName_5)) == (MR_Integer) 1);
  if (succeeded)
  {
    Name_74 = ((MR_String) ((MR_hl_field(1, LocalVarName_5, (MR_Integer) 0))));
    Seq_75 = ((MR_Integer) ((MR_hl_field(1, LocalVarName_5, (MR_Integer) 1))));
    {
      BoxedLocalVarName_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, BoxedLocalVarName_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, BoxedLocalVarName_10, 1) = ((MR_Box) (Name_74));
      MR_hl_field(3, BoxedLocalVarName_10, 2) = ((MR_Box) (Seq_75));
    }
  }
  else
  {
    MR_String NameStr_76;
    MR_Word Var_77;

    NameStr_76 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_5);
    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (NameStr_76));
    }
    {
      BoxedLocalVarName_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, BoxedLocalVarName_10, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, BoxedLocalVarName_10, 1) = ((MR_Box) (Var_77));
    }
  }
  BoxedLocalVarNameStr_11 = ml_backend__mlds_to_c_name__local_var_name_to_string_for_c_1_f_0(BoxedLocalVarName_10);
  LocalVarNameStr_12 = ml_backend__mlds_to_c_name__local_var_name_to_string_for_c_1_f_0(LocalVarName_5);
  Var_22 = mercury__string__f_43_43_2_f_0(LocalVarNameStr_12, (MR_String) ");\n");
  Var_24 = mercury__string__f_43_43_2_f_0((MR_String) ", *", Var_22);
  Var_25 = mercury__string__f_43_43_2_f_0(BoxedLocalVarNameStr_11, Var_24);
  Var_27 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_25);
  Var_28 = mercury__string__f_43_43_2_f_0(TypeStr_9, Var_27);
  UnboxStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", Var_28);
  return UnboxStr_4;
}

static MR_String MR_CALL 
ml_backend__mlds_to_c_export__pragma_input_arg_to_box_string_1_f_0(
  MR_Word Arg_3)
{
  MR_bool succeeded;
  MR_String BoxStr_4;
  MR_Word LocalVarName_5 = ((MR_Word) ((MR_hl_field(0, Arg_3, (MR_Integer) 0))));
  MR_Word Type_6 = ((MR_Word) ((MR_hl_field(0, Arg_3, (MR_Integer) 1))));
  MR_String TypeStr_8;
  MR_Word BoxedLocalVarName_9;
  MR_String LocalVarNameStr_10;
  MR_String BoxedLocalVarNameStr_11;
  MR_String Var_21;
  MR_String Var_23;
  MR_String Var_24;
  MR_String Var_26;
  MR_String Var_27;
  MR_String TypePrefix_29;
  MR_String Name_69;
  MR_Integer Seq_70;

  switch (MR_tag((MR_Word) Type_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Type_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
          TypePrefix_29 = (MR_String) "MR_Word";
          break;
        case (MR_Integer) 1:
          TypePrefix_29 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 0U));
          break;
        case (MR_Integer) 2:
          TypePrefix_29 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 4U));
          break;
        case (MR_Integer) 3:
          TypePrefix_29 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 8U));
          break;
        case (MR_Integer) 4:
          TypePrefix_29 = (MR_String) "MR_bool";
          break;
        case (MR_Integer) 9:
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.export_type_to_prefix_suffix\'/3", (MR_String) "unknown_type");
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      TypePrefix_29 = (MR_String) "MR_Word";
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 5:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 11:
          TypePrefix_29 = (MR_String) "MR_Word";
          break;
        case (MR_Integer) 3:
          {
            MR_Word MerType_34 = ((MR_Word) ((MR_hl_field(3, Type_6, (MR_Integer) 1))));

            TypePrefix_29 = backend_libs__foreign__maybe_foreign_type_to_c_string_2_f_0(MerType_34, (MR_Word) ((MR_Unsigned) 0U));
          }
          break;
        case (MR_Integer) 4:
          TypePrefix_29 = (MR_String) "MR_ArrayPtr";
          break;
        case (MR_Integer) 6:
          {
            MR_Word IntType_45 = ((MR_Unsigned) ((MR_hl_field(3, Type_6, (MR_Integer) 1))) & (MR_Integer) 15);
            MR_Word Var_53;

            {
              Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_53, 0) = (MR_Box) ((MR_Unsigned) (IntType_45));
            }
            TypePrefix_29 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0(Var_53);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ForeignType_46 = ((MR_Word) ((MR_hl_field(3, Type_6, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ForeignType_46)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, ForeignType_46, (MR_Integer) 0))));

                  TypePrefix_29 = (MR_String) (Var_57);
                }
                break;
              case (MR_Integer) 1:
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.export_type_to_prefix_suffix\'/3", (MR_String) "java foreign_type");
                break;
              case (MR_Integer) 2:
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.export_type_to_prefix_suffix\'/3", (MR_String) "csharp foreign_type");
                break;
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word BaseType_49 = ((MR_Word) ((MR_hl_field(3, Type_6, (MR_Integer) 1))));
            MR_String BaseTypeStr_50;

            BaseTypeStr_50 = ml_backend__mlds_to_c_export__export_type_to_string_for_c_1_f_0(BaseType_49);
            TypePrefix_29 = mercury__string__f_43_43_2_f_0(BaseTypeStr_50, (MR_String) " *");
          }
          break;
        case (MR_Integer) 12:
          TypePrefix_29 = (MR_String) "MR_Word";
          break;
      }
      break;
  }
  succeeded = (strcmp((MR_String) "", (MR_String) "") == 0);
  if (succeeded)
    TypeStr_8 = TypePrefix_29;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_c_export.export_type_to_string_for_c\'/1", (MR_String) "TypeSuffix is not empty");
  succeeded = ((MR_tag((MR_Word) LocalVarName_5)) == (MR_Integer) 1);
  if (succeeded)
  {
    Name_69 = ((MR_String) ((MR_hl_field(1, LocalVarName_5, (MR_Integer) 0))));
    Seq_70 = ((MR_Integer) ((MR_hl_field(1, LocalVarName_5, (MR_Integer) 1))));
    {
      BoxedLocalVarName_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, BoxedLocalVarName_9, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, BoxedLocalVarName_9, 1) = ((MR_Box) (Name_69));
      MR_hl_field(3, BoxedLocalVarName_9, 2) = ((MR_Box) (Seq_70));
    }
  }
  else
  {
    MR_String NameStr_71;
    MR_Word Var_72;

    NameStr_71 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_5);
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (NameStr_71));
    }
    {
      BoxedLocalVarName_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, BoxedLocalVarName_9, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, BoxedLocalVarName_9, 1) = ((MR_Box) (Var_72));
    }
  }
  LocalVarNameStr_10 = ml_backend__mlds_to_c_name__local_var_name_to_string_for_c_1_f_0(LocalVarName_5);
  BoxedLocalVarNameStr_11 = ml_backend__mlds_to_c_name__local_var_name_to_string_for_c_1_f_0(BoxedLocalVarName_9);
  Var_21 = mercury__string__f_43_43_2_f_0(BoxedLocalVarNameStr_11, (MR_String) ");\n");
  Var_23 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_21);
  Var_24 = mercury__string__f_43_43_2_f_0(LocalVarNameStr_10, Var_23);
  Var_26 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_24);
  Var_27 = mercury__string__f_43_43_2_f_0(TypeStr_8, Var_26);
  BoxStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_BOX_FOREIGN_TYPE(", Var_27);
  return BoxStr_4;
}

static MR_String MR_CALL 
ml_backend__mlds_to_c_export__pragma_output_arg_to_decl_2_f_0(
  MR_Word Opts_4,
  MR_Word Arg_5)
{
  MR_bool succeeded;
  MR_String DeclStr_6;
  MR_Word LocalVarName_7 = ((MR_Word) ((MR_hl_field(0, Arg_5, (MR_Integer) 0))));
  MR_Word PtrType_8 = ((MR_Word) ((MR_hl_field(0, Arg_5, (MR_Integer) 1))));
  MR_Word Type_10;
  MR_Word BoxedLocalVarName_11;
  MR_String BoxedLocalVarNameStr_12;
  MR_String TypePrefix_13;
  MR_String TypeSuffix_14;
  MR_String Var_25;
  MR_String Var_26;
  MR_String Var_28;
  MR_String Var_29;
  MR_Word Type_31;
  MR_String Name_35;
  MR_Integer Seq_36;

  succeeded = ((((MR_tag((MR_Word) PtrType_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrType_8, (MR_Integer) 0)))) == (MR_Integer) 10)));
  if (succeeded)
  {
    Type_31 = ((MR_Word) ((MR_hl_field(3, PtrType_8, (MR_Integer) 1))));
    Type_10 = Type_31;
  }
  else
  {
    MR_Box conv0_Type_10;

    conv0_Type_10 = mercury__require__unexpected_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_String) "function \140ml_backend.mlds_to_c_export.pointed_to_type\'/1", (MR_String) "not pointer");
    Type_10 = ((MR_Word) (conv0_Type_10));
  }
  succeeded = ((MR_tag((MR_Word) LocalVarName_7)) == (MR_Integer) 1);
  if (succeeded)
  {
    Name_35 = ((MR_String) ((MR_hl_field(1, LocalVarName_7, (MR_Integer) 0))));
    Seq_36 = ((MR_Integer) ((MR_hl_field(1, LocalVarName_7, (MR_Integer) 1))));
    {
      BoxedLocalVarName_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, BoxedLocalVarName_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, BoxedLocalVarName_11, 1) = ((MR_Box) (Name_35));
      MR_hl_field(3, BoxedLocalVarName_11, 2) = ((MR_Box) (Seq_36));
    }
  }
  else
  {
    MR_String NameStr_37;
    MR_Word Var_38;

    NameStr_37 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_7);
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (NameStr_37));
    }
    {
      BoxedLocalVarName_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, BoxedLocalVarName_11, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, BoxedLocalVarName_11, 1) = ((MR_Box) (Var_38));
    }
  }
  BoxedLocalVarNameStr_12 = ml_backend__mlds_to_c_name__local_var_name_to_string_for_c_1_f_0(BoxedLocalVarName_11);
  ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0(Opts_4, Type_10, (MR_Word) ((MR_Unsigned) 0U), &TypePrefix_13, &TypeSuffix_14);
  Var_25 = mercury__string__f_43_43_2_f_0(TypeSuffix_14, (MR_String) ";\n");
  Var_26 = mercury__string__f_43_43_2_f_0(BoxedLocalVarNameStr_12, Var_25);
  Var_28 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_26);
  Var_29 = mercury__string__f_43_43_2_f_0(TypePrefix_13, Var_28);
  DeclStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_29);
  return DeclStr_6;
}

static MR_String MR_CALL 
ml_backend__mlds_to_c_export__pragma_input_arg_to_decl_2_f_0(
  MR_Word Opts_4,
  MR_Word Arg_5)
{
  MR_bool succeeded;
  MR_String DeclStr_6;
  MR_Word LocalVarName_7 = ((MR_Word) ((MR_hl_field(0, Arg_5, (MR_Integer) 0))));
  MR_Word Type_8 = ((MR_Word) ((MR_hl_field(0, Arg_5, (MR_Integer) 1))));
  MR_Word BoxedLocalVarName_10;
  MR_String BoxedLocalVarNameStr_11;
  MR_String TypePrefix_12;
  MR_String TypeSuffix_13;
  MR_String Var_24;
  MR_String Var_25;
  MR_String Var_27;
  MR_String Var_28;
  MR_String Name_30;
  MR_Integer Seq_31;

  succeeded = ((MR_tag((MR_Word) LocalVarName_7)) == (MR_Integer) 1);
  if (succeeded)
  {
    Name_30 = ((MR_String) ((MR_hl_field(1, LocalVarName_7, (MR_Integer) 0))));
    Seq_31 = ((MR_Integer) ((MR_hl_field(1, LocalVarName_7, (MR_Integer) 1))));
    {
      BoxedLocalVarName_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, BoxedLocalVarName_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, BoxedLocalVarName_10, 1) = ((MR_Box) (Name_30));
      MR_hl_field(3, BoxedLocalVarName_10, 2) = ((MR_Box) (Seq_31));
    }
  }
  else
  {
    MR_String NameStr_32;
    MR_Word Var_33;

    NameStr_32 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_7);
    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (NameStr_32));
    }
    {
      BoxedLocalVarName_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, BoxedLocalVarName_10, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, BoxedLocalVarName_10, 1) = ((MR_Box) (Var_33));
    }
  }
  BoxedLocalVarNameStr_11 = ml_backend__mlds_to_c_name__local_var_name_to_string_for_c_1_f_0(BoxedLocalVarName_10);
  ml_backend__mlds_to_c_type__type_to_prefix_suffix_for_c_5_p_0(Opts_4, Type_8, (MR_Word) ((MR_Unsigned) 0U), &TypePrefix_12, &TypeSuffix_13);
  Var_24 = mercury__string__f_43_43_2_f_0(TypeSuffix_13, (MR_String) ";\n");
  Var_25 = mercury__string__f_43_43_2_f_0(BoxedLocalVarNameStr_11, Var_24);
  Var_27 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_25);
  Var_28 = mercury__string__f_43_43_2_f_0(TypePrefix_12, Var_27);
  DeclStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_28);
  return DeclStr_6;
}

static void MR_CALL 
ml_backend__mlds_to_c_export__export_type_to_prefix_suffix_ignore_opts_4_p_0(
  MR_Word _Opts_5,
  MR_Word MLDS_Type_6,
  MR_String * TypePrefix_7,
  MR_String * TypeSuffix_8)
{
  ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_111_114_116_95_116_121_112_101_95_116_111_95_112_114_101_102_105_120_95_115_117_102_102_105_120_95_105_103_110_111_114_101_95_111_112_116_115_95_95_91_49_93_95_48_4_p_0(MLDS_Type_6, TypePrefix_7, TypeSuffix_8);
}

static void MR_CALL 
ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_111_114_116_95_116_121_112_101_95_116_111_95_112_114_101_102_105_120_95_115_117_102_102_105_120_95_105_103_110_111_114_101_95_111_112_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word MLDS_Type_6,
  MR_String * TypePrefix_7,
  MR_String * TypeSuffix_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) MLDS_Type_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(MLDS_Type_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
          *TypePrefix_7 = (MR_String) "MR_Word";
          break;
        case (MR_Integer) 1:
          *TypePrefix_7 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 0U));
          break;
        case (MR_Integer) 2:
          *TypePrefix_7 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 4U));
          break;
        case (MR_Integer) 3:
          *TypePrefix_7 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 8U));
          break;
        case (MR_Integer) 4:
          *TypePrefix_7 = (MR_String) "MR_bool";
          break;
        case (MR_Integer) 9:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.export_type_to_prefix_suffix\'/3", (MR_String) "unknown_type");
            return;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *TypePrefix_7 = (MR_String) "MR_Word";
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 5:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 11:
          *TypePrefix_7 = (MR_String) "MR_Word";
          break;
        case (MR_Integer) 3:
          {
            MR_Word MerType_10 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));

            *TypePrefix_7 = backend_libs__foreign__maybe_foreign_type_to_c_string_2_f_0(MerType_10, (MR_Word) ((MR_Unsigned) 0U));
          }
          break;
        case (MR_Integer) 4:
          *TypePrefix_7 = (MR_String) "MR_ArrayPtr";
          break;
        case (MR_Integer) 6:
          {
            MR_Word IntType_21 = ((MR_Unsigned) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))) & (MR_Integer) 15);
            MR_Word Var_29;

            {
              Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_29, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
            }
            *TypePrefix_7 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0(Var_29);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ForeignType_22 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ForeignType_22)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, ForeignType_22, (MR_Integer) 0))));

                  *TypePrefix_7 = (MR_String) (Var_33);
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.export_type_to_prefix_suffix\'/3", (MR_String) "java foreign_type");
                  return;
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.export_type_to_prefix_suffix\'/3", (MR_String) "csharp foreign_type");
                  return;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word BaseType_25 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_6, (MR_Integer) 1))));
            MR_String BaseTypeStr_26;
            MR_String TypePrefix_45;

            switch (MR_tag((MR_Word) BaseType_25)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(BaseType_25)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                    TypePrefix_45 = (MR_String) "MR_Word";
                    break;
                  case (MR_Integer) 1:
                    TypePrefix_45 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 0U));
                    break;
                  case (MR_Integer) 2:
                    TypePrefix_45 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 4U));
                    break;
                  case (MR_Integer) 3:
                    TypePrefix_45 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 8U));
                    break;
                  case (MR_Integer) 4:
                    TypePrefix_45 = (MR_String) "MR_bool";
                    break;
                  case (MR_Integer) 9:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.export_type_to_prefix_suffix\'/3", (MR_String) "unknown_type");
                      return;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                TypePrefix_45 = (MR_String) "MR_Word";
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, BaseType_25, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 5:
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                  case (MR_Integer) 11:
                    TypePrefix_45 = (MR_String) "MR_Word";
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word MerType_50 = ((MR_Word) ((MR_hl_field(3, BaseType_25, (MR_Integer) 1))));

                      TypePrefix_45 = backend_libs__foreign__maybe_foreign_type_to_c_string_2_f_0(MerType_50, (MR_Word) ((MR_Unsigned) 0U));
                    }
                    break;
                  case (MR_Integer) 4:
                    TypePrefix_45 = (MR_String) "MR_ArrayPtr";
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word IntType_61 = ((MR_Unsigned) ((MR_hl_field(3, BaseType_25, (MR_Integer) 1))) & (MR_Integer) 15);
                      MR_Word Var_69;

                      {
                        Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_69, 0) = (MR_Box) ((MR_Unsigned) (IntType_61));
                      }
                      TypePrefix_45 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0(Var_69);
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word ForeignType_62 = ((MR_Word) ((MR_hl_field(3, BaseType_25, (MR_Integer) 1))));

                      switch (MR_tag((MR_Word) ForeignType_62)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, ForeignType_62, (MR_Integer) 0))));

                            TypePrefix_45 = (MR_String) (Var_73);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.export_type_to_prefix_suffix\'/3", (MR_String) "java foreign_type");
                            return;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.export_type_to_prefix_suffix\'/3", (MR_String) "csharp foreign_type");
                            return;
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 10:
                    {
                      MR_Word BaseType_65 = ((MR_Word) ((MR_hl_field(3, BaseType_25, (MR_Integer) 1))));
                      MR_String BaseTypeStr_66;

                      BaseTypeStr_66 = ml_backend__mlds_to_c_export__export_type_to_string_for_c_1_f_0(BaseType_65);
                      TypePrefix_45 = mercury__string__f_43_43_2_f_0(BaseTypeStr_66, (MR_String) " *");
                    }
                    break;
                  case (MR_Integer) 12:
                    TypePrefix_45 = (MR_String) "MR_Word";
                    break;
                }
                break;
            }
            succeeded = (strcmp((MR_String) "", (MR_String) "") == 0);
            if (succeeded)
              BaseTypeStr_26 = TypePrefix_45;
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_c_export.export_type_to_string_for_c\'/1", (MR_String) "TypeSuffix is not empty");
                return;
              }
            *TypePrefix_7 = mercury__string__f_43_43_2_f_0(BaseTypeStr_26, (MR_String) " *");
          }
          break;
        case (MR_Integer) 12:
          *TypePrefix_7 = (MR_String) "MR_Word";
          break;
      }
      break;
  }
  *TypeSuffix_8 = (MR_String) "";
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_export_enums_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_export__mlds_output_export_enum_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_export_enums_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word ExportedEnums_10)
{
  MR_Word Var_14;
  MR_Box conv0_STATE_VARIABLE_IO_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_7[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_export_enums_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Opts_7));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (Indent_9));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, ExportedEnums_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv1_TypePrefix_7;
  MR_String conv0_TypeSuffix_8;

  ml_backend__mlds_to_c_export__export_type_to_prefix_suffix_ignore_opts_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_TypePrefix_7, &conv0_TypeSuffix_8);
  *wrapper_arg_3 = ((MR_Box) (conv1_TypePrefix_7));
  *wrapper_arg_4 = ((MR_Box) (conv0_TypeSuffix_8));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_func_name__83__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn__60__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word ModuleName_11,
  MR_Word PragmaExport_12)
{
  MR_bool succeeded;
  MR_Word Lang_14 = ((MR_Unsigned) ((MR_hl_field(0, PragmaExport_12, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word MLDS_Name_16 = ((MR_Word) ((MR_hl_field(0, PragmaExport_12, (MR_Integer) 2))));
  MR_Word MLDS_Signature_17 = ((MR_Word) ((MR_hl_field(0, PragmaExport_12, (MR_Integer) 3))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, PragmaExport_12, (MR_Integer) 5))));
  MR_String IndentStr_20;
  MR_Word Var_23;
  MR_Word Var_30;
  MR_Word Var_37;
  MR_Word Lang_83;
  MR_String ExportName_84;
  MR_Word Signature_86;
  MR_Word Context_88;
  MR_Word FuncName_89;
  MR_Word QualFuncName_90;
  MR_Word Var_92;
  MR_Word Var_96;

  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_5[2]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_7_p_0_1));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (Lang_14));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_23, (MR_String) "predicate \140ml_backend.mlds_to_c_export.mlds_output_pragma_export_defn\'/7", (MR_String) "foreign_export to language other than C.");
  mercury__io__nl_3_p_0(Stream_9);
  Lang_83 = ((MR_Unsigned) ((MR_hl_field(0, PragmaExport_12, (MR_Integer) 0))) & (MR_Integer) 3);
  ExportName_84 = ((MR_String) ((MR_hl_field(0, PragmaExport_12, (MR_Integer) 1))));
  Signature_86 = ((MR_Word) ((MR_hl_field(0, PragmaExport_12, (MR_Integer) 3))));
  Context_88 = ((MR_Word) ((MR_hl_field(0, PragmaExport_12, (MR_Integer) 5))));
  {
    Var_92 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_92, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_5[2]));
    MR_hl_field(0, Var_92, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_7_p_0_2));
    MR_hl_field(0, Var_92, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_92, 3) = ((MR_Box) (Lang_83));
    MR_hl_field(0, Var_92, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_92, (MR_String) "predicate \140ml_backend.mlds_to_c_export.mlds_output_pragma_export_func_name\'/7", (MR_String) "export to language other than C.");
  {
    FuncName_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, FuncName_89, 0) = ((MR_Box) (ExportName_84));
  }
  {
    QualFuncName_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, QualFuncName_90, 0) = ((MR_Box) (ModuleName_11));
    MR_hl_field(0, QualFuncName_90, 1) = ((MR_Box) (FuncName_89));
  }
  Var_96 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_96, Context_88);
  libs__indent__write_indent2_4_p_0(Stream_9, Indent_10);
  ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_10_p_0(Opts_8, Stream_9, (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_4[5]), (MR_String) "", Indent_10, Context_88, QualFuncName_90, Signature_86);
  mercury__io__nl_3_p_0(Stream_9);
  Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_30, Context_19);
  IndentStr_20 = libs__indent__indent2_string_1_f_0(Indent_10);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_20);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{\n");
  Var_37 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_37, Context_19);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_20);
  ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0(Opts_8, Stream_9, MLDS_Name_16, MLDS_Signature_17);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_20);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}\n");
}

static MR_Box MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv13_TypeStr_4;

  conv13_TypeStr_4 = ml_backend__mlds_to_c_export__export_type_to_string_for_c_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv13_TypeStr_4));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__write_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static MR_Box MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv3_UnboxStr_4;

  conv3_UnboxStr_4 = ml_backend__mlds_to_c_export__pragma_output_arg_to_unbox_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_UnboxStr_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_BoxStr_4;

  conv2_BoxStr_4 = ml_backend__mlds_to_c_export__pragma_input_arg_to_box_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_BoxStr_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_DeclStr_6;

  conv1_DeclStr_6 = ml_backend__mlds_to_c_export__pragma_output_arg_to_decl_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_DeclStr_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_DeclStr_6;

  conv0_DeclStr_6 = ml_backend__mlds_to_c_export__pragma_input_arg_to_decl_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_DeclStr_6));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__204__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__199__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word FuncName_9,
  MR_Word Signature_10)
{
  MR_bool succeeded;
  MR_Word Parameters_12 = ((MR_Word) ((MR_hl_field(0, Signature_10, (MR_Integer) 0))));
  MR_Word ReturnTypes_13 = ((MR_Word) ((MR_hl_field(0, Signature_10, (MR_Integer) 1))));
  MR_Word CForeignTypeInputs_22;
  MR_Word CForeignTypeOutputs_23;
  MR_Word CForeignTypeInputDecls_24;
  MR_Word CForeignTypeOutputDecls_25;
  MR_Word InputUnboxStrs_26;
  MR_Word OutputBoxStrs_27;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_48;
  MR_Box conv4_STATE_VARIABLE_IO_49_49;
  MR_Box conv5_STATE_VARIABLE_IO_51_51;

  CForeignTypeInputs_22 = mercury__list__filter_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_4[0]), Parameters_12);
  CForeignTypeOutputs_23 = mercury__list__filter_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_4[1]), Parameters_12);
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_2[0]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_3));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (Opts_7));
  }
  CForeignTypeInputDecls_24 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_44, CForeignTypeInputs_22);
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_2[0]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_4));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (Opts_7));
  }
  CForeignTypeOutputDecls_25 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_45, CForeignTypeOutputs_23);
  InputUnboxStrs_26 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_4[2]), CForeignTypeInputs_22);
  OutputBoxStrs_27 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_4[3]), CForeignTypeOutputs_23);
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_6[0]));
    MR_hl_field(0, Var_48, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_7));
    MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_48, 3) = ((MR_Box) (Stream_8));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, CForeignTypeInputDecls_24, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_49_49);
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, CForeignTypeOutputDecls_25, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_51_51);
  if ((ReturnTypes_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Box conv6_STATE_VARIABLE_IO_53_53;
    MR_Box conv7_STATE_VARIABLE_IO_38;

    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, InputUnboxStrs_26, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_53_53);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t");
    ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_6_p_0(Opts_7, Stream_8, FuncName_9, Parameters_12);
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, OutputBoxStrs_27, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_38);
  }
  else
  {
    MR_Word Var_169 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_13, (MR_Integer) 1))));
    MR_Word Var_170 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_13, (MR_Integer) 0))));

    if ((Var_169 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String ReturnTypeStr_29;
      MR_Word Var_60;

      ReturnTypeStr_29 = ml_backend__mlds_to_c_export__export_type_to_string_for_c_1_f_0(Var_170);
      succeeded = ((((MR_tag((MR_Word) Var_170)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_170, (MR_Integer) 0)))) == (MR_Integer) 7)));
      if (succeeded)
      {
        Var_60 = ((MR_Word) ((MR_hl_field(3, Var_170, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_Integer) 0);
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_String BoxedReturnTypeStr_31;
        MR_Box conv8_STATE_VARIABLE_IO_72_72;
        MR_Box conv9_STATE_VARIABLE_IO_77_77;

        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t");
        mercury__io__write_string_4_p_0(Stream_8, ReturnTypeStr_29);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ret_value;\n");
        BoxedReturnTypeStr_31 = ml_backend__mlds_to_c_type__type_to_string_for_c_2_f_0(Opts_7, Var_170);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t");
        mercury__io__write_string_4_p_0(Stream_8, BoxedReturnTypeStr_31);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " boxed_ret_value;\n");
        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, InputUnboxStrs_26, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_72_72);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tboxed_ret_value = ");
        ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_6_p_0(Opts_7, Stream_8, FuncName_9, Parameters_12);
        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, OutputBoxStrs_27, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_77_77);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(");
        mercury__io__write_string_4_p_0(Stream_8, ReturnTypeStr_29);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "boxed_ret_value");
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "ret_value");
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\treturn ret_value;\n");
      }
      else
      {
        MR_Box conv10_STATE_VARIABLE_IO_97_97;
        MR_Box conv11_STATE_VARIABLE_IO_105_105;

        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t");
        mercury__io__write_string_4_p_0(Stream_8, ReturnTypeStr_29);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ret_value;\n");
        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, InputUnboxStrs_26, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_97_97);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tret_value = (");
        mercury__io__write_string_4_p_0(Stream_8, ReturnTypeStr_29);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
        ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_6_p_0(Opts_7, Stream_8, FuncName_9, Parameters_12);
        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, OutputBoxStrs_27, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_105_105);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\treturn ret_value;\n");
      }
    }
    else
    {
      MR_Word ReturnTypeStrs_35;
      MR_String ReturnTypesStr_36;
      MR_Box conv12_STATE_VARIABLE_IO_110_110;
      MR_Box conv14_STATE_VARIABLE_IO_38;

      mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, InputUnboxStrs_26, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_110_110);
      ReturnTypeStrs_35 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_4[4]), ReturnTypes_13);
      ReturnTypesStr_36 = ml_backend__mlds_to_c_type__return_list_to_string_for_c_1_f_0(ReturnTypeStrs_35);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\treturn (");
      mercury__io__write_string_4_p_0(Stream_8, ReturnTypesStr_36);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");");
      mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, OutputBoxStrs_27, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_38);
    }
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_ArgStr_6;

  conv0_ArgStr_6 = ml_backend__mlds_to_c_export__pragma_export_arg_to_string_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ArgStr_6));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word FuncName_9,
  MR_Word Parameters_10)
{
  MR_String FuncNameStr_12;
  MR_Word ParameterStrs_13;
  MR_String ParametersStr_14;
  MR_Word Var_17;

  FuncNameStr_12 = ml_backend__mlds_to_c_name__qual_function_name_to_string_for_c_1_f_0(FuncName_9);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_2[0]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_6_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (Opts_7));
  }
  ParameterStrs_13 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_17, Parameters_10);
  ParametersStr_14 = mercury__string__join_list_2_f_0((MR_String) ", ", ParameterStrs_13);
  mercury__io__write_string_4_p_0(Stream_8, FuncNameStr_12);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
  mercury__io__write_string_4_p_0(Stream_8, ParametersStr_14);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
}

static MR_String MR_CALL 
ml_backend__mlds_to_c_export__export_type_to_string_for_c_1_f_0(
  MR_Word MLDS_Type_3)
{
  MR_String TypeStr_4;
  MR_String TypePrefix_5;

  switch (MR_tag((MR_Word) MLDS_Type_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(MLDS_Type_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
          TypePrefix_5 = (MR_String) "MR_Word";
          break;
        case (MR_Integer) 1:
          TypePrefix_5 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 0U));
          break;
        case (MR_Integer) 2:
          TypePrefix_5 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 4U));
          break;
        case (MR_Integer) 3:
          TypePrefix_5 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 8U));
          break;
        case (MR_Integer) 4:
          TypePrefix_5 = (MR_String) "MR_bool";
          break;
        case (MR_Integer) 9:
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.export_type_to_prefix_suffix\'/3", (MR_String) "unknown_type");
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      TypePrefix_5 = (MR_String) "MR_Word";
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, MLDS_Type_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 5:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 11:
          TypePrefix_5 = (MR_String) "MR_Word";
          break;
        case (MR_Integer) 3:
          {
            MR_Word MerType_10 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_3, (MR_Integer) 1))));

            TypePrefix_5 = backend_libs__foreign__maybe_foreign_type_to_c_string_2_f_0(MerType_10, (MR_Word) ((MR_Unsigned) 0U));
          }
          break;
        case (MR_Integer) 4:
          TypePrefix_5 = (MR_String) "MR_ArrayPtr";
          break;
        case (MR_Integer) 6:
          {
            MR_Word IntType_21 = ((MR_Unsigned) ((MR_hl_field(3, MLDS_Type_3, (MR_Integer) 1))) & (MR_Integer) 15);
            MR_Word Var_29;

            {
              Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_29, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
            }
            TypePrefix_5 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0(Var_29);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ForeignType_22 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_3, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ForeignType_22)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, ForeignType_22, (MR_Integer) 0))));

                  TypePrefix_5 = (MR_String) (Var_33);
                }
                break;
              case (MR_Integer) 1:
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.export_type_to_prefix_suffix\'/3", (MR_String) "java foreign_type");
                break;
              case (MR_Integer) 2:
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.export_type_to_prefix_suffix\'/3", (MR_String) "csharp foreign_type");
                break;
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word BaseType_25 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_3, (MR_Integer) 1))));
            MR_String BaseTypeStr_26;

            BaseTypeStr_26 = ml_backend__mlds_to_c_export__export_type_to_string_for_c_1_f_0(BaseType_25);
            TypePrefix_5 = mercury__string__f_43_43_2_f_0(BaseTypeStr_26, (MR_String) " *");
          }
          break;
        case (MR_Integer) 12:
          TypePrefix_5 = (MR_String) "MR_Word";
          break;
      }
      break;
  }
  if ((strcmp((MR_String) "", (MR_String) "") == 0))
    TypeStr_4 = TypePrefix_5;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_c_export.export_type_to_string_for_c\'/1", (MR_String) "TypeSuffix is not empty");
  return TypeStr_4;
}

void mercury__ml_backend__mlds_to_c_export__init(void)
{
}

void mercury__ml_backend__mlds_to_c_export__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_c_export__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_c_export__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_c_export.
