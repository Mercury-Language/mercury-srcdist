/*
** Automatically generated from `string.parse_runtime.m'
** by the Mercury compiler,
** version rotd-2020-07-17
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


// :- module string.parse_runtime.
// :- implementation.

/*
INIT mercury__string__parse_runtime__init
ENDINIT
*/

#include "string.parse_runtime.mih"


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
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
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
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_0[1];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_0;

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_1[3];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_1;

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_2[4];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_2;

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_3[4];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_3;

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_4[5];

static const MR_DuArgLocn mercury__string__parse_runtime__string__parse_runtime__field_locns_string_format_spec_0_4[5];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_4;

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_5[5];

static const MR_DuArgLocn mercury__string__parse_runtime__string__parse_runtime__field_locns_string_format_spec_0_5[5];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_5;

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_6[5];

static const MR_DuArgLocn mercury__string__parse_runtime__string__parse_runtime__field_locns_string_format_spec_0_6[5];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_6;

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_0[1];

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_1[1];

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_2[1];

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_3[4];

static const MR_DuPtagLayout mercury__string__parse_runtime__string__parse_runtime__du_ptag_ordered_string_format_spec_0[4];

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_name_ordered_string_format_spec_0[7];

static const MR_Integer mercury__string__parse_runtime__string__parse_runtime__functor_number_map_string_format_spec_0[7];

static MR_Integer MR_CALL 
mercury__string__parse_runtime__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__string__parse_runtime__parse_conversion_specification_7_p_0(
  MR_Word STATE_VARIABLE_Chars_0_20,
  MR_Word * STATE_VARIABLE_Chars_21,
  MR_Word STATE_VARIABLE_PolyTypes_0_22,
  MR_Word * STATE_VARIABLE_PolyTypes_23,
  MR_Integer SpecNum_10,
  MR_Word * Spec_11,
  MR_Word * Errors_12);

static void MR_CALL 
mercury__string__parse_runtime__get_first_spec_10_p_0(
  MR_Word STATE_VARIABLE_Chars_0_1,
  MR_Word * STATE_VARIABLE_Chars_2,
  MR_Word STATE_VARIABLE_PolyTypes_0_3,
  MR_Word * STATE_VARIABLE_PolyTypes_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Integer SpecNum_8,
  MR_Word * Spec_9,
  MR_Word * Errors_10);

static MR_Word MR_CALL 
mercury__string__parse_runtime__poly_type_to_kind_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
mercury__string__parse_runtime__get_optional_prec_7_p_0(
  MR_Word STATE_VARIABLE_Chars_0_16,
  MR_Word * STATE_VARIABLE_Chars_17,
  MR_Word STATE_VARIABLE_PolyTypes_0_18,
  MR_Word * STATE_VARIABLE_PolyTypes_19,
  MR_Integer SpecNum_10,
  MR_Word * MaybePrec_11,
  MR_Word * Errors_12);

static MR_bool MR_CALL 
mercury__string__parse_runtime____Unify____string_format_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_runtime____Compare____string_format_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__string__parse_runtime_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__string__parse_runtime_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__string__parse_runtime_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__string__parse_runtime_scalar_common_4[3][1];




static /* final */ const MR_Box mercury__string__parse_runtime_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__parse_runtime_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__parse_runtime_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__parse_runtime_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__parse_runtime_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__parse_runtime_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__parse_runtime_scalar_common_4[3][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "%"))
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
#include "math.mh"
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



static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_0 = {
  (MR_String) "spec_constant_string",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0)
};

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_1 = {
  (MR_String) "spec_char",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_2[4] = {
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_2 = {
  (MR_String) "spec_string",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_3[4] = {
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_3 = {
  (MR_String) "spec_signed_int",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_4[5] = {
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_int_base_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn mercury__string__parse_runtime__string__parse_runtime__field_locns_string_format_spec_0_4[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_4 = {
  (MR_String) "spec_unsigned_int",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_4,
  NULL,
  mercury__string__parse_runtime__string__parse_runtime__field_locns_string_format_spec_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_5[5] = {
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_int_base_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_DuArgLocn mercury__string__parse_runtime__string__parse_runtime__field_locns_string_format_spec_0_5[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_5 = {
  (MR_String) "spec_uint",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_5,
  NULL,
  mercury__string__parse_runtime__string__parse_runtime__field_locns_string_format_spec_0_5,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_6[5] = {
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_float_kind_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
};

static const MR_DuArgLocn mercury__string__parse_runtime__string__parse_runtime__field_locns_string_format_spec_0_6[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_6 = {
  (MR_String) "spec_float",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_6,
  NULL,
  mercury__string__parse_runtime__string__parse_runtime__field_locns_string_format_spec_0_6,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_0[1] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_0
};

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_1[1] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_1
};

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_2[1] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_2
};

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_3[4] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_3,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_4,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_5,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_6
};

static const MR_DuPtagLayout mercury__string__parse_runtime__string__parse_runtime__du_ptag_ordered_string_format_spec_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(4),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_name_ordered_string_format_spec_0[7] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_1,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_0,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_6,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_3,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_2,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_5,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_4
};

static const MR_Integer mercury__string__parse_runtime__string__parse_runtime__functor_number_map_string_format_spec_0[7] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__string__parse_runtime__string__parse_runtime__type_ctor_info_string_format_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_runtime____Unify____string_format_spec_0_0_10001)),
  ((MR_Box) (mercury__string__parse_runtime____Compare____string_format_spec_0_0_10001)),
  (MR_String) "string.parse_runtime",
  (MR_String) "string_format_spec",
  {     mercury__string__parse_runtime__string__parse_runtime__du_name_ordered_string_format_spec_0 },
  {     mercury__string__parse_runtime__string__parse_runtime__du_ptag_ordered_string_format_spec_0 },
  (MR_Integer) 7,
  UINT16_C(4),
  mercury__string__parse_runtime__string__parse_runtime__functor_number_map_string_format_spec_0
};

static MR_Integer MR_CALL 
mercury__string__parse_runtime__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

void MR_CALL 
mercury__string__parse_runtime____Compare____string_format_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_402 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_403 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_402 == CastY_403);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_434 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer V_7_472;

{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_434 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_472  = Res;
}
                  succeeded = (V_7_472 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_472 == (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Char Var_431 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
            MR_Word Var_432 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_433 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Char ArgY3_49 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word SubResult1_44;

                  mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult1_44, Var_433, ArgY1_43);
                  succeeded = (SubResult1_44 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_44;
                  else
                  {
                    MR_Word SubResult2_47;

                    mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&SubResult2_47, Var_432, ArgY2_46);
                    succeeded = (SubResult2_47 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_47;
                    else
                    {
                      MR_Integer V_7_467;
                      MR_Integer V_8_468;

{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Char Character;
	MR_Integer Int;

	Character = Var_431 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 V_7_467  = Int;
}
{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Char Character;
	MR_Integer Int;

	Character = ArgY3_49 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 V_8_468  = Int;
}
                      succeeded = (V_7_467 < V_8_468);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (V_7_467 == V_8_468);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 0;
                        else
                          *HeadVar__1_1 = (MR_Integer) 2;
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_444 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_445 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_446 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_447 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_101 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_104 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_107 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  MR_String ArgY4_110 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word SubResult1_102;

                  mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult1_102, Var_447, ArgY1_101);
                  succeeded = (SubResult1_102 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_102;
                  else
                  {
                    MR_Word SubResult2_105;

                    mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&SubResult2_105, Var_446, ArgY2_104);
                    succeeded = (SubResult2_105 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_105;
                    else
                    {
                      MR_Word SubResult3_108;

                      mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&SubResult3_108, Var_445, ArgY3_107);
                      succeeded = (SubResult3_108 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_108;
                      else
                      {
                        MR_Integer V_7_486;

{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_444 ;
	S2 = ArgY4_110 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_486  = Res;
}
                        succeeded = (V_7_486 < (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (V_7_486 == (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *HeadVar__1_1 = (MR_Integer) 2;
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer Var_440 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                MR_Word Var_441 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_442 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_443 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ArgY1_167 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_170 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word ArgY3_173 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Integer ArgY4_176 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                          MR_Word SubResult1_168;

                          mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult1_168, Var_443, ArgY1_167);
                          succeeded = (SubResult1_168 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_168;
                          else
                          {
                            MR_Word SubResult2_171;

                            mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&SubResult2_171, Var_442, ArgY2_170);
                            succeeded = (SubResult2_171 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_171;
                            else
                            {
                              MR_Word SubResult3_174;

                              mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&SubResult3_174, Var_441, ArgY3_173);
                              succeeded = (SubResult3_174 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult3_174;
                              else
                              {
                                succeeded = (Var_440 < ArgY4_176);
                                if (succeeded)
                                  *HeadVar__1_1 = (MR_Integer) 1;
                                else
                                {
                                  succeeded = (Var_440 == ArgY4_176);
                                  if (succeeded)
                                    *HeadVar__1_1 = (MR_Integer) 0;
                                  else
                                    *HeadVar__1_1 = (MR_Integer) 2;
                                }
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Var_453 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                MR_Word Var_454 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 7);
                MR_Word Var_455 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_456 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_457 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_237 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_240 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word ArgY3_243 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word ArgY4_246 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 7);
                          MR_Integer ArgY5_249 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
                          MR_Word SubResult1_238;

                          mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult1_238, Var_457, ArgY1_237);
                          succeeded = (SubResult1_238 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_238;
                          else
                          {
                            MR_Word SubResult2_241;

                            mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&SubResult2_241, Var_456, ArgY2_240);
                            succeeded = (SubResult2_241 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_241;
                            else
                            {
                              MR_Word SubResult3_244;

                              mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&SubResult3_244, Var_455, ArgY3_243);
                              succeeded = (SubResult3_244 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult3_244;
                              else
                              {
                                MR_Word SubResult4_247;
                                MR_Integer Var_462 = (MR_Integer) (Var_454);
                                MR_Integer Var_463 = (MR_Integer) (ArgY4_246);

                                succeeded = (Var_462 < Var_463);
                                if (succeeded)
                                  SubResult4_247 = (MR_Integer) 1;
                                else
                                {
                                  succeeded = (Var_462 == Var_463);
                                  if (succeeded)
                                    SubResult4_247 = (MR_Integer) 0;
                                  else
                                    SubResult4_247 = (MR_Integer) 2;
                                }
                                succeeded = (SubResult4_247 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult4_247;
                                else
                                {
                                  succeeded = (Var_453 < ArgY5_249);
                                  if (succeeded)
                                    *HeadVar__1_1 = (MR_Integer) 1;
                                  else
                                  {
                                    succeeded = (Var_453 == ArgY5_249);
                                    if (succeeded)
                                      *HeadVar__1_1 = (MR_Integer) 0;
                                    else
                                      *HeadVar__1_1 = (MR_Integer) 2;
                                  }
                                }
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Unsigned Var_448 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                MR_Word Var_449 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 7);
                MR_Word Var_450 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_451 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_452 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ArgY1_313 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_316 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word ArgY3_319 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word ArgY4_322 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 7);
                          MR_Unsigned ArgY5_325 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
                          MR_Word SubResult1_314;

                          mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult1_314, Var_452, ArgY1_313);
                          succeeded = (SubResult1_314 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_314;
                          else
                          {
                            MR_Word SubResult2_317;

                            mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&SubResult2_317, Var_451, ArgY2_316);
                            succeeded = (SubResult2_317 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_317;
                            else
                            {
                              MR_Word SubResult3_320;

                              mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&SubResult3_320, Var_450, ArgY3_319);
                              succeeded = (SubResult3_320 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult3_320;
                              else
                              {
                                MR_Word SubResult4_323;
                                MR_Integer Var_460 = (MR_Integer) (Var_449);
                                MR_Integer Var_461 = (MR_Integer) (ArgY4_322);

                                succeeded = (Var_460 < Var_461);
                                if (succeeded)
                                  SubResult4_323 = (MR_Integer) 1;
                                else
                                {
                                  succeeded = (Var_460 == Var_461);
                                  if (succeeded)
                                    SubResult4_323 = (MR_Integer) 0;
                                  else
                                    SubResult4_323 = (MR_Integer) 2;
                                }
                                succeeded = (SubResult4_323 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult4_323;
                                else
                                {
                                  succeeded = (Var_448 < ArgY5_325);
                                  if (succeeded)
                                    *HeadVar__1_1 = (MR_Integer) 1;
                                  else
                                  {
                                    succeeded = (Var_448 == ArgY5_325);
                                    if (succeeded)
                                      *HeadVar__1_1 = (MR_Integer) 0;
                                    else
                                      *HeadVar__1_1 = (MR_Integer) 2;
                                  }
                                }
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Float Var_435 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5)));
                MR_Word Var_436 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 7);
                MR_Word Var_437 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_438 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_439 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word ArgY1_389 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_392 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word ArgY3_395 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word ArgY4_398 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 7);
                          MR_Float ArgY5_401 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5)));
                          MR_Word SubResult1_390;

                          mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult1_390, Var_439, ArgY1_389);
                          succeeded = (SubResult1_390 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_390;
                          else
                          {
                            MR_Word SubResult2_393;

                            mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&SubResult2_393, Var_438, ArgY2_392);
                            succeeded = (SubResult2_393 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_393;
                            else
                            {
                              MR_Word SubResult3_396;

                              mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&SubResult3_396, Var_437, ArgY3_395);
                              succeeded = (SubResult3_396 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult3_396;
                              else
                              {
                                MR_Word SubResult4_399;
                                MR_Integer Var_458 = (MR_Integer) (Var_436);
                                MR_Integer Var_459 = (MR_Integer) (ArgY4_398);

                                succeeded = (Var_458 < Var_459);
                                if (succeeded)
                                  SubResult4_399 = (MR_Integer) 1;
                                else
                                {
                                  succeeded = (Var_458 == Var_459);
                                  if (succeeded)
                                    SubResult4_399 = (MR_Integer) 0;
                                  else
                                    SubResult4_399 = (MR_Integer) 2;
                                }
                                succeeded = (SubResult4_399 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult4_399;
                                else
                                {
                                  succeeded = (Var_435 < ArgY5_401);
                                  if (succeeded)
                                    *HeadVar__1_1 = (MR_Integer) 1;
                                  else
                                  {
                                    succeeded = (Var_435 > ArgY5_401);
                                    if (succeeded)
                                      *HeadVar__1_1 = (MR_Integer) 2;
                                    else
                                      *HeadVar__1_1 = (MR_Integer) 0;
                                  }
                                }
                              }
                            }
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__string__parse_runtime____Unify____string_format_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_57 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_58 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_57 == CastY_58);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_8;
            MR_Char ArgX3_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
            MR_Char ArgY3_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
              succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(ArgX1_5, ArgY1_6);
              if (succeeded)
              {
                succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(ArgX2_7, ArgY2_8);
                if (succeeded)
                  succeeded = (ArgX3_9 == ArgY3_10);
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;
            MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_14;
            MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_16;
            MR_String ArgX4_17 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
            MR_String ArgY4_18;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_18 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
              succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(ArgX1_11, ArgY1_12);
              if (succeeded)
              {
                succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(ArgX2_13, ArgY2_14);
                if (succeeded)
                {
                  succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(ArgX3_15, ArgY3_16);
                  if (succeeded)
                    succeeded = (strcmp(ArgX4_17, ArgY4_18) == 0);
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_20;
                MR_Word ArgX2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_22;
                MR_Word ArgX3_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_24;
                MR_Integer ArgX4_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Integer ArgY4_26;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(ArgX1_19, ArgY1_20);
                  if (succeeded)
                  {
                    succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(ArgX2_21, ArgY2_22);
                    if (succeeded)
                    {
                      succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(ArgX3_23, ArgY3_24);
                      if (succeeded)
                        succeeded = (ArgX4_25 == ArgY4_26);
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_28;
                MR_Word ArgX2_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_30;
                MR_Word ArgX3_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_32;
                MR_Word ArgX4_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 7);
                MR_Word ArgY4_34;
                MR_Integer ArgX5_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
                MR_Integer ArgY5_36;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 7);
                  ArgY5_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                  succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(ArgX1_27, ArgY1_28);
                  if (succeeded)
                  {
                    succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(ArgX2_29, ArgY2_30);
                    if (succeeded)
                    {
                      succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(ArgX3_31, ArgY3_32);
                      if (succeeded)
                      {
                        succeeded = (ArgX4_33 == ArgY4_34);
                        if (succeeded)
                          succeeded = (ArgX5_35 == ArgY5_36);
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgX1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_38;
                MR_Word ArgX2_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_40;
                MR_Word ArgX3_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_42;
                MR_Word ArgX4_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 7);
                MR_Word ArgY4_44;
                MR_Unsigned ArgX5_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
                MR_Unsigned ArgY5_46;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 7);
                  ArgY5_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                  succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(ArgX1_37, ArgY1_38);
                  if (succeeded)
                  {
                    succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(ArgX2_39, ArgY2_40);
                    if (succeeded)
                    {
                      succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(ArgX3_41, ArgY3_42);
                      if (succeeded)
                      {
                        succeeded = (ArgX4_43 == ArgY4_44);
                        if (succeeded)
                          succeeded = (ArgX5_45 == ArgY5_46);
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgX1_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_48;
                MR_Word ArgX2_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_50;
                MR_Word ArgX3_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_52;
                MR_Word ArgX4_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 7);
                MR_Word ArgY4_54;
                MR_Float ArgX5_55 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5)));
                MR_Float ArgY5_56;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 7);
                  ArgY5_56 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5)));
                  succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(ArgX1_47, ArgY1_48);
                  if (succeeded)
                  {
                    succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(ArgX2_49, ArgY2_50);
                    if (succeeded)
                    {
                      succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(ArgX3_51, ArgY3_52);
                      if (succeeded)
                      {
                        succeeded = (ArgX4_53 == ArgY4_54);
                        if (succeeded)
                          succeeded = (ArgX5_55 == ArgY5_56);
                      }
                    }
                  }
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__string__parse_runtime__parse_format_string_5_p_0(
  MR_Word STATE_VARIABLE_Chars_0_27,
  MR_Word STATE_VARIABLE_PolyTypes_0_28,
  MR_Integer SpecNum_8,
  MR_Word * Specs_9,
  MR_Word * Errors_10)
{
  {
    MR_Word NonConversionSpecChars_11;
    MR_Word GatherEndedBy_12;
    MR_Word Specs0_13;

    mercury__string__parse_util__gather_non_percent_chars_3_p_0(STATE_VARIABLE_Chars_0_27, &NonConversionSpecChars_11, &GatherEndedBy_12);
    if ((GatherEndedBy_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Specs0_13 = (MR_Word) ((MR_Unsigned) 0U);
      if ((STATE_VARIABLE_PolyTypes_0_28 == (MR_Word) ((MR_Unsigned) 0U)))
        *Errors_10 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Error_16;
        MR_Integer Var_34;

        mercury__list__length_acc_3_p_0((MR_Word) (&mercury__string__string__type_ctor_info_poly_type_0), STATE_VARIABLE_PolyTypes_0_28, (MR_Integer) 0, &Var_34);
        {
          Error_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Error_16, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Error_16, 1) = ((MR_Box) (SpecNum_8));
          MR_hl_field(MR_mktag(3), Error_16, 2) = ((MR_Box) (Var_34));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Errors_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
    }
    else
    {
      MR_Word HeadSpec_17;
      MR_Word HeadErrors_18;
      MR_Word TailSpecs_19;
      MR_Word TailErrors_20;
      MR_Word STATE_VARIABLE_Chars_29_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GatherEndedBy_12, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Chars_30_30;
      MR_Word STATE_VARIABLE_PolyTypes_31_31;
      MR_Integer Var_32;

      mercury__string__parse_runtime__parse_conversion_specification_7_p_0(STATE_VARIABLE_Chars_29_29, &STATE_VARIABLE_Chars_30_30, STATE_VARIABLE_PolyTypes_0_28, &STATE_VARIABLE_PolyTypes_31_31, SpecNum_8, &HeadSpec_17, &HeadErrors_18);
      Var_32 = (MR_Integer) ((MR_Unsigned) SpecNum_8 + (MR_Unsigned) 1);
      mercury__string__parse_runtime__parse_format_string_5_p_0(STATE_VARIABLE_Chars_30_30, STATE_VARIABLE_PolyTypes_31_31, Var_32, &TailSpecs_19, &TailErrors_20);
      if ((HeadErrors_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          Specs0_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Specs0_13, 0) = ((MR_Box) (HeadSpec_17));
          MR_hl_field(MR_mktag(1), Specs0_13, 1) = ((MR_Box) (TailSpecs_19));
        }
        *Errors_10 = TailErrors_20;
      }
      else
      {
        Specs0_13 = TailSpecs_19;
        mercury__list__append_3_p_1((MR_Word) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0), HeadErrors_18, TailErrors_20, Errors_10);
      }
    }
    if ((NonConversionSpecChars_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *Specs_9 = Specs0_13;
    else
    {
      MR_String NonConversionSpecString_25;
      MR_Word StringSpec_26;

      mercury__string__from_char_list_2_p_0(NonConversionSpecChars_11, &NonConversionSpecString_25);
      {
        StringSpec_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), StringSpec_26, 0) = ((MR_Box) (NonConversionSpecString_25));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_9 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StringSpec_26));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Specs0_13));
      }
    }
  }
}

static void MR_CALL 
mercury__string__parse_runtime__parse_conversion_specification_7_p_0(
  MR_Word STATE_VARIABLE_Chars_0_20,
  MR_Word * STATE_VARIABLE_Chars_21,
  MR_Word STATE_VARIABLE_PolyTypes_0_22,
  MR_Word * STATE_VARIABLE_PolyTypes_23,
  MR_Integer SpecNum_10,
  MR_Word * Spec_11,
  MR_Word * Errors_12)
{
  {
    MR_bool succeeded;
    MR_Word Flags_14;
    MR_Word MaybeWidth_15;
    MR_Word WidthErrors_16;
    MR_Word MaybePrec_17;
    MR_Word PrecErrors_18;
    MR_Word SpecErrors_19;
    MR_Word STATE_VARIABLE_Chars_29_29;
    MR_Word STATE_VARIABLE_Chars_30_30;
    MR_Word STATE_VARIABLE_PolyTypes_31_31;
    MR_Word STATE_VARIABLE_Chars_32_32;
    MR_Word STATE_VARIABLE_PolyTypes_33_33;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_Chars_20_50;
    MR_Char Var_51;

    mercury__string__parse_util__gather_flag_chars_4_p_0(STATE_VARIABLE_Chars_0_20, &STATE_VARIABLE_Chars_29_29, (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[0]), &Flags_14);
    succeeded = (STATE_VARIABLE_Chars_29_29 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_51 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_29_29, (MR_Integer) 0)));
      STATE_VARIABLE_Chars_20_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_29_29, (MR_Integer) 1))));
      succeeded = (Var_51 == (MR_Char) 42);
    }
    if (succeeded)
    {
      STATE_VARIABLE_Chars_30_30 = STATE_VARIABLE_Chars_20_50;
      if ((STATE_VARIABLE_PolyTypes_0_22 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_52;

        MaybeWidth_15 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (SpecNum_10));
        }
        {
          WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), WidthErrors_16, 0) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(1), WidthErrors_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_PolyTypes_31_31 = STATE_VARIABLE_PolyTypes_0_22;
      }
      else
      {
        MR_Word PolyType_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_22, (MR_Integer) 0))));
        MR_Integer PolyWidth_48;

        STATE_VARIABLE_PolyTypes_31_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_22, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) PolyType_47)) == (MR_Integer) 1);
        if (succeeded)
        {
          PolyWidth_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PolyType_47, (MR_Integer) 0))));
          {
            MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeWidth_15, 0) = ((MR_Box) (PolyWidth_48));
          }
          WidthErrors_16 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word Var_55;
          MR_Word Var_56;

          MaybeWidth_15 = (MR_Word) ((MR_Unsigned) 0U);
          switch (MR_tag((MR_Word) PolyType_47)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Var_56 = (MR_Integer) 4;
              break;
            case (MR_Integer) 1:
              Var_56 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              Var_56 = (MR_Integer) 3;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), PolyType_47, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Var_56 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  Var_56 = (MR_Integer) 0;
                  break;
              }
              break;
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (SpecNum_10));
            MR_hl_field(MR_mktag(3), Var_55, 2) = (MR_Box) ((MR_Unsigned) (Var_56));
          }
          {
            WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), WidthErrors_16, 0) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(1), WidthErrors_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    else
    {
      MR_Integer Width_49;
      MR_Word STATE_VARIABLE_Chars_28_58;

      succeeded = mercury__string__parse_util__get_nonzero_number_prefix_3_p_0(STATE_VARIABLE_Chars_29_29, &STATE_VARIABLE_Chars_28_58, &Width_49);
      if (succeeded)
      {
        STATE_VARIABLE_Chars_30_30 = STATE_VARIABLE_Chars_28_58;
        {
          MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeWidth_15, 0) = ((MR_Box) (Width_49));
        }
        WidthErrors_16 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MaybeWidth_15 = (MR_Word) ((MR_Unsigned) 0U);
        WidthErrors_16 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Chars_30_30 = STATE_VARIABLE_Chars_29_29;
      }
      STATE_VARIABLE_PolyTypes_31_31 = STATE_VARIABLE_PolyTypes_0_22;
    }
    mercury__string__parse_runtime__get_optional_prec_7_p_0(STATE_VARIABLE_Chars_30_30, &STATE_VARIABLE_Chars_32_32, STATE_VARIABLE_PolyTypes_31_31, &STATE_VARIABLE_PolyTypes_33_33, SpecNum_10, &MaybePrec_17, &PrecErrors_18);
    mercury__string__parse_runtime__get_first_spec_10_p_0(STATE_VARIABLE_Chars_32_32, STATE_VARIABLE_Chars_21, STATE_VARIABLE_PolyTypes_33_33, STATE_VARIABLE_PolyTypes_23, Flags_14, MaybeWidth_15, MaybePrec_17, SpecNum_10, Spec_11, &SpecErrors_19);
    mercury__list__append_3_p_1((MR_Word) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0), PrecErrors_18, SpecErrors_19, &Var_36);
    mercury__list__append_3_p_1((MR_Word) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0), WidthErrors_16, Var_36, Errors_12);
  }
}

static void MR_CALL 
mercury__string__parse_runtime__get_first_spec_10_p_0(
  MR_Word STATE_VARIABLE_Chars_0_1,
  MR_Word * STATE_VARIABLE_Chars_2,
  MR_Word STATE_VARIABLE_PolyTypes_0_3,
  MR_Word * STATE_VARIABLE_PolyTypes_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Integer SpecNum_8,
  MR_Word * Spec_9,
  MR_Word * Errors_10)
{
  {
    MR_bool succeeded;

    if ((STATE_VARIABLE_Chars_0_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_24;
      MR_Integer Var_25;

      *Spec_9 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
      Var_25 = mercury__list__length_1_f_0((MR_Word) (&mercury__string__string__type_ctor_info_poly_type_0), STATE_VARIABLE_PolyTypes_0_3);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (SpecNum_8));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (Var_25));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Errors_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_PolyTypes_4 = STATE_VARIABLE_PolyTypes_0_3;
      *STATE_VARIABLE_Chars_2 = STATE_VARIABLE_Chars_0_1;
    }
    else
    {
      MR_Char SpecChar_35 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_1, (MR_Integer) 0)));
      MR_Word SpecPrime_36;
      MR_Word ErrorsPrime_37;
      MR_Word STATE_VARIABLE_PolyTypes_81_81;

      *STATE_VARIABLE_Chars_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_1, (MR_Integer) 1))));
      switch (SpecChar_35) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Char) 37:
          {
            SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[2]);
            ErrorsPrime_37 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_PolyTypes_81_81 = STATE_VARIABLE_PolyTypes_0_3;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 69:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_109;

              {
                Error_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_109, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_109, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_109, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_109));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_81_81 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Float Float_44;

              STATE_VARIABLE_PolyTypes_81_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_107)) == (MR_Integer) 0);
              if (succeeded)
              {
                Float_44 = MR_unbox_float((MR_hl_field(MR_mktag(0), SpecPolyType_107, (MR_Integer) 0)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = MR_box_float(Float_44);
                }
                ErrorsPrime_37 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_68;
                MR_Word Error_105;

                Var_68 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_107);
                {
                  Error_105 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_105, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_105, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_105, 2) = (MR_Box) ((MR_Unsigned) (Var_68));
                }
                SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_105));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 70:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_141;

              {
                Error_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_141, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_141, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_141, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_141));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_81_81 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_156 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Float Float_146;

              STATE_VARIABLE_PolyTypes_81_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_156)) == (MR_Integer) 0);
              if (succeeded)
              {
                Float_146 = MR_unbox_float((MR_hl_field(MR_mktag(0), SpecPolyType_156, (MR_Integer) 0)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = MR_box_float(Float_146);
                }
                ErrorsPrime_37 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_142;
                MR_Word Error_145;

                Var_142 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_156);
                {
                  Error_145 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_145, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_145, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_145, 2) = (MR_Box) ((MR_Unsigned) (Var_142));
                }
                SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_145));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 71:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_178;

              {
                Error_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_178, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_178, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_178, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_178));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_81_81 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_193 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Float Float_183;

              STATE_VARIABLE_PolyTypes_81_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_193)) == (MR_Integer) 0);
              if (succeeded)
              {
                Float_183 = MR_unbox_float((MR_hl_field(MR_mktag(0), SpecPolyType_193, (MR_Integer) 0)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = MR_box_float(Float_183);
                }
                ErrorsPrime_37 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_179;
                MR_Word Error_182;

                Var_179 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_193);
                {
                  Error_182 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_182, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_182, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_182, 2) = (MR_Box) ((MR_Unsigned) (Var_179));
                }
                SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_182));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 88:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_98;

              {
                Error_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_98, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_98, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_98, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_98));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_81_81 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Integer Int_93;

              STATE_VARIABLE_PolyTypes_81_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_95)) == (MR_Integer) 1);
              if (succeeded)
              {
                Int_93 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SpecPolyType_95, (MR_Integer) 0))));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = ((MR_Box) (Int_93));
                }
                ErrorsPrime_37 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Unsigned UInt_42;

                succeeded = ((MR_tag((MR_Word) SpecPolyType_95)) == (MR_Integer) 2);
                if (succeeded)
                {
                  UInt_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), SpecPolyType_95, (MR_Integer) 0))));
                  {
                    SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = ((MR_Box) (UInt_42));
                  }
                  ErrorsPrime_37 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  MR_Word Var_76;
                  MR_Word Error_91;

                  Var_76 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_95);
                  {
                    Error_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Error_91, 0) = ((MR_Box) (SpecNum_8));
                    MR_hl_field(MR_mktag(2), Error_91, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                    MR_hl_field(MR_mktag(2), Error_91, 2) = (MR_Box) ((MR_Unsigned) (Var_76));
                  }
                  SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                  {
                    ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_91));
                    MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 99:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_118;

              {
                Error_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_118, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_118, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_118, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_118));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_81_81 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Char Char_45;

              STATE_VARIABLE_PolyTypes_81_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((((MR_tag((MR_Word) SpecPolyType_116)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SpecPolyType_116, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Char_45 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_116, (MR_Integer) 1)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SpecPrime_36, 0) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(1), SpecPrime_36, 1) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(1), SpecPrime_36, 2) = ((MR_Box) (MR_Word) (Char_45));
                }
                ErrorsPrime_37 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_62;
                MR_Word Error_114;

                Var_62 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_116);
                {
                  Error_114 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_114, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_114, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_114, 2) = (MR_Box) ((MR_Unsigned) (Var_62));
                }
                SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_114));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 100:
        case (MR_Char) 105:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_90;

              {
                Error_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_90, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_90, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_90, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_90));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_81_81 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Integer Int_39;

              STATE_VARIABLE_PolyTypes_81_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_38)) == (MR_Integer) 1);
              if (succeeded)
              {
                Int_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SpecPolyType_38, (MR_Integer) 0))));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = ((MR_Box) (Int_39));
                }
                ErrorsPrime_37 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Error_40;
                MR_Word Var_82;

                Var_82 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_38);
                {
                  Error_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_40, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_40, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_40, 2) = (MR_Box) ((MR_Unsigned) (Var_82));
                }
                SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_40));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 101:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_215;

              {
                Error_215 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_215, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_215, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_215, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_215));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_81_81 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_230 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Float Float_220;

              STATE_VARIABLE_PolyTypes_81_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_230)) == (MR_Integer) 0);
              if (succeeded)
              {
                Float_220 = MR_unbox_float((MR_hl_field(MR_mktag(0), SpecPolyType_230, (MR_Integer) 0)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = MR_box_float(Float_220);
                }
                ErrorsPrime_37 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_216;
                MR_Word Error_219;

                Var_216 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_230);
                {
                  Error_219 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_219, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_219, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_219, 2) = (MR_Box) ((MR_Unsigned) (Var_216));
                }
                SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_219));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 102:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_252;

              {
                Error_252 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_252, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_252, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_252, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_252));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_81_81 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_267 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Float Float_257;

              STATE_VARIABLE_PolyTypes_81_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_267)) == (MR_Integer) 0);
              if (succeeded)
              {
                Float_257 = MR_unbox_float((MR_hl_field(MR_mktag(0), SpecPolyType_267, (MR_Integer) 0)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = MR_box_float(Float_257);
                }
                ErrorsPrime_37 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_253;
                MR_Word Error_256;

                Var_253 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_267);
                {
                  Error_256 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_256, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_256, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_256, 2) = (MR_Box) ((MR_Unsigned) (Var_253));
                }
                SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_256));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 103:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_289;

              {
                Error_289 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_289, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_289, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_289, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_289));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_81_81 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_304 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Float Float_294;

              STATE_VARIABLE_PolyTypes_81_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_304)) == (MR_Integer) 0);
              if (succeeded)
              {
                Float_294 = MR_unbox_float((MR_hl_field(MR_mktag(0), SpecPolyType_304, (MR_Integer) 0)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = MR_box_float(Float_294);
                }
                ErrorsPrime_37 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_290;
                MR_Word Error_293;

                Var_290 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_304);
                {
                  Error_293 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_293, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_293, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_293, 2) = (MR_Box) ((MR_Unsigned) (Var_290));
                }
                SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_293));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 111:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_326;

              {
                Error_326 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_326, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_326, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_326, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_326));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_81_81 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_348 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Integer Int_341;

              STATE_VARIABLE_PolyTypes_81_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_348)) == (MR_Integer) 1);
              if (succeeded)
              {
                Int_341 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SpecPolyType_348, (MR_Integer) 0))));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = ((MR_Box) (Int_341));
                }
                ErrorsPrime_37 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Unsigned UInt_331;

                succeeded = ((MR_tag((MR_Word) SpecPolyType_348)) == (MR_Integer) 2);
                if (succeeded)
                {
                  UInt_331 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), SpecPolyType_348, (MR_Integer) 0))));
                  {
                    SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = ((MR_Box) (UInt_331));
                  }
                  ErrorsPrime_37 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  MR_Word Var_327;
                  MR_Word Error_330;

                  Var_327 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_348);
                  {
                    Error_330 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Error_330, 0) = ((MR_Box) (SpecNum_8));
                    MR_hl_field(MR_mktag(2), Error_330, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                    MR_hl_field(MR_mktag(2), Error_330, 2) = (MR_Box) ((MR_Unsigned) (Var_327));
                  }
                  SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                  {
                    ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_330));
                    MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 112:
          {
            MR_Word STATE_VARIABLE_Flags_71_408;
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0)));

            {
              STATE_VARIABLE_Flags_71_408 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Flags_71_408, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 16U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 4))));
            }
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_373;

              {
                Error_373 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_373, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_373, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_373, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_373));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_81_81 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_395 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Integer Int_388;

              STATE_VARIABLE_PolyTypes_81_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_395)) == (MR_Integer) 1);
              if (succeeded)
              {
                Int_388 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SpecPolyType_395, (MR_Integer) 0))));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (STATE_VARIABLE_Flags_71_408));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = ((MR_Box) (Int_388));
                }
                ErrorsPrime_37 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Unsigned UInt_378;

                succeeded = ((MR_tag((MR_Word) SpecPolyType_395)) == (MR_Integer) 2);
                if (succeeded)
                {
                  UInt_378 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), SpecPolyType_395, (MR_Integer) 0))));
                  {
                    SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (STATE_VARIABLE_Flags_71_408));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = ((MR_Box) (UInt_378));
                  }
                  ErrorsPrime_37 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  MR_Word Var_374;
                  MR_Word Error_377;

                  Var_374 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_395);
                  {
                    Error_377 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Error_377, 0) = ((MR_Box) (SpecNum_8));
                    MR_hl_field(MR_mktag(2), Error_377, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                    MR_hl_field(MR_mktag(2), Error_377, 2) = (MR_Box) ((MR_Unsigned) (Var_374));
                  }
                  SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                  {
                    ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_377));
                    MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 115:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_127;

              {
                Error_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_127, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_127, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_127, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_127));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_81_81 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_String Str_46;

              STATE_VARIABLE_PolyTypes_81_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((((MR_tag((MR_Word) SpecPolyType_125)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SpecPolyType_125, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Str_46 = ((MR_String) ((MR_hl_field(MR_mktag(3), SpecPolyType_125, (MR_Integer) 1))));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), SpecPrime_36, 0) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(2), SpecPrime_36, 1) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(2), SpecPrime_36, 2) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(2), SpecPrime_36, 3) = ((MR_Box) (Str_46));
                }
                ErrorsPrime_37 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_56;
                MR_Word Error_123;

                Var_56 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_125);
                {
                  Error_123 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_123, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_123, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_123, 2) = (MR_Box) ((MR_Unsigned) (Var_56));
                }
                SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_123));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 117:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_420;

              {
                Error_420 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_420, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_420, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_420, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_420));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_81_81 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_442 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Integer Int_435;

              STATE_VARIABLE_PolyTypes_81_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_442)) == (MR_Integer) 1);
              if (succeeded)
              {
                Int_435 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SpecPolyType_442, (MR_Integer) 0))));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = ((MR_Box) (Int_435));
                }
                ErrorsPrime_37 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Unsigned UInt_425;

                succeeded = ((MR_tag((MR_Word) SpecPolyType_442)) == (MR_Integer) 2);
                if (succeeded)
                {
                  UInt_425 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), SpecPolyType_442, (MR_Integer) 0))));
                  {
                    SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = ((MR_Box) (UInt_425));
                  }
                  ErrorsPrime_37 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  MR_Word Var_421;
                  MR_Word Error_424;

                  Var_421 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_442);
                  {
                    Error_424 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Error_424, 0) = ((MR_Box) (SpecNum_8));
                    MR_hl_field(MR_mktag(2), Error_424, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                    MR_hl_field(MR_mktag(2), Error_424, 2) = (MR_Box) ((MR_Unsigned) (Var_421));
                  }
                  SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                  {
                    ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_424));
                    MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 120:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_467;

              {
                Error_467 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_467, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_467, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_467, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_467));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_81_81 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_489 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Integer Int_482;

              STATE_VARIABLE_PolyTypes_81_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_489)) == (MR_Integer) 1);
              if (succeeded)
              {
                Int_482 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SpecPolyType_489, (MR_Integer) 0))));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = ((MR_Box) (Int_482));
                }
                ErrorsPrime_37 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Unsigned UInt_472;

                succeeded = ((MR_tag((MR_Word) SpecPolyType_489)) == (MR_Integer) 2);
                if (succeeded)
                {
                  UInt_472 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), SpecPolyType_489, (MR_Integer) 0))));
                  {
                    SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = ((MR_Box) (UInt_472));
                  }
                  ErrorsPrime_37 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  MR_Word Var_468;
                  MR_Word Error_471;

                  Var_468 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_489);
                  {
                    Error_471 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Error_471, 0) = ((MR_Box) (SpecNum_8));
                    MR_hl_field(MR_mktag(2), Error_471, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                    MR_hl_field(MR_mktag(2), Error_471, 2) = (MR_Box) ((MR_Unsigned) (Var_468));
                  }
                  SpecPrime_36 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                  {
                    ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_471));
                    MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
      }
      if (succeeded)
      {
        *STATE_VARIABLE_PolyTypes_4 = STATE_VARIABLE_PolyTypes_81_81;
        *Spec_9 = SpecPrime_36;
        *Errors_10 = ErrorsPrime_37;
      }
      else
      {
        MR_Word Error_132;

        {
          Error_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Error_132, 0) = ((MR_Box) (SpecNum_8));
          MR_hl_field(MR_mktag(1), Error_132, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
        }
        *Spec_9 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Errors_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_132));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *STATE_VARIABLE_PolyTypes_4 = STATE_VARIABLE_PolyTypes_0_3;
      }
    }
  }
}

static MR_Word MR_CALL 
mercury__string__parse_runtime__poly_type_to_kind_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 4;
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 2;
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 3;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__string__parse_runtime__get_optional_prec_7_p_0(
  MR_Word STATE_VARIABLE_Chars_0_16,
  MR_Word * STATE_VARIABLE_Chars_17,
  MR_Word STATE_VARIABLE_PolyTypes_0_18,
  MR_Word * STATE_VARIABLE_PolyTypes_19,
  MR_Integer SpecNum_10,
  MR_Word * MaybePrec_11,
  MR_Word * Errors_12)
{
  {
    MR_bool succeeded = (STATE_VARIABLE_Chars_0_16 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word STATE_VARIABLE_Chars_20_20;
    MR_Char Var_21;

    if (succeeded)
    {
      Var_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_16, (MR_Integer) 0)));
      STATE_VARIABLE_Chars_20_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_16, (MR_Integer) 1))));
      succeeded = (Var_21 == (MR_Char) 46);
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Chars_22_22;
      MR_Char Var_23;

      succeeded = (STATE_VARIABLE_Chars_20_20 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_23 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_20_20, (MR_Integer) 0)));
        STATE_VARIABLE_Chars_22_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_20_20, (MR_Integer) 1))));
        succeeded = (Var_23 == (MR_Char) 42);
      }
      if (succeeded)
      {
        *STATE_VARIABLE_Chars_17 = STATE_VARIABLE_Chars_22_22;
        if ((STATE_VARIABLE_PolyTypes_0_18 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_24;

          *MaybePrec_11 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (SpecNum_10));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_19 = STATE_VARIABLE_PolyTypes_0_18;
        }
        else
        {
          MR_Word PolyType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_18, (MR_Integer) 0))));
          MR_Integer PolyPrec_14;

          *STATE_VARIABLE_PolyTypes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_18, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) PolyType_13)) == (MR_Integer) 1);
          if (succeeded)
          {
            PolyPrec_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PolyType_13, (MR_Integer) 0))));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePrec_11 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PolyPrec_14));
            }
            *Errors_12 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_27;
            MR_Word Var_28;

            *MaybePrec_11 = (MR_Word) ((MR_Unsigned) 0U);
            switch (MR_tag((MR_Word) PolyType_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Var_28 = (MR_Integer) 4;
                break;
              case (MR_Integer) 1:
                Var_28 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                Var_28 = (MR_Integer) 3;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), PolyType_13, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Var_28 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    Var_28 = (MR_Integer) 0;
                    break;
                }
                break;
            }
            {
              Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (SpecNum_10));
              MR_hl_field(MR_mktag(3), Var_27, 2) = (MR_Box) ((MR_Unsigned) (Var_28));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_27));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
      }
      else
      {
        MR_Integer Prec_15;

        mercury__string__parse_util__get_number_prefix_loop_4_p_0(STATE_VARIABLE_Chars_20_20, STATE_VARIABLE_Chars_17, (MR_Integer) 0, &Prec_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePrec_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Prec_15));
        }
        *Errors_12 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_PolyTypes_19 = STATE_VARIABLE_PolyTypes_0_18;
      }
    }
    else
    {
      *MaybePrec_11 = (MR_Word) ((MR_Unsigned) 0U);
      *Errors_12 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_PolyTypes_19 = STATE_VARIABLE_PolyTypes_0_18;
      *STATE_VARIABLE_Chars_17 = STATE_VARIABLE_Chars_0_16;
    }
  }
}

static MR_bool MR_CALL 
mercury__string__parse_runtime____Unify____string_format_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string__parse_runtime____Unify____string_format_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__string__parse_runtime____Compare____string_format_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__string__parse_runtime____Compare____string_format_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__string__parse_runtime__init(void)
{
}

void mercury__string__parse_runtime__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__string__parse_runtime__string__parse_runtime__type_ctor_info_string_format_spec_0);
}

void mercury__string__parse_runtime__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__string__parse_runtime__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module string.parse_runtime.
