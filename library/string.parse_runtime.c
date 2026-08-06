/*
** Automatically generated from `string.parse_runtime.m'
** by the Mercury compiler,
** version rotd-2026-08-06
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
#include "fat_sparse_bitset.mih"
#include "fatter_sparse_bitset.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
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
#include "tree_bitset.mih"
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
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
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
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Char ArgX3_12 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__2_2, 2)));
              MR_Char ArgY3_13 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__3_3, 2)));
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
              MR_Word ArgX1_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word ArgX3_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
              MR_Word ArgY3_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 2))));
              MR_String ArgX4_23 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 3))));
              MR_String ArgY4_24 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 3))));
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
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word ArgX4_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Word ArgY4_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word ArgX4_45 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 4))) & (MR_Integer) 7);
                      MR_Word ArgY4_46 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 4))) & (MR_Integer) 7);
                      MR_Word ArgX5_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                      MR_Word ArgY5_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ArgX1_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_53 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_56 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_57 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word ArgX4_59 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 4))) & (MR_Integer) 7);
                      MR_Word ArgY4_60 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 4))) & (MR_Integer) 7);
                      MR_Word ArgX5_62 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                      MR_Word ArgY5_63 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ArgX1_64 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_65 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_67 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_68 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_70 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_71 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word ArgX4_73 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 4))) & (MR_Integer) 7);
                      MR_Word ArgY4_74 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 4))) & (MR_Integer) 7);
                      MR_Float ArgX5_76 = MR_unbox_float((MR_hl_field(3, HeadVar__2_2, 5)));
                      MR_Float ArgY5_77 = MR_unbox_float((MR_hl_field(3, HeadVar__3_3, 5)));
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
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_String ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Word ArgY2_8;
          MR_Char ArgX3_9 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, 2)));
          MR_Char ArgY3_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
            ArgY3_10 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__2_2, 2)));
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
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_12;
          MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_14;
          MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 2))));
          MR_Word ArgY3_16;
          MR_String ArgX4_17 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 3))));
          MR_String ArgY4_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            ArgY3_16 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
            ArgY4_18 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 3))));
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
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_20;
              MR_Word ArgX2_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_22;
              MR_Word ArgX3_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_24;
              MR_Word ArgX4_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
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
              MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_28;
              MR_Word ArgX2_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_30;
              MR_Word ArgX3_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_32;
              MR_Word ArgX4_33 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 4))) & (MR_Integer) 7);
              MR_Word ArgY4_34;
              MR_Word ArgX5_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_36;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_30 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_34 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 4))) & (MR_Integer) 7);
                ArgY5_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
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
              MR_Word ArgX1_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_38;
              MR_Word ArgX2_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_40;
              MR_Word ArgX3_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_42;
              MR_Word ArgX4_43 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 4))) & (MR_Integer) 7);
              MR_Word ArgY4_44;
              MR_Word ArgX5_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_46;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_44 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 4))) & (MR_Integer) 7);
                ArgY5_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
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
              MR_Word ArgX1_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_48;
              MR_Word ArgX2_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_50;
              MR_Word ArgX3_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_52;
              MR_Word ArgX4_53 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 4))) & (MR_Integer) 7);
              MR_Word ArgY4_54;
              MR_Float ArgX5_55 = MR_unbox_float((MR_hl_field(3, HeadVar__1_1, 5)));
              MR_Float ArgY5_56;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_54 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 4))) & (MR_Integer) 7);
                ArgY5_56 = MR_unbox_float((MR_hl_field(3, HeadVar__2_2, 5)));
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
              MR_Unsigned ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Unsigned ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))));

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
              uint8_t ArgX1_6 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__2_2, 0)));
              uint8_t ArgY1_7 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__3_3, 0)));

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
              uint16_t ArgX1_8 = ((uint16_t) (MR_Word) (MR_hl_field(2, HeadVar__2_2, 0)));
              uint16_t ArgY1_9 = ((uint16_t) (MR_Word) (MR_hl_field(2, HeadVar__3_3, 0)));

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
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      uint32_t ArgX1_10 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                      uint32_t ArgY1_11 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));

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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      uint64_t ArgX1_12 = MR_unbox_uint64((MR_hl_field(3, HeadVar__2_2, 1)));
                      uint64_t ArgY1_13 = MR_unbox_uint64((MR_hl_field(3, HeadVar__3_3, 1)));

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
          MR_Unsigned ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Unsigned ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          uint8_t ArgX1_5 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__1_1, 0)));
          uint8_t ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__2_2, 0)));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          uint16_t ArgX1_7 = ((uint16_t) (MR_Word) (MR_hl_field(2, HeadVar__1_1, 0)));
          uint16_t ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((uint16_t) (MR_Word) (MR_hl_field(2, HeadVar__2_2, 0)));
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              uint32_t ArgX1_9 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              uint32_t ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                succeeded = (ArgX1_9 == ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              uint64_t ArgX1_11 = MR_unbox_uint64((MR_hl_field(3, HeadVar__1_1, 1)));
              uint64_t ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = MR_unbox_uint64((MR_hl_field(3, HeadVar__2_2, 1)));
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
              MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));

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
              int8_t ArgX1_6 = ((int8_t) (MR_Word) (MR_hl_field(1, HeadVar__2_2, 0)));
              int8_t ArgY1_7 = ((int8_t) (MR_Word) (MR_hl_field(1, HeadVar__3_3, 0)));

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
              int16_t ArgX1_8 = ((int16_t) (MR_Word) (MR_hl_field(2, HeadVar__2_2, 0)));
              int16_t ArgY1_9 = ((int16_t) (MR_Word) (MR_hl_field(2, HeadVar__3_3, 0)));

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
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      int32_t ArgX1_10 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                      int32_t ArgY1_11 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));

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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      int64_t ArgX1_12 = MR_unbox_int64((MR_hl_field(3, HeadVar__2_2, 1)));
                      int64_t ArgY1_13 = MR_unbox_int64((MR_hl_field(3, HeadVar__3_3, 1)));

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
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          int8_t ArgX1_5 = ((int8_t) (MR_Word) (MR_hl_field(1, HeadVar__1_1, 0)));
          int8_t ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((int8_t) (MR_Word) (MR_hl_field(1, HeadVar__2_2, 0)));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          int16_t ArgX1_7 = ((int16_t) (MR_Word) (MR_hl_field(2, HeadVar__1_1, 0)));
          int16_t ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((int16_t) (MR_Word) (MR_hl_field(2, HeadVar__2_2, 0)));
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              int32_t ArgX1_9 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              int32_t ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                succeeded = (ArgX1_9 == ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              int64_t ArgX1_11 = MR_unbox_int64((MR_hl_field(3, HeadVar__1_1, 1)));
              int64_t ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = MR_unbox_int64((MR_hl_field(3, HeadVar__2_2, 1)));
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
      MR_Unsigned Var_38;

      mercury__list__ulength_acc_3_p_0((MR_Word) (&mercury__string__string__type_ctor_info_poly_type_0), STATE_VARIABLE_PolyTypes_0_28, (MR_Unsigned) 0U, &Var_38);
{
#define MR_PROC_LABEL mercury__string__parse_runtime__parse_format_string_5_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_38 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_29  = I;
}
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
    MR_Word STATE_VARIABLE_Chars_1_31 = ((MR_Word) ((MR_hl_field(1, GatherEndedBy_12, 0))));
    MR_Word STATE_VARIABLE_Chars_2_32;
    MR_Word STATE_VARIABLE_PolyTypes_1_33;
    MR_Integer Var_34;

    mercury__string__parse_runtime__parse_conversion_specification_7_p_0(STATE_VARIABLE_Chars_1_31, &STATE_VARIABLE_Chars_2_32, STATE_VARIABLE_PolyTypes_0_28, &STATE_VARIABLE_PolyTypes_1_33, SpecNum_8, &HeadSpec_17, &HeadErrors_18);
    Var_34 = (MR_Integer) ((MR_Unsigned) SpecNum_8 + (MR_Unsigned) 1);
    mercury__string__parse_runtime__parse_format_string_5_p_0(STATE_VARIABLE_Chars_2_32, STATE_VARIABLE_PolyTypes_1_33, Var_34, &TailSpecs_19, &TailErrors_20);
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
  MR_Word STATE_VARIABLE_Chars_1_29;
  MR_Word STATE_VARIABLE_Chars_2_30;
  MR_Word STATE_VARIABLE_PolyTypes_1_31;
  MR_Word STATE_VARIABLE_Chars_3_32;
  MR_Word STATE_VARIABLE_PolyTypes_2_33;
  MR_Word Var_36;
  MR_Word STATE_VARIABLE_Chars_1_41;
  MR_Char Var_42;
  MR_Word STATE_VARIABLE_Chars_1_52;
  MR_Char Var_53;

  mercury__string__parse_util__gather_flag_chars_4_p_0(STATE_VARIABLE_Chars_0_20, &STATE_VARIABLE_Chars_1_29, (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[0]), &Flags_14);
  succeeded = (STATE_VARIABLE_Chars_1_29 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_42 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_1_29, 0)));
    STATE_VARIABLE_Chars_1_41 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_1_29, 1))));
    succeeded = (Var_42 == (MR_Char) 42);
  }
  if (succeeded)
  {
    STATE_VARIABLE_Chars_2_30 = STATE_VARIABLE_Chars_1_41;
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
      STATE_VARIABLE_PolyTypes_1_31 = STATE_VARIABLE_PolyTypes_0_22;
    }
    else
    {
      MR_Word PolyType_38 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_22, 0))));
      MR_Integer PolyWidth_39;

      STATE_VARIABLE_PolyTypes_1_31 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_22, 1))));
      succeeded = ((MR_tag((MR_Word) PolyType_38)) == (MR_Integer) 1);
      if (succeeded)
      {
        PolyWidth_39 = ((MR_Integer) ((MR_hl_field(1, PolyType_38, 0))));
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
    MR_Word STATE_VARIABLE_Chars_2_48;

    succeeded = mercury__string__parse_util__get_nonzero_number_prefix_3_p_0(STATE_VARIABLE_Chars_1_29, &STATE_VARIABLE_Chars_2_48, &Width_40);
    if (succeeded)
    {
      STATE_VARIABLE_Chars_2_30 = STATE_VARIABLE_Chars_2_48;
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
      STATE_VARIABLE_Chars_2_30 = STATE_VARIABLE_Chars_1_29;
    }
    STATE_VARIABLE_PolyTypes_1_31 = STATE_VARIABLE_PolyTypes_0_22;
  }
  succeeded = (STATE_VARIABLE_Chars_2_30 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_53 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_2_30, 0)));
    STATE_VARIABLE_Chars_1_52 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_2_30, 1))));
    succeeded = (Var_53 == (MR_Char) 46);
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Chars_2_54;
    MR_Char Var_55;

    succeeded = (STATE_VARIABLE_Chars_1_52 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_55 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_1_52, 0)));
      STATE_VARIABLE_Chars_2_54 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_1_52, 1))));
      succeeded = (Var_55 == (MR_Char) 42);
    }
    if (succeeded)
    {
      STATE_VARIABLE_Chars_3_32 = STATE_VARIABLE_Chars_2_54;
      if ((STATE_VARIABLE_PolyTypes_1_31 == (MR_Word) ((MR_Unsigned) 0U)))
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
        STATE_VARIABLE_PolyTypes_2_33 = STATE_VARIABLE_PolyTypes_1_31;
      }
      else
      {
        MR_Word PolyType_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_1_31, 0))));
        MR_Integer PolyPrec_50;

        STATE_VARIABLE_PolyTypes_2_33 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_1_31, 1))));
        succeeded = ((MR_tag((MR_Word) PolyType_49)) == (MR_Integer) 1);
        if (succeeded)
        {
          PolyPrec_50 = ((MR_Integer) ((MR_hl_field(1, PolyType_49, 0))));
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

      mercury__string__parse_util__get_number_prefix_loop_4_p_0(STATE_VARIABLE_Chars_1_52, &STATE_VARIABLE_Chars_3_32, (MR_Integer) 0, &Prec_51);
      {
        MaybePrec_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybePrec_17, 0) = ((MR_Box) (Prec_51));
      }
      PrecErrors_18 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_PolyTypes_2_33 = STATE_VARIABLE_PolyTypes_1_31;
    }
  }
  else
  {
    MaybePrec_17 = (MR_Word) ((MR_Unsigned) 0U);
    PrecErrors_18 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_PolyTypes_2_33 = STATE_VARIABLE_PolyTypes_1_31;
    STATE_VARIABLE_Chars_3_32 = STATE_VARIABLE_Chars_2_30;
  }
  if ((STATE_VARIABLE_Chars_3_32 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_73;
    MR_Integer Var_74;
    MR_Unsigned Var_94;

    *Spec_11 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
    mercury__list__ulength_acc_3_p_0((MR_Word) (&mercury__string__string__type_ctor_info_poly_type_0), STATE_VARIABLE_PolyTypes_2_33, (MR_Unsigned) 0U, &Var_94);
{
#define MR_PROC_LABEL mercury__string__parse_runtime__parse_conversion_specification_7_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_94 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_74  = I;
}
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
    *STATE_VARIABLE_PolyTypes_23 = STATE_VARIABLE_PolyTypes_2_33;
    *STATE_VARIABLE_Chars_21 = STATE_VARIABLE_Chars_3_32;
  }
  else
  {
    MR_Char SpecChar_82 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_3_32, 0)));
    MR_Word SpecPrime_83;
    MR_Word ErrorsPrime_84;
    MR_Word STATE_VARIABLE_PolyTypes_1_90;

    *STATE_VARIABLE_Chars_21 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_3_32, 1))));
    succeeded = mercury__string__parse_runtime__parse_spec_9_p_0(SpecChar_82, STATE_VARIABLE_PolyTypes_2_33, &STATE_VARIABLE_PolyTypes_1_90, Flags_14, MaybeWidth_15, MaybePrec_17, SpecNum_10, &SpecPrime_83, &ErrorsPrime_84);
    if (succeeded)
    {
      *STATE_VARIABLE_PolyTypes_23 = STATE_VARIABLE_PolyTypes_1_90;
      *Spec_11 = SpecPrime_83;
      SpecErrors_19 = ErrorsPrime_84;
    }
    else
    {
      MR_Word Error_85;

      {
        Error_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Error_85, 0) = ((MR_Box) (SpecNum_10));
        MR_hl_field(1, Error_85, 1) = ((MR_Box) (MR_Word) (SpecChar_82));
      }
      *Spec_11 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
      {
        SpecErrors_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SpecErrors_19, 0) = ((MR_Box) (Error_85));
        MR_hl_field(1, SpecErrors_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_PolyTypes_23 = STATE_VARIABLE_PolyTypes_2_33;
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
          MR_Word SpecPolyType_136 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 0))));
          MR_Float Float_45;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_136)) == (MR_Integer) 0);
          if (succeeded)
          {
            Float_45 = MR_unbox_float((MR_hl_field(0, SpecPolyType_136, 0)));
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
          MR_Word Error_163;

          {
            Error_163 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_163, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_163, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_163, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_163));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_175 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 0))));
          MR_Float Float_167;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_175)) == (MR_Integer) 0);
          if (succeeded)
          {
            Float_167 = MR_unbox_float((MR_hl_field(0, SpecPolyType_175, 0)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
              MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
              MR_hl_field(3, base, 5) = MR_box_float(Float_167);
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_164;
            MR_Word Error_166;

            Var_164 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_175);
            {
              Error_166 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_166, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(2, Error_166, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(2, Error_166, 2) = (MR_Box) ((MR_Unsigned) (Var_164));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_166));
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
          MR_Word Error_192;

          {
            Error_192 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_192, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_192, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_192, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_192));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_204 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 0))));
          MR_Float Float_196;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_204)) == (MR_Integer) 0);
          if (succeeded)
          {
            Float_196 = MR_unbox_float((MR_hl_field(0, SpecPolyType_204, 0)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
              MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
              MR_hl_field(3, base, 5) = MR_box_float(Float_196);
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_193;
            MR_Word Error_195;

            Var_193 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_204);
            {
              Error_195 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_195, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(2, Error_195, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(2, Error_195, 2) = (MR_Box) ((MR_Unsigned) (Var_193));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_195));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 101:
      {
        if ((STATE_VARIABLE_PolyTypes_0_48 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_221;

          {
            Error_221 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_221, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_221, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_221, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_221));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_233 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 0))));
          MR_Float Float_225;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_233)) == (MR_Integer) 0);
          if (succeeded)
          {
            Float_225 = MR_unbox_float((MR_hl_field(0, SpecPolyType_233, 0)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
              MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(3, base, 5) = MR_box_float(Float_225);
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_222;
            MR_Word Error_224;

            Var_222 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_233);
            {
              Error_224 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_224, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(2, Error_224, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(2, Error_224, 2) = (MR_Box) ((MR_Unsigned) (Var_222));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_224));
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
          MR_Word SpecPolyType_262 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 0))));
          MR_Float Float_254;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_262)) == (MR_Integer) 0);
          if (succeeded)
          {
            Float_254 = MR_unbox_float((MR_hl_field(0, SpecPolyType_262, 0)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
              MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
              MR_hl_field(3, base, 5) = MR_box_float(Float_254);
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_251;
            MR_Word Error_253;

            Var_251 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_262);
            {
              Error_253 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_253, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(2, Error_253, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(2, Error_253, 2) = (MR_Box) ((MR_Unsigned) (Var_251));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_253));
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
          MR_Word Error_279;

          {
            Error_279 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_279, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_279, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_279, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_279));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_291 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 0))));
          MR_Float Float_283;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_291)) == (MR_Integer) 0);
          if (succeeded)
          {
            Float_283 = MR_unbox_float((MR_hl_field(0, SpecPolyType_291, 0)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Spec_16 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
              MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
              MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
              MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
              MR_hl_field(3, base, 5) = MR_box_float(Float_283);
            }
            *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_280;
            MR_Word Error_282;

            Var_280 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_291);
            {
              Error_282 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_282, 0) = ((MR_Box) (SpecNum_15));
              MR_hl_field(2, Error_282, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
              MR_hl_field(2, Error_282, 2) = (MR_Box) ((MR_Unsigned) (Var_280));
            }
            *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_17 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_282));
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
          MR_Word SpecPolyType_109 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 0))));

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 1))));
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
                MR_Integer Int_85 = ((MR_Integer) ((MR_hl_field(1, SpecPolyType_109, 0))));
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
                int8_t Int8_86 = ((int8_t) (MR_Word) (MR_hl_field(2, SpecPolyType_109, 0)));
                MR_Word SizedInt_310;

                {
                  SizedInt_310 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SizedInt_310, 0) = ((MR_Box) (MR_Word) (Int8_86));
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
                  MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_310));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, SpecPolyType_109, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    int16_t Int16_87 = ((int16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_109, 1)));
                    MR_Word SizedInt_307;

                    {
                      SizedInt_307 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedInt_307, 0) = ((MR_Box) (MR_Word) (Int16_87));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_307));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int32_t Int32_88 = ((int32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_109, 1)));
                    MR_Word SizedInt_308;

                    {
                      SizedInt_308 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_308, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedInt_308, 1) = ((MR_Box) (MR_Word) (Int32_88));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_308));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int64_t Int64_89 = MR_unbox_int64((MR_hl_field(3, SpecPolyType_109, 1)));
                    MR_Word SizedInt_309;

                    {
                      SizedInt_309 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_309, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedInt_309, 1) = MR_box_int64(Int64_89);
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_309));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Unsigned UInt_35 = ((MR_Unsigned) ((MR_hl_field(3, SpecPolyType_109, 1))));
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
                    uint8_t UInt8_37 = ((uint8_t) (MR_Word) (MR_hl_field(3, SpecPolyType_109, 1)));
                    MR_Word SizedUInt_314;

                    {
                      SizedUInt_314 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, SizedUInt_314, 0) = ((MR_Box) (MR_Word) (UInt8_37));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_314));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    uint16_t UInt16_38 = ((uint16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_109, 1)));
                    MR_Word SizedUInt_311;

                    {
                      SizedUInt_311 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedUInt_311, 0) = ((MR_Box) (MR_Word) (UInt16_38));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_311));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    uint32_t UInt32_39 = ((uint32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_109, 1)));
                    MR_Word SizedUInt_312;

                    {
                      SizedUInt_312 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedUInt_312, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedUInt_312, 1) = ((MR_Box) (MR_Word) (UInt32_39));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_312));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    uint64_t UInt64_40 = MR_unbox_uint64((MR_hl_field(3, SpecPolyType_109, 1)));
                    MR_Word SizedUInt_313;

                    {
                      SizedUInt_313 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedUInt_313, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedUInt_313, 1) = MR_box_uint64(UInt64_40);
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_313));
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
    case (MR_Char) 111:
      {
        if ((STATE_VARIABLE_PolyTypes_0_48 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_316;

          {
            Error_316 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_316, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_316, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_316, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_316));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_370 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 0))));

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 1))));
          switch (MR_tag((MR_Word) SpecPolyType_370)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_317;
                MR_Word Error_319;

                Var_317 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_370);
                {
                  Error_319 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Error_319, 0) = ((MR_Box) (SpecNum_15));
                  MR_hl_field(2, Error_319, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                  MR_hl_field(2, Error_319, 2) = (MR_Box) ((MR_Unsigned) (Var_317));
                }
                *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_17 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Error_319));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Int_320 = ((MR_Integer) ((MR_hl_field(1, SpecPolyType_370, 0))));
                MR_Word SizedInt_321;

                {
                  SizedInt_321 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SizedInt_321, 0) = ((MR_Box) (Int_320));
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
                  MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_321));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                int8_t Int8_328 = ((int8_t) (MR_Word) (MR_hl_field(2, SpecPolyType_370, 0)));
                MR_Word SizedInt_329;

                {
                  SizedInt_329 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SizedInt_329, 0) = ((MR_Box) (MR_Word) (Int8_328));
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
                  MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_329));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, SpecPolyType_370, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    int16_t Int16_322 = ((int16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_370, 1)));
                    MR_Word SizedInt_323;

                    {
                      SizedInt_323 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedInt_323, 0) = ((MR_Box) (MR_Word) (Int16_322));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_323));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int32_t Int32_324 = ((int32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_370, 1)));
                    MR_Word SizedInt_325;

                    {
                      SizedInt_325 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_325, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedInt_325, 1) = ((MR_Box) (MR_Word) (Int32_324));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_325));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int64_t Int64_326 = MR_unbox_int64((MR_hl_field(3, SpecPolyType_370, 1)));
                    MR_Word SizedInt_327;

                    {
                      SizedInt_327 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_327, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedInt_327, 1) = MR_box_int64(Int64_326);
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_327));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Unsigned UInt_330 = ((MR_Unsigned) ((MR_hl_field(3, SpecPolyType_370, 1))));
                    MR_Word SizedUInt_331;

                    {
                      SizedUInt_331 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SizedUInt_331, 0) = ((MR_Box) (UInt_330));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_331));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word SizedUInt_338;
                    uint8_t UInt8_339 = ((uint8_t) (MR_Word) (MR_hl_field(3, SpecPolyType_370, 1)));

                    {
                      SizedUInt_338 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, SizedUInt_338, 0) = ((MR_Box) (MR_Word) (UInt8_339));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_338));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word SizedUInt_332;
                    uint16_t UInt16_333 = ((uint16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_370, 1)));

                    {
                      SizedUInt_332 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedUInt_332, 0) = ((MR_Box) (MR_Word) (UInt16_333));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_332));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word SizedUInt_334;
                    uint32_t UInt32_335 = ((uint32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_370, 1)));

                    {
                      SizedUInt_334 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedUInt_334, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedUInt_334, 1) = ((MR_Box) (MR_Word) (UInt32_335));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_334));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word SizedUInt_336;
                    uint64_t UInt64_337 = MR_unbox_uint64((MR_hl_field(3, SpecPolyType_370, 1)));

                    {
                      SizedUInt_336 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedUInt_336, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedUInt_336, 1) = MR_box_uint64(UInt64_337);
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_336));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Var_317;
                    MR_Word Error_319;

                    Var_317 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_370);
                    {
                      Error_319 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Error_319, 0) = ((MR_Box) (SpecNum_15));
                      MR_hl_field(2, Error_319, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                      MR_hl_field(2, Error_319, 2) = (MR_Box) ((MR_Unsigned) (Var_317));
                    }
                    *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_17 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Error_319));
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
        MR_Word STATE_VARIABLE_Flags_1_490;
        MR_Word Var_158 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Flags_0_50, 0))) >> 3)) & (MR_Integer) 1);
        MR_Word Var_159 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Flags_0_50, 0))) >> 2)) & (MR_Integer) 1);
        MR_Word Var_160 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Flags_0_50, 0))) >> 1)) & (MR_Integer) 1);
        MR_Word Var_161 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Flags_0_50, 0))) & (MR_Integer) 1);

        {
          STATE_VARIABLE_Flags_1_490 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Flags_1_490, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 4)) | (((((MR_Unsigned) (Var_158) << 3)) | (((((MR_Unsigned) (Var_159) << 2)) | (((((MR_Unsigned) (Var_160) << 1)) | (MR_Unsigned) (Var_161)))))))));
        }
        if ((STATE_VARIABLE_PolyTypes_0_48 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_410;

          {
            Error_410 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_410, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_410, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_410, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_410));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_464 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 0))));

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 1))));
          switch (MR_tag((MR_Word) SpecPolyType_464)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_411;
                MR_Word Error_413;

                Var_411 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_464);
                {
                  Error_413 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Error_413, 0) = ((MR_Box) (SpecNum_15));
                  MR_hl_field(2, Error_413, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                  MR_hl_field(2, Error_413, 2) = (MR_Box) ((MR_Unsigned) (Var_411));
                }
                *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_17 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Error_413));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Int_414 = ((MR_Integer) ((MR_hl_field(1, SpecPolyType_464, 0))));
                MR_Word SizedInt_415;

                {
                  SizedInt_415 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SizedInt_415, 0) = ((MR_Box) (Int_414));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_1_490));
                  MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                  MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_415));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                int8_t Int8_422 = ((int8_t) (MR_Word) (MR_hl_field(2, SpecPolyType_464, 0)));
                MR_Word SizedInt_423;

                {
                  SizedInt_423 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SizedInt_423, 0) = ((MR_Box) (MR_Word) (Int8_422));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_1_490));
                  MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                  MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_423));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, SpecPolyType_464, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    int16_t Int16_416 = ((int16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_464, 1)));
                    MR_Word SizedInt_417;

                    {
                      SizedInt_417 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedInt_417, 0) = ((MR_Box) (MR_Word) (Int16_416));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_1_490));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_417));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int32_t Int32_418 = ((int32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_464, 1)));
                    MR_Word SizedInt_419;

                    {
                      SizedInt_419 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_419, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedInt_419, 1) = ((MR_Box) (MR_Word) (Int32_418));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_1_490));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_419));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int64_t Int64_420 = MR_unbox_int64((MR_hl_field(3, SpecPolyType_464, 1)));
                    MR_Word SizedInt_421;

                    {
                      SizedInt_421 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_421, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedInt_421, 1) = MR_box_int64(Int64_420);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_1_490));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_421));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Unsigned UInt_424 = ((MR_Unsigned) ((MR_hl_field(3, SpecPolyType_464, 1))));
                    MR_Word SizedUInt_425;

                    {
                      SizedUInt_425 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SizedUInt_425, 0) = ((MR_Box) (UInt_424));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_1_490));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_425));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word SizedUInt_432;
                    uint8_t UInt8_433 = ((uint8_t) (MR_Word) (MR_hl_field(3, SpecPolyType_464, 1)));

                    {
                      SizedUInt_432 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, SizedUInt_432, 0) = ((MR_Box) (MR_Word) (UInt8_433));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_1_490));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_432));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word SizedUInt_426;
                    uint16_t UInt16_427 = ((uint16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_464, 1)));

                    {
                      SizedUInt_426 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedUInt_426, 0) = ((MR_Box) (MR_Word) (UInt16_427));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_1_490));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_426));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word SizedUInt_428;
                    uint32_t UInt32_429 = ((uint32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_464, 1)));

                    {
                      SizedUInt_428 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedUInt_428, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedUInt_428, 1) = ((MR_Box) (MR_Word) (UInt32_429));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_1_490));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_428));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word SizedUInt_430;
                    uint64_t UInt64_431 = MR_unbox_uint64((MR_hl_field(3, SpecPolyType_464, 1)));

                    {
                      SizedUInt_430 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedUInt_430, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedUInt_430, 1) = MR_box_uint64(UInt64_431);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_1_490));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_430));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Var_411;
                    MR_Word Error_413;

                    Var_411 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_464);
                    {
                      Error_413 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Error_413, 0) = ((MR_Box) (SpecNum_15));
                      MR_hl_field(2, Error_413, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                      MR_hl_field(2, Error_413, 2) = (MR_Box) ((MR_Unsigned) (Var_411));
                    }
                    *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_17 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Error_413));
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
    case (MR_Char) 117:
      {
        if ((STATE_VARIABLE_PolyTypes_0_48 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_504;

          {
            Error_504 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_504, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_504, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_504, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_504));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_558 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 0))));

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 1))));
          switch (MR_tag((MR_Word) SpecPolyType_558)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_505;
                MR_Word Error_507;

                Var_505 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_558);
                {
                  Error_507 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Error_507, 0) = ((MR_Box) (SpecNum_15));
                  MR_hl_field(2, Error_507, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                  MR_hl_field(2, Error_507, 2) = (MR_Box) ((MR_Unsigned) (Var_505));
                }
                *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_17 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Error_507));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Int_508 = ((MR_Integer) ((MR_hl_field(1, SpecPolyType_558, 0))));
                MR_Word SizedInt_509;

                {
                  SizedInt_509 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SizedInt_509, 0) = ((MR_Box) (Int_508));
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
                  MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_509));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                int8_t Int8_516 = ((int8_t) (MR_Word) (MR_hl_field(2, SpecPolyType_558, 0)));
                MR_Word SizedInt_517;

                {
                  SizedInt_517 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SizedInt_517, 0) = ((MR_Box) (MR_Word) (Int8_516));
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
                  MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_517));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, SpecPolyType_558, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    int16_t Int16_510 = ((int16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_558, 1)));
                    MR_Word SizedInt_511;

                    {
                      SizedInt_511 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedInt_511, 0) = ((MR_Box) (MR_Word) (Int16_510));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_511));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int32_t Int32_512 = ((int32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_558, 1)));
                    MR_Word SizedInt_513;

                    {
                      SizedInt_513 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_513, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedInt_513, 1) = ((MR_Box) (MR_Word) (Int32_512));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_513));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int64_t Int64_514 = MR_unbox_int64((MR_hl_field(3, SpecPolyType_558, 1)));
                    MR_Word SizedInt_515;

                    {
                      SizedInt_515 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_515, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedInt_515, 1) = MR_box_int64(Int64_514);
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_515));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Unsigned UInt_518 = ((MR_Unsigned) ((MR_hl_field(3, SpecPolyType_558, 1))));
                    MR_Word SizedUInt_519;

                    {
                      SizedUInt_519 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SizedUInt_519, 0) = ((MR_Box) (UInt_518));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_519));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word SizedUInt_526;
                    uint8_t UInt8_527 = ((uint8_t) (MR_Word) (MR_hl_field(3, SpecPolyType_558, 1)));

                    {
                      SizedUInt_526 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, SizedUInt_526, 0) = ((MR_Box) (MR_Word) (UInt8_527));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_526));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word SizedUInt_520;
                    uint16_t UInt16_521 = ((uint16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_558, 1)));

                    {
                      SizedUInt_520 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedUInt_520, 0) = ((MR_Box) (MR_Word) (UInt16_521));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_520));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word SizedUInt_522;
                    uint32_t UInt32_523 = ((uint32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_558, 1)));

                    {
                      SizedUInt_522 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedUInt_522, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedUInt_522, 1) = ((MR_Box) (MR_Word) (UInt32_523));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_522));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word SizedUInt_524;
                    uint64_t UInt64_525 = MR_unbox_uint64((MR_hl_field(3, SpecPolyType_558, 1)));

                    {
                      SizedUInt_524 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedUInt_524, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedUInt_524, 1) = MR_box_uint64(UInt64_525);
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_524));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Var_505;
                    MR_Word Error_507;

                    Var_505 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_558);
                    {
                      Error_507 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Error_507, 0) = ((MR_Box) (SpecNum_15));
                      MR_hl_field(2, Error_507, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                      MR_hl_field(2, Error_507, 2) = (MR_Box) ((MR_Unsigned) (Var_505));
                    }
                    *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_17 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Error_507));
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
          MR_Word Error_598;

          {
            Error_598 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_598, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_598, 1) = ((MR_Box) (SpecNum_15));
            MR_hl_field(3, Error_598, 2) = ((MR_Box) (MR_Word) (SpecChar_10));
          }
          *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_17 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_598));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_49 = STATE_VARIABLE_PolyTypes_0_48;
        }
        else
        {
          MR_Word SpecPolyType_652 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 0))));

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 1))));
          switch (MR_tag((MR_Word) SpecPolyType_652)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_599;
                MR_Word Error_601;

                Var_599 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_652);
                {
                  Error_601 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Error_601, 0) = ((MR_Box) (SpecNum_15));
                  MR_hl_field(2, Error_601, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                  MR_hl_field(2, Error_601, 2) = (MR_Box) ((MR_Unsigned) (Var_599));
                }
                *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_17 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Error_601));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Int_602 = ((MR_Integer) ((MR_hl_field(1, SpecPolyType_652, 0))));
                MR_Word SizedInt_603;

                {
                  SizedInt_603 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SizedInt_603, 0) = ((MR_Box) (Int_602));
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
                  MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_603));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                int8_t Int8_610 = ((int8_t) (MR_Word) (MR_hl_field(2, SpecPolyType_652, 0)));
                MR_Word SizedInt_611;

                {
                  SizedInt_611 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SizedInt_611, 0) = ((MR_Box) (MR_Word) (Int8_610));
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
                  MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_611));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, SpecPolyType_652, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    int16_t Int16_604 = ((int16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_652, 1)));
                    MR_Word SizedInt_605;

                    {
                      SizedInt_605 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedInt_605, 0) = ((MR_Box) (MR_Word) (Int16_604));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_605));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int32_t Int32_606 = ((int32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_652, 1)));
                    MR_Word SizedInt_607;

                    {
                      SizedInt_607 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_607, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedInt_607, 1) = ((MR_Box) (MR_Word) (Int32_606));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_607));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int64_t Int64_608 = MR_unbox_int64((MR_hl_field(3, SpecPolyType_652, 1)));
                    MR_Word SizedInt_609;

                    {
                      SizedInt_609 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_609, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedInt_609, 1) = MR_box_int64(Int64_608);
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedInt_609));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Unsigned UInt_612 = ((MR_Unsigned) ((MR_hl_field(3, SpecPolyType_652, 1))));
                    MR_Word SizedUInt_613;

                    {
                      SizedUInt_613 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SizedUInt_613, 0) = ((MR_Box) (UInt_612));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_613));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word SizedUInt_620;
                    uint8_t UInt8_621 = ((uint8_t) (MR_Word) (MR_hl_field(3, SpecPolyType_652, 1)));

                    {
                      SizedUInt_620 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, SizedUInt_620, 0) = ((MR_Box) (MR_Word) (UInt8_621));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_620));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word SizedUInt_614;
                    uint16_t UInt16_615 = ((uint16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_652, 1)));

                    {
                      SizedUInt_614 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedUInt_614, 0) = ((MR_Box) (MR_Word) (UInt16_615));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_614));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word SizedUInt_616;
                    uint32_t UInt32_617 = ((uint32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_652, 1)));

                    {
                      SizedUInt_616 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedUInt_616, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedUInt_616, 1) = ((MR_Box) (MR_Word) (UInt32_617));
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_616));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word SizedUInt_618;
                    uint64_t UInt64_619 = MR_unbox_uint64((MR_hl_field(3, SpecPolyType_652, 1)));

                    {
                      SizedUInt_618 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedUInt_618, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedUInt_618, 1) = MR_box_uint64(UInt64_619);
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
                      MR_hl_field(3, base, 5) = ((MR_Box) (SizedUInt_618));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Var_599;
                    MR_Word Error_601;

                    Var_599 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_652);
                    {
                      Error_601 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Error_601, 0) = ((MR_Box) (SpecNum_15));
                      MR_hl_field(2, Error_601, 1) = ((MR_Box) (MR_Word) (SpecChar_10));
                      MR_hl_field(2, Error_601, 2) = (MR_Box) ((MR_Unsigned) (Var_599));
                    }
                    *Spec_16 = (MR_Word) (&mercury__string__parse_runtime_scalar_common_4[1]);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_17 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Error_601));
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
          MR_Word SpecPolyType_145 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 0))));
          MR_Char Char_46;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 1))));
          succeeded = ((((MR_tag((MR_Word) SpecPolyType_145)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SpecPolyType_145, 0)))) == (MR_Integer) 9)));
          if (succeeded)
          {
            Char_46 = ((MR_Char) (MR_Word) (MR_hl_field(3, SpecPolyType_145, 1)));
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
          MR_Word SpecPolyType_18 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 0))));

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 1))));
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
                MR_Integer Int_19 = ((MR_Integer) ((MR_hl_field(1, SpecPolyType_18, 0))));
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
                int8_t Int8_21 = ((int8_t) (MR_Word) (MR_hl_field(2, SpecPolyType_18, 0)));
                MR_Word SizedInt_694;

                {
                  SizedInt_694 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SizedInt_694, 0) = ((MR_Box) (MR_Word) (Int8_21));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_16 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                  MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                  MR_hl_field(3, base, 4) = ((MR_Box) (SizedInt_694));
                }
                *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, SpecPolyType_18, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    int16_t Int16_22 = ((int16_t) (MR_Word) (MR_hl_field(3, SpecPolyType_18, 1)));
                    MR_Word SizedInt_691;

                    {
                      SizedInt_691 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, SizedInt_691, 0) = ((MR_Box) (MR_Word) (Int16_22));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = ((MR_Box) (SizedInt_691));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int32_t Int32_23 = ((int32_t) (MR_Word) (MR_hl_field(3, SpecPolyType_18, 1)));
                    MR_Word SizedInt_692;

                    {
                      SizedInt_692 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_692, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SizedInt_692, 1) = ((MR_Box) (MR_Word) (Int32_23));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = ((MR_Box) (SizedInt_692));
                    }
                    *Errors_17 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int64_t Int64_24 = MR_unbox_int64((MR_hl_field(3, SpecPolyType_18, 1)));
                    MR_Word SizedInt_693;

                    {
                      SizedInt_693 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SizedInt_693, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SizedInt_693, 1) = MR_box_int64(Int64_24);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_16 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_50));
                      MR_hl_field(3, base, 2) = ((MR_Box) (MaybeWidth_13));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybePrec_14));
                      MR_hl_field(3, base, 4) = ((MR_Box) (SizedInt_693));
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
          MR_Word SpecPolyType_154 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 0))));
          MR_String Str_47;

          *STATE_VARIABLE_PolyTypes_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_48, 1))));
          succeeded = ((((MR_tag((MR_Word) SpecPolyType_154)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SpecPolyType_154, 0)))) == (MR_Integer) 8)));
          if (succeeded)
          {
            Str_47 = ((MR_String) ((MR_hl_field(3, SpecPolyType_154, 1))));
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
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
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
