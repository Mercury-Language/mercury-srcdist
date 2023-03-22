/*
** Automatically generated from `term_io.m'
** by the Mercury compiler,
** version 22.01.6-beta-2023-03-22
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


// :- module term_io.
// :- implementation.

/*
INIT mercury__term_io__init
ENDINIT
*/

#include "term_io.mih"


#include "array.mih"
#include "assoc_list.mih"
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
#include "math.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "prolog.mih"
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
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0;

static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1;

static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_ordinal_ordered_adjacent_to_graphic_token_0[2];

static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_name_ordered_adjacent_to_graphic_token_0[2];

static const MR_Integer mercury__term_io__term_io__functor_number_map_adjacent_to_graphic_token_0[2];

static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_0;

static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_read_term_1_1[2];

static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_io__varset__pti_varset_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_io__term__pti_term_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_read_term_1_2[2];

static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_2;

static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_0[1];

static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_1[1];

static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_2[1];

static const MR_DuPtagLayout mercury__term_io__term_io__du_ptag_ordered_read_term_1[3];

static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_name_ordered_read_term_1[3];

static const MR_Integer mercury__term_io__term_io__functor_number_map_read_term_1[3];

static const MR_FA_TypeInfo_Struct1 mercury__term_io__term_io__ti_read_term_1term__type_ctor_info_generic_0;

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
  MR_Word Var_17,
  MR_Word Var_18,
  MR_Box Var_19,
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12);

static void MR_CALL 
mercury__term_io__foldl_between_2__ho31_6_p_in__string_0(
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__term_io__write_later_list_elements_9_p_0(
  MR_Word TypeInfo_for_T_54,
  MR_Word TypeClassInfo_for_op_table_53,
  MR_Word OutStream_10,
  MR_Box Ops_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Integer STATE_VARIABLE_N_0_25,
  MR_Integer * STATE_VARIABLE_N_26);

static void MR_CALL 
mercury__term_io__write_term_arg_9_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word TypeClassInfo_for_op_table_26,
  MR_Word OutStream_10,
  MR_Box Ops_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_16,
  MR_Word * STATE_VARIABLE_VarSet_17,
  MR_Integer STATE_VARIABLE_N_0_18,
  MR_Integer * STATE_VARIABLE_N_19);

static void MR_CALL 
mercury__term_io__write_term_later_args_9_p_0(
  MR_Word TypeInfo_for_T_43,
  MR_Word TypeClassInfo_for_op_table_42,
  MR_Word OutStream_1,
  MR_Box Ops_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarSet_0_4,
  MR_Word * STATE_VARIABLE_VarSet_5,
  MR_Integer STATE_VARIABLE_N_0_6,
  MR_Integer * STATE_VARIABLE_N_7);

static MR_bool MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
mercury__term_io__all_match_loop__ho23_3_p_in__string_0(
  MR_String HeadVar__2_5,
  MR_Integer HeadVar__3_6);

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_55_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
  MR_Word Var_17,
  MR_Word Var_18,
  MR_Word Var_19,
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10);

static MR_bool MR_CALL 
mercury__term_io____Unify____adjacent_to_graphic_token_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_io____Compare____adjacent_to_graphic_token_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_io____Unify____read_term_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__term_io____Compare____read_term_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__term_io____Unify____read_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_io____Compare____read_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__term_io_scalar_common_1[4][2];

static /* final */ const MR_Box mercury__term_io_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__term_io_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__term_io_scalar_common_4[2][5];

static /* final */ const MR_Integer mercury__term_io_scalar_common_5[1][3];


/* sealed */ struct mercury__term_io__vector_common_type_6_0_s {
  const MR_String mercury__term_io__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct mercury__term_io__vector_common_type_6_0_s mercury__term_io_vector_common_6[44];

/* sealed */ struct mercury__term_io__vector_common_type_7_0_s {
  const MR_Integer mercury__term_io__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct mercury__term_io__vector_common_type_7_0_s mercury__term_io_vector_common_7[12];



static /* final */ const MR_Box mercury__term_io_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term_io__term_io__type_ctor_info_read_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "\"")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "\'")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__term_io_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_io_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_io_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_io_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_io_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_io_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer mercury__term_io_scalar_common_5[1][3] = {
  /* row 0 */
  {
    (MR_Unsigned) 4227923967U,
    (MR_Unsigned) 4160749569U,
    (MR_Unsigned) 2013265921U
  },
};


static /* final */ const struct mercury__term_io__vector_common_type_6_0_s mercury__term_io_vector_common_6[44] = {
  /* row 0 */   {     (MR_String) "!" },
  /* row 1 */   {     (MR_String) ";" },
  /* row 2 */   {     (MR_String) "[]" },
  /* row 3 */   {     (MR_String) "{}" },
  /* row 4 */   {     (MR_String) "0b" },
  /* row 5 */   {     (MR_String) "0o" },
  /* row 6 */   {     (MR_String) "" },
  /* row 7 */   {     (MR_String) "0x" },
  /* row 8 */   {     (MR_String) "" },
  /* row 9 */   {     (MR_String) "i8" },
  /* row 10 */   {     (MR_String) "i16" },
  /* row 11 */   {     (MR_String) "i32" },
  /* row 12 */   {     (MR_String) "i64" },
  /* row 13 */   {     (MR_String) "u" },
  /* row 14 */   {     (MR_String) "u8" },
  /* row 15 */   {     (MR_String) "u16" },
  /* row 16 */   {     (MR_String) "u32" },
  /* row 17 */   {     (MR_String) "u64" },
  /* row 18 */   {     (MR_String) "!" },
  /* row 19 */   {     (MR_String) ";" },
  /* row 20 */   {     (MR_String) "[]" },
  /* row 21 */   {     (MR_String) "{}" },
  /* row 22 */   {     (MR_String) "0b" },
  /* row 23 */   {     (MR_String) "0o" },
  /* row 24 */   {     (MR_String) "" },
  /* row 25 */   {     (MR_String) "0x" },
  /* row 26 */   {     (MR_String) "" },
  /* row 27 */   {     (MR_String) "i8" },
  /* row 28 */   {     (MR_String) "i16" },
  /* row 29 */   {     (MR_String) "i32" },
  /* row 30 */   {     (MR_String) "i64" },
  /* row 31 */   {     (MR_String) "u" },
  /* row 32 */   {     (MR_String) "u8" },
  /* row 33 */   {     (MR_String) "u16" },
  /* row 34 */   {     (MR_String) "u32" },
  /* row 35 */   {     (MR_String) "u64" },
  /* row 36 */   {     (MR_String) "!" },
  /* row 37 */   {     (MR_String) ";" },
  /* row 38 */   {     (MR_String) "[]" },
  /* row 39 */   {     (MR_String) "{}" },
  /* row 40 */   {     (MR_String) "0b" },
  /* row 41 */   {     (MR_String) "0o" },
  /* row 42 */   {     (MR_String) "" },
  /* row 43 */   {     (MR_String) "0x" },
};

static /* final */ const struct mercury__term_io__vector_common_type_7_0_s mercury__term_io_vector_common_7[12] = {
  /* row 0 */   {     (MR_Integer) 2 },
  /* row 1 */   {     (MR_Integer) 8 },
  /* row 2 */   {     (MR_Integer) 10 },
  /* row 3 */   {     (MR_Integer) 16 },
  /* row 4 */   {     (MR_Integer) 2 },
  /* row 5 */   {     (MR_Integer) 8 },
  /* row 6 */   {     (MR_Integer) 10 },
  /* row 7 */   {     (MR_Integer) 16 },
  /* row 8 */   {     (MR_Integer) 2 },
  /* row 9 */   {     (MR_Integer) 8 },
  /* row 10 */   {     (MR_Integer) 10 },
  /* row 11 */   {     (MR_Integer) 16 },
};


#include "array.mh"
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



static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0 = {
  (MR_String) "maybe_adjacent_to_graphic_token",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1 = {
  (MR_String) "not_adjacent_to_graphic_token",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_ordinal_ordered_adjacent_to_graphic_token_0[2] = {
  &mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0,
  &mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1
};

static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_name_ordered_adjacent_to_graphic_token_0[2] = {
  &mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0,
  &mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1
};

static const MR_Integer mercury__term_io__term_io__functor_number_map_adjacent_to_graphic_token_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__term_io__term_io__type_ctor_info_adjacent_to_graphic_token_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term_io____Unify____adjacent_to_graphic_token_0_0_10001)),
  ((MR_Box) (mercury__term_io____Compare____adjacent_to_graphic_token_0_0_10001)),
  (MR_String) "term_io",
  (MR_String) "adjacent_to_graphic_token",
  {     mercury__term_io__term_io__enum_name_ordered_adjacent_to_graphic_token_0 },
  {     mercury__term_io__term_io__enum_ordinal_ordered_adjacent_to_graphic_token_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__term_io__term_io__functor_number_map_adjacent_to_graphic_token_0,

};

static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_0 = {
  (MR_String) "eof",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_read_term_1_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_1 = {
  (MR_String) "error",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__term_io__term_io__field_types_read_term_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_io__varset__pti_varset_1__pseudo_1 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_io__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_read_term_1_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_io__varset__pti_varset_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__term_io__term__pti_term_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_2 = {
  (MR_String) "term",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__term_io__term_io__field_types_read_term_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_0[1] = {
  &mercury__term_io__term_io__du_functor_desc_read_term_1_0
};

static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_1[1] = {
  &mercury__term_io__term_io__du_functor_desc_read_term_1_1
};

static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_2[1] = {
  &mercury__term_io__term_io__du_functor_desc_read_term_1_2
};

static const MR_DuPtagLayout mercury__term_io__term_io__du_ptag_ordered_read_term_1[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__term_io__term_io__du_stag_ordered_read_term_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_io__term_io__du_stag_ordered_read_term_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_io__term_io__du_stag_ordered_read_term_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_name_ordered_read_term_1[3] = {
  &mercury__term_io__term_io__du_functor_desc_read_term_1_0,
  &mercury__term_io__term_io__du_functor_desc_read_term_1_1,
  &mercury__term_io__term_io__du_functor_desc_read_term_1_2
};

static const MR_Integer mercury__term_io__term_io__functor_number_map_read_term_1[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__term_io__term_io__type_ctor_info_read_term_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_io____Unify____read_term_1_0_10001)),
  ((MR_Box) (mercury__term_io____Compare____read_term_1_0_10001)),
  (MR_String) "term_io",
  (MR_String) "read_term",
  {     mercury__term_io__term_io__du_name_ordered_read_term_1 },
  {     mercury__term_io__term_io__du_ptag_ordered_read_term_1 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__term_io__term_io__functor_number_map_read_term_1,

};

static const MR_FA_TypeInfo_Struct1 mercury__term_io__term_io__ti_read_term_1term__type_ctor_info_generic_0 = {
  &mercury__term_io__term_io__type_ctor_info_read_term_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__term_io__term_io__type_ctor_info_read_term_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term_io____Unify____read_term_0_0_10001)),
  ((MR_Box) (mercury__term_io____Compare____read_term_0_0_10001)),
  (MR_String) "term_io",
  (MR_String) "read_term",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__term_io__term_io__ti_read_term_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_12,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word Stream_5,
  MR_String S_6)
{
  mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_writer_12, TypeClassInfo_for_writer_13, Stream_5, S_6, (MR_Integer) 1);
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_12,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word Stream_5,
  MR_Char C_6)
{
  mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_p_0(TypeClassInfo_for_writer_12, Stream_5, C_6);
}

void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeClassInfo_for_writer_12,
  MR_Word Stream_5,
  MR_Char C_6)
{
  {
    MR_String Var_10;
    MR_String Var_18;
    MR_String Var_21;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_State_9;

    mercury__term_io__string_is_escaped_char_2_p_0(C_6, &Var_18);
    mercury__string__append_3_p_2(Var_18, (MR_String) "\'", &Var_21);
    mercury__string__append_3_p_2((MR_String) "\'", Var_21, &Var_10);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_writer_12)), ((MR_Box) (Stream_5)), ((MR_Box) (Var_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_9);
  }
}

void MR_CALL 
mercury__term_io____Compare____read_term_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_io_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mercury__term_io____Unify____read_term_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__term_io____Unify____read_term_1_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__term_io____Compare____read_term_1_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_30 == CastY_31);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_String Var_40 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgY1_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer ArgY2_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_12;
                  MR_Integer Var_46;

{
#define MR_PROC_LABEL mercury__term_io____Compare____read_term_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_40 ;
	S2 = ArgY1_11 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 Var_46  = Res;
}
                  succeeded = (Var_46 < (MR_Integer) 0);
                  if (succeeded)
                    SubResult1_12 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_46 == (MR_Integer) 0);
                    if (succeeded)
                      SubResult1_12 = (MR_Integer) 0;
                    else
                      SubResult1_12 = (MR_Integer) 2;
                  }
                  succeeded = (SubResult1_12 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_12;
                  else
                  {
                    succeeded = (Var_39 < ArgY2_14);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_39 == ArgY2_14);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *HeadVar__1_1 = (MR_Integer) 2;
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_27;

                  mercury__varset____Compare____varset_1_0(TypeInfo_for_T_32, &SubResult1_27, Var_42, ArgY1_26);
                  succeeded = (SubResult1_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_27;
                  else
                    mercury__term____Compare____term_1_0(TypeInfo_for_T_32, HeadVar__1_1, Var_41, ArgY2_29);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__term_io____Unify____read_term_1_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_6;
            MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
              if (succeeded)
                succeeded = (ArgX2_7 == ArgY2_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;
            MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = mercury__varset____Unify____varset_1_0(TypeInfo_for_T_15, ArgX1_9, ArgY1_10);
              if (succeeded)
                succeeded = mercury__term____Unify____term_1_0(TypeInfo_for_T_15, ArgX2_11, ArgY2_12);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__term_io____Compare____adjacent_to_graphic_token_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
mercury__term_io____Unify____adjacent_to_graphic_token_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__term_io__encode_escaped_char_2_p_1(
  MR_Char * Char_1,
  MR_String Str_2)
{
  {
    MR_bool succeeded;
    MR_Word Chars_14;
    MR_Word Var_20;
    MR_Char Var_21;

    mercury__string__to_char_list_2_p_0(Str_2, &Chars_14);
    succeeded = (Chars_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars_14, (MR_Integer) 0)));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Chars_14, (MR_Integer) 1))));
      if ((Var_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *Char_1 = Var_21;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Char EscapedChar_15;
        MR_Word Var_18;

        succeeded = (Var_21 == (MR_Char) 92);
        if (succeeded)
        {
          EscapedChar_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0)));
          Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1))));
          succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            switch (EscapedChar_15) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Char) 34:
                {
                  *Char_1 = (MR_Char) 34;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Char) 39:
                {
                  *Char_1 = (MR_Char) 39;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Char) 92:
                {
                  *Char_1 = (MR_Char) 92;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Char) 97:
                {
                  *Char_1 = (MR_Char) 7;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Char) 98:
                {
                  *Char_1 = (MR_Char) 8;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Char) 102:
                {
                  *Char_1 = (MR_Char) 12;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Char) 110:
                {
                  *Char_1 = (MR_Char) 10;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Char) 114:
                {
                  *Char_1 = (MR_Char) 13;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Char) 116:
                {
                  *Char_1 = (MR_Char) 9;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Char) 118:
                {
                  *Char_1 = (MR_Char) 11;
                  succeeded = MR_TRUE;
                }
                break;
            }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__term_io__encode_escaped_char_2_p_0(
  MR_Char Char_1,
  MR_String * Str_2)
{
  {
    MR_bool succeeded;
    MR_Char EscapeChar_5;

    switch (Char_1) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Char) 7:
        {
          EscapeChar_5 = (MR_Char) 97;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 8:
        {
          EscapeChar_5 = (MR_Char) 98;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 9:
        {
          EscapeChar_5 = (MR_Char) 116;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 10:
        {
          EscapeChar_5 = (MR_Char) 110;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 11:
        {
          EscapeChar_5 = (MR_Char) 118;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 12:
        {
          EscapeChar_5 = (MR_Char) 102;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 13:
        {
          EscapeChar_5 = (MR_Char) 114;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 34:
        {
          EscapeChar_5 = (MR_Char) 34;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          EscapeChar_5 = (MR_Char) 39;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 92:
        {
          EscapeChar_5 = (MR_Char) 92;
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      MR_Word Var_6;
      MR_Word Var_8;

      {
        Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (MR_Word) (EscapeChar_5));
        MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
        MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) (Var_8));
      }
      mercury__string__from_char_list_2_p_0(Var_6, Str_2);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_10;
      MR_Word Var_11;

      succeeded = mercury__char__is_alnum_1_p_0(Char_1);
      if (!(succeeded))
      {
        if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Char_1 - (MR_Unsigned) 32))) <= ((MR_Unsigned) 94)))
          if ((((mercury__term_io_scalar_common_5[0])[(((MR_Integer) ((MR_Unsigned) Char_1 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_1 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
        else
          succeeded = MR_FALSE;
        if (!(succeeded))
        {
          MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__term_io__encode_escaped_char_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_1 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_21  = Int;
}
          succeeded = (Var_21 >= (MR_Integer) 160);
        }
      }
      if (succeeded)
      {
        Var_11 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (MR_Word) (Char_1));
          MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (Var_11));
        }
        mercury__string__from_char_list_2_p_0(Var_10, Str_2);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__term_io__is_mercury_punctuation_char_1_p_0(
  MR_Char HeadVar__1_1)
{
  {
    MR_bool succeeded;

    if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 32))) <= ((MR_Unsigned) 94)))
      if ((((mercury__term_io_scalar_common_5[0])[(((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

MR_String MR_CALL 
mercury__term_io__integer_base_prefix_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = ((&mercury__term_io_vector_common_6[40 + HeadVar__1_1]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;

    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__term_io__integer_base_int_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2 = ((&mercury__term_io_vector_common_7[8 + HeadVar__1_1]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;

    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__term_io__quote_atom_agt_4_p_0(
  MR_String S_5,
  MR_Word AdjacentToGraphicToken_6)
{
  {
    MR_Word Stream_8;
    MR_Box Var_17;

{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Var_17  = (MR_Box) Stream;
}
    Stream_8 = (MR_Word) (Var_17);
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), Stream_8, S_5, AdjacentToGraphicToken_6);
  }
}

MR_String MR_CALL 
mercury__term_io__quoted_atom_1_f_0(
  MR_String S_3)
{
  {
    MR_String HeadVar__2_2;

    HeadVar__2_2 = mercury__term_io__quoted_atom_agt_2_f_0(S_3, (MR_Integer) 1);
    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__term_io__quote_atom_4_p_0(
  MR_Word TypeClassInfo_for_writer_12,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Box Stream_5,
  MR_String S_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  mercury__term_io__quote_atom_agt_5_p_0(TypeClassInfo_for_writer_12, TypeClassInfo_for_writer_13, Stream_5, S_6, (MR_Integer) 1, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__quote_atom_agt_5_p_0(
  MR_Word TypeClassInfo_for_writer_19,
  MR_Word TypeClassInfo_for_writer_20,
  MR_Box Stream_6,
  MR_String S_7,
  MR_Word AdjacentToGraphicToken_8,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12)
{
  {
    MR_bool succeeded;
    MR_Word ShouldQuote_10;

    {
      MR_Integer lo_0 = (MR_Integer) 0;
      MR_Integer hi_1 = (MR_Integer) 3;
      MR_Integer mid_2;
      MR_Integer result_3;

      // binary string simple lookup switch
      ;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(S_7, ((&mercury__term_io_vector_common_6[36 + mid_2]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0);
        if ((result_3 == (MR_Integer) 0))
        {
          succeeded = MR_TRUE;
          // jump out of search loop
          ;
          goto label_0;
        }
        else
        if ((result_3 < (MR_Integer) 0))
          hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
        else
          lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
      }
      while ((lo_0 <= hi_1));
      succeeded = MR_FALSE;
    label_0:;
    }
    if (!(succeeded))
    {
      {
        MR_Integer Var_26;
        MR_Char Var_27;
        MR_Char Var_30;
        MR_Integer Var_38;

        succeeded = mercury__term_io__all_match_loop__ho23_3_p_in__string_0(S_7, (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (strcmp(S_7, (MR_String) "") == 0);
          succeeded = !(succeeded);
          if (succeeded)
          {
            Var_26 = (MR_Integer) 0;
            Var_27 = (MR_Char) 35;
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = S_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_38  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = Var_26 ;
	Length = Var_38 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
            if (succeeded)
            {
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = S_7 ;
	Index = Var_26 ;
		{

    Ch = (unsigned char) Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
        if (Ch < 0) {
            Ch = 0xFFFD;
        }
    }


		;}
#undef MR_PROC_LABEL
	 Var_30  = Ch;
}
              succeeded = (Var_27 == Var_30);
            }
            succeeded = !(succeeded);
            if (succeeded)
              succeeded = (AdjacentToGraphicToken_8 == (MR_Integer) 1);
          }
        }
      }
      if (!(succeeded))
      {
        MR_Char FirstChar_24;
        MR_Integer Var_44;
        MR_Char Var_48;

{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = S_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_44  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = (MR_Integer) 0 ;
	Length = Var_44 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = S_7 ;
	Index = (MR_Integer) 0 ;
		{

    Ch = (unsigned char) Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
        if (Ch < 0) {
            Ch = 0xFFFD;
        }
    }


		;}
#undef MR_PROC_LABEL
	 FirstChar_24  = Ch;
}
          succeeded = mercury__char__lower_upper_2_p_0(FirstChar_24, &Var_48);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = S_7 ;
		{

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':

            case 'a': case 'b': case 'c': case 'd': case 'e':
            case 'f': case 'g': case 'h': case 'i': case 'j':
            case 'k': case 'l': case 'm': case 'n': case 'o':
            case 'p': case 'q': case 'r': case 's': case 't':
            case 'u': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            case 'A': case 'B': case 'C': case 'D': case 'E':
            case 'F': case 'G': case 'H': case 'I': case 'J':
            case 'K': case 'L': case 'M': case 'N': case 'O':
            case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'U': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':

            case '_':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
          }
        }
      }
    }
    if (succeeded)
      ShouldQuote_10 = (MR_Integer) 0;
    else
      ShouldQuote_10 = (MR_Integer) 1;
    switch (ShouldQuote_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));

          func_0(((MR_Box) (TypeClassInfo_for_writer_19)), Stream_6, ((MR_Box) (S_7)), STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box STATE_VARIABLE_State_14_14;
          MR_Box STATE_VARIABLE_State_15_15;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5))));
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_1(((MR_Box) (TypeClassInfo_for_writer_20)), Stream_6, ((MR_Box) (MR_Word) ((MR_Char) 39)), STATE_VARIABLE_State_0_11, &STATE_VARIABLE_State_14_14);
          mercury__term_io__write_escaped_string_4_p_0(TypeClassInfo_for_writer_19, TypeClassInfo_for_writer_20, Stream_6, S_7, STATE_VARIABLE_State_14_14, &STATE_VARIABLE_State_15_15);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5))));
          func_2(((MR_Box) (TypeClassInfo_for_writer_20)), Stream_6, ((MR_Box) (MR_Word) ((MR_Char) 39)), STATE_VARIABLE_State_15_15, STATE_VARIABLE_State_12);
        }
        break;
    }
  }
}

void MR_CALL 
mercury__term_io__quote_atom_3_p_0(
  MR_String S_4)
{
  {
    MR_Word Stream_15;
    MR_Box Var_22;

{
#define MR_PROC_LABEL mercury__term_io__quote_atom_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Var_22  = (MR_Box) Stream;
}
    Stream_15 = (MR_Word) (Var_22);
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), Stream_15, S_4, (MR_Integer) 1);
  }
}

void MR_CALL 
mercury__term_io__write_escaped_string_3_p_0(
  MR_String String_4)
{
  {
    MR_Word Stream_6;
    MR_Box Var_15;

{
#define MR_PROC_LABEL mercury__term_io__write_escaped_string_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Var_15  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) (Var_15);
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), Stream_6, String_4);
  }
}

MR_String MR_CALL 
mercury__term_io__quoted_string_1_f_0(
  MR_String S_3)
{
  {
    MR_String HeadVar__2_2;
    MR_Word Var_4;
    MR_Word Var_6;
    MR_String Var_7;

    Var_7 = mercury__term_io__escaped_string_1_f_0(S_3);
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__term_io_scalar_common_1[2])));
    }
    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_4, 0) = ((MR_Box) ((MR_String) "\""));
      MR_hl_field(MR_mktag(1), Var_4, 1) = ((MR_Box) (Var_6));
    }
    HeadVar__2_2 = mercury__string__append_list_1_f_0(Var_4);
    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__term_io__quote_string_4_p_0(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Box Stream_5,
  MR_String S_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  {
    MR_Box STATE_VARIABLE_State_11_11;
    MR_Box STATE_VARIABLE_State_12_12;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_writer_16)), Stream_5, ((MR_Box) (MR_Word) ((MR_Char) 34)), STATE_VARIABLE_State_0_8, &STATE_VARIABLE_State_11_11);
    mercury__term_io__write_escaped_string_4_p_0(TypeClassInfo_for_writer_15, TypeClassInfo_for_writer_16, Stream_5, S_6, STATE_VARIABLE_State_11_11, &STATE_VARIABLE_State_12_12);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_writer_16)), Stream_5, ((MR_Box) (MR_Word) ((MR_Char) 34)), STATE_VARIABLE_State_12_12, STATE_VARIABLE_State_9);
  }
}

void MR_CALL 
mercury__term_io__write_escaped_string_4_p_0(
  MR_Word TypeClassInfo_for_writer_12,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Box Stream_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  {
    MR_bool succeeded;
    MR_Integer Var_23;
    MR_Integer Var_31;
    MR_Integer Var_33;
    MR_Integer Var_34;

{
#define MR_PROC_LABEL mercury__term_io__write_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_23  = Length;
}
    succeeded = ((MR_Integer) 0 > (MR_Integer) 0);
    if (succeeded)
      Var_31 = (MR_Integer) 0;
    else
      Var_31 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__term_io__write_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_34  = Length;
}
    succeeded = (Var_23 < Var_34);
    if (succeeded)
      Var_33 = Var_23;
    else
      Var_33 = Var_34;
    mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(TypeClassInfo_for_writer_12, TypeClassInfo_for_writer_13, Stream_5, String_6, Var_31, Var_33, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
  }
}

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
  MR_Word Var_17,
  MR_Word Var_18,
  MR_Box Var_19,
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Box HeadVar__5_11,
  MR_Box * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 < HeadVar__4_10);
    MR_Integer Var_13;
    MR_Char Var_14;
    MR_Integer Var_24;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_8 ;
	Index = HeadVar__3_9 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Var_13  = NextIndex;
	 Var_14  = Ch;
	 Var_24  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (Var_13 <= HeadVar__4_10);
    }
    if (succeeded)
    {
      MR_Box Var_15;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Box next_value_of_HeadVar__5_11;

      mercury__term_io__write_escaped_char_4_p_0(Var_17, Var_18, Var_19, Var_14, HeadVar__5_11, &Var_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_13;
      next_value_of_HeadVar__5_11 = Var_15;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    else
      *HeadVar__6_12 = HeadVar__5_11;
    break;
  }
}

void MR_CALL 
mercury__term_io__quote_string_3_p_0(
  MR_String S_4)
{
  {
    MR_Word Stream_6;
    MR_Box Var_15;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_State_11_22;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_IO_8;

{
#define MR_PROC_LABEL mercury__term_io__quote_string_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Var_15  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) (Var_15);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_11_22);
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), Stream_6, S_4);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_8);
  }
}

MR_bool MR_CALL 
mercury__term_io__string_is_escaped_char_2_p_1(
  MR_Char * Char_1,
  MR_String String_2)
{
  {
    MR_bool succeeded;
    MR_Word Chars_10;
    MR_Word Var_32;
    MR_Char Var_33;

    mercury__string__to_char_list_2_p_0(String_2, &Chars_10);
    succeeded = (Chars_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_33 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Chars_10, (MR_Integer) 0)));
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Chars_10, (MR_Integer) 1))));
      if ((Var_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *Char_1 = Var_33;
        succeeded = mercury__char__is_alnum_1_p_0(*Char_1);
        if (!(succeeded))
        {
          if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) *Char_1 - (MR_Unsigned) 32))) <= ((MR_Unsigned) 94)))
            if ((((mercury__term_io_scalar_common_5[0])[(((MR_Integer) ((MR_Unsigned) *Char_1 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) *Char_1 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
          else
            succeeded = MR_FALSE;
          if (!(succeeded))
          {
            MR_Integer Var_37;

{
#define MR_PROC_LABEL mercury__term_io__string_is_escaped_char_2_p_1

	MR_Char Character;
	MR_Integer Int;

	Character = *Char_1 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_37  = Int;
}
            succeeded = (Var_37 >= (MR_Integer) 160);
          }
        }
        if (!(succeeded))
          switch (*Char_1) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Char) 7:
              succeeded = MR_TRUE;
              break;
            case (MR_Char) 8:
              succeeded = MR_TRUE;
              break;
            case (MR_Char) 9:
              succeeded = MR_TRUE;
              break;
            case (MR_Char) 10:
              succeeded = MR_TRUE;
              break;
            case (MR_Char) 11:
              succeeded = MR_TRUE;
              break;
            case (MR_Char) 12:
              succeeded = MR_TRUE;
              break;
            case (MR_Char) 13:
              succeeded = MR_TRUE;
              break;
            case (MR_Char) 34:
              succeeded = MR_TRUE;
              break;
            case (MR_Char) 39:
              succeeded = MR_TRUE;
              break;
            case (MR_Char) 92:
              succeeded = MR_TRUE;
              break;
          }
      }
      else
      {
        MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1))));
        MR_Char Var_35 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0)));

        succeeded = (Var_33 == (MR_Char) 92);
        if (succeeded)
        {
          if ((Var_34 == (MR_Word) ((MR_Unsigned) 0U)))
            switch (Var_35) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Char) 34:
                {
                  *Char_1 = (MR_Char) 34;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Char) 39:
                {
                  *Char_1 = (MR_Char) 39;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Char) 92:
                {
                  *Char_1 = (MR_Char) 92;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Char) 97:
                {
                  *Char_1 = (MR_Char) 7;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Char) 98:
                {
                  *Char_1 = (MR_Char) 8;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Char) 102:
                {
                  *Char_1 = (MR_Char) 12;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Char) 110:
                {
                  *Char_1 = (MR_Char) 10;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Char) 114:
                {
                  *Char_1 = (MR_Char) 13;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Char) 116:
                {
                  *Char_1 = (MR_Char) 9;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Char) 118:
                {
                  *Char_1 = (MR_Char) 11;
                  succeeded = MR_TRUE;
                }
                break;
            }
          else
          {
            MR_String NumString_17;
            MR_Integer Int_18;
            MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 1))));
            MR_Word Var_23;
            MR_Integer Var_27;

            succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 1))));
              succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                mercury__string__from_char_list_2_p_0(Var_32, &NumString_17);
                Var_27 = (MR_Integer) 8;
                succeeded = mercury__string__base_string_to_int_3_p_0(Var_27, NumString_17, &Int_18);
                if (succeeded)
                {
{
#define MR_PROC_LABEL mercury__term_io__string_is_escaped_char_2_p_1

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int = Int_18 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *Char_1  = Character;
	}
succeeded  = SUCCESS_INDICATOR;
}
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_String MR_CALL 
mercury__term_io__escaped_char_1_f_0(
  MR_Char Char_3)
{
  {
    MR_String String_4;

    mercury__term_io__string_is_escaped_char_2_p_0(Char_3, &String_4);
    return String_4;
  }
}

void MR_CALL 
mercury__term_io__write_escaped_char_4_p_0(
  MR_Word TypeClassInfo_for_writer_17,
  MR_Word TypeClassInfo_for_writer_18,
  MR_Box Stream_5,
  MR_Char Char_6,
  MR_Box STATE_VARIABLE_State_0_9,
  MR_Box * STATE_VARIABLE_State_10)
{
  {
    MR_bool succeeded;
    MR_Char QuoteChar_8;

    switch (Char_6) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Char) 7:
        {
          QuoteChar_8 = (MR_Char) 97;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 8:
        {
          QuoteChar_8 = (MR_Char) 98;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 9:
        {
          QuoteChar_8 = (MR_Char) 116;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 10:
        {
          QuoteChar_8 = (MR_Char) 110;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 11:
        {
          QuoteChar_8 = (MR_Char) 118;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 12:
        {
          QuoteChar_8 = (MR_Char) 102;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 13:
        {
          QuoteChar_8 = (MR_Char) 114;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 34:
        {
          QuoteChar_8 = (MR_Char) 34;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          QuoteChar_8 = (MR_Char) 39;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 92:
        {
          QuoteChar_8 = (MR_Char) 92;
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_State_12_12;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_0(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_5, ((MR_Box) (MR_Word) ((MR_Char) 92)), STATE_VARIABLE_State_0_9, &STATE_VARIABLE_State_12_12);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
      func_1(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_5, ((MR_Box) (MR_Word) (QuoteChar_8)), STATE_VARIABLE_State_12_12, STATE_VARIABLE_State_10);
    }
    else
    {
      succeeded = mercury__char__is_alnum_1_p_0(Char_6);
      if (!(succeeded))
      {
        if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32))) <= ((MR_Unsigned) 94)))
          if ((((mercury__term_io_scalar_common_5[0])[(((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
        else
          succeeded = MR_FALSE;
        if (!(succeeded))
        {
          MR_Integer Var_20;

{
#define MR_PROC_LABEL mercury__term_io__write_escaped_char_4_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_6 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_20  = Int;
}
          succeeded = (Var_20 >= (MR_Integer) 160);
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));

        func_2(((MR_Box) (TypeClassInfo_for_writer_18)), Stream_5, ((MR_Box) (MR_Word) (Char_6)), STATE_VARIABLE_State_0_9, STATE_VARIABLE_State_10);
      }
      else
      {
        MR_String Var_15;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        Var_15 = mercury__term_io__mercury_escape_char_1_f_0(Char_6);
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5))));
        func_3(((MR_Box) (TypeClassInfo_for_writer_17)), Stream_5, ((MR_Box) (Var_15)), STATE_VARIABLE_State_0_9, STATE_VARIABLE_State_10);
      }
    }
  }
}

void MR_CALL 
mercury__term_io__write_escaped_char_3_p_0(
  MR_Char Char_4)
{
  {
    MR_Word Stream_6;
    MR_Box Var_15;

{
#define MR_PROC_LABEL mercury__term_io__write_escaped_char_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Var_15  = (MR_Box) Stream;
}
    Stream_6 = (MR_Word) (Var_15);
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), Stream_6, Char_4);
  }
}

MR_String MR_CALL 
mercury__term_io__quoted_char_1_f_0(
  MR_Char C_3)
{
  {
    MR_String HeadVar__2_2;
    MR_String Var_7;
    MR_String Var_10;

    mercury__term_io__string_is_escaped_char_2_p_0(C_3, &Var_7);
    mercury__string__append_3_p_2(Var_7, (MR_String) "\'", &Var_10);
    mercury__string__append_3_p_2((MR_String) "\'", Var_10, &HeadVar__2_2);
    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__term_io__quote_char_4_p_0(
  MR_Word TypeClassInfo_for_writer_12,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Box Stream_5,
  MR_Char C_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_p_0(TypeClassInfo_for_writer_12, Stream_5, C_6, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
}

void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeClassInfo_for_writer_12,
  MR_Box Stream_5,
  MR_Char C_6,
  MR_Box STATE_VARIABLE_State_0_8,
  MR_Box * STATE_VARIABLE_State_9)
{
  {
    MR_String Var_10;
    MR_String Var_18;
    MR_String Var_21;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__term_io__string_is_escaped_char_2_p_0(C_6, &Var_18);
    mercury__string__append_3_p_2(Var_18, (MR_String) "\'", &Var_21);
    mercury__string__append_3_p_2((MR_String) "\'", Var_21, &Var_10);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_writer_12)), Stream_5, ((MR_Box) (Var_10)), STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
  }
}

void MR_CALL 
mercury__term_io__quote_char_3_p_0(
  MR_Char C_4)
{
  {
    MR_Word OutStream_6;
    MR_String Var_10;
    MR_Box Var_14;
    MR_String Var_19;
    MR_String Var_22;
    MR_Box Var_41;
    MR_Box Var_42;

{
#define MR_PROC_LABEL mercury__term_io__quote_char_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Var_14  = (MR_Box) Stream;
}
    OutStream_6 = (MR_Word) (Var_14);
    mercury__term_io__string_is_escaped_char_2_p_0(C_4, &Var_19);
    mercury__string__append_3_p_2(Var_19, (MR_String) "\'", &Var_22);
    mercury__string__append_3_p_2((MR_String) "\'", Var_22, &Var_10);
    Var_41 = (MR_Box) (OutStream_6);
{
#define MR_PROC_LABEL mercury__term_io__quote_char_3_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_41 ;
	Message = Var_10 ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_42 );
}
    mercury__io__throw_on_error_4_p_0(Var_42, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__term_io__string_is_escaped_char_2_p_0(
  MR_Char Char_1,
  MR_String * String_2)
{
  {
    MR_bool succeeded;
    MR_Char QuoteChar_5;

    switch (Char_1) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Char) 7:
        {
          QuoteChar_5 = (MR_Char) 97;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 8:
        {
          QuoteChar_5 = (MR_Char) 98;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 9:
        {
          QuoteChar_5 = (MR_Char) 116;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 10:
        {
          QuoteChar_5 = (MR_Char) 110;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 11:
        {
          QuoteChar_5 = (MR_Char) 118;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 12:
        {
          QuoteChar_5 = (MR_Char) 102;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 13:
        {
          QuoteChar_5 = (MR_Char) 114;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 34:
        {
          QuoteChar_5 = (MR_Char) 34;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          QuoteChar_5 = (MR_Char) 39;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 92:
        {
          QuoteChar_5 = (MR_Char) 92;
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      MR_String Var_7;

      mercury__string__char_to_string_2_p_0(QuoteChar_5, &Var_7);
      mercury__string__append_3_p_2((MR_String) "\\", Var_7, String_2);
    }
    else
    {
      succeeded = mercury__char__is_alnum_1_p_0(Char_1);
      if (!(succeeded))
      {
        if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Char_1 - (MR_Unsigned) 32))) <= ((MR_Unsigned) 94)))
          if ((((mercury__term_io_scalar_common_5[0])[(((MR_Integer) ((MR_Unsigned) Char_1 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_1 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
        else
          succeeded = MR_FALSE;
        if (!(succeeded))
        {
          MR_Integer Var_38;

{
#define MR_PROC_LABEL mercury__term_io__string_is_escaped_char_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_1 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_38  = Int;
}
          succeeded = (Var_38 >= (MR_Integer) 160);
        }
      }
      if (succeeded)
        mercury__string__char_to_string_2_p_0(Char_1, String_2);
      else
        *String_2 = mercury__term_io__mercury_escape_char_1_f_0(Char_1);
    }
  }
}

void MR_CALL 
mercury__term_io__write_variable_with_op_table_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeClassInfo_for_op_table_18,
  MR_Word OutStream_7,
  MR_Box Ops_8,
  MR_Word Var_9,
  MR_Word VarSet_10)
{
  {
    MR_Word Var_12;
    MR_Integer Var_13;

    mercury__term_io__write_variable_anon_vars_9_p_0(TypeInfo_for_T_19, TypeClassInfo_for_op_table_18, OutStream_7, Ops_8, Var_9, VarSet_10, &Var_12, (MR_Integer) 0, &Var_13);
  }
}

void MR_CALL 
mercury__term_io__write_variable_with_op_table_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_op_table_15,
  MR_Box Ops_6,
  MR_Word Var_7,
  MR_Word VarSet_8)
{
  {
    MR_Word OutStream_10;
    MR_Box Var_19;
    MR_Word Var_27;
    MR_Integer Var_28;

{
#define MR_PROC_LABEL mercury__term_io__write_variable_with_op_table_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Var_19  = (MR_Box) Stream;
}
    OutStream_10 = (MR_Word) (Var_19);
    mercury__term_io__write_variable_anon_vars_9_p_0(TypeInfo_for_T_16, TypeClassInfo_for_op_table_15, OutStream_10, Ops_6, Var_7, VarSet_8, &Var_27, (MR_Integer) 0, &Var_28);
  }
}

void MR_CALL 
mercury__term_io__write_variable_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word OutStream_6,
  MR_Word Var_7,
  MR_Word VarSet_8)
{
  {
    MR_Word Var_27;
    MR_Integer Var_28;

    mercury__term_io__write_variable_anon_vars_9_p_0(TypeInfo_for_T_15, (MR_Word) (&mercury__term_io_scalar_common_1[0]), OutStream_6, ((MR_Box) ((MR_Integer) 0)), Var_7, VarSet_8, &Var_27, (MR_Integer) 0, &Var_28);
  }
}

void MR_CALL 
mercury__term_io__write_variable_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Var_5,
  MR_Word VarSet_6)
{
  {
    MR_Word OutStream_8;
    MR_Box Var_16;
    MR_Word Var_37;
    MR_Integer Var_38;

{
#define MR_PROC_LABEL mercury__term_io__write_variable_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Var_16  = (MR_Box) Stream;
}
    OutStream_8 = (MR_Word) (Var_16);
    mercury__term_io__write_variable_anon_vars_9_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__term_io_scalar_common_1[0]), OutStream_8, ((MR_Box) ((MR_Integer) 0)), Var_5, VarSet_6, &Var_37, (MR_Integer) 0, &Var_38);
  }
}

MR_String MR_CALL 
mercury__term_io__format_constant_1_f_0(
  MR_Word Const_3)
{
  {
    MR_String HeadVar__2_2;

    HeadVar__2_2 = mercury__term_io__format_constant_agt_2_f_0(Const_3, (MR_Integer) 1);
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
mercury__term_io__format_constant_agt_2_f_0(
  MR_Word Const_4,
  MR_Word AdjacentToGraphicToken_5)
{
  {
    MR_String Str_6;

    switch (MR_tag((MR_Word) Const_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String A_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), Const_4, (MR_Integer) 0))));

          Str_6 = mercury__term_io__quoted_atom_agt_2_f_0(A_12, AdjacentToGraphicToken_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Base_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_4, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word I_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Const_4, (MR_Integer) 1))));
          MR_Word Signedness_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_4, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          MR_Word Size_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_4, (MR_Integer) 2))) & (MR_Integer) 7);
          MR_String Var_16 = ((&mercury__term_io_vector_common_6[22 + Base_7]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;
          MR_String Var_17;
          MR_String Var_18;
          MR_Integer Var_19 = ((&mercury__term_io_vector_common_7[4 + Base_7]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;
          MR_String Var_20;

          Var_18 = mercury__integer__to_base_string_2_f_0(I_8, Var_19);
          switch (Signedness_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Var_20 = ((&mercury__term_io_vector_common_6[26 + Size_10]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;
              break;
            case (MR_Integer) 1:
              Var_20 = ((&mercury__term_io_vector_common_6[31 + Size_10]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;
              break;
          }
          mercury__string__append_3_p_2(Var_18, Var_20, &Var_17);
          mercury__string__append_3_p_2(Var_16, Var_17, &Str_6);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String S_13 = ((MR_String) ((MR_hl_field(MR_mktag(2), Const_4, (MR_Integer) 0))));
          MR_Word Var_42;
          MR_Word Var_44;
          MR_String Var_45;

          Var_45 = mercury__term_io__escaped_string_1_f_0(S_13);
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__term_io_scalar_common_1[2])));
          }
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) ((MR_String) "\""));
            MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_44));
          }
          Str_6 = mercury__string__append_list_1_f_0(Var_42);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Float F_11 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_4, (MR_Integer) 1)));

{
#define MR_PROC_LABEL mercury__term_io__format_constant_agt_2_f_0

	MR_Float Flt;
	MR_String Str;

	Flt = F_11 ;
		{
{
    // For efficiency reasons we duplicate the C implementation
    // of lowlevel_float_to_string.
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 Str_6  = Str;
}
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String N_14 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_4, (MR_Integer) 1))));

              mercury__string__append_3_p_2((MR_String) "\044", N_14, &Str_6);
            }
            break;
        }
        break;
    }
    return Str_6;
  }
}

MR_String MR_CALL 
mercury__term_io__quoted_atom_agt_2_f_0(
  MR_String S_4,
  MR_Word AdjacentToGraphicToken_5)
{
  {
    MR_bool succeeded;
    MR_String String_6;
    MR_Word ShouldQuote_7;

    {
      MR_Integer lo_0 = (MR_Integer) 0;
      MR_Integer hi_1 = (MR_Integer) 3;
      MR_Integer mid_2;
      MR_Integer result_3;

      // binary string simple lookup switch
      ;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(S_4, ((&mercury__term_io_vector_common_6[18 + mid_2]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0);
        if ((result_3 == (MR_Integer) 0))
        {
          succeeded = MR_TRUE;
          // jump out of search loop
          ;
          goto label_0;
        }
        else
        if ((result_3 < (MR_Integer) 0))
          hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
        else
          lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
      }
      while ((lo_0 <= hi_1));
      succeeded = MR_FALSE;
    label_0:;
    }
    if (!(succeeded))
    {
      {
        MR_Integer Var_20;
        MR_Char Var_21;
        MR_Char Var_24;
        MR_Integer Var_32;

        succeeded = mercury__term_io__all_match_loop__ho23_3_p_in__string_0(S_4, (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (strcmp(S_4, (MR_String) "") == 0);
          succeeded = !(succeeded);
          if (succeeded)
          {
            Var_20 = (MR_Integer) 0;
            Var_21 = (MR_Char) 35;
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_32  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = Var_20 ;
	Length = Var_32 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
            if (succeeded)
            {
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = S_4 ;
	Index = Var_20 ;
		{

    Ch = (unsigned char) Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
        if (Ch < 0) {
            Ch = 0xFFFD;
        }
    }


		;}
#undef MR_PROC_LABEL
	 Var_24  = Ch;
}
              succeeded = (Var_21 == Var_24);
            }
            succeeded = !(succeeded);
            if (succeeded)
              succeeded = (AdjacentToGraphicToken_5 == (MR_Integer) 1);
          }
        }
      }
      if (!(succeeded))
      {
        MR_Char FirstChar_18;
        MR_Integer Var_38;
        MR_Char Var_42;

{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_38  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = (MR_Integer) 0 ;
	Length = Var_38 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = S_4 ;
	Index = (MR_Integer) 0 ;
		{

    Ch = (unsigned char) Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
        if (Ch < 0) {
            Ch = 0xFFFD;
        }
    }


		;}
#undef MR_PROC_LABEL
	 FirstChar_18  = Ch;
}
          succeeded = mercury__char__lower_upper_2_p_0(FirstChar_18, &Var_42);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = S_4 ;
		{

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':

            case 'a': case 'b': case 'c': case 'd': case 'e':
            case 'f': case 'g': case 'h': case 'i': case 'j':
            case 'k': case 'l': case 'm': case 'n': case 'o':
            case 'p': case 'q': case 'r': case 's': case 't':
            case 'u': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            case 'A': case 'B': case 'C': case 'D': case 'E':
            case 'F': case 'G': case 'H': case 'I': case 'J':
            case 'K': case 'L': case 'M': case 'N': case 'O':
            case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'U': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':

            case '_':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
          }
        }
      }
    }
    if (succeeded)
      ShouldQuote_7 = (MR_Integer) 0;
    else
      ShouldQuote_7 = (MR_Integer) 1;
    switch (ShouldQuote_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        String_6 = S_4;
        break;
      case (MR_Integer) 1:
        {
          MR_String ES_8;
          MR_Word Var_9;
          MR_Word Var_11;

          ES_8 = mercury__term_io__escaped_string_1_f_0(S_4);
          {
            Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (ES_8));
            MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__term_io_scalar_common_1[3])));
          }
          {
            Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) ((MR_String) "\'"));
            MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Var_11));
          }
          String_6 = mercury__string__append_list_1_f_0(Var_9);
        }
        break;
    }
    return String_6;
  }
}

MR_String MR_CALL 
mercury__term_io__escaped_string_1_f_0(
  MR_String String_3)
{
  {
    MR_bool succeeded;
    MR_String HeadVar__2_2;
    MR_Word Var_4;
    MR_Word Var_5;
    MR_Integer Var_38;
    MR_Integer Var_50;
    MR_Integer Var_52;
    MR_Integer Var_53;

{
#define MR_PROC_LABEL mercury__term_io__escaped_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_38  = Length;
}
    succeeded = ((MR_Integer) 0 > (MR_Integer) 0);
    if (succeeded)
      Var_50 = (MR_Integer) 0;
    else
      Var_50 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__term_io__escaped_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_53  = Length;
}
    succeeded = (Var_38 < Var_53);
    if (succeeded)
      Var_52 = Var_38;
    else
      Var_52 = Var_53;
    mercury__term_io__foldl_between_2__ho31_6_p_in__string_0(String_3, Var_50, Var_52, (MR_Word) ((MR_Unsigned) 0U), &Var_5);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_5, &Var_4);
    HeadVar__2_2 = mercury__string__append_list_1_f_0(Var_4);
    return HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__term_io__foldl_between_2__ho31_6_p_in__string_0(
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 < HeadVar__4_10);
    MR_Integer Var_13;
    MR_Char Var_14;
    MR_Integer Var_26;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__term_io__foldl_between_2__ho31_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_8 ;
	Index = HeadVar__3_9 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Var_13  = NextIndex;
	 Var_14  = Ch;
	 Var_26  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (Var_13 <= HeadVar__4_10);
    }
    if (succeeded)
    {
      MR_Word Var_15;
      MR_Integer next_value_of_HeadVar__3_9;
      MR_Word next_value_of_HeadVar__5_11;

      Var_15 = mercury__term_io__add_escaped_char_2_f_0(Var_14, HeadVar__5_11);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_13;
      next_value_of_HeadVar__5_11 = Var_15;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    else
      *HeadVar__6_12 = HeadVar__5_11;
    break;
  }
}

MR_Word MR_CALL 
mercury__term_io__add_escaped_char_2_f_0(
  MR_Char Char_4,
  MR_Word Strings0_5)
{
  {
    MR_bool succeeded;
    MR_Word Strings_6;
    MR_Char QuoteChar_7;

    switch (Char_4) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Char) 7:
        {
          QuoteChar_7 = (MR_Char) 97;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 8:
        {
          QuoteChar_7 = (MR_Char) 98;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 9:
        {
          QuoteChar_7 = (MR_Char) 116;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 10:
        {
          QuoteChar_7 = (MR_Char) 110;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 11:
        {
          QuoteChar_7 = (MR_Char) 118;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 12:
        {
          QuoteChar_7 = (MR_Char) 102;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 13:
        {
          QuoteChar_7 = (MR_Char) 114;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 34:
        {
          QuoteChar_7 = (MR_Char) 34;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          QuoteChar_7 = (MR_Char) 39;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 92:
        {
          QuoteChar_7 = (MR_Char) 92;
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      MR_String Var_8;
      MR_Word Var_9;
      MR_Word Var_11;

      {
        Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (MR_Word) (QuoteChar_7));
        MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
        MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Var_11));
      }
      mercury__string__from_char_list_2_p_0(Var_9, &Var_8);
      {
        Strings_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Strings_6, 0) = ((MR_Box) (Var_8));
        MR_hl_field(MR_mktag(1), Strings_6, 1) = ((MR_Box) (Strings0_5));
      }
    }
    else
    {
      succeeded = mercury__char__is_alnum_1_p_0(Char_4);
      if (!(succeeded))
      {
        if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Char_4 - (MR_Unsigned) 32))) <= ((MR_Unsigned) 94)))
          if ((((mercury__term_io_scalar_common_5[0])[(((MR_Integer) ((MR_Unsigned) Char_4 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_4 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
        else
          succeeded = MR_FALSE;
        if (!(succeeded))
        {
          MR_Integer Var_18;

{
#define MR_PROC_LABEL mercury__term_io__add_escaped_char_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_4 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_18  = Int;
}
          succeeded = (Var_18 >= (MR_Integer) 160);
        }
      }
      if (succeeded)
      {
        MR_String Var_13;

        mercury__string__char_to_string_2_p_0(Char_4, &Var_13);
        {
          Strings_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Strings_6, 0) = ((MR_Box) (Var_13));
          MR_hl_field(MR_mktag(1), Strings_6, 1) = ((MR_Box) (Strings0_5));
        }
      }
      else
      {
        MR_String Var_14;

        Var_14 = mercury__term_io__mercury_escape_char_1_f_0(Char_4);
        {
          Strings_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Strings_6, 0) = ((MR_Box) (Var_14));
          MR_hl_field(MR_mktag(1), Strings_6, 1) = ((MR_Box) (Strings0_5));
        }
      }
    }
    return Strings_6;
  }
}

void MR_CALL 
mercury__term_io__write_constant_3_p_0(
  MR_Word Const_4)
{
  {
    MR_Word OutStream_6;
    MR_Box Var_13;

{
#define MR_PROC_LABEL mercury__term_io__write_constant_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Var_13  = (MR_Box) Stream;
}
    OutStream_6 = (MR_Word) (Var_13);
    mercury__term_io__write_constant_5_p_0(OutStream_6, Const_4, (MR_Integer) 1);
  }
}

void MR_CALL 
mercury__term_io__write_term_nl_with_op_table_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_op_table_15,
  MR_Box Ops_6,
  MR_Word VarSet_7,
  MR_Word Term_8)
{
  {
    MR_Word OutStream_10;
    MR_Box Var_19;

{
#define MR_PROC_LABEL mercury__term_io__write_term_nl_with_op_table_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Var_19  = (MR_Box) Stream;
}
    OutStream_10 = (MR_Word) (Var_19);
    mercury__term_io__write_term_nl_with_op_table_6_p_0(TypeInfo_for_T_16, TypeClassInfo_for_op_table_15, OutStream_10, Ops_6, VarSet_7, Term_8);
  }
}

void MR_CALL 
mercury__term_io__write_term_nl_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word OutStream_6,
  MR_Word VarSet_7,
  MR_Word Term_8)
{
  mercury__term_io__write_term_nl_with_op_table_6_p_0(TypeInfo_for_T_15, (MR_Word) (&mercury__term_io_scalar_common_1[0]), OutStream_6, ((MR_Box) ((MR_Integer) 0)), VarSet_7, Term_8);
}

void MR_CALL 
mercury__term_io__write_term_nl_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word VarSet_5,
  MR_Word Term_6)
{
  {
    MR_Word OutStream_8;
    MR_Box Var_16;

{
#define MR_PROC_LABEL mercury__term_io__write_term_nl_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Var_16  = (MR_Box) Stream;
}
    OutStream_8 = (MR_Word) (Var_16);
    mercury__term_io__write_term_nl_with_op_table_6_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__term_io_scalar_common_1[0]), OutStream_8, ((MR_Box) ((MR_Integer) 0)), VarSet_5, Term_6);
  }
}

void MR_CALL 
mercury__term_io__write_term_nl_with_op_table_6_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_op_table_17,
  MR_Word OutStream_7,
  MR_Box Ops_8,
  MR_Word VarSet_9,
  MR_Word Term_10)
{
  {
    MR_Integer Var_42;
    MR_Integer Var_46;
    MR_Box Var_51;
    MR_Box Var_52;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12))));
    MR_Box conv1_Var_46;
    MR_Word Var_26;
    MR_Integer Var_27;

    conv1_Var_46 = func_0(((MR_Box) (TypeClassInfo_for_op_table_17)), Ops_8);
    Var_46 = ((MR_Integer) (conv1_Var_46));
    Var_42 = (MR_Integer) ((MR_Unsigned) Var_46 + (MR_Unsigned) 1);
    mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_18, TypeClassInfo_for_op_table_17, OutStream_7, Ops_8, Term_10, Var_42, VarSet_9, &Var_26, (MR_Integer) 0, &Var_27);
    Var_51 = (MR_Box) (OutStream_7);
{
#define MR_PROC_LABEL mercury__term_io__write_term_nl_with_op_table_6_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_51 ;
	Message = (MR_String) ".\n" ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_52 );
}
    mercury__io__throw_on_error_4_p_0(Var_52, (MR_String) "error writing to output file: ");
  }
}

void MR_CALL 
mercury__term_io__write_term_with_op_table_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeClassInfo_for_op_table_18,
  MR_Word OutStream_7,
  MR_Box Ops_8,
  MR_Word VarSet_9,
  MR_Word Term_10)
{
  {
    MR_Integer Var_32;
    MR_Integer Var_36;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_18, (MR_Integer) 0)), (MR_Integer) 12))));
    MR_Box conv1_Var_36;
    MR_Word Var_12;
    MR_Integer Var_13;

    conv1_Var_36 = func_0(((MR_Box) (TypeClassInfo_for_op_table_18)), Ops_8);
    Var_36 = ((MR_Integer) (conv1_Var_36));
    Var_32 = (MR_Integer) ((MR_Unsigned) Var_36 + (MR_Unsigned) 1);
    mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_19, TypeClassInfo_for_op_table_18, OutStream_7, Ops_8, Term_10, Var_32, VarSet_9, &Var_12, (MR_Integer) 0, &Var_13);
  }
}

void MR_CALL 
mercury__term_io__write_term_with_op_table_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_op_table_15,
  MR_Box Ops_6,
  MR_Word VarSet_7,
  MR_Word Term_8)
{
  {
    MR_Word OutStream_10;
    MR_Box Var_19;
    MR_Integer Var_43;
    MR_Integer Var_47;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_47;
    MR_Word Var_27;
    MR_Integer Var_28;

{
#define MR_PROC_LABEL mercury__term_io__write_term_with_op_table_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Var_19  = (MR_Box) Stream;
}
    OutStream_10 = (MR_Word) (Var_19);
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_15, (MR_Integer) 0)), (MR_Integer) 12))));
    conv1_Var_47 = func_0(((MR_Box) (TypeClassInfo_for_op_table_15)), Ops_6);
    Var_47 = ((MR_Integer) (conv1_Var_47));
    Var_43 = (MR_Integer) ((MR_Unsigned) Var_47 + (MR_Unsigned) 1);
    mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_16, TypeClassInfo_for_op_table_15, OutStream_10, Ops_6, Term_8, Var_43, VarSet_7, &Var_27, (MR_Integer) 0, &Var_28);
  }
}

void MR_CALL 
mercury__term_io__write_term_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word VarSet_5,
  MR_Word Term_6)
{
  {
    MR_Word OutStream_8;
    MR_Box Var_16;

{
#define MR_PROC_LABEL mercury__term_io__write_term_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 Var_16  = (MR_Box) Stream;
}
    OutStream_8 = (MR_Word) (Var_16);
    mercury__term_io__write_term_5_p_0(TypeInfo_for_T_13, OutStream_8, VarSet_5, Term_6);
  }
}

void MR_CALL 
mercury__term_io__write_term_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word OutStream_6,
  MR_Word VarSet_7,
  MR_Word Term_8)
{
  {
    MR_Integer Var_43;
    MR_Integer Var_47;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_47;
    MR_Word Var_27;
    MR_Integer Var_28;

    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__term_io_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 12))));
    conv1_Var_47 = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
    Var_47 = ((MR_Integer) (conv1_Var_47));
    Var_43 = (MR_Integer) ((MR_Unsigned) Var_47 + (MR_Unsigned) 1);
    mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_15, (MR_Word) (&mercury__term_io_scalar_common_1[0]), OutStream_6, ((MR_Box) ((MR_Integer) 0)), Term_8, Var_43, VarSet_7, &Var_27, (MR_Integer) 0, &Var_28);
  }
}

void MR_CALL 
mercury__term_io__write_term_prio_anon_vars_10_p_0(
  MR_Word tscc_proc_1_input_1_TypeInfo_for_T_209,
  MR_Word tscc_proc_1_input_2_TypeClassInfo_for_op_table_208,
  MR_Word tscc_proc_1_input_3_OutStream_11,
  MR_Box tscc_proc_1_input_4_Ops_12,
  MR_Word tscc_proc_1_input_5_Term_13,
  MR_Integer tscc_proc_1_input_6_Priority_14,
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_VarSet_52,
  MR_Integer tscc_proc_1_input_8_STATE_VARIABLE_N_0_53,
  MR_Integer * tscc_output_ptr_2_STATE_VARIABLE_N_54)
{
  {
    MR_Word tscc_proc_2_input_1_TypeInfo_for_T_35;
    MR_Word tscc_proc_2_input_2_TypeClassInfo_for_op_table_34;
    MR_Word tscc_proc_2_input_3_OutStream_10;
    MR_Box tscc_proc_2_input_4_Ops_11;
    MR_Word tscc_proc_2_input_5_Var_12;
    MR_Word tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_21;
    MR_Integer tscc_proc_2_input_7_STATE_VARIABLE_N_0_23;
    MR_Word tscc_output_1_STATE_VARIABLE_VarSet_52;
    MR_Integer tscc_output_2_STATE_VARIABLE_N_54;

    // The code for TSCC PROC 1: pred term_io.write_term_prio_anon_vars/10-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred term_io.write_term_prio_anon_vars/10-0
    ;
    // proc 2 in TSCC: pred term_io.write_variable_anon_vars/9-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word TypeInfo_for_T_209 = tscc_proc_1_input_1_TypeInfo_for_T_209;
      MR_Word TypeClassInfo_for_op_table_208 = tscc_proc_1_input_2_TypeClassInfo_for_op_table_208;
      MR_Word OutStream_11 = tscc_proc_1_input_3_OutStream_11;
      MR_Box Ops_12 = tscc_proc_1_input_4_Ops_12;
      MR_Word Term_13 = tscc_proc_1_input_5_Term_13;
      MR_Integer Priority_14 = tscc_proc_1_input_6_Priority_14;
      MR_Word STATE_VARIABLE_VarSet_0_51 = tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51;
      MR_Word STATE_VARIABLE_VarSet_52;
      MR_Integer STATE_VARIABLE_N_0_53 = tscc_proc_1_input_8_STATE_VARIABLE_N_0_53;
      MR_Integer STATE_VARIABLE_N_54;
      MR_bool succeeded;

      if (((MR_tag((MR_Word) Term_13)) == (MR_Integer) 0))
      {
        MR_Word Functor_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_13, (MR_Integer) 0))));
        MR_Word Args_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_13, (MR_Integer) 1))));
        MR_Word ListHead_23;
        MR_Word ListTail_24;
        MR_String Var_57;
        MR_Word Var_58;
        MR_Word Var_59;

        succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_57 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_20, (MR_Integer) 0))));
          succeeded = (strcmp(Var_57, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ListHead_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 0))));
              Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 1))));
              succeeded = (Var_58 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ListTail_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_58, (MR_Integer) 0))));
                Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_58, (MR_Integer) 1))));
                succeeded = (Var_59 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_VarSet_62_62;
          MR_Integer STATE_VARIABLE_N_63_63;

          mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 91);
          mercury__term_io__write_term_arg_9_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, ListHead_23, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_62_62, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_63_63);
          mercury__term_io__write_later_list_elements_9_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, ListTail_24, STATE_VARIABLE_VarSet_62_62, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_63_63, &STATE_VARIABLE_N_54);
          mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 93);
        }
        else
        {
          MR_String Var_70;

          succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_70 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_20, (MR_Integer) 0))));
            succeeded = (strcmp(Var_70, (MR_String) "[]") == 0);
            if (succeeded)
              succeeded = (Args_21 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            mercury__io__write_string_4_p_0(OutStream_11, (MR_String) "[]");
            STATE_VARIABLE_N_54 = STATE_VARIABLE_N_0_53;
            STATE_VARIABLE_VarSet_52 = STATE_VARIABLE_VarSet_0_51;
          }
          else
          {
            MR_Word BracedTerm_25;
            MR_String Var_73;
            MR_Word Var_74;

            succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_73 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_20, (MR_Integer) 0))));
              succeeded = (strcmp(Var_73, (MR_String) "{}") == 0);
              if (succeeded)
              {
                succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  BracedTerm_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 0))));
                  Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 1))));
                  succeeded = (Var_74 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
            if (succeeded)
            {
              mercury__io__write_string_4_p_0(OutStream_11, (MR_String) "{ ");
              mercury__term_io__write_term_anon_vars_9_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, BracedTerm_25, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_54);
              mercury__io__write_string_4_p_0(OutStream_11, (MR_String) " }");
            }
            else
            {
              MR_Word BracedHead_26;
              MR_Word BracedTail_27;
              MR_String Var_82;

              succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_82 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_20, (MR_Integer) 0))));
                succeeded = (strcmp(Var_82, (MR_String) "{}") == 0);
                if (succeeded)
                {
                  succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    BracedHead_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 0))));
                    BracedTail_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 1))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_VarSet_85_85;
                MR_Integer STATE_VARIABLE_N_86_86;

                mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 123);
                mercury__term_io__write_term_arg_9_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, BracedHead_26, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_85_85, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_86_86);
                mercury__term_io__write_term_later_args_9_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, BracedTail_27, STATE_VARIABLE_VarSet_85_85, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_86_86, &STATE_VARIABLE_N_54);
                mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 125);
              }
              else
              {
                MR_Word FirstArg_29;
                MR_Word OtherArgs_30;
                MR_Word Var_202;
                MR_String Var_93;
                MR_Word Var_94;
                MR_Word Var_95;

                succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_93 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_20, (MR_Integer) 0))));
                  succeeded = (strcmp(Var_93, (MR_String) "") == 0);
                  if (succeeded)
                  {
                    succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 0))));
                      Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) Var_94)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        Var_202 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_94, (MR_Integer) 0))));
                        succeeded = (Var_95 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          FirstArg_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_95, (MR_Integer) 0))));
                          OtherArgs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_95, (MR_Integer) 1))));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word STATE_VARIABLE_VarSet_96_96;
                  MR_Integer STATE_VARIABLE_N_97_97;
                  MR_Word STATE_VARIABLE_VarSet_101_101;
                  MR_Integer STATE_VARIABLE_N_102_102;

                  mercury__term_io__write_variable_anon_vars_9_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, Var_202, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_96_96, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_97_97);
                  mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 40);
                  mercury__term_io__write_term_arg_9_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, FirstArg_29, STATE_VARIABLE_VarSet_96_96, &STATE_VARIABLE_VarSet_101_101, STATE_VARIABLE_N_97_97, &STATE_VARIABLE_N_102_102);
                  mercury__term_io__write_term_later_args_9_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, OtherArgs_30, STATE_VARIABLE_VarSet_101_101, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_102_102, &STATE_VARIABLE_N_54);
                  mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 41);
                }
                else
                {
                  MR_Word PrefixArg_31;
                  MR_Integer OpPriority_33;
                  MR_Word OpAssoc_34;
                  MR_String OpName_32;
                  MR_Word Var_109;

                  succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    PrefixArg_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 0))));
                    Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 1))));
                    succeeded = (Var_109 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        OpName_32 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_20, (MR_Integer) 0))));
                        succeeded = mercury__ops__lookup_prefix_op_4_p_0(TypeClassInfo_for_op_table_208, Ops_12, OpName_32, &OpPriority_33, &OpAssoc_34);
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Integer NewPriority_35;

                    succeeded = (OpPriority_33 > Priority_14);
                    if (succeeded)
                    {
                      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                      MR_Box conv1_STATE_VARIABLE_IO_111_111;

                      func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_111_111);
                    }
                    mercury__term_io__write_constant_4_p_0(OutStream_11, Functor_20);
                    mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                    switch (OpAssoc_34) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        NewPriority_35 = (MR_Integer) ((MR_Unsigned) OpPriority_33 - (MR_Unsigned) 1);
                        break;
                      case (MR_Integer) 1:
                        NewPriority_35 = OpPriority_33;
                        break;
                    }
                    mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, PrefixArg_31, NewPriority_35, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_54);
                    succeeded = (OpPriority_33 > Priority_14);
                    if (succeeded)
                    {
                      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                      MR_Box conv3_STATE_VARIABLE_IO_56;

                      func_2(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_56);
                    }
                  }
                  else
                  {
                    MR_Word PostfixArg_36;
                    MR_Integer OpPriority_199;
                    MR_Word OpAssoc_200;
                    MR_Word Var_120;
                    MR_String OpName_189;

                    succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      PostfixArg_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 0))));
                      Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 1))));
                      succeeded = (Var_120 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          OpName_189 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_20, (MR_Integer) 0))));
                          succeeded = mercury__ops__lookup_postfix_op_4_p_0(TypeClassInfo_for_op_table_208, Ops_12, OpName_189, &OpPriority_199, &OpAssoc_200);
                        }
                      }
                    }
                    if (succeeded)
                    {
                      MR_Integer NewPriority_190;

                      succeeded = (OpPriority_199 > Priority_14);
                      if (succeeded)
                      {
                        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                        MR_Box conv5_STATE_VARIABLE_IO_122_122;

                        func_4(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_122_122);
                      }
                      switch (OpAssoc_200) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          NewPriority_190 = (MR_Integer) ((MR_Unsigned) OpPriority_199 - (MR_Unsigned) 1);
                          break;
                        case (MR_Integer) 1:
                          NewPriority_190 = OpPriority_199;
                          break;
                      }
                      mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, PostfixArg_36, NewPriority_190, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_54);
                      mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                      mercury__term_io__write_constant_4_p_0(OutStream_11, Functor_20);
                      succeeded = (OpPriority_199 > Priority_14);
                      if (succeeded)
                      {
                        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                        MR_Box conv7_STATE_VARIABLE_IO_56;

                        func_6(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_56);
                      }
                    }
                    else
                    {
                      MR_Word Arg1_37;
                      MR_Word Arg2_38;
                      MR_Word LeftAssoc_39;
                      MR_Word RightAssoc_40;
                      MR_String OpName_196;
                      MR_Integer OpPriority_197;
                      MR_Word Var_131;
                      MR_Word Var_132;

                      succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Arg1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 0))));
                        Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 1))));
                        succeeded = (Var_131 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Arg2_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_131, (MR_Integer) 0))));
                          Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_131, (MR_Integer) 1))));
                          succeeded = (Var_132 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              OpName_196 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_20, (MR_Integer) 0))));
                              succeeded = mercury__ops__lookup_infix_op_5_p_0(TypeClassInfo_for_op_table_208, Ops_12, OpName_196, &OpPriority_197, &LeftAssoc_39, &RightAssoc_40);
                            }
                          }
                        }
                      }
                      if (succeeded)
                      {
                        MR_Integer LeftPriority_41;
                        MR_Integer RightPriority_43;
                        MR_Word STATE_VARIABLE_VarSet_135_135;
                        MR_Integer STATE_VARIABLE_N_136_136;

                        succeeded = (OpPriority_197 > Priority_14);
                        if (succeeded)
                        {
                          void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                          MR_Box conv9_STATE_VARIABLE_IO_134_134;

                          func_8(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_134_134);
                        }
                        switch (LeftAssoc_39) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            LeftPriority_41 = (MR_Integer) ((MR_Unsigned) OpPriority_197 - (MR_Unsigned) 1);
                            break;
                          case (MR_Integer) 1:
                            LeftPriority_41 = OpPriority_197;
                            break;
                        }
                        mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, Arg1_37, LeftPriority_41, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_135_135, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_136_136);
                        succeeded = (strcmp(OpName_196, (MR_String) ",") == 0);
                        if (succeeded)
                          mercury__io__write_string_4_p_0(OutStream_11, (MR_String) ", ");
                        else
                        {
                          succeeded = (strcmp(OpName_196, (MR_String) ".") == 0);
                          if (succeeded)
                          {
                            MR_String Dot_42;

                            succeeded = mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(Arg2_38);
                            if (succeeded)
                              Dot_42 = (MR_String) "\'.\'";
                            else
                              Dot_42 = (MR_String) ".";
                            mercury__io__write_string_4_p_0(OutStream_11, Dot_42);
                          }
                          else
                          {
                            mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                            mercury__term_io__write_constant_4_p_0(OutStream_11, Functor_20);
                            mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                          }
                        }
                        switch (RightAssoc_40) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            RightPriority_43 = (MR_Integer) ((MR_Unsigned) OpPriority_197 - (MR_Unsigned) 1);
                            break;
                          case (MR_Integer) 1:
                            RightPriority_43 = OpPriority_197;
                            break;
                        }
                        mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, Arg2_38, RightPriority_43, STATE_VARIABLE_VarSet_135_135, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_136_136, &STATE_VARIABLE_N_54);
                        succeeded = (OpPriority_197 > Priority_14);
                        if (succeeded)
                        {
                          void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                          MR_Box conv11_STATE_VARIABLE_IO_56;

                          func_10(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_56);
                        }
                      }
                      else
                      {
                        MR_Word FirstAssoc_44;
                        MR_Word SecondAssoc_45;
                        MR_Integer OpPriority_193;
                        MR_Word Arg1_194;
                        MR_Word Arg2_195;
                        MR_Word Var_151;
                        MR_Word Var_152;
                        MR_String OpName_191;

                        succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Arg1_194 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 0))));
                          Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 1))));
                          succeeded = (Var_151 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Arg2_195 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_151, (MR_Integer) 0))));
                            Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_151, (MR_Integer) 1))));
                            succeeded = (Var_152 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                OpName_191 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_20, (MR_Integer) 0))));
                                succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(TypeClassInfo_for_op_table_208, Ops_12, OpName_191, &OpPriority_193, &FirstAssoc_44, &SecondAssoc_45);
                              }
                            }
                          }
                        }
                        if (succeeded)
                        {
                          MR_Integer FirstPriority_46;
                          MR_Integer SecondPriority_47;
                          MR_Word STATE_VARIABLE_VarSet_158_158;
                          MR_Integer STATE_VARIABLE_N_159_159;

                          succeeded = (OpPriority_193 > Priority_14);
                          if (succeeded)
                          {
                            void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                            MR_Box conv13_STATE_VARIABLE_IO_154_154;

                            func_12(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_154_154);
                          }
                          mercury__term_io__write_constant_4_p_0(OutStream_11, Functor_20);
                          mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                          switch (FirstAssoc_44) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              FirstPriority_46 = (MR_Integer) ((MR_Unsigned) OpPriority_193 - (MR_Unsigned) 1);
                              break;
                            case (MR_Integer) 1:
                              FirstPriority_46 = OpPriority_193;
                              break;
                          }
                          mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, Arg1_194, FirstPriority_46, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_158_158, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_159_159);
                          mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                          switch (SecondAssoc_45) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              SecondPriority_47 = (MR_Integer) ((MR_Unsigned) OpPriority_193 - (MR_Unsigned) 1);
                              break;
                            case (MR_Integer) 1:
                              SecondPriority_47 = OpPriority_193;
                              break;
                          }
                          mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, Arg2_195, SecondPriority_47, STATE_VARIABLE_VarSet_158_158, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_159_159, &STATE_VARIABLE_N_54);
                          succeeded = (OpPriority_193 > Priority_14);
                          if (succeeded)
                          {
                            void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                            MR_Box conv15_STATE_VARIABLE_IO_56;

                            func_14(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_56);
                          }
                        }
                        else
                        {
                          MR_String Op_48;
                          MR_Integer Var_168;

                          succeeded = (Args_21 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Op_48 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_20, (MR_Integer) 0))));
                              succeeded = mercury__ops__lookup_op_2_p_0(TypeClassInfo_for_op_table_208, Ops_12, Op_48);
                              if (succeeded)
                              {
                                Var_168 = mercury__ops__max_priority_1_f_0(TypeClassInfo_for_op_table_208, Ops_12);
                                succeeded = (Priority_14 <= Var_168);
                              }
                            }
                          }
                          if (succeeded)
                          {
                            mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 40);
                            mercury__term_io__write_constant_4_p_0(OutStream_11, Functor_20);
                            mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 41);
                          }
                          else
                            mercury__term_io__write_constant_5_p_0(OutStream_11, Functor_20, (MR_Integer) 0);
                          if ((Args_21 == (MR_Word) ((MR_Unsigned) 0U)))
                          {
                            STATE_VARIABLE_VarSet_52 = STATE_VARIABLE_VarSet_0_51;
                            STATE_VARIABLE_N_54 = STATE_VARIABLE_N_0_53;
                          }
                          else
                          {
                            MR_Word X_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 0))));
                            MR_Word Xs_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 1))));
                            MR_Word STATE_VARIABLE_VarSet_178_178;
                            MR_Integer STATE_VARIABLE_N_179_179;

                            mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 40);
                            mercury__term_io__write_term_arg_9_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, X_49, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_178_178, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_179_179);
                            mercury__term_io__write_term_later_args_9_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, Xs_50, STATE_VARIABLE_VarSet_178_178, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_179_179, &STATE_VARIABLE_N_54);
                            mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 41);
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
      }
      else
      {
        MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_13, (MR_Integer) 0))));
        MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_35 = TypeInfo_for_T_209;
        MR_Word next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_34 = TypeClassInfo_for_op_table_208;
        MR_Word next_value_of_tscc_proc_2_input_3_OutStream_10 = OutStream_11;
        MR_Box next_value_of_tscc_proc_2_input_4_Ops_11 = Ops_12;
        MR_Word next_value_of_tscc_proc_2_input_5_Var_12 = Var_18;
        MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_21 = STATE_VARIABLE_VarSet_0_51;
        MR_Integer next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_N_0_23 = STATE_VARIABLE_N_0_53;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_TypeInfo_for_T_35 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_35;
        tscc_proc_2_input_2_TypeClassInfo_for_op_table_34 = next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_34;
        tscc_proc_2_input_3_OutStream_10 = next_value_of_tscc_proc_2_input_3_OutStream_10;
        tscc_proc_2_input_4_Ops_11 = next_value_of_tscc_proc_2_input_4_Ops_11;
        tscc_proc_2_input_5_Var_12 = next_value_of_tscc_proc_2_input_5_Var_12;
        tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_21 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_21;
        tscc_proc_2_input_7_STATE_VARIABLE_N_0_23 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_N_0_23;
        goto top_of_proc_2;
      }
      tscc_output_1_STATE_VARIABLE_VarSet_52 = STATE_VARIABLE_VarSet_52;
      tscc_output_2_STATE_VARIABLE_N_54 = STATE_VARIABLE_N_54;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeInfo_for_T_35 = tscc_proc_2_input_1_TypeInfo_for_T_35;
      MR_Word TypeClassInfo_for_op_table_34 = tscc_proc_2_input_2_TypeClassInfo_for_op_table_34;
      MR_Word OutStream_10 = tscc_proc_2_input_3_OutStream_10;
      MR_Box Ops_11 = tscc_proc_2_input_4_Ops_11;
      MR_Word Var_12 = tscc_proc_2_input_5_Var_12;
      MR_Word STATE_VARIABLE_VarSet_0_21 = tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_21;
      MR_Word STATE_VARIABLE_VarSet_22;
      MR_Integer STATE_VARIABLE_N_0_23 = tscc_proc_2_input_7_STATE_VARIABLE_N_0_23;
      MR_Integer STATE_VARIABLE_N_24;
      MR_bool succeeded;
      MR_Word Value_16;
      MR_Word TypeInfo_13_44;
      MR_Word TypeInfo_15_46;
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarSet_0_21, (MR_Integer) 2))));
      MR_Box conv16_Value_16;

      {
        TypeInfo_13_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_13_44, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_13_44, 1) = ((MR_Box) (TypeInfo_for_T_35));
      }
      {
        TypeInfo_15_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_15_46, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
        MR_hl_field(MR_mktag(0), TypeInfo_15_46, 1) = ((MR_Box) (TypeInfo_for_T_35));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_35, TypeInfo_13_44, TypeInfo_15_46, Var_41, Var_12, &conv16_Value_16);
      if (succeeded)
      {
        Value_16 = ((MR_Word) (conv16_Value_16));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Integer Var_63;
        MR_Integer Var_67;
        MR_Box MR_CALL (* func_17)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12))));
        MR_Box conv18_Var_67;
        MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_209;
        MR_Word next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_208;
        MR_Word next_value_of_tscc_proc_1_input_3_OutStream_11;
        MR_Box next_value_of_tscc_proc_1_input_4_Ops_12;
        MR_Word next_value_of_tscc_proc_1_input_5_Term_13;
        MR_Integer next_value_of_tscc_proc_1_input_6_Priority_14;
        MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51;
        MR_Integer next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_N_0_53;

        conv18_Var_67 = func_17(((MR_Box) (TypeClassInfo_for_op_table_34)), Ops_11);
        Var_67 = ((MR_Integer) (conv18_Var_67));
        Var_63 = (MR_Integer) ((MR_Unsigned) Var_67 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_209 = TypeInfo_for_T_35;
        next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_208 = TypeClassInfo_for_op_table_34;
        next_value_of_tscc_proc_1_input_3_OutStream_11 = OutStream_10;
        next_value_of_tscc_proc_1_input_4_Ops_12 = Ops_11;
        next_value_of_tscc_proc_1_input_5_Term_13 = Value_16;
        next_value_of_tscc_proc_1_input_6_Priority_14 = Var_63;
        next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51 = STATE_VARIABLE_VarSet_0_21;
        next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_N_0_53 = STATE_VARIABLE_N_0_23;
        tscc_proc_1_input_1_TypeInfo_for_T_209 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_209;
        tscc_proc_1_input_2_TypeClassInfo_for_op_table_208 = next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_208;
        tscc_proc_1_input_3_OutStream_11 = next_value_of_tscc_proc_1_input_3_OutStream_11;
        tscc_proc_1_input_4_Ops_12 = next_value_of_tscc_proc_1_input_4_Ops_12;
        tscc_proc_1_input_5_Term_13 = next_value_of_tscc_proc_1_input_5_Term_13;
        tscc_proc_1_input_6_Priority_14 = next_value_of_tscc_proc_1_input_6_Priority_14;
        tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51;
        tscc_proc_1_input_8_STATE_VARIABLE_N_0_53 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_N_0_53;
        goto top_of_proc_1;
      }
      else
      {
        MR_String Name_17;
        MR_Word TypeInfo_13_77;
        MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarSet_0_21, (MR_Integer) 1))));
        MR_Box conv19_Name_17;

        {
          TypeInfo_13_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_13_77, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), TypeInfo_13_77, 1) = ((MR_Box) (TypeInfo_for_T_35));
        }
        succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_35, TypeInfo_13_77, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_73, Var_12, &conv19_Name_17);
        if (succeeded)
        {
          Name_17 = ((MR_String) (conv19_Name_17));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Box Var_86 = (MR_Box) (OutStream_10);
          MR_Box Var_87;

{
#define MR_PROC_LABEL mercury__term_io__write_variable_anon_vars_9_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_86 ;
	Message = Name_17 ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_87 );
}
          mercury__io__throw_on_error_4_p_0(Var_87, (MR_String) "error writing to output file: ");
          STATE_VARIABLE_VarSet_22 = STATE_VARIABLE_VarSet_0_21;
        }
        else
        {
          MR_Integer VarNum_18 = (MR_Integer) (Var_12);
          MR_String VarNumStr_19;
          MR_String VarName_20;

{
#define MR_PROC_LABEL mercury__term_io__write_variable_anon_vars_9_p_0

	MR_Integer I;
	MR_String S;

	I = VarNum_18 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 VarNumStr_19  = S;
}
          VarName_20 = mercury__string__f_43_43_2_f_0((MR_String) "_", VarNumStr_19);
          mercury__varset__name_var_4_p_0(TypeInfo_for_T_35, Var_12, VarName_20, STATE_VARIABLE_VarSet_0_21, &STATE_VARIABLE_VarSet_22);
          mercury__io__write_string_4_p_0(OutStream_10, VarName_20);
        }
        STATE_VARIABLE_N_24 = STATE_VARIABLE_N_0_23;
      }
      tscc_output_1_STATE_VARIABLE_VarSet_52 = STATE_VARIABLE_VarSet_22;
      tscc_output_2_STATE_VARIABLE_N_54 = STATE_VARIABLE_N_24;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_VarSet_52 = tscc_output_1_STATE_VARIABLE_VarSet_52;
    *tscc_output_ptr_2_STATE_VARIABLE_N_54 = tscc_output_2_STATE_VARIABLE_N_54;
    return;
  }
}

void MR_CALL 
mercury__term_io__write_variable_anon_vars_9_p_0(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_T_35,
  MR_Word tscc_proc_2_input_2_TypeClassInfo_for_op_table_34,
  MR_Word tscc_proc_2_input_3_OutStream_10,
  MR_Box tscc_proc_2_input_4_Ops_11,
  MR_Word tscc_proc_2_input_5_Var_12,
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_21,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_VarSet_52,
  MR_Integer tscc_proc_2_input_7_STATE_VARIABLE_N_0_23,
  MR_Integer * tscc_output_ptr_2_STATE_VARIABLE_N_54)
{
  {
    MR_Word tscc_proc_1_input_1_TypeInfo_for_T_209;
    MR_Word tscc_proc_1_input_2_TypeClassInfo_for_op_table_208;
    MR_Word tscc_proc_1_input_3_OutStream_11;
    MR_Box tscc_proc_1_input_4_Ops_12;
    MR_Word tscc_proc_1_input_5_Term_13;
    MR_Integer tscc_proc_1_input_6_Priority_14;
    MR_Word tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51;
    MR_Integer tscc_proc_1_input_8_STATE_VARIABLE_N_0_53;
    MR_Word tscc_output_1_STATE_VARIABLE_VarSet_52;
    MR_Integer tscc_output_2_STATE_VARIABLE_N_54;

    // The code for TSCC PROC 2: pred term_io.write_variable_anon_vars/9-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred term_io.write_term_prio_anon_vars/10-0
    ;
    // proc 2 in TSCC: pred term_io.write_variable_anon_vars/9-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word TypeInfo_for_T_209 = tscc_proc_1_input_1_TypeInfo_for_T_209;
      MR_Word TypeClassInfo_for_op_table_208 = tscc_proc_1_input_2_TypeClassInfo_for_op_table_208;
      MR_Word OutStream_11 = tscc_proc_1_input_3_OutStream_11;
      MR_Box Ops_12 = tscc_proc_1_input_4_Ops_12;
      MR_Word Term_13 = tscc_proc_1_input_5_Term_13;
      MR_Integer Priority_14 = tscc_proc_1_input_6_Priority_14;
      MR_Word STATE_VARIABLE_VarSet_0_51 = tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51;
      MR_Word STATE_VARIABLE_VarSet_52;
      MR_Integer STATE_VARIABLE_N_0_53 = tscc_proc_1_input_8_STATE_VARIABLE_N_0_53;
      MR_Integer STATE_VARIABLE_N_54;
      MR_bool succeeded;

      if (((MR_tag((MR_Word) Term_13)) == (MR_Integer) 0))
      {
        MR_Word Functor_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_13, (MR_Integer) 0))));
        MR_Word Args_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_13, (MR_Integer) 1))));
        MR_Word ListHead_23;
        MR_Word ListTail_24;
        MR_String Var_57;
        MR_Word Var_58;
        MR_Word Var_59;

        succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_57 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_20, (MR_Integer) 0))));
          succeeded = (strcmp(Var_57, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ListHead_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 0))));
              Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 1))));
              succeeded = (Var_58 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ListTail_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_58, (MR_Integer) 0))));
                Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_58, (MR_Integer) 1))));
                succeeded = (Var_59 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_VarSet_62_62;
          MR_Integer STATE_VARIABLE_N_63_63;

          mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 91);
          mercury__term_io__write_term_arg_9_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, ListHead_23, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_62_62, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_63_63);
          mercury__term_io__write_later_list_elements_9_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, ListTail_24, STATE_VARIABLE_VarSet_62_62, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_63_63, &STATE_VARIABLE_N_54);
          mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 93);
        }
        else
        {
          MR_String Var_70;

          succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_70 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_20, (MR_Integer) 0))));
            succeeded = (strcmp(Var_70, (MR_String) "[]") == 0);
            if (succeeded)
              succeeded = (Args_21 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            mercury__io__write_string_4_p_0(OutStream_11, (MR_String) "[]");
            STATE_VARIABLE_N_54 = STATE_VARIABLE_N_0_53;
            STATE_VARIABLE_VarSet_52 = STATE_VARIABLE_VarSet_0_51;
          }
          else
          {
            MR_Word BracedTerm_25;
            MR_String Var_73;
            MR_Word Var_74;

            succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_73 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_20, (MR_Integer) 0))));
              succeeded = (strcmp(Var_73, (MR_String) "{}") == 0);
              if (succeeded)
              {
                succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  BracedTerm_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 0))));
                  Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 1))));
                  succeeded = (Var_74 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
            if (succeeded)
            {
              mercury__io__write_string_4_p_0(OutStream_11, (MR_String) "{ ");
              mercury__term_io__write_term_anon_vars_9_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, BracedTerm_25, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_54);
              mercury__io__write_string_4_p_0(OutStream_11, (MR_String) " }");
            }
            else
            {
              MR_Word BracedHead_26;
              MR_Word BracedTail_27;
              MR_String Var_82;

              succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_82 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_20, (MR_Integer) 0))));
                succeeded = (strcmp(Var_82, (MR_String) "{}") == 0);
                if (succeeded)
                {
                  succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    BracedHead_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 0))));
                    BracedTail_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 1))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_VarSet_85_85;
                MR_Integer STATE_VARIABLE_N_86_86;

                mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 123);
                mercury__term_io__write_term_arg_9_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, BracedHead_26, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_85_85, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_86_86);
                mercury__term_io__write_term_later_args_9_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, BracedTail_27, STATE_VARIABLE_VarSet_85_85, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_86_86, &STATE_VARIABLE_N_54);
                mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 125);
              }
              else
              {
                MR_Word FirstArg_29;
                MR_Word OtherArgs_30;
                MR_Word Var_202;
                MR_String Var_93;
                MR_Word Var_94;
                MR_Word Var_95;

                succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_93 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_20, (MR_Integer) 0))));
                  succeeded = (strcmp(Var_93, (MR_String) "") == 0);
                  if (succeeded)
                  {
                    succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 0))));
                      Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) Var_94)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        Var_202 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_94, (MR_Integer) 0))));
                        succeeded = (Var_95 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          FirstArg_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_95, (MR_Integer) 0))));
                          OtherArgs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_95, (MR_Integer) 1))));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word STATE_VARIABLE_VarSet_96_96;
                  MR_Integer STATE_VARIABLE_N_97_97;
                  MR_Word STATE_VARIABLE_VarSet_101_101;
                  MR_Integer STATE_VARIABLE_N_102_102;

                  mercury__term_io__write_variable_anon_vars_9_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, Var_202, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_96_96, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_97_97);
                  mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 40);
                  mercury__term_io__write_term_arg_9_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, FirstArg_29, STATE_VARIABLE_VarSet_96_96, &STATE_VARIABLE_VarSet_101_101, STATE_VARIABLE_N_97_97, &STATE_VARIABLE_N_102_102);
                  mercury__term_io__write_term_later_args_9_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, OtherArgs_30, STATE_VARIABLE_VarSet_101_101, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_102_102, &STATE_VARIABLE_N_54);
                  mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 41);
                }
                else
                {
                  MR_Word PrefixArg_31;
                  MR_Integer OpPriority_33;
                  MR_Word OpAssoc_34;
                  MR_String OpName_32;
                  MR_Word Var_109;

                  succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    PrefixArg_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 0))));
                    Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 1))));
                    succeeded = (Var_109 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        OpName_32 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_20, (MR_Integer) 0))));
                        succeeded = mercury__ops__lookup_prefix_op_4_p_0(TypeClassInfo_for_op_table_208, Ops_12, OpName_32, &OpPriority_33, &OpAssoc_34);
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Integer NewPriority_35;

                    succeeded = (OpPriority_33 > Priority_14);
                    if (succeeded)
                    {
                      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                      MR_Box conv1_STATE_VARIABLE_IO_111_111;

                      func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_111_111);
                    }
                    mercury__term_io__write_constant_4_p_0(OutStream_11, Functor_20);
                    mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                    switch (OpAssoc_34) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        NewPriority_35 = (MR_Integer) ((MR_Unsigned) OpPriority_33 - (MR_Unsigned) 1);
                        break;
                      case (MR_Integer) 1:
                        NewPriority_35 = OpPriority_33;
                        break;
                    }
                    mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, PrefixArg_31, NewPriority_35, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_54);
                    succeeded = (OpPriority_33 > Priority_14);
                    if (succeeded)
                    {
                      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                      MR_Box conv3_STATE_VARIABLE_IO_56;

                      func_2(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_56);
                    }
                  }
                  else
                  {
                    MR_Word PostfixArg_36;
                    MR_Integer OpPriority_199;
                    MR_Word OpAssoc_200;
                    MR_Word Var_120;
                    MR_String OpName_189;

                    succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      PostfixArg_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 0))));
                      Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 1))));
                      succeeded = (Var_120 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          OpName_189 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_20, (MR_Integer) 0))));
                          succeeded = mercury__ops__lookup_postfix_op_4_p_0(TypeClassInfo_for_op_table_208, Ops_12, OpName_189, &OpPriority_199, &OpAssoc_200);
                        }
                      }
                    }
                    if (succeeded)
                    {
                      MR_Integer NewPriority_190;

                      succeeded = (OpPriority_199 > Priority_14);
                      if (succeeded)
                      {
                        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                        MR_Box conv5_STATE_VARIABLE_IO_122_122;

                        func_4(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_122_122);
                      }
                      switch (OpAssoc_200) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          NewPriority_190 = (MR_Integer) ((MR_Unsigned) OpPriority_199 - (MR_Unsigned) 1);
                          break;
                        case (MR_Integer) 1:
                          NewPriority_190 = OpPriority_199;
                          break;
                      }
                      mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, PostfixArg_36, NewPriority_190, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_54);
                      mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                      mercury__term_io__write_constant_4_p_0(OutStream_11, Functor_20);
                      succeeded = (OpPriority_199 > Priority_14);
                      if (succeeded)
                      {
                        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                        MR_Box conv7_STATE_VARIABLE_IO_56;

                        func_6(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_56);
                      }
                    }
                    else
                    {
                      MR_Word Arg1_37;
                      MR_Word Arg2_38;
                      MR_Word LeftAssoc_39;
                      MR_Word RightAssoc_40;
                      MR_String OpName_196;
                      MR_Integer OpPriority_197;
                      MR_Word Var_131;
                      MR_Word Var_132;

                      succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Arg1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 0))));
                        Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 1))));
                        succeeded = (Var_131 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Arg2_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_131, (MR_Integer) 0))));
                          Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_131, (MR_Integer) 1))));
                          succeeded = (Var_132 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              OpName_196 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_20, (MR_Integer) 0))));
                              succeeded = mercury__ops__lookup_infix_op_5_p_0(TypeClassInfo_for_op_table_208, Ops_12, OpName_196, &OpPriority_197, &LeftAssoc_39, &RightAssoc_40);
                            }
                          }
                        }
                      }
                      if (succeeded)
                      {
                        MR_Integer LeftPriority_41;
                        MR_Integer RightPriority_43;
                        MR_Word STATE_VARIABLE_VarSet_135_135;
                        MR_Integer STATE_VARIABLE_N_136_136;

                        succeeded = (OpPriority_197 > Priority_14);
                        if (succeeded)
                        {
                          void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                          MR_Box conv9_STATE_VARIABLE_IO_134_134;

                          func_8(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_134_134);
                        }
                        switch (LeftAssoc_39) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            LeftPriority_41 = (MR_Integer) ((MR_Unsigned) OpPriority_197 - (MR_Unsigned) 1);
                            break;
                          case (MR_Integer) 1:
                            LeftPriority_41 = OpPriority_197;
                            break;
                        }
                        mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, Arg1_37, LeftPriority_41, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_135_135, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_136_136);
                        succeeded = (strcmp(OpName_196, (MR_String) ",") == 0);
                        if (succeeded)
                          mercury__io__write_string_4_p_0(OutStream_11, (MR_String) ", ");
                        else
                        {
                          succeeded = (strcmp(OpName_196, (MR_String) ".") == 0);
                          if (succeeded)
                          {
                            MR_String Dot_42;

                            succeeded = mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(Arg2_38);
                            if (succeeded)
                              Dot_42 = (MR_String) "\'.\'";
                            else
                              Dot_42 = (MR_String) ".";
                            mercury__io__write_string_4_p_0(OutStream_11, Dot_42);
                          }
                          else
                          {
                            mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                            mercury__term_io__write_constant_4_p_0(OutStream_11, Functor_20);
                            mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                          }
                        }
                        switch (RightAssoc_40) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            RightPriority_43 = (MR_Integer) ((MR_Unsigned) OpPriority_197 - (MR_Unsigned) 1);
                            break;
                          case (MR_Integer) 1:
                            RightPriority_43 = OpPriority_197;
                            break;
                        }
                        mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, Arg2_38, RightPriority_43, STATE_VARIABLE_VarSet_135_135, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_136_136, &STATE_VARIABLE_N_54);
                        succeeded = (OpPriority_197 > Priority_14);
                        if (succeeded)
                        {
                          void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                          MR_Box conv11_STATE_VARIABLE_IO_56;

                          func_10(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_56);
                        }
                      }
                      else
                      {
                        MR_Word FirstAssoc_44;
                        MR_Word SecondAssoc_45;
                        MR_Integer OpPriority_193;
                        MR_Word Arg1_194;
                        MR_Word Arg2_195;
                        MR_Word Var_151;
                        MR_Word Var_152;
                        MR_String OpName_191;

                        succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Arg1_194 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 0))));
                          Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 1))));
                          succeeded = (Var_151 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Arg2_195 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_151, (MR_Integer) 0))));
                            Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_151, (MR_Integer) 1))));
                            succeeded = (Var_152 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                OpName_191 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_20, (MR_Integer) 0))));
                                succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(TypeClassInfo_for_op_table_208, Ops_12, OpName_191, &OpPriority_193, &FirstAssoc_44, &SecondAssoc_45);
                              }
                            }
                          }
                        }
                        if (succeeded)
                        {
                          MR_Integer FirstPriority_46;
                          MR_Integer SecondPriority_47;
                          MR_Word STATE_VARIABLE_VarSet_158_158;
                          MR_Integer STATE_VARIABLE_N_159_159;

                          succeeded = (OpPriority_193 > Priority_14);
                          if (succeeded)
                          {
                            void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                            MR_Box conv13_STATE_VARIABLE_IO_154_154;

                            func_12(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_154_154);
                          }
                          mercury__term_io__write_constant_4_p_0(OutStream_11, Functor_20);
                          mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                          switch (FirstAssoc_44) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              FirstPriority_46 = (MR_Integer) ((MR_Unsigned) OpPriority_193 - (MR_Unsigned) 1);
                              break;
                            case (MR_Integer) 1:
                              FirstPriority_46 = OpPriority_193;
                              break;
                          }
                          mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, Arg1_194, FirstPriority_46, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_158_158, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_159_159);
                          mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 32);
                          switch (SecondAssoc_45) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              SecondPriority_47 = (MR_Integer) ((MR_Unsigned) OpPriority_193 - (MR_Unsigned) 1);
                              break;
                            case (MR_Integer) 1:
                              SecondPriority_47 = OpPriority_193;
                              break;
                          }
                          mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, Arg2_195, SecondPriority_47, STATE_VARIABLE_VarSet_158_158, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_159_159, &STATE_VARIABLE_N_54);
                          succeeded = (OpPriority_193 > Priority_14);
                          if (succeeded)
                          {
                            void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__term_io_scalar_common_4[1]), (MR_Integer) 0)), (MR_Integer) 5))));
                            MR_Box conv15_STATE_VARIABLE_IO_56;

                            func_14(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_4[1]))), ((MR_Box) (OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_56);
                          }
                        }
                        else
                        {
                          MR_String Op_48;
                          MR_Integer Var_168;

                          succeeded = (Args_21 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) Functor_20)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Op_48 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_20, (MR_Integer) 0))));
                              succeeded = mercury__ops__lookup_op_2_p_0(TypeClassInfo_for_op_table_208, Ops_12, Op_48);
                              if (succeeded)
                              {
                                Var_168 = mercury__ops__max_priority_1_f_0(TypeClassInfo_for_op_table_208, Ops_12);
                                succeeded = (Priority_14 <= Var_168);
                              }
                            }
                          }
                          if (succeeded)
                          {
                            mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 40);
                            mercury__term_io__write_constant_4_p_0(OutStream_11, Functor_20);
                            mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 41);
                          }
                          else
                            mercury__term_io__write_constant_5_p_0(OutStream_11, Functor_20, (MR_Integer) 0);
                          if ((Args_21 == (MR_Word) ((MR_Unsigned) 0U)))
                          {
                            STATE_VARIABLE_VarSet_52 = STATE_VARIABLE_VarSet_0_51;
                            STATE_VARIABLE_N_54 = STATE_VARIABLE_N_0_53;
                          }
                          else
                          {
                            MR_Word X_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 0))));
                            MR_Word Xs_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 1))));
                            MR_Word STATE_VARIABLE_VarSet_178_178;
                            MR_Integer STATE_VARIABLE_N_179_179;

                            mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 40);
                            mercury__term_io__write_term_arg_9_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, X_49, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_178_178, STATE_VARIABLE_N_0_53, &STATE_VARIABLE_N_179_179);
                            mercury__term_io__write_term_later_args_9_p_0(TypeInfo_for_T_209, TypeClassInfo_for_op_table_208, OutStream_11, Ops_12, Xs_50, STATE_VARIABLE_VarSet_178_178, &STATE_VARIABLE_VarSet_52, STATE_VARIABLE_N_179_179, &STATE_VARIABLE_N_54);
                            mercury__io__write_char_4_p_0(OutStream_11, (MR_Char) 41);
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
      }
      else
      {
        MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_13, (MR_Integer) 0))));
        MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_35 = TypeInfo_for_T_209;
        MR_Word next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_34 = TypeClassInfo_for_op_table_208;
        MR_Word next_value_of_tscc_proc_2_input_3_OutStream_10 = OutStream_11;
        MR_Box next_value_of_tscc_proc_2_input_4_Ops_11 = Ops_12;
        MR_Word next_value_of_tscc_proc_2_input_5_Var_12 = Var_18;
        MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_21 = STATE_VARIABLE_VarSet_0_51;
        MR_Integer next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_N_0_23 = STATE_VARIABLE_N_0_53;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_TypeInfo_for_T_35 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_35;
        tscc_proc_2_input_2_TypeClassInfo_for_op_table_34 = next_value_of_tscc_proc_2_input_2_TypeClassInfo_for_op_table_34;
        tscc_proc_2_input_3_OutStream_10 = next_value_of_tscc_proc_2_input_3_OutStream_10;
        tscc_proc_2_input_4_Ops_11 = next_value_of_tscc_proc_2_input_4_Ops_11;
        tscc_proc_2_input_5_Var_12 = next_value_of_tscc_proc_2_input_5_Var_12;
        tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_21 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_21;
        tscc_proc_2_input_7_STATE_VARIABLE_N_0_23 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_N_0_23;
        goto top_of_proc_2;
      }
      tscc_output_1_STATE_VARIABLE_VarSet_52 = STATE_VARIABLE_VarSet_52;
      tscc_output_2_STATE_VARIABLE_N_54 = STATE_VARIABLE_N_54;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeInfo_for_T_35 = tscc_proc_2_input_1_TypeInfo_for_T_35;
      MR_Word TypeClassInfo_for_op_table_34 = tscc_proc_2_input_2_TypeClassInfo_for_op_table_34;
      MR_Word OutStream_10 = tscc_proc_2_input_3_OutStream_10;
      MR_Box Ops_11 = tscc_proc_2_input_4_Ops_11;
      MR_Word Var_12 = tscc_proc_2_input_5_Var_12;
      MR_Word STATE_VARIABLE_VarSet_0_21 = tscc_proc_2_input_6_STATE_VARIABLE_VarSet_0_21;
      MR_Word STATE_VARIABLE_VarSet_22;
      MR_Integer STATE_VARIABLE_N_0_23 = tscc_proc_2_input_7_STATE_VARIABLE_N_0_23;
      MR_Integer STATE_VARIABLE_N_24;
      MR_bool succeeded;
      MR_Word Value_16;
      MR_Word TypeInfo_13_44;
      MR_Word TypeInfo_15_46;
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarSet_0_21, (MR_Integer) 2))));
      MR_Box conv16_Value_16;

      {
        TypeInfo_13_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_13_44, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_13_44, 1) = ((MR_Box) (TypeInfo_for_T_35));
      }
      {
        TypeInfo_15_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_15_46, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
        MR_hl_field(MR_mktag(0), TypeInfo_15_46, 1) = ((MR_Box) (TypeInfo_for_T_35));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_35, TypeInfo_13_44, TypeInfo_15_46, Var_41, Var_12, &conv16_Value_16);
      if (succeeded)
      {
        Value_16 = ((MR_Word) (conv16_Value_16));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Integer Var_63;
        MR_Integer Var_67;
        MR_Box MR_CALL (* func_17)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12))));
        MR_Box conv18_Var_67;
        MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_209;
        MR_Word next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_208;
        MR_Word next_value_of_tscc_proc_1_input_3_OutStream_11;
        MR_Box next_value_of_tscc_proc_1_input_4_Ops_12;
        MR_Word next_value_of_tscc_proc_1_input_5_Term_13;
        MR_Integer next_value_of_tscc_proc_1_input_6_Priority_14;
        MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51;
        MR_Integer next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_N_0_53;

        conv18_Var_67 = func_17(((MR_Box) (TypeClassInfo_for_op_table_34)), Ops_11);
        Var_67 = ((MR_Integer) (conv18_Var_67));
        Var_63 = (MR_Integer) ((MR_Unsigned) Var_67 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_209 = TypeInfo_for_T_35;
        next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_208 = TypeClassInfo_for_op_table_34;
        next_value_of_tscc_proc_1_input_3_OutStream_11 = OutStream_10;
        next_value_of_tscc_proc_1_input_4_Ops_12 = Ops_11;
        next_value_of_tscc_proc_1_input_5_Term_13 = Value_16;
        next_value_of_tscc_proc_1_input_6_Priority_14 = Var_63;
        next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51 = STATE_VARIABLE_VarSet_0_21;
        next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_N_0_53 = STATE_VARIABLE_N_0_23;
        tscc_proc_1_input_1_TypeInfo_for_T_209 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_209;
        tscc_proc_1_input_2_TypeClassInfo_for_op_table_208 = next_value_of_tscc_proc_1_input_2_TypeClassInfo_for_op_table_208;
        tscc_proc_1_input_3_OutStream_11 = next_value_of_tscc_proc_1_input_3_OutStream_11;
        tscc_proc_1_input_4_Ops_12 = next_value_of_tscc_proc_1_input_4_Ops_12;
        tscc_proc_1_input_5_Term_13 = next_value_of_tscc_proc_1_input_5_Term_13;
        tscc_proc_1_input_6_Priority_14 = next_value_of_tscc_proc_1_input_6_Priority_14;
        tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_VarSet_0_51;
        tscc_proc_1_input_8_STATE_VARIABLE_N_0_53 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_N_0_53;
        goto top_of_proc_1;
      }
      else
      {
        MR_String Name_17;
        MR_Word TypeInfo_13_77;
        MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarSet_0_21, (MR_Integer) 1))));
        MR_Box conv19_Name_17;

        {
          TypeInfo_13_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_13_77, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), TypeInfo_13_77, 1) = ((MR_Box) (TypeInfo_for_T_35));
        }
        succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_35, TypeInfo_13_77, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_73, Var_12, &conv19_Name_17);
        if (succeeded)
        {
          Name_17 = ((MR_String) (conv19_Name_17));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Box Var_86 = (MR_Box) (OutStream_10);
          MR_Box Var_87;

{
#define MR_PROC_LABEL mercury__term_io__write_variable_anon_vars_9_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_86 ;
	Message = Name_17 ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_87 );
}
          mercury__io__throw_on_error_4_p_0(Var_87, (MR_String) "error writing to output file: ");
          STATE_VARIABLE_VarSet_22 = STATE_VARIABLE_VarSet_0_21;
        }
        else
        {
          MR_Integer VarNum_18 = (MR_Integer) (Var_12);
          MR_String VarNumStr_19;
          MR_String VarName_20;

{
#define MR_PROC_LABEL mercury__term_io__write_variable_anon_vars_9_p_0

	MR_Integer I;
	MR_String S;

	I = VarNum_18 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 VarNumStr_19  = S;
}
          VarName_20 = mercury__string__f_43_43_2_f_0((MR_String) "_", VarNumStr_19);
          mercury__varset__name_var_4_p_0(TypeInfo_for_T_35, Var_12, VarName_20, STATE_VARIABLE_VarSet_0_21, &STATE_VARIABLE_VarSet_22);
          mercury__io__write_string_4_p_0(OutStream_10, VarName_20);
        }
        STATE_VARIABLE_N_24 = STATE_VARIABLE_N_0_23;
      }
      tscc_output_1_STATE_VARIABLE_VarSet_52 = STATE_VARIABLE_VarSet_22;
      tscc_output_2_STATE_VARIABLE_N_54 = STATE_VARIABLE_N_24;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_VarSet_52 = tscc_output_1_STATE_VARIABLE_VarSet_52;
    *tscc_output_ptr_2_STATE_VARIABLE_N_54 = tscc_output_2_STATE_VARIABLE_N_54;
    return;
  }
}

static void MR_CALL 
mercury__term_io__write_later_list_elements_9_p_0(
  MR_Word TypeInfo_for_T_54,
  MR_Word TypeClassInfo_for_op_table_53,
  MR_Word OutStream_10,
  MR_Box Ops_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_23,
  MR_Word * STATE_VARIABLE_VarSet_24,
  MR_Integer STATE_VARIABLE_N_0_25,
  MR_Integer * STATE_VARIABLE_N_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_12)) == (MR_Integer) 1);
    MR_Word Value_18;
    MR_Word TypeCtorInfo_12_62;
    MR_Word TypeInfo_13_63;
    MR_Word TypeCtorInfo_14_64;
    MR_Word TypeInfo_15_65;
    MR_Word Var_16;
    MR_Word Var_60;
    MR_Box conv0_Value_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_12, (MR_Integer) 0))));
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarSet_0_23, (MR_Integer) 2))));
      TypeCtorInfo_12_62 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
      TypeCtorInfo_14_64 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
      {
        TypeInfo_13_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_13_63, 0) = ((MR_Box) (TypeCtorInfo_12_62));
        MR_hl_field(MR_mktag(0), TypeInfo_13_63, 1) = ((MR_Box) (TypeInfo_for_T_54));
      }
      {
        TypeInfo_15_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_15_65, 0) = ((MR_Box) (TypeCtorInfo_14_64));
        MR_hl_field(MR_mktag(0), TypeInfo_15_65, 1) = ((MR_Box) (TypeInfo_for_T_54));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_54, TypeInfo_13_63, TypeInfo_15_65, Var_60, Var_16, &conv0_Value_18);
      if (succeeded)
      {
        Value_18 = ((MR_Word) (conv0_Value_18));
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_Term_12 = Value_18;

      // direct tailcall eliminated
      ;
      Term_12 = next_value_of_Term_12;
      continue;
    }
    else
    {
      MR_Word ListHead_19;
      MR_Word ListTail_20;
      MR_Word Var_32;
      MR_String Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;

      succeeded = ((MR_tag((MR_Word) Term_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_12, (MR_Integer) 0))));
        Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_12, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_33 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0))));
          succeeded = (strcmp(Var_33, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ListHead_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 0))));
              Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 1))));
              succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ListTail_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 0))));
                Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 1))));
                succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_VarSet_39_39;
        MR_Integer STATE_VARIABLE_N_40_40;
        MR_Box Var_73 = (MR_Box) (OutStream_10);
        MR_Box Var_74;
        MR_Word next_value_of_Term_12;
        MR_Word next_value_of_STATE_VARIABLE_VarSet_0_23;
        MR_Integer next_value_of_STATE_VARIABLE_N_0_25;

{
#define MR_PROC_LABEL mercury__term_io__write_later_list_elements_9_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_73 ;
	Message = (MR_String) ", " ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_74 );
}
        mercury__io__throw_on_error_4_p_0(Var_74, (MR_String) "error writing to output file: ");
        mercury__term_io__write_term_arg_9_p_0(TypeInfo_for_T_54, TypeClassInfo_for_op_table_53, OutStream_10, Ops_11, ListHead_19, STATE_VARIABLE_VarSet_0_23, &STATE_VARIABLE_VarSet_39_39, STATE_VARIABLE_N_0_25, &STATE_VARIABLE_N_40_40);
        // direct tailcall eliminated
        ;
        next_value_of_Term_12 = ListTail_20;
        next_value_of_STATE_VARIABLE_VarSet_0_23 = STATE_VARIABLE_VarSet_39_39;
        next_value_of_STATE_VARIABLE_N_0_25 = STATE_VARIABLE_N_40_40;
        Term_12 = next_value_of_Term_12;
        STATE_VARIABLE_VarSet_0_23 = next_value_of_STATE_VARIABLE_VarSet_0_23;
        STATE_VARIABLE_N_0_25 = next_value_of_STATE_VARIABLE_N_0_25;
        continue;
      }
      else
      {
        MR_Word Var_45;
        MR_String Var_46;
        MR_Word Var_47;

        succeeded = ((MR_tag((MR_Word) Term_12)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_12, (MR_Integer) 0))));
          Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_12, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 0))));
            succeeded = (strcmp(Var_46, (MR_String) "[]") == 0);
            if (succeeded)
              succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          *STATE_VARIABLE_N_26 = STATE_VARIABLE_N_0_25;
          *STATE_VARIABLE_VarSet_24 = STATE_VARIABLE_VarSet_0_23;
        }
        else
        {
          MR_Box Var_83 = (MR_Box) (OutStream_10);
          MR_Box Var_84;

{
#define MR_PROC_LABEL mercury__term_io__write_later_list_elements_9_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_83 ;
	Message = (MR_String) " | " ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_84 );
}
          mercury__io__throw_on_error_4_p_0(Var_84, (MR_String) "error writing to output file: ");
          mercury__term_io__write_term_anon_vars_9_p_0(TypeInfo_for_T_54, TypeClassInfo_for_op_table_53, OutStream_10, Ops_11, Term_12, STATE_VARIABLE_VarSet_0_23, STATE_VARIABLE_VarSet_24, STATE_VARIABLE_N_0_25, STATE_VARIABLE_N_26);
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__term_io__write_term_arg_9_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word TypeClassInfo_for_op_table_26,
  MR_Word OutStream_10,
  MR_Box Ops_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_16,
  MR_Word * STATE_VARIABLE_VarSet_17,
  MR_Integer STATE_VARIABLE_N_0_18,
  MR_Integer * STATE_VARIABLE_N_19)
{
  {
    MR_Integer Var_22;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 13))));
    MR_Box conv1_Var_22;

    conv1_Var_22 = func_0(((MR_Box) (TypeClassInfo_for_op_table_26)), Ops_11);
    Var_22 = ((MR_Integer) (conv1_Var_22));
    mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_27, TypeClassInfo_for_op_table_26, OutStream_10, Ops_11, Term_12, Var_22, STATE_VARIABLE_VarSet_0_16, STATE_VARIABLE_VarSet_17, STATE_VARIABLE_N_0_18, STATE_VARIABLE_N_19);
  }
}

void MR_CALL 
mercury__term_io__write_term_anon_vars_9_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeClassInfo_for_op_table_28,
  MR_Word OutStream_10,
  MR_Box Ops_11,
  MR_Word Term_12,
  MR_Word STATE_VARIABLE_VarSet_0_16,
  MR_Word * STATE_VARIABLE_VarSet_17,
  MR_Integer STATE_VARIABLE_N_0_18,
  MR_Integer * STATE_VARIABLE_N_19)
{
  {
    MR_Integer Var_22;
    MR_Integer Var_26;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_28, (MR_Integer) 0)), (MR_Integer) 12))));
    MR_Box conv1_Var_26;

    conv1_Var_26 = func_0(((MR_Box) (TypeClassInfo_for_op_table_28)), Ops_11);
    Var_26 = ((MR_Integer) (conv1_Var_26));
    Var_22 = (MR_Integer) ((MR_Unsigned) Var_26 + (MR_Unsigned) 1);
    mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_29, TypeClassInfo_for_op_table_28, OutStream_10, Ops_11, Term_12, Var_22, STATE_VARIABLE_VarSet_0_16, STATE_VARIABLE_VarSet_17, STATE_VARIABLE_N_0_18, STATE_VARIABLE_N_19);
  }
}

static void MR_CALL 
mercury__term_io__write_term_later_args_9_p_0(
  MR_Word TypeInfo_for_T_43,
  MR_Word TypeClassInfo_for_op_table_42,
  MR_Word OutStream_1,
  MR_Box Ops_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarSet_0_4,
  MR_Word * STATE_VARIABLE_VarSet_5,
  MR_Integer STATE_VARIABLE_N_0_6,
  MR_Integer * STATE_VARIABLE_N_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_N_7 = STATE_VARIABLE_N_0_6;
      *STATE_VARIABLE_VarSet_5 = STATE_VARIABLE_VarSet_0_4;
    }
    else
    {
      MR_Word X_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Xs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_VarSet_36_36;
      MR_Integer STATE_VARIABLE_N_37_37;
      MR_Box Var_47 = (MR_Box) (OutStream_1);
      MR_Box Var_48;
      MR_Integer Var_66;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Box conv1_Var_66;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_VarSet_0_4;
      MR_Integer next_value_of_STATE_VARIABLE_N_0_6;

{
#define MR_PROC_LABEL mercury__term_io__write_term_later_args_9_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_47 ;
	Message = (MR_String) ", " ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_48 );
}
      mercury__io__throw_on_error_4_p_0(Var_48, (MR_String) "error writing to output file: ");
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_42, (MR_Integer) 0)), (MR_Integer) 13))));
      conv1_Var_66 = func_0(((MR_Box) (TypeClassInfo_for_op_table_42)), Ops_2);
      Var_66 = ((MR_Integer) (conv1_Var_66));
      mercury__term_io__write_term_prio_anon_vars_10_p_0(TypeInfo_for_T_43, TypeClassInfo_for_op_table_42, OutStream_1, Ops_2, X_23, Var_66, STATE_VARIABLE_VarSet_0_4, &STATE_VARIABLE_VarSet_36_36, STATE_VARIABLE_N_0_6, &STATE_VARIABLE_N_37_37);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Xs_24;
      next_value_of_STATE_VARIABLE_VarSet_0_4 = STATE_VARIABLE_VarSet_36_36;
      next_value_of_STATE_VARIABLE_N_0_6 = STATE_VARIABLE_N_37_37;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_VarSet_0_4 = next_value_of_STATE_VARIABLE_VarSet_0_4;
      STATE_VARIABLE_N_0_6 = next_value_of_STATE_VARIABLE_N_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0);
    MR_Word Var_33;
    MR_Word Var_34;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) Var_34)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_String Op_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0))));
            MR_Word Arg_16;
            MR_Word Var_35;
            MR_Word Var_36;
            MR_Word next_value_of_HeadVar__1_1;

            succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 0))));
              Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 1))));
              if ((Var_35 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
                MR_Box conv2_Var_21;
                MR_Box conv1_Var_22;

                Arg_16 = Var_36;
                func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__term_io_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 8))));
                succeeded = func_0(((MR_Box) ((MR_Word) (&mercury__term_io_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Op_13)), &conv2_Var_21, &conv1_Var_22);
                if (succeeded)
                  succeeded = MR_TRUE;
              }
              else
              {
                MR_Word TypeClassInfo_for_op_table_30;
                MR_Word Var_27;
                MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
                MR_Box conv6_Var_18;
                MR_Box conv5_Var_19;
                MR_Box conv4_Var_20;

                Arg_16 = Var_36;
                Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 1))));
                succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  TypeClassInfo_for_op_table_30 = (MR_Word) (&mercury__term_io_scalar_common_1[0]);
                  func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_30, (MR_Integer) 0)), (MR_Integer) 5))));
                  succeeded = func_3(((MR_Box) (TypeClassInfo_for_op_table_30)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Op_13)), &conv6_Var_18, &conv5_Var_19, &conv4_Var_20);
                  if (succeeded)
                    succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = Arg_16;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_34, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__term_io__write_constant_4_p_0(
  MR_Word OutStream_5,
  MR_Word Const_6)
{
  mercury__term_io__write_constant_5_p_0(OutStream_5, Const_6, (MR_Integer) 1);
}

void MR_CALL 
mercury__term_io__write_constant_5_p_0(
  MR_Word OutStream_6,
  MR_Word Const_7,
  MR_Word AdjacentToGraphicToken_8)
{
  switch (MR_tag((MR_Word) Const_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String A_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), Const_7, (MR_Integer) 0))));

        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), OutStream_6, A_18, AdjacentToGraphicToken_8);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Base_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_7, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word I_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Const_7, (MR_Integer) 1))));
        MR_Word Signedness_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_7, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
        MR_Word Size_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_7, (MR_Integer) 2))) & (MR_Integer) 7);
        MR_String Prefix_14 = ((&mercury__term_io_vector_common_6[4 + Base_10]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;
        MR_String IntString_15;
        MR_String Suffix_16;
        MR_Integer Var_29 = ((&mercury__term_io_vector_common_7[0 + Base_10]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;
        MR_Box Var_70;
        MR_Box Var_71;
        MR_Box Var_80;
        MR_Box Var_81;
        MR_Box Var_90;
        MR_Box Var_91;

        IntString_15 = mercury__integer__to_base_string_2_f_0(I_11, Var_29);
        switch (Signedness_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Suffix_16 = ((&mercury__term_io_vector_common_6[8 + Size_13]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;
            break;
          case (MR_Integer) 1:
            Suffix_16 = ((&mercury__term_io_vector_common_6[13 + Size_13]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;
            break;
        }
        Var_70 = (MR_Box) (OutStream_6);
{
#define MR_PROC_LABEL mercury__term_io__write_constant_5_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_70 ;
	Message = Prefix_14 ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_71 );
}
        mercury__io__throw_on_error_4_p_0(Var_71, (MR_String) "error writing to output file: ");
        Var_80 = (MR_Box) (OutStream_6);
{
#define MR_PROC_LABEL mercury__term_io__write_constant_5_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_80 ;
	Message = IntString_15 ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_81 );
}
        mercury__io__throw_on_error_4_p_0(Var_81, (MR_String) "error writing to output file: ");
        Var_90 = (MR_Box) (OutStream_6);
{
#define MR_PROC_LABEL mercury__term_io__write_constant_5_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_90 ;
	Message = Suffix_16 ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_91 );
}
        mercury__io__throw_on_error_4_p_0(Var_91, (MR_String) "error writing to output file: ");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String S_19 = ((MR_String) ((MR_hl_field(MR_mktag(2), Const_7, (MR_Integer) 0))));

        mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&mercury__term_io_scalar_common_4[0]), (MR_Word) (&mercury__term_io_scalar_common_4[1]), OutStream_6, S_19);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Float F_17 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_7, (MR_Integer) 1)));
            MR_Box Var_40 = (MR_Box) (OutStream_6);
            MR_Box Var_41;

{
#define MR_PROC_LABEL mercury__term_io__write_constant_5_p_0

	MercuryFilePtr Stream;
	MR_Float Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_40 ;
	Val = F_17 ;
		{

    char buf[MR_SPRINTF_FLOAT_BUF_SIZE];
    MR_sprintf_float(buf, Val);
    if (ML_fprintf(Stream, "%s", buf) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_41 );
}
            mercury__io__throw_on_error_4_p_0(Var_41, (MR_String) "error writing to output file: ");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String N_20 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_7, (MR_Integer) 1))));
            MR_Box Var_50 = (MR_Box) (OutStream_6);
            MR_Box Var_51;
            MR_Box Var_60;
            MR_Box Var_61;

{
#define MR_PROC_LABEL mercury__term_io__write_constant_5_p_0

	MercuryFilePtr Stream;
	MR_Char Character;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_50 ;
	Character = (MR_Char) 36 ;
		{

    Error = 0;
    if (Character <= 0x7f) {
        if (MR_PUTCH(*Stream, Character) < 0) {
            Error = errno;
        } else if (Character == '\n') {
            MR_line_number(*Stream)++;
        }
    } else {
        char    buf[5];
        size_t  len;
        size_t  i;
        len = MR_utf8_encode(buf, Character);
        // XXX ILSEQ Error if len==0
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                Error = errno;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_51 );
}
            mercury__io__throw_on_error_4_p_0(Var_51, (MR_String) "error writing to output file: ");
            Var_60 = (MR_Box) (OutStream_6);
{
#define MR_PROC_LABEL mercury__term_io__write_constant_5_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_60 ;
	Message = N_20 ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_61 );
}
            mercury__io__throw_on_error_4_p_0(Var_61, (MR_String) "error writing to output file: ");
          }
          break;
      }
      break;
  }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_15,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Word Stream_5,
  MR_String S_6)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_STATE_VARIABLE_State_11_11;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_State_9;

    func_0(((MR_Box) (TypeClassInfo_for_writer_16)), ((MR_Box) (Stream_5)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_11_11);
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_15, TypeClassInfo_for_writer_16, Stream_5, S_6);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_writer_16)), ((MR_Box) (Stream_5)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_9);
  }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_writer_19,
  MR_Word TypeClassInfo_for_writer_20,
  MR_Word Stream_6,
  MR_String S_7,
  MR_Word AdjacentToGraphicToken_8)
{
  {
    MR_bool succeeded;
    MR_Word ShouldQuote_10;

    {
      MR_Integer lo_0 = (MR_Integer) 0;
      MR_Integer hi_1 = (MR_Integer) 3;
      MR_Integer mid_2;
      MR_Integer result_3;

      // binary string simple lookup switch
      ;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(S_7, ((&mercury__term_io_vector_common_6[0 + mid_2]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0);
        if ((result_3 == (MR_Integer) 0))
        {
          succeeded = MR_TRUE;
          // jump out of search loop
          ;
          goto label_0;
        }
        else
        if ((result_3 < (MR_Integer) 0))
          hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
        else
          lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
      }
      while ((lo_0 <= hi_1));
      succeeded = MR_FALSE;
    label_0:;
    }
    if (!(succeeded))
    {
      {
        MR_Integer Var_26;
        MR_Char Var_27;
        MR_Char Var_30;
        MR_Integer Var_38;

        succeeded = mercury__term_io__all_match_loop__ho23_3_p_in__string_0(S_7, (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (strcmp(S_7, (MR_String) "") == 0);
          succeeded = !(succeeded);
          if (succeeded)
          {
            Var_26 = (MR_Integer) 0;
            Var_27 = (MR_Char) 35;
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = S_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_38  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = Var_26 ;
	Length = Var_38 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
            if (succeeded)
            {
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = S_7 ;
	Index = Var_26 ;
		{

    Ch = (unsigned char) Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
        if (Ch < 0) {
            Ch = 0xFFFD;
        }
    }


		;}
#undef MR_PROC_LABEL
	 Var_30  = Ch;
}
              succeeded = (Var_27 == Var_30);
            }
            succeeded = !(succeeded);
            if (succeeded)
              succeeded = (AdjacentToGraphicToken_8 == (MR_Integer) 1);
          }
        }
      }
      if (!(succeeded))
      {
        MR_Char FirstChar_24;
        MR_Integer Var_44;
        MR_Char Var_48;

{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = S_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_44  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = (MR_Integer) 0 ;
	Length = Var_44 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = S_7 ;
	Index = (MR_Integer) 0 ;
		{

    Ch = (unsigned char) Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
        if (Ch < 0) {
            Ch = 0xFFFD;
        }
    }


		;}
#undef MR_PROC_LABEL
	 FirstChar_24  = Ch;
}
          succeeded = mercury__char__lower_upper_2_p_0(FirstChar_24, &Var_48);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = S_7 ;
		{

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':

            case 'a': case 'b': case 'c': case 'd': case 'e':
            case 'f': case 'g': case 'h': case 'i': case 'j':
            case 'k': case 'l': case 'm': case 'n': case 'o':
            case 'p': case 'q': case 'r': case 's': case 't':
            case 'u': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            case 'A': case 'B': case 'C': case 'D': case 'E':
            case 'F': case 'G': case 'H': case 'I': case 'J':
            case 'K': case 'L': case 'M': case 'N': case 'O':
            case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'U': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':

            case '_':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
          }
        }
      }
    }
    if (succeeded)
      ShouldQuote_10 = (MR_Integer) 0;
    else
      ShouldQuote_10 = (MR_Integer) 1;
    switch (ShouldQuote_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv1_STATE_VARIABLE_State_12;

          func_0(((MR_Box) (TypeClassInfo_for_writer_19)), ((MR_Box) (Stream_6)), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_12);
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv3_STATE_VARIABLE_State_14_14;
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv5_STATE_VARIABLE_State_12;

          func_2(((MR_Box) (TypeClassInfo_for_writer_20)), ((MR_Box) (Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 39)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_14_14);
          mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_19, TypeClassInfo_for_writer_20, Stream_6, S_7);
          func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5))));
          func_4(((MR_Box) (TypeClassInfo_for_writer_20)), ((MR_Box) (Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 39)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_12);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
mercury__term_io__all_match_loop__ho23_3_p_in__string_0(
  MR_String HeadVar__2_5,
  MR_Integer HeadVar__3_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_7;
    MR_Char Var_8;
    MR_Word Var_9;
    MR_Integer Var_15;

    // setup for model_semi tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__term_io__all_match_loop__ho23_3_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_5 ;
	Index = HeadVar__3_6 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Var_7  = NextIndex;
	 Var_8  = Ch;
	 Var_15  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (Var_15 == (MR_Integer) -1);
      if (succeeded)
        Var_9 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t Var_16;

{
#define MR_PROC_LABEL mercury__term_io__all_match_loop__ho23_3_p_in__string_0

	MR_Integer I;
	uint8_t U8;

	I = Var_15 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	 Var_16  = U8;
}
        {
          Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (MR_Word) (Var_16));
        }
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer next_value_of_HeadVar__3_6;

      succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = mercury__mercury_term_lexer__graphic_token_char_1_p_0(Var_8);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_6 = Var_7;
          HeadVar__3_6 = next_value_of_HeadVar__3_6;
          continue;
        }
      }
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_12,
  MR_Word TypeClassInfo_for_writer_13,
  MR_Word Stream_5,
  MR_String String_6)
{
  {
    MR_bool succeeded;
    MR_Integer Var_26;
    MR_Integer Var_34;
    MR_Integer Var_36;
    MR_Integer Var_37;

{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_26  = Length;
}
    succeeded = ((MR_Integer) 0 > (MR_Integer) 0);
    if (succeeded)
      Var_34 = (MR_Integer) 0;
    else
      Var_34 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_37  = Length;
}
    succeeded = (Var_26 < Var_37);
    if (succeeded)
      Var_36 = Var_26;
    else
      Var_36 = Var_37;
    mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_55_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(TypeClassInfo_for_writer_12, TypeClassInfo_for_writer_13, Stream_5, String_6, Var_34, Var_36);
  }
}

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_55_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
  MR_Word Var_17,
  MR_Word Var_18,
  MR_Word Var_19,
  MR_String HeadVar__2_8,
  MR_Integer HeadVar__3_9,
  MR_Integer HeadVar__4_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 < HeadVar__4_10);
    MR_Integer Var_13;
    MR_Char Var_14;
    MR_Integer Var_24;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_55_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_8 ;
	Index = HeadVar__3_9 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Var_13  = NextIndex;
	 Var_14  = Ch;
	 Var_24  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (Var_13 <= HeadVar__4_10);
    }
    if (succeeded)
    {
      MR_Integer next_value_of_HeadVar__3_9;

      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(Var_17, Var_18, Var_19, Var_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_13;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_writer_17,
  MR_Word TypeClassInfo_for_writer_18,
  MR_Word Stream_5,
  MR_Char Char_6)
{
  {
    MR_bool succeeded;
    MR_Char QuoteChar_8;

    switch (Char_6) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Char) 7:
        {
          QuoteChar_8 = (MR_Char) 97;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 8:
        {
          QuoteChar_8 = (MR_Char) 98;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 9:
        {
          QuoteChar_8 = (MR_Char) 116;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 10:
        {
          QuoteChar_8 = (MR_Char) 110;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 11:
        {
          QuoteChar_8 = (MR_Char) 118;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 12:
        {
          QuoteChar_8 = (MR_Char) 102;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 13:
        {
          QuoteChar_8 = (MR_Char) 114;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 34:
        {
          QuoteChar_8 = (MR_Char) 34;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          QuoteChar_8 = (MR_Char) 39;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 92:
        {
          QuoteChar_8 = (MR_Char) 92;
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv1_STATE_VARIABLE_State_12_12;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_State_10;

      func_0(((MR_Box) (TypeClassInfo_for_writer_18)), ((MR_Box) (Stream_5)), ((MR_Box) (MR_Word) ((MR_Char) 92)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_State_12_12);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
      func_2(((MR_Box) (TypeClassInfo_for_writer_18)), ((MR_Box) (Stream_5)), ((MR_Box) (MR_Word) (QuoteChar_8)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_State_10);
    }
    else
    {
      succeeded = mercury__char__is_alnum_1_p_0(Char_6);
      if (!(succeeded))
      {
        if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32))) <= ((MR_Unsigned) 94)))
          if ((((mercury__term_io_scalar_common_5[0])[(((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_6 - (MR_Unsigned) 32)) & (MR_Integer) 31))))))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
        else
          succeeded = MR_FALSE;
        if (!(succeeded))
        {
          MR_Integer Var_20;

{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_6 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_20  = Int;
}
          succeeded = (Var_20 >= (MR_Integer) 160);
        }
      }
      if (succeeded)
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Box conv5_STATE_VARIABLE_State_10;

        func_4(((MR_Box) (TypeClassInfo_for_writer_18)), ((MR_Box) (Stream_5)), ((MR_Box) (MR_Word) (Char_6)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_State_10);
      }
      else
      {
        MR_String Var_15;
        void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv7_STATE_VARIABLE_State_10;

        Var_15 = mercury__term_io__mercury_escape_char_1_f_0(Char_6);
        func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5))));
        func_6(((MR_Box) (TypeClassInfo_for_writer_17)), ((MR_Box) (Stream_5)), ((MR_Box) (Var_15)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_State_10);
      }
    }
  }
}

MR_String MR_CALL 
mercury__term_io__mercury_escape_char_1_f_0(
  MR_Char Char_3)
{
  {
    MR_String EscapeCode_4;
    MR_Integer Int_5;
    MR_String OctalString0_6;
    MR_String OctalString_7;
    MR_String Var_12;

{
#define MR_PROC_LABEL mercury__term_io__mercury_escape_char_1_f_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_3 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Int_5  = Int;
}
    mercury__string__int_to_base_string_3_p_0(Int_5, (MR_Integer) 8, &OctalString0_6);
    mercury__string__pad_left_4_p_0(OctalString0_6, (MR_Char) 48, (MR_Integer) 3, &OctalString_7);
    mercury__string__append_3_p_2(OctalString_7, (MR_String) "\\", &Var_12);
    mercury__string__append_3_p_2((MR_String) "\\", Var_12, &EscapeCode_4);
    return EscapeCode_4;
  }
}

void MR_CALL 
mercury__term_io__read_term_with_op_table_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_op_table_13,
  MR_Word InStream_6,
  MR_Box Ops_7,
  MR_Word * Result_8)
{
  mercury__mercury_term_parser__read_term_with_op_table_5_p_0(TypeInfo_for_T_14, TypeClassInfo_for_op_table_13, InStream_6, Ops_7, Result_8);
}

void MR_CALL 
mercury__term_io__read_term_with_op_table_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeClassInfo_for_op_table_13,
  MR_Box Ops_5,
  MR_Word * Result_6)
{
  {
    MR_Word InStream_8;
    MR_Box Var_17;

{
#define MR_PROC_LABEL mercury__term_io__read_term_with_op_table_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 Var_17  = (MR_Box) Stream;
}
    InStream_8 = (MR_Word) (Var_17);
    mercury__mercury_term_parser__read_term_with_op_table_5_p_0(TypeInfo_for_T_14, TypeClassInfo_for_op_table_13, InStream_8, Ops_5, Result_6);
  }
}

void MR_CALL 
mercury__term_io__read_term_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word InStream_5,
  MR_Word * Result_6)
{
  mercury__mercury_term_parser__read_term_with_op_table_5_p_0(TypeInfo_for_T_13, (MR_Word) (&mercury__term_io_scalar_common_1[0]), InStream_5, ((MR_Box) ((MR_Integer) 0)), Result_6);
}

void MR_CALL 
mercury__term_io__read_term_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word * Result_4)
{
  {
    MR_Word InStream_6;
    MR_Box Var_14;

{
#define MR_PROC_LABEL mercury__term_io__read_term_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 Var_14  = (MR_Box) Stream;
}
    InStream_6 = (MR_Word) (Var_14);
    mercury__mercury_term_parser__read_term_with_op_table_5_p_0(TypeInfo_for_T_11, (MR_Word) (&mercury__term_io_scalar_common_1[0]), InStream_6, ((MR_Box) ((MR_Integer) 0)), Result_4);
  }
}

static MR_bool MR_CALL 
mercury__term_io____Unify____adjacent_to_graphic_token_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term_io____Unify____adjacent_to_graphic_token_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_io____Compare____adjacent_to_graphic_token_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term_io____Compare____adjacent_to_graphic_token_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_io____Unify____read_term_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term_io____Unify____read_term_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_io____Compare____read_term_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term_io____Compare____read_term_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_io____Unify____read_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term_io____Unify____read_term_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_io____Compare____read_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term_io____Compare____read_term_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__term_io__init(void)
{
}

void mercury__term_io__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__term_io__term_io__type_ctor_info_adjacent_to_graphic_token_0);
	MR_register_type_ctor_info(&mercury__term_io__term_io__type_ctor_info_read_term_1);
	MR_register_type_ctor_info(&mercury__term_io__term_io__type_ctor_info_read_term_0);
}

void mercury__term_io__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__term_io__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module term_io.
