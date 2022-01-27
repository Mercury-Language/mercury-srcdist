/*
** Automatically generated from `string.parse_runtime.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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
#include "char.mih"
#include "construct.mih"
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




#line 90 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_0[1];

#line 93 "string.parse_runtime.c"
static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_0;

#line 96 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_1[3];

#line 99 "string.parse_runtime.c"
static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_1;

#line 102 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_2[4];

#line 105 "string.parse_runtime.c"
static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_2;

#line 108 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_3[4];

#line 111 "string.parse_runtime.c"
static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_3;

#line 114 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_4[5];

#line 117 "string.parse_runtime.c"
static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_4;

#line 120 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_5[5];

#line 123 "string.parse_runtime.c"
static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_5;

#line 126 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_0[1];

#line 129 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_1[1];

#line 132 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_2[1];

#line 135 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_3[3];

#line 138 "string.parse_runtime.c"
static const MR_DuPtagLayout mercury__string__parse_runtime__string__parse_runtime__du_ptag_ordered_string_format_spec_0[4];

#line 141 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_name_ordered_string_format_spec_0[6];

#line 144 "string.parse_runtime.c"
static const MR_Integer mercury__string__parse_runtime__string__parse_runtime__functor_number_map_string_format_spec_0[6];

#line 147 "string.parse_runtime.c"
static MR_bool MR_CALL 
mercury__string__parse_runtime____Unify____string_format_spec_0_0_10001(
#line 150 "string.parse_runtime.c"
  MR_Box mercury__string__parse_runtime__wrapper_arg_1,
#line 152 "string.parse_runtime.c"
  MR_Box mercury__string__parse_runtime__wrapper_arg_2);

#line 155 "string.parse_runtime.c"
static void MR_CALL 
mercury__string__parse_runtime____Compare____string_format_spec_0_0_10001(
#line 158 "string.parse_runtime.c"
  MR_Box * mercury__string__parse_runtime__wrapper_arg_1,
#line 160 "string.parse_runtime.c"
  MR_Box mercury__string__parse_runtime__wrapper_arg_2,
#line 162 "string.parse_runtime.c"
  MR_Box mercury__string__parse_runtime__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__parse_runtime__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 406 "string.parse_runtime.m"
static MR_Word MR_CALL 
mercury__string__parse_runtime__poly_type_to_kind_1_f_0(
#line 406 "string.parse_runtime.m"
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
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "benchmarking.mh"
#include "io.mh"
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
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "store.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
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
#include "time.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
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



#line 613 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 618 "string.parse_runtime.c"
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

#line 633 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_1[3] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 640 "string.parse_runtime.c"
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

#line 655 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_2[4] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 663 "string.parse_runtime.c"
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

#line 678 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_3[4] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 686 "string.parse_runtime.c"
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

#line 701 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_4[5] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_int_base_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 710 "string.parse_runtime.c"
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

#line 725 "string.parse_runtime.c"
static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_5[5] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_float_kind_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 734 "string.parse_runtime.c"
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

#line 749 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_0[1] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_0
};

#line 754 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_1[1] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_1
};

#line 759 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_2[1] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_2
};

#line 764 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_3[3] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_3,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_4,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_5
};

#line 771 "string.parse_runtime.c"
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

#line 795 "string.parse_runtime.c"
static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_name_ordered_string_format_spec_0[6] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_1,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_0,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_5,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_3,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_2,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_4
};

#line 805 "string.parse_runtime.c"
static const MR_Integer mercury__string__parse_runtime__string__parse_runtime__functor_number_map_string_format_spec_0[6] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 2
};

#line 815 "string.parse_runtime.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_runtime__string__parse_runtime__type_ctor_info_string_format_spec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_runtime____Unify____string_format_spec_0_0_10001)),
  ((MR_Box) (mercury__string__parse_runtime____Compare____string_format_spec_0_0_10001)),
  (MR_String) "string.parse_runtime",
  (MR_String) "string_format_spec",
  {
    mercury__string__parse_runtime__string__parse_runtime__du_name_ordered_string_format_spec_0
  },
  {
    mercury__string__parse_runtime__string__parse_runtime__du_ptag_ordered_string_format_spec_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mercury__string__parse_runtime__string__parse_runtime__functor_number_map_string_format_spec_0
};

#line 836 "string.parse_runtime.c"
static MR_bool MR_CALL 
mercury__string__parse_runtime____Unify____string_format_spec_0_0_10001(
#line 839 "string.parse_runtime.c"
  MR_Box mercury__string__parse_runtime__wrapper_arg_1,
#line 841 "string.parse_runtime.c"
  MR_Box mercury__string__parse_runtime__wrapper_arg_2)
#line 843 "string.parse_runtime.c"
{
#line 845 "string.parse_runtime.c"
  {
#line 847 "string.parse_runtime.c"
    MR_bool mercury__string__parse_runtime__succeeded;

#line 850 "string.parse_runtime.c"
    {
#line 852 "string.parse_runtime.c"
      mercury__string__parse_runtime__succeeded = mercury__string__parse_runtime____Unify____string_format_spec_0_0(((MR_Word) mercury__string__parse_runtime__wrapper_arg_1), ((MR_Word) mercury__string__parse_runtime__wrapper_arg_2));
    }
#line 855 "string.parse_runtime.c"
    return mercury__string__parse_runtime__succeeded;
#line 857 "string.parse_runtime.c"
  }
#line 859 "string.parse_runtime.c"
}

#line 862 "string.parse_runtime.c"
static void MR_CALL 
mercury__string__parse_runtime____Compare____string_format_spec_0_0_10001(
#line 865 "string.parse_runtime.c"
  MR_Box * mercury__string__parse_runtime__wrapper_arg_1,
#line 867 "string.parse_runtime.c"
  MR_Box mercury__string__parse_runtime__wrapper_arg_2,
#line 869 "string.parse_runtime.c"
  MR_Box mercury__string__parse_runtime__wrapper_arg_3)
#line 871 "string.parse_runtime.c"
{
#line 873 "string.parse_runtime.c"
  {
#line 875 "string.parse_runtime.c"
    MR_Word mercury__string__parse_runtime__conv0_HeadVar__1_1;

#line 878 "string.parse_runtime.c"
    {
#line 880 "string.parse_runtime.c"
      mercury__string__parse_runtime____Compare____string_format_spec_0_0(&mercury__string__parse_runtime__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_runtime__wrapper_arg_2), ((MR_Word) mercury__string__parse_runtime__wrapper_arg_3));
    }
#line 883 "string.parse_runtime.c"
    *mercury__string__parse_runtime__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_runtime__conv0_HeadVar__1_1));
#line 885 "string.parse_runtime.c"
  }
#line 887 "string.parse_runtime.c"
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
#line 931 "string.parse_runtime.c"
      *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
#line 26 "string.parse_runtime.m"
    else
#line 26 "string.parse_runtime.m"
      if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 26 "string.parse_runtime.m"
        {
#line 26 "string.parse_runtime.m"
          MR_Char mercury__string__parse_runtime__V_308_308 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
#line 26 "string.parse_runtime.m"
          MR_Word mercury__string__parse_runtime__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));
#line 26 "string.parse_runtime.m"
          MR_Word mercury__string__parse_runtime__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)));

#line 26 "string.parse_runtime.m"
          if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
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
#line 964 "string.parse_runtime.c"
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
#line 984 "string.parse_runtime.c"
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

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_runtime__V_308_308 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 1014 "string.parse_runtime.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_runtime__XI_7_337  = Int;
#line 66 "char.opt"
}
#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_runtime__V_41_41 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 1034 "string.parse_runtime.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_runtime__YI_8_338  = Int;
#line 66 "char.opt"
}
#line 84 "private_builtin.opt"
                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__XI_7_337 < mercury__string__parse_runtime__YI_8_338);
#line 87 "private_builtin.opt"
                      if (mercury__string__parse_runtime__succeeded)
#line 86 "private_builtin.opt"
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 87 "private_builtin.opt"
                      else
#line 92 "private_builtin.opt"
                        {
#line 89 "private_builtin.opt"
                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__XI_7_337 == mercury__string__parse_runtime__YI_8_338);
#line 92 "private_builtin.opt"
                          if (mercury__string__parse_runtime__succeeded)
#line 91 "private_builtin.opt"
                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
#line 92 "private_builtin.opt"
                          else
#line 93 "private_builtin.opt"
                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 92 "private_builtin.opt"
                        }
#line 26 "string.parse_runtime.m"
                    }
#line 26 "string.parse_runtime.m"
                }
#line 26 "string.parse_runtime.m"
            }
#line 26 "string.parse_runtime.m"
          else
#line 26 "string.parse_runtime.m"
            if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1073 "string.parse_runtime.c"
              *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
            else
#line 26 "string.parse_runtime.m"
              if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1079 "string.parse_runtime.c"
                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
              else
#line 26 "string.parse_runtime.m"
                if (((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1085 "string.parse_runtime.c"
                  *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                else
#line 26 "string.parse_runtime.m"
                  if (((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1091 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                  else
#line 1095 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
        }
#line 26 "string.parse_runtime.m"
      else
#line 26 "string.parse_runtime.m"
        if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 26 "string.parse_runtime.m"
          {
#line 26 "string.parse_runtime.m"
            MR_String mercury__string__parse_runtime__V_311_311 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)));

#line 26 "string.parse_runtime.m"
            if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1110 "string.parse_runtime.c"
              *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
            else
#line 26 "string.parse_runtime.m"
              if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 26 "string.parse_runtime.m"
                {
#line 26 "string.parse_runtime.m"
                  MR_String mercury__string__parse_runtime__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)));
#line 26 "string.parse_runtime.m"
                  MR_Integer mercury__string__parse_runtime__Res_7_342;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__parse_runtime__V_311_311 ;
	S2 =  mercury__string__parse_runtime__V_5_5 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 1138 "string.parse_runtime.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_runtime__Res_7_342  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__Res_7_342 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                  if (mercury__string__parse_runtime__succeeded)
#line 104 "private_builtin.opt"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                  else
#line 110 "private_builtin.opt"
                    {
#line 107 "private_builtin.opt"
                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__Res_7_342 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                      if (mercury__string__parse_runtime__succeeded)
#line 109 "private_builtin.opt"
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                      else
#line 111 "private_builtin.opt"
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                    }
#line 26 "string.parse_runtime.m"
                }
#line 26 "string.parse_runtime.m"
              else
#line 26 "string.parse_runtime.m"
                if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1173 "string.parse_runtime.c"
                  *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                else
#line 26 "string.parse_runtime.m"
                  if (((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1179 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                  else
#line 26 "string.parse_runtime.m"
                    if (((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1185 "string.parse_runtime.c"
                      *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                    else
#line 1189 "string.parse_runtime.c"
                      *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
          }
#line 26 "string.parse_runtime.m"
        else
#line 26 "string.parse_runtime.m"
          if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
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
              if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1210 "string.parse_runtime.c"
                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
              else
#line 26 "string.parse_runtime.m"
                if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1216 "string.parse_runtime.c"
                  *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                else
#line 26 "string.parse_runtime.m"
                  if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
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
#line 1240 "string.parse_runtime.c"
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
#line 1260 "string.parse_runtime.c"
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
#line 1280 "string.parse_runtime.c"
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

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__parse_runtime__V_321_321 ;
	S2 =  mercury__string__parse_runtime__V_93_93 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 1310 "string.parse_runtime.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_runtime__Res_7_356  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__Res_7_356 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                                  if (mercury__string__parse_runtime__succeeded)
#line 104 "private_builtin.opt"
                                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                                  else
#line 110 "private_builtin.opt"
                                    {
#line 107 "private_builtin.opt"
                                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__Res_7_356 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                      if (mercury__string__parse_runtime__succeeded)
#line 109 "private_builtin.opt"
                                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                      else
#line 111 "private_builtin.opt"
                                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
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
                  else
#line 26 "string.parse_runtime.m"
                    if (((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1351 "string.parse_runtime.c"
                      *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                    else
#line 26 "string.parse_runtime.m"
                      if (((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1357 "string.parse_runtime.c"
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                      else
#line 1361 "string.parse_runtime.c"
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
            }
#line 26 "string.parse_runtime.m"
          else
#line 26 "string.parse_runtime.m"
            if (((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
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
                if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1384 "string.parse_runtime.c"
                  *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                else
#line 26 "string.parse_runtime.m"
                  if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1390 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                  else
#line 26 "string.parse_runtime.m"
                    if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1396 "string.parse_runtime.c"
                      *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                    else
#line 26 "string.parse_runtime.m"
                      if (((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
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
#line 1422 "string.parse_runtime.c"
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
#line 1442 "string.parse_runtime.c"
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
#line 1462 "string.parse_runtime.c"
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

#line 66 "private_builtin.opt"
                                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_330_330 < mercury__string__parse_runtime__V_331_331);
#line 69 "private_builtin.opt"
                                      if (mercury__string__parse_runtime__succeeded)
#line 68 "private_builtin.opt"
                                        mercury__string__parse_runtime__V_283_283 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                      else
#line 74 "private_builtin.opt"
                                        {
#line 71 "private_builtin.opt"
                                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_330_330 == mercury__string__parse_runtime__V_331_331);
#line 74 "private_builtin.opt"
                                          if (mercury__string__parse_runtime__succeeded)
#line 73 "private_builtin.opt"
                                            mercury__string__parse_runtime__V_283_283 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                          else
#line 75 "private_builtin.opt"
                                            mercury__string__parse_runtime__V_283_283 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                        }
#line 1503 "string.parse_runtime.c"
                                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_283_283 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                                      if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                                        *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_283_283;
#line 26 "string.parse_runtime.m"
                                      else
#line 121 "private_builtin.opt"
                                        {
#line 118 "private_builtin.opt"
                                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_312_312 < mercury__string__parse_runtime__V_279_279);
#line 121 "private_builtin.opt"
                                          if (mercury__string__parse_runtime__succeeded)
#line 120 "private_builtin.opt"
                                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
                                          else
#line 126 "private_builtin.opt"
                                            {
#line 123 "private_builtin.opt"
                                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_312_312 > mercury__string__parse_runtime__V_279_279);
#line 126 "private_builtin.opt"
                                              if (mercury__string__parse_runtime__succeeded)
#line 125 "private_builtin.opt"
                                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
                                              else
#line 127 "private_builtin.opt"
                                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
                                            }
#line 121 "private_builtin.opt"
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
                      else
#line 26 "string.parse_runtime.m"
                        if (((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1551 "string.parse_runtime.c"
                          *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                        else
#line 1555 "string.parse_runtime.c"
                          *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
              }
#line 26 "string.parse_runtime.m"
            else
#line 26 "string.parse_runtime.m"
              if (((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
                  if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1576 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                  else
#line 26 "string.parse_runtime.m"
                    if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1582 "string.parse_runtime.c"
                      *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                    else
#line 26 "string.parse_runtime.m"
                      if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1588 "string.parse_runtime.c"
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                      else
#line 26 "string.parse_runtime.m"
                        if (((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1594 "string.parse_runtime.c"
                          *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                        else
#line 26 "string.parse_runtime.m"
                          if (((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
#line 1618 "string.parse_runtime.c"
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
#line 1638 "string.parse_runtime.c"
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
#line 1658 "string.parse_runtime.c"
                                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_153_153 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                                      if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                                        *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_153_153;
#line 26 "string.parse_runtime.m"
                                      else
#line 69 "private_builtin.opt"
                                        {
#line 66 "private_builtin.opt"
                                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_317_317 < mercury__string__parse_runtime__V_150_150);
#line 69 "private_builtin.opt"
                                          if (mercury__string__parse_runtime__succeeded)
#line 68 "private_builtin.opt"
                                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                          else
#line 74 "private_builtin.opt"
                                            {
#line 71 "private_builtin.opt"
                                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_317_317 == mercury__string__parse_runtime__V_150_150);
#line 74 "private_builtin.opt"
                                              if (mercury__string__parse_runtime__succeeded)
#line 73 "private_builtin.opt"
                                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                              else
#line 75 "private_builtin.opt"
                                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                            }
#line 69 "private_builtin.opt"
                                        }
#line 26 "string.parse_runtime.m"
                                    }
#line 26 "string.parse_runtime.m"
                                }
#line 26 "string.parse_runtime.m"
                            }
#line 26 "string.parse_runtime.m"
                          else
#line 1702 "string.parse_runtime.c"
                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                }
#line 26 "string.parse_runtime.m"
              else
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
                  if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1723 "string.parse_runtime.c"
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                  else
#line 26 "string.parse_runtime.m"
                    if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1729 "string.parse_runtime.c"
                      *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                    else
#line 26 "string.parse_runtime.m"
                      if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1735 "string.parse_runtime.c"
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                      else
#line 26 "string.parse_runtime.m"
                        if (((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1741 "string.parse_runtime.c"
                          *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 26 "string.parse_runtime.m"
                        else
#line 26 "string.parse_runtime.m"
                          if (((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1747 "string.parse_runtime.c"
                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 26 "string.parse_runtime.m"
                          else
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
#line 1771 "string.parse_runtime.c"
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
#line 1791 "string.parse_runtime.c"
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
#line 1811 "string.parse_runtime.c"
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

#line 66 "private_builtin.opt"
                                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_332_332 < mercury__string__parse_runtime__V_333_333);
#line 69 "private_builtin.opt"
                                          if (mercury__string__parse_runtime__succeeded)
#line 68 "private_builtin.opt"
                                            mercury__string__parse_runtime__V_217_217 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                          else
#line 74 "private_builtin.opt"
                                            {
#line 71 "private_builtin.opt"
                                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_332_332 == mercury__string__parse_runtime__V_333_333);
#line 74 "private_builtin.opt"
                                              if (mercury__string__parse_runtime__succeeded)
#line 73 "private_builtin.opt"
                                                mercury__string__parse_runtime__V_217_217 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                              else
#line 75 "private_builtin.opt"
                                                mercury__string__parse_runtime__V_217_217 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                            }
#line 1852 "string.parse_runtime.c"
                                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_217_217 == (MR_Integer) 0);
#line 26 "string.parse_runtime.m"
                                          mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
#line 26 "string.parse_runtime.m"
                                          if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                                            *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_217_217;
#line 26 "string.parse_runtime.m"
                                          else
#line 69 "private_builtin.opt"
                                            {
#line 66 "private_builtin.opt"
                                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_325_325 < mercury__string__parse_runtime__V_213_213);
#line 69 "private_builtin.opt"
                                              if (mercury__string__parse_runtime__succeeded)
#line 68 "private_builtin.opt"
                                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                              else
#line 74 "private_builtin.opt"
                                                {
#line 71 "private_builtin.opt"
                                                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_325_325 == mercury__string__parse_runtime__V_213_213);
#line 74 "private_builtin.opt"
                                                  if (mercury__string__parse_runtime__succeeded)
#line 73 "private_builtin.opt"
                                                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                  else
#line 75 "private_builtin.opt"
                                                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                }
#line 69 "private_builtin.opt"
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
      if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
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
#line 1958 "string.parse_runtime.c"
              {
#line 1960 "string.parse_runtime.c"
                mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(mercury__string__parse_runtime__V_5_5, mercury__string__parse_runtime__V_8_8);
              }
#line 26 "string.parse_runtime.m"
              if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                {
#line 1967 "string.parse_runtime.c"
                  {
#line 1969 "string.parse_runtime.c"
                    mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(mercury__string__parse_runtime__V_6_6, mercury__string__parse_runtime__V_9_9);
                  }
#line 26 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 1974 "string.parse_runtime.c"
                    mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_7_7 == mercury__string__parse_runtime__V_10_10);
#line 26 "string.parse_runtime.m"
                }
#line 26 "string.parse_runtime.m"
            }
#line 26 "string.parse_runtime.m"
        }
#line 26 "string.parse_runtime.m"
      else
#line 26 "string.parse_runtime.m"
        if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
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
#line 2001 "string.parse_runtime.c"
                mercury__string__parse_runtime__succeeded = (strcmp(mercury__string__parse_runtime__V_3_3, mercury__string__parse_runtime__V_4_4) == 0);
#line 26 "string.parse_runtime.m"
              }
#line 26 "string.parse_runtime.m"
          }
#line 26 "string.parse_runtime.m"
        else
#line 26 "string.parse_runtime.m"
          if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 2044 "string.parse_runtime.c"
                  {
#line 2046 "string.parse_runtime.c"
                    mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(mercury__string__parse_runtime__V_11_11, mercury__string__parse_runtime__V_15_15);
                  }
#line 26 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                    {
#line 2053 "string.parse_runtime.c"
                      {
#line 2055 "string.parse_runtime.c"
                        mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(mercury__string__parse_runtime__V_12_12, mercury__string__parse_runtime__V_16_16);
                      }
#line 26 "string.parse_runtime.m"
                      if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                        {
#line 2062 "string.parse_runtime.c"
                          {
#line 2064 "string.parse_runtime.c"
                            mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(mercury__string__parse_runtime__V_13_13, mercury__string__parse_runtime__V_17_17);
                          }
#line 26 "string.parse_runtime.m"
                          if (mercury__string__parse_runtime__succeeded)
#line 2069 "string.parse_runtime.c"
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
          else
#line 26 "string.parse_runtime.m"
            if (((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
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
#line 2122 "string.parse_runtime.c"
                    {
#line 2124 "string.parse_runtime.c"
                      mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(mercury__string__parse_runtime__V_37_37, mercury__string__parse_runtime__V_42_42);
                    }
#line 26 "string.parse_runtime.m"
                    if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                      {
#line 2131 "string.parse_runtime.c"
                        {
#line 2133 "string.parse_runtime.c"
                          mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(mercury__string__parse_runtime__V_38_38, mercury__string__parse_runtime__V_43_43);
                        }
#line 26 "string.parse_runtime.m"
                        if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                          {
#line 2140 "string.parse_runtime.c"
                            {
#line 2142 "string.parse_runtime.c"
                              mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(mercury__string__parse_runtime__V_39_39, mercury__string__parse_runtime__V_44_44);
                            }
#line 26 "string.parse_runtime.m"
                            if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                              {
#line 2149 "string.parse_runtime.c"
                                mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_40_40 == mercury__string__parse_runtime__V_45_45);
#line 26 "string.parse_runtime.m"
                                if (mercury__string__parse_runtime__succeeded)
#line 2153 "string.parse_runtime.c"
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
            else
#line 26 "string.parse_runtime.m"
              if (((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
#line 2202 "string.parse_runtime.c"
                      {
#line 2204 "string.parse_runtime.c"
                        mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(mercury__string__parse_runtime__V_19_19, mercury__string__parse_runtime__V_23_23);
                      }
#line 26 "string.parse_runtime.m"
                      if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                        {
#line 2211 "string.parse_runtime.c"
                          {
#line 2213 "string.parse_runtime.c"
                            mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(mercury__string__parse_runtime__V_20_20, mercury__string__parse_runtime__V_24_24);
                          }
#line 26 "string.parse_runtime.m"
                          if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                            {
#line 2220 "string.parse_runtime.c"
                              {
#line 2222 "string.parse_runtime.c"
                                mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(mercury__string__parse_runtime__V_21_21, mercury__string__parse_runtime__V_25_25);
                              }
#line 26 "string.parse_runtime.m"
                              if (mercury__string__parse_runtime__succeeded)
#line 2227 "string.parse_runtime.c"
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
              else
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
#line 2278 "string.parse_runtime.c"
                      {
#line 2280 "string.parse_runtime.c"
                        mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(mercury__string__parse_runtime__V_27_27, mercury__string__parse_runtime__V_32_32);
                      }
#line 26 "string.parse_runtime.m"
                      if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                        {
#line 2287 "string.parse_runtime.c"
                          {
#line 2289 "string.parse_runtime.c"
                            mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(mercury__string__parse_runtime__V_28_28, mercury__string__parse_runtime__V_33_33);
                          }
#line 26 "string.parse_runtime.m"
                          if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                            {
#line 2296 "string.parse_runtime.c"
                              {
#line 2298 "string.parse_runtime.c"
                                mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(mercury__string__parse_runtime__V_29_29, mercury__string__parse_runtime__V_34_34);
                              }
#line 26 "string.parse_runtime.m"
                              if (mercury__string__parse_runtime__succeeded)
#line 26 "string.parse_runtime.m"
                                {
#line 2305 "string.parse_runtime.c"
                                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_30_30 == mercury__string__parse_runtime__V_35_35);
#line 26 "string.parse_runtime.m"
                                  if (mercury__string__parse_runtime__succeeded)
#line 2309 "string.parse_runtime.c"
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
    return mercury__string__parse_runtime__succeeded;
#line 26 "string.parse_runtime.m"
  }
#line 26 "string.parse_runtime.m"
}

#line 406 "string.parse_runtime.m"
static MR_Word MR_CALL 
mercury__string__parse_runtime__poly_type_to_kind_1_f_0(
#line 406 "string.parse_runtime.m"
  MR_Word mercury__string__parse_runtime__HeadVar__1_1)
#line 406 "string.parse_runtime.m"
{
#line 408 "string.parse_runtime.m"
  {
#line 408 "string.parse_runtime.m"
    MR_bool mercury__string__parse_runtime__succeeded;
#line 408 "string.parse_runtime.m"
    MR_Word mercury__string__parse_runtime__HeadVar__2_2;

#line 408 "string.parse_runtime.m"
    if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 408 "string.parse_runtime.m"
      mercury__string__parse_runtime__HeadVar__2_2 = (MR_Integer) 0;
#line 408 "string.parse_runtime.m"
    else
#line 408 "string.parse_runtime.m"
      if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 411 "string.parse_runtime.m"
        mercury__string__parse_runtime__HeadVar__2_2 = (MR_Integer) 3;
#line 408 "string.parse_runtime.m"
      else
#line 408 "string.parse_runtime.m"
        if (((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 410 "string.parse_runtime.m"
          mercury__string__parse_runtime__HeadVar__2_2 = (MR_Integer) 2;
#line 408 "string.parse_runtime.m"
        else
#line 409 "string.parse_runtime.m"
          mercury__string__parse_runtime__HeadVar__2_2 = (MR_Integer) 1;
#line 408 "string.parse_runtime.m"
    return mercury__string__parse_runtime__HeadVar__2_2;
#line 408 "string.parse_runtime.m"
  }
#line 406 "string.parse_runtime.m"
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
        MR_Word mercury__string__parse_runtime__TypeCtorInfo_147_147;
#line 241 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__V_24_24;
#line 241 "string.parse_runtime.m"
        MR_Integer mercury__string__parse_runtime__V_25_25;
#line 241 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__V_26_26;

#line 243 "string.parse_runtime.m"
        *mercury__string__parse_runtime__Spec_9 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 2414 "string.parse_runtime.c"
        mercury__string__parse_runtime__TypeCtorInfo_147_147 = (MR_Word) &mercury__string__string__type_ctor_info_poly_type_0;
#line 244 "string.parse_runtime.m"
        {
#line 244 "string.parse_runtime.m"
          mercury__string__parse_runtime__V_25_25 = mercury__list__length_1_f_0(mercury__string__parse_runtime__TypeCtorInfo_147_147, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3);
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
#line 400 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__SpecPrime_36;
#line 400 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__ErrorsPrime_37;
#line 400 "string.parse_runtime.m"
        MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80;

#line 247 "string.parse_runtime.m"
        *mercury__string__parse_runtime__STATE_VARIABLE_Chars_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_1, (MR_Integer) 1)));
#line 253 "string.parse_runtime.m"
        if ((mercury__string__parse_runtime__SpecChar_35 == (MR_Char) 37))
#line 250 "string.parse_runtime.m"
          {
#line 251 "string.parse_runtime.m"
            mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[2];
#line 252 "string.parse_runtime.m"
            mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "string.parse_runtime.m"
            mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 250 "string.parse_runtime.m"
            mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 250 "string.parse_runtime.m"
          }
#line 253 "string.parse_runtime.m"
        else
#line 253 "string.parse_runtime.m"
          if ((mercury__string__parse_runtime__SpecChar_35 == (MR_Char) 69))
#line 334 "string.parse_runtime.m"
            {
#line 348 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 349 "string.parse_runtime.m"
                {
#line 349 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__V_65_65;
#line 349 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__Error_110;

#line 350 "string.parse_runtime.m"
                  {
#line 350 "string.parse_runtime.m"
                    mercury__string__parse_runtime__Error_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 350 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 350 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_110, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 350 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_110, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 350 "string.parse_runtime.m"
                  }
#line 351 "string.parse_runtime.m"
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 352 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 352 "string.parse_runtime.m"
                  {
#line 352 "string.parse_runtime.m"
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_110));
#line 352 "string.parse_runtime.m"
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_65_65));
#line 352 "string.parse_runtime.m"
                  }
#line 352 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 349 "string.parse_runtime.m"
                }
#line 348 "string.parse_runtime.m"
              else
#line 337 "string.parse_runtime.m"
                {
#line 337 "string.parse_runtime.m"
                  MR_Word mercury__string__parse_runtime__SpecPolyType_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 342 "string.parse_runtime.m"
                  MR_Float mercury__string__parse_runtime__Float_43;

#line 337 "string.parse_runtime.m"
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 338 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_108)) == (MR_mktag((MR_Integer) 0)));
#line 338 "string.parse_runtime.m"
                  if (mercury__string__parse_runtime__succeeded)
#line 338 "string.parse_runtime.m"
                    {
#line 338 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Float_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_108, (MR_Integer) 0)));
#line 339 "string.parse_runtime.m"
                      {
#line 339 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 339 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 339 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 339 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 339 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 339 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 1));
#line 339 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_43);
#line 339 "string.parse_runtime.m"
                      }
#line 341 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 338 "string.parse_runtime.m"
                    }
#line 338 "string.parse_runtime.m"
                  else
#line 344 "string.parse_runtime.m"
                    {
#line 344 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_67_67;
#line 344 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_69_69;
#line 344 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_106;

#line 344 "string.parse_runtime.m"
                      {
#line 344 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_67_67 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_108);
                      }
#line 343 "string.parse_runtime.m"
                      {
#line 343 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_106 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 343 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_106, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 343 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_106, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 343 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_106, 2) = ((MR_Box) (mercury__string__parse_runtime__V_67_67));
#line 343 "string.parse_runtime.m"
                      }
#line 345 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 346 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_69_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 346 "string.parse_runtime.m"
                      {
#line 346 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_106));
#line 346 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_69_69));
#line 346 "string.parse_runtime.m"
                      }
#line 344 "string.parse_runtime.m"
                    }
#line 337 "string.parse_runtime.m"
                }
#line 334 "string.parse_runtime.m"
              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 334 "string.parse_runtime.m"
            }
#line 253 "string.parse_runtime.m"
          else
#line 253 "string.parse_runtime.m"
            if ((mercury__string__parse_runtime__SpecChar_35 == (MR_Char) 70))
#line 334 "string.parse_runtime.m"
              {
#line 348 "string.parse_runtime.m"
                if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 349 "string.parse_runtime.m"
                  {
#line 349 "string.parse_runtime.m"
                    MR_Word mercury__string__parse_runtime__V_158_158;
#line 349 "string.parse_runtime.m"
                    MR_Word mercury__string__parse_runtime__Error_159;

#line 350 "string.parse_runtime.m"
                    {
#line 350 "string.parse_runtime.m"
                      mercury__string__parse_runtime__Error_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 350 "string.parse_runtime.m"
                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_159, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 350 "string.parse_runtime.m"
                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_159, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 350 "string.parse_runtime.m"
                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_159, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 350 "string.parse_runtime.m"
                    }
#line 351 "string.parse_runtime.m"
                    mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 352 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_158_158 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 352 "string.parse_runtime.m"
                    {
#line 352 "string.parse_runtime.m"
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "string.parse_runtime.m"
                      MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_159));
#line 352 "string.parse_runtime.m"
                      MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_158_158));
#line 352 "string.parse_runtime.m"
                    }
#line 352 "string.parse_runtime.m"
                    mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 349 "string.parse_runtime.m"
                  }
#line 348 "string.parse_runtime.m"
                else
#line 337 "string.parse_runtime.m"
                  {
#line 337 "string.parse_runtime.m"
                    MR_Word mercury__string__parse_runtime__SpecPolyType_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 342 "string.parse_runtime.m"
                    MR_Float mercury__string__parse_runtime__Float_164;

#line 337 "string.parse_runtime.m"
                    mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 338 "string.parse_runtime.m"
                    mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_174)) == (MR_mktag((MR_Integer) 0)));
#line 338 "string.parse_runtime.m"
                    if (mercury__string__parse_runtime__succeeded)
#line 338 "string.parse_runtime.m"
                      {
#line 338 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Float_164 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_174, (MR_Integer) 0)));
#line 339 "string.parse_runtime.m"
                        {
#line 339 "string.parse_runtime.m"
                          mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 339 "string.parse_runtime.m"
                          MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 339 "string.parse_runtime.m"
                          MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 339 "string.parse_runtime.m"
                          MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 339 "string.parse_runtime.m"
                          MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 339 "string.parse_runtime.m"
                          MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 3));
#line 339 "string.parse_runtime.m"
                          MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_164);
#line 339 "string.parse_runtime.m"
                        }
#line 341 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 338 "string.parse_runtime.m"
                      }
#line 338 "string.parse_runtime.m"
                    else
#line 344 "string.parse_runtime.m"
                      {
#line 344 "string.parse_runtime.m"
                        MR_Word mercury__string__parse_runtime__V_160_160;
#line 344 "string.parse_runtime.m"
                        MR_Word mercury__string__parse_runtime__V_162_162;
#line 344 "string.parse_runtime.m"
                        MR_Word mercury__string__parse_runtime__Error_163;

#line 344 "string.parse_runtime.m"
                        {
#line 344 "string.parse_runtime.m"
                          mercury__string__parse_runtime__V_160_160 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_174);
                        }
#line 343 "string.parse_runtime.m"
                        {
#line 343 "string.parse_runtime.m"
                          mercury__string__parse_runtime__Error_163 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 343 "string.parse_runtime.m"
                          MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_163, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 343 "string.parse_runtime.m"
                          MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_163, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 343 "string.parse_runtime.m"
                          MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_163, 2) = ((MR_Box) (mercury__string__parse_runtime__V_160_160));
#line 343 "string.parse_runtime.m"
                        }
#line 345 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 346 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_162_162 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 346 "string.parse_runtime.m"
                        {
#line 346 "string.parse_runtime.m"
                          mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "string.parse_runtime.m"
                          MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_163));
#line 346 "string.parse_runtime.m"
                          MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_162_162));
#line 346 "string.parse_runtime.m"
                        }
#line 344 "string.parse_runtime.m"
                      }
#line 337 "string.parse_runtime.m"
                  }
#line 334 "string.parse_runtime.m"
                mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 334 "string.parse_runtime.m"
              }
#line 253 "string.parse_runtime.m"
            else
#line 253 "string.parse_runtime.m"
              if ((mercury__string__parse_runtime__SpecChar_35 == (MR_Char) 71))
#line 334 "string.parse_runtime.m"
                {
#line 348 "string.parse_runtime.m"
                  if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 349 "string.parse_runtime.m"
                    {
#line 349 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__V_206_206;
#line 349 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__Error_207;

#line 350 "string.parse_runtime.m"
                      {
#line 350 "string.parse_runtime.m"
                        mercury__string__parse_runtime__Error_207 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 350 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_207, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 350 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_207, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 350 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_207, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 350 "string.parse_runtime.m"
                      }
#line 351 "string.parse_runtime.m"
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 352 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_206_206 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 352 "string.parse_runtime.m"
                      {
#line 352 "string.parse_runtime.m"
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_207));
#line 352 "string.parse_runtime.m"
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_206_206));
#line 352 "string.parse_runtime.m"
                      }
#line 352 "string.parse_runtime.m"
                      mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 349 "string.parse_runtime.m"
                    }
#line 348 "string.parse_runtime.m"
                  else
#line 337 "string.parse_runtime.m"
                    {
#line 337 "string.parse_runtime.m"
                      MR_Word mercury__string__parse_runtime__SpecPolyType_222 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 342 "string.parse_runtime.m"
                      MR_Float mercury__string__parse_runtime__Float_212;

#line 337 "string.parse_runtime.m"
                      mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 338 "string.parse_runtime.m"
                      mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_222)) == (MR_mktag((MR_Integer) 0)));
#line 338 "string.parse_runtime.m"
                      if (mercury__string__parse_runtime__succeeded)
#line 338 "string.parse_runtime.m"
                        {
#line 338 "string.parse_runtime.m"
                          mercury__string__parse_runtime__Float_212 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_222, (MR_Integer) 0)));
#line 339 "string.parse_runtime.m"
                          {
#line 339 "string.parse_runtime.m"
                            mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 339 "string.parse_runtime.m"
                            MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 339 "string.parse_runtime.m"
                            MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 339 "string.parse_runtime.m"
                            MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 339 "string.parse_runtime.m"
                            MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 339 "string.parse_runtime.m"
                            MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 5));
#line 339 "string.parse_runtime.m"
                            MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_212);
#line 339 "string.parse_runtime.m"
                          }
#line 341 "string.parse_runtime.m"
                          mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 338 "string.parse_runtime.m"
                        }
#line 338 "string.parse_runtime.m"
                      else
#line 344 "string.parse_runtime.m"
                        {
#line 344 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__V_208_208;
#line 344 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__V_210_210;
#line 344 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__Error_211;

#line 344 "string.parse_runtime.m"
                          {
#line 344 "string.parse_runtime.m"
                            mercury__string__parse_runtime__V_208_208 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_222);
                          }
#line 343 "string.parse_runtime.m"
                          {
#line 343 "string.parse_runtime.m"
                            mercury__string__parse_runtime__Error_211 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 343 "string.parse_runtime.m"
                            MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_211, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 343 "string.parse_runtime.m"
                            MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_211, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 343 "string.parse_runtime.m"
                            MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_211, 2) = ((MR_Box) (mercury__string__parse_runtime__V_208_208));
#line 343 "string.parse_runtime.m"
                          }
#line 345 "string.parse_runtime.m"
                          mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 346 "string.parse_runtime.m"
                          mercury__string__parse_runtime__V_210_210 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 346 "string.parse_runtime.m"
                          {
#line 346 "string.parse_runtime.m"
                            mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "string.parse_runtime.m"
                            MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_211));
#line 346 "string.parse_runtime.m"
                            MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_210_210));
#line 346 "string.parse_runtime.m"
                          }
#line 344 "string.parse_runtime.m"
                        }
#line 337 "string.parse_runtime.m"
                    }
#line 334 "string.parse_runtime.m"
                  mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 334 "string.parse_runtime.m"
                }
#line 253 "string.parse_runtime.m"
              else
#line 253 "string.parse_runtime.m"
                if ((mercury__string__parse_runtime__SpecChar_35 == (MR_Char) 88))
#line 295 "string.parse_runtime.m"
                  {
#line 309 "string.parse_runtime.m"
                    if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "string.parse_runtime.m"
                      {
#line 310 "string.parse_runtime.m"
                        MR_Word mercury__string__parse_runtime__V_73_73;
#line 310 "string.parse_runtime.m"
                        MR_Word mercury__string__parse_runtime__Error_96;

#line 311 "string.parse_runtime.m"
                        {
#line 311 "string.parse_runtime.m"
                          mercury__string__parse_runtime__Error_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 311 "string.parse_runtime.m"
                          MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 311 "string.parse_runtime.m"
                          MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_96, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 311 "string.parse_runtime.m"
                          MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_96, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 311 "string.parse_runtime.m"
                        }
#line 312 "string.parse_runtime.m"
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 313 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_73_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 313 "string.parse_runtime.m"
                        {
#line 313 "string.parse_runtime.m"
                          mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "string.parse_runtime.m"
                          MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_96));
#line 313 "string.parse_runtime.m"
                          MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_73_73));
#line 313 "string.parse_runtime.m"
                        }
#line 313 "string.parse_runtime.m"
                        mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 310 "string.parse_runtime.m"
                      }
#line 309 "string.parse_runtime.m"
                    else
#line 298 "string.parse_runtime.m"
                      {
#line 298 "string.parse_runtime.m"
                        MR_Word mercury__string__parse_runtime__SpecPolyType_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 303 "string.parse_runtime.m"
                        MR_Integer mercury__string__parse_runtime__Int_91;

#line 298 "string.parse_runtime.m"
                        mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 299 "string.parse_runtime.m"
                        mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_93)) == (MR_mktag((MR_Integer) 1)));
#line 299 "string.parse_runtime.m"
                        if (mercury__string__parse_runtime__succeeded)
#line 299 "string.parse_runtime.m"
                          {
#line 299 "string.parse_runtime.m"
                            mercury__string__parse_runtime__Int_91 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_93, (MR_Integer) 0)));
#line 300 "string.parse_runtime.m"
                            {
#line 300 "string.parse_runtime.m"
                              mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 300 "string.parse_runtime.m"
                              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 300 "string.parse_runtime.m"
                              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 300 "string.parse_runtime.m"
                              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 300 "string.parse_runtime.m"
                              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 300 "string.parse_runtime.m"
                              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 3));
#line 300 "string.parse_runtime.m"
                              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = ((MR_Box) (mercury__string__parse_runtime__Int_91));
#line 300 "string.parse_runtime.m"
                            }
#line 302 "string.parse_runtime.m"
                            mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "string.parse_runtime.m"
                          }
#line 299 "string.parse_runtime.m"
                        else
#line 305 "string.parse_runtime.m"
                          {
#line 305 "string.parse_runtime.m"
                            MR_Word mercury__string__parse_runtime__V_75_75;
#line 305 "string.parse_runtime.m"
                            MR_Word mercury__string__parse_runtime__V_77_77;
#line 305 "string.parse_runtime.m"
                            MR_Word mercury__string__parse_runtime__Error_90;

#line 305 "string.parse_runtime.m"
                            {
#line 305 "string.parse_runtime.m"
                              mercury__string__parse_runtime__V_75_75 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_93);
                            }
#line 304 "string.parse_runtime.m"
                            {
#line 304 "string.parse_runtime.m"
                              mercury__string__parse_runtime__Error_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 304 "string.parse_runtime.m"
                              MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_90, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 304 "string.parse_runtime.m"
                              MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_90, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 304 "string.parse_runtime.m"
                              MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_90, 2) = ((MR_Box) (mercury__string__parse_runtime__V_75_75));
#line 304 "string.parse_runtime.m"
                            }
#line 306 "string.parse_runtime.m"
                            mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 307 "string.parse_runtime.m"
                            mercury__string__parse_runtime__V_77_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 307 "string.parse_runtime.m"
                            {
#line 307 "string.parse_runtime.m"
                              mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "string.parse_runtime.m"
                              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_90));
#line 307 "string.parse_runtime.m"
                              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_77_77));
#line 307 "string.parse_runtime.m"
                            }
#line 305 "string.parse_runtime.m"
                          }
#line 298 "string.parse_runtime.m"
                      }
#line 295 "string.parse_runtime.m"
                    mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 295 "string.parse_runtime.m"
                  }
#line 253 "string.parse_runtime.m"
                else
#line 253 "string.parse_runtime.m"
                  if ((mercury__string__parse_runtime__SpecChar_35 == (MR_Char) 99))
#line 369 "string.parse_runtime.m"
                    {
#line 369 "string.parse_runtime.m"
                      if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 370 "string.parse_runtime.m"
                        {
#line 370 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__V_59_59;
#line 370 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__Error_121;

#line 371 "string.parse_runtime.m"
                          {
#line 371 "string.parse_runtime.m"
                            mercury__string__parse_runtime__Error_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 371 "string.parse_runtime.m"
                            MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 371 "string.parse_runtime.m"
                            MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_121, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 371 "string.parse_runtime.m"
                            MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_121, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 371 "string.parse_runtime.m"
                          }
#line 372 "string.parse_runtime.m"
                          mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 373 "string.parse_runtime.m"
                          mercury__string__parse_runtime__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 373 "string.parse_runtime.m"
                          {
#line 373 "string.parse_runtime.m"
                            mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "string.parse_runtime.m"
                            MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_121));
#line 373 "string.parse_runtime.m"
                            MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_59_59));
#line 373 "string.parse_runtime.m"
                          }
#line 373 "string.parse_runtime.m"
                          mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 370 "string.parse_runtime.m"
                        }
#line 369 "string.parse_runtime.m"
                      else
#line 358 "string.parse_runtime.m"
                        {
#line 358 "string.parse_runtime.m"
                          MR_Word mercury__string__parse_runtime__SpecPolyType_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 363 "string.parse_runtime.m"
                          MR_Char mercury__string__parse_runtime__Char_44;

#line 358 "string.parse_runtime.m"
                          mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 359 "string.parse_runtime.m"
                          mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_119)) == (MR_mktag((MR_Integer) 3)));
#line 359 "string.parse_runtime.m"
                          if (mercury__string__parse_runtime__succeeded)
#line 359 "string.parse_runtime.m"
                            {
#line 359 "string.parse_runtime.m"
                              mercury__string__parse_runtime__Char_44 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPolyType_119, (MR_Integer) 0)));
#line 361 "string.parse_runtime.m"
                              {
#line 361 "string.parse_runtime.m"
                                mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 361 "string.parse_runtime.m"
                                MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 361 "string.parse_runtime.m"
                                MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 361 "string.parse_runtime.m"
                                MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__Char_44));
#line 361 "string.parse_runtime.m"
                              }
#line 362 "string.parse_runtime.m"
                              mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 359 "string.parse_runtime.m"
                            }
#line 359 "string.parse_runtime.m"
                          else
#line 365 "string.parse_runtime.m"
                            {
#line 365 "string.parse_runtime.m"
                              MR_Word mercury__string__parse_runtime__V_61_61;
#line 365 "string.parse_runtime.m"
                              MR_Word mercury__string__parse_runtime__V_63_63;
#line 365 "string.parse_runtime.m"
                              MR_Word mercury__string__parse_runtime__Error_117;

#line 365 "string.parse_runtime.m"
                              {
#line 365 "string.parse_runtime.m"
                                mercury__string__parse_runtime__V_61_61 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_119);
                              }
#line 364 "string.parse_runtime.m"
                              {
#line 364 "string.parse_runtime.m"
                                mercury__string__parse_runtime__Error_117 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 364 "string.parse_runtime.m"
                                MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_117, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 364 "string.parse_runtime.m"
                                MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_117, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 364 "string.parse_runtime.m"
                                MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_117, 2) = ((MR_Box) (mercury__string__parse_runtime__V_61_61));
#line 364 "string.parse_runtime.m"
                              }
#line 366 "string.parse_runtime.m"
                              mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 367 "string.parse_runtime.m"
                              mercury__string__parse_runtime__V_63_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 367 "string.parse_runtime.m"
                              {
#line 367 "string.parse_runtime.m"
                                mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "string.parse_runtime.m"
                                MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_117));
#line 367 "string.parse_runtime.m"
                                MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_63_63));
#line 367 "string.parse_runtime.m"
                              }
#line 365 "string.parse_runtime.m"
                            }
#line 358 "string.parse_runtime.m"
                        }
#line 369 "string.parse_runtime.m"
                      mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 369 "string.parse_runtime.m"
                    }
#line 253 "string.parse_runtime.m"
                  else
#line 253 "string.parse_runtime.m"
                    if ((mercury__string__parse_runtime__SpecChar_35 == (MR_Char) 101))
#line 334 "string.parse_runtime.m"
                      {
#line 348 "string.parse_runtime.m"
                        if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 349 "string.parse_runtime.m"
                          {
#line 349 "string.parse_runtime.m"
                            MR_Word mercury__string__parse_runtime__V_254_254;
#line 349 "string.parse_runtime.m"
                            MR_Word mercury__string__parse_runtime__Error_255;

#line 350 "string.parse_runtime.m"
                            {
#line 350 "string.parse_runtime.m"
                              mercury__string__parse_runtime__Error_255 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 350 "string.parse_runtime.m"
                              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_255, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 350 "string.parse_runtime.m"
                              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_255, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 350 "string.parse_runtime.m"
                              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_255, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 350 "string.parse_runtime.m"
                            }
#line 351 "string.parse_runtime.m"
                            mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 352 "string.parse_runtime.m"
                            mercury__string__parse_runtime__V_254_254 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 352 "string.parse_runtime.m"
                            {
#line 352 "string.parse_runtime.m"
                              mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "string.parse_runtime.m"
                              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_255));
#line 352 "string.parse_runtime.m"
                              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_254_254));
#line 352 "string.parse_runtime.m"
                            }
#line 352 "string.parse_runtime.m"
                            mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 349 "string.parse_runtime.m"
                          }
#line 348 "string.parse_runtime.m"
                        else
#line 337 "string.parse_runtime.m"
                          {
#line 337 "string.parse_runtime.m"
                            MR_Word mercury__string__parse_runtime__SpecPolyType_270 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 342 "string.parse_runtime.m"
                            MR_Float mercury__string__parse_runtime__Float_260;

#line 337 "string.parse_runtime.m"
                            mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 338 "string.parse_runtime.m"
                            mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_270)) == (MR_mktag((MR_Integer) 0)));
#line 338 "string.parse_runtime.m"
                            if (mercury__string__parse_runtime__succeeded)
#line 338 "string.parse_runtime.m"
                              {
#line 338 "string.parse_runtime.m"
                                mercury__string__parse_runtime__Float_260 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_270, (MR_Integer) 0)));
#line 339 "string.parse_runtime.m"
                                {
#line 339 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 339 "string.parse_runtime.m"
                                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 339 "string.parse_runtime.m"
                                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 339 "string.parse_runtime.m"
                                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 339 "string.parse_runtime.m"
                                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 339 "string.parse_runtime.m"
                                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 0));
#line 339 "string.parse_runtime.m"
                                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_260);
#line 339 "string.parse_runtime.m"
                                }
#line 341 "string.parse_runtime.m"
                                mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 338 "string.parse_runtime.m"
                              }
#line 338 "string.parse_runtime.m"
                            else
#line 344 "string.parse_runtime.m"
                              {
#line 344 "string.parse_runtime.m"
                                MR_Word mercury__string__parse_runtime__V_256_256;
#line 344 "string.parse_runtime.m"
                                MR_Word mercury__string__parse_runtime__V_258_258;
#line 344 "string.parse_runtime.m"
                                MR_Word mercury__string__parse_runtime__Error_259;

#line 344 "string.parse_runtime.m"
                                {
#line 344 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__V_256_256 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_270);
                                }
#line 343 "string.parse_runtime.m"
                                {
#line 343 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__Error_259 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 343 "string.parse_runtime.m"
                                  MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_259, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 343 "string.parse_runtime.m"
                                  MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_259, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 343 "string.parse_runtime.m"
                                  MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_259, 2) = ((MR_Box) (mercury__string__parse_runtime__V_256_256));
#line 343 "string.parse_runtime.m"
                                }
#line 345 "string.parse_runtime.m"
                                mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 346 "string.parse_runtime.m"
                                mercury__string__parse_runtime__V_258_258 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 346 "string.parse_runtime.m"
                                {
#line 346 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "string.parse_runtime.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_259));
#line 346 "string.parse_runtime.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_258_258));
#line 346 "string.parse_runtime.m"
                                }
#line 344 "string.parse_runtime.m"
                              }
#line 337 "string.parse_runtime.m"
                          }
#line 334 "string.parse_runtime.m"
                        mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 334 "string.parse_runtime.m"
                      }
#line 253 "string.parse_runtime.m"
                    else
#line 253 "string.parse_runtime.m"
                      if ((mercury__string__parse_runtime__SpecChar_35 == (MR_Char) 102))
#line 334 "string.parse_runtime.m"
                        {
#line 348 "string.parse_runtime.m"
                          if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 349 "string.parse_runtime.m"
                            {
#line 349 "string.parse_runtime.m"
                              MR_Word mercury__string__parse_runtime__V_302_302;
#line 349 "string.parse_runtime.m"
                              MR_Word mercury__string__parse_runtime__Error_303;

#line 350 "string.parse_runtime.m"
                              {
#line 350 "string.parse_runtime.m"
                                mercury__string__parse_runtime__Error_303 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 350 "string.parse_runtime.m"
                                MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_303, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 350 "string.parse_runtime.m"
                                MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_303, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 350 "string.parse_runtime.m"
                                MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_303, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 350 "string.parse_runtime.m"
                              }
#line 351 "string.parse_runtime.m"
                              mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 352 "string.parse_runtime.m"
                              mercury__string__parse_runtime__V_302_302 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 352 "string.parse_runtime.m"
                              {
#line 352 "string.parse_runtime.m"
                                mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "string.parse_runtime.m"
                                MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_303));
#line 352 "string.parse_runtime.m"
                                MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_302_302));
#line 352 "string.parse_runtime.m"
                              }
#line 352 "string.parse_runtime.m"
                              mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 349 "string.parse_runtime.m"
                            }
#line 348 "string.parse_runtime.m"
                          else
#line 337 "string.parse_runtime.m"
                            {
#line 337 "string.parse_runtime.m"
                              MR_Word mercury__string__parse_runtime__SpecPolyType_318 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 342 "string.parse_runtime.m"
                              MR_Float mercury__string__parse_runtime__Float_308;

#line 337 "string.parse_runtime.m"
                              mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 338 "string.parse_runtime.m"
                              mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_318)) == (MR_mktag((MR_Integer) 0)));
#line 338 "string.parse_runtime.m"
                              if (mercury__string__parse_runtime__succeeded)
#line 338 "string.parse_runtime.m"
                                {
#line 338 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__Float_308 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_318, (MR_Integer) 0)));
#line 339 "string.parse_runtime.m"
                                  {
#line 339 "string.parse_runtime.m"
                                    mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 339 "string.parse_runtime.m"
                                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 339 "string.parse_runtime.m"
                                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 339 "string.parse_runtime.m"
                                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 339 "string.parse_runtime.m"
                                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 339 "string.parse_runtime.m"
                                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 2));
#line 339 "string.parse_runtime.m"
                                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_308);
#line 339 "string.parse_runtime.m"
                                  }
#line 341 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 338 "string.parse_runtime.m"
                                }
#line 338 "string.parse_runtime.m"
                              else
#line 344 "string.parse_runtime.m"
                                {
#line 344 "string.parse_runtime.m"
                                  MR_Word mercury__string__parse_runtime__V_304_304;
#line 344 "string.parse_runtime.m"
                                  MR_Word mercury__string__parse_runtime__V_306_306;
#line 344 "string.parse_runtime.m"
                                  MR_Word mercury__string__parse_runtime__Error_307;

#line 344 "string.parse_runtime.m"
                                  {
#line 344 "string.parse_runtime.m"
                                    mercury__string__parse_runtime__V_304_304 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_318);
                                  }
#line 343 "string.parse_runtime.m"
                                  {
#line 343 "string.parse_runtime.m"
                                    mercury__string__parse_runtime__Error_307 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 343 "string.parse_runtime.m"
                                    MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_307, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 343 "string.parse_runtime.m"
                                    MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_307, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 343 "string.parse_runtime.m"
                                    MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_307, 2) = ((MR_Box) (mercury__string__parse_runtime__V_304_304));
#line 343 "string.parse_runtime.m"
                                  }
#line 345 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 346 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__V_306_306 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 346 "string.parse_runtime.m"
                                  {
#line 346 "string.parse_runtime.m"
                                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "string.parse_runtime.m"
                                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_307));
#line 346 "string.parse_runtime.m"
                                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_306_306));
#line 346 "string.parse_runtime.m"
                                  }
#line 344 "string.parse_runtime.m"
                                }
#line 337 "string.parse_runtime.m"
                            }
#line 334 "string.parse_runtime.m"
                          mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 334 "string.parse_runtime.m"
                        }
#line 253 "string.parse_runtime.m"
                      else
#line 253 "string.parse_runtime.m"
                        if ((mercury__string__parse_runtime__SpecChar_35 == (MR_Char) 103))
#line 334 "string.parse_runtime.m"
                          {
#line 348 "string.parse_runtime.m"
                            if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 349 "string.parse_runtime.m"
                              {
#line 349 "string.parse_runtime.m"
                                MR_Word mercury__string__parse_runtime__V_350_350;
#line 349 "string.parse_runtime.m"
                                MR_Word mercury__string__parse_runtime__Error_351;

#line 350 "string.parse_runtime.m"
                                {
#line 350 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__Error_351 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 350 "string.parse_runtime.m"
                                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_351, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 350 "string.parse_runtime.m"
                                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_351, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 350 "string.parse_runtime.m"
                                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_351, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 350 "string.parse_runtime.m"
                                }
#line 351 "string.parse_runtime.m"
                                mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 352 "string.parse_runtime.m"
                                mercury__string__parse_runtime__V_350_350 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 352 "string.parse_runtime.m"
                                {
#line 352 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "string.parse_runtime.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_351));
#line 352 "string.parse_runtime.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_350_350));
#line 352 "string.parse_runtime.m"
                                }
#line 352 "string.parse_runtime.m"
                                mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 349 "string.parse_runtime.m"
                              }
#line 348 "string.parse_runtime.m"
                            else
#line 337 "string.parse_runtime.m"
                              {
#line 337 "string.parse_runtime.m"
                                MR_Word mercury__string__parse_runtime__SpecPolyType_366 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 342 "string.parse_runtime.m"
                                MR_Float mercury__string__parse_runtime__Float_356;

#line 337 "string.parse_runtime.m"
                                mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 338 "string.parse_runtime.m"
                                mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_366)) == (MR_mktag((MR_Integer) 0)));
#line 338 "string.parse_runtime.m"
                                if (mercury__string__parse_runtime__succeeded)
#line 338 "string.parse_runtime.m"
                                  {
#line 338 "string.parse_runtime.m"
                                    mercury__string__parse_runtime__Float_356 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_366, (MR_Integer) 0)));
#line 339 "string.parse_runtime.m"
                                    {
#line 339 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 339 "string.parse_runtime.m"
                                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 339 "string.parse_runtime.m"
                                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 339 "string.parse_runtime.m"
                                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 339 "string.parse_runtime.m"
                                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 339 "string.parse_runtime.m"
                                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 4));
#line 339 "string.parse_runtime.m"
                                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_356);
#line 339 "string.parse_runtime.m"
                                    }
#line 341 "string.parse_runtime.m"
                                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 338 "string.parse_runtime.m"
                                  }
#line 338 "string.parse_runtime.m"
                                else
#line 344 "string.parse_runtime.m"
                                  {
#line 344 "string.parse_runtime.m"
                                    MR_Word mercury__string__parse_runtime__V_352_352;
#line 344 "string.parse_runtime.m"
                                    MR_Word mercury__string__parse_runtime__V_354_354;
#line 344 "string.parse_runtime.m"
                                    MR_Word mercury__string__parse_runtime__Error_355;

#line 344 "string.parse_runtime.m"
                                    {
#line 344 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__V_352_352 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_366);
                                    }
#line 343 "string.parse_runtime.m"
                                    {
#line 343 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__Error_355 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 343 "string.parse_runtime.m"
                                      MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_355, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 343 "string.parse_runtime.m"
                                      MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_355, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 343 "string.parse_runtime.m"
                                      MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_355, 2) = ((MR_Box) (mercury__string__parse_runtime__V_352_352));
#line 343 "string.parse_runtime.m"
                                    }
#line 345 "string.parse_runtime.m"
                                    mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 346 "string.parse_runtime.m"
                                    mercury__string__parse_runtime__V_354_354 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 346 "string.parse_runtime.m"
                                    {
#line 346 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "string.parse_runtime.m"
                                      MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_355));
#line 346 "string.parse_runtime.m"
                                      MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_354_354));
#line 346 "string.parse_runtime.m"
                                    }
#line 344 "string.parse_runtime.m"
                                  }
#line 337 "string.parse_runtime.m"
                              }
#line 334 "string.parse_runtime.m"
                            mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 334 "string.parse_runtime.m"
                          }
#line 253 "string.parse_runtime.m"
                        else
#line 253 "string.parse_runtime.m"
                          if ((mercury__string__parse_runtime__SpecChar_35 == (MR_Char) 111))
#line 295 "string.parse_runtime.m"
                            {
#line 309 "string.parse_runtime.m"
                              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "string.parse_runtime.m"
                                {
#line 310 "string.parse_runtime.m"
                                  MR_Word mercury__string__parse_runtime__V_398_398;
#line 310 "string.parse_runtime.m"
                                  MR_Word mercury__string__parse_runtime__Error_399;

#line 311 "string.parse_runtime.m"
                                  {
#line 311 "string.parse_runtime.m"
                                    mercury__string__parse_runtime__Error_399 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 311 "string.parse_runtime.m"
                                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_399, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 311 "string.parse_runtime.m"
                                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_399, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 311 "string.parse_runtime.m"
                                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_399, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 311 "string.parse_runtime.m"
                                  }
#line 312 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 313 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__V_398_398 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 313 "string.parse_runtime.m"
                                  {
#line 313 "string.parse_runtime.m"
                                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "string.parse_runtime.m"
                                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_399));
#line 313 "string.parse_runtime.m"
                                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_398_398));
#line 313 "string.parse_runtime.m"
                                  }
#line 313 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 310 "string.parse_runtime.m"
                                }
#line 309 "string.parse_runtime.m"
                              else
#line 298 "string.parse_runtime.m"
                                {
#line 298 "string.parse_runtime.m"
                                  MR_Word mercury__string__parse_runtime__SpecPolyType_414 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 303 "string.parse_runtime.m"
                                  MR_Integer mercury__string__parse_runtime__Int_408;

#line 298 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 299 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_414)) == (MR_mktag((MR_Integer) 1)));
#line 299 "string.parse_runtime.m"
                                  if (mercury__string__parse_runtime__succeeded)
#line 299 "string.parse_runtime.m"
                                    {
#line 299 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__Int_408 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_414, (MR_Integer) 0)));
#line 300 "string.parse_runtime.m"
                                      {
#line 300 "string.parse_runtime.m"
                                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 300 "string.parse_runtime.m"
                                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 300 "string.parse_runtime.m"
                                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 300 "string.parse_runtime.m"
                                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 300 "string.parse_runtime.m"
                                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 300 "string.parse_runtime.m"
                                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 0));
#line 300 "string.parse_runtime.m"
                                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = ((MR_Box) (mercury__string__parse_runtime__Int_408));
#line 300 "string.parse_runtime.m"
                                      }
#line 302 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "string.parse_runtime.m"
                                    }
#line 299 "string.parse_runtime.m"
                                  else
#line 305 "string.parse_runtime.m"
                                    {
#line 305 "string.parse_runtime.m"
                                      MR_Word mercury__string__parse_runtime__V_400_400;
#line 305 "string.parse_runtime.m"
                                      MR_Word mercury__string__parse_runtime__V_402_402;
#line 305 "string.parse_runtime.m"
                                      MR_Word mercury__string__parse_runtime__Error_403;

#line 305 "string.parse_runtime.m"
                                      {
#line 305 "string.parse_runtime.m"
                                        mercury__string__parse_runtime__V_400_400 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_414);
                                      }
#line 304 "string.parse_runtime.m"
                                      {
#line 304 "string.parse_runtime.m"
                                        mercury__string__parse_runtime__Error_403 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 304 "string.parse_runtime.m"
                                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_403, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 304 "string.parse_runtime.m"
                                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_403, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 304 "string.parse_runtime.m"
                                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_403, 2) = ((MR_Box) (mercury__string__parse_runtime__V_400_400));
#line 304 "string.parse_runtime.m"
                                      }
#line 306 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 307 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__V_402_402 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 307 "string.parse_runtime.m"
                                      {
#line 307 "string.parse_runtime.m"
                                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "string.parse_runtime.m"
                                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_403));
#line 307 "string.parse_runtime.m"
                                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_402_402));
#line 307 "string.parse_runtime.m"
                                      }
#line 305 "string.parse_runtime.m"
                                    }
#line 298 "string.parse_runtime.m"
                                }
#line 295 "string.parse_runtime.m"
                              mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 295 "string.parse_runtime.m"
                            }
#line 253 "string.parse_runtime.m"
                          else
#line 253 "string.parse_runtime.m"
                            if ((mercury__string__parse_runtime__SpecChar_35 == (MR_Char) 112))
#line 295 "string.parse_runtime.m"
                              {
#line 295 "string.parse_runtime.m"
                                MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Flags_70_490;
#line 294 "string.parse_runtime.m"
                                MR_Word mercury__string__parse_runtime__V_143_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 294 "string.parse_runtime.m"
                                MR_Word mercury__string__parse_runtime__V_144_144 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 294 "string.parse_runtime.m"
                                MR_Word mercury__string__parse_runtime__V_145_145 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 294 "string.parse_runtime.m"
                                MR_Word mercury__string__parse_runtime__V_146_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 294 "string.parse_runtime.m"
                                MR_Word mercury__string__parse_runtime__V_142_142 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__5_5, (MR_Integer) 0)))) & (MR_Integer) 1);

#line 294 "string.parse_runtime.m"
                                {
#line 294 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__STATE_VARIABLE_Flags_70_490 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 294 "string.parse_runtime.m"
                                  MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__STATE_VARIABLE_Flags_70_490, 0) = ((MR_Box) (((MR_Integer) 1 | ((((mercury__string__parse_runtime__V_143_143 << (MR_Integer) 1)) | ((((mercury__string__parse_runtime__V_144_144 << (MR_Integer) 2)) | ((((mercury__string__parse_runtime__V_145_145 << (MR_Integer) 3)) | ((mercury__string__parse_runtime__V_146_146 << (MR_Integer) 4)))))))))));
#line 294 "string.parse_runtime.m"
                                }
#line 309 "string.parse_runtime.m"
                                if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "string.parse_runtime.m"
                                  {
#line 310 "string.parse_runtime.m"
                                    MR_Word mercury__string__parse_runtime__V_445_445;
#line 310 "string.parse_runtime.m"
                                    MR_Word mercury__string__parse_runtime__Error_446;

#line 311 "string.parse_runtime.m"
                                    {
#line 311 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__Error_446 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 311 "string.parse_runtime.m"
                                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_446, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 311 "string.parse_runtime.m"
                                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_446, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 311 "string.parse_runtime.m"
                                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_446, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 311 "string.parse_runtime.m"
                                    }
#line 312 "string.parse_runtime.m"
                                    mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 313 "string.parse_runtime.m"
                                    mercury__string__parse_runtime__V_445_445 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 313 "string.parse_runtime.m"
                                    {
#line 313 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "string.parse_runtime.m"
                                      MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_446));
#line 313 "string.parse_runtime.m"
                                      MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_445_445));
#line 313 "string.parse_runtime.m"
                                    }
#line 313 "string.parse_runtime.m"
                                    mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 310 "string.parse_runtime.m"
                                  }
#line 309 "string.parse_runtime.m"
                                else
#line 298 "string.parse_runtime.m"
                                  {
#line 298 "string.parse_runtime.m"
                                    MR_Word mercury__string__parse_runtime__SpecPolyType_461 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 303 "string.parse_runtime.m"
                                    MR_Integer mercury__string__parse_runtime__Int_455;

#line 298 "string.parse_runtime.m"
                                    mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 299 "string.parse_runtime.m"
                                    mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_461)) == (MR_mktag((MR_Integer) 1)));
#line 299 "string.parse_runtime.m"
                                    if (mercury__string__parse_runtime__succeeded)
#line 299 "string.parse_runtime.m"
                                      {
#line 299 "string.parse_runtime.m"
                                        mercury__string__parse_runtime__Int_455 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_461, (MR_Integer) 0)));
#line 300 "string.parse_runtime.m"
                                        {
#line 300 "string.parse_runtime.m"
                                          mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 300 "string.parse_runtime.m"
                                          MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 300 "string.parse_runtime.m"
                                          MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__STATE_VARIABLE_Flags_70_490));
#line 300 "string.parse_runtime.m"
                                          MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 300 "string.parse_runtime.m"
                                          MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 300 "string.parse_runtime.m"
                                          MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 4));
#line 300 "string.parse_runtime.m"
                                          MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = ((MR_Box) (mercury__string__parse_runtime__Int_455));
#line 300 "string.parse_runtime.m"
                                        }
#line 302 "string.parse_runtime.m"
                                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "string.parse_runtime.m"
                                      }
#line 299 "string.parse_runtime.m"
                                    else
#line 305 "string.parse_runtime.m"
                                      {
#line 305 "string.parse_runtime.m"
                                        MR_Word mercury__string__parse_runtime__V_447_447;
#line 305 "string.parse_runtime.m"
                                        MR_Word mercury__string__parse_runtime__V_449_449;
#line 305 "string.parse_runtime.m"
                                        MR_Word mercury__string__parse_runtime__Error_450;

#line 305 "string.parse_runtime.m"
                                        {
#line 305 "string.parse_runtime.m"
                                          mercury__string__parse_runtime__V_447_447 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_461);
                                        }
#line 304 "string.parse_runtime.m"
                                        {
#line 304 "string.parse_runtime.m"
                                          mercury__string__parse_runtime__Error_450 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 304 "string.parse_runtime.m"
                                          MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_450, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 304 "string.parse_runtime.m"
                                          MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_450, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 304 "string.parse_runtime.m"
                                          MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_450, 2) = ((MR_Box) (mercury__string__parse_runtime__V_447_447));
#line 304 "string.parse_runtime.m"
                                        }
#line 306 "string.parse_runtime.m"
                                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 307 "string.parse_runtime.m"
                                        mercury__string__parse_runtime__V_449_449 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 307 "string.parse_runtime.m"
                                        {
#line 307 "string.parse_runtime.m"
                                          mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "string.parse_runtime.m"
                                          MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_450));
#line 307 "string.parse_runtime.m"
                                          MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_449_449));
#line 307 "string.parse_runtime.m"
                                        }
#line 305 "string.parse_runtime.m"
                                      }
#line 298 "string.parse_runtime.m"
                                  }
#line 295 "string.parse_runtime.m"
                                mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 295 "string.parse_runtime.m"
                              }
#line 253 "string.parse_runtime.m"
                            else
#line 253 "string.parse_runtime.m"
                              if ((mercury__string__parse_runtime__SpecChar_35 == (MR_Char) 115))
#line 390 "string.parse_runtime.m"
                                {
#line 390 "string.parse_runtime.m"
                                  if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "string.parse_runtime.m"
                                    {
#line 391 "string.parse_runtime.m"
                                      MR_Word mercury__string__parse_runtime__V_53_53;
#line 391 "string.parse_runtime.m"
                                      MR_Word mercury__string__parse_runtime__Error_132;

#line 392 "string.parse_runtime.m"
                                      {
#line 392 "string.parse_runtime.m"
                                        mercury__string__parse_runtime__Error_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "string.parse_runtime.m"
                                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_132, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 392 "string.parse_runtime.m"
                                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_132, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 392 "string.parse_runtime.m"
                                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_132, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 392 "string.parse_runtime.m"
                                      }
#line 393 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 394 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 394 "string.parse_runtime.m"
                                      {
#line 394 "string.parse_runtime.m"
                                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "string.parse_runtime.m"
                                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_132));
#line 394 "string.parse_runtime.m"
                                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_53_53));
#line 394 "string.parse_runtime.m"
                                      }
#line 394 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 391 "string.parse_runtime.m"
                                    }
#line 390 "string.parse_runtime.m"
                                  else
#line 379 "string.parse_runtime.m"
                                    {
#line 379 "string.parse_runtime.m"
                                      MR_Word mercury__string__parse_runtime__SpecPolyType_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 384 "string.parse_runtime.m"
                                      MR_String mercury__string__parse_runtime__Str_45;

#line 379 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 380 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_130)) == (MR_mktag((MR_Integer) 2)));
#line 380 "string.parse_runtime.m"
                                      if (mercury__string__parse_runtime__succeeded)
#line 380 "string.parse_runtime.m"
                                        {
#line 380 "string.parse_runtime.m"
                                          mercury__string__parse_runtime__Str_45 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__SpecPolyType_130, (MR_Integer) 0)));
#line 381 "string.parse_runtime.m"
                                          {
#line 381 "string.parse_runtime.m"
                                            mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 381 "string.parse_runtime.m"
                                            MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 381 "string.parse_runtime.m"
                                            MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 381 "string.parse_runtime.m"
                                            MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 381 "string.parse_runtime.m"
                                            MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__Str_45));
#line 381 "string.parse_runtime.m"
                                          }
#line 383 "string.parse_runtime.m"
                                          mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 380 "string.parse_runtime.m"
                                        }
#line 380 "string.parse_runtime.m"
                                      else
#line 386 "string.parse_runtime.m"
                                        {
#line 386 "string.parse_runtime.m"
                                          MR_Word mercury__string__parse_runtime__V_55_55;
#line 386 "string.parse_runtime.m"
                                          MR_Word mercury__string__parse_runtime__V_57_57;
#line 386 "string.parse_runtime.m"
                                          MR_Word mercury__string__parse_runtime__Error_128;

#line 386 "string.parse_runtime.m"
                                          {
#line 386 "string.parse_runtime.m"
                                            mercury__string__parse_runtime__V_55_55 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_130);
                                          }
#line 385 "string.parse_runtime.m"
                                          {
#line 385 "string.parse_runtime.m"
                                            mercury__string__parse_runtime__Error_128 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 385 "string.parse_runtime.m"
                                            MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_128, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 385 "string.parse_runtime.m"
                                            MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_128, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 385 "string.parse_runtime.m"
                                            MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_128, 2) = ((MR_Box) (mercury__string__parse_runtime__V_55_55));
#line 385 "string.parse_runtime.m"
                                          }
#line 387 "string.parse_runtime.m"
                                          mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 388 "string.parse_runtime.m"
                                          mercury__string__parse_runtime__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "string.parse_runtime.m"
                                          {
#line 388 "string.parse_runtime.m"
                                            mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "string.parse_runtime.m"
                                            MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_128));
#line 388 "string.parse_runtime.m"
                                            MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_57_57));
#line 388 "string.parse_runtime.m"
                                          }
#line 386 "string.parse_runtime.m"
                                        }
#line 379 "string.parse_runtime.m"
                                    }
#line 390 "string.parse_runtime.m"
                                  mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 390 "string.parse_runtime.m"
                                }
#line 253 "string.parse_runtime.m"
                              else
#line 253 "string.parse_runtime.m"
                                if ((mercury__string__parse_runtime__SpecChar_35 == (MR_Char) 117))
#line 295 "string.parse_runtime.m"
                                  {
#line 309 "string.parse_runtime.m"
                                    if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "string.parse_runtime.m"
                                      {
#line 310 "string.parse_runtime.m"
                                        MR_Word mercury__string__parse_runtime__V_492_492;
#line 310 "string.parse_runtime.m"
                                        MR_Word mercury__string__parse_runtime__Error_493;

#line 311 "string.parse_runtime.m"
                                        {
#line 311 "string.parse_runtime.m"
                                          mercury__string__parse_runtime__Error_493 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 311 "string.parse_runtime.m"
                                          MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_493, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 311 "string.parse_runtime.m"
                                          MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_493, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 311 "string.parse_runtime.m"
                                          MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_493, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 311 "string.parse_runtime.m"
                                        }
#line 312 "string.parse_runtime.m"
                                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 313 "string.parse_runtime.m"
                                        mercury__string__parse_runtime__V_492_492 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 313 "string.parse_runtime.m"
                                        {
#line 313 "string.parse_runtime.m"
                                          mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "string.parse_runtime.m"
                                          MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_493));
#line 313 "string.parse_runtime.m"
                                          MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_492_492));
#line 313 "string.parse_runtime.m"
                                        }
#line 313 "string.parse_runtime.m"
                                        mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 310 "string.parse_runtime.m"
                                      }
#line 309 "string.parse_runtime.m"
                                    else
#line 298 "string.parse_runtime.m"
                                      {
#line 298 "string.parse_runtime.m"
                                        MR_Word mercury__string__parse_runtime__SpecPolyType_508 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 303 "string.parse_runtime.m"
                                        MR_Integer mercury__string__parse_runtime__Int_502;

#line 298 "string.parse_runtime.m"
                                        mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 299 "string.parse_runtime.m"
                                        mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_508)) == (MR_mktag((MR_Integer) 1)));
#line 299 "string.parse_runtime.m"
                                        if (mercury__string__parse_runtime__succeeded)
#line 299 "string.parse_runtime.m"
                                          {
#line 299 "string.parse_runtime.m"
                                            mercury__string__parse_runtime__Int_502 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_508, (MR_Integer) 0)));
#line 300 "string.parse_runtime.m"
                                            {
#line 300 "string.parse_runtime.m"
                                              mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 300 "string.parse_runtime.m"
                                              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 300 "string.parse_runtime.m"
                                              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 300 "string.parse_runtime.m"
                                              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 300 "string.parse_runtime.m"
                                              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 300 "string.parse_runtime.m"
                                              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 1));
#line 300 "string.parse_runtime.m"
                                              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = ((MR_Box) (mercury__string__parse_runtime__Int_502));
#line 300 "string.parse_runtime.m"
                                            }
#line 302 "string.parse_runtime.m"
                                            mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "string.parse_runtime.m"
                                          }
#line 299 "string.parse_runtime.m"
                                        else
#line 305 "string.parse_runtime.m"
                                          {
#line 305 "string.parse_runtime.m"
                                            MR_Word mercury__string__parse_runtime__V_494_494;
#line 305 "string.parse_runtime.m"
                                            MR_Word mercury__string__parse_runtime__V_496_496;
#line 305 "string.parse_runtime.m"
                                            MR_Word mercury__string__parse_runtime__Error_497;

#line 305 "string.parse_runtime.m"
                                            {
#line 305 "string.parse_runtime.m"
                                              mercury__string__parse_runtime__V_494_494 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_508);
                                            }
#line 304 "string.parse_runtime.m"
                                            {
#line 304 "string.parse_runtime.m"
                                              mercury__string__parse_runtime__Error_497 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 304 "string.parse_runtime.m"
                                              MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_497, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 304 "string.parse_runtime.m"
                                              MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_497, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 304 "string.parse_runtime.m"
                                              MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_497, 2) = ((MR_Box) (mercury__string__parse_runtime__V_494_494));
#line 304 "string.parse_runtime.m"
                                            }
#line 306 "string.parse_runtime.m"
                                            mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 307 "string.parse_runtime.m"
                                            mercury__string__parse_runtime__V_496_496 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 307 "string.parse_runtime.m"
                                            {
#line 307 "string.parse_runtime.m"
                                              mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "string.parse_runtime.m"
                                              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_497));
#line 307 "string.parse_runtime.m"
                                              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_496_496));
#line 307 "string.parse_runtime.m"
                                            }
#line 305 "string.parse_runtime.m"
                                          }
#line 298 "string.parse_runtime.m"
                                      }
#line 295 "string.parse_runtime.m"
                                    mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 295 "string.parse_runtime.m"
                                  }
#line 253 "string.parse_runtime.m"
                                else
#line 253 "string.parse_runtime.m"
                                  if ((mercury__string__parse_runtime__SpecChar_35 == (MR_Char) 120))
#line 295 "string.parse_runtime.m"
                                    {
#line 309 "string.parse_runtime.m"
                                      if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "string.parse_runtime.m"
                                        {
#line 310 "string.parse_runtime.m"
                                          MR_Word mercury__string__parse_runtime__V_539_539;
#line 310 "string.parse_runtime.m"
                                          MR_Word mercury__string__parse_runtime__Error_540;

#line 311 "string.parse_runtime.m"
                                          {
#line 311 "string.parse_runtime.m"
                                            mercury__string__parse_runtime__Error_540 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 311 "string.parse_runtime.m"
                                            MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_540, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 311 "string.parse_runtime.m"
                                            MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_540, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 311 "string.parse_runtime.m"
                                            MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_540, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 311 "string.parse_runtime.m"
                                          }
#line 312 "string.parse_runtime.m"
                                          mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 313 "string.parse_runtime.m"
                                          mercury__string__parse_runtime__V_539_539 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 313 "string.parse_runtime.m"
                                          {
#line 313 "string.parse_runtime.m"
                                            mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "string.parse_runtime.m"
                                            MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_540));
#line 313 "string.parse_runtime.m"
                                            MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_539_539));
#line 313 "string.parse_runtime.m"
                                          }
#line 313 "string.parse_runtime.m"
                                          mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 310 "string.parse_runtime.m"
                                        }
#line 309 "string.parse_runtime.m"
                                      else
#line 298 "string.parse_runtime.m"
                                        {
#line 298 "string.parse_runtime.m"
                                          MR_Word mercury__string__parse_runtime__SpecPolyType_555 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 303 "string.parse_runtime.m"
                                          MR_Integer mercury__string__parse_runtime__Int_549;

#line 298 "string.parse_runtime.m"
                                          mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 299 "string.parse_runtime.m"
                                          mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_555)) == (MR_mktag((MR_Integer) 1)));
#line 299 "string.parse_runtime.m"
                                          if (mercury__string__parse_runtime__succeeded)
#line 299 "string.parse_runtime.m"
                                            {
#line 299 "string.parse_runtime.m"
                                              mercury__string__parse_runtime__Int_549 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_555, (MR_Integer) 0)));
#line 300 "string.parse_runtime.m"
                                              {
#line 300 "string.parse_runtime.m"
                                                mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 300 "string.parse_runtime.m"
                                                MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 300 "string.parse_runtime.m"
                                                MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
#line 300 "string.parse_runtime.m"
                                                MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
#line 300 "string.parse_runtime.m"
                                                MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
#line 300 "string.parse_runtime.m"
                                                MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 2));
#line 300 "string.parse_runtime.m"
                                                MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = ((MR_Box) (mercury__string__parse_runtime__Int_549));
#line 300 "string.parse_runtime.m"
                                              }
#line 302 "string.parse_runtime.m"
                                              mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "string.parse_runtime.m"
                                            }
#line 299 "string.parse_runtime.m"
                                          else
#line 305 "string.parse_runtime.m"
                                            {
#line 305 "string.parse_runtime.m"
                                              MR_Word mercury__string__parse_runtime__V_541_541;
#line 305 "string.parse_runtime.m"
                                              MR_Word mercury__string__parse_runtime__V_543_543;
#line 305 "string.parse_runtime.m"
                                              MR_Word mercury__string__parse_runtime__Error_544;

#line 305 "string.parse_runtime.m"
                                              {
#line 305 "string.parse_runtime.m"
                                                mercury__string__parse_runtime__V_541_541 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_555);
                                              }
#line 304 "string.parse_runtime.m"
                                              {
#line 304 "string.parse_runtime.m"
                                                mercury__string__parse_runtime__Error_544 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 304 "string.parse_runtime.m"
                                                MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_544, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 304 "string.parse_runtime.m"
                                                MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_544, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 304 "string.parse_runtime.m"
                                                MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_544, 2) = ((MR_Box) (mercury__string__parse_runtime__V_541_541));
#line 304 "string.parse_runtime.m"
                                              }
#line 306 "string.parse_runtime.m"
                                              mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 307 "string.parse_runtime.m"
                                              mercury__string__parse_runtime__V_543_543 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 307 "string.parse_runtime.m"
                                              {
#line 307 "string.parse_runtime.m"
                                                mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "string.parse_runtime.m"
                                                MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_544));
#line 307 "string.parse_runtime.m"
                                                MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_543_543));
#line 307 "string.parse_runtime.m"
                                              }
#line 305 "string.parse_runtime.m"
                                            }
#line 298 "string.parse_runtime.m"
                                        }
#line 295 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__succeeded = MR_TRUE;
#line 295 "string.parse_runtime.m"
                                    }
#line 253 "string.parse_runtime.m"
                                  else
#line 253 "string.parse_runtime.m"
                                    if ((((mercury__string__parse_runtime__SpecChar_35 == (MR_Char) 100)) || ((mercury__string__parse_runtime__SpecChar_35 == (MR_Char) 105))))
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
#line 275 "string.parse_runtime.m"
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
#line 253 "string.parse_runtime.m"
                                    else
#line 253 "string.parse_runtime.m"
                                      mercury__string__parse_runtime__succeeded = MR_FALSE;
#line 400 "string.parse_runtime.m"
        if (mercury__string__parse_runtime__succeeded)
#line 398 "string.parse_runtime.m"
          {
#line 398 "string.parse_runtime.m"
            *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_4 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80;
#line 398 "string.parse_runtime.m"
            *mercury__string__parse_runtime__Spec_9 = mercury__string__parse_runtime__SpecPrime_36;
#line 399 "string.parse_runtime.m"
            *mercury__string__parse_runtime__Errors_10 = mercury__string__parse_runtime__ErrorsPrime_37;
#line 398 "string.parse_runtime.m"
          }
#line 400 "string.parse_runtime.m"
        else
#line 401 "string.parse_runtime.m"
          {
#line 401 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__V_86_86;
#line 401 "string.parse_runtime.m"
            MR_Word mercury__string__parse_runtime__Error_140;

#line 401 "string.parse_runtime.m"
            {
#line 401 "string.parse_runtime.m"
              mercury__string__parse_runtime__Error_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__Error_140, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
#line 401 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__Error_140, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
#line 401 "string.parse_runtime.m"
            }
#line 402 "string.parse_runtime.m"
            *mercury__string__parse_runtime__Spec_9 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
#line 403 "string.parse_runtime.m"
            mercury__string__parse_runtime__V_86_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 403 "string.parse_runtime.m"
            {
#line 403 "string.parse_runtime.m"
              MR_Word base;
#line 403 "string.parse_runtime.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "string.parse_runtime.m"
              *mercury__string__parse_runtime__Errors_10 = base;
#line 403 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_140));
#line 403 "string.parse_runtime.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_runtime__V_86_86));
#line 403 "string.parse_runtime.m"
            }
#line 403 "string.parse_runtime.m"
            *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_4 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
#line 401 "string.parse_runtime.m"
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
#line 205 "string.parse_runtime.m"
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
#line 408 "string.parse_runtime.m"
                    if (((MR_tag((MR_Word) mercury__string__parse_runtime__PolyType_13)) == (MR_mktag((MR_Integer) 3))))
#line 408 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_28_28 = (MR_Integer) 0;
#line 408 "string.parse_runtime.m"
                    else
#line 408 "string.parse_runtime.m"
                      if (((MR_tag((MR_Word) mercury__string__parse_runtime__PolyType_13)) == (MR_mktag((MR_Integer) 0))))
#line 411 "string.parse_runtime.m"
                        mercury__string__parse_runtime__V_28_28 = (MR_Integer) 3;
#line 408 "string.parse_runtime.m"
                      else
#line 408 "string.parse_runtime.m"
                        if (((MR_tag((MR_Word) mercury__string__parse_runtime__PolyType_13)) == (MR_mktag((MR_Integer) 1))))
#line 410 "string.parse_runtime.m"
                          mercury__string__parse_runtime__V_28_28 = (MR_Integer) 2;
#line 408 "string.parse_runtime.m"
                        else
#line 409 "string.parse_runtime.m"
                          mercury__string__parse_runtime__V_28_28 = (MR_Integer) 1;
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
#line 211 "string.parse_runtime.m"
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
#line 215 "string.parse_runtime.m"
        *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_19 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18;
#line 215 "string.parse_runtime.m"
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
#line 173 "string.parse_runtime.m"
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
#line 408 "string.parse_runtime.m"
                if (((MR_tag((MR_Word) mercury__string__parse_runtime__PolyType_47)) == (MR_mktag((MR_Integer) 3))))
#line 408 "string.parse_runtime.m"
                  mercury__string__parse_runtime__V_56_56 = (MR_Integer) 0;
#line 408 "string.parse_runtime.m"
                else
#line 408 "string.parse_runtime.m"
                  if (((MR_tag((MR_Word) mercury__string__parse_runtime__PolyType_47)) == (MR_mktag((MR_Integer) 0))))
#line 411 "string.parse_runtime.m"
                    mercury__string__parse_runtime__V_56_56 = (MR_Integer) 3;
#line 408 "string.parse_runtime.m"
                  else
#line 408 "string.parse_runtime.m"
                    if (((MR_tag((MR_Word) mercury__string__parse_runtime__PolyType_47)) == (MR_mktag((MR_Integer) 1))))
#line 410 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_56_56 = (MR_Integer) 2;
#line 408 "string.parse_runtime.m"
                    else
#line 409 "string.parse_runtime.m"
                      mercury__string__parse_runtime__V_56_56 = (MR_Integer) 1;
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
#line 180 "string.parse_runtime.m"
            mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_30 = mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29;
#line 179 "string.parse_runtime.m"
          }
#line 180 "string.parse_runtime.m"
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
#line 4992 "string.parse_runtime.c"
    mercury__string__parse_runtime__TypeCtorInfo_37_37 = (MR_Word) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0;
#line 46 "list.opt"
    {
#line 46 "list.opt"
      mercury__list__append_3_p_1(mercury__string__parse_runtime__TypeCtorInfo_37_37, mercury__string__parse_runtime__PrecErrors_18, mercury__string__parse_runtime__SpecErrors_19, &mercury__string__parse_runtime__V_36_36);
    }
#line 46 "list.opt"
    {
#line 46 "list.opt"
      mercury__list__append_3_p_1(mercury__string__parse_runtime__TypeCtorInfo_37_37, mercury__string__parse_runtime__WidthErrors_16, mercury__string__parse_runtime__V_36_36, mercury__string__parse_runtime__Errors_12);
#line 46 "list.opt"
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

#line 78 "list.opt"
            {
#line 78 "list.opt"
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
#line 5162 "string.parse_runtime.c"
            mercury__string__parse_runtime__TypeCtorInfo_39_39 = (MR_Word) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0;
#line 46 "list.opt"
            {
#line 46 "list.opt"
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

#line 141 "string.opt"
        {
#line 141 "string.opt"
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
