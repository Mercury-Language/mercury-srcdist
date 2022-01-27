/*
** Automatically generated from `string.parse_runtime.m'
** by the Mercury compiler,
** version rotd-2016-05-05
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




static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_0[1];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_0;

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_1[3];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_1;

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_2[4];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_2;

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_3[4];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_3;

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_4[5];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_4;

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_5[5];

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_5;

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_0[1];

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_1[1];

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_2[1];

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_3[3];

static const MR_DuPtagLayout mercury__string__parse_runtime__string__parse_runtime__du_ptag_ordered_string_format_spec_0[4];

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_name_ordered_string_format_spec_0[6];

static const MR_Integer mercury__string__parse_runtime__string__parse_runtime__functor_number_map_string_format_spec_0[6];

static MR_bool MR_CALL 
mercury__string__parse_runtime____Unify____string_format_spec_0_0_10001(
  MR_Box mercury__string__parse_runtime__wrapper_arg_1,
  MR_Box mercury__string__parse_runtime__wrapper_arg_2);

static void MR_CALL 
mercury__string__parse_runtime____Compare____string_format_spec_0_0_10001(
  MR_Box * mercury__string__parse_runtime__wrapper_arg_1,
  MR_Box mercury__string__parse_runtime__wrapper_arg_2,
  MR_Box mercury__string__parse_runtime__wrapper_arg_3);

static MR_Integer MR_CALL 
mercury__string__parse_runtime__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_Word MR_CALL 
mercury__string__parse_runtime__poly_type_to_kind_1_f_0(
  MR_Word mercury__string__parse_runtime__HeadVar__1_1);

static void MR_CALL 
mercury__string__parse_runtime__get_first_spec_10_p_0(
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_1,
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_Chars_2,
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3,
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_4,
  MR_Word mercury__string__parse_runtime__HeadVar__5_5,
  MR_Word mercury__string__parse_runtime__HeadVar__6_6,
  MR_Word mercury__string__parse_runtime__HeadVar__7_7,
  MR_Integer mercury__string__parse_runtime__SpecNum_8,
  MR_Word * mercury__string__parse_runtime__Spec_9,
  MR_Word * mercury__string__parse_runtime__Errors_10);

static void MR_CALL 
mercury__string__parse_runtime__get_optional_prec_7_p_0(
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_16,
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_Chars_17,
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18,
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_19,
  MR_Integer mercury__string__parse_runtime__SpecNum_10,
  MR_Word * mercury__string__parse_runtime__MaybePrec_11,
  MR_Word * mercury__string__parse_runtime__Errors_12);

static void MR_CALL 
mercury__string__parse_runtime__parse_conversion_specification_7_p_0(
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_20,
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_Chars_21,
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22,
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_23,
  MR_Integer mercury__string__parse_runtime__SpecNum_10,
  MR_Word * mercury__string__parse_runtime__Spec_11,
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
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "version_array.mh"



static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_1[3] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_2[4] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_3[4] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_4[5] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_int_base_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_5[5] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_float_kind_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_3[3] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_3,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_4,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_5
};

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

static const MR_DuFunctorDescPtr mercury__string__parse_runtime__string__parse_runtime__du_name_ordered_string_format_spec_0[6] = {
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_1,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_0,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_5,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_3,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_2,
  &mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_4
};

static const MR_Integer mercury__string__parse_runtime__string__parse_runtime__functor_number_map_string_format_spec_0[6] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__string__parse_runtime__string__parse_runtime__type_ctor_info_string_format_spec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static MR_bool MR_CALL 
mercury__string__parse_runtime____Unify____string_format_spec_0_0_10001(
  MR_Box mercury__string__parse_runtime__wrapper_arg_1,
  MR_Box mercury__string__parse_runtime__wrapper_arg_2)
{
  {
    MR_bool mercury__string__parse_runtime__succeeded;

    {
      mercury__string__parse_runtime__succeeded = mercury__string__parse_runtime____Unify____string_format_spec_0_0(((MR_Word) mercury__string__parse_runtime__wrapper_arg_1), ((MR_Word) mercury__string__parse_runtime__wrapper_arg_2));
    }
    return mercury__string__parse_runtime__succeeded;
  }
}

static void MR_CALL 
mercury__string__parse_runtime____Compare____string_format_spec_0_0_10001(
  MR_Box * mercury__string__parse_runtime__wrapper_arg_1,
  MR_Box mercury__string__parse_runtime__wrapper_arg_2,
  MR_Box mercury__string__parse_runtime__wrapper_arg_3)
{
  {
    MR_Word mercury__string__parse_runtime__conv0_HeadVar__1_1;

    {
      mercury__string__parse_runtime____Compare____string_format_spec_0_0(&mercury__string__parse_runtime__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_runtime__wrapper_arg_2), ((MR_Word) mercury__string__parse_runtime__wrapper_arg_3));
    }
    *mercury__string__parse_runtime__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_runtime__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__string__parse_runtime__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__string__parse_runtime__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__string__parse_runtime____Compare____string_format_spec_0_0(
  MR_Word * mercury__string__parse_runtime__HeadVar__1_1,
  MR_Word mercury__string__parse_runtime__HeadVar__2_2,
  MR_Word mercury__string__parse_runtime__HeadVar__3_3)
{
  {
    MR_bool mercury__string__parse_runtime__succeeded;
    MR_Integer mercury__string__parse_runtime__CastX_284 = (MR_Integer) mercury__string__parse_runtime__HeadVar__2_2;
    MR_Integer mercury__string__parse_runtime__CastY_285 = (MR_Integer) mercury__string__parse_runtime__HeadVar__3_3;

    mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__CastX_284 == mercury__string__parse_runtime__CastY_285);
    if (mercury__string__parse_runtime__succeeded)
      *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String mercury__string__parse_runtime__V_311_311 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String mercury__string__parse_runtime__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__string__parse_runtime__V_7_342;

{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__parse_runtime__V_311_311 ;
	S2 =  mercury__string__parse_runtime__V_5_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_runtime__V_7_342  = Res;
}
                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_7_342 < (MR_Integer) 0);
                  if (mercury__string__parse_runtime__succeeded)
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                  else
                    {
                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_7_342 == (MR_Integer) 0);
                      if (mercury__string__parse_runtime__succeeded)
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                    }
                }
                break;
              case (MR_Integer) 1:
                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Char mercury__string__parse_runtime__V_308_308 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mercury__string__parse_runtime__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__string__parse_runtime__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mercury__string__parse_runtime__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mercury__string__parse_runtime__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Char mercury__string__parse_runtime__V_41_41 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mercury__string__parse_runtime__V_42_42;

                  {
                    mercury__string__parse_util____Compare____string_format_flags_0_0(&mercury__string__parse_runtime__V_42_42, mercury__string__parse_runtime__V_310_310, mercury__string__parse_runtime__V_39_39);
                  }
                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_42_42 == (MR_Integer) 0);
                  mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
                  if (mercury__string__parse_runtime__succeeded)
                    *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_42_42;
                  else
                    {
                      MR_Word mercury__string__parse_runtime__V_43_43;

                      {
                        mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&mercury__string__parse_runtime__V_43_43, mercury__string__parse_runtime__V_309_309, mercury__string__parse_runtime__V_40_40);
                      }
                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_43_43 == (MR_Integer) 0);
                      mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
                      if (mercury__string__parse_runtime__succeeded)
                        *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_43_43;
                      else
                        {
                          MR_Integer mercury__string__parse_runtime__V_7_337;
                          MR_Integer mercury__string__parse_runtime__V_8_338;

{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_runtime__V_308_308 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_runtime__V_7_337  = Int;
}
{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_runtime__V_41_41 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_runtime__V_8_338  = Int;
}
                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_7_337 < mercury__string__parse_runtime__V_8_338);
                          if (mercury__string__parse_runtime__succeeded)
                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                          else
                            {
                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_7_337 == mercury__string__parse_runtime__V_8_338);
                              if (mercury__string__parse_runtime__succeeded)
                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mercury__string__parse_runtime__V_321_321 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 3)));
            MR_Word mercury__string__parse_runtime__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mercury__string__parse_runtime__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__string__parse_runtime__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__string__parse_runtime__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mercury__string__parse_runtime__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__string__parse_runtime__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 2)));
                  MR_String mercury__string__parse_runtime__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word mercury__string__parse_runtime__V_94_94;

                  {
                    mercury__string__parse_util____Compare____string_format_flags_0_0(&mercury__string__parse_runtime__V_94_94, mercury__string__parse_runtime__V_324_324, mercury__string__parse_runtime__V_90_90);
                  }
                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_94_94 == (MR_Integer) 0);
                  mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
                  if (mercury__string__parse_runtime__succeeded)
                    *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_94_94;
                  else
                    {
                      MR_Word mercury__string__parse_runtime__V_95_95;

                      {
                        mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&mercury__string__parse_runtime__V_95_95, mercury__string__parse_runtime__V_323_323, mercury__string__parse_runtime__V_91_91);
                      }
                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_95_95 == (MR_Integer) 0);
                      mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
                      if (mercury__string__parse_runtime__succeeded)
                        *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_95_95;
                      else
                        {
                          MR_Word mercury__string__parse_runtime__V_96_96;

                          {
                            mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&mercury__string__parse_runtime__V_96_96, mercury__string__parse_runtime__V_322_322, mercury__string__parse_runtime__V_92_92);
                          }
                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_96_96 == (MR_Integer) 0);
                          mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
                          if (mercury__string__parse_runtime__succeeded)
                            *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_96_96;
                          else
                            {
                              MR_Integer mercury__string__parse_runtime__V_7_356;

{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__parse_runtime__V_321_321 ;
	S2 =  mercury__string__parse_runtime__V_93_93 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_runtime__V_7_356  = Res;
}
                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_7_356 < (MR_Integer) 0);
                              if (mercury__string__parse_runtime__succeeded)
                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                              else
                                {
                                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_7_356 == (MR_Integer) 0);
                                  if (mercury__string__parse_runtime__succeeded)
                                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
                                  else
                                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                                }
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__string__parse_runtime__V_317_317 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 4)));
                MR_Word mercury__string__parse_runtime__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 3)));
                MR_Word mercury__string__parse_runtime__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
                MR_Word mercury__string__parse_runtime__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word mercury__string__parse_runtime__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word mercury__string__parse_runtime__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word mercury__string__parse_runtime__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Integer mercury__string__parse_runtime__V_150_150 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Word mercury__string__parse_runtime__V_151_151;

                          {
                            mercury__string__parse_util____Compare____string_format_flags_0_0(&mercury__string__parse_runtime__V_151_151, mercury__string__parse_runtime__V_320_320, mercury__string__parse_runtime__V_147_147);
                          }
                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_151_151 == (MR_Integer) 0);
                          mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
                          if (mercury__string__parse_runtime__succeeded)
                            *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_151_151;
                          else
                            {
                              MR_Word mercury__string__parse_runtime__V_152_152;

                              {
                                mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&mercury__string__parse_runtime__V_152_152, mercury__string__parse_runtime__V_319_319, mercury__string__parse_runtime__V_148_148);
                              }
                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_152_152 == (MR_Integer) 0);
                              mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
                              if (mercury__string__parse_runtime__succeeded)
                                *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_152_152;
                              else
                                {
                                  MR_Word mercury__string__parse_runtime__V_153_153;

                                  {
                                    mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&mercury__string__parse_runtime__V_153_153, mercury__string__parse_runtime__V_318_318, mercury__string__parse_runtime__V_149_149);
                                  }
                                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_153_153 == (MR_Integer) 0);
                                  mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
                                  if (mercury__string__parse_runtime__succeeded)
                                    *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_153_153;
                                  else
                                    {
                                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_317_317 < mercury__string__parse_runtime__V_150_150);
                                      if (mercury__string__parse_runtime__succeeded)
                                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                                      else
                                        {
                                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_317_317 == mercury__string__parse_runtime__V_150_150);
                                          if (mercury__string__parse_runtime__succeeded)
                                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
                                          else
                                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                                        }
                                    }
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mercury__string__parse_runtime__V_325_325 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 5)));
                MR_Word mercury__string__parse_runtime__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 4)));
                MR_Word mercury__string__parse_runtime__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 3)));
                MR_Word mercury__string__parse_runtime__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
                MR_Word mercury__string__parse_runtime__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word mercury__string__parse_runtime__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word mercury__string__parse_runtime__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word mercury__string__parse_runtime__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word mercury__string__parse_runtime__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Integer mercury__string__parse_runtime__V_213_213 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 5)));
                          MR_Word mercury__string__parse_runtime__V_214_214;

                          {
                            mercury__string__parse_util____Compare____string_format_flags_0_0(&mercury__string__parse_runtime__V_214_214, mercury__string__parse_runtime__V_329_329, mercury__string__parse_runtime__V_209_209);
                          }
                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_214_214 == (MR_Integer) 0);
                          mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
                          if (mercury__string__parse_runtime__succeeded)
                            *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_214_214;
                          else
                            {
                              MR_Word mercury__string__parse_runtime__V_215_215;

                              {
                                mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&mercury__string__parse_runtime__V_215_215, mercury__string__parse_runtime__V_328_328, mercury__string__parse_runtime__V_210_210);
                              }
                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_215_215 == (MR_Integer) 0);
                              mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
                              if (mercury__string__parse_runtime__succeeded)
                                *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_215_215;
                              else
                                {
                                  MR_Word mercury__string__parse_runtime__V_216_216;

                                  {
                                    mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&mercury__string__parse_runtime__V_216_216, mercury__string__parse_runtime__V_327_327, mercury__string__parse_runtime__V_211_211);
                                  }
                                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_216_216 == (MR_Integer) 0);
                                  mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
                                  if (mercury__string__parse_runtime__succeeded)
                                    *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_216_216;
                                  else
                                    {
                                      MR_Word mercury__string__parse_runtime__V_217_217;
                                      MR_Integer mercury__string__parse_runtime__V_332_332 = (MR_Integer) mercury__string__parse_runtime__V_326_326;
                                      MR_Integer mercury__string__parse_runtime__V_333_333 = (MR_Integer) mercury__string__parse_runtime__V_212_212;

                                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_332_332 < mercury__string__parse_runtime__V_333_333);
                                      if (mercury__string__parse_runtime__succeeded)
                                        mercury__string__parse_runtime__V_217_217 = (MR_Integer) 1;
                                      else
                                        {
                                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_332_332 == mercury__string__parse_runtime__V_333_333);
                                          if (mercury__string__parse_runtime__succeeded)
                                            mercury__string__parse_runtime__V_217_217 = (MR_Integer) 0;
                                          else
                                            mercury__string__parse_runtime__V_217_217 = (MR_Integer) 2;
                                        }
                                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_217_217 == (MR_Integer) 0);
                                      mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
                                      if (mercury__string__parse_runtime__succeeded)
                                        *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_217_217;
                                      else
                                        {
                                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_325_325 < mercury__string__parse_runtime__V_213_213);
                                          if (mercury__string__parse_runtime__succeeded)
                                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                                          else
                                            {
                                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_325_325 == mercury__string__parse_runtime__V_213_213);
                                              if (mercury__string__parse_runtime__succeeded)
                                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
                                              else
                                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Float mercury__string__parse_runtime__V_312_312 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 5)));
                MR_Word mercury__string__parse_runtime__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 4)));
                MR_Word mercury__string__parse_runtime__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 3)));
                MR_Word mercury__string__parse_runtime__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
                MR_Word mercury__string__parse_runtime__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word mercury__string__parse_runtime__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word mercury__string__parse_runtime__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word mercury__string__parse_runtime__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word mercury__string__parse_runtime__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Float mercury__string__parse_runtime__V_279_279 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__3_3, (MR_Integer) 5)));
                          MR_Word mercury__string__parse_runtime__V_280_280;

                          {
                            mercury__string__parse_util____Compare____string_format_flags_0_0(&mercury__string__parse_runtime__V_280_280, mercury__string__parse_runtime__V_316_316, mercury__string__parse_runtime__V_275_275);
                          }
                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_280_280 == (MR_Integer) 0);
                          mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
                          if (mercury__string__parse_runtime__succeeded)
                            *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_280_280;
                          else
                            {
                              MR_Word mercury__string__parse_runtime__V_281_281;

                              {
                                mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&mercury__string__parse_runtime__V_281_281, mercury__string__parse_runtime__V_315_315, mercury__string__parse_runtime__V_276_276);
                              }
                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_281_281 == (MR_Integer) 0);
                              mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
                              if (mercury__string__parse_runtime__succeeded)
                                *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_281_281;
                              else
                                {
                                  MR_Word mercury__string__parse_runtime__V_282_282;

                                  {
                                    mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&mercury__string__parse_runtime__V_282_282, mercury__string__parse_runtime__V_314_314, mercury__string__parse_runtime__V_277_277);
                                  }
                                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_282_282 == (MR_Integer) 0);
                                  mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
                                  if (mercury__string__parse_runtime__succeeded)
                                    *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_282_282;
                                  else
                                    {
                                      MR_Word mercury__string__parse_runtime__V_283_283;
                                      MR_Integer mercury__string__parse_runtime__V_330_330 = (MR_Integer) mercury__string__parse_runtime__V_313_313;
                                      MR_Integer mercury__string__parse_runtime__V_331_331 = (MR_Integer) mercury__string__parse_runtime__V_278_278;

                                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_330_330 < mercury__string__parse_runtime__V_331_331);
                                      if (mercury__string__parse_runtime__succeeded)
                                        mercury__string__parse_runtime__V_283_283 = (MR_Integer) 1;
                                      else
                                        {
                                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_330_330 == mercury__string__parse_runtime__V_331_331);
                                          if (mercury__string__parse_runtime__succeeded)
                                            mercury__string__parse_runtime__V_283_283 = (MR_Integer) 0;
                                          else
                                            mercury__string__parse_runtime__V_283_283 = (MR_Integer) 2;
                                        }
                                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_283_283 == (MR_Integer) 0);
                                      mercury__string__parse_runtime__succeeded = !(mercury__string__parse_runtime__succeeded);
                                      if (mercury__string__parse_runtime__succeeded)
                                        *mercury__string__parse_runtime__HeadVar__1_1 = mercury__string__parse_runtime__V_283_283;
                                      else
                                        {
                                          mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_312_312 < mercury__string__parse_runtime__V_279_279);
                                          if (mercury__string__parse_runtime__succeeded)
                                            *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 1;
                                          else
                                            {
                                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_312_312 > mercury__string__parse_runtime__V_279_279);
                                              if (mercury__string__parse_runtime__succeeded)
                                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 2;
                                              else
                                                *mercury__string__parse_runtime__HeadVar__1_1 = (MR_Integer) 0;
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
  MR_Word mercury__string__parse_runtime__HeadVar__1_1,
  MR_Word mercury__string__parse_runtime__HeadVar__2_2)
{
  {
    MR_bool mercury__string__parse_runtime__succeeded;
    MR_Integer mercury__string__parse_runtime__CastX_47 = (MR_Integer) mercury__string__parse_runtime__HeadVar__1_1;
    MR_Integer mercury__string__parse_runtime__CastY_48 = (MR_Integer) mercury__string__parse_runtime__HeadVar__2_2;

    mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__CastX_47 == mercury__string__parse_runtime__CastY_48);
    if (mercury__string__parse_runtime__succeeded)
      mercury__string__parse_runtime__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String mercury__string__parse_runtime__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__string__parse_runtime__V_4_4;

            mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (mercury__string__parse_runtime__succeeded)
              {
                mercury__string__parse_runtime__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)));
                mercury__string__parse_runtime__succeeded = (strcmp(mercury__string__parse_runtime__V_3_3, mercury__string__parse_runtime__V_4_4) == 0);
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__string__parse_runtime__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__string__parse_runtime__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 1)));
            MR_Char mercury__string__parse_runtime__V_7_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__string__parse_runtime__V_8_8;
            MR_Word mercury__string__parse_runtime__V_9_9;
            MR_Char mercury__string__parse_runtime__V_10_10;

            mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__string__parse_runtime__succeeded)
              {
                mercury__string__parse_runtime__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)));
                mercury__string__parse_runtime__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));
                mercury__string__parse_runtime__V_10_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
                {
                  mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(mercury__string__parse_runtime__V_5_5, mercury__string__parse_runtime__V_8_8);
                }
                if (mercury__string__parse_runtime__succeeded)
                  {
                    {
                      mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(mercury__string__parse_runtime__V_6_6, mercury__string__parse_runtime__V_9_9);
                    }
                    if (mercury__string__parse_runtime__succeeded)
                      mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_7_7 == mercury__string__parse_runtime__V_10_10);
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__string__parse_runtime__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__string__parse_runtime__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__string__parse_runtime__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 2)));
            MR_String mercury__string__parse_runtime__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word mercury__string__parse_runtime__V_15_15;
            MR_Word mercury__string__parse_runtime__V_16_16;
            MR_Word mercury__string__parse_runtime__V_17_17;
            MR_String mercury__string__parse_runtime__V_18_18;

            mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__string__parse_runtime__succeeded)
              {
                mercury__string__parse_runtime__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)));
                mercury__string__parse_runtime__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));
                mercury__string__parse_runtime__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
                mercury__string__parse_runtime__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 3)));
                {
                  mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(mercury__string__parse_runtime__V_11_11, mercury__string__parse_runtime__V_15_15);
                }
                if (mercury__string__parse_runtime__succeeded)
                  {
                    {
                      mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(mercury__string__parse_runtime__V_12_12, mercury__string__parse_runtime__V_16_16);
                    }
                    if (mercury__string__parse_runtime__succeeded)
                      {
                        {
                          mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(mercury__string__parse_runtime__V_13_13, mercury__string__parse_runtime__V_17_17);
                        }
                        if (mercury__string__parse_runtime__succeeded)
                          mercury__string__parse_runtime__succeeded = (strcmp(mercury__string__parse_runtime__V_14_14, mercury__string__parse_runtime__V_18_18) == 0);
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mercury__string__parse_runtime__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mercury__string__parse_runtime__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word mercury__string__parse_runtime__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 3)));
                MR_Integer mercury__string__parse_runtime__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 4)));
                MR_Word mercury__string__parse_runtime__V_23_23;
                MR_Word mercury__string__parse_runtime__V_24_24;
                MR_Word mercury__string__parse_runtime__V_25_25;
                MR_Integer mercury__string__parse_runtime__V_26_26;

                mercury__string__parse_runtime__succeeded = ((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mercury__string__parse_runtime__succeeded)
                  {
                    mercury__string__parse_runtime__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__string__parse_runtime__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
                    mercury__string__parse_runtime__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 3)));
                    mercury__string__parse_runtime__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 4)));
                    {
                      mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(mercury__string__parse_runtime__V_19_19, mercury__string__parse_runtime__V_23_23);
                    }
                    if (mercury__string__parse_runtime__succeeded)
                      {
                        {
                          mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(mercury__string__parse_runtime__V_20_20, mercury__string__parse_runtime__V_24_24);
                        }
                        if (mercury__string__parse_runtime__succeeded)
                          {
                            {
                              mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(mercury__string__parse_runtime__V_21_21, mercury__string__parse_runtime__V_25_25);
                            }
                            if (mercury__string__parse_runtime__succeeded)
                              mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_22_22 == mercury__string__parse_runtime__V_26_26);
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__string__parse_runtime__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mercury__string__parse_runtime__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word mercury__string__parse_runtime__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 3)));
                MR_Word mercury__string__parse_runtime__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 4)));
                MR_Integer mercury__string__parse_runtime__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 5)));
                MR_Word mercury__string__parse_runtime__V_32_32;
                MR_Word mercury__string__parse_runtime__V_33_33;
                MR_Word mercury__string__parse_runtime__V_34_34;
                MR_Word mercury__string__parse_runtime__V_35_35;
                MR_Integer mercury__string__parse_runtime__V_36_36;

                mercury__string__parse_runtime__succeeded = ((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mercury__string__parse_runtime__succeeded)
                  {
                    mercury__string__parse_runtime__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__string__parse_runtime__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
                    mercury__string__parse_runtime__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 3)));
                    mercury__string__parse_runtime__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 4)));
                    mercury__string__parse_runtime__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 5)));
                    {
                      mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(mercury__string__parse_runtime__V_27_27, mercury__string__parse_runtime__V_32_32);
                    }
                    if (mercury__string__parse_runtime__succeeded)
                      {
                        {
                          mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(mercury__string__parse_runtime__V_28_28, mercury__string__parse_runtime__V_33_33);
                        }
                        if (mercury__string__parse_runtime__succeeded)
                          {
                            {
                              mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(mercury__string__parse_runtime__V_29_29, mercury__string__parse_runtime__V_34_34);
                            }
                            if (mercury__string__parse_runtime__succeeded)
                              {
                                mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_30_30 == mercury__string__parse_runtime__V_35_35);
                                if (mercury__string__parse_runtime__succeeded)
                                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_31_31 == mercury__string__parse_runtime__V_36_36);
                              }
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__string__parse_runtime__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mercury__string__parse_runtime__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word mercury__string__parse_runtime__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 3)));
                MR_Word mercury__string__parse_runtime__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 4)));
                MR_Float mercury__string__parse_runtime__V_41_41 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__1_1, (MR_Integer) 5)));
                MR_Word mercury__string__parse_runtime__V_42_42;
                MR_Word mercury__string__parse_runtime__V_43_43;
                MR_Word mercury__string__parse_runtime__V_44_44;
                MR_Word mercury__string__parse_runtime__V_45_45;
                MR_Float mercury__string__parse_runtime__V_46_46;

                mercury__string__parse_runtime__succeeded = ((((MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (mercury__string__parse_runtime__succeeded)
                  {
                    mercury__string__parse_runtime__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__string__parse_runtime__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 2)));
                    mercury__string__parse_runtime__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 3)));
                    mercury__string__parse_runtime__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 4)));
                    mercury__string__parse_runtime__V_46_46 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__HeadVar__2_2, (MR_Integer) 5)));
                    {
                      mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(mercury__string__parse_runtime__V_37_37, mercury__string__parse_runtime__V_42_42);
                    }
                    if (mercury__string__parse_runtime__succeeded)
                      {
                        {
                          mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(mercury__string__parse_runtime__V_38_38, mercury__string__parse_runtime__V_43_43);
                        }
                        if (mercury__string__parse_runtime__succeeded)
                          {
                            {
                              mercury__string__parse_runtime__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(mercury__string__parse_runtime__V_39_39, mercury__string__parse_runtime__V_44_44);
                            }
                            if (mercury__string__parse_runtime__succeeded)
                              {
                                mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_40_40 == mercury__string__parse_runtime__V_45_45);
                                if (mercury__string__parse_runtime__succeeded)
                                  mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_41_41 == mercury__string__parse_runtime__V_46_46);
                              }
                          }
                      }
                  }
              }
              break;
          }
          break;
      }
    return mercury__string__parse_runtime__succeeded;
  }
}

static MR_Word MR_CALL 
mercury__string__parse_runtime__poly_type_to_kind_1_f_0(
  MR_Word mercury__string__parse_runtime__HeadVar__1_1)
{
  {
    MR_bool mercury__string__parse_runtime__succeeded;
    MR_Word mercury__string__parse_runtime__HeadVar__2_2;

    switch (MR_tag((MR_Word) mercury__string__parse_runtime__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__string__parse_runtime__HeadVar__2_2 = (MR_Integer) 3;
        break;
      case (MR_Integer) 1:
        mercury__string__parse_runtime__HeadVar__2_2 = (MR_Integer) 2;
        break;
      case (MR_Integer) 2:
        mercury__string__parse_runtime__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        mercury__string__parse_runtime__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return mercury__string__parse_runtime__HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__string__parse_runtime__get_first_spec_10_p_0(
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_1,
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_Chars_2,
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3,
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_4,
  MR_Word mercury__string__parse_runtime__HeadVar__5_5,
  MR_Word mercury__string__parse_runtime__HeadVar__6_6,
  MR_Word mercury__string__parse_runtime__HeadVar__7_7,
  MR_Integer mercury__string__parse_runtime__SpecNum_8,
  MR_Word * mercury__string__parse_runtime__Spec_9,
  MR_Word * mercury__string__parse_runtime__Errors_10)
{
  {
    MR_bool mercury__string__parse_runtime__succeeded;

    if ((mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__string__parse_runtime__TypeCtorInfo_138_138;
        MR_Word mercury__string__parse_runtime__V_24_24;
        MR_Integer mercury__string__parse_runtime__V_25_25;
        MR_Word mercury__string__parse_runtime__V_26_26;

        *mercury__string__parse_runtime__Spec_9 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
        mercury__string__parse_runtime__TypeCtorInfo_138_138 = (MR_Word) &mercury__string__string__type_ctor_info_poly_type_0;
        {
          mercury__string__parse_runtime__V_25_25 = mercury__list__length_1_f_0(mercury__string__parse_runtime__TypeCtorInfo_138_138, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3);
        }
        {
          mercury__string__parse_runtime__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__V_24_24, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
          MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__V_24_24, 1) = ((MR_Box) (mercury__string__parse_runtime__V_25_25));
        }
        mercury__string__parse_runtime__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__string__parse_runtime__Errors_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__V_24_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_runtime__V_26_26));
        }
        *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_4 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
        *mercury__string__parse_runtime__STATE_VARIABLE_Chars_2 = mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_1;
      }
    else
      {
        MR_Char mercury__string__parse_runtime__SpecChar_35 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_1, (MR_Integer) 0)));
        MR_Word mercury__string__parse_runtime__SpecPrime_36;
        MR_Word mercury__string__parse_runtime__ErrorsPrime_37;
        MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80;

        *mercury__string__parse_runtime__STATE_VARIABLE_Chars_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_1, (MR_Integer) 1)));
        switch (mercury__string__parse_runtime__SpecChar_35) {
          default:
            mercury__string__parse_runtime__succeeded = MR_FALSE;
            break;
          case (MR_Char) 37:
            {
              mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[2];
              mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
              mercury__string__parse_runtime__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 69:
            {
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word mercury__string__parse_runtime__V_65_65;
                  MR_Word mercury__string__parse_runtime__Error_107;

                  {
                    mercury__string__parse_runtime__Error_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_107, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_107, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                  }
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                  mercury__string__parse_runtime__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_107));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_65_65));
                  }
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
                }
              else
                {
                  MR_Word mercury__string__parse_runtime__SpecPolyType_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
                  MR_Float mercury__string__parse_runtime__Float_43;

                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_105)) == (MR_mktag((MR_Integer) 0)));
                  if (mercury__string__parse_runtime__succeeded)
                    {
                      mercury__string__parse_runtime__Float_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_105, (MR_Integer) 0)));
                      {
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_43);
                      }
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word mercury__string__parse_runtime__V_67_67;
                      MR_Word mercury__string__parse_runtime__V_69_69;
                      MR_Word mercury__string__parse_runtime__Error_103;

                      {
                        mercury__string__parse_runtime__V_67_67 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_105);
                      }
                      {
                        mercury__string__parse_runtime__Error_103 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_103, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_103, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_103, 2) = ((MR_Box) (mercury__string__parse_runtime__V_67_67));
                      }
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                      mercury__string__parse_runtime__V_69_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_103));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_69_69));
                      }
                    }
                }
              mercury__string__parse_runtime__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 70:
            {
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word mercury__string__parse_runtime__V_149_149;
                  MR_Word mercury__string__parse_runtime__Error_150;

                  {
                    mercury__string__parse_runtime__Error_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_150, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_150, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                  }
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                  mercury__string__parse_runtime__V_149_149 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_150));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_149_149));
                  }
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
                }
              else
                {
                  MR_Word mercury__string__parse_runtime__SpecPolyType_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
                  MR_Float mercury__string__parse_runtime__Float_155;

                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_165)) == (MR_mktag((MR_Integer) 0)));
                  if (mercury__string__parse_runtime__succeeded)
                    {
                      mercury__string__parse_runtime__Float_155 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_165, (MR_Integer) 0)));
                      {
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_155);
                      }
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word mercury__string__parse_runtime__V_151_151;
                      MR_Word mercury__string__parse_runtime__V_153_153;
                      MR_Word mercury__string__parse_runtime__Error_154;

                      {
                        mercury__string__parse_runtime__V_151_151 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_165);
                      }
                      {
                        mercury__string__parse_runtime__Error_154 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_154, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_154, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_154, 2) = ((MR_Box) (mercury__string__parse_runtime__V_151_151));
                      }
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                      mercury__string__parse_runtime__V_153_153 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_154));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_153_153));
                      }
                    }
                }
              mercury__string__parse_runtime__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 71:
            {
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word mercury__string__parse_runtime__V_188_188;
                  MR_Word mercury__string__parse_runtime__Error_189;

                  {
                    mercury__string__parse_runtime__Error_189 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_189, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_189, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_189, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                  }
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                  mercury__string__parse_runtime__V_188_188 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_189));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_188_188));
                  }
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
                }
              else
                {
                  MR_Word mercury__string__parse_runtime__SpecPolyType_204 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
                  MR_Float mercury__string__parse_runtime__Float_194;

                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_204)) == (MR_mktag((MR_Integer) 0)));
                  if (mercury__string__parse_runtime__succeeded)
                    {
                      mercury__string__parse_runtime__Float_194 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_204, (MR_Integer) 0)));
                      {
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 5));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_194);
                      }
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word mercury__string__parse_runtime__V_190_190;
                      MR_Word mercury__string__parse_runtime__V_192_192;
                      MR_Word mercury__string__parse_runtime__Error_193;

                      {
                        mercury__string__parse_runtime__V_190_190 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_204);
                      }
                      {
                        mercury__string__parse_runtime__Error_193 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_193, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_193, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_193, 2) = ((MR_Box) (mercury__string__parse_runtime__V_190_190));
                      }
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                      mercury__string__parse_runtime__V_192_192 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_193));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_192_192));
                      }
                    }
                }
              mercury__string__parse_runtime__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 88:
            {
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word mercury__string__parse_runtime__V_73_73;
                  MR_Word mercury__string__parse_runtime__Error_96;

                  {
                    mercury__string__parse_runtime__Error_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_96, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_96, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                  }
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                  mercury__string__parse_runtime__V_73_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_96));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_73_73));
                  }
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
                }
              else
                {
                  MR_Word mercury__string__parse_runtime__SpecPolyType_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
                  MR_Integer mercury__string__parse_runtime__Int_91;

                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_93)) == (MR_mktag((MR_Integer) 1)));
                  if (mercury__string__parse_runtime__succeeded)
                    {
                      mercury__string__parse_runtime__Int_91 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_93, (MR_Integer) 0)));
                      {
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = ((MR_Box) (mercury__string__parse_runtime__Int_91));
                      }
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word mercury__string__parse_runtime__V_75_75;
                      MR_Word mercury__string__parse_runtime__V_77_77;
                      MR_Word mercury__string__parse_runtime__Error_90;

                      {
                        mercury__string__parse_runtime__V_75_75 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_93);
                      }
                      {
                        mercury__string__parse_runtime__Error_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_90, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_90, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_90, 2) = ((MR_Box) (mercury__string__parse_runtime__V_75_75));
                      }
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                      mercury__string__parse_runtime__V_77_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_90));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_77_77));
                      }
                    }
                }
              mercury__string__parse_runtime__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 99:
            {
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word mercury__string__parse_runtime__V_59_59;
                  MR_Word mercury__string__parse_runtime__Error_116;

                  {
                    mercury__string__parse_runtime__Error_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_116, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_116, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                  }
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                  mercury__string__parse_runtime__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_116));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_59_59));
                  }
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
                }
              else
                {
                  MR_Word mercury__string__parse_runtime__SpecPolyType_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
                  MR_Char mercury__string__parse_runtime__Char_44;

                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_114)) == (MR_mktag((MR_Integer) 3)));
                  if (mercury__string__parse_runtime__succeeded)
                    {
                      mercury__string__parse_runtime__Char_44 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPolyType_114, (MR_Integer) 0)));
                      {
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__Char_44));
                      }
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word mercury__string__parse_runtime__V_61_61;
                      MR_Word mercury__string__parse_runtime__V_63_63;
                      MR_Word mercury__string__parse_runtime__Error_112;

                      {
                        mercury__string__parse_runtime__V_61_61 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_114);
                      }
                      {
                        mercury__string__parse_runtime__Error_112 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_112, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_112, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_112, 2) = ((MR_Box) (mercury__string__parse_runtime__V_61_61));
                      }
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                      mercury__string__parse_runtime__V_63_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_112));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_63_63));
                      }
                    }
                }
              mercury__string__parse_runtime__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 100:
          case (MR_Char) 105:
            {
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word mercury__string__parse_runtime__V_79_79;
                  MR_Word mercury__string__parse_runtime__Error_89;

                  {
                    mercury__string__parse_runtime__Error_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_89, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_89, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                  }
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                  mercury__string__parse_runtime__V_79_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_89));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_79_79));
                  }
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
                }
              else
                {
                  MR_Word mercury__string__parse_runtime__SpecPolyType_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
                  MR_Integer mercury__string__parse_runtime__Int_39;

                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_38)) == (MR_mktag((MR_Integer) 1)));
                  if (mercury__string__parse_runtime__succeeded)
                    {
                      mercury__string__parse_runtime__Int_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_38, (MR_Integer) 0)));
                      {
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) (mercury__string__parse_runtime__Int_39));
                      }
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word mercury__string__parse_runtime__Error_40;
                      MR_Word mercury__string__parse_runtime__V_81_81;
                      MR_Word mercury__string__parse_runtime__V_83_83;

                      {
                        mercury__string__parse_runtime__V_81_81 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_38);
                      }
                      {
                        mercury__string__parse_runtime__Error_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_40, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_40, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_40, 2) = ((MR_Box) (mercury__string__parse_runtime__V_81_81));
                      }
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                      mercury__string__parse_runtime__V_83_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_40));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_83_83));
                      }
                    }
                }
              mercury__string__parse_runtime__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 101:
            {
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word mercury__string__parse_runtime__V_227_227;
                  MR_Word mercury__string__parse_runtime__Error_228;

                  {
                    mercury__string__parse_runtime__Error_228 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_228, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_228, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_228, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                  }
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                  mercury__string__parse_runtime__V_227_227 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_228));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_227_227));
                  }
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
                }
              else
                {
                  MR_Word mercury__string__parse_runtime__SpecPolyType_243 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
                  MR_Float mercury__string__parse_runtime__Float_233;

                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_243)) == (MR_mktag((MR_Integer) 0)));
                  if (mercury__string__parse_runtime__succeeded)
                    {
                      mercury__string__parse_runtime__Float_233 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_243, (MR_Integer) 0)));
                      {
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_233);
                      }
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word mercury__string__parse_runtime__V_229_229;
                      MR_Word mercury__string__parse_runtime__V_231_231;
                      MR_Word mercury__string__parse_runtime__Error_232;

                      {
                        mercury__string__parse_runtime__V_229_229 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_243);
                      }
                      {
                        mercury__string__parse_runtime__Error_232 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_232, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_232, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_232, 2) = ((MR_Box) (mercury__string__parse_runtime__V_229_229));
                      }
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                      mercury__string__parse_runtime__V_231_231 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_232));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_231_231));
                      }
                    }
                }
              mercury__string__parse_runtime__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 102:
            {
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word mercury__string__parse_runtime__V_266_266;
                  MR_Word mercury__string__parse_runtime__Error_267;

                  {
                    mercury__string__parse_runtime__Error_267 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_267, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_267, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_267, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                  }
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                  mercury__string__parse_runtime__V_266_266 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_267));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_266_266));
                  }
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
                }
              else
                {
                  MR_Word mercury__string__parse_runtime__SpecPolyType_282 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
                  MR_Float mercury__string__parse_runtime__Float_272;

                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_282)) == (MR_mktag((MR_Integer) 0)));
                  if (mercury__string__parse_runtime__succeeded)
                    {
                      mercury__string__parse_runtime__Float_272 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_282, (MR_Integer) 0)));
                      {
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_272);
                      }
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word mercury__string__parse_runtime__V_268_268;
                      MR_Word mercury__string__parse_runtime__V_270_270;
                      MR_Word mercury__string__parse_runtime__Error_271;

                      {
                        mercury__string__parse_runtime__V_268_268 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_282);
                      }
                      {
                        mercury__string__parse_runtime__Error_271 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_271, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_271, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_271, 2) = ((MR_Box) (mercury__string__parse_runtime__V_268_268));
                      }
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                      mercury__string__parse_runtime__V_270_270 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_271));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_270_270));
                      }
                    }
                }
              mercury__string__parse_runtime__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 103:
            {
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word mercury__string__parse_runtime__V_305_305;
                  MR_Word mercury__string__parse_runtime__Error_306;

                  {
                    mercury__string__parse_runtime__Error_306 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_306, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_306, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_306, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                  }
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                  mercury__string__parse_runtime__V_305_305 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_306));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_305_305));
                  }
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
                }
              else
                {
                  MR_Word mercury__string__parse_runtime__SpecPolyType_321 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
                  MR_Float mercury__string__parse_runtime__Float_311;

                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_321)) == (MR_mktag((MR_Integer) 0)));
                  if (mercury__string__parse_runtime__succeeded)
                    {
                      mercury__string__parse_runtime__Float_311 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__SpecPolyType_321, (MR_Integer) 0)));
                      {
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = MR_box_float(mercury__string__parse_runtime__Float_311);
                      }
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word mercury__string__parse_runtime__V_307_307;
                      MR_Word mercury__string__parse_runtime__V_309_309;
                      MR_Word mercury__string__parse_runtime__Error_310;

                      {
                        mercury__string__parse_runtime__V_307_307 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_321);
                      }
                      {
                        mercury__string__parse_runtime__Error_310 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_310, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_310, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_310, 2) = ((MR_Box) (mercury__string__parse_runtime__V_307_307));
                      }
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                      mercury__string__parse_runtime__V_309_309 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_310));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_309_309));
                      }
                    }
                }
              mercury__string__parse_runtime__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 111:
            {
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word mercury__string__parse_runtime__V_344_344;
                  MR_Word mercury__string__parse_runtime__Error_345;

                  {
                    mercury__string__parse_runtime__Error_345 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_345, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_345, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_345, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                  }
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                  mercury__string__parse_runtime__V_344_344 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_345));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_344_344));
                  }
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
                }
              else
                {
                  MR_Word mercury__string__parse_runtime__SpecPolyType_360 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
                  MR_Integer mercury__string__parse_runtime__Int_354;

                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_360)) == (MR_mktag((MR_Integer) 1)));
                  if (mercury__string__parse_runtime__succeeded)
                    {
                      mercury__string__parse_runtime__Int_354 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_360, (MR_Integer) 0)));
                      {
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = ((MR_Box) (mercury__string__parse_runtime__Int_354));
                      }
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word mercury__string__parse_runtime__V_346_346;
                      MR_Word mercury__string__parse_runtime__V_348_348;
                      MR_Word mercury__string__parse_runtime__Error_349;

                      {
                        mercury__string__parse_runtime__V_346_346 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_360);
                      }
                      {
                        mercury__string__parse_runtime__Error_349 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_349, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_349, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_349, 2) = ((MR_Box) (mercury__string__parse_runtime__V_346_346));
                      }
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                      mercury__string__parse_runtime__V_348_348 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_349));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_348_348));
                      }
                    }
                }
              mercury__string__parse_runtime__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 112:
            {
              MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Flags_70_418;
              MR_Word mercury__string__parse_runtime__V_134_134 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word mercury__string__parse_runtime__V_135_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word mercury__string__parse_runtime__V_136_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word mercury__string__parse_runtime__V_137_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word mercury__string__parse_runtime__V_133_133 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__HeadVar__5_5, (MR_Integer) 0)))) & (MR_Integer) 1);

              {
                mercury__string__parse_runtime__STATE_VARIABLE_Flags_70_418 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__STATE_VARIABLE_Flags_70_418, 0) = ((MR_Box) (((MR_Integer) 1 | ((((mercury__string__parse_runtime__V_134_134 << (MR_Integer) 1)) | ((((mercury__string__parse_runtime__V_135_135 << (MR_Integer) 2)) | ((((mercury__string__parse_runtime__V_136_136 << (MR_Integer) 3)) | ((mercury__string__parse_runtime__V_137_137 << (MR_Integer) 4)))))))))));
              }
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word mercury__string__parse_runtime__V_382_382;
                  MR_Word mercury__string__parse_runtime__Error_383;

                  {
                    mercury__string__parse_runtime__Error_383 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_383, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_383, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_383, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                  }
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                  mercury__string__parse_runtime__V_382_382 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_383));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_382_382));
                  }
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
                }
              else
                {
                  MR_Word mercury__string__parse_runtime__SpecPolyType_398 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
                  MR_Integer mercury__string__parse_runtime__Int_392;

                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_398)) == (MR_mktag((MR_Integer) 1)));
                  if (mercury__string__parse_runtime__succeeded)
                    {
                      mercury__string__parse_runtime__Int_392 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_398, (MR_Integer) 0)));
                      {
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__STATE_VARIABLE_Flags_70_418));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = ((MR_Box) (mercury__string__parse_runtime__Int_392));
                      }
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word mercury__string__parse_runtime__V_384_384;
                      MR_Word mercury__string__parse_runtime__V_386_386;
                      MR_Word mercury__string__parse_runtime__Error_387;

                      {
                        mercury__string__parse_runtime__V_384_384 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_398);
                      }
                      {
                        mercury__string__parse_runtime__Error_387 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_387, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_387, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_387, 2) = ((MR_Box) (mercury__string__parse_runtime__V_384_384));
                      }
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                      mercury__string__parse_runtime__V_386_386 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_387));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_386_386));
                      }
                    }
                }
              mercury__string__parse_runtime__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 115:
            {
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word mercury__string__parse_runtime__V_53_53;
                  MR_Word mercury__string__parse_runtime__Error_125;

                  {
                    mercury__string__parse_runtime__Error_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_125, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_125, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                  }
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                  mercury__string__parse_runtime__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_125));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_53_53));
                  }
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
                }
              else
                {
                  MR_Word mercury__string__parse_runtime__SpecPolyType_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
                  MR_String mercury__string__parse_runtime__Str_45;

                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_123)) == (MR_mktag((MR_Integer) 2)));
                  if (mercury__string__parse_runtime__succeeded)
                    {
                      mercury__string__parse_runtime__Str_45 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__SpecPolyType_123, (MR_Integer) 0)));
                      {
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__Str_45));
                      }
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word mercury__string__parse_runtime__V_55_55;
                      MR_Word mercury__string__parse_runtime__V_57_57;
                      MR_Word mercury__string__parse_runtime__Error_121;

                      {
                        mercury__string__parse_runtime__V_55_55 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_123);
                      }
                      {
                        mercury__string__parse_runtime__Error_121 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_121, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_121, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_121, 2) = ((MR_Box) (mercury__string__parse_runtime__V_55_55));
                      }
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                      mercury__string__parse_runtime__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_121));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_57_57));
                      }
                    }
                }
              mercury__string__parse_runtime__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 117:
            {
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word mercury__string__parse_runtime__V_420_420;
                  MR_Word mercury__string__parse_runtime__Error_421;

                  {
                    mercury__string__parse_runtime__Error_421 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_421, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_421, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_421, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                  }
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                  mercury__string__parse_runtime__V_420_420 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_421));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_420_420));
                  }
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
                }
              else
                {
                  MR_Word mercury__string__parse_runtime__SpecPolyType_436 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
                  MR_Integer mercury__string__parse_runtime__Int_430;

                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_436)) == (MR_mktag((MR_Integer) 1)));
                  if (mercury__string__parse_runtime__succeeded)
                    {
                      mercury__string__parse_runtime__Int_430 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_436, (MR_Integer) 0)));
                      {
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = ((MR_Box) (mercury__string__parse_runtime__Int_430));
                      }
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word mercury__string__parse_runtime__V_422_422;
                      MR_Word mercury__string__parse_runtime__V_424_424;
                      MR_Word mercury__string__parse_runtime__Error_425;

                      {
                        mercury__string__parse_runtime__V_422_422 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_436);
                      }
                      {
                        mercury__string__parse_runtime__Error_425 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_425, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_425, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_425, 2) = ((MR_Box) (mercury__string__parse_runtime__V_422_422));
                      }
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                      mercury__string__parse_runtime__V_424_424 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_425));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_424_424));
                      }
                    }
                }
              mercury__string__parse_runtime__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 120:
            {
              if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word mercury__string__parse_runtime__V_458_458;
                  MR_Word mercury__string__parse_runtime__Error_459;

                  {
                    mercury__string__parse_runtime__Error_459 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_459, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_459, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                    MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_459, 2) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                  }
                  mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                  mercury__string__parse_runtime__V_458_458 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_459));
                    MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_458_458));
                  }
                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
                }
              else
                {
                  MR_Word mercury__string__parse_runtime__SpecPolyType_474 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
                  MR_Integer mercury__string__parse_runtime__Int_468;

                  mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
                  mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__SpecPolyType_474)) == (MR_mktag((MR_Integer) 1)));
                  if (mercury__string__parse_runtime__succeeded)
                    {
                      mercury__string__parse_runtime__Int_468 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__SpecPolyType_474, (MR_Integer) 0)));
                      {
                        mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 1) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__5_5));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 2) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__6_6));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 3) = ((MR_Box) (mercury__string__parse_runtime__HeadVar__7_7));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__SpecPrime_36, 5) = ((MR_Box) (mercury__string__parse_runtime__Int_468));
                      }
                      mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word mercury__string__parse_runtime__V_460_460;
                      MR_Word mercury__string__parse_runtime__V_462_462;
                      MR_Word mercury__string__parse_runtime__Error_463;

                      {
                        mercury__string__parse_runtime__V_460_460 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(mercury__string__parse_runtime__SpecPolyType_474);
                      }
                      {
                        mercury__string__parse_runtime__Error_463 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_463, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_463, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
                        MR_hl_field(MR_mktag(2), mercury__string__parse_runtime__Error_463, 2) = ((MR_Box) (mercury__string__parse_runtime__V_460_460));
                      }
                      mercury__string__parse_runtime__SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                      mercury__string__parse_runtime__V_462_462 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        mercury__string__parse_runtime__ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_463));
                        MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__ErrorsPrime_37, 1) = ((MR_Box) (mercury__string__parse_runtime__V_462_462));
                      }
                    }
                }
              mercury__string__parse_runtime__succeeded = MR_TRUE;
            }
            break;
        }
        if (mercury__string__parse_runtime__succeeded)
          {
            *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_4 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_80_80;
            *mercury__string__parse_runtime__Spec_9 = mercury__string__parse_runtime__SpecPrime_36;
            *mercury__string__parse_runtime__Errors_10 = mercury__string__parse_runtime__ErrorsPrime_37;
          }
        else
          {
            MR_Word mercury__string__parse_runtime__V_86_86;
            MR_Word mercury__string__parse_runtime__Error_131;

            {
              mercury__string__parse_runtime__Error_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__Error_131, 0) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__Error_131, 1) = ((MR_Box) (MR_Word) (mercury__string__parse_runtime__SpecChar_35));
            }
            *mercury__string__parse_runtime__Spec_9 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
            mercury__string__parse_runtime__V_86_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__string__parse_runtime__Errors_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_131));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_runtime__V_86_86));
            }
            *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_4 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_3;
          }
      }
  }
}

static void MR_CALL 
mercury__string__parse_runtime__get_optional_prec_7_p_0(
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_16,
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_Chars_17,
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18,
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_19,
  MR_Integer mercury__string__parse_runtime__SpecNum_10,
  MR_Word * mercury__string__parse_runtime__MaybePrec_11,
  MR_Word * mercury__string__parse_runtime__Errors_12)
{
  {
    MR_bool mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_16)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_20;
    MR_Char mercury__string__parse_runtime__V_21_21;

    if (mercury__string__parse_runtime__succeeded)
      {
        mercury__string__parse_runtime__V_21_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_16, (MR_Integer) 0)));
        mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_16, (MR_Integer) 1)));
        mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_21_21 == (MR_Char) 46);
      }
    if (mercury__string__parse_runtime__succeeded)
      {
        MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_22_22;
        MR_Char mercury__string__parse_runtime__V_23_23;

        mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_20)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__string__parse_runtime__succeeded)
          {
            mercury__string__parse_runtime__V_23_23 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_20, (MR_Integer) 0)));
            mercury__string__parse_runtime__STATE_VARIABLE_Chars_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_20, (MR_Integer) 1)));
            mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_23_23 == (MR_Char) 42);
          }
        if (mercury__string__parse_runtime__succeeded)
          {
            *mercury__string__parse_runtime__STATE_VARIABLE_Chars_17 = mercury__string__parse_runtime__STATE_VARIABLE_Chars_22_22;
            if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word mercury__string__parse_runtime__V_24_24;
                MR_Word mercury__string__parse_runtime__V_25_25;

                *mercury__string__parse_runtime__MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  mercury__string__parse_runtime__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_24_24, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_10));
                }
                mercury__string__parse_runtime__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__string__parse_runtime__Errors_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__V_24_24));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_runtime__V_25_25));
                }
                *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_19 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18;
              }
            else
              {
                MR_Word mercury__string__parse_runtime__PolyType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18, (MR_Integer) 0)));
                MR_Integer mercury__string__parse_runtime__PolyPrec_14;

                *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18, (MR_Integer) 1)));
                mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__PolyType_13)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__string__parse_runtime__succeeded)
                  {
                    mercury__string__parse_runtime__PolyPrec_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__PolyType_13, (MR_Integer) 0)));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__string__parse_runtime__MaybePrec_11 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__PolyPrec_14));
                    }
                    *mercury__string__parse_runtime__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                else
                  {
                    MR_Word mercury__string__parse_runtime__V_27_27;
                    MR_Word mercury__string__parse_runtime__V_28_28;
                    MR_Word mercury__string__parse_runtime__V_29_29;

                    *mercury__string__parse_runtime__MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    switch (MR_tag((MR_Word) mercury__string__parse_runtime__PolyType_13)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        mercury__string__parse_runtime__V_28_28 = (MR_Integer) 3;
                        break;
                      case (MR_Integer) 1:
                        mercury__string__parse_runtime__V_28_28 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        mercury__string__parse_runtime__V_28_28 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        mercury__string__parse_runtime__V_28_28 = (MR_Integer) 0;
                        break;
                    }
                    {
                      mercury__string__parse_runtime__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_27_27, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_10));
                      MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_27_27, 2) = ((MR_Box) (mercury__string__parse_runtime__V_28_28));
                    }
                    mercury__string__parse_runtime__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__string__parse_runtime__Errors_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__V_27_27));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_runtime__V_29_29));
                    }
                  }
              }
          }
        else
          {
            MR_Integer mercury__string__parse_runtime__Prec_15;

            {
              mercury__string__parse_util__get_number_prefix_loop_4_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_20, mercury__string__parse_runtime__STATE_VARIABLE_Chars_17, (MR_Integer) 0, &mercury__string__parse_runtime__Prec_15);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__string__parse_runtime__MaybePrec_11 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__Prec_15));
            }
            *mercury__string__parse_runtime__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_19 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18;
          }
      }
    else
      {
        *mercury__string__parse_runtime__MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__string__parse_runtime__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_19 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_18;
        *mercury__string__parse_runtime__STATE_VARIABLE_Chars_17 = mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_16;
      }
  }
}

static void MR_CALL 
mercury__string__parse_runtime__parse_conversion_specification_7_p_0(
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_20,
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_Chars_21,
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22,
  MR_Word * mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_23,
  MR_Integer mercury__string__parse_runtime__SpecNum_10,
  MR_Word * mercury__string__parse_runtime__Spec_11,
  MR_Word * mercury__string__parse_runtime__Errors_12)
{
  {
    MR_bool mercury__string__parse_runtime__succeeded;
    MR_Word mercury__string__parse_runtime__TypeCtorInfo_37_37;
    MR_Word mercury__string__parse_runtime__Flags0_13 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[0];
    MR_Word mercury__string__parse_runtime__Flags_14;
    MR_Word mercury__string__parse_runtime__MaybeWidth_15;
    MR_Word mercury__string__parse_runtime__WidthErrors_16;
    MR_Word mercury__string__parse_runtime__MaybePrec_17;
    MR_Word mercury__string__parse_runtime__PrecErrors_18;
    MR_Word mercury__string__parse_runtime__SpecErrors_19;
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29;
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_30;
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_31;
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_32_32;
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_33_33;
    MR_Word mercury__string__parse_runtime__V_36_36;
    MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_50;
    MR_Char mercury__string__parse_runtime__V_51_51;

    {
      mercury__string__parse_util__gather_flag_chars_4_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_20, &mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29, mercury__string__parse_runtime__Flags0_13, &mercury__string__parse_runtime__Flags_14);
    }
    mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__string__parse_runtime__succeeded)
      {
        mercury__string__parse_runtime__V_51_51 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29, (MR_Integer) 0)));
        mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29, (MR_Integer) 1)));
        mercury__string__parse_runtime__succeeded = (mercury__string__parse_runtime__V_51_51 == (MR_Char) 42);
      }
    if (mercury__string__parse_runtime__succeeded)
      {
        mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_30 = mercury__string__parse_runtime__STATE_VARIABLE_Chars_20_50;
        if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word mercury__string__parse_runtime__V_52_52;
            MR_Word mercury__string__parse_runtime__V_53_53;

            mercury__string__parse_runtime__MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__string__parse_runtime__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_52_52, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_10));
            }
            mercury__string__parse_runtime__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__string__parse_runtime__WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__WidthErrors_16, 0) = ((MR_Box) (mercury__string__parse_runtime__V_52_52));
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__WidthErrors_16, 1) = ((MR_Box) (mercury__string__parse_runtime__V_53_53));
            }
            mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_31 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22;
          }
        else
          {
            MR_Word mercury__string__parse_runtime__PolyType_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22, (MR_Integer) 0)));
            MR_Integer mercury__string__parse_runtime__PolyWidth_48;

            mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22, (MR_Integer) 1)));
            mercury__string__parse_runtime__succeeded = ((MR_tag((MR_Word) mercury__string__parse_runtime__PolyType_47)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__string__parse_runtime__succeeded)
              {
                mercury__string__parse_runtime__PolyWidth_48 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__PolyType_47, (MR_Integer) 0)));
                {
                  mercury__string__parse_runtime__MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__MaybeWidth_15, 0) = ((MR_Box) (mercury__string__parse_runtime__PolyWidth_48));
                }
                mercury__string__parse_runtime__WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            else
              {
                MR_Word mercury__string__parse_runtime__V_55_55;
                MR_Word mercury__string__parse_runtime__V_56_56;
                MR_Word mercury__string__parse_runtime__V_57_57;

                mercury__string__parse_runtime__MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                switch (MR_tag((MR_Word) mercury__string__parse_runtime__PolyType_47)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    mercury__string__parse_runtime__V_56_56 = (MR_Integer) 3;
                    break;
                  case (MR_Integer) 1:
                    mercury__string__parse_runtime__V_56_56 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    mercury__string__parse_runtime__V_56_56 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    mercury__string__parse_runtime__V_56_56 = (MR_Integer) 0;
                    break;
                }
                {
                  mercury__string__parse_runtime__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_55_55, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_10));
                  MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__V_55_55, 2) = ((MR_Box) (mercury__string__parse_runtime__V_56_56));
                }
                mercury__string__parse_runtime__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  mercury__string__parse_runtime__WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__WidthErrors_16, 0) = ((MR_Box) (mercury__string__parse_runtime__V_55_55));
                  MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__WidthErrors_16, 1) = ((MR_Box) (mercury__string__parse_runtime__V_57_57));
                }
              }
          }
      }
    else
      {
        MR_Integer mercury__string__parse_runtime__Width_49;
        MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_28_58;

        {
          mercury__string__parse_runtime__succeeded = mercury__string__parse_util__get_nonzero_number_prefix_3_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29, &mercury__string__parse_runtime__STATE_VARIABLE_Chars_28_58, &mercury__string__parse_runtime__Width_49);
        }
        if (mercury__string__parse_runtime__succeeded)
          {
            mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_30 = mercury__string__parse_runtime__STATE_VARIABLE_Chars_28_58;
            {
              mercury__string__parse_runtime__MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__MaybeWidth_15, 0) = ((MR_Box) (mercury__string__parse_runtime__Width_49));
            }
            mercury__string__parse_runtime__WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            mercury__string__parse_runtime__MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__string__parse_runtime__WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_30 = mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29;
          }
        mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_31 = mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_22;
      }
    {
      mercury__string__parse_runtime__get_optional_prec_7_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_30, &mercury__string__parse_runtime__STATE_VARIABLE_Chars_32_32, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_31, &mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_33_33, mercury__string__parse_runtime__SpecNum_10, &mercury__string__parse_runtime__MaybePrec_17, &mercury__string__parse_runtime__PrecErrors_18);
    }
    {
      mercury__string__parse_runtime__get_first_spec_10_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_32_32, mercury__string__parse_runtime__STATE_VARIABLE_Chars_21, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_33_33, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_23, mercury__string__parse_runtime__Flags_14, mercury__string__parse_runtime__MaybeWidth_15, mercury__string__parse_runtime__MaybePrec_17, mercury__string__parse_runtime__SpecNum_10, mercury__string__parse_runtime__Spec_11, &mercury__string__parse_runtime__SpecErrors_19);
    }
    mercury__string__parse_runtime__TypeCtorInfo_37_37 = (MR_Word) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0;
    {
      mercury__list__append_3_p_1(mercury__string__parse_runtime__TypeCtorInfo_37_37, mercury__string__parse_runtime__PrecErrors_18, mercury__string__parse_runtime__SpecErrors_19, &mercury__string__parse_runtime__V_36_36);
    }
    {
      mercury__list__append_3_p_1(mercury__string__parse_runtime__TypeCtorInfo_37_37, mercury__string__parse_runtime__WidthErrors_16, mercury__string__parse_runtime__V_36_36, mercury__string__parse_runtime__Errors_12);
    }
  }
}

void MR_CALL 
mercury__string__parse_runtime__parse_format_string_5_p_0(
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_27,
  MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_28,
  MR_Integer mercury__string__parse_runtime__SpecNum_8,
  MR_Word * mercury__string__parse_runtime__Specs_9,
  MR_Word * mercury__string__parse_runtime__Errors_10)
{
  {
    MR_bool mercury__string__parse_runtime__succeeded;
    MR_Word mercury__string__parse_runtime__NonConversionSpecChars_11;
    MR_Word mercury__string__parse_runtime__GatherEndedBy_12;
    MR_Word mercury__string__parse_runtime__Specs0_13;

    {
      mercury__string__parse_util__gather_non_percent_chars_3_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_0_27, &mercury__string__parse_runtime__NonConversionSpecChars_11, &mercury__string__parse_runtime__GatherEndedBy_12);
    }
    if ((mercury__string__parse_runtime__GatherEndedBy_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__string__parse_runtime__Specs0_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        if ((mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__string__parse_runtime__Errors_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word mercury__string__parse_runtime__TypeCtorInfo_38_38 = (MR_Word) &mercury__string__string__type_ctor_info_poly_type_0;
            MR_Word mercury__string__parse_runtime__Error_16;
            MR_Integer mercury__string__parse_runtime__V_34_34;
            MR_Word mercury__string__parse_runtime__V_35_35;

            {
              mercury__list__length_acc_3_p_0(mercury__string__parse_runtime__TypeCtorInfo_38_38, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_28, (MR_Integer) 0, &mercury__string__parse_runtime__V_34_34);
            }
            {
              mercury__string__parse_runtime__Error_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_16, 1) = ((MR_Box) (mercury__string__parse_runtime__SpecNum_8));
              MR_hl_field(MR_mktag(3), mercury__string__parse_runtime__Error_16, 2) = ((MR_Box) (mercury__string__parse_runtime__V_34_34));
            }
            mercury__string__parse_runtime__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__string__parse_runtime__Errors_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__Error_16));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_runtime__V_35_35));
            }
          }
      }
    else
      {
        MR_Word mercury__string__parse_runtime__HeadSpec_17;
        MR_Word mercury__string__parse_runtime__HeadErrors_18;
        MR_Word mercury__string__parse_runtime__TailSpecs_19;
        MR_Word mercury__string__parse_runtime__TailErrors_20;
        MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__GatherEndedBy_12, (MR_Integer) 0)));
        MR_Integer mercury__string__parse_runtime__V_32_32;
        MR_Word mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_36;
        MR_Word mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_37;

        {
          mercury__string__parse_runtime__parse_conversion_specification_7_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_29_29, &mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_36, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_0_28, &mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_37, mercury__string__parse_runtime__SpecNum_8, &mercury__string__parse_runtime__HeadSpec_17, &mercury__string__parse_runtime__HeadErrors_18);
        }
        mercury__string__parse_runtime__V_32_32 = (mercury__string__parse_runtime__SpecNum_8 + (MR_Integer) 1);
        {
          mercury__string__parse_runtime__parse_format_string_5_p_0(mercury__string__parse_runtime__STATE_VARIABLE_Chars_30_36, mercury__string__parse_runtime__STATE_VARIABLE_PolyTypes_31_37, mercury__string__parse_runtime__V_32_32, &mercury__string__parse_runtime__TailSpecs_19, &mercury__string__parse_runtime__TailErrors_20);
        }
        if ((mercury__string__parse_runtime__HeadErrors_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__string__parse_runtime__Specs0_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__Specs0_13, 0) = ((MR_Box) (mercury__string__parse_runtime__HeadSpec_17));
              MR_hl_field(MR_mktag(1), mercury__string__parse_runtime__Specs0_13, 1) = ((MR_Box) (mercury__string__parse_runtime__TailSpecs_19));
            }
            *mercury__string__parse_runtime__Errors_10 = mercury__string__parse_runtime__TailErrors_20;
          }
        else
          {
            MR_Word mercury__string__parse_runtime__TypeCtorInfo_39_39;

            mercury__string__parse_runtime__Specs0_13 = mercury__string__parse_runtime__TailSpecs_19;
            mercury__string__parse_runtime__TypeCtorInfo_39_39 = (MR_Word) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0;
            {
              mercury__list__append_3_p_1(mercury__string__parse_runtime__TypeCtorInfo_39_39, mercury__string__parse_runtime__HeadErrors_18, mercury__string__parse_runtime__TailErrors_20, mercury__string__parse_runtime__Errors_10);
            }
          }
      }
    if ((mercury__string__parse_runtime__NonConversionSpecChars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__string__parse_runtime__Specs_9 = mercury__string__parse_runtime__Specs0_13;
    else
      {
        MR_String mercury__string__parse_runtime__NonConversionSpecString_25;
        MR_Word mercury__string__parse_runtime__StringSpec_26;

        {
          mercury__string__from_char_list_2_p_0(mercury__string__parse_runtime__NonConversionSpecChars_11, &mercury__string__parse_runtime__NonConversionSpecString_25);
        }
        {
          mercury__string__parse_runtime__StringSpec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__string__parse_runtime__StringSpec_26, 0) = ((MR_Box) (mercury__string__parse_runtime__NonConversionSpecString_25));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__string__parse_runtime__Specs_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_runtime__StringSpec_26));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_runtime__Specs0_13));
        }
      }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module string.parse_runtime. */
