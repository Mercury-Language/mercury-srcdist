/*
** Automatically generated from `mlds_to_c_export.m'
** by the Mercury compiler,
** version rotd-2020-04-06
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
#include "getopt_io.mih"
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
#include "parse_tree.set_of_var.mih"




static const MR_EnumFunctorDesc ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_functor_desc_locn_0_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_functor_desc_locn_0_1;

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_value_ordered_locn_0[2];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_name_ordered_locn_0[2];

static const MR_Integer ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__functor_number_map_locn_0[2];

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_exported_enum_constant__434__1_2_p_0(
  MR_Word Lang_10,
  MR_Word HeadVar__2_27);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__204__1_1_p_0(
  MR_Word LambdaHeadVar__1_41);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__199__1_1_p_0(
  MR_Word LambdaHeadVar__1_39);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_func_name__78__1_2_p_0(
  MR_Word Lang_12,
  MR_Word HeadVar__2_26);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn__58__1_2_p_0(
  MR_Word Lang_12,
  MR_Word HeadVar__2_23);

static void MR_CALL 
ml_backend__mlds_to_c_export____Compare____locn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export____Unify____locn_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_exported_enum_constant_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_exported_enum_constant_3_p_0(
  MR_Word ExportedConstant_4);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_export_enum_5_p_0(
  MR_Word Opts_6,
  MR_Integer _Indent_7,
  MR_Word ExportedEnum_8);

static void MR_CALL 
ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0(
  MR_Word Opts_6,
  MR_Word ExportedEnum_8);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_arg_4_p_0(
  MR_Word Opts_5,
  MR_Word Arg_6);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_output_defns_4_p_0(
  MR_Word Opts_5,
  MR_Word Arg_6);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_input_defns_4_p_0(
  MR_Word Opts_5,
  MR_Word Arg_6);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_output_arg_3_p_0(
  MR_Word Arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_input_arg_3_p_0(
  MR_Word Arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_ignore_opts_5_p_0(
  MR_Word PrefixSuffix_6,
  MR_Word _Opts_7,
  MR_Word MLDS_Type_8);

static void MR_CALL 
ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_114_97_103_109_97_95_101_120_112_111_114_116_95_116_121_112_101_95_105_103_110_111_114_101_95_111_112_116_115_95_95_91_50_93_95_48_5_p_0(
  MR_Word PrefixSuffix_6,
  MR_Word MLDS_Type_8);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_export_enums_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0(
  MR_Word Opts_6,
  MR_Word FuncName_7,
  MR_Word Signature_8);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_5_p_0(
  MR_Word Opts_6,
  MR_Word FuncName_7,
  MR_Word Parameters_8);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_prefix_suffix_3_p_0(
  MR_Word Type_4);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_4_p_0(
  MR_Word PrefixSuffix_5,
  MR_Word MLDS_Type_6);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_6_p_0(
  MR_Word Opts_7,
  MR_Word ModuleName_8,
  MR_Integer Indent_9,
  MR_Word Export_10);

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

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_2[2][8];

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_3[3][4];

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_4[1][7];

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_5[6][3];

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_6[3][6];




static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_1[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_2[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__type_ctor_info_locn_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_3[3][4] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_2[0])),
    ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_2[0])),
    ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_5[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_3[2])),
    ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_3[2])),
    ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_6[1])),
    ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_6[2])),
    ((MR_Box) (ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_export_scalar_common_6[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
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

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_value_ordered_locn_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_c_export____Unify____locn_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_export____Compare____locn_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_export",
  (MR_String) "locn",
  {     ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_name_ordered_locn_0 },
  {     ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__enum_value_ordered_locn_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ml_backend__mlds_to_c_export__ml_backend__mlds_to_c_export__functor_number_map_locn_0
};

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_exported_enum_constant__434__1_2_p_0(
  MR_Word Lang_10,
  MR_Word HeadVar__2_27)
{
  {
    MR_bool succeeded = (Lang_10 == HeadVar__2_27);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__204__1_1_p_0(
  MR_Word LambdaHeadVar__1_41)
{
  {
    MR_bool succeeded;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Type_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_41, (MR_Integer) 1))));

    succeeded = ((((MR_tag((MR_Word) Type_109)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_109, (MR_Integer) 0)))) == (MR_Integer) 7)));
    if (succeeded)
    {
      Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_109, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) Var_42)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_Integer) 0);
        if (succeeded)
        {
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__199__1_1_p_0(
  MR_Word LambdaHeadVar__1_39)
{
  {
    MR_bool succeeded;
    MR_Word Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_39, (MR_Integer) 1))));
    MR_Word Var_40;

    succeeded = ((((MR_tag((MR_Word) Type_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_15, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_15, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 0);
      if (succeeded)
      {
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_func_name__78__1_2_p_0(
  MR_Word Lang_12,
  MR_Word HeadVar__2_26)
{
  {
    MR_bool succeeded = (Lang_12 == HeadVar__2_26);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn__58__1_2_p_0(
  MR_Word Lang_12,
  MR_Word HeadVar__2_23)
{
  {
    MR_bool succeeded = (Lang_12 == HeadVar__2_23);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export____Compare____locn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export____Unify____locn_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_exported_enum_constant_3_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_exported_enum_constant__434__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_exported_enum_constant_3_p_0(
  MR_Word ExportedConstant_4)
{
  {
    MR_bool succeeded;
    MR_String Name_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), ExportedConstant_4, (MR_Integer) 0))));
    MR_Word Initializer_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedConstant_4, (MR_Integer) 1))));
    MR_Integer Value_8;
    MR_Word Var_19;
    MR_Word Var_20;

    mercury__io__write_string_3_p_0((MR_String) "#define ");
    mercury__io__write_string_3_p_0(Name_6);
    mercury__io__write_string_3_p_0((MR_String) " ");
    succeeded = ((MR_tag((MR_Word) Initializer_7)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Initializer_7, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (succeeded)
          Value_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 1))));
      }
    }
    if (succeeded)
      mercury__io__write_int_3_p_0(Value_8);
    else
    {
      MR_Word Lang_10;
      MR_String Value_32;
      MR_Word Var_22;
      MR_Word Var_23;

      succeeded = ((MR_tag((MR_Word) Initializer_7)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Initializer_7, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) Var_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_23, (MR_Integer) 0)))) == (MR_Integer) 14)));
          if (succeeded)
          {
            Lang_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_23, (MR_Integer) 1))) & (MR_Integer) 3);
            Value_32 = ((MR_String) ((MR_hl_field(MR_mktag(3), Var_23, (MR_Integer) 2))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_24;

        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_1[0]));
          MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_exported_enum_constant_3_p_0_1));
          MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Lang_10));
          MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_24, (MR_String) "predicate \140ml_backend.mlds_to_c_export.mlds_output_exported_enum_constant\'/3", (MR_String) "mlconst_foreign for language other than C.");
        mercury__io__write_string_3_p_0(Value_32);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.mlds_output_exported_enum_constant\'/3", (MR_String) "tag for export enumeration is not enum or foreign");
          return;
        }
    }
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_export_enum_5_p_0(
  MR_Word Opts_6,
  MR_Integer _Indent_7,
  MR_Word ExportedEnum_8)
{
  ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0(Opts_6, ExportedEnum_8);
}

static void MR_CALL 
ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_export__mlds_output_exported_enum_constant_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_p_0(
  MR_Word Opts_6,
  MR_Word ExportedEnum_8)
{
  {
    MR_Word Lang_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ExportedEnum_8, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedEnum_8, (MR_Integer) 1))));
    MR_Word ExportConstants_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedEnum_8, (MR_Integer) 3))));

    switch (Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
          MR_Box conv0_STATE_VARIABLE_IO_15;

          ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_16, Context_11);
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_5[5]), ExportConstants_13, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_15);
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 3:
        {
        }
        break;
      case (MR_Integer) 2:
        {
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_arg_4_p_0(
  MR_Word Opts_5,
  MR_Word Arg_6)
{
  {
    MR_bool succeeded;
    MR_Word LocalVarName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_6, (MR_Integer) 0))));
    MR_Word Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_6, (MR_Integer) 1))));
    MR_Word BoxedLocalVarName_11;
    MR_String Name_27;
    MR_Integer Seq_28;
    MR_Word Var_16;

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
    succeeded = ((((MR_tag((MR_Word) Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
      if (succeeded)
      {
      }
    }
    if (succeeded)
      ml_backend__mlds_to_c_name__mlds_output_local_var_name_3_p_0(BoxedLocalVarName_11);
    else
    {
      MR_Word Var_18;
      MR_Word Var_19;

      succeeded = ((((MR_tag((MR_Word) Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 0)))) == (MR_Integer) 7)));
      if (succeeded)
      {
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_18, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_18, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        mercury__io__write_string_3_p_0((MR_String) "&");
        ml_backend__mlds_to_c_name__mlds_output_local_var_name_3_p_0(BoxedLocalVarName_11);
      }
      else
      {
        ml_backend__mlds_to_c_type__mlds_output_cast_4_p_0(Opts_5, Type_9);
        ml_backend__mlds_to_c_name__mlds_output_local_var_name_3_p_0(LocalVarName_8);
      }
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_output_defns_4_p_0(
  MR_Word Opts_5,
  MR_Word Arg_6)
{
  {
    MR_bool succeeded;
    MR_Word LocalVarName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_6, (MR_Integer) 0))));
    MR_Word Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_6, (MR_Integer) 1))));
    MR_Word BoxedLocalVarName_11;
    MR_Word PointedToType_12;
    MR_String Name_26;
    MR_Integer Seq_27;
    MR_Word Type_31;

    mercury__io__write_string_3_p_0((MR_String) "\t");
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
    succeeded = ((((MR_tag((MR_Word) Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 0)))) == (MR_Integer) 7)));
    if (succeeded)
    {
      Type_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 1))));
      PointedToType_12 = Type_31;
    }
    else
    {
      MR_Box conv0_PointedToType_12;

      {
        conv0_PointedToType_12 = mercury__require__unexpected_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_String) "function \140ml_backend.mlds_to_c_export.pointed_to_type\'/1", (MR_String) "not pointer");
        return;
      }
      PointedToType_12 = ((MR_Word) (conv0_PointedToType_12));
    }
    ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(Opts_5, PointedToType_12);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    ml_backend__mlds_to_c_name__mlds_output_local_var_name_3_p_0(BoxedLocalVarName_11);
    ml_backend__mlds_to_c_type__mlds_output_type_suffix_no_size_4_p_0(Opts_5, PointedToType_12);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_input_defns_4_p_0(
  MR_Word Opts_5,
  MR_Word Arg_6)
{
  {
    MR_bool succeeded;
    MR_Word LocalVarName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_6, (MR_Integer) 0))));
    MR_Word Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_6, (MR_Integer) 1))));
    MR_Word BoxedLocalVarName_11;
    MR_String Name_25;
    MR_Integer Seq_26;

    mercury__io__write_string_3_p_0((MR_String) "\t");
    succeeded = ((MR_tag((MR_Word) LocalVarName_8)) == (MR_Integer) 1);
    if (succeeded)
    {
      Name_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), LocalVarName_8, (MR_Integer) 0))));
      Seq_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LocalVarName_8, (MR_Integer) 1))));
      {
        BoxedLocalVarName_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), BoxedLocalVarName_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), BoxedLocalVarName_11, 1) = ((MR_Box) (Name_25));
        MR_hl_field(MR_mktag(3), BoxedLocalVarName_11, 2) = ((MR_Box) (Seq_26));
      }
    }
    else
    {
      MR_String NameStr_27;
      MR_Word Var_28;

      NameStr_27 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_8);
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (NameStr_27));
      }
      {
        BoxedLocalVarName_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), BoxedLocalVarName_11, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), BoxedLocalVarName_11, 1) = ((MR_Box) (Var_28));
      }
    }
    ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(Opts_5, Type_9);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    ml_backend__mlds_to_c_name__mlds_output_local_var_name_3_p_0(BoxedLocalVarName_11);
    ml_backend__mlds_to_c_type__mlds_output_type_suffix_no_size_4_p_0(Opts_5, Type_9);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_output_arg_3_p_0(
  MR_Word Arg_4)
{
  {
    MR_bool succeeded;
    MR_Word LocalVarName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_4, (MR_Integer) 0))));
    MR_Word Type_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_4, (MR_Integer) 1))));
    MR_Word BoxedLocalVarName_9;
    MR_Word Var_14;
    MR_String Name_26;
    MR_Integer Seq_27;
    MR_Word Type_31;

    succeeded = ((MR_tag((MR_Word) LocalVarName_6)) == (MR_Integer) 1);
    if (succeeded)
    {
      Name_26 = ((MR_String) ((MR_hl_field(MR_mktag(1), LocalVarName_6, (MR_Integer) 0))));
      Seq_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LocalVarName_6, (MR_Integer) 1))));
      {
        BoxedLocalVarName_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), BoxedLocalVarName_9, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), BoxedLocalVarName_9, 1) = ((MR_Box) (Name_26));
        MR_hl_field(MR_mktag(3), BoxedLocalVarName_9, 2) = ((MR_Box) (Seq_27));
      }
    }
    else
    {
      MR_String NameStr_28;
      MR_Word Var_29;

      NameStr_28 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_6);
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (NameStr_28));
      }
      {
        BoxedLocalVarName_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), BoxedLocalVarName_9, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), BoxedLocalVarName_9, 1) = ((MR_Box) (Var_29));
      }
    }
    mercury__io__write_string_3_p_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(");
    succeeded = ((((MR_tag((MR_Word) Type_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0)))) == (MR_Integer) 7)));
    if (succeeded)
    {
      Type_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 1))));
      Var_14 = Type_31;
    }
    else
    {
      MR_Box conv0_Var_14;

      {
        conv0_Var_14 = mercury__require__unexpected_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_String) "function \140ml_backend.mlds_to_c_export.pointed_to_type\'/1", (MR_String) "not pointer");
        return;
      }
      Var_14 = ((MR_Word) (conv0_Var_14));
    }
    ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_4_p_0((MR_Integer) 0, Var_14);
    ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_4_p_0((MR_Integer) 1, Var_14);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    ml_backend__mlds_to_c_name__mlds_output_local_var_name_3_p_0(BoxedLocalVarName_9);
    mercury__io__write_string_3_p_0((MR_String) ", *");
    ml_backend__mlds_to_c_name__mlds_output_local_var_name_3_p_0(LocalVarName_6);
    mercury__io__write_string_3_p_0((MR_String) ");\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_input_arg_3_p_0(
  MR_Word Arg_4)
{
  {
    MR_bool succeeded;
    MR_Word LocalVarName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_4, (MR_Integer) 0))));
    MR_Word Type_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_4, (MR_Integer) 1))));
    MR_Word BoxedLocalVarName_9;
    MR_String Name_25;
    MR_Integer Seq_26;

    succeeded = ((MR_tag((MR_Word) LocalVarName_6)) == (MR_Integer) 1);
    if (succeeded)
    {
      Name_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), LocalVarName_6, (MR_Integer) 0))));
      Seq_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LocalVarName_6, (MR_Integer) 1))));
      {
        BoxedLocalVarName_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), BoxedLocalVarName_9, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), BoxedLocalVarName_9, 1) = ((MR_Box) (Name_25));
        MR_hl_field(MR_mktag(3), BoxedLocalVarName_9, 2) = ((MR_Box) (Seq_26));
      }
    }
    else
    {
      MR_String NameStr_27;
      MR_Word Var_28;

      NameStr_27 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_6);
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (NameStr_27));
      }
      {
        BoxedLocalVarName_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), BoxedLocalVarName_9, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), BoxedLocalVarName_9, 1) = ((MR_Box) (Var_28));
      }
    }
    mercury__io__write_string_3_p_0((MR_String) "\tMR_MAYBE_BOX_FOREIGN_TYPE(");
    ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_4_p_0((MR_Integer) 0, Type_7);
    ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_4_p_0((MR_Integer) 1, Type_7);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    ml_backend__mlds_to_c_name__mlds_output_local_var_name_3_p_0(LocalVarName_6);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    ml_backend__mlds_to_c_name__mlds_output_local_var_name_3_p_0(BoxedLocalVarName_9);
    mercury__io__write_string_3_p_0((MR_String) ");\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_ignore_opts_5_p_0(
  MR_Word PrefixSuffix_6,
  MR_Word _Opts_7,
  MR_Word MLDS_Type_8)
{
  ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_114_97_103_109_97_95_101_120_112_111_114_116_95_116_121_112_101_95_105_103_110_111_114_101_95_111_112_116_115_95_95_91_50_93_95_48_5_p_0(PrefixSuffix_6, MLDS_Type_8);
}

static void MR_CALL 
ml_backend__mlds_to_c_export__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_114_97_103_109_97_95_101_120_112_111_114_116_95_116_121_112_101_95_105_103_110_111_114_101_95_111_112_116_115_95_95_91_50_93_95_48_5_p_0(
  MR_Word PrefixSuffix_6,
  MR_Word MLDS_Type_8)
{
  ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_4_p_0(PrefixSuffix_6, MLDS_Type_8);
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_export_enums_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_export__mlds_output_export_enum_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_export_enums_5_p_0(
  MR_Word Opts_6,
  MR_Integer Indent_7,
  MR_Word ExportedEnums_8)
{
  {
    MR_Word Var_12;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_export_enums_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Opts_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Indent_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, ExportedEnums_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn__58__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_6_p_0(
  MR_Word Opts_7,
  MR_Word ModuleName_8,
  MR_Integer Indent_9,
  MR_Word PragmaExport_10)
{
  {
    MR_bool succeeded;
    MR_Word Lang_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PragmaExport_10, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word MLDS_Name_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaExport_10, (MR_Integer) 2))));
    MR_Word MLDS_Signature_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaExport_10, (MR_Integer) 3))));
    MR_Word Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaExport_10, (MR_Integer) 5))));
    MR_Word Var_20;
    MR_Word Var_27;
    MR_Word Var_32;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_1[0]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Lang_12));
      MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_20, (MR_String) "predicate \140ml_backend.mlds_to_c_export.mlds_output_pragma_export_defn\'/6", (MR_String) "foreign_export to language other than C.");
    ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_6_p_0(Opts_7, ModuleName_8, Indent_9, PragmaExport_10);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    Var_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_27, Context_17);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
    mercury__io__write_string_3_p_0((MR_String) "{\n");
    Var_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_32, Context_17);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
    ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0(Opts_7, MLDS_Name_14, MLDS_Signature_15);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_export__mlds_output_pragma_output_arg_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_prefix_suffix_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_export__mlds_output_pragma_input_arg_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_export__mlds_output_pragma_export_output_defns_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_export__mlds_output_pragma_export_input_defns_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__204__1_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__199__1_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0(
  MR_Word Opts_6,
  MR_Word FuncName_7,
  MR_Word Signature_8)
{
  {
    MR_bool succeeded;
    MR_Word Parameters_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_8, (MR_Integer) 0))));
    MR_Word RetTypes_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_8, (MR_Integer) 1))));
    MR_Word CForeignTypeInputs_20;
    MR_Word CForeignTypeOutputs_21;
    MR_Word Var_45;
    MR_Word Var_48;

    CForeignTypeInputs_20 = mercury__list__filter_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_5[0]), Parameters_10);
    CForeignTypeOutputs_21 = mercury__list__filter_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_5[1]), Parameters_10);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (Opts_6));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), CForeignTypeInputs_20, (MR_String) "", Var_45);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_body_5_p_0_4));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (Opts_6));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), CForeignTypeOutputs_21, (MR_String) "", Var_48);
    if (!((RetTypes_11 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_11, (MR_Integer) 1))));
      MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_11, (MR_Integer) 0))));

      if ((Var_134 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_52;

        succeeded = ((((MR_tag((MR_Word) Var_135)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_135, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_135, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_52)) == (MR_Integer) 0);
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "\t");
          ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_prefix_suffix_3_p_0(Var_135);
          mercury__io__write_string_3_p_0((MR_String) " ret_value;\n");
          mercury__io__write_string_3_p_0((MR_String) "\t");
          ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(Opts_6, Var_135);
          mercury__io__write_string_3_p_0((MR_String) " boxed_ret_value;\n");
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "\t");
          ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_prefix_suffix_3_p_0(Var_135);
          mercury__io__write_string_3_p_0((MR_String) " ret_value;\n");
        }
      }
    }
    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), CForeignTypeInputs_20, (MR_String) "", (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_5[2]));
    if ((RetTypes_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "\t");
      ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_5_p_0(Opts_6, FuncName_7, Parameters_10);
    }
    else
    {
      MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_11, (MR_Integer) 1))));
      MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_11, (MR_Integer) 0))));

      if ((Var_136 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_79;

        succeeded = ((((MR_tag((MR_Word) Var_137)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_137, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_137, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_79)) == (MR_Integer) 0);
          if (succeeded)
          {
          }
        }
        if (succeeded)
          mercury__io__write_string_3_p_0((MR_String) "\tboxed_ret_value = ");
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "\tret_value = (");
          ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_prefix_suffix_3_p_0(Var_137);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_5_p_0(Opts_6, FuncName_7, Parameters_10);
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "\treturn (");
        ml_backend__mlds_to_c_type__mlds_output_return_list_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), RetTypes_11, (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_5[3]));
        mercury__io__write_string_3_p_0((MR_String) ") ");
      }
    }
    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), CForeignTypeOutputs_21, (MR_String) "", (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_5[4]));
    if (!((RetTypes_11 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_11, (MR_Integer) 1))));
      MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_11, (MR_Integer) 0))));

      if ((Var_138 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_96;

        succeeded = ((((MR_tag((MR_Word) Var_139)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_139, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_139, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_96)) == (MR_Integer) 0);
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(");
          ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_prefix_suffix_3_p_0(Var_139);
          mercury__io__write_string_3_p_0((MR_String) ", boxed_ret_value, ret_value);\n");
        }
        mercury__io__write_string_3_p_0((MR_String) "\treturn ret_value;\n");
      }
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_export__mlds_output_pragma_export_arg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_5_p_0(
  MR_Word Opts_6,
  MR_Word FuncName_7,
  MR_Word Parameters_8)
{
  {
    MR_Word Var_16;

    ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_3_p_0(FuncName_7);
    mercury__io__write_string_3_p_0((MR_String) "(");
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_call_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Opts_6));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Parameters_8, (MR_String) ", ", Var_16);
    mercury__io__write_string_3_p_0((MR_String) ");\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_prefix_suffix_3_p_0(
  MR_Word Type_4)
{
  {
    ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_4_p_0((MR_Integer) 0, Type_4);
    ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_4_p_0((MR_Integer) 1, Type_4);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_4_p_0(
  MR_Word PrefixSuffix_5,
  MR_Word MLDS_Type_6)
{
  switch (PrefixSuffix_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
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
              mercury__io__write_string_3_p_0((MR_String) "MR_Word");
              break;
            case (MR_Integer) 1:
              {
                MR_String TypeStr_61;

                TypeStr_61 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 0U));
                mercury__io__write_string_3_p_0(TypeStr_61);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String TypeStr_62;

                TypeStr_62 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 4U));
                mercury__io__write_string_3_p_0(TypeStr_62);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String TypeStr_63;

                TypeStr_63 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0((MR_Word) ((MR_Unsigned) 8U));
                mercury__io__write_string_3_p_0(TypeStr_63);
              }
              break;
            case (MR_Integer) 4:
              mercury__io__write_string_3_p_0((MR_String) "MR_bool");
              break;
            case (MR_Integer) 9:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.mlds_output_pragma_export_type\'/4", (MR_String) "unknown_type");
                return;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          mercury__io__write_string_3_p_0((MR_String) "MR_Word");
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word MerType_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));
                MR_String TypeStr_11;

                TypeStr_11 = backend_libs__foreign__maybe_foreign_type_to_c_string_2_f_0(MerType_9, (MR_Word) ((MR_Unsigned) 0U));
                mercury__io__write_string_3_p_0(TypeStr_11);
              }
              break;
            case (MR_Integer) 1:
              mercury__io__write_string_3_p_0((MR_String) "MR_ArrayPtr");
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 8:
              mercury__io__write_string_3_p_0((MR_String) "MR_Word");
              break;
            case (MR_Integer) 3:
              {
                MR_Word IntType_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))) & (MR_Integer) 15);
                MR_Word Var_50;
                MR_String TypeStr_60;

                {
                  Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_50, 0) = (MR_Box) ((MR_Unsigned) (IntType_18));
                }
                TypeStr_60 = backend_libs__foreign__exported_builtin_type_to_c_string_1_f_0(Var_50);
                mercury__io__write_string_3_p_0(TypeStr_60);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ForeignType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ForeignType_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_String Name_20;
                      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignType_19, (MR_Integer) 0))));

                      Name_20 = (MR_String) (Var_42);
                      mercury__io__write_string_3_p_0(Name_20);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.mlds_output_pragma_export_type\'/4", (MR_String) "java foreign_type");
                      return;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.mlds_output_pragma_export_type\'/4", (MR_String) "csharp foreign_type");
                      return;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_export.mlds_output_pragma_export_type\'/4", (MR_String) "erlang foreign_type");
                      return;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Type_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_6, (MR_Integer) 1))));

                ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_4_p_0((MR_Integer) 0, Type_24);
                mercury__io__write_string_3_p_0((MR_String) " *");
              }
              break;
            case (MR_Integer) 9:
              mercury__io__write_string_3_p_0((MR_String) "MR_Word");
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
ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_ignore_opts_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_export__mlds_output_pragma_export_type_ignore_opts_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_c_export__IntroducedFrom__pred__mlds_output_pragma_export_func_name__78__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_6_p_0(
  MR_Word Opts_7,
  MR_Word ModuleName_8,
  MR_Integer Indent_9,
  MR_Word Export_10)
{
  {
    MR_bool succeeded;
    MR_Word Lang_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Export_10, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_String ExportName_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Export_10, (MR_Integer) 1))));
    MR_Word Signature_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_10, (MR_Integer) 3))));
    MR_Word Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Export_10, (MR_Integer) 5))));
    MR_Word FuncName_18;
    MR_Word QualFuncName_19;
    MR_Word Var_23;
    MR_Word Var_27;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ml_backend__mlds_to_c_export_scalar_common_1[0]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ml_backend__mlds_to_c_export__mlds_output_pragma_export_func_name_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Lang_12));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_23, (MR_String) "predicate \140ml_backend.mlds_to_c_export.mlds_output_pragma_export_func_name\'/6", (MR_String) "export to language other than C.");
    {
      FuncName_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FuncName_18, 0) = ((MR_Box) (ExportName_13));
    }
    {
      QualFuncName_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), QualFuncName_19, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), QualFuncName_19, 1) = ((MR_Box) (FuncName_18));
    }
    Var_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_27, Context_17);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
    ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_10_p_0(Opts_7, Indent_9, QualFuncName_19, Context_17, (MR_String) "", Signature_15, (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_3[0]), (MR_Word) (&ml_backend__mlds_to_c_export_scalar_common_3[1]));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_export____Unify____locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_c_export____Unify____locn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_export____Compare____locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_c_export____Compare____locn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
