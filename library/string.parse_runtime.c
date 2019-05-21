/*
** Automatically generated from `string.parse_runtime.m'
** by the Mercury compiler,
** version rotd-2018-01-04
** configured for x86_64-pc-linux-gnu.
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
#include "int16.mh"
#include "int32.mh"
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
#include "uint8.mh"
#include "version_array.mh"



static const MR_PseudoTypeInfo mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__string__parse_runtime__string__parse_runtime__du_functor_desc_string_format_spec_0_0 = {
  (MR_String) "spec_constant_string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  mercury__string__parse_runtime__string__parse_runtime__field_types_string_format_spec_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_NONE,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__string__parse_runtime__string__parse_runtime__du_stag_ordered_string_format_spec_0_2
  },
  {
    (MR_Integer) 3,
    MR_SECTAG_REMOTE,
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
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

static MR_Integer MR_CALL 
mercury__string__parse_runtime__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__string__parse_runtime____Compare____string_format_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_284 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_285 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_284 == CastY_285);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_311 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer V_7_342;

{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_311 ;
	S2 =  ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_342  = Res;
}
                  succeeded = (V_7_342 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_342 == (MR_Integer) 0);
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
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Char Var_308 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
            MR_Word Var_309 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
            MR_Word Var_310 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Char ArgY3_41 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word Var_42;

                  mercury__string__parse_util____Compare____string_format_flags_0_0(&Var_42, Var_310, ArgY1_37);
                  succeeded = (Var_42 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_42;
                  else
                  {
                    MR_Word Var_43;

                    mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&Var_43, Var_309, ArgY2_39);
                    succeeded = (Var_43 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_43;
                    else
                    {
                      MR_Integer V_7_337;
                      MR_Integer V_8_338;

{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  Var_308 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 V_7_337  = Int;
}
{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  ArgY3_41 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 V_8_338  = Int;
}
                      succeeded = (V_7_337 < V_8_338);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (V_7_337 == V_8_338);
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
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_321 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3)));
            MR_Word Var_322 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2)));
            MR_Word Var_323 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1)));
            MR_Word Var_324 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word ArgY3_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2)));
                  MR_String ArgY4_93 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word Var_94;

                  mercury__string__parse_util____Compare____string_format_flags_0_0(&Var_94, Var_324, ArgY1_87);
                  succeeded = (Var_94 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_94;
                  else
                  {
                    MR_Word Var_95;

                    mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&Var_95, Var_323, ArgY2_89);
                    succeeded = (Var_95 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_95;
                    else
                    {
                      MR_Word Var_96;

                      mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&Var_96, Var_322, ArgY3_91);
                      succeeded = (Var_96 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_96;
                      else
                      {
                        MR_Integer V_7_356;

{
#define MR_PROC_LABEL mercury__string__parse_runtime____Compare____string_format_spec_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_321 ;
	S2 =  ArgY4_93 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_356  = Res;
}
                        succeeded = (V_7_356 < (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (V_7_356 == (MR_Integer) 0);
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
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer Var_317 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
                MR_Word Var_318 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                MR_Word Var_319 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Word Var_320 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ArgY1_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word ArgY2_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word ArgY3_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3)));
                          MR_Integer ArgY4_150 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4)));
                          MR_Word Var_151;

                          mercury__string__parse_util____Compare____string_format_flags_0_0(&Var_151, Var_320, ArgY1_144);
                          succeeded = (Var_151 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_151;
                          else
                          {
                            MR_Word Var_152;

                            mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&Var_152, Var_319, ArgY2_146);
                            succeeded = (Var_152 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_152;
                            else
                            {
                              MR_Word Var_153;

                              mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&Var_153, Var_318, ArgY3_148);
                              succeeded = (Var_153 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_153;
                              else
                              {
                                succeeded = (Var_317 < ArgY4_150);
                                if (succeeded)
                                  *HeadVar__1_1 = (MR_Integer) 1;
                                else
                                {
                                  succeeded = (Var_317 == ArgY4_150);
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
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Var_325 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5)));
                MR_Word Var_326 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
                MR_Word Var_327 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                MR_Word Var_328 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Word Var_329 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_205 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word ArgY2_207 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word ArgY3_209 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word ArgY4_211 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4)));
                          MR_Integer ArgY5_213 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5)));
                          MR_Word Var_214;

                          mercury__string__parse_util____Compare____string_format_flags_0_0(&Var_214, Var_329, ArgY1_205);
                          succeeded = (Var_214 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_214;
                          else
                          {
                            MR_Word Var_215;

                            mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&Var_215, Var_328, ArgY2_207);
                            succeeded = (Var_215 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_215;
                            else
                            {
                              MR_Word Var_216;

                              mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&Var_216, Var_327, ArgY3_209);
                              succeeded = (Var_216 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_216;
                              else
                              {
                                MR_Word Var_217;
                                MR_Integer Var_332 = (MR_Integer) Var_326;
                                MR_Integer Var_333 = (MR_Integer) ArgY4_211;

                                succeeded = (Var_332 < Var_333);
                                if (succeeded)
                                  Var_217 = (MR_Integer) 1;
                                else
                                {
                                  succeeded = (Var_332 == Var_333);
                                  if (succeeded)
                                    Var_217 = (MR_Integer) 0;
                                  else
                                    Var_217 = (MR_Integer) 2;
                                }
                                succeeded = (Var_217 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  *HeadVar__1_1 = Var_217;
                                else
                                {
                                  succeeded = (Var_325 < ArgY5_213);
                                  if (succeeded)
                                    *HeadVar__1_1 = (MR_Integer) 1;
                                  else
                                  {
                                    succeeded = (Var_325 == ArgY5_213);
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
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Float Var_312 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5)));
                MR_Word Var_313 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
                MR_Word Var_314 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                MR_Word Var_315 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Word Var_316 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ArgY1_271 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word ArgY2_273 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word ArgY3_275 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word ArgY4_277 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4)));
                          MR_Float ArgY5_279 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5)));
                          MR_Word Var_280;

                          mercury__string__parse_util____Compare____string_format_flags_0_0(&Var_280, Var_316, ArgY1_271);
                          succeeded = (Var_280 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_280;
                          else
                          {
                            MR_Word Var_281;

                            mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&Var_281, Var_315, ArgY2_273);
                            succeeded = (Var_281 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_281;
                            else
                            {
                              MR_Word Var_282;

                              mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&Var_282, Var_314, ArgY3_275);
                              succeeded = (Var_282 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_282;
                              else
                              {
                                MR_Word Var_283;
                                MR_Integer Var_330 = (MR_Integer) Var_313;
                                MR_Integer Var_331 = (MR_Integer) ArgY4_277;

                                succeeded = (Var_330 < Var_331);
                                if (succeeded)
                                  Var_283 = (MR_Integer) 1;
                                else
                                {
                                  succeeded = (Var_330 == Var_331);
                                  if (succeeded)
                                    Var_283 = (MR_Integer) 0;
                                  else
                                    Var_283 = (MR_Integer) 2;
                                }
                                succeeded = (Var_283 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  *HeadVar__1_1 = Var_283;
                                else
                                {
                                  succeeded = (Var_312 < ArgY5_279);
                                  if (succeeded)
                                    *HeadVar__1_1 = (MR_Integer) 1;
                                  else
                                  {
                                    succeeded = (Var_312 > ArgY5_279);
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
    MR_Integer CastX_47 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_48 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_47 == CastY_48);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
            MR_String ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_8;
            MR_Char ArgX3_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
            MR_Char ArgY3_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
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
            MR_Word ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_12;
            MR_Word ArgX2_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_14;
            MR_Word ArgX3_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2)));
            MR_Word ArgY3_16;
            MR_String ArgX4_17 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3)));
            MR_String ArgY4_18;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1)));
              ArgY3_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2)));
              ArgY4_18 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3)));
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
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_20;
                MR_Word ArgX2_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ArgY2_22;
                MR_Word ArgX3_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
                MR_Word ArgY3_24;
                MR_Integer ArgX4_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4)));
                MR_Integer ArgY4_26;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  ArgY2_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  ArgY3_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                  ArgY4_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
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
                MR_Word ArgX1_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_28;
                MR_Word ArgX2_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ArgY2_30;
                MR_Word ArgX3_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
                MR_Word ArgY3_32;
                MR_Word ArgX4_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4)));
                MR_Word ArgY4_34;
                MR_Integer ArgX5_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5)));
                MR_Integer ArgY5_36;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  ArgY2_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  ArgY3_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                  ArgY4_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
                  ArgY5_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5)));
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
                MR_Word ArgX1_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_38;
                MR_Word ArgX2_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ArgY2_40;
                MR_Word ArgX3_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
                MR_Word ArgY3_42;
                MR_Word ArgX4_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4)));
                MR_Word ArgY4_44;
                MR_Float ArgX5_45 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5)));
                MR_Float ArgY5_46;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  ArgY2_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  ArgY3_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                  ArgY4_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
                  ArgY5_46 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5)));
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
    if ((GatherEndedBy_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      Specs0_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      if ((STATE_VARIABLE_PolyTypes_0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *Errors_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word TypeCtorInfo_38_38 = (MR_Word) &mercury__string__string__type_ctor_info_poly_type_0;
        MR_Word Error_16;
        MR_Integer Var_34;
        MR_Word Var_35;

        mercury__list__length_acc_3_p_0(TypeCtorInfo_38_38, STATE_VARIABLE_PolyTypes_0_28, (MR_Integer) 0, &Var_34);
        {
          Error_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Error_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Error_16, 1) = ((MR_Box) (SpecNum_8));
          MR_hl_field(MR_mktag(3), Error_16, 2) = ((MR_Box) (Var_34));
        }
        Var_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Errors_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_35));
        }
      }
    }
    else
    {
      MR_Word HeadSpec_17;
      MR_Word HeadErrors_18;
      MR_Word TailSpecs_19;
      MR_Word TailErrors_20;
      MR_Word STATE_VARIABLE_Chars_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), GatherEndedBy_12, (MR_Integer) 0)));
      MR_Integer Var_32;
      MR_Word STATE_VARIABLE_Chars_30_36;
      MR_Word STATE_VARIABLE_PolyTypes_31_37;

      mercury__string__parse_runtime__parse_conversion_specification_7_p_0(STATE_VARIABLE_Chars_29_29, &STATE_VARIABLE_Chars_30_36, STATE_VARIABLE_PolyTypes_0_28, &STATE_VARIABLE_PolyTypes_31_37, SpecNum_8, &HeadSpec_17, &HeadErrors_18);
      Var_32 = (SpecNum_8 + (MR_Integer) 1);
      mercury__string__parse_runtime__parse_format_string_5_p_0(STATE_VARIABLE_Chars_30_36, STATE_VARIABLE_PolyTypes_31_37, Var_32, &TailSpecs_19, &TailErrors_20);
      if ((HeadErrors_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          Specs0_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Specs0_13, 0) = ((MR_Box) (HeadSpec_17));
          MR_hl_field(MR_mktag(1), Specs0_13, 1) = ((MR_Box) (TailSpecs_19));
        }
        *Errors_10 = TailErrors_20;
      }
      else
      {
        MR_Word TypeCtorInfo_39_39;

        Specs0_13 = TailSpecs_19;
        TypeCtorInfo_39_39 = (MR_Word) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0;
        mercury__list__append_3_p_1(TypeCtorInfo_39_39, HeadErrors_18, TailErrors_20, Errors_10);
      }
    }
    if ((NonConversionSpecChars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *Specs_9 = Specs0_13;
    else
    {
      MR_String NonConversionSpecString_25;
      MR_Word StringSpec_26;

      mercury__string__from_char_list_2_p_0(NonConversionSpecChars_11, &NonConversionSpecString_25);
      {
        StringSpec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), StringSpec_26, 0) = ((MR_Box) (NonConversionSpecString_25));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    MR_Word TypeCtorInfo_37_37;
    MR_Word Flags0_13 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[0];
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

    mercury__string__parse_util__gather_flag_chars_4_p_0(STATE_VARIABLE_Chars_0_20, &STATE_VARIABLE_Chars_29_29, Flags0_13, &Flags_14);
    succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Chars_29_29)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_51 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_29_29, (MR_Integer) 0)));
      STATE_VARIABLE_Chars_20_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_29_29, (MR_Integer) 1)));
      succeeded = (Var_51 == (MR_Char) 42);
    }
    if (succeeded)
    {
      STATE_VARIABLE_Chars_30_30 = STATE_VARIABLE_Chars_20_50;
      if ((STATE_VARIABLE_PolyTypes_0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Var_52;
        MR_Word Var_53;

        MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (SpecNum_10));
        }
        Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), WidthErrors_16, 0) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(1), WidthErrors_16, 1) = ((MR_Box) (Var_53));
        }
        STATE_VARIABLE_PolyTypes_31_31 = STATE_VARIABLE_PolyTypes_0_22;
      }
      else
      {
        MR_Word PolyType_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_22, (MR_Integer) 0)));
        MR_Integer PolyWidth_48;

        STATE_VARIABLE_PolyTypes_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_22, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) PolyType_47)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          PolyWidth_48 = ((MR_Integer) (MR_hl_field(MR_mktag(1), PolyType_47, (MR_Integer) 0)));
          {
            MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeWidth_15, 0) = ((MR_Box) (PolyWidth_48));
          }
          WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        else
        {
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_57;

          MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          switch (MR_tag((MR_Word) PolyType_47)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Var_56 = (MR_Integer) 3;
              break;
            case (MR_Integer) 1:
              Var_56 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              Var_56 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              Var_56 = (MR_Integer) 0;
              break;
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (SpecNum_10));
            MR_hl_field(MR_mktag(3), Var_55, 2) = ((MR_Box) (Var_56));
          }
          Var_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), WidthErrors_16, 0) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(1), WidthErrors_16, 1) = ((MR_Box) (Var_57));
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
          MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeWidth_15, 0) = ((MR_Box) (Width_49));
        }
        WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        STATE_VARIABLE_Chars_30_30 = STATE_VARIABLE_Chars_29_29;
      }
      STATE_VARIABLE_PolyTypes_31_31 = STATE_VARIABLE_PolyTypes_0_22;
    }
    mercury__string__parse_runtime__get_optional_prec_7_p_0(STATE_VARIABLE_Chars_30_30, &STATE_VARIABLE_Chars_32_32, STATE_VARIABLE_PolyTypes_31_31, &STATE_VARIABLE_PolyTypes_33_33, SpecNum_10, &MaybePrec_17, &PrecErrors_18);
    mercury__string__parse_runtime__get_first_spec_10_p_0(STATE_VARIABLE_Chars_32_32, STATE_VARIABLE_Chars_21, STATE_VARIABLE_PolyTypes_33_33, STATE_VARIABLE_PolyTypes_23, Flags_14, MaybeWidth_15, MaybePrec_17, SpecNum_10, Spec_11, &SpecErrors_19);
    TypeCtorInfo_37_37 = (MR_Word) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0;
    mercury__list__append_3_p_1(TypeCtorInfo_37_37, PrecErrors_18, SpecErrors_19, &Var_36);
    mercury__list__append_3_p_1(TypeCtorInfo_37_37, WidthErrors_16, Var_36, Errors_12);
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

    if ((STATE_VARIABLE_Chars_0_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word TypeCtorInfo_138_138;
      MR_Word Var_24;
      MR_Integer Var_25;
      MR_Word Var_26;

      *Spec_9 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
      TypeCtorInfo_138_138 = (MR_Word) &mercury__string__string__type_ctor_info_poly_type_0;
      Var_25 = mercury__list__length_1_f_0(TypeCtorInfo_138_138, STATE_VARIABLE_PolyTypes_0_3);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (SpecNum_8));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (Var_25));
      }
      Var_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Errors_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_26));
      }
      *STATE_VARIABLE_PolyTypes_4 = STATE_VARIABLE_PolyTypes_0_3;
      *STATE_VARIABLE_Chars_2 = STATE_VARIABLE_Chars_0_1;
    }
    else
    {
      MR_Char SpecChar_35 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_1, (MR_Integer) 0)));
      MR_Word SpecPrime_36;
      MR_Word ErrorsPrime_37;
      MR_Word STATE_VARIABLE_PolyTypes_80_80;

      *STATE_VARIABLE_Chars_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_1, (MR_Integer) 1)));
      switch (SpecChar_35) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Char) 37:
          {
            SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[2];
            ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            STATE_VARIABLE_PolyTypes_80_80 = STATE_VARIABLE_PolyTypes_0_3;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 69:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Var_65;
              MR_Word Error_107;

              {
                Error_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_107, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_107, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
              Var_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_107));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_65));
              }
              STATE_VARIABLE_PolyTypes_80_80 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Float Float_43;

              STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_105)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                Float_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), SpecPolyType_105, (MR_Integer) 0)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = MR_box_float(Float_43);
                }
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_67;
                MR_Word Var_69;
                MR_Word Error_103;

                Var_67 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_105);
                {
                  Error_103 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_103, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_103, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_103, 2) = ((MR_Box) (Var_67));
                }
                SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                Var_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_103));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_69));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 70:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Var_149;
              MR_Word Error_150;

              {
                Error_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_150, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_150, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
              Var_149 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_150));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_149));
              }
              STATE_VARIABLE_PolyTypes_80_80 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Float Float_155;

              STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_165)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                Float_155 = MR_unbox_float((MR_hl_field(MR_mktag(0), SpecPolyType_165, (MR_Integer) 0)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = MR_box_float(Float_155);
                }
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_151;
                MR_Word Var_153;
                MR_Word Error_154;

                Var_151 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_165);
                {
                  Error_154 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_154, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_154, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_154, 2) = ((MR_Box) (Var_151));
                }
                SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                Var_153 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_154));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_153));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 71:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Var_188;
              MR_Word Error_189;

              {
                Error_189 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_189, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_189, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_189, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
              Var_188 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_189));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_188));
              }
              STATE_VARIABLE_PolyTypes_80_80 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_204 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Float Float_194;

              STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_204)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                Float_194 = MR_unbox_float((MR_hl_field(MR_mktag(0), SpecPolyType_204, (MR_Integer) 0)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = MR_box_float(Float_194);
                }
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_190;
                MR_Word Var_192;
                MR_Word Error_193;

                Var_190 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_204);
                {
                  Error_193 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_193, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_193, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_193, 2) = ((MR_Box) (Var_190));
                }
                SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                Var_192 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_193));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_192));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 88:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Var_73;
              MR_Word Error_96;

              {
                Error_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_96, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_96, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
              Var_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_96));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_73));
              }
              STATE_VARIABLE_PolyTypes_80_80 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Integer Int_91;

              STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_93)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Int_91 = ((MR_Integer) (MR_hl_field(MR_mktag(1), SpecPolyType_93, (MR_Integer) 0)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = ((MR_Box) (Int_91));
                }
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_75;
                MR_Word Var_77;
                MR_Word Error_90;

                Var_75 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_93);
                {
                  Error_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_90, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_90, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_90, 2) = ((MR_Box) (Var_75));
                }
                SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                Var_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_90));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_77));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 99:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Var_59;
              MR_Word Error_116;

              {
                Error_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_116, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_116, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
              Var_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_116));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_59));
              }
              STATE_VARIABLE_PolyTypes_80_80 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Char Char_44;

              STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_114)) == (MR_mktag((MR_Integer) 3)));
              if (succeeded)
              {
                Char_44 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_114, (MR_Integer) 0)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SpecPrime_36, 0) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(1), SpecPrime_36, 1) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(1), SpecPrime_36, 2) = ((MR_Box) (MR_Word) (Char_44));
                }
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_61;
                MR_Word Var_63;
                MR_Word Error_112;

                Var_61 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_114);
                {
                  Error_112 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_112, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_112, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_112, 2) = ((MR_Box) (Var_61));
                }
                SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                Var_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_112));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_63));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 100:
        case (MR_Char) 105:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Var_79;
              MR_Word Error_89;

              {
                Error_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_89, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_89, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
              Var_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_89));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_79));
              }
              STATE_VARIABLE_PolyTypes_80_80 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Integer Int_39;

              STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_38)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Int_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), SpecPolyType_38, (MR_Integer) 0)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = ((MR_Box) (Int_39));
                }
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Error_40;
                MR_Word Var_81;
                MR_Word Var_83;

                Var_81 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_38);
                {
                  Error_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_40, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_40, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_40, 2) = ((MR_Box) (Var_81));
                }
                SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                Var_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_40));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_83));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 101:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Var_227;
              MR_Word Error_228;

              {
                Error_228 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_228, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_228, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_228, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
              Var_227 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_228));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_227));
              }
              STATE_VARIABLE_PolyTypes_80_80 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_243 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Float Float_233;

              STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_243)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                Float_233 = MR_unbox_float((MR_hl_field(MR_mktag(0), SpecPolyType_243, (MR_Integer) 0)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = MR_box_float(Float_233);
                }
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_229;
                MR_Word Var_231;
                MR_Word Error_232;

                Var_229 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_243);
                {
                  Error_232 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_232, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_232, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_232, 2) = ((MR_Box) (Var_229));
                }
                SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                Var_231 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_232));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_231));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 102:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Var_266;
              MR_Word Error_267;

              {
                Error_267 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_267, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_267, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_267, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
              Var_266 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_267));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_266));
              }
              STATE_VARIABLE_PolyTypes_80_80 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_282 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Float Float_272;

              STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_282)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                Float_272 = MR_unbox_float((MR_hl_field(MR_mktag(0), SpecPolyType_282, (MR_Integer) 0)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = MR_box_float(Float_272);
                }
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_268;
                MR_Word Var_270;
                MR_Word Error_271;

                Var_268 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_282);
                {
                  Error_271 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_271, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_271, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_271, 2) = ((MR_Box) (Var_268));
                }
                SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                Var_270 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_271));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_270));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 103:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Var_305;
              MR_Word Error_306;

              {
                Error_306 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_306, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_306, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_306, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
              Var_305 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_306));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_305));
              }
              STATE_VARIABLE_PolyTypes_80_80 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_321 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Float Float_311;

              STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_321)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                Float_311 = MR_unbox_float((MR_hl_field(MR_mktag(0), SpecPolyType_321, (MR_Integer) 0)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = MR_box_float(Float_311);
                }
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_307;
                MR_Word Var_309;
                MR_Word Error_310;

                Var_307 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_321);
                {
                  Error_310 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_310, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_310, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_310, 2) = ((MR_Box) (Var_307));
                }
                SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                Var_309 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_310));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_309));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 111:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Var_344;
              MR_Word Error_345;

              {
                Error_345 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_345, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_345, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_345, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
              Var_344 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_345));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_344));
              }
              STATE_VARIABLE_PolyTypes_80_80 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_360 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Integer Int_354;

              STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_360)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Int_354 = ((MR_Integer) (MR_hl_field(MR_mktag(1), SpecPolyType_360, (MR_Integer) 0)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = ((MR_Box) (Int_354));
                }
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_346;
                MR_Word Var_348;
                MR_Word Error_349;

                Var_346 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_360);
                {
                  Error_349 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_349, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_349, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_349, 2) = ((MR_Box) (Var_346));
                }
                SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                Var_348 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_349));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_348));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 112:
          {
            MR_Word STATE_VARIABLE_Flags_70_418;
            MR_Word Var_134 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word Var_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word Var_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word Var_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            MR_Word Var_133 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0)))) & (MR_Integer) 1);

            {
              STATE_VARIABLE_Flags_70_418 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Flags_70_418, 0) = ((MR_Box) (((MR_Integer) 1 | ((((Var_134 << (MR_Integer) 1)) | ((((Var_135 << (MR_Integer) 2)) | ((((Var_136 << (MR_Integer) 3)) | ((Var_137 << (MR_Integer) 4)))))))))));
            }
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Var_382;
              MR_Word Error_383;

              {
                Error_383 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_383, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_383, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_383, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
              Var_382 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_383));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_382));
              }
              STATE_VARIABLE_PolyTypes_80_80 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_398 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Integer Int_392;

              STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_398)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Int_392 = ((MR_Integer) (MR_hl_field(MR_mktag(1), SpecPolyType_398, (MR_Integer) 0)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (STATE_VARIABLE_Flags_70_418));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = ((MR_Box) (Int_392));
                }
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_384;
                MR_Word Var_386;
                MR_Word Error_387;

                Var_384 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_398);
                {
                  Error_387 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_387, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_387, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_387, 2) = ((MR_Box) (Var_384));
                }
                SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                Var_386 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_387));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_386));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 115:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Var_53;
              MR_Word Error_125;

              {
                Error_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_125, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_125, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
              Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_125));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_53));
              }
              STATE_VARIABLE_PolyTypes_80_80 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_String Str_45;

              STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_123)) == (MR_mktag((MR_Integer) 2)));
              if (succeeded)
              {
                Str_45 = ((MR_String) (MR_hl_field(MR_mktag(2), SpecPolyType_123, (MR_Integer) 0)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), SpecPrime_36, 0) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(2), SpecPrime_36, 1) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(2), SpecPrime_36, 2) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(2), SpecPrime_36, 3) = ((MR_Box) (Str_45));
                }
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_55;
                MR_Word Var_57;
                MR_Word Error_121;

                Var_55 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_123);
                {
                  Error_121 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_121, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_121, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_121, 2) = ((MR_Box) (Var_55));
                }
                SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                Var_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_121));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_57));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 117:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Var_420;
              MR_Word Error_421;

              {
                Error_421 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_421, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_421, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_421, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
              Var_420 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_421));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_420));
              }
              STATE_VARIABLE_PolyTypes_80_80 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_436 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Integer Int_430;

              STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_436)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Int_430 = ((MR_Integer) (MR_hl_field(MR_mktag(1), SpecPolyType_436, (MR_Integer) 0)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = ((MR_Box) (Int_430));
                }
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_422;
                MR_Word Var_424;
                MR_Word Error_425;

                Var_422 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_436);
                {
                  Error_425 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_425, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_425, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_425, 2) = ((MR_Box) (Var_422));
                }
                SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                Var_424 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_425));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_424));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 120:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Var_458;
              MR_Word Error_459;

              {
                Error_459 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_459, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_459, 1) = ((MR_Box) (SpecNum_8));
                MR_hl_field(MR_mktag(3), Error_459, 2) = ((MR_Box) (MR_Word) (SpecChar_35));
              }
              SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
              Var_458 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_459));
                MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_458));
              }
              STATE_VARIABLE_PolyTypes_80_80 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_474 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Integer Int_468;

              STATE_VARIABLE_PolyTypes_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_474)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Int_468 = ((MR_Integer) (MR_hl_field(MR_mktag(1), SpecPolyType_474, (MR_Integer) 0)));
                {
                  SpecPrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 1) = ((MR_Box) (HeadVar__5_5));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 4) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_36, 5) = ((MR_Box) (Int_468));
                }
                ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_460;
                MR_Word Var_462;
                MR_Word Error_463;

                Var_460 = mercury__string__parse_runtime__poly_type_to_kind_1_f_0(SpecPolyType_474);
                {
                  Error_463 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_463, 0) = ((MR_Box) (SpecNum_8));
                  MR_hl_field(MR_mktag(2), Error_463, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
                  MR_hl_field(MR_mktag(2), Error_463, 2) = ((MR_Box) (Var_460));
                }
                SpecPrime_36 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
                Var_462 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  ErrorsPrime_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 0) = ((MR_Box) (Error_463));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_37, 1) = ((MR_Box) (Var_462));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
      }
      if (succeeded)
      {
        *STATE_VARIABLE_PolyTypes_4 = STATE_VARIABLE_PolyTypes_80_80;
        *Spec_9 = SpecPrime_36;
        *Errors_10 = ErrorsPrime_37;
      }
      else
      {
        MR_Word Var_86;
        MR_Word Error_131;

        {
          Error_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Error_131, 0) = ((MR_Box) (SpecNum_8));
          MR_hl_field(MR_mktag(1), Error_131, 1) = ((MR_Box) (MR_Word) (SpecChar_35));
        }
        *Spec_9 = (MR_Word) &mercury__string__parse_runtime_scalar_common_4[1];
        Var_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Errors_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_131));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_86));
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
        HeadVar__2_2 = (MR_Integer) 3;
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 2;
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        HeadVar__2_2 = (MR_Integer) 0;
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
    MR_bool succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Chars_0_16)) == (MR_mktag((MR_Integer) 1)));
    MR_Word STATE_VARIABLE_Chars_20_20;
    MR_Char Var_21;

    if (succeeded)
    {
      Var_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_16, (MR_Integer) 0)));
      STATE_VARIABLE_Chars_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_16, (MR_Integer) 1)));
      succeeded = (Var_21 == (MR_Char) 46);
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Chars_22_22;
      MR_Char Var_23;

      succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Chars_20_20)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_23 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_20_20, (MR_Integer) 0)));
        STATE_VARIABLE_Chars_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_20_20, (MR_Integer) 1)));
        succeeded = (Var_23 == (MR_Char) 42);
      }
      if (succeeded)
      {
        *STATE_VARIABLE_Chars_17 = STATE_VARIABLE_Chars_22_22;
        if ((STATE_VARIABLE_PolyTypes_0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word Var_24;
          MR_Word Var_25;

          *MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (SpecNum_10));
          }
          Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_25));
          }
          *STATE_VARIABLE_PolyTypes_19 = STATE_VARIABLE_PolyTypes_0_18;
        }
        else
        {
          MR_Word PolyType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_18, (MR_Integer) 0)));
          MR_Integer PolyPrec_14;

          *STATE_VARIABLE_PolyTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_18, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) PolyType_13)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            PolyPrec_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), PolyType_13, (MR_Integer) 0)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePrec_11 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PolyPrec_14));
            }
            *Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          else
          {
            MR_Word Var_27;
            MR_Word Var_28;
            MR_Word Var_29;

            *MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            switch (MR_tag((MR_Word) PolyType_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Var_28 = (MR_Integer) 3;
                break;
              case (MR_Integer) 1:
                Var_28 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                Var_28 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                Var_28 = (MR_Integer) 0;
                break;
            }
            {
              Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (SpecNum_10));
              MR_hl_field(MR_mktag(3), Var_27, 2) = ((MR_Box) (Var_28));
            }
            Var_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_27));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_29));
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
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePrec_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Prec_15));
        }
        *Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *STATE_VARIABLE_PolyTypes_19 = STATE_VARIABLE_PolyTypes_0_18;
      }
    }
    else
    {
      *MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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

    succeeded = mercury__string__parse_runtime____Unify____string_format_spec_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    mercury__string__parse_runtime____Compare____string_format_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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
