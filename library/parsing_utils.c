/*
** Automatically generated from `parsing_utils.m'
** by the Mercury compiler,
** version rotd-2024-07-30
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


// :- module parsing_utils.
// :- implementation.

/*
INIT mercury__parsing_utils__init
ENDINIT
*/

#include "parsing_utils.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_FA_TypeInfo_Struct1 mercury__parsing_utils__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo mercury__parsing_utils__parsing_utils__field_types_fail_message_info_0_0[2];

static const MR_DuFunctorDesc mercury__parsing_utils__parsing_utils__du_functor_desc_fail_message_info_0_0;

static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_stag_ordered_fail_message_info_0_0[1];

static const MR_DuPtagLayout mercury__parsing_utils__parsing_utils__du_ptag_ordered_fail_message_info_0[1];

static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_name_ordered_fail_message_info_0[1];

static const MR_Integer mercury__parsing_utils__parsing_utils__functor_number_map_fail_message_info_0[1];

static const MR_FA_TypeInfo_Struct1 mercury__parsing_utils__array__ti_array_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mercury__parsing_utils__parsing_utils__field_types_parse_result_1_0[1];

static const MR_DuFunctorDesc mercury__parsing_utils__parsing_utils__du_functor_desc_parse_result_1_0;

static const MR_PseudoTypeInfo mercury__parsing_utils__parsing_utils__field_types_parse_result_1_1[3];

static const MR_ConstString mercury__parsing_utils__parsing_utils__field_names_parse_result_1_1[3];

static const MR_DuFunctorDesc mercury__parsing_utils__parsing_utils__du_functor_desc_parse_result_1_1;

static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_stag_ordered_parse_result_1_0[1];

static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_stag_ordered_parse_result_1_1[1];

static const MR_DuPtagLayout mercury__parsing_utils__parsing_utils__du_ptag_ordered_parse_result_1[2];

static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_name_ordered_parse_result_1[2];

static const MR_Integer mercury__parsing_utils__parsing_utils__functor_number_map_parse_result_1[2];

static const MR_VA_PseudoTypeInfo_Struct4 mercury__parsing_utils____vpti_pred_4__plain_parsing_utils__type_ctor_info_src_0__pseudo_1__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0;

static const MR_VA_PseudoTypeInfo_Struct6 mercury__parsing_utils____vpti_pred_6__plain_parsing_utils__type_ctor_info_src_0__pseudo_1__pseudo_2__pseudo_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0;

static const MR_VA_TypeInfo_Struct4 mercury__parsing_utils____vti_pred_4parsing_utils__type_ctor_info_src_0unit__type_ctor_info_unit_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mercury__parsing_utils__mutvar__ti_mutvar_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mercury__parsing_utils__mutvar__ti_mutvar_1parsing_utils__type_ctor_info_fail_message_info_0;

static const MR_PseudoTypeInfo mercury__parsing_utils__parsing_utils__field_types_src_0_0[5];

static const MR_ConstString mercury__parsing_utils__parsing_utils__field_names_src_0_0[5];

static const MR_DuFunctorDesc mercury__parsing_utils__parsing_utils__du_functor_desc_src_0_0;

static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_stag_ordered_src_0_0[1];

static const MR_DuPtagLayout mercury__parsing_utils__parsing_utils__du_ptag_ordered_src_0[1];

static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_name_ordered_src_0[1];

static const MR_Integer mercury__parsing_utils__parsing_utils__functor_number_map_src_0[1];

static MR_bool MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_114_101_118_95_97_99_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_p_0(
  MR_String Var_28,
  MR_Word Var_29,
  MR_Word Src_10,
  MR_Word STATE_VARIABLE_RevResult_0_15,
  MR_Word * STATE_VARIABLE_RevResult_16,
  MR_Box STATE_VARIABLE_S_0_17,
  MR_Box * STATE_VARIABLE_S_18,
  MR_Integer STATE_VARIABLE_PS_0_19,
  MR_Integer * STATE_VARIABLE_PS_20);

static MR_bool MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_114_101_118_95_97_99_99_95_95_104_111_54_95_95_91_49_44_32_52_44_32_53_93_95_48_6_p_0(
  MR_String Var_20,
  MR_Word Var_21,
  MR_Word Src_8,
  MR_Word STATE_VARIABLE_RevResult_0_12,
  MR_Word * STATE_VARIABLE_RevResult_13,
  MR_Integer STATE_VARIABLE_PS_0_14,
  MR_Integer * STATE_VARIABLE_PS_15);

static MR_bool MR_CALL 
mercury__parsing_utils__digits_2_5_p_0(
  MR_Integer Base_6,
  MR_Word Src_7,
  MR_Integer STATE_VARIABLE_PS_0_11,
  MR_Integer * STATE_VARIABLE_PS_12);

static MR_bool MR_CALL 
mercury__parsing_utils__imatch_string_2_5_p_0(
  MR_Integer N_6,
  MR_Integer I_7,
  MR_String MatchStr_8,
  MR_Integer Offset_9,
  MR_String Str_10);

static MR_bool MR_CALL 
mercury__parsing_utils__match_string_2_5_p_0(
  MR_Integer N_6,
  MR_Integer I_7,
  MR_String MatchStr_8,
  MR_Integer Offset_9,
  MR_String Str_10);

static MR_bool MR_CALL 
mercury__parsing_utils__new_src_and_ps_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
mercury__parsing_utils__parse_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____fail_message_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__parsing_utils____Compare____fail_message_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____line_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__parsing_utils____Compare____line_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____parse_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__parsing_utils____Compare____parse_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____parser_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__parsing_utils____Compare____parser_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____parser_with_state_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__parsing_utils____Compare____parser_with_state_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____ps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__parsing_utils____Compare____ps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____skip_whitespace_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__parsing_utils____Compare____skip_whitespace_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____src_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__parsing_utils____Compare____src_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__parsing_utils_scalar_common_1[5][2];

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_2[1][6];

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_3[3][3];

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_4[1][4];

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_5[1][5];

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_6[1][7];




static /* final */ const MR_Box mercury__parsing_utils_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__mutvar__mutvar__type_ctor_info_mutvar_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__mutvar__mutvar__type_ctor_info_mutvar_1)),
    ((MR_Box) (&mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_2[1][6] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__parsing_utils__parsing_utils__type_ctor_info_src_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_3[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__parsing_utils_scalar_common_6[0])),
    ((MR_Box) (mercury__parsing_utils__parse_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__parsing_utils_scalar_common_6[0])),
    ((MR_Box) (mercury__parsing_utils__new_src_and_ps_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_4[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__parsing_utils_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_5[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__parsing_utils_scalar_common_4[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_6[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__parsing_utils__parsing_utils__type_ctor_info_src_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "parsing_utils.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"


static const MR_FA_TypeInfo_Struct1 mercury__parsing_utils__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo mercury__parsing_utils__parsing_utils__field_types_fail_message_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__parsing_utils__maybe__ti_maybe_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__parsing_utils__parsing_utils__du_functor_desc_fail_message_info_0_0 = {
  (MR_String) "fail_message_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__parsing_utils__parsing_utils__field_types_fail_message_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_stag_ordered_fail_message_info_0_0[1] = { &mercury__parsing_utils__parsing_utils__du_functor_desc_fail_message_info_0_0 };

static const MR_DuPtagLayout mercury__parsing_utils__parsing_utils__du_ptag_ordered_fail_message_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__parsing_utils__parsing_utils__du_stag_ordered_fail_message_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_name_ordered_fail_message_info_0[1] = { &mercury__parsing_utils__parsing_utils__du_functor_desc_fail_message_info_0_0 };

static const MR_Integer mercury__parsing_utils__parsing_utils__functor_number_map_fail_message_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__parsing_utils____Unify____fail_message_info_0_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____fail_message_info_0_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "fail_message_info",
  { mercury__parsing_utils__parsing_utils__du_name_ordered_fail_message_info_0 },
  { mercury__parsing_utils__parsing_utils__du_ptag_ordered_fail_message_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__parsing_utils__parsing_utils__functor_number_map_fail_message_info_0,

};

static const MR_FA_TypeInfo_Struct1 mercury__parsing_utils__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_line_numbers_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__parsing_utils____Unify____line_numbers_0_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____line_numbers_0_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "line_numbers",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__parsing_utils__array__ti_array_1builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mercury__parsing_utils__parsing_utils__field_types_parse_result_1_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc mercury__parsing_utils__parsing_utils__du_functor_desc_parse_result_1_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__parsing_utils__parsing_utils__field_types_parse_result_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__parsing_utils__parsing_utils__field_types_parse_result_1_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__parsing_utils__maybe__ti_maybe_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mercury__parsing_utils__parsing_utils__field_names_parse_result_1_1[3] = {
  (MR_String) "error_message",
  (MR_String) "error_line",
  (MR_String) "error_col"
};

static const MR_DuFunctorDesc mercury__parsing_utils__parsing_utils__du_functor_desc_parse_result_1_1 = {
  (MR_String) "error",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__parsing_utils__parsing_utils__field_types_parse_result_1_1,
  mercury__parsing_utils__parsing_utils__field_names_parse_result_1_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_stag_ordered_parse_result_1_0[1] = { &mercury__parsing_utils__parsing_utils__du_functor_desc_parse_result_1_0 };

static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_stag_ordered_parse_result_1_1[1] = { &mercury__parsing_utils__parsing_utils__du_functor_desc_parse_result_1_1 };

static const MR_DuPtagLayout mercury__parsing_utils__parsing_utils__du_ptag_ordered_parse_result_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__parsing_utils__parsing_utils__du_stag_ordered_parse_result_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__parsing_utils__parsing_utils__du_stag_ordered_parse_result_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_name_ordered_parse_result_1[2] = {
  &mercury__parsing_utils__parsing_utils__du_functor_desc_parse_result_1_1,
  &mercury__parsing_utils__parsing_utils__du_functor_desc_parse_result_1_0
};

static const MR_Integer mercury__parsing_utils__parsing_utils__functor_number_map_parse_result_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_parse_result_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__parsing_utils____Unify____parse_result_1_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____parse_result_1_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "parse_result",
  { mercury__parsing_utils__parsing_utils__du_name_ordered_parse_result_1 },
  { mercury__parsing_utils__parsing_utils__du_ptag_ordered_parse_result_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__parsing_utils__parsing_utils__functor_number_map_parse_result_1,

};

static const MR_VA_PseudoTypeInfo_Struct4 mercury__parsing_utils____vpti_pred_4__plain_parsing_utils__type_ctor_info_src_0__pseudo_1__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) (&mercury__parsing_utils__parsing_utils__type_ctor_info_src_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_parser_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__parsing_utils____Unify____parser_1_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____parser_1_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "parser",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__parsing_utils____vpti_pred_4__plain_parsing_utils__type_ctor_info_src_0__pseudo_1__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_VA_PseudoTypeInfo_Struct6 mercury__parsing_utils____vpti_pred_6__plain_parsing_utils__type_ctor_info_src_0__pseudo_1__pseudo_2__pseudo_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) (&mercury__parsing_utils__parsing_utils__type_ctor_info_src_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_parser_with_state_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__parsing_utils____Unify____parser_with_state_2_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____parser_with_state_2_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "parser_with_state",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__parsing_utils____vpti_pred_6__plain_parsing_utils__type_ctor_info_src_0__pseudo_1__pseudo_2__pseudo_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_ps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__parsing_utils____Unify____ps_0_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____ps_0_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "ps",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_VA_TypeInfo_Struct4 mercury__parsing_utils____vti_pred_4parsing_utils__type_ctor_info_src_0unit__type_ctor_info_unit_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) (&mercury__parsing_utils__parsing_utils__type_ctor_info_src_0),
    (MR_TypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_skip_whitespace_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__parsing_utils____Unify____skip_whitespace_pred_0_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____skip_whitespace_pred_0_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "skip_whitespace_pred",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__parsing_utils____vti_pred_4parsing_utils__type_ctor_info_src_0unit__type_ctor_info_unit_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 mercury__parsing_utils__mutvar__ti_mutvar_1builtin__type_ctor_info_int_0 = {
  &mercury__mutvar__mutvar__type_ctor_info_mutvar_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct1 mercury__parsing_utils__mutvar__ti_mutvar_1parsing_utils__type_ctor_info_fail_message_info_0 = {
  &mercury__mutvar__mutvar__type_ctor_info_mutvar_1,
  { (MR_TypeInfo) (&mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0) }
};

static const MR_PseudoTypeInfo mercury__parsing_utils__parsing_utils__field_types_src_0_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__parsing_utils____vti_pred_4parsing_utils__type_ctor_info_src_0unit__type_ctor_info_unit_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__parsing_utils__mutvar__ti_mutvar_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__parsing_utils__mutvar__ti_mutvar_1parsing_utils__type_ctor_info_fail_message_info_0)
};

static const MR_ConstString mercury__parsing_utils__parsing_utils__field_names_src_0_0[5] = {
  (MR_String) "input_length",
  (MR_String) "input_string",
  (MR_String) "skip_ws_pred",
  (MR_String) "furthest_offset",
  (MR_String) "last_fail_message"
};

static const MR_DuFunctorDesc mercury__parsing_utils__parsing_utils__du_functor_desc_src_0_0 = {
  (MR_String) "src",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__parsing_utils__parsing_utils__field_types_src_0_0,
  mercury__parsing_utils__parsing_utils__field_names_src_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_stag_ordered_src_0_0[1] = { &mercury__parsing_utils__parsing_utils__du_functor_desc_src_0_0 };

static const MR_DuPtagLayout mercury__parsing_utils__parsing_utils__du_ptag_ordered_src_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__parsing_utils__parsing_utils__du_stag_ordered_src_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_name_ordered_src_0[1] = { &mercury__parsing_utils__parsing_utils__du_functor_desc_src_0_0 };

static const MR_Integer mercury__parsing_utils__parsing_utils__functor_number_map_src_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_src_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__parsing_utils____Unify____src_0_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____src_0_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "src",
  { mercury__parsing_utils__parsing_utils__du_name_ordered_src_0 },
  { mercury__parsing_utils__parsing_utils__du_ptag_ordered_src_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__parsing_utils__parsing_utils__functor_number_map_src_0,

};

void MR_CALL 
mercury__parsing_utils____Compare____src_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 == ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
        SubResult1_6 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_25;

{
#define MR_PROC_LABEL mercury__parsing_utils____Compare____src_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX2_7 ;
	S2 = ArgY2_8 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_25  = Res;
}
      succeeded = (Var_25 < (MR_Integer) 0);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_25 == (MR_Integer) 0);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 0;
        else
          SubResult2_9 = (MR_Integer) 2;
      }
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&mercury__parsing_utils_scalar_common_2[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&mercury__parsing_utils_scalar_common_1[2]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&mercury__parsing_utils_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__parsing_utils____Unify____src_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
      {
        succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX3_7), (MR_Word) (ArgY3_8));
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&mercury__parsing_utils_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_16_16 = (MR_Word) (&mercury__parsing_utils_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__parsing_utils____Compare____skip_whitespace_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
mercury__parsing_utils____Unify____skip_whitespace_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

void MR_CALL 
mercury__parsing_utils____Compare____ps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils____Unify____ps_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__parsing_utils____Compare____parser_with_state_2_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word TypeInfo_for_S_5,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
mercury__parsing_utils____Unify____parser_with_state_2_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word TypeInfo_for_S_4,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

void MR_CALL 
mercury__parsing_utils____Compare____parser_1_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
mercury__parsing_utils____Unify____parser_1_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

void MR_CALL 
mercury__parsing_utils____Compare____parse_result_1_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_12 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_8;

      mercury__builtin__compare_3_p_0((MR_Word) (&mercury__parsing_utils_scalar_common_1[0]), &SubResult1_8, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
      succeeded = (SubResult1_8 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_8;
      else
      {
        MR_Word SubResult2_11;

        succeeded = (ArgX2_9 < ArgY2_10);
        if (succeeded)
          SubResult2_11 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_9 == ArgY2_10);
          if (succeeded)
            SubResult2_11 = (MR_Integer) 0;
          else
            SubResult2_11 = (MR_Integer) 2;
        }
        succeeded = (SubResult2_11 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_11;
        else
        {
          succeeded = (ArgX3_12 < ArgY3_13);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX3_12 == ArgY3_13);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 0;
            else
              *HeadVar__1_1 = (MR_Integer) 2;
          }
        }
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0));

    mercury__builtin__compare_3_p_0(TypeInfo_for_T_16, HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__parsing_utils____Unify____parse_result_1_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_14_14;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_8;
    MR_Integer ArgX3_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      TypeInfo_14_14 = (MR_Word) (&mercury__parsing_utils_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
      {
        succeeded = (ArgX2_7 == ArgY2_8);
        if (succeeded)
          succeeded = (ArgX3_9 == ArgY3_10);
      }
    }
  }
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__parsing_utils____Compare____line_numbers_0_0(
  MR_Word * HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2,
  MR_ArrayPtr HeadVar__3_3)
{
  MR_ArrayPtr Cast_HeadVar1_4 = HeadVar__2_2;
  MR_ArrayPtr Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__parsing_utils_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__parsing_utils____Unify____line_numbers_0_0(
  MR_ArrayPtr HeadVar__1_1,
  MR_ArrayPtr HeadVar__2_2)
{
  MR_bool succeeded;
  MR_ArrayPtr Cast_HeadVar1_3 = HeadVar__1_1;
  MR_ArrayPtr Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__array____Unify____array_1_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_ArrayPtr) (Cast_HeadVar1_3), (MR_ArrayPtr) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mercury__parsing_utils____Compare____fail_message_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 == ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
        SubResult1_6 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&mercury__parsing_utils_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
mercury__parsing_utils____Unify____fail_message_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&mercury__parsing_utils_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__skip_whitespace_3_p_0(
  MR_Word Src_4,
  MR_Integer PS0_5,
  MR_Integer * PS_6)
{
  MR_bool succeeded;
  MR_Word SkipWS_7;
  MR_Word SkipWS0_9 = ((MR_Word) ((MR_hl_field(0, Src_4, (MR_Integer) 2))));
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv2_Var_8;
  MR_Box conv1_PS_6;

{
#define MR_PROC_LABEL mercury__parsing_utils__skip_whitespace_3_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 = SkipWS0_9 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	SkipWS_7  = SkipWS;
}
  func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, SkipWS_7, (MR_Integer) 1))));
  succeeded = func_0(((MR_Box) (SkipWS_7)), ((MR_Box) (Src_4)), &conv2_Var_8, ((MR_Box) (PS0_5)), &conv1_PS_6);
  if (succeeded)
  {
    *PS_6 = ((MR_Integer) (conv1_PS_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__parsing_utils__unsafe_skip_ws_pred_cast_2_p_0(
  MR_Word SkipWS0_1,
  MR_Word * SkipWS_2)
{
{
#define MR_PROC_LABEL mercury__parsing_utils__unsafe_skip_ws_pred_cast_2_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 = SkipWS0_1 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	*SkipWS_2  = SkipWS;
}
}

MR_bool MR_CALL 
mercury__parsing_utils__fail_with_message_6_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_String Msg_7,
  MR_Integer Offset_8,
  MR_Word Src_9,
  MR_Box * Val_10,
  MR_Integer HeadVar__5_11,
  MR_Integer * PS_12)
{
  MR_bool succeeded;

  succeeded = mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_105_108_95_119_105_116_104_95_109_101_115_115_97_103_101_95_95_91_54_93_95_48_6_p_0(TypeInfo_for_T_13, Msg_7, Offset_8, Src_9, Val_10, PS_12);
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_105_108_95_119_105_116_104_95_109_101_115_115_97_103_101_95_95_91_54_93_95_48_6_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_String Msg_7,
  MR_Integer Offset_8,
  MR_Word Src_9,
  MR_Box * Val_10,
  MR_Integer * PS_12)
{
  MR_bool succeeded;

  succeeded = mercury__parsing_utils__fail_with_message_5_p_0(TypeInfo_for_T_13, Msg_7, Src_9, Val_10, Offset_8, PS_12);
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__fail_with_message_5_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_String Msg_6,
  MR_Word Src_7,
  MR_Box * Val_8,
  MR_Integer STATE_VARIABLE_PS_0_10,
  MR_Integer * STATE_VARIABLE_PS_11)
{
  MR_bool succeeded;
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, Src_7, (MR_Integer) 4))));
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Integer Var_16;

  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (Msg_6));
  }
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (STATE_VARIABLE_PS_0_10));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (Var_14));
  }
  mercury__mutvar__set_mutvar_2_p_0((MR_Word) (&mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0), Var_12, ((MR_Box) (Var_13)));
  Var_15 = ((MR_Word) ((MR_hl_field(0, Src_7, (MR_Integer) 3))));
  mercury__mutvar__set_mutvar_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_15, ((MR_Box) (STATE_VARIABLE_PS_0_10)));
{
#define MR_PROC_LABEL mercury__parsing_utils__fail_with_message_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    Var_16 = (MR_Integer) 0;
    succeeded = mercury__private_builtin__typed_unify_2_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeInfo_for_T_25, ((MR_Box) (Var_16)), Val_8);
  }
  if (succeeded)
  {
    *STATE_VARIABLE_PS_11 = STATE_VARIABLE_PS_0_10;
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__comma_separated_list_7_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeInfo_for_S_19,
  MR_Word P_8,
  MR_Word Src_9,
  MR_Word * Result_10,
  MR_Box STATE_VARIABLE_S_0_13,
  MR_Box * STATE_VARIABLE_S_14,
  MR_Integer STATE_VARIABLE_PS_0_15,
  MR_Integer * STATE_VARIABLE_PS_16)
{
  MR_bool succeeded;

  succeeded = mercury__parsing_utils__separated_list_8_p_0(TypeInfo_for_T_18, TypeInfo_for_S_19, (MR_String) ",", P_8, Src_9, Result_10, STATE_VARIABLE_S_0_13, STATE_VARIABLE_S_14, STATE_VARIABLE_PS_0_15, STATE_VARIABLE_PS_16);
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__comma_separated_list_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word P_6,
  MR_Word Src_7,
  MR_Word * Result_8,
  MR_Integer STATE_VARIABLE_PS_0_10,
  MR_Integer * STATE_VARIABLE_PS_11)
{
  MR_bool succeeded;

  succeeded = mercury__parsing_utils__separated_list_6_p_0(TypeInfo_for_T_13, (MR_String) ",", P_6, Src_7, Result_8, STATE_VARIABLE_PS_0_10, STATE_VARIABLE_PS_11);
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__separated_list_8_p_0(
  MR_Word TypeInfo_for_T_48,
  MR_Word TypeInfo_for_S_49,
  MR_String Separator_9,
  MR_Word P_10,
  MR_Word Src_11,
  MR_Word * Result_12,
  MR_Box STATE_VARIABLE_S_0_21,
  MR_Box * STATE_VARIABLE_S_22,
  MR_Integer STATE_VARIABLE_PS_0_23,
  MR_Integer * STATE_VARIABLE_PS_24)
{
  MR_bool succeeded;
  MR_Box X_19;
  MR_Box STATE_VARIABLE_S_38_38;
  MR_Integer STATE_VARIABLE_PS_39_39;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_10, (MR_Integer) 1))));
  MR_Box conv1_STATE_VARIABLE_PS_39_39;

  succeeded = func_0(((MR_Box) (P_10)), ((MR_Box) (Src_11)), &X_19, STATE_VARIABLE_S_0_21, &STATE_VARIABLE_S_38_38, ((MR_Box) (STATE_VARIABLE_PS_0_23)), &conv1_STATE_VARIABLE_PS_39_39);
  if (succeeded)
  {
    STATE_VARIABLE_PS_39_39 = ((MR_Integer) (conv1_STATE_VARIABLE_PS_39_39));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Xs_20;
    MR_Word RevResult_50;

    succeeded = mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_114_101_118_95_97_99_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_p_0(Separator_9, P_10, Src_11, (MR_Word) ((MR_Unsigned) 0U), &RevResult_50, STATE_VARIABLE_S_38_38, STATE_VARIABLE_S_22, STATE_VARIABLE_PS_39_39, STATE_VARIABLE_PS_24);
    if (succeeded)
    {
      mercury__list__reverse_2_p_0(TypeInfo_for_T_48, RevResult_50, &Xs_20);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Result_12 = base;
        MR_hl_field(1, base, 0) = X_19;
        MR_hl_field(1, base, 1) = ((MR_Box) (Xs_20));
      }
      succeeded = MR_TRUE;
    }
  }
  else
  {
    *Result_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_PS_24 = STATE_VARIABLE_PS_0_23;
    *STATE_VARIABLE_S_22 = STATE_VARIABLE_S_0_21;
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_114_101_118_95_97_99_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_p_0(
  MR_String Var_28,
  MR_Word Var_29,
  MR_Word Src_10,
  MR_Word STATE_VARIABLE_RevResult_0_15,
  MR_Word * STATE_VARIABLE_RevResult_16,
  MR_Box STATE_VARIABLE_S_0_17,
  MR_Box * STATE_VARIABLE_S_18,
  MR_Integer STATE_VARIABLE_PS_0_19,
  MR_Integer * STATE_VARIABLE_PS_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box X_14;
    MR_Box STATE_VARIABLE_S_21_21;
    MR_Integer STATE_VARIABLE_PS_22_22;
    MR_Integer STATE_VARIABLE_PS_35_31;
    MR_Integer STATE_VARIABLE_PS_11_32;
    MR_Word SkipWS_33;
    MR_Word SkipWS0_35;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv2_Var_34;
    MR_Box conv1_STATE_VARIABLE_PS_35_31;
    MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv4_STATE_VARIABLE_PS_22_22;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__parsing_utils__match_string_4_p_0(Var_28, Src_10, STATE_VARIABLE_PS_0_19, &STATE_VARIABLE_PS_11_32);
    if (succeeded)
    {
      SkipWS0_35 = ((MR_Word) ((MR_hl_field(0, Src_10, (MR_Integer) 2))));
{
#define MR_PROC_LABEL mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_114_101_118_95_97_99_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 = SkipWS0_35 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	SkipWS_33  = SkipWS;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, SkipWS_33, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (SkipWS_33)), ((MR_Box) (Src_10)), &conv2_Var_34, ((MR_Box) (STATE_VARIABLE_PS_11_32)), &conv1_STATE_VARIABLE_PS_35_31);
      if (succeeded)
      {
        STATE_VARIABLE_PS_35_31 = ((MR_Integer) (conv1_STATE_VARIABLE_PS_35_31));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Var_29, (MR_Integer) 1))));
        succeeded = func_3(((MR_Box) (Var_29)), ((MR_Box) (Src_10)), &X_14, STATE_VARIABLE_S_0_17, &STATE_VARIABLE_S_21_21, ((MR_Box) (STATE_VARIABLE_PS_35_31)), &conv4_STATE_VARIABLE_PS_22_22);
        if (succeeded)
        {
          STATE_VARIABLE_PS_22_22 = ((MR_Integer) (conv4_STATE_VARIABLE_PS_22_22));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_RevResult_23_23;
      MR_Word next_value_of_STATE_VARIABLE_RevResult_0_15;
      MR_Box next_value_of_STATE_VARIABLE_S_0_17;
      MR_Integer next_value_of_STATE_VARIABLE_PS_0_19;

      {
        STATE_VARIABLE_RevResult_23_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevResult_23_23, 0) = X_14;
        MR_hl_field(1, STATE_VARIABLE_RevResult_23_23, 1) = ((MR_Box) (STATE_VARIABLE_RevResult_0_15));
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_RevResult_0_15 = STATE_VARIABLE_RevResult_23_23;
      next_value_of_STATE_VARIABLE_S_0_17 = STATE_VARIABLE_S_21_21;
      next_value_of_STATE_VARIABLE_PS_0_19 = STATE_VARIABLE_PS_22_22;
      STATE_VARIABLE_RevResult_0_15 = next_value_of_STATE_VARIABLE_RevResult_0_15;
      STATE_VARIABLE_S_0_17 = next_value_of_STATE_VARIABLE_S_0_17;
      STATE_VARIABLE_PS_0_19 = next_value_of_STATE_VARIABLE_PS_0_19;
      continue;
    }
    else
    {
{
#define MR_PROC_LABEL mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_114_101_118_95_97_99_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
        *STATE_VARIABLE_PS_20 = STATE_VARIABLE_PS_0_19;
        *STATE_VARIABLE_S_18 = STATE_VARIABLE_S_0_17;
        *STATE_VARIABLE_RevResult_16 = STATE_VARIABLE_RevResult_0_15;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__separated_list_6_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_String Separator_7,
  MR_Word P_8,
  MR_Word Src_9,
  MR_Word * Result_10,
  MR_Integer STATE_VARIABLE_PS_0_18,
  MR_Integer * STATE_VARIABLE_PS_19)
{
  MR_bool succeeded;
  MR_Box X_16;
  MR_Integer STATE_VARIABLE_PS_28_28;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_8, (MR_Integer) 1))));
  MR_Box conv1_STATE_VARIABLE_PS_28_28;

  succeeded = func_0(((MR_Box) (P_8)), ((MR_Box) (Src_9)), &X_16, ((MR_Box) (STATE_VARIABLE_PS_0_18)), &conv1_STATE_VARIABLE_PS_28_28);
  if (succeeded)
  {
    STATE_VARIABLE_PS_28_28 = ((MR_Integer) (conv1_STATE_VARIABLE_PS_28_28));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Xs_17;
    MR_Word RevResult_35;

    succeeded = mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_114_101_118_95_97_99_99_95_95_104_111_54_95_95_91_49_44_32_52_44_32_53_93_95_48_6_p_0(Separator_7, P_8, Src_9, (MR_Word) ((MR_Unsigned) 0U), &RevResult_35, STATE_VARIABLE_PS_28_28, STATE_VARIABLE_PS_19);
    if (succeeded)
    {
      mercury__list__reverse_2_p_0(TypeInfo_for_T_34, RevResult_35, &Xs_17);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(1, base, 0) = X_16;
        MR_hl_field(1, base, 1) = ((MR_Box) (Xs_17));
      }
      succeeded = MR_TRUE;
    }
  }
  else
  {
    *Result_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_PS_19 = STATE_VARIABLE_PS_0_18;
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_114_101_118_95_97_99_99_95_95_104_111_54_95_95_91_49_44_32_52_44_32_53_93_95_48_6_p_0(
  MR_String Var_20,
  MR_Word Var_21,
  MR_Word Src_8,
  MR_Word STATE_VARIABLE_RevResult_0_12,
  MR_Word * STATE_VARIABLE_RevResult_13,
  MR_Integer STATE_VARIABLE_PS_0_14,
  MR_Integer * STATE_VARIABLE_PS_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box X_11;
    MR_Integer STATE_VARIABLE_PS_16_16;
    MR_Integer STATE_VARIABLE_PS_26_23;
    MR_Integer STATE_VARIABLE_PS_11_24;
    MR_Word SkipWS_25;
    MR_Word SkipWS0_27;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv2_Var_26;
    MR_Box conv1_STATE_VARIABLE_PS_26_23;
    MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv4_STATE_VARIABLE_PS_16_16;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__parsing_utils__match_string_4_p_0(Var_20, Src_8, STATE_VARIABLE_PS_0_14, &STATE_VARIABLE_PS_11_24);
    if (succeeded)
    {
      SkipWS0_27 = ((MR_Word) ((MR_hl_field(0, Src_8, (MR_Integer) 2))));
{
#define MR_PROC_LABEL mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_114_101_118_95_97_99_99_95_95_104_111_54_95_95_91_49_44_32_52_44_32_53_93_95_48_6_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 = SkipWS0_27 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	SkipWS_25  = SkipWS;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, SkipWS_25, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (SkipWS_25)), ((MR_Box) (Src_8)), &conv2_Var_26, ((MR_Box) (STATE_VARIABLE_PS_11_24)), &conv1_STATE_VARIABLE_PS_26_23);
      if (succeeded)
      {
        STATE_VARIABLE_PS_26_23 = ((MR_Integer) (conv1_STATE_VARIABLE_PS_26_23));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Var_21, (MR_Integer) 1))));
        succeeded = func_3(((MR_Box) (Var_21)), ((MR_Box) (Src_8)), &X_11, ((MR_Box) (STATE_VARIABLE_PS_26_23)), &conv4_STATE_VARIABLE_PS_16_16);
        if (succeeded)
        {
          STATE_VARIABLE_PS_16_16 = ((MR_Integer) (conv4_STATE_VARIABLE_PS_16_16));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_RevResult_17_17;
      MR_Word next_value_of_STATE_VARIABLE_RevResult_0_12;
      MR_Integer next_value_of_STATE_VARIABLE_PS_0_14;

      {
        STATE_VARIABLE_RevResult_17_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevResult_17_17, 0) = X_11;
        MR_hl_field(1, STATE_VARIABLE_RevResult_17_17, 1) = ((MR_Box) (STATE_VARIABLE_RevResult_0_12));
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_RevResult_0_12 = STATE_VARIABLE_RevResult_17_17;
      next_value_of_STATE_VARIABLE_PS_0_14 = STATE_VARIABLE_PS_16_16;
      STATE_VARIABLE_RevResult_0_12 = next_value_of_STATE_VARIABLE_RevResult_0_12;
      STATE_VARIABLE_PS_0_14 = next_value_of_STATE_VARIABLE_PS_0_14;
      continue;
    }
    else
    {
{
#define MR_PROC_LABEL mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_114_101_118_95_97_99_99_95_95_104_111_54_95_95_91_49_44_32_52_44_32_53_93_95_48_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
        *STATE_VARIABLE_PS_15 = STATE_VARIABLE_PS_0_14;
        *STATE_VARIABLE_RevResult_13 = STATE_VARIABLE_RevResult_0_12;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__brackets_9_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word TypeInfo_for_S_27,
  MR_String L_10,
  MR_String R_11,
  MR_Word P_12,
  MR_Word Src_13,
  MR_Box * Result_14,
  MR_Box STATE_VARIABLE_S_0_19,
  MR_Box * STATE_VARIABLE_S_20,
  MR_Integer STATE_VARIABLE_PS_0_21,
  MR_Integer * STATE_VARIABLE_PS_22)
{
  MR_bool succeeded;
  MR_Integer STATE_VARIABLE_PS_23_23;
  MR_Integer STATE_VARIABLE_PS_25_25;
  MR_Integer STATE_VARIABLE_PS_11_28;
  MR_Word SkipWS_29;
  MR_Word SkipWS0_31;
  MR_Integer STATE_VARIABLE_PS_11_36;
  MR_Word SkipWS_37;
  MR_Word SkipWS0_39;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv2_Var_30;
  MR_Box conv1_STATE_VARIABLE_PS_23_23;
  MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv4_STATE_VARIABLE_PS_25_25;
  MR_bool MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv7_Var_38;
  MR_Box conv6_STATE_VARIABLE_PS_22;

  succeeded = mercury__parsing_utils__match_string_4_p_0(L_10, Src_13, STATE_VARIABLE_PS_0_21, &STATE_VARIABLE_PS_11_28);
  if (succeeded)
  {
    SkipWS0_31 = ((MR_Word) ((MR_hl_field(0, Src_13, (MR_Integer) 2))));
{
#define MR_PROC_LABEL mercury__parsing_utils__brackets_9_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 = SkipWS0_31 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	SkipWS_29  = SkipWS;
}
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, SkipWS_29, (MR_Integer) 1))));
    succeeded = func_0(((MR_Box) (SkipWS_29)), ((MR_Box) (Src_13)), &conv2_Var_30, ((MR_Box) (STATE_VARIABLE_PS_11_28)), &conv1_STATE_VARIABLE_PS_23_23);
    if (succeeded)
    {
      STATE_VARIABLE_PS_23_23 = ((MR_Integer) (conv1_STATE_VARIABLE_PS_23_23));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_12, (MR_Integer) 1))));
      succeeded = func_3(((MR_Box) (P_12)), ((MR_Box) (Src_13)), Result_14, STATE_VARIABLE_S_0_19, STATE_VARIABLE_S_20, ((MR_Box) (STATE_VARIABLE_PS_23_23)), &conv4_STATE_VARIABLE_PS_25_25);
      if (succeeded)
      {
        STATE_VARIABLE_PS_25_25 = ((MR_Integer) (conv4_STATE_VARIABLE_PS_25_25));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = mercury__parsing_utils__match_string_4_p_0(R_11, Src_13, STATE_VARIABLE_PS_25_25, &STATE_VARIABLE_PS_11_36);
        if (succeeded)
        {
          SkipWS0_39 = ((MR_Word) ((MR_hl_field(0, Src_13, (MR_Integer) 2))));
{
#define MR_PROC_LABEL mercury__parsing_utils__brackets_9_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 = SkipWS0_39 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	SkipWS_37  = SkipWS;
}
          func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, SkipWS_37, (MR_Integer) 1))));
          succeeded = func_5(((MR_Box) (SkipWS_37)), ((MR_Box) (Src_13)), &conv7_Var_38, ((MR_Box) (STATE_VARIABLE_PS_11_36)), &conv6_STATE_VARIABLE_PS_22);
          if (succeeded)
          {
            *STATE_VARIABLE_PS_22 = ((MR_Integer) (conv6_STATE_VARIABLE_PS_22));
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__brackets_7_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_String L_8,
  MR_String R_9,
  MR_Word P_10,
  MR_Word Src_11,
  MR_Box * Result_12,
  MR_Integer STATE_VARIABLE_PS_0_16,
  MR_Integer * STATE_VARIABLE_PS_17)
{
  MR_bool succeeded;
  MR_Integer STATE_VARIABLE_PS_18_18;
  MR_Integer STATE_VARIABLE_PS_19_19;
  MR_Integer STATE_VARIABLE_PS_11_21;
  MR_Word SkipWS_22;
  MR_Word SkipWS0_24;
  MR_Integer STATE_VARIABLE_PS_11_29;
  MR_Word SkipWS_30;
  MR_Word SkipWS0_32;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv2_Var_23;
  MR_Box conv1_STATE_VARIABLE_PS_18_18;
  MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv4_STATE_VARIABLE_PS_19_19;
  MR_bool MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv7_Var_31;
  MR_Box conv6_STATE_VARIABLE_PS_17;

  succeeded = mercury__parsing_utils__match_string_4_p_0(L_8, Src_11, STATE_VARIABLE_PS_0_16, &STATE_VARIABLE_PS_11_21);
  if (succeeded)
  {
    SkipWS0_24 = ((MR_Word) ((MR_hl_field(0, Src_11, (MR_Integer) 2))));
{
#define MR_PROC_LABEL mercury__parsing_utils__brackets_7_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 = SkipWS0_24 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	SkipWS_22  = SkipWS;
}
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, SkipWS_22, (MR_Integer) 1))));
    succeeded = func_0(((MR_Box) (SkipWS_22)), ((MR_Box) (Src_11)), &conv2_Var_23, ((MR_Box) (STATE_VARIABLE_PS_11_21)), &conv1_STATE_VARIABLE_PS_18_18);
    if (succeeded)
    {
      STATE_VARIABLE_PS_18_18 = ((MR_Integer) (conv1_STATE_VARIABLE_PS_18_18));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_10, (MR_Integer) 1))));
      succeeded = func_3(((MR_Box) (P_10)), ((MR_Box) (Src_11)), Result_12, ((MR_Box) (STATE_VARIABLE_PS_18_18)), &conv4_STATE_VARIABLE_PS_19_19);
      if (succeeded)
      {
        STATE_VARIABLE_PS_19_19 = ((MR_Integer) (conv4_STATE_VARIABLE_PS_19_19));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = mercury__parsing_utils__match_string_4_p_0(R_9, Src_11, STATE_VARIABLE_PS_19_19, &STATE_VARIABLE_PS_11_29);
        if (succeeded)
        {
          SkipWS0_32 = ((MR_Word) ((MR_hl_field(0, Src_11, (MR_Integer) 2))));
{
#define MR_PROC_LABEL mercury__parsing_utils__brackets_7_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 = SkipWS0_32 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	SkipWS_30  = SkipWS;
}
          func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, SkipWS_30, (MR_Integer) 1))));
          succeeded = func_5(((MR_Box) (SkipWS_30)), ((MR_Box) (Src_11)), &conv7_Var_31, ((MR_Box) (STATE_VARIABLE_PS_11_29)), &conv6_STATE_VARIABLE_PS_17);
          if (succeeded)
          {
            *STATE_VARIABLE_PS_17 = ((MR_Integer) (conv6_STATE_VARIABLE_PS_17));
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__one_or_more_7_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeInfo_for_S_22,
  MR_Word P_8,
  MR_Word Src_9,
  MR_Word * Result_10,
  MR_Box STATE_VARIABLE_S_0_15,
  MR_Box * STATE_VARIABLE_S_16,
  MR_Integer STATE_VARIABLE_PS_0_17,
  MR_Integer * STATE_VARIABLE_PS_18)
{
  MR_bool succeeded;
  MR_Box X_13;
  MR_Word Xs_14;
  MR_Box STATE_VARIABLE_S_19_19;
  MR_Integer STATE_VARIABLE_PS_20_20;
  MR_Word RevResult_23;
  MR_Word Var_24;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_8, (MR_Integer) 1))));
  MR_Box conv1_STATE_VARIABLE_PS_20_20;

  succeeded = func_0(((MR_Box) (P_8)), ((MR_Box) (Src_9)), &X_13, STATE_VARIABLE_S_0_15, &STATE_VARIABLE_S_19_19, ((MR_Box) (STATE_VARIABLE_PS_0_17)), &conv1_STATE_VARIABLE_PS_20_20);
  if (succeeded)
  {
    STATE_VARIABLE_PS_20_20 = ((MR_Integer) (conv1_STATE_VARIABLE_PS_20_20));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    Var_24 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = mercury__parsing_utils__zero_or_more_rev_acc_8_p_0(TypeInfo_for_T_21, TypeInfo_for_S_22, P_8, Src_9, Var_24, &RevResult_23, STATE_VARIABLE_S_19_19, STATE_VARIABLE_S_16, STATE_VARIABLE_PS_20_20, STATE_VARIABLE_PS_18);
    if (succeeded)
    {
      mercury__list__reverse_2_p_0(TypeInfo_for_T_21, RevResult_23, &Xs_14);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(1, base, 0) = X_13;
        MR_hl_field(1, base, 1) = ((MR_Box) (Xs_14));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__one_or_more_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word P_6,
  MR_Word Src_7,
  MR_Word * Result_8,
  MR_Integer STATE_VARIABLE_PS_0_12,
  MR_Integer * STATE_VARIABLE_PS_13)
{
  MR_bool succeeded;
  MR_Box X_10;
  MR_Word Xs_11;
  MR_Integer STATE_VARIABLE_PS_14_14;
  MR_Word RevResult_16;
  MR_Word Var_17;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_6, (MR_Integer) 1))));
  MR_Box conv1_STATE_VARIABLE_PS_14_14;

  succeeded = func_0(((MR_Box) (P_6)), ((MR_Box) (Src_7)), &X_10, ((MR_Box) (STATE_VARIABLE_PS_0_12)), &conv1_STATE_VARIABLE_PS_14_14);
  if (succeeded)
  {
    STATE_VARIABLE_PS_14_14 = ((MR_Integer) (conv1_STATE_VARIABLE_PS_14_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    Var_17 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = mercury__parsing_utils__zero_or_more_rev_acc_6_p_0(TypeInfo_for_T_15, P_6, Src_7, Var_17, &RevResult_16, STATE_VARIABLE_PS_14_14, STATE_VARIABLE_PS_13);
    if (succeeded)
    {
      mercury__list__reverse_2_p_0(TypeInfo_for_T_15, RevResult_16, &Xs_11);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(1, base, 0) = X_10;
        MR_hl_field(1, base, 1) = ((MR_Box) (Xs_11));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__zero_or_more_7_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeInfo_for_S_20,
  MR_Word P_8,
  MR_Word Src_9,
  MR_Word * Result_10,
  MR_Box STATE_VARIABLE_S_0_14,
  MR_Box * STATE_VARIABLE_S_15,
  MR_Integer STATE_VARIABLE_PS_0_16,
  MR_Integer * STATE_VARIABLE_PS_17)
{
  MR_bool succeeded;
  MR_Word RevResult_13;

  succeeded = mercury__parsing_utils__zero_or_more_rev_acc_8_p_0(TypeInfo_for_T_19, TypeInfo_for_S_20, P_8, Src_9, (MR_Word) ((MR_Unsigned) 0U), &RevResult_13, STATE_VARIABLE_S_0_14, STATE_VARIABLE_S_15, STATE_VARIABLE_PS_0_16, STATE_VARIABLE_PS_17);
  if (succeeded)
  {
    mercury__list__reverse_2_p_0(TypeInfo_for_T_19, RevResult_13, Result_10);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__zero_or_more_rev_acc_8_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word TypeInfo_for_S_25,
  MR_Word P_9,
  MR_Word Src_10,
  MR_Word STATE_VARIABLE_RevResult_0_15,
  MR_Word * STATE_VARIABLE_RevResult_16,
  MR_Box STATE_VARIABLE_S_0_17,
  MR_Box * STATE_VARIABLE_S_18,
  MR_Integer STATE_VARIABLE_PS_0_19,
  MR_Integer * STATE_VARIABLE_PS_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box X_14;
    MR_Box STATE_VARIABLE_S_21_21;
    MR_Integer STATE_VARIABLE_PS_22_22;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_9, (MR_Integer) 1))));
    MR_Box conv1_STATE_VARIABLE_PS_22_22;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (P_9)), ((MR_Box) (Src_10)), &X_14, STATE_VARIABLE_S_0_17, &STATE_VARIABLE_S_21_21, ((MR_Box) (STATE_VARIABLE_PS_0_19)), &conv1_STATE_VARIABLE_PS_22_22);
    if (succeeded)
    {
      STATE_VARIABLE_PS_22_22 = ((MR_Integer) (conv1_STATE_VARIABLE_PS_22_22));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_RevResult_23_23;
      MR_Word next_value_of_STATE_VARIABLE_RevResult_0_15;
      MR_Box next_value_of_STATE_VARIABLE_S_0_17;
      MR_Integer next_value_of_STATE_VARIABLE_PS_0_19;

      {
        STATE_VARIABLE_RevResult_23_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevResult_23_23, 0) = X_14;
        MR_hl_field(1, STATE_VARIABLE_RevResult_23_23, 1) = ((MR_Box) (STATE_VARIABLE_RevResult_0_15));
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_RevResult_0_15 = STATE_VARIABLE_RevResult_23_23;
      next_value_of_STATE_VARIABLE_S_0_17 = STATE_VARIABLE_S_21_21;
      next_value_of_STATE_VARIABLE_PS_0_19 = STATE_VARIABLE_PS_22_22;
      STATE_VARIABLE_RevResult_0_15 = next_value_of_STATE_VARIABLE_RevResult_0_15;
      STATE_VARIABLE_S_0_17 = next_value_of_STATE_VARIABLE_S_0_17;
      STATE_VARIABLE_PS_0_19 = next_value_of_STATE_VARIABLE_PS_0_19;
      continue;
    }
    else
    {
{
#define MR_PROC_LABEL mercury__parsing_utils__zero_or_more_rev_acc_8_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
        *STATE_VARIABLE_PS_20 = STATE_VARIABLE_PS_0_19;
        *STATE_VARIABLE_S_18 = STATE_VARIABLE_S_0_17;
        *STATE_VARIABLE_RevResult_16 = STATE_VARIABLE_RevResult_0_15;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__zero_or_more_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word P_6,
  MR_Word Src_7,
  MR_Word * Result_8,
  MR_Integer STATE_VARIABLE_PS_0_11,
  MR_Integer * STATE_VARIABLE_PS_12)
{
  MR_bool succeeded;
  MR_Word RevResult_10;

  succeeded = mercury__parsing_utils__zero_or_more_rev_acc_6_p_0(TypeInfo_for_T_14, P_6, Src_7, (MR_Word) ((MR_Unsigned) 0U), &RevResult_10, STATE_VARIABLE_PS_0_11, STATE_VARIABLE_PS_12);
  if (succeeded)
  {
    mercury__list__reverse_2_p_0(TypeInfo_for_T_14, RevResult_10, Result_8);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__zero_or_more_rev_acc_6_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word P_7,
  MR_Word Src_8,
  MR_Word STATE_VARIABLE_RevResult_0_12,
  MR_Word * STATE_VARIABLE_RevResult_13,
  MR_Integer STATE_VARIABLE_PS_0_14,
  MR_Integer * STATE_VARIABLE_PS_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box X_11;
    MR_Integer STATE_VARIABLE_PS_16_16;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_7, (MR_Integer) 1))));
    MR_Box conv1_STATE_VARIABLE_PS_16_16;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (P_7)), ((MR_Box) (Src_8)), &X_11, ((MR_Box) (STATE_VARIABLE_PS_0_14)), &conv1_STATE_VARIABLE_PS_16_16);
    if (succeeded)
    {
      STATE_VARIABLE_PS_16_16 = ((MR_Integer) (conv1_STATE_VARIABLE_PS_16_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_RevResult_17_17;
      MR_Word next_value_of_STATE_VARIABLE_RevResult_0_12;
      MR_Integer next_value_of_STATE_VARIABLE_PS_0_14;

      {
        STATE_VARIABLE_RevResult_17_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevResult_17_17, 0) = X_11;
        MR_hl_field(1, STATE_VARIABLE_RevResult_17_17, 1) = ((MR_Box) (STATE_VARIABLE_RevResult_0_12));
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_RevResult_0_12 = STATE_VARIABLE_RevResult_17_17;
      next_value_of_STATE_VARIABLE_PS_0_14 = STATE_VARIABLE_PS_16_16;
      STATE_VARIABLE_RevResult_0_12 = next_value_of_STATE_VARIABLE_RevResult_0_12;
      STATE_VARIABLE_PS_0_14 = next_value_of_STATE_VARIABLE_PS_0_14;
      continue;
    }
    else
    {
{
#define MR_PROC_LABEL mercury__parsing_utils__zero_or_more_rev_acc_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
        *STATE_VARIABLE_PS_15 = STATE_VARIABLE_PS_0_14;
        *STATE_VARIABLE_RevResult_13 = STATE_VARIABLE_RevResult_0_12;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__optional_7_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeInfo_for_S_21,
  MR_Word P_8,
  MR_Word Src_9,
  MR_Word * Result_10,
  MR_Box STATE_VARIABLE_S_0_14,
  MR_Box * STATE_VARIABLE_S_15,
  MR_Integer STATE_VARIABLE_PS_0_16,
  MR_Integer * STATE_VARIABLE_PS_17)
{
  MR_bool succeeded;
  MR_Box X_13;
  MR_Box STATE_VARIABLE_S_18_18;
  MR_Integer STATE_VARIABLE_PS_19_19;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_8, (MR_Integer) 1))));
  MR_Box conv1_STATE_VARIABLE_PS_19_19;

  succeeded = func_0(((MR_Box) (P_8)), ((MR_Box) (Src_9)), &X_13, STATE_VARIABLE_S_0_14, &STATE_VARIABLE_S_18_18, ((MR_Box) (STATE_VARIABLE_PS_0_16)), &conv1_STATE_VARIABLE_PS_19_19);
  if (succeeded)
  {
    STATE_VARIABLE_PS_19_19 = ((MR_Integer) (conv1_STATE_VARIABLE_PS_19_19));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *STATE_VARIABLE_PS_17 = STATE_VARIABLE_PS_19_19;
    *STATE_VARIABLE_S_15 = STATE_VARIABLE_S_18_18;
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_10 = base;
      MR_hl_field(1, base, 0) = X_13;
    }
    succeeded = MR_TRUE;
  }
  else
  {
    *Result_10 = (MR_Word) ((MR_Unsigned) 0U);
{
#define MR_PROC_LABEL mercury__parsing_utils__optional_7_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      *STATE_VARIABLE_PS_17 = STATE_VARIABLE_PS_0_16;
      *STATE_VARIABLE_S_15 = STATE_VARIABLE_S_0_14;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__optional_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word P_6,
  MR_Word Src_7,
  MR_Word * Result_8,
  MR_Integer STATE_VARIABLE_PS_0_11,
  MR_Integer * STATE_VARIABLE_PS_12)
{
  MR_bool succeeded;
  MR_Box X_10;
  MR_Integer STATE_VARIABLE_PS_13_13;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_6, (MR_Integer) 1))));
  MR_Box conv1_STATE_VARIABLE_PS_13_13;

  succeeded = func_0(((MR_Box) (P_6)), ((MR_Box) (Src_7)), &X_10, ((MR_Box) (STATE_VARIABLE_PS_0_11)), &conv1_STATE_VARIABLE_PS_13_13);
  if (succeeded)
  {
    STATE_VARIABLE_PS_13_13 = ((MR_Integer) (conv1_STATE_VARIABLE_PS_13_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *STATE_VARIABLE_PS_12 = STATE_VARIABLE_PS_13_13;
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_8 = base;
      MR_hl_field(1, base, 0) = X_10;
    }
    succeeded = MR_TRUE;
  }
  else
  {
    *Result_8 = (MR_Word) ((MR_Unsigned) 0U);
{
#define MR_PROC_LABEL mercury__parsing_utils__optional_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      *STATE_VARIABLE_PS_12 = STATE_VARIABLE_PS_0_11;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__string_literal_5_p_0(
  MR_Char QuoteChar_6,
  MR_Word Src_7,
  MR_String * String_8,
  MR_Integer STATE_VARIABLE_PS_0_14,
  MR_Integer * STATE_VARIABLE_PS_15)
{
  MR_bool succeeded;
  MR_Integer End_13;
  MR_Integer STATE_VARIABLE_PS_17_17;
  MR_Integer STATE_VARIABLE_PS_19_19;
  MR_String Var_20;
  MR_Char Var_25;
  MR_Char Var_26;
  MR_Word SkipWS_28;
  MR_Word SkipWS0_30;
  MR_Integer Var_27;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv2_Var_29;
  MR_Box conv1_STATE_VARIABLE_PS_15;

  succeeded = mercury__parsing_utils__next_char_4_p_0(Src_7, &Var_25, STATE_VARIABLE_PS_0_14, &STATE_VARIABLE_PS_17_17);
  if (succeeded)
  {
    succeeded = (QuoteChar_6 == Var_25);
    if (succeeded)
    {
      succeeded = mercury__parsing_utils__string_literal_2_5_p_0(Src_7, QuoteChar_6, STATE_VARIABLE_PS_17_17, &STATE_VARIABLE_PS_19_19);
      if (succeeded)
      {
        Var_20 = ((MR_String) ((MR_hl_field(0, Src_7, (MR_Integer) 1))));
{
#define MR_PROC_LABEL mercury__parsing_utils__string_literal_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Var_20 ;
	Index = STATE_VARIABLE_PS_19_19 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	End_13  = PrevIndex;
	Var_26  = Ch;
	Var_27  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
          succeeded = (QuoteChar_6 == Var_26);
          if (succeeded)
          {
            SkipWS0_30 = ((MR_Word) ((MR_hl_field(0, Src_7, (MR_Integer) 2))));
{
#define MR_PROC_LABEL mercury__parsing_utils__string_literal_5_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 = SkipWS0_30 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	SkipWS_28  = SkipWS;
}
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, SkipWS_28, (MR_Integer) 1))));
            succeeded = func_0(((MR_Box) (SkipWS_28)), ((MR_Box) (Src_7)), &conv2_Var_29, ((MR_Box) (STATE_VARIABLE_PS_19_19)), &conv1_STATE_VARIABLE_PS_15);
            if (succeeded)
            {
              *STATE_VARIABLE_PS_15 = ((MR_Integer) (conv1_STATE_VARIABLE_PS_15));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              succeeded = mercury__parsing_utils__input_substring_4_p_0(Src_7, STATE_VARIABLE_PS_17_17, End_13, String_8);
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__string_literal_2_5_p_0(
  MR_Word Src_6,
  MR_Char QuoteChar_7,
  MR_Integer STATE_VARIABLE_PS_0_13,
  MR_Integer * STATE_VARIABLE_PS_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Char C_9;
    MR_Integer STATE_VARIABLE_PS_15_15;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__parsing_utils__next_char_4_p_0(Src_6, &C_9, STATE_VARIABLE_PS_0_13, &STATE_VARIABLE_PS_15_15);
    if (succeeded)
    {
      succeeded = (C_9 == QuoteChar_7);
      if (succeeded)
      {
        *STATE_VARIABLE_PS_14 = STATE_VARIABLE_PS_15_15;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (C_9 == (MR_Char) 92);
        if (succeeded)
        {
          MR_Integer STATE_VARIABLE_PS_16_16;
          MR_Char Var_10;
          MR_Integer next_value_of_STATE_VARIABLE_PS_0_13;

          succeeded = mercury__parsing_utils__next_char_4_p_0(Src_6, &Var_10, STATE_VARIABLE_PS_15_15, &STATE_VARIABLE_PS_16_16);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_STATE_VARIABLE_PS_0_13 = STATE_VARIABLE_PS_16_16;
            STATE_VARIABLE_PS_0_13 = next_value_of_STATE_VARIABLE_PS_0_13;
            continue;
          }
        }
        else
        {
          MR_Integer next_value_of_STATE_VARIABLE_PS_0_13 = STATE_VARIABLE_PS_15_15;

          // direct tailcall eliminated
          ;
          STATE_VARIABLE_PS_0_13 = next_value_of_STATE_VARIABLE_PS_0_13;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__int_literal_4_p_0(
  MR_Word Src_5,
  MR_Integer * Int_6,
  MR_Integer STATE_VARIABLE_PS_0_9,
  MR_Integer * STATE_VARIABLE_PS_10)
{
  MR_bool succeeded;
  MR_String IntStr_8;
  MR_Integer Var_11;

  succeeded = mercury__parsing_utils__int_literal_as_string_4_p_0(Src_5, &IntStr_8, STATE_VARIABLE_PS_0_9, STATE_VARIABLE_PS_10);
  if (succeeded)
  {
    Var_11 = (MR_Integer) 10;
    succeeded = mercury__string__base_string_to_int_3_p_0(Var_11, IntStr_8, Int_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__int_literal_as_string_4_p_0(
  MR_Word Src_5,
  MR_String * IntStr_6,
  MR_Integer STATE_VARIABLE_PS_0_14,
  MR_Integer * STATE_VARIABLE_PS_15)
{
  MR_bool succeeded;
  MR_Integer STATE_VARIABLE_PS_18_18;
  MR_Integer Var_20;
  MR_Integer STATE_VARIABLE_PS_25_25;
  MR_Char C_37;
  MR_Integer STATE_VARIABLE_PS_13_39;
  MR_Word SkipWS_43;
  MR_Word SkipWS0_45;
  MR_Integer STATE_VARIABLE_PS_13_33;
  MR_Char X_32;
  MR_Integer Var_36;
  MR_Integer Var_35;
  MR_Char Var_22;
  MR_Integer STATE_VARIABLE_PS_23_23;
  MR_Integer Var_24;
  MR_Char Var_31;
  MR_Char C_40;
  MR_Integer STATE_VARIABLE_PS_13_42;
  MR_Integer Var_12;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv2_Var_44;
  MR_Box conv1_STATE_VARIABLE_PS_15;

  succeeded = mercury__parsing_utils__next_char_4_p_0(Src_5, &X_32, STATE_VARIABLE_PS_0_14, &STATE_VARIABLE_PS_13_33);
  if (succeeded)
  {
    Var_36 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__parsing_utils__int_literal_as_string_4_p_0

	MR_String Str;
	MR_Char Ch;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	Str = (MR_String) "-" ;
	Ch = X_32 ;
	BeginAt = Var_36 ;
		{

    char    *p = NULL;

    if (MR_is_ascii(Ch)) {
        // strchr will always find the null terminator, but the terminator
        // is not part of the string.
        if (Ch != '\0') {
            p = strchr(Str + BeginAt, Ch);
        }
    } else {
        char    buf[5];
        size_t  len;

        len = MR_utf8_encode(buf, Ch);
        if (len > 0) {
            buf[len] = '\0';
            p = strstr(Str + BeginAt, buf);
        }
    }
    if (p != NULL) {
        SUCCESS_INDICATOR = MR_TRUE;
        Index = (p - Str);
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
        Index = -1;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_35  = Index;
	}
succeeded  = SUCCESS_INDICATOR;
}
  }
  if (succeeded)
  {
    STATE_VARIABLE_PS_18_18 = STATE_VARIABLE_PS_13_33;
    succeeded = MR_TRUE;
  }
  else
  {
{
#define MR_PROC_LABEL mercury__parsing_utils__int_literal_as_string_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      STATE_VARIABLE_PS_18_18 = STATE_VARIABLE_PS_0_14;
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    Var_20 = (MR_Integer) 10;
    succeeded = mercury__parsing_utils__next_char_4_p_0(Src_5, &C_37, STATE_VARIABLE_PS_18_18, &STATE_VARIABLE_PS_13_39);
    if (succeeded)
    {
      succeeded = mercury__char__is_base_digit_2_p_0(Var_20, C_37);
      if (succeeded)
      {
        succeeded = mercury__parsing_utils__digits_2_5_p_0(Var_20, Src_5, STATE_VARIABLE_PS_13_39, &STATE_VARIABLE_PS_25_25);
        if (succeeded)
        {
          Var_22 = (MR_Char) 46;
          succeeded = mercury__parsing_utils__next_char_4_p_0(Src_5, &Var_31, STATE_VARIABLE_PS_25_25, &STATE_VARIABLE_PS_23_23);
          if (succeeded)
          {
            succeeded = (Var_22 == Var_31);
            if (succeeded)
            {
              Var_24 = (MR_Integer) 10;
              succeeded = mercury__parsing_utils__next_char_4_p_0(Src_5, &C_40, STATE_VARIABLE_PS_23_23, &STATE_VARIABLE_PS_13_42);
              if (succeeded)
              {
                succeeded = mercury__char__is_base_digit_2_p_0(Var_24, C_40);
                if (succeeded)
                  succeeded = mercury__parsing_utils__digits_2_5_p_0(Var_24, Src_5, STATE_VARIABLE_PS_13_42, &Var_12);
              }
            }
          }
          succeeded = !(succeeded);
          if (succeeded)
          {
            SkipWS0_45 = ((MR_Word) ((MR_hl_field(0, Src_5, (MR_Integer) 2))));
{
#define MR_PROC_LABEL mercury__parsing_utils__int_literal_as_string_4_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 = SkipWS0_45 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	SkipWS_43  = SkipWS;
}
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, SkipWS_43, (MR_Integer) 1))));
            succeeded = func_0(((MR_Box) (SkipWS_43)), ((MR_Box) (Src_5)), &conv2_Var_44, ((MR_Box) (STATE_VARIABLE_PS_25_25)), &conv1_STATE_VARIABLE_PS_15);
            if (succeeded)
            {
              *STATE_VARIABLE_PS_15 = ((MR_Integer) (conv1_STATE_VARIABLE_PS_15));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              succeeded = mercury__parsing_utils__input_substring_4_p_0(Src_5, STATE_VARIABLE_PS_0_14, STATE_VARIABLE_PS_25_25, IntStr_6);
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__float_literal_4_p_0(
  MR_Word Src_5,
  MR_Float * Float_6,
  MR_Integer STATE_VARIABLE_PS_0_9,
  MR_Integer * STATE_VARIABLE_PS_10)
{
  MR_bool succeeded;
  MR_String FloatStr_8;

  succeeded = mercury__parsing_utils__float_literal_as_string_4_p_0(Src_5, &FloatStr_8, STATE_VARIABLE_PS_0_9, STATE_VARIABLE_PS_10);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__parsing_utils__float_literal_4_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString = FloatStr_8 ;
		{
{
    // The %c checks for any erroneous characters appearing after the float;
    // if there are some, then sscanf() will return 2 rather than 1.
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        // MR_TRUE if sscanf succeeds, MR_FALSE otherwise.
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*Float_6  = FloatVal;
	}
succeeded  = SUCCESS_INDICATOR;
}
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__float_literal_as_string_4_p_0(
  MR_Word Src_5,
  MR_String * FloatStr_6,
  MR_Integer STATE_VARIABLE_PS_0_14,
  MR_Integer * STATE_VARIABLE_PS_15)
{
  MR_bool succeeded;
  MR_Integer STATE_VARIABLE_PS_19_19;
  MR_Integer STATE_VARIABLE_PS_21_21;
  MR_Char Var_22;
  MR_Integer STATE_VARIABLE_PS_23_23;
  MR_Integer Var_24;
  MR_Integer STATE_VARIABLE_PS_25_25;
  MR_Integer STATE_VARIABLE_PS_31_31;
  MR_Char Var_33;
  MR_Char C_34;
  MR_Integer STATE_VARIABLE_PS_13_36;
  MR_Char C_37;
  MR_Integer STATE_VARIABLE_PS_13_39;
  MR_Word SkipWS_47;
  MR_Word SkipWS0_49;
  MR_Integer STATE_VARIABLE_PS_18_18;
  MR_Char Var_32;
  MR_Integer STATE_VARIABLE_PS_27_27;
  MR_Char Var_11;
  MR_String Var_26;
  MR_Integer Var_41;
  MR_Integer Var_40;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv2_Var_48;
  MR_Box conv1_STATE_VARIABLE_PS_15;

  succeeded = mercury__parsing_utils__next_char_4_p_0(Src_5, &Var_32, STATE_VARIABLE_PS_0_14, &STATE_VARIABLE_PS_18_18);
  if (succeeded)
    succeeded = ((MR_Char) 45 == Var_32);
  if (succeeded)
    STATE_VARIABLE_PS_19_19 = STATE_VARIABLE_PS_18_18;
  else
    STATE_VARIABLE_PS_19_19 = STATE_VARIABLE_PS_0_14;
  succeeded = mercury__parsing_utils__next_char_4_p_0(Src_5, &C_34, STATE_VARIABLE_PS_19_19, &STATE_VARIABLE_PS_13_36);
  if (succeeded)
  {
    succeeded = mercury__char__is_base_digit_2_p_0((MR_Integer) 10, C_34);
    if (succeeded)
    {
      succeeded = mercury__parsing_utils__digits_2_5_p_0((MR_Integer) 10, Src_5, STATE_VARIABLE_PS_13_36, &STATE_VARIABLE_PS_21_21);
      if (succeeded)
      {
        Var_22 = (MR_Char) 46;
        succeeded = mercury__parsing_utils__next_char_4_p_0(Src_5, &Var_33, STATE_VARIABLE_PS_21_21, &STATE_VARIABLE_PS_23_23);
        if (succeeded)
        {
          succeeded = (Var_22 == Var_33);
          if (succeeded)
          {
            Var_24 = (MR_Integer) 10;
            succeeded = mercury__parsing_utils__next_char_4_p_0(Src_5, &C_37, STATE_VARIABLE_PS_23_23, &STATE_VARIABLE_PS_13_39);
            if (succeeded)
            {
              succeeded = mercury__char__is_base_digit_2_p_0(Var_24, C_37);
              if (succeeded)
              {
                succeeded = mercury__parsing_utils__digits_2_5_p_0(Var_24, Src_5, STATE_VARIABLE_PS_13_39, &STATE_VARIABLE_PS_25_25);
                if (succeeded)
                {
                  Var_26 = (MR_String) "eE";
                  succeeded = mercury__parsing_utils__next_char_4_p_0(Src_5, &Var_11, STATE_VARIABLE_PS_25_25, &STATE_VARIABLE_PS_27_27);
                  if (succeeded)
                  {
                    Var_41 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__parsing_utils__float_literal_as_string_4_p_0

	MR_String Str;
	MR_Char Ch;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	Str = Var_26 ;
	Ch = Var_11 ;
	BeginAt = Var_41 ;
		{

    char    *p = NULL;

    if (MR_is_ascii(Ch)) {
        // strchr will always find the null terminator, but the terminator
        // is not part of the string.
        if (Ch != '\0') {
            p = strchr(Str + BeginAt, Ch);
        }
    } else {
        char    buf[5];
        size_t  len;

        len = MR_utf8_encode(buf, Ch);
        if (len > 0) {
            buf[len] = '\0';
            p = strstr(Str + BeginAt, buf);
        }
    }
    if (p != NULL) {
        SUCCESS_INDICATOR = MR_TRUE;
        Index = (p - Str);
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
        Index = -1;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_40  = Index;
	}
succeeded  = SUCCESS_INDICATOR;
}
                  }
                  if (succeeded)
                  {
                    MR_Integer STATE_VARIABLE_PS_28_28;
                    MR_Char C_44;
                    MR_Integer STATE_VARIABLE_PS_13_46;
                    MR_Integer STATE_VARIABLE_PS_9_43;
                    MR_Char Char_42;

                    succeeded = mercury__parsing_utils__next_char_4_p_0(Src_5, &Char_42, STATE_VARIABLE_PS_27_27, &STATE_VARIABLE_PS_9_43);
                    if (succeeded)
                      switch (Char_42) {
                        default:
                          succeeded = MR_FALSE;
                          break;
                        case (MR_Char) 43:
                          succeeded = MR_TRUE;
                          break;
                        case (MR_Char) 45:
                          succeeded = MR_TRUE;
                          break;
                      }
                    if (succeeded)
                      STATE_VARIABLE_PS_28_28 = STATE_VARIABLE_PS_9_43;
                    else
                      STATE_VARIABLE_PS_28_28 = STATE_VARIABLE_PS_27_27;
                    succeeded = mercury__parsing_utils__next_char_4_p_0(Src_5, &C_44, STATE_VARIABLE_PS_28_28, &STATE_VARIABLE_PS_13_46);
                    if (succeeded)
                    {
                      succeeded = mercury__char__is_base_digit_2_p_0((MR_Integer) 10, C_44);
                      if (succeeded)
                        succeeded = mercury__parsing_utils__digits_2_5_p_0((MR_Integer) 10, Src_5, STATE_VARIABLE_PS_13_46, &STATE_VARIABLE_PS_31_31);
                    }
                  }
                  else
                  {
                    STATE_VARIABLE_PS_31_31 = STATE_VARIABLE_PS_25_25;
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    SkipWS0_49 = ((MR_Word) ((MR_hl_field(0, Src_5, (MR_Integer) 2))));
{
#define MR_PROC_LABEL mercury__parsing_utils__float_literal_as_string_4_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 = SkipWS0_49 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	SkipWS_47  = SkipWS;
}
                    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, SkipWS_47, (MR_Integer) 1))));
                    succeeded = func_0(((MR_Box) (SkipWS_47)), ((MR_Box) (Src_5)), &conv2_Var_48, ((MR_Box) (STATE_VARIABLE_PS_31_31)), &conv1_STATE_VARIABLE_PS_15);
                    if (succeeded)
                    {
                      *STATE_VARIABLE_PS_15 = ((MR_Integer) (conv1_STATE_VARIABLE_PS_15));
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                      succeeded = mercury__parsing_utils__input_substring_4_p_0(Src_5, STATE_VARIABLE_PS_0_14, STATE_VARIABLE_PS_31_31, FloatStr_6);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__parsing_utils__digits_2_5_p_0(
  MR_Integer Base_6,
  MR_Word Src_7,
  MR_Integer STATE_VARIABLE_PS_0_11,
  MR_Integer * STATE_VARIABLE_PS_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer STATE_VARIABLE_PS_13_13;
    MR_Char C_9;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__parsing_utils__next_char_4_p_0(Src_7, &C_9, STATE_VARIABLE_PS_0_11, &STATE_VARIABLE_PS_13_13);
    if (succeeded)
      succeeded = mercury__char__is_base_digit_2_p_0(Base_6, C_9);
    if (succeeded)
    {
      MR_Integer next_value_of_STATE_VARIABLE_PS_0_11 = STATE_VARIABLE_PS_13_13;

      // direct tailcall eliminated
      ;
      STATE_VARIABLE_PS_0_11 = next_value_of_STATE_VARIABLE_PS_0_11;
      continue;
    }
    else
    {
      *STATE_VARIABLE_PS_12 = STATE_VARIABLE_PS_0_11;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__eof_4_p_0(
  MR_Word Src_5,
  MR_Integer STATE_VARIABLE_PS_0_8,
  MR_Integer * STATE_VARIABLE_PS_9)
{
  MR_bool succeeded;
  MR_Integer Var_14;

  *STATE_VARIABLE_PS_9 = STATE_VARIABLE_PS_0_8;
  Var_14 = ((MR_Integer) ((MR_hl_field(0, Src_5, (MR_Integer) 0))));
  succeeded = (STATE_VARIABLE_PS_0_8 == Var_14);
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__skip_to_eol_4_p_0(
  MR_Word Src_5,
  MR_Integer STATE_VARIABLE_PS_0_9,
  MR_Integer * STATE_VARIABLE_PS_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Char C_7;
    MR_Integer STATE_VARIABLE_PS_11_11;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__parsing_utils__next_char_4_p_0(Src_5, &C_7, STATE_VARIABLE_PS_0_9, &STATE_VARIABLE_PS_11_11);
    if (succeeded)
    {
      succeeded = (C_7 == (MR_Char) 10);
      if (succeeded)
      {
        *STATE_VARIABLE_PS_10 = STATE_VARIABLE_PS_11_11;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer next_value_of_STATE_VARIABLE_PS_0_9 = STATE_VARIABLE_PS_11_11;

        // direct tailcall eliminated
        ;
        STATE_VARIABLE_PS_0_9 = next_value_of_STATE_VARIABLE_PS_0_9;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__whitespace_4_p_0(
  MR_Word Src_5,
  MR_Integer STATE_VARIABLE_PS_0_9,
  MR_Integer * STATE_VARIABLE_PS_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer STATE_VARIABLE_PS_11_11;
    MR_Char C_7;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__parsing_utils__next_char_4_p_0(Src_5, &C_7, STATE_VARIABLE_PS_0_9, &STATE_VARIABLE_PS_11_11);
    if (succeeded)
      succeeded = mercury__char__is_whitespace_1_p_0(C_7);
    if (succeeded)
    {
      MR_Integer next_value_of_STATE_VARIABLE_PS_0_9 = STATE_VARIABLE_PS_11_11;

      // direct tailcall eliminated
      ;
      STATE_VARIABLE_PS_0_9 = next_value_of_STATE_VARIABLE_PS_0_9;
      continue;
    }
    else
    {
{
#define MR_PROC_LABEL mercury__parsing_utils__whitespace_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
        *STATE_VARIABLE_PS_10 = STATE_VARIABLE_PS_0_9;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__identifier_6_p_0(
  MR_String InitIdChars_7,
  MR_String IdChars_8,
  MR_Word Src_9,
  MR_String * Identifier_10,
  MR_Integer STATE_VARIABLE_PS_0_16,
  MR_Integer * STATE_VARIABLE_PS_17)
{
  MR_bool succeeded;
  MR_Char Var_13;
  MR_Integer STATE_VARIABLE_PS_19_19;
  MR_Integer STATE_VARIABLE_PS_21_21;
  MR_Integer Var_23;
  MR_Word SkipWS_24;
  MR_Word SkipWS0_26;
  MR_Integer Var_22;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv2_Var_25;
  MR_Box conv1_STATE_VARIABLE_PS_17;

  succeeded = mercury__parsing_utils__next_char_4_p_0(Src_9, &Var_13, STATE_VARIABLE_PS_0_16, &STATE_VARIABLE_PS_19_19);
  if (succeeded)
  {
    Var_23 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__parsing_utils__identifier_6_p_0

	MR_String Str;
	MR_Char Ch;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	Str = InitIdChars_7 ;
	Ch = Var_13 ;
	BeginAt = Var_23 ;
		{

    char    *p = NULL;

    if (MR_is_ascii(Ch)) {
        // strchr will always find the null terminator, but the terminator
        // is not part of the string.
        if (Ch != '\0') {
            p = strchr(Str + BeginAt, Ch);
        }
    } else {
        char    buf[5];
        size_t  len;

        len = MR_utf8_encode(buf, Ch);
        if (len > 0) {
            buf[len] = '\0';
            p = strstr(Str + BeginAt, buf);
        }
    }
    if (p != NULL) {
        SUCCESS_INDICATOR = MR_TRUE;
        Index = (p - Str);
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
        Index = -1;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_22  = Index;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = mercury__parsing_utils__identifier_2_5_p_0(IdChars_8, Src_9, STATE_VARIABLE_PS_19_19, &STATE_VARIABLE_PS_21_21);
      if (succeeded)
      {
        SkipWS0_26 = ((MR_Word) ((MR_hl_field(0, Src_9, (MR_Integer) 2))));
{
#define MR_PROC_LABEL mercury__parsing_utils__identifier_6_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 = SkipWS0_26 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	SkipWS_24  = SkipWS;
}
        func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, SkipWS_24, (MR_Integer) 1))));
        succeeded = func_0(((MR_Box) (SkipWS_24)), ((MR_Box) (Src_9)), &conv2_Var_25, ((MR_Box) (STATE_VARIABLE_PS_21_21)), &conv1_STATE_VARIABLE_PS_17);
        if (succeeded)
        {
          *STATE_VARIABLE_PS_17 = ((MR_Integer) (conv1_STATE_VARIABLE_PS_17));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          succeeded = mercury__parsing_utils__input_substring_4_p_0(Src_9, STATE_VARIABLE_PS_0_16, STATE_VARIABLE_PS_21_21, Identifier_10);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__identifier_2_5_p_0(
  MR_String IdChars_6,
  MR_Word Src_7,
  MR_Integer STATE_VARIABLE_PS_0_11,
  MR_Integer * STATE_VARIABLE_PS_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer STATE_VARIABLE_PS_13_13;
    MR_Char Var_9;
    MR_Integer Var_15;
    MR_Integer Var_14;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__parsing_utils__next_char_4_p_0(Src_7, &Var_9, STATE_VARIABLE_PS_0_11, &STATE_VARIABLE_PS_13_13);
    if (succeeded)
    {
      Var_15 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__parsing_utils__identifier_2_5_p_0

	MR_String Str;
	MR_Char Ch;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	Str = IdChars_6 ;
	Ch = Var_9 ;
	BeginAt = Var_15 ;
		{

    char    *p = NULL;

    if (MR_is_ascii(Ch)) {
        // strchr will always find the null terminator, but the terminator
        // is not part of the string.
        if (Ch != '\0') {
            p = strchr(Str + BeginAt, Ch);
        }
    } else {
        char    buf[5];
        size_t  len;

        len = MR_utf8_encode(buf, Ch);
        if (len > 0) {
            buf[len] = '\0';
            p = strstr(Str + BeginAt, buf);
        }
    }
    if (p != NULL) {
        SUCCESS_INDICATOR = MR_TRUE;
        Index = (p - Str);
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
        Index = -1;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_14  = Index;
	}
succeeded  = SUCCESS_INDICATOR;
}
    }
    if (succeeded)
    {
      MR_Integer next_value_of_STATE_VARIABLE_PS_0_11 = STATE_VARIABLE_PS_13_13;

      // direct tailcall eliminated
      ;
      STATE_VARIABLE_PS_0_11 = next_value_of_STATE_VARIABLE_PS_0_11;
      continue;
    }
    else
    {
      *STATE_VARIABLE_PS_12 = STATE_VARIABLE_PS_0_11;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__ikeyword_6_p_0(
  MR_String IdChars_7,
  MR_String Keyword_8,
  MR_Word Src_9,
  MR_Integer STATE_VARIABLE_PS_0_13,
  MR_Integer * STATE_VARIABLE_PS_14)
{
  MR_bool succeeded;
  MR_Integer STATE_VARIABLE_PS_15_15;
  MR_Word SkipWS_18;
  MR_Word SkipWS0_20;
  MR_Char Var_11;
  MR_Integer Var_17;
  MR_Integer Var_12;
  MR_Integer Var_16;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv2_Var_19;
  MR_Box conv1_STATE_VARIABLE_PS_14;

  succeeded = mercury__parsing_utils__imatch_string_4_p_0(Keyword_8, Src_9, STATE_VARIABLE_PS_0_13, &STATE_VARIABLE_PS_15_15);
  if (succeeded)
  {
    succeeded = mercury__parsing_utils__next_char_4_p_0(Src_9, &Var_11, STATE_VARIABLE_PS_15_15, &Var_12);
    if (succeeded)
    {
      Var_17 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__parsing_utils__ikeyword_6_p_0

	MR_String Str;
	MR_Char Ch;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	Str = IdChars_7 ;
	Ch = Var_11 ;
	BeginAt = Var_17 ;
		{

    char    *p = NULL;

    if (MR_is_ascii(Ch)) {
        // strchr will always find the null terminator, but the terminator
        // is not part of the string.
        if (Ch != '\0') {
            p = strchr(Str + BeginAt, Ch);
        }
    } else {
        char    buf[5];
        size_t  len;

        len = MR_utf8_encode(buf, Ch);
        if (len > 0) {
            buf[len] = '\0';
            p = strstr(Str + BeginAt, buf);
        }
    }
    if (p != NULL) {
        SUCCESS_INDICATOR = MR_TRUE;
        Index = (p - Str);
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
        Index = -1;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_16  = Index;
	}
succeeded  = SUCCESS_INDICATOR;
}
    }
    succeeded = !(succeeded);
    if (succeeded)
    {
      SkipWS0_20 = ((MR_Word) ((MR_hl_field(0, Src_9, (MR_Integer) 2))));
{
#define MR_PROC_LABEL mercury__parsing_utils__ikeyword_6_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 = SkipWS0_20 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	SkipWS_18  = SkipWS;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, SkipWS_18, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (SkipWS_18)), ((MR_Box) (Src_9)), &conv2_Var_19, ((MR_Box) (STATE_VARIABLE_PS_15_15)), &conv1_STATE_VARIABLE_PS_14);
      if (succeeded)
      {
        *STATE_VARIABLE_PS_14 = ((MR_Integer) (conv1_STATE_VARIABLE_PS_14));
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__imatch_string_4_p_0(
  MR_String MatchStr_5,
  MR_Word Src_6,
  MR_Integer PS_7,
  MR_Integer * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Integer N_8;
  MR_Integer Var_9;
  MR_Integer Var_10;
  MR_Integer Var_11;
  MR_String Var_13;
  MR_Word MutVar_21 = ((MR_Word) ((MR_hl_field(0, Src_6, (MR_Integer) 3))));
  MR_Integer OS0_22;
  MR_Box conv0_OS0_22;

  mercury__mutvar__get_mutvar_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MutVar_21, &conv0_OS0_22);
  OS0_22 = ((MR_Integer) (conv0_OS0_22));
  succeeded = (PS_7 > OS0_22);
  if (succeeded)
    mercury__mutvar__set_mutvar_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MutVar_21, ((MR_Box) (PS_7)));
{
#define MR_PROC_LABEL mercury__parsing_utils__imatch_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = MatchStr_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	N_8  = Length;
}
  Var_9 = (MR_Integer) ((MR_Unsigned) PS_7 + (MR_Unsigned) N_8);
  Var_10 = ((MR_Integer) ((MR_hl_field(0, Src_6, (MR_Integer) 0))));
  Var_13 = ((MR_String) ((MR_hl_field(0, Src_6, (MR_Integer) 1))));
  succeeded = (Var_9 <= Var_10);
  if (succeeded)
  {
    Var_11 = (MR_Integer) 0;
    succeeded = mercury__parsing_utils__imatch_string_2_5_p_0(N_8, Var_11, MatchStr_5, PS_7, Var_13);
  }
  if (succeeded)
  {
    *HeadVar__4_4 = (MR_Integer) ((MR_Unsigned) PS_7 + (MR_Unsigned) N_8);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__parsing_utils__imatch_string_2_5_p_0(
  MR_Integer N_6,
  MR_Integer I_7,
  MR_String MatchStr_8,
  MR_Integer Offset_9,
  MR_String Str_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_7 < N_6);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer CodeUnit1_11;
      MR_Integer CodeUnit2_12;
      MR_Char Chr1_13;
      MR_Char Chr2_14;
      MR_Integer Var_15;
      MR_Char Var_16;
      MR_Integer Var_17;
      MR_Integer Var_18;
      MR_Char Var_19;
      MR_Char Var_20;
      MR_Char Var_21;
      MR_Integer next_value_of_I_7;

{
#define MR_PROC_LABEL mercury__parsing_utils__imatch_string_2_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str = MatchStr_8 ;
	Index = I_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	CodeUnit1_11  = Code;
}
      Var_15 = (MR_Integer) ((MR_Unsigned) Offset_9 + (MR_Unsigned) I_7);
{
#define MR_PROC_LABEL mercury__parsing_utils__imatch_string_2_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str = Str_10 ;
	Index = Var_15 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	CodeUnit2_12  = Code;
}
      mercury__char__det_from_int_2_p_0(CodeUnit1_11, &Chr1_13);
      mercury__char__det_from_int_2_p_0(CodeUnit2_12, &Chr2_14);
      succeeded = mercury__char__lower_upper_2_p_0(Chr1_13, &Var_20);
      if (succeeded)
        Var_16 = Var_20;
      else
        Var_16 = Chr1_13;
      succeeded = mercury__char__lower_upper_2_p_0(Chr2_14, &Var_21);
      if (succeeded)
        Var_19 = Var_21;
      else
        Var_19 = Chr2_14;
      succeeded = (Var_16 == Var_19);
      if (succeeded)
      {
        Var_18 = (MR_Integer) 1;
        Var_17 = (MR_Integer) ((MR_Unsigned) I_7 + (MR_Unsigned) Var_18);
        // direct tailcall eliminated
        ;
        next_value_of_I_7 = Var_17;
        I_7 = next_value_of_I_7;
        continue;
      }
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__keyword_6_p_0(
  MR_String IdChars_7,
  MR_String Keyword_8,
  MR_Word Src_9,
  MR_Integer STATE_VARIABLE_PS_0_13,
  MR_Integer * STATE_VARIABLE_PS_14)
{
  MR_bool succeeded;
  MR_Integer STATE_VARIABLE_PS_15_15;
  MR_Word SkipWS_18;
  MR_Word SkipWS0_20;
  MR_Char Var_11;
  MR_Integer Var_17;
  MR_Integer Var_12;
  MR_Integer Var_16;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv2_Var_19;
  MR_Box conv1_STATE_VARIABLE_PS_14;

  succeeded = mercury__parsing_utils__match_string_4_p_0(Keyword_8, Src_9, STATE_VARIABLE_PS_0_13, &STATE_VARIABLE_PS_15_15);
  if (succeeded)
  {
    succeeded = mercury__parsing_utils__next_char_4_p_0(Src_9, &Var_11, STATE_VARIABLE_PS_15_15, &Var_12);
    if (succeeded)
    {
      Var_17 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__parsing_utils__keyword_6_p_0

	MR_String Str;
	MR_Char Ch;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	Str = IdChars_7 ;
	Ch = Var_11 ;
	BeginAt = Var_17 ;
		{

    char    *p = NULL;

    if (MR_is_ascii(Ch)) {
        // strchr will always find the null terminator, but the terminator
        // is not part of the string.
        if (Ch != '\0') {
            p = strchr(Str + BeginAt, Ch);
        }
    } else {
        char    buf[5];
        size_t  len;

        len = MR_utf8_encode(buf, Ch);
        if (len > 0) {
            buf[len] = '\0';
            p = strstr(Str + BeginAt, buf);
        }
    }
    if (p != NULL) {
        SUCCESS_INDICATOR = MR_TRUE;
        Index = (p - Str);
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
        Index = -1;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_16  = Index;
	}
succeeded  = SUCCESS_INDICATOR;
}
    }
    succeeded = !(succeeded);
    if (succeeded)
    {
      SkipWS0_20 = ((MR_Word) ((MR_hl_field(0, Src_9, (MR_Integer) 2))));
{
#define MR_PROC_LABEL mercury__parsing_utils__keyword_6_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 = SkipWS0_20 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	SkipWS_18  = SkipWS;
}
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, SkipWS_18, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (SkipWS_18)), ((MR_Box) (Src_9)), &conv2_Var_19, ((MR_Box) (STATE_VARIABLE_PS_15_15)), &conv1_STATE_VARIABLE_PS_14);
      if (succeeded)
      {
        *STATE_VARIABLE_PS_14 = ((MR_Integer) (conv1_STATE_VARIABLE_PS_14));
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__punct_5_p_0(
  MR_String Punct_6,
  MR_Word Src_7,
  MR_Integer STATE_VARIABLE_PS_0_9,
  MR_Integer * STATE_VARIABLE_PS_10)
{
  MR_bool succeeded;
  MR_Integer STATE_VARIABLE_PS_11_11;
  MR_Word SkipWS_12;
  MR_Word SkipWS0_14;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv2_Var_13;
  MR_Box conv1_STATE_VARIABLE_PS_10;

  succeeded = mercury__parsing_utils__match_string_4_p_0(Punct_6, Src_7, STATE_VARIABLE_PS_0_9, &STATE_VARIABLE_PS_11_11);
  if (succeeded)
  {
    SkipWS0_14 = ((MR_Word) ((MR_hl_field(0, Src_7, (MR_Integer) 2))));
{
#define MR_PROC_LABEL mercury__parsing_utils__punct_5_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 = SkipWS0_14 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	SkipWS_12  = SkipWS;
}
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, SkipWS_12, (MR_Integer) 1))));
    succeeded = func_0(((MR_Box) (SkipWS_12)), ((MR_Box) (Src_7)), &conv2_Var_13, ((MR_Box) (STATE_VARIABLE_PS_11_11)), &conv1_STATE_VARIABLE_PS_10);
    if (succeeded)
    {
      *STATE_VARIABLE_PS_10 = ((MR_Integer) (conv1_STATE_VARIABLE_PS_10));
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__match_string_4_p_0(
  MR_String MatchStr_5,
  MR_Word Src_6,
  MR_Integer PS_7,
  MR_Integer * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Integer N_8;
  MR_Integer Var_9;
  MR_Integer Var_10;
  MR_Integer Var_11;
  MR_String Var_13;
  MR_Word MutVar_21 = ((MR_Word) ((MR_hl_field(0, Src_6, (MR_Integer) 3))));
  MR_Integer OS0_22;
  MR_Box conv0_OS0_22;

  mercury__mutvar__get_mutvar_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MutVar_21, &conv0_OS0_22);
  OS0_22 = ((MR_Integer) (conv0_OS0_22));
  succeeded = (PS_7 > OS0_22);
  if (succeeded)
    mercury__mutvar__set_mutvar_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MutVar_21, ((MR_Box) (PS_7)));
{
#define MR_PROC_LABEL mercury__parsing_utils__match_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = MatchStr_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	N_8  = Length;
}
  Var_9 = (MR_Integer) ((MR_Unsigned) PS_7 + (MR_Unsigned) N_8);
  Var_10 = ((MR_Integer) ((MR_hl_field(0, Src_6, (MR_Integer) 0))));
  Var_13 = ((MR_String) ((MR_hl_field(0, Src_6, (MR_Integer) 1))));
  succeeded = (Var_9 <= Var_10);
  if (succeeded)
  {
    Var_11 = (MR_Integer) 0;
    succeeded = mercury__parsing_utils__match_string_2_5_p_0(N_8, Var_11, MatchStr_5, PS_7, Var_13);
  }
  if (succeeded)
  {
    *HeadVar__4_4 = (MR_Integer) ((MR_Unsigned) PS_7 + (MR_Unsigned) N_8);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__parsing_utils__match_string_2_5_p_0(
  MR_Integer N_6,
  MR_Integer I_7,
  MR_String MatchStr_8,
  MR_Integer Offset_9,
  MR_String Str_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_7 < N_6);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer CodeUnit_11;
      MR_Integer Var_12;
      MR_Integer Var_13;
      MR_Integer Var_14;
      MR_Integer Var_15;
      MR_Integer next_value_of_I_7;

{
#define MR_PROC_LABEL mercury__parsing_utils__match_string_2_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str = MatchStr_8 ;
	Index = I_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	CodeUnit_11  = Code;
}
      Var_12 = (MR_Integer) ((MR_Unsigned) Offset_9 + (MR_Unsigned) I_7);
{
#define MR_PROC_LABEL mercury__parsing_utils__match_string_2_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str = Str_10 ;
	Index = Var_12 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	Var_15  = Code;
}
      succeeded = (CodeUnit_11 == Var_15);
      if (succeeded)
      {
        Var_14 = (MR_Integer) 1;
        Var_13 = (MR_Integer) ((MR_Unsigned) I_7 + (MR_Unsigned) Var_14);
        // direct tailcall eliminated
        ;
        next_value_of_I_7 = Var_13;
        I_7 = next_value_of_I_7;
        continue;
      }
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__char_in_class_5_p_0(
  MR_String CharClass_6,
  MR_Word Src_7,
  MR_Char * Char_8,
  MR_Integer STATE_VARIABLE_PS_0_10,
  MR_Integer * STATE_VARIABLE_PS_11)
{
  MR_bool succeeded;
  MR_Integer Var_13;
  MR_Integer Var_12;

  succeeded = mercury__parsing_utils__next_char_4_p_0(Src_7, Char_8, STATE_VARIABLE_PS_0_10, STATE_VARIABLE_PS_11);
  if (succeeded)
  {
    Var_13 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__parsing_utils__char_in_class_5_p_0

	MR_String Str;
	MR_Char Ch;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	Str = CharClass_6 ;
	Ch = *Char_8 ;
	BeginAt = Var_13 ;
		{

    char    *p = NULL;

    if (MR_is_ascii(Ch)) {
        // strchr will always find the null terminator, but the terminator
        // is not part of the string.
        if (Ch != '\0') {
            p = strchr(Str + BeginAt, Ch);
        }
    } else {
        char    buf[5];
        size_t  len;

        len = MR_utf8_encode(buf, Ch);
        if (len > 0) {
            buf[len] = '\0';
            p = strstr(Str + BeginAt, buf);
        }
    }
    if (p != NULL) {
        SUCCESS_INDICATOR = MR_TRUE;
        Index = (p - Str);
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
        Index = -1;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_12  = Index;
	}
succeeded  = SUCCESS_INDICATOR;
}
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__next_char_no_progress_4_p_0(
  MR_Word Src_5,
  MR_Char * Char_6,
  MR_Integer STATE_VARIABLE_PS_0_11,
  MR_Integer * STATE_VARIABLE_PS_12)
{
  MR_bool succeeded;
  MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(0, Src_5, (MR_Integer) 0))));
  MR_String Var_15 = ((MR_String) ((MR_hl_field(0, Src_5, (MR_Integer) 1))));
  MR_Integer Var_23;

  succeeded = (STATE_VARIABLE_PS_0_11 < Var_13);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__parsing_utils__next_char_no_progress_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Var_15 ;
	Index = STATE_VARIABLE_PS_0_11 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*STATE_VARIABLE_PS_12  = NextIndex;
	*Char_6  = Ch;
	Var_23  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__parsing_utils__next_char_4_p_0(
  MR_Word Src_5,
  MR_Char * Char_6,
  MR_Integer STATE_VARIABLE_PS_0_11,
  MR_Integer * STATE_VARIABLE_PS_12)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_11_30;
  MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(0, Src_5, (MR_Integer) 0))));
  MR_String Var_15 = ((MR_String) ((MR_hl_field(0, Src_5, (MR_Integer) 1))));
  MR_Word MutVar_24;
  MR_Integer OS0_25;
  MR_Integer Var_23;
  MR_Box conv0_OS0_25;

  succeeded = (STATE_VARIABLE_PS_0_11 < Var_13);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__parsing_utils__next_char_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Var_15 ;
	Index = STATE_VARIABLE_PS_0_11 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*STATE_VARIABLE_PS_12  = NextIndex;
	*Char_6  = Ch;
	Var_23  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MutVar_24 = ((MR_Word) ((MR_hl_field(0, Src_5, (MR_Integer) 3))));
      TypeCtorInfo_11_30 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
      mercury__mutvar__get_mutvar_2_p_0(TypeCtorInfo_11_30, MutVar_24, &conv0_OS0_25);
      OS0_25 = ((MR_Integer) (conv0_OS0_25));
      succeeded = (STATE_VARIABLE_PS_0_11 > OS0_25);
      if (succeeded)
        mercury__mutvar__set_mutvar_2_p_0(TypeCtorInfo_11_30, MutVar_24, ((MR_Box) (STATE_VARIABLE_PS_0_11)));
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__parsing_utils__offset_to_line_number_and_position_4_p_0(
  MR_ArrayPtr LineNos_5,
  MR_Integer Offset_6,
  MR_Integer * LineNo_7,
  MR_Integer * Pos_8)
{
  MR_Integer Hi_10;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__parsing_utils__offset_to_line_number_and_position_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (LineNos_5) ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Var_11  = Max;
}
  Hi_10 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) 1);
  mercury__parsing_utils__offset_to_line_number_and_position_2_6_p_0(LineNos_5, (MR_Integer) 0, Hi_10, Offset_6, LineNo_7, Pos_8);
}

MR_ArrayPtr MR_CALL 
mercury__parsing_utils__src_to_line_numbers_1_f_0(
  MR_Word Src_3)
{
  MR_ArrayPtr LineNos_4;
  MR_String Str_5 = ((MR_String) ((MR_hl_field(0, Src_3, (MR_Integer) 1))));
  MR_Word RevLineNosList_6;
  MR_ArrayPtr conv0_LineNos_4;

  mercury__parsing_utils__src_to_line_numbers_loop_4_p_0(Str_5, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &RevLineNosList_6);
  mercury__array__from_reverse_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevLineNosList_6, &conv0_LineNos_4);
  LineNos_4 = (MR_ArrayPtr) (conv0_LineNos_4);
  return LineNos_4;
}

MR_bool MR_CALL 
mercury__parsing_utils__input_substring_4_p_0(
  MR_Word Src_5,
  MR_Integer Start_6,
  MR_Integer EndPlusOne_7,
  MR_String * Substring_8)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_11_25;
  MR_Integer Var_9 = ((MR_Integer) ((MR_hl_field(0, Src_5, (MR_Integer) 0))));
  MR_String Var_11 = ((MR_String) ((MR_hl_field(0, Src_5, (MR_Integer) 1))));
  MR_Word MutVar_19;
  MR_Integer OS0_20;
  MR_Box conv0_OS0_20;

  succeeded = (EndPlusOne_7 <= Var_9);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__parsing_utils__input_substring_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Var_11 ;
	Start = Start_6 ;
	End = EndPlusOne_7 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	*Substring_8  = SubString;
}
    MutVar_19 = ((MR_Word) ((MR_hl_field(0, Src_5, (MR_Integer) 3))));
    TypeCtorInfo_11_25 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
    mercury__mutvar__get_mutvar_2_p_0(TypeCtorInfo_11_25, MutVar_19, &conv0_OS0_20);
    OS0_20 = ((MR_Integer) (conv0_OS0_20));
    succeeded = (Start_6 > OS0_20);
    if (succeeded)
      mercury__mutvar__set_mutvar_2_p_0(TypeCtorInfo_11_25, MutVar_19, ((MR_Box) (Start_6)));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__parsing_utils__get_skip_whitespace_pred_2_p_0(
  MR_Word Src_3,
  MR_Word * SkipWS_4)
{
  MR_Word SkipWS0_5 = ((MR_Word) ((MR_hl_field(0, Src_3, (MR_Integer) 2))));

{
#define MR_PROC_LABEL mercury__parsing_utils__get_skip_whitespace_pred_2_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 = SkipWS0_5 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	*SkipWS_4  = SkipWS;
}
}

void MR_CALL 
mercury__parsing_utils__current_offset_4_p_0(
  MR_Word _Src_5,
  MR_Integer * Offset_6,
  MR_Integer STATE_VARIABLE_PS_0_8,
  MR_Integer * STATE_VARIABLE_PS_9)
{
  mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_117_114_114_101_110_116_95_111_102_102_115_101_116_95_95_91_49_93_95_48_4_p_0(Offset_6, STATE_VARIABLE_PS_0_8, STATE_VARIABLE_PS_9);
}

void MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_117_114_114_101_110_116_95_111_102_102_115_101_116_95_95_91_49_93_95_48_4_p_0(
  MR_Integer * Offset_6,
  MR_Integer STATE_VARIABLE_PS_0_8,
  MR_Integer * STATE_VARIABLE_PS_9)
{
  *Offset_6 = STATE_VARIABLE_PS_0_8;
  *STATE_VARIABLE_PS_9 = STATE_VARIABLE_PS_0_8;
}

void MR_CALL 
mercury__parsing_utils__input_string_3_p_0(
  MR_Word Src_4,
  MR_String * HeadVar__2_2,
  MR_Integer * HeadVar__3_3)
{
  *HeadVar__3_3 = ((MR_Integer) ((MR_hl_field(0, Src_4, (MR_Integer) 0))));
  *HeadVar__2_2 = ((MR_String) ((MR_hl_field(0, Src_4, (MR_Integer) 1))));
}

static MR_bool MR_CALL 
mercury__parsing_utils__new_src_and_ps_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Integer conv0_STATE_VARIABLE_PS_10;

  succeeded = mercury__parsing_utils__whitespace_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_3)), &conv0_STATE_VARIABLE_PS_10);
  if (succeeded)
  {
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_PS_10));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__parsing_utils__new_src_and_ps_3_p_0(
  MR_String InputString_4,
  MR_Word * Src_5,
  MR_Integer * PS_6)
{
  MR_bool succeeded;
  MR_Word ErrorInfoMutVar_9;
  MR_Word FurthestOffsetMutvar_10;
  MR_Integer Var_15;

  mercury__mutvar__new_mutvar_2_p_1((MR_Word) (&mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0), ((MR_Box) (&mercury__parsing_utils_scalar_common_1[4])), &ErrorInfoMutVar_9);
  mercury__mutvar__new_mutvar_2_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) ((MR_Integer) 0)), &FurthestOffsetMutvar_10);
{
#define MR_PROC_LABEL mercury__parsing_utils__new_src_and_ps_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = InputString_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_15  = Length;
}
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Src_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (InputString_4));
    MR_hl_field(0, base, 2) = ((MR_Box) (&mercury__parsing_utils_scalar_common_3[2]));
    MR_hl_field(0, base, 3) = ((MR_Box) (FurthestOffsetMutvar_10));
    MR_hl_field(0, base, 4) = ((MR_Box) (ErrorInfoMutVar_9));
  }
  *PS_6 = (MR_Integer) 0;
}

static MR_bool MR_CALL 
mercury__parsing_utils__parse_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Integer conv0_STATE_VARIABLE_PS_10;

  succeeded = mercury__parsing_utils__whitespace_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_3)), &conv0_STATE_VARIABLE_PS_10);
  if (succeeded)
  {
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_PS_10));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__parsing_utils__parse_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_String InputString_4,
  MR_Word Parser_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word Src_10;
  MR_Word ErrorInfoMutVar_39;
  MR_Word FurthestOffsetMutvar_40;
  MR_Integer Var_45;
  MR_Box Val_12;
  MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv2_Var_13;

  mercury__mutvar__new_mutvar_2_p_1((MR_Word) (&mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0), ((MR_Box) (&mercury__parsing_utils_scalar_common_1[4])), &ErrorInfoMutVar_39);
  mercury__mutvar__new_mutvar_2_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) ((MR_Integer) 0)), &FurthestOffsetMutvar_40);
{
#define MR_PROC_LABEL mercury__parsing_utils__parse_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = InputString_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_45  = Length;
}
  {
    Src_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Src_10, 0) = ((MR_Box) (Var_45));
    MR_hl_field(0, Src_10, 1) = ((MR_Box) (InputString_4));
    MR_hl_field(0, Src_10, 2) = ((MR_Box) (&mercury__parsing_utils_scalar_common_3[1]));
    MR_hl_field(0, Src_10, 3) = ((MR_Box) (FurthestOffsetMutvar_40));
    MR_hl_field(0, Src_10, 4) = ((MR_Box) (ErrorInfoMutVar_39));
  }
  func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Parser_5, (MR_Integer) 1))));
  succeeded = func_1(((MR_Box) (Parser_5)), ((MR_Box) (Src_10)), &Val_12, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_13);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(0, base, 0) = Val_12;
    }
  else
  {
    MR_Word Info_14;
    MR_Integer FurthestOffset_15;
    MR_Integer MessageOffset_16;
    MR_Word LastFailMsg_17;
    MR_Word Msg_18;
    MR_Integer Offset_19;
    MR_Integer Line_20;
    MR_Integer Col_21;
    MR_Word Result0_22;
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Src_10, (MR_Integer) 4))));
    MR_Word Var_24;
    MR_ArrayPtr Var_25;
    MR_String Str_48;
    MR_Word RevLineNosList_49;
    MR_Integer Hi_58;
    MR_Integer Var_59;
    MR_Box conv3_Info_14;
    MR_Box conv4_FurthestOffset_15;
    MR_ArrayPtr conv5_Var_25;
    MR_Box conv6_Y;

    mercury__mutvar__get_mutvar_2_p_0((MR_Word) (&mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0), Var_23, &conv3_Info_14);
    Info_14 = ((MR_Word) (conv3_Info_14));
    Var_24 = ((MR_Word) ((MR_hl_field(0, Src_10, (MR_Integer) 3))));
    mercury__mutvar__get_mutvar_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_24, &conv4_FurthestOffset_15);
    FurthestOffset_15 = ((MR_Integer) (conv4_FurthestOffset_15));
    MessageOffset_16 = ((MR_Integer) ((MR_hl_field(0, Info_14, (MR_Integer) 0))));
    LastFailMsg_17 = ((MR_Word) ((MR_hl_field(0, Info_14, (MR_Integer) 1))));
    succeeded = (MessageOffset_16 < FurthestOffset_15);
    if (succeeded)
    {
      Msg_18 = (MR_Word) ((MR_Unsigned) 0U);
      Offset_19 = FurthestOffset_15;
    }
    else
    {
      Msg_18 = LastFailMsg_17;
      Offset_19 = MessageOffset_16;
    }
    Str_48 = ((MR_String) ((MR_hl_field(0, Src_10, (MR_Integer) 1))));
    mercury__parsing_utils__src_to_line_numbers_loop_4_p_0(Str_48, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &RevLineNosList_49);
    mercury__array__from_reverse_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevLineNosList_49, &conv5_Var_25);
    Var_25 = (MR_ArrayPtr) (conv5_Var_25);
{
#define MR_PROC_LABEL mercury__parsing_utils__parse_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_25) ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Var_59  = Max;
}
    Hi_58 = (MR_Integer) ((MR_Unsigned) Var_59 - (MR_Unsigned) 1);
    mercury__parsing_utils__offset_to_line_number_and_position_2_6_p_0(Var_25, (MR_Integer) 0, Hi_58, Offset_19, &Line_20, &Col_21);
    {
      Result0_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Result0_22, 0) = ((MR_Box) (Msg_18));
      MR_hl_field(1, Result0_22, 1) = ((MR_Box) (Line_20));
      MR_hl_field(1, Result0_22, 2) = ((MR_Box) (Col_21));
    }
{
#define MR_PROC_LABEL mercury__parsing_utils__parse_3_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (Result0_22)) ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	conv6_Y  = (MR_Box) Y;
    *Result_6 = ((MR_Word) (conv6_Y));
}
  }
}

void MR_CALL 
mercury__parsing_utils__parse_4_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_String InputString_5,
  MR_Word SkipWS_6,
  MR_Word Parser_7,
  MR_Word * Result_8)
{
  MR_bool succeeded;
  MR_Word Src_9;
  MR_Integer PS0_10;
  MR_Box Val_11;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv1_Var_12;

  mercury__parsing_utils__new_src_and_ps_4_p_0(InputString_5, SkipWS_6, &Src_9, &PS0_10);
  func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Parser_7, (MR_Integer) 1))));
  succeeded = func_0(((MR_Box) (Parser_7)), ((MR_Box) (Src_9)), &Val_11, ((MR_Box) (PS0_10)), &conv1_Var_12);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_8 = base;
      MR_hl_field(0, base, 0) = Val_11;
    }
  else
  {
    MR_Word Info_13;
    MR_Integer FurthestOffset_14;
    MR_Integer MessageOffset_15;
    MR_Word LastFailMsg_16;
    MR_Word Msg_17;
    MR_Integer Offset_18;
    MR_Integer Line_19;
    MR_Integer Col_20;
    MR_Word Result0_21;
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Src_9, (MR_Integer) 4))));
    MR_Word Var_23;
    MR_ArrayPtr Var_24;
    MR_String Str_38;
    MR_Word RevLineNosList_39;
    MR_Integer Hi_48;
    MR_Integer Var_49;
    MR_Box conv2_Info_13;
    MR_Box conv3_FurthestOffset_14;
    MR_ArrayPtr conv4_Var_24;
    MR_Box conv5_Y;

    mercury__mutvar__get_mutvar_2_p_0((MR_Word) (&mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0), Var_22, &conv2_Info_13);
    Info_13 = ((MR_Word) (conv2_Info_13));
    Var_23 = ((MR_Word) ((MR_hl_field(0, Src_9, (MR_Integer) 3))));
    mercury__mutvar__get_mutvar_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_23, &conv3_FurthestOffset_14);
    FurthestOffset_14 = ((MR_Integer) (conv3_FurthestOffset_14));
    MessageOffset_15 = ((MR_Integer) ((MR_hl_field(0, Info_13, (MR_Integer) 0))));
    LastFailMsg_16 = ((MR_Word) ((MR_hl_field(0, Info_13, (MR_Integer) 1))));
    succeeded = (MessageOffset_15 < FurthestOffset_14);
    if (succeeded)
    {
      Msg_17 = (MR_Word) ((MR_Unsigned) 0U);
      Offset_18 = FurthestOffset_14;
    }
    else
    {
      Msg_17 = LastFailMsg_16;
      Offset_18 = MessageOffset_15;
    }
    Str_38 = ((MR_String) ((MR_hl_field(0, Src_9, (MR_Integer) 1))));
    mercury__parsing_utils__src_to_line_numbers_loop_4_p_0(Str_38, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &RevLineNosList_39);
    mercury__array__from_reverse_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevLineNosList_39, &conv4_Var_24);
    Var_24 = (MR_ArrayPtr) (conv4_Var_24);
{
#define MR_PROC_LABEL mercury__parsing_utils__parse_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (Var_24) ;
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	Var_49  = Max;
}
    Hi_48 = (MR_Integer) ((MR_Unsigned) Var_49 - (MR_Unsigned) 1);
    mercury__parsing_utils__offset_to_line_number_and_position_2_6_p_0(Var_24, (MR_Integer) 0, Hi_48, Offset_18, &Line_19, &Col_20);
    {
      Result0_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Result0_21, 0) = ((MR_Box) (Msg_17));
      MR_hl_field(1, Result0_21, 1) = ((MR_Box) (Line_19));
      MR_hl_field(1, Result0_21, 2) = ((MR_Box) (Col_20));
    }
{
#define MR_PROC_LABEL mercury__parsing_utils__parse_4_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (Result0_21)) ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	conv5_Y  = (MR_Box) Y;
    *Result_8 = ((MR_Word) (conv5_Y));
}
  }
}

void MR_CALL 
mercury__parsing_utils__offset_to_line_number_and_position_2_6_p_0(
  MR_ArrayPtr LineNos_7,
  MR_Integer Lo_8,
  MR_Integer Hi_9,
  MR_Integer Offset_10,
  MR_Integer * LineNo_11,
  MR_Integer * Pos_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Lo_8 < Hi_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Mid_13;
      MR_Integer MidOffset_14;
      MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) Lo_8 + (MR_Unsigned) Hi_9);
      MR_Box conv0_MidOffset_14;

      Mid_13 = (Var_16 / (MR_Integer) 2);
      mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_ArrayPtr) (LineNos_7), Mid_13, &conv0_MidOffset_14);
      MidOffset_14 = ((MR_Integer) (conv0_MidOffset_14));
      succeeded = (MidOffset_14 < Offset_10);
      if (succeeded)
      {
        MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) Mid_13 + (MR_Unsigned) 1);
        MR_Integer next_value_of_Lo_8 = Var_18;

        // direct tailcall eliminated
        ;
        Lo_8 = next_value_of_Lo_8;
        continue;
      }
      else
      {
        MR_Integer next_value_of_Hi_9 = Mid_13;

        // direct tailcall eliminated
        ;
        Hi_9 = next_value_of_Hi_9;
        continue;
      }
    }
    else
    {
      MR_Integer LineBegin_15;
      MR_Integer Var_25;

      succeeded = (Lo_8 == (MR_Integer) 0);
      if (succeeded)
        LineBegin_15 = (MR_Integer) 0;
      else
      {
        MR_Integer Var_20;
        MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) Lo_8 - (MR_Unsigned) 1);
        MR_Box conv1_Var_20;

        mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_ArrayPtr) (LineNos_7), Var_21, &conv1_Var_20);
        Var_20 = ((MR_Integer) (conv1_Var_20));
        LineBegin_15 = (MR_Integer) ((MR_Unsigned) Var_20 + (MR_Unsigned) 1);
      }
      *LineNo_11 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Lo_8);
      Var_25 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Offset_10);
      *Pos_12 = (MR_Integer) ((MR_Unsigned) Var_25 - (MR_Unsigned) LineBegin_15);
    }
    break;
  }
}

void MR_CALL 
mercury__parsing_utils__src_to_line_numbers_loop_4_p_0(
  MR_String Str_5,
  MR_Integer Pos0_6,
  MR_Word STATE_VARIABLE_RevLineNosList_0_10,
  MR_Word * STATE_VARIABLE_RevLineNosList_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Pos_8;
    MR_Char Char_9;
    MR_Integer Var_13;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__parsing_utils__src_to_line_numbers_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_5 ;
	Index = Pos0_6 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Pos_8  = NextIndex;
	Char_9  = Ch;
	Var_13  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_RevLineNosList_12_12;
      MR_Integer next_value_of_Pos0_6;
      MR_Word next_value_of_STATE_VARIABLE_RevLineNosList_0_10;

      succeeded = (Char_9 == (MR_Char) 10);
      if (succeeded)
        {
          STATE_VARIABLE_RevLineNosList_12_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevLineNosList_12_12, 0) = ((MR_Box) (Pos0_6));
          MR_hl_field(1, STATE_VARIABLE_RevLineNosList_12_12, 1) = ((MR_Box) (STATE_VARIABLE_RevLineNosList_0_10));
        }
      else
        STATE_VARIABLE_RevLineNosList_12_12 = STATE_VARIABLE_RevLineNosList_0_10;
      // direct tailcall eliminated
      ;
      next_value_of_Pos0_6 = Pos_8;
      next_value_of_STATE_VARIABLE_RevLineNosList_0_10 = STATE_VARIABLE_RevLineNosList_12_12;
      Pos0_6 = next_value_of_Pos0_6;
      STATE_VARIABLE_RevLineNosList_0_10 = next_value_of_STATE_VARIABLE_RevLineNosList_0_10;
      continue;
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_RevLineNosList_11 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Pos0_6));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevLineNosList_0_10));
      }
    break;
  }
}

void MR_CALL 
mercury__parsing_utils__new_src_and_ps_4_p_0(
  MR_String InputString_5,
  MR_Word SkipWS_6,
  MR_Word * Src_7,
  MR_Integer * PS_8)
{
  MR_Word ErrorInfoMutVar_9;
  MR_Word FurthestOffsetMutvar_10;
  MR_Integer Var_15;

  mercury__mutvar__new_mutvar_2_p_1((MR_Word) (&mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0), ((MR_Box) (&mercury__parsing_utils_scalar_common_1[4])), &ErrorInfoMutVar_9);
  mercury__mutvar__new_mutvar_2_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) ((MR_Integer) 0)), &FurthestOffsetMutvar_10);
{
#define MR_PROC_LABEL mercury__parsing_utils__new_src_and_ps_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = InputString_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_15  = Length;
}
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Src_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (InputString_5));
    MR_hl_field(0, base, 2) = ((MR_Box) (SkipWS_6));
    MR_hl_field(0, base, 3) = ((MR_Box) (FurthestOffsetMutvar_10));
    MR_hl_field(0, base, 4) = ((MR_Box) (ErrorInfoMutVar_9));
  }
  *PS_8 = (MR_Integer) 0;
}

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____fail_message_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__parsing_utils____Unify____fail_message_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__parsing_utils____Compare____fail_message_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__parsing_utils____Compare____fail_message_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____line_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__parsing_utils____Unify____line_numbers_0_0(((MR_ArrayPtr) (wrapper_arg_1)), ((MR_ArrayPtr) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__parsing_utils____Compare____line_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__parsing_utils____Compare____line_numbers_0_0(&conv0_HeadVar__1_1, ((MR_ArrayPtr) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____parse_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__parsing_utils____Unify____parse_result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__parsing_utils____Compare____parse_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__parsing_utils____Compare____parse_result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____parser_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__parsing_utils____Unify____parser_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__parsing_utils____Compare____parser_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__parsing_utils____Compare____parser_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____parser_with_state_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__parsing_utils____Unify____parser_with_state_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__parsing_utils____Compare____parser_with_state_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__parsing_utils____Compare____parser_with_state_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____ps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__parsing_utils____Unify____ps_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__parsing_utils____Compare____ps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__parsing_utils____Compare____ps_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____skip_whitespace_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__parsing_utils____Unify____skip_whitespace_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__parsing_utils____Compare____skip_whitespace_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__parsing_utils____Compare____skip_whitespace_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____src_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__parsing_utils____Unify____src_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__parsing_utils____Compare____src_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__parsing_utils____Compare____src_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parsing_utils__init(void)
{
}

void mercury__parsing_utils__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0);
	MR_register_type_ctor_info(&mercury__parsing_utils__parsing_utils__type_ctor_info_line_numbers_0);
	MR_register_type_ctor_info(&mercury__parsing_utils__parsing_utils__type_ctor_info_parse_result_1);
	MR_register_type_ctor_info(&mercury__parsing_utils__parsing_utils__type_ctor_info_parser_1);
	MR_register_type_ctor_info(&mercury__parsing_utils__parsing_utils__type_ctor_info_parser_with_state_2);
	MR_register_type_ctor_info(&mercury__parsing_utils__parsing_utils__type_ctor_info_ps_0);
	MR_register_type_ctor_info(&mercury__parsing_utils__parsing_utils__type_ctor_info_skip_whitespace_pred_0);
	MR_register_type_ctor_info(&mercury__parsing_utils__parsing_utils__type_ctor_info_src_0);
}

void mercury__parsing_utils__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parsing_utils__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parsing_utils.
