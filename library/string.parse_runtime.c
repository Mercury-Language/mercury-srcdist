/*
** Automatically generated from `string.parse_runtime.m'
** by the Mercury compiler,
** version rotd-2024-03-20
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

static /* final */ const MR_Box mercury__string__parse_runtime_scalar_common_3[1][5];

static /* final */ const MR_Box mercury__string__parse_runtime_scalar_common_4[3][1];




static /* final */ const MR_Box mercury__string__parse_runtime_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__parse_runtime_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__parse_runtime_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__parse_runtime_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__parse_runtime_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__parse_runtime_scalar_common_4[3][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "%")) },
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
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"


static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_int_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

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

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_int_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int8_0) };

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

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_int_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int16_0) };

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

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_int_0_3[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int32_0) };

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

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_int_0_4[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int64_0) };

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

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_int_0_0[1] = { &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_0 };

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_int_0_1[1] = { &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_1 };

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_int_0_2[1] = { &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_int_0_2 };

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

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_uint_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0) };

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

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_uint_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint8_0) };

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

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_uint_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint16_0) };

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

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_uint_0_3[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint32_0) };

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

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_sized_uint_0_4[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint64_0) };

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

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_uint_0_0[1] = { &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_0 };

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_uint_0_1[1] = { &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_1 };

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_sized_uint_0_2[1] = { &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_sized_uint_0_2 };

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

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

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

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_0[1] = { &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_0 };

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_1[1] = { &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_1 };

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_2[1] = { &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_2 };

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
  MR_Integer CastX_78 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_79 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_78 == CastY_79);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
              MR_Integer Var_117;

{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_117  = Res;
}
              succeeded = (Var_117 < (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_117 == (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 0;
                else
                  *HeadVar__1_1 = (MR_Integer) 2;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
              MR_Char ArgX3_12 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2)));
              MR_Char ArgY3_13 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2)));
              MR_Word SubResult1_8;

              mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult1_8, ArgX1_6, ArgY1_7);
              succeeded = (SubResult1_8 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
              {
                MR_Word SubResult2_11;

                mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&SubResult2_11, ArgX2_9, ArgY2_10);
                succeeded = (SubResult2_11 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_11;
                else
                {
                  MR_Integer Var_115;
                  MR_Integer Var_116;

{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Char Character;
	MR_Integer Int;

	Character = ArgX3_12 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_115  = Int;
}
{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Char Character;
	MR_Integer Int;

	Character = ArgY3_13 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_116  = Int;
}
                  succeeded = (Var_115 < Var_116);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_115 == Var_116);
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
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word ArgX3_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word ArgY3_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
              MR_String ArgX4_23 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
              MR_String ArgY4_24 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 3))));
              MR_Word SubResult1_16;

              mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult1_16, ArgX1_14, ArgY1_15);
              succeeded = (SubResult1_16 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_16;
              else
              {
                MR_Word SubResult2_19;

                mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&SubResult2_19, ArgX2_17, ArgY2_18);
                succeeded = (SubResult2_19 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_19;
                else
                {
                  MR_Word SubResult3_22;

                  mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&SubResult3_22, ArgX3_20, ArgY3_21);
                  succeeded = (SubResult3_22 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_22;
                  else
                  {
                    MR_Integer Var_113;

{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX4_23 ;
	S2 = ArgY4_24 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_113  = Res;
}
                    succeeded = (Var_113 < (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_113 == (MR_Integer) 0);
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
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Word ArgY1_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Word ArgX2_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                      MR_Word ArgY2_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                      MR_Word ArgX3_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                      MR_Word ArgY3_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                      MR_Word ArgX4_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))));
                      MR_Word ArgY4_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 4))));
                      MR_Word SubResult1_27;

                      mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult1_27, ArgX1_25, ArgY1_26);
                      succeeded = (SubResult1_27 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_27;
                      else
                      {
                        MR_Word SubResult2_30;

                        mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&SubResult2_30, ArgX2_28, ArgY2_29);
                        succeeded = (SubResult2_30 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_30;
                        else
                        {
                          MR_Word SubResult3_33;

                          mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&SubResult3_33, ArgX3_31, ArgY3_32);
                          succeeded = (SubResult3_33 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_33;
                          else
                            mercury__string__parse_runtime____Compare____sized_int_0_0(HeadVar__1_1, ArgX4_34, ArgY4_35);
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Word ArgY1_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Word ArgX2_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                      MR_Word ArgY2_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                      MR_Word ArgX3_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                      MR_Word ArgY3_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                      MR_Word ArgX4_45 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 7);
                      MR_Word ArgY4_46 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 7);
                      MR_Word ArgX5_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 5))));
                      MR_Word ArgY5_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 5))));
                      MR_Word SubResult1_38;

                      mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult1_38, ArgX1_36, ArgY1_37);
                      succeeded = (SubResult1_38 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_38;
                      else
                      {
                        MR_Word SubResult2_41;

                        mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&SubResult2_41, ArgX2_39, ArgY2_40);
                        succeeded = (SubResult2_41 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_41;
                        else
                        {
                          MR_Word SubResult3_44;

                          mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&SubResult3_44, ArgX3_42, ArgY3_43);
                          succeeded = (SubResult3_44 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_44;
                          else
                          {
                            MR_Word SubResult4_47;
                            MR_Integer Var_111 = (MR_Integer) (ArgX4_45);
                            MR_Integer Var_112 = (MR_Integer) (ArgY4_46);

                            succeeded = (Var_111 < Var_112);
                            if (succeeded)
                              SubResult4_47 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_111 == Var_112);
                              if (succeeded)
                                SubResult4_47 = (MR_Integer) 0;
                              else
                                SubResult4_47 = (MR_Integer) 2;
                            }
                            succeeded = (SubResult4_47 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult4_47;
                            else
                              mercury__string__parse_runtime____Compare____sized_int_0_0(HeadVar__1_1, ArgX5_48, ArgY5_49);
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ArgX1_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Word ArgY1_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Word ArgX2_53 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                      MR_Word ArgY2_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                      MR_Word ArgX3_56 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                      MR_Word ArgY3_57 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                      MR_Word ArgX4_59 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 7);
                      MR_Word ArgY4_60 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 7);
                      MR_Word ArgX5_62 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 5))));
                      MR_Word ArgY5_63 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 5))));
                      MR_Word SubResult1_52;

                      mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult1_52, ArgX1_50, ArgY1_51);
                      succeeded = (SubResult1_52 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_52;
                      else
                      {
                        MR_Word SubResult2_55;

                        mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&SubResult2_55, ArgX2_53, ArgY2_54);
                        succeeded = (SubResult2_55 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_55;
                        else
                        {
                          MR_Word SubResult3_58;

                          mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&SubResult3_58, ArgX3_56, ArgY3_57);
                          succeeded = (SubResult3_58 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_58;
                          else
                          {
                            MR_Word SubResult4_61;
                            MR_Integer Var_109 = (MR_Integer) (ArgX4_59);
                            MR_Integer Var_110 = (MR_Integer) (ArgY4_60);

                            succeeded = (Var_109 < Var_110);
                            if (succeeded)
                              SubResult4_61 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_109 == Var_110);
                              if (succeeded)
                                SubResult4_61 = (MR_Integer) 0;
                              else
                                SubResult4_61 = (MR_Integer) 2;
                            }
                            succeeded = (SubResult4_61 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult4_61;
                            else
                              mercury__string__parse_runtime____Compare____sized_uint_0_0(HeadVar__1_1, ArgX5_62, ArgY5_63);
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
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ArgX1_64 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Word ArgY1_65 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Word ArgX2_67 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                      MR_Word ArgY2_68 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                      MR_Word ArgX3_70 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                      MR_Word ArgY3_71 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                      MR_Word ArgX4_73 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 7);
                      MR_Word ArgY4_74 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 7);
                      MR_Float ArgX5_76 = MR_unbox_float((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 5)));
                      MR_Float ArgY5_77 = MR_unbox_float((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 5)));
                      MR_Word SubResult1_66;

                      mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult1_66, ArgX1_64, ArgY1_65);
                      succeeded = (SubResult1_66 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_66;
                      else
                      {
                        MR_Word SubResult2_69;

                        mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&SubResult2_69, ArgX2_67, ArgY2_68);
                        succeeded = (SubResult2_69 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_69;
                        else
                        {
                          MR_Word SubResult3_72;

                          mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&SubResult3_72, ArgX3_70, ArgY3_71);
                          succeeded = (SubResult3_72 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_72;
                          else
                          {
                            MR_Word SubResult4_75;
                            MR_Integer Var_107 = (MR_Integer) (ArgX4_73);
                            MR_Integer Var_108 = (MR_Integer) (ArgY4_74);

                            succeeded = (Var_107 < Var_108);
                            if (succeeded)
                              SubResult4_75 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_107 == Var_108);
                              if (succeeded)
                                SubResult4_75 = (MR_Integer) 0;
                              else
                                SubResult4_75 = (MR_Integer) 2;
                            }
                            succeeded = (SubResult4_75 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult4_75;
                            else
                            {
                              succeeded = (ArgX5_76 < ArgY5_77);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 1;
                              else
                              {
                                succeeded = (ArgX5_76 > ArgY5_77);
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
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_8;
          MR_Char ArgX3_9 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2)));
          MR_Char ArgY3_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_10 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2)));
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
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_12;
          MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_14;
          MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_16;
          MR_String ArgX4_17 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 3))));
          MR_String ArgY4_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_16 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_18 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
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
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_20;
              MR_Word ArgX2_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_22;
              MR_Word ArgX3_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_24;
              MR_Word ArgX4_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 4))));
              MR_Word ArgY4_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                ArgY4_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))));
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
              MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_28;
              MR_Word ArgX2_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_30;
              MR_Word ArgX3_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_32;
              MR_Word ArgX4_33 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 7);
              MR_Word ArgY4_34;
              MR_Word ArgX5_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 5))));
              MR_Word ArgY5_36;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_30 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                ArgY4_34 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 7);
                ArgY5_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 5))));
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
              MR_Word ArgX1_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_38;
              MR_Word ArgX2_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_40;
              MR_Word ArgX3_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_42;
              MR_Word ArgX4_43 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 7);
              MR_Word ArgY4_44;
              MR_Word ArgX5_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 5))));
              MR_Word ArgY5_46;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                ArgY4_44 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 7);
                ArgY5_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 5))));
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
              MR_Word ArgX1_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_48;
              MR_Word ArgX2_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_50;
              MR_Word ArgX3_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_52;
              MR_Word ArgX4_53 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 7);
              MR_Word ArgY4_54;
              MR_Float ArgX5_55 = MR_unbox_float((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 5)));
              MR_Float ArgY5_56;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                ArgY4_54 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 7);
                ArgY5_56 = MR_unbox_float((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 5)));
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
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
              MR_Unsigned ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

              succeeded = (ArgX1_4 < ArgY1_5);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_4 == ArgY1_5);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 0;
                else
                  *HeadVar__1_1 = (MR_Integer) 2;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              uint8_t ArgX1_6 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0)));
              uint8_t ArgY1_7 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0)));

              succeeded = (ArgX1_6 < ArgY1_7);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_6 == ArgY1_7);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 0;
                else
                  *HeadVar__1_1 = (MR_Integer) 2;
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              uint16_t ArgX1_8 = ((uint16_t) (MR_Word) (MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0)));
              uint16_t ArgY1_9 = ((uint16_t) (MR_Word) (MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0)));

              succeeded = (ArgX1_8 < ArgY1_9);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_8 == ArgY1_9);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 0;
                else
                  *HeadVar__1_1 = (MR_Integer) 2;
              }
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      uint32_t ArgX1_10 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                      uint32_t ArgY1_11 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                      succeeded = (ArgX1_10 < ArgY1_11);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_10 == ArgY1_11);
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
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      uint64_t ArgX1_12 = MR_unbox_uint64((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                      uint64_t ArgY1_13 = MR_unbox_uint64((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                      succeeded = (ArgX1_12 < ArgY1_13);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_12 == ArgY1_13);
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
          MR_Unsigned ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Unsigned ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          uint8_t ArgX1_5 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0)));
          uint8_t ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0)));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          uint16_t ArgX1_7 = ((uint16_t) (MR_Word) (MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0)));
          uint16_t ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((uint16_t) (MR_Word) (MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0)));
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              uint32_t ArgX1_9 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              uint32_t ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_9 == ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              uint64_t ArgX1_11 = MR_unbox_uint64((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              uint64_t ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = MR_unbox_uint64((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
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
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
              MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

              succeeded = (ArgX1_4 < ArgY1_5);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_4 == ArgY1_5);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 0;
                else
                  *HeadVar__1_1 = (MR_Integer) 2;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              int8_t ArgX1_6 = ((int8_t) (MR_Word) (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0)));
              int8_t ArgY1_7 = ((int8_t) (MR_Word) (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0)));

              succeeded = (ArgX1_6 < ArgY1_7);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_6 == ArgY1_7);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 0;
                else
                  *HeadVar__1_1 = (MR_Integer) 2;
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              int16_t ArgX1_8 = ((int16_t) (MR_Word) (MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0)));
              int16_t ArgY1_9 = ((int16_t) (MR_Word) (MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0)));

              succeeded = (ArgX1_8 < ArgY1_9);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_8 == ArgY1_9);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 0;
                else
                  *HeadVar__1_1 = (MR_Integer) 2;
              }
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      int32_t ArgX1_10 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                      int32_t ArgY1_11 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                      succeeded = (ArgX1_10 < ArgY1_11);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_10 == ArgY1_11);
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
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      int64_t ArgX1_12 = MR_unbox_int64((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                      int64_t ArgY1_13 = MR_unbox_int64((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                      succeeded = (ArgX1_12 < ArgY1_13);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_12 == ArgY1_13);
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
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          int8_t ArgX1_5 = ((int8_t) (MR_Word) (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0)));
          int8_t ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((int8_t) (MR_Word) (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0)));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          int16_t ArgX1_7 = ((int16_t) (MR_Word) (MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0)));
          int16_t ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((int16_t) (MR_Word) (MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0)));
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              int32_t ArgX1_9 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              int32_t ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_9 == ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              int64_t ArgX1_11 = MR_unbox_int64((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              int64_t ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = MR_unbox_int64((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
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
      MR_Integer Var_29;

      mercury__list__length_acc_3_p_0((MR_Word) (&mercury__string__string__type_ctor_info_poly_type_0), STATE_VARIABLE_PolyTypes_0_28, (MR_Integer) 0, &Var_29);
      {
        Error_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Error_16, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Error_16, 1) = ((MR_Box) (SpecNum_8));
        MR_hl_field(3, Error_16, 2) = ((MR_Box) (Var_29));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Errors_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Error_16));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
  else
  {
    MR_Word HeadSpec_17;
    MR_Word HeadErrors_18;
    MR_Word TailSpecs_19;
    MR_Word TailErrors_20;
    MR_Word STATE_VARIABLE_Chars_31_31 = ((MR_Word) ((MR_hl_field(1, GatherEndedBy_12, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Chars_32_32;
    MR_Word STATE_VARIABLE_PolyTypes_33_33;
    MR_Integer Var_34;

    mercury__string__parse_runtime__parse_conversion_specification_7_p_0(STATE_VARIABLE_Chars_31_31, &STATE_VARIABLE_Chars_32_32, STATE_VARIABLE_PolyTypes_0_28, &STATE_VARIABLE_PolyTypes_33_33, SpecNum_8, &HeadSpec_17, &HeadErrors_18);
    Var_34 = (MR_Integer) ((MR_Unsigned) SpecNum_8 + (MR_Unsigned) 1);
    mercury__string__parse_runtime__parse_format_string_5_p_0(STATE_VARIABLE_Chars_32_32, STATE_VARIABLE_PolyTypes_33_33, Var_34, &TailSpecs_19, &TailErrors_20);
    if ((HeadErrors_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        Specs0_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Specs0_13, 0) = ((MR_Box) (HeadSpec_17));
        MR_hl_field(1, Specs0_13, 1) = ((MR_Box) (TailSpecs_19));
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
      MR_hl_field(0, StringSpec_26, 0) = ((MR_Box) (NonConversionSpecString_25));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_9 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (StringSpec_26));
      MR_hl_field(1, base, 1) = ((MR_Box) (Specs0_13));
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
  MR_Word STATE_VARIABLE_Chars_20_41;
  MR_Char Var_42;
  MR_Word STATE_VARIABLE_Chars_20_52;
  MR_Char Var_53;

  mercury__string__parse_util__gather_flag_chars_4_p_0(STATE_VARIABLE_Chars_0_20, &STATE_VARIABLE_Chars_29_29, (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[0]), &Flags_14);
  succeeded = (STATE_VARIABLE_Chars_29_29 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_42 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_29_29, (MR_Integer) 0)));
    STATE_VARIABLE_Chars_20_41 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_29_29, (MR_Integer) 1))));
    succeeded = (Var_42 == (MR_Char) 42);
  }
  if (succeeded)
  {
    STATE_VARIABLE_Chars_30_30 = STATE_VARIABLE_Chars_20_41;
    if ((STATE_VARIABLE_PolyTypes_0_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_46;

      MaybeWidth_15 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, Var_46, 1) = ((MR_Box) (SpecNum_10));
      }
      {
        WidthErrors_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, WidthErrors_16, 0) = ((MR_Box) (Var_46));
        MR_hl_field(1, WidthErrors_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      STATE_VARIABLE_PolyTypes_31_31 = STATE_VARIABLE_PolyTypes_0_22;
    }
    else
    {
      MR_Word PolyType_38 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_22, (MR_Integer) 0))));
      MR_Integer PolyWidth_39;

      STATE_VARIABLE_PolyTypes_31_31 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_22, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) PolyType_38)) == (MR_Integer) 1);
      if (succeeded)
      {
        PolyWidth_39 = ((MR_Integer) ((MR_hl_field(1, PolyType_38, (MR_Integer) 0))));
        {
          MaybeWidth_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeWidth_15, 0) = ((MR_Box) (PolyWidth_39));
        }
        WidthErrors_16 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word Var_43;
        MR_Word Var_44;

        MaybeWidth_15 = (MR_Word) ((MR_Unsigned) 0U);
        Var_44 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(PolyType_38);
        {
          Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_43, 1) = ((MR_Box) (SpecNum_10));
          MR_hl_field(3, Var_43, 2) = (MR_Box) ((MR_Unsigned) (Var_44));
        }
        {
          WidthErrors_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, WidthErrors_16, 0) = ((MR_Box) (Var_43));
          MR_hl_field(1, WidthErrors_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
    }
  }
  else
  {
    MR_Integer Width_40;
    MR_Word STATE_VARIABLE_Chars_28_48;

    succeeded = mercury__string__parse_util__get_nonzero_number_prefix_3_p_0(STATE_VARIABLE_Chars_29_29, &STATE_VARIABLE_Chars_28_48, &Width_40);
    if (succeeded)
    {
      STATE_VARIABLE_Chars_30_30 = STATE_VARIABLE_Chars_28_48;
      {
        MaybeWidth_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeWidth_15, 0) = ((MR_Box) (Width_40));
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
    Var_53 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_30_30, (MR_Integer) 0)));
    STATE_VARIABLE_Chars_20_52 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_30_30, (MR_Integer) 1))));
    succeeded = (Var_53 == (MR_Char) 46);
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Chars_22_54;
    MR_Char Var_55;

    succeeded = (STATE_VARIABLE_Chars_20_52 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_55 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_20_52, (MR_Integer) 0)));
      STATE_VARIABLE_Chars_22_54 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_20_52, (MR_Integer) 1))));
      succeeded = (Var_55 == (MR_Char) 42);
    }
    if (succeeded)
    {
      STATE_VARIABLE_Chars_32_32 = STATE_VARIABLE_Chars_22_54;
      if ((STATE_VARIABLE_PolyTypes_31_31 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_59;

        MaybePrec_17 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Var_59, 1) = ((MR_Box) (SpecNum_10));
        }
        {
          PrecErrors_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, PrecErrors_18, 0) = ((MR_Box) (Var_59));
          MR_hl_field(1, PrecErrors_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_PolyTypes_33_33 = STATE_VARIABLE_PolyTypes_31_31;
      }
      else
      {
        MR_Word PolyType_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_31_31, (MR_Integer) 0))));
        MR_Integer PolyPrec_50;

        STATE_VARIABLE_PolyTypes_33_33 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_31_31, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) PolyType_49)) == (MR_Integer) 1);
        if (succeeded)
        {
          PolyPrec_50 = ((MR_Integer) ((MR_hl_field(1, PolyType_49, (MR_Integer) 0))));
          {
            MaybePrec_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybePrec_17, 0) = ((MR_Box) (PolyPrec_50));
          }
          PrecErrors_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word Var_56;
          MR_Word Var_57;

          MaybePrec_17 = (MR_Word) ((MR_Unsigned) 0U);
          Var_57 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(PolyType_49);
          {
            Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_56, 1) = ((MR_Box) (SpecNum_10));
            MR_hl_field(3, Var_56, 2) = (MR_Box) ((MR_Unsigned) (Var_57));
          }
          {
            PrecErrors_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PrecErrors_18, 0) = ((MR_Box) (Var_56));
            MR_hl_field(1, PrecErrors_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    else
    {
      MR_Integer Prec_51;

      mercury__string__parse_util__get_number_prefix_loop_4_p_0(STATE_VARIABLE_Chars_20_52, &STATE_VARIABLE_Chars_32_32, (MR_Integer) 0, &Prec_51);
      {
        MaybePrec_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybePrec_17, 0) = ((MR_Box) (Prec_51));
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
  if ((STATE_VARIABLE_Chars_32_32 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_73;
    MR_Integer Var_74;

    *Spec_11 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
    mercury__list__length_acc_3_p_0((MR_Word) (&mercury__string__string__type_ctor_info_poly_type_0), STATE_VARIABLE_PolyTypes_33_33, (MR_Integer) 0, &Var_74);
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_73, 0) = ((MR_Box) (SpecNum_10));
      MR_hl_field(0, Var_73, 1) = ((MR_Box) (Var_74));
    }
    {
      SpecErrors_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SpecErrors_19, 0) = ((MR_Box) (Var_73));
      MR_hl_field(1, SpecErrors_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_PolyTypes_23 = STATE_VARIABLE_PolyTypes_33_33;
    *STATE_VARIABLE_Chars_21 = STATE_VARIABLE_Chars_32_32;
  }
  else
  {
    MR_Char SpecChar_81 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_32_32, (MR_Integer) 0)));
    MR_Word SpecPrime_82;
    MR_Word ErrorsPrime_83;
    MR_Word STATE_VARIABLE_PolyTypes_45_90;

    *STATE_VARIABLE_Chars_21 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_32_32, (MR_Integer) 1))));
    succeeded = mercury__string__parse_runtime__parse_spec_9_p_0(SpecChar_81, STATE_VARIABLE_PolyTypes_33_33, &STATE_VARIABLE_PolyTypes_45_90, Flags_14, MaybeWidth_15, MaybePrec_17, SpecNum_10, &SpecPrime_82, &ErrorsPrime_83);
    if (succeeded)
    {
      *STATE_VARIABLE_PolyTypes_23 = STATE_VARIABLE_PolyTypes_45_90;
      *Spec_11 = SpecPrime_82;
      SpecErrors_19 = ErrorsPrime_83;
    }
    else
    {
      MR_Word Error_84;

      {
        Error_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Error_84, 0) = ((MR_Box) (SpecNum_10));
        MR_hl_field(1, Error_84, 1) = ((MR_Box) (MR_Word) (SpecChar_81));
      }
      *Spec_11 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
      {
        SpecErrors_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SpecErrors_19, 0) = ((MR_Box) (Error_84));
        MR_hl_field(1, SpecErrors_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_PolyTypes_23 = STATE_VARIABLE_PolyTypes_33_33;
    }
  }
  mercury__list__append_3_p_1((MR_Word) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0), PrecErrors_18, SpecErrors_19, &Var_36);
  mercury__list__append_3_p_1((MR_Word) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0), WidthErrors_16, Var_36, Errors_12);
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
            Error_138 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_138, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_138, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_138, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_138));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_136 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));
          MR_Float Float_45;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_136)) == (MR_Integer) 0);
          if (succeeded)
          {
            Float_45 = MR_unbox_float((MR_hl_field(0, SpecPolyType_136, (MR_Integer) 0)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
              MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(3, base, 5) = MR_box_float(Float_45);
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_67;
            MR_Word Error_134;

            Var_67 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_136);
            {
              Error_134 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_134, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(2, Error_134, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(2, Error_134, 2) = (MR_Box) ((MR_Unsigned) (Var_67));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_134));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
          MR_Word Error_164;

          {
            Error_164 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_164, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_164, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_164, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_164));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_179 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));
          MR_Float Float_169;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_179)) == (MR_Integer) 0);
          if (succeeded)
          {
            Float_169 = MR_unbox_float((MR_hl_field(0, SpecPolyType_179, (MR_Integer) 0)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
              MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
              MR_hl_field(3, base, 5) = MR_box_float(Float_169);
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_165;
            MR_Word Error_168;

            Var_165 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_179);
            {
              Error_168 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_168, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(2, Error_168, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(2, Error_168, 2) = (MR_Box) ((MR_Unsigned) (Var_165));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_168));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
          MR_Word Error_201;

          {
            Error_201 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_201, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_201, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_201, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_201));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_216 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));
          MR_Float Float_206;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_216)) == (MR_Integer) 0);
          if (succeeded)
          {
            Float_206 = MR_unbox_float((MR_hl_field(0, SpecPolyType_216, (MR_Integer) 0)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
              MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
              MR_hl_field(3, base, 5) = MR_box_float(Float_206);
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_202;
            MR_Word Error_205;

            Var_202 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_216);
            {
              Error_205 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_205, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(2, Error_205, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(2, Error_205, 2) = (MR_Box) ((MR_Unsigned) (Var_202));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_205));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
            Error_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_117, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_117, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_117, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_117));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_109 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          switch (MR_tag((MR_Word) SpecPolyType_109)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_61;
                MR_Word Error_101;

                Var_61 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_109);
                {
                  Error_101 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Error_101, 0) = ((MR_Box) (SpecNum_15));
                  MR_hl_field(2, Error_101, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                  MR_hl_field(2, Error_101, 2) = (MR_Box) ((MR_Unsigned) (Var_61));
                }
                *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_17 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Error_101));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Int_85 = ((MR_Integer) ((MR_hl_field(1, SpecPolyType_109, (MR_Integer) 0))));
                MR_Word SizedInt_96;

                {
                  SizedInt_96 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SizedInt_96, 0) = ((MR_Box) (Int_85));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                  MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_96));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                int8_t Int8_86 = ((int8_t) (MR_Word) (MR_hl_field(2, SpecPolyType_109, (MR_Integer) 0)));
                MR_Word SizedInt_239;

                {
                  SizedInt_239 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SizedInt_239, 0) = ((MR_Box) (MR_Word) (Int8_86));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                  MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_239));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, SpecPolyType_109, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    int16_t Int16_87 = ((int16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_109, (MR_Integer) 1)));
                    MR_Word SizedInt_236;

                    {
                      SizedInt_236 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedInt_236, 0) = ((MR_Box) (MR_Word) (Int16_87));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_236));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int32_t Int32_88 = ((int32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_109, (MR_Integer) 1)));
                    MR_Word SizedInt_237;

                    {
                      SizedInt_237 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_237, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedInt_237, 1) = ((MR_Box) (MR_Word) (Int32_88));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_237));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int64_t Int64_89 = MR_unbox_int64((MR_hl_field(3, SpecPolyType_109, (MR_Integer) 1)));
                    MR_Word SizedInt_238;

                    {
                      SizedInt_238 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_238, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedInt_238, 1) = MR_box_int64(Int64_89);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_238));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Unsigned UInt_35 = ((MR_Unsigned) ((MR_hl_field(3, SpecPolyType_109, (MR_Integer) 1))));
                    MR_Word SizedUInt_36;

                    {
                      SizedUInt_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SizedUInt_36, 0) = ((MR_Box) (UInt_35));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_36));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    uint8_t UInt8_37 = ((uint8_t) (MR_Word) (MR_hl_field(3, SpecPolyType_109, (MR_Integer) 1)));
                    MR_Word SizedUInt_243;

                    {
                      SizedUInt_243 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, SizedUInt_243, 0) = ((MR_Box) (MR_Word) (UInt8_37));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_243));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    uint16_t UInt16_38 = ((uint16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_109, (MR_Integer) 1)));
                    MR_Word SizedUInt_240;

                    {
                      SizedUInt_240 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedUInt_240, 0) = ((MR_Box) (MR_Word) (UInt16_38));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_240));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    uint32_t UInt32_39 = ((uint32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_109, (MR_Integer) 1)));
                    MR_Word SizedUInt_241;

                    {
                      SizedUInt_241 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedUInt_241, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedUInt_241, 1) = ((MR_Box) (MR_Word) (UInt32_39));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_241));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    uint64_t UInt64_40 = MR_unbox_uint64((MR_hl_field(3, SpecPolyType_109, (MR_Integer) 1)));
                    MR_Word SizedUInt_242;

                    {
                      SizedUInt_242 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedUInt_242, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedUInt_242, 1) = MR_box_uint64(UInt64_40);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_242));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Var_61;
                    MR_Word Error_101;

                    Var_61 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_109);
                    {
                      Error_101 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Error_101, 0) = ((MR_Box) (SpecNum_15));
                      MR_hl_field(2, Error_101, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                      MR_hl_field(2, Error_101, 2) = (MR_Box) ((MR_Unsigned) (Var_61));
                    }
                    *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_17 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Error_101));
                      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
            Error_147 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_147, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_147, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_147, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_147));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_145 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));
          MR_Char Char_46;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) SpecPolyType_145)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SpecPolyType_145, (MR_Integer) 0)))) == (MR_Integer) 9)));
          if (succeeded)
          {
            Char_46 = ((MR_Char) (MR_Word) (MR_hl_field(3, SpecPolyType_145, (MR_Integer) 1)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(1, base, 1) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(1, base, 2) = ((MR_Box) (MR_Word) (Char_46));
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_73;
            MR_Word Error_143;

            Var_73 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_145);
            {
              Error_143 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_143, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(2, Error_143, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(2, Error_143, 2) = (MR_Box) ((MR_Unsigned) (Var_73));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_143));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
            Error_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_84, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_84, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_84, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_84));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_18 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          switch (MR_tag((MR_Word) SpecPolyType_18)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Error_33;
                MR_Word Var_53;

                Var_53 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_18);
                {
                  Error_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Error_33, 0) = ((MR_Box) (SpecNum_15));
                  MR_hl_field(2, Error_33, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                  MR_hl_field(2, Error_33, 2) = (MR_Box) ((MR_Unsigned) (Var_53));
                }
                *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_17 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Error_33));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Int_19 = ((MR_Integer) ((MR_hl_field(1, SpecPolyType_18, (MR_Integer) 0))));
                MR_Word SizedInt_20;

                {
                  SizedInt_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SizedInt_20, 0) = ((MR_Box) (Int_19));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(3, base, 4) = ((MR_Box) (SizedInt_20));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                int8_t Int8_21 = ((int8_t) (MR_Word) (MR_hl_field(2, SpecPolyType_18, (MR_Integer) 0)));
                MR_Word SizedInt_247;

                {
                  SizedInt_247 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SizedInt_247, 0) = ((MR_Box) (MR_Word) (Int8_21));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(3, base, 4) = ((MR_Box) (SizedInt_247));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, SpecPolyType_18, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    int16_t Int16_22 = ((int16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_18, (MR_Integer) 1)));
                    MR_Word SizedInt_244;

                    {
                      SizedInt_244 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedInt_244, 0) = ((MR_Box) (MR_Word) (Int16_22));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = ((MR_Box) (SizedInt_244));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int32_t Int32_23 = ((int32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_18, (MR_Integer) 1)));
                    MR_Word SizedInt_245;

                    {
                      SizedInt_245 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_245, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedInt_245, 1) = ((MR_Box) (MR_Word) (Int32_23));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = ((MR_Box) (SizedInt_245));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int64_t Int64_24 = MR_unbox_int64((MR_hl_field(3, SpecPolyType_18, (MR_Integer) 1)));
                    MR_Word SizedInt_246;

                    {
                      SizedInt_246 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_246, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedInt_246, 1) = MR_box_int64(Int64_24);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = ((MR_Box) (SizedInt_246));
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
                    MR_Word Var_53;

                    Var_53 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_18);
                    {
                      Error_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Error_33, 0) = ((MR_Box) (SpecNum_15));
                      MR_hl_field(2, Error_33, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                      MR_hl_field(2, Error_33, 2) = (MR_Box) ((MR_Unsigned) (Var_53));
                    }
                    *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_17 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Error_33));
                      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
          MR_Word Error_250;

          {
            Error_250 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_250, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_250, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_250, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_250));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_265 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));
          MR_Float Float_255;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_265)) == (MR_Integer) 0);
          if (succeeded)
          {
            Float_255 = MR_unbox_float((MR_hl_field(0, SpecPolyType_265, (MR_Integer) 0)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
              MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(3, base, 5) = MR_box_float(Float_255);
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_251;
            MR_Word Error_254;

            Var_251 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_265);
            {
              Error_254 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_254, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(2, Error_254, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(2, Error_254, 2) = (MR_Box) ((MR_Unsigned) (Var_251));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_254));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
          MR_Word Error_287;

          {
            Error_287 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_287, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_287, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_287, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_287));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_302 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));
          MR_Float Float_292;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_302)) == (MR_Integer) 0);
          if (succeeded)
          {
            Float_292 = MR_unbox_float((MR_hl_field(0, SpecPolyType_302, (MR_Integer) 0)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
              MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
              MR_hl_field(3, base, 5) = MR_box_float(Float_292);
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_288;
            MR_Word Error_291;

            Var_288 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_302);
            {
              Error_291 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_291, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(2, Error_291, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(2, Error_291, 2) = (MR_Box) ((MR_Unsigned) (Var_288));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_291));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
          MR_Word Error_324;

          {
            Error_324 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_324, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_324, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_324, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_324));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_339 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));
          MR_Float Float_329;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_339)) == (MR_Integer) 0);
          if (succeeded)
          {
            Float_329 = MR_unbox_float((MR_hl_field(0, SpecPolyType_339, (MR_Integer) 0)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
              MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
              MR_hl_field(3, base, 5) = MR_box_float(Float_329);
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_325;
            MR_Word Error_328;

            Var_325 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_339);
            {
              Error_328 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_328, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(2, Error_328, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(2, Error_328, 2) = (MR_Box) ((MR_Unsigned) (Var_325));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_328));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
          MR_Word Error_361;

          {
            Error_361 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_361, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_361, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_361, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_361));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_418 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          switch (MR_tag((MR_Word) SpecPolyType_418)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_362;
                MR_Word Error_365;

                Var_362 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_418);
                {
                  Error_365 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Error_365, 0) = ((MR_Box) (SpecNum_15));
                  MR_hl_field(2, Error_365, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                  MR_hl_field(2, Error_365, 2) = (MR_Box) ((MR_Unsigned) (Var_362));
                }
                *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_17 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Error_365));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Int_366 = ((MR_Integer) ((MR_hl_field(1, SpecPolyType_418, (MR_Integer) 0))));
                MR_Word SizedInt_367;

                {
                  SizedInt_367 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SizedInt_367, 0) = ((MR_Box) (Int_366));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_367));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                int8_t Int8_374 = ((int8_t) (MR_Word) (MR_hl_field(2, SpecPolyType_418, (MR_Integer) 0)));
                MR_Word SizedInt_375;

                {
                  SizedInt_375 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SizedInt_375, 0) = ((MR_Box) (MR_Word) (Int8_374));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_375));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, SpecPolyType_418, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    int16_t Int16_368 = ((int16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_418, (MR_Integer) 1)));
                    MR_Word SizedInt_369;

                    {
                      SizedInt_369 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedInt_369, 0) = ((MR_Box) (MR_Word) (Int16_368));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_369));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int32_t Int32_370 = ((int32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_418, (MR_Integer) 1)));
                    MR_Word SizedInt_371;

                    {
                      SizedInt_371 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_371, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedInt_371, 1) = ((MR_Box) (MR_Word) (Int32_370));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_371));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int64_t Int64_372 = MR_unbox_int64((MR_hl_field(3, SpecPolyType_418, (MR_Integer) 1)));
                    MR_Word SizedInt_373;

                    {
                      SizedInt_373 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_373, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedInt_373, 1) = MR_box_int64(Int64_372);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_373));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Unsigned UInt_376 = ((MR_Unsigned) ((MR_hl_field(3, SpecPolyType_418, (MR_Integer) 1))));
                    MR_Word SizedUInt_377;

                    {
                      SizedUInt_377 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SizedUInt_377, 0) = ((MR_Box) (UInt_376));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_377));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word SizedUInt_384;
                    uint8_t UInt8_385 = ((uint8_t) (MR_Word) (MR_hl_field(3, SpecPolyType_418, (MR_Integer) 1)));

                    {
                      SizedUInt_384 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, SizedUInt_384, 0) = ((MR_Box) (MR_Word) (UInt8_385));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_384));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word SizedUInt_378;
                    uint16_t UInt16_379 = ((uint16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_418, (MR_Integer) 1)));

                    {
                      SizedUInt_378 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedUInt_378, 0) = ((MR_Box) (MR_Word) (UInt16_379));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_378));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word SizedUInt_380;
                    uint32_t UInt32_381 = ((uint32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_418, (MR_Integer) 1)));

                    {
                      SizedUInt_380 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedUInt_380, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedUInt_380, 1) = ((MR_Box) (MR_Word) (UInt32_381));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_380));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word SizedUInt_382;
                    uint64_t UInt64_383 = MR_unbox_uint64((MR_hl_field(3, SpecPolyType_418, (MR_Integer) 1)));

                    {
                      SizedUInt_382 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedUInt_382, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedUInt_382, 1) = MR_box_uint64(UInt64_383);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_382));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Var_362;
                    MR_Word Error_365;

                    Var_362 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_418);
                    {
                      Error_365 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Error_365, 0) = ((MR_Box) (SpecNum_15));
                      MR_hl_field(2, Error_365, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                      MR_hl_field(2, Error_365, 2) = (MR_Box) ((MR_Unsigned) (Var_362));
                    }
                    *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_17 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Error_365));
                      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
        MR_Word STATE_VARIABLE_Flags_58_548;
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Flags_0_50, (MR_Integer) 0)));

        {
          STATE_VARIABLE_Flags_58_548 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Flags_58_548, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 16U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 4))));
        }
        if ((STATE_VARIABLE_PolyTypes_0_48 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_463;

          {
            Error_463 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_463, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_463, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_463, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_463));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_520 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          switch (MR_tag((MR_Word) SpecPolyType_520)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_464;
                MR_Word Error_467;

                Var_464 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_520);
                {
                  Error_467 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Error_467, 0) = ((MR_Box) (SpecNum_15));
                  MR_hl_field(2, Error_467, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                  MR_hl_field(2, Error_467, 2) = (MR_Box) ((MR_Unsigned) (Var_464));
                }
                *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_17 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Error_467));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Int_468 = ((MR_Integer) ((MR_hl_field(1, SpecPolyType_520, (MR_Integer) 0))));
                MR_Word SizedInt_469;

                {
                  SizedInt_469 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SizedInt_469, 0) = ((MR_Box) (Int_468));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_58_548));
                  MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                  MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_469));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                int8_t Int8_476 = ((int8_t) (MR_Word) (MR_hl_field(2, SpecPolyType_520, (MR_Integer) 0)));
                MR_Word SizedInt_477;

                {
                  SizedInt_477 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SizedInt_477, 0) = ((MR_Box) (MR_Word) (Int8_476));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_58_548));
                  MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                  MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_477));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, SpecPolyType_520, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    int16_t Int16_470 = ((int16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_520, (MR_Integer) 1)));
                    MR_Word SizedInt_471;

                    {
                      SizedInt_471 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedInt_471, 0) = ((MR_Box) (MR_Word) (Int16_470));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_58_548));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_471));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int32_t Int32_472 = ((int32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_520, (MR_Integer) 1)));
                    MR_Word SizedInt_473;

                    {
                      SizedInt_473 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_473, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedInt_473, 1) = ((MR_Box) (MR_Word) (Int32_472));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_58_548));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_473));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int64_t Int64_474 = MR_unbox_int64((MR_hl_field(3, SpecPolyType_520, (MR_Integer) 1)));
                    MR_Word SizedInt_475;

                    {
                      SizedInt_475 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_475, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedInt_475, 1) = MR_box_int64(Int64_474);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_58_548));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_475));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Unsigned UInt_478 = ((MR_Unsigned) ((MR_hl_field(3, SpecPolyType_520, (MR_Integer) 1))));
                    MR_Word SizedUInt_479;

                    {
                      SizedUInt_479 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SizedUInt_479, 0) = ((MR_Box) (UInt_478));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_58_548));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_479));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word SizedUInt_486;
                    uint8_t UInt8_487 = ((uint8_t) (MR_Word) (MR_hl_field(3, SpecPolyType_520, (MR_Integer) 1)));

                    {
                      SizedUInt_486 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, SizedUInt_486, 0) = ((MR_Box) (MR_Word) (UInt8_487));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_58_548));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_486));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word SizedUInt_480;
                    uint16_t UInt16_481 = ((uint16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_520, (MR_Integer) 1)));

                    {
                      SizedUInt_480 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedUInt_480, 0) = ((MR_Box) (MR_Word) (UInt16_481));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_58_548));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_480));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word SizedUInt_482;
                    uint32_t UInt32_483 = ((uint32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_520, (MR_Integer) 1)));

                    {
                      SizedUInt_482 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedUInt_482, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedUInt_482, 1) = ((MR_Box) (MR_Word) (UInt32_483));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_58_548));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_482));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word SizedUInt_484;
                    uint64_t UInt64_485 = MR_unbox_uint64((MR_hl_field(3, SpecPolyType_520, (MR_Integer) 1)));

                    {
                      SizedUInt_484 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedUInt_484, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedUInt_484, 1) = MR_box_uint64(UInt64_485);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_58_548));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_484));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Var_464;
                    MR_Word Error_467;

                    Var_464 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_520);
                    {
                      Error_467 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Error_467, 0) = ((MR_Box) (SpecNum_15));
                      MR_hl_field(2, Error_467, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                      MR_hl_field(2, Error_467, 2) = (MR_Box) ((MR_Unsigned) (Var_464));
                    }
                    *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_17 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Error_467));
                      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
            Error_156 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_156, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_156, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_156, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_156));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_154 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));
          MR_String Str_47;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) SpecPolyType_154)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SpecPolyType_154, (MR_Integer) 0)))) == (MR_Integer) 8)));
          if (succeeded)
          {
            Str_47 = ((MR_String) ((MR_hl_field(3, SpecPolyType_154, (MR_Integer) 1))));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(2, base, 0) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(2, base, 1) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(2, base, 2) = ((MR_Box) (MaybePrec_14));
              MR_hl_field(2, base, 3) = ((MR_Box) (Str_47));
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_79;
            MR_Word Error_152;

            Var_79 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_154);
            {
              Error_152 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_152, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(2, Error_152, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(2, Error_152, 2) = (MR_Box) ((MR_Unsigned) (Var_79));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_152));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
          MR_Word Error_565;

          {
            Error_565 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_565, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_565, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_565, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_565));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_622 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          switch (MR_tag((MR_Word) SpecPolyType_622)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_566;
                MR_Word Error_569;

                Var_566 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_622);
                {
                  Error_569 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Error_569, 0) = ((MR_Box) (SpecNum_15));
                  MR_hl_field(2, Error_569, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                  MR_hl_field(2, Error_569, 2) = (MR_Box) ((MR_Unsigned) (Var_566));
                }
                *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_17 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Error_569));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Int_570 = ((MR_Integer) ((MR_hl_field(1, SpecPolyType_622, (MR_Integer) 0))));
                MR_Word SizedInt_571;

                {
                  SizedInt_571 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SizedInt_571, 0) = ((MR_Box) (Int_570));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_571));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                int8_t Int8_578 = ((int8_t) (MR_Word) (MR_hl_field(2, SpecPolyType_622, (MR_Integer) 0)));
                MR_Word SizedInt_579;

                {
                  SizedInt_579 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SizedInt_579, 0) = ((MR_Box) (MR_Word) (Int8_578));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_579));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, SpecPolyType_622, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    int16_t Int16_572 = ((int16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_622, (MR_Integer) 1)));
                    MR_Word SizedInt_573;

                    {
                      SizedInt_573 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedInt_573, 0) = ((MR_Box) (MR_Word) (Int16_572));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_573));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int32_t Int32_574 = ((int32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_622, (MR_Integer) 1)));
                    MR_Word SizedInt_575;

                    {
                      SizedInt_575 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_575, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedInt_575, 1) = ((MR_Box) (MR_Word) (Int32_574));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_575));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int64_t Int64_576 = MR_unbox_int64((MR_hl_field(3, SpecPolyType_622, (MR_Integer) 1)));
                    MR_Word SizedInt_577;

                    {
                      SizedInt_577 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_577, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedInt_577, 1) = MR_box_int64(Int64_576);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_577));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Unsigned UInt_580 = ((MR_Unsigned) ((MR_hl_field(3, SpecPolyType_622, (MR_Integer) 1))));
                    MR_Word SizedUInt_581;

                    {
                      SizedUInt_581 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SizedUInt_581, 0) = ((MR_Box) (UInt_580));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_581));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word SizedUInt_588;
                    uint8_t UInt8_589 = ((uint8_t) (MR_Word) (MR_hl_field(3, SpecPolyType_622, (MR_Integer) 1)));

                    {
                      SizedUInt_588 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, SizedUInt_588, 0) = ((MR_Box) (MR_Word) (UInt8_589));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_588));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word SizedUInt_582;
                    uint16_t UInt16_583 = ((uint16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_622, (MR_Integer) 1)));

                    {
                      SizedUInt_582 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedUInt_582, 0) = ((MR_Box) (MR_Word) (UInt16_583));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_582));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word SizedUInt_584;
                    uint32_t UInt32_585 = ((uint32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_622, (MR_Integer) 1)));

                    {
                      SizedUInt_584 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedUInt_584, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedUInt_584, 1) = ((MR_Box) (MR_Word) (UInt32_585));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_584));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word SizedUInt_586;
                    uint64_t UInt64_587 = MR_unbox_uint64((MR_hl_field(3, SpecPolyType_622, (MR_Integer) 1)));

                    {
                      SizedUInt_586 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedUInt_586, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedUInt_586, 1) = MR_box_uint64(UInt64_587);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_586));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Var_566;
                    MR_Word Error_569;

                    Var_566 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_622);
                    {
                      Error_569 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Error_569, 0) = ((MR_Box) (SpecNum_15));
                      MR_hl_field(2, Error_569, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                      MR_hl_field(2, Error_569, 2) = (MR_Box) ((MR_Unsigned) (Var_566));
                    }
                    *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_17 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Error_569));
                      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
          MR_Word Error_667;

          {
            Error_667 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_667, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_667, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_667, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_667));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_724 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 0))));

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, (MR_Integer) 1))));
          switch (MR_tag((MR_Word) SpecPolyType_724)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_668;
                MR_Word Error_671;

                Var_668 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_724);
                {
                  Error_671 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Error_671, 0) = ((MR_Box) (SpecNum_15));
                  MR_hl_field(2, Error_671, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                  MR_hl_field(2, Error_671, 2) = (MR_Box) ((MR_Unsigned) (Var_668));
                }
                *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_17 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Error_671));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Int_672 = ((MR_Integer) ((MR_hl_field(1, SpecPolyType_724, (MR_Integer) 0))));
                MR_Word SizedInt_673;

                {
                  SizedInt_673 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SizedInt_673, 0) = ((MR_Box) (Int_672));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                  MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_673));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                int8_t Int8_680 = ((int8_t) (MR_Word) (MR_hl_field(2, SpecPolyType_724, (MR_Integer) 0)));
                MR_Word SizedInt_681;

                {
                  SizedInt_681 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SizedInt_681, 0) = ((MR_Box) (MR_Word) (Int8_680));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                  MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_681));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, SpecPolyType_724, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    int16_t Int16_674 = ((int16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_724, (MR_Integer) 1)));
                    MR_Word SizedInt_675;

                    {
                      SizedInt_675 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedInt_675, 0) = ((MR_Box) (MR_Word) (Int16_674));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_675));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int32_t Int32_676 = ((int32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_724, (MR_Integer) 1)));
                    MR_Word SizedInt_677;

                    {
                      SizedInt_677 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_677, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedInt_677, 1) = ((MR_Box) (MR_Word) (Int32_676));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_677));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int64_t Int64_678 = MR_unbox_int64((MR_hl_field(3, SpecPolyType_724, (MR_Integer) 1)));
                    MR_Word SizedInt_679;

                    {
                      SizedInt_679 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_679, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedInt_679, 1) = MR_box_int64(Int64_678);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_679));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Unsigned UInt_682 = ((MR_Unsigned) ((MR_hl_field(3, SpecPolyType_724, (MR_Integer) 1))));
                    MR_Word SizedUInt_683;

                    {
                      SizedUInt_683 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SizedUInt_683, 0) = ((MR_Box) (UInt_682));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_683));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word SizedUInt_690;
                    uint8_t UInt8_691 = ((uint8_t) (MR_Word) (MR_hl_field(3, SpecPolyType_724, (MR_Integer) 1)));

                    {
                      SizedUInt_690 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, SizedUInt_690, 0) = ((MR_Box) (MR_Word) (UInt8_691));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_690));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word SizedUInt_684;
                    uint16_t UInt16_685 = ((uint16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_724, (MR_Integer) 1)));

                    {
                      SizedUInt_684 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedUInt_684, 0) = ((MR_Box) (MR_Word) (UInt16_685));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_684));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word SizedUInt_686;
                    uint32_t UInt32_687 = ((uint32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_724, (MR_Integer) 1)));

                    {
                      SizedUInt_686 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedUInt_686, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedUInt_686, 1) = ((MR_Box) (MR_Word) (UInt32_687));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_686));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word SizedUInt_688;
                    uint64_t UInt64_689 = MR_unbox_uint64((MR_hl_field(3, SpecPolyType_724, (MR_Integer) 1)));

                    {
                      SizedUInt_688 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedUInt_688, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedUInt_688, 1) = MR_box_uint64(UInt64_689);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_688));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Var_668;
                    MR_Word Error_671;

                    Var_668 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_724);
                    {
                      Error_671 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Error_671, 0) = ((MR_Box) (SpecNum_15));
                      MR_hl_field(2, Error_671, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                      MR_hl_field(2, Error_671, 2) = (MR_Box) ((MR_Unsigned) (Var_668));
                    }
                    *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_17 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Error_671));
                      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
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
