/*
** Automatically generated from `string.parse_runtime.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__parse_runtime__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 402 "string.parse_runtime.m"
static MR_Word MR_CALL 
mercury__string__parse_runtime__poly_type_to_kind_1_f_0(
#line 402 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__1_1);

#line 234 "string.parse_runtime.m"
static void MR_CALL 
mercury__string__parse_runtime__get_first_spec_10_p_0(
#line 234 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_1,
#line 234 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_Chars_2,
#line 234 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3,
#line 234 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_4,
#line 234 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__5_5,
#line 234 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__6_6,
#line 234 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__7_7,
#line 234 "string.parse_runtime.m"
  MR_Integer mercury__string__parse_runtime__SpecNum_8,
#line 234 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Spec_9,
#line 234 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Errors_10);

#line 185 "string.parse_runtime.m"
static void MR_CALL 
mercury__string__parse_runtime__get_optional_prec_7_p_0(
#line 185 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_16,
#line 185 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_Chars_17,
#line 185 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18,
#line 185 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_19,
#line 185 "string.parse_runtime.m"
  MR_Integer mercury__string__parse_runtime__SpecNum_10,
#line 185 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__MaybePrec_11,
#line 185 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Errors_12);

#line 138 "string.parse_runtime.m"
static void MR_CALL 
mercury__string__parse_runtime__parse_conversion_specification_7_p_0(
#line 138 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_20,
#line 138 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_Chars_21,
#line 138 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22,
#line 138 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_23,
#line 138 "string.parse_runtime.m"
  MR_Integer mercury__string__parse_runtime__SpecNum_10,
#line 138 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Spec_11,
#line 138 "string.parse_runtime.m"
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
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"



#line 477 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 482 "string.parse_runtime.c"
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

#line 497 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_1[3] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 504 "string.parse_runtime.c"
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

#line 519 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_2[4] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 527 "string.parse_runtime.c"
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

#line 542 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_3[4] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 550 "string.parse_runtime.c"
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

#line 565 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_4[5] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_int_base_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 574 "string.parse_runtime.c"
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

#line 589 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_5[5] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_float_kind_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 598 "string.parse_runtime.c"
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

#line 613 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_0[1] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_0
};

#line 618 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_1[1] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_1
};

#line 623 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_2[1] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_2
};

#line 628 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_3[3] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_3,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_4,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_5
};

#line 635 "string.parse_runtime.c"
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

#line 659 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_name_ordered_string_format_spec_0[6] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_1,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_0,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_5,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_3,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_2,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_4
};

#line 669 "string.parse_runtime.c"
static const MR_Integer mercury__string__parse_runtime__string__parse_runtime__functor_number_map_string_format_spec_0[6] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 2
};

#line 679 "string.parse_runtime.c"
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

#line 696 "string.parse_runtime.c"
static MR_bool MR_CALL 
mercury__string__parse_runtime____Unify____string_format_spec_0_0_10001(
#line 699 "string.parse_runtime.c"
  MR_Box mercury__string__parse_runtime__wrapper_arg_1,
#line 701 "string.parse_runtime.c"
  MR_Box mercury__string__parse_runtime__wrapper_arg_2)
#line 703 "string.parse_runtime.c"
{
#line 705 "string.parse_runtime.c"
  {
#line 707 "string.parse_runtime.c"
    MR_bool mercury__string__parse_runtime__succeeded;

#line 710 "string.parse_runtime.c"
    {
#line 712 "string.parse_runtime.c"
      mercury__string__parse_runtime__succeeded = mercury__string__parse_runtime____Unify____string_format_spec_0_0(((MR_Word) mercury__string__parse_runtime__wrapper_arg_1), ((MR_Word) mercury__string__parse_runtime__wrapper_arg_2));
    }
#line 715 "string.parse_runtime.c"
    return mercury__string__parse_runtime__succeeded;
#line 717 "string.parse_runtime.c"
  }
#line 719 "string.parse_runtime.c"
}

#line 722 "string.parse_runtime.c"
static void MR_CALL 
mercury__string__parse_runtime____Compare____string_format_spec_0_0_10001(
#line 725 "string.parse_runtime.c"
  MR_Box * mercury__string__parse_runtime__wrapper_arg_1,
#line 727 "string.parse_runtime.c"
  MR_Box mercury__string__parse_runtime__wrapper_arg_2,
#line 729 "string.parse_runtime.c"
  MR_Box mercury__string__parse_runtime__wrapper_arg_3)
#line 731 "string.parse_runtime.c"
{
#line 733 "string.parse_runtime.c"
  {
#line 735 "string.parse_runtime.c"
    MR_Word mercury__string__parse_runtime__conv0_HeadVar__1_1;

#line 738 "string.parse_runtime.c"
    {
#line 740 "string.parse_runtime.c"
      mercury__string__parse_runtime____Compare____string_format_spec_0_0(&mercury__string__parse_runtime__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_runtime__wrapper_arg_2), ((MR_Word) mercury__string__parse_runtime__wrapper_arg_3));
    }
#line 743 "string.parse_runtime.c"
    *mercury__string__parse_runtime__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_runtime__conv0_HeadVar__1_1));
#line 745 "string.parse_runtime.c"
  }
#line 747 "string.parse_runtime.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__parse_runtime__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__string__parse_runtime__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
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
#line 791 "string.parse_runtime.c"
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
                  MR_Integer mercury__string__parse_runtime__Res_7_342;

#line 96 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__parse_runtime__V_311_311 ;
	S2 =  mercury__string__parse_runtime__V_5_5 ;
		{
#line 96 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 836 "string.parse_runtime.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_runtime__Res_7_342  = Res;
#line 96 "private_builtin.opt"
}
#line 68 "private_builtin.opt"
                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__Res_7_342 < (MR_Integer) 0);
#line 71 "private_builtin.opt"
                  if (mercury__string__parse_runtime__succeeded)
#line 70 "private_builtin.opt"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 71 "private_builtin.opt"
                  else
#line 76 "private_builtin.opt"
                    {
#line 73 "private_builtin.opt"
                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__Res_7_342 == (MR_Integer) 0);
#line 76 "private_builtin.opt"
                      if (mercury__string__parse_runtime__succeeded)
#line 75 "private_builtin.opt"
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
#line 76 "private_builtin.opt"
                      else
#line 77 "private_builtin.opt"
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "private_builtin.opt"
                    }
#line 26 "string.parse_runtime.m"
                }
#line 26 "string.parse_runtime.m"
                break;
#line 26 "string.parse_runtime.m"
              case (MR_Integer) 1:
#line 871 "string.parse_runtime.c"
                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                break;
#line 26 "string.parse_runtime.m"
              case (MR_Integer) 2:
#line 877 "string.parse_runtime.c"
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
#line 890 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 1:
#line 896 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 2:
#line 902 "string.parse_runtime.c"
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
#line 934 "string.parse_runtime.c"
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
#line 956 "string.parse_runtime.c"
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
#line 976 "string.parse_runtime.c"
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
                          MR_Integer mercury__string__parse_runtime__XI_7_337;
#line 26 "string.parse_runtime.m"
                          MR_Integer mercury__string__parse_runtime__YI_8_338;

#line 32 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_runtime__V_308_308 ;
		{
#line 32 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 1006 "string.parse_runtime.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_runtime__XI_7_337  = Int;
#line 32 "char.opt"
}
#line 32 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_runtime__V_41_41 ;
		{
#line 32 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 1026 "string.parse_runtime.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_runtime__YI_8_338  = Int;
#line 32 "char.opt"
}
#line 50 "private_builtin.opt"
                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__XI_7_337 < mercury__string__parse_runtime__YI_8_338);
#line 53 "private_builtin.opt"
                          if (mercury__string__parse_runtime__succeeded)
#line 52 "private_builtin.opt"
                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 53 "private_builtin.opt"
                          else
#line 58 "private_builtin.opt"
                            {
#line 55 "private_builtin.opt"
                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__XI_7_337 == mercury__string__parse_runtime__YI_8_338);
#line 58 "private_builtin.opt"
                              if (mercury__string__parse_runtime__succeeded)
#line 57 "private_builtin.opt"
                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
#line 58 "private_builtin.opt"
                              else
#line 59 "private_builtin.opt"
                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 58 "private_builtin.opt"
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
#line 1065 "string.parse_runtime.c"
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
#line 1078 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 1:
#line 1084 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 2:
#line 1090 "string.parse_runtime.c"
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
#line 1124 "string.parse_runtime.c"
                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                break;
#line 26 "string.parse_runtime.m"
              case (MR_Integer) 1:
#line 1130 "string.parse_runtime.c"
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
#line 1154 "string.parse_runtime.c"
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
#line 1174 "string.parse_runtime.c"
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
#line 1194 "string.parse_runtime.c"
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
                              MR_Integer mercury__string__parse_runtime__Res_7_356;

#line 96 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__parse_runtime__V_321_321 ;
	S2 =  mercury__string__parse_runtime__V_93_93 ;
		{
#line 96 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 1224 "string.parse_runtime.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_runtime__Res_7_356  = Res;
#line 96 "private_builtin.opt"
}
#line 68 "private_builtin.opt"
                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__Res_7_356 < (MR_Integer) 0);
#line 71 "private_builtin.opt"
                              if (mercury__string__parse_runtime__succeeded)
#line 70 "private_builtin.opt"
                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 71 "private_builtin.opt"
                              else
#line 76 "private_builtin.opt"
                                {
#line 73 "private_builtin.opt"
                                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__Res_7_356 == (MR_Integer) 0);
#line 76 "private_builtin.opt"
                                  if (mercury__string__parse_runtime__succeeded)
#line 75 "private_builtin.opt"
                                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
#line 76 "private_builtin.opt"
                                  else
#line 77 "private_builtin.opt"
                                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "private_builtin.opt"
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
#line 1272 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 1:
#line 1278 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 2:
#line 1284 "string.parse_runtime.c"
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
#line 1325 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 1:
#line 1331 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 2:
#line 1337 "string.parse_runtime.c"
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
#line 1368 "string.parse_runtime.c"
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
#line 1388 "string.parse_runtime.c"
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
#line 1408 "string.parse_runtime.c"
                                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_153_153 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                                  if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                                    *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_153_153;
#line 26 "string.parse_runtime.m"
                                  else
#line 35 "private_builtin.opt"
                                    {
#line 32 "private_builtin.opt"
                                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_317_317 < mercury__string__parse_runtime__V_150_150);
#line 35 "private_builtin.opt"
                                      if (mercury__string__parse_runtime__succeeded)
#line 34 "private_builtin.opt"
                                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                                      else
#line 40 "private_builtin.opt"
                                        {
#line 37 "private_builtin.opt"
                                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_317_317 == mercury__string__parse_runtime__V_150_150);
#line 40 "private_builtin.opt"
                                          if (mercury__string__parse_runtime__succeeded)
#line 39 "private_builtin.opt"
                                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                                          else
#line 41 "private_builtin.opt"
                                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                                        }
#line 35 "private_builtin.opt"
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
#line 1454 "string.parse_runtime.c"
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                        break;
#line 26 "string.parse_runtime.m"
                      case (MR_Integer) 2:
#line 1460 "string.parse_runtime.c"
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
#line 1496 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 1:
#line 1502 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 2:
#line 1508 "string.parse_runtime.c"
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
#line 1521 "string.parse_runtime.c"
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
#line 1547 "string.parse_runtime.c"
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
#line 1567 "string.parse_runtime.c"
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
#line 1587 "string.parse_runtime.c"
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

#line 32 "private_builtin.opt"
                                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_332_332 < mercury__string__parse_runtime__V_333_333);
#line 35 "private_builtin.opt"
                                      if (mercury__string__parse_runtime__succeeded)
#line 34 "private_builtin.opt"
                                        mercury__string__parse_runtime__V_217_217 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                                      else
#line 40 "private_builtin.opt"
                                        {
#line 37 "private_builtin.opt"
                                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_332_332 == mercury__string__parse_runtime__V_333_333);
#line 40 "private_builtin.opt"
                                          if (mercury__string__parse_runtime__succeeded)
#line 39 "private_builtin.opt"
                                            mercury__string__parse_runtime__V_217_217 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                                          else
#line 41 "private_builtin.opt"
                                            mercury__string__parse_runtime__V_217_217 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                                        }
#line 1628 "string.parse_runtime.c"
                                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_217_217 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                                      if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                                        *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_217_217;
#line 26 "string.parse_runtime.m"
                                      else
#line 35 "private_builtin.opt"
                                        {
#line 32 "private_builtin.opt"
                                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_325_325 < mercury__string__parse_runtime__V_213_213);
#line 35 "private_builtin.opt"
                                          if (mercury__string__parse_runtime__succeeded)
#line 34 "private_builtin.opt"
                                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                                          else
#line 40 "private_builtin.opt"
                                            {
#line 37 "private_builtin.opt"
                                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_325_325 == mercury__string__parse_runtime__V_213_213);
#line 40 "private_builtin.opt"
                                              if (mercury__string__parse_runtime__succeeded)
#line 39 "private_builtin.opt"
                                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                                              else
#line 41 "private_builtin.opt"
                                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                                            }
#line 35 "private_builtin.opt"
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
#line 1676 "string.parse_runtime.c"
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
#line 1712 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 1:
#line 1718 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                    break;
#line 26 "string.parse_runtime.m"
                  case (MR_Integer) 2:
#line 1724 "string.parse_runtime.c"
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
#line 1737 "string.parse_runtime.c"
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                        break;
#line 26 "string.parse_runtime.m"
                      case (MR_Integer) 1:
#line 1743 "string.parse_runtime.c"
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
#line 1769 "string.parse_runtime.c"
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
#line 1789 "string.parse_runtime.c"
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
#line 1809 "string.parse_runtime.c"
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

#line 32 "private_builtin.opt"
                                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_330_330 < mercury__string__parse_runtime__V_331_331);
#line 35 "private_builtin.opt"
                                      if (mercury__string__parse_runtime__succeeded)
#line 34 "private_builtin.opt"
                                        mercury__string__parse_runtime__V_283_283 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                                      else
#line 40 "private_builtin.opt"
                                        {
#line 37 "private_builtin.opt"
                                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_330_330 == mercury__string__parse_runtime__V_331_331);
#line 40 "private_builtin.opt"
                                          if (mercury__string__parse_runtime__succeeded)
#line 39 "private_builtin.opt"
                                            mercury__string__parse_runtime__V_283_283 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                                          else
#line 41 "private_builtin.opt"
                                            mercury__string__parse_runtime__V_283_283 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                                        }
#line 1850 "string.parse_runtime.c"
                                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_283_283 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                                      if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                                        *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_283_283;
#line 26 "string.parse_runtime.m"
                                      else
#line 87 "private_builtin.opt"
                                        {
#line 84 "private_builtin.opt"
                                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_312_312 < mercury__string__parse_runtime__V_279_279);
#line 87 "private_builtin.opt"
                                          if (mercury__string__parse_runtime__succeeded)
#line 86 "private_builtin.opt"
                                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 87 "private_builtin.opt"
                                          else
#line 92 "private_builtin.opt"
                                            {
#line 89 "private_builtin.opt"
                                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_312_312 > mercury__string__parse_runtime__V_279_279);
#line 92 "private_builtin.opt"
                                              if (mercury__string__parse_runtime__succeeded)
#line 91 "private_builtin.opt"
                                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 92 "private_builtin.opt"
                                              else
#line 93 "private_builtin.opt"
                                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
#line 92 "private_builtin.opt"
                                            }
#line 87 "private_builtin.opt"
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
#line 1965 "string.parse_runtime.c"
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
#line 2002 "string.parse_runtime.c"
                {
#line 2004 "string.parse_runtime.c"
                  mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(mercury__string__parse_runtime__V_5_5, mercury__string__parse_runtime__V_8_8);
                }
#line 26 "string.parse_runtime.m"
                if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                  {
#line 2011 "string.parse_runtime.c"
                    {
#line 2013 "string.parse_runtime.c"
                      mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(mercury__string__parse_runtime__V_6_6, mercury__string__parse_runtime__V_9_9);
                    }
#line 26 "string.parse_runtime.m"
                    if (mercury__string__parse_runtime__succeeded)
#line 2018 "string.parse_runtime.c"
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
#line 2063 "string.parse_runtime.c"
                {
#line 2065 "string.parse_runtime.c"
                  mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(mercury__string__parse_runtime__V_11_11, mercury__string__parse_runtime__V_15_15);
                }
#line 26 "string.parse_runtime.m"
                if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                  {
#line 2072 "string.parse_runtime.c"
                    {
#line 2074 "string.parse_runtime.c"
                      mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(mercury__string__parse_runtime__V_12_12, mercury__string__parse_runtime__V_16_16);
                    }
#line 26 "string.parse_runtime.m"
                    if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                      {
#line 2081 "string.parse_runtime.c"
                        {
#line 2083 "string.parse_runtime.c"
                          mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(mercury__string__parse_runtime__V_13_13, mercury__string__parse_runtime__V_17_17);
                        }
#line 26 "string.parse_runtime.m"
                        if (mercury__string__parse_runtime__succeeded)
#line 2088 "string.parse_runtime.c"
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
#line 2142 "string.parse_runtime.c"
                    {
#line 2144 "string.parse_runtime.c"
                      mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(mercury__string__parse_runtime__V_19_19, mercury__string__parse_runtime__V_23_23);
                    }
#line 26 "string.parse_runtime.m"
                    if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                      {
#line 2151 "string.parse_runtime.c"
                        {
#line 2153 "string.parse_runtime.c"
                          mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(mercury__string__parse_runtime__V_20_20, mercury__string__parse_runtime__V_24_24);
                        }
#line 26 "string.parse_runtime.m"
                        if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                          {
#line 2160 "string.parse_runtime.c"
                            {
#line 2162 "string.parse_runtime.c"
                              mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(mercury__string__parse_runtime__V_21_21, mercury__string__parse_runtime__V_25_25);
                            }
#line 26 "string.parse_runtime.m"
                            if (mercury__string__parse_runtime__succeeded)
#line 2167 "string.parse_runtime.c"
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
#line 2220 "string.parse_runtime.c"
                    {
#line 2222 "string.parse_runtime.c"
                      mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(mercury__string__parse_runtime__V_27_27, mercury__string__parse_runtime__V_32_32);
                    }
#line 26 "string.parse_runtime.m"
                    if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                      {
#line 2229 "string.parse_runtime.c"
                        {
#line 2231 "string.parse_runtime.c"
                          mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(mercury__string__parse_runtime__V_28_28, mercury__string__parse_runtime__V_33_33);
                        }
#line 26 "string.parse_runtime.m"
                        if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                          {
#line 2238 "string.parse_runtime.c"
                            {
#line 2240 "string.parse_runtime.c"
                              mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(mercury__string__parse_runtime__V_29_29, mercury__string__parse_runtime__V_34_34);
                            }
#line 26 "string.parse_runtime.m"
                            if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                              {
#line 2247 "string.parse_runtime.c"
                                mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_30_30 == mercury__string__parse_runtime__V_35_35);
#line 26 "string.parse_runtime.m"
                                if (mercury__string__parse_runtime__succeeded)
#line 2251 "string.parse_runtime.c"
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
#line 2306 "string.parse_runtime.c"
                    {
#line 2308 "string.parse_runtime.c"
                      mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(mercury__string__parse_runtime__V_37_37, mercury__string__parse_runtime__V_42_42);
                    }
#line 26 "string.parse_runtime.m"
                    if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                      {
#line 2315 "string.parse_runtime.c"
                        {
#line 2317 "string.parse_runtime.c"
                          mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(mercury__string__parse_runtime__V_38_38, mercury__string__parse_runtime__V_43_43);
                        }
#line 26 "string.parse_runtime.m"
                        if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                          {
#line 2324 "string.parse_runtime.c"
                            {
#line 2326 "string.parse_runtime.c"
                              mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(mercury__string__parse_runtime__V_39_39, mercury__string__parse_runtime__V_44_44);
                            }
#line 26 "string.parse_runtime.m"
                            if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                              {
#line 2333 "string.parse_runtime.c"
                                mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_40_40 == mercury__string__parse_runtime__V_45_45);
#line 26 "string.parse_runtime.m"
                                if (mercury__string__parse_runtime__succeeded)
#line 2337 "string.parse_runtime.c"
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

#line 402 "string.parse_runtime.m"
static MR_Word MR_CALL 
mercury__string__parse_runtime__poly_type_to_kind_1_f_0(
#line 402 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__1_1)
#line 402 "string.parse_runtime.m"
{
#line 404 "string.parse_runtime.m"
  {
#line 404 "string.parse_runtime.m"
    MR_bool mercury__string__parse_runtime__succeeded;
#line 404 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__HeadVar__2_2;

#line 404 "string.parse_runtime.m"
#line 404 "string.parse_runtime.m"
    switch (MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__1_1)) {
#line 404 "string.parse_runtime.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 404 "string.parse_runtime.m"
      case (MR_Integer) 0:
#line 407 "string.parse_runtime.m"
        mercury__string__parse_runtime__HeadVar__2_2 = (MR_Integer) 3;
#line 404 "string.parse_runtime.m"
        break;
#line 404 "string.parse_runtime.m"
      case (MR_Integer) 1:
#line 406 "string.parse_runtime.m"
        mercury__string__parse_runtime__HeadVar__2_2 = (MR_Integer) 2;
#line 404 "string.parse_runtime.m"
        break;
#line 404 "string.parse_runtime.m"
      case (MR_Integer) 2:
#line 405 "string.parse_runtime.m"
        mercury__string__parse_runtime__HeadVar__2_2 = (MR_Integer) 1;
#line 404 "string.parse_runtime.m"
        break;
#line 404 "string.parse_runtime.m"
      case (MR_Integer) 3:
#line 404 "string.parse_runtime.m"
        mercury__string__parse_runtime__HeadVar__2_2 = (MR_Integer) 0;
#line 404 "string.parse_runtime.m"
        break;
#line 404 "string.parse_runtime.m"
    }
#line 404 "string.parse_runtime.m"
    return mercury__string__parse_runtime__HeadVar__2_2;
#line 404 "string.parse_runtime.m"
  }
#line 402 "string.parse_runtime.m"
}

#line 234 "string.parse_runtime.m"
static void MR_CALL 
mercury__string__parse_runtime__get_first_spec_10_p_0(
#line 234 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_1,
#line 234 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_Chars_2,
#line 234 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3,
#line 234 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_4,
#line 234 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__5_5,
#line 234 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__6_6,
#line 234 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__7_7,
#line 234 "string.parse_runtime.m"
  MR_Integer mercury__string__parse_runtime__SpecNum_8,
#line 234 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Spec_9,
#line 234 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Errors_10)
#line 234 "string.parse_runtime.m"
{
#line 241 "string.parse_runtime.m"
  {
#line 241 "string.parse_runtime.m"
    MR_bool mercury__string__parse_runtime__succeeded;

#line 241 "string.parse_runtime.m"
    if ((mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 241 "string.parse_runtime.m"
      {
#line 241 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__TypeCtorInfo_138_138;
#line 241 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__V_24_24;
#line 241 "string.parse_runtime.m"
        MR_Integer mercury__string__parse_runtime__V_25_25;
#line 241 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__V_26_26;

#line 243 "string.parse_runtime.m"
        *mercury__string__parse_runtime__Spec_9 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 2461 "string.parse_runtime.c"
        mercury__string__parse_runtime__TypeCtorInfo_138_138 = (MR_Word) &mercury__string__string__type_ctor_info_poly_type_0;
#line 244 "string.parse_runtime.m"
        {
#line 244 "string.parse_runtime.m"
          mercury__string__parse_runtime__V_25_25 = mercury__list__length_1_f_0(mercury__string__parse_runtime__TypeCtorInfo_138_138, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3);
        }
#line 244 "string.parse_runtime.m"
        {
#line 244 "string.parse_runtime.m"
          mercury__string__parse_runtime__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 244 "string.parse_runtime.m"
          MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__V_24_24, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 244 "string.parse_runtime.m"
          MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__V_24_24, 1) = ((MR_Box) (mercury__string__parse_runtime__V_25_25));
#line 244 "string.parse_runtime.m"
        }
#line 244 "string.parse_runtime.m"
        mercury__string__parse_runtime__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 244 "string.parse_runtime.m"
        {
#line 244 "string.parse_runtime.m"
          MR_Word base;
#line 244 "string.parse_runtime.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "string.parse_runtime.m"
          *mercury__string__parse_runtime__Errors_10 = base;
#line 244 "string.parse_runtime.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__V_24_24));
#line 244 "string.parse_runtime.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_runtime__V_26_26));
#line 244 "string.parse_runtime.m"
        }
#line 240 "string.parse_runtime.m"
        *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_4 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 240 "string.parse_runtime.m"
        *mercury__string__parse_runtime__STATE_VARIABLE_Chars_2 = mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_1;
#line 241 "string.parse_runtime.m"
      }
#line 241 "string.parse_runtime.m"
    else
#line 246 "string.parse_runtime.m"
      {
#line 246 "string.parse_runtime.m"
        MR_Char mercury__string__parse_runtime__SpecChar_35 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_1, (MR_Integer) 0)));
#line 396 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__SpecPrime_36;
#line 396 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__ErrorsPrime_37;
#line 396 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80;

#line 247 "string.parse_runtime.m"
        *mercury__string__parse_runtime__STATE_VARIABLE_Chars_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_1, (MR_Integer) 1)));
#line 254 "string.parse_runtime.m"
#line 254 "string.parse_runtime.m"
        switch (mercury__string__parse_runtime__SpecChar_35) {
#line 254 "string.parse_runtime.m"
          default:
#line 254 "string.parse_runtime.m"
            mercury__string__parse_runtime__succeeded = MR_FALSE;
#line 254 "string.parse_runtime.m"
            break;
#line 254 "string.parse_runtime.m"
          case (MR_Char) 37:
#line 251 "string.parse_runtime.m"
            {
#line 252 "string.parse_runtime.m"
              mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[2];
#line 253 "string.parse_runtime.m"
              mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 251 "string.parse_runtime.m"
              mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 251 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 251 "string.parse_runtime.m"
            }
#line 254 "string.parse_runtime.m"
            break;
#line 254 "string.parse_runtime.m"
          case (MR_Char) 69:
#line 333 "string.parse_runtime.m"
            {
#line 346 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 347 "string.parse_runtime.m"
                {
#line 347 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_65_65;
#line 347 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_107;

#line 348 "string.parse_runtime.m"
                  {
#line 348 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 348 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 348 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_107, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 348 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_107, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 348 "string.parse_runtime.m"
                  }
#line 349 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 350 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 350 "string.parse_runtime.m"
                  {
#line 350 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_107));
#line 350 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_65_65));
#line 350 "string.parse_runtime.m"
                  }
#line 347 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 347 "string.parse_runtime.m"
                }
#line 346 "string.parse_runtime.m"
              else
#line 335 "string.parse_runtime.m"
                {
#line 335 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 340 "string.parse_runtime.m"
                  MR_Float mercury__string__parse_runtime__Float_43;

#line 335 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 336 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_105)) == (MR_mktag((MR_Integer) 0)));
#line 336 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 336 "string.parse_runtime.m"
                    {
#line 336 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Float_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_105, (MR_Integer) 0)));
#line 337 "string.parse_runtime.m"
                      {
#line 337 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 1));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_43);
#line 337 "string.parse_runtime.m"
                      }
#line 339 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 336 "string.parse_runtime.m"
                    }
#line 336 "string.parse_runtime.m"
                  else
#line 342 "string.parse_runtime.m"
                    {
#line 342 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_67_67;
#line 342 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_69_69;
#line 342 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_103;

#line 342 "string.parse_runtime.m"
                      {
#line 342 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_67_67 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_105);
                      }
#line 341 "string.parse_runtime.m"
                      {
#line 341 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_103 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_103, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_103, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_103, 2) = ((MR_Box) (mercury__string__parse_runtime__V_67_67));
#line 341 "string.parse_runtime.m"
                      }
#line 343 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 344 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_69_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 344 "string.parse_runtime.m"
                      {
#line 344 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_103));
#line 344 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_69_69));
#line 344 "string.parse_runtime.m"
                      }
#line 342 "string.parse_runtime.m"
                    }
#line 335 "string.parse_runtime.m"
                }
#line 333 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 333 "string.parse_runtime.m"
            }
#line 254 "string.parse_runtime.m"
            break;
#line 254 "string.parse_runtime.m"
          case (MR_Char) 70:
#line 333 "string.parse_runtime.m"
            {
#line 346 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 347 "string.parse_runtime.m"
                {
#line 347 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_149_149;
#line 347 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_150;

#line 348 "string.parse_runtime.m"
                  {
#line 348 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 348 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 348 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_150, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 348 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_150, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 348 "string.parse_runtime.m"
                  }
#line 349 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 350 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_149_149 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 350 "string.parse_runtime.m"
                  {
#line 350 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_150));
#line 350 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_149_149));
#line 350 "string.parse_runtime.m"
                  }
#line 347 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 347 "string.parse_runtime.m"
                }
#line 346 "string.parse_runtime.m"
              else
#line 335 "string.parse_runtime.m"
                {
#line 335 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 340 "string.parse_runtime.m"
                  MR_Float mercury__string__parse_runtime__Float_155;

#line 335 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 336 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_165)) == (MR_mktag((MR_Integer) 0)));
#line 336 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 336 "string.parse_runtime.m"
                    {
#line 336 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Float_155 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_165, (MR_Integer) 0)));
#line 337 "string.parse_runtime.m"
                      {
#line 337 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 3));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_155);
#line 337 "string.parse_runtime.m"
                      }
#line 339 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 336 "string.parse_runtime.m"
                    }
#line 336 "string.parse_runtime.m"
                  else
#line 342 "string.parse_runtime.m"
                    {
#line 342 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_151_151;
#line 342 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_153_153;
#line 342 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_154;

#line 342 "string.parse_runtime.m"
                      {
#line 342 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_151_151 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_165);
                      }
#line 341 "string.parse_runtime.m"
                      {
#line 341 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_154 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_154, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_154, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_154, 2) = ((MR_Box) (mercury__string__parse_runtime__V_151_151));
#line 341 "string.parse_runtime.m"
                      }
#line 343 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 344 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_153_153 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 344 "string.parse_runtime.m"
                      {
#line 344 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_154));
#line 344 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_153_153));
#line 344 "string.parse_runtime.m"
                      }
#line 342 "string.parse_runtime.m"
                    }
#line 335 "string.parse_runtime.m"
                }
#line 333 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 333 "string.parse_runtime.m"
            }
#line 254 "string.parse_runtime.m"
            break;
#line 254 "string.parse_runtime.m"
          case (MR_Char) 71:
#line 333 "string.parse_runtime.m"
            {
#line 346 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 347 "string.parse_runtime.m"
                {
#line 347 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_188_188;
#line 347 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_189;

#line 348 "string.parse_runtime.m"
                  {
#line 348 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_189 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 348 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_189, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 348 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_189, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 348 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_189, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 348 "string.parse_runtime.m"
                  }
#line 349 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 350 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_188_188 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 350 "string.parse_runtime.m"
                  {
#line 350 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_189));
#line 350 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_188_188));
#line 350 "string.parse_runtime.m"
                  }
#line 347 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 347 "string.parse_runtime.m"
                }
#line 346 "string.parse_runtime.m"
              else
#line 335 "string.parse_runtime.m"
                {
#line 335 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_204 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 340 "string.parse_runtime.m"
                  MR_Float mercury__string__parse_runtime__Float_194;

#line 335 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 336 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_204)) == (MR_mktag((MR_Integer) 0)));
#line 336 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 336 "string.parse_runtime.m"
                    {
#line 336 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Float_194 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_204, (MR_Integer) 0)));
#line 337 "string.parse_runtime.m"
                      {
#line 337 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 5));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_194);
#line 337 "string.parse_runtime.m"
                      }
#line 339 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 336 "string.parse_runtime.m"
                    }
#line 336 "string.parse_runtime.m"
                  else
#line 342 "string.parse_runtime.m"
                    {
#line 342 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_190_190;
#line 342 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_192_192;
#line 342 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_193;

#line 342 "string.parse_runtime.m"
                      {
#line 342 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_190_190 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_204);
                      }
#line 341 "string.parse_runtime.m"
                      {
#line 341 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_193 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_193, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_193, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_193, 2) = ((MR_Box) (mercury__string__parse_runtime__V_190_190));
#line 341 "string.parse_runtime.m"
                      }
#line 343 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 344 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_192_192 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 344 "string.parse_runtime.m"
                      {
#line 344 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_193));
#line 344 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_192_192));
#line 344 "string.parse_runtime.m"
                      }
#line 342 "string.parse_runtime.m"
                    }
#line 335 "string.parse_runtime.m"
                }
#line 333 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 333 "string.parse_runtime.m"
            }
#line 254 "string.parse_runtime.m"
            break;
#line 254 "string.parse_runtime.m"
          case (MR_Char) 88:
#line 295 "string.parse_runtime.m"
            {
#line 308 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "string.parse_runtime.m"
                {
#line 309 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_73_73;
#line 309 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_96;

#line 310 "string.parse_runtime.m"
                  {
#line 310 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 310 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 310 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_96, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 310 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_96, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 310 "string.parse_runtime.m"
                  }
#line 311 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 312 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_73_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 312 "string.parse_runtime.m"
                  {
#line 312 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_96));
#line 312 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_73_73));
#line 312 "string.parse_runtime.m"
                  }
#line 309 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 309 "string.parse_runtime.m"
                }
#line 308 "string.parse_runtime.m"
              else
#line 297 "string.parse_runtime.m"
                {
#line 297 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 302 "string.parse_runtime.m"
                  MR_Integer mercury__string__parse_runtime__Int_91;

#line 297 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 298 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_93)) == (MR_mktag((MR_Integer) 1)));
#line 298 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 298 "string.parse_runtime.m"
                    {
#line 298 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Int_91 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_93, (MR_Integer) 0)));
#line 299 "string.parse_runtime.m"
                      {
#line 299 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 3));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = ((MR_Box) (mercury__string__parse_runtime__Int_91));
#line 299 "string.parse_runtime.m"
                      }
#line 301 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 298 "string.parse_runtime.m"
                    }
#line 298 "string.parse_runtime.m"
                  else
#line 304 "string.parse_runtime.m"
                    {
#line 304 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_75_75;
#line 304 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_77_77;
#line 304 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_90;

#line 304 "string.parse_runtime.m"
                      {
#line 304 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_75_75 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_93);
                      }
#line 303 "string.parse_runtime.m"
                      {
#line 303 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_90, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_90, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_90, 2) = ((MR_Box) (mercury__string__parse_runtime__V_75_75));
#line 303 "string.parse_runtime.m"
                      }
#line 305 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 306 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_77_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 306 "string.parse_runtime.m"
                      {
#line 306 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_90));
#line 306 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_77_77));
#line 306 "string.parse_runtime.m"
                      }
#line 304 "string.parse_runtime.m"
                    }
#line 297 "string.parse_runtime.m"
                }
#line 295 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 295 "string.parse_runtime.m"
            }
#line 254 "string.parse_runtime.m"
            break;
#line 254 "string.parse_runtime.m"
          case (MR_Char) 99:
#line 366 "string.parse_runtime.m"
            {
#line 366 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 367 "string.parse_runtime.m"
                {
#line 367 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_59_59;
#line 367 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_116;

#line 368 "string.parse_runtime.m"
                  {
#line 368 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 368 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 368 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_116, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 368 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_116, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 368 "string.parse_runtime.m"
                  }
#line 369 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 370 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 370 "string.parse_runtime.m"
                  {
#line 370 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_116));
#line 370 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_59_59));
#line 370 "string.parse_runtime.m"
                  }
#line 367 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 367 "string.parse_runtime.m"
                }
#line 366 "string.parse_runtime.m"
              else
#line 355 "string.parse_runtime.m"
                {
#line 355 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 360 "string.parse_runtime.m"
                  MR_Char mercury__string__parse_runtime__Char_44;

#line 355 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 356 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_114)) == (MR_mktag((MR_Integer) 3)));
#line 356 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 356 "string.parse_runtime.m"
                    {
#line 356 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Char_44 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPolyType_114, (MR_Integer) 0)));
#line 358 "string.parse_runtime.m"
                      {
#line 358 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 358 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 358 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 358 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__Char_44));
#line 358 "string.parse_runtime.m"
                      }
#line 359 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 356 "string.parse_runtime.m"
                    }
#line 356 "string.parse_runtime.m"
                  else
#line 362 "string.parse_runtime.m"
                    {
#line 362 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_61_61;
#line 362 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_63_63;
#line 362 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_112;

#line 362 "string.parse_runtime.m"
                      {
#line 362 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_61_61 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_114);
                      }
#line 361 "string.parse_runtime.m"
                      {
#line 361 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_112 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 361 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_112, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 361 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_112, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 361 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_112, 2) = ((MR_Box) (mercury__string__parse_runtime__V_61_61));
#line 361 "string.parse_runtime.m"
                      }
#line 363 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 364 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_63_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 364 "string.parse_runtime.m"
                      {
#line 364 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_112));
#line 364 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_63_63));
#line 364 "string.parse_runtime.m"
                      }
#line 362 "string.parse_runtime.m"
                    }
#line 355 "string.parse_runtime.m"
                }
#line 366 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 366 "string.parse_runtime.m"
            }
#line 254 "string.parse_runtime.m"
            break;
#line 254 "string.parse_runtime.m"
          case (MR_Char) 100:
#line 254 "string.parse_runtime.m"
          case (MR_Char) 105:
#line 271 "string.parse_runtime.m"
            {
#line 271 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 272 "string.parse_runtime.m"
                {
#line 272 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_79_79;
#line 272 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_89;

#line 273 "string.parse_runtime.m"
                  {
#line 273 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 273 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 273 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_89, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 273 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_89, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 273 "string.parse_runtime.m"
                  }
#line 274 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 275 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_79_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 275 "string.parse_runtime.m"
                  {
#line 275 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 275 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_89));
#line 275 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_79_79));
#line 275 "string.parse_runtime.m"
                  }
#line 272 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 272 "string.parse_runtime.m"
                }
#line 271 "string.parse_runtime.m"
              else
#line 259 "string.parse_runtime.m"
                {
#line 259 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 265 "string.parse_runtime.m"
                  MR_Integer mercury__string__parse_runtime__Int_39;

#line 259 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 260 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_38)) == (MR_mktag((MR_Integer) 1)));
#line 260 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 260 "string.parse_runtime.m"
                    {
#line 260 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Int_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_38, (MR_Integer) 0)));
#line 262 "string.parse_runtime.m"
                      {
#line 262 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 262 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 262 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 262 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 262 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 262 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) (mercury__string__parse_runtime__Int_39));
#line 262 "string.parse_runtime.m"
                      }
#line 264 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 260 "string.parse_runtime.m"
                    }
#line 260 "string.parse_runtime.m"
                  else
#line 267 "string.parse_runtime.m"
                    {
#line 267 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_40;
#line 267 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_81_81;
#line 267 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_83_83;

#line 267 "string.parse_runtime.m"
                      {
#line 267 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_81_81 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_38);
                      }
#line 266 "string.parse_runtime.m"
                      {
#line 266 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 266 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_40, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 266 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_40, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 266 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_40, 2) = ((MR_Box) (mercury__string__parse_runtime__V_81_81));
#line 266 "string.parse_runtime.m"
                      }
#line 268 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 269 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_83_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 269 "string.parse_runtime.m"
                      {
#line 269 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_40));
#line 269 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_83_83));
#line 269 "string.parse_runtime.m"
                      }
#line 267 "string.parse_runtime.m"
                    }
#line 259 "string.parse_runtime.m"
                }
#line 271 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 271 "string.parse_runtime.m"
            }
#line 254 "string.parse_runtime.m"
            break;
#line 254 "string.parse_runtime.m"
          case (MR_Char) 101:
#line 333 "string.parse_runtime.m"
            {
#line 346 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 347 "string.parse_runtime.m"
                {
#line 347 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_227_227;
#line 347 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_228;

#line 348 "string.parse_runtime.m"
                  {
#line 348 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_228 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 348 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_228, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 348 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_228, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 348 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_228, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 348 "string.parse_runtime.m"
                  }
#line 349 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 350 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_227_227 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 350 "string.parse_runtime.m"
                  {
#line 350 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_228));
#line 350 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_227_227));
#line 350 "string.parse_runtime.m"
                  }
#line 347 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 347 "string.parse_runtime.m"
                }
#line 346 "string.parse_runtime.m"
              else
#line 335 "string.parse_runtime.m"
                {
#line 335 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_243 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 340 "string.parse_runtime.m"
                  MR_Float mercury__string__parse_runtime__Float_233;

#line 335 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 336 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_243)) == (MR_mktag((MR_Integer) 0)));
#line 336 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 336 "string.parse_runtime.m"
                    {
#line 336 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Float_233 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_243, (MR_Integer) 0)));
#line 337 "string.parse_runtime.m"
                      {
#line 337 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 0));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_233);
#line 337 "string.parse_runtime.m"
                      }
#line 339 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 336 "string.parse_runtime.m"
                    }
#line 336 "string.parse_runtime.m"
                  else
#line 342 "string.parse_runtime.m"
                    {
#line 342 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_229_229;
#line 342 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_231_231;
#line 342 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_232;

#line 342 "string.parse_runtime.m"
                      {
#line 342 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_229_229 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_243);
                      }
#line 341 "string.parse_runtime.m"
                      {
#line 341 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_232 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_232, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_232, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_232, 2) = ((MR_Box) (mercury__string__parse_runtime__V_229_229));
#line 341 "string.parse_runtime.m"
                      }
#line 343 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 344 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_231_231 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 344 "string.parse_runtime.m"
                      {
#line 344 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_232));
#line 344 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_231_231));
#line 344 "string.parse_runtime.m"
                      }
#line 342 "string.parse_runtime.m"
                    }
#line 335 "string.parse_runtime.m"
                }
#line 333 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 333 "string.parse_runtime.m"
            }
#line 254 "string.parse_runtime.m"
            break;
#line 254 "string.parse_runtime.m"
          case (MR_Char) 102:
#line 333 "string.parse_runtime.m"
            {
#line 346 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 347 "string.parse_runtime.m"
                {
#line 347 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_266_266;
#line 347 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_267;

#line 348 "string.parse_runtime.m"
                  {
#line 348 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_267 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 348 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_267, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 348 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_267, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 348 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_267, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 348 "string.parse_runtime.m"
                  }
#line 349 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 350 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_266_266 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 350 "string.parse_runtime.m"
                  {
#line 350 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_267));
#line 350 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_266_266));
#line 350 "string.parse_runtime.m"
                  }
#line 347 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 347 "string.parse_runtime.m"
                }
#line 346 "string.parse_runtime.m"
              else
#line 335 "string.parse_runtime.m"
                {
#line 335 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_282 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 340 "string.parse_runtime.m"
                  MR_Float mercury__string__parse_runtime__Float_272;

#line 335 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 336 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_282)) == (MR_mktag((MR_Integer) 0)));
#line 336 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 336 "string.parse_runtime.m"
                    {
#line 336 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Float_272 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_282, (MR_Integer) 0)));
#line 337 "string.parse_runtime.m"
                      {
#line 337 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 2));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_272);
#line 337 "string.parse_runtime.m"
                      }
#line 339 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 336 "string.parse_runtime.m"
                    }
#line 336 "string.parse_runtime.m"
                  else
#line 342 "string.parse_runtime.m"
                    {
#line 342 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_268_268;
#line 342 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_270_270;
#line 342 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_271;

#line 342 "string.parse_runtime.m"
                      {
#line 342 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_268_268 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_282);
                      }
#line 341 "string.parse_runtime.m"
                      {
#line 341 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_271 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_271, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_271, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_271, 2) = ((MR_Box) (mercury__string__parse_runtime__V_268_268));
#line 341 "string.parse_runtime.m"
                      }
#line 343 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 344 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_270_270 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 344 "string.parse_runtime.m"
                      {
#line 344 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_271));
#line 344 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_270_270));
#line 344 "string.parse_runtime.m"
                      }
#line 342 "string.parse_runtime.m"
                    }
#line 335 "string.parse_runtime.m"
                }
#line 333 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 333 "string.parse_runtime.m"
            }
#line 254 "string.parse_runtime.m"
            break;
#line 254 "string.parse_runtime.m"
          case (MR_Char) 103:
#line 333 "string.parse_runtime.m"
            {
#line 346 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 347 "string.parse_runtime.m"
                {
#line 347 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_305_305;
#line 347 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_306;

#line 348 "string.parse_runtime.m"
                  {
#line 348 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_306 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 348 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_306, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 348 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_306, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 348 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_306, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 348 "string.parse_runtime.m"
                  }
#line 349 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 350 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_305_305 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 350 "string.parse_runtime.m"
                  {
#line 350 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_306));
#line 350 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_305_305));
#line 350 "string.parse_runtime.m"
                  }
#line 347 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 347 "string.parse_runtime.m"
                }
#line 346 "string.parse_runtime.m"
              else
#line 335 "string.parse_runtime.m"
                {
#line 335 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_321 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 340 "string.parse_runtime.m"
                  MR_Float mercury__string__parse_runtime__Float_311;

#line 335 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 336 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_321)) == (MR_mktag((MR_Integer) 0)));
#line 336 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 336 "string.parse_runtime.m"
                    {
#line 336 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Float_311 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_321, (MR_Integer) 0)));
#line 337 "string.parse_runtime.m"
                      {
#line 337 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 4));
#line 337 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_311);
#line 337 "string.parse_runtime.m"
                      }
#line 339 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 336 "string.parse_runtime.m"
                    }
#line 336 "string.parse_runtime.m"
                  else
#line 342 "string.parse_runtime.m"
                    {
#line 342 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_307_307;
#line 342 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_309_309;
#line 342 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_310;

#line 342 "string.parse_runtime.m"
                      {
#line 342 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_307_307 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_321);
                      }
#line 341 "string.parse_runtime.m"
                      {
#line 341 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_310 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_310, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_310, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 341 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_310, 2) = ((MR_Box) (mercury__string__parse_runtime__V_307_307));
#line 341 "string.parse_runtime.m"
                      }
#line 343 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 344 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_309_309 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 344 "string.parse_runtime.m"
                      {
#line 344 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_310));
#line 344 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_309_309));
#line 344 "string.parse_runtime.m"
                      }
#line 342 "string.parse_runtime.m"
                    }
#line 335 "string.parse_runtime.m"
                }
#line 333 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 333 "string.parse_runtime.m"
            }
#line 254 "string.parse_runtime.m"
            break;
#line 254 "string.parse_runtime.m"
          case (MR_Char) 111:
#line 295 "string.parse_runtime.m"
            {
#line 308 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "string.parse_runtime.m"
                {
#line 309 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_344_344;
#line 309 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_345;

#line 310 "string.parse_runtime.m"
                  {
#line 310 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_345 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 310 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_345, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 310 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_345, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 310 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_345, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 310 "string.parse_runtime.m"
                  }
#line 311 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 312 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_344_344 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 312 "string.parse_runtime.m"
                  {
#line 312 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_345));
#line 312 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_344_344));
#line 312 "string.parse_runtime.m"
                  }
#line 309 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 309 "string.parse_runtime.m"
                }
#line 308 "string.parse_runtime.m"
              else
#line 297 "string.parse_runtime.m"
                {
#line 297 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_360 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 302 "string.parse_runtime.m"
                  MR_Integer mercury__string__parse_runtime__Int_354;

#line 297 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 298 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_360)) == (MR_mktag((MR_Integer) 1)));
#line 298 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 298 "string.parse_runtime.m"
                    {
#line 298 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Int_354 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_360, (MR_Integer) 0)));
#line 299 "string.parse_runtime.m"
                      {
#line 299 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 0));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = ((MR_Box) (mercury__string__parse_runtime__Int_354));
#line 299 "string.parse_runtime.m"
                      }
#line 301 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 298 "string.parse_runtime.m"
                    }
#line 298 "string.parse_runtime.m"
                  else
#line 304 "string.parse_runtime.m"
                    {
#line 304 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_346_346;
#line 304 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_348_348;
#line 304 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_349;

#line 304 "string.parse_runtime.m"
                      {
#line 304 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_346_346 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_360);
                      }
#line 303 "string.parse_runtime.m"
                      {
#line 303 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_349 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_349, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_349, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_349, 2) = ((MR_Box) (mercury__string__parse_runtime__V_346_346));
#line 303 "string.parse_runtime.m"
                      }
#line 305 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 306 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_348_348 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 306 "string.parse_runtime.m"
                      {
#line 306 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_349));
#line 306 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_348_348));
#line 306 "string.parse_runtime.m"
                      }
#line 304 "string.parse_runtime.m"
                    }
#line 297 "string.parse_runtime.m"
                }
#line 295 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 295 "string.parse_runtime.m"
            }
#line 254 "string.parse_runtime.m"
            break;
#line 254 "string.parse_runtime.m"
          case (MR_Char) 112:
#line 295 "string.parse_runtime.m"
            {
#line 295 "string.parse_runtime.m"
              MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Flags_70_418;
#line 294 "string.parse_runtime.m"
              MR_Word mercury__string__parse_runtime__V_134_134 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 294 "string.parse_runtime.m"
              MR_Word mercury__string__parse_runtime__V_135_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 294 "string.parse_runtime.m"
              MR_Word mercury__string__parse_runtime__V_136_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 294 "string.parse_runtime.m"
              MR_Word mercury__string__parse_runtime__V_137_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 294 "string.parse_runtime.m"
              MR_Word mercury__string__parse_runtime__V_133_133 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__5_5, (MR_Integer) 0)))) & (MR_Integer) 1);

#line 294 "string.parse_runtime.m"
              {
#line 294 "string.parse_runtime.m"
                mercury__string__parse_runtime__STATE_VARIABLE_Flags_70_418 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 294 "string.parse_runtime.m"
                MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__STATE_VARIABLE_Flags_70_418, 0) = ((MR_Box) (((MR_Integer) 1 | ((((mercury__string__parse_runtime__V_134_134 << (MR_Integer) 1)) | ((((mercury__string__parse_runtime__V_135_135 << (MR_Integer) 2)) | ((((mercury__string__parse_runtime__V_136_136 << (MR_Integer) 3)) | ((mercury__string__parse_runtime__V_137_137 << (MR_Integer) 4)))))))))));
#line 294 "string.parse_runtime.m"
              }
#line 308 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "string.parse_runtime.m"
                {
#line 309 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_382_382;
#line 309 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_383;

#line 310 "string.parse_runtime.m"
                  {
#line 310 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_383 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 310 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_383, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 310 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_383, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 310 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_383, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 310 "string.parse_runtime.m"
                  }
#line 311 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 312 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_382_382 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 312 "string.parse_runtime.m"
                  {
#line 312 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_383));
#line 312 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_382_382));
#line 312 "string.parse_runtime.m"
                  }
#line 309 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 309 "string.parse_runtime.m"
                }
#line 308 "string.parse_runtime.m"
              else
#line 297 "string.parse_runtime.m"
                {
#line 297 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_398 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 302 "string.parse_runtime.m"
                  MR_Integer mercury__string__parse_runtime__Int_392;

#line 297 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 298 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_398)) == (MR_mktag((MR_Integer) 1)));
#line 298 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 298 "string.parse_runtime.m"
                    {
#line 298 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Int_392 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_398, (MR_Integer) 0)));
#line 299 "string.parse_runtime.m"
                      {
#line 299 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__STATE_VARIABLE_Flags_70_418));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 4));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = ((MR_Box) (mercury__string__parse_runtime__Int_392));
#line 299 "string.parse_runtime.m"
                      }
#line 301 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 298 "string.parse_runtime.m"
                    }
#line 298 "string.parse_runtime.m"
                  else
#line 304 "string.parse_runtime.m"
                    {
#line 304 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_384_384;
#line 304 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_386_386;
#line 304 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_387;

#line 304 "string.parse_runtime.m"
                      {
#line 304 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_384_384 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_398);
                      }
#line 303 "string.parse_runtime.m"
                      {
#line 303 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_387 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_387, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_387, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_387, 2) = ((MR_Box) (mercury__string__parse_runtime__V_384_384));
#line 303 "string.parse_runtime.m"
                      }
#line 305 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 306 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_386_386 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 306 "string.parse_runtime.m"
                      {
#line 306 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_387));
#line 306 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_386_386));
#line 306 "string.parse_runtime.m"
                      }
#line 304 "string.parse_runtime.m"
                    }
#line 297 "string.parse_runtime.m"
                }
#line 295 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 295 "string.parse_runtime.m"
            }
#line 254 "string.parse_runtime.m"
            break;
#line 254 "string.parse_runtime.m"
          case (MR_Char) 115:
#line 386 "string.parse_runtime.m"
            {
#line 386 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 387 "string.parse_runtime.m"
                {
#line 387 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_53_53;
#line 387 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_125;

#line 388 "string.parse_runtime.m"
                  {
#line 388 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 388 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 388 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_125, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 388 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_125, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 388 "string.parse_runtime.m"
                  }
#line 389 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 390 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 390 "string.parse_runtime.m"
                  {
#line 390 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_125));
#line 390 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_53_53));
#line 390 "string.parse_runtime.m"
                  }
#line 387 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 387 "string.parse_runtime.m"
                }
#line 386 "string.parse_runtime.m"
              else
#line 375 "string.parse_runtime.m"
                {
#line 375 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 380 "string.parse_runtime.m"
                  MR_String mercury__string__parse_runtime__Str_45;

#line 375 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 376 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_123)) == (MR_mktag((MR_Integer) 2)));
#line 376 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 376 "string.parse_runtime.m"
                    {
#line 376 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Str_45 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__SpecPolyType_123, (MR_Integer) 0)));
#line 377 "string.parse_runtime.m"
                      {
#line 377 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 377 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 377 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 377 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 377 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__Str_45));
#line 377 "string.parse_runtime.m"
                      }
#line 379 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 376 "string.parse_runtime.m"
                    }
#line 376 "string.parse_runtime.m"
                  else
#line 382 "string.parse_runtime.m"
                    {
#line 382 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_55_55;
#line 382 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_57_57;
#line 382 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_121;

#line 382 "string.parse_runtime.m"
                      {
#line 382 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_55_55 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_123);
                      }
#line 381 "string.parse_runtime.m"
                      {
#line 381 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_121 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 381 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_121, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 381 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_121, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 381 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_121, 2) = ((MR_Box) (mercury__string__parse_runtime__V_55_55));
#line 381 "string.parse_runtime.m"
                      }
#line 383 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 384 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 384 "string.parse_runtime.m"
                      {
#line 384 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_121));
#line 384 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_57_57));
#line 384 "string.parse_runtime.m"
                      }
#line 382 "string.parse_runtime.m"
                    }
#line 375 "string.parse_runtime.m"
                }
#line 386 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 386 "string.parse_runtime.m"
            }
#line 254 "string.parse_runtime.m"
            break;
#line 254 "string.parse_runtime.m"
          case (MR_Char) 117:
#line 295 "string.parse_runtime.m"
            {
#line 308 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "string.parse_runtime.m"
                {
#line 309 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_420_420;
#line 309 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_421;

#line 310 "string.parse_runtime.m"
                  {
#line 310 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_421 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 310 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_421, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 310 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_421, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 310 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_421, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 310 "string.parse_runtime.m"
                  }
#line 311 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 312 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_420_420 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 312 "string.parse_runtime.m"
                  {
#line 312 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_421));
#line 312 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_420_420));
#line 312 "string.parse_runtime.m"
                  }
#line 309 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 309 "string.parse_runtime.m"
                }
#line 308 "string.parse_runtime.m"
              else
#line 297 "string.parse_runtime.m"
                {
#line 297 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_436 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 302 "string.parse_runtime.m"
                  MR_Integer mercury__string__parse_runtime__Int_430;

#line 297 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 298 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_436)) == (MR_mktag((MR_Integer) 1)));
#line 298 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 298 "string.parse_runtime.m"
                    {
#line 298 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Int_430 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_436, (MR_Integer) 0)));
#line 299 "string.parse_runtime.m"
                      {
#line 299 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 1));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = ((MR_Box) (mercury__string__parse_runtime__Int_430));
#line 299 "string.parse_runtime.m"
                      }
#line 301 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 298 "string.parse_runtime.m"
                    }
#line 298 "string.parse_runtime.m"
                  else
#line 304 "string.parse_runtime.m"
                    {
#line 304 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_422_422;
#line 304 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_424_424;
#line 304 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_425;

#line 304 "string.parse_runtime.m"
                      {
#line 304 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_422_422 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_436);
                      }
#line 303 "string.parse_runtime.m"
                      {
#line 303 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_425 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_425, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_425, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_425, 2) = ((MR_Box) (mercury__string__parse_runtime__V_422_422));
#line 303 "string.parse_runtime.m"
                      }
#line 305 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 306 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_424_424 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 306 "string.parse_runtime.m"
                      {
#line 306 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_425));
#line 306 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_424_424));
#line 306 "string.parse_runtime.m"
                      }
#line 304 "string.parse_runtime.m"
                    }
#line 297 "string.parse_runtime.m"
                }
#line 295 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 295 "string.parse_runtime.m"
            }
#line 254 "string.parse_runtime.m"
            break;
#line 254 "string.parse_runtime.m"
          case (MR_Char) 120:
#line 295 "string.parse_runtime.m"
            {
#line 308 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "string.parse_runtime.m"
                {
#line 309 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_458_458;
#line 309 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_459;

#line 310 "string.parse_runtime.m"
                  {
#line 310 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_459 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 310 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_459, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 310 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_459, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 310 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_459, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 310 "string.parse_runtime.m"
                  }
#line 311 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 312 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_458_458 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 312 "string.parse_runtime.m"
                  {
#line 312 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_459));
#line 312 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_458_458));
#line 312 "string.parse_runtime.m"
                  }
#line 309 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 309 "string.parse_runtime.m"
                }
#line 308 "string.parse_runtime.m"
              else
#line 297 "string.parse_runtime.m"
                {
#line 297 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_474 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 302 "string.parse_runtime.m"
                  MR_Integer mercury__string__parse_runtime__Int_468;

#line 297 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 298 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_474)) == (MR_mktag((MR_Integer) 1)));
#line 298 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 298 "string.parse_runtime.m"
                    {
#line 298 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Int_468 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_474, (MR_Integer) 0)));
#line 299 "string.parse_runtime.m"
                      {
#line 299 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 2));
#line 299 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = ((MR_Box) (mercury__string__parse_runtime__Int_468));
#line 299 "string.parse_runtime.m"
                      }
#line 301 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 298 "string.parse_runtime.m"
                    }
#line 298 "string.parse_runtime.m"
                  else
#line 304 "string.parse_runtime.m"
                    {
#line 304 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_460_460;
#line 304 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_462_462;
#line 304 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_463;

#line 304 "string.parse_runtime.m"
                      {
#line 304 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_460_460 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_474);
                      }
#line 303 "string.parse_runtime.m"
                      {
#line 303 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_463 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_463, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_463, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 303 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_463, 2) = ((MR_Box) (mercury__string__parse_runtime__V_460_460));
#line 303 "string.parse_runtime.m"
                      }
#line 305 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 306 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_462_462 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 306 "string.parse_runtime.m"
                      {
#line 306 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_463));
#line 306 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_462_462));
#line 306 "string.parse_runtime.m"
                      }
#line 304 "string.parse_runtime.m"
                    }
#line 297 "string.parse_runtime.m"
                }
#line 295 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 295 "string.parse_runtime.m"
            }
#line 254 "string.parse_runtime.m"
            break;
#line 254 "string.parse_runtime.m"
        }
#line 396 "string.parse_runtime.m"
        if (mercury__string__parse_runtime__succeeded)
#line 394 "string.parse_runtime.m"
          {
#line 394 "string.parse_runtime.m"
            *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_4 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80;
#line 394 "string.parse_runtime.m"
            *mercury__string__parse_runtime__Spec_9 = mercury__string__parse_runtime__SpecPrime_36;
#line 395 "string.parse_runtime.m"
            *mercury__string__parse_runtime__Errors_10 = mercury__string__parse_runtime__ErrorsPrime_37;
#line 394 "string.parse_runtime.m"
          }
#line 396 "string.parse_runtime.m"
        else
#line 397 "string.parse_runtime.m"
          {
#line 397 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_86_86;
#line 397 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__Error_131;

#line 397 "string.parse_runtime.m"
            {
#line 397 "string.parse_runtime.m"
              mercury__string__parse_runtime__Error_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__Error_131, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 397 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__Error_131, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 397 "string.parse_runtime.m"
            }
#line 398 "string.parse_runtime.m"
            *mercury__string__parse_runtime__Spec_9 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 399 "string.parse_runtime.m"
            mercury__string__parse_runtime__V_86_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 399 "string.parse_runtime.m"
            {
#line 399 "string.parse_runtime.m"
              MR_Word base;
#line 399 "string.parse_runtime.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "string.parse_runtime.m"
              *mercury__string__parse_runtime__Errors_10 = base;
#line 399 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_131));
#line 399 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_runtime__V_86_86));
#line 399 "string.parse_runtime.m"
            }
#line 397 "string.parse_runtime.m"
            *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_4 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 397 "string.parse_runtime.m"
          }
#line 246 "string.parse_runtime.m"
      }
#line 241 "string.parse_runtime.m"
  }
#line 234 "string.parse_runtime.m"
}

#line 185 "string.parse_runtime.m"
static void MR_CALL 
mercury__string__parse_runtime__get_optional_prec_7_p_0(
#line 185 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_16,
#line 185 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_Chars_17,
#line 185 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18,
#line 185 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_19,
#line 185 "string.parse_runtime.m"
  MR_Integer mercury__string__parse_runtime__SpecNum_10,
#line 185 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__MaybePrec_11,
#line 185 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Errors_12)
#line 185 "string.parse_runtime.m"
{
#line 213 "string.parse_runtime.m"
  {
#line 213 "string.parse_runtime.m"
    MR_bool mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_16)) == (MR_mktag((MR_Integer) 1)));
#line 213 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_20;
#line 190 "string.parse_runtime.m"
    MR_Char mercury__string__parse_runtime__V_21_21;

#line 190 "string.parse_runtime.m"
    if (mercury__string__parse_runtime__succeeded)
#line 190 "string.parse_runtime.m"
      {
#line 190 "string.parse_runtime.m"
        mercury__string__parse_runtime__V_21_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_16, (MR_Integer) 0)));
#line 190 "string.parse_runtime.m"
        mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_16, (MR_Integer) 1)));
#line 190 "string.parse_runtime.m"
        mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_21_21 == (MR_Char) 46);
#line 190 "string.parse_runtime.m"
      }
#line 213 "string.parse_runtime.m"
    if (mercury__string__parse_runtime__succeeded)
#line 207 "string.parse_runtime.m"
      {
#line 207 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_22_22;
#line 191 "string.parse_runtime.m"
        MR_Char mercury__string__parse_runtime__V_23_23;

#line 191 "string.parse_runtime.m"
        mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 191 "string.parse_runtime.m"
        if (mercury__string__parse_runtime__succeeded)
#line 191 "string.parse_runtime.m"
          {
#line 191 "string.parse_runtime.m"
            mercury__string__parse_runtime__V_23_23 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_20, (MR_Integer) 0)));
#line 191 "string.parse_runtime.m"
            mercury__string__parse_runtime__STATE_VARIABLE_Chars_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_20, (MR_Integer) 1)));
#line 191 "string.parse_runtime.m"
            mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_23_23 == (MR_Char) 42);
#line 191 "string.parse_runtime.m"
          }
#line 207 "string.parse_runtime.m"
        if (mercury__string__parse_runtime__succeeded)
#line 202 "string.parse_runtime.m"
          {
#line 202 "string.parse_runtime.m"
            *mercury__string__parse_runtime__STATE_VARIABLE_Chars_17 = mercury__string__parse_runtime__STATE_VARIABLE_Chars_22_22;
#line 202 "string.parse_runtime.m"
            if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 203 "string.parse_runtime.m"
              {
#line 203 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_24_24;
#line 203 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_25_25;

#line 204 "string.parse_runtime.m"
                *mercury__string__parse_runtime__MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 205 "string.parse_runtime.m"
                {
#line 205 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "string.parse_runtime.m"
                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 205 "string.parse_runtime.m"
                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_24_24, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_10));
#line 205 "string.parse_runtime.m"
                }
#line 205 "string.parse_runtime.m"
                mercury__string__parse_runtime__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 205 "string.parse_runtime.m"
                {
#line 205 "string.parse_runtime.m"
                  MR_Word base;
#line 205 "string.parse_runtime.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "string.parse_runtime.m"
                  *mercury__string__parse_runtime__Errors_12 = base;
#line 205 "string.parse_runtime.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__V_24_24));
#line 205 "string.parse_runtime.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_runtime__V_25_25));
#line 205 "string.parse_runtime.m"
                }
#line 203 "string.parse_runtime.m"
                *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_19 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18;
#line 203 "string.parse_runtime.m"
              }
#line 202 "string.parse_runtime.m"
            else
#line 193 "string.parse_runtime.m"
              {
#line 193 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__PolyType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18, (MR_Integer) 0)));
#line 197 "string.parse_runtime.m"
                MR_Integer mercury__string__parse_runtime__PolyPrec_14;

#line 193 "string.parse_runtime.m"
                *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18, (MR_Integer) 1)));
#line 194 "string.parse_runtime.m"
                mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__PolyType_13)) == (MR_mktag((MR_Integer) 1)));
#line 194 "string.parse_runtime.m"
                if (mercury__string__parse_runtime__succeeded)
#line 194 "string.parse_runtime.m"
                  {
#line 194 "string.parse_runtime.m"
                    mercury__string__parse_runtime__PolyPrec_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__PolyType_13, (MR_Integer) 0)));
#line 195 "string.parse_runtime.m"
                    {
#line 195 "string.parse_runtime.m"
                      MR_Word base;
#line 195 "string.parse_runtime.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 195 "string.parse_runtime.m"
                      *mercury__string__parse_runtime__MaybePrec_11 = base;
#line 195 "string.parse_runtime.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__PolyPrec_14));
#line 195 "string.parse_runtime.m"
                    }
#line 196 "string.parse_runtime.m"
                    *mercury__string__parse_runtime__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "string.parse_runtime.m"
                  }
#line 194 "string.parse_runtime.m"
                else
#line 198 "string.parse_runtime.m"
                  {
#line 198 "string.parse_runtime.m"
                    MR_Word mercury__string__parse_runtime__V_27_27;
#line 198 "string.parse_runtime.m"
                    MR_Word mercury__string__parse_runtime__V_28_28;
#line 198 "string.parse_runtime.m"
                    MR_Word mercury__string__parse_runtime__V_29_29;

#line 198 "string.parse_runtime.m"
                    *mercury__string__parse_runtime__MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 404 "string.parse_runtime.m"
#line 404 "string.parse_runtime.m"
                    switch (MR_tag((MR_Word) mercury__string__parse_runtime__PolyType_13)) {
#line 404 "string.parse_runtime.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 404 "string.parse_runtime.m"
                      case (MR_Integer) 0:
#line 407 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_28_28 = (MR_Integer) 3;
#line 404 "string.parse_runtime.m"
                        break;
#line 404 "string.parse_runtime.m"
                      case (MR_Integer) 1:
#line 406 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_28_28 = (MR_Integer) 2;
#line 404 "string.parse_runtime.m"
                        break;
#line 404 "string.parse_runtime.m"
                      case (MR_Integer) 2:
#line 405 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_28_28 = (MR_Integer) 1;
#line 404 "string.parse_runtime.m"
                        break;
#line 404 "string.parse_runtime.m"
                      case (MR_Integer) 3:
#line 404 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_28_28 = (MR_Integer) 0;
#line 404 "string.parse_runtime.m"
                        break;
#line 404 "string.parse_runtime.m"
                    }
#line 199 "string.parse_runtime.m"
                    {
#line 199 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 199 "string.parse_runtime.m"
                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 199 "string.parse_runtime.m"
                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_27_27, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_10));
#line 199 "string.parse_runtime.m"
                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_27_27, 2) = ((MR_Box) (mercury__string__parse_runtime__V_28_28));
#line 199 "string.parse_runtime.m"
                    }
#line 200 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 200 "string.parse_runtime.m"
                    {
#line 200 "string.parse_runtime.m"
                      MR_Word base;
#line 200 "string.parse_runtime.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "string.parse_runtime.m"
                      *mercury__string__parse_runtime__Errors_12 = base;
#line 200 "string.parse_runtime.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__V_27_27));
#line 200 "string.parse_runtime.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_runtime__V_29_29));
#line 200 "string.parse_runtime.m"
                    }
#line 198 "string.parse_runtime.m"
                  }
#line 193 "string.parse_runtime.m"
              }
#line 202 "string.parse_runtime.m"
          }
#line 207 "string.parse_runtime.m"
        else
#line 209 "string.parse_runtime.m"
          {
#line 209 "string.parse_runtime.m"
            MR_Integer mercury__string__parse_runtime__Prec_15;

#line 7 "string.parse_util.opt"
            {
#line 7 "string.parse_util.opt"
              mercury__string__parse_util__get_number_prefix_loop_4_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_20, mercury__string__parse_runtime__STATE_VARIABLE_Chars_17, (MR_Integer) 0, &mercury__string__parse_runtime__Prec_15);
            }
#line 210 "string.parse_runtime.m"
            {
#line 210 "string.parse_runtime.m"
              MR_Word base;
#line 210 "string.parse_runtime.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 210 "string.parse_runtime.m"
              *mercury__string__parse_runtime__MaybePrec_11 = base;
#line 210 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__Prec_15));
#line 210 "string.parse_runtime.m"
            }
#line 211 "string.parse_runtime.m"
            *mercury__string__parse_runtime__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 209 "string.parse_runtime.m"
            *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_19 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18;
#line 209 "string.parse_runtime.m"
          }
#line 207 "string.parse_runtime.m"
      }
#line 213 "string.parse_runtime.m"
    else
#line 214 "string.parse_runtime.m"
      {
#line 214 "string.parse_runtime.m"
        *mercury__string__parse_runtime__MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 215 "string.parse_runtime.m"
        *mercury__string__parse_runtime__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 214 "string.parse_runtime.m"
        *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_19 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18;
#line 214 "string.parse_runtime.m"
        *mercury__string__parse_runtime__STATE_VARIABLE_Chars_17 = mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_16;
#line 214 "string.parse_runtime.m"
      }
#line 213 "string.parse_runtime.m"
  }
#line 185 "string.parse_runtime.m"
}

#line 138 "string.parse_runtime.m"
static void MR_CALL 
mercury__string__parse_runtime__parse_conversion_specification_7_p_0(
#line 138 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_20,
#line 138 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_Chars_21,
#line 138 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22,
#line 138 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_23,
#line 138 "string.parse_runtime.m"
  MR_Integer mercury__string__parse_runtime__SpecNum_10,
#line 138 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Spec_11,
#line 138 "string.parse_runtime.m"
  MR_Word * mercury__string__parse_runtime__Errors_12)
#line 138 "string.parse_runtime.m"
{
#line 142 "string.parse_runtime.m"
  {
#line 142 "string.parse_runtime.m"
    MR_bool mercury__string__parse_runtime__succeeded;
#line 142 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__TypeCtorInfo_37_37;
#line 142 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__Flags0_13 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[0];
#line 142 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__Flags_14;
#line 142 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__MaybeWidth_15;
#line 142 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__WidthErrors_16;
#line 142 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__MaybePrec_17;
#line 142 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__PrecErrors_18;
#line 142 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__SpecErrors_19;
#line 142 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29;
#line 142 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_30;
#line 142 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_31;
#line 142 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_32_32;
#line 142 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_33_33;
#line 142 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__V_36_36;
#line 175 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_50;
#line 159 "string.parse_runtime.m"
    MR_Char mercury__string__parse_runtime__V_51_51;

#line 145 "string.parse_runtime.m"
    {
#line 145 "string.parse_runtime.m"
      mercury__string__parse_util__gather_flag_chars_4_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_20, &mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29, mercury__string__parse_runtime__Flags0_13, &mercury__string__parse_runtime__Flags_14);
    }
#line 159 "string.parse_runtime.m"
    mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 159 "string.parse_runtime.m"
    if (mercury__string__parse_runtime__succeeded)
#line 159 "string.parse_runtime.m"
      {
#line 159 "string.parse_runtime.m"
        mercury__string__parse_runtime__V_51_51 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29, (MR_Integer) 0)));
#line 159 "string.parse_runtime.m"
        mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29, (MR_Integer) 1)));
#line 159 "string.parse_runtime.m"
        mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_51_51 == (MR_Char) 42);
#line 159 "string.parse_runtime.m"
      }
#line 175 "string.parse_runtime.m"
    if (mercury__string__parse_runtime__succeeded)
#line 170 "string.parse_runtime.m"
      {
#line 170 "string.parse_runtime.m"
        mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_30 = mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_50;
#line 170 "string.parse_runtime.m"
        if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 171 "string.parse_runtime.m"
          {
#line 171 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_52_52;
#line 171 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_53_53;

#line 172 "string.parse_runtime.m"
            mercury__string__parse_runtime__MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 173 "string.parse_runtime.m"
            {
#line 173 "string.parse_runtime.m"
              mercury__string__parse_runtime__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 173 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_52_52, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_10));
#line 173 "string.parse_runtime.m"
            }
#line 173 "string.parse_runtime.m"
            mercury__string__parse_runtime__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 173 "string.parse_runtime.m"
            {
#line 173 "string.parse_runtime.m"
              mercury__string__parse_runtime__WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__WidthErrors_16, 0) = ((MR_Box) (mercury__string__parse_runtime__V_52_52));
#line 173 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__WidthErrors_16, 1) = ((MR_Box) (mercury__string__parse_runtime__V_53_53));
#line 173 "string.parse_runtime.m"
            }
#line 171 "string.parse_runtime.m"
            mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_31 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22;
#line 171 "string.parse_runtime.m"
          }
#line 170 "string.parse_runtime.m"
        else
#line 161 "string.parse_runtime.m"
          {
#line 161 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__PolyType_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22, (MR_Integer) 0)));
#line 165 "string.parse_runtime.m"
            MR_Integer mercury__string__parse_runtime__PolyWidth_48;

#line 161 "string.parse_runtime.m"
            mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22, (MR_Integer) 1)));
#line 162 "string.parse_runtime.m"
            mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__PolyType_47)) == (MR_mktag((MR_Integer) 1)));
#line 162 "string.parse_runtime.m"
            if (mercury__string__parse_runtime__succeeded)
#line 162 "string.parse_runtime.m"
              {
#line 162 "string.parse_runtime.m"
                mercury__string__parse_runtime__PolyWidth_48 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__PolyType_47, (MR_Integer) 0)));
#line 163 "string.parse_runtime.m"
                {
#line 163 "string.parse_runtime.m"
                  mercury__string__parse_runtime__MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 163 "string.parse_runtime.m"
                  MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__MaybeWidth_15, 0) = ((MR_Box) (mercury__string__parse_runtime__PolyWidth_48));
#line 163 "string.parse_runtime.m"
                }
#line 164 "string.parse_runtime.m"
                mercury__string__parse_runtime__WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 162 "string.parse_runtime.m"
              }
#line 162 "string.parse_runtime.m"
            else
#line 166 "string.parse_runtime.m"
              {
#line 166 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_55_55;
#line 166 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_56_56;
#line 166 "string.parse_runtime.m"
                MR_Word mercury__string__parse_runtime__V_57_57;

#line 166 "string.parse_runtime.m"
                mercury__string__parse_runtime__MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 404 "string.parse_runtime.m"
#line 404 "string.parse_runtime.m"
                switch (MR_tag((MR_Word) mercury__string__parse_runtime__PolyType_47)) {
#line 404 "string.parse_runtime.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 404 "string.parse_runtime.m"
                  case (MR_Integer) 0:
#line 407 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_56_56 = (MR_Integer) 3;
#line 404 "string.parse_runtime.m"
                    break;
#line 404 "string.parse_runtime.m"
                  case (MR_Integer) 1:
#line 406 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_56_56 = (MR_Integer) 2;
#line 404 "string.parse_runtime.m"
                    break;
#line 404 "string.parse_runtime.m"
                  case (MR_Integer) 2:
#line 405 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_56_56 = (MR_Integer) 1;
#line 404 "string.parse_runtime.m"
                    break;
#line 404 "string.parse_runtime.m"
                  case (MR_Integer) 3:
#line 404 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_56_56 = (MR_Integer) 0;
#line 404 "string.parse_runtime.m"
                    break;
#line 404 "string.parse_runtime.m"
                }
#line 167 "string.parse_runtime.m"
                {
#line 167 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 167 "string.parse_runtime.m"
                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 167 "string.parse_runtime.m"
                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_55_55, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_10));
#line 167 "string.parse_runtime.m"
                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_55_55, 2) = ((MR_Box) (mercury__string__parse_runtime__V_56_56));
#line 167 "string.parse_runtime.m"
                }
#line 168 "string.parse_runtime.m"
                mercury__string__parse_runtime__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 168 "string.parse_runtime.m"
                {
#line 168 "string.parse_runtime.m"
                  mercury__string__parse_runtime__WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 168 "string.parse_runtime.m"
                  MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__WidthErrors_16, 0) = ((MR_Box) (mercury__string__parse_runtime__V_55_55));
#line 168 "string.parse_runtime.m"
                  MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__WidthErrors_16, 1) = ((MR_Box) (mercury__string__parse_runtime__V_57_57));
#line 168 "string.parse_runtime.m"
                }
#line 166 "string.parse_runtime.m"
              }
#line 161 "string.parse_runtime.m"
          }
#line 170 "string.parse_runtime.m"
      }
#line 175 "string.parse_runtime.m"
    else
#line 178 "string.parse_runtime.m"
      {
#line 178 "string.parse_runtime.m"
        MR_Integer mercury__string__parse_runtime__Width_49;
#line 178 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_28_58;

#line 175 "string.parse_runtime.m"
        {
#line 175 "string.parse_runtime.m"
          mercury__string__parse_runtime__succeeded = mercury__string__parse_util__get_nonzero_number_prefix_3_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29, &mercury__string__parse_runtime__STATE_VARIABLE_Chars_28_58, &mercury__string__parse_runtime__Width_49);
        }
#line 178 "string.parse_runtime.m"
        if (mercury__string__parse_runtime__succeeded)
#line 176 "string.parse_runtime.m"
          {
#line 176 "string.parse_runtime.m"
            mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_30 = mercury__string__parse_runtime__STATE_VARIABLE_Chars_28_58;
#line 176 "string.parse_runtime.m"
            {
#line 176 "string.parse_runtime.m"
              mercury__string__parse_runtime__MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 176 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__MaybeWidth_15, 0) = ((MR_Box) (mercury__string__parse_runtime__Width_49));
#line 176 "string.parse_runtime.m"
            }
#line 177 "string.parse_runtime.m"
            mercury__string__parse_runtime__WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 176 "string.parse_runtime.m"
          }
#line 178 "string.parse_runtime.m"
        else
#line 179 "string.parse_runtime.m"
          {
#line 179 "string.parse_runtime.m"
            mercury__string__parse_runtime__MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 180 "string.parse_runtime.m"
            mercury__string__parse_runtime__WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 179 "string.parse_runtime.m"
            mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_30 = mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29;
#line 179 "string.parse_runtime.m"
          }
#line 178 "string.parse_runtime.m"
        mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_31 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22;
#line 178 "string.parse_runtime.m"
      }
#line 147 "string.parse_runtime.m"
    {
#line 147 "string.parse_runtime.m"
      mercury__string__parse_runtime__get_optional_prec_7_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_30, &mercury__string__parse_runtime__STATE_VARIABLE_Chars_32_32, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_31, &mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_33_33, mercury__string__parse_runtime__SpecNum_10, &mercury__string__parse_runtime__MaybePrec_17, &mercury__string__parse_runtime__PrecErrors_18);
    }
#line 148 "string.parse_runtime.m"
    {
#line 148 "string.parse_runtime.m"
      mercury__string__parse_runtime__get_first_spec_10_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_32_32, mercury__string__parse_runtime__STATE_VARIABLE_Chars_21, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_33_33, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_23, mercury__string__parse_runtime__Flags_14, mercury__string__parse_runtime__MaybeWidth_15, mercury__string__parse_runtime__MaybePrec_17, mercury__string__parse_runtime__SpecNum_10, mercury__string__parse_runtime__Spec_11, &mercury__string__parse_runtime__SpecErrors_19);
    }
#line 5072 "string.parse_runtime.c"
    mercury__string__parse_runtime__TypeCtorInfo_37_37 = (MR_Word) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0;
#line 48 "list.opt"
    {
#line 48 "list.opt"
      mercury__list__append_3_p_1(mercury__string__parse_runtime__TypeCtorInfo_37_37, mercury__string__parse_runtime__PrecErrors_18, mercury__string__parse_runtime__SpecErrors_19, &mercury__string__parse_runtime__V_36_36);
    }
#line 48 "list.opt"
    {
#line 48 "list.opt"
      mercury__list__append_3_p_1(mercury__string__parse_runtime__TypeCtorInfo_37_37, mercury__string__parse_runtime__WidthErrors_16, mercury__string__parse_runtime__V_36_36, mercury__string__parse_runtime__Errors_12);
#line 48 "list.opt"
      return;
    }
#line 142 "string.parse_runtime.m"
  }
#line 138 "string.parse_runtime.m"
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
#line 93 "string.parse_runtime.m"
  {
#line 93 "string.parse_runtime.m"
    MR_bool mercury__string__parse_runtime__succeeded;
#line 93 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__NonConversionSpecChars_11;
#line 93 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__GatherEndedBy_12;
#line 93 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__Specs0_13;

#line 94 "string.parse_runtime.m"
    {
#line 94 "string.parse_runtime.m"
      mercury__string__parse_util__gather_non_percent_chars_3_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_27, &mercury__string__parse_runtime__NonConversionSpecChars_11, &mercury__string__parse_runtime__GatherEndedBy_12);
    }
#line 106 "string.parse_runtime.m"
    if ((mercury__string__parse_runtime__GatherEndedBy_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 96 "string.parse_runtime.m"
      {
#line 97 "string.parse_runtime.m"
        mercury__string__parse_runtime__Specs0_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 101 "string.parse_runtime.m"
        if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 100 "string.parse_runtime.m"
          *mercury__string__parse_runtime__Errors_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 101 "string.parse_runtime.m"
        else
#line 102 "string.parse_runtime.m"
          {
#line 102 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__TypeCtorInfo_38_38 = (MR_Word) &mercury__string__string__type_ctor_info_poly_type_0;
#line 102 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__Error_16;
#line 102 "string.parse_runtime.m"
            MR_Integer mercury__string__parse_runtime__V_34_34;
#line 102 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_35_35;

#line 83 "list.opt"
            {
#line 83 "list.opt"
              mercury__list__length_2_3_p_0(mercury__string__parse_runtime__TypeCtorInfo_38_38, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_28, (MR_Integer) 0, &mercury__string__parse_runtime__V_34_34);
            }
#line 103 "string.parse_runtime.m"
            {
#line 103 "string.parse_runtime.m"
              mercury__string__parse_runtime__Error_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 103 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 103 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_16, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 103 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_16, 2) = ((MR_Box) (mercury__string__parse_runtime__V_34_34));
#line 103 "string.parse_runtime.m"
            }
#line 104 "string.parse_runtime.m"
            mercury__string__parse_runtime__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 104 "string.parse_runtime.m"
            {
#line 104 "string.parse_runtime.m"
              MR_Word base;
#line 104 "string.parse_runtime.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 104 "string.parse_runtime.m"
              *mercury__string__parse_runtime__Errors_10 = base;
#line 104 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_16));
#line 104 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_runtime__V_35_35));
#line 104 "string.parse_runtime.m"
            }
#line 102 "string.parse_runtime.m"
          }
#line 96 "string.parse_runtime.m"
      }
#line 106 "string.parse_runtime.m"
    else
#line 107 "string.parse_runtime.m"
      {
#line 107 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__HeadSpec_17;
#line 107 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__HeadErrors_18;
#line 107 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__TailSpecs_19;
#line 107 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__TailErrors_20;
#line 107 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__GatherEndedBy_12, (MR_Integer) 0)));
#line 107 "string.parse_runtime.m"
        MR_Integer mercury__string__parse_runtime__V_32_32;
#line 107 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_36;
#line 107 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_37;

#line 108 "string.parse_runtime.m"
        {
#line 108 "string.parse_runtime.m"
          mercury__string__parse_runtime__parse_conversion_specification_7_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29, &mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_36, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_28, &mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_37, mercury__string__parse_runtime__SpecNum_8, &mercury__string__parse_runtime__HeadSpec_17, &mercury__string__parse_runtime__HeadErrors_18);
        }
#line 110 "string.parse_runtime.m"
        mercury__string__parse_runtime__V_32_32 = (mercury__string__parse_runtime__SpecNum_8 + (MR_Integer) 1);
#line 110 "string.parse_runtime.m"
        {
#line 110 "string.parse_runtime.m"
          mercury__string__parse_runtime__parse_format_string_5_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_36, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_37, mercury__string__parse_runtime__V_32_32, &mercury__string__parse_runtime__TailSpecs_19, &mercury__string__parse_runtime__TailErrors_20);
        }
#line 116 "string.parse_runtime.m"
        if ((mercury__string__parse_runtime__HeadErrors_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 113 "string.parse_runtime.m"
          {
#line 114 "string.parse_runtime.m"
            {
#line 114 "string.parse_runtime.m"
              mercury__string__parse_runtime__Specs0_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 114 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__Specs0_13, 0) = ((MR_Box) (mercury__string__parse_runtime__HeadSpec_17));
#line 114 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__Specs0_13, 1) = ((MR_Box) (mercury__string__parse_runtime__TailSpecs_19));
#line 114 "string.parse_runtime.m"
            }
#line 115 "string.parse_runtime.m"
            *mercury__string__parse_runtime__Errors_10 = mercury__string__parse_runtime__TailErrors_20;
#line 113 "string.parse_runtime.m"
          }
#line 116 "string.parse_runtime.m"
        else
#line 117 "string.parse_runtime.m"
          {
#line 117 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__TypeCtorInfo_39_39;

#line 118 "string.parse_runtime.m"
            mercury__string__parse_runtime__Specs0_13 = mercury__string__parse_runtime__TailSpecs_19;
#line 5242 "string.parse_runtime.c"
            mercury__string__parse_runtime__TypeCtorInfo_39_39 = (MR_Word) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0;
#line 48 "list.opt"
            {
#line 48 "list.opt"
              mercury__list__append_3_p_1(mercury__string__parse_runtime__TypeCtorInfo_39_39, mercury__string__parse_runtime__HeadErrors_18, mercury__string__parse_runtime__TailErrors_20, mercury__string__parse_runtime__Errors_10);
            }
#line 117 "string.parse_runtime.m"
          }
#line 107 "string.parse_runtime.m"
      }
#line 125 "string.parse_runtime.m"
    if ((mercury__string__parse_runtime__NonConversionSpecChars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 124 "string.parse_runtime.m"
      *mercury__string__parse_runtime__Specs_9 = mercury__string__parse_runtime__Specs0_13;
#line 125 "string.parse_runtime.m"
    else
#line 126 "string.parse_runtime.m"
      {
#line 126 "string.parse_runtime.m"
        MR_String mercury__string__parse_runtime__NonConversionSpecString_25;
#line 126 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__StringSpec_26;

#line 140 "string.opt"
        {
#line 140 "string.opt"
          mercury__string__from_char_list_2_p_0(mercury__string__parse_runtime__NonConversionSpecChars_11, &mercury__string__parse_runtime__NonConversionSpecString_25);
        }
#line 129 "string.parse_runtime.m"
        {
#line 129 "string.parse_runtime.m"
          mercury__string__parse_runtime__StringSpec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 129 "string.parse_runtime.m"
          MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__StringSpec_26, 0) = ((MR_Box) (mercury__string__parse_runtime__NonConversionSpecString_25));
#line 129 "string.parse_runtime.m"
        }
#line 130 "string.parse_runtime.m"
        {
#line 130 "string.parse_runtime.m"
          MR_Word base;
#line 130 "string.parse_runtime.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 130 "string.parse_runtime.m"
          *mercury__string__parse_runtime__Specs_9 = base;
#line 130 "string.parse_runtime.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__StringSpec_26));
#line 130 "string.parse_runtime.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_runtime__Specs0_13));
#line 130 "string.parse_runtime.m"
        }
#line 126 "string.parse_runtime.m"
      }
#line 93 "string.parse_runtime.m"
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
