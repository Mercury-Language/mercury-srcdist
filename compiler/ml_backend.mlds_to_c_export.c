/*
** Automatically generated from `mlds_to_c_export.m'
** by the Mercury compiler,
** version rotd-2022-08-04
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
#include "backend_libs.foreign.mih"
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
#include "ml_backend.mlds_to_c_func.mih"
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




static const MR_EnumFunctorDesc ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_functor_desc_locn_0_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_functor_desc_locn_0_1;

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_ordinal_ordered_locn_0[2];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_name_ordered_locn_0[2];

static const MR_Integer ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__functor_number_map_locn_0[2];

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_exported_enum_constant__448__1_2_p_0(
  MR_Word Lang_12,
  MR_Word HeadVar__2_29);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__207__1_1_p_0(
  MR_Word LambdaHeadVar__1_43);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__202__1_1_p_0(
  MR_Word LambdaHeadVar__1_41);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_func_name__82__1_2_p_0(
  MR_Word Lang_14,
  MR_Word HeadVar__2_28);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn__60__1_2_p_0(
  MR_Word Lang_14,
  MR_Word HeadVar__2_25);

static void MR_CALL 
ml_backend__mlds_to_c_export____Compare____locn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export____Unify____locn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_exported_enum_constant_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_exported_enum_constant_4_p_0(
  MR_Word Stream_5,
  MR_Word ExportedConstant_6);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_export_enum_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Integer _Indent_9,
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

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_arg_5_p_0(
  MR_Word Opts_6,
  MR_Word Arg_7,
  MR_Word Stream_8);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_output_defns_5_p_0(
  MR_Word Opts_6,
  MR_Word Arg_7,
  MR_Word Stream_8);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_input_defns_5_p_0(
  MR_Word Opts_6,
  MR_Word Arg_7,
  MR_Word Stream_8);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_output_arg_4_p_0(
  MR_Word Arg_5,
  MR_Word Stream_6);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_input_arg_4_p_0(
  MR_Word Arg_5,
  MR_Word Stream_6);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_ignore_opts_6_p_0(
  MR_Word PrefixSuffix_7,
  MR_Word _Opts_8,
  MR_Word Stream_9,
  MR_Word MLDS_Type_10);

static void MR_CALL 
ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_114_97_103_109_97_95_101_120_112_111_114_116_95_116_121_112_101_95_105_103_110_111_114_101_95_111_112_116_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word PrefixSuffix_7,
  MR_Word Stream_9,
  MR_Word MLDS_Type_10);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_export_enums_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word FuncName_9,
  MR_Word Parameters_10);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_prefix_suffix_4_p_0(
  MR_Word Type_5,
  MR_Word Stream_6);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_5_p_0(
  MR_Word PrefixSuffix_6,
  MR_Word MLDS_Type_7,
  MR_Word Stream_8);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Word ModuleName_10,
  MR_Integer Indent_11,
  MR_Word Export_12);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export____Unify____locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_export____Compare____locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_1[1][5];

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_2[2][9];

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_3[3][4];

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_4[1][8];

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_5[5][3];

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_6[3][7];




static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_1[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_2[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__type_ctor_info_locn_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_3[3][4] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_2[0])),
    ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_2[0])),
    ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_5[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_3[2])),
    ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_3[2])),
    ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_6[1])),
    ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_6[3][7] = {
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
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
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



static const MR_EnumFunctorDesc ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_functor_desc_locn_0_0 = {
  (MR_String) "prefix",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_functor_desc_locn_0_1 = {
  (MR_String) "suffix",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_ordinal_ordered_locn_0[2] = {
  &ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_functor_desc_locn_0_0,
  &ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_functor_desc_locn_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_name_ordered_locn_0[2] = {
  &ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_functor_desc_locn_0_0,
  &ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_functor_desc_locn_0_1
};

static const MR_Integer ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__functor_number_map_locn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__type_ctor_info_locn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_c_export____Unify____locn_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_export____Compare____locn_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_export",
  (MR_String) "locn",
  { ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_name_ordered_locn_0 },
  { ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_ordinal_ordered_locn_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__functor_number_map_locn_0,

};

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_exported_enum_constant__448__1_2_p_0(
  MR_Word Lang_12,
  MR_Word HeadVar__2_29)
{
  MR_bool succeeded = (Lang_12 == HeadVar__2_29);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__207__1_1_p_0(
  MR_Word LambdaHeadVar__1_43)
{
  MR_bool succeeded;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Type_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_43, (MR_Integer) 1))));

  succeeded = ((((MR_tag((MR_Word) Type_111)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_111, (MR_Integer) 0)))) == (MR_Integer) 7)));
  if (succeeded)
  {
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_111, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) Var_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_44, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_44, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 0);
      if (succeeded)
      {
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__202__1_1_p_0(
  MR_Word LambdaHeadVar__1_41)
{
  MR_bool succeeded;
  MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_41, (MR_Integer) 1))));
  MR_Word Var_42;

  succeeded = ((((MR_tag((MR_Word) Type_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_17, (MR_Integer) 0)))) == (MR_Integer) 4)));
  if (succeeded)
  {
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_17, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_Integer) 0);
    if (succeeded)
    {
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_func_name__82__1_2_p_0(
  MR_Word Lang_14,
  MR_Word HeadVar__2_28)
{
  MR_bool succeeded = (Lang_14 == HeadVar__2_28);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn__60__1_2_p_0(
  MR_Word Lang_14,
  MR_Word HeadVar__2_25)
{
  MR_bool succeeded = (Lang_14 == HeadVar__2_25);

  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_export____Compare____locn_0_0(
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

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export____Unify____locn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_exported_enum_constant_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_exported_enum_constant__448__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_exported_enum_constant_4_p_0(
  MR_Word Stream_5,
  MR_Word ExportedConstant_6)
{
  MR_bool succeeded;
  MR_String Name_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), ExportedConstant_6, (MR_Integer) 0))));
  MR_Word Initializer_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedConstant_6, (MR_Integer) 1))));
  MR_Integer Value_10;
  MR_Word Var_21;
  MR_Word Var_22;

  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "#define ");
  mercury__io__write_string_4_p_0(Stream_5, Name_8);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) " ");
  succeeded = ((MR_tag((MR_Word) Initializer_9)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Initializer_9, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_21, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_21, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) Var_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 0)))) == (MR_Integer) 9)));
      if (succeeded)
        Value_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 1))));
    }
  }
  if (succeeded)
    mercury__io__write_int_4_p_0(Stream_5, Value_10);
  else
  {
    MR_Word Lang_12;
    MR_String Value_34;
    MR_Word Var_24;
    MR_Word Var_25;

    succeeded = ((MR_tag((MR_Word) Initializer_9)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Initializer_9, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_25, (MR_Integer) 0)))) == (MR_Integer) 14)));
        if (succeeded)
        {
          Lang_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_25, (MR_Integer) 1))) & (MR_Integer) 3);
          Value_34 = ((MR_String) ((MR_hl_field(MR_mktag(3), Var_25, (MR_Integer) 2))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_26;

      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_1[0]));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_exported_enum_constant_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Lang_12));
        MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_26, (MR_String) "predicate \140ml_backend.mlds_to_c_export.mlds_output_exported_enum_constant\'/4", (MR_String) "mlconst_foreign for language other than C.");
      mercury__io__write_string_4_p_0(Stream_5, Value_34);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.mlds_output_exported_enum_constant\'/4", (MR_String) "tag for export enumeration is not enum or foreign");
        return;
      }
  }
  mercury__io__nl_3_p_0(Stream_5);
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_export_enum_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Integer _Indent_9,
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

  ml_backend__mlds_to_c_export__mlds_output_exported_enum_constant_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_51_93_95_48_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word ExportedEnum_10)
{
  MR_Word Lang_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ExportedEnum_10, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedEnum_10, (MR_Integer) 1))));
  MR_Word ExportConstants_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedEnum_10, (MR_Integer) 3))));

  switch (Lang_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
        MR_Word Var_20;
        MR_Box conv0_STATE_VARIABLE_IO_17;

        ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_8, Var_18, Context_13);
        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_6[2]));
          MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_51_93_95_48_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Stream_8));
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

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_arg_5_p_0(
  MR_Word Opts_6,
  MR_Word Arg_7,
  MR_Word Stream_8)
{
  MR_bool succeeded;
  MR_Word LocalVarName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 0))));
  MR_Word Type_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 1))));
  MR_Word BoxedLocalVarName_13;
  MR_String Name_28;
  MR_Integer Seq_29;
  MR_Word Var_18;

  succeeded = ((MR_tag((MR_Word) LocalVarName_10)) == (MR_Integer) 1);
  if (succeeded)
  {
    Name_28 = ((MR_String) ((MR_hl_field(MR_mktag(1), LocalVarName_10, (MR_Integer) 0))));
    Seq_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LocalVarName_10, (MR_Integer) 1))));
    {
      BoxedLocalVarName_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_13, 1) = ((MR_Box) (Name_28));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_13, 2) = ((MR_Box) (Seq_29));
    }
  }
  else
  {
    MR_String NameStr_30;
    MR_Word Var_31;

    NameStr_30 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_10);
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (NameStr_30));
    }
    {
      BoxedLocalVarName_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_13, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_13, 1) = ((MR_Box) (Var_31));
    }
  }
  succeeded = ((((MR_tag((MR_Word) Type_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
  if (succeeded)
  {
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_11, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
    if (succeeded)
    {
    }
  }
  if (succeeded)
    ml_backend__mlds_to_c_name__mlds_output_local_var_name_4_p_0(Stream_8, BoxedLocalVarName_13);
  else
  {
    MR_Word Var_20;
    MR_Word Var_21;

    succeeded = ((((MR_tag((MR_Word) Type_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_11, (MR_Integer) 0)))) == (MR_Integer) 7)));
    if (succeeded)
    {
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_11, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) Var_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
        if (succeeded)
        {
        }
      }
    }
    if (succeeded)
    {
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
      ml_backend__mlds_to_c_name__mlds_output_local_var_name_4_p_0(Stream_8, BoxedLocalVarName_13);
    }
    else
    {
      ml_backend__mlds_to_c_type__mlds_output_cast_5_p_0(Opts_6, Stream_8, Type_11);
      ml_backend__mlds_to_c_name__mlds_output_local_var_name_4_p_0(Stream_8, LocalVarName_10);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_output_defns_5_p_0(
  MR_Word Opts_6,
  MR_Word Arg_7,
  MR_Word Stream_8)
{
  MR_bool succeeded;
  MR_Word LocalVarName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 0))));
  MR_Word Type_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 1))));
  MR_Word BoxedLocalVarName_13;
  MR_Word PointedToType_14;
  MR_String Name_27;
  MR_Integer Seq_28;
  MR_Word Type_32;

  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t");
  succeeded = ((MR_tag((MR_Word) LocalVarName_10)) == (MR_Integer) 1);
  if (succeeded)
  {
    Name_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), LocalVarName_10, (MR_Integer) 0))));
    Seq_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LocalVarName_10, (MR_Integer) 1))));
    {
      BoxedLocalVarName_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_13, 1) = ((MR_Box) (Name_27));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_13, 2) = ((MR_Box) (Seq_28));
    }
  }
  else
  {
    MR_String NameStr_29;
    MR_Word Var_30;

    NameStr_29 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_10);
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (NameStr_29));
    }
    {
      BoxedLocalVarName_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_13, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_13, 1) = ((MR_Box) (Var_30));
    }
  }
  succeeded = ((((MR_tag((MR_Word) Type_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_11, (MR_Integer) 0)))) == (MR_Integer) 7)));
  if (succeeded)
  {
    Type_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_11, (MR_Integer) 1))));
    PointedToType_14 = Type_32;
  }
  else
  {
    MR_Box conv0_PointedToType_14;

    {
      conv0_PointedToType_14 = mercury__require__unexpected_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_String) "function \140ml_backend.mlds_to_c_export.pointed_to_type\'/1", (MR_String) "not pointer");
      return;
    }
    PointedToType_14 = ((MR_Word) (conv0_PointedToType_14));
  }
  ml_backend__mlds_to_c_type__mlds_output_type_prefix_5_p_0(Opts_6, Stream_8, PointedToType_14);
  mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 32);
  ml_backend__mlds_to_c_name__mlds_output_local_var_name_4_p_0(Stream_8, BoxedLocalVarName_13);
  ml_backend__mlds_to_c_type__mlds_output_type_suffix_no_size_5_p_0(Opts_6, Stream_8, PointedToType_14);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ";\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_input_defns_5_p_0(
  MR_Word Opts_6,
  MR_Word Arg_7,
  MR_Word Stream_8)
{
  MR_bool succeeded;
  MR_Word LocalVarName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 0))));
  MR_Word Type_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 1))));
  MR_Word BoxedLocalVarName_13;
  MR_String Name_26;
  MR_Integer Seq_27;

  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t");
  succeeded = ((MR_tag((MR_Word) LocalVarName_10)) == (MR_Integer) 1);
  if (succeeded)
  {
    Name_26 = ((MR_String) ((MR_hl_field(MR_mktag(1), LocalVarName_10, (MR_Integer) 0))));
    Seq_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LocalVarName_10, (MR_Integer) 1))));
    {
      BoxedLocalVarName_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_13, 1) = ((MR_Box) (Name_26));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_13, 2) = ((MR_Box) (Seq_27));
    }
  }
  else
  {
    MR_String NameStr_28;
    MR_Word Var_29;

    NameStr_28 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_10);
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (NameStr_28));
    }
    {
      BoxedLocalVarName_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_13, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_13, 1) = ((MR_Box) (Var_29));
    }
  }
  ml_backend__mlds_to_c_type__mlds_output_type_prefix_5_p_0(Opts_6, Stream_8, Type_11);
  mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 32);
  ml_backend__mlds_to_c_name__mlds_output_local_var_name_4_p_0(Stream_8, BoxedLocalVarName_13);
  ml_backend__mlds_to_c_type__mlds_output_type_suffix_no_size_5_p_0(Opts_6, Stream_8, Type_11);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ";\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_output_arg_4_p_0(
  MR_Word Arg_5,
  MR_Word Stream_6)
{
  MR_bool succeeded;
  MR_Word LocalVarName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_5, (MR_Integer) 0))));
  MR_Word Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_5, (MR_Integer) 1))));
  MR_Word BoxedLocalVarName_11;
  MR_Word Var_16;
  MR_String Name_27;
  MR_Integer Seq_28;
  MR_Word Type_32;

  succeeded = ((MR_tag((MR_Word) LocalVarName_8)) == (MR_Integer) 1);
  if (succeeded)
  {
    Name_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), LocalVarName_8, (MR_Integer) 0))));
    Seq_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LocalVarName_8, (MR_Integer) 1))));
    {
      BoxedLocalVarName_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_11, 1) = ((MR_Box) (Name_27));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_11, 2) = ((MR_Box) (Seq_28));
    }
  }
  else
  {
    MR_String NameStr_29;
    MR_Word Var_30;

    NameStr_29 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_8);
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (NameStr_29));
    }
    {
      BoxedLocalVarName_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_11, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_11, 1) = ((MR_Box) (Var_30));
    }
  }
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(");
  succeeded = ((((MR_tag((MR_Word) Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 0)))) == (MR_Integer) 7)));
  if (succeeded)
  {
    Type_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 1))));
    Var_16 = Type_32;
  }
  else
  {
    MR_Box conv0_Var_16;

    {
      conv0_Var_16 = mercury__require__unexpected_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_String) "function \140ml_backend.mlds_to_c_export.pointed_to_type\'/1", (MR_String) "not pointer");
      return;
    }
    Var_16 = ((MR_Word) (conv0_Var_16));
  }
  ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_5_p_0((MR_Integer) 0, Var_16, Stream_6);
  ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_5_p_0((MR_Integer) 1, Var_16, Stream_6);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  ml_backend__mlds_to_c_name__mlds_output_local_var_name_4_p_0(Stream_6, BoxedLocalVarName_11);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", *");
  ml_backend__mlds_to_c_name__mlds_output_local_var_name_4_p_0(Stream_6, LocalVarName_8);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ");\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_input_arg_4_p_0(
  MR_Word Arg_5,
  MR_Word Stream_6)
{
  MR_bool succeeded;
  MR_Word LocalVarName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_5, (MR_Integer) 0))));
  MR_Word Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_5, (MR_Integer) 1))));
  MR_Word BoxedLocalVarName_11;
  MR_String Name_26;
  MR_Integer Seq_27;

  succeeded = ((MR_tag((MR_Word) LocalVarName_8)) == (MR_Integer) 1);
  if (succeeded)
  {
    Name_26 = ((MR_String) ((MR_hl_field(MR_mktag(1), LocalVarName_8, (MR_Integer) 0))));
    Seq_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LocalVarName_8, (MR_Integer) 1))));
    {
      BoxedLocalVarName_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_11, 1) = ((MR_Box) (Name_26));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_11, 2) = ((MR_Box) (Seq_27));
    }
  }
  else
  {
    MR_String NameStr_28;
    MR_Word Var_29;

    NameStr_28 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_8);
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (NameStr_28));
    }
    {
      BoxedLocalVarName_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_11, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), BoxedLocalVarName_11, 1) = ((MR_Box) (Var_29));
    }
  }
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\tMR_MAYBE_BOX_FOREIGN_TYPE(");
  ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_5_p_0((MR_Integer) 0, Type_9, Stream_6);
  ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_5_p_0((MR_Integer) 1, Type_9, Stream_6);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  ml_backend__mlds_to_c_name__mlds_output_local_var_name_4_p_0(Stream_6, LocalVarName_8);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  ml_backend__mlds_to_c_name__mlds_output_local_var_name_4_p_0(Stream_6, BoxedLocalVarName_11);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ");\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_ignore_opts_6_p_0(
  MR_Word PrefixSuffix_7,
  MR_Word _Opts_8,
  MR_Word Stream_9,
  MR_Word MLDS_Type_10)
{
  ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_114_97_103_109_97_95_101_120_112_111_114_116_95_116_121_112_101_95_105_103_110_111_114_101_95_111_112_116_115_95_95_91_50_93_95_48_6_p_0(PrefixSuffix_7, Stream_9, MLDS_Type_10);
}

static void MR_CALL 
ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_114_97_103_109_97_95_101_120_112_111_114_116_95_116_121_112_101_95_105_103_110_111_114_101_95_111_112_116_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word PrefixSuffix_7,
  MR_Word Stream_9,
  MR_Word MLDS_Type_10)
{
  ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_5_p_0(PrefixSuffix_7, MLDS_Type_10, Stream_9);
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_export_enums_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_export__mlds_output_export_enum_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_export_enums_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ExportedEnums_10)
{
  MR_Word Var_14;
  MR_Box conv0_STATE_VARIABLE_IO_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_2[1]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_export_enums_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Opts_7));
    MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (Indent_9));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, ExportedEnums_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn__60__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_7_p_0(
  MR_Word Opts_8,
  MR_Word ModuleName_9,
  MR_Integer Indent_10,
  MR_Word PragmaExport_11,
  MR_Word Stream_12)
{
  MR_bool succeeded;
  MR_Word Lang_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PragmaExport_11, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word MLDS_Name_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaExport_11, (MR_Integer) 2))));
  MR_Word MLDS_Signature_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaExport_11, (MR_Integer) 3))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaExport_11, (MR_Integer) 5))));
  MR_Word Var_22;
  MR_Word Var_29;
  MR_Word Var_34;

  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_1[0]));
    MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_7_p_0_1));
    MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Lang_14));
    MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_22, (MR_String) "predicate \140ml_backend.mlds_to_c_export.mlds_output_pragma_export_defn\'/7", (MR_String) "foreign_export to language other than C.");
  ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_7_p_0(Opts_8, Stream_12, ModuleName_9, Indent_10, PragmaExport_11);
  mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
  Var_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_12, Var_29, Context_19);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_12, Indent_10);
  mercury__io__write_string_4_p_0(Stream_12, (MR_String) "{\n");
  Var_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_12, Var_34, Context_19);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_12, Indent_10);
  ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0(Opts_8, Stream_12, MLDS_Name_16, MLDS_Signature_17);
  mercury__io__write_string_4_p_0(Stream_12, (MR_String) "}\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_export__mlds_output_pragma_output_arg_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_prefix_suffix_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_export__mlds_output_pragma_input_arg_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_export__mlds_output_pragma_export_output_defns_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_export__mlds_output_pragma_export_input_defns_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__207__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__202__1_1_p_0(((MR_Word) (wrapper_arg_1)));
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
  MR_Word Parameters_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_10, (MR_Integer) 0))));
  MR_Word RetTypes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_10, (MR_Integer) 1))));
  MR_Word CForeignTypeInputs_22;
  MR_Word CForeignTypeOutputs_23;
  MR_Word Var_46;
  MR_Word Var_49;

  CForeignTypeInputs_22 = mercury__list__filter_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_5[0]), Parameters_12);
  CForeignTypeOutputs_23 = mercury__list__filter_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_5[1]), Parameters_12);
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_3));
    MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (Opts_7));
  }
  parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Var_46, (MR_String) "", CForeignTypeInputs_22, Stream_8);
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_6_p_0_4));
    MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Opts_7));
  }
  parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Var_49, (MR_String) "", CForeignTypeOutputs_23, Stream_8);
  if (!((RetTypes_13 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_13, (MR_Integer) 1))));
    MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_13, (MR_Integer) 0))));

    if ((Var_134 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_53;

      succeeded = ((((MR_tag((MR_Word) Var_135)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_135, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_135, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_53)) == (MR_Integer) 0);
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t");
        ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_prefix_suffix_4_p_0(Var_135, Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ret_value;\n");
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t");
        ml_backend__mlds_to_c_type__mlds_output_type_5_p_0(Opts_7, Var_135, Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " boxed_ret_value;\n");
      }
      else
      {
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t");
        ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_prefix_suffix_4_p_0(Var_135, Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ret_value;\n");
      }
    }
  }
  parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_5[2]), (MR_String) "", CForeignTypeInputs_22, Stream_8);
  if ((RetTypes_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\t");
    ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_6_p_0(Opts_7, Stream_8, FuncName_9, Parameters_12);
  }
  else
  {
    MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_13, (MR_Integer) 1))));
    MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_13, (MR_Integer) 0))));

    if ((Var_136 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_77;

      succeeded = ((((MR_tag((MR_Word) Var_137)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_137, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_137, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_77)) == (MR_Integer) 0);
        if (succeeded)
        {
        }
      }
      if (succeeded)
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tboxed_ret_value = ");
      else
      {
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tret_value = (");
        ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_prefix_suffix_4_p_0(Var_137, Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
      }
      ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_6_p_0(Opts_7, Stream_8, FuncName_9, Parameters_12);
    }
    else
    {
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\treturn (");
      ml_backend__mlds_to_c_type__mlds_output_return_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), Stream_8, (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_5[3]), RetTypes_13);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
    }
  }
  parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_5[4]), (MR_String) "", CForeignTypeOutputs_23, Stream_8);
  if (!((RetTypes_13 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_13, (MR_Integer) 1))));
    MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_13, (MR_Integer) 0))));

    if ((Var_138 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_97;

      succeeded = ((((MR_tag((MR_Word) Var_139)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_139, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_139, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_97)) == (MR_Integer) 0);
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(");
        ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_prefix_suffix_4_p_0(Var_139, Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", boxed_ret_value, ret_value);\n");
      }
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\treturn ret_value;\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_export__mlds_output_pragma_export_arg_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word FuncName_9,
  MR_Word Parameters_10)
{
  MR_Word Var_17;

  ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_4_p_0(Stream_8, FuncName_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Opts_7));
  }
  parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Var_17, (MR_String) ", ", Parameters_10, Stream_8);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_prefix_suffix_4_p_0(
  MR_Word Type_5,
  MR_Word Stream_6)
{
  ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_5_p_0((MR_Integer) 0, Type_5, Stream_6);
  ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_5_p_0((MR_Integer) 1, Type_5, Stream_6);
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_5_p_0(
  MR_Word PrefixSuffix_6,
  MR_Word MLDS_Type_7,
  MR_Word Stream_8)
{
  switch (PrefixSuffix_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_tag((MR_Word) MLDS_Type_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(MLDS_Type_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Word");
              break;
            case (MR_Integer) 1:
              {
                MR_String TypeStr_60;

                TypeStr_60 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 0U));
                mercury__io__write_string_4_p_0(Stream_8, TypeStr_60);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String TypeStr_61;

                TypeStr_61 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 4U));
                mercury__io__write_string_4_p_0(Stream_8, TypeStr_61);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String TypeStr_62;

                TypeStr_62 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 8U));
                mercury__io__write_string_4_p_0(Stream_8, TypeStr_62);
              }
              break;
            case (MR_Integer) 4:
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_bool");
              break;
            case (MR_Integer) 9:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.mlds_output_pragma_export_type\'/5", (MR_String) "unknown_type");
                return;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Word");
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), MLDS_Type_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word MerType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_7, (MR_Integer) 1))));
                MR_String TypeStr_13;

                TypeStr_13 = backend_libs__foreign__maybe_foreign_type_to_c_string_2_f_0(MerType_11, (MR_Word) ((MR_Unsigned) 0U));
                mercury__io__write_string_4_p_0(Stream_8, TypeStr_13);
              }
              break;
            case (MR_Integer) 1:
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_ArrayPtr");
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 8:
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Word");
              break;
            case (MR_Integer) 3:
              {
                MR_Word IntType_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), MLDS_Type_7, (MR_Integer) 1))) & (MR_Integer) 15);
                MR_Word Var_37;
                MR_String TypeStr_59;

                {
                  Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_37, 0) = (MR_Box) ((MR_Unsigned) (IntType_20));
                }
                TypeStr_59 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0(Var_37);
                mercury__io__write_string_4_p_0(Stream_8, TypeStr_59);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ForeignType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_7, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ForeignType_21)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_String Name_22;
                      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignType_21, (MR_Integer) 0))));

                      Name_22 = (MR_String) (Var_45);
                      mercury__io__write_string_4_p_0(Stream_8, Name_22);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.mlds_output_pragma_export_type\'/5", (MR_String) "java foreign_type");
                      return;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.mlds_output_pragma_export_type\'/5", (MR_String) "csharp foreign_type");
                      return;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Type_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_7, (MR_Integer) 1))));

                ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_5_p_0((MR_Integer) 0, Type_25, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) " *");
              }
              break;
            case (MR_Integer) 9:
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Word");
              break;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_ignore_opts_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_ignore_opts_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_func_name__82__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Word ModuleName_10,
  MR_Integer Indent_11,
  MR_Word Export_12)
{
  MR_bool succeeded;
  MR_Word Lang_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Export_12, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_String ExportName_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), Export_12, (MR_Integer) 1))));
  MR_Word Signature_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_12, (MR_Integer) 3))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_12, (MR_Integer) 5))));
  MR_Word FuncName_20;
  MR_Word QualFuncName_21;
  MR_Word Var_25;
  MR_Word Var_29;

  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_1[0]));
    MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_7_p_0_1));
    MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Lang_14));
    MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_25, (MR_String) "predicate \140ml_backend.mlds_to_c_export.mlds_output_pragma_export_func_name\'/7", (MR_String) "export to language other than C.");
  {
    FuncName_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), FuncName_20, 0) = ((MR_Box) (ExportName_15));
  }
  {
    QualFuncName_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), QualFuncName_21, 0) = ((MR_Box) (ModuleName_10));
    MR_hl_field(MR_mktag(0), QualFuncName_21, 1) = ((MR_Box) (FuncName_20));
  }
  Var_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
  ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_29, Context_19);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_11);
  ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_11_p_0(Opts_8, Stream_9, Indent_11, QualFuncName_21, Context_19, (MR_String) "", Signature_17, (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_3[0]), (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_3[1]));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export____Unify____locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_to_c_export____Unify____locn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_export____Compare____locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_to_c_export____Compare____locn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ml_backend__mlds_to_c_export__init(void)
{
}

void mercury__ml_backend__mlds_to_c_export__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__type_ctor_info_locn_0);
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
