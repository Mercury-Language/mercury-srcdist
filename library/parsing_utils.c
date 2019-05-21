/*
** Automatically generated from `parsing_utils.m'
** by the Mercury compiler,
** version rotd-2017-07-31
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module parsing_utils. */
/* :- implementation. */

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
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
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

static MR_Integer MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_114_101_118_95_97_99_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_p_0(
  MR_String mercury__parsing_utils__Var_31,
  MR_Word mercury__parsing_utils__Var_32,
  MR_Word mercury__parsing_utils__Src_10,
  MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_0_15,
  MR_Word * mercury__parsing_utils__STATE_VARIABLE_RevResult_16,
  MR_Box mercury__parsing_utils__STATE_VARIABLE_S_0_17,
  MR_Box * mercury__parsing_utils__STATE_VARIABLE_S_18,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_19,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_20);

static MR_bool MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_114_101_118_95_97_99_99_95_95_104_111_54_95_95_91_49_44_32_52_44_32_53_93_95_48_6_p_0(
  MR_String mercury__parsing_utils__Var_22,
  MR_Word mercury__parsing_utils__Var_23,
  MR_Word mercury__parsing_utils__Src_8,
  MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_0_12,
  MR_Word * mercury__parsing_utils__STATE_VARIABLE_RevResult_13,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_14,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_15);

static MR_bool MR_CALL 
mercury__parsing_utils__digits_2_5_p_0(
  MR_Integer mercury__parsing_utils__Base_6,
  MR_Word mercury__parsing_utils__Src_7,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_11,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_12);

static MR_bool MR_CALL 
mercury__parsing_utils__imatch_string_2_5_p_0(
  MR_Integer mercury__parsing_utils__N_6,
  MR_Integer mercury__parsing_utils__I_7,
  MR_String mercury__parsing_utils__MatchStr_8,
  MR_Integer mercury__parsing_utils__Offset_9,
  MR_String mercury__parsing_utils__Str_10);

static MR_bool MR_CALL 
mercury__parsing_utils__match_string_2_5_p_0(
  MR_Integer mercury__parsing_utils__N_6,
  MR_Integer mercury__parsing_utils__I_7,
  MR_String mercury__parsing_utils__MatchStr_8,
  MR_Integer mercury__parsing_utils__Offset_9,
  MR_String mercury__parsing_utils__Str_10);

static MR_bool MR_CALL 
mercury__parsing_utils__new_src_and_ps_3_p_0_1(
  MR_Box mercury__parsing_utils__closure_arg,
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box * mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3,
  MR_Box * mercury__parsing_utils__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__parsing_utils__parse_3_p_0_1(
  MR_Box mercury__parsing_utils__closure_arg,
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box * mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3,
  MR_Box * mercury__parsing_utils__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____fail_message_info_0_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2);

static void MR_CALL 
mercury__parsing_utils____Compare____fail_message_info_0_0_10001(
  MR_Box * mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____line_numbers_0_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2);

static void MR_CALL 
mercury__parsing_utils____Compare____line_numbers_0_0_10001(
  MR_Box * mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____parse_result_1_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3);

static void MR_CALL 
mercury__parsing_utils____Compare____parse_result_1_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box * mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3,
  MR_Box mercury__parsing_utils__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____parser_1_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3);

static void MR_CALL 
mercury__parsing_utils____Compare____parser_1_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box * mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3,
  MR_Box mercury__parsing_utils__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____parser_with_state_2_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3,
  MR_Box mercury__parsing_utils__wrapper_arg_4);

static void MR_CALL 
mercury__parsing_utils____Compare____parser_with_state_2_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2,
  MR_Box * mercury__parsing_utils__wrapper_arg_3,
  MR_Box mercury__parsing_utils__wrapper_arg_4,
  MR_Box mercury__parsing_utils__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____ps_0_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2);

static void MR_CALL 
mercury__parsing_utils____Compare____ps_0_0_10001(
  MR_Box * mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____skip_whitespace_pred_0_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2);

static void MR_CALL 
mercury__parsing_utils____Compare____skip_whitespace_pred_0_0_10001(
  MR_Box * mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____src_0_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2);

static void MR_CALL 
mercury__parsing_utils____Compare____src_0_0_10001(
  MR_Box * mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3);


static /* final */ const MR_Box mercury__parsing_utils_scalar_common_1[5][2];

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_2[1][6];

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_3[3][3];

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_4[1][4];

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_5[2][5];

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_6[1][7];




static /* final */ const MR_Box mercury__parsing_utils_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__mutvar__mutvar__type_ctor_info_mutvar_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__mutvar__mutvar__type_ctor_info_mutvar_1)),
    ((MR_Box) (&mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_2[1][6] = {
  /* row 0 */
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
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__parsing_utils_scalar_common_6[0])),
    ((MR_Box) (mercury__parsing_utils__parse_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__parsing_utils_scalar_common_6[0])),
    ((MR_Box) (mercury__parsing_utils__new_src_and_ps_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_4[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__parsing_utils_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_5[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__parsing_utils_scalar_common_4[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__parsing_utils_scalar_common_4[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
#include "io.mh"
#include "math.mh"
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
#include "version_array.mh"



static const MR_FA_TypeInfo_Struct1 mercury__parsing_utils__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo mercury__parsing_utils__parsing_utils__field_types_fail_message_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__parsing_utils__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__parsing_utils__parsing_utils__du_functor_desc_fail_message_info_0_0 = {
  (MR_String) "fail_message_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__parsing_utils__parsing_utils__field_types_fail_message_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_stag_ordered_fail_message_info_0_0[1] = {
  &mercury__parsing_utils__parsing_utils__du_functor_desc_fail_message_info_0_0
};

static const MR_DuPtagLayout mercury__parsing_utils__parsing_utils__du_ptag_ordered_fail_message_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__parsing_utils__parsing_utils__du_stag_ordered_fail_message_info_0_0
  }
};

static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_name_ordered_fail_message_info_0[1] = {
  &mercury__parsing_utils__parsing_utils__du_functor_desc_fail_message_info_0_0
};

static const MR_Integer mercury__parsing_utils__parsing_utils__functor_number_map_fail_message_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__parsing_utils____Unify____fail_message_info_0_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____fail_message_info_0_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "fail_message_info",
  {     mercury__parsing_utils__parsing_utils__du_name_ordered_fail_message_info_0 },
  {     mercury__parsing_utils__parsing_utils__du_ptag_ordered_fail_message_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__parsing_utils__parsing_utils__functor_number_map_fail_message_info_0
};

static const MR_FA_TypeInfo_Struct1 mercury__parsing_utils__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_line_numbers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__parsing_utils____Unify____line_numbers_0_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____line_numbers_0_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "line_numbers",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__parsing_utils__array__ti_array_1builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo mercury__parsing_utils__parsing_utils__field_types_parse_result_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mercury__parsing_utils__parsing_utils__du_functor_desc_parse_result_1_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__parsing_utils__parsing_utils__field_types_parse_result_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__parsing_utils__parsing_utils__field_types_parse_result_1_1[3] = {
  (MR_PseudoTypeInfo) &mercury__parsing_utils__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mercury__parsing_utils__parsing_utils__field_names_parse_result_1_1[3] = {
  (MR_String) "error_message",
  (MR_String) "error_line",
  (MR_String) "error_col"
};

static const MR_DuFunctorDesc mercury__parsing_utils__parsing_utils__du_functor_desc_parse_result_1_1 = {
  (MR_String) "error",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__parsing_utils__parsing_utils__field_types_parse_result_1_1,
  mercury__parsing_utils__parsing_utils__field_names_parse_result_1_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_stag_ordered_parse_result_1_0[1] = {
  &mercury__parsing_utils__parsing_utils__du_functor_desc_parse_result_1_0
};

static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_stag_ordered_parse_result_1_1[1] = {
  &mercury__parsing_utils__parsing_utils__du_functor_desc_parse_result_1_1
};

static const MR_DuPtagLayout mercury__parsing_utils__parsing_utils__du_ptag_ordered_parse_result_1[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__parsing_utils__parsing_utils__du_stag_ordered_parse_result_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__parsing_utils__parsing_utils__du_stag_ordered_parse_result_1_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__parsing_utils____Unify____parse_result_1_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____parse_result_1_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "parse_result",
  {     mercury__parsing_utils__parsing_utils__du_name_ordered_parse_result_1 },
  {     mercury__parsing_utils__parsing_utils__du_ptag_ordered_parse_result_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__parsing_utils__parsing_utils__functor_number_map_parse_result_1
};

static const MR_VA_PseudoTypeInfo_Struct4 mercury__parsing_utils____vpti_pred_4__plain_parsing_utils__type_ctor_info_src_0__pseudo_1__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &mercury__parsing_utils__parsing_utils__type_ctor_info_src_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_parser_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__parsing_utils____Unify____parser_1_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____parser_1_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "parser",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__parsing_utils____vpti_pred_4__plain_parsing_utils__type_ctor_info_src_0__pseudo_1__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_PseudoTypeInfo_Struct6 mercury__parsing_utils____vpti_pred_6__plain_parsing_utils__type_ctor_info_src_0__pseudo_1__pseudo_2__pseudo_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) &mercury__parsing_utils__parsing_utils__type_ctor_info_src_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_parser_with_state_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__parsing_utils____Unify____parser_with_state_2_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____parser_with_state_2_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "parser_with_state",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__parsing_utils____vpti_pred_6__plain_parsing_utils__type_ctor_info_src_0__pseudo_1__pseudo_2__pseudo_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_ps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__parsing_utils____Unify____ps_0_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____ps_0_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "ps",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_TypeInfo_Struct4 mercury__parsing_utils____vti_pred_4parsing_utils__type_ctor_info_src_0unit__type_ctor_info_unit_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) &mercury__parsing_utils__parsing_utils__type_ctor_info_src_0,
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_skip_whitespace_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__parsing_utils____Unify____skip_whitespace_pred_0_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____skip_whitespace_pred_0_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "skip_whitespace_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__parsing_utils____vti_pred_4parsing_utils__type_ctor_info_src_0unit__type_ctor_info_unit_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 mercury__parsing_utils__mutvar__ti_mutvar_1builtin__type_ctor_info_int_0 = {
  &mercury__mutvar__mutvar__type_ctor_info_mutvar_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 mercury__parsing_utils__mutvar__ti_mutvar_1parsing_utils__type_ctor_info_fail_message_info_0 = {
  &mercury__mutvar__mutvar__type_ctor_info_mutvar_1,
  {
    (MR_TypeInfo) &mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0
  }
};

static const MR_PseudoTypeInfo mercury__parsing_utils__parsing_utils__field_types_src_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__parsing_utils____vti_pred_4parsing_utils__type_ctor_info_src_0unit__type_ctor_info_unit_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__parsing_utils__mutvar__ti_mutvar_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__parsing_utils__mutvar__ti_mutvar_1parsing_utils__type_ctor_info_fail_message_info_0
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
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__parsing_utils__parsing_utils__field_types_src_0_0,
  mercury__parsing_utils__parsing_utils__field_names_src_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_stag_ordered_src_0_0[1] = {
  &mercury__parsing_utils__parsing_utils__du_functor_desc_src_0_0
};

static const MR_DuPtagLayout mercury__parsing_utils__parsing_utils__du_ptag_ordered_src_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__parsing_utils__parsing_utils__du_stag_ordered_src_0_0
  }
};

static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_name_ordered_src_0[1] = {
  &mercury__parsing_utils__parsing_utils__du_functor_desc_src_0_0
};

static const MR_Integer mercury__parsing_utils__parsing_utils__functor_number_map_src_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_src_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__parsing_utils____Unify____src_0_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____src_0_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "src",
  {     mercury__parsing_utils__parsing_utils__du_name_ordered_src_0 },
  {     mercury__parsing_utils__parsing_utils__du_ptag_ordered_src_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__parsing_utils__parsing_utils__functor_number_map_src_0
};

static MR_Integer MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__parsing_utils____Compare____src_0_0(
  MR_Word * mercury__parsing_utils__HeadVar__1_1,
  MR_Word mercury__parsing_utils__HeadVar__2_2,
  MR_Word mercury__parsing_utils__HeadVar__3_3)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Integer mercury__parsing_utils__CastX_18 = (MR_Integer) mercury__parsing_utils__HeadVar__2_2;
    MR_Integer mercury__parsing_utils__CastY_19 = (MR_Integer) mercury__parsing_utils__HeadVar__3_3;

    mercury__parsing_utils__succeeded = (mercury__parsing_utils__CastX_18 == mercury__parsing_utils__CastY_19);
    if (mercury__parsing_utils__succeeded)
      *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer mercury__parsing_utils__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer mercury__parsing_utils__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 0)));
      MR_String mercury__parsing_utils__ArgX2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 1)));
      MR_String mercury__parsing_utils__ArgY2_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word mercury__parsing_utils__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word mercury__parsing_utils__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word mercury__parsing_utils__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word mercury__parsing_utils__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word mercury__parsing_utils__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word mercury__parsing_utils__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 4)));
      MR_Word mercury__parsing_utils__Var_14;

      mercury__parsing_utils__succeeded = (mercury__parsing_utils__ArgX1_4 < mercury__parsing_utils__ArgY1_5);
      if (mercury__parsing_utils__succeeded)
        mercury__parsing_utils__Var_14 = (MR_Integer) 1;
      else
      {
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__ArgX1_4 == mercury__parsing_utils__ArgY1_5);
        if (mercury__parsing_utils__succeeded)
          mercury__parsing_utils__Var_14 = (MR_Integer) 0;
        else
          mercury__parsing_utils__Var_14 = (MR_Integer) 2;
      }
      mercury__parsing_utils__succeeded = (mercury__parsing_utils__Var_14 == (MR_Integer) 0);
      mercury__parsing_utils__succeeded = !(mercury__parsing_utils__succeeded);
      if (mercury__parsing_utils__succeeded)
        *mercury__parsing_utils__HeadVar__1_1 = mercury__parsing_utils__Var_14;
      else
      {
        MR_Word mercury__parsing_utils__Var_15;
        MR_Integer mercury__parsing_utils__V_7_31;

{
#define MR_PROC_LABEL mercury__parsing_utils____Compare____src_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__parsing_utils__ArgX2_6 ;
	S2 =  mercury__parsing_utils__ArgY2_7 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__V_7_31  = Res;
}
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_7_31 < (MR_Integer) 0);
        if (mercury__parsing_utils__succeeded)
          mercury__parsing_utils__Var_15 = (MR_Integer) 1;
        else
        {
          mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_7_31 == (MR_Integer) 0);
          if (mercury__parsing_utils__succeeded)
            mercury__parsing_utils__Var_15 = (MR_Integer) 0;
          else
            mercury__parsing_utils__Var_15 = (MR_Integer) 2;
        }
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__Var_15 == (MR_Integer) 0);
        mercury__parsing_utils__succeeded = !(mercury__parsing_utils__succeeded);
        if (mercury__parsing_utils__succeeded)
          *mercury__parsing_utils__HeadVar__1_1 = mercury__parsing_utils__Var_15;
        else
        {
          MR_Word mercury__parsing_utils__Var_16;
          MR_Word mercury__parsing_utils__TypeInfo_22_22 = (MR_Word) &mercury__parsing_utils_scalar_common_2[0];

          {
            mercury__builtin__compare_3_p_0(mercury__parsing_utils__TypeInfo_22_22, &mercury__parsing_utils__Var_16, ((MR_Box) (mercury__parsing_utils__ArgX3_8)), ((MR_Box) (mercury__parsing_utils__ArgY3_9)));
          }
          mercury__parsing_utils__succeeded = (mercury__parsing_utils__Var_16 == (MR_Integer) 0);
          mercury__parsing_utils__succeeded = !(mercury__parsing_utils__succeeded);
          if (mercury__parsing_utils__succeeded)
            *mercury__parsing_utils__HeadVar__1_1 = mercury__parsing_utils__Var_16;
          else
          {
            MR_Word mercury__parsing_utils__Var_17;
            MR_Word mercury__parsing_utils__TypeInfo_23_23 = (MR_Word) &mercury__parsing_utils_scalar_common_1[2];

            {
              mercury__builtin__compare_3_p_0(mercury__parsing_utils__TypeInfo_23_23, &mercury__parsing_utils__Var_17, ((MR_Box) (mercury__parsing_utils__ArgX4_10)), ((MR_Box) (mercury__parsing_utils__ArgY4_11)));
            }
            mercury__parsing_utils__succeeded = (mercury__parsing_utils__Var_17 == (MR_Integer) 0);
            mercury__parsing_utils__succeeded = !(mercury__parsing_utils__succeeded);
            if (mercury__parsing_utils__succeeded)
              *mercury__parsing_utils__HeadVar__1_1 = mercury__parsing_utils__Var_17;
            else
            {
              MR_Word mercury__parsing_utils__TypeInfo_24_24 = (MR_Word) &mercury__parsing_utils_scalar_common_1[3];

              {
                mercury__builtin__compare_3_p_0(mercury__parsing_utils__TypeInfo_24_24, mercury__parsing_utils__HeadVar__1_1, ((MR_Box) (mercury__parsing_utils__ArgX5_12)), ((MR_Box) (mercury__parsing_utils__ArgY5_13)));
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__parsing_utils____Unify____src_0_0(
  MR_Word mercury__parsing_utils__HeadVar__1_1,
  MR_Word mercury__parsing_utils__HeadVar__2_2)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Integer mercury__parsing_utils__CastX_13 = (MR_Integer) mercury__parsing_utils__HeadVar__1_1;
    MR_Integer mercury__parsing_utils__CastY_14 = (MR_Integer) mercury__parsing_utils__HeadVar__2_2;

    mercury__parsing_utils__succeeded = (mercury__parsing_utils__CastX_13 == mercury__parsing_utils__CastY_14);
    if (mercury__parsing_utils__succeeded)
      mercury__parsing_utils__succeeded = MR_TRUE;
    else
    {
      MR_Word mercury__parsing_utils__TypeInfo_15_15;
      MR_Word mercury__parsing_utils__TypeInfo_16_16;
      MR_Integer mercury__parsing_utils__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer mercury__parsing_utils__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 0)));
      MR_String mercury__parsing_utils__ArgX2_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 1)));
      MR_String mercury__parsing_utils__ArgY2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__parsing_utils__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word mercury__parsing_utils__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word mercury__parsing_utils__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word mercury__parsing_utils__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word mercury__parsing_utils__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word mercury__parsing_utils__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 4)));

      mercury__parsing_utils__succeeded = (mercury__parsing_utils__ArgX1_3 == mercury__parsing_utils__ArgY1_4);
      if (mercury__parsing_utils__succeeded)
      {
        mercury__parsing_utils__succeeded = (strcmp(mercury__parsing_utils__ArgX2_5, mercury__parsing_utils__ArgY2_6) == 0);
        if (mercury__parsing_utils__succeeded)
        {
          {
            mercury__parsing_utils__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__parsing_utils__ArgX3_7, (MR_Word) mercury__parsing_utils__ArgY3_8);
          }
          if (mercury__parsing_utils__succeeded)
          {
            mercury__parsing_utils__TypeInfo_15_15 = (MR_Word) &mercury__parsing_utils_scalar_common_1[2];
            {
              mercury__parsing_utils__succeeded = mercury__builtin__unify_2_p_0(mercury__parsing_utils__TypeInfo_15_15, ((MR_Box) (mercury__parsing_utils__ArgX4_9)), ((MR_Box) (mercury__parsing_utils__ArgY4_10)));
            }
            if (mercury__parsing_utils__succeeded)
            {
              mercury__parsing_utils__TypeInfo_16_16 = (MR_Word) &mercury__parsing_utils_scalar_common_1[3];
              {
                mercury__parsing_utils__succeeded = mercury__builtin__unify_2_p_0(mercury__parsing_utils__TypeInfo_16_16, ((MR_Box) (mercury__parsing_utils__ArgX5_11)), ((MR_Box) (mercury__parsing_utils__ArgY5_12)));
              }
            }
          }
        }
      }
    }
    return mercury__parsing_utils__succeeded;
  }
}

void MR_CALL 
mercury__parsing_utils____Compare____skip_whitespace_pred_0_0(
  MR_Word * mercury__parsing_utils__HeadVar__1_1,
  MR_Word mercury__parsing_utils__HeadVar__2_2,
  MR_Word mercury__parsing_utils__HeadVar__3_3)
{
  {
    MR_Word mercury__parsing_utils__TypeInfo_6_6 = (MR_Word) &mercury__parsing_utils_scalar_common_2[0];
    MR_Word mercury__parsing_utils__Cast_HeadVar1_4 = mercury__parsing_utils__HeadVar__2_2;
    MR_Word mercury__parsing_utils__Cast_HeadVar2_5 = mercury__parsing_utils__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0(mercury__parsing_utils__TypeInfo_6_6, mercury__parsing_utils__HeadVar__1_1, ((MR_Box) (mercury__parsing_utils__Cast_HeadVar1_4)), ((MR_Box) (mercury__parsing_utils__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mercury__parsing_utils____Unify____skip_whitespace_pred_0_0(
  MR_Word mercury__parsing_utils__HeadVar__1_1,
  MR_Word mercury__parsing_utils__HeadVar__2_2)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Word mercury__parsing_utils__Cast_HeadVar1_3 = mercury__parsing_utils__HeadVar__1_1;
    MR_Word mercury__parsing_utils__Cast_HeadVar2_4 = mercury__parsing_utils__HeadVar__2_2;

    {
      mercury__parsing_utils__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__parsing_utils__Cast_HeadVar1_3, (MR_Word) mercury__parsing_utils__Cast_HeadVar2_4);
    }
    return mercury__parsing_utils__succeeded;
  }
}

void MR_CALL 
mercury__parsing_utils____Compare____ps_0_0(
  MR_Word * mercury__parsing_utils__HeadVar__1_1,
  MR_Integer mercury__parsing_utils__HeadVar__2_2,
  MR_Integer mercury__parsing_utils__HeadVar__3_3)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Integer mercury__parsing_utils__Cast_HeadVar1_4 = mercury__parsing_utils__HeadVar__2_2;
    MR_Integer mercury__parsing_utils__Cast_HeadVar2_5 = mercury__parsing_utils__HeadVar__3_3;

    mercury__parsing_utils__succeeded = (mercury__parsing_utils__Cast_HeadVar1_4 < mercury__parsing_utils__Cast_HeadVar2_5);
    if (mercury__parsing_utils__succeeded)
      *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__parsing_utils__succeeded = (mercury__parsing_utils__Cast_HeadVar1_4 == mercury__parsing_utils__Cast_HeadVar2_5);
      if (mercury__parsing_utils__succeeded)
        *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__parsing_utils____Unify____ps_0_0(
  MR_Integer mercury__parsing_utils__HeadVar__1_1,
  MR_Integer mercury__parsing_utils__HeadVar__2_2)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Integer mercury__parsing_utils__Cast_HeadVar1_3 = mercury__parsing_utils__HeadVar__1_1;
    MR_Integer mercury__parsing_utils__Cast_HeadVar2_4 = mercury__parsing_utils__HeadVar__2_2;

    mercury__parsing_utils__succeeded = (mercury__parsing_utils__Cast_HeadVar1_3 == mercury__parsing_utils__Cast_HeadVar2_4);
    return mercury__parsing_utils__succeeded;
  }
}

void MR_CALL 
mercury__parsing_utils____Compare____parser_with_state_2_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_6,
  MR_Word mercury__parsing_utils__TypeInfo_for_S_7,
  MR_Word * mercury__parsing_utils__HeadVar__1_1,
  MR_Word mercury__parsing_utils__HeadVar__2_2,
  MR_Word mercury__parsing_utils__HeadVar__3_3)
{
  {
    MR_Word mercury__parsing_utils__Cast_HeadVar1_4 = mercury__parsing_utils__HeadVar__2_2;
    MR_Word mercury__parsing_utils__Cast_HeadVar2_5 = mercury__parsing_utils__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__parsing_utils__HeadVar__1_1, (MR_Word) mercury__parsing_utils__Cast_HeadVar1_4, (MR_Word) mercury__parsing_utils__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__parsing_utils____Unify____parser_with_state_2_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_5,
  MR_Word mercury__parsing_utils__TypeInfo_for_S_6,
  MR_Word mercury__parsing_utils__HeadVar__1_1,
  MR_Word mercury__parsing_utils__HeadVar__2_2)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Word mercury__parsing_utils__Cast_HeadVar1_3 = mercury__parsing_utils__HeadVar__1_1;
    MR_Word mercury__parsing_utils__Cast_HeadVar2_4 = mercury__parsing_utils__HeadVar__2_2;

    {
      mercury__parsing_utils__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__parsing_utils__Cast_HeadVar1_3, (MR_Word) mercury__parsing_utils__Cast_HeadVar2_4);
    }
    return mercury__parsing_utils__succeeded;
  }
}

void MR_CALL 
mercury__parsing_utils____Compare____parser_1_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_6,
  MR_Word * mercury__parsing_utils__HeadVar__1_1,
  MR_Word mercury__parsing_utils__HeadVar__2_2,
  MR_Word mercury__parsing_utils__HeadVar__3_3)
{
  {
    MR_Word mercury__parsing_utils__Cast_HeadVar1_4 = mercury__parsing_utils__HeadVar__2_2;
    MR_Word mercury__parsing_utils__Cast_HeadVar2_5 = mercury__parsing_utils__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__parsing_utils__HeadVar__1_1, (MR_Word) mercury__parsing_utils__Cast_HeadVar1_4, (MR_Word) mercury__parsing_utils__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__parsing_utils____Unify____parser_1_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_5,
  MR_Word mercury__parsing_utils__HeadVar__1_1,
  MR_Word mercury__parsing_utils__HeadVar__2_2)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Word mercury__parsing_utils__Cast_HeadVar1_3 = mercury__parsing_utils__HeadVar__1_1;
    MR_Word mercury__parsing_utils__Cast_HeadVar2_4 = mercury__parsing_utils__HeadVar__2_2;

    {
      mercury__parsing_utils__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__parsing_utils__Cast_HeadVar1_3, (MR_Word) mercury__parsing_utils__Cast_HeadVar2_4);
    }
    return mercury__parsing_utils__succeeded;
  }
}

void MR_CALL 
mercury__parsing_utils____Compare____parse_result_1_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_24,
  MR_Word * mercury__parsing_utils__HeadVar__1_1,
  MR_Word mercury__parsing_utils__HeadVar__2_2,
  MR_Word mercury__parsing_utils__HeadVar__3_3)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Integer mercury__parsing_utils__CastX_22 = (MR_Integer) mercury__parsing_utils__HeadVar__2_2;
    MR_Integer mercury__parsing_utils__CastY_23 = (MR_Integer) mercury__parsing_utils__HeadVar__3_3;

    mercury__parsing_utils__succeeded = (mercury__parsing_utils__CastX_22 == mercury__parsing_utils__CastY_23);
    if (mercury__parsing_utils__succeeded)
      *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__parsing_utils__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Integer mercury__parsing_utils__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer mercury__parsing_utils__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__parsing_utils__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) mercury__parsing_utils__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__parsing_utils__ArgY1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mercury__parsing_utils__ArgY2_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer mercury__parsing_utils__ArgY3_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__parsing_utils__Var_20;
        MR_Word mercury__parsing_utils__TypeInfo_25_25 = (MR_Word) &mercury__parsing_utils_scalar_common_1[0];

        {
          mercury__builtin__compare_3_p_0(mercury__parsing_utils__TypeInfo_25_25, &mercury__parsing_utils__Var_20, ((MR_Box) (mercury__parsing_utils__Var_30)), ((MR_Box) (mercury__parsing_utils__ArgY1_15)));
        }
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__Var_20 == (MR_Integer) 0);
        mercury__parsing_utils__succeeded = !(mercury__parsing_utils__succeeded);
        if (mercury__parsing_utils__succeeded)
          *mercury__parsing_utils__HeadVar__1_1 = mercury__parsing_utils__Var_20;
        else
        {
          MR_Word mercury__parsing_utils__Var_21;

          mercury__parsing_utils__succeeded = (mercury__parsing_utils__Var_29 < mercury__parsing_utils__ArgY2_17);
          if (mercury__parsing_utils__succeeded)
            mercury__parsing_utils__Var_21 = (MR_Integer) 1;
          else
          {
            mercury__parsing_utils__succeeded = (mercury__parsing_utils__Var_29 == mercury__parsing_utils__ArgY2_17);
            if (mercury__parsing_utils__succeeded)
              mercury__parsing_utils__Var_21 = (MR_Integer) 0;
            else
              mercury__parsing_utils__Var_21 = (MR_Integer) 2;
          }
          mercury__parsing_utils__succeeded = (mercury__parsing_utils__Var_21 == (MR_Integer) 0);
          mercury__parsing_utils__succeeded = !(mercury__parsing_utils__succeeded);
          if (mercury__parsing_utils__succeeded)
            *mercury__parsing_utils__HeadVar__1_1 = mercury__parsing_utils__Var_21;
          else
          {
            mercury__parsing_utils__succeeded = (mercury__parsing_utils__Var_28 < mercury__parsing_utils__ArgY3_19);
            if (mercury__parsing_utils__succeeded)
              *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              mercury__parsing_utils__succeeded = (mercury__parsing_utils__Var_28 == mercury__parsing_utils__ArgY3_19);
              if (mercury__parsing_utils__succeeded)
                *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 0;
              else
                *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 2;
            }
          }
        }
      }
      else
        *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Box mercury__parsing_utils__Var_31 = (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) mercury__parsing_utils__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Box mercury__parsing_utils__ArgY1_5 = (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 0));

        {
          mercury__builtin__compare_3_p_0(mercury__parsing_utils__TypeInfo_for_T_24, mercury__parsing_utils__HeadVar__1_1, mercury__parsing_utils__Var_31, mercury__parsing_utils__ArgY1_5);
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__parsing_utils____Unify____parse_result_1_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_13,
  MR_Word mercury__parsing_utils__HeadVar__1_1,
  MR_Word mercury__parsing_utils__HeadVar__2_2)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Integer mercury__parsing_utils__CastX_11 = (MR_Integer) mercury__parsing_utils__HeadVar__1_1;
    MR_Integer mercury__parsing_utils__CastY_12 = (MR_Integer) mercury__parsing_utils__HeadVar__2_2;

    mercury__parsing_utils__succeeded = (mercury__parsing_utils__CastX_11 == mercury__parsing_utils__CastY_12);
    if (mercury__parsing_utils__succeeded)
      mercury__parsing_utils__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__parsing_utils__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mercury__parsing_utils__TypeInfo_14_14;
      MR_Word mercury__parsing_utils__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mercury__parsing_utils__ArgY1_6;
      MR_Integer mercury__parsing_utils__ArgX2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer mercury__parsing_utils__ArgY2_8;
      MR_Integer mercury__parsing_utils__ArgX3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer mercury__parsing_utils__ArgY3_10;

      mercury__parsing_utils__succeeded = ((MR_tag((MR_Word) mercury__parsing_utils__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (mercury__parsing_utils__succeeded)
      {
        mercury__parsing_utils__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 0)));
        mercury__parsing_utils__ArgY2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 1)));
        mercury__parsing_utils__ArgY3_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 2)));
        mercury__parsing_utils__TypeInfo_14_14 = (MR_Word) &mercury__parsing_utils_scalar_common_1[0];
        {
          mercury__parsing_utils__succeeded = mercury__builtin__unify_2_p_0(mercury__parsing_utils__TypeInfo_14_14, ((MR_Box) (mercury__parsing_utils__ArgX1_5)), ((MR_Box) (mercury__parsing_utils__ArgY1_6)));
        }
        if (mercury__parsing_utils__succeeded)
        {
          mercury__parsing_utils__succeeded = (mercury__parsing_utils__ArgX2_7 == mercury__parsing_utils__ArgY2_8);
          if (mercury__parsing_utils__succeeded)
            mercury__parsing_utils__succeeded = (mercury__parsing_utils__ArgX3_9 == mercury__parsing_utils__ArgY3_10);
        }
      }
    }
    else
    {
      MR_Box mercury__parsing_utils__ArgX1_3 = (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 0));
      MR_Box mercury__parsing_utils__ArgY1_4;

      mercury__parsing_utils__succeeded = ((MR_tag((MR_Word) mercury__parsing_utils__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (mercury__parsing_utils__succeeded)
      {
        mercury__parsing_utils__ArgY1_4 = (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 0));
        {
          mercury__parsing_utils__succeeded = mercury__builtin__unify_2_p_0(mercury__parsing_utils__TypeInfo_for_T_13, mercury__parsing_utils__ArgX1_3, mercury__parsing_utils__ArgY1_4);
        }
      }
    }
    return mercury__parsing_utils__succeeded;
  }
}

void MR_CALL 
mercury__parsing_utils____Compare____line_numbers_0_0(
  MR_Word * mercury__parsing_utils__HeadVar__1_1,
  MR_ArrayPtr mercury__parsing_utils__HeadVar__2_2,
  MR_ArrayPtr mercury__parsing_utils__HeadVar__3_3)
{
  {
    MR_Word mercury__parsing_utils__TypeInfo_6_6 = (MR_Word) &mercury__parsing_utils_scalar_common_1[1];
    MR_ArrayPtr mercury__parsing_utils__Cast_HeadVar1_4 = mercury__parsing_utils__HeadVar__2_2;
    MR_ArrayPtr mercury__parsing_utils__Cast_HeadVar2_5 = mercury__parsing_utils__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0(mercury__parsing_utils__TypeInfo_6_6, mercury__parsing_utils__HeadVar__1_1, ((MR_Box) (mercury__parsing_utils__Cast_HeadVar1_4)), ((MR_Box) (mercury__parsing_utils__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mercury__parsing_utils____Unify____line_numbers_0_0(
  MR_ArrayPtr mercury__parsing_utils__HeadVar__1_1,
  MR_ArrayPtr mercury__parsing_utils__HeadVar__2_2)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Word mercury__parsing_utils__TypeCtorInfo_5_5 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_ArrayPtr mercury__parsing_utils__Cast_HeadVar1_3 = mercury__parsing_utils__HeadVar__1_1;
    MR_ArrayPtr mercury__parsing_utils__Cast_HeadVar2_4 = mercury__parsing_utils__HeadVar__2_2;

    {
      mercury__parsing_utils__succeeded = mercury__array____Unify____array_1_0(mercury__parsing_utils__TypeCtorInfo_5_5, (MR_ArrayPtr) mercury__parsing_utils__Cast_HeadVar1_3, (MR_ArrayPtr) mercury__parsing_utils__Cast_HeadVar2_4);
    }
    return mercury__parsing_utils__succeeded;
  }
}

void MR_CALL 
mercury__parsing_utils____Compare____fail_message_info_0_0(
  MR_Word * mercury__parsing_utils__HeadVar__1_1,
  MR_Word mercury__parsing_utils__HeadVar__2_2,
  MR_Word mercury__parsing_utils__HeadVar__3_3)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Integer mercury__parsing_utils__CastX_9 = (MR_Integer) mercury__parsing_utils__HeadVar__2_2;
    MR_Integer mercury__parsing_utils__CastY_10 = (MR_Integer) mercury__parsing_utils__HeadVar__3_3;

    mercury__parsing_utils__succeeded = (mercury__parsing_utils__CastX_9 == mercury__parsing_utils__CastY_10);
    if (mercury__parsing_utils__succeeded)
      *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer mercury__parsing_utils__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer mercury__parsing_utils__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word mercury__parsing_utils__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__parsing_utils__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word mercury__parsing_utils__Var_8;

      mercury__parsing_utils__succeeded = (mercury__parsing_utils__ArgX1_4 < mercury__parsing_utils__ArgY1_5);
      if (mercury__parsing_utils__succeeded)
        mercury__parsing_utils__Var_8 = (MR_Integer) 1;
      else
      {
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__ArgX1_4 == mercury__parsing_utils__ArgY1_5);
        if (mercury__parsing_utils__succeeded)
          mercury__parsing_utils__Var_8 = (MR_Integer) 0;
        else
          mercury__parsing_utils__Var_8 = (MR_Integer) 2;
      }
      mercury__parsing_utils__succeeded = (mercury__parsing_utils__Var_8 == (MR_Integer) 0);
      mercury__parsing_utils__succeeded = !(mercury__parsing_utils__succeeded);
      if (mercury__parsing_utils__succeeded)
        *mercury__parsing_utils__HeadVar__1_1 = mercury__parsing_utils__Var_8;
      else
      {
        MR_Word mercury__parsing_utils__TypeInfo_12_12 = (MR_Word) &mercury__parsing_utils_scalar_common_1[0];

        {
          mercury__builtin__compare_3_p_0(mercury__parsing_utils__TypeInfo_12_12, mercury__parsing_utils__HeadVar__1_1, ((MR_Box) (mercury__parsing_utils__ArgX2_6)), ((MR_Box) (mercury__parsing_utils__ArgY2_7)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__parsing_utils____Unify____fail_message_info_0_0(
  MR_Word mercury__parsing_utils__HeadVar__1_1,
  MR_Word mercury__parsing_utils__HeadVar__2_2)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Integer mercury__parsing_utils__CastX_7 = (MR_Integer) mercury__parsing_utils__HeadVar__1_1;
    MR_Integer mercury__parsing_utils__CastY_8 = (MR_Integer) mercury__parsing_utils__HeadVar__2_2;

    mercury__parsing_utils__succeeded = (mercury__parsing_utils__CastX_7 == mercury__parsing_utils__CastY_8);
    if (mercury__parsing_utils__succeeded)
      mercury__parsing_utils__succeeded = MR_TRUE;
    else
    {
      MR_Word mercury__parsing_utils__TypeInfo_9_9;
      MR_Integer mercury__parsing_utils__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer mercury__parsing_utils__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__parsing_utils__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mercury__parsing_utils__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 1)));

      mercury__parsing_utils__succeeded = (mercury__parsing_utils__ArgX1_3 == mercury__parsing_utils__ArgY1_4);
      if (mercury__parsing_utils__succeeded)
      {
        mercury__parsing_utils__TypeInfo_9_9 = (MR_Word) &mercury__parsing_utils_scalar_common_1[0];
        {
          mercury__parsing_utils__succeeded = mercury__builtin__unify_2_p_0(mercury__parsing_utils__TypeInfo_9_9, ((MR_Box) (mercury__parsing_utils__ArgX2_5)), ((MR_Box) (mercury__parsing_utils__ArgY2_6)));
        }
      }
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__skip_whitespace_3_p_0(
  MR_Word mercury__parsing_utils__Src_4,
  MR_Integer mercury__parsing_utils__PS0_5,
  MR_Integer * mercury__parsing_utils__PS_6)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Word mercury__parsing_utils__SkipWS_7;
    MR_Word mercury__parsing_utils__SkipWS0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_4, (MR_Integer) 2)));
    MR_Integer mercury__parsing_utils__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_4, (MR_Integer) 0)));
    MR_String mercury__parsing_utils__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_4, (MR_Integer) 1)));
    MR_Word mercury__parsing_utils__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_4, (MR_Integer) 3)));
    MR_Word mercury__parsing_utils__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_4, (MR_Integer) 4)));
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box mercury__parsing_utils__conv2_Var_8;
    MR_Box mercury__parsing_utils__conv1_PS_6;

{
#define MR_PROC_LABEL mercury__parsing_utils__skip_whitespace_3_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_11 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_7  = SkipWS;
}
    mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_7, (MR_Integer) 1)));
    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_7), ((MR_Box) (mercury__parsing_utils__Src_4)), &mercury__parsing_utils__conv2_Var_8, ((MR_Box) (mercury__parsing_utils__PS0_5)), &mercury__parsing_utils__conv1_PS_6);
    }
    if (mercury__parsing_utils__succeeded)
    {
      *mercury__parsing_utils__PS_6 = ((MR_Integer) mercury__parsing_utils__conv1_PS_6);
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    return mercury__parsing_utils__succeeded;
  }
}

void MR_CALL 
mercury__parsing_utils__unsafe_skip_ws_pred_cast_2_p_0(
  MR_Word mercury__parsing_utils__SkipWS0_1,
  MR_Word * mercury__parsing_utils__SkipWS_2)
{
  {
{
#define MR_PROC_LABEL mercury__parsing_utils__unsafe_skip_ws_pred_cast_2_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_1 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	 *mercury__parsing_utils__SkipWS_2  = SkipWS;
}
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__fail_with_message_6_p_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_13,
  MR_String mercury__parsing_utils__Msg_7,
  MR_Integer mercury__parsing_utils__Offset_8,
  MR_Word mercury__parsing_utils__Src_9,
  MR_Box * mercury__parsing_utils__Val_10,
  MR_Integer mercury__parsing_utils__HeadVar__5_11,
  MR_Integer * mercury__parsing_utils__PS_12)
{
  {
    MR_bool mercury__parsing_utils__succeeded;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_105_108_95_119_105_116_104_95_109_101_115_115_97_103_101_95_95_91_54_93_95_48_6_p_0(mercury__parsing_utils__TypeInfo_for_T_13, mercury__parsing_utils__Msg_7, mercury__parsing_utils__Offset_8, mercury__parsing_utils__Src_9, mercury__parsing_utils__Val_10, mercury__parsing_utils__PS_12);
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_105_108_95_119_105_116_104_95_109_101_115_115_97_103_101_95_95_91_54_93_95_48_6_p_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_13,
  MR_String mercury__parsing_utils__Msg_7,
  MR_Integer mercury__parsing_utils__Offset_8,
  MR_Word mercury__parsing_utils__Src_9,
  MR_Box * mercury__parsing_utils__Val_10,
  MR_Integer * mercury__parsing_utils__PS_12)
{
  {
    MR_bool mercury__parsing_utils__succeeded;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__fail_with_message_5_p_0(mercury__parsing_utils__TypeInfo_for_T_13, mercury__parsing_utils__Msg_7, mercury__parsing_utils__Src_9, mercury__parsing_utils__Val_10, mercury__parsing_utils__Offset_8, mercury__parsing_utils__PS_12);
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__fail_with_message_5_p_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_25,
  MR_String mercury__parsing_utils__Msg_6,
  MR_Word mercury__parsing_utils__Src_7,
  MR_Box * mercury__parsing_utils__Val_8,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_10,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_11)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Word mercury__parsing_utils__TypeCtorInfo_26_26 = (MR_Word) &mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0;
    MR_Word mercury__parsing_utils__TypeCtorInfo_27_27;
    MR_Word mercury__parsing_utils__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 4)));
    MR_Word mercury__parsing_utils__Var_13;
    MR_Word mercury__parsing_utils__Var_14;
    MR_Word mercury__parsing_utils__Var_15;
    MR_Integer mercury__parsing_utils__Var_16;
    MR_Integer mercury__parsing_utils__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 0)));
    MR_String mercury__parsing_utils__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 1)));
    MR_Word mercury__parsing_utils__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 2)));
    MR_Word mercury__parsing_utils__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 3)));
    MR_Integer mercury__parsing_utils__Var_21;
    MR_String mercury__parsing_utils__Var_22;
    MR_Word mercury__parsing_utils__Var_23;
    MR_Word mercury__parsing_utils__Var_24;

    {
      mercury__parsing_utils__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__parsing_utils__Var_14, 0) = ((MR_Box) (mercury__parsing_utils__Msg_6));
    }
    {
      mercury__parsing_utils__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__parsing_utils__Var_13, 0) = ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_10));
      MR_hl_field(MR_mktag(0), mercury__parsing_utils__Var_13, 1) = ((MR_Box) (mercury__parsing_utils__Var_14));
    }
    {
      mercury__mutvar__set_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_26_26, mercury__parsing_utils__Var_12, ((MR_Box) (mercury__parsing_utils__Var_13)));
    }
    mercury__parsing_utils__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 0)));
    mercury__parsing_utils__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 1)));
    mercury__parsing_utils__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 2)));
    mercury__parsing_utils__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 3)));
    mercury__parsing_utils__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 4)));
    mercury__parsing_utils__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__mutvar__set_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_27_27, mercury__parsing_utils__Var_15, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_10)));
    }
{
#define MR_PROC_LABEL mercury__parsing_utils__fail_with_message_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__parsing_utils__succeeded)
    {
      mercury__parsing_utils__Var_16 = (MR_Integer) 0;
      {
        mercury__parsing_utils__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__parsing_utils__TypeCtorInfo_27_27, mercury__parsing_utils__TypeInfo_for_T_25, ((MR_Box) (mercury__parsing_utils__Var_16)), mercury__parsing_utils__Val_8);
      }
    }
    if (mercury__parsing_utils__succeeded)
    {
      *mercury__parsing_utils__STATE_VARIABLE_PS_11 = mercury__parsing_utils__STATE_VARIABLE_PS_0_10;
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__comma_separated_list_7_p_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_20,
  MR_Word mercury__parsing_utils__TypeInfo_for_S_21,
  MR_Word mercury__parsing_utils__P_8,
  MR_Word mercury__parsing_utils__Src_9,
  MR_Word * mercury__parsing_utils__Result_10,
  MR_Box mercury__parsing_utils__STATE_VARIABLE_S_0_13,
  MR_Box * mercury__parsing_utils__STATE_VARIABLE_S_14,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_15,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_16)
{
  {
    MR_bool mercury__parsing_utils__succeeded;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__separated_list_8_p_0(mercury__parsing_utils__TypeInfo_for_T_20, mercury__parsing_utils__TypeInfo_for_S_21, (MR_String) ",", mercury__parsing_utils__P_8, mercury__parsing_utils__Src_9, mercury__parsing_utils__Result_10, mercury__parsing_utils__STATE_VARIABLE_S_0_13, mercury__parsing_utils__STATE_VARIABLE_S_14, mercury__parsing_utils__STATE_VARIABLE_PS_0_15, mercury__parsing_utils__STATE_VARIABLE_PS_16);
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__comma_separated_list_5_p_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_14,
  MR_Word mercury__parsing_utils__P_6,
  MR_Word mercury__parsing_utils__Src_7,
  MR_Word * mercury__parsing_utils__Result_8,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_10,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_11)
{
  {
    MR_bool mercury__parsing_utils__succeeded;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__separated_list_6_p_0(mercury__parsing_utils__TypeInfo_for_T_14, (MR_String) ",", mercury__parsing_utils__P_6, mercury__parsing_utils__Src_7, mercury__parsing_utils__Result_8, mercury__parsing_utils__STATE_VARIABLE_PS_0_10, mercury__parsing_utils__STATE_VARIABLE_PS_11);
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__separated_list_8_p_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_48,
  MR_Word mercury__parsing_utils__TypeInfo_for_S_49,
  MR_String mercury__parsing_utils__Separator_9,
  MR_Word mercury__parsing_utils__P_10,
  MR_Word mercury__parsing_utils__Src_11,
  MR_Word * mercury__parsing_utils__Result_12,
  MR_Box mercury__parsing_utils__STATE_VARIABLE_S_0_21,
  MR_Box * mercury__parsing_utils__STATE_VARIABLE_S_22,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_23,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_24)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Box mercury__parsing_utils__X_19;
    MR_Box mercury__parsing_utils__STATE_VARIABLE_S_38_38;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_39_39;
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__P_10, (MR_Integer) 1)));
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_39_39;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__P_10), ((MR_Box) (mercury__parsing_utils__Src_11)), &mercury__parsing_utils__X_19, mercury__parsing_utils__STATE_VARIABLE_S_0_21, &mercury__parsing_utils__STATE_VARIABLE_S_38_38, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_23)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_39_39);
    }
    if (mercury__parsing_utils__succeeded)
    {
      mercury__parsing_utils__STATE_VARIABLE_PS_39_39 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_39_39);
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    if (mercury__parsing_utils__succeeded)
    {
      MR_Word mercury__parsing_utils__Xs_20;
      MR_Word mercury__parsing_utils__RevResult_59;
      MR_Word mercury__parsing_utils__Var_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_114_101_118_95_97_99_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_p_0(mercury__parsing_utils__Separator_9, mercury__parsing_utils__P_10, mercury__parsing_utils__Src_11, mercury__parsing_utils__Var_60, &mercury__parsing_utils__RevResult_59, mercury__parsing_utils__STATE_VARIABLE_S_38_38, mercury__parsing_utils__STATE_VARIABLE_S_22, mercury__parsing_utils__STATE_VARIABLE_PS_39_39, mercury__parsing_utils__STATE_VARIABLE_PS_24);
      }
      if (mercury__parsing_utils__succeeded)
      {
        {
          mercury__list__reverse_2_p_0(mercury__parsing_utils__TypeInfo_for_T_48, mercury__parsing_utils__RevResult_59, &mercury__parsing_utils__Xs_20);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__parsing_utils__Result_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__parsing_utils__X_19;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parsing_utils__Xs_20));
        }
        mercury__parsing_utils__succeeded = MR_TRUE;
      }
    }
    else
    {
      *mercury__parsing_utils__Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *mercury__parsing_utils__STATE_VARIABLE_PS_24 = mercury__parsing_utils__STATE_VARIABLE_PS_0_23;
      *mercury__parsing_utils__STATE_VARIABLE_S_22 = mercury__parsing_utils__STATE_VARIABLE_S_0_21;
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    return mercury__parsing_utils__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_114_101_118_95_97_99_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_p_0(
  MR_String mercury__parsing_utils__Var_31,
  MR_Word mercury__parsing_utils__Var_32,
  MR_Word mercury__parsing_utils__Src_10,
  MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_0_15,
  MR_Word * mercury__parsing_utils__STATE_VARIABLE_RevResult_16,
  MR_Box mercury__parsing_utils__STATE_VARIABLE_S_0_17,
  MR_Box * mercury__parsing_utils__STATE_VARIABLE_S_18,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_19,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_20)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__parsing_utils__succeeded;
      MR_Box mercury__parsing_utils__X_14;
      MR_Box mercury__parsing_utils__STATE_VARIABLE_S_21_21;
      MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_22_22;
      MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_35_59;
      MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_11_77;
      MR_Word mercury__parsing_utils__SkipWS_82;
      MR_Word mercury__parsing_utils__SkipWS0_86;
      MR_Integer mercury__parsing_utils__Var_87;
      MR_String mercury__parsing_utils__Var_88;
      MR_Word mercury__parsing_utils__Var_89;
      MR_Word mercury__parsing_utils__Var_90;
      MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Box mercury__parsing_utils__conv2_Var_83;
      MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_35_59;
      MR_bool MR_CALL (* mercury__parsing_utils__func_3)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Box mercury__parsing_utils__conv4_STATE_VARIABLE_PS_22_22;

      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__match_string_4_p_0(mercury__parsing_utils__Var_31, mercury__parsing_utils__Src_10, mercury__parsing_utils__STATE_VARIABLE_PS_0_19, &mercury__parsing_utils__STATE_VARIABLE_PS_11_77);
      }
      if (mercury__parsing_utils__succeeded)
      {
        mercury__parsing_utils__Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_10, (MR_Integer) 0)));
        mercury__parsing_utils__Var_88 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_10, (MR_Integer) 1)));
        mercury__parsing_utils__SkipWS0_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_10, (MR_Integer) 2)));
        mercury__parsing_utils__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_10, (MR_Integer) 3)));
        mercury__parsing_utils__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_10, (MR_Integer) 4)));
{
#define MR_PROC_LABEL mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_114_101_118_95_97_99_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_86 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_82  = SkipWS;
}
        mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_82, (MR_Integer) 1)));
        {
          mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_82), ((MR_Box) (mercury__parsing_utils__Src_10)), &mercury__parsing_utils__conv2_Var_83, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_11_77)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_35_59);
        }
        if (mercury__parsing_utils__succeeded)
        {
          mercury__parsing_utils__STATE_VARIABLE_PS_35_59 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_35_59);
          mercury__parsing_utils__succeeded = MR_TRUE;
        }
        if (mercury__parsing_utils__succeeded)
        {
          mercury__parsing_utils__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Var_32, (MR_Integer) 1)));
          {
            mercury__parsing_utils__succeeded = mercury__parsing_utils__func_3(((MR_Box) mercury__parsing_utils__Var_32), ((MR_Box) (mercury__parsing_utils__Src_10)), &mercury__parsing_utils__X_14, mercury__parsing_utils__STATE_VARIABLE_S_0_17, &mercury__parsing_utils__STATE_VARIABLE_S_21_21, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_35_59)), &mercury__parsing_utils__conv4_STATE_VARIABLE_PS_22_22);
          }
          if (mercury__parsing_utils__succeeded)
          {
            mercury__parsing_utils__STATE_VARIABLE_PS_22_22 = ((MR_Integer) mercury__parsing_utils__conv4_STATE_VARIABLE_PS_22_22);
            mercury__parsing_utils__succeeded = MR_TRUE;
          }
        }
      }
      if (mercury__parsing_utils__succeeded)
      {
        MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_23_23;

        {
          mercury__parsing_utils__STATE_VARIABLE_RevResult_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__parsing_utils__STATE_VARIABLE_RevResult_23_23, 0) = mercury__parsing_utils__X_14;
          MR_hl_field(MR_mktag(1), mercury__parsing_utils__STATE_VARIABLE_RevResult_23_23, 1) = ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_RevResult_0_15));
        }
        /* direct tailcall eliminated */
        {
          MR_Word mercury__parsing_utils__next_value_of_STATE_VARIABLE_RevResult_0_15 = mercury__parsing_utils__STATE_VARIABLE_RevResult_23_23;
          MR_Box mercury__parsing_utils__next_value_of_STATE_VARIABLE_S_0_17 = mercury__parsing_utils__STATE_VARIABLE_S_21_21;
          MR_Integer mercury__parsing_utils__next_value_of_STATE_VARIABLE_PS_0_19 = mercury__parsing_utils__STATE_VARIABLE_PS_22_22;

          mercury__parsing_utils__STATE_VARIABLE_PS_0_19 = mercury__parsing_utils__next_value_of_STATE_VARIABLE_PS_0_19;
          mercury__parsing_utils__STATE_VARIABLE_S_0_17 = mercury__parsing_utils__next_value_of_STATE_VARIABLE_S_0_17;
          mercury__parsing_utils__STATE_VARIABLE_RevResult_0_15 = mercury__parsing_utils__next_value_of_STATE_VARIABLE_RevResult_0_15;
        }
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
	if (SUCCESS_INDICATOR) {
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__parsing_utils__succeeded)
        {
          *mercury__parsing_utils__STATE_VARIABLE_PS_20 = mercury__parsing_utils__STATE_VARIABLE_PS_0_19;
          *mercury__parsing_utils__STATE_VARIABLE_S_18 = mercury__parsing_utils__STATE_VARIABLE_S_0_17;
          *mercury__parsing_utils__STATE_VARIABLE_RevResult_16 = mercury__parsing_utils__STATE_VARIABLE_RevResult_0_15;
          mercury__parsing_utils__succeeded = MR_TRUE;
        }
      }
      return mercury__parsing_utils__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__separated_list_6_p_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_34,
  MR_String mercury__parsing_utils__Separator_7,
  MR_Word mercury__parsing_utils__P_8,
  MR_Word mercury__parsing_utils__Src_9,
  MR_Word * mercury__parsing_utils__Result_10,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_18,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_19)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Box mercury__parsing_utils__X_16;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_28_28;
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__P_8, (MR_Integer) 1)));
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_28_28;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__P_8), ((MR_Box) (mercury__parsing_utils__Src_9)), &mercury__parsing_utils__X_16, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_18)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_28_28);
    }
    if (mercury__parsing_utils__succeeded)
    {
      mercury__parsing_utils__STATE_VARIABLE_PS_28_28 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_28_28);
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    if (mercury__parsing_utils__succeeded)
    {
      MR_Word mercury__parsing_utils__Xs_17;
      MR_Word mercury__parsing_utils__RevResult_41;
      MR_Word mercury__parsing_utils__Var_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_114_101_118_95_97_99_99_95_95_104_111_54_95_95_91_49_44_32_52_44_32_53_93_95_48_6_p_0(mercury__parsing_utils__Separator_7, mercury__parsing_utils__P_8, mercury__parsing_utils__Src_9, mercury__parsing_utils__Var_42, &mercury__parsing_utils__RevResult_41, mercury__parsing_utils__STATE_VARIABLE_PS_28_28, mercury__parsing_utils__STATE_VARIABLE_PS_19);
      }
      if (mercury__parsing_utils__succeeded)
      {
        {
          mercury__list__reverse_2_p_0(mercury__parsing_utils__TypeInfo_for_T_34, mercury__parsing_utils__RevResult_41, &mercury__parsing_utils__Xs_17);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__parsing_utils__Result_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__parsing_utils__X_16;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parsing_utils__Xs_17));
        }
        mercury__parsing_utils__succeeded = MR_TRUE;
      }
    }
    else
    {
      *mercury__parsing_utils__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *mercury__parsing_utils__STATE_VARIABLE_PS_19 = mercury__parsing_utils__STATE_VARIABLE_PS_0_18;
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    return mercury__parsing_utils__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_114_101_118_95_97_99_99_95_95_104_111_54_95_95_91_49_44_32_52_44_32_53_93_95_48_6_p_0(
  MR_String mercury__parsing_utils__Var_22,
  MR_Word mercury__parsing_utils__Var_23,
  MR_Word mercury__parsing_utils__Src_8,
  MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_0_12,
  MR_Word * mercury__parsing_utils__STATE_VARIABLE_RevResult_13,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_14,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__parsing_utils__succeeded;
      MR_Box mercury__parsing_utils__X_11;
      MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_16_16;
      MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_26_43;
      MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_11_56;
      MR_Word mercury__parsing_utils__SkipWS_61;
      MR_Word mercury__parsing_utils__SkipWS0_65;
      MR_Integer mercury__parsing_utils__Var_66;
      MR_String mercury__parsing_utils__Var_67;
      MR_Word mercury__parsing_utils__Var_68;
      MR_Word mercury__parsing_utils__Var_69;
      MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Box mercury__parsing_utils__conv2_Var_62;
      MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_26_43;
      MR_bool MR_CALL (* mercury__parsing_utils__func_3)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Box mercury__parsing_utils__conv4_STATE_VARIABLE_PS_16_16;

      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__match_string_4_p_0(mercury__parsing_utils__Var_22, mercury__parsing_utils__Src_8, mercury__parsing_utils__STATE_VARIABLE_PS_0_14, &mercury__parsing_utils__STATE_VARIABLE_PS_11_56);
      }
      if (mercury__parsing_utils__succeeded)
      {
        mercury__parsing_utils__Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_8, (MR_Integer) 0)));
        mercury__parsing_utils__Var_67 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_8, (MR_Integer) 1)));
        mercury__parsing_utils__SkipWS0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_8, (MR_Integer) 2)));
        mercury__parsing_utils__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_8, (MR_Integer) 3)));
        mercury__parsing_utils__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_8, (MR_Integer) 4)));
{
#define MR_PROC_LABEL mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_114_101_118_95_97_99_99_95_95_104_111_54_95_95_91_49_44_32_52_44_32_53_93_95_48_6_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_65 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_61  = SkipWS;
}
        mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_61, (MR_Integer) 1)));
        {
          mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_61), ((MR_Box) (mercury__parsing_utils__Src_8)), &mercury__parsing_utils__conv2_Var_62, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_11_56)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_26_43);
        }
        if (mercury__parsing_utils__succeeded)
        {
          mercury__parsing_utils__STATE_VARIABLE_PS_26_43 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_26_43);
          mercury__parsing_utils__succeeded = MR_TRUE;
        }
        if (mercury__parsing_utils__succeeded)
        {
          mercury__parsing_utils__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Var_23, (MR_Integer) 1)));
          {
            mercury__parsing_utils__succeeded = mercury__parsing_utils__func_3(((MR_Box) mercury__parsing_utils__Var_23), ((MR_Box) (mercury__parsing_utils__Src_8)), &mercury__parsing_utils__X_11, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_26_43)), &mercury__parsing_utils__conv4_STATE_VARIABLE_PS_16_16);
          }
          if (mercury__parsing_utils__succeeded)
          {
            mercury__parsing_utils__STATE_VARIABLE_PS_16_16 = ((MR_Integer) mercury__parsing_utils__conv4_STATE_VARIABLE_PS_16_16);
            mercury__parsing_utils__succeeded = MR_TRUE;
          }
        }
      }
      if (mercury__parsing_utils__succeeded)
      {
        MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_17_17;

        {
          mercury__parsing_utils__STATE_VARIABLE_RevResult_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__parsing_utils__STATE_VARIABLE_RevResult_17_17, 0) = mercury__parsing_utils__X_11;
          MR_hl_field(MR_mktag(1), mercury__parsing_utils__STATE_VARIABLE_RevResult_17_17, 1) = ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_RevResult_0_12));
        }
        /* direct tailcall eliminated */
        {
          MR_Word mercury__parsing_utils__next_value_of_STATE_VARIABLE_RevResult_0_12 = mercury__parsing_utils__STATE_VARIABLE_RevResult_17_17;
          MR_Integer mercury__parsing_utils__next_value_of_STATE_VARIABLE_PS_0_14 = mercury__parsing_utils__STATE_VARIABLE_PS_16_16;

          mercury__parsing_utils__STATE_VARIABLE_PS_0_14 = mercury__parsing_utils__next_value_of_STATE_VARIABLE_PS_0_14;
          mercury__parsing_utils__STATE_VARIABLE_RevResult_0_12 = mercury__parsing_utils__next_value_of_STATE_VARIABLE_RevResult_0_12;
        }
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
	if (SUCCESS_INDICATOR) {
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__parsing_utils__succeeded)
        {
          *mercury__parsing_utils__STATE_VARIABLE_PS_15 = mercury__parsing_utils__STATE_VARIABLE_PS_0_14;
          *mercury__parsing_utils__STATE_VARIABLE_RevResult_13 = mercury__parsing_utils__STATE_VARIABLE_RevResult_0_12;
          mercury__parsing_utils__succeeded = MR_TRUE;
        }
      }
      return mercury__parsing_utils__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__brackets_9_p_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_27,
  MR_Word mercury__parsing_utils__TypeInfo_for_S_28,
  MR_String mercury__parsing_utils__L_10,
  MR_String mercury__parsing_utils__R_11,
  MR_Word mercury__parsing_utils__P_12,
  MR_Word mercury__parsing_utils__Src_13,
  MR_Box * mercury__parsing_utils__Result_14,
  MR_Box mercury__parsing_utils__STATE_VARIABLE_S_0_19,
  MR_Box * mercury__parsing_utils__STATE_VARIABLE_S_20,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_21,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_22)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_23_23;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_25_25;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_11_34;
    MR_Word mercury__parsing_utils__SkipWS_39;
    MR_Word mercury__parsing_utils__SkipWS0_43;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_11_53;
    MR_Word mercury__parsing_utils__SkipWS_58;
    MR_Word mercury__parsing_utils__SkipWS0_62;
    MR_Integer mercury__parsing_utils__Var_44;
    MR_String mercury__parsing_utils__Var_45;
    MR_Word mercury__parsing_utils__Var_46;
    MR_Word mercury__parsing_utils__Var_47;
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box mercury__parsing_utils__conv2_Var_40;
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_23_23;
    MR_bool MR_CALL (* mercury__parsing_utils__func_3)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box mercury__parsing_utils__conv4_STATE_VARIABLE_PS_25_25;
    MR_Integer mercury__parsing_utils__Var_63;
    MR_String mercury__parsing_utils__Var_64;
    MR_Word mercury__parsing_utils__Var_65;
    MR_Word mercury__parsing_utils__Var_66;
    MR_bool MR_CALL (* mercury__parsing_utils__func_5)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box mercury__parsing_utils__conv7_Var_59;
    MR_Box mercury__parsing_utils__conv6_STATE_VARIABLE_PS_22;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__match_string_4_p_0(mercury__parsing_utils__L_10, mercury__parsing_utils__Src_13, mercury__parsing_utils__STATE_VARIABLE_PS_0_21, &mercury__parsing_utils__STATE_VARIABLE_PS_11_34);
    }
    if (mercury__parsing_utils__succeeded)
    {
      mercury__parsing_utils__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_13, (MR_Integer) 0)));
      mercury__parsing_utils__Var_45 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_13, (MR_Integer) 1)));
      mercury__parsing_utils__SkipWS0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_13, (MR_Integer) 2)));
      mercury__parsing_utils__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_13, (MR_Integer) 3)));
      mercury__parsing_utils__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_13, (MR_Integer) 4)));
{
#define MR_PROC_LABEL mercury__parsing_utils__brackets_9_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_43 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_39  = SkipWS;
}
      mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_39, (MR_Integer) 1)));
      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_39), ((MR_Box) (mercury__parsing_utils__Src_13)), &mercury__parsing_utils__conv2_Var_40, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_11_34)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_23_23);
      }
      if (mercury__parsing_utils__succeeded)
      {
        mercury__parsing_utils__STATE_VARIABLE_PS_23_23 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_23_23);
        mercury__parsing_utils__succeeded = MR_TRUE;
      }
      if (mercury__parsing_utils__succeeded)
      {
        mercury__parsing_utils__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__P_12, (MR_Integer) 1)));
        {
          mercury__parsing_utils__succeeded = mercury__parsing_utils__func_3(((MR_Box) mercury__parsing_utils__P_12), ((MR_Box) (mercury__parsing_utils__Src_13)), mercury__parsing_utils__Result_14, mercury__parsing_utils__STATE_VARIABLE_S_0_19, mercury__parsing_utils__STATE_VARIABLE_S_20, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_23_23)), &mercury__parsing_utils__conv4_STATE_VARIABLE_PS_25_25);
        }
        if (mercury__parsing_utils__succeeded)
        {
          mercury__parsing_utils__STATE_VARIABLE_PS_25_25 = ((MR_Integer) mercury__parsing_utils__conv4_STATE_VARIABLE_PS_25_25);
          mercury__parsing_utils__succeeded = MR_TRUE;
        }
        if (mercury__parsing_utils__succeeded)
        {
          {
            mercury__parsing_utils__succeeded = mercury__parsing_utils__match_string_4_p_0(mercury__parsing_utils__R_11, mercury__parsing_utils__Src_13, mercury__parsing_utils__STATE_VARIABLE_PS_25_25, &mercury__parsing_utils__STATE_VARIABLE_PS_11_53);
          }
          if (mercury__parsing_utils__succeeded)
          {
            mercury__parsing_utils__Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_13, (MR_Integer) 0)));
            mercury__parsing_utils__Var_64 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_13, (MR_Integer) 1)));
            mercury__parsing_utils__SkipWS0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_13, (MR_Integer) 2)));
            mercury__parsing_utils__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_13, (MR_Integer) 3)));
            mercury__parsing_utils__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_13, (MR_Integer) 4)));
{
#define MR_PROC_LABEL mercury__parsing_utils__brackets_9_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_62 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_58  = SkipWS;
}
            mercury__parsing_utils__func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_58, (MR_Integer) 1)));
            {
              mercury__parsing_utils__succeeded = mercury__parsing_utils__func_5(((MR_Box) mercury__parsing_utils__SkipWS_58), ((MR_Box) (mercury__parsing_utils__Src_13)), &mercury__parsing_utils__conv7_Var_59, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_11_53)), &mercury__parsing_utils__conv6_STATE_VARIABLE_PS_22);
            }
            if (mercury__parsing_utils__succeeded)
            {
              *mercury__parsing_utils__STATE_VARIABLE_PS_22 = ((MR_Integer) mercury__parsing_utils__conv6_STATE_VARIABLE_PS_22);
              mercury__parsing_utils__succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__brackets_7_p_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_21,
  MR_String mercury__parsing_utils__L_8,
  MR_String mercury__parsing_utils__R_9,
  MR_Word mercury__parsing_utils__P_10,
  MR_Word mercury__parsing_utils__Src_11,
  MR_Box * mercury__parsing_utils__Result_12,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_16,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_17)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_18_18;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_19_19;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_11_27;
    MR_Word mercury__parsing_utils__SkipWS_32;
    MR_Word mercury__parsing_utils__SkipWS0_36;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_11_46;
    MR_Word mercury__parsing_utils__SkipWS_51;
    MR_Word mercury__parsing_utils__SkipWS0_55;
    MR_Integer mercury__parsing_utils__Var_37;
    MR_String mercury__parsing_utils__Var_38;
    MR_Word mercury__parsing_utils__Var_39;
    MR_Word mercury__parsing_utils__Var_40;
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box mercury__parsing_utils__conv2_Var_33;
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_18_18;
    MR_bool MR_CALL (* mercury__parsing_utils__func_3)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box mercury__parsing_utils__conv4_STATE_VARIABLE_PS_19_19;
    MR_Integer mercury__parsing_utils__Var_56;
    MR_String mercury__parsing_utils__Var_57;
    MR_Word mercury__parsing_utils__Var_58;
    MR_Word mercury__parsing_utils__Var_59;
    MR_bool MR_CALL (* mercury__parsing_utils__func_5)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box mercury__parsing_utils__conv7_Var_52;
    MR_Box mercury__parsing_utils__conv6_STATE_VARIABLE_PS_17;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__match_string_4_p_0(mercury__parsing_utils__L_8, mercury__parsing_utils__Src_11, mercury__parsing_utils__STATE_VARIABLE_PS_0_16, &mercury__parsing_utils__STATE_VARIABLE_PS_11_27);
    }
    if (mercury__parsing_utils__succeeded)
    {
      mercury__parsing_utils__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_11, (MR_Integer) 0)));
      mercury__parsing_utils__Var_38 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_11, (MR_Integer) 1)));
      mercury__parsing_utils__SkipWS0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_11, (MR_Integer) 2)));
      mercury__parsing_utils__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_11, (MR_Integer) 3)));
      mercury__parsing_utils__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_11, (MR_Integer) 4)));
{
#define MR_PROC_LABEL mercury__parsing_utils__brackets_7_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_36 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_32  = SkipWS;
}
      mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_32, (MR_Integer) 1)));
      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_32), ((MR_Box) (mercury__parsing_utils__Src_11)), &mercury__parsing_utils__conv2_Var_33, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_11_27)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_18_18);
      }
      if (mercury__parsing_utils__succeeded)
      {
        mercury__parsing_utils__STATE_VARIABLE_PS_18_18 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_18_18);
        mercury__parsing_utils__succeeded = MR_TRUE;
      }
      if (mercury__parsing_utils__succeeded)
      {
        mercury__parsing_utils__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__P_10, (MR_Integer) 1)));
        {
          mercury__parsing_utils__succeeded = mercury__parsing_utils__func_3(((MR_Box) mercury__parsing_utils__P_10), ((MR_Box) (mercury__parsing_utils__Src_11)), mercury__parsing_utils__Result_12, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_18_18)), &mercury__parsing_utils__conv4_STATE_VARIABLE_PS_19_19);
        }
        if (mercury__parsing_utils__succeeded)
        {
          mercury__parsing_utils__STATE_VARIABLE_PS_19_19 = ((MR_Integer) mercury__parsing_utils__conv4_STATE_VARIABLE_PS_19_19);
          mercury__parsing_utils__succeeded = MR_TRUE;
        }
        if (mercury__parsing_utils__succeeded)
        {
          {
            mercury__parsing_utils__succeeded = mercury__parsing_utils__match_string_4_p_0(mercury__parsing_utils__R_9, mercury__parsing_utils__Src_11, mercury__parsing_utils__STATE_VARIABLE_PS_19_19, &mercury__parsing_utils__STATE_VARIABLE_PS_11_46);
          }
          if (mercury__parsing_utils__succeeded)
          {
            mercury__parsing_utils__Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_11, (MR_Integer) 0)));
            mercury__parsing_utils__Var_57 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_11, (MR_Integer) 1)));
            mercury__parsing_utils__SkipWS0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_11, (MR_Integer) 2)));
            mercury__parsing_utils__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_11, (MR_Integer) 3)));
            mercury__parsing_utils__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_11, (MR_Integer) 4)));
{
#define MR_PROC_LABEL mercury__parsing_utils__brackets_7_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_55 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_51  = SkipWS;
}
            mercury__parsing_utils__func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_51, (MR_Integer) 1)));
            {
              mercury__parsing_utils__succeeded = mercury__parsing_utils__func_5(((MR_Box) mercury__parsing_utils__SkipWS_51), ((MR_Box) (mercury__parsing_utils__Src_11)), &mercury__parsing_utils__conv7_Var_52, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_11_46)), &mercury__parsing_utils__conv6_STATE_VARIABLE_PS_17);
            }
            if (mercury__parsing_utils__succeeded)
            {
              *mercury__parsing_utils__STATE_VARIABLE_PS_17 = ((MR_Integer) mercury__parsing_utils__conv6_STATE_VARIABLE_PS_17);
              mercury__parsing_utils__succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__one_or_more_7_p_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_23,
  MR_Word mercury__parsing_utils__TypeInfo_for_S_24,
  MR_Word mercury__parsing_utils__P_8,
  MR_Word mercury__parsing_utils__Src_9,
  MR_Word * mercury__parsing_utils__Result_10,
  MR_Box mercury__parsing_utils__STATE_VARIABLE_S_0_15,
  MR_Box * mercury__parsing_utils__STATE_VARIABLE_S_16,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_17,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_18)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Box mercury__parsing_utils__X_13;
    MR_Word mercury__parsing_utils__Xs_14;
    MR_Box mercury__parsing_utils__STATE_VARIABLE_S_19_19;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_20_20;
    MR_Word mercury__parsing_utils__RevResult_34;
    MR_Word mercury__parsing_utils__Var_35;
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__P_8, (MR_Integer) 1)));
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_20_20;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__P_8), ((MR_Box) (mercury__parsing_utils__Src_9)), &mercury__parsing_utils__X_13, mercury__parsing_utils__STATE_VARIABLE_S_0_15, &mercury__parsing_utils__STATE_VARIABLE_S_19_19, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_17)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_20_20);
    }
    if (mercury__parsing_utils__succeeded)
    {
      mercury__parsing_utils__STATE_VARIABLE_PS_20_20 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_20_20);
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    if (mercury__parsing_utils__succeeded)
    {
      mercury__parsing_utils__Var_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__zero_or_more_rev_acc_8_p_0(mercury__parsing_utils__TypeInfo_for_T_23, mercury__parsing_utils__TypeInfo_for_S_24, mercury__parsing_utils__P_8, mercury__parsing_utils__Src_9, mercury__parsing_utils__Var_35, &mercury__parsing_utils__RevResult_34, mercury__parsing_utils__STATE_VARIABLE_S_19_19, mercury__parsing_utils__STATE_VARIABLE_S_16, mercury__parsing_utils__STATE_VARIABLE_PS_20_20, mercury__parsing_utils__STATE_VARIABLE_PS_18);
      }
      if (mercury__parsing_utils__succeeded)
      {
        {
          mercury__list__reverse_2_p_0(mercury__parsing_utils__TypeInfo_for_T_23, mercury__parsing_utils__RevResult_34, &mercury__parsing_utils__Xs_14);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__parsing_utils__Result_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__parsing_utils__X_13;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parsing_utils__Xs_14));
        }
        mercury__parsing_utils__succeeded = MR_TRUE;
      }
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__one_or_more_5_p_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_16,
  MR_Word mercury__parsing_utils__P_6,
  MR_Word mercury__parsing_utils__Src_7,
  MR_Word * mercury__parsing_utils__Result_8,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_12,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_13)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Box mercury__parsing_utils__X_10;
    MR_Word mercury__parsing_utils__Xs_11;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_14_14;
    MR_Word mercury__parsing_utils__RevResult_23;
    MR_Word mercury__parsing_utils__Var_24;
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__P_6, (MR_Integer) 1)));
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_14_14;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__P_6), ((MR_Box) (mercury__parsing_utils__Src_7)), &mercury__parsing_utils__X_10, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_12)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_14_14);
    }
    if (mercury__parsing_utils__succeeded)
    {
      mercury__parsing_utils__STATE_VARIABLE_PS_14_14 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_14_14);
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    if (mercury__parsing_utils__succeeded)
    {
      mercury__parsing_utils__Var_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__zero_or_more_rev_acc_6_p_0(mercury__parsing_utils__TypeInfo_for_T_16, mercury__parsing_utils__P_6, mercury__parsing_utils__Src_7, mercury__parsing_utils__Var_24, &mercury__parsing_utils__RevResult_23, mercury__parsing_utils__STATE_VARIABLE_PS_14_14, mercury__parsing_utils__STATE_VARIABLE_PS_13);
      }
      if (mercury__parsing_utils__succeeded)
      {
        {
          mercury__list__reverse_2_p_0(mercury__parsing_utils__TypeInfo_for_T_16, mercury__parsing_utils__RevResult_23, &mercury__parsing_utils__Xs_11);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__parsing_utils__Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__parsing_utils__X_10;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parsing_utils__Xs_11));
        }
        mercury__parsing_utils__succeeded = MR_TRUE;
      }
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__zero_or_more_7_p_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_21,
  MR_Word mercury__parsing_utils__TypeInfo_for_S_22,
  MR_Word mercury__parsing_utils__P_8,
  MR_Word mercury__parsing_utils__Src_9,
  MR_Word * mercury__parsing_utils__Result_10,
  MR_Box mercury__parsing_utils__STATE_VARIABLE_S_0_14,
  MR_Box * mercury__parsing_utils__STATE_VARIABLE_S_15,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_16,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_17)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Word mercury__parsing_utils__RevResult_13;
    MR_Word mercury__parsing_utils__Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__zero_or_more_rev_acc_8_p_0(mercury__parsing_utils__TypeInfo_for_T_21, mercury__parsing_utils__TypeInfo_for_S_22, mercury__parsing_utils__P_8, mercury__parsing_utils__Src_9, mercury__parsing_utils__Var_18, &mercury__parsing_utils__RevResult_13, mercury__parsing_utils__STATE_VARIABLE_S_0_14, mercury__parsing_utils__STATE_VARIABLE_S_15, mercury__parsing_utils__STATE_VARIABLE_PS_0_16, mercury__parsing_utils__STATE_VARIABLE_PS_17);
    }
    if (mercury__parsing_utils__succeeded)
    {
      {
        mercury__list__reverse_2_p_0(mercury__parsing_utils__TypeInfo_for_T_21, mercury__parsing_utils__RevResult_13, mercury__parsing_utils__Result_10);
      }
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__zero_or_more_rev_acc_8_p_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_27,
  MR_Word mercury__parsing_utils__TypeInfo_for_S_28,
  MR_Word mercury__parsing_utils__P_9,
  MR_Word mercury__parsing_utils__Src_10,
  MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_0_15,
  MR_Word * mercury__parsing_utils__STATE_VARIABLE_RevResult_16,
  MR_Box mercury__parsing_utils__STATE_VARIABLE_S_0_17,
  MR_Box * mercury__parsing_utils__STATE_VARIABLE_S_18,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_19,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_20)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__parsing_utils__succeeded;
      MR_Box mercury__parsing_utils__X_14;
      MR_Box mercury__parsing_utils__STATE_VARIABLE_S_21_21;
      MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_22_22;
      MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__P_9, (MR_Integer) 1)));
      MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_22_22;

      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__P_9), ((MR_Box) (mercury__parsing_utils__Src_10)), &mercury__parsing_utils__X_14, mercury__parsing_utils__STATE_VARIABLE_S_0_17, &mercury__parsing_utils__STATE_VARIABLE_S_21_21, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_19)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_22_22);
      }
      if (mercury__parsing_utils__succeeded)
      {
        mercury__parsing_utils__STATE_VARIABLE_PS_22_22 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_22_22);
        mercury__parsing_utils__succeeded = MR_TRUE;
      }
      if (mercury__parsing_utils__succeeded)
      {
        MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_23_23;

        {
          mercury__parsing_utils__STATE_VARIABLE_RevResult_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__parsing_utils__STATE_VARIABLE_RevResult_23_23, 0) = mercury__parsing_utils__X_14;
          MR_hl_field(MR_mktag(1), mercury__parsing_utils__STATE_VARIABLE_RevResult_23_23, 1) = ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_RevResult_0_15));
        }
        /* direct tailcall eliminated */
        {
          MR_Word mercury__parsing_utils__next_value_of_STATE_VARIABLE_RevResult_0_15 = mercury__parsing_utils__STATE_VARIABLE_RevResult_23_23;
          MR_Box mercury__parsing_utils__next_value_of_STATE_VARIABLE_S_0_17 = mercury__parsing_utils__STATE_VARIABLE_S_21_21;
          MR_Integer mercury__parsing_utils__next_value_of_STATE_VARIABLE_PS_0_19 = mercury__parsing_utils__STATE_VARIABLE_PS_22_22;

          mercury__parsing_utils__STATE_VARIABLE_PS_0_19 = mercury__parsing_utils__next_value_of_STATE_VARIABLE_PS_0_19;
          mercury__parsing_utils__STATE_VARIABLE_S_0_17 = mercury__parsing_utils__next_value_of_STATE_VARIABLE_S_0_17;
          mercury__parsing_utils__STATE_VARIABLE_RevResult_0_15 = mercury__parsing_utils__next_value_of_STATE_VARIABLE_RevResult_0_15;
        }
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
	if (SUCCESS_INDICATOR) {
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__parsing_utils__succeeded)
        {
          *mercury__parsing_utils__STATE_VARIABLE_PS_20 = mercury__parsing_utils__STATE_VARIABLE_PS_0_19;
          *mercury__parsing_utils__STATE_VARIABLE_S_18 = mercury__parsing_utils__STATE_VARIABLE_S_0_17;
          *mercury__parsing_utils__STATE_VARIABLE_RevResult_16 = mercury__parsing_utils__STATE_VARIABLE_RevResult_0_15;
          mercury__parsing_utils__succeeded = MR_TRUE;
        }
      }
      return mercury__parsing_utils__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__zero_or_more_5_p_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_15,
  MR_Word mercury__parsing_utils__P_6,
  MR_Word mercury__parsing_utils__Src_7,
  MR_Word * mercury__parsing_utils__Result_8,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_11,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_12)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Word mercury__parsing_utils__RevResult_10;
    MR_Word mercury__parsing_utils__Var_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__zero_or_more_rev_acc_6_p_0(mercury__parsing_utils__TypeInfo_for_T_15, mercury__parsing_utils__P_6, mercury__parsing_utils__Src_7, mercury__parsing_utils__Var_13, &mercury__parsing_utils__RevResult_10, mercury__parsing_utils__STATE_VARIABLE_PS_0_11, mercury__parsing_utils__STATE_VARIABLE_PS_12);
    }
    if (mercury__parsing_utils__succeeded)
    {
      {
        mercury__list__reverse_2_p_0(mercury__parsing_utils__TypeInfo_for_T_15, mercury__parsing_utils__RevResult_10, mercury__parsing_utils__Result_8);
      }
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__zero_or_more_rev_acc_6_p_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_20,
  MR_Word mercury__parsing_utils__P_7,
  MR_Word mercury__parsing_utils__Src_8,
  MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_0_12,
  MR_Word * mercury__parsing_utils__STATE_VARIABLE_RevResult_13,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_14,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__parsing_utils__succeeded;
      MR_Box mercury__parsing_utils__X_11;
      MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_16_16;
      MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__P_7, (MR_Integer) 1)));
      MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_16_16;

      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__P_7), ((MR_Box) (mercury__parsing_utils__Src_8)), &mercury__parsing_utils__X_11, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_14)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_16_16);
      }
      if (mercury__parsing_utils__succeeded)
      {
        mercury__parsing_utils__STATE_VARIABLE_PS_16_16 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_16_16);
        mercury__parsing_utils__succeeded = MR_TRUE;
      }
      if (mercury__parsing_utils__succeeded)
      {
        MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_17_17;

        {
          mercury__parsing_utils__STATE_VARIABLE_RevResult_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__parsing_utils__STATE_VARIABLE_RevResult_17_17, 0) = mercury__parsing_utils__X_11;
          MR_hl_field(MR_mktag(1), mercury__parsing_utils__STATE_VARIABLE_RevResult_17_17, 1) = ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_RevResult_0_12));
        }
        /* direct tailcall eliminated */
        {
          MR_Word mercury__parsing_utils__next_value_of_STATE_VARIABLE_RevResult_0_12 = mercury__parsing_utils__STATE_VARIABLE_RevResult_17_17;
          MR_Integer mercury__parsing_utils__next_value_of_STATE_VARIABLE_PS_0_14 = mercury__parsing_utils__STATE_VARIABLE_PS_16_16;

          mercury__parsing_utils__STATE_VARIABLE_PS_0_14 = mercury__parsing_utils__next_value_of_STATE_VARIABLE_PS_0_14;
          mercury__parsing_utils__STATE_VARIABLE_RevResult_0_12 = mercury__parsing_utils__next_value_of_STATE_VARIABLE_RevResult_0_12;
        }
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
	if (SUCCESS_INDICATOR) {
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__parsing_utils__succeeded)
        {
          *mercury__parsing_utils__STATE_VARIABLE_PS_15 = mercury__parsing_utils__STATE_VARIABLE_PS_0_14;
          *mercury__parsing_utils__STATE_VARIABLE_RevResult_13 = mercury__parsing_utils__STATE_VARIABLE_RevResult_0_12;
          mercury__parsing_utils__succeeded = MR_TRUE;
        }
      }
      return mercury__parsing_utils__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__optional_7_p_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_22,
  MR_Word mercury__parsing_utils__TypeInfo_for_S_23,
  MR_Word mercury__parsing_utils__P_8,
  MR_Word mercury__parsing_utils__Src_9,
  MR_Word * mercury__parsing_utils__Result_10,
  MR_Box mercury__parsing_utils__STATE_VARIABLE_S_0_14,
  MR_Box * mercury__parsing_utils__STATE_VARIABLE_S_15,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_16,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_17)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Box mercury__parsing_utils__X_13;
    MR_Box mercury__parsing_utils__STATE_VARIABLE_S_18_18;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_19_19;
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__P_8, (MR_Integer) 1)));
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_19_19;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__P_8), ((MR_Box) (mercury__parsing_utils__Src_9)), &mercury__parsing_utils__X_13, mercury__parsing_utils__STATE_VARIABLE_S_0_14, &mercury__parsing_utils__STATE_VARIABLE_S_18_18, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_16)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_19_19);
    }
    if (mercury__parsing_utils__succeeded)
    {
      mercury__parsing_utils__STATE_VARIABLE_PS_19_19 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_19_19);
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    if (mercury__parsing_utils__succeeded)
    {
      *mercury__parsing_utils__STATE_VARIABLE_PS_17 = mercury__parsing_utils__STATE_VARIABLE_PS_19_19;
      *mercury__parsing_utils__STATE_VARIABLE_S_15 = mercury__parsing_utils__STATE_VARIABLE_S_18_18;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *mercury__parsing_utils__Result_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = mercury__parsing_utils__X_13;
      }
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    else
    {
      *mercury__parsing_utils__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
{
#define MR_PROC_LABEL mercury__parsing_utils__optional_7_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__parsing_utils__succeeded)
      {
        *mercury__parsing_utils__STATE_VARIABLE_PS_17 = mercury__parsing_utils__STATE_VARIABLE_PS_0_16;
        *mercury__parsing_utils__STATE_VARIABLE_S_15 = mercury__parsing_utils__STATE_VARIABLE_S_0_14;
        mercury__parsing_utils__succeeded = MR_TRUE;
      }
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__optional_5_p_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_15,
  MR_Word mercury__parsing_utils__P_6,
  MR_Word mercury__parsing_utils__Src_7,
  MR_Word * mercury__parsing_utils__Result_8,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_11,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_12)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Box mercury__parsing_utils__X_10;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_13_13;
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__P_6, (MR_Integer) 1)));
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_13_13;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__P_6), ((MR_Box) (mercury__parsing_utils__Src_7)), &mercury__parsing_utils__X_10, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_11)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_13_13);
    }
    if (mercury__parsing_utils__succeeded)
    {
      mercury__parsing_utils__STATE_VARIABLE_PS_13_13 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_13_13);
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    if (mercury__parsing_utils__succeeded)
    {
      *mercury__parsing_utils__STATE_VARIABLE_PS_12 = mercury__parsing_utils__STATE_VARIABLE_PS_13_13;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *mercury__parsing_utils__Result_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = mercury__parsing_utils__X_10;
      }
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    else
    {
      *mercury__parsing_utils__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
{
#define MR_PROC_LABEL mercury__parsing_utils__optional_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__parsing_utils__succeeded)
      {
        *mercury__parsing_utils__STATE_VARIABLE_PS_12 = mercury__parsing_utils__STATE_VARIABLE_PS_0_11;
        mercury__parsing_utils__succeeded = MR_TRUE;
      }
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__string_literal_5_p_0(
  MR_Char mercury__parsing_utils__QuoteChar_6,
  MR_Word mercury__parsing_utils__Src_7,
  MR_String * mercury__parsing_utils__String_8,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_14,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_15)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Integer mercury__parsing_utils__End_13;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_17_17;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_19_19;
    MR_String mercury__parsing_utils__Var_20;
    MR_Char mercury__parsing_utils__Var_26;
    MR_Char mercury__parsing_utils__Var_27;
    MR_Word mercury__parsing_utils__SkipWS_41;
    MR_Word mercury__parsing_utils__SkipWS0_45;
    MR_Integer mercury__parsing_utils__Var_22;
    MR_Word mercury__parsing_utils__Var_23;
    MR_Word mercury__parsing_utils__Var_24;
    MR_Word mercury__parsing_utils__Var_25;
    MR_Integer mercury__parsing_utils__Var_46;
    MR_String mercury__parsing_utils__Var_47;
    MR_Word mercury__parsing_utils__Var_48;
    MR_Word mercury__parsing_utils__Var_49;
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box mercury__parsing_utils__conv2_Var_42;
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_15;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_7, &mercury__parsing_utils__Var_26, mercury__parsing_utils__STATE_VARIABLE_PS_0_14, &mercury__parsing_utils__STATE_VARIABLE_PS_17_17);
    }
    if (mercury__parsing_utils__succeeded)
    {
      mercury__parsing_utils__succeeded = (mercury__parsing_utils__QuoteChar_6 == mercury__parsing_utils__Var_26);
      if (mercury__parsing_utils__succeeded)
      {
        {
          mercury__parsing_utils__succeeded = mercury__parsing_utils__string_literal_2_5_p_0(mercury__parsing_utils__Src_7, mercury__parsing_utils__QuoteChar_6, mercury__parsing_utils__STATE_VARIABLE_PS_17_17, &mercury__parsing_utils__STATE_VARIABLE_PS_19_19);
        }
        if (mercury__parsing_utils__succeeded)
        {
          mercury__parsing_utils__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 0)));
          mercury__parsing_utils__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 1)));
          mercury__parsing_utils__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 2)));
          mercury__parsing_utils__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 3)));
          mercury__parsing_utils__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 4)));
{
#define MR_PROC_LABEL mercury__parsing_utils__string_literal_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__parsing_utils__Var_20 ;
	Index =  mercury__parsing_utils__STATE_VARIABLE_PS_19_19 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__parsing_utils__End_13  = PrevIndex;
	 mercury__parsing_utils__Var_27  = Ch;
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
          if (mercury__parsing_utils__succeeded)
          {
            mercury__parsing_utils__succeeded = (mercury__parsing_utils__QuoteChar_6 == mercury__parsing_utils__Var_27);
            if (mercury__parsing_utils__succeeded)
            {
              mercury__parsing_utils__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 0)));
              mercury__parsing_utils__Var_47 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 1)));
              mercury__parsing_utils__SkipWS0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 2)));
              mercury__parsing_utils__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 3)));
              mercury__parsing_utils__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 4)));
{
#define MR_PROC_LABEL mercury__parsing_utils__string_literal_5_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_45 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_41  = SkipWS;
}
              mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_41, (MR_Integer) 1)));
              {
                mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_41), ((MR_Box) (mercury__parsing_utils__Src_7)), &mercury__parsing_utils__conv2_Var_42, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_19_19)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_15);
              }
              if (mercury__parsing_utils__succeeded)
              {
                *mercury__parsing_utils__STATE_VARIABLE_PS_15 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_15);
                mercury__parsing_utils__succeeded = MR_TRUE;
              }
              if (mercury__parsing_utils__succeeded)
                {
                  mercury__parsing_utils__succeeded = mercury__parsing_utils__input_substring_4_p_0(mercury__parsing_utils__Src_7, mercury__parsing_utils__STATE_VARIABLE_PS_17_17, mercury__parsing_utils__End_13, mercury__parsing_utils__String_8);
                }
            }
          }
        }
      }
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__string_literal_2_5_p_0(
  MR_Word mercury__parsing_utils__Src_6,
  MR_Char mercury__parsing_utils__QuoteChar_7,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_13,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__parsing_utils__succeeded;
      MR_Char mercury__parsing_utils__C_9;
      MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_15_15;

      mercury__private_builtin__dummy_var = (MR_Integer) 0;
      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_6, &mercury__parsing_utils__C_9, mercury__parsing_utils__STATE_VARIABLE_PS_0_13, &mercury__parsing_utils__STATE_VARIABLE_PS_15_15);
      }
      if (mercury__parsing_utils__succeeded)
      {
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__C_9 == mercury__parsing_utils__QuoteChar_7);
        if (mercury__parsing_utils__succeeded)
        {
          *mercury__parsing_utils__STATE_VARIABLE_PS_14 = mercury__parsing_utils__STATE_VARIABLE_PS_15_15;
          mercury__parsing_utils__succeeded = MR_TRUE;
        }
        else
        {
          mercury__parsing_utils__succeeded = (mercury__parsing_utils__C_9 == (MR_Char) 92);
          if (mercury__parsing_utils__succeeded)
          {
            MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_16_16;
            MR_Char mercury__parsing_utils__Var_10;

            {
              mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_6, &mercury__parsing_utils__Var_10, mercury__parsing_utils__STATE_VARIABLE_PS_15_15, &mercury__parsing_utils__STATE_VARIABLE_PS_16_16);
            }
            if (mercury__parsing_utils__succeeded)
            {
              /* direct tailcall eliminated */
              {
                MR_Integer mercury__parsing_utils__next_value_of_STATE_VARIABLE_PS_0_13 = mercury__parsing_utils__STATE_VARIABLE_PS_16_16;

                mercury__parsing_utils__STATE_VARIABLE_PS_0_13 = mercury__parsing_utils__next_value_of_STATE_VARIABLE_PS_0_13;
              }
              continue;
            }
          }
          else
          {
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__parsing_utils__next_value_of_STATE_VARIABLE_PS_0_13 = mercury__parsing_utils__STATE_VARIABLE_PS_15_15;

              mercury__parsing_utils__STATE_VARIABLE_PS_0_13 = mercury__parsing_utils__next_value_of_STATE_VARIABLE_PS_0_13;
            }
            continue;
          }
        }
      }
      return mercury__parsing_utils__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__int_literal_4_p_0(
  MR_Word mercury__parsing_utils__Src_5,
  MR_Integer * mercury__parsing_utils__Int_6,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_9,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_10)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_String mercury__parsing_utils__IntStr_8;
    MR_Integer mercury__parsing_utils__V_5_14;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__int_literal_as_string_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__IntStr_8, mercury__parsing_utils__STATE_VARIABLE_PS_0_9, mercury__parsing_utils__STATE_VARIABLE_PS_10);
    }
    if (mercury__parsing_utils__succeeded)
    {
      mercury__parsing_utils__V_5_14 = (MR_Integer) 10;
      {
        mercury__parsing_utils__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__parsing_utils__V_5_14, mercury__parsing_utils__IntStr_8, mercury__parsing_utils__Int_6);
      }
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__int_literal_as_string_4_p_0(
  MR_Word mercury__parsing_utils__Src_5,
  MR_String * mercury__parsing_utils__IntStr_6,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_14,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_15)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_18_18;
    MR_Integer mercury__parsing_utils__Var_20;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_25_25;
    MR_Char mercury__parsing_utils__C_60;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_13_62;
    MR_Word mercury__parsing_utils__SkipWS_81;
    MR_Word mercury__parsing_utils__SkipWS0_85;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_13_45;
    MR_Char mercury__parsing_utils__X_44;
    MR_Char mercury__parsing_utils__Var_22;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_23_23;
    MR_Integer mercury__parsing_utils__Var_24;
    MR_Char mercury__parsing_utils__Var_32;
    MR_Char mercury__parsing_utils__C_69;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_13_71;
    MR_Integer mercury__parsing_utils__Var_12;
    MR_Integer mercury__parsing_utils__Var_86;
    MR_String mercury__parsing_utils__Var_87;
    MR_Word mercury__parsing_utils__Var_88;
    MR_Word mercury__parsing_utils__Var_89;
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box mercury__parsing_utils__conv2_Var_82;
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_15;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__X_44, mercury__parsing_utils__STATE_VARIABLE_PS_0_14, &mercury__parsing_utils__STATE_VARIABLE_PS_13_45);
    }
    if (mercury__parsing_utils__succeeded)
    {
{
#define MR_PROC_LABEL mercury__parsing_utils__int_literal_as_string_4_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  (MR_String) "-" ;
	Ch =  mercury__parsing_utils__X_44 ;
		{

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
    }
    if (mercury__parsing_utils__succeeded)
    {
      mercury__parsing_utils__STATE_VARIABLE_PS_18_18 = mercury__parsing_utils__STATE_VARIABLE_PS_13_45;
      mercury__parsing_utils__succeeded = MR_TRUE;
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
	if (SUCCESS_INDICATOR) {
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__parsing_utils__succeeded)
      {
        mercury__parsing_utils__STATE_VARIABLE_PS_18_18 = mercury__parsing_utils__STATE_VARIABLE_PS_0_14;
        mercury__parsing_utils__succeeded = MR_TRUE;
      }
    }
    if (mercury__parsing_utils__succeeded)
    {
      mercury__parsing_utils__Var_20 = (MR_Integer) 10;
      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__C_60, mercury__parsing_utils__STATE_VARIABLE_PS_18_18, &mercury__parsing_utils__STATE_VARIABLE_PS_13_62);
      }
      if (mercury__parsing_utils__succeeded)
      {
        {
          mercury__parsing_utils__succeeded = mercury__char__is_base_digit_2_p_0(mercury__parsing_utils__Var_20, mercury__parsing_utils__C_60);
        }
        if (mercury__parsing_utils__succeeded)
        {
          {
            mercury__parsing_utils__succeeded = mercury__parsing_utils__digits_2_5_p_0(mercury__parsing_utils__Var_20, mercury__parsing_utils__Src_5, mercury__parsing_utils__STATE_VARIABLE_PS_13_62, &mercury__parsing_utils__STATE_VARIABLE_PS_25_25);
          }
          if (mercury__parsing_utils__succeeded)
          {
            mercury__parsing_utils__Var_22 = (MR_Char) 46;
            {
              mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__Var_32, mercury__parsing_utils__STATE_VARIABLE_PS_25_25, &mercury__parsing_utils__STATE_VARIABLE_PS_23_23);
            }
            if (mercury__parsing_utils__succeeded)
            {
              mercury__parsing_utils__succeeded = (mercury__parsing_utils__Var_22 == mercury__parsing_utils__Var_32);
              if (mercury__parsing_utils__succeeded)
              {
                mercury__parsing_utils__Var_24 = (MR_Integer) 10;
                {
                  mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__C_69, mercury__parsing_utils__STATE_VARIABLE_PS_23_23, &mercury__parsing_utils__STATE_VARIABLE_PS_13_71);
                }
                if (mercury__parsing_utils__succeeded)
                {
                  {
                    mercury__parsing_utils__succeeded = mercury__char__is_base_digit_2_p_0(mercury__parsing_utils__Var_24, mercury__parsing_utils__C_69);
                  }
                  if (mercury__parsing_utils__succeeded)
                    {
                      mercury__parsing_utils__succeeded = mercury__parsing_utils__digits_2_5_p_0(mercury__parsing_utils__Var_24, mercury__parsing_utils__Src_5, mercury__parsing_utils__STATE_VARIABLE_PS_13_71, &mercury__parsing_utils__Var_12);
                    }
                }
              }
            }
            mercury__parsing_utils__succeeded = !(mercury__parsing_utils__succeeded);
            if (mercury__parsing_utils__succeeded)
            {
              mercury__parsing_utils__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 0)));
              mercury__parsing_utils__Var_87 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 1)));
              mercury__parsing_utils__SkipWS0_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 2)));
              mercury__parsing_utils__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 3)));
              mercury__parsing_utils__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 4)));
{
#define MR_PROC_LABEL mercury__parsing_utils__int_literal_as_string_4_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_85 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_81  = SkipWS;
}
              mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_81, (MR_Integer) 1)));
              {
                mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_81), ((MR_Box) (mercury__parsing_utils__Src_5)), &mercury__parsing_utils__conv2_Var_82, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_25_25)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_15);
              }
              if (mercury__parsing_utils__succeeded)
              {
                *mercury__parsing_utils__STATE_VARIABLE_PS_15 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_15);
                mercury__parsing_utils__succeeded = MR_TRUE;
              }
              if (mercury__parsing_utils__succeeded)
                {
                  mercury__parsing_utils__succeeded = mercury__parsing_utils__input_substring_4_p_0(mercury__parsing_utils__Src_5, mercury__parsing_utils__STATE_VARIABLE_PS_0_14, mercury__parsing_utils__STATE_VARIABLE_PS_25_25, mercury__parsing_utils__IntStr_6);
                }
            }
          }
        }
      }
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__float_literal_4_p_0(
  MR_Word mercury__parsing_utils__Src_5,
  MR_Float * mercury__parsing_utils__Float_6,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_9,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_10)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_String mercury__parsing_utils__FloatStr_8;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__float_literal_as_string_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__FloatStr_8, mercury__parsing_utils__STATE_VARIABLE_PS_0_9, mercury__parsing_utils__STATE_VARIABLE_PS_10);
    }
    if (mercury__parsing_utils__succeeded)
    {
{
#define MR_PROC_LABEL mercury__parsing_utils__float_literal_4_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__parsing_utils__FloatStr_8 ;
		{
{
    /*
    ** The %c checks for any erroneous characters appearing after the float;
    ** if there are then sscanf() will return 2 rather than 1.
    */
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        /* MR_TRUE if sscanf succeeds, MR_FALSE otherwise */
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__parsing_utils__Float_6  = FloatVal;
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__float_literal_as_string_4_p_0(
  MR_Word mercury__parsing_utils__Src_5,
  MR_String * mercury__parsing_utils__FloatStr_6,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_14,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_15)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_19_19;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_21_21;
    MR_Char mercury__parsing_utils__Var_22;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_23_23;
    MR_Integer mercury__parsing_utils__Var_24;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_25_25;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_31_31;
    MR_Char mercury__parsing_utils__Var_34;
    MR_Char mercury__parsing_utils__C_45;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_13_47;
    MR_Char mercury__parsing_utils__C_54;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_13_56;
    MR_Word mercury__parsing_utils__SkipWS_89;
    MR_Word mercury__parsing_utils__SkipWS0_93;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_18_18;
    MR_Char mercury__parsing_utils__Var_33;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_27_27;
    MR_Char mercury__parsing_utils__Var_11;
    MR_String mercury__parsing_utils__Var_26;
    MR_Integer mercury__parsing_utils__Var_94;
    MR_String mercury__parsing_utils__Var_95;
    MR_Word mercury__parsing_utils__Var_96;
    MR_Word mercury__parsing_utils__Var_97;
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box mercury__parsing_utils__conv2_Var_90;
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_15;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__Var_33, mercury__parsing_utils__STATE_VARIABLE_PS_0_14, &mercury__parsing_utils__STATE_VARIABLE_PS_18_18);
    }
    if (mercury__parsing_utils__succeeded)
      mercury__parsing_utils__succeeded = ((MR_Char) 45 == mercury__parsing_utils__Var_33);
    if (mercury__parsing_utils__succeeded)
      mercury__parsing_utils__STATE_VARIABLE_PS_19_19 = mercury__parsing_utils__STATE_VARIABLE_PS_18_18;
    else
      mercury__parsing_utils__STATE_VARIABLE_PS_19_19 = mercury__parsing_utils__STATE_VARIABLE_PS_0_14;
    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__C_45, mercury__parsing_utils__STATE_VARIABLE_PS_19_19, &mercury__parsing_utils__STATE_VARIABLE_PS_13_47);
    }
    if (mercury__parsing_utils__succeeded)
    {
      {
        mercury__parsing_utils__succeeded = mercury__char__is_base_digit_2_p_0((MR_Integer) 10, mercury__parsing_utils__C_45);
      }
      if (mercury__parsing_utils__succeeded)
      {
        {
          mercury__parsing_utils__succeeded = mercury__parsing_utils__digits_2_5_p_0((MR_Integer) 10, mercury__parsing_utils__Src_5, mercury__parsing_utils__STATE_VARIABLE_PS_13_47, &mercury__parsing_utils__STATE_VARIABLE_PS_21_21);
        }
        if (mercury__parsing_utils__succeeded)
        {
          mercury__parsing_utils__Var_22 = (MR_Char) 46;
          {
            mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__Var_34, mercury__parsing_utils__STATE_VARIABLE_PS_21_21, &mercury__parsing_utils__STATE_VARIABLE_PS_23_23);
          }
          if (mercury__parsing_utils__succeeded)
          {
            mercury__parsing_utils__succeeded = (mercury__parsing_utils__Var_22 == mercury__parsing_utils__Var_34);
            if (mercury__parsing_utils__succeeded)
            {
              mercury__parsing_utils__Var_24 = (MR_Integer) 10;
              {
                mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__C_54, mercury__parsing_utils__STATE_VARIABLE_PS_23_23, &mercury__parsing_utils__STATE_VARIABLE_PS_13_56);
              }
              if (mercury__parsing_utils__succeeded)
              {
                {
                  mercury__parsing_utils__succeeded = mercury__char__is_base_digit_2_p_0(mercury__parsing_utils__Var_24, mercury__parsing_utils__C_54);
                }
                if (mercury__parsing_utils__succeeded)
                {
                  {
                    mercury__parsing_utils__succeeded = mercury__parsing_utils__digits_2_5_p_0(mercury__parsing_utils__Var_24, mercury__parsing_utils__Src_5, mercury__parsing_utils__STATE_VARIABLE_PS_13_56, &mercury__parsing_utils__STATE_VARIABLE_PS_25_25);
                  }
                  if (mercury__parsing_utils__succeeded)
                  {
                    mercury__parsing_utils__Var_26 = (MR_String) "eE";
                    {
                      mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__Var_11, mercury__parsing_utils__STATE_VARIABLE_PS_25_25, &mercury__parsing_utils__STATE_VARIABLE_PS_27_27);
                    }
                    if (mercury__parsing_utils__succeeded)
                    {
{
#define MR_PROC_LABEL mercury__parsing_utils__float_literal_as_string_4_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__parsing_utils__Var_26 ;
	Ch =  mercury__parsing_utils__Var_11 ;
		{

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
                    }
                    if (mercury__parsing_utils__succeeded)
                    {
                      MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_28_28;
                      MR_Char mercury__parsing_utils__C_77;
                      MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_13_79;
                      MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_9_70;
                      MR_Char mercury__parsing_utils__Char_69;

                      {
                        mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__Char_69, mercury__parsing_utils__STATE_VARIABLE_PS_27_27, &mercury__parsing_utils__STATE_VARIABLE_PS_9_70);
                      }
                      if (mercury__parsing_utils__succeeded)
                        switch (mercury__parsing_utils__Char_69) {
                          default:
                            mercury__parsing_utils__succeeded = MR_FALSE;
                            break;
                          case (MR_Char) 43:
                            mercury__parsing_utils__succeeded = MR_TRUE;
                            break;
                          case (MR_Char) 45:
                            mercury__parsing_utils__succeeded = MR_TRUE;
                            break;
                        }
                      if (mercury__parsing_utils__succeeded)
                        mercury__parsing_utils__STATE_VARIABLE_PS_28_28 = mercury__parsing_utils__STATE_VARIABLE_PS_9_70;
                      else
                        mercury__parsing_utils__STATE_VARIABLE_PS_28_28 = mercury__parsing_utils__STATE_VARIABLE_PS_27_27;
                      {
                        mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__C_77, mercury__parsing_utils__STATE_VARIABLE_PS_28_28, &mercury__parsing_utils__STATE_VARIABLE_PS_13_79);
                      }
                      if (mercury__parsing_utils__succeeded)
                      {
                        {
                          mercury__parsing_utils__succeeded = mercury__char__is_base_digit_2_p_0((MR_Integer) 10, mercury__parsing_utils__C_77);
                        }
                        if (mercury__parsing_utils__succeeded)
                          {
                            mercury__parsing_utils__succeeded = mercury__parsing_utils__digits_2_5_p_0((MR_Integer) 10, mercury__parsing_utils__Src_5, mercury__parsing_utils__STATE_VARIABLE_PS_13_79, &mercury__parsing_utils__STATE_VARIABLE_PS_31_31);
                          }
                      }
                    }
                    else
                    {
                      mercury__parsing_utils__STATE_VARIABLE_PS_31_31 = mercury__parsing_utils__STATE_VARIABLE_PS_25_25;
                      mercury__parsing_utils__succeeded = MR_TRUE;
                    }
                    if (mercury__parsing_utils__succeeded)
                    {
                      mercury__parsing_utils__Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 0)));
                      mercury__parsing_utils__Var_95 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 1)));
                      mercury__parsing_utils__SkipWS0_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 2)));
                      mercury__parsing_utils__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 3)));
                      mercury__parsing_utils__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 4)));
{
#define MR_PROC_LABEL mercury__parsing_utils__float_literal_as_string_4_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_93 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_89  = SkipWS;
}
                      mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_89, (MR_Integer) 1)));
                      {
                        mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_89), ((MR_Box) (mercury__parsing_utils__Src_5)), &mercury__parsing_utils__conv2_Var_90, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_31_31)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_15);
                      }
                      if (mercury__parsing_utils__succeeded)
                      {
                        *mercury__parsing_utils__STATE_VARIABLE_PS_15 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_15);
                        mercury__parsing_utils__succeeded = MR_TRUE;
                      }
                      if (mercury__parsing_utils__succeeded)
                        {
                          mercury__parsing_utils__succeeded = mercury__parsing_utils__input_substring_4_p_0(mercury__parsing_utils__Src_5, mercury__parsing_utils__STATE_VARIABLE_PS_0_14, mercury__parsing_utils__STATE_VARIABLE_PS_31_31, mercury__parsing_utils__FloatStr_6);
                        }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return mercury__parsing_utils__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__parsing_utils__digits_2_5_p_0(
  MR_Integer mercury__parsing_utils__Base_6,
  MR_Word mercury__parsing_utils__Src_7,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_11,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__parsing_utils__succeeded;
      MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_13_13;
      MR_Char mercury__parsing_utils__C_9;

      mercury__private_builtin__dummy_var = (MR_Integer) 0;
      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_7, &mercury__parsing_utils__C_9, mercury__parsing_utils__STATE_VARIABLE_PS_0_11, &mercury__parsing_utils__STATE_VARIABLE_PS_13_13);
      }
      if (mercury__parsing_utils__succeeded)
        {
          mercury__parsing_utils__succeeded = mercury__char__is_base_digit_2_p_0(mercury__parsing_utils__Base_6, mercury__parsing_utils__C_9);
        }
      if (mercury__parsing_utils__succeeded)
      {
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__parsing_utils__next_value_of_STATE_VARIABLE_PS_0_11 = mercury__parsing_utils__STATE_VARIABLE_PS_13_13;

          mercury__parsing_utils__STATE_VARIABLE_PS_0_11 = mercury__parsing_utils__next_value_of_STATE_VARIABLE_PS_0_11;
        }
        continue;
      }
      else
      {
        *mercury__parsing_utils__STATE_VARIABLE_PS_12 = mercury__parsing_utils__STATE_VARIABLE_PS_0_11;
        mercury__parsing_utils__succeeded = MR_TRUE;
      }
      return mercury__parsing_utils__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__eof_4_p_0(
  MR_Word mercury__parsing_utils__Src_5,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_8,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_9)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Integer mercury__parsing_utils__Var_15;
    MR_String mercury__parsing_utils__Var_11;
    MR_Word mercury__parsing_utils__Var_12;
    MR_Word mercury__parsing_utils__Var_13;
    MR_Word mercury__parsing_utils__Var_14;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    *mercury__parsing_utils__STATE_VARIABLE_PS_9 = mercury__parsing_utils__STATE_VARIABLE_PS_0_8;
    mercury__parsing_utils__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 0)));
    mercury__parsing_utils__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 1)));
    mercury__parsing_utils__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 2)));
    mercury__parsing_utils__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 3)));
    mercury__parsing_utils__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 4)));
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__STATE_VARIABLE_PS_0_8 == mercury__parsing_utils__Var_15);
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__skip_to_eol_4_p_0(
  MR_Word mercury__parsing_utils__Src_5,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_9,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__parsing_utils__succeeded;
      MR_Char mercury__parsing_utils__C_7;
      MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_11_11;

      mercury__private_builtin__dummy_var = (MR_Integer) 0;
      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__C_7, mercury__parsing_utils__STATE_VARIABLE_PS_0_9, &mercury__parsing_utils__STATE_VARIABLE_PS_11_11);
      }
      if (mercury__parsing_utils__succeeded)
      {
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__C_7 == (MR_Char) 10);
        if (mercury__parsing_utils__succeeded)
        {
          *mercury__parsing_utils__STATE_VARIABLE_PS_10 = mercury__parsing_utils__STATE_VARIABLE_PS_11_11;
          mercury__parsing_utils__succeeded = MR_TRUE;
        }
        else
        {
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__parsing_utils__next_value_of_STATE_VARIABLE_PS_0_9 = mercury__parsing_utils__STATE_VARIABLE_PS_11_11;

            mercury__parsing_utils__STATE_VARIABLE_PS_0_9 = mercury__parsing_utils__next_value_of_STATE_VARIABLE_PS_0_9;
          }
          continue;
        }
      }
      return mercury__parsing_utils__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__whitespace_4_p_0(
  MR_Word mercury__parsing_utils__Src_5,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_9,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__parsing_utils__succeeded;
      MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_11_11;
      MR_Char mercury__parsing_utils__C_7;

      mercury__private_builtin__dummy_var = (MR_Integer) 0;
      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__C_7, mercury__parsing_utils__STATE_VARIABLE_PS_0_9, &mercury__parsing_utils__STATE_VARIABLE_PS_11_11);
      }
      if (mercury__parsing_utils__succeeded)
        {
          mercury__parsing_utils__succeeded = mercury__char__is_whitespace_1_p_0(mercury__parsing_utils__C_7);
        }
      if (mercury__parsing_utils__succeeded)
      {
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__parsing_utils__next_value_of_STATE_VARIABLE_PS_0_9 = mercury__parsing_utils__STATE_VARIABLE_PS_11_11;

          mercury__parsing_utils__STATE_VARIABLE_PS_0_9 = mercury__parsing_utils__next_value_of_STATE_VARIABLE_PS_0_9;
        }
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
	if (SUCCESS_INDICATOR) {
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__parsing_utils__succeeded)
        {
          *mercury__parsing_utils__STATE_VARIABLE_PS_10 = mercury__parsing_utils__STATE_VARIABLE_PS_0_9;
          mercury__parsing_utils__succeeded = MR_TRUE;
        }
      }
      return mercury__parsing_utils__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__identifier_6_p_0(
  MR_String mercury__parsing_utils__InitIdChars_7,
  MR_String mercury__parsing_utils__IdChars_8,
  MR_Word mercury__parsing_utils__Src_9,
  MR_String * mercury__parsing_utils__Identifier_10,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_16,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_17)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Char mercury__parsing_utils__Var_13;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_19_19;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_21_21;
    MR_Word mercury__parsing_utils__SkipWS_43;
    MR_Word mercury__parsing_utils__SkipWS0_47;
    MR_Integer mercury__parsing_utils__Var_48;
    MR_String mercury__parsing_utils__Var_49;
    MR_Word mercury__parsing_utils__Var_50;
    MR_Word mercury__parsing_utils__Var_51;
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box mercury__parsing_utils__conv2_Var_44;
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_17;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_9, &mercury__parsing_utils__Var_13, mercury__parsing_utils__STATE_VARIABLE_PS_0_16, &mercury__parsing_utils__STATE_VARIABLE_PS_19_19);
    }
    if (mercury__parsing_utils__succeeded)
    {
{
#define MR_PROC_LABEL mercury__parsing_utils__identifier_6_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__parsing_utils__InitIdChars_7 ;
	Ch =  mercury__parsing_utils__Var_13 ;
		{

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__parsing_utils__succeeded)
      {
        {
          mercury__parsing_utils__succeeded = mercury__parsing_utils__identifier_2_5_p_0(mercury__parsing_utils__IdChars_8, mercury__parsing_utils__Src_9, mercury__parsing_utils__STATE_VARIABLE_PS_19_19, &mercury__parsing_utils__STATE_VARIABLE_PS_21_21);
        }
        if (mercury__parsing_utils__succeeded)
        {
          mercury__parsing_utils__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 0)));
          mercury__parsing_utils__Var_49 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 1)));
          mercury__parsing_utils__SkipWS0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 2)));
          mercury__parsing_utils__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 3)));
          mercury__parsing_utils__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 4)));
{
#define MR_PROC_LABEL mercury__parsing_utils__identifier_6_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_47 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_43  = SkipWS;
}
          mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_43, (MR_Integer) 1)));
          {
            mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_43), ((MR_Box) (mercury__parsing_utils__Src_9)), &mercury__parsing_utils__conv2_Var_44, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_21_21)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_17);
          }
          if (mercury__parsing_utils__succeeded)
          {
            *mercury__parsing_utils__STATE_VARIABLE_PS_17 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_17);
            mercury__parsing_utils__succeeded = MR_TRUE;
          }
          if (mercury__parsing_utils__succeeded)
            {
              mercury__parsing_utils__succeeded = mercury__parsing_utils__input_substring_4_p_0(mercury__parsing_utils__Src_9, mercury__parsing_utils__STATE_VARIABLE_PS_0_16, mercury__parsing_utils__STATE_VARIABLE_PS_21_21, mercury__parsing_utils__Identifier_10);
            }
        }
      }
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__identifier_2_5_p_0(
  MR_String mercury__parsing_utils__IdChars_6,
  MR_Word mercury__parsing_utils__Src_7,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_11,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__parsing_utils__succeeded;
      MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_13_13;
      MR_Char mercury__parsing_utils__Var_9;

      mercury__private_builtin__dummy_var = (MR_Integer) 0;
      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_7, &mercury__parsing_utils__Var_9, mercury__parsing_utils__STATE_VARIABLE_PS_0_11, &mercury__parsing_utils__STATE_VARIABLE_PS_13_13);
      }
      if (mercury__parsing_utils__succeeded)
      {
{
#define MR_PROC_LABEL mercury__parsing_utils__identifier_2_5_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__parsing_utils__IdChars_6 ;
	Ch =  mercury__parsing_utils__Var_9 ;
		{

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
      }
      if (mercury__parsing_utils__succeeded)
      {
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__parsing_utils__next_value_of_STATE_VARIABLE_PS_0_11 = mercury__parsing_utils__STATE_VARIABLE_PS_13_13;

          mercury__parsing_utils__STATE_VARIABLE_PS_0_11 = mercury__parsing_utils__next_value_of_STATE_VARIABLE_PS_0_11;
        }
        continue;
      }
      else
      {
        *mercury__parsing_utils__STATE_VARIABLE_PS_12 = mercury__parsing_utils__STATE_VARIABLE_PS_0_11;
        mercury__parsing_utils__succeeded = MR_TRUE;
      }
      return mercury__parsing_utils__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__ikeyword_6_p_0(
  MR_String mercury__parsing_utils__IdChars_7,
  MR_String mercury__parsing_utils__Keyword_8,
  MR_Word mercury__parsing_utils__Src_9,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_13,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_14)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_15_15;
    MR_Word mercury__parsing_utils__SkipWS_27;
    MR_Word mercury__parsing_utils__SkipWS0_31;
    MR_Char mercury__parsing_utils__Var_11;
    MR_Integer mercury__parsing_utils__Var_12;
    MR_Integer mercury__parsing_utils__Var_32;
    MR_String mercury__parsing_utils__Var_33;
    MR_Word mercury__parsing_utils__Var_34;
    MR_Word mercury__parsing_utils__Var_35;
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box mercury__parsing_utils__conv2_Var_28;
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_14;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__imatch_string_4_p_0(mercury__parsing_utils__Keyword_8, mercury__parsing_utils__Src_9, mercury__parsing_utils__STATE_VARIABLE_PS_0_13, &mercury__parsing_utils__STATE_VARIABLE_PS_15_15);
    }
    if (mercury__parsing_utils__succeeded)
    {
      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_9, &mercury__parsing_utils__Var_11, mercury__parsing_utils__STATE_VARIABLE_PS_15_15, &mercury__parsing_utils__Var_12);
      }
      if (mercury__parsing_utils__succeeded)
      {
{
#define MR_PROC_LABEL mercury__parsing_utils__ikeyword_6_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__parsing_utils__IdChars_7 ;
	Ch =  mercury__parsing_utils__Var_11 ;
		{

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
      }
      mercury__parsing_utils__succeeded = !(mercury__parsing_utils__succeeded);
      if (mercury__parsing_utils__succeeded)
      {
        mercury__parsing_utils__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 0)));
        mercury__parsing_utils__Var_33 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 1)));
        mercury__parsing_utils__SkipWS0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 2)));
        mercury__parsing_utils__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 3)));
        mercury__parsing_utils__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 4)));
{
#define MR_PROC_LABEL mercury__parsing_utils__ikeyword_6_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_31 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_27  = SkipWS;
}
        mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_27, (MR_Integer) 1)));
        {
          mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_27), ((MR_Box) (mercury__parsing_utils__Src_9)), &mercury__parsing_utils__conv2_Var_28, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_15_15)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_14);
        }
        if (mercury__parsing_utils__succeeded)
        {
          *mercury__parsing_utils__STATE_VARIABLE_PS_14 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_14);
          mercury__parsing_utils__succeeded = MR_TRUE;
        }
      }
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__imatch_string_4_p_0(
  MR_String mercury__parsing_utils__MatchStr_5,
  MR_Word mercury__parsing_utils__Src_6,
  MR_Integer mercury__parsing_utils__PS_7,
  MR_Integer * mercury__parsing_utils__HeadVar__4_4)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Integer mercury__parsing_utils__N_8;
    MR_Word mercury__parsing_utils__TypeCtorInfo_11_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer mercury__parsing_utils__Var_9;
    MR_Integer mercury__parsing_utils__Var_10;
    MR_Integer mercury__parsing_utils__Var_11;
    MR_String mercury__parsing_utils__Var_13;
    MR_Word mercury__parsing_utils__MutVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 3)));
    MR_Integer mercury__parsing_utils__OS0_24;
    MR_Integer mercury__parsing_utils__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 0)));
    MR_String mercury__parsing_utils__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 1)));
    MR_Word mercury__parsing_utils__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 2)));
    MR_Word mercury__parsing_utils__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 4)));
    MR_Box mercury__parsing_utils__conv0_OS0_24;
    MR_Word mercury__parsing_utils__Var_14;
    MR_Word mercury__parsing_utils__Var_15;
    MR_Word mercury__parsing_utils__Var_16;

    {
      mercury__mutvar__get_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_11_29, mercury__parsing_utils__MutVar_23, &mercury__parsing_utils__conv0_OS0_24);
    }
    mercury__parsing_utils__OS0_24 = ((MR_Integer) mercury__parsing_utils__conv0_OS0_24);
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__PS_7 > mercury__parsing_utils__OS0_24);
    if (mercury__parsing_utils__succeeded)
      {
        mercury__mutvar__set_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_11_29, mercury__parsing_utils__MutVar_23, ((MR_Box) (mercury__parsing_utils__PS_7)));
      }
    else
    {
    }
{
#define MR_PROC_LABEL mercury__parsing_utils__imatch_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__parsing_utils__MatchStr_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__N_8  = Length;
}
    mercury__parsing_utils__Var_9 = (mercury__parsing_utils__PS_7 + mercury__parsing_utils__N_8);
    mercury__parsing_utils__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 0)));
    mercury__parsing_utils__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 1)));
    mercury__parsing_utils__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 2)));
    mercury__parsing_utils__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 3)));
    mercury__parsing_utils__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 4)));
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__Var_9 <= mercury__parsing_utils__Var_10);
    if (mercury__parsing_utils__succeeded)
    {
      mercury__parsing_utils__Var_11 = (MR_Integer) 0;
      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__imatch_string_2_5_p_0(mercury__parsing_utils__N_8, mercury__parsing_utils__Var_11, mercury__parsing_utils__MatchStr_5, mercury__parsing_utils__PS_7, mercury__parsing_utils__Var_13);
      }
    }
    if (mercury__parsing_utils__succeeded)
    {
      *mercury__parsing_utils__HeadVar__4_4 = (mercury__parsing_utils__PS_7 + mercury__parsing_utils__N_8);
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    return mercury__parsing_utils__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__parsing_utils__imatch_string_2_5_p_0(
  MR_Integer mercury__parsing_utils__N_6,
  MR_Integer mercury__parsing_utils__I_7,
  MR_String mercury__parsing_utils__MatchStr_8,
  MR_Integer mercury__parsing_utils__Offset_9,
  MR_String mercury__parsing_utils__Str_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__parsing_utils__succeeded = (mercury__parsing_utils__I_7 < mercury__parsing_utils__N_6);

      if (mercury__parsing_utils__succeeded)
      {
        MR_Integer mercury__parsing_utils__CodeUnit1_11;
        MR_Integer mercury__parsing_utils__CodeUnit2_12;
        MR_Char mercury__parsing_utils__Chr1_13;
        MR_Char mercury__parsing_utils__Chr2_14;
        MR_Integer mercury__parsing_utils__Var_15;
        MR_Char mercury__parsing_utils__Var_16;
        MR_Integer mercury__parsing_utils__Var_17;
        MR_Integer mercury__parsing_utils__Var_18;
        MR_Char mercury__parsing_utils__Var_19;
        MR_Char mercury__parsing_utils__V_5_24;
        MR_Char mercury__parsing_utils__V_5_29;

{
#define MR_PROC_LABEL mercury__parsing_utils__imatch_string_2_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__parsing_utils__MatchStr_8 ;
	Index =  mercury__parsing_utils__I_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__CodeUnit1_11  = Code;
}
        mercury__parsing_utils__Var_15 = (mercury__parsing_utils__Offset_9 + mercury__parsing_utils__I_7);
{
#define MR_PROC_LABEL mercury__parsing_utils__imatch_string_2_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__parsing_utils__Str_10 ;
	Index =  mercury__parsing_utils__Var_15 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__CodeUnit2_12  = Code;
}
        {
          mercury__char__det_from_int_2_p_0(mercury__parsing_utils__CodeUnit1_11, &mercury__parsing_utils__Chr1_13);
        }
        {
          mercury__char__det_from_int_2_p_0(mercury__parsing_utils__CodeUnit2_12, &mercury__parsing_utils__Chr2_14);
        }
        {
          mercury__parsing_utils__succeeded = mercury__char__lower_upper_2_p_0(mercury__parsing_utils__Chr1_13, &mercury__parsing_utils__V_5_24);
        }
        if (mercury__parsing_utils__succeeded)
          mercury__parsing_utils__Var_16 = mercury__parsing_utils__V_5_24;
        else
          mercury__parsing_utils__Var_16 = mercury__parsing_utils__Chr1_13;
        {
          mercury__parsing_utils__succeeded = mercury__char__lower_upper_2_p_0(mercury__parsing_utils__Chr2_14, &mercury__parsing_utils__V_5_29);
        }
        if (mercury__parsing_utils__succeeded)
          mercury__parsing_utils__Var_19 = mercury__parsing_utils__V_5_29;
        else
          mercury__parsing_utils__Var_19 = mercury__parsing_utils__Chr2_14;
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__Var_16 == mercury__parsing_utils__Var_19);
        if (mercury__parsing_utils__succeeded)
        {
          mercury__parsing_utils__Var_18 = (MR_Integer) 1;
          mercury__parsing_utils__Var_17 = (mercury__parsing_utils__I_7 + mercury__parsing_utils__Var_18);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__parsing_utils__next_value_of_I_7 = mercury__parsing_utils__Var_17;

            mercury__parsing_utils__I_7 = mercury__parsing_utils__next_value_of_I_7;
          }
          continue;
        }
      }
      else
        mercury__parsing_utils__succeeded = MR_TRUE;
      return mercury__parsing_utils__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__keyword_6_p_0(
  MR_String mercury__parsing_utils__IdChars_7,
  MR_String mercury__parsing_utils__Keyword_8,
  MR_Word mercury__parsing_utils__Src_9,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_13,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_14)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_15_15;
    MR_Word mercury__parsing_utils__SkipWS_27;
    MR_Word mercury__parsing_utils__SkipWS0_31;
    MR_Char mercury__parsing_utils__Var_11;
    MR_Integer mercury__parsing_utils__Var_12;
    MR_Integer mercury__parsing_utils__Var_32;
    MR_String mercury__parsing_utils__Var_33;
    MR_Word mercury__parsing_utils__Var_34;
    MR_Word mercury__parsing_utils__Var_35;
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box mercury__parsing_utils__conv2_Var_28;
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_14;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__match_string_4_p_0(mercury__parsing_utils__Keyword_8, mercury__parsing_utils__Src_9, mercury__parsing_utils__STATE_VARIABLE_PS_0_13, &mercury__parsing_utils__STATE_VARIABLE_PS_15_15);
    }
    if (mercury__parsing_utils__succeeded)
    {
      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_9, &mercury__parsing_utils__Var_11, mercury__parsing_utils__STATE_VARIABLE_PS_15_15, &mercury__parsing_utils__Var_12);
      }
      if (mercury__parsing_utils__succeeded)
      {
{
#define MR_PROC_LABEL mercury__parsing_utils__keyword_6_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__parsing_utils__IdChars_7 ;
	Ch =  mercury__parsing_utils__Var_11 ;
		{

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
      }
      mercury__parsing_utils__succeeded = !(mercury__parsing_utils__succeeded);
      if (mercury__parsing_utils__succeeded)
      {
        mercury__parsing_utils__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 0)));
        mercury__parsing_utils__Var_33 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 1)));
        mercury__parsing_utils__SkipWS0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 2)));
        mercury__parsing_utils__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 3)));
        mercury__parsing_utils__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 4)));
{
#define MR_PROC_LABEL mercury__parsing_utils__keyword_6_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_31 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_27  = SkipWS;
}
        mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_27, (MR_Integer) 1)));
        {
          mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_27), ((MR_Box) (mercury__parsing_utils__Src_9)), &mercury__parsing_utils__conv2_Var_28, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_15_15)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_14);
        }
        if (mercury__parsing_utils__succeeded)
        {
          *mercury__parsing_utils__STATE_VARIABLE_PS_14 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_14);
          mercury__parsing_utils__succeeded = MR_TRUE;
        }
      }
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__punct_5_p_0(
  MR_String mercury__parsing_utils__Punct_6,
  MR_Word mercury__parsing_utils__Src_7,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_9,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_10)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_11_11;
    MR_Word mercury__parsing_utils__SkipWS_16;
    MR_Word mercury__parsing_utils__SkipWS0_20;
    MR_Integer mercury__parsing_utils__Var_21;
    MR_String mercury__parsing_utils__Var_22;
    MR_Word mercury__parsing_utils__Var_23;
    MR_Word mercury__parsing_utils__Var_24;
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box mercury__parsing_utils__conv2_Var_17;
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_10;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__match_string_4_p_0(mercury__parsing_utils__Punct_6, mercury__parsing_utils__Src_7, mercury__parsing_utils__STATE_VARIABLE_PS_0_9, &mercury__parsing_utils__STATE_VARIABLE_PS_11_11);
    }
    if (mercury__parsing_utils__succeeded)
    {
      mercury__parsing_utils__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 0)));
      mercury__parsing_utils__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 1)));
      mercury__parsing_utils__SkipWS0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 2)));
      mercury__parsing_utils__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 3)));
      mercury__parsing_utils__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 4)));
{
#define MR_PROC_LABEL mercury__parsing_utils__punct_5_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_20 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_16  = SkipWS;
}
      mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_16, (MR_Integer) 1)));
      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_16), ((MR_Box) (mercury__parsing_utils__Src_7)), &mercury__parsing_utils__conv2_Var_17, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_11_11)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_10);
      }
      if (mercury__parsing_utils__succeeded)
      {
        *mercury__parsing_utils__STATE_VARIABLE_PS_10 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_10);
        mercury__parsing_utils__succeeded = MR_TRUE;
      }
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__match_string_4_p_0(
  MR_String mercury__parsing_utils__MatchStr_5,
  MR_Word mercury__parsing_utils__Src_6,
  MR_Integer mercury__parsing_utils__PS_7,
  MR_Integer * mercury__parsing_utils__HeadVar__4_4)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Integer mercury__parsing_utils__N_8;
    MR_Word mercury__parsing_utils__TypeCtorInfo_11_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer mercury__parsing_utils__Var_9;
    MR_Integer mercury__parsing_utils__Var_10;
    MR_Integer mercury__parsing_utils__Var_11;
    MR_String mercury__parsing_utils__Var_13;
    MR_Word mercury__parsing_utils__MutVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 3)));
    MR_Integer mercury__parsing_utils__OS0_24;
    MR_Integer mercury__parsing_utils__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 0)));
    MR_String mercury__parsing_utils__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 1)));
    MR_Word mercury__parsing_utils__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 2)));
    MR_Word mercury__parsing_utils__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 4)));
    MR_Box mercury__parsing_utils__conv0_OS0_24;
    MR_Word mercury__parsing_utils__Var_14;
    MR_Word mercury__parsing_utils__Var_15;
    MR_Word mercury__parsing_utils__Var_16;

    {
      mercury__mutvar__get_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_11_29, mercury__parsing_utils__MutVar_23, &mercury__parsing_utils__conv0_OS0_24);
    }
    mercury__parsing_utils__OS0_24 = ((MR_Integer) mercury__parsing_utils__conv0_OS0_24);
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__PS_7 > mercury__parsing_utils__OS0_24);
    if (mercury__parsing_utils__succeeded)
      {
        mercury__mutvar__set_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_11_29, mercury__parsing_utils__MutVar_23, ((MR_Box) (mercury__parsing_utils__PS_7)));
      }
    else
    {
    }
{
#define MR_PROC_LABEL mercury__parsing_utils__match_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__parsing_utils__MatchStr_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__N_8  = Length;
}
    mercury__parsing_utils__Var_9 = (mercury__parsing_utils__PS_7 + mercury__parsing_utils__N_8);
    mercury__parsing_utils__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 0)));
    mercury__parsing_utils__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 1)));
    mercury__parsing_utils__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 2)));
    mercury__parsing_utils__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 3)));
    mercury__parsing_utils__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 4)));
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__Var_9 <= mercury__parsing_utils__Var_10);
    if (mercury__parsing_utils__succeeded)
    {
      mercury__parsing_utils__Var_11 = (MR_Integer) 0;
      {
        mercury__parsing_utils__succeeded = mercury__parsing_utils__match_string_2_5_p_0(mercury__parsing_utils__N_8, mercury__parsing_utils__Var_11, mercury__parsing_utils__MatchStr_5, mercury__parsing_utils__PS_7, mercury__parsing_utils__Var_13);
      }
    }
    if (mercury__parsing_utils__succeeded)
    {
      *mercury__parsing_utils__HeadVar__4_4 = (mercury__parsing_utils__PS_7 + mercury__parsing_utils__N_8);
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    return mercury__parsing_utils__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__parsing_utils__match_string_2_5_p_0(
  MR_Integer mercury__parsing_utils__N_6,
  MR_Integer mercury__parsing_utils__I_7,
  MR_String mercury__parsing_utils__MatchStr_8,
  MR_Integer mercury__parsing_utils__Offset_9,
  MR_String mercury__parsing_utils__Str_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__parsing_utils__succeeded = (mercury__parsing_utils__I_7 < mercury__parsing_utils__N_6);

      if (mercury__parsing_utils__succeeded)
      {
        MR_Integer mercury__parsing_utils__CodeUnit_11;
        MR_Integer mercury__parsing_utils__Var_12;
        MR_Integer mercury__parsing_utils__Var_13;
        MR_Integer mercury__parsing_utils__Var_14;
        MR_Integer mercury__parsing_utils__Var_15;

{
#define MR_PROC_LABEL mercury__parsing_utils__match_string_2_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__parsing_utils__MatchStr_8 ;
	Index =  mercury__parsing_utils__I_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__CodeUnit_11  = Code;
}
        mercury__parsing_utils__Var_12 = (mercury__parsing_utils__Offset_9 + mercury__parsing_utils__I_7);
{
#define MR_PROC_LABEL mercury__parsing_utils__match_string_2_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__parsing_utils__Str_10 ;
	Index =  mercury__parsing_utils__Var_12 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__Var_15  = Code;
}
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__CodeUnit_11 == mercury__parsing_utils__Var_15);
        if (mercury__parsing_utils__succeeded)
        {
          mercury__parsing_utils__Var_14 = (MR_Integer) 1;
          mercury__parsing_utils__Var_13 = (mercury__parsing_utils__I_7 + mercury__parsing_utils__Var_14);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__parsing_utils__next_value_of_I_7 = mercury__parsing_utils__Var_13;

            mercury__parsing_utils__I_7 = mercury__parsing_utils__next_value_of_I_7;
          }
          continue;
        }
      }
      else
        mercury__parsing_utils__succeeded = MR_TRUE;
      return mercury__parsing_utils__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__char_in_class_5_p_0(
  MR_String mercury__parsing_utils__CharClass_6,
  MR_Word mercury__parsing_utils__Src_7,
  MR_Char * mercury__parsing_utils__Char_8,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_10,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_11)
{
  {
    MR_bool mercury__parsing_utils__succeeded;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_7, mercury__parsing_utils__Char_8, mercury__parsing_utils__STATE_VARIABLE_PS_0_10, mercury__parsing_utils__STATE_VARIABLE_PS_11);
    }
    if (mercury__parsing_utils__succeeded)
    {
{
#define MR_PROC_LABEL mercury__parsing_utils__char_in_class_5_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__parsing_utils__CharClass_6 ;
	Ch =  *mercury__parsing_utils__Char_8 ;
		{

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__next_char_no_progress_4_p_0(
  MR_Word mercury__parsing_utils__Src_5,
  MR_Char * mercury__parsing_utils__Char_6,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_11,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_12)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Integer mercury__parsing_utils__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 0)));
    MR_String mercury__parsing_utils__Var_16 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 1)));
    MR_Word mercury__parsing_utils__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 2)));
    MR_Word mercury__parsing_utils__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 3)));
    MR_Word mercury__parsing_utils__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 4)));

    mercury__parsing_utils__succeeded = (mercury__parsing_utils__STATE_VARIABLE_PS_0_11 < mercury__parsing_utils__Var_13);
    if (mercury__parsing_utils__succeeded)
    {
{
#define MR_PROC_LABEL mercury__parsing_utils__next_char_no_progress_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__parsing_utils__Var_16 ;
	Index =  mercury__parsing_utils__STATE_VARIABLE_PS_0_11 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__parsing_utils__STATE_VARIABLE_PS_12  = NextIndex;
	 *mercury__parsing_utils__Char_6  = Ch;
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
    }
    return mercury__parsing_utils__succeeded;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__next_char_4_p_0(
  MR_Word mercury__parsing_utils__Src_5,
  MR_Char * mercury__parsing_utils__Char_6,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_11,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_12)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Word mercury__parsing_utils__TypeCtorInfo_11_37;
    MR_Integer mercury__parsing_utils__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 0)));
    MR_String mercury__parsing_utils__Var_16 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 1)));
    MR_Word mercury__parsing_utils__MutVar_31;
    MR_Integer mercury__parsing_utils__OS0_32;
    MR_Word mercury__parsing_utils__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 2)));
    MR_Word mercury__parsing_utils__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 3)));
    MR_Word mercury__parsing_utils__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 4)));
    MR_Integer mercury__parsing_utils__Var_33;
    MR_String mercury__parsing_utils__Var_34;
    MR_Word mercury__parsing_utils__Var_35;
    MR_Word mercury__parsing_utils__Var_36;
    MR_Box mercury__parsing_utils__conv0_OS0_32;

    mercury__parsing_utils__succeeded = (mercury__parsing_utils__STATE_VARIABLE_PS_0_11 < mercury__parsing_utils__Var_13);
    if (mercury__parsing_utils__succeeded)
    {
{
#define MR_PROC_LABEL mercury__parsing_utils__next_char_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__parsing_utils__Var_16 ;
	Index =  mercury__parsing_utils__STATE_VARIABLE_PS_0_11 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__parsing_utils__STATE_VARIABLE_PS_12  = NextIndex;
	 *mercury__parsing_utils__Char_6  = Ch;
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__parsing_utils__succeeded)
      {
        mercury__parsing_utils__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 0)));
        mercury__parsing_utils__Var_34 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 1)));
        mercury__parsing_utils__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 2)));
        mercury__parsing_utils__MutVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 3)));
        mercury__parsing_utils__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 4)));
        mercury__parsing_utils__TypeCtorInfo_11_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__mutvar__get_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_11_37, mercury__parsing_utils__MutVar_31, &mercury__parsing_utils__conv0_OS0_32);
        }
        mercury__parsing_utils__OS0_32 = ((MR_Integer) mercury__parsing_utils__conv0_OS0_32);
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__STATE_VARIABLE_PS_0_11 > mercury__parsing_utils__OS0_32);
        if (mercury__parsing_utils__succeeded)
          {
            mercury__mutvar__set_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_11_37, mercury__parsing_utils__MutVar_31, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_11)));
          }
        else
        {
        }
        mercury__parsing_utils__succeeded = MR_TRUE;
      }
    }
    return mercury__parsing_utils__succeeded;
  }
}

void MR_CALL 
mercury__parsing_utils__offset_to_line_number_and_position_4_p_0(
  MR_ArrayPtr mercury__parsing_utils__LineNos_5,
  MR_Integer mercury__parsing_utils__Offset_6,
  MR_Integer * mercury__parsing_utils__LineNo_7,
  MR_Integer * mercury__parsing_utils__Pos_8)
{
  {
    MR_Integer mercury__parsing_utils__Hi_10;
    MR_Integer mercury__parsing_utils__Var_11;
    MR_Word mercury__parsing_utils__TypeCtorInfo_13_16;

{
#define MR_PROC_LABEL mercury__parsing_utils__offset_to_line_number_and_position_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__parsing_utils__LineNos_5 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__Var_11  = Max;
}
    mercury__parsing_utils__Hi_10 = (mercury__parsing_utils__Var_11 - (MR_Integer) 1);
    {
      mercury__parsing_utils__offset_to_line_number_and_position_2_6_p_0(mercury__parsing_utils__LineNos_5, (MR_Integer) 0, mercury__parsing_utils__Hi_10, mercury__parsing_utils__Offset_6, mercury__parsing_utils__LineNo_7, mercury__parsing_utils__Pos_8);
    }
  }
}

MR_ArrayPtr MR_CALL 
mercury__parsing_utils__src_to_line_numbers_1_f_0(
  MR_Word mercury__parsing_utils__Src_3)
{
  {
    MR_ArrayPtr mercury__parsing_utils__LineNos_4;
    MR_Word mercury__parsing_utils__TypeCtorInfo_13_13;
    MR_String mercury__parsing_utils__Str_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_3, (MR_Integer) 1)));
    MR_Word mercury__parsing_utils__RevLineNosList_6;
    MR_Word mercury__parsing_utils__Var_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Integer mercury__parsing_utils__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_3, (MR_Integer) 0)));
    MR_Word mercury__parsing_utils__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_3, (MR_Integer) 2)));
    MR_Word mercury__parsing_utils__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_3, (MR_Integer) 3)));
    MR_Word mercury__parsing_utils__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_3, (MR_Integer) 4)));
    MR_ArrayPtr mercury__parsing_utils__conv0_LineNos_4;

    {
      mercury__parsing_utils__src_to_line_numbers_loop_4_p_0(mercury__parsing_utils__Str_5, (MR_Integer) 0, mercury__parsing_utils__Var_8, &mercury__parsing_utils__RevLineNosList_6);
    }
    mercury__parsing_utils__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__parsing_utils__conv0_LineNos_4 = mercury__array__from_reverse_list_1_f_0(mercury__parsing_utils__TypeCtorInfo_13_13, mercury__parsing_utils__RevLineNosList_6);
    }
    mercury__parsing_utils__LineNos_4 = (MR_ArrayPtr) mercury__parsing_utils__conv0_LineNos_4;
    return mercury__parsing_utils__LineNos_4;
  }
}

MR_bool MR_CALL 
mercury__parsing_utils__input_substring_4_p_0(
  MR_Word mercury__parsing_utils__Src_5,
  MR_Integer mercury__parsing_utils__Start_6,
  MR_Integer mercury__parsing_utils__EndPlusOne_7,
  MR_String * mercury__parsing_utils__Substring_8)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Word mercury__parsing_utils__TypeCtorInfo_11_31;
    MR_Integer mercury__parsing_utils__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 0)));
    MR_String mercury__parsing_utils__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 1)));
    MR_Word mercury__parsing_utils__MutVar_25;
    MR_Integer mercury__parsing_utils__OS0_26;
    MR_Word mercury__parsing_utils__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 2)));
    MR_Word mercury__parsing_utils__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 3)));
    MR_Word mercury__parsing_utils__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 4)));
    MR_Integer mercury__parsing_utils__Var_27;
    MR_String mercury__parsing_utils__Var_28;
    MR_Word mercury__parsing_utils__Var_29;
    MR_Word mercury__parsing_utils__Var_30;
    MR_Box mercury__parsing_utils__conv0_OS0_26;

    mercury__parsing_utils__succeeded = (mercury__parsing_utils__EndPlusOne_7 <= mercury__parsing_utils__Var_9);
    if (mercury__parsing_utils__succeeded)
    {
{
#define MR_PROC_LABEL mercury__parsing_utils__input_substring_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__parsing_utils__Var_11 ;
	Start =  mercury__parsing_utils__Start_6 ;
	End =  mercury__parsing_utils__EndPlusOne_7 ;
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
	 *mercury__parsing_utils__Substring_8  = SubString;
}
      mercury__parsing_utils__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 0)));
      mercury__parsing_utils__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 1)));
      mercury__parsing_utils__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 2)));
      mercury__parsing_utils__MutVar_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 3)));
      mercury__parsing_utils__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 4)));
      mercury__parsing_utils__TypeCtorInfo_11_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      {
        mercury__mutvar__get_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_11_31, mercury__parsing_utils__MutVar_25, &mercury__parsing_utils__conv0_OS0_26);
      }
      mercury__parsing_utils__OS0_26 = ((MR_Integer) mercury__parsing_utils__conv0_OS0_26);
      mercury__parsing_utils__succeeded = (mercury__parsing_utils__Start_6 > mercury__parsing_utils__OS0_26);
      if (mercury__parsing_utils__succeeded)
        {
          mercury__mutvar__set_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_11_31, mercury__parsing_utils__MutVar_25, ((MR_Box) (mercury__parsing_utils__Start_6)));
        }
      else
      {
      }
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    return mercury__parsing_utils__succeeded;
  }
}

void MR_CALL 
mercury__parsing_utils__get_skip_whitespace_pred_2_p_0(
  MR_Word mercury__parsing_utils__Src_3,
  MR_Word * mercury__parsing_utils__SkipWS_4)
{
  {
    MR_Word mercury__parsing_utils__SkipWS0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_3, (MR_Integer) 2)));
    MR_Integer mercury__parsing_utils__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_3, (MR_Integer) 0)));
    MR_String mercury__parsing_utils__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_3, (MR_Integer) 1)));
    MR_Word mercury__parsing_utils__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_3, (MR_Integer) 3)));
    MR_Word mercury__parsing_utils__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_3, (MR_Integer) 4)));

{
#define MR_PROC_LABEL mercury__parsing_utils__get_skip_whitespace_pred_2_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_5 ;
		{

    SkipWS = SkipWS0;


		;}
#undef MR_PROC_LABEL
	 *mercury__parsing_utils__SkipWS_4  = SkipWS;
}
  }
}

void MR_CALL 
mercury__parsing_utils__current_offset_4_p_0(
  MR_Word mercury__parsing_utils___Src_5,
  MR_Integer * mercury__parsing_utils__Offset_6,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_8,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_9)
{
  {
    mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_117_114_114_101_110_116_95_111_102_102_115_101_116_95_95_91_49_93_95_48_4_p_0(mercury__parsing_utils__Offset_6, mercury__parsing_utils__STATE_VARIABLE_PS_0_8, mercury__parsing_utils__STATE_VARIABLE_PS_9);
  }
}

void MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_117_114_114_101_110_116_95_111_102_102_115_101_116_95_95_91_49_93_95_48_4_p_0(
  MR_Integer * mercury__parsing_utils__Offset_6,
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_8,
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_9)
{
  {
    *mercury__parsing_utils__Offset_6 = mercury__parsing_utils__STATE_VARIABLE_PS_0_8;
    *mercury__parsing_utils__STATE_VARIABLE_PS_9 = mercury__parsing_utils__STATE_VARIABLE_PS_0_8;
  }
}

void MR_CALL 
mercury__parsing_utils__input_string_3_p_0(
  MR_Word mercury__parsing_utils__Src_4,
  MR_String * mercury__parsing_utils__HeadVar__2_2,
  MR_Integer * mercury__parsing_utils__HeadVar__3_3)
{
  {
    MR_Word mercury__parsing_utils__Var_6;
    MR_Word mercury__parsing_utils__Var_7;
    MR_Word mercury__parsing_utils__Var_8;

    *mercury__parsing_utils__HeadVar__3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_4, (MR_Integer) 0)));
    *mercury__parsing_utils__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_4, (MR_Integer) 1)));
    mercury__parsing_utils__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_4, (MR_Integer) 2)));
    mercury__parsing_utils__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_4, (MR_Integer) 3)));
    mercury__parsing_utils__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_4, (MR_Integer) 4)));
  }
}

static MR_bool MR_CALL 
mercury__parsing_utils__new_src_and_ps_3_p_0_1(
  MR_Box mercury__parsing_utils__closure_arg,
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box * mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3,
  MR_Box * mercury__parsing_utils__wrapper_arg_4)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Box mercury__parsing_utils__closure = mercury__parsing_utils__closure_arg;
    MR_Integer mercury__parsing_utils__conv0_STATE_VARIABLE_PS_10;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__whitespace_4_p_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), ((MR_Integer) mercury__parsing_utils__wrapper_arg_3), &mercury__parsing_utils__conv0_STATE_VARIABLE_PS_10);
    }
    if (mercury__parsing_utils__succeeded)
    {
      *mercury__parsing_utils__wrapper_arg_4 = ((MR_Box) (mercury__parsing_utils__conv0_STATE_VARIABLE_PS_10));
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    return mercury__parsing_utils__succeeded;
  }
}

void MR_CALL 
mercury__parsing_utils__new_src_and_ps_3_p_0(
  MR_String mercury__parsing_utils__InputString_4,
  MR_Word * mercury__parsing_utils__Src_5,
  MR_Integer * mercury__parsing_utils__PS_6)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Word mercury__parsing_utils__SkipWS_16 = (MR_Word) &mercury__parsing_utils_scalar_common_3[2];
    MR_Word mercury__parsing_utils__TypeCtorInfo_16_24 = (MR_Word) &mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0;
    MR_Word mercury__parsing_utils__TypeCtorInfo_17_25;
    MR_Word mercury__parsing_utils__ErrorInfoMutVar_17;
    MR_Word mercury__parsing_utils__FurthestOffsetMutvar_18;
    MR_Word mercury__parsing_utils__Var_19 = (MR_Word) &mercury__parsing_utils_scalar_common_1[4];
    MR_Word mercury__parsing_utils__Var_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Integer mercury__parsing_utils__Var_23;

    {
      mercury__mutvar__new_mutvar_2_p_1(mercury__parsing_utils__TypeCtorInfo_16_24, ((MR_Box) (mercury__parsing_utils__Var_19)), &mercury__parsing_utils__ErrorInfoMutVar_17);
    }
    mercury__parsing_utils__TypeCtorInfo_17_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__mutvar__new_mutvar_2_p_1(mercury__parsing_utils__TypeCtorInfo_17_25, ((MR_Box) ((MR_Integer) 0)), &mercury__parsing_utils__FurthestOffsetMutvar_18);
    }
{
#define MR_PROC_LABEL mercury__parsing_utils__new_src_and_ps_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__parsing_utils__InputString_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__Var_23  = Length;
}
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *mercury__parsing_utils__Src_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parsing_utils__Var_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__parsing_utils__InputString_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__parsing_utils__SkipWS_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__parsing_utils__FurthestOffsetMutvar_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__parsing_utils__ErrorInfoMutVar_17));
    }
    *mercury__parsing_utils__PS_6 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
mercury__parsing_utils__parse_3_p_0_1(
  MR_Box mercury__parsing_utils__closure_arg,
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box * mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3,
  MR_Box * mercury__parsing_utils__wrapper_arg_4)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Box mercury__parsing_utils__closure = mercury__parsing_utils__closure_arg;
    MR_Integer mercury__parsing_utils__conv0_STATE_VARIABLE_PS_10;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__whitespace_4_p_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), ((MR_Integer) mercury__parsing_utils__wrapper_arg_3), &mercury__parsing_utils__conv0_STATE_VARIABLE_PS_10);
    }
    if (mercury__parsing_utils__succeeded)
    {
      *mercury__parsing_utils__wrapper_arg_4 = ((MR_Box) (mercury__parsing_utils__conv0_STATE_VARIABLE_PS_10));
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    return mercury__parsing_utils__succeeded;
  }
}

void MR_CALL 
mercury__parsing_utils__parse_3_p_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_8,
  MR_String mercury__parsing_utils__InputString_4,
  MR_Word mercury__parsing_utils__Parser_5,
  MR_Word * mercury__parsing_utils__Result_6)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Word mercury__parsing_utils__Src_18;
    MR_Word mercury__parsing_utils__SkipWS_50 = (MR_Word) &mercury__parsing_utils_scalar_common_3[1];
    MR_Word mercury__parsing_utils__TypeCtorInfo_16_58 = (MR_Word) &mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0;
    MR_Word mercury__parsing_utils__TypeCtorInfo_17_59;
    MR_Word mercury__parsing_utils__ErrorInfoMutVar_51;
    MR_Word mercury__parsing_utils__FurthestOffsetMutvar_52;
    MR_Word mercury__parsing_utils__Var_53 = (MR_Word) &mercury__parsing_utils_scalar_common_1[4];
    MR_Word mercury__parsing_utils__Var_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Integer mercury__parsing_utils__Var_57;
    MR_Box mercury__parsing_utils__Val_20;
    MR_Integer mercury__parsing_utils__Var_21;
    MR_bool MR_CALL (* mercury__parsing_utils__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box mercury__parsing_utils__conv2_Var_21;

    {
      mercury__mutvar__new_mutvar_2_p_1(mercury__parsing_utils__TypeCtorInfo_16_58, ((MR_Box) (mercury__parsing_utils__Var_53)), &mercury__parsing_utils__ErrorInfoMutVar_51);
    }
    mercury__parsing_utils__TypeCtorInfo_17_59 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__mutvar__new_mutvar_2_p_1(mercury__parsing_utils__TypeCtorInfo_17_59, ((MR_Box) ((MR_Integer) 0)), &mercury__parsing_utils__FurthestOffsetMutvar_52);
    }
{
#define MR_PROC_LABEL mercury__parsing_utils__parse_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__parsing_utils__InputString_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__Var_57  = Length;
}
    {
      mercury__parsing_utils__Src_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, 0) = ((MR_Box) (mercury__parsing_utils__Var_57));
      MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, 1) = ((MR_Box) (mercury__parsing_utils__InputString_4));
      MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, 2) = ((MR_Box) (mercury__parsing_utils__SkipWS_50));
      MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, 3) = ((MR_Box) (mercury__parsing_utils__FurthestOffsetMutvar_52));
      MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, 4) = ((MR_Box) (mercury__parsing_utils__ErrorInfoMutVar_51));
    }
    mercury__parsing_utils__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Parser_5, (MR_Integer) 1)));
    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__func_1(((MR_Box) mercury__parsing_utils__Parser_5), ((MR_Box) (mercury__parsing_utils__Src_18)), &mercury__parsing_utils__Val_20, ((MR_Box) ((MR_Integer) 0)), &mercury__parsing_utils__conv2_Var_21);
    }
    if (mercury__parsing_utils__succeeded)
    {
      mercury__parsing_utils__Var_21 = ((MR_Integer) mercury__parsing_utils__conv2_Var_21);
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    if (mercury__parsing_utils__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *mercury__parsing_utils__Result_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = mercury__parsing_utils__Val_20;
      }
    else
    {
      MR_Word mercury__parsing_utils__TypeCtorInfo_34_42 = (MR_Word) &mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0;
      MR_Word mercury__parsing_utils__TypeCtorInfo_35_43;
      MR_Word mercury__parsing_utils__TypeCtorInfo_13_72;
      MR_Word mercury__parsing_utils__Info_22;
      MR_Integer mercury__parsing_utils__FurthestOffset_23;
      MR_Integer mercury__parsing_utils__MessageOffset_24;
      MR_Word mercury__parsing_utils__LastFailMsg_25;
      MR_Word mercury__parsing_utils__Msg_26;
      MR_Integer mercury__parsing_utils__Offset_27;
      MR_Integer mercury__parsing_utils__Line_28;
      MR_Integer mercury__parsing_utils__Col_29;
      MR_Word mercury__parsing_utils__Result0_30;
      MR_Word mercury__parsing_utils__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 4)));
      MR_Word mercury__parsing_utils__Var_32;
      MR_ArrayPtr mercury__parsing_utils__Var_33;
      MR_String mercury__parsing_utils__Str_64;
      MR_Word mercury__parsing_utils__RevLineNosList_65;
      MR_Word mercury__parsing_utils__Var_67;
      MR_Integer mercury__parsing_utils__Hi_78;
      MR_Integer mercury__parsing_utils__Var_79;
      MR_Integer mercury__parsing_utils__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 0)));
      MR_String mercury__parsing_utils__Var_35 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 1)));
      MR_Word mercury__parsing_utils__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 2)));
      MR_Word mercury__parsing_utils__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 3)));
      MR_Box mercury__parsing_utils__conv3_Info_22;
      MR_Integer mercury__parsing_utils__Var_38;
      MR_String mercury__parsing_utils__Var_39;
      MR_Word mercury__parsing_utils__Var_40;
      MR_Word mercury__parsing_utils__Var_41;
      MR_Box mercury__parsing_utils__conv4_FurthestOffset_23;
      MR_Integer mercury__parsing_utils__Var_68;
      MR_Word mercury__parsing_utils__Var_69;
      MR_Word mercury__parsing_utils__Var_70;
      MR_Word mercury__parsing_utils__Var_71;
      MR_ArrayPtr mercury__parsing_utils__conv5_Var_33;
      MR_Word mercury__parsing_utils__TypeCtorInfo_13_84;
      MR_Word mercury__parsing_utils__TypeInfo_37_85;
      MR_Box mercury__parsing_utils__conv6_Y;

      {
        mercury__mutvar__get_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_34_42, mercury__parsing_utils__Var_31, &mercury__parsing_utils__conv3_Info_22);
      }
      mercury__parsing_utils__Info_22 = ((MR_Word) mercury__parsing_utils__conv3_Info_22);
      mercury__parsing_utils__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 0)));
      mercury__parsing_utils__Var_39 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 1)));
      mercury__parsing_utils__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 2)));
      mercury__parsing_utils__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 3)));
      mercury__parsing_utils__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 4)));
      mercury__parsing_utils__TypeCtorInfo_35_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      {
        mercury__mutvar__get_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_35_43, mercury__parsing_utils__Var_32, &mercury__parsing_utils__conv4_FurthestOffset_23);
      }
      mercury__parsing_utils__FurthestOffset_23 = ((MR_Integer) mercury__parsing_utils__conv4_FurthestOffset_23);
      mercury__parsing_utils__MessageOffset_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Info_22, (MR_Integer) 0)));
      mercury__parsing_utils__LastFailMsg_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Info_22, (MR_Integer) 1)));
      mercury__parsing_utils__succeeded = (mercury__parsing_utils__MessageOffset_24 < mercury__parsing_utils__FurthestOffset_23);
      if (mercury__parsing_utils__succeeded)
      {
        mercury__parsing_utils__Msg_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__parsing_utils__Offset_27 = mercury__parsing_utils__FurthestOffset_23;
      }
      else
      {
        mercury__parsing_utils__Msg_26 = mercury__parsing_utils__LastFailMsg_25;
        mercury__parsing_utils__Offset_27 = mercury__parsing_utils__MessageOffset_24;
      }
      mercury__parsing_utils__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 0)));
      mercury__parsing_utils__Str_64 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 1)));
      mercury__parsing_utils__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 2)));
      mercury__parsing_utils__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 3)));
      mercury__parsing_utils__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 4)));
      mercury__parsing_utils__Var_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__parsing_utils__src_to_line_numbers_loop_4_p_0(mercury__parsing_utils__Str_64, (MR_Integer) 0, mercury__parsing_utils__Var_67, &mercury__parsing_utils__RevLineNosList_65);
      }
      mercury__parsing_utils__TypeCtorInfo_13_72 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      {
        mercury__parsing_utils__conv5_Var_33 = mercury__array__from_reverse_list_1_f_0(mercury__parsing_utils__TypeCtorInfo_13_72, mercury__parsing_utils__RevLineNosList_65);
      }
      mercury__parsing_utils__Var_33 = (MR_ArrayPtr) mercury__parsing_utils__conv5_Var_33;
{
#define MR_PROC_LABEL mercury__parsing_utils__parse_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__parsing_utils__Var_33 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__Var_79  = Max;
}
      mercury__parsing_utils__Hi_78 = (mercury__parsing_utils__Var_79 - (MR_Integer) 1);
      {
        mercury__parsing_utils__offset_to_line_number_and_position_2_6_p_0(mercury__parsing_utils__Var_33, (MR_Integer) 0, mercury__parsing_utils__Hi_78, mercury__parsing_utils__Offset_27, &mercury__parsing_utils__Line_28, &mercury__parsing_utils__Col_29);
      }
      {
        mercury__parsing_utils__Result0_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__parsing_utils__Result0_30, 0) = ((MR_Box) (mercury__parsing_utils__Msg_26));
        MR_hl_field(MR_mktag(1), mercury__parsing_utils__Result0_30, 1) = ((MR_Box) (mercury__parsing_utils__Line_28));
        MR_hl_field(MR_mktag(1), mercury__parsing_utils__Result0_30, 2) = ((MR_Box) (mercury__parsing_utils__Col_29));
      }
{
#define MR_PROC_LABEL mercury__parsing_utils__parse_3_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (mercury__parsing_utils__Result0_30)) ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__conv6_Y  = (MR_Box) Y;
      *mercury__parsing_utils__Result_6 = ((MR_Word) mercury__parsing_utils__conv6_Y);
}
    }
  }
}

void MR_CALL 
mercury__parsing_utils__parse_4_p_0(
  MR_Word mercury__parsing_utils__TypeInfo_for_T_33,
  MR_String mercury__parsing_utils__InputString_5,
  MR_Word mercury__parsing_utils__SkipWS_6,
  MR_Word mercury__parsing_utils__Parser_7,
  MR_Word * mercury__parsing_utils__Result_8)
{
  {
    MR_bool mercury__parsing_utils__succeeded;
    MR_Word mercury__parsing_utils__Src_9;
    MR_Integer mercury__parsing_utils__PS0_10;
    MR_Box mercury__parsing_utils__Val_11;
    MR_Integer mercury__parsing_utils__Var_12;
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box mercury__parsing_utils__conv1_Var_12;

    {
      mercury__parsing_utils__new_src_and_ps_4_p_0(mercury__parsing_utils__InputString_5, mercury__parsing_utils__SkipWS_6, &mercury__parsing_utils__Src_9, &mercury__parsing_utils__PS0_10);
    }
    mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Parser_7, (MR_Integer) 1)));
    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__Parser_7), ((MR_Box) (mercury__parsing_utils__Src_9)), &mercury__parsing_utils__Val_11, ((MR_Box) (mercury__parsing_utils__PS0_10)), &mercury__parsing_utils__conv1_Var_12);
    }
    if (mercury__parsing_utils__succeeded)
    {
      mercury__parsing_utils__Var_12 = ((MR_Integer) mercury__parsing_utils__conv1_Var_12);
      mercury__parsing_utils__succeeded = MR_TRUE;
    }
    if (mercury__parsing_utils__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *mercury__parsing_utils__Result_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = mercury__parsing_utils__Val_11;
      }
    else
    {
      MR_Word mercury__parsing_utils__TypeCtorInfo_34_34 = (MR_Word) &mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0;
      MR_Word mercury__parsing_utils__TypeCtorInfo_35_35;
      MR_Word mercury__parsing_utils__TypeCtorInfo_13_48;
      MR_Word mercury__parsing_utils__Info_13;
      MR_Integer mercury__parsing_utils__FurthestOffset_14;
      MR_Integer mercury__parsing_utils__MessageOffset_15;
      MR_Word mercury__parsing_utils__LastFailMsg_16;
      MR_Word mercury__parsing_utils__Msg_17;
      MR_Integer mercury__parsing_utils__Offset_18;
      MR_Integer mercury__parsing_utils__Line_19;
      MR_Integer mercury__parsing_utils__Col_20;
      MR_Word mercury__parsing_utils__Result0_21;
      MR_Word mercury__parsing_utils__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 4)));
      MR_Word mercury__parsing_utils__Var_23;
      MR_ArrayPtr mercury__parsing_utils__Var_24;
      MR_String mercury__parsing_utils__Str_40;
      MR_Word mercury__parsing_utils__RevLineNosList_41;
      MR_Word mercury__parsing_utils__Var_43;
      MR_Integer mercury__parsing_utils__Hi_54;
      MR_Integer mercury__parsing_utils__Var_55;
      MR_Integer mercury__parsing_utils__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 0)));
      MR_String mercury__parsing_utils__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 1)));
      MR_Word mercury__parsing_utils__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 2)));
      MR_Word mercury__parsing_utils__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 3)));
      MR_Box mercury__parsing_utils__conv2_Info_13;
      MR_Integer mercury__parsing_utils__Var_29;
      MR_String mercury__parsing_utils__Var_30;
      MR_Word mercury__parsing_utils__Var_31;
      MR_Word mercury__parsing_utils__Var_32;
      MR_Box mercury__parsing_utils__conv3_FurthestOffset_14;
      MR_Integer mercury__parsing_utils__Var_44;
      MR_Word mercury__parsing_utils__Var_45;
      MR_Word mercury__parsing_utils__Var_46;
      MR_Word mercury__parsing_utils__Var_47;
      MR_ArrayPtr mercury__parsing_utils__conv4_Var_24;
      MR_Word mercury__parsing_utils__TypeCtorInfo_13_60;
      MR_Word mercury__parsing_utils__TypeInfo_37_61;
      MR_Box mercury__parsing_utils__conv5_Y;

      {
        mercury__mutvar__get_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_34_34, mercury__parsing_utils__Var_22, &mercury__parsing_utils__conv2_Info_13);
      }
      mercury__parsing_utils__Info_13 = ((MR_Word) mercury__parsing_utils__conv2_Info_13);
      mercury__parsing_utils__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 0)));
      mercury__parsing_utils__Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 1)));
      mercury__parsing_utils__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 2)));
      mercury__parsing_utils__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 3)));
      mercury__parsing_utils__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 4)));
      mercury__parsing_utils__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      {
        mercury__mutvar__get_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_35_35, mercury__parsing_utils__Var_23, &mercury__parsing_utils__conv3_FurthestOffset_14);
      }
      mercury__parsing_utils__FurthestOffset_14 = ((MR_Integer) mercury__parsing_utils__conv3_FurthestOffset_14);
      mercury__parsing_utils__MessageOffset_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Info_13, (MR_Integer) 0)));
      mercury__parsing_utils__LastFailMsg_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Info_13, (MR_Integer) 1)));
      mercury__parsing_utils__succeeded = (mercury__parsing_utils__MessageOffset_15 < mercury__parsing_utils__FurthestOffset_14);
      if (mercury__parsing_utils__succeeded)
      {
        mercury__parsing_utils__Msg_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__parsing_utils__Offset_18 = mercury__parsing_utils__FurthestOffset_14;
      }
      else
      {
        mercury__parsing_utils__Msg_17 = mercury__parsing_utils__LastFailMsg_16;
        mercury__parsing_utils__Offset_18 = mercury__parsing_utils__MessageOffset_15;
      }
      mercury__parsing_utils__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 0)));
      mercury__parsing_utils__Str_40 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 1)));
      mercury__parsing_utils__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 2)));
      mercury__parsing_utils__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 3)));
      mercury__parsing_utils__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 4)));
      mercury__parsing_utils__Var_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__parsing_utils__src_to_line_numbers_loop_4_p_0(mercury__parsing_utils__Str_40, (MR_Integer) 0, mercury__parsing_utils__Var_43, &mercury__parsing_utils__RevLineNosList_41);
      }
      mercury__parsing_utils__TypeCtorInfo_13_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      {
        mercury__parsing_utils__conv4_Var_24 = mercury__array__from_reverse_list_1_f_0(mercury__parsing_utils__TypeCtorInfo_13_48, mercury__parsing_utils__RevLineNosList_41);
      }
      mercury__parsing_utils__Var_24 = (MR_ArrayPtr) mercury__parsing_utils__conv4_Var_24;
{
#define MR_PROC_LABEL mercury__parsing_utils__parse_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__parsing_utils__Var_24 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__Var_55  = Max;
}
      mercury__parsing_utils__Hi_54 = (mercury__parsing_utils__Var_55 - (MR_Integer) 1);
      {
        mercury__parsing_utils__offset_to_line_number_and_position_2_6_p_0(mercury__parsing_utils__Var_24, (MR_Integer) 0, mercury__parsing_utils__Hi_54, mercury__parsing_utils__Offset_18, &mercury__parsing_utils__Line_19, &mercury__parsing_utils__Col_20);
      }
      {
        mercury__parsing_utils__Result0_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__parsing_utils__Result0_21, 0) = ((MR_Box) (mercury__parsing_utils__Msg_17));
        MR_hl_field(MR_mktag(1), mercury__parsing_utils__Result0_21, 1) = ((MR_Box) (mercury__parsing_utils__Line_19));
        MR_hl_field(MR_mktag(1), mercury__parsing_utils__Result0_21, 2) = ((MR_Box) (mercury__parsing_utils__Col_20));
      }
{
#define MR_PROC_LABEL mercury__parsing_utils__parse_4_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (mercury__parsing_utils__Result0_21)) ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__conv5_Y  = (MR_Box) Y;
      *mercury__parsing_utils__Result_8 = ((MR_Word) mercury__parsing_utils__conv5_Y);
}
    }
  }
}

void MR_CALL 
mercury__parsing_utils__offset_to_line_number_and_position_2_6_p_0(
  MR_ArrayPtr mercury__parsing_utils__LineNos_7,
  MR_Integer mercury__parsing_utils__Lo_8,
  MR_Integer mercury__parsing_utils__Hi_9,
  MR_Integer mercury__parsing_utils__Offset_10,
  MR_Integer * mercury__parsing_utils__LineNo_11,
  MR_Integer * mercury__parsing_utils__Pos_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__parsing_utils__succeeded = (mercury__parsing_utils__Lo_8 < mercury__parsing_utils__Hi_9);

      if (mercury__parsing_utils__succeeded)
      {
        MR_Word mercury__parsing_utils__TypeCtorInfo_27_27;
        MR_Integer mercury__parsing_utils__Mid_13;
        MR_Integer mercury__parsing_utils__MidOffset_14;
        MR_Integer mercury__parsing_utils__Var_16 = (mercury__parsing_utils__Lo_8 + mercury__parsing_utils__Hi_9);
        MR_Box mercury__parsing_utils__conv0_MidOffset_14;

        mercury__parsing_utils__Mid_13 = (mercury__parsing_utils__Var_16 / (MR_Integer) 2);
        mercury__parsing_utils__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__array__lookup_3_p_0(mercury__parsing_utils__TypeCtorInfo_27_27, (MR_ArrayPtr) mercury__parsing_utils__LineNos_7, mercury__parsing_utils__Mid_13, &mercury__parsing_utils__conv0_MidOffset_14);
        }
        mercury__parsing_utils__MidOffset_14 = ((MR_Integer) mercury__parsing_utils__conv0_MidOffset_14);
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__MidOffset_14 < mercury__parsing_utils__Offset_10);
        if (mercury__parsing_utils__succeeded)
        {
          MR_Integer mercury__parsing_utils__Var_18 = (mercury__parsing_utils__Mid_13 + (MR_Integer) 1);

          /* direct tailcall eliminated */
          {
            MR_Integer mercury__parsing_utils__next_value_of_Lo_8 = mercury__parsing_utils__Var_18;

            mercury__parsing_utils__Lo_8 = mercury__parsing_utils__next_value_of_Lo_8;
          }
          continue;
        }
        else
        {
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__parsing_utils__next_value_of_Hi_9 = mercury__parsing_utils__Mid_13;

            mercury__parsing_utils__Hi_9 = mercury__parsing_utils__next_value_of_Hi_9;
          }
          continue;
        }
      }
      else
      {
        MR_Integer mercury__parsing_utils__LineBegin_15;
        MR_Integer mercury__parsing_utils__Var_25;

        mercury__parsing_utils__succeeded = (mercury__parsing_utils__Lo_8 == (MR_Integer) 0);
        if (mercury__parsing_utils__succeeded)
          mercury__parsing_utils__LineBegin_15 = (MR_Integer) 0;
        else
        {
          MR_Word mercury__parsing_utils__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          MR_Integer mercury__parsing_utils__Var_20;
          MR_Integer mercury__parsing_utils__Var_21 = (mercury__parsing_utils__Lo_8 - (MR_Integer) 1);
          MR_Box mercury__parsing_utils__conv1_Var_20;

          {
            mercury__array__lookup_3_p_0(mercury__parsing_utils__TypeCtorInfo_28_28, (MR_ArrayPtr) mercury__parsing_utils__LineNos_7, mercury__parsing_utils__Var_21, &mercury__parsing_utils__conv1_Var_20);
          }
          mercury__parsing_utils__Var_20 = ((MR_Integer) mercury__parsing_utils__conv1_Var_20);
          mercury__parsing_utils__LineBegin_15 = (mercury__parsing_utils__Var_20 + (MR_Integer) 1);
        }
        *mercury__parsing_utils__LineNo_11 = ((MR_Integer) 1 + mercury__parsing_utils__Lo_8);
        mercury__parsing_utils__Var_25 = ((MR_Integer) 1 + mercury__parsing_utils__Offset_10);
        *mercury__parsing_utils__Pos_12 = (mercury__parsing_utils__Var_25 - mercury__parsing_utils__LineBegin_15);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__parsing_utils__src_to_line_numbers_loop_4_p_0(
  MR_String mercury__parsing_utils__Str_5,
  MR_Integer mercury__parsing_utils__Pos0_6,
  MR_Word mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_0_10,
  MR_Word * mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_11)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__parsing_utils__succeeded;
      MR_Integer mercury__parsing_utils__Pos_8;
      MR_Char mercury__parsing_utils__Char_9;

{
#define MR_PROC_LABEL mercury__parsing_utils__src_to_line_numbers_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__parsing_utils__Str_5 ;
	Index =  mercury__parsing_utils__Pos0_6 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__parsing_utils__Pos_8  = NextIndex;
	 mercury__parsing_utils__Char_9  = Ch;
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__parsing_utils__succeeded)
      {
        MR_Word mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_12_12;

        mercury__parsing_utils__succeeded = (mercury__parsing_utils__Char_9 == (MR_Char) 10);
        if (mercury__parsing_utils__succeeded)
          {
            mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_12_12, 0) = ((MR_Box) (mercury__parsing_utils__Pos0_6));
            MR_hl_field(MR_mktag(1), mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_12_12, 1) = ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_0_10));
          }
        else
          mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_12_12 = mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_0_10;
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__parsing_utils__next_value_of_Pos0_6 = mercury__parsing_utils__Pos_8;
          MR_Word mercury__parsing_utils__next_value_of_STATE_VARIABLE_RevLineNosList_0_10 = mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_12_12;

          mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_0_10 = mercury__parsing_utils__next_value_of_STATE_VARIABLE_RevLineNosList_0_10;
          mercury__parsing_utils__Pos0_6 = mercury__parsing_utils__next_value_of_Pos0_6;
        }
        continue;
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parsing_utils__Pos0_6));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_0_10));
        }
    }
    break;
  }
}

void MR_CALL 
mercury__parsing_utils__new_src_and_ps_4_p_0(
  MR_String mercury__parsing_utils__InputString_5,
  MR_Word mercury__parsing_utils__SkipWS_6,
  MR_Word * mercury__parsing_utils__Src_7,
  MR_Integer * mercury__parsing_utils__PS_8)
{
  {
    MR_Word mercury__parsing_utils__TypeCtorInfo_16_16 = (MR_Word) &mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0;
    MR_Word mercury__parsing_utils__TypeCtorInfo_17_17;
    MR_Word mercury__parsing_utils__ErrorInfoMutVar_9;
    MR_Word mercury__parsing_utils__FurthestOffsetMutvar_10;
    MR_Word mercury__parsing_utils__Var_11 = (MR_Word) &mercury__parsing_utils_scalar_common_1[4];
    MR_Word mercury__parsing_utils__Var_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Integer mercury__parsing_utils__Var_15;

    {
      mercury__mutvar__new_mutvar_2_p_1(mercury__parsing_utils__TypeCtorInfo_16_16, ((MR_Box) (mercury__parsing_utils__Var_11)), &mercury__parsing_utils__ErrorInfoMutVar_9);
    }
    mercury__parsing_utils__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__mutvar__new_mutvar_2_p_1(mercury__parsing_utils__TypeCtorInfo_17_17, ((MR_Box) ((MR_Integer) 0)), &mercury__parsing_utils__FurthestOffsetMutvar_10);
    }
{
#define MR_PROC_LABEL mercury__parsing_utils__new_src_and_ps_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__parsing_utils__InputString_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__Var_15  = Length;
}
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *mercury__parsing_utils__Src_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parsing_utils__Var_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__parsing_utils__InputString_5));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__parsing_utils__SkipWS_6));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__parsing_utils__FurthestOffsetMutvar_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__parsing_utils__ErrorInfoMutVar_9));
    }
    *mercury__parsing_utils__PS_8 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____fail_message_info_0_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2)
{
  {
    MR_bool mercury__parsing_utils__succeeded;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils____Unify____fail_message_info_0_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), ((MR_Word) mercury__parsing_utils__wrapper_arg_2));
    }
    return mercury__parsing_utils__succeeded;
  }
}

static void MR_CALL 
mercury__parsing_utils____Compare____fail_message_info_0_0_10001(
  MR_Box * mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3)
{
  {
    MR_Word mercury__parsing_utils__conv0_HeadVar__1_1;

    {
      mercury__parsing_utils____Compare____fail_message_info_0_0(&mercury__parsing_utils__conv0_HeadVar__1_1, ((MR_Word) mercury__parsing_utils__wrapper_arg_2), ((MR_Word) mercury__parsing_utils__wrapper_arg_3));
    }
    *mercury__parsing_utils__wrapper_arg_1 = ((MR_Box) (mercury__parsing_utils__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____line_numbers_0_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2)
{
  {
    MR_bool mercury__parsing_utils__succeeded;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils____Unify____line_numbers_0_0(((MR_ArrayPtr) mercury__parsing_utils__wrapper_arg_1), ((MR_ArrayPtr) mercury__parsing_utils__wrapper_arg_2));
    }
    return mercury__parsing_utils__succeeded;
  }
}

static void MR_CALL 
mercury__parsing_utils____Compare____line_numbers_0_0_10001(
  MR_Box * mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3)
{
  {
    MR_Word mercury__parsing_utils__conv0_HeadVar__1_1;

    {
      mercury__parsing_utils____Compare____line_numbers_0_0(&mercury__parsing_utils__conv0_HeadVar__1_1, ((MR_ArrayPtr) mercury__parsing_utils__wrapper_arg_2), ((MR_ArrayPtr) mercury__parsing_utils__wrapper_arg_3));
    }
    *mercury__parsing_utils__wrapper_arg_1 = ((MR_Box) (mercury__parsing_utils__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____parse_result_1_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3)
{
  {
    MR_bool mercury__parsing_utils__succeeded;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils____Unify____parse_result_1_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), ((MR_Word) mercury__parsing_utils__wrapper_arg_2), ((MR_Word) mercury__parsing_utils__wrapper_arg_3));
    }
    return mercury__parsing_utils__succeeded;
  }
}

static void MR_CALL 
mercury__parsing_utils____Compare____parse_result_1_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box * mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3,
  MR_Box mercury__parsing_utils__wrapper_arg_4)
{
  {
    MR_Word mercury__parsing_utils__conv0_HeadVar__1_1;

    {
      mercury__parsing_utils____Compare____parse_result_1_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), &mercury__parsing_utils__conv0_HeadVar__1_1, ((MR_Word) mercury__parsing_utils__wrapper_arg_3), ((MR_Word) mercury__parsing_utils__wrapper_arg_4));
    }
    *mercury__parsing_utils__wrapper_arg_2 = ((MR_Box) (mercury__parsing_utils__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____parser_1_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3)
{
  {
    MR_bool mercury__parsing_utils__succeeded;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils____Unify____parser_1_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), ((MR_Word) mercury__parsing_utils__wrapper_arg_2), ((MR_Word) mercury__parsing_utils__wrapper_arg_3));
    }
    return mercury__parsing_utils__succeeded;
  }
}

static void MR_CALL 
mercury__parsing_utils____Compare____parser_1_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box * mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3,
  MR_Box mercury__parsing_utils__wrapper_arg_4)
{
  {
    MR_Word mercury__parsing_utils__conv0_HeadVar__1_1;

    {
      mercury__parsing_utils____Compare____parser_1_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), &mercury__parsing_utils__conv0_HeadVar__1_1, ((MR_Word) mercury__parsing_utils__wrapper_arg_3), ((MR_Word) mercury__parsing_utils__wrapper_arg_4));
    }
    *mercury__parsing_utils__wrapper_arg_2 = ((MR_Box) (mercury__parsing_utils__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____parser_with_state_2_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3,
  MR_Box mercury__parsing_utils__wrapper_arg_4)
{
  {
    MR_bool mercury__parsing_utils__succeeded;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils____Unify____parser_with_state_2_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), ((MR_Word) mercury__parsing_utils__wrapper_arg_2), ((MR_Word) mercury__parsing_utils__wrapper_arg_3), ((MR_Word) mercury__parsing_utils__wrapper_arg_4));
    }
    return mercury__parsing_utils__succeeded;
  }
}

static void MR_CALL 
mercury__parsing_utils____Compare____parser_with_state_2_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2,
  MR_Box * mercury__parsing_utils__wrapper_arg_3,
  MR_Box mercury__parsing_utils__wrapper_arg_4,
  MR_Box mercury__parsing_utils__wrapper_arg_5)
{
  {
    MR_Word mercury__parsing_utils__conv0_HeadVar__1_1;

    {
      mercury__parsing_utils____Compare____parser_with_state_2_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), ((MR_Word) mercury__parsing_utils__wrapper_arg_2), &mercury__parsing_utils__conv0_HeadVar__1_1, ((MR_Word) mercury__parsing_utils__wrapper_arg_4), ((MR_Word) mercury__parsing_utils__wrapper_arg_5));
    }
    *mercury__parsing_utils__wrapper_arg_3 = ((MR_Box) (mercury__parsing_utils__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____ps_0_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2)
{
  {
    MR_bool mercury__parsing_utils__succeeded;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils____Unify____ps_0_0(((MR_Integer) mercury__parsing_utils__wrapper_arg_1), ((MR_Integer) mercury__parsing_utils__wrapper_arg_2));
    }
    return mercury__parsing_utils__succeeded;
  }
}

static void MR_CALL 
mercury__parsing_utils____Compare____ps_0_0_10001(
  MR_Box * mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3)
{
  {
    MR_Word mercury__parsing_utils__conv0_HeadVar__1_1;

    {
      mercury__parsing_utils____Compare____ps_0_0(&mercury__parsing_utils__conv0_HeadVar__1_1, ((MR_Integer) mercury__parsing_utils__wrapper_arg_2), ((MR_Integer) mercury__parsing_utils__wrapper_arg_3));
    }
    *mercury__parsing_utils__wrapper_arg_1 = ((MR_Box) (mercury__parsing_utils__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____skip_whitespace_pred_0_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2)
{
  {
    MR_bool mercury__parsing_utils__succeeded;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils____Unify____skip_whitespace_pred_0_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), ((MR_Word) mercury__parsing_utils__wrapper_arg_2));
    }
    return mercury__parsing_utils__succeeded;
  }
}

static void MR_CALL 
mercury__parsing_utils____Compare____skip_whitespace_pred_0_0_10001(
  MR_Box * mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3)
{
  {
    MR_Word mercury__parsing_utils__conv0_HeadVar__1_1;

    {
      mercury__parsing_utils____Compare____skip_whitespace_pred_0_0(&mercury__parsing_utils__conv0_HeadVar__1_1, ((MR_Word) mercury__parsing_utils__wrapper_arg_2), ((MR_Word) mercury__parsing_utils__wrapper_arg_3));
    }
    *mercury__parsing_utils__wrapper_arg_1 = ((MR_Box) (mercury__parsing_utils__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__parsing_utils____Unify____src_0_0_10001(
  MR_Box mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2)
{
  {
    MR_bool mercury__parsing_utils__succeeded;

    {
      mercury__parsing_utils__succeeded = mercury__parsing_utils____Unify____src_0_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), ((MR_Word) mercury__parsing_utils__wrapper_arg_2));
    }
    return mercury__parsing_utils__succeeded;
  }
}

static void MR_CALL 
mercury__parsing_utils____Compare____src_0_0_10001(
  MR_Box * mercury__parsing_utils__wrapper_arg_1,
  MR_Box mercury__parsing_utils__wrapper_arg_2,
  MR_Box mercury__parsing_utils__wrapper_arg_3)
{
  {
    MR_Word mercury__parsing_utils__conv0_HeadVar__1_1;

    {
      mercury__parsing_utils____Compare____src_0_0(&mercury__parsing_utils__conv0_HeadVar__1_1, ((MR_Word) mercury__parsing_utils__wrapper_arg_2), ((MR_Word) mercury__parsing_utils__wrapper_arg_3));
    }
    *mercury__parsing_utils__wrapper_arg_1 = ((MR_Box) (mercury__parsing_utils__conv0_HeadVar__1_1));
  }
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

/* :- end_module parsing_utils. */
