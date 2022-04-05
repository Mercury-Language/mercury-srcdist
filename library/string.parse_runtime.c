/*
** Automatically generated from `string.parse_runtime.m'
** by the Mercury compiler,
** version rotd-2022-04-05
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
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_int_0_0[1];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_0;

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_int_0_1[1];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_1;

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_int_0_2[1];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_2;

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_int_0_3[1];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_3;

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_int_0_4[1];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_4;

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_int_0_0[1];

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_int_0_1[1];

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_int_0_2[1];

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_int_0_3[2];

static const MR_DuPtagLayout mercury__string__parse_runtime__string__parse_runtime__du_ptag_ordered_sized_int_0[4];

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_name_ordered_sized_int_0[5];

static const MR_Integer mercury__string__parse_runtime__string__parse_runtime__functor_number_map_sized_int_0[5];

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_uint_0_0[1];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_0;

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_uint_0_1[1];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_1;

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_uint_0_2[1];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_2;

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_uint_0_3[1];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_3;

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_uint_0_4[1];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_4;

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_uint_0_0[1];

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_uint_0_1[1];

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_uint_0_2[1];

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_uint_0_3[2];

static const MR_DuPtagLayout mercury__string__parse_runtime__string__parse_runtime__du_ptag_ordered_sized_uint_0[4];

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_name_ordered_sized_uint_0[5];

static const MR_Integer mercury__string__parse_runtime__string__parse_runtime__functor_number_map_sized_uint_0[5];

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

static MR_bool MR_CALL 
mercury__string__parse_runtime__parse_spec_9_p_0(
  MR_Char SpecChar_10,
  MR_Word STATE_VARIABLE_PolyTypes_0_48,
  MR_Word * STATE_VARIABLE_PolyTypes_49,
  MR_Word STATE_VARIABLE_Flags_0_50,
  MR_Word MaybeWidth_13,
  MR_Word MaybePrec_14,
  MR_Integer SpecNum_15,
  MR_Word * Spec_16,
  MR_Word * Errors_17);

static MR_Word MR_CALL 
mercury__string__parse_runtime__poly_type_to_kind_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
mercury__string__parse_runtime____Unify____sized_int_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_runtime____Compare____sized_int_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__parse_runtime____Unify____sized_uint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_runtime____Compare____sized_uint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__parse_runtime_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__parse_runtime_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__parse_runtime_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__parse_runtime_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__parse_runtime_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__parse_runtime_scalar_common_4[3][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row   2 */
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
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"



static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_int_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_0 = {
  (MR_String) "sized_int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__string__parse_runtime__string__parse_runtime__field_types_sized_int_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_int_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int8_0)
};

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_1 = {
  (MR_String) "sized_int8",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__string__parse_runtime__string__parse_runtime__field_types_sized_int_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_int_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int16_0)
};

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_2 = {
  (MR_String) "sized_int16",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__string__parse_runtime__string__parse_runtime__field_types_sized_int_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_int_0_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int32_0)
};

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_3 = {
  (MR_String) "sized_int32",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  mercury__string__parse_runtime__string__parse_runtime__field_types_sized_int_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_int_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int64_0)
};

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_4 = {
  (MR_String) "sized_int64",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  mercury__string__parse_runtime__string__parse_runtime__field_types_sized_int_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_int_0_0[1] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_0
};

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_int_0_1[1] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_1
};

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_int_0_2[1] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_2
};

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_int_0_3[2] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_3,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_4
};

static const MR_DuPtagLayout mercury__string__parse_runtime__string__parse_runtime__du_ptag_ordered_sized_int_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_int_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_int_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_int_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_int_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_name_ordered_sized_int_0[5] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_0,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_2,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_3,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_4,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_1
};

static const MR_Integer mercury__string__parse_runtime__string__parse_runtime__functor_number_map_sized_int_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct mercury__string__parse_runtime__string__parse_runtime__type_ctor_info_sized_int_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_runtime____Unify____sized_int_0_0_10001)),
  ((MR_Box) (mercury__string__parse_runtime____Compare____sized_int_0_0_10001)),
  (MR_String) "string.parse_runtime",
  (MR_String) "sized_int",
  { mercury__string__parse_runtime__string__parse_runtime__du_name_ordered_sized_int_0 },
  { mercury__string__parse_runtime__string__parse_runtime__du_ptag_ordered_sized_int_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  mercury__string__parse_runtime__string__parse_runtime__functor_number_map_sized_int_0,

};

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_uint_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_0 = {
  (MR_String) "sized_uint",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__string__parse_runtime__string__parse_runtime__field_types_sized_uint_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_uint_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint8_0)
};

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_1 = {
  (MR_String) "sized_uint8",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__string__parse_runtime__string__parse_runtime__field_types_sized_uint_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_uint_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint16_0)
};

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_2 = {
  (MR_String) "sized_uint16",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__string__parse_runtime__string__parse_runtime__field_types_sized_uint_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_uint_0_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint32_0)
};

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_3 = {
  (MR_String) "sized_uint32",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  mercury__string__parse_runtime__string__parse_runtime__field_types_sized_uint_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_uint_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint64_0)
};

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_4 = {
  (MR_String) "sized_uint64",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  mercury__string__parse_runtime__string__parse_runtime__field_types_sized_uint_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_uint_0_0[1] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_0
};

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_uint_0_1[1] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_1
};

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_uint_0_2[1] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_2
};

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_uint_0_3[2] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_3,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_4
};

static const MR_DuPtagLayout mercury__string__parse_runtime__string__parse_runtime__du_ptag_ordered_sized_uint_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_uint_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_uint_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_uint_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_uint_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_name_ordered_sized_uint_0[5] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_0,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_2,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_3,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_4,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_1
};

static const MR_Integer mercury__string__parse_runtime__string__parse_runtime__functor_number_map_sized_uint_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct mercury__string__parse_runtime__string__parse_runtime__type_ctor_info_sized_uint_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_runtime____Unify____sized_uint_0_0_10001)),
  ((MR_Box) (mercury__string__parse_runtime____Compare____sized_uint_0_0_10001)),
  (MR_String) "string.parse_runtime",
  (MR_String) "sized_uint",
  { mercury__string__parse_runtime__string__parse_runtime__du_name_ordered_sized_uint_0 },
  { mercury__string__parse_runtime__string__parse_runtime__du_ptag_ordered_sized_uint_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  mercury__string__parse_runtime__string__parse_runtime__functor_number_map_sized_uint_0,

};

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
  (MR_PseudoTypeInfo) (&mercury__string__parse_runtime__string__parse_runtime__type_ctor_info_sized_int_0)
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
  (MR_PseudoTypeInfo) (&mercury__string__parse_runtime__string__parse_runtime__type_ctor_info_sized_int_0)
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
  (MR_PseudoTypeInfo) (&mercury__string__parse_runtime__string__parse_runtime__type_ctor_info_sized_uint_0)
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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(4),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_runtime____Unify____string_format_spec_0_0_10001)),
  ((MR_Box) (mercury__string__parse_runtime____Compare____string_format_spec_0_0_10001)),
  (MR_String) "string.parse_runtime",
  (MR_String) "string_format_spec",
  { mercury__string__parse_runtime__string__parse_runtime__du_name_ordered_string_format_spec_0 },
  { mercury__string__parse_runtime__string__parse_runtime__du_ptag_ordered_string_format_spec_0 },
  (MR_Integer) 7,
  UINT16_C(12),
  mercury__string__parse_runtime__string__parse_runtime__functor_number_map_string_format_spec_0,

};

void MR_CALL 
mercury__string__parse_runtime____Compare____string_format_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
                MR_Integer Var_472;

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
	Var_472  = Res;
}
                succeeded = (Var_472 < (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_472 == (MR_Integer) 0);
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
                    MR_Integer Var_467;
                    MR_Integer Var_468;

{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Char Character;
	MR_Integer Int;

	Character = Var_431 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_467  = Int;
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
	Var_468  = Int;
}
                    succeeded = (Var_467 < Var_468);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_467 == Var_468);
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
                      MR_Integer Var_483;

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
	Var_483  = Res;
}
                      succeeded = (Var_483 < (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_483 == (MR_Integer) 0);
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
              MR_Word Var_440 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
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
                        MR_Word ArgY4_176 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
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
                              mercury__string__parse_runtime____Compare____sized_int_0_0(HeadVar__1_1, Var_440, ArgY4_176);
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
              MR_Word Var_453 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
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
                        MR_Word ArgY5_249 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
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
                                mercury__string__parse_runtime____Compare____sized_int_0_0(HeadVar__1_1, Var_453, ArgY5_249);
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
              MR_Word Var_448 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
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
                        MR_Word ArgY5_325 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
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
                                mercury__string__parse_runtime____Compare____sized_uint_0_0(HeadVar__1_1, Var_448, ArgY5_325);
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

MR_bool MR_CALL 
mercury__string__parse_runtime____Unify____string_format_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
              MR_Word ArgX4_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
              MR_Word ArgY4_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                ArgY4_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(ArgX1_19, ArgY1_20);
                if (succeeded)
                {
                  succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(ArgX2_21, ArgY2_22);
                  if (succeeded)
                  {
                    succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(ArgX3_23, ArgY3_24);
                    if (succeeded)
                      succeeded = mercury__string__parse_runtime____Unify____sized_int_0_0(ArgX4_25, ArgY4_26);
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
              MR_Word ArgX5_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
              MR_Word ArgY5_36;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                ArgY4_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 7);
                ArgY5_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
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
                        succeeded = mercury__string__parse_runtime____Unify____sized_int_0_0(ArgX5_35, ArgY5_36);
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
              MR_Word ArgX5_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
              MR_Word ArgY5_46;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                ArgY4_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 7);
                ArgY5_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
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
                        succeeded = mercury__string__parse_runtime____Unify____sized_uint_0_0(ArgX5_45, ArgY5_46);
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

void MR_CALL 
mercury__string__parse_runtime____Compare____sized_uint_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_54 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_55 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_54 == CastY_55);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Unsigned Var_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Unsigned ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_61 < ArgY1_5);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_61 == ArgY1_5);
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
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          uint8_t Var_65 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                uint8_t ArgY1_17 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

                succeeded = (Var_65 < ArgY1_17);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_65 == ArgY1_17);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 0;
                  else
                    *HeadVar__1_1 = (MR_Integer) 2;
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
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          uint16_t Var_62 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                uint16_t ArgY1_29 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));

                succeeded = (Var_62 < ArgY1_29);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_62 == ArgY1_29);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 0;
                  else
                    *HeadVar__1_1 = (MR_Integer) 2;
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
              uint32_t Var_63 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                        uint32_t ArgY1_41 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

                        succeeded = (Var_63 < ArgY1_41);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_63 == ArgY1_41);
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
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              uint64_t Var_64 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                        uint64_t ArgY1_53 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

                        succeeded = (Var_64 < ArgY1_53);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_64 == ArgY1_53);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *HeadVar__1_1 = (MR_Integer) 2;
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

MR_bool MR_CALL 
mercury__string__parse_runtime____Unify____sized_uint_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Unsigned ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
          MR_Unsigned ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          uint8_t ArgX1_5 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
          uint8_t ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          uint16_t ArgX1_7 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
          uint16_t ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              uint32_t ArgX1_9 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              uint32_t ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_9 == ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              uint64_t ArgX1_11 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              uint64_t ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_11 == ArgY1_12);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__string__parse_runtime____Compare____sized_int_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_54 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_55 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_54 == CastY_55);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_61 < ArgY1_5);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_61 == ArgY1_5);
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
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          int8_t Var_65 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                int8_t ArgY1_17 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

                succeeded = (Var_65 < ArgY1_17);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_65 == ArgY1_17);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 0;
                  else
                    *HeadVar__1_1 = (MR_Integer) 2;
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
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          int16_t Var_62 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                int16_t ArgY1_29 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));

                succeeded = (Var_62 < ArgY1_29);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_62 == ArgY1_29);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 0;
                  else
                    *HeadVar__1_1 = (MR_Integer) 2;
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
              int32_t Var_63 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                        int32_t ArgY1_41 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

                        succeeded = (Var_63 < ArgY1_41);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_63 == ArgY1_41);
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
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              int64_t Var_64 = MR_unbox_int64((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                        int64_t ArgY1_53 = MR_unbox_int64((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

                        succeeded = (Var_64 < ArgY1_53);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_64 == ArgY1_53);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *HeadVar__1_1 = (MR_Integer) 2;
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

MR_bool MR_CALL 
mercury__string__parse_runtime____Unify____sized_int_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          int8_t ArgX1_5 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
          int8_t ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          int16_t ArgX1_7 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
          int16_t ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              int32_t ArgX1_9 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              int32_t ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_9 == ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              int64_t ArgX1_11 = MR_unbox_int64((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              int64_t ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = MR_unbox_int64((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_11 == ArgY1_12);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__string__parse_runtime__parse_format_string_5_p_0(
  MR_Word STATE_VARIABLE_Chars_0_27,
  MR_Word STATE_VARIABLE_PolyTypes_0_28,
  MR_Integer SpecNum_8,
  MR_Word * Specs_9,
  MR_Word * Errors_10)
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
  MR_Word STATE_VARIABLE_Chars_20_72;
  MR_Char Var_73;

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
        Var_56 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(PolyType_47);
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
  succeeded = (STATE_VARIABLE_Chars_30_30 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_73 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_30_30, (MR_Integer) 0)));
    STATE_VARIABLE_Chars_20_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_30_30, (MR_Integer) 1))));
    succeeded = (Var_73 == (MR_Char) 46);
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Chars_22_74;
    MR_Char Var_75;

    succeeded = (STATE_VARIABLE_Chars_20_72 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_75 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_20_72, (MR_Integer) 0)));
      STATE_VARIABLE_Chars_22_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_20_72, (MR_Integer) 1))));
      succeeded = (Var_75 == (MR_Char) 42);
    }
    if (succeeded)
    {
      STATE_VARIABLE_Chars_32_32 = STATE_VARIABLE_Chars_22_74;
      if ((STATE_VARIABLE_PolyTypes_31_31 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_76;

        MaybePrec_17 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (SpecNum_10));
        }
        {
          PrecErrors_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PrecErrors_18, 0) = ((MR_Box) (Var_76));
          MR_hl_field(MR_mktag(1), PrecErrors_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_PolyTypes_33_33 = STATE_VARIABLE_PolyTypes_31_31;
      }
      else
      {
        MR_Word PolyType_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_31_31, (MR_Integer) 0))));
        MR_Integer PolyPrec_70;

        STATE_VARIABLE_PolyTypes_33_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_31_31, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) PolyType_69)) == (MR_Integer) 1);
        if (succeeded)
        {
          PolyPrec_70 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PolyType_69, (MR_Integer) 0))));
          {
            MaybePrec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybePrec_17, 0) = ((MR_Box) (PolyPrec_70));
          }
          PrecErrors_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word Var_79;
          MR_Word Var_80;

          MaybePrec_17 = (MR_Word) ((MR_Unsigned) 0U);
          Var_80 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(PolyType_69);
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (SpecNum_10));
            MR_hl_field(MR_mktag(3), Var_79, 2) = (MR_Box) ((MR_Unsigned) (Var_80));
          }
          {
            PrecErrors_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PrecErrors_18, 0) = ((MR_Box) (Var_79));
            MR_hl_field(MR_mktag(1), PrecErrors_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    else
    {
      MR_Integer Prec_71;

      mercury__string__parse_util__get_number_prefix_loop_4_p_0(STATE_VARIABLE_Chars_20_72, &STATE_VARIABLE_Chars_32_32, (MR_Integer) 0, &Prec_71);
      {
        MaybePrec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybePrec_17, 0) = ((MR_Box) (Prec_71));
      }
      PrecErrors_18 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_PolyTypes_33_33 = STATE_VARIABLE_PolyTypes_31_31;
    }
  }
  else
  {
    MaybePrec_17 = (MR_Word) ((MR_Unsigned) 0U);
    PrecErrors_18 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_PolyTypes_33_33 = STATE_VARIABLE_PolyTypes_31_31;
    STATE_VARIABLE_Chars_32_32 = STATE_VARIABLE_Chars_30_30;
  }
  mercury__string__parse_runtime__get_first_spec_10_p_0(STATE_VARIABLE_Chars_32_32, STATE_VARIABLE_Chars_21, STATE_VARIABLE_PolyTypes_33_33, STATE_VARIABLE_PolyTypes_23, Flags_14, MaybeWidth_15, MaybePrec_17, SpecNum_10, Spec_11, &SpecErrors_19);
  mercury__list__append_3_p_1((MR_Word) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0), PrecErrors_18, SpecErrors_19, &Var_36);
  *Errors_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0), WidthErrors_16, Var_36);
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
  MR_bool succeeded;

  if ((STATE_VARIABLE_Chars_0_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_24;
    MR_Integer Var_25;

    *Spec_9 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
    mercury__list__length_acc_3_p_0((MR_Word) (&mercury__string__string__type_ctor_info_poly_type_0), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0, &Var_25);
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
    MR_Word STATE_VARIABLE_PolyTypes_45_45;

    *STATE_VARIABLE_Chars_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_1, (MR_Integer) 1))));
    succeeded = mercury__string__parse_runtime__parse_spec_9_p_0(SpecChar_35, STATE_VARIABLE_PolyTypes_0_3, &STATE_VARIABLE_PolyTypes_45_45, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, SpecNum_8, &SpecPrime_36, &ErrorsPrime_37);
    if (succeeded)
    {
      *STATE_VARIABLE_PolyTypes_4 = STATE_VARIABLE_PolyTypes_45_45;
      *Spec_9 = SpecPrime_36;
      *Errors_10 = ErrorsPrime_37;
    }
    else
    {
      MR_Word Error_38;

      {
        Error_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Error_38, 0) = ((MR_Box) (SpecNum_8));
        MR_hl_field(MR_mktag(1), Error_38, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
      }
      *Spec_9 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Errors_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_38));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_PolyTypes_4 = STATE_VARIABLE_PolyTypes_0_3;
    }
  }
}

static MR_bool MR_CALL 
mercury__string__parse_runtime__parse_spec_9_p_0(
  MR_Char SpecChar_10,
  MR_Word STATE_VARIABLE_PolyTypes_0_48,
  MR_Word * STATE_VARIABLE_PolyTypes_49,
  MR_Word STATE_VARIABLE_Flags_0_50,
  MR_Word MaybeWidth_13,
  MR_Word MaybePrec_14,
  MR_Integer SpecNum_15,
  MR_Word * Spec_16,
  MR_Word * Errors_17)
{
  MR_bool succeeded;

  switch (SpecChar_10) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 37:
      {
        *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[2]);
        *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 69:
      {
        if ((STATE_VARIABLE_PolyTypes_0_48 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_138;

          {
            Error_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Error_138, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Error_138, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(MR_mktag(3), Error_138, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_138));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));
          MR_Float Float_45;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_136)) == (MR_Integer) 0);
          if (succeeded)
          {
            Float_45 = MR_unbox_float((MR_hl_field(MR_mktag(0), SpecPolyType_136, (MR_Integer) 0)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
              MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 5) = MR_box_float(Float_45);
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_66;
            MR_Word Error_134;

            Var_66 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_136);
            {
              Error_134 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Error_134, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(MR_mktag(2), Error_134, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(MR_mktag(2), Error_134, 2) = (MR_Box) ((MR_Unsigned) (Var_66));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_134));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 70:
      {
        if ((STATE_VARIABLE_PolyTypes_0_48 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_168;

          {
            Error_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Error_168, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Error_168, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(MR_mktag(3), Error_168, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_168));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_183 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));
          MR_Float Float_173;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_183)) == (MR_Integer) 0);
          if (succeeded)
          {
            Float_173 = MR_unbox_float((MR_hl_field(MR_mktag(0), SpecPolyType_183, (MR_Integer) 0)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
              MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), base, 5) = MR_box_float(Float_173);
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_169;
            MR_Word Error_172;

            Var_169 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_183);
            {
              Error_172 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Error_172, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(MR_mktag(2), Error_172, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(MR_mktag(2), Error_172, 2) = (MR_Box) ((MR_Unsigned) (Var_169));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_172));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 71:
      {
        if ((STATE_VARIABLE_PolyTypes_0_48 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_205;

          {
            Error_205 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Error_205, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Error_205, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(MR_mktag(3), Error_205, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_205));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_220 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));
          MR_Float Float_210;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_220)) == (MR_Integer) 0);
          if (succeeded)
          {
            Float_210 = MR_unbox_float((MR_hl_field(MR_mktag(0), SpecPolyType_220, (MR_Integer) 0)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
              MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), base, 5) = MR_box_float(Float_210);
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_206;
            MR_Word Error_209;

            Var_206 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_220);
            {
              Error_209 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Error_209, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(MR_mktag(2), Error_209, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(MR_mktag(2), Error_209, 2) = (MR_Box) ((MR_Unsigned) (Var_206));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_209));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 88:
      {
        if ((STATE_VARIABLE_PolyTypes_0_48 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_117;

          {
            Error_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Error_117, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Error_117, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(MR_mktag(3), Error_117, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_117));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          switch (MR_tag((MR_Word) SpecPolyType_109)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_74;
                MR_Word Error_101;

                Var_74 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_109);
                {
                  Error_101 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_101, 0) = ((MR_Box) (SpecNum_15));
                  MR_hl_field(MR_mktag(2), Error_101, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                  MR_hl_field(MR_mktag(2), Error_101, 2) = (MR_Box) ((MR_Unsigned) (Var_74));
                }
                *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_17 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_101));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Int_85 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SpecPolyType_109, (MR_Integer) 0))));
                MR_Word SizedInt_96;

                {
                  SizedInt_96 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SizedInt_96, 0) = ((MR_Box) (Int_85));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_96));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                int8_t Int8_86 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), SpecPolyType_109, (MR_Integer) 0)));
                MR_Word SizedInt_243;

                {
                  SizedInt_243 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SizedInt_243, 0) = ((MR_Box) (MR_Word) (Int8_86));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_243));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SpecPolyType_109, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    int16_t Int16_87 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_109, (MR_Integer) 1)));
                    MR_Word SizedInt_240;

                    {
                      SizedInt_240 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), SizedInt_240, 0) = ((MR_Box) (MR_Word) (Int16_87));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_240));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int32_t Int32_88 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_109, (MR_Integer) 1)));
                    MR_Word SizedInt_241;

                    {
                      SizedInt_241 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedInt_241, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), SizedInt_241, 1) = ((MR_Box) (MR_Word) (Int32_88));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_241));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int64_t Int64_89 = MR_unbox_int64((MR_hl_field(MR_mktag(3), SpecPolyType_109, (MR_Integer) 1)));
                    MR_Word SizedInt_242;

                    {
                      SizedInt_242 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedInt_242, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), SizedInt_242, 1) = MR_box_int64(Int64_89);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_242));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Unsigned UInt_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), SpecPolyType_109, (MR_Integer) 1))));
                    MR_Word SizedUInt_36;

                    {
                      SizedUInt_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), SizedUInt_36, 0) = ((MR_Box) (UInt_35));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_36));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    uint8_t UInt8_37 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_109, (MR_Integer) 1)));
                    MR_Word SizedUInt_247;

                    {
                      SizedUInt_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), SizedUInt_247, 0) = ((MR_Box) (MR_Word) (UInt8_37));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_247));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    uint16_t UInt16_38 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_109, (MR_Integer) 1)));
                    MR_Word SizedUInt_244;

                    {
                      SizedUInt_244 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), SizedUInt_244, 0) = ((MR_Box) (MR_Word) (UInt16_38));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_244));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    uint32_t UInt32_39 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_109, (MR_Integer) 1)));
                    MR_Word SizedUInt_245;

                    {
                      SizedUInt_245 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedUInt_245, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), SizedUInt_245, 1) = ((MR_Box) (MR_Word) (UInt32_39));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_245));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    uint64_t UInt64_40 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), SpecPolyType_109, (MR_Integer) 1)));
                    MR_Word SizedUInt_246;

                    {
                      SizedUInt_246 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedUInt_246, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), SizedUInt_246, 1) = MR_box_uint64(UInt64_40);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_246));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Var_74;
                    MR_Word Error_101;

                    Var_74 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_109);
                    {
                      Error_101 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Error_101, 0) = ((MR_Box) (SpecNum_15));
                      MR_hl_field(MR_mktag(2), Error_101, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                      MR_hl_field(MR_mktag(2), Error_101, 2) = (MR_Box) ((MR_Unsigned) (Var_74));
                    }
                    *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_17 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_101));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
              }
              break;
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 99:
      {
        if ((STATE_VARIABLE_PolyTypes_0_48 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_147;

          {
            Error_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Error_147, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Error_147, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(MR_mktag(3), Error_147, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_147));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_145 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));
          MR_Char Char_46;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) SpecPolyType_145)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SpecPolyType_145, (MR_Integer) 0)))) == (MR_Integer) 9)));
          if (succeeded)
          {
            Char_46 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_145, (MR_Integer) 1)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_Word) (Char_46));
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_60;
            MR_Word Error_143;

            Var_60 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_145);
            {
              Error_143 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Error_143, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(MR_mktag(2), Error_143, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(MR_mktag(2), Error_143, 2) = (MR_Box) ((MR_Unsigned) (Var_60));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_143));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 100:
    case (MR_Char) 105:
      {
        if ((STATE_VARIABLE_PolyTypes_0_48 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_84;

          {
            Error_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Error_84, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Error_84, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(MR_mktag(3), Error_84, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_84));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          switch (MR_tag((MR_Word) SpecPolyType_18)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Error_33;
                MR_Word Var_80;

                Var_80 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_18);
                {
                  Error_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_33, 0) = ((MR_Box) (SpecNum_15));
                  MR_hl_field(MR_mktag(2), Error_33, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                  MR_hl_field(MR_mktag(2), Error_33, 2) = (MR_Box) ((MR_Unsigned) (Var_80));
                }
                *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_17 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_33));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Int_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SpecPolyType_18, (MR_Integer) 0))));
                MR_Word SizedInt_20;

                {
                  SizedInt_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SizedInt_20, 0) = ((MR_Box) (Int_19));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (SizedInt_20));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                int8_t Int8_21 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), SpecPolyType_18, (MR_Integer) 0)));
                MR_Word SizedInt_251;

                {
                  SizedInt_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SizedInt_251, 0) = ((MR_Box) (MR_Word) (Int8_21));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (SizedInt_251));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SpecPolyType_18, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    int16_t Int16_22 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_18, (MR_Integer) 1)));
                    MR_Word SizedInt_248;

                    {
                      SizedInt_248 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), SizedInt_248, 0) = ((MR_Box) (MR_Word) (Int16_22));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (SizedInt_248));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int32_t Int32_23 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_18, (MR_Integer) 1)));
                    MR_Word SizedInt_249;

                    {
                      SizedInt_249 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedInt_249, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), SizedInt_249, 1) = ((MR_Box) (MR_Word) (Int32_23));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (SizedInt_249));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int64_t Int64_24 = MR_unbox_int64((MR_hl_field(MR_mktag(3), SpecPolyType_18, (MR_Integer) 1)));
                    MR_Word SizedInt_250;

                    {
                      SizedInt_250 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedInt_250, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), SizedInt_250, 1) = MR_box_int64(Int64_24);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (SizedInt_250));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                case (MR_Integer) 4:
                case (MR_Integer) 5:
                case (MR_Integer) 6:
                case (MR_Integer) 7:
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Error_33;
                    MR_Word Var_80;

                    Var_80 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_18);
                    {
                      Error_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Error_33, 0) = ((MR_Box) (SpecNum_15));
                      MR_hl_field(MR_mktag(2), Error_33, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                      MR_hl_field(MR_mktag(2), Error_33, 2) = (MR_Box) ((MR_Unsigned) (Var_80));
                    }
                    *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_17 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_33));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
              }
              break;
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 101:
      {
        if ((STATE_VARIABLE_PolyTypes_0_48 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_254;

          {
            Error_254 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Error_254, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Error_254, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(MR_mktag(3), Error_254, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_254));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_269 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));
          MR_Float Float_259;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_269)) == (MR_Integer) 0);
          if (succeeded)
          {
            Float_259 = MR_unbox_float((MR_hl_field(MR_mktag(0), SpecPolyType_269, (MR_Integer) 0)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
              MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), base, 5) = MR_box_float(Float_259);
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_255;
            MR_Word Error_258;

            Var_255 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_269);
            {
              Error_258 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Error_258, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(MR_mktag(2), Error_258, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(MR_mktag(2), Error_258, 2) = (MR_Box) ((MR_Unsigned) (Var_255));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_258));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 102:
      {
        if ((STATE_VARIABLE_PolyTypes_0_48 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_291;

          {
            Error_291 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Error_291, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Error_291, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(MR_mktag(3), Error_291, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_291));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_306 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));
          MR_Float Float_296;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_306)) == (MR_Integer) 0);
          if (succeeded)
          {
            Float_296 = MR_unbox_float((MR_hl_field(MR_mktag(0), SpecPolyType_306, (MR_Integer) 0)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
              MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 5) = MR_box_float(Float_296);
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_292;
            MR_Word Error_295;

            Var_292 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_306);
            {
              Error_295 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Error_295, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(MR_mktag(2), Error_295, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(MR_mktag(2), Error_295, 2) = (MR_Box) ((MR_Unsigned) (Var_292));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_295));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 103:
      {
        if ((STATE_VARIABLE_PolyTypes_0_48 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_328;

          {
            Error_328 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Error_328, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Error_328, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(MR_mktag(3), Error_328, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_328));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_343 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));
          MR_Float Float_333;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_343)) == (MR_Integer) 0);
          if (succeeded)
          {
            Float_333 = MR_unbox_float((MR_hl_field(MR_mktag(0), SpecPolyType_343, (MR_Integer) 0)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
              MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 5) = MR_box_float(Float_333);
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_329;
            MR_Word Error_332;

            Var_329 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_343);
            {
              Error_332 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Error_332, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(MR_mktag(2), Error_332, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(MR_mktag(2), Error_332, 2) = (MR_Box) ((MR_Unsigned) (Var_329));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_332));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 111:
      {
        if ((STATE_VARIABLE_PolyTypes_0_48 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_365;

          {
            Error_365 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Error_365, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Error_365, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(MR_mktag(3), Error_365, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_365));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_422 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          switch (MR_tag((MR_Word) SpecPolyType_422)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_366;
                MR_Word Error_369;

                Var_366 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_422);
                {
                  Error_369 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_369, 0) = ((MR_Box) (SpecNum_15));
                  MR_hl_field(MR_mktag(2), Error_369, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                  MR_hl_field(MR_mktag(2), Error_369, 2) = (MR_Box) ((MR_Unsigned) (Var_366));
                }
                *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_17 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_369));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Int_370 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SpecPolyType_422, (MR_Integer) 0))));
                MR_Word SizedInt_371;

                {
                  SizedInt_371 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SizedInt_371, 0) = ((MR_Box) (Int_370));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_371));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                int8_t Int8_378 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), SpecPolyType_422, (MR_Integer) 0)));
                MR_Word SizedInt_379;

                {
                  SizedInt_379 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SizedInt_379, 0) = ((MR_Box) (MR_Word) (Int8_378));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_379));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SpecPolyType_422, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    int16_t Int16_372 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_422, (MR_Integer) 1)));
                    MR_Word SizedInt_373;

                    {
                      SizedInt_373 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), SizedInt_373, 0) = ((MR_Box) (MR_Word) (Int16_372));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_373));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int32_t Int32_374 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_422, (MR_Integer) 1)));
                    MR_Word SizedInt_375;

                    {
                      SizedInt_375 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedInt_375, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), SizedInt_375, 1) = ((MR_Box) (MR_Word) (Int32_374));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_375));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int64_t Int64_376 = MR_unbox_int64((MR_hl_field(MR_mktag(3), SpecPolyType_422, (MR_Integer) 1)));
                    MR_Word SizedInt_377;

                    {
                      SizedInt_377 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedInt_377, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), SizedInt_377, 1) = MR_box_int64(Int64_376);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_377));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Unsigned UInt_380 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), SpecPolyType_422, (MR_Integer) 1))));
                    MR_Word SizedUInt_381;

                    {
                      SizedUInt_381 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), SizedUInt_381, 0) = ((MR_Box) (UInt_380));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_381));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word SizedUInt_388;
                    uint8_t UInt8_389 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_422, (MR_Integer) 1)));

                    {
                      SizedUInt_388 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), SizedUInt_388, 0) = ((MR_Box) (MR_Word) (UInt8_389));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_388));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word SizedUInt_382;
                    uint16_t UInt16_383 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_422, (MR_Integer) 1)));

                    {
                      SizedUInt_382 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), SizedUInt_382, 0) = ((MR_Box) (MR_Word) (UInt16_383));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_382));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word SizedUInt_384;
                    uint32_t UInt32_385 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_422, (MR_Integer) 1)));

                    {
                      SizedUInt_384 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedUInt_384, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), SizedUInt_384, 1) = ((MR_Box) (MR_Word) (UInt32_385));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_384));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word SizedUInt_386;
                    uint64_t UInt64_387 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), SpecPolyType_422, (MR_Integer) 1)));

                    {
                      SizedUInt_386 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedUInt_386, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), SizedUInt_386, 1) = MR_box_uint64(UInt64_387);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_386));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Var_366;
                    MR_Word Error_369;

                    Var_366 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_422);
                    {
                      Error_369 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Error_369, 0) = ((MR_Box) (SpecNum_15));
                      MR_hl_field(MR_mktag(2), Error_369, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                      MR_hl_field(MR_mktag(2), Error_369, 2) = (MR_Box) ((MR_Unsigned) (Var_366));
                    }
                    *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_17 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_369));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
              }
              break;
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 112:
      {
        MR_Word STATE_VARIABLE_Flags_69_552;
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Flags_0_50, (MR_Integer) 0)));

        {
          STATE_VARIABLE_Flags_69_552 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Flags_69_552, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 16U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 4))));
        }
        if ((STATE_VARIABLE_PolyTypes_0_48 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_467;

          {
            Error_467 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Error_467, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Error_467, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(MR_mktag(3), Error_467, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_467));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_524 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          switch (MR_tag((MR_Word) SpecPolyType_524)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_468;
                MR_Word Error_471;

                Var_468 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_524);
                {
                  Error_471 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_471, 0) = ((MR_Box) (SpecNum_15));
                  MR_hl_field(MR_mktag(2), Error_471, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                  MR_hl_field(MR_mktag(2), Error_471, 2) = (MR_Box) ((MR_Unsigned) (Var_468));
                }
                *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_17 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_471));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Int_472 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SpecPolyType_524, (MR_Integer) 0))));
                MR_Word SizedInt_473;

                {
                  SizedInt_473 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SizedInt_473, 0) = ((MR_Box) (Int_472));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_69_552));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_473));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                int8_t Int8_480 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), SpecPolyType_524, (MR_Integer) 0)));
                MR_Word SizedInt_481;

                {
                  SizedInt_481 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SizedInt_481, 0) = ((MR_Box) (MR_Word) (Int8_480));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_69_552));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_481));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SpecPolyType_524, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    int16_t Int16_474 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_524, (MR_Integer) 1)));
                    MR_Word SizedInt_475;

                    {
                      SizedInt_475 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), SizedInt_475, 0) = ((MR_Box) (MR_Word) (Int16_474));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_69_552));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_475));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int32_t Int32_476 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_524, (MR_Integer) 1)));
                    MR_Word SizedInt_477;

                    {
                      SizedInt_477 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedInt_477, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), SizedInt_477, 1) = ((MR_Box) (MR_Word) (Int32_476));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_69_552));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_477));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int64_t Int64_478 = MR_unbox_int64((MR_hl_field(MR_mktag(3), SpecPolyType_524, (MR_Integer) 1)));
                    MR_Word SizedInt_479;

                    {
                      SizedInt_479 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedInt_479, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), SizedInt_479, 1) = MR_box_int64(Int64_478);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_69_552));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_479));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Unsigned UInt_482 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), SpecPolyType_524, (MR_Integer) 1))));
                    MR_Word SizedUInt_483;

                    {
                      SizedUInt_483 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), SizedUInt_483, 0) = ((MR_Box) (UInt_482));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_69_552));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_483));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word SizedUInt_490;
                    uint8_t UInt8_491 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_524, (MR_Integer) 1)));

                    {
                      SizedUInt_490 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), SizedUInt_490, 0) = ((MR_Box) (MR_Word) (UInt8_491));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_69_552));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_490));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word SizedUInt_484;
                    uint16_t UInt16_485 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_524, (MR_Integer) 1)));

                    {
                      SizedUInt_484 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), SizedUInt_484, 0) = ((MR_Box) (MR_Word) (UInt16_485));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_69_552));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_484));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word SizedUInt_486;
                    uint32_t UInt32_487 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_524, (MR_Integer) 1)));

                    {
                      SizedUInt_486 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedUInt_486, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), SizedUInt_486, 1) = ((MR_Box) (MR_Word) (UInt32_487));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_69_552));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_486));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word SizedUInt_488;
                    uint64_t UInt64_489 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), SpecPolyType_524, (MR_Integer) 1)));

                    {
                      SizedUInt_488 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedUInt_488, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), SizedUInt_488, 1) = MR_box_uint64(UInt64_489);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_69_552));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_488));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Var_468;
                    MR_Word Error_471;

                    Var_468 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_524);
                    {
                      Error_471 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Error_471, 0) = ((MR_Box) (SpecNum_15));
                      MR_hl_field(MR_mktag(2), Error_471, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                      MR_hl_field(MR_mktag(2), Error_471, 2) = (MR_Box) ((MR_Unsigned) (Var_468));
                    }
                    *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_17 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_471));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
              }
              break;
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 115:
      {
        if ((STATE_VARIABLE_PolyTypes_0_48 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_156;

          {
            Error_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Error_156, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Error_156, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(MR_mktag(3), Error_156, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_156));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_154 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));
          MR_String Str_47;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) SpecPolyType_154)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SpecPolyType_154, (MR_Integer) 0)))) == (MR_Integer) 8)));
          if (succeeded)
          {
            Str_47 = ((MR_String) ((MR_hl_field(MR_mktag(3), SpecPolyType_154, (MR_Integer) 1))));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (MaybePrec_14));
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Str_47));
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_54;
            MR_Word Error_152;

            Var_54 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_154);
            {
              Error_152 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Error_152, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(MR_mktag(2), Error_152, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(MR_mktag(2), Error_152, 2) = (MR_Box) ((MR_Unsigned) (Var_54));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_152));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 117:
      {
        if ((STATE_VARIABLE_PolyTypes_0_48 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_569;

          {
            Error_569 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Error_569, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Error_569, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(MR_mktag(3), Error_569, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_569));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_626 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          switch (MR_tag((MR_Word) SpecPolyType_626)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_570;
                MR_Word Error_573;

                Var_570 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_626);
                {
                  Error_573 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_573, 0) = ((MR_Box) (SpecNum_15));
                  MR_hl_field(MR_mktag(2), Error_573, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                  MR_hl_field(MR_mktag(2), Error_573, 2) = (MR_Box) ((MR_Unsigned) (Var_570));
                }
                *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_17 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_573));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Int_574 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SpecPolyType_626, (MR_Integer) 0))));
                MR_Word SizedInt_575;

                {
                  SizedInt_575 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SizedInt_575, 0) = ((MR_Box) (Int_574));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_575));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                int8_t Int8_582 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), SpecPolyType_626, (MR_Integer) 0)));
                MR_Word SizedInt_583;

                {
                  SizedInt_583 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SizedInt_583, 0) = ((MR_Box) (MR_Word) (Int8_582));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_583));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SpecPolyType_626, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    int16_t Int16_576 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_626, (MR_Integer) 1)));
                    MR_Word SizedInt_577;

                    {
                      SizedInt_577 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), SizedInt_577, 0) = ((MR_Box) (MR_Word) (Int16_576));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_577));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int32_t Int32_578 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_626, (MR_Integer) 1)));
                    MR_Word SizedInt_579;

                    {
                      SizedInt_579 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedInt_579, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), SizedInt_579, 1) = ((MR_Box) (MR_Word) (Int32_578));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_579));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int64_t Int64_580 = MR_unbox_int64((MR_hl_field(MR_mktag(3), SpecPolyType_626, (MR_Integer) 1)));
                    MR_Word SizedInt_581;

                    {
                      SizedInt_581 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedInt_581, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), SizedInt_581, 1) = MR_box_int64(Int64_580);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_581));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Unsigned UInt_584 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), SpecPolyType_626, (MR_Integer) 1))));
                    MR_Word SizedUInt_585;

                    {
                      SizedUInt_585 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), SizedUInt_585, 0) = ((MR_Box) (UInt_584));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_585));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word SizedUInt_592;
                    uint8_t UInt8_593 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_626, (MR_Integer) 1)));

                    {
                      SizedUInt_592 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), SizedUInt_592, 0) = ((MR_Box) (MR_Word) (UInt8_593));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_592));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word SizedUInt_586;
                    uint16_t UInt16_587 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_626, (MR_Integer) 1)));

                    {
                      SizedUInt_586 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), SizedUInt_586, 0) = ((MR_Box) (MR_Word) (UInt16_587));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_586));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word SizedUInt_588;
                    uint32_t UInt32_589 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_626, (MR_Integer) 1)));

                    {
                      SizedUInt_588 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedUInt_588, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), SizedUInt_588, 1) = ((MR_Box) (MR_Word) (UInt32_589));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_588));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word SizedUInt_590;
                    uint64_t UInt64_591 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), SpecPolyType_626, (MR_Integer) 1)));

                    {
                      SizedUInt_590 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedUInt_590, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), SizedUInt_590, 1) = MR_box_uint64(UInt64_591);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_590));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Var_570;
                    MR_Word Error_573;

                    Var_570 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_626);
                    {
                      Error_573 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Error_573, 0) = ((MR_Box) (SpecNum_15));
                      MR_hl_field(MR_mktag(2), Error_573, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                      MR_hl_field(MR_mktag(2), Error_573, 2) = (MR_Box) ((MR_Unsigned) (Var_570));
                    }
                    *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_17 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_573));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
              }
              break;
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 120:
      {
        if ((STATE_VARIABLE_PolyTypes_0_48 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_671;

          {
            Error_671 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Error_671, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Error_671, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(MR_mktag(3), Error_671, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_671));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_728 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          switch (MR_tag((MR_Word) SpecPolyType_728)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_672;
                MR_Word Error_675;

                Var_672 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_728);
                {
                  Error_675 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_675, 0) = ((MR_Box) (SpecNum_15));
                  MR_hl_field(MR_mktag(2), Error_675, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                  MR_hl_field(MR_mktag(2), Error_675, 2) = (MR_Box) ((MR_Unsigned) (Var_672));
                }
                *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_17 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_675));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Int_676 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SpecPolyType_728, (MR_Integer) 0))));
                MR_Word SizedInt_677;

                {
                  SizedInt_677 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SizedInt_677, 0) = ((MR_Box) (Int_676));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_677));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                int8_t Int8_684 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), SpecPolyType_728, (MR_Integer) 0)));
                MR_Word SizedInt_685;

                {
                  SizedInt_685 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SizedInt_685, 0) = ((MR_Box) (MR_Word) (Int8_684));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_685));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SpecPolyType_728, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    int16_t Int16_678 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_728, (MR_Integer) 1)));
                    MR_Word SizedInt_679;

                    {
                      SizedInt_679 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), SizedInt_679, 0) = ((MR_Box) (MR_Word) (Int16_678));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_679));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int32_t Int32_680 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_728, (MR_Integer) 1)));
                    MR_Word SizedInt_681;

                    {
                      SizedInt_681 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedInt_681, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), SizedInt_681, 1) = ((MR_Box) (MR_Word) (Int32_680));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_681));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int64_t Int64_682 = MR_unbox_int64((MR_hl_field(MR_mktag(3), SpecPolyType_728, (MR_Integer) 1)));
                    MR_Word SizedInt_683;

                    {
                      SizedInt_683 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedInt_683, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), SizedInt_683, 1) = MR_box_int64(Int64_682);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedInt_683));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Unsigned UInt_686 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), SpecPolyType_728, (MR_Integer) 1))));
                    MR_Word SizedUInt_687;

                    {
                      SizedUInt_687 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), SizedUInt_687, 0) = ((MR_Box) (UInt_686));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_687));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word SizedUInt_694;
                    uint8_t UInt8_695 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_728, (MR_Integer) 1)));

                    {
                      SizedUInt_694 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), SizedUInt_694, 0) = ((MR_Box) (MR_Word) (UInt8_695));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_694));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word SizedUInt_688;
                    uint16_t UInt16_689 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_728, (MR_Integer) 1)));

                    {
                      SizedUInt_688 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), SizedUInt_688, 0) = ((MR_Box) (MR_Word) (UInt16_689));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_688));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word SizedUInt_690;
                    uint32_t UInt32_691 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_728, (MR_Integer) 1)));

                    {
                      SizedUInt_690 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedUInt_690, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), SizedUInt_690, 1) = ((MR_Box) (MR_Word) (UInt32_691));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_690));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word SizedUInt_692;
                    uint64_t UInt64_693 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), SpecPolyType_728, (MR_Integer) 1)));

                    {
                      SizedUInt_692 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SizedUInt_692, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), SizedUInt_692, 1) = MR_box_uint64(UInt64_693);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (SizedUInt_692));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Var_672;
                    MR_Word Error_675;

                    Var_672 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_728);
                    {
                      Error_675 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Error_675, 0) = ((MR_Box) (SpecNum_15));
                      MR_hl_field(MR_mktag(2), Error_675, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                      MR_hl_field(MR_mktag(2), Error_675, 2) = (MR_Box) ((MR_Unsigned) (Var_672));
                    }
                    *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_17 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_675));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
              }
              break;
          }
        }
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

static MR_Word MR_CALL 
mercury__string__parse_runtime__poly_type_to_kind_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Integer) 12;
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
          HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 3:
          HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 4:
          HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 5:
          HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 6:
          HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 7:
          HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 8:
          HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 9:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
      }
      break;
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
mercury__string__parse_runtime____Unify____sized_int_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__parse_runtime____Unify____sized_int_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string__parse_runtime____Compare____sized_int_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string__parse_runtime____Compare____sized_int_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string__parse_runtime____Unify____sized_uint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__parse_runtime____Unify____sized_uint_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string__parse_runtime____Compare____sized_uint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string__parse_runtime____Compare____sized_uint_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string__parse_runtime____Unify____string_format_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__parse_runtime____Unify____string_format_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string__parse_runtime____Compare____string_format_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string__parse_runtime____Compare____string_format_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__string__parse_runtime__init(void)
{
}

void mercury__string__parse_runtime__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__string__parse_runtime__string__parse_runtime__type_ctor_info_sized_int_0);
	MR_register_type_ctor_info(&mercury__string__parse_runtime__string__parse_runtime__type_ctor_info_sized_uint_0);
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
