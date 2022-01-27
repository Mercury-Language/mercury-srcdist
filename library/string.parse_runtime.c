/*
** Automatically generated from `string.parse_runtime.m'
** by the Mercury compiler,
** version DEV
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


/* :- module string.parse_runtime. */
/* :- implementation. */

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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




#line 93 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_0[1];

#line 96 "string.parse_runtime.c"
static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_0;

#line 99 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_1[3];

#line 102 "string.parse_runtime.c"
static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_1;

#line 105 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_2[4];

#line 108 "string.parse_runtime.c"
static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_2;

#line 111 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_3[4];

#line 114 "string.parse_runtime.c"
static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_3;

#line 117 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_4[5];

#line 120 "string.parse_runtime.c"
static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_4;

#line 123 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_5[5];

#line 126 "string.parse_runtime.c"
static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_5;

#line 129 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_0[1];

#line 132 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_1[1];

#line 135 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_2[1];

#line 138 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_3[3];

#line 141 "string.parse_runtime.c"
static const MR_DuPtagLayout mercury__string__parse_runtime__string__parse_runtime__du_ptag_ordered_string_format_spec_0[4];

#line 144 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_name_ordered_string_format_spec_0[6];

#line 147 "string.parse_runtime.c"
static const MR_Integer mercury__string__parse_runtime__string__parse_runtime__functor_number_map_string_format_spec_0[6];

#line 150 "string.parse_runtime.c"
static MR_bool MR_CALL 
mercury__string__parse_runtime____Unify____string_format_spec_0_0_10001(
#line 153 "string.parse_runtime.c"
  MR_Box mercury__string__parse_runtime__wrapper_arg_1,
#line 155 "string.parse_runtime.c"
  MR_Box mercury__string__parse_runtime__wrapper_arg_2);

#line 158 "string.parse_runtime.c"
static void MR_CALL 
mercury__string__parse_runtime____Compare____string_format_spec_0_0_10001(
#line 161 "string.parse_runtime.c"
  MR_Box * mercury__string__parse_runtime__wrapper_arg_1,
#line 163 "string.parse_runtime.c"
  MR_Box mercury__string__parse_runtime__wrapper_arg_2,
#line 165 "string.parse_runtime.c"
  MR_Box mercury__string__parse_runtime__wrapper_arg_3);

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__parse_runtime__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 399 "string.parse_runtime.m"
static MR_Word MR_CALL 
mercury__string__parse_runtime__poly_type_to_kind_1_f_0(
#line 399 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__1_1);

#line 231 "string.parse_runtime.m"
static void MR_CALL 
mercury__string__parse_runtime__get_first_spec_10_p_0(
#line 231 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_1,
#line 231 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_Chars_2,
#line 231 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3,
#line 231 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_4,
#line 231 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__5_5,
#line 231 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__6_6,
#line 231 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__7_7,
#line 231 "string.parse_runtime.m"
  MR_Integer mercury__string__parse_runtime__SpecNum_8,
#line 231 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Spec_9,
#line 231 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Errors_10);

#line 182 "string.parse_runtime.m"
static void MR_CALL 
mercury__string__parse_runtime__get_optional_prec_7_p_0(
#line 182 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_16,
#line 182 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_Chars_17,
#line 182 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18,
#line 182 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_19,
#line 182 "string.parse_runtime.m"
  MR_Integer mercury__string__parse_runtime__SpecNum_10,
#line 182 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__MaybePrec_11,
#line 182 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Errors_12);

#line 135 "string.parse_runtime.m"
static void MR_CALL 
mercury__string__parse_runtime__parse_conversion_specification_7_p_0(
#line 135 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_20,
#line 135 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_Chars_21,
#line 135 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22,
#line 135 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_23,
#line 135 "string.parse_runtime.m"
  MR_Integer mercury__string__parse_runtime__SpecNum_10,
#line 135 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Spec_11,
#line 135 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Errors_12);


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
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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



#include "string.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "version_array.mh"
#include "type_desc.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "time.mh"
#include "array.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "math.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "store.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "char.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "version_array.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "string.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 426 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 431 "string.parse_runtime.c"
static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_0 = {
  (MR_String) "spec_constant_string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_0,
  NULL,
  NULL,
  NULL
};

#line 446 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_1[3] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 453 "string.parse_runtime.c"
static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_1 = {
  (MR_String) "spec_char",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_1,
  NULL,
  NULL,
  NULL
};

#line 468 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_2[4] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 476 "string.parse_runtime.c"
static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_2 = {
  (MR_String) "spec_string",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_2,
  NULL,
  NULL,
  NULL
};

#line 491 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_3[4] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 499 "string.parse_runtime.c"
static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_3 = {
  (MR_String) "spec_signed_int",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_3,
  NULL,
  NULL,
  NULL
};

#line 514 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_4[5] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_int_base_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 523 "string.parse_runtime.c"
static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_4 = {
  (MR_String) "spec_unsigned_int",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_4,
  NULL,
  NULL,
  NULL
};

#line 538 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_5[5] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_float_kind_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 547 "string.parse_runtime.c"
static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_5 = {
  (MR_String) "spec_float",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_5,
  NULL,
  NULL,
  NULL
};

#line 562 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_0[1] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_0
};

#line 567 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_1[1] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_1
};

#line 572 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_2[1] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_2
};

#line 577 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_3[3] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_3,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_4,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_5
};

#line 584 "string.parse_runtime.c"
static const MR_DuPtagLayout mercury__string__parse_runtime__string__parse_runtime__du_ptag_ordered_string_format_spec_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_2
  },
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_3
  }
};

#line 608 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_name_ordered_string_format_spec_0[6] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_1,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_0,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_5,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_3,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_2,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_4
};

#line 618 "string.parse_runtime.c"
static const MR_Integer mercury__string__parse_runtime__string__parse_runtime__functor_number_map_string_format_spec_0[6] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 2
};

#line 628 "string.parse_runtime.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_runtime__string__parse_runtime__type_ctor_info_string_format_spec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_runtime____Unify____string_format_spec_0_0_10001)),
  ((MR_Box) (mercury__string__parse_runtime____Compare____string_format_spec_0_0_10001)),
  (MR_String) "string.parse_runtime",
  (MR_String) "string_format_spec",
  {     mercury__string__parse_runtime__string__parse_runtime__du_name_ordered_string_format_spec_0 },
  {     mercury__string__parse_runtime__string__parse_runtime__du_ptag_ordered_string_format_spec_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mercury__string__parse_runtime__string__parse_runtime__functor_number_map_string_format_spec_0
};

#line 645 "string.parse_runtime.c"
static MR_bool MR_CALL 
mercury__string__parse_runtime____Unify____string_format_spec_0_0_10001(
#line 648 "string.parse_runtime.c"
  MR_Box mercury__string__parse_runtime__wrapper_arg_1,
#line 650 "string.parse_runtime.c"
  MR_Box mercury__string__parse_runtime__wrapper_arg_2)
#line 652 "string.parse_runtime.c"
{
#line 654 "string.parse_runtime.c"
  {
#line 656 "string.parse_runtime.c"
    MR_bool mercury__string__parse_runtime__succeeded;

#line 659 "string.parse_runtime.c"
    {
#line 661 "string.parse_runtime.c"
      mercury__string__parse_runtime__succeeded = mercury__string__parse_runtime____Unify____string_format_spec_0_0(((MR_Word) mercury__string__parse_runtime__wrapper_arg_1), ((MR_Word) mercury__string__parse_runtime__wrapper_arg_2));
    }
#line 664 "string.parse_runtime.c"
    return mercury__string__parse_runtime__succeeded;
#line 666 "string.parse_runtime.c"
  }
#line 668 "string.parse_runtime.c"
}

#line 671 "string.parse_runtime.c"
static void MR_CALL 
mercury__string__parse_runtime____Compare____string_format_spec_0_0_10001(
#line 674 "string.parse_runtime.c"
  MR_Box * mercury__string__parse_runtime__wrapper_arg_1,
#line 676 "string.parse_runtime.c"
  MR_Box mercury__string__parse_runtime__wrapper_arg_2,
#line 678 "string.parse_runtime.c"
  MR_Box mercury__string__parse_runtime__wrapper_arg_3)
#line 680 "string.parse_runtime.c"
{
#line 682 "string.parse_runtime.c"
  {
#line 684 "string.parse_runtime.c"
    MR_Word mercury__string__parse_runtime__conv0_HeadVar__1_1;

#line 687 "string.parse_runtime.c"
    {
#line 689 "string.parse_runtime.c"
      mercury__string__parse_runtime____Compare____string_format_spec_0_0(&mercury__string__parse_runtime__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_runtime__wrapper_arg_2), ((MR_Word) mercury__string__parse_runtime__wrapper_arg_3));
    }
#line 692 "string.parse_runtime.c"
    *mercury__string__parse_runtime__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_runtime__conv0_HeadVar__1_1));
#line 694 "string.parse_runtime.c"
  }
#line 696 "string.parse_runtime.c"
}

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__parse_runtime__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 16 "ops.opt"
{
#line 41 "ops.opt"
  {
#line 41 "ops.opt"
    MR_bool mercury__string__parse_runtime__succeeded;

#line 41 "ops.opt"
    return (MR_Integer) 1200;
#line 41 "ops.opt"
  }
#line 16 "ops.opt"
}

#line 26 "string.parse_runtime.m"
void MR_CALL 
mercury__string__parse_runtime____Compare____string_format_spec_0_0(
#line 26 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__HeadVar__1_1,
#line 26 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__2_2,
#line 26 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__3_3)
#line 26 "string.parse_runtime.m"
{
#line 26 "string.parse_runtime.m"
  {
#line 26 "string.parse_runtime.m"
    MR_bool mercury__string__parse_runtime__succeeded;
#line 26 "string.parse_runtime.m"
    MR_Integer mercury__string__parse_runtime__CastX_284 = (MR_Integer) mercury__string__parse_runtime__HeadVar__2_2;
#line 26 "string.parse_runtime.m"
    MR_Integer mercury__string__parse_runtime__CastY_285 = (MR_Integer) mercury__string__parse_runtime__HeadVar__3_3;

#line 26 "string.parse_runtime.m"
    mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__CastX_284 == mercury__string__parse_runtime__CastY_285);
#line 26 "string.parse_runtime.m"
    if (mercury__string__parse_runtime__succeeded)
#line 740 "string.parse_runtime.c"
      *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
#line 26 "string.parse_runtime.m"
    else
#line 26 "string.parse_runtime.m"
#line 26 "string.parse_runtime.m"
      switch (MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__2_2)) {
#line 26 "string.parse_runtime.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 26 "string.parse_runtime.m"
        case (MR_Integer) 0:
#line 26 "string.parse_runtime.m"
          {
#line 26 "string.parse_runtime.m"
            MR_String mercury__string__parse_runtime__V_311_311 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)));

#line 26 "string.parse_runtime.m"
#line 26 "string.parse_runtime.m"
            switch (MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) {
#line 26 "string.parse_runtime.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 26 "string.parse_runtime.m"
              case (MR_Integer) 0:
#line 26 "string.parse_runtime.m"
                {
#line 26 "string.parse_runtime.m"
                  MR_String mercury__string__parse_runtime__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)));
#line 26 "string.parse_runtime.m"
                  MR_Integer mercury__string__parse_runtime__V_7_342;

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__parse_runtime__V_311_311 ;
	S2 =  mercury__string__parse_runtime__V_5_5 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 785 "string.parse_runtime.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_runtime__V_7_342  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_7_342 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
                  if (mercury__string__parse_runtime__succeeded)
#line 72 "private_builtin.opt"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
                  else
#line 78 "private_builtin.opt"
                    {
#line 75 "private_builtin.opt"
                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_7_342 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                      if (mercury__string__parse_runtime__succeeded)
#line 77 "private_builtin.opt"
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                      else
#line 79 "private_builtin.opt"
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
                    }
#line 26 "string.parse_runtime.m"
                }
#line 26 "string.parse_runtime.m"
                break;
#line 26 "string.parse_runtime.m"
              case (MR_Integer) 1:
#line 820 "string.parse_runtime.c"
                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                break;
#line 26 "string.parse_runtime.m"
              case (MR_Integer) 2:
#line 826 "string.parse_runtime.c"
                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                break;
#line 26 "string.parse_runtime.m"
              case (MR_Integer) 3:
#line 26 "string.parse_runtime.m"
#line 26 "string.parse_runtime.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) {
#line 26 "string.parse_runtime.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 0:
#line 839 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 1:
#line 845 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 2:
#line 851 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                }
#line 26 "string.parse_runtime.m"
                break;
#line 26 "string.parse_runtime.m"
            }
#line 26 "string.parse_runtime.m"
          }
#line 26 "string.parse_runtime.m"
          break;
#line 26 "string.parse_runtime.m"
        case (MR_Integer) 1:
#line 26 "string.parse_runtime.m"
          {
#line 26 "string.parse_runtime.m"
            MR_Char mercury__string__parse_runtime__V_308_308 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));
#line 26 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)));

#line 26 "string.parse_runtime.m"
#line 26 "string.parse_runtime.m"
            switch (MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) {
#line 26 "string.parse_runtime.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 26 "string.parse_runtime.m"
              case (MR_Integer) 0:
#line 883 "string.parse_runtime.c"
                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                break;
#line 26 "string.parse_runtime.m"
              case (MR_Integer) 1:
#line 26 "string.parse_runtime.m"
                {
#line 26 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)));
#line 26 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 1)));
#line 26 "string.parse_runtime.m"
                  MR_Char mercury__string__parse_runtime__V_41_41 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_42_42;

#line 26 "string.parse_runtime.m"
                  {
#line 26 "string.parse_runtime.m"
                    mercury__string__parse_util____Compare____string_format_flags_0_0(&mercury__string__parse_runtime__V_42_42, mercury__string__parse_runtime__V_310_310, mercury__string__parse_runtime__V_39_39);
                  }
#line 905 "string.parse_runtime.c"
                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_42_42 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                    *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_42_42;
#line 26 "string.parse_runtime.m"
                  else
#line 26 "string.parse_runtime.m"
                    {
#line 26 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_43_43;

#line 26 "string.parse_runtime.m"
                      {
#line 26 "string.parse_runtime.m"
                        mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&mercury__string__parse_runtime__V_43_43, mercury__string__parse_runtime__V_309_309, mercury__string__parse_runtime__V_40_40);
                      }
#line 925 "string.parse_runtime.c"
                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_43_43 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                      mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                      if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                        *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_43_43;
#line 26 "string.parse_runtime.m"
                      else
#line 26 "string.parse_runtime.m"
                        {
#line 26 "string.parse_runtime.m"
                          MR_Integer mercury__string__parse_runtime__V_7_337;
#line 26 "string.parse_runtime.m"
                          MR_Integer mercury__string__parse_runtime__V_8_338;

#line 34 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_runtime__V_308_308 ;
		{
#line 34 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 955 "string.parse_runtime.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_runtime__V_7_337  = Int;
#line 34 "char.opt"
}
#line 34 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_runtime__V_41_41 ;
		{
#line 34 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 975 "string.parse_runtime.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_runtime__V_8_338  = Int;
#line 34 "char.opt"
}
#line 52 "private_builtin.opt"
                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_7_337 < mercury__string__parse_runtime__V_8_338);
#line 55 "private_builtin.opt"
                          if (mercury__string__parse_runtime__succeeded)
#line 54 "private_builtin.opt"
                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 55 "private_builtin.opt"
                          else
#line 60 "private_builtin.opt"
                            {
#line 57 "private_builtin.opt"
                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_7_337 == mercury__string__parse_runtime__V_8_338);
#line 60 "private_builtin.opt"
                              if (mercury__string__parse_runtime__succeeded)
#line 59 "private_builtin.opt"
                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
#line 60 "private_builtin.opt"
                              else
#line 61 "private_builtin.opt"
                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 60 "private_builtin.opt"
                            }
#line 26 "string.parse_runtime.m"
                        }
#line 26 "string.parse_runtime.m"
                    }
#line 26 "string.parse_runtime.m"
                }
#line 26 "string.parse_runtime.m"
                break;
#line 26 "string.parse_runtime.m"
              case (MR_Integer) 2:
#line 1014 "string.parse_runtime.c"
                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                break;
#line 26 "string.parse_runtime.m"
              case (MR_Integer) 3:
#line 26 "string.parse_runtime.m"
#line 26 "string.parse_runtime.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) {
#line 26 "string.parse_runtime.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 0:
#line 1027 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 1:
#line 1033 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 2:
#line 1039 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                }
#line 26 "string.parse_runtime.m"
                break;
#line 26 "string.parse_runtime.m"
            }
#line 26 "string.parse_runtime.m"
          }
#line 26 "string.parse_runtime.m"
          break;
#line 26 "string.parse_runtime.m"
        case (MR_Integer) 2:
#line 26 "string.parse_runtime.m"
          {
#line 26 "string.parse_runtime.m"
            MR_String mercury__string__parse_runtime__V_321_321 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 3)));
#line 26 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));
#line 26 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)));

#line 26 "string.parse_runtime.m"
#line 26 "string.parse_runtime.m"
            switch (MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) {
#line 26 "string.parse_runtime.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 26 "string.parse_runtime.m"
              case (MR_Integer) 0:
#line 1073 "string.parse_runtime.c"
                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                break;
#line 26 "string.parse_runtime.m"
              case (MR_Integer) 1:
#line 1079 "string.parse_runtime.c"
                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                break;
#line 26 "string.parse_runtime.m"
              case (MR_Integer) 2:
#line 26 "string.parse_runtime.m"
                {
#line 26 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)));
#line 26 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 1)));
#line 26 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
                  MR_String mercury__string__parse_runtime__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 3)));
#line 26 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_94_94;

#line 26 "string.parse_runtime.m"
                  {
#line 26 "string.parse_runtime.m"
                    mercury__string__parse_util____Compare____string_format_flags_0_0(&mercury__string__parse_runtime__V_94_94, mercury__string__parse_runtime__V_324_324, mercury__string__parse_runtime__V_90_90);
                  }
#line 1103 "string.parse_runtime.c"
                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_94_94 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                    *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_94_94;
#line 26 "string.parse_runtime.m"
                  else
#line 26 "string.parse_runtime.m"
                    {
#line 26 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_95_95;

#line 26 "string.parse_runtime.m"
                      {
#line 26 "string.parse_runtime.m"
                        mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&mercury__string__parse_runtime__V_95_95, mercury__string__parse_runtime__V_323_323, mercury__string__parse_runtime__V_91_91);
                      }
#line 1123 "string.parse_runtime.c"
                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_95_95 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                      mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                      if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                        *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_95_95;
#line 26 "string.parse_runtime.m"
                      else
#line 26 "string.parse_runtime.m"
                        {
#line 26 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__V_96_96;

#line 26 "string.parse_runtime.m"
                          {
#line 26 "string.parse_runtime.m"
                            mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&mercury__string__parse_runtime__V_96_96, mercury__string__parse_runtime__V_322_322, mercury__string__parse_runtime__V_92_92);
                          }
#line 1143 "string.parse_runtime.c"
                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_96_96 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                          mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                          if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                            *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_96_96;
#line 26 "string.parse_runtime.m"
                          else
#line 26 "string.parse_runtime.m"
                            {
#line 26 "string.parse_runtime.m"
                              MR_Integer mercury__string__parse_runtime__V_7_356;

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__parse_runtime__V_321_321 ;
	S2 =  mercury__string__parse_runtime__V_93_93 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 1173 "string.parse_runtime.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_runtime__V_7_356  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_7_356 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
                              if (mercury__string__parse_runtime__succeeded)
#line 72 "private_builtin.opt"
                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
                              else
#line 78 "private_builtin.opt"
                                {
#line 75 "private_builtin.opt"
                                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_7_356 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                                  if (mercury__string__parse_runtime__succeeded)
#line 77 "private_builtin.opt"
                                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                                  else
#line 79 "private_builtin.opt"
                                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
                                }
#line 26 "string.parse_runtime.m"
                            }
#line 26 "string.parse_runtime.m"
                        }
#line 26 "string.parse_runtime.m"
                    }
#line 26 "string.parse_runtime.m"
                }
#line 26 "string.parse_runtime.m"
                break;
#line 26 "string.parse_runtime.m"
              case (MR_Integer) 3:
#line 26 "string.parse_runtime.m"
#line 26 "string.parse_runtime.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) {
#line 26 "string.parse_runtime.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 0:
#line 1221 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 1:
#line 1227 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 2:
#line 1233 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                }
#line 26 "string.parse_runtime.m"
                break;
#line 26 "string.parse_runtime.m"
            }
#line 26 "string.parse_runtime.m"
          }
#line 26 "string.parse_runtime.m"
          break;
#line 26 "string.parse_runtime.m"
        case (MR_Integer) 3:
#line 26 "string.parse_runtime.m"
#line 26 "string.parse_runtime.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)))) {
#line 26 "string.parse_runtime.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 26 "string.parse_runtime.m"
            case (MR_Integer) 0:
#line 26 "string.parse_runtime.m"
              {
#line 26 "string.parse_runtime.m"
                MR_Integer mercury__string__parse_runtime__V_317_317 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 4)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 3)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));

#line 26 "string.parse_runtime.m"
#line 26 "string.parse_runtime.m"
                switch (MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) {
#line 26 "string.parse_runtime.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 0:
#line 1274 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 1:
#line 1280 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 2:
#line 1286 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 3:
#line 26 "string.parse_runtime.m"
#line 26 "string.parse_runtime.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) {
#line 26 "string.parse_runtime.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 26 "string.parse_runtime.m"
                      case (MR_Integer) 0:
#line 26 "string.parse_runtime.m"
                        {
#line 26 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 1)));
#line 26 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 3)));
#line 26 "string.parse_runtime.m"
                          MR_Integer mercury__string__parse_runtime__V_150_150 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 4)));
#line 26 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__V_151_151;

#line 26 "string.parse_runtime.m"
                          {
#line 26 "string.parse_runtime.m"
                            mercury__string__parse_util____Compare____string_format_flags_0_0(&mercury__string__parse_runtime__V_151_151, mercury__string__parse_runtime__V_320_320, mercury__string__parse_runtime__V_147_147);
                          }
#line 1317 "string.parse_runtime.c"
                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_151_151 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                          mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                          if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                            *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_151_151;
#line 26 "string.parse_runtime.m"
                          else
#line 26 "string.parse_runtime.m"
                            {
#line 26 "string.parse_runtime.m"
                              MR_Word mercury__string__parse_runtime__V_152_152;

#line 26 "string.parse_runtime.m"
                              {
#line 26 "string.parse_runtime.m"
                                mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&mercury__string__parse_runtime__V_152_152, mercury__string__parse_runtime__V_319_319, mercury__string__parse_runtime__V_148_148);
                              }
#line 1337 "string.parse_runtime.c"
                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_152_152 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                              mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                              if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                                *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_152_152;
#line 26 "string.parse_runtime.m"
                              else
#line 26 "string.parse_runtime.m"
                                {
#line 26 "string.parse_runtime.m"
                                  MR_Word mercury__string__parse_runtime__V_153_153;

#line 26 "string.parse_runtime.m"
                                  {
#line 26 "string.parse_runtime.m"
                                    mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&mercury__string__parse_runtime__V_153_153, mercury__string__parse_runtime__V_318_318, mercury__string__parse_runtime__V_149_149);
                                  }
#line 1357 "string.parse_runtime.c"
                                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_153_153 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                                  if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                                    *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_153_153;
#line 26 "string.parse_runtime.m"
                                  else
#line 37 "private_builtin.opt"
                                    {
#line 34 "private_builtin.opt"
                                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_317_317 < mercury__string__parse_runtime__V_150_150);
#line 37 "private_builtin.opt"
                                      if (mercury__string__parse_runtime__succeeded)
#line 36 "private_builtin.opt"
                                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
                                      else
#line 42 "private_builtin.opt"
                                        {
#line 39 "private_builtin.opt"
                                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_317_317 == mercury__string__parse_runtime__V_150_150);
#line 42 "private_builtin.opt"
                                          if (mercury__string__parse_runtime__succeeded)
#line 41 "private_builtin.opt"
                                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
                                          else
#line 43 "private_builtin.opt"
                                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
                                        }
#line 37 "private_builtin.opt"
                                    }
#line 26 "string.parse_runtime.m"
                                }
#line 26 "string.parse_runtime.m"
                            }
#line 26 "string.parse_runtime.m"
                        }
#line 26 "string.parse_runtime.m"
                        break;
#line 26 "string.parse_runtime.m"
                      case (MR_Integer) 1:
#line 1403 "string.parse_runtime.c"
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                        break;
#line 26 "string.parse_runtime.m"
                      case (MR_Integer) 2:
#line 1409 "string.parse_runtime.c"
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                        break;
#line 26 "string.parse_runtime.m"
                    }
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                }
#line 26 "string.parse_runtime.m"
              }
#line 26 "string.parse_runtime.m"
              break;
#line 26 "string.parse_runtime.m"
            case (MR_Integer) 1:
#line 26 "string.parse_runtime.m"
              {
#line 26 "string.parse_runtime.m"
                MR_Integer mercury__string__parse_runtime__V_325_325 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 5)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 4)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 3)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));

#line 26 "string.parse_runtime.m"
#line 26 "string.parse_runtime.m"
                switch (MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) {
#line 26 "string.parse_runtime.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 0:
#line 1445 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 1:
#line 1451 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 2:
#line 1457 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 3:
#line 26 "string.parse_runtime.m"
#line 26 "string.parse_runtime.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) {
#line 26 "string.parse_runtime.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 26 "string.parse_runtime.m"
                      case (MR_Integer) 0:
#line 1470 "string.parse_runtime.c"
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                        break;
#line 26 "string.parse_runtime.m"
                      case (MR_Integer) 1:
#line 26 "string.parse_runtime.m"
                        {
#line 26 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 1)));
#line 26 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 3)));
#line 26 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 4)));
#line 26 "string.parse_runtime.m"
                          MR_Integer mercury__string__parse_runtime__V_213_213 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 5)));
#line 26 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__V_214_214;

#line 26 "string.parse_runtime.m"
                          {
#line 26 "string.parse_runtime.m"
                            mercury__string__parse_util____Compare____string_format_flags_0_0(&mercury__string__parse_runtime__V_214_214, mercury__string__parse_runtime__V_329_329, mercury__string__parse_runtime__V_209_209);
                          }
#line 1496 "string.parse_runtime.c"
                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_214_214 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                          mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                          if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                            *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_214_214;
#line 26 "string.parse_runtime.m"
                          else
#line 26 "string.parse_runtime.m"
                            {
#line 26 "string.parse_runtime.m"
                              MR_Word mercury__string__parse_runtime__V_215_215;

#line 26 "string.parse_runtime.m"
                              {
#line 26 "string.parse_runtime.m"
                                mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&mercury__string__parse_runtime__V_215_215, mercury__string__parse_runtime__V_328_328, mercury__string__parse_runtime__V_210_210);
                              }
#line 1516 "string.parse_runtime.c"
                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_215_215 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                              mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                              if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                                *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_215_215;
#line 26 "string.parse_runtime.m"
                              else
#line 26 "string.parse_runtime.m"
                                {
#line 26 "string.parse_runtime.m"
                                  MR_Word mercury__string__parse_runtime__V_216_216;

#line 26 "string.parse_runtime.m"
                                  {
#line 26 "string.parse_runtime.m"
                                    mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&mercury__string__parse_runtime__V_216_216, mercury__string__parse_runtime__V_327_327, mercury__string__parse_runtime__V_211_211);
                                  }
#line 1536 "string.parse_runtime.c"
                                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_216_216 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                                  if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                                    *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_216_216;
#line 26 "string.parse_runtime.m"
                                  else
#line 26 "string.parse_runtime.m"
                                    {
#line 26 "string.parse_runtime.m"
                                      MR_Word mercury__string__parse_runtime__V_217_217;
#line 26 "string.parse_runtime.m"
                                      MR_Integer mercury__string__parse_runtime__V_332_332 = (MR_Integer) mercury__string__parse_runtime__V_326_326;
#line 26 "string.parse_runtime.m"
                                      MR_Integer mercury__string__parse_runtime__V_333_333 = (MR_Integer) mercury__string__parse_runtime__V_212_212;

#line 34 "private_builtin.opt"
                                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_332_332 < mercury__string__parse_runtime__V_333_333);
#line 37 "private_builtin.opt"
                                      if (mercury__string__parse_runtime__succeeded)
#line 36 "private_builtin.opt"
                                        mercury__string__parse_runtime__V_217_217 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
                                      else
#line 42 "private_builtin.opt"
                                        {
#line 39 "private_builtin.opt"
                                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_332_332 == mercury__string__parse_runtime__V_333_333);
#line 42 "private_builtin.opt"
                                          if (mercury__string__parse_runtime__succeeded)
#line 41 "private_builtin.opt"
                                            mercury__string__parse_runtime__V_217_217 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
                                          else
#line 43 "private_builtin.opt"
                                            mercury__string__parse_runtime__V_217_217 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
                                        }
#line 1577 "string.parse_runtime.c"
                                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_217_217 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                                      if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                                        *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_217_217;
#line 26 "string.parse_runtime.m"
                                      else
#line 37 "private_builtin.opt"
                                        {
#line 34 "private_builtin.opt"
                                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_325_325 < mercury__string__parse_runtime__V_213_213);
#line 37 "private_builtin.opt"
                                          if (mercury__string__parse_runtime__succeeded)
#line 36 "private_builtin.opt"
                                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
                                          else
#line 42 "private_builtin.opt"
                                            {
#line 39 "private_builtin.opt"
                                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_325_325 == mercury__string__parse_runtime__V_213_213);
#line 42 "private_builtin.opt"
                                              if (mercury__string__parse_runtime__succeeded)
#line 41 "private_builtin.opt"
                                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
                                              else
#line 43 "private_builtin.opt"
                                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
                                            }
#line 37 "private_builtin.opt"
                                        }
#line 26 "string.parse_runtime.m"
                                    }
#line 26 "string.parse_runtime.m"
                                }
#line 26 "string.parse_runtime.m"
                            }
#line 26 "string.parse_runtime.m"
                        }
#line 26 "string.parse_runtime.m"
                        break;
#line 26 "string.parse_runtime.m"
                      case (MR_Integer) 2:
#line 1625 "string.parse_runtime.c"
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                        break;
#line 26 "string.parse_runtime.m"
                    }
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                }
#line 26 "string.parse_runtime.m"
              }
#line 26 "string.parse_runtime.m"
              break;
#line 26 "string.parse_runtime.m"
            case (MR_Integer) 2:
#line 26 "string.parse_runtime.m"
              {
#line 26 "string.parse_runtime.m"
                MR_Float mercury__string__parse_runtime__V_312_312 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 5)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 4)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 3)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));

#line 26 "string.parse_runtime.m"
#line 26 "string.parse_runtime.m"
                switch (MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) {
#line 26 "string.parse_runtime.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 0:
#line 1661 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 1:
#line 1667 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 2:
#line 1673 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 3:
#line 26 "string.parse_runtime.m"
#line 26 "string.parse_runtime.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) {
#line 26 "string.parse_runtime.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 26 "string.parse_runtime.m"
                      case (MR_Integer) 0:
#line 1686 "string.parse_runtime.c"
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                        break;
#line 26 "string.parse_runtime.m"
                      case (MR_Integer) 1:
#line 1692 "string.parse_runtime.c"
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                        break;
#line 26 "string.parse_runtime.m"
                      case (MR_Integer) 2:
#line 26 "string.parse_runtime.m"
                        {
#line 26 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 1)));
#line 26 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 3)));
#line 26 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 4)));
#line 26 "string.parse_runtime.m"
                          MR_Float mercury__string__parse_runtime__V_279_279 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 5)));
#line 26 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__V_280_280;

#line 26 "string.parse_runtime.m"
                          {
#line 26 "string.parse_runtime.m"
                            mercury__string__parse_util____Compare____string_format_flags_0_0(&mercury__string__parse_runtime__V_280_280, mercury__string__parse_runtime__V_316_316, mercury__string__parse_runtime__V_275_275);
                          }
#line 1718 "string.parse_runtime.c"
                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_280_280 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                          mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                          if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                            *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_280_280;
#line 26 "string.parse_runtime.m"
                          else
#line 26 "string.parse_runtime.m"
                            {
#line 26 "string.parse_runtime.m"
                              MR_Word mercury__string__parse_runtime__V_281_281;

#line 26 "string.parse_runtime.m"
                              {
#line 26 "string.parse_runtime.m"
                                mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&mercury__string__parse_runtime__V_281_281, mercury__string__parse_runtime__V_315_315, mercury__string__parse_runtime__V_276_276);
                              }
#line 1738 "string.parse_runtime.c"
                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_281_281 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                              mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                              if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                                *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_281_281;
#line 26 "string.parse_runtime.m"
                              else
#line 26 "string.parse_runtime.m"
                                {
#line 26 "string.parse_runtime.m"
                                  MR_Word mercury__string__parse_runtime__V_282_282;

#line 26 "string.parse_runtime.m"
                                  {
#line 26 "string.parse_runtime.m"
                                    mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&mercury__string__parse_runtime__V_282_282, mercury__string__parse_runtime__V_314_314, mercury__string__parse_runtime__V_277_277);
                                  }
#line 1758 "string.parse_runtime.c"
                                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_282_282 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                                  if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                                    *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_282_282;
#line 26 "string.parse_runtime.m"
                                  else
#line 26 "string.parse_runtime.m"
                                    {
#line 26 "string.parse_runtime.m"
                                      MR_Word mercury__string__parse_runtime__V_283_283;
#line 26 "string.parse_runtime.m"
                                      MR_Integer mercury__string__parse_runtime__V_330_330 = (MR_Integer) mercury__string__parse_runtime__V_313_313;
#line 26 "string.parse_runtime.m"
                                      MR_Integer mercury__string__parse_runtime__V_331_331 = (MR_Integer) mercury__string__parse_runtime__V_278_278;

#line 34 "private_builtin.opt"
                                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_330_330 < mercury__string__parse_runtime__V_331_331);
#line 37 "private_builtin.opt"
                                      if (mercury__string__parse_runtime__succeeded)
#line 36 "private_builtin.opt"
                                        mercury__string__parse_runtime__V_283_283 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
                                      else
#line 42 "private_builtin.opt"
                                        {
#line 39 "private_builtin.opt"
                                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_330_330 == mercury__string__parse_runtime__V_331_331);
#line 42 "private_builtin.opt"
                                          if (mercury__string__parse_runtime__succeeded)
#line 41 "private_builtin.opt"
                                            mercury__string__parse_runtime__V_283_283 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
                                          else
#line 43 "private_builtin.opt"
                                            mercury__string__parse_runtime__V_283_283 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
                                        }
#line 1799 "string.parse_runtime.c"
                                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_283_283 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                                      if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                                        *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_283_283;
#line 26 "string.parse_runtime.m"
                                      else
#line 89 "private_builtin.opt"
                                        {
#line 86 "private_builtin.opt"
                                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_312_312 < mercury__string__parse_runtime__V_279_279);
#line 89 "private_builtin.opt"
                                          if (mercury__string__parse_runtime__succeeded)
#line 88 "private_builtin.opt"
                                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 89 "private_builtin.opt"
                                          else
#line 94 "private_builtin.opt"
                                            {
#line 91 "private_builtin.opt"
                                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_312_312 > mercury__string__parse_runtime__V_279_279);
#line 94 "private_builtin.opt"
                                              if (mercury__string__parse_runtime__succeeded)
#line 93 "private_builtin.opt"
                                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 94 "private_builtin.opt"
                                              else
#line 95 "private_builtin.opt"
                                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
#line 94 "private_builtin.opt"
                                            }
#line 89 "private_builtin.opt"
                                        }
#line 26 "string.parse_runtime.m"
                                    }
#line 26 "string.parse_runtime.m"
                                }
#line 26 "string.parse_runtime.m"
                            }
#line 26 "string.parse_runtime.m"
                        }
#line 26 "string.parse_runtime.m"
                        break;
#line 26 "string.parse_runtime.m"
                    }
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                }
#line 26 "string.parse_runtime.m"
              }
#line 26 "string.parse_runtime.m"
              break;
#line 26 "string.parse_runtime.m"
          }
#line 26 "string.parse_runtime.m"
          break;
#line 26 "string.parse_runtime.m"
      }
#line 26 "string.parse_runtime.m"
  }
#line 26 "string.parse_runtime.m"
}

#line 26 "string.parse_runtime.m"
MR_bool MR_CALL 
mercury__string__parse_runtime____Unify____string_format_spec_0_0(
#line 26 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__1_1,
#line 26 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__2_2)
#line 26 "string.parse_runtime.m"
{
#line 26 "string.parse_runtime.m"
  {
#line 26 "string.parse_runtime.m"
    MR_bool mercury__string__parse_runtime__succeeded;
#line 26 "string.parse_runtime.m"
    MR_Integer mercury__string__parse_runtime__CastX_47 = (MR_Integer) mercury__string__parse_runtime__HeadVar__1_1;
#line 26 "string.parse_runtime.m"
    MR_Integer mercury__string__parse_runtime__CastY_48 = (MR_Integer) mercury__string__parse_runtime__HeadVar__2_2;

#line 26 "string.parse_runtime.m"
    mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__CastX_47 == mercury__string__parse_runtime__CastY_48);
#line 26 "string.parse_runtime.m"
    if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
      mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 26 "string.parse_runtime.m"
    else
#line 26 "string.parse_runtime.m"
#line 26 "string.parse_runtime.m"
      switch (MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__1_1)) {
#line 26 "string.parse_runtime.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 26 "string.parse_runtime.m"
        case (MR_Integer) 0:
#line 26 "string.parse_runtime.m"
          {
#line 26 "string.parse_runtime.m"
            MR_String mercury__string__parse_runtime__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 0)));
#line 26 "string.parse_runtime.m"
            MR_String mercury__string__parse_runtime__V_4_4;

#line 26 "string.parse_runtime.m"
            mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 26 "string.parse_runtime.m"
            if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
              {
#line 26 "string.parse_runtime.m"
                mercury__string__parse_runtime__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)));
#line 1914 "string.parse_runtime.c"
                mercury__string__parse_runtime__succeeded = (strcmp(mercury__string__parse_runtime__V_3_3, mercury__string__parse_runtime__V_4_4) == 0);
#line 26 "string.parse_runtime.m"
              }
#line 26 "string.parse_runtime.m"
          }
#line 26 "string.parse_runtime.m"
          break;
#line 26 "string.parse_runtime.m"
        case (MR_Integer) 1:
#line 26 "string.parse_runtime.m"
          {
#line 26 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 0)));
#line 26 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 1)));
#line 26 "string.parse_runtime.m"
            MR_Char mercury__string__parse_runtime__V_7_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_8_8;
#line 26 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_9_9;
#line 26 "string.parse_runtime.m"
            MR_Char mercury__string__parse_runtime__V_10_10;

#line 26 "string.parse_runtime.m"
            mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 26 "string.parse_runtime.m"
            if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
              {
#line 26 "string.parse_runtime.m"
                mercury__string__parse_runtime__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)));
#line 26 "string.parse_runtime.m"
                mercury__string__parse_runtime__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));
#line 26 "string.parse_runtime.m"
                mercury__string__parse_runtime__V_10_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
#line 1951 "string.parse_runtime.c"
                {
#line 1953 "string.parse_runtime.c"
                  mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(mercury__string__parse_runtime__V_5_5, mercury__string__parse_runtime__V_8_8);
                }
#line 26 "string.parse_runtime.m"
                if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                  {
#line 1960 "string.parse_runtime.c"
                    {
#line 1962 "string.parse_runtime.c"
                      mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(mercury__string__parse_runtime__V_6_6, mercury__string__parse_runtime__V_9_9);
                    }
#line 26 "string.parse_runtime.m"
                    if (mercury__string__parse_runtime__succeeded)
#line 1967 "string.parse_runtime.c"
                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_7_7 == mercury__string__parse_runtime__V_10_10);
#line 26 "string.parse_runtime.m"
                  }
#line 26 "string.parse_runtime.m"
              }
#line 26 "string.parse_runtime.m"
          }
#line 26 "string.parse_runtime.m"
          break;
#line 26 "string.parse_runtime.m"
        case (MR_Integer) 2:
#line 26 "string.parse_runtime.m"
          {
#line 26 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 0)));
#line 26 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 1)));
#line 26 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
            MR_String mercury__string__parse_runtime__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 3)));
#line 26 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_15_15;
#line 26 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_16_16;
#line 26 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_17_17;
#line 26 "string.parse_runtime.m"
            MR_String mercury__string__parse_runtime__V_18_18;

#line 26 "string.parse_runtime.m"
            mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
            if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
              {
#line 26 "string.parse_runtime.m"
                mercury__string__parse_runtime__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)));
#line 26 "string.parse_runtime.m"
                mercury__string__parse_runtime__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));
#line 26 "string.parse_runtime.m"
                mercury__string__parse_runtime__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
                mercury__string__parse_runtime__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 3)));
#line 2012 "string.parse_runtime.c"
                {
#line 2014 "string.parse_runtime.c"
                  mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(mercury__string__parse_runtime__V_11_11, mercury__string__parse_runtime__V_15_15);
                }
#line 26 "string.parse_runtime.m"
                if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                  {
#line 2021 "string.parse_runtime.c"
                    {
#line 2023 "string.parse_runtime.c"
                      mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(mercury__string__parse_runtime__V_12_12, mercury__string__parse_runtime__V_16_16);
                    }
#line 26 "string.parse_runtime.m"
                    if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                      {
#line 2030 "string.parse_runtime.c"
                        {
#line 2032 "string.parse_runtime.c"
                          mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(mercury__string__parse_runtime__V_13_13, mercury__string__parse_runtime__V_17_17);
                        }
#line 26 "string.parse_runtime.m"
                        if (mercury__string__parse_runtime__succeeded)
#line 2037 "string.parse_runtime.c"
                          mercury__string__parse_runtime__succeeded = (strcmp(mercury__string__parse_runtime__V_14_14, mercury__string__parse_runtime__V_18_18) == 0);
#line 26 "string.parse_runtime.m"
                      }
#line 26 "string.parse_runtime.m"
                  }
#line 26 "string.parse_runtime.m"
              }
#line 26 "string.parse_runtime.m"
          }
#line 26 "string.parse_runtime.m"
          break;
#line 26 "string.parse_runtime.m"
        case (MR_Integer) 3:
#line 26 "string.parse_runtime.m"
#line 26 "string.parse_runtime.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 0)))) {
#line 26 "string.parse_runtime.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 26 "string.parse_runtime.m"
            case (MR_Integer) 0:
#line 26 "string.parse_runtime.m"
              {
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 1)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 3)));
#line 26 "string.parse_runtime.m"
                MR_Integer mercury__string__parse_runtime__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 4)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_23_23;
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_24_24;
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_25_25;
#line 26 "string.parse_runtime.m"
                MR_Integer mercury__string__parse_runtime__V_26_26;

#line 26 "string.parse_runtime.m"
                mercury__string__parse_runtime__succeeded = ((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 26 "string.parse_runtime.m"
                if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                  {
#line 26 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));
#line 26 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 3)));
#line 26 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 4)));
#line 2091 "string.parse_runtime.c"
                    {
#line 2093 "string.parse_runtime.c"
                      mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(mercury__string__parse_runtime__V_19_19, mercury__string__parse_runtime__V_23_23);
                    }
#line 26 "string.parse_runtime.m"
                    if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                      {
#line 2100 "string.parse_runtime.c"
                        {
#line 2102 "string.parse_runtime.c"
                          mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(mercury__string__parse_runtime__V_20_20, mercury__string__parse_runtime__V_24_24);
                        }
#line 26 "string.parse_runtime.m"
                        if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                          {
#line 2109 "string.parse_runtime.c"
                            {
#line 2111 "string.parse_runtime.c"
                              mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(mercury__string__parse_runtime__V_21_21, mercury__string__parse_runtime__V_25_25);
                            }
#line 26 "string.parse_runtime.m"
                            if (mercury__string__parse_runtime__succeeded)
#line 2116 "string.parse_runtime.c"
                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_22_22 == mercury__string__parse_runtime__V_26_26);
#line 26 "string.parse_runtime.m"
                          }
#line 26 "string.parse_runtime.m"
                      }
#line 26 "string.parse_runtime.m"
                  }
#line 26 "string.parse_runtime.m"
              }
#line 26 "string.parse_runtime.m"
              break;
#line 26 "string.parse_runtime.m"
            case (MR_Integer) 1:
#line 26 "string.parse_runtime.m"
              {
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 1)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 3)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 4)));
#line 26 "string.parse_runtime.m"
                MR_Integer mercury__string__parse_runtime__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 5)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_32_32;
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_33_33;
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_34_34;
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_35_35;
#line 26 "string.parse_runtime.m"
                MR_Integer mercury__string__parse_runtime__V_36_36;

#line 26 "string.parse_runtime.m"
                mercury__string__parse_runtime__succeeded = ((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 26 "string.parse_runtime.m"
                if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                  {
#line 26 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));
#line 26 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 3)));
#line 26 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 4)));
#line 26 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 5)));
#line 2169 "string.parse_runtime.c"
                    {
#line 2171 "string.parse_runtime.c"
                      mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(mercury__string__parse_runtime__V_27_27, mercury__string__parse_runtime__V_32_32);
                    }
#line 26 "string.parse_runtime.m"
                    if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                      {
#line 2178 "string.parse_runtime.c"
                        {
#line 2180 "string.parse_runtime.c"
                          mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(mercury__string__parse_runtime__V_28_28, mercury__string__parse_runtime__V_33_33);
                        }
#line 26 "string.parse_runtime.m"
                        if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                          {
#line 2187 "string.parse_runtime.c"
                            {
#line 2189 "string.parse_runtime.c"
                              mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(mercury__string__parse_runtime__V_29_29, mercury__string__parse_runtime__V_34_34);
                            }
#line 26 "string.parse_runtime.m"
                            if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                              {
#line 2196 "string.parse_runtime.c"
                                mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_30_30 == mercury__string__parse_runtime__V_35_35);
#line 26 "string.parse_runtime.m"
                                if (mercury__string__parse_runtime__succeeded)
#line 2200 "string.parse_runtime.c"
                                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_31_31 == mercury__string__parse_runtime__V_36_36);
#line 26 "string.parse_runtime.m"
                              }
#line 26 "string.parse_runtime.m"
                          }
#line 26 "string.parse_runtime.m"
                      }
#line 26 "string.parse_runtime.m"
                  }
#line 26 "string.parse_runtime.m"
              }
#line 26 "string.parse_runtime.m"
              break;
#line 26 "string.parse_runtime.m"
            case (MR_Integer) 2:
#line 26 "string.parse_runtime.m"
              {
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 1)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 3)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 4)));
#line 26 "string.parse_runtime.m"
                MR_Float mercury__string__parse_runtime__V_41_41 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 5)));
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_42_42;
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_43_43;
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_44_44;
#line 26 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_45_45;
#line 26 "string.parse_runtime.m"
                MR_Float mercury__string__parse_runtime__V_46_46;

#line 26 "string.parse_runtime.m"
                mercury__string__parse_runtime__succeeded = ((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
                if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                  {
#line 26 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));
#line 26 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 3)));
#line 26 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 4)));
#line 26 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_46_46 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 5)));
#line 2255 "string.parse_runtime.c"
                    {
#line 2257 "string.parse_runtime.c"
                      mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(mercury__string__parse_runtime__V_37_37, mercury__string__parse_runtime__V_42_42);
                    }
#line 26 "string.parse_runtime.m"
                    if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                      {
#line 2264 "string.parse_runtime.c"
                        {
#line 2266 "string.parse_runtime.c"
                          mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(mercury__string__parse_runtime__V_38_38, mercury__string__parse_runtime__V_43_43);
                        }
#line 26 "string.parse_runtime.m"
                        if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                          {
#line 2273 "string.parse_runtime.c"
                            {
#line 2275 "string.parse_runtime.c"
                              mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(mercury__string__parse_runtime__V_39_39, mercury__string__parse_runtime__V_44_44);
                            }
#line 26 "string.parse_runtime.m"
                            if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                              {
#line 2282 "string.parse_runtime.c"
                                mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_40_40 == mercury__string__parse_runtime__V_45_45);
#line 26 "string.parse_runtime.m"
                                if (mercury__string__parse_runtime__succeeded)
#line 2286 "string.parse_runtime.c"
                                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_41_41 == mercury__string__parse_runtime__V_46_46);
#line 26 "string.parse_runtime.m"
                              }
#line 26 "string.parse_runtime.m"
                          }
#line 26 "string.parse_runtime.m"
                      }
#line 26 "string.parse_runtime.m"
                  }
#line 26 "string.parse_runtime.m"
              }
#line 26 "string.parse_runtime.m"
              break;
#line 26 "string.parse_runtime.m"
          }
#line 26 "string.parse_runtime.m"
          break;
#line 26 "string.parse_runtime.m"
      }
#line 26 "string.parse_runtime.m"
    return mercury__string__parse_runtime__succeeded;
#line 26 "string.parse_runtime.m"
  }
#line 26 "string.parse_runtime.m"
}

#line 399 "string.parse_runtime.m"
static MR_Word MR_CALL 
mercury__string__parse_runtime__poly_type_to_kind_1_f_0(
#line 399 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__1_1)
#line 399 "string.parse_runtime.m"
{
#line 401 "string.parse_runtime.m"
  {
#line 401 "string.parse_runtime.m"
    MR_bool mercury__string__parse_runtime__succeeded;
#line 401 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__HeadVar__2_2;

#line 401 "string.parse_runtime.m"
#line 401 "string.parse_runtime.m"
    switch (MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__1_1)) {
#line 401 "string.parse_runtime.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 401 "string.parse_runtime.m"
      case (MR_Integer) 0:
#line 404 "string.parse_runtime.m"
        mercury__string__parse_runtime__HeadVar__2_2 = (MR_Integer) 3;
#line 401 "string.parse_runtime.m"
        break;
#line 401 "string.parse_runtime.m"
      case (MR_Integer) 1:
#line 403 "string.parse_runtime.m"
        mercury__string__parse_runtime__HeadVar__2_2 = (MR_Integer) 2;
#line 401 "string.parse_runtime.m"
        break;
#line 401 "string.parse_runtime.m"
      case (MR_Integer) 2:
#line 402 "string.parse_runtime.m"
        mercury__string__parse_runtime__HeadVar__2_2 = (MR_Integer) 1;
#line 401 "string.parse_runtime.m"
        break;
#line 401 "string.parse_runtime.m"
      case (MR_Integer) 3:
#line 401 "string.parse_runtime.m"
        mercury__string__parse_runtime__HeadVar__2_2 = (MR_Integer) 0;
#line 401 "string.parse_runtime.m"
        break;
#line 401 "string.parse_runtime.m"
    }
#line 401 "string.parse_runtime.m"
    return mercury__string__parse_runtime__HeadVar__2_2;
#line 401 "string.parse_runtime.m"
  }
#line 399 "string.parse_runtime.m"
}

#line 231 "string.parse_runtime.m"
static void MR_CALL 
mercury__string__parse_runtime__get_first_spec_10_p_0(
#line 231 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_1,
#line 231 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_Chars_2,
#line 231 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3,
#line 231 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_4,
#line 231 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__5_5,
#line 231 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__6_6,
#line 231 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__7_7,
#line 231 "string.parse_runtime.m"
  MR_Integer mercury__string__parse_runtime__SpecNum_8,
#line 231 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Spec_9,
#line 231 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Errors_10)
#line 231 "string.parse_runtime.m"
{
#line 238 "string.parse_runtime.m"
  {
#line 238 "string.parse_runtime.m"
    MR_bool mercury__string__parse_runtime__succeeded;

#line 238 "string.parse_runtime.m"
    if ((mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 238 "string.parse_runtime.m"
      {
#line 238 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__TypeCtorInfo_138_138;
#line 238 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__V_24_24;
#line 238 "string.parse_runtime.m"
        MR_Integer mercury__string__parse_runtime__V_25_25;
#line 238 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__V_26_26;

#line 240 "string.parse_runtime.m"
        *mercury__string__parse_runtime__Spec_9 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 2410 "string.parse_runtime.c"
        mercury__string__parse_runtime__TypeCtorInfo_138_138 = (MR_Word) &mercury__string__string__type_ctor_info_poly_type_0;
#line 241 "string.parse_runtime.m"
        {
#line 241 "string.parse_runtime.m"
          mercury__string__parse_runtime__V_25_25 = mercury__list__length_1_f_0(mercury__string__parse_runtime__TypeCtorInfo_138_138, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3);
        }
#line 241 "string.parse_runtime.m"
        {
#line 241 "string.parse_runtime.m"
          mercury__string__parse_runtime__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 241 "string.parse_runtime.m"
          MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__V_24_24, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 241 "string.parse_runtime.m"
          MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__V_24_24, 1) = ((MR_Box) (mercury__string__parse_runtime__V_25_25));
#line 241 "string.parse_runtime.m"
        }
#line 241 "string.parse_runtime.m"
        mercury__string__parse_runtime__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 241 "string.parse_runtime.m"
        {
#line 241 "string.parse_runtime.m"
          MR_Word base;
#line 241 "string.parse_runtime.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "string.parse_runtime.m"
          *mercury__string__parse_runtime__Errors_10 = base;
#line 241 "string.parse_runtime.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__V_24_24));
#line 241 "string.parse_runtime.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_runtime__V_26_26));
#line 241 "string.parse_runtime.m"
        }
#line 237 "string.parse_runtime.m"
        *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_4 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 237 "string.parse_runtime.m"
        *mercury__string__parse_runtime__STATE_VARIABLE_Chars_2 = mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_1;
#line 238 "string.parse_runtime.m"
      }
#line 238 "string.parse_runtime.m"
    else
#line 243 "string.parse_runtime.m"
      {
#line 243 "string.parse_runtime.m"
        MR_Char mercury__string__parse_runtime__SpecChar_35 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_1, (MR_Integer) 0)));
#line 393 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__SpecPrime_36;
#line 393 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__ErrorsPrime_37;
#line 393 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80;

#line 244 "string.parse_runtime.m"
        *mercury__string__parse_runtime__STATE_VARIABLE_Chars_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_1, (MR_Integer) 1)));
#line 251 "string.parse_runtime.m"
#line 251 "string.parse_runtime.m"
        switch (mercury__string__parse_runtime__SpecChar_35) {
#line 251 "string.parse_runtime.m"
          default:
#line 251 "string.parse_runtime.m"
            mercury__string__parse_runtime__succeeded = MR_FALSE;
#line 251 "string.parse_runtime.m"
            break;
#line 251 "string.parse_runtime.m"
          case (MR_Char) 37:
#line 248 "string.parse_runtime.m"
            {
#line 249 "string.parse_runtime.m"
              mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[2];
#line 250 "string.parse_runtime.m"
              mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 248 "string.parse_runtime.m"
              mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 248 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 248 "string.parse_runtime.m"
            }
#line 251 "string.parse_runtime.m"
            break;
#line 251 "string.parse_runtime.m"
          case (MR_Char) 69:
#line 330 "string.parse_runtime.m"
            {
#line 343 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 344 "string.parse_runtime.m"
                {
#line 344 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_65_65;
#line 344 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_107;

#line 345 "string.parse_runtime.m"
                  {
#line 345 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 345 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 345 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_107, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 345 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_107, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 345 "string.parse_runtime.m"
                  }
#line 346 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 347 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "string.parse_runtime.m"
                  {
#line 347 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_107));
#line 347 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_65_65));
#line 347 "string.parse_runtime.m"
                  }
#line 344 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 344 "string.parse_runtime.m"
                }
#line 343 "string.parse_runtime.m"
              else
#line 332 "string.parse_runtime.m"
                {
#line 332 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 337 "string.parse_runtime.m"
                  MR_Float mercury__string__parse_runtime__Float_43;

#line 332 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 333 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_105)) == (MR_mktag((MR_Integer) 0)));
#line 333 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 333 "string.parse_runtime.m"
                    {
#line 333 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Float_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_105, (MR_Integer) 0)));
#line 334 "string.parse_runtime.m"
                      {
#line 334 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 1));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_43);
#line 334 "string.parse_runtime.m"
                      }
#line 336 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 333 "string.parse_runtime.m"
                    }
#line 333 "string.parse_runtime.m"
                  else
#line 339 "string.parse_runtime.m"
                    {
#line 339 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_67_67;
#line 339 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_69_69;
#line 339 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_103;

#line 339 "string.parse_runtime.m"
                      {
#line 339 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_67_67 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_105);
                      }
#line 338 "string.parse_runtime.m"
                      {
#line 338 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_103 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 338 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_103, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 338 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_103, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 338 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_103, 2) = ((MR_Box) (mercury__string__parse_runtime__V_67_67));
#line 338 "string.parse_runtime.m"
                      }
#line 340 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 341 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_69_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 341 "string.parse_runtime.m"
                      {
#line 341 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_103));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_69_69));
#line 341 "string.parse_runtime.m"
                      }
#line 339 "string.parse_runtime.m"
                    }
#line 332 "string.parse_runtime.m"
                }
#line 330 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 330 "string.parse_runtime.m"
            }
#line 251 "string.parse_runtime.m"
            break;
#line 251 "string.parse_runtime.m"
          case (MR_Char) 70:
#line 330 "string.parse_runtime.m"
            {
#line 343 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 344 "string.parse_runtime.m"
                {
#line 344 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_149_149;
#line 344 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_150;

#line 345 "string.parse_runtime.m"
                  {
#line 345 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 345 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 345 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_150, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 345 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_150, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 345 "string.parse_runtime.m"
                  }
#line 346 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 347 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_149_149 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "string.parse_runtime.m"
                  {
#line 347 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_150));
#line 347 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_149_149));
#line 347 "string.parse_runtime.m"
                  }
#line 344 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 344 "string.parse_runtime.m"
                }
#line 343 "string.parse_runtime.m"
              else
#line 332 "string.parse_runtime.m"
                {
#line 332 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 337 "string.parse_runtime.m"
                  MR_Float mercury__string__parse_runtime__Float_155;

#line 332 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 333 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_165)) == (MR_mktag((MR_Integer) 0)));
#line 333 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 333 "string.parse_runtime.m"
                    {
#line 333 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Float_155 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_165, (MR_Integer) 0)));
#line 334 "string.parse_runtime.m"
                      {
#line 334 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 3));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_155);
#line 334 "string.parse_runtime.m"
                      }
#line 336 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 333 "string.parse_runtime.m"
                    }
#line 333 "string.parse_runtime.m"
                  else
#line 339 "string.parse_runtime.m"
                    {
#line 339 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_151_151;
#line 339 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_153_153;
#line 339 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_154;

#line 339 "string.parse_runtime.m"
                      {
#line 339 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_151_151 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_165);
                      }
#line 338 "string.parse_runtime.m"
                      {
#line 338 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_154 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 338 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_154, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 338 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_154, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 338 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_154, 2) = ((MR_Box) (mercury__string__parse_runtime__V_151_151));
#line 338 "string.parse_runtime.m"
                      }
#line 340 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 341 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_153_153 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 341 "string.parse_runtime.m"
                      {
#line 341 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_154));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_153_153));
#line 341 "string.parse_runtime.m"
                      }
#line 339 "string.parse_runtime.m"
                    }
#line 332 "string.parse_runtime.m"
                }
#line 330 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 330 "string.parse_runtime.m"
            }
#line 251 "string.parse_runtime.m"
            break;
#line 251 "string.parse_runtime.m"
          case (MR_Char) 71:
#line 330 "string.parse_runtime.m"
            {
#line 343 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 344 "string.parse_runtime.m"
                {
#line 344 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_188_188;
#line 344 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_189;

#line 345 "string.parse_runtime.m"
                  {
#line 345 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_189 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 345 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_189, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 345 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_189, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 345 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_189, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 345 "string.parse_runtime.m"
                  }
#line 346 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 347 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_188_188 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "string.parse_runtime.m"
                  {
#line 347 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_189));
#line 347 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_188_188));
#line 347 "string.parse_runtime.m"
                  }
#line 344 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 344 "string.parse_runtime.m"
                }
#line 343 "string.parse_runtime.m"
              else
#line 332 "string.parse_runtime.m"
                {
#line 332 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_204 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 337 "string.parse_runtime.m"
                  MR_Float mercury__string__parse_runtime__Float_194;

#line 332 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 333 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_204)) == (MR_mktag((MR_Integer) 0)));
#line 333 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 333 "string.parse_runtime.m"
                    {
#line 333 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Float_194 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_204, (MR_Integer) 0)));
#line 334 "string.parse_runtime.m"
                      {
#line 334 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 5));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_194);
#line 334 "string.parse_runtime.m"
                      }
#line 336 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 333 "string.parse_runtime.m"
                    }
#line 333 "string.parse_runtime.m"
                  else
#line 339 "string.parse_runtime.m"
                    {
#line 339 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_190_190;
#line 339 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_192_192;
#line 339 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_193;

#line 339 "string.parse_runtime.m"
                      {
#line 339 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_190_190 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_204);
                      }
#line 338 "string.parse_runtime.m"
                      {
#line 338 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_193 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 338 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_193, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 338 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_193, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 338 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_193, 2) = ((MR_Box) (mercury__string__parse_runtime__V_190_190));
#line 338 "string.parse_runtime.m"
                      }
#line 340 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 341 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_192_192 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 341 "string.parse_runtime.m"
                      {
#line 341 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_193));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_192_192));
#line 341 "string.parse_runtime.m"
                      }
#line 339 "string.parse_runtime.m"
                    }
#line 332 "string.parse_runtime.m"
                }
#line 330 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 330 "string.parse_runtime.m"
            }
#line 251 "string.parse_runtime.m"
            break;
#line 251 "string.parse_runtime.m"
          case (MR_Char) 88:
#line 292 "string.parse_runtime.m"
            {
#line 305 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "string.parse_runtime.m"
                {
#line 306 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_73_73;
#line 306 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_96;

#line 307 "string.parse_runtime.m"
                  {
#line 307 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 307 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 307 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_96, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 307 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_96, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 307 "string.parse_runtime.m"
                  }
#line 308 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 309 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_73_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 309 "string.parse_runtime.m"
                  {
#line 309 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_96));
#line 309 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_73_73));
#line 309 "string.parse_runtime.m"
                  }
#line 306 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 306 "string.parse_runtime.m"
                }
#line 305 "string.parse_runtime.m"
              else
#line 294 "string.parse_runtime.m"
                {
#line 294 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 299 "string.parse_runtime.m"
                  MR_Integer mercury__string__parse_runtime__Int_91;

#line 294 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 295 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_93)) == (MR_mktag((MR_Integer) 1)));
#line 295 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 295 "string.parse_runtime.m"
                    {
#line 295 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Int_91 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_93, (MR_Integer) 0)));
#line 296 "string.parse_runtime.m"
                      {
#line 296 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 3));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = ((MR_Box) (mercury__string__parse_runtime__Int_91));
#line 296 "string.parse_runtime.m"
                      }
#line 298 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 295 "string.parse_runtime.m"
                    }
#line 295 "string.parse_runtime.m"
                  else
#line 301 "string.parse_runtime.m"
                    {
#line 301 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_75_75;
#line 301 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_77_77;
#line 301 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_90;

#line 301 "string.parse_runtime.m"
                      {
#line 301 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_75_75 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_93);
                      }
#line 300 "string.parse_runtime.m"
                      {
#line 300 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 300 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_90, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 300 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_90, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 300 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_90, 2) = ((MR_Box) (mercury__string__parse_runtime__V_75_75));
#line 300 "string.parse_runtime.m"
                      }
#line 302 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 303 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_77_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 303 "string.parse_runtime.m"
                      {
#line 303 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_90));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_77_77));
#line 303 "string.parse_runtime.m"
                      }
#line 301 "string.parse_runtime.m"
                    }
#line 294 "string.parse_runtime.m"
                }
#line 292 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 292 "string.parse_runtime.m"
            }
#line 251 "string.parse_runtime.m"
            break;
#line 251 "string.parse_runtime.m"
          case (MR_Char) 99:
#line 363 "string.parse_runtime.m"
            {
#line 363 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 364 "string.parse_runtime.m"
                {
#line 364 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_59_59;
#line 364 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_116;

#line 365 "string.parse_runtime.m"
                  {
#line 365 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 365 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 365 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_116, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 365 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_116, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 365 "string.parse_runtime.m"
                  }
#line 366 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 367 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 367 "string.parse_runtime.m"
                  {
#line 367 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_116));
#line 367 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_59_59));
#line 367 "string.parse_runtime.m"
                  }
#line 364 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 364 "string.parse_runtime.m"
                }
#line 363 "string.parse_runtime.m"
              else
#line 352 "string.parse_runtime.m"
                {
#line 352 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 357 "string.parse_runtime.m"
                  MR_Char mercury__string__parse_runtime__Char_44;

#line 352 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 353 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_114)) == (MR_mktag((MR_Integer) 3)));
#line 353 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 353 "string.parse_runtime.m"
                    {
#line 353 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Char_44 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPolyType_114, (MR_Integer) 0)));
#line 355 "string.parse_runtime.m"
                      {
#line 355 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 355 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 355 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 355 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__Char_44));
#line 355 "string.parse_runtime.m"
                      }
#line 356 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 353 "string.parse_runtime.m"
                    }
#line 353 "string.parse_runtime.m"
                  else
#line 359 "string.parse_runtime.m"
                    {
#line 359 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_61_61;
#line 359 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_63_63;
#line 359 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_112;

#line 359 "string.parse_runtime.m"
                      {
#line 359 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_61_61 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_114);
                      }
#line 358 "string.parse_runtime.m"
                      {
#line 358 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_112 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 358 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_112, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 358 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_112, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 358 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_112, 2) = ((MR_Box) (mercury__string__parse_runtime__V_61_61));
#line 358 "string.parse_runtime.m"
                      }
#line 360 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 361 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_63_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 361 "string.parse_runtime.m"
                      {
#line 361 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_112));
#line 361 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_63_63));
#line 361 "string.parse_runtime.m"
                      }
#line 359 "string.parse_runtime.m"
                    }
#line 352 "string.parse_runtime.m"
                }
#line 363 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 363 "string.parse_runtime.m"
            }
#line 251 "string.parse_runtime.m"
            break;
#line 251 "string.parse_runtime.m"
          case (MR_Char) 100:
#line 251 "string.parse_runtime.m"
          case (MR_Char) 105:
#line 268 "string.parse_runtime.m"
            {
#line 268 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 269 "string.parse_runtime.m"
                {
#line 269 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_79_79;
#line 269 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_89;

#line 270 "string.parse_runtime.m"
                  {
#line 270 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 270 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 270 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_89, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 270 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_89, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 270 "string.parse_runtime.m"
                  }
#line 271 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 272 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_79_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 272 "string.parse_runtime.m"
                  {
#line 272 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_89));
#line 272 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_79_79));
#line 272 "string.parse_runtime.m"
                  }
#line 269 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 269 "string.parse_runtime.m"
                }
#line 268 "string.parse_runtime.m"
              else
#line 256 "string.parse_runtime.m"
                {
#line 256 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 262 "string.parse_runtime.m"
                  MR_Integer mercury__string__parse_runtime__Int_39;

#line 256 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 257 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_38)) == (MR_mktag((MR_Integer) 1)));
#line 257 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 257 "string.parse_runtime.m"
                    {
#line 257 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Int_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_38, (MR_Integer) 0)));
#line 259 "string.parse_runtime.m"
                      {
#line 259 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 259 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 259 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 259 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 259 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 259 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) (mercury__string__parse_runtime__Int_39));
#line 259 "string.parse_runtime.m"
                      }
#line 261 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 257 "string.parse_runtime.m"
                    }
#line 257 "string.parse_runtime.m"
                  else
#line 264 "string.parse_runtime.m"
                    {
#line 264 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_40;
#line 264 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_81_81;
#line 264 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_83_83;

#line 264 "string.parse_runtime.m"
                      {
#line 264 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_81_81 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_38);
                      }
#line 263 "string.parse_runtime.m"
                      {
#line 263 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 263 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_40, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 263 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_40, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 263 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_40, 2) = ((MR_Box) (mercury__string__parse_runtime__V_81_81));
#line 263 "string.parse_runtime.m"
                      }
#line 265 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 266 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_83_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 266 "string.parse_runtime.m"
                      {
#line 266 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_40));
#line 266 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_83_83));
#line 266 "string.parse_runtime.m"
                      }
#line 264 "string.parse_runtime.m"
                    }
#line 256 "string.parse_runtime.m"
                }
#line 268 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 268 "string.parse_runtime.m"
            }
#line 251 "string.parse_runtime.m"
            break;
#line 251 "string.parse_runtime.m"
          case (MR_Char) 101:
#line 330 "string.parse_runtime.m"
            {
#line 343 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 344 "string.parse_runtime.m"
                {
#line 344 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_227_227;
#line 344 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_228;

#line 345 "string.parse_runtime.m"
                  {
#line 345 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_228 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 345 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_228, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 345 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_228, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 345 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_228, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 345 "string.parse_runtime.m"
                  }
#line 346 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 347 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_227_227 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "string.parse_runtime.m"
                  {
#line 347 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_228));
#line 347 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_227_227));
#line 347 "string.parse_runtime.m"
                  }
#line 344 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 344 "string.parse_runtime.m"
                }
#line 343 "string.parse_runtime.m"
              else
#line 332 "string.parse_runtime.m"
                {
#line 332 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_243 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 337 "string.parse_runtime.m"
                  MR_Float mercury__string__parse_runtime__Float_233;

#line 332 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 333 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_243)) == (MR_mktag((MR_Integer) 0)));
#line 333 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 333 "string.parse_runtime.m"
                    {
#line 333 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Float_233 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_243, (MR_Integer) 0)));
#line 334 "string.parse_runtime.m"
                      {
#line 334 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 0));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_233);
#line 334 "string.parse_runtime.m"
                      }
#line 336 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 333 "string.parse_runtime.m"
                    }
#line 333 "string.parse_runtime.m"
                  else
#line 339 "string.parse_runtime.m"
                    {
#line 339 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_229_229;
#line 339 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_231_231;
#line 339 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_232;

#line 339 "string.parse_runtime.m"
                      {
#line 339 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_229_229 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_243);
                      }
#line 338 "string.parse_runtime.m"
                      {
#line 338 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_232 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 338 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_232, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 338 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_232, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 338 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_232, 2) = ((MR_Box) (mercury__string__parse_runtime__V_229_229));
#line 338 "string.parse_runtime.m"
                      }
#line 340 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 341 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_231_231 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 341 "string.parse_runtime.m"
                      {
#line 341 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_232));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_231_231));
#line 341 "string.parse_runtime.m"
                      }
#line 339 "string.parse_runtime.m"
                    }
#line 332 "string.parse_runtime.m"
                }
#line 330 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 330 "string.parse_runtime.m"
            }
#line 251 "string.parse_runtime.m"
            break;
#line 251 "string.parse_runtime.m"
          case (MR_Char) 102:
#line 330 "string.parse_runtime.m"
            {
#line 343 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 344 "string.parse_runtime.m"
                {
#line 344 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_266_266;
#line 344 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_267;

#line 345 "string.parse_runtime.m"
                  {
#line 345 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_267 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 345 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_267, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 345 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_267, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 345 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_267, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 345 "string.parse_runtime.m"
                  }
#line 346 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 347 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_266_266 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "string.parse_runtime.m"
                  {
#line 347 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_267));
#line 347 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_266_266));
#line 347 "string.parse_runtime.m"
                  }
#line 344 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 344 "string.parse_runtime.m"
                }
#line 343 "string.parse_runtime.m"
              else
#line 332 "string.parse_runtime.m"
                {
#line 332 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_282 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 337 "string.parse_runtime.m"
                  MR_Float mercury__string__parse_runtime__Float_272;

#line 332 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 333 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_282)) == (MR_mktag((MR_Integer) 0)));
#line 333 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 333 "string.parse_runtime.m"
                    {
#line 333 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Float_272 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_282, (MR_Integer) 0)));
#line 334 "string.parse_runtime.m"
                      {
#line 334 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 2));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_272);
#line 334 "string.parse_runtime.m"
                      }
#line 336 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 333 "string.parse_runtime.m"
                    }
#line 333 "string.parse_runtime.m"
                  else
#line 339 "string.parse_runtime.m"
                    {
#line 339 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_268_268;
#line 339 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_270_270;
#line 339 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_271;

#line 339 "string.parse_runtime.m"
                      {
#line 339 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_268_268 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_282);
                      }
#line 338 "string.parse_runtime.m"
                      {
#line 338 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_271 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 338 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_271, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 338 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_271, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 338 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_271, 2) = ((MR_Box) (mercury__string__parse_runtime__V_268_268));
#line 338 "string.parse_runtime.m"
                      }
#line 340 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 341 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_270_270 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 341 "string.parse_runtime.m"
                      {
#line 341 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_271));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_270_270));
#line 341 "string.parse_runtime.m"
                      }
#line 339 "string.parse_runtime.m"
                    }
#line 332 "string.parse_runtime.m"
                }
#line 330 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 330 "string.parse_runtime.m"
            }
#line 251 "string.parse_runtime.m"
            break;
#line 251 "string.parse_runtime.m"
          case (MR_Char) 103:
#line 330 "string.parse_runtime.m"
            {
#line 343 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 344 "string.parse_runtime.m"
                {
#line 344 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_305_305;
#line 344 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_306;

#line 345 "string.parse_runtime.m"
                  {
#line 345 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_306 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 345 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_306, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 345 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_306, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 345 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_306, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 345 "string.parse_runtime.m"
                  }
#line 346 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 347 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_305_305 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "string.parse_runtime.m"
                  {
#line 347 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_306));
#line 347 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_305_305));
#line 347 "string.parse_runtime.m"
                  }
#line 344 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 344 "string.parse_runtime.m"
                }
#line 343 "string.parse_runtime.m"
              else
#line 332 "string.parse_runtime.m"
                {
#line 332 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_321 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 337 "string.parse_runtime.m"
                  MR_Float mercury__string__parse_runtime__Float_311;

#line 332 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 333 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_321)) == (MR_mktag((MR_Integer) 0)));
#line 333 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 333 "string.parse_runtime.m"
                    {
#line 333 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Float_311 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_321, (MR_Integer) 0)));
#line 334 "string.parse_runtime.m"
                      {
#line 334 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 4));
#line 334 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_311);
#line 334 "string.parse_runtime.m"
                      }
#line 336 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 333 "string.parse_runtime.m"
                    }
#line 333 "string.parse_runtime.m"
                  else
#line 339 "string.parse_runtime.m"
                    {
#line 339 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_307_307;
#line 339 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_309_309;
#line 339 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_310;

#line 339 "string.parse_runtime.m"
                      {
#line 339 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_307_307 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_321);
                      }
#line 338 "string.parse_runtime.m"
                      {
#line 338 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_310 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 338 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_310, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 338 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_310, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 338 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_310, 2) = ((MR_Box) (mercury__string__parse_runtime__V_307_307));
#line 338 "string.parse_runtime.m"
                      }
#line 340 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 341 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_309_309 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 341 "string.parse_runtime.m"
                      {
#line 341 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_310));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_309_309));
#line 341 "string.parse_runtime.m"
                      }
#line 339 "string.parse_runtime.m"
                    }
#line 332 "string.parse_runtime.m"
                }
#line 330 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 330 "string.parse_runtime.m"
            }
#line 251 "string.parse_runtime.m"
            break;
#line 251 "string.parse_runtime.m"
          case (MR_Char) 111:
#line 292 "string.parse_runtime.m"
            {
#line 305 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "string.parse_runtime.m"
                {
#line 306 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_344_344;
#line 306 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_345;

#line 307 "string.parse_runtime.m"
                  {
#line 307 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_345 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 307 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_345, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 307 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_345, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 307 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_345, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 307 "string.parse_runtime.m"
                  }
#line 308 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 309 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_344_344 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 309 "string.parse_runtime.m"
                  {
#line 309 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_345));
#line 309 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_344_344));
#line 309 "string.parse_runtime.m"
                  }
#line 306 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 306 "string.parse_runtime.m"
                }
#line 305 "string.parse_runtime.m"
              else
#line 294 "string.parse_runtime.m"
                {
#line 294 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_360 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 299 "string.parse_runtime.m"
                  MR_Integer mercury__string__parse_runtime__Int_354;

#line 294 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 295 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_360)) == (MR_mktag((MR_Integer) 1)));
#line 295 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 295 "string.parse_runtime.m"
                    {
#line 295 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Int_354 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_360, (MR_Integer) 0)));
#line 296 "string.parse_runtime.m"
                      {
#line 296 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 0));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = ((MR_Box) (mercury__string__parse_runtime__Int_354));
#line 296 "string.parse_runtime.m"
                      }
#line 298 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 295 "string.parse_runtime.m"
                    }
#line 295 "string.parse_runtime.m"
                  else
#line 301 "string.parse_runtime.m"
                    {
#line 301 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_346_346;
#line 301 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_348_348;
#line 301 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_349;

#line 301 "string.parse_runtime.m"
                      {
#line 301 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_346_346 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_360);
                      }
#line 300 "string.parse_runtime.m"
                      {
#line 300 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_349 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 300 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_349, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 300 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_349, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 300 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_349, 2) = ((MR_Box) (mercury__string__parse_runtime__V_346_346));
#line 300 "string.parse_runtime.m"
                      }
#line 302 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 303 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_348_348 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 303 "string.parse_runtime.m"
                      {
#line 303 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_349));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_348_348));
#line 303 "string.parse_runtime.m"
                      }
#line 301 "string.parse_runtime.m"
                    }
#line 294 "string.parse_runtime.m"
                }
#line 292 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 292 "string.parse_runtime.m"
            }
#line 251 "string.parse_runtime.m"
            break;
#line 251 "string.parse_runtime.m"
          case (MR_Char) 112:
#line 292 "string.parse_runtime.m"
            {
#line 292 "string.parse_runtime.m"
              MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Flags_70_418;
#line 291 "string.parse_runtime.m"
              MR_Word mercury__string__parse_runtime__V_134_134 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 291 "string.parse_runtime.m"
              MR_Word mercury__string__parse_runtime__V_135_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 291 "string.parse_runtime.m"
              MR_Word mercury__string__parse_runtime__V_136_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 291 "string.parse_runtime.m"
              MR_Word mercury__string__parse_runtime__V_137_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 291 "string.parse_runtime.m"
              MR_Word mercury__string__parse_runtime__V_133_133 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__5_5, (MR_Integer) 0)))) & (MR_Integer) 1);

#line 291 "string.parse_runtime.m"
              {
#line 291 "string.parse_runtime.m"
                mercury__string__parse_runtime__STATE_VARIABLE_Flags_70_418 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 291 "string.parse_runtime.m"
                MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__STATE_VARIABLE_Flags_70_418, 0) = ((MR_Box) (((MR_Integer) 1 | ((((mercury__string__parse_runtime__V_134_134 << (MR_Integer) 1)) | ((((mercury__string__parse_runtime__V_135_135 << (MR_Integer) 2)) | ((((mercury__string__parse_runtime__V_136_136 << (MR_Integer) 3)) | ((mercury__string__parse_runtime__V_137_137 << (MR_Integer) 4)))))))))));
#line 291 "string.parse_runtime.m"
              }
#line 305 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "string.parse_runtime.m"
                {
#line 306 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_382_382;
#line 306 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_383;

#line 307 "string.parse_runtime.m"
                  {
#line 307 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_383 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 307 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_383, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 307 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_383, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 307 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_383, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 307 "string.parse_runtime.m"
                  }
#line 308 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 309 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_382_382 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 309 "string.parse_runtime.m"
                  {
#line 309 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_383));
#line 309 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_382_382));
#line 309 "string.parse_runtime.m"
                  }
#line 306 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 306 "string.parse_runtime.m"
                }
#line 305 "string.parse_runtime.m"
              else
#line 294 "string.parse_runtime.m"
                {
#line 294 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_398 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 299 "string.parse_runtime.m"
                  MR_Integer mercury__string__parse_runtime__Int_392;

#line 294 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 295 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_398)) == (MR_mktag((MR_Integer) 1)));
#line 295 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 295 "string.parse_runtime.m"
                    {
#line 295 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Int_392 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_398, (MR_Integer) 0)));
#line 296 "string.parse_runtime.m"
                      {
#line 296 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__STATE_VARIABLE_Flags_70_418));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 4));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = ((MR_Box) (mercury__string__parse_runtime__Int_392));
#line 296 "string.parse_runtime.m"
                      }
#line 298 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 295 "string.parse_runtime.m"
                    }
#line 295 "string.parse_runtime.m"
                  else
#line 301 "string.parse_runtime.m"
                    {
#line 301 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_384_384;
#line 301 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_386_386;
#line 301 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_387;

#line 301 "string.parse_runtime.m"
                      {
#line 301 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_384_384 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_398);
                      }
#line 300 "string.parse_runtime.m"
                      {
#line 300 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_387 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 300 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_387, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 300 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_387, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 300 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_387, 2) = ((MR_Box) (mercury__string__parse_runtime__V_384_384));
#line 300 "string.parse_runtime.m"
                      }
#line 302 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 303 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_386_386 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 303 "string.parse_runtime.m"
                      {
#line 303 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_387));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_386_386));
#line 303 "string.parse_runtime.m"
                      }
#line 301 "string.parse_runtime.m"
                    }
#line 294 "string.parse_runtime.m"
                }
#line 292 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 292 "string.parse_runtime.m"
            }
#line 251 "string.parse_runtime.m"
            break;
#line 251 "string.parse_runtime.m"
          case (MR_Char) 115:
#line 383 "string.parse_runtime.m"
            {
#line 383 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 384 "string.parse_runtime.m"
                {
#line 384 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_53_53;
#line 384 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_125;

#line 385 "string.parse_runtime.m"
                  {
#line 385 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 385 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 385 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_125, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 385 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_125, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 385 "string.parse_runtime.m"
                  }
#line 386 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 387 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 387 "string.parse_runtime.m"
                  {
#line 387 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_125));
#line 387 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_53_53));
#line 387 "string.parse_runtime.m"
                  }
#line 384 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 384 "string.parse_runtime.m"
                }
#line 383 "string.parse_runtime.m"
              else
#line 372 "string.parse_runtime.m"
                {
#line 372 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 377 "string.parse_runtime.m"
                  MR_String mercury__string__parse_runtime__Str_45;

#line 372 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 373 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_123)) == (MR_mktag((MR_Integer) 2)));
#line 373 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 373 "string.parse_runtime.m"
                    {
#line 373 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Str_45 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__SpecPolyType_123, (MR_Integer) 0)));
#line 374 "string.parse_runtime.m"
                      {
#line 374 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 374 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 374 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 374 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 374 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__Str_45));
#line 374 "string.parse_runtime.m"
                      }
#line 376 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 373 "string.parse_runtime.m"
                    }
#line 373 "string.parse_runtime.m"
                  else
#line 379 "string.parse_runtime.m"
                    {
#line 379 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_55_55;
#line 379 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_57_57;
#line 379 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_121;

#line 379 "string.parse_runtime.m"
                      {
#line 379 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_55_55 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_123);
                      }
#line 378 "string.parse_runtime.m"
                      {
#line 378 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_121 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 378 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_121, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 378 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_121, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 378 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_121, 2) = ((MR_Box) (mercury__string__parse_runtime__V_55_55));
#line 378 "string.parse_runtime.m"
                      }
#line 380 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 381 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 381 "string.parse_runtime.m"
                      {
#line 381 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_121));
#line 381 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_57_57));
#line 381 "string.parse_runtime.m"
                      }
#line 379 "string.parse_runtime.m"
                    }
#line 372 "string.parse_runtime.m"
                }
#line 383 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 383 "string.parse_runtime.m"
            }
#line 251 "string.parse_runtime.m"
            break;
#line 251 "string.parse_runtime.m"
          case (MR_Char) 117:
#line 292 "string.parse_runtime.m"
            {
#line 305 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "string.parse_runtime.m"
                {
#line 306 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_420_420;
#line 306 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_421;

#line 307 "string.parse_runtime.m"
                  {
#line 307 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_421 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 307 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_421, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 307 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_421, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 307 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_421, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 307 "string.parse_runtime.m"
                  }
#line 308 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 309 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_420_420 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 309 "string.parse_runtime.m"
                  {
#line 309 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_421));
#line 309 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_420_420));
#line 309 "string.parse_runtime.m"
                  }
#line 306 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 306 "string.parse_runtime.m"
                }
#line 305 "string.parse_runtime.m"
              else
#line 294 "string.parse_runtime.m"
                {
#line 294 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_436 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 299 "string.parse_runtime.m"
                  MR_Integer mercury__string__parse_runtime__Int_430;

#line 294 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 295 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_436)) == (MR_mktag((MR_Integer) 1)));
#line 295 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 295 "string.parse_runtime.m"
                    {
#line 295 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Int_430 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_436, (MR_Integer) 0)));
#line 296 "string.parse_runtime.m"
                      {
#line 296 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 1));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = ((MR_Box) (mercury__string__parse_runtime__Int_430));
#line 296 "string.parse_runtime.m"
                      }
#line 298 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 295 "string.parse_runtime.m"
                    }
#line 295 "string.parse_runtime.m"
                  else
#line 301 "string.parse_runtime.m"
                    {
#line 301 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_422_422;
#line 301 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_424_424;
#line 301 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_425;

#line 301 "string.parse_runtime.m"
                      {
#line 301 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_422_422 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_436);
                      }
#line 300 "string.parse_runtime.m"
                      {
#line 300 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_425 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 300 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_425, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 300 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_425, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 300 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_425, 2) = ((MR_Box) (mercury__string__parse_runtime__V_422_422));
#line 300 "string.parse_runtime.m"
                      }
#line 302 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 303 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_424_424 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 303 "string.parse_runtime.m"
                      {
#line 303 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_425));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_424_424));
#line 303 "string.parse_runtime.m"
                      }
#line 301 "string.parse_runtime.m"
                    }
#line 294 "string.parse_runtime.m"
                }
#line 292 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 292 "string.parse_runtime.m"
            }
#line 251 "string.parse_runtime.m"
            break;
#line 251 "string.parse_runtime.m"
          case (MR_Char) 120:
#line 292 "string.parse_runtime.m"
            {
#line 305 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "string.parse_runtime.m"
                {
#line 306 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_458_458;
#line 306 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_459;

#line 307 "string.parse_runtime.m"
                  {
#line 307 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_459 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 307 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_459, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 307 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_459, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 307 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_459, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 307 "string.parse_runtime.m"
                  }
#line 308 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 309 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_458_458 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 309 "string.parse_runtime.m"
                  {
#line 309 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_459));
#line 309 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_458_458));
#line 309 "string.parse_runtime.m"
                  }
#line 306 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 306 "string.parse_runtime.m"
                }
#line 305 "string.parse_runtime.m"
              else
#line 294 "string.parse_runtime.m"
                {
#line 294 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_474 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 299 "string.parse_runtime.m"
                  MR_Integer mercury__string__parse_runtime__Int_468;

#line 294 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 295 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_474)) == (MR_mktag((MR_Integer) 1)));
#line 295 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 295 "string.parse_runtime.m"
                    {
#line 295 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Int_468 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_474, (MR_Integer) 0)));
#line 296 "string.parse_runtime.m"
                      {
#line 296 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 2));
#line 296 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = ((MR_Box) (mercury__string__parse_runtime__Int_468));
#line 296 "string.parse_runtime.m"
                      }
#line 298 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 295 "string.parse_runtime.m"
                    }
#line 295 "string.parse_runtime.m"
                  else
#line 301 "string.parse_runtime.m"
                    {
#line 301 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_460_460;
#line 301 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_462_462;
#line 301 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_463;

#line 301 "string.parse_runtime.m"
                      {
#line 301 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_460_460 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_474);
                      }
#line 300 "string.parse_runtime.m"
                      {
#line 300 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_463 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 300 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_463, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 300 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_463, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 300 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_463, 2) = ((MR_Box) (mercury__string__parse_runtime__V_460_460));
#line 300 "string.parse_runtime.m"
                      }
#line 302 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 303 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_462_462 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 303 "string.parse_runtime.m"
                      {
#line 303 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_463));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_462_462));
#line 303 "string.parse_runtime.m"
                      }
#line 301 "string.parse_runtime.m"
                    }
#line 294 "string.parse_runtime.m"
                }
#line 292 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 292 "string.parse_runtime.m"
            }
#line 251 "string.parse_runtime.m"
            break;
#line 251 "string.parse_runtime.m"
        }
#line 393 "string.parse_runtime.m"
        if (mercury__string__parse_runtime__succeeded)
#line 391 "string.parse_runtime.m"
          {
#line 391 "string.parse_runtime.m"
            *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_4 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80;
#line 391 "string.parse_runtime.m"
            *mercury__string__parse_runtime__Spec_9 = mercury__string__parse_runtime__SpecPrime_36;
#line 392 "string.parse_runtime.m"
            *mercury__string__parse_runtime__Errors_10 = mercury__string__parse_runtime__ErrorsPrime_37;
#line 391 "string.parse_runtime.m"
          }
#line 393 "string.parse_runtime.m"
        else
#line 394 "string.parse_runtime.m"
          {
#line 394 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_86_86;
#line 394 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__Error_131;

#line 394 "string.parse_runtime.m"
            {
#line 394 "string.parse_runtime.m"
              mercury__string__parse_runtime__Error_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__Error_131, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 394 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__Error_131, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 394 "string.parse_runtime.m"
            }
#line 395 "string.parse_runtime.m"
            *mercury__string__parse_runtime__Spec_9 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 396 "string.parse_runtime.m"
            mercury__string__parse_runtime__V_86_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 396 "string.parse_runtime.m"
            {
#line 396 "string.parse_runtime.m"
              MR_Word base;
#line 396 "string.parse_runtime.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "string.parse_runtime.m"
              *mercury__string__parse_runtime__Errors_10 = base;
#line 396 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_131));
#line 396 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_runtime__V_86_86));
#line 396 "string.parse_runtime.m"
            }
#line 394 "string.parse_runtime.m"
            *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_4 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 394 "string.parse_runtime.m"
          }
#line 243 "string.parse_runtime.m"
      }
#line 238 "string.parse_runtime.m"
  }
#line 231 "string.parse_runtime.m"
}

#line 182 "string.parse_runtime.m"
static void MR_CALL 
mercury__string__parse_runtime__get_optional_prec_7_p_0(
#line 182 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_16,
#line 182 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_Chars_17,
#line 182 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18,
#line 182 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_19,
#line 182 "string.parse_runtime.m"
  MR_Integer mercury__string__parse_runtime__SpecNum_10,
#line 182 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__MaybePrec_11,
#line 182 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Errors_12)
#line 182 "string.parse_runtime.m"
{
#line 210 "string.parse_runtime.m"
  {
#line 210 "string.parse_runtime.m"
    MR_bool mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_16)) == (MR_mktag((MR_Integer) 1)));
#line 210 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_20;
#line 187 "string.parse_runtime.m"
    MR_Char mercury__string__parse_runtime__V_21_21;

#line 187 "string.parse_runtime.m"
    if (mercury__string__parse_runtime__succeeded)
#line 187 "string.parse_runtime.m"
      {
#line 187 "string.parse_runtime.m"
        mercury__string__parse_runtime__V_21_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_16, (MR_Integer) 0)));
#line 187 "string.parse_runtime.m"
        mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_16, (MR_Integer) 1)));
#line 187 "string.parse_runtime.m"
        mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_21_21 == (MR_Char) 46);
#line 187 "string.parse_runtime.m"
      }
#line 210 "string.parse_runtime.m"
    if (mercury__string__parse_runtime__succeeded)
#line 204 "string.parse_runtime.m"
      {
#line 204 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_22_22;
#line 188 "string.parse_runtime.m"
        MR_Char mercury__string__parse_runtime__V_23_23;

#line 188 "string.parse_runtime.m"
        mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 188 "string.parse_runtime.m"
        if (mercury__string__parse_runtime__succeeded)
#line 188 "string.parse_runtime.m"
          {
#line 188 "string.parse_runtime.m"
            mercury__string__parse_runtime__V_23_23 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_20, (MR_Integer) 0)));
#line 188 "string.parse_runtime.m"
            mercury__string__parse_runtime__STATE_VARIABLE_Chars_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_20, (MR_Integer) 1)));
#line 188 "string.parse_runtime.m"
            mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_23_23 == (MR_Char) 42);
#line 188 "string.parse_runtime.m"
          }
#line 204 "string.parse_runtime.m"
        if (mercury__string__parse_runtime__succeeded)
#line 199 "string.parse_runtime.m"
          {
#line 199 "string.parse_runtime.m"
            *mercury__string__parse_runtime__STATE_VARIABLE_Chars_17 = mercury__string__parse_runtime__STATE_VARIABLE_Chars_22_22;
#line 199 "string.parse_runtime.m"
            if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 200 "string.parse_runtime.m"
              {
#line 200 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_24_24;
#line 200 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_25_25;

#line 201 "string.parse_runtime.m"
                *mercury__string__parse_runtime__MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "string.parse_runtime.m"
                {
#line 202 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "string.parse_runtime.m"
                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 202 "string.parse_runtime.m"
                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_24_24, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_10));
#line 202 "string.parse_runtime.m"
                }
#line 202 "string.parse_runtime.m"
                mercury__string__parse_runtime__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "string.parse_runtime.m"
                {
#line 202 "string.parse_runtime.m"
                  MR_Word base;
#line 202 "string.parse_runtime.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "string.parse_runtime.m"
                  *mercury__string__parse_runtime__Errors_12 = base;
#line 202 "string.parse_runtime.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__V_24_24));
#line 202 "string.parse_runtime.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_runtime__V_25_25));
#line 202 "string.parse_runtime.m"
                }
#line 200 "string.parse_runtime.m"
                *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_19 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18;
#line 200 "string.parse_runtime.m"
              }
#line 199 "string.parse_runtime.m"
            else
#line 190 "string.parse_runtime.m"
              {
#line 190 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__PolyType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18, (MR_Integer) 0)));
#line 194 "string.parse_runtime.m"
                MR_Integer mercury__string__parse_runtime__PolyPrec_14;

#line 190 "string.parse_runtime.m"
                *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18, (MR_Integer) 1)));
#line 191 "string.parse_runtime.m"
                mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__PolyType_13)) == (MR_mktag((MR_Integer) 1)));
#line 191 "string.parse_runtime.m"
                if (mercury__string__parse_runtime__succeeded)
#line 191 "string.parse_runtime.m"
                  {
#line 191 "string.parse_runtime.m"
                    mercury__string__parse_runtime__PolyPrec_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__PolyType_13, (MR_Integer) 0)));
#line 192 "string.parse_runtime.m"
                    {
#line 192 "string.parse_runtime.m"
                      MR_Word base;
#line 192 "string.parse_runtime.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 192 "string.parse_runtime.m"
                      *mercury__string__parse_runtime__MaybePrec_11 = base;
#line 192 "string.parse_runtime.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__PolyPrec_14));
#line 192 "string.parse_runtime.m"
                    }
#line 193 "string.parse_runtime.m"
                    *mercury__string__parse_runtime__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 191 "string.parse_runtime.m"
                  }
#line 191 "string.parse_runtime.m"
                else
#line 195 "string.parse_runtime.m"
                  {
#line 195 "string.parse_runtime.m"
                    MR_Word mercury__string__parse_runtime__V_27_27;
#line 195 "string.parse_runtime.m"
                    MR_Word mercury__string__parse_runtime__V_28_28;
#line 195 "string.parse_runtime.m"
                    MR_Word mercury__string__parse_runtime__V_29_29;

#line 195 "string.parse_runtime.m"
                    *mercury__string__parse_runtime__MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 401 "string.parse_runtime.m"
#line 401 "string.parse_runtime.m"
                    switch (MR_tag((MR_Word) mercury__string__parse_runtime__PolyType_13)) {
#line 401 "string.parse_runtime.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 401 "string.parse_runtime.m"
                      case (MR_Integer) 0:
#line 404 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_28_28 = (MR_Integer) 3;
#line 401 "string.parse_runtime.m"
                        break;
#line 401 "string.parse_runtime.m"
                      case (MR_Integer) 1:
#line 403 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_28_28 = (MR_Integer) 2;
#line 401 "string.parse_runtime.m"
                        break;
#line 401 "string.parse_runtime.m"
                      case (MR_Integer) 2:
#line 402 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_28_28 = (MR_Integer) 1;
#line 401 "string.parse_runtime.m"
                        break;
#line 401 "string.parse_runtime.m"
                      case (MR_Integer) 3:
#line 401 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_28_28 = (MR_Integer) 0;
#line 401 "string.parse_runtime.m"
                        break;
#line 401 "string.parse_runtime.m"
                    }
#line 196 "string.parse_runtime.m"
                    {
#line 196 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 196 "string.parse_runtime.m"
                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 196 "string.parse_runtime.m"
                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_27_27, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_10));
#line 196 "string.parse_runtime.m"
                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_27_27, 2) = ((MR_Box) (mercury__string__parse_runtime__V_28_28));
#line 196 "string.parse_runtime.m"
                    }
#line 197 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 197 "string.parse_runtime.m"
                    {
#line 197 "string.parse_runtime.m"
                      MR_Word base;
#line 197 "string.parse_runtime.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "string.parse_runtime.m"
                      *mercury__string__parse_runtime__Errors_12 = base;
#line 197 "string.parse_runtime.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__V_27_27));
#line 197 "string.parse_runtime.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_runtime__V_29_29));
#line 197 "string.parse_runtime.m"
                    }
#line 195 "string.parse_runtime.m"
                  }
#line 190 "string.parse_runtime.m"
              }
#line 199 "string.parse_runtime.m"
          }
#line 204 "string.parse_runtime.m"
        else
#line 206 "string.parse_runtime.m"
          {
#line 206 "string.parse_runtime.m"
            MR_Integer mercury__string__parse_runtime__Prec_15;

#line 21 "string.parse_util.opt"
            {
#line 21 "string.parse_util.opt"
              mercury__string__parse_util__get_number_prefix_loop_4_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_20, mercury__string__parse_runtime__STATE_VARIABLE_Chars_17, (MR_Integer) 0, &mercury__string__parse_runtime__Prec_15);
            }
#line 207 "string.parse_runtime.m"
            {
#line 207 "string.parse_runtime.m"
              MR_Word base;
#line 207 "string.parse_runtime.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 207 "string.parse_runtime.m"
              *mercury__string__parse_runtime__MaybePrec_11 = base;
#line 207 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__Prec_15));
#line 207 "string.parse_runtime.m"
            }
#line 208 "string.parse_runtime.m"
            *mercury__string__parse_runtime__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 206 "string.parse_runtime.m"
            *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_19 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18;
#line 206 "string.parse_runtime.m"
          }
#line 204 "string.parse_runtime.m"
      }
#line 210 "string.parse_runtime.m"
    else
#line 211 "string.parse_runtime.m"
      {
#line 211 "string.parse_runtime.m"
        *mercury__string__parse_runtime__MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 212 "string.parse_runtime.m"
        *mercury__string__parse_runtime__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 211 "string.parse_runtime.m"
        *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_19 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18;
#line 211 "string.parse_runtime.m"
        *mercury__string__parse_runtime__STATE_VARIABLE_Chars_17 = mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_16;
#line 211 "string.parse_runtime.m"
      }
#line 210 "string.parse_runtime.m"
  }
#line 182 "string.parse_runtime.m"
}

#line 135 "string.parse_runtime.m"
static void MR_CALL 
mercury__string__parse_runtime__parse_conversion_specification_7_p_0(
#line 135 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_20,
#line 135 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_Chars_21,
#line 135 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22,
#line 135 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_23,
#line 135 "string.parse_runtime.m"
  MR_Integer mercury__string__parse_runtime__SpecNum_10,
#line 135 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Spec_11,
#line 135 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Errors_12)
#line 135 "string.parse_runtime.m"
{
#line 139 "string.parse_runtime.m"
  {
#line 139 "string.parse_runtime.m"
    MR_bool mercury__string__parse_runtime__succeeded;
#line 139 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__TypeCtorInfo_37_37;
#line 139 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__Flags0_13 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[0];
#line 139 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__Flags_14;
#line 139 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__MaybeWidth_15;
#line 139 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__WidthErrors_16;
#line 139 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__MaybePrec_17;
#line 139 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__PrecErrors_18;
#line 139 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__SpecErrors_19;
#line 139 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29;
#line 139 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_30;
#line 139 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_31;
#line 139 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_32_32;
#line 139 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_33_33;
#line 139 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__V_36_36;
#line 172 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_50;
#line 156 "string.parse_runtime.m"
    MR_Char mercury__string__parse_runtime__V_51_51;

#line 142 "string.parse_runtime.m"
    {
#line 142 "string.parse_runtime.m"
      mercury__string__parse_util__gather_flag_chars_4_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_20, &mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29, mercury__string__parse_runtime__Flags0_13, &mercury__string__parse_runtime__Flags_14);
    }
#line 156 "string.parse_runtime.m"
    mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 156 "string.parse_runtime.m"
    if (mercury__string__parse_runtime__succeeded)
#line 156 "string.parse_runtime.m"
      {
#line 156 "string.parse_runtime.m"
        mercury__string__parse_runtime__V_51_51 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29, (MR_Integer) 0)));
#line 156 "string.parse_runtime.m"
        mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29, (MR_Integer) 1)));
#line 156 "string.parse_runtime.m"
        mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_51_51 == (MR_Char) 42);
#line 156 "string.parse_runtime.m"
      }
#line 172 "string.parse_runtime.m"
    if (mercury__string__parse_runtime__succeeded)
#line 167 "string.parse_runtime.m"
      {
#line 167 "string.parse_runtime.m"
        mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_30 = mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_50;
#line 167 "string.parse_runtime.m"
        if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 168 "string.parse_runtime.m"
          {
#line 168 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_52_52;
#line 168 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_53_53;

#line 169 "string.parse_runtime.m"
            mercury__string__parse_runtime__MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "string.parse_runtime.m"
            {
#line 170 "string.parse_runtime.m"
              mercury__string__parse_runtime__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 170 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_52_52, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_10));
#line 170 "string.parse_runtime.m"
            }
#line 170 "string.parse_runtime.m"
            mercury__string__parse_runtime__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "string.parse_runtime.m"
            {
#line 170 "string.parse_runtime.m"
              mercury__string__parse_runtime__WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__WidthErrors_16, 0) = ((MR_Box) (mercury__string__parse_runtime__V_52_52));
#line 170 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__WidthErrors_16, 1) = ((MR_Box) (mercury__string__parse_runtime__V_53_53));
#line 170 "string.parse_runtime.m"
            }
#line 168 "string.parse_runtime.m"
            mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_31 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22;
#line 168 "string.parse_runtime.m"
          }
#line 167 "string.parse_runtime.m"
        else
#line 158 "string.parse_runtime.m"
          {
#line 158 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__PolyType_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22, (MR_Integer) 0)));
#line 162 "string.parse_runtime.m"
            MR_Integer mercury__string__parse_runtime__PolyWidth_48;

#line 158 "string.parse_runtime.m"
            mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22, (MR_Integer) 1)));
#line 159 "string.parse_runtime.m"
            mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__PolyType_47)) == (MR_mktag((MR_Integer) 1)));
#line 159 "string.parse_runtime.m"
            if (mercury__string__parse_runtime__succeeded)
#line 159 "string.parse_runtime.m"
              {
#line 159 "string.parse_runtime.m"
                mercury__string__parse_runtime__PolyWidth_48 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__PolyType_47, (MR_Integer) 0)));
#line 160 "string.parse_runtime.m"
                {
#line 160 "string.parse_runtime.m"
                  mercury__string__parse_runtime__MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 160 "string.parse_runtime.m"
                  MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__MaybeWidth_15, 0) = ((MR_Box) (mercury__string__parse_runtime__PolyWidth_48));
#line 160 "string.parse_runtime.m"
                }
#line 161 "string.parse_runtime.m"
                mercury__string__parse_runtime__WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 159 "string.parse_runtime.m"
              }
#line 159 "string.parse_runtime.m"
            else
#line 163 "string.parse_runtime.m"
              {
#line 163 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_55_55;
#line 163 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_56_56;
#line 163 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_57_57;

#line 163 "string.parse_runtime.m"
                mercury__string__parse_runtime__MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 401 "string.parse_runtime.m"
#line 401 "string.parse_runtime.m"
                switch (MR_tag((MR_Word) mercury__string__parse_runtime__PolyType_47)) {
#line 401 "string.parse_runtime.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 401 "string.parse_runtime.m"
                  case (MR_Integer) 0:
#line 404 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_56_56 = (MR_Integer) 3;
#line 401 "string.parse_runtime.m"
                    break;
#line 401 "string.parse_runtime.m"
                  case (MR_Integer) 1:
#line 403 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_56_56 = (MR_Integer) 2;
#line 401 "string.parse_runtime.m"
                    break;
#line 401 "string.parse_runtime.m"
                  case (MR_Integer) 2:
#line 402 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_56_56 = (MR_Integer) 1;
#line 401 "string.parse_runtime.m"
                    break;
#line 401 "string.parse_runtime.m"
                  case (MR_Integer) 3:
#line 401 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_56_56 = (MR_Integer) 0;
#line 401 "string.parse_runtime.m"
                    break;
#line 401 "string.parse_runtime.m"
                }
#line 164 "string.parse_runtime.m"
                {
#line 164 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 164 "string.parse_runtime.m"
                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 164 "string.parse_runtime.m"
                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_55_55, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_10));
#line 164 "string.parse_runtime.m"
                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_55_55, 2) = ((MR_Box) (mercury__string__parse_runtime__V_56_56));
#line 164 "string.parse_runtime.m"
                }
#line 165 "string.parse_runtime.m"
                mercury__string__parse_runtime__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 165 "string.parse_runtime.m"
                {
#line 165 "string.parse_runtime.m"
                  mercury__string__parse_runtime__WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "string.parse_runtime.m"
                  MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__WidthErrors_16, 0) = ((MR_Box) (mercury__string__parse_runtime__V_55_55));
#line 165 "string.parse_runtime.m"
                  MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__WidthErrors_16, 1) = ((MR_Box) (mercury__string__parse_runtime__V_57_57));
#line 165 "string.parse_runtime.m"
                }
#line 163 "string.parse_runtime.m"
              }
#line 158 "string.parse_runtime.m"
          }
#line 167 "string.parse_runtime.m"
      }
#line 172 "string.parse_runtime.m"
    else
#line 175 "string.parse_runtime.m"
      {
#line 175 "string.parse_runtime.m"
        MR_Integer mercury__string__parse_runtime__Width_49;
#line 175 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_28_58;

#line 172 "string.parse_runtime.m"
        {
#line 172 "string.parse_runtime.m"
          mercury__string__parse_runtime__succeeded = mercury__string__parse_util__get_nonzero_number_prefix_3_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29, &mercury__string__parse_runtime__STATE_VARIABLE_Chars_28_58, &mercury__string__parse_runtime__Width_49);
        }
#line 175 "string.parse_runtime.m"
        if (mercury__string__parse_runtime__succeeded)
#line 173 "string.parse_runtime.m"
          {
#line 173 "string.parse_runtime.m"
            mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_30 = mercury__string__parse_runtime__STATE_VARIABLE_Chars_28_58;
#line 173 "string.parse_runtime.m"
            {
#line 173 "string.parse_runtime.m"
              mercury__string__parse_runtime__MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 173 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__MaybeWidth_15, 0) = ((MR_Box) (mercury__string__parse_runtime__Width_49));
#line 173 "string.parse_runtime.m"
            }
#line 174 "string.parse_runtime.m"
            mercury__string__parse_runtime__WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 173 "string.parse_runtime.m"
          }
#line 175 "string.parse_runtime.m"
        else
#line 176 "string.parse_runtime.m"
          {
#line 176 "string.parse_runtime.m"
            mercury__string__parse_runtime__MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 177 "string.parse_runtime.m"
            mercury__string__parse_runtime__WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 176 "string.parse_runtime.m"
            mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_30 = mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29;
#line 176 "string.parse_runtime.m"
          }
#line 175 "string.parse_runtime.m"
        mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_31 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22;
#line 175 "string.parse_runtime.m"
      }
#line 144 "string.parse_runtime.m"
    {
#line 144 "string.parse_runtime.m"
      mercury__string__parse_runtime__get_optional_prec_7_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_30, &mercury__string__parse_runtime__STATE_VARIABLE_Chars_32_32, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_31, &mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_33_33, mercury__string__parse_runtime__SpecNum_10, &mercury__string__parse_runtime__MaybePrec_17, &mercury__string__parse_runtime__PrecErrors_18);
    }
#line 145 "string.parse_runtime.m"
    {
#line 145 "string.parse_runtime.m"
      mercury__string__parse_runtime__get_first_spec_10_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_32_32, mercury__string__parse_runtime__STATE_VARIABLE_Chars_21, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_33_33, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_23, mercury__string__parse_runtime__Flags_14, mercury__string__parse_runtime__MaybeWidth_15, mercury__string__parse_runtime__MaybePrec_17, mercury__string__parse_runtime__SpecNum_10, mercury__string__parse_runtime__Spec_11, &mercury__string__parse_runtime__SpecErrors_19);
    }
#line 5021 "string.parse_runtime.c"
    mercury__string__parse_runtime__TypeCtorInfo_37_37 = (MR_Word) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0;
#line 56 "list.opt"
    {
#line 56 "list.opt"
      mercury__list__append_3_p_1(mercury__string__parse_runtime__TypeCtorInfo_37_37, mercury__string__parse_runtime__PrecErrors_18, mercury__string__parse_runtime__SpecErrors_19, &mercury__string__parse_runtime__V_36_36);
    }
#line 56 "list.opt"
    {
#line 56 "list.opt"
      mercury__list__append_3_p_1(mercury__string__parse_runtime__TypeCtorInfo_37_37, mercury__string__parse_runtime__WidthErrors_16, mercury__string__parse_runtime__V_36_36, mercury__string__parse_runtime__Errors_12);
#line 56 "list.opt"
      return;
    }
#line 139 "string.parse_runtime.m"
  }
#line 135 "string.parse_runtime.m"
}

#line 75 "string.parse_runtime.m"
void MR_CALL 
mercury__string__parse_runtime__parse_format_string_5_p_0(
#line 75 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_27,
#line 75 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_28,
#line 75 "string.parse_runtime.m"
  MR_Integer mercury__string__parse_runtime__SpecNum_8,
#line 75 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Specs_9,
#line 75 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Errors_10)
#line 75 "string.parse_runtime.m"
{
#line 90 "string.parse_runtime.m"
  {
#line 90 "string.parse_runtime.m"
    MR_bool mercury__string__parse_runtime__succeeded;
#line 90 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__NonConversionSpecChars_11;
#line 90 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__GatherEndedBy_12;
#line 90 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__Specs0_13;

#line 91 "string.parse_runtime.m"
    {
#line 91 "string.parse_runtime.m"
      mercury__string__parse_util__gather_non_percent_chars_3_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_27, &mercury__string__parse_runtime__NonConversionSpecChars_11, &mercury__string__parse_runtime__GatherEndedBy_12);
    }
#line 103 "string.parse_runtime.m"
    if ((mercury__string__parse_runtime__GatherEndedBy_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 93 "string.parse_runtime.m"
      {
#line 94 "string.parse_runtime.m"
        mercury__string__parse_runtime__Specs0_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 98 "string.parse_runtime.m"
        if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 97 "string.parse_runtime.m"
          *mercury__string__parse_runtime__Errors_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 98 "string.parse_runtime.m"
        else
#line 99 "string.parse_runtime.m"
          {
#line 99 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__TypeCtorInfo_38_38 = (MR_Word) &mercury__string__string__type_ctor_info_poly_type_0;
#line 99 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__Error_16;
#line 99 "string.parse_runtime.m"
            MR_Integer mercury__string__parse_runtime__V_34_34;
#line 99 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_35_35;

#line 91 "list.opt"
            {
#line 91 "list.opt"
              mercury__list__length_acc_3_p_0(mercury__string__parse_runtime__TypeCtorInfo_38_38, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_28, (MR_Integer) 0, &mercury__string__parse_runtime__V_34_34);
            }
#line 100 "string.parse_runtime.m"
            {
#line 100 "string.parse_runtime.m"
              mercury__string__parse_runtime__Error_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 100 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 100 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_16, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 100 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_16, 2) = ((MR_Box) (mercury__string__parse_runtime__V_34_34));
#line 100 "string.parse_runtime.m"
            }
#line 101 "string.parse_runtime.m"
            mercury__string__parse_runtime__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 101 "string.parse_runtime.m"
            {
#line 101 "string.parse_runtime.m"
              MR_Word base;
#line 101 "string.parse_runtime.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 101 "string.parse_runtime.m"
              *mercury__string__parse_runtime__Errors_10 = base;
#line 101 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_16));
#line 101 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_runtime__V_35_35));
#line 101 "string.parse_runtime.m"
            }
#line 99 "string.parse_runtime.m"
          }
#line 93 "string.parse_runtime.m"
      }
#line 103 "string.parse_runtime.m"
    else
#line 104 "string.parse_runtime.m"
      {
#line 104 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__HeadSpec_17;
#line 104 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__HeadErrors_18;
#line 104 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__TailSpecs_19;
#line 104 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__TailErrors_20;
#line 104 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__GatherEndedBy_12, (MR_Integer) 0)));
#line 104 "string.parse_runtime.m"
        MR_Integer mercury__string__parse_runtime__V_32_32;
#line 104 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_36;
#line 104 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_37;

#line 105 "string.parse_runtime.m"
        {
#line 105 "string.parse_runtime.m"
          mercury__string__parse_runtime__parse_conversion_specification_7_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29, &mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_36, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_28, &mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_37, mercury__string__parse_runtime__SpecNum_8, &mercury__string__parse_runtime__HeadSpec_17, &mercury__string__parse_runtime__HeadErrors_18);
        }
#line 107 "string.parse_runtime.m"
        mercury__string__parse_runtime__V_32_32 = (mercury__string__parse_runtime__SpecNum_8 + (MR_Integer) 1);
#line 107 "string.parse_runtime.m"
        {
#line 107 "string.parse_runtime.m"
          mercury__string__parse_runtime__parse_format_string_5_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_36, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_37, mercury__string__parse_runtime__V_32_32, &mercury__string__parse_runtime__TailSpecs_19, &mercury__string__parse_runtime__TailErrors_20);
        }
#line 113 "string.parse_runtime.m"
        if ((mercury__string__parse_runtime__HeadErrors_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 110 "string.parse_runtime.m"
          {
#line 111 "string.parse_runtime.m"
            {
#line 111 "string.parse_runtime.m"
              mercury__string__parse_runtime__Specs0_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__Specs0_13, 0) = ((MR_Box) (mercury__string__parse_runtime__HeadSpec_17));
#line 111 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__Specs0_13, 1) = ((MR_Box) (mercury__string__parse_runtime__TailSpecs_19));
#line 111 "string.parse_runtime.m"
            }
#line 112 "string.parse_runtime.m"
            *mercury__string__parse_runtime__Errors_10 = mercury__string__parse_runtime__TailErrors_20;
#line 110 "string.parse_runtime.m"
          }
#line 113 "string.parse_runtime.m"
        else
#line 114 "string.parse_runtime.m"
          {
#line 114 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__TypeCtorInfo_39_39;

#line 115 "string.parse_runtime.m"
            mercury__string__parse_runtime__Specs0_13 = mercury__string__parse_runtime__TailSpecs_19;
#line 5191 "string.parse_runtime.c"
            mercury__string__parse_runtime__TypeCtorInfo_39_39 = (MR_Word) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0;
#line 56 "list.opt"
            {
#line 56 "list.opt"
              mercury__list__append_3_p_1(mercury__string__parse_runtime__TypeCtorInfo_39_39, mercury__string__parse_runtime__HeadErrors_18, mercury__string__parse_runtime__TailErrors_20, mercury__string__parse_runtime__Errors_10);
            }
#line 114 "string.parse_runtime.m"
          }
#line 104 "string.parse_runtime.m"
      }
#line 122 "string.parse_runtime.m"
    if ((mercury__string__parse_runtime__NonConversionSpecChars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 121 "string.parse_runtime.m"
      *mercury__string__parse_runtime__Specs_9 = mercury__string__parse_runtime__Specs0_13;
#line 122 "string.parse_runtime.m"
    else
#line 123 "string.parse_runtime.m"
      {
#line 123 "string.parse_runtime.m"
        MR_String mercury__string__parse_runtime__NonConversionSpecString_25;
#line 123 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__StringSpec_26;

#line 124 "string.opt"
        {
#line 124 "string.opt"
          mercury__string__from_char_list_2_p_0(mercury__string__parse_runtime__NonConversionSpecChars_11, &mercury__string__parse_runtime__NonConversionSpecString_25);
        }
#line 126 "string.parse_runtime.m"
        {
#line 126 "string.parse_runtime.m"
          mercury__string__parse_runtime__StringSpec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 126 "string.parse_runtime.m"
          MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__StringSpec_26, 0) = ((MR_Box) (mercury__string__parse_runtime__NonConversionSpecString_25));
#line 126 "string.parse_runtime.m"
        }
#line 127 "string.parse_runtime.m"
        {
#line 127 "string.parse_runtime.m"
          MR_Word base;
#line 127 "string.parse_runtime.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 127 "string.parse_runtime.m"
          *mercury__string__parse_runtime__Specs_9 = base;
#line 127 "string.parse_runtime.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__StringSpec_26));
#line 127 "string.parse_runtime.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_runtime__Specs0_13));
#line 127 "string.parse_runtime.m"
        }
#line 123 "string.parse_runtime.m"
      }
#line 90 "string.parse_runtime.m"
  }
#line 75 "string.parse_runtime.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module string.parse_runtime. */
