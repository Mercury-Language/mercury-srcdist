/*
** Automatically generated from `term_io.m'
** by the Mercury compiler,
** version rotd-2017-07-23
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


/* :- module term_io. */
/* :- implementation. */

/*
INIT mercury__term_io__init
ENDINIT
*/

#include "term_io.mih"


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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
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

static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_value_ordered_adjacent_to_graphic_token_0[2];

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

static MR_Integer MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_57_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
  MR_Word mercury__term_io__Var_17,
  MR_Word mercury__term_io__Var_18,
  MR_Box mercury__term_io__Var_19,
  MR_String mercury__term_io__V_8_8,
  MR_Integer mercury__term_io__V_9_9,
  MR_Integer mercury__term_io__V_10_10,
  MR_Box mercury__term_io__V_14_11,
  MR_Box * mercury__term_io__V_15_12);

static void MR_CALL 
mercury__term_io__foldl_between_2__ho30_6_p_in__string_0(
  MR_String mercury__term_io__V_8_8,
  MR_Integer mercury__term_io__V_9_9,
  MR_Integer mercury__term_io__V_10_10,
  MR_Word mercury__term_io__V_14_11,
  MR_Word * mercury__term_io__V_15_12);

static void MR_CALL 
mercury__term_io__write_later_list_elements_9_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_54,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_53,
  MR_Word mercury__term_io__OutStream_10,
  MR_Box mercury__term_io__Ops_11,
  MR_Word mercury__term_io__Term_12,
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_23,
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_24,
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_25,
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_26);

static void MR_CALL 
mercury__term_io__write_term_later_args_9_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_43,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_42,
  MR_Word mercury__term_io__OutStream_1,
  MR_Box mercury__term_io__Ops_2,
  MR_Word mercury__term_io__HeadVar__3_3,
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_4,
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_5,
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_6,
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_7);

static void MR_CALL 
mercury__term_io__write_term_arg_9_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_27,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_26,
  MR_Word mercury__term_io__OutStream_10,
  MR_Box mercury__term_io__Ops_11,
  MR_Word mercury__term_io__Term_12,
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_16,
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_17,
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_18,
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_19);

static MR_bool MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(
  MR_Word mercury__term_io__HeadVar__1_1);

static MR_bool MR_CALL 
mercury__term_io__all_match_loop__ho22_3_p_in__string_0(
  MR_String mercury__term_io__V_5_5,
  MR_Integer mercury__term_io__V_6_6);

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_54_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
  MR_Word mercury__term_io__Var_17,
  MR_Word mercury__term_io__Var_18,
  MR_Word mercury__term_io__Var_19,
  MR_String mercury__term_io__V_8_8,
  MR_Integer mercury__term_io__V_9_9,
  MR_Integer mercury__term_io__V_10_10);

static MR_bool MR_CALL 
mercury__term_io____Unify____adjacent_to_graphic_token_0_0_10001(
  MR_Box mercury__term_io__wrapper_arg_1,
  MR_Box mercury__term_io__wrapper_arg_2);

static void MR_CALL 
mercury__term_io____Compare____adjacent_to_graphic_token_0_0_10001(
  MR_Box * mercury__term_io__wrapper_arg_1,
  MR_Box mercury__term_io__wrapper_arg_2,
  MR_Box mercury__term_io__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_io____Unify____read_term_1_0_10001(
  MR_Box mercury__term_io__wrapper_arg_1,
  MR_Box mercury__term_io__wrapper_arg_2,
  MR_Box mercury__term_io__wrapper_arg_3);

static void MR_CALL 
mercury__term_io____Compare____read_term_1_0_10001(
  MR_Box mercury__term_io__wrapper_arg_1,
  MR_Box * mercury__term_io__wrapper_arg_2,
  MR_Box mercury__term_io__wrapper_arg_3,
  MR_Box mercury__term_io__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__term_io____Unify____read_term_0_0_10001(
  MR_Box mercury__term_io__wrapper_arg_1,
  MR_Box mercury__term_io__wrapper_arg_2);

static void MR_CALL 
mercury__term_io____Compare____read_term_0_0_10001(
  MR_Box * mercury__term_io__wrapper_arg_1,
  MR_Box mercury__term_io__wrapper_arg_2,
  MR_Box mercury__term_io__wrapper_arg_3);


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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "\'")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    (MR_Integer) 4227923967,
    (MR_Integer) 4160749569,
    (MR_Integer) 2013265921
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
#include "uint.mh"
#include "version_array.mh"



static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0 = {
  (MR_String) "maybe_adjacent_to_graphic_token",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1 = {
  (MR_String) "not_adjacent_to_graphic_token",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_value_ordered_adjacent_to_graphic_token_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term_io____Unify____adjacent_to_graphic_token_0_0_10001)),
  ((MR_Box) (mercury__term_io____Compare____adjacent_to_graphic_token_0_0_10001)),
  (MR_String) "term_io",
  (MR_String) "adjacent_to_graphic_token",
  {     mercury__term_io__term_io__enum_name_ordered_adjacent_to_graphic_token_0 },
  {     mercury__term_io__term_io__enum_value_ordered_adjacent_to_graphic_token_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__term_io__term_io__functor_number_map_adjacent_to_graphic_token_0
};

static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_0 = {
  (MR_String) "eof",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_read_term_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_1 = {
  (MR_String) "error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term_io__term_io__field_types_read_term_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_io__varset__pti_varset_1__pseudo_1 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_io__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_read_term_1_2[2] = {
  (MR_PseudoTypeInfo) &mercury__term_io__varset__pti_varset_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term_io__term__pti_term_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_2 = {
  (MR_String) "term",
  (MR_Integer) 2,
  (MR_Integer) 3,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__term_io__term_io__field_types_read_term_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mercury__term_io__term_io__du_stag_ordered_read_term_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__term_io__term_io__du_stag_ordered_read_term_1_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__term_io__term_io__du_stag_ordered_read_term_1_2
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_io____Unify____read_term_1_0_10001)),
  ((MR_Box) (mercury__term_io____Compare____read_term_1_0_10001)),
  (MR_String) "term_io",
  (MR_String) "read_term",
  {     mercury__term_io__term_io__du_name_ordered_read_term_1 },
  {     mercury__term_io__term_io__du_ptag_ordered_read_term_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__term_io__term_io__functor_number_map_read_term_1
};

static const MR_FA_TypeInfo_Struct1 mercury__term_io__term_io__ti_read_term_1term__type_ctor_info_generic_0 = {
  &mercury__term_io__term_io__type_ctor_info_read_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

const MR_TypeCtorInfo_Struct mercury__term_io__term_io__type_ctor_info_read_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term_io____Unify____read_term_0_0_10001)),
  ((MR_Box) (mercury__term_io____Compare____read_term_0_0_10001)),
  (MR_String) "term_io",
  (MR_String) "read_term",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__term_io__term_io__ti_read_term_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_Integer MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__term_io__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word mercury__term_io__TypeClassInfo_for_writer_15,
  MR_Word mercury__term_io__TypeClassInfo_for_writer_16,
  MR_Word mercury__term_io__Stream_5,
  MR_String mercury__term_io__S_6)
{
  {
    MR_bool mercury__term_io__succeeded;
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_11_11;
    void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box mercury__term_io__conv3_STATE_VARIABLE_State_9;

    {
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_16), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_11_11);
    }
    {
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_15, mercury__term_io__TypeClassInfo_for_writer_16, mercury__term_io__Stream_5, mercury__term_io__S_6);
    }
    mercury__term_io__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_16), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_State_9);
    }
  }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
  MR_Word mercury__term_io__TypeClassInfo_for_writer_13,
  MR_Word mercury__term_io__Stream_5,
  MR_String mercury__term_io__S_6)
{
  {
    MR_bool mercury__term_io__succeeded;

    {
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__Stream_5, mercury__term_io__S_6, (MR_Integer) 1);
    }
  }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
  MR_Word mercury__term_io__TypeClassInfo_for_writer_13,
  MR_Word mercury__term_io__Stream_5,
  MR_Char mercury__term_io__C_6)
{
  {
    MR_bool mercury__term_io__succeeded;

    {
      mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_p_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__Stream_5, mercury__term_io__C_6);
    }
  }
}

void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_p_0(
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
  MR_Word mercury__term_io__Stream_5,
  MR_Char mercury__term_io__C_6)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_String mercury__term_io__Var_10;
    MR_String mercury__term_io__Var_18;
    MR_String mercury__term_io__Var_21;
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_9;

    {
      mercury__term_io__string_is_escaped_char_2_p_0(mercury__term_io__C_6, &mercury__term_io__Var_18);
    }
    {
      mercury__string__append_3_p_2(mercury__term_io__Var_18, (MR_String) "\'", &mercury__term_io__Var_21);
    }
    {
      mercury__string__append_3_p_2((MR_String) "\'", mercury__term_io__Var_21, &mercury__term_io__Var_10);
    }
    mercury__term_io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_12), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (mercury__term_io__Var_10)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_9);
    }
  }
}

void MR_CALL 
mercury__term_io____Compare____read_term_1_0(
  MR_Word mercury__term_io__TypeInfo_for_T_32,
  MR_Word * mercury__term_io__HeadVar__1_1,
  MR_Word mercury__term_io__HeadVar__2_2,
  MR_Word mercury__term_io__HeadVar__3_3)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Integer mercury__term_io__CastX_30 = (MR_Integer) mercury__term_io__HeadVar__2_2;
    MR_Integer mercury__term_io__CastY_31 = (MR_Integer) mercury__term_io__HeadVar__3_3;

    mercury__term_io__succeeded = (mercury__term_io__CastX_30 == mercury__term_io__CastY_31);
    if (mercury__term_io__succeeded)
      *mercury__term_io__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__term_io__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) mercury__term_io__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mercury__term_io__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *mercury__term_io__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *mercury__term_io__HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mercury__term_io__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
            MR_String mercury__term_io__Var_40 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__term_io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__term_io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__term_io__ArgY1_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__term_io__ArgY2_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__term_io__Var_14;
                  MR_Integer mercury__term_io__V_7_46;

{
#define MR_PROC_LABEL mercury__term_io____Compare____read_term_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_io__Var_40 ;
	S2 =  mercury__term_io__ArgY1_11 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_7_46  = Res;
}
                  mercury__term_io__succeeded = (mercury__term_io__V_7_46 < (MR_Integer) 0);
                  if (mercury__term_io__succeeded)
                    mercury__term_io__Var_14 = (MR_Integer) 1;
                  else
                    {
                      mercury__term_io__succeeded = (mercury__term_io__V_7_46 == (MR_Integer) 0);
                      if (mercury__term_io__succeeded)
                        mercury__term_io__Var_14 = (MR_Integer) 0;
                      else
                        mercury__term_io__Var_14 = (MR_Integer) 2;
                    }
                  mercury__term_io__succeeded = (mercury__term_io__Var_14 == (MR_Integer) 0);
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
                  if (mercury__term_io__succeeded)
                    *mercury__term_io__HeadVar__1_1 = mercury__term_io__Var_14;
                  else
                    {
                      mercury__term_io__succeeded = (mercury__term_io__Var_39 < mercury__term_io__ArgY2_13);
                      if (mercury__term_io__succeeded)
                        *mercury__term_io__HeadVar__1_1 = (MR_Integer) 1;
                      else
                        {
                          mercury__term_io__succeeded = (mercury__term_io__Var_39 == mercury__term_io__ArgY2_13);
                          if (mercury__term_io__succeeded)
                            *mercury__term_io__HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *mercury__term_io__HeadVar__1_1 = (MR_Integer) 2;
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                *mercury__term_io__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__term_io__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__term_io__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__term_io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__term_io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__term_io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__term_io__ArgY1_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mercury__term_io__ArgY2_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__term_io__Var_29;

                  {
                    mercury__varset____Compare____varset_1_0(mercury__term_io__TypeInfo_for_T_32, &mercury__term_io__Var_29, mercury__term_io__Var_42, mercury__term_io__ArgY1_26);
                  }
                  mercury__term_io__succeeded = (mercury__term_io__Var_29 == (MR_Integer) 0);
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
                  if (mercury__term_io__succeeded)
                    *mercury__term_io__HeadVar__1_1 = mercury__term_io__Var_29;
                  else
                    {
                      mercury__term____Compare____term_1_0(mercury__term_io__TypeInfo_for_T_32, mercury__term_io__HeadVar__1_1, mercury__term_io__Var_41, mercury__term_io__ArgY2_28);
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

void MR_CALL 
mercury__term_io____Compare____read_term_0_0(
  MR_Word * mercury__term_io__HeadVar__1_1,
  MR_Word mercury__term_io__HeadVar__2_2,
  MR_Word mercury__term_io__HeadVar__3_3)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__TypeInfo_6_6 = (MR_Word) &mercury__term_io_scalar_common_1[1];
    MR_Word mercury__term_io__Cast_HeadVar1_4 = mercury__term_io__HeadVar__2_2;
    MR_Word mercury__term_io__Cast_HeadVar2_5 = mercury__term_io__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0(mercury__term_io__TypeInfo_6_6, mercury__term_io__HeadVar__1_1, ((MR_Box) (mercury__term_io__Cast_HeadVar1_4)), ((MR_Box) (mercury__term_io__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mercury__term_io____Unify____read_term_0_0(
  MR_Word mercury__term_io__HeadVar__1_1,
  MR_Word mercury__term_io__HeadVar__2_2)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__TypeCtorInfo_5_5 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word mercury__term_io__Cast_HeadVar1_3 = mercury__term_io__HeadVar__1_1;
    MR_Word mercury__term_io__Cast_HeadVar2_4 = mercury__term_io__HeadVar__2_2;

    {
      mercury__term_io__succeeded = mercury__term_io____Unify____read_term_1_0(mercury__term_io__TypeCtorInfo_5_5, mercury__term_io__Cast_HeadVar1_3, mercury__term_io__Cast_HeadVar2_4);
    }
    return mercury__term_io__succeeded;
  }
}

MR_bool MR_CALL 
mercury__term_io____Unify____read_term_1_0(
  MR_Word mercury__term_io__TypeInfo_for_T_15,
  MR_Word mercury__term_io__HeadVar__1_1,
  MR_Word mercury__term_io__HeadVar__2_2)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Integer mercury__term_io__CastX_13 = (MR_Integer) mercury__term_io__HeadVar__1_1;
    MR_Integer mercury__term_io__CastY_14 = (MR_Integer) mercury__term_io__HeadVar__2_2;

    mercury__term_io__succeeded = (mercury__term_io__CastX_13 == mercury__term_io__CastY_14);
    if (mercury__term_io__succeeded)
      mercury__term_io__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mercury__term_io__CastX_3 = (MR_Integer) mercury__term_io__HeadVar__1_1;
            MR_Integer mercury__term_io__CastY_4 = (MR_Integer) mercury__term_io__HeadVar__2_2;

            mercury__term_io__succeeded = (mercury__term_io__CastY_4 == mercury__term_io__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mercury__term_io__ArgX1_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__term_io__ArgY1_6;
            MR_Integer mercury__term_io__ArgX2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer mercury__term_io__ArgY2_8;

            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__term_io__succeeded)
              {
                mercury__term_io__ArgY1_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));
                mercury__term_io__ArgY2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
                mercury__term_io__succeeded = (strcmp(mercury__term_io__ArgX1_5, mercury__term_io__ArgY1_6) == 0);
                if (mercury__term_io__succeeded)
                  mercury__term_io__succeeded = (mercury__term_io__ArgX2_7 == mercury__term_io__ArgY2_8);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__term_io__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__term_io__ArgY1_10;
            MR_Word mercury__term_io__ArgX2_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__term_io__ArgY2_12;

            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__term_io__succeeded)
              {
                mercury__term_io__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));
                mercury__term_io__ArgY2_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
                {
                  mercury__term_io__succeeded = mercury__varset____Unify____varset_1_0(mercury__term_io__TypeInfo_for_T_15, mercury__term_io__ArgX1_9, mercury__term_io__ArgY1_10);
                }
                if (mercury__term_io__succeeded)
                  {
                    mercury__term_io__succeeded = mercury__term____Unify____term_1_0(mercury__term_io__TypeInfo_for_T_15, mercury__term_io__ArgX2_11, mercury__term_io__ArgY2_12);
                  }
              }
          }
          break;
      }
    return mercury__term_io__succeeded;
  }
}

void MR_CALL 
mercury__term_io____Compare____adjacent_to_graphic_token_0_0(
  MR_Word * mercury__term_io__HeadVar__1_1,
  MR_Word mercury__term_io__HeadVar__2_2,
  MR_Word mercury__term_io__HeadVar__3_3)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Integer mercury__term_io__Cast_HeadVar1_4 = (MR_Integer) mercury__term_io__HeadVar__2_2;
    MR_Integer mercury__term_io__Cast_HeadVar2_5 = (MR_Integer) mercury__term_io__HeadVar__3_3;

    mercury__term_io__succeeded = (mercury__term_io__Cast_HeadVar1_4 < mercury__term_io__Cast_HeadVar2_5);
    if (mercury__term_io__succeeded)
      *mercury__term_io__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__term_io__succeeded = (mercury__term_io__Cast_HeadVar1_4 == mercury__term_io__Cast_HeadVar2_5);
        if (mercury__term_io__succeeded)
          *mercury__term_io__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__term_io__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__term_io____Unify____adjacent_to_graphic_token_0_0(
  MR_Word mercury__term_io__HeadVar__2_1,
  MR_Word mercury__term_io__HeadVar__2_2)
{
  {
    MR_bool mercury__term_io__succeeded = (mercury__term_io__HeadVar__2_1 == mercury__term_io__HeadVar__2_2);

    return mercury__term_io__succeeded;
  }
}

MR_bool MR_CALL 
mercury__term_io__encode_escaped_char_2_p_1(
  MR_Char * mercury__term_io__Char_1,
  MR_String mercury__term_io__Str_2)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__Chars_14;
    MR_Word mercury__term_io__Var_20;
    MR_Char mercury__term_io__Var_21;

    {
      mercury__string__to_char_list_2_p_0(mercury__term_io__Str_2, &mercury__term_io__Chars_14);
    }
    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Chars_14)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__term_io__succeeded)
      {
        mercury__term_io__Var_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Chars_14, (MR_Integer) 0)));
        mercury__term_io__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Chars_14, (MR_Integer) 1)));
        if ((mercury__term_io__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__term_io__Char_1 = mercury__term_io__Var_21;
            mercury__term_io__succeeded = MR_TRUE;
          }
        else
          {
            MR_Char mercury__term_io__EscapedChar_15;
            MR_Word mercury__term_io__Var_18;

            mercury__term_io__succeeded = (mercury__term_io__Var_21 == (MR_Char) 92);
            if (mercury__term_io__succeeded)
              {
                mercury__term_io__EscapedChar_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_20, (MR_Integer) 0)));
                mercury__term_io__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_20, (MR_Integer) 1)));
                mercury__term_io__succeeded = (mercury__term_io__Var_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (mercury__term_io__succeeded)
                  switch (mercury__term_io__EscapedChar_15) {
                    default:
                      mercury__term_io__succeeded = MR_FALSE;
                      break;
                    case (MR_Char) 34:
                      {
                        *mercury__term_io__Char_1 = (MR_Char) 34;
                        mercury__term_io__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Char) 39:
                      {
                        *mercury__term_io__Char_1 = (MR_Char) 39;
                        mercury__term_io__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Char) 92:
                      {
                        *mercury__term_io__Char_1 = (MR_Char) 92;
                        mercury__term_io__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Char) 98:
                      {
                        *mercury__term_io__Char_1 = (MR_Char) 8;
                        mercury__term_io__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Char) 110:
                      {
                        *mercury__term_io__Char_1 = (MR_Char) 10;
                        mercury__term_io__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Char) 116:
                      {
                        *mercury__term_io__Char_1 = (MR_Char) 9;
                        mercury__term_io__succeeded = MR_TRUE;
                      }
                      break;
                  }
              }
          }
      }
    return mercury__term_io__succeeded;
  }
}

MR_bool MR_CALL 
mercury__term_io__encode_escaped_char_2_p_0(
  MR_Char mercury__term_io__Char_1,
  MR_String * mercury__term_io__Str_2)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Char mercury__term_io__EscapeChar_5;

    switch (mercury__term_io__Char_1) {
      default:
        mercury__term_io__succeeded = MR_FALSE;
        break;
      case (MR_Char) 8:
        {
          mercury__term_io__EscapeChar_5 = (MR_Char) 98;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 9:
        {
          mercury__term_io__EscapeChar_5 = (MR_Char) 116;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 10:
        {
          mercury__term_io__EscapeChar_5 = (MR_Char) 110;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 34:
        {
          mercury__term_io__EscapeChar_5 = (MR_Char) 34;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          mercury__term_io__EscapeChar_5 = (MR_Char) 39;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 92:
        {
          mercury__term_io__EscapeChar_5 = (MR_Char) 92;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
    }
    if (mercury__term_io__succeeded)
      {
        MR_Word mercury__term_io__Var_6;
        MR_Word mercury__term_io__Var_8;
        MR_Word mercury__term_io__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__term_io__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_io__Var_8, 0) = ((MR_Box) (MR_Word) (mercury__term_io__EscapeChar_5));
          MR_hl_field(MR_mktag(1), mercury__term_io__Var_8, 1) = ((MR_Box) (mercury__term_io__Var_9));
        }
        {
          mercury__term_io__Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_io__Var_6, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
          MR_hl_field(MR_mktag(1), mercury__term_io__Var_6, 1) = ((MR_Box) (mercury__term_io__Var_8));
        }
        {
          mercury__string__from_char_list_2_p_0(mercury__term_io__Var_6, mercury__term_io__Str_2);
        }
        mercury__term_io__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word mercury__term_io__Var_10;
        MR_Word mercury__term_io__Var_11;

        {
          mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(mercury__term_io__Char_1);
        }
        if (!(mercury__term_io__succeeded))
          {
            if ((((MR_Unsigned) (mercury__term_io__Char_1 - (MR_Integer) 32)) <= ((MR_Unsigned) (MR_Integer) 94)))
              if ((((mercury__term_io_scalar_common_5[0])[(((mercury__term_io__Char_1 - (MR_Integer) 32)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__term_io__Char_1 - (MR_Integer) 32)) & (MR_Integer) 31))))))
                {
                  mercury__term_io__succeeded = MR_TRUE;
                }
              else
                mercury__term_io__succeeded = MR_FALSE;
            else
              mercury__term_io__succeeded = MR_FALSE;
            if (!(mercury__term_io__succeeded))
              {
                MR_Integer mercury__term_io__Var_21;

{
#define MR_PROC_LABEL mercury__term_io__encode_escaped_char_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_1 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Var_21  = Int;
}
                mercury__term_io__succeeded = (mercury__term_io__Var_21 >= (MR_Integer) 128);
              }
          }
        if (mercury__term_io__succeeded)
          {
            mercury__term_io__Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__term_io__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_io__Var_10, 0) = ((MR_Box) (MR_Word) (mercury__term_io__Char_1));
              MR_hl_field(MR_mktag(1), mercury__term_io__Var_10, 1) = ((MR_Box) (mercury__term_io__Var_11));
            }
            {
              mercury__string__from_char_list_2_p_0(mercury__term_io__Var_10, mercury__term_io__Str_2);
            }
            mercury__term_io__succeeded = MR_TRUE;
          }
      }
    return mercury__term_io__succeeded;
  }
}

MR_bool MR_CALL 
mercury__term_io__is_mercury_punctuation_char_1_p_0(
  MR_Char mercury__term_io__HeadVar__1_1)
{
  {
    MR_bool mercury__term_io__succeeded;

    if ((((MR_Unsigned) (mercury__term_io__HeadVar__1_1 - (MR_Integer) 32)) <= ((MR_Unsigned) (MR_Integer) 94)))
      if ((((mercury__term_io_scalar_common_5[0])[(((mercury__term_io__HeadVar__1_1 - (MR_Integer) 32)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__term_io__HeadVar__1_1 - (MR_Integer) 32)) & (MR_Integer) 31))))))
        {
          mercury__term_io__succeeded = MR_TRUE;
        }
      else
        mercury__term_io__succeeded = MR_FALSE;
    else
      mercury__term_io__succeeded = MR_FALSE;
    return mercury__term_io__succeeded;
  }
}

MR_String MR_CALL 
mercury__term_io__integer_base_prefix_1_f_0(
  MR_Word mercury__term_io__HeadVar__1_1)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_String mercury__term_io__HeadVar__2_2 = ((&mercury__term_io_vector_common_6[40 + mercury__term_io__HeadVar__1_1]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;

    return mercury__term_io__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__term_io__integer_base_int_1_f_0(
  MR_Word mercury__term_io__HeadVar__1_1)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Integer mercury__term_io__HeadVar__2_2 = ((&mercury__term_io_vector_common_7[8 + mercury__term_io__HeadVar__1_1]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;

    return mercury__term_io__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__term_io__quote_atom_agt_4_p_0(
  MR_String mercury__term_io__S_5,
  MR_Word mercury__term_io__AdjacentToGraphicToken_6)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__TypeClassInfo_for_writer_13;
    MR_Word mercury__term_io__TypeClassInfo_for_writer_14;
    MR_Word mercury__term_io__Stream_8;
    MR_Box mercury__term_io__V_4_17;

{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_17  = (MR_Box) Stream;
}
    mercury__term_io__Stream_8 = (MR_Word) mercury__term_io__V_4_17;
    mercury__term_io__TypeClassInfo_for_writer_13 = (MR_Word) &mercury__term_io_scalar_common_4[0];
    mercury__term_io__TypeClassInfo_for_writer_14 = (MR_Word) &mercury__term_io_scalar_common_4[1];
    {
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__TypeClassInfo_for_writer_14, mercury__term_io__Stream_8, mercury__term_io__S_5, mercury__term_io__AdjacentToGraphicToken_6);
    }
  }
}

MR_String MR_CALL 
mercury__term_io__quoted_atom_1_f_0(
  MR_String mercury__term_io__S_3)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_String mercury__term_io__HeadVar__2_2;

    {
      mercury__term_io__HeadVar__2_2 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__term_io__S_3, (MR_Integer) 1);
    }
    return mercury__term_io__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__term_io__quote_atom_4_p_0(
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
  MR_Word mercury__term_io__TypeClassInfo_for_writer_13,
  MR_Box mercury__term_io__Stream_5,
  MR_String mercury__term_io__S_6,
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_8,
  MR_Box * mercury__term_io__STATE_VARIABLE_State_9)
{
  {
    MR_bool mercury__term_io__succeeded;

    {
      mercury__term_io__quote_atom_agt_5_p_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__Stream_5, mercury__term_io__S_6, (MR_Integer) 1, mercury__term_io__STATE_VARIABLE_State_0_8, mercury__term_io__STATE_VARIABLE_State_9);
    }
  }
}

void MR_CALL 
mercury__term_io__quote_atom_agt_5_p_0(
  MR_Word mercury__term_io__TypeClassInfo_for_writer_19,
  MR_Word mercury__term_io__TypeClassInfo_for_writer_20,
  MR_Box mercury__term_io__Stream_6,
  MR_String mercury__term_io__S_7,
  MR_Word mercury__term_io__AdjacentToGraphicToken_8,
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_11,
  MR_Box * mercury__term_io__STATE_VARIABLE_State_12)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__ShouldQuote_10;

    {
      MR_Integer mercury__term_io__lo_0;
      MR_Integer mercury__term_io__hi_1;
      MR_Integer mercury__term_io__mid_2;
      MR_Integer mercury__term_io__result_3;

      /* binary string simple lookup switch */
      mercury__term_io__lo_0 = (MR_Integer) 0;
      mercury__term_io__hi_1 = (MR_Integer) 3;
      do
        {
          mercury__term_io__mid_2 = (((mercury__term_io__lo_0 + mercury__term_io__hi_1)) / (MR_Integer) 2);
          mercury__term_io__result_3 = MR_strcmp(mercury__term_io__S_7, ((&mercury__term_io_vector_common_6[36 + mercury__term_io__mid_2]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0);
          if ((mercury__term_io__result_3 == (MR_Integer) 0))
            {
              mercury__term_io__succeeded = MR_TRUE;
              /* jump out of search loop */
              goto label_0;
            }
          else
          if ((mercury__term_io__result_3 < (MR_Integer) 0))
            mercury__term_io__hi_1 = (mercury__term_io__mid_2 - (MR_Integer) 1);
          else
            mercury__term_io__lo_0 = (mercury__term_io__mid_2 + (MR_Integer) 1);
        }
      while ((mercury__term_io__lo_0 <= mercury__term_io__hi_1));
      mercury__term_io__succeeded = MR_FALSE;
    label_0:;
    }
    if (!(mercury__term_io__succeeded))
      {
        {
          MR_Integer mercury__term_io__Var_26;
          MR_Char mercury__term_io__Var_27;
          MR_Char mercury__term_io__Var_30;
          MR_Integer mercury__term_io__V_7_38;

          {
            mercury__term_io__succeeded = mercury__term_io__all_match_loop__ho22_3_p_in__string_0(mercury__term_io__S_7, (MR_Integer) 0);
          }
          if (mercury__term_io__succeeded)
            {
              mercury__term_io__succeeded = (strcmp(mercury__term_io__S_7, (MR_String) "") == 0);
              mercury__term_io__succeeded = !(mercury__term_io__succeeded);
              if (mercury__term_io__succeeded)
                {
                  mercury__term_io__Var_26 = (MR_Integer) 0;
                  mercury__term_io__Var_27 = (MR_Char) 35;
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_7_38  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__term_io__Var_26 ;
	Length =  mercury__term_io__V_7_38 ;
		{

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
                  if (mercury__term_io__succeeded)
                    {
                      {
                        mercury__string__unsafe_index_3_p_0(mercury__term_io__S_7, mercury__term_io__Var_26, &mercury__term_io__Var_30);
                      }
                      mercury__term_io__succeeded = (mercury__term_io__Var_27 == mercury__term_io__Var_30);
                    }
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
                  if (mercury__term_io__succeeded)
                    mercury__term_io__succeeded = (mercury__term_io__AdjacentToGraphicToken_8 == (MR_Integer) 1);
                }
            }
        }
        if (!(mercury__term_io__succeeded))
          {
            MR_Char mercury__term_io__FirstChar_24;
            MR_Integer mercury__term_io__V_7_44;
            MR_Char mercury__term_io__V_3_48;

{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_7_44  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__term_io__V_7_44 ;
		{

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__term_io__succeeded)
              {
                {
                  mercury__string__unsafe_index_3_p_0(mercury__term_io__S_7, (MR_Integer) 0, &mercury__term_io__FirstChar_24);
                }
                {
                  mercury__term_io__succeeded = mercury__char__lower_upper_2_p_0(mercury__term_io__FirstChar_24, &mercury__term_io__V_3_48);
                }
                if (mercury__term_io__succeeded)
                  {
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_io__S_7 ;
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
	if (SUCCESS_INDICATOR) {
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
                  }
              }
          }
      }
    if (mercury__term_io__succeeded)
      mercury__term_io__ShouldQuote_10 = (MR_Integer) 0;
    else
      mercury__term_io__ShouldQuote_10 = (MR_Integer) 1;
    switch (mercury__term_io__ShouldQuote_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_19), mercury__term_io__Stream_6, ((MR_Box) (mercury__term_io__S_7)), mercury__term_io__STATE_VARIABLE_State_0_11, mercury__term_io__STATE_VARIABLE_State_12);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__term_io__STATE_VARIABLE_State_14_14;
          MR_Box mercury__term_io__STATE_VARIABLE_State_15_15;
          void MR_CALL (* mercury__term_io__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
          void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          {
            mercury__term_io__func_1(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_20), mercury__term_io__Stream_6, ((MR_Box) (MR_Word) ((MR_Char) 39)), mercury__term_io__STATE_VARIABLE_State_0_11, &mercury__term_io__STATE_VARIABLE_State_14_14);
          }
          {
            mercury__term_io__write_escaped_string_4_p_0(mercury__term_io__TypeClassInfo_for_writer_19, mercury__term_io__TypeClassInfo_for_writer_20, mercury__term_io__Stream_6, mercury__term_io__S_7, mercury__term_io__STATE_VARIABLE_State_14_14, &mercury__term_io__STATE_VARIABLE_State_15_15);
          }
          mercury__term_io__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_20), mercury__term_io__Stream_6, ((MR_Box) (MR_Word) ((MR_Char) 39)), mercury__term_io__STATE_VARIABLE_State_15_15, mercury__term_io__STATE_VARIABLE_State_12);
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__term_io__quote_atom_3_p_0(
  MR_String mercury__term_io__S_4)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__TypeClassInfo_for_writer_18;
    MR_Word mercury__term_io__TypeClassInfo_for_writer_19;
    MR_Word mercury__term_io__Stream_15;
    MR_Box mercury__term_io__V_4_22;

{
#define MR_PROC_LABEL mercury__term_io__quote_atom_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_22  = (MR_Box) Stream;
}
    mercury__term_io__Stream_15 = (MR_Word) mercury__term_io__V_4_22;
    mercury__term_io__TypeClassInfo_for_writer_18 = (MR_Word) &mercury__term_io_scalar_common_4[0];
    mercury__term_io__TypeClassInfo_for_writer_19 = (MR_Word) &mercury__term_io_scalar_common_4[1];
    {
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(mercury__term_io__TypeClassInfo_for_writer_18, mercury__term_io__TypeClassInfo_for_writer_19, mercury__term_io__Stream_15, mercury__term_io__S_4, (MR_Integer) 1);
    }
  }
}

void MR_CALL 
mercury__term_io__write_escaped_string_3_p_0(
  MR_String mercury__term_io__String_4)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__TypeClassInfo_for_writer_11;
    MR_Word mercury__term_io__TypeClassInfo_for_writer_12;
    MR_Word mercury__term_io__Stream_6;
    MR_Box mercury__term_io__V_4_15;

{
#define MR_PROC_LABEL mercury__term_io__write_escaped_string_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_15  = (MR_Box) Stream;
}
    mercury__term_io__Stream_6 = (MR_Word) mercury__term_io__V_4_15;
    mercury__term_io__TypeClassInfo_for_writer_11 = (MR_Word) &mercury__term_io_scalar_common_4[0];
    mercury__term_io__TypeClassInfo_for_writer_12 = (MR_Word) &mercury__term_io_scalar_common_4[1];
    {
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_11, mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__Stream_6, mercury__term_io__String_4);
    }
  }
}

void MR_CALL 
mercury__term_io__quote_string_4_p_0(
  MR_Word mercury__term_io__TypeClassInfo_for_writer_15,
  MR_Word mercury__term_io__TypeClassInfo_for_writer_16,
  MR_Box mercury__term_io__Stream_5,
  MR_String mercury__term_io__S_6,
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_8,
  MR_Box * mercury__term_io__STATE_VARIABLE_State_9)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Box mercury__term_io__STATE_VARIABLE_State_11_11;
    MR_Box mercury__term_io__STATE_VARIABLE_State_12_12;
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
    void MR_CALL (* mercury__term_io__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_16), mercury__term_io__Stream_5, ((MR_Box) (MR_Word) ((MR_Char) 34)), mercury__term_io__STATE_VARIABLE_State_0_8, &mercury__term_io__STATE_VARIABLE_State_11_11);
    }
    {
      mercury__term_io__write_escaped_string_4_p_0(mercury__term_io__TypeClassInfo_for_writer_15, mercury__term_io__TypeClassInfo_for_writer_16, mercury__term_io__Stream_5, mercury__term_io__S_6, mercury__term_io__STATE_VARIABLE_State_11_11, &mercury__term_io__STATE_VARIABLE_State_12_12);
    }
    mercury__term_io__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_io__func_1(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_16), mercury__term_io__Stream_5, ((MR_Box) (MR_Word) ((MR_Char) 34)), mercury__term_io__STATE_VARIABLE_State_12_12, mercury__term_io__STATE_VARIABLE_State_9);
    }
  }
}

void MR_CALL 
mercury__term_io__write_escaped_string_4_p_0(
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
  MR_Word mercury__term_io__TypeClassInfo_for_writer_13,
  MR_Box mercury__term_io__Stream_5,
  MR_String mercury__term_io__String_6,
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_8,
  MR_Box * mercury__term_io__STATE_VARIABLE_State_9)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Integer mercury__term_io__V_8_23;
    MR_Integer mercury__term_io__V_13_33;
    MR_Integer mercury__term_io__V_17_34;

{
#define MR_PROC_LABEL mercury__term_io__write_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_8_23  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__write_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_17_34  = Length;
}
    mercury__term_io__succeeded = (mercury__term_io__V_8_23 < mercury__term_io__V_17_34);
    if (mercury__term_io__succeeded)
      mercury__term_io__V_13_33 = mercury__term_io__V_8_23;
    else
      mercury__term_io__V_13_33 = mercury__term_io__V_17_34;
    {
      mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_57_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__Stream_5, mercury__term_io__String_6, (MR_Integer) 0, mercury__term_io__V_13_33, mercury__term_io__STATE_VARIABLE_State_0_8, mercury__term_io__STATE_VARIABLE_State_9);
    }
  }
}

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_57_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
  MR_Word mercury__term_io__Var_17,
  MR_Word mercury__term_io__Var_18,
  MR_Box mercury__term_io__Var_19,
  MR_String mercury__term_io__V_8_8,
  MR_Integer mercury__term_io__V_9_9,
  MR_Integer mercury__term_io__V_10_10,
  MR_Box mercury__term_io__V_14_11,
  MR_Box * mercury__term_io__V_15_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_io__succeeded = (mercury__term_io__V_9_9 < mercury__term_io__V_10_10);
        MR_Integer mercury__term_io__V_12_13;
        MR_Char mercury__term_io__V_13_14;

        if (mercury__term_io__succeeded)
          {
{
#define MR_PROC_LABEL mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_57_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__term_io__V_8_8 ;
	Index =  mercury__term_io__V_9_9 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_io__V_12_13  = NextIndex;
	 mercury__term_io__V_13_14  = Ch;
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__term_io__succeeded)
              mercury__term_io__succeeded = (mercury__term_io__V_12_13 <= mercury__term_io__V_10_10);
          }
        if (mercury__term_io__succeeded)
          {
            MR_Box mercury__term_io__V_16_15;

            {
              mercury__term_io__write_escaped_char_4_p_0(mercury__term_io__Var_17, mercury__term_io__Var_18, mercury__term_io__Var_19, mercury__term_io__V_13_14, mercury__term_io__V_14_11, &mercury__term_io__V_16_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__term_io__next_value_of_V_9_9 = mercury__term_io__V_12_13;
              MR_Box mercury__term_io__next_value_of_V_14_11 = mercury__term_io__V_16_15;

              mercury__term_io__V_14_11 = mercury__term_io__next_value_of_V_14_11;
              mercury__term_io__V_9_9 = mercury__term_io__next_value_of_V_9_9;
            }
            continue;
          }
        else
          *mercury__term_io__V_15_12 = mercury__term_io__V_14_11;
      }
      break;
    }
}

void MR_CALL 
mercury__term_io__quote_string_3_p_0(
  MR_String mercury__term_io__S_4)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__TypeClassInfo_for_writer_11;
    MR_Word mercury__term_io__TypeClassInfo_for_writer_12;
    MR_Word mercury__term_io__Stream_6;
    MR_Box mercury__term_io__V_4_15;
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_11_22;
    void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box mercury__term_io__conv3_STATE_VARIABLE_IO_8;

{
#define MR_PROC_LABEL mercury__term_io__quote_string_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_15  = (MR_Box) Stream;
}
    mercury__term_io__Stream_6 = (MR_Word) mercury__term_io__V_4_15;
    mercury__term_io__TypeClassInfo_for_writer_11 = (MR_Word) &mercury__term_io_scalar_common_4[0];
    mercury__term_io__TypeClassInfo_for_writer_12 = (MR_Word) &mercury__term_io_scalar_common_4[1];
    mercury__term_io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_12), ((MR_Box) (mercury__term_io__Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_11_22);
    }
    {
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_11, mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__Stream_6, mercury__term_io__S_4);
    }
    mercury__term_io__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_12), ((MR_Box) (mercury__term_io__Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_IO_8);
    }
  }
}

MR_bool MR_CALL 
mercury__term_io__string_is_escaped_char_2_p_1(
  MR_Char * mercury__term_io__Char_1,
  MR_String mercury__term_io__String_2)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__Chars_10;
    MR_Word mercury__term_io__Var_32;
    MR_Char mercury__term_io__Var_33;

    {
      mercury__string__to_char_list_2_p_0(mercury__term_io__String_2, &mercury__term_io__Chars_10);
    }
    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Chars_10)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__term_io__succeeded)
      {
        mercury__term_io__Var_33 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Chars_10, (MR_Integer) 0)));
        mercury__term_io__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Chars_10, (MR_Integer) 1)));
        if ((mercury__term_io__Var_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__term_io__Char_1 = mercury__term_io__Var_33;
            {
              mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(*mercury__term_io__Char_1);
            }
            if (!(mercury__term_io__succeeded))
              {
                if ((((MR_Unsigned) (*mercury__term_io__Char_1 - (MR_Integer) 32)) <= ((MR_Unsigned) (MR_Integer) 94)))
                  if ((((mercury__term_io_scalar_common_5[0])[(((*mercury__term_io__Char_1 - (MR_Integer) 32)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((*mercury__term_io__Char_1 - (MR_Integer) 32)) & (MR_Integer) 31))))))
                    {
                      mercury__term_io__succeeded = MR_TRUE;
                    }
                  else
                    mercury__term_io__succeeded = MR_FALSE;
                else
                  mercury__term_io__succeeded = MR_FALSE;
                if (!(mercury__term_io__succeeded))
                  {
                    MR_Integer mercury__term_io__Var_37;

{
#define MR_PROC_LABEL mercury__term_io__string_is_escaped_char_2_p_1

	MR_Char Character;
	MR_Integer Int;

	Character =  *mercury__term_io__Char_1 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Var_37  = Int;
}
                    mercury__term_io__succeeded = (mercury__term_io__Var_37 >= (MR_Integer) 128);
                  }
              }
            if (!(mercury__term_io__succeeded))
              switch (*mercury__term_io__Char_1) {
                default:
                  mercury__term_io__succeeded = MR_FALSE;
                  break;
                case (MR_Char) 8:
                  mercury__term_io__succeeded = MR_TRUE;
                  break;
                case (MR_Char) 9:
                  mercury__term_io__succeeded = MR_TRUE;
                  break;
                case (MR_Char) 10:
                  mercury__term_io__succeeded = MR_TRUE;
                  break;
                case (MR_Char) 34:
                  mercury__term_io__succeeded = MR_TRUE;
                  break;
                case (MR_Char) 39:
                  mercury__term_io__succeeded = MR_TRUE;
                  break;
                case (MR_Char) 92:
                  mercury__term_io__succeeded = MR_TRUE;
                  break;
              }
          }
        else
          {
            MR_Word mercury__term_io__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_32, (MR_Integer) 1)));
            MR_Char mercury__term_io__Var_35 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_32, (MR_Integer) 0)));

            mercury__term_io__succeeded = (mercury__term_io__Var_33 == (MR_Char) 92);
            if (mercury__term_io__succeeded)
              {
                if ((mercury__term_io__Var_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  switch (mercury__term_io__Var_35) {
                    default:
                      mercury__term_io__succeeded = MR_FALSE;
                      break;
                    case (MR_Char) 34:
                      {
                        *mercury__term_io__Char_1 = (MR_Char) 34;
                        mercury__term_io__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Char) 39:
                      {
                        *mercury__term_io__Char_1 = (MR_Char) 39;
                        mercury__term_io__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Char) 92:
                      {
                        *mercury__term_io__Char_1 = (MR_Char) 92;
                        mercury__term_io__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Char) 98:
                      {
                        *mercury__term_io__Char_1 = (MR_Char) 8;
                        mercury__term_io__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Char) 110:
                      {
                        *mercury__term_io__Char_1 = (MR_Char) 10;
                        mercury__term_io__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Char) 116:
                      {
                        *mercury__term_io__Char_1 = (MR_Char) 9;
                        mercury__term_io__succeeded = MR_TRUE;
                      }
                      break;
                  }
                else
                  {
                    MR_String mercury__term_io__NumString_17;
                    MR_Integer mercury__term_io__Int_18;
                    MR_Word mercury__term_io__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_34, (MR_Integer) 1)));
                    MR_Word mercury__term_io__Var_23;
                    MR_Integer mercury__term_io__Var_27;
                    MR_Char mercury__term_io__Char2_14 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_34, (MR_Integer) 0)));
                    MR_Char mercury__term_io__Char3_15;

                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Var_22)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__term_io__succeeded)
                      {
                        mercury__term_io__Char3_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_22, (MR_Integer) 0)));
                        mercury__term_io__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_22, (MR_Integer) 1)));
                        mercury__term_io__succeeded = (mercury__term_io__Var_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (mercury__term_io__succeeded)
                          {
                            {
                              mercury__string__from_char_list_2_p_0(mercury__term_io__Var_32, &mercury__term_io__NumString_17);
                            }
                            mercury__term_io__Var_27 = (MR_Integer) 8;
                            {
                              mercury__term_io__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__term_io__Var_27, mercury__term_io__NumString_17, &mercury__term_io__Int_18);
                            }
                            if (mercury__term_io__succeeded)
                              {
{
#define MR_PROC_LABEL mercury__term_io__string_is_escaped_char_2_p_1

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__term_io__Int_18 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__term_io__Char_1  = Character;
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
                              }
                          }
                      }
                  }
              }
          }
      }
    return mercury__term_io__succeeded;
  }
}

MR_String MR_CALL 
mercury__term_io__escaped_char_1_f_0(
  MR_Char mercury__term_io__Char_3)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_String mercury__term_io__String_4;

    {
      mercury__term_io__string_is_escaped_char_2_p_0(mercury__term_io__Char_3, &mercury__term_io__String_4);
    }
    return mercury__term_io__String_4;
  }
}

void MR_CALL 
mercury__term_io__write_escaped_char_4_p_0(
  MR_Word mercury__term_io__TypeClassInfo_for_writer_17,
  MR_Word mercury__term_io__TypeClassInfo_for_writer_18,
  MR_Box mercury__term_io__Stream_5,
  MR_Char mercury__term_io__Char_6,
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_9,
  MR_Box * mercury__term_io__STATE_VARIABLE_State_10)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Char mercury__term_io__QuoteChar_8;

    switch (mercury__term_io__Char_6) {
      default:
        mercury__term_io__succeeded = MR_FALSE;
        break;
      case (MR_Char) 8:
        {
          mercury__term_io__QuoteChar_8 = (MR_Char) 98;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 9:
        {
          mercury__term_io__QuoteChar_8 = (MR_Char) 116;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 10:
        {
          mercury__term_io__QuoteChar_8 = (MR_Char) 110;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 34:
        {
          mercury__term_io__QuoteChar_8 = (MR_Char) 34;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          mercury__term_io__QuoteChar_8 = (MR_Char) 39;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 92:
        {
          mercury__term_io__QuoteChar_8 = (MR_Char) 92;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
    }
    if (mercury__term_io__succeeded)
      {
        MR_Box mercury__term_io__STATE_VARIABLE_State_12_12;
        void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* mercury__term_io__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), mercury__term_io__Stream_5, ((MR_Box) (MR_Word) ((MR_Char) 92)), mercury__term_io__STATE_VARIABLE_State_0_9, &mercury__term_io__STATE_VARIABLE_State_12_12);
        }
        mercury__term_io__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_io__func_1(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), mercury__term_io__Stream_5, ((MR_Box) (MR_Word) (mercury__term_io__QuoteChar_8)), mercury__term_io__STATE_VARIABLE_State_12_12, mercury__term_io__STATE_VARIABLE_State_10);
        }
      }
    else
      {
        {
          mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(mercury__term_io__Char_6);
        }
        if (!(mercury__term_io__succeeded))
          {
            if ((((MR_Unsigned) (mercury__term_io__Char_6 - (MR_Integer) 32)) <= ((MR_Unsigned) (MR_Integer) 94)))
              if ((((mercury__term_io_scalar_common_5[0])[(((mercury__term_io__Char_6 - (MR_Integer) 32)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__term_io__Char_6 - (MR_Integer) 32)) & (MR_Integer) 31))))))
                {
                  mercury__term_io__succeeded = MR_TRUE;
                }
              else
                mercury__term_io__succeeded = MR_FALSE;
            else
              mercury__term_io__succeeded = MR_FALSE;
            if (!(mercury__term_io__succeeded))
              {
                MR_Integer mercury__term_io__Var_20;

{
#define MR_PROC_LABEL mercury__term_io__write_escaped_char_4_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_6 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Var_20  = Int;
}
                mercury__term_io__succeeded = (mercury__term_io__Var_20 >= (MR_Integer) 128);
              }
          }
        if (mercury__term_io__succeeded)
          {
            void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));

            {
              mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), mercury__term_io__Stream_5, ((MR_Box) (MR_Word) (mercury__term_io__Char_6)), mercury__term_io__STATE_VARIABLE_State_0_9, mercury__term_io__STATE_VARIABLE_State_10);
            }
          }
        else
          {
            MR_String mercury__term_io__Var_15;
            void MR_CALL (* mercury__term_io__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__term_io__Var_15 = mercury__term_io__mercury_escape_char_1_f_0(mercury__term_io__Char_6);
            }
            mercury__term_io__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__term_io__func_3(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_17), mercury__term_io__Stream_5, ((MR_Box) (mercury__term_io__Var_15)), mercury__term_io__STATE_VARIABLE_State_0_9, mercury__term_io__STATE_VARIABLE_State_10);
            }
          }
      }
  }
}

void MR_CALL 
mercury__term_io__write_escaped_char_3_p_0(
  MR_Char mercury__term_io__Char_4)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__TypeClassInfo_for_writer_11;
    MR_Word mercury__term_io__TypeClassInfo_for_writer_12;
    MR_Word mercury__term_io__Stream_6;
    MR_Box mercury__term_io__V_4_15;

{
#define MR_PROC_LABEL mercury__term_io__write_escaped_char_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_15  = (MR_Box) Stream;
}
    mercury__term_io__Stream_6 = (MR_Word) mercury__term_io__V_4_15;
    mercury__term_io__TypeClassInfo_for_writer_11 = (MR_Word) &mercury__term_io_scalar_common_4[0];
    mercury__term_io__TypeClassInfo_for_writer_12 = (MR_Word) &mercury__term_io_scalar_common_4[1];
    {
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_11, mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__Stream_6, mercury__term_io__Char_4);
    }
  }
}

MR_String MR_CALL 
mercury__term_io__quoted_char_1_f_0(
  MR_Char mercury__term_io__C_3)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_String mercury__term_io__HeadVar__2_2;
    MR_String mercury__term_io__Var_7;
    MR_String mercury__term_io__Var_10;

    {
      mercury__term_io__string_is_escaped_char_2_p_0(mercury__term_io__C_3, &mercury__term_io__Var_7);
    }
    {
      mercury__string__append_3_p_2(mercury__term_io__Var_7, (MR_String) "\'", &mercury__term_io__Var_10);
    }
    {
      mercury__string__append_3_p_2((MR_String) "\'", mercury__term_io__Var_10, &mercury__term_io__HeadVar__2_2);
    }
    return mercury__term_io__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__term_io__quote_char_4_p_0(
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
  MR_Word mercury__term_io__TypeClassInfo_for_writer_13,
  MR_Box mercury__term_io__Stream_5,
  MR_Char mercury__term_io__C_6,
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_8,
  MR_Box * mercury__term_io__STATE_VARIABLE_State_9)
{
  {
    MR_bool mercury__term_io__succeeded;

    {
      mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_p_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__Stream_5, mercury__term_io__C_6, mercury__term_io__STATE_VARIABLE_State_0_8, mercury__term_io__STATE_VARIABLE_State_9);
    }
  }
}

void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_p_0(
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
  MR_Box mercury__term_io__Stream_5,
  MR_Char mercury__term_io__C_6,
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_8,
  MR_Box * mercury__term_io__STATE_VARIABLE_State_9)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_String mercury__term_io__Var_10;
    MR_String mercury__term_io__Var_18;
    MR_String mercury__term_io__Var_21;
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      mercury__term_io__string_is_escaped_char_2_p_0(mercury__term_io__C_6, &mercury__term_io__Var_18);
    }
    {
      mercury__string__append_3_p_2(mercury__term_io__Var_18, (MR_String) "\'", &mercury__term_io__Var_21);
    }
    {
      mercury__string__append_3_p_2((MR_String) "\'", mercury__term_io__Var_21, &mercury__term_io__Var_10);
    }
    mercury__term_io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_12), mercury__term_io__Stream_5, ((MR_Box) (mercury__term_io__Var_10)), mercury__term_io__STATE_VARIABLE_State_0_8, mercury__term_io__STATE_VARIABLE_State_9);
    }
  }
}

void MR_CALL 
mercury__term_io__quote_char_3_p_0(
  MR_Char mercury__term_io__C_4)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__OutStream_6;
    MR_String mercury__term_io__Var_10;
    MR_Box mercury__term_io__V_4_14;
    MR_String mercury__term_io__Var_19;
    MR_String mercury__term_io__Var_22;

{
#define MR_PROC_LABEL mercury__term_io__quote_char_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_14  = (MR_Box) Stream;
}
    mercury__term_io__OutStream_6 = (MR_Word) mercury__term_io__V_4_14;
    {
      mercury__term_io__string_is_escaped_char_2_p_0(mercury__term_io__C_4, &mercury__term_io__Var_19);
    }
    {
      mercury__string__append_3_p_2(mercury__term_io__Var_19, (MR_String) "\'", &mercury__term_io__Var_22);
    }
    {
      mercury__string__append_3_p_2((MR_String) "\'", mercury__term_io__Var_22, &mercury__term_io__Var_10);
    }
    {
      mercury__io__write_string_4_p_0(mercury__term_io__OutStream_6, mercury__term_io__Var_10);
    }
  }
}

void MR_CALL 
mercury__term_io__string_is_escaped_char_2_p_0(
  MR_Char mercury__term_io__Char_1,
  MR_String * mercury__term_io__String_2)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Char mercury__term_io__QuoteChar_5;

    switch (mercury__term_io__Char_1) {
      default:
        mercury__term_io__succeeded = MR_FALSE;
        break;
      case (MR_Char) 8:
        {
          mercury__term_io__QuoteChar_5 = (MR_Char) 98;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 9:
        {
          mercury__term_io__QuoteChar_5 = (MR_Char) 116;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 10:
        {
          mercury__term_io__QuoteChar_5 = (MR_Char) 110;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 34:
        {
          mercury__term_io__QuoteChar_5 = (MR_Char) 34;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          mercury__term_io__QuoteChar_5 = (MR_Char) 39;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 92:
        {
          mercury__term_io__QuoteChar_5 = (MR_Char) 92;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
    }
    if (mercury__term_io__succeeded)
      {
        MR_String mercury__term_io__Var_7;
        MR_Word mercury__term_io__V_5_36;
        MR_Word mercury__term_io__V_6_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__term_io__V_5_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_io__V_5_36, 0) = ((MR_Box) (MR_Word) (mercury__term_io__QuoteChar_5));
          MR_hl_field(MR_mktag(1), mercury__term_io__V_5_36, 1) = ((MR_Box) (mercury__term_io__V_6_37));
        }
        {
          mercury__string__to_char_list_2_p_1(&mercury__term_io__Var_7, mercury__term_io__V_5_36);
        }
        {
          mercury__string__append_3_p_2((MR_String) "\\", mercury__term_io__Var_7, mercury__term_io__String_2);
        }
      }
    else
      {
        {
          mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(mercury__term_io__Char_1);
        }
        if (!(mercury__term_io__succeeded))
          {
            if ((((MR_Unsigned) (mercury__term_io__Char_1 - (MR_Integer) 32)) <= ((MR_Unsigned) (MR_Integer) 94)))
              if ((((mercury__term_io_scalar_common_5[0])[(((mercury__term_io__Char_1 - (MR_Integer) 32)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__term_io__Char_1 - (MR_Integer) 32)) & (MR_Integer) 31))))))
                {
                  mercury__term_io__succeeded = MR_TRUE;
                }
              else
                mercury__term_io__succeeded = MR_FALSE;
            else
              mercury__term_io__succeeded = MR_FALSE;
            if (!(mercury__term_io__succeeded))
              {
                MR_Integer mercury__term_io__Var_42;

{
#define MR_PROC_LABEL mercury__term_io__string_is_escaped_char_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_1 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Var_42  = Int;
}
                mercury__term_io__succeeded = (mercury__term_io__Var_42 >= (MR_Integer) 128);
              }
          }
        if (mercury__term_io__succeeded)
          {
            MR_Word mercury__term_io__V_5_50;
            MR_Word mercury__term_io__V_6_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__term_io__V_5_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_io__V_5_50, 0) = ((MR_Box) (MR_Word) (mercury__term_io__Char_1));
              MR_hl_field(MR_mktag(1), mercury__term_io__V_5_50, 1) = ((MR_Box) (mercury__term_io__V_6_51));
            }
            {
              mercury__string__to_char_list_2_p_1(mercury__term_io__String_2, mercury__term_io__V_5_50);
            }
          }
        else
          {
            *mercury__term_io__String_2 = mercury__term_io__mercury_escape_char_1_f_0(mercury__term_io__Char_1);
          }
      }
  }
}

void MR_CALL 
mercury__term_io__write_variable_with_op_table_6_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_19,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_18,
  MR_Word mercury__term_io__OutStream_7,
  MR_Box mercury__term_io__Ops_8,
  MR_Word mercury__term_io__Var_9,
  MR_Word mercury__term_io__VarSet_10)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__Var_12;
    MR_Integer mercury__term_io__Var_13;

    {
      mercury__term_io__write_variable_anon_vars_9_p_0(mercury__term_io__TypeInfo_for_T_19, mercury__term_io__TypeClassInfo_for_op_table_18, mercury__term_io__OutStream_7, mercury__term_io__Ops_8, mercury__term_io__Var_9, mercury__term_io__VarSet_10, &mercury__term_io__Var_12, (MR_Integer) 0, &mercury__term_io__Var_13);
    }
  }
}

void MR_CALL 
mercury__term_io__write_variable_with_op_table_5_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_16,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_15,
  MR_Box mercury__term_io__Ops_6,
  MR_Word mercury__term_io__Var_7,
  MR_Word mercury__term_io__VarSet_8)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__OutStream_10;
    MR_Box mercury__term_io__V_4_19;
    MR_Word mercury__term_io__Var_27;
    MR_Integer mercury__term_io__Var_28;

{
#define MR_PROC_LABEL mercury__term_io__write_variable_with_op_table_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_19  = (MR_Box) Stream;
}
    mercury__term_io__OutStream_10 = (MR_Word) mercury__term_io__V_4_19;
    {
      mercury__term_io__write_variable_anon_vars_9_p_0(mercury__term_io__TypeInfo_for_T_16, mercury__term_io__TypeClassInfo_for_op_table_15, mercury__term_io__OutStream_10, mercury__term_io__Ops_6, mercury__term_io__Var_7, mercury__term_io__VarSet_8, &mercury__term_io__Var_27, (MR_Integer) 0, &mercury__term_io__Var_28);
    }
  }
}

void MR_CALL 
mercury__term_io__write_variable_5_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_15,
  MR_Word mercury__term_io__OutStream_6,
  MR_Word mercury__term_io__Var_7,
  MR_Word mercury__term_io__VarSet_8)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__TypeClassInfo_for_op_table_16;
    MR_Word mercury__term_io__Var_27;
    MR_Integer mercury__term_io__Var_28;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__term_io__TypeClassInfo_for_op_table_16 = (MR_Word) &mercury__term_io_scalar_common_1[0];
    {
      mercury__term_io__write_variable_anon_vars_9_p_0(mercury__term_io__TypeInfo_for_T_15, mercury__term_io__TypeClassInfo_for_op_table_16, mercury__term_io__OutStream_6, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Var_7, mercury__term_io__VarSet_8, &mercury__term_io__Var_27, (MR_Integer) 0, &mercury__term_io__Var_28);
    }
  }
}

void MR_CALL 
mercury__term_io__write_variable_4_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_13,
  MR_Word mercury__term_io__Var_5,
  MR_Word mercury__term_io__VarSet_6)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__TypeClassInfo_for_op_table_26;
    MR_Word mercury__term_io__OutStream_8;
    MR_Box mercury__term_io__V_4_16;
    MR_Word mercury__term_io__Var_37;
    MR_Integer mercury__term_io__Var_38;

{
#define MR_PROC_LABEL mercury__term_io__write_variable_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_16  = (MR_Box) Stream;
}
    mercury__term_io__OutStream_8 = (MR_Word) mercury__term_io__V_4_16;
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__term_io__TypeClassInfo_for_op_table_26 = (MR_Word) &mercury__term_io_scalar_common_1[0];
    {
      mercury__term_io__write_variable_anon_vars_9_p_0(mercury__term_io__TypeInfo_for_T_13, mercury__term_io__TypeClassInfo_for_op_table_26, mercury__term_io__OutStream_8, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Var_5, mercury__term_io__VarSet_6, &mercury__term_io__Var_37, (MR_Integer) 0, &mercury__term_io__Var_38);
    }
  }
}

MR_String MR_CALL 
mercury__term_io__format_constant_1_f_0(
  MR_Word mercury__term_io__Const_3)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_String mercury__term_io__HeadVar__2_2;

    {
      mercury__term_io__HeadVar__2_2 = mercury__term_io__format_constant_agt_2_f_0(mercury__term_io__Const_3, (MR_Integer) 1);
    }
    return mercury__term_io__HeadVar__2_2;
  }
}

MR_String MR_CALL 
mercury__term_io__format_constant_agt_2_f_0(
  MR_Word mercury__term_io__Const_4,
  MR_Word mercury__term_io__AdjacentToGraphicToken_5)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_String mercury__term_io__Str_6;

    switch (MR_tag((MR_Word) mercury__term_io__Const_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String mercury__term_io__A_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Const_4, (MR_Integer) 0)));

          {
            mercury__term_io__Str_6 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__term_io__A_12, mercury__term_io__AdjacentToGraphicToken_5);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__term_io__Base_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Const_4, (MR_Integer) 0)));
          MR_Word mercury__term_io__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Const_4, (MR_Integer) 1)));
          MR_Word mercury__term_io__Signedness_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Const_4, (MR_Integer) 2)));
          MR_Word mercury__term_io__Size_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Const_4, (MR_Integer) 3)));
          MR_String mercury__term_io__Var_16 = ((&mercury__term_io_vector_common_6[22 + mercury__term_io__Base_7]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;
          MR_String mercury__term_io__Var_17;
          MR_String mercury__term_io__Var_18;
          MR_Integer mercury__term_io__Var_19 = ((&mercury__term_io_vector_common_7[4 + mercury__term_io__Base_7]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;
          MR_String mercury__term_io__Var_20;

          {
            mercury__term_io__Var_18 = mercury__integer__to_base_string_2_f_0(mercury__term_io__I_8, mercury__term_io__Var_19);
          }
          switch (mercury__term_io__Signedness_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__term_io__Var_20 = ((&mercury__term_io_vector_common_6[26 + mercury__term_io__Size_10]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__term_io__Var_20 = ((&mercury__term_io_vector_common_6[31 + mercury__term_io__Size_10]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;
              }
              break;
          }
          {
            mercury__string__append_3_p_2(mercury__term_io__Var_18, mercury__term_io__Var_20, &mercury__term_io__Var_17);
          }
          {
            mercury__string__append_3_p_2(mercury__term_io__Var_16, mercury__term_io__Var_17, &mercury__term_io__Str_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String mercury__term_io__S_13 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_io__Const_4, (MR_Integer) 0)));

          {
            mercury__term_io__Str_6 = mercury__term_io__quoted_string_1_f_0(mercury__term_io__S_13);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_io__Const_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Float mercury__term_io__F_11 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term_io__Const_4, (MR_Integer) 1)));

{
#define MR_PROC_LABEL mercury__term_io__format_constant_agt_2_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__term_io__F_11 ;
		{
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Str_6  = Str;
}
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String mercury__term_io__N_14 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_io__Const_4, (MR_Integer) 1)));

              {
                mercury__string__append_3_p_2((MR_String) "\044", mercury__term_io__N_14, &mercury__term_io__Str_6);
              }
            }
            break;
        }
        break;
    }
    return mercury__term_io__Str_6;
  }
}

MR_String MR_CALL 
mercury__term_io__quoted_atom_agt_2_f_0(
  MR_String mercury__term_io__S_4,
  MR_Word mercury__term_io__AdjacentToGraphicToken_5)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_String mercury__term_io__String_6;
    MR_Word mercury__term_io__ShouldQuote_7;

    {
      MR_Integer mercury__term_io__lo_0;
      MR_Integer mercury__term_io__hi_1;
      MR_Integer mercury__term_io__mid_2;
      MR_Integer mercury__term_io__result_3;

      /* binary string simple lookup switch */
      mercury__term_io__lo_0 = (MR_Integer) 0;
      mercury__term_io__hi_1 = (MR_Integer) 3;
      do
        {
          mercury__term_io__mid_2 = (((mercury__term_io__lo_0 + mercury__term_io__hi_1)) / (MR_Integer) 2);
          mercury__term_io__result_3 = MR_strcmp(mercury__term_io__S_4, ((&mercury__term_io_vector_common_6[18 + mercury__term_io__mid_2]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0);
          if ((mercury__term_io__result_3 == (MR_Integer) 0))
            {
              mercury__term_io__succeeded = MR_TRUE;
              /* jump out of search loop */
              goto label_0;
            }
          else
          if ((mercury__term_io__result_3 < (MR_Integer) 0))
            mercury__term_io__hi_1 = (mercury__term_io__mid_2 - (MR_Integer) 1);
          else
            mercury__term_io__lo_0 = (mercury__term_io__mid_2 + (MR_Integer) 1);
        }
      while ((mercury__term_io__lo_0 <= mercury__term_io__hi_1));
      mercury__term_io__succeeded = MR_FALSE;
    label_0:;
    }
    if (!(mercury__term_io__succeeded))
      {
        {
          MR_Integer mercury__term_io__Var_20;
          MR_Char mercury__term_io__Var_21;
          MR_Char mercury__term_io__Var_24;
          MR_Integer mercury__term_io__V_7_32;

          {
            mercury__term_io__succeeded = mercury__term_io__all_match_loop__ho22_3_p_in__string_0(mercury__term_io__S_4, (MR_Integer) 0);
          }
          if (mercury__term_io__succeeded)
            {
              mercury__term_io__succeeded = (strcmp(mercury__term_io__S_4, (MR_String) "") == 0);
              mercury__term_io__succeeded = !(mercury__term_io__succeeded);
              if (mercury__term_io__succeeded)
                {
                  mercury__term_io__Var_20 = (MR_Integer) 0;
                  mercury__term_io__Var_21 = (MR_Char) 35;
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_7_32  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__term_io__Var_20 ;
	Length =  mercury__term_io__V_7_32 ;
		{

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
                  if (mercury__term_io__succeeded)
                    {
                      {
                        mercury__string__unsafe_index_3_p_0(mercury__term_io__S_4, mercury__term_io__Var_20, &mercury__term_io__Var_24);
                      }
                      mercury__term_io__succeeded = (mercury__term_io__Var_21 == mercury__term_io__Var_24);
                    }
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
                  if (mercury__term_io__succeeded)
                    mercury__term_io__succeeded = (mercury__term_io__AdjacentToGraphicToken_5 == (MR_Integer) 1);
                }
            }
        }
        if (!(mercury__term_io__succeeded))
          {
            MR_Char mercury__term_io__FirstChar_18;
            MR_Integer mercury__term_io__V_7_38;
            MR_Char mercury__term_io__V_3_42;

{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_7_38  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__term_io__V_7_38 ;
		{

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__term_io__succeeded)
              {
                {
                  mercury__string__unsafe_index_3_p_0(mercury__term_io__S_4, (MR_Integer) 0, &mercury__term_io__FirstChar_18);
                }
                {
                  mercury__term_io__succeeded = mercury__char__lower_upper_2_p_0(mercury__term_io__FirstChar_18, &mercury__term_io__V_3_42);
                }
                if (mercury__term_io__succeeded)
                  {
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_io__S_4 ;
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
	if (SUCCESS_INDICATOR) {
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
                  }
              }
          }
      }
    if (mercury__term_io__succeeded)
      mercury__term_io__ShouldQuote_7 = (MR_Integer) 0;
    else
      mercury__term_io__ShouldQuote_7 = (MR_Integer) 1;
    switch (mercury__term_io__ShouldQuote_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__term_io__String_6 = mercury__term_io__S_4;
        break;
      case (MR_Integer) 1:
        {
          MR_String mercury__term_io__ES_8;
          MR_Word mercury__term_io__Var_9;
          MR_Word mercury__term_io__Var_11;
          MR_Word mercury__term_io__Var_12;
          MR_Word mercury__term_io__Var_14;

          {
            mercury__term_io__ES_8 = mercury__term_io__escaped_string_1_f_0(mercury__term_io__S_4);
          }
          mercury__term_io__Var_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          mercury__term_io__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_io_scalar_common_1[3]);
          {
            mercury__term_io__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__term_io__Var_11, 0) = ((MR_Box) (mercury__term_io__ES_8));
            MR_hl_field(MR_mktag(1), mercury__term_io__Var_11, 1) = ((MR_Box) (mercury__term_io__Var_12));
          }
          {
            mercury__term_io__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__term_io__Var_9, 0) = ((MR_Box) ((MR_String) "\'"));
            MR_hl_field(MR_mktag(1), mercury__term_io__Var_9, 1) = ((MR_Box) (mercury__term_io__Var_11));
          }
          {
            mercury__term_io__String_6 = mercury__string__append_list_1_f_0(mercury__term_io__Var_9);
          }
        }
        break;
    }
    return mercury__term_io__String_6;
  }
}

MR_String MR_CALL 
mercury__term_io__quoted_string_1_f_0(
  MR_String mercury__term_io__S_3)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_String mercury__term_io__HeadVar__2_2;
    MR_Word mercury__term_io__Var_4;
    MR_Word mercury__term_io__Var_6;
    MR_String mercury__term_io__Var_7;
    MR_Word mercury__term_io__Var_8;
    MR_Word mercury__term_io__Var_10;

    {
      mercury__term_io__Var_7 = mercury__term_io__escaped_string_1_f_0(mercury__term_io__S_3);
    }
    mercury__term_io__Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__term_io__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_io_scalar_common_1[2]);
    {
      mercury__term_io__Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__term_io__Var_6, 0) = ((MR_Box) (mercury__term_io__Var_7));
      MR_hl_field(MR_mktag(1), mercury__term_io__Var_6, 1) = ((MR_Box) (mercury__term_io__Var_8));
    }
    {
      mercury__term_io__Var_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__term_io__Var_4, 0) = ((MR_Box) ((MR_String) "\""));
      MR_hl_field(MR_mktag(1), mercury__term_io__Var_4, 1) = ((MR_Box) (mercury__term_io__Var_6));
    }
    {
      mercury__term_io__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__term_io__Var_4);
    }
    return mercury__term_io__HeadVar__2_2;
  }
}

MR_String MR_CALL 
mercury__term_io__escaped_string_1_f_0(
  MR_String mercury__term_io__String_3)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_String mercury__term_io__HeadVar__2_2;
    MR_Word mercury__term_io__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mercury__term_io__Var_4;
    MR_Word mercury__term_io__Var_5;
    MR_Word mercury__term_io__Var_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Integer mercury__term_io__V_8_38;
    MR_Integer mercury__term_io__V_13_52;
    MR_Integer mercury__term_io__V_17_53;

{
#define MR_PROC_LABEL mercury__term_io__escaped_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_8_38  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__escaped_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_17_53  = Length;
}
    mercury__term_io__succeeded = (mercury__term_io__V_8_38 < mercury__term_io__V_17_53);
    if (mercury__term_io__succeeded)
      mercury__term_io__V_13_52 = mercury__term_io__V_8_38;
    else
      mercury__term_io__V_13_52 = mercury__term_io__V_17_53;
    {
      mercury__term_io__foldl_between_2__ho30_6_p_in__string_0(mercury__term_io__String_3, (MR_Integer) 0, mercury__term_io__V_13_52, mercury__term_io__Var_7, &mercury__term_io__Var_5);
    }
    {
      mercury__list__reverse_2_p_0(mercury__term_io__TypeCtorInfo_8_8, mercury__term_io__Var_5, &mercury__term_io__Var_4);
    }
    {
      mercury__term_io__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__term_io__Var_4);
    }
    return mercury__term_io__HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__term_io__foldl_between_2__ho30_6_p_in__string_0(
  MR_String mercury__term_io__V_8_8,
  MR_Integer mercury__term_io__V_9_9,
  MR_Integer mercury__term_io__V_10_10,
  MR_Word mercury__term_io__V_14_11,
  MR_Word * mercury__term_io__V_15_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_io__succeeded = (mercury__term_io__V_9_9 < mercury__term_io__V_10_10);
        MR_Integer mercury__term_io__V_12_13;
        MR_Char mercury__term_io__V_13_14;

        if (mercury__term_io__succeeded)
          {
{
#define MR_PROC_LABEL mercury__term_io__foldl_between_2__ho30_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__term_io__V_8_8 ;
	Index =  mercury__term_io__V_9_9 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_io__V_12_13  = NextIndex;
	 mercury__term_io__V_13_14  = Ch;
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__term_io__succeeded)
              mercury__term_io__succeeded = (mercury__term_io__V_12_13 <= mercury__term_io__V_10_10);
          }
        if (mercury__term_io__succeeded)
          {
            MR_Word mercury__term_io__V_16_15;

            {
              mercury__term_io__V_16_15 = mercury__term_io__add_escaped_char_2_f_0(mercury__term_io__V_13_14, mercury__term_io__V_14_11);
            }
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__term_io__next_value_of_V_9_9 = mercury__term_io__V_12_13;
              MR_Word mercury__term_io__next_value_of_V_14_11 = mercury__term_io__V_16_15;

              mercury__term_io__V_14_11 = mercury__term_io__next_value_of_V_14_11;
              mercury__term_io__V_9_9 = mercury__term_io__next_value_of_V_9_9;
            }
            continue;
          }
        else
          *mercury__term_io__V_15_12 = mercury__term_io__V_14_11;
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__term_io__add_escaped_char_2_f_0(
  MR_Char mercury__term_io__Char_4,
  MR_Word mercury__term_io__Strings0_5)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__Strings_6;
    MR_Char mercury__term_io__QuoteChar_7;

    switch (mercury__term_io__Char_4) {
      default:
        mercury__term_io__succeeded = MR_FALSE;
        break;
      case (MR_Char) 8:
        {
          mercury__term_io__QuoteChar_7 = (MR_Char) 98;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 9:
        {
          mercury__term_io__QuoteChar_7 = (MR_Char) 116;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 10:
        {
          mercury__term_io__QuoteChar_7 = (MR_Char) 110;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 34:
        {
          mercury__term_io__QuoteChar_7 = (MR_Char) 34;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          mercury__term_io__QuoteChar_7 = (MR_Char) 39;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 92:
        {
          mercury__term_io__QuoteChar_7 = (MR_Char) 92;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
    }
    if (mercury__term_io__succeeded)
      {
        MR_String mercury__term_io__Var_8;
        MR_Word mercury__term_io__Var_9;
        MR_Word mercury__term_io__Var_11;
        MR_Word mercury__term_io__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__term_io__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_io__Var_11, 0) = ((MR_Box) (MR_Word) (mercury__term_io__QuoteChar_7));
          MR_hl_field(MR_mktag(1), mercury__term_io__Var_11, 1) = ((MR_Box) (mercury__term_io__Var_12));
        }
        {
          mercury__term_io__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_io__Var_9, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
          MR_hl_field(MR_mktag(1), mercury__term_io__Var_9, 1) = ((MR_Box) (mercury__term_io__Var_11));
        }
        {
          mercury__string__from_char_list_2_p_0(mercury__term_io__Var_9, &mercury__term_io__Var_8);
        }
        {
          mercury__term_io__Strings_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 0) = ((MR_Box) (mercury__term_io__Var_8));
          MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 1) = ((MR_Box) (mercury__term_io__Strings0_5));
        }
      }
    else
      {
        {
          mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(mercury__term_io__Char_4);
        }
        if (!(mercury__term_io__succeeded))
          {
            if ((((MR_Unsigned) (mercury__term_io__Char_4 - (MR_Integer) 32)) <= ((MR_Unsigned) (MR_Integer) 94)))
              if ((((mercury__term_io_scalar_common_5[0])[(((mercury__term_io__Char_4 - (MR_Integer) 32)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__term_io__Char_4 - (MR_Integer) 32)) & (MR_Integer) 31))))))
                {
                  mercury__term_io__succeeded = MR_TRUE;
                }
              else
                mercury__term_io__succeeded = MR_FALSE;
            else
              mercury__term_io__succeeded = MR_FALSE;
            if (!(mercury__term_io__succeeded))
              {
                MR_Integer mercury__term_io__Var_18;

{
#define MR_PROC_LABEL mercury__term_io__add_escaped_char_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_4 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Var_18  = Int;
}
                mercury__term_io__succeeded = (mercury__term_io__Var_18 >= (MR_Integer) 128);
              }
          }
        if (mercury__term_io__succeeded)
          {
            MR_String mercury__term_io__Var_13;
            MR_Word mercury__term_io__V_5_26;
            MR_Word mercury__term_io__V_6_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__term_io__V_5_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_io__V_5_26, 0) = ((MR_Box) (MR_Word) (mercury__term_io__Char_4));
              MR_hl_field(MR_mktag(1), mercury__term_io__V_5_26, 1) = ((MR_Box) (mercury__term_io__V_6_27));
            }
            {
              mercury__string__to_char_list_2_p_1(&mercury__term_io__Var_13, mercury__term_io__V_5_26);
            }
            {
              mercury__term_io__Strings_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 0) = ((MR_Box) (mercury__term_io__Var_13));
              MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 1) = ((MR_Box) (mercury__term_io__Strings0_5));
            }
          }
        else
          {
            MR_String mercury__term_io__Var_14;

            {
              mercury__term_io__Var_14 = mercury__term_io__mercury_escape_char_1_f_0(mercury__term_io__Char_4);
            }
            {
              mercury__term_io__Strings_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 0) = ((MR_Box) (mercury__term_io__Var_14));
              MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 1) = ((MR_Box) (mercury__term_io__Strings0_5));
            }
          }
      }
    return mercury__term_io__Strings_6;
  }
}

void MR_CALL 
mercury__term_io__write_constant_3_p_0(
  MR_Word mercury__term_io__Const_4)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__OutStream_6;
    MR_Box mercury__term_io__V_4_13;

{
#define MR_PROC_LABEL mercury__term_io__write_constant_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_13  = (MR_Box) Stream;
}
    mercury__term_io__OutStream_6 = (MR_Word) mercury__term_io__V_4_13;
    {
      mercury__term_io__write_constant_5_p_0(mercury__term_io__OutStream_6, mercury__term_io__Const_4, (MR_Integer) 1);
    }
  }
}

void MR_CALL 
mercury__term_io__write_term_nl_with_op_table_6_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_18,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_17,
  MR_Word mercury__term_io__OutStream_7,
  MR_Box mercury__term_io__Ops_8,
  MR_Word mercury__term_io__VarSet_9,
  MR_Word mercury__term_io__Term_10)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Integer mercury__term_io__Var_42;
    MR_Integer mercury__term_io__Var_46;
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__term_io__conv1_Var_46;
    MR_Word mercury__term_io__Var_26;
    MR_Integer mercury__term_io__Var_27;

    {
      mercury__term_io__conv1_Var_46 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_17), mercury__term_io__Ops_8);
    }
    mercury__term_io__Var_46 = ((MR_Integer) mercury__term_io__conv1_Var_46);
    mercury__term_io__Var_42 = (mercury__term_io__Var_46 + (MR_Integer) 1);
    {
      mercury__term_io__write_term_prio_anon_vars_10_p_0(mercury__term_io__TypeInfo_for_T_18, mercury__term_io__TypeClassInfo_for_op_table_17, mercury__term_io__OutStream_7, mercury__term_io__Ops_8, mercury__term_io__Term_10, mercury__term_io__Var_42, mercury__term_io__VarSet_9, &mercury__term_io__Var_26, (MR_Integer) 0, &mercury__term_io__Var_27);
    }
    {
      mercury__io__write_string_4_p_0(mercury__term_io__OutStream_7, (MR_String) ".\n");
    }
  }
}

void MR_CALL 
mercury__term_io__write_term_nl_with_op_table_5_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_16,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_15,
  MR_Box mercury__term_io__Ops_6,
  MR_Word mercury__term_io__VarSet_7,
  MR_Word mercury__term_io__Term_8)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__OutStream_10;
    MR_Box mercury__term_io__V_4_19;
    MR_Integer mercury__term_io__Var_53;
    MR_Integer mercury__term_io__Var_57;
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box);
    MR_Box mercury__term_io__conv1_Var_57;
    MR_Word mercury__term_io__Var_37;
    MR_Integer mercury__term_io__Var_38;

{
#define MR_PROC_LABEL mercury__term_io__write_term_nl_with_op_table_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_19  = (MR_Box) Stream;
}
    mercury__term_io__OutStream_10 = (MR_Word) mercury__term_io__V_4_19;
    mercury__term_io__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_15, (MR_Integer) 0)), (MR_Integer) 12)));
    {
      mercury__term_io__conv1_Var_57 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_15), mercury__term_io__Ops_6);
    }
    mercury__term_io__Var_57 = ((MR_Integer) mercury__term_io__conv1_Var_57);
    mercury__term_io__Var_53 = (mercury__term_io__Var_57 + (MR_Integer) 1);
    {
      mercury__term_io__write_term_prio_anon_vars_10_p_0(mercury__term_io__TypeInfo_for_T_16, mercury__term_io__TypeClassInfo_for_op_table_15, mercury__term_io__OutStream_10, mercury__term_io__Ops_6, mercury__term_io__Term_8, mercury__term_io__Var_53, mercury__term_io__VarSet_7, &mercury__term_io__Var_37, (MR_Integer) 0, &mercury__term_io__Var_38);
    }
    {
      mercury__io__write_string_4_p_0(mercury__term_io__OutStream_10, (MR_String) ".\n");
    }
  }
}

void MR_CALL 
mercury__term_io__write_term_nl_4_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_13,
  MR_Word mercury__term_io__VarSet_5,
  MR_Word mercury__term_io__Term_6)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__OutStream_8;
    MR_Box mercury__term_io__V_4_16;

{
#define MR_PROC_LABEL mercury__term_io__write_term_nl_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_16  = (MR_Box) Stream;
}
    mercury__term_io__OutStream_8 = (MR_Word) mercury__term_io__V_4_16;
    {
      mercury__term_io__write_term_nl_5_p_0(mercury__term_io__TypeInfo_for_T_13, mercury__term_io__OutStream_8, mercury__term_io__VarSet_5, mercury__term_io__Term_6);
    }
  }
}

void MR_CALL 
mercury__term_io__write_term_nl_5_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_15,
  MR_Word mercury__term_io__OutStream_6,
  MR_Word mercury__term_io__VarSet_7,
  MR_Word mercury__term_io__Term_8)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__TypeClassInfo_for_op_table_16;
    MR_Integer mercury__term_io__Var_53;
    MR_Integer mercury__term_io__Var_57;
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box);
    MR_Box mercury__term_io__conv1_Var_57;
    MR_Word mercury__term_io__Var_37;
    MR_Integer mercury__term_io__Var_38;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__term_io__TypeClassInfo_for_op_table_16 = (MR_Word) &mercury__term_io_scalar_common_1[0];
    mercury__term_io__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 12)));
    {
      mercury__term_io__conv1_Var_57 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_16), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__term_io__Var_57 = ((MR_Integer) mercury__term_io__conv1_Var_57);
    mercury__term_io__Var_53 = (mercury__term_io__Var_57 + (MR_Integer) 1);
    {
      mercury__term_io__write_term_prio_anon_vars_10_p_0(mercury__term_io__TypeInfo_for_T_15, mercury__term_io__TypeClassInfo_for_op_table_16, mercury__term_io__OutStream_6, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Term_8, mercury__term_io__Var_53, mercury__term_io__VarSet_7, &mercury__term_io__Var_37, (MR_Integer) 0, &mercury__term_io__Var_38);
    }
    {
      mercury__io__write_string_4_p_0(mercury__term_io__OutStream_6, (MR_String) ".\n");
    }
  }
}

void MR_CALL 
mercury__term_io__write_term_with_op_table_6_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_19,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_18,
  MR_Word mercury__term_io__OutStream_7,
  MR_Box mercury__term_io__Ops_8,
  MR_Word mercury__term_io__VarSet_9,
  MR_Word mercury__term_io__Term_10)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Integer mercury__term_io__Var_32;
    MR_Integer mercury__term_io__Var_36;
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_18, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__term_io__conv1_Var_36;
    MR_Word mercury__term_io__Var_12;
    MR_Integer mercury__term_io__Var_13;

    {
      mercury__term_io__conv1_Var_36 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_18), mercury__term_io__Ops_8);
    }
    mercury__term_io__Var_36 = ((MR_Integer) mercury__term_io__conv1_Var_36);
    mercury__term_io__Var_32 = (mercury__term_io__Var_36 + (MR_Integer) 1);
    {
      mercury__term_io__write_term_prio_anon_vars_10_p_0(mercury__term_io__TypeInfo_for_T_19, mercury__term_io__TypeClassInfo_for_op_table_18, mercury__term_io__OutStream_7, mercury__term_io__Ops_8, mercury__term_io__Term_10, mercury__term_io__Var_32, mercury__term_io__VarSet_9, &mercury__term_io__Var_12, (MR_Integer) 0, &mercury__term_io__Var_13);
    }
  }
}

void MR_CALL 
mercury__term_io__write_term_with_op_table_5_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_16,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_15,
  MR_Box mercury__term_io__Ops_6,
  MR_Word mercury__term_io__VarSet_7,
  MR_Word mercury__term_io__Term_8)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__OutStream_10;
    MR_Box mercury__term_io__V_4_19;
    MR_Integer mercury__term_io__Var_43;
    MR_Integer mercury__term_io__Var_47;
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box);
    MR_Box mercury__term_io__conv1_Var_47;
    MR_Word mercury__term_io__Var_27;
    MR_Integer mercury__term_io__Var_28;

{
#define MR_PROC_LABEL mercury__term_io__write_term_with_op_table_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_19  = (MR_Box) Stream;
}
    mercury__term_io__OutStream_10 = (MR_Word) mercury__term_io__V_4_19;
    mercury__term_io__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_15, (MR_Integer) 0)), (MR_Integer) 12)));
    {
      mercury__term_io__conv1_Var_47 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_15), mercury__term_io__Ops_6);
    }
    mercury__term_io__Var_47 = ((MR_Integer) mercury__term_io__conv1_Var_47);
    mercury__term_io__Var_43 = (mercury__term_io__Var_47 + (MR_Integer) 1);
    {
      mercury__term_io__write_term_prio_anon_vars_10_p_0(mercury__term_io__TypeInfo_for_T_16, mercury__term_io__TypeClassInfo_for_op_table_15, mercury__term_io__OutStream_10, mercury__term_io__Ops_6, mercury__term_io__Term_8, mercury__term_io__Var_43, mercury__term_io__VarSet_7, &mercury__term_io__Var_27, (MR_Integer) 0, &mercury__term_io__Var_28);
    }
  }
}

void MR_CALL 
mercury__term_io__write_term_4_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_13,
  MR_Word mercury__term_io__VarSet_5,
  MR_Word mercury__term_io__Term_6)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__OutStream_8;
    MR_Box mercury__term_io__V_4_16;

{
#define MR_PROC_LABEL mercury__term_io__write_term_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_16  = (MR_Box) Stream;
}
    mercury__term_io__OutStream_8 = (MR_Word) mercury__term_io__V_4_16;
    {
      mercury__term_io__write_term_5_p_0(mercury__term_io__TypeInfo_for_T_13, mercury__term_io__OutStream_8, mercury__term_io__VarSet_5, mercury__term_io__Term_6);
    }
  }
}

void MR_CALL 
mercury__term_io__write_term_5_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_15,
  MR_Word mercury__term_io__OutStream_6,
  MR_Word mercury__term_io__VarSet_7,
  MR_Word mercury__term_io__Term_8)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__TypeClassInfo_for_op_table_16;
    MR_Integer mercury__term_io__Var_43;
    MR_Integer mercury__term_io__Var_47;
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box);
    MR_Box mercury__term_io__conv1_Var_47;
    MR_Word mercury__term_io__Var_27;
    MR_Integer mercury__term_io__Var_28;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__term_io__TypeClassInfo_for_op_table_16 = (MR_Word) &mercury__term_io_scalar_common_1[0];
    mercury__term_io__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 12)));
    {
      mercury__term_io__conv1_Var_47 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_16), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__term_io__Var_47 = ((MR_Integer) mercury__term_io__conv1_Var_47);
    mercury__term_io__Var_43 = (mercury__term_io__Var_47 + (MR_Integer) 1);
    {
      mercury__term_io__write_term_prio_anon_vars_10_p_0(mercury__term_io__TypeInfo_for_T_15, mercury__term_io__TypeClassInfo_for_op_table_16, mercury__term_io__OutStream_6, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Term_8, mercury__term_io__Var_43, mercury__term_io__VarSet_7, &mercury__term_io__Var_27, (MR_Integer) 0, &mercury__term_io__Var_28);
    }
  }
}

void MR_CALL 
mercury__term_io__write_variable_anon_vars_9_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_35,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_34,
  MR_Word mercury__term_io__OutStream_10,
  MR_Box mercury__term_io__Ops_11,
  MR_Word mercury__term_io__Var_12,
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_21,
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_22,
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_23,
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_24)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__Value_16;
    MR_Word mercury__term_io__TypeCtorInfo_12_43 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__term_io__TypeInfo_13_44;
    MR_Word mercury__term_io__TypeCtorInfo_14_45 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
    MR_Word mercury__term_io__TypeInfo_15_46;
    MR_Word mercury__term_io__V_7_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 2)));
    MR_Word mercury__term_io__V_8_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 0)));
    MR_Word mercury__term_io__V_9_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 1)));
    MR_Box mercury__term_io__conv0_Value_16;

    {
      mercury__term_io__TypeInfo_13_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_44, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_12_43));
      MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_44, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_35));
    }
    {
      mercury__term_io__TypeInfo_15_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_15_46, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_14_45));
      MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_15_46, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_35));
    }
    {
      mercury__term_io__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term_io__TypeInfo_for_T_35, mercury__term_io__TypeInfo_13_44, mercury__term_io__TypeInfo_15_46, mercury__term_io__V_7_41, mercury__term_io__Var_12, &mercury__term_io__conv0_Value_16);
    }
    if (mercury__term_io__succeeded)
      {
        mercury__term_io__Value_16 = ((MR_Word) mercury__term_io__conv0_Value_16);
        mercury__term_io__succeeded = MR_TRUE;
      }
    if (mercury__term_io__succeeded)
      {
        MR_Integer mercury__term_io__Var_63;
        MR_Integer mercury__term_io__Var_67;
        MR_Box MR_CALL (* mercury__term_io__func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12)));
        MR_Box mercury__term_io__conv2_Var_67;

        {
          mercury__term_io__conv2_Var_67 = mercury__term_io__func_1(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_34), mercury__term_io__Ops_11);
        }
        mercury__term_io__Var_67 = ((MR_Integer) mercury__term_io__conv2_Var_67);
        mercury__term_io__Var_63 = (mercury__term_io__Var_67 + (MR_Integer) 1);
        {
          mercury__term_io__write_term_prio_anon_vars_10_p_0(mercury__term_io__TypeInfo_for_T_35, mercury__term_io__TypeClassInfo_for_op_table_34, mercury__term_io__OutStream_10, mercury__term_io__Ops_11, mercury__term_io__Value_16, mercury__term_io__Var_63, mercury__term_io__STATE_VARIABLE_VarSet_0_21, mercury__term_io__STATE_VARIABLE_VarSet_22, mercury__term_io__STATE_VARIABLE_N_0_23, mercury__term_io__STATE_VARIABLE_N_24);
        }
      }
    else
      {
        MR_String mercury__term_io__Name_17;
        MR_Word mercury__term_io__TypeCtorInfo_12_76 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mercury__term_io__TypeInfo_13_77;
        MR_Word mercury__term_io__TypeCtorInfo_14_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word mercury__term_io__V_8_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 1)));
        MR_Word mercury__term_io__V_7_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 0)));
        MR_Word mercury__term_io__V_9_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 2)));
        MR_Box mercury__term_io__conv3_Name_17;

        {
          mercury__term_io__TypeInfo_13_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_77, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_12_76));
          MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_77, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_35));
        }
        {
          mercury__term_io__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term_io__TypeInfo_for_T_35, mercury__term_io__TypeInfo_13_77, mercury__term_io__TypeCtorInfo_14_78, mercury__term_io__V_8_73, mercury__term_io__Var_12, &mercury__term_io__conv3_Name_17);
        }
        if (mercury__term_io__succeeded)
          {
            mercury__term_io__Name_17 = ((MR_String) mercury__term_io__conv3_Name_17);
            mercury__term_io__succeeded = MR_TRUE;
          }
        if (mercury__term_io__succeeded)
          {
            {
              mercury__io__write_string_4_p_0(mercury__term_io__OutStream_10, mercury__term_io__Name_17);
            }
            *mercury__term_io__STATE_VARIABLE_VarSet_22 = mercury__term_io__STATE_VARIABLE_VarSet_0_21;
          }
        else
          {
            MR_Integer mercury__term_io__VarNum_18 = (MR_Integer) mercury__term_io__Var_12;
            MR_String mercury__term_io__VarNumStr_19;
            MR_String mercury__term_io__VarName_20;

            {
              mercury__string__int_to_base_string_3_p_0(mercury__term_io__VarNum_18, (MR_Integer) 10, &mercury__term_io__VarNumStr_19);
            }
            {
              mercury__string__append_3_p_2((MR_String) "_", mercury__term_io__VarNumStr_19, &mercury__term_io__VarName_20);
            }
            {
              mercury__varset__name_var_4_p_0(mercury__term_io__TypeInfo_for_T_35, mercury__term_io__Var_12, mercury__term_io__VarName_20, mercury__term_io__STATE_VARIABLE_VarSet_0_21, mercury__term_io__STATE_VARIABLE_VarSet_22);
            }
            {
              mercury__io__write_string_4_p_0(mercury__term_io__OutStream_10, mercury__term_io__VarName_20);
            }
          }
        *mercury__term_io__STATE_VARIABLE_N_24 = mercury__term_io__STATE_VARIABLE_N_0_23;
      }
  }
}

static void MR_CALL 
mercury__term_io__write_later_list_elements_9_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_54,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_53,
  MR_Word mercury__term_io__OutStream_10,
  MR_Box mercury__term_io__Ops_11,
  MR_Word mercury__term_io__Term_12,
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_23,
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_24,
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_25,
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_26)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Term_12)) == (MR_mktag((MR_Integer) 1)));
        MR_Word mercury__term_io__Value_18;
        MR_Word mercury__term_io__TypeCtorInfo_12_62;
        MR_Word mercury__term_io__TypeInfo_13_63;
        MR_Word mercury__term_io__TypeCtorInfo_14_64;
        MR_Word mercury__term_io__TypeInfo_15_65;
        MR_Word mercury__term_io__Var_16;
        MR_Word mercury__term_io__V_7_60;
        MR_Word mercury__term_io__Var_17;
        MR_Word mercury__term_io__V_8_58;
        MR_Word mercury__term_io__V_9_59;
        MR_Box mercury__term_io__conv0_Value_18;

        if (mercury__term_io__succeeded)
          {
            mercury__term_io__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Term_12, (MR_Integer) 0)));
            mercury__term_io__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Term_12, (MR_Integer) 1)));
            mercury__term_io__V_8_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_23, (MR_Integer) 0)));
            mercury__term_io__V_9_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_23, (MR_Integer) 1)));
            mercury__term_io__V_7_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_23, (MR_Integer) 2)));
            mercury__term_io__TypeCtorInfo_12_62 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            mercury__term_io__TypeCtorInfo_14_64 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
            {
              mercury__term_io__TypeInfo_13_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_63, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_12_62));
              MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_63, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_54));
            }
            {
              mercury__term_io__TypeInfo_15_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_15_65, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_14_64));
              MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_15_65, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_54));
            }
            {
              mercury__term_io__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term_io__TypeInfo_for_T_54, mercury__term_io__TypeInfo_13_63, mercury__term_io__TypeInfo_15_65, mercury__term_io__V_7_60, mercury__term_io__Var_16, &mercury__term_io__conv0_Value_18);
            }
            if (mercury__term_io__succeeded)
              {
                mercury__term_io__Value_18 = ((MR_Word) mercury__term_io__conv0_Value_18);
                mercury__term_io__succeeded = MR_TRUE;
              }
          }
        if (mercury__term_io__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__term_io__next_value_of_Term_12 = mercury__term_io__Value_18;

              mercury__term_io__Term_12 = mercury__term_io__next_value_of_Term_12;
            }
            continue;
          }
        else
          {
            MR_Word mercury__term_io__ListHead_19;
            MR_Word mercury__term_io__ListTail_20;
            MR_Word mercury__term_io__Var_32;
            MR_String mercury__term_io__Var_33;
            MR_Word mercury__term_io__Var_34;
            MR_Word mercury__term_io__Var_35;
            MR_Word mercury__term_io__Var_36;
            MR_Word mercury__term_io__Var_21;

            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Term_12)) == (MR_mktag((MR_Integer) 0)));
            if (mercury__term_io__succeeded)
              {
                mercury__term_io__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_12, (MR_Integer) 0)));
                mercury__term_io__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_12, (MR_Integer) 1)));
                mercury__term_io__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_12, (MR_Integer) 2)));
                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Var_32)) == (MR_mktag((MR_Integer) 0)));
                if (mercury__term_io__succeeded)
                  {
                    mercury__term_io__Var_33 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Var_32, (MR_Integer) 0)));
                    mercury__term_io__succeeded = (strcmp(mercury__term_io__Var_33, (MR_String) "[|]") == 0);
                    if (mercury__term_io__succeeded)
                      {
                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Var_34)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__term_io__succeeded)
                          {
                            mercury__term_io__ListHead_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_34, (MR_Integer) 0)));
                            mercury__term_io__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_34, (MR_Integer) 1)));
                            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Var_35)) == (MR_mktag((MR_Integer) 1)));
                            if (mercury__term_io__succeeded)
                              {
                                mercury__term_io__ListTail_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_35, (MR_Integer) 0)));
                                mercury__term_io__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_35, (MR_Integer) 1)));
                                mercury__term_io__succeeded = (mercury__term_io__Var_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                          }
                      }
                  }
              }
            if (mercury__term_io__succeeded)
              {
                MR_Word mercury__term_io__STATE_VARIABLE_VarSet_39_39;
                MR_Integer mercury__term_io__STATE_VARIABLE_N_40_40;
                MR_Integer mercury__term_io__Var_82;
                MR_Box MR_CALL (* mercury__term_io__func_1)(MR_Box, MR_Box);
                MR_Box mercury__term_io__conv2_Var_82;

                {
                  mercury__io__write_string_4_p_0(mercury__term_io__OutStream_10, (MR_String) ", ");
                }
                mercury__term_io__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_53, (MR_Integer) 0)), (MR_Integer) 13)));
                {
                  mercury__term_io__conv2_Var_82 = mercury__term_io__func_1(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_53), mercury__term_io__Ops_11);
                }
                mercury__term_io__Var_82 = ((MR_Integer) mercury__term_io__conv2_Var_82);
                {
                  mercury__term_io__write_term_prio_anon_vars_10_p_0(mercury__term_io__TypeInfo_for_T_54, mercury__term_io__TypeClassInfo_for_op_table_53, mercury__term_io__OutStream_10, mercury__term_io__Ops_11, mercury__term_io__ListHead_19, mercury__term_io__Var_82, mercury__term_io__STATE_VARIABLE_VarSet_0_23, &mercury__term_io__STATE_VARIABLE_VarSet_39_39, mercury__term_io__STATE_VARIABLE_N_0_25, &mercury__term_io__STATE_VARIABLE_N_40_40);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__term_io__next_value_of_Term_12 = mercury__term_io__ListTail_20;
                  MR_Word mercury__term_io__next_value_of_STATE_VARIABLE_VarSet_0_23 = mercury__term_io__STATE_VARIABLE_VarSet_39_39;
                  MR_Integer mercury__term_io__next_value_of_STATE_VARIABLE_N_0_25 = mercury__term_io__STATE_VARIABLE_N_40_40;

                  mercury__term_io__STATE_VARIABLE_N_0_25 = mercury__term_io__next_value_of_STATE_VARIABLE_N_0_25;
                  mercury__term_io__STATE_VARIABLE_VarSet_0_23 = mercury__term_io__next_value_of_STATE_VARIABLE_VarSet_0_23;
                  mercury__term_io__Term_12 = mercury__term_io__next_value_of_Term_12;
                }
                continue;
              }
            else
              {
                MR_Word mercury__term_io__Var_45;
                MR_String mercury__term_io__Var_46;
                MR_Word mercury__term_io__Var_47;
                MR_Word mercury__term_io__Var_22;

                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Term_12)) == (MR_mktag((MR_Integer) 0)));
                if (mercury__term_io__succeeded)
                  {
                    mercury__term_io__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_12, (MR_Integer) 0)));
                    mercury__term_io__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_12, (MR_Integer) 1)));
                    mercury__term_io__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_12, (MR_Integer) 2)));
                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Var_45)) == (MR_mktag((MR_Integer) 0)));
                    if (mercury__term_io__succeeded)
                      {
                        mercury__term_io__Var_46 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Var_45, (MR_Integer) 0)));
                        mercury__term_io__succeeded = (strcmp(mercury__term_io__Var_46, (MR_String) "[]") == 0);
                        if (mercury__term_io__succeeded)
                          mercury__term_io__succeeded = (mercury__term_io__Var_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
                if (mercury__term_io__succeeded)
                  {
                    *mercury__term_io__STATE_VARIABLE_N_26 = mercury__term_io__STATE_VARIABLE_N_0_25;
                    *mercury__term_io__STATE_VARIABLE_VarSet_24 = mercury__term_io__STATE_VARIABLE_VarSet_0_23;
                  }
                else
                  {
                    {
                      mercury__io__write_string_4_p_0(mercury__term_io__OutStream_10, (MR_String) " | ");
                    }
                    {
                      mercury__term_io__write_term_anon_vars_9_p_0(mercury__term_io__TypeInfo_for_T_54, mercury__term_io__TypeClassInfo_for_op_table_53, mercury__term_io__OutStream_10, mercury__term_io__Ops_11, mercury__term_io__Term_12, mercury__term_io__STATE_VARIABLE_VarSet_0_23, mercury__term_io__STATE_VARIABLE_VarSet_24, mercury__term_io__STATE_VARIABLE_N_0_25, mercury__term_io__STATE_VARIABLE_N_26);
                    }
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__term_io__write_term_later_args_9_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_43,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_42,
  MR_Word mercury__term_io__OutStream_1,
  MR_Box mercury__term_io__Ops_2,
  MR_Word mercury__term_io__HeadVar__3_3,
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_4,
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_5,
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_6,
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_io__succeeded;

        if ((mercury__term_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__term_io__STATE_VARIABLE_N_7 = mercury__term_io__STATE_VARIABLE_N_0_6;
            *mercury__term_io__STATE_VARIABLE_VarSet_5 = mercury__term_io__STATE_VARIABLE_VarSet_0_4;
          }
        else
          {
            MR_Word mercury__term_io__X_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__term_io__Xs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_36_36;
            MR_Integer mercury__term_io__STATE_VARIABLE_N_37_37;
            MR_Integer mercury__term_io__Var_56;
            MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box);
            MR_Box mercury__term_io__conv1_Var_56;

            {
              mercury__io__write_string_4_p_0(mercury__term_io__OutStream_1, (MR_String) ", ");
            }
            mercury__term_io__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_42, (MR_Integer) 0)), (MR_Integer) 13)));
            {
              mercury__term_io__conv1_Var_56 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_42), mercury__term_io__Ops_2);
            }
            mercury__term_io__Var_56 = ((MR_Integer) mercury__term_io__conv1_Var_56);
            {
              mercury__term_io__write_term_prio_anon_vars_10_p_0(mercury__term_io__TypeInfo_for_T_43, mercury__term_io__TypeClassInfo_for_op_table_42, mercury__term_io__OutStream_1, mercury__term_io__Ops_2, mercury__term_io__X_23, mercury__term_io__Var_56, mercury__term_io__STATE_VARIABLE_VarSet_0_4, &mercury__term_io__STATE_VARIABLE_VarSet_36_36, mercury__term_io__STATE_VARIABLE_N_0_6, &mercury__term_io__STATE_VARIABLE_N_37_37);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__term_io__next_value_of_HeadVar__3_3 = mercury__term_io__Xs_24;
              MR_Word mercury__term_io__next_value_of_STATE_VARIABLE_VarSet_0_4 = mercury__term_io__STATE_VARIABLE_VarSet_36_36;
              MR_Integer mercury__term_io__next_value_of_STATE_VARIABLE_N_0_6 = mercury__term_io__STATE_VARIABLE_N_37_37;

              mercury__term_io__STATE_VARIABLE_N_0_6 = mercury__term_io__next_value_of_STATE_VARIABLE_N_0_6;
              mercury__term_io__STATE_VARIABLE_VarSet_0_4 = mercury__term_io__next_value_of_STATE_VARIABLE_VarSet_0_4;
              mercury__term_io__HeadVar__3_3 = mercury__term_io__next_value_of_HeadVar__3_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__term_io__write_term_arg_9_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_27,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_26,
  MR_Word mercury__term_io__OutStream_10,
  MR_Box mercury__term_io__Ops_11,
  MR_Word mercury__term_io__Term_12,
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_16,
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_17,
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_18,
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_19)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Integer mercury__term_io__Var_22;
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 13)));
    MR_Box mercury__term_io__conv1_Var_22;

    {
      mercury__term_io__conv1_Var_22 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_26), mercury__term_io__Ops_11);
    }
    mercury__term_io__Var_22 = ((MR_Integer) mercury__term_io__conv1_Var_22);
    {
      mercury__term_io__write_term_prio_anon_vars_10_p_0(mercury__term_io__TypeInfo_for_T_27, mercury__term_io__TypeClassInfo_for_op_table_26, mercury__term_io__OutStream_10, mercury__term_io__Ops_11, mercury__term_io__Term_12, mercury__term_io__Var_22, mercury__term_io__STATE_VARIABLE_VarSet_0_16, mercury__term_io__STATE_VARIABLE_VarSet_17, mercury__term_io__STATE_VARIABLE_N_0_18, mercury__term_io__STATE_VARIABLE_N_19);
    }
  }
}

void MR_CALL 
mercury__term_io__write_term_prio_anon_vars_10_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_209,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_208,
  MR_Word mercury__term_io__OutStream_11,
  MR_Box mercury__term_io__Ops_12,
  MR_Word mercury__term_io__Term_13,
  MR_Integer mercury__term_io__Priority_14,
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_51,
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_52,
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_53,
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_54)
{
  {
    MR_bool mercury__term_io__succeeded;

    if (((MR_tag((MR_Word) mercury__term_io__Term_13)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mercury__term_io__Functor_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_13, (MR_Integer) 0)));
        MR_Word mercury__term_io__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_13, (MR_Integer) 1)));
        MR_Word mercury__term_io__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_13, (MR_Integer) 2)));
        MR_Word mercury__term_io__ListHead_23;
        MR_Word mercury__term_io__ListTail_24;
        MR_String mercury__term_io__Var_57;
        MR_Word mercury__term_io__Var_58;
        MR_Word mercury__term_io__Var_59;

        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_20)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__term_io__succeeded)
          {
            mercury__term_io__Var_57 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_20, (MR_Integer) 0)));
            mercury__term_io__succeeded = (strcmp(mercury__term_io__Var_57, (MR_String) "[|]") == 0);
            if (mercury__term_io__succeeded)
              {
                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_21)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__term_io__succeeded)
                  {
                    mercury__term_io__ListHead_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_21, (MR_Integer) 0)));
                    mercury__term_io__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_21, (MR_Integer) 1)));
                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Var_58)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__term_io__succeeded)
                      {
                        mercury__term_io__ListTail_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_58, (MR_Integer) 0)));
                        mercury__term_io__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_58, (MR_Integer) 1)));
                        mercury__term_io__succeeded = (mercury__term_io__Var_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
        if (mercury__term_io__succeeded)
          {
            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_62_62;
            MR_Integer mercury__term_io__STATE_VARIABLE_N_63_63;

            {
              mercury__io__write_char_4_p_0(mercury__term_io__OutStream_11, (MR_Char) 91);
            }
            {
              mercury__term_io__write_term_arg_9_p_0(mercury__term_io__TypeInfo_for_T_209, mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__OutStream_11, mercury__term_io__Ops_12, mercury__term_io__ListHead_23, mercury__term_io__STATE_VARIABLE_VarSet_0_51, &mercury__term_io__STATE_VARIABLE_VarSet_62_62, mercury__term_io__STATE_VARIABLE_N_0_53, &mercury__term_io__STATE_VARIABLE_N_63_63);
            }
            {
              mercury__term_io__write_later_list_elements_9_p_0(mercury__term_io__TypeInfo_for_T_209, mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__OutStream_11, mercury__term_io__Ops_12, mercury__term_io__ListTail_24, mercury__term_io__STATE_VARIABLE_VarSet_62_62, mercury__term_io__STATE_VARIABLE_VarSet_52, mercury__term_io__STATE_VARIABLE_N_63_63, mercury__term_io__STATE_VARIABLE_N_54);
            }
            {
              mercury__io__write_char_4_p_0(mercury__term_io__OutStream_11, (MR_Char) 93);
            }
          }
        else
          {
            MR_String mercury__term_io__Var_70;

            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_20)) == (MR_mktag((MR_Integer) 0)));
            if (mercury__term_io__succeeded)
              {
                mercury__term_io__Var_70 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_20, (MR_Integer) 0)));
                mercury__term_io__succeeded = (strcmp(mercury__term_io__Var_70, (MR_String) "[]") == 0);
                if (mercury__term_io__succeeded)
                  mercury__term_io__succeeded = (mercury__term_io__Args_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            if (mercury__term_io__succeeded)
              {
                {
                  mercury__io__write_string_4_p_0(mercury__term_io__OutStream_11, (MR_String) "[]");
                }
                *mercury__term_io__STATE_VARIABLE_N_54 = mercury__term_io__STATE_VARIABLE_N_0_53;
                *mercury__term_io__STATE_VARIABLE_VarSet_52 = mercury__term_io__STATE_VARIABLE_VarSet_0_51;
              }
            else
              {
                MR_Word mercury__term_io__BracedTerm_25;
                MR_String mercury__term_io__Var_73;
                MR_Word mercury__term_io__Var_74;

                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_20)) == (MR_mktag((MR_Integer) 0)));
                if (mercury__term_io__succeeded)
                  {
                    mercury__term_io__Var_73 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_20, (MR_Integer) 0)));
                    mercury__term_io__succeeded = (strcmp(mercury__term_io__Var_73, (MR_String) "{}") == 0);
                    if (mercury__term_io__succeeded)
                      {
                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_21)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__term_io__succeeded)
                          {
                            mercury__term_io__BracedTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_21, (MR_Integer) 0)));
                            mercury__term_io__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_21, (MR_Integer) 1)));
                            mercury__term_io__succeeded = (mercury__term_io__Var_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
                if (mercury__term_io__succeeded)
                  {
                    {
                      mercury__io__write_string_4_p_0(mercury__term_io__OutStream_11, (MR_String) "{ ");
                    }
                    {
                      mercury__term_io__write_term_anon_vars_9_p_0(mercury__term_io__TypeInfo_for_T_209, mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__OutStream_11, mercury__term_io__Ops_12, mercury__term_io__BracedTerm_25, mercury__term_io__STATE_VARIABLE_VarSet_0_51, mercury__term_io__STATE_VARIABLE_VarSet_52, mercury__term_io__STATE_VARIABLE_N_0_53, mercury__term_io__STATE_VARIABLE_N_54);
                    }
                    {
                      mercury__io__write_string_4_p_0(mercury__term_io__OutStream_11, (MR_String) " }");
                    }
                  }
                else
                  {
                    MR_Word mercury__term_io__BracedHead_26;
                    MR_Word mercury__term_io__BracedTail_27;
                    MR_String mercury__term_io__Var_82;

                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_20)) == (MR_mktag((MR_Integer) 0)));
                    if (mercury__term_io__succeeded)
                      {
                        mercury__term_io__Var_82 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_20, (MR_Integer) 0)));
                        mercury__term_io__succeeded = (strcmp(mercury__term_io__Var_82, (MR_String) "{}") == 0);
                        if (mercury__term_io__succeeded)
                          {
                            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_21)) == (MR_mktag((MR_Integer) 1)));
                            if (mercury__term_io__succeeded)
                              {
                                mercury__term_io__BracedHead_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_21, (MR_Integer) 0)));
                                mercury__term_io__BracedTail_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_21, (MR_Integer) 1)));
                              }
                          }
                      }
                    if (mercury__term_io__succeeded)
                      {
                        MR_Word mercury__term_io__STATE_VARIABLE_VarSet_85_85;
                        MR_Integer mercury__term_io__STATE_VARIABLE_N_86_86;

                        {
                          mercury__io__write_char_4_p_0(mercury__term_io__OutStream_11, (MR_Char) 123);
                        }
                        {
                          mercury__term_io__write_term_arg_9_p_0(mercury__term_io__TypeInfo_for_T_209, mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__OutStream_11, mercury__term_io__Ops_12, mercury__term_io__BracedHead_26, mercury__term_io__STATE_VARIABLE_VarSet_0_51, &mercury__term_io__STATE_VARIABLE_VarSet_85_85, mercury__term_io__STATE_VARIABLE_N_0_53, &mercury__term_io__STATE_VARIABLE_N_86_86);
                        }
                        {
                          mercury__term_io__write_term_later_args_9_p_0(mercury__term_io__TypeInfo_for_T_209, mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__OutStream_11, mercury__term_io__Ops_12, mercury__term_io__BracedTail_27, mercury__term_io__STATE_VARIABLE_VarSet_85_85, mercury__term_io__STATE_VARIABLE_VarSet_52, mercury__term_io__STATE_VARIABLE_N_86_86, mercury__term_io__STATE_VARIABLE_N_54);
                        }
                        {
                          mercury__io__write_char_4_p_0(mercury__term_io__OutStream_11, (MR_Char) 125);
                        }
                      }
                    else
                      {
                        MR_Word mercury__term_io__FirstArg_29;
                        MR_Word mercury__term_io__OtherArgs_30;
                        MR_Word mercury__term_io__Var_202;
                        MR_String mercury__term_io__Var_93;
                        MR_Word mercury__term_io__Var_94;
                        MR_Word mercury__term_io__Var_95;
                        MR_Word mercury__term_io__Var_28;

                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_20)) == (MR_mktag((MR_Integer) 0)));
                        if (mercury__term_io__succeeded)
                          {
                            mercury__term_io__Var_93 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_20, (MR_Integer) 0)));
                            mercury__term_io__succeeded = (strcmp(mercury__term_io__Var_93, (MR_String) "") == 0);
                            if (mercury__term_io__succeeded)
                              {
                                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_21)) == (MR_mktag((MR_Integer) 1)));
                                if (mercury__term_io__succeeded)
                                  {
                                    mercury__term_io__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_21, (MR_Integer) 0)));
                                    mercury__term_io__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_21, (MR_Integer) 1)));
                                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Var_94)) == (MR_mktag((MR_Integer) 1)));
                                    if (mercury__term_io__succeeded)
                                      {
                                        mercury__term_io__Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_94, (MR_Integer) 0)));
                                        mercury__term_io__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_94, (MR_Integer) 1)));
                                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Var_95)) == (MR_mktag((MR_Integer) 1)));
                                        if (mercury__term_io__succeeded)
                                          {
                                            mercury__term_io__FirstArg_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_95, (MR_Integer) 0)));
                                            mercury__term_io__OtherArgs_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_95, (MR_Integer) 1)));
                                          }
                                      }
                                  }
                              }
                          }
                        if (mercury__term_io__succeeded)
                          {
                            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_96_96;
                            MR_Integer mercury__term_io__STATE_VARIABLE_N_97_97;
                            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_101_101;
                            MR_Integer mercury__term_io__STATE_VARIABLE_N_102_102;

                            {
                              mercury__term_io__write_variable_anon_vars_9_p_0(mercury__term_io__TypeInfo_for_T_209, mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__OutStream_11, mercury__term_io__Ops_12, mercury__term_io__Var_202, mercury__term_io__STATE_VARIABLE_VarSet_0_51, &mercury__term_io__STATE_VARIABLE_VarSet_96_96, mercury__term_io__STATE_VARIABLE_N_0_53, &mercury__term_io__STATE_VARIABLE_N_97_97);
                            }
                            {
                              mercury__io__write_char_4_p_0(mercury__term_io__OutStream_11, (MR_Char) 40);
                            }
                            {
                              mercury__term_io__write_term_arg_9_p_0(mercury__term_io__TypeInfo_for_T_209, mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__OutStream_11, mercury__term_io__Ops_12, mercury__term_io__FirstArg_29, mercury__term_io__STATE_VARIABLE_VarSet_96_96, &mercury__term_io__STATE_VARIABLE_VarSet_101_101, mercury__term_io__STATE_VARIABLE_N_97_97, &mercury__term_io__STATE_VARIABLE_N_102_102);
                            }
                            {
                              mercury__term_io__write_term_later_args_9_p_0(mercury__term_io__TypeInfo_for_T_209, mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__OutStream_11, mercury__term_io__Ops_12, mercury__term_io__OtherArgs_30, mercury__term_io__STATE_VARIABLE_VarSet_101_101, mercury__term_io__STATE_VARIABLE_VarSet_52, mercury__term_io__STATE_VARIABLE_N_102_102, mercury__term_io__STATE_VARIABLE_N_54);
                            }
                            {
                              mercury__io__write_char_4_p_0(mercury__term_io__OutStream_11, (MR_Char) 41);
                            }
                          }
                        else
                          {
                            MR_Word mercury__term_io__PrefixArg_31;
                            MR_Integer mercury__term_io__OpPriority_33;
                            MR_Word mercury__term_io__OpAssoc_34;
                            MR_String mercury__term_io__OpName_32;
                            MR_Word mercury__term_io__Var_109;

                            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_21)) == (MR_mktag((MR_Integer) 1)));
                            if (mercury__term_io__succeeded)
                              {
                                mercury__term_io__PrefixArg_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_21, (MR_Integer) 0)));
                                mercury__term_io__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_21, (MR_Integer) 1)));
                                mercury__term_io__succeeded = (mercury__term_io__Var_109 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (mercury__term_io__succeeded)
                                  {
                                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_20)) == (MR_mktag((MR_Integer) 0)));
                                    if (mercury__term_io__succeeded)
                                      {
                                        mercury__term_io__OpName_32 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_20, (MR_Integer) 0)));
                                        {
                                          mercury__term_io__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__Ops_12, mercury__term_io__OpName_32, &mercury__term_io__OpPriority_33, &mercury__term_io__OpAssoc_34);
                                        }
                                      }
                                  }
                              }
                            if (mercury__term_io__succeeded)
                              {
                                MR_Word mercury__term_io__TypeClassInfo_for_writer_211 = (MR_Word) &mercury__term_io_scalar_common_4[1];
                                MR_Integer mercury__term_io__NewPriority_35;

                                mercury__term_io__succeeded = (mercury__term_io__OpPriority_33 > mercury__term_io__Priority_14);
                                if (mercury__term_io__succeeded)
                                  {
                                    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_211, (MR_Integer) 0)), (MR_Integer) 5)));
                                    MR_Box mercury__term_io__conv1_STATE_VARIABLE_IO_111_111;

                                    {
                                      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_211), ((MR_Box) (mercury__term_io__OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_IO_111_111);
                                    }
                                  }
                                else
                                  {
                                  }
                                {
                                  mercury__term_io__write_constant_4_p_0(mercury__term_io__OutStream_11, mercury__term_io__Functor_20);
                                }
                                {
                                  mercury__io__write_char_4_p_0(mercury__term_io__OutStream_11, (MR_Char) 32);
                                }
                                switch (mercury__term_io__OpAssoc_34) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                      mercury__term_io__NewPriority_35 = (mercury__term_io__OpPriority_33 - (MR_Integer) 1);
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    mercury__term_io__NewPriority_35 = mercury__term_io__OpPriority_33;
                                    break;
                                }
                                {
                                  mercury__term_io__write_term_prio_anon_vars_10_p_0(mercury__term_io__TypeInfo_for_T_209, mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__OutStream_11, mercury__term_io__Ops_12, mercury__term_io__PrefixArg_31, mercury__term_io__NewPriority_35, mercury__term_io__STATE_VARIABLE_VarSet_0_51, mercury__term_io__STATE_VARIABLE_VarSet_52, mercury__term_io__STATE_VARIABLE_N_0_53, mercury__term_io__STATE_VARIABLE_N_54);
                                }
                                mercury__term_io__succeeded = (mercury__term_io__OpPriority_33 > mercury__term_io__Priority_14);
                                if (mercury__term_io__succeeded)
                                  {
                                    void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_211, (MR_Integer) 0)), (MR_Integer) 5)));
                                    MR_Box mercury__term_io__conv3_STATE_VARIABLE_IO_56;

                                    {
                                      mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_211), ((MR_Box) (mercury__term_io__OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_IO_56);
                                    }
                                  }
                                else
                                  {
                                  }
                              }
                            else
                              {
                                MR_Word mercury__term_io__PostfixArg_36;
                                MR_Integer mercury__term_io__OpPriority_199;
                                MR_Word mercury__term_io__OpAssoc_200;
                                MR_Word mercury__term_io__Var_120;
                                MR_String mercury__term_io__OpName_189;

                                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_21)) == (MR_mktag((MR_Integer) 1)));
                                if (mercury__term_io__succeeded)
                                  {
                                    mercury__term_io__PostfixArg_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_21, (MR_Integer) 0)));
                                    mercury__term_io__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_21, (MR_Integer) 1)));
                                    mercury__term_io__succeeded = (mercury__term_io__Var_120 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (mercury__term_io__succeeded)
                                      {
                                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_20)) == (MR_mktag((MR_Integer) 0)));
                                        if (mercury__term_io__succeeded)
                                          {
                                            mercury__term_io__OpName_189 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_20, (MR_Integer) 0)));
                                            {
                                              mercury__term_io__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__Ops_12, mercury__term_io__OpName_189, &mercury__term_io__OpPriority_199, &mercury__term_io__OpAssoc_200);
                                            }
                                          }
                                      }
                                  }
                                if (mercury__term_io__succeeded)
                                  {
                                    MR_Word mercury__term_io__TypeClassInfo_for_writer_213 = (MR_Word) &mercury__term_io_scalar_common_4[1];
                                    MR_Integer mercury__term_io__NewPriority_190;

                                    mercury__term_io__succeeded = (mercury__term_io__OpPriority_199 > mercury__term_io__Priority_14);
                                    if (mercury__term_io__succeeded)
                                      {
                                        void MR_CALL (* mercury__term_io__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_213, (MR_Integer) 0)), (MR_Integer) 5)));
                                        MR_Box mercury__term_io__conv5_STATE_VARIABLE_IO_122_122;

                                        {
                                          mercury__term_io__func_4(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_213), ((MR_Box) (mercury__term_io__OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv5_STATE_VARIABLE_IO_122_122);
                                        }
                                      }
                                    else
                                      {
                                      }
                                    switch (mercury__term_io__OpAssoc_200) {
                                      default: /*NOTREACHED*/ MR_assert(0);
                                      case (MR_Integer) 0:
                                        {
                                          mercury__term_io__NewPriority_190 = (mercury__term_io__OpPriority_199 - (MR_Integer) 1);
                                        }
                                        break;
                                      case (MR_Integer) 1:
                                        mercury__term_io__NewPriority_190 = mercury__term_io__OpPriority_199;
                                        break;
                                    }
                                    {
                                      mercury__term_io__write_term_prio_anon_vars_10_p_0(mercury__term_io__TypeInfo_for_T_209, mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__OutStream_11, mercury__term_io__Ops_12, mercury__term_io__PostfixArg_36, mercury__term_io__NewPriority_190, mercury__term_io__STATE_VARIABLE_VarSet_0_51, mercury__term_io__STATE_VARIABLE_VarSet_52, mercury__term_io__STATE_VARIABLE_N_0_53, mercury__term_io__STATE_VARIABLE_N_54);
                                    }
                                    {
                                      mercury__io__write_char_4_p_0(mercury__term_io__OutStream_11, (MR_Char) 32);
                                    }
                                    {
                                      mercury__term_io__write_constant_4_p_0(mercury__term_io__OutStream_11, mercury__term_io__Functor_20);
                                    }
                                    mercury__term_io__succeeded = (mercury__term_io__OpPriority_199 > mercury__term_io__Priority_14);
                                    if (mercury__term_io__succeeded)
                                      {
                                        void MR_CALL (* mercury__term_io__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_213, (MR_Integer) 0)), (MR_Integer) 5)));
                                        MR_Box mercury__term_io__conv7_STATE_VARIABLE_IO_56;

                                        {
                                          mercury__term_io__func_6(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_213), ((MR_Box) (mercury__term_io__OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv7_STATE_VARIABLE_IO_56);
                                        }
                                      }
                                    else
                                      {
                                      }
                                  }
                                else
                                  {
                                    MR_Word mercury__term_io__Arg1_37;
                                    MR_Word mercury__term_io__Arg2_38;
                                    MR_Word mercury__term_io__LeftAssoc_39;
                                    MR_Word mercury__term_io__RightAssoc_40;
                                    MR_String mercury__term_io__OpName_196;
                                    MR_Integer mercury__term_io__OpPriority_197;
                                    MR_Word mercury__term_io__Var_131;
                                    MR_Word mercury__term_io__Var_132;

                                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_21)) == (MR_mktag((MR_Integer) 1)));
                                    if (mercury__term_io__succeeded)
                                      {
                                        mercury__term_io__Arg1_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_21, (MR_Integer) 0)));
                                        mercury__term_io__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_21, (MR_Integer) 1)));
                                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Var_131)) == (MR_mktag((MR_Integer) 1)));
                                        if (mercury__term_io__succeeded)
                                          {
                                            mercury__term_io__Arg2_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_131, (MR_Integer) 0)));
                                            mercury__term_io__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_131, (MR_Integer) 1)));
                                            mercury__term_io__succeeded = (mercury__term_io__Var_132 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (mercury__term_io__succeeded)
                                              {
                                                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_20)) == (MR_mktag((MR_Integer) 0)));
                                                if (mercury__term_io__succeeded)
                                                  {
                                                    mercury__term_io__OpName_196 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_20, (MR_Integer) 0)));
                                                    {
                                                      mercury__term_io__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__Ops_12, mercury__term_io__OpName_196, &mercury__term_io__OpPriority_197, &mercury__term_io__LeftAssoc_39, &mercury__term_io__RightAssoc_40);
                                                    }
                                                  }
                                              }
                                          }
                                      }
                                    if (mercury__term_io__succeeded)
                                      {
                                        MR_Word mercury__term_io__TypeClassInfo_for_writer_215 = (MR_Word) &mercury__term_io_scalar_common_4[1];
                                        MR_Integer mercury__term_io__LeftPriority_41;
                                        MR_Integer mercury__term_io__RightPriority_43;
                                        MR_Word mercury__term_io__STATE_VARIABLE_VarSet_135_135;
                                        MR_Integer mercury__term_io__STATE_VARIABLE_N_136_136;

                                        mercury__term_io__succeeded = (mercury__term_io__OpPriority_197 > mercury__term_io__Priority_14);
                                        if (mercury__term_io__succeeded)
                                          {
                                            void MR_CALL (* mercury__term_io__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_215, (MR_Integer) 0)), (MR_Integer) 5)));
                                            MR_Box mercury__term_io__conv9_STATE_VARIABLE_IO_134_134;

                                            {
                                              mercury__term_io__func_8(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_215), ((MR_Box) (mercury__term_io__OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv9_STATE_VARIABLE_IO_134_134);
                                            }
                                          }
                                        else
                                          {
                                          }
                                        switch (mercury__term_io__LeftAssoc_39) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 0:
                                            {
                                              mercury__term_io__LeftPriority_41 = (mercury__term_io__OpPriority_197 - (MR_Integer) 1);
                                            }
                                            break;
                                          case (MR_Integer) 1:
                                            mercury__term_io__LeftPriority_41 = mercury__term_io__OpPriority_197;
                                            break;
                                        }
                                        {
                                          mercury__term_io__write_term_prio_anon_vars_10_p_0(mercury__term_io__TypeInfo_for_T_209, mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__OutStream_11, mercury__term_io__Ops_12, mercury__term_io__Arg1_37, mercury__term_io__LeftPriority_41, mercury__term_io__STATE_VARIABLE_VarSet_0_51, &mercury__term_io__STATE_VARIABLE_VarSet_135_135, mercury__term_io__STATE_VARIABLE_N_0_53, &mercury__term_io__STATE_VARIABLE_N_136_136);
                                        }
                                        mercury__term_io__succeeded = (strcmp(mercury__term_io__OpName_196, (MR_String) ",") == 0);
                                        if (mercury__term_io__succeeded)
                                          {
                                            {
                                              mercury__io__write_string_4_p_0(mercury__term_io__OutStream_11, (MR_String) ", ");
                                            }
                                          }
                                        else
                                          {
                                            mercury__term_io__succeeded = (strcmp(mercury__term_io__OpName_196, (MR_String) ".") == 0);
                                            if (mercury__term_io__succeeded)
                                              {
                                                MR_String mercury__term_io__Dot_42;

                                                {
                                                  mercury__term_io__succeeded = mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(mercury__term_io__Arg2_38);
                                                }
                                                if (mercury__term_io__succeeded)
                                                  mercury__term_io__Dot_42 = (MR_String) "\'.\'";
                                                else
                                                  mercury__term_io__Dot_42 = (MR_String) ".";
                                                {
                                                  mercury__io__write_string_4_p_0(mercury__term_io__OutStream_11, mercury__term_io__Dot_42);
                                                }
                                              }
                                            else
                                              {
                                                {
                                                  mercury__io__write_char_4_p_0(mercury__term_io__OutStream_11, (MR_Char) 32);
                                                }
                                                {
                                                  mercury__term_io__write_constant_4_p_0(mercury__term_io__OutStream_11, mercury__term_io__Functor_20);
                                                }
                                                {
                                                  mercury__io__write_char_4_p_0(mercury__term_io__OutStream_11, (MR_Char) 32);
                                                }
                                              }
                                          }
                                        switch (mercury__term_io__RightAssoc_40) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 0:
                                            {
                                              mercury__term_io__RightPriority_43 = (mercury__term_io__OpPriority_197 - (MR_Integer) 1);
                                            }
                                            break;
                                          case (MR_Integer) 1:
                                            mercury__term_io__RightPriority_43 = mercury__term_io__OpPriority_197;
                                            break;
                                        }
                                        {
                                          mercury__term_io__write_term_prio_anon_vars_10_p_0(mercury__term_io__TypeInfo_for_T_209, mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__OutStream_11, mercury__term_io__Ops_12, mercury__term_io__Arg2_38, mercury__term_io__RightPriority_43, mercury__term_io__STATE_VARIABLE_VarSet_135_135, mercury__term_io__STATE_VARIABLE_VarSet_52, mercury__term_io__STATE_VARIABLE_N_136_136, mercury__term_io__STATE_VARIABLE_N_54);
                                        }
                                        mercury__term_io__succeeded = (mercury__term_io__OpPriority_197 > mercury__term_io__Priority_14);
                                        if (mercury__term_io__succeeded)
                                          {
                                            void MR_CALL (* mercury__term_io__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_215, (MR_Integer) 0)), (MR_Integer) 5)));
                                            MR_Box mercury__term_io__conv11_STATE_VARIABLE_IO_56;

                                            {
                                              mercury__term_io__func_10(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_215), ((MR_Box) (mercury__term_io__OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv11_STATE_VARIABLE_IO_56);
                                            }
                                          }
                                        else
                                          {
                                          }
                                      }
                                    else
                                      {
                                        MR_Word mercury__term_io__FirstAssoc_44;
                                        MR_Word mercury__term_io__SecondAssoc_45;
                                        MR_Integer mercury__term_io__OpPriority_193;
                                        MR_Word mercury__term_io__Arg1_194;
                                        MR_Word mercury__term_io__Arg2_195;
                                        MR_Word mercury__term_io__Var_151;
                                        MR_Word mercury__term_io__Var_152;
                                        MR_String mercury__term_io__OpName_191;

                                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_21)) == (MR_mktag((MR_Integer) 1)));
                                        if (mercury__term_io__succeeded)
                                          {
                                            mercury__term_io__Arg1_194 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_21, (MR_Integer) 0)));
                                            mercury__term_io__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_21, (MR_Integer) 1)));
                                            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Var_151)) == (MR_mktag((MR_Integer) 1)));
                                            if (mercury__term_io__succeeded)
                                              {
                                                mercury__term_io__Arg2_195 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_151, (MR_Integer) 0)));
                                                mercury__term_io__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_151, (MR_Integer) 1)));
                                                mercury__term_io__succeeded = (mercury__term_io__Var_152 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (mercury__term_io__succeeded)
                                                  {
                                                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_20)) == (MR_mktag((MR_Integer) 0)));
                                                    if (mercury__term_io__succeeded)
                                                      {
                                                        mercury__term_io__OpName_191 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_20, (MR_Integer) 0)));
                                                        {
                                                          mercury__term_io__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__Ops_12, mercury__term_io__OpName_191, &mercury__term_io__OpPriority_193, &mercury__term_io__FirstAssoc_44, &mercury__term_io__SecondAssoc_45);
                                                        }
                                                      }
                                                  }
                                              }
                                          }
                                        if (mercury__term_io__succeeded)
                                          {
                                            MR_Word mercury__term_io__TypeClassInfo_for_writer_217 = (MR_Word) &mercury__term_io_scalar_common_4[1];
                                            MR_Integer mercury__term_io__FirstPriority_46;
                                            MR_Integer mercury__term_io__SecondPriority_47;
                                            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_158_158;
                                            MR_Integer mercury__term_io__STATE_VARIABLE_N_159_159;

                                            mercury__term_io__succeeded = (mercury__term_io__OpPriority_193 > mercury__term_io__Priority_14);
                                            if (mercury__term_io__succeeded)
                                              {
                                                void MR_CALL (* mercury__term_io__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_217, (MR_Integer) 0)), (MR_Integer) 5)));
                                                MR_Box mercury__term_io__conv13_STATE_VARIABLE_IO_154_154;

                                                {
                                                  mercury__term_io__func_12(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_217), ((MR_Box) (mercury__term_io__OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv13_STATE_VARIABLE_IO_154_154);
                                                }
                                              }
                                            else
                                              {
                                              }
                                            {
                                              mercury__term_io__write_constant_4_p_0(mercury__term_io__OutStream_11, mercury__term_io__Functor_20);
                                            }
                                            {
                                              mercury__io__write_char_4_p_0(mercury__term_io__OutStream_11, (MR_Char) 32);
                                            }
                                            switch (mercury__term_io__FirstAssoc_44) {
                                              default: /*NOTREACHED*/ MR_assert(0);
                                              case (MR_Integer) 0:
                                                {
                                                  mercury__term_io__FirstPriority_46 = (mercury__term_io__OpPriority_193 - (MR_Integer) 1);
                                                }
                                                break;
                                              case (MR_Integer) 1:
                                                mercury__term_io__FirstPriority_46 = mercury__term_io__OpPriority_193;
                                                break;
                                            }
                                            {
                                              mercury__term_io__write_term_prio_anon_vars_10_p_0(mercury__term_io__TypeInfo_for_T_209, mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__OutStream_11, mercury__term_io__Ops_12, mercury__term_io__Arg1_194, mercury__term_io__FirstPriority_46, mercury__term_io__STATE_VARIABLE_VarSet_0_51, &mercury__term_io__STATE_VARIABLE_VarSet_158_158, mercury__term_io__STATE_VARIABLE_N_0_53, &mercury__term_io__STATE_VARIABLE_N_159_159);
                                            }
                                            {
                                              mercury__io__write_char_4_p_0(mercury__term_io__OutStream_11, (MR_Char) 32);
                                            }
                                            switch (mercury__term_io__SecondAssoc_45) {
                                              default: /*NOTREACHED*/ MR_assert(0);
                                              case (MR_Integer) 0:
                                                {
                                                  mercury__term_io__SecondPriority_47 = (mercury__term_io__OpPriority_193 - (MR_Integer) 1);
                                                }
                                                break;
                                              case (MR_Integer) 1:
                                                mercury__term_io__SecondPriority_47 = mercury__term_io__OpPriority_193;
                                                break;
                                            }
                                            {
                                              mercury__term_io__write_term_prio_anon_vars_10_p_0(mercury__term_io__TypeInfo_for_T_209, mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__OutStream_11, mercury__term_io__Ops_12, mercury__term_io__Arg2_195, mercury__term_io__SecondPriority_47, mercury__term_io__STATE_VARIABLE_VarSet_158_158, mercury__term_io__STATE_VARIABLE_VarSet_52, mercury__term_io__STATE_VARIABLE_N_159_159, mercury__term_io__STATE_VARIABLE_N_54);
                                            }
                                            mercury__term_io__succeeded = (mercury__term_io__OpPriority_193 > mercury__term_io__Priority_14);
                                            if (mercury__term_io__succeeded)
                                              {
                                                void MR_CALL (* mercury__term_io__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_217, (MR_Integer) 0)), (MR_Integer) 5)));
                                                MR_Box mercury__term_io__conv15_STATE_VARIABLE_IO_56;

                                                {
                                                  mercury__term_io__func_14(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_217), ((MR_Box) (mercury__term_io__OutStream_11)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv15_STATE_VARIABLE_IO_56);
                                                }
                                              }
                                            else
                                              {
                                              }
                                          }
                                        else
                                          {
                                            MR_String mercury__term_io__Op_48;
                                            MR_Integer mercury__term_io__Var_168;

                                            mercury__term_io__succeeded = (mercury__term_io__Args_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (mercury__term_io__succeeded)
                                              {
                                                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_20)) == (MR_mktag((MR_Integer) 0)));
                                                if (mercury__term_io__succeeded)
                                                  {
                                                    mercury__term_io__Op_48 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_20, (MR_Integer) 0)));
                                                    {
                                                      mercury__term_io__succeeded = mercury__ops__lookup_op_2_p_0(mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__Ops_12, mercury__term_io__Op_48);
                                                    }
                                                    if (mercury__term_io__succeeded)
                                                      {
                                                        {
                                                          mercury__term_io__Var_168 = mercury__ops__max_priority_1_f_0(mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__Ops_12);
                                                        }
                                                        mercury__term_io__succeeded = (mercury__term_io__Priority_14 <= mercury__term_io__Var_168);
                                                      }
                                                  }
                                              }
                                            if (mercury__term_io__succeeded)
                                              {
                                                {
                                                  mercury__io__write_char_4_p_0(mercury__term_io__OutStream_11, (MR_Char) 40);
                                                }
                                                {
                                                  mercury__term_io__write_constant_4_p_0(mercury__term_io__OutStream_11, mercury__term_io__Functor_20);
                                                }
                                                {
                                                  mercury__io__write_char_4_p_0(mercury__term_io__OutStream_11, (MR_Char) 41);
                                                }
                                              }
                                            else
                                              {
                                                {
                                                  mercury__term_io__write_constant_5_p_0(mercury__term_io__OutStream_11, mercury__term_io__Functor_20, (MR_Integer) 0);
                                                }
                                              }
                                            if ((mercury__term_io__Args_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              {
                                                *mercury__term_io__STATE_VARIABLE_VarSet_52 = mercury__term_io__STATE_VARIABLE_VarSet_0_51;
                                                *mercury__term_io__STATE_VARIABLE_N_54 = mercury__term_io__STATE_VARIABLE_N_0_53;
                                              }
                                            else
                                              {
                                                MR_Word mercury__term_io__X_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_21, (MR_Integer) 0)));
                                                MR_Word mercury__term_io__Xs_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_21, (MR_Integer) 1)));
                                                MR_Word mercury__term_io__STATE_VARIABLE_VarSet_178_178;
                                                MR_Integer mercury__term_io__STATE_VARIABLE_N_179_179;

                                                {
                                                  mercury__io__write_char_4_p_0(mercury__term_io__OutStream_11, (MR_Char) 40);
                                                }
                                                {
                                                  mercury__term_io__write_term_arg_9_p_0(mercury__term_io__TypeInfo_for_T_209, mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__OutStream_11, mercury__term_io__Ops_12, mercury__term_io__X_49, mercury__term_io__STATE_VARIABLE_VarSet_0_51, &mercury__term_io__STATE_VARIABLE_VarSet_178_178, mercury__term_io__STATE_VARIABLE_N_0_53, &mercury__term_io__STATE_VARIABLE_N_179_179);
                                                }
                                                {
                                                  mercury__term_io__write_term_later_args_9_p_0(mercury__term_io__TypeInfo_for_T_209, mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__OutStream_11, mercury__term_io__Ops_12, mercury__term_io__Xs_50, mercury__term_io__STATE_VARIABLE_VarSet_178_178, mercury__term_io__STATE_VARIABLE_VarSet_52, mercury__term_io__STATE_VARIABLE_N_179_179, mercury__term_io__STATE_VARIABLE_N_54);
                                                }
                                                {
                                                  mercury__io__write_char_4_p_0(mercury__term_io__OutStream_11, (MR_Char) 41);
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
      }
    else
      {
        MR_Word mercury__term_io__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Term_13, (MR_Integer) 0)));
        MR_Word mercury__term_io__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Term_13, (MR_Integer) 1)));

        {
          mercury__term_io__write_variable_anon_vars_9_p_0(mercury__term_io__TypeInfo_for_T_209, mercury__term_io__TypeClassInfo_for_op_table_208, mercury__term_io__OutStream_11, mercury__term_io__Ops_12, mercury__term_io__Var_18, mercury__term_io__STATE_VARIABLE_VarSet_0_51, mercury__term_io__STATE_VARIABLE_VarSet_52, mercury__term_io__STATE_VARIABLE_N_0_53, mercury__term_io__STATE_VARIABLE_N_54);
        }
      }
  }
}

void MR_CALL 
mercury__term_io__write_term_anon_vars_9_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_29,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_28,
  MR_Word mercury__term_io__OutStream_10,
  MR_Box mercury__term_io__Ops_11,
  MR_Word mercury__term_io__Term_12,
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_16,
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_17,
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_18,
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_19)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Integer mercury__term_io__Var_22;
    MR_Integer mercury__term_io__Var_26;
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_28, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__term_io__conv1_Var_26;

    {
      mercury__term_io__conv1_Var_26 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_28), mercury__term_io__Ops_11);
    }
    mercury__term_io__Var_26 = ((MR_Integer) mercury__term_io__conv1_Var_26);
    mercury__term_io__Var_22 = (mercury__term_io__Var_26 + (MR_Integer) 1);
    {
      mercury__term_io__write_term_prio_anon_vars_10_p_0(mercury__term_io__TypeInfo_for_T_29, mercury__term_io__TypeClassInfo_for_op_table_28, mercury__term_io__OutStream_10, mercury__term_io__Ops_11, mercury__term_io__Term_12, mercury__term_io__Var_22, mercury__term_io__STATE_VARIABLE_VarSet_0_16, mercury__term_io__STATE_VARIABLE_VarSet_17, mercury__term_io__STATE_VARIABLE_N_0_18, mercury__term_io__STATE_VARIABLE_N_19);
    }
  }
}

static MR_bool MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(
  MR_Word mercury__term_io__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
        MR_Word mercury__term_io__Var_33;
        MR_Word mercury__term_io__Var_34;
        MR_Word mercury__term_io__Var_32;

        if (mercury__term_io__succeeded)
          {
            mercury__term_io__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
            mercury__term_io__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));
            mercury__term_io__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 2)));
            switch (MR_tag((MR_Word) mercury__term_io__Var_34)) {
              default:
                mercury__term_io__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_String mercury__term_io__Op_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Var_34, (MR_Integer) 0)));
                  MR_Word mercury__term_io__Arg_16;
                  MR_Word mercury__term_io__Var_35;
                  MR_Word mercury__term_io__Var_36;

                  mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Var_33)) == (MR_mktag((MR_Integer) 1)));
                  if (mercury__term_io__succeeded)
                    {
                      mercury__term_io__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_33, (MR_Integer) 0)));
                      mercury__term_io__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_33, (MR_Integer) 1)));
                      if ((mercury__term_io__Var_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word mercury__term_io__TypeClassInfo_for_op_table_31;
                          MR_Integer mercury__term_io__Var_21;
                          MR_Word mercury__term_io__Var_22;
                          MR_bool MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
                          MR_Box mercury__term_io__conv2_Var_21;
                          MR_Box mercury__term_io__conv1_Var_22;

                          mercury__term_io__Arg_16 = mercury__term_io__Var_36;
                          mercury__private_builtin__dummy_var = (MR_Integer) 0;
                          mercury__term_io__TypeClassInfo_for_op_table_31 = (MR_Word) &mercury__term_io_scalar_common_1[0];
                          mercury__term_io__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_31, (MR_Integer) 0)), (MR_Integer) 8)));
                          {
                            mercury__term_io__succeeded = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_31), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__term_io__Op_13)), &mercury__term_io__conv2_Var_21, &mercury__term_io__conv1_Var_22);
                          }
                          if (mercury__term_io__succeeded)
                            {
                              mercury__term_io__Var_21 = ((MR_Integer) mercury__term_io__conv2_Var_21);
                              mercury__term_io__Var_22 = ((MR_Word) mercury__term_io__conv1_Var_22);
                              mercury__term_io__succeeded = MR_TRUE;
                            }
                        }
                      else
                        {
                          MR_Word mercury__term_io__TypeClassInfo_for_op_table_30;
                          MR_Word mercury__term_io__Var_27;
                          MR_Word mercury__term_io__Var_17;
                          MR_Integer mercury__term_io__Var_18;
                          MR_Word mercury__term_io__Var_19;
                          MR_Word mercury__term_io__Var_20;
                          MR_bool MR_CALL (* mercury__term_io__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
                          MR_Box mercury__term_io__conv6_Var_18;
                          MR_Box mercury__term_io__conv5_Var_19;
                          MR_Box mercury__term_io__conv4_Var_20;

                          mercury__term_io__Arg_16 = mercury__term_io__Var_36;
                          mercury__term_io__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_35, (MR_Integer) 0)));
                          mercury__term_io__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Var_35, (MR_Integer) 1)));
                          mercury__term_io__succeeded = (mercury__term_io__Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (mercury__term_io__succeeded)
                            {
                              mercury__private_builtin__dummy_var = (MR_Integer) 0;
                              mercury__term_io__TypeClassInfo_for_op_table_30 = (MR_Word) &mercury__term_io_scalar_common_1[0];
                              mercury__term_io__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_30, (MR_Integer) 0)), (MR_Integer) 5)));
                              {
                                mercury__term_io__succeeded = mercury__term_io__func_3(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_30), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__term_io__Op_13)), &mercury__term_io__conv6_Var_18, &mercury__term_io__conv5_Var_19, &mercury__term_io__conv4_Var_20);
                              }
                              if (mercury__term_io__succeeded)
                                {
                                  mercury__term_io__Var_18 = ((MR_Integer) mercury__term_io__conv6_Var_18);
                                  mercury__term_io__Var_19 = ((MR_Word) mercury__term_io__conv5_Var_19);
                                  mercury__term_io__Var_20 = ((MR_Word) mercury__term_io__conv4_Var_20);
                                  mercury__term_io__succeeded = MR_TRUE;
                                }
                            }
                        }
                      if (mercury__term_io__succeeded)
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word mercury__term_io__next_value_of_HeadVar__1_1 = mercury__term_io__Arg_16;

                            mercury__term_io__HeadVar__1_1 = mercury__term_io__next_value_of_HeadVar__1_1;
                          }
                          continue;
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                mercury__term_io__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_io__Var_34, (MR_Integer) 0)))) {
                  default:
                    mercury__term_io__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    mercury__term_io__succeeded = MR_TRUE;
                    break;
                }
                break;
            }
          }
        return mercury__term_io__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__term_io__write_constant_4_p_0(
  MR_Word mercury__term_io__OutStream_5,
  MR_Word mercury__term_io__Const_6)
{
  {
    MR_bool mercury__term_io__succeeded;

    {
      mercury__term_io__write_constant_5_p_0(mercury__term_io__OutStream_5, mercury__term_io__Const_6, (MR_Integer) 1);
    }
  }
}

void MR_CALL 
mercury__term_io__write_constant_5_p_0(
  MR_Word mercury__term_io__OutStream_6,
  MR_Word mercury__term_io__Const_7,
  MR_Word mercury__term_io__AdjacentToGraphicToken_8)
{
  {
    MR_bool mercury__term_io__succeeded;

    switch (MR_tag((MR_Word) mercury__term_io__Const_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mercury__term_io__TypeClassInfo_for_writer_33 = (MR_Word) &mercury__term_io_scalar_common_4[0];
          MR_Word mercury__term_io__TypeClassInfo_for_writer_34 = (MR_Word) &mercury__term_io_scalar_common_4[1];
          MR_String mercury__term_io__A_18 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Const_7, (MR_Integer) 0)));

          {
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(mercury__term_io__TypeClassInfo_for_writer_33, mercury__term_io__TypeClassInfo_for_writer_34, mercury__term_io__OutStream_6, mercury__term_io__A_18, mercury__term_io__AdjacentToGraphicToken_8);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__term_io__Base_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Const_7, (MR_Integer) 0)));
          MR_Word mercury__term_io__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Const_7, (MR_Integer) 1)));
          MR_Word mercury__term_io__Signedness_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Const_7, (MR_Integer) 2)));
          MR_Word mercury__term_io__Size_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Const_7, (MR_Integer) 3)));
          MR_String mercury__term_io__Prefix_14 = ((&mercury__term_io_vector_common_6[4 + mercury__term_io__Base_10]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;
          MR_String mercury__term_io__IntString_15;
          MR_String mercury__term_io__Suffix_16;
          MR_Integer mercury__term_io__Var_29 = ((&mercury__term_io_vector_common_7[0 + mercury__term_io__Base_10]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;

          {
            mercury__term_io__IntString_15 = mercury__integer__to_base_string_2_f_0(mercury__term_io__I_11, mercury__term_io__Var_29);
          }
          switch (mercury__term_io__Signedness_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__term_io__Suffix_16 = ((&mercury__term_io_vector_common_6[8 + mercury__term_io__Size_13]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__term_io__Suffix_16 = ((&mercury__term_io_vector_common_6[13 + mercury__term_io__Size_13]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;
              }
              break;
          }
          {
            mercury__io__write_string_4_p_0(mercury__term_io__OutStream_6, mercury__term_io__Prefix_14);
          }
          {
            mercury__io__write_string_4_p_0(mercury__term_io__OutStream_6, mercury__term_io__IntString_15);
          }
          {
            mercury__io__write_string_4_p_0(mercury__term_io__OutStream_6, mercury__term_io__Suffix_16);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__term_io__TypeClassInfo_for_writer_35 = (MR_Word) &mercury__term_io_scalar_common_4[0];
          MR_Word mercury__term_io__TypeClassInfo_for_writer_36 = (MR_Word) &mercury__term_io_scalar_common_4[1];
          MR_String mercury__term_io__S_19 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_io__Const_7, (MR_Integer) 0)));
          void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_36, (MR_Integer) 0)), (MR_Integer) 5)));
          MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_11_62;
          void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box mercury__term_io__conv3_STATE_VARIABLE_IO_22;

          {
            mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_36), ((MR_Box) (mercury__term_io__OutStream_6)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_11_62);
          }
          {
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_35, mercury__term_io__TypeClassInfo_for_writer_36, mercury__term_io__OutStream_6, mercury__term_io__S_19);
          }
          mercury__term_io__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_36, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_36), ((MR_Box) (mercury__term_io__OutStream_6)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_IO_22);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_io__Const_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Float mercury__term_io__F_17 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term_io__Const_7, (MR_Integer) 1)));
              MR_Box mercury__term_io__V_5_40 = (MR_Box) mercury__term_io__OutStream_6;
              MR_Box mercury__term_io__V_8_41;
              MR_Word mercury__term_io__V_8_51;
              MR_String mercury__term_io__V_6_55;

{
#define MR_PROC_LABEL mercury__term_io__write_constant_5_p_0

	MercuryFilePtr Stream;
	MR_Float Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) mercury__term_io__V_5_40 ;
	Val =  mercury__term_io__F_17 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__term_io__V_8_41 );
}
{
#define MR_PROC_LABEL mercury__term_io__write_constant_5_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__term_io__V_8_41 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
              if (mercury__term_io__succeeded)
                mercury__term_io__succeeded = MR_FALSE;
              else
                {
{
#define MR_PROC_LABEL mercury__term_io__write_constant_5_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__term_io__V_8_41 , Error);
	Msg0 =  (MR_String) "error writing to output file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_6_55  = Msg;
}
                  mercury__term_io__succeeded = MR_TRUE;
                }
              if (mercury__term_io__succeeded)
                {
                  mercury__term_io__V_8_51 = (MR_Word) mercury__term_io__V_6_55;
                  mercury__term_io__succeeded = MR_TRUE;
                }
              if (mercury__term_io__succeeded)
                {
                  MR_Word mercury__term_io__TypeCtorInfo_10_52 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;

                  {
                    mercury__exception__throw_1_p_0(mercury__term_io__TypeCtorInfo_10_52, ((MR_Box) (mercury__term_io__V_8_51)));
                    return;
                  }
                }
              else
                {
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String mercury__term_io__N_20 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_io__Const_7, (MR_Integer) 1)));

              {
                mercury__io__write_char_4_p_0(mercury__term_io__OutStream_6, (MR_Char) 36);
              }
              {
                mercury__io__write_string_4_p_0(mercury__term_io__OutStream_6, mercury__term_io__N_20);
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word mercury__term_io__TypeClassInfo_for_writer_19,
  MR_Word mercury__term_io__TypeClassInfo_for_writer_20,
  MR_Word mercury__term_io__Stream_6,
  MR_String mercury__term_io__S_7,
  MR_Word mercury__term_io__AdjacentToGraphicToken_8)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__ShouldQuote_10;

    {
      MR_Integer mercury__term_io__lo_0;
      MR_Integer mercury__term_io__hi_1;
      MR_Integer mercury__term_io__mid_2;
      MR_Integer mercury__term_io__result_3;

      /* binary string simple lookup switch */
      mercury__term_io__lo_0 = (MR_Integer) 0;
      mercury__term_io__hi_1 = (MR_Integer) 3;
      do
        {
          mercury__term_io__mid_2 = (((mercury__term_io__lo_0 + mercury__term_io__hi_1)) / (MR_Integer) 2);
          mercury__term_io__result_3 = MR_strcmp(mercury__term_io__S_7, ((&mercury__term_io_vector_common_6[0 + mercury__term_io__mid_2]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0);
          if ((mercury__term_io__result_3 == (MR_Integer) 0))
            {
              mercury__term_io__succeeded = MR_TRUE;
              /* jump out of search loop */
              goto label_0;
            }
          else
          if ((mercury__term_io__result_3 < (MR_Integer) 0))
            mercury__term_io__hi_1 = (mercury__term_io__mid_2 - (MR_Integer) 1);
          else
            mercury__term_io__lo_0 = (mercury__term_io__mid_2 + (MR_Integer) 1);
        }
      while ((mercury__term_io__lo_0 <= mercury__term_io__hi_1));
      mercury__term_io__succeeded = MR_FALSE;
    label_0:;
    }
    if (!(mercury__term_io__succeeded))
      {
        {
          MR_Integer mercury__term_io__Var_26;
          MR_Char mercury__term_io__Var_27;
          MR_Char mercury__term_io__Var_30;
          MR_Integer mercury__term_io__V_7_38;

          {
            mercury__term_io__succeeded = mercury__term_io__all_match_loop__ho22_3_p_in__string_0(mercury__term_io__S_7, (MR_Integer) 0);
          }
          if (mercury__term_io__succeeded)
            {
              mercury__term_io__succeeded = (strcmp(mercury__term_io__S_7, (MR_String) "") == 0);
              mercury__term_io__succeeded = !(mercury__term_io__succeeded);
              if (mercury__term_io__succeeded)
                {
                  mercury__term_io__Var_26 = (MR_Integer) 0;
                  mercury__term_io__Var_27 = (MR_Char) 35;
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_7_38  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__term_io__Var_26 ;
	Length =  mercury__term_io__V_7_38 ;
		{

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
                  if (mercury__term_io__succeeded)
                    {
                      {
                        mercury__string__unsafe_index_3_p_0(mercury__term_io__S_7, mercury__term_io__Var_26, &mercury__term_io__Var_30);
                      }
                      mercury__term_io__succeeded = (mercury__term_io__Var_27 == mercury__term_io__Var_30);
                    }
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
                  if (mercury__term_io__succeeded)
                    mercury__term_io__succeeded = (mercury__term_io__AdjacentToGraphicToken_8 == (MR_Integer) 1);
                }
            }
        }
        if (!(mercury__term_io__succeeded))
          {
            MR_Char mercury__term_io__FirstChar_24;
            MR_Integer mercury__term_io__V_7_44;
            MR_Char mercury__term_io__V_3_48;

{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_7_44  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__term_io__V_7_44 ;
		{

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__term_io__succeeded)
              {
                {
                  mercury__string__unsafe_index_3_p_0(mercury__term_io__S_7, (MR_Integer) 0, &mercury__term_io__FirstChar_24);
                }
                {
                  mercury__term_io__succeeded = mercury__char__lower_upper_2_p_0(mercury__term_io__FirstChar_24, &mercury__term_io__V_3_48);
                }
                if (mercury__term_io__succeeded)
                  {
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_io__S_7 ;
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
	if (SUCCESS_INDICATOR) {
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
                  }
              }
          }
      }
    if (mercury__term_io__succeeded)
      mercury__term_io__ShouldQuote_10 = (MR_Integer) 0;
    else
      mercury__term_io__ShouldQuote_10 = (MR_Integer) 1;
    switch (mercury__term_io__ShouldQuote_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
          MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_12;

          {
            mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_19), ((MR_Box) (mercury__term_io__Stream_6)), ((MR_Box) (mercury__term_io__S_7)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_12);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
          MR_Box mercury__term_io__conv3_STATE_VARIABLE_State_14_14;
          void MR_CALL (* mercury__term_io__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box mercury__term_io__conv5_STATE_VARIABLE_State_12;

          {
            mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_20), ((MR_Box) (mercury__term_io__Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 39)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_State_14_14);
          }
          {
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_19, mercury__term_io__TypeClassInfo_for_writer_20, mercury__term_io__Stream_6, mercury__term_io__S_7);
          }
          mercury__term_io__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            mercury__term_io__func_4(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_20), ((MR_Box) (mercury__term_io__Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 39)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv5_STATE_VARIABLE_State_12);
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
mercury__term_io__all_match_loop__ho22_3_p_in__string_0(
  MR_String mercury__term_io__V_5_5,
  MR_Integer mercury__term_io__V_6_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_io__succeeded;
        MR_Integer mercury__term_io__V_7_7;
        MR_Char mercury__term_io__V_8_8;

{
#define MR_PROC_LABEL mercury__term_io__all_match_loop__ho22_3_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__term_io__V_5_5 ;
	Index =  mercury__term_io__V_6_6 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_io__V_7_7  = NextIndex;
	 mercury__term_io__V_8_8  = Ch;
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__term_io__succeeded)
          {
            {
              mercury__term_io__succeeded = mercury__lexer__graphic_token_char_1_p_0(mercury__term_io__V_8_8);
            }
            if (mercury__term_io__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__term_io__next_value_of_V_6_6 = mercury__term_io__V_7_7;

                  mercury__term_io__V_6_6 = mercury__term_io__next_value_of_V_6_6;
                }
                continue;
              }
          }
        else
          mercury__term_io__succeeded = MR_TRUE;
        return mercury__term_io__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
  MR_Word mercury__term_io__TypeClassInfo_for_writer_13,
  MR_Word mercury__term_io__Stream_5,
  MR_String mercury__term_io__String_6)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Integer mercury__term_io__V_8_26;
    MR_Integer mercury__term_io__V_13_36;
    MR_Integer mercury__term_io__V_17_37;

{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_8_26  = Length;
}
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_17_37  = Length;
}
    mercury__term_io__succeeded = (mercury__term_io__V_8_26 < mercury__term_io__V_17_37);
    if (mercury__term_io__succeeded)
      mercury__term_io__V_13_36 = mercury__term_io__V_8_26;
    else
      mercury__term_io__V_13_36 = mercury__term_io__V_17_37;
    {
      mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_54_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__Stream_5, mercury__term_io__String_6, (MR_Integer) 0, mercury__term_io__V_13_36);
    }
  }
}

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_54_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
  MR_Word mercury__term_io__Var_17,
  MR_Word mercury__term_io__Var_18,
  MR_Word mercury__term_io__Var_19,
  MR_String mercury__term_io__V_8_8,
  MR_Integer mercury__term_io__V_9_9,
  MR_Integer mercury__term_io__V_10_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_io__succeeded = (mercury__term_io__V_9_9 < mercury__term_io__V_10_10);
        MR_Integer mercury__term_io__V_12_13;
        MR_Char mercury__term_io__V_13_14;

        if (mercury__term_io__succeeded)
          {
{
#define MR_PROC_LABEL mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_54_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__term_io__V_8_8 ;
	Index =  mercury__term_io__V_9_9 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_io__V_12_13  = NextIndex;
	 mercury__term_io__V_13_14  = Ch;
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__term_io__succeeded)
              mercury__term_io__succeeded = (mercury__term_io__V_12_13 <= mercury__term_io__V_10_10);
          }
        if (mercury__term_io__succeeded)
          {
            {
              mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__Var_17, mercury__term_io__Var_18, mercury__term_io__Var_19, mercury__term_io__V_13_14);
            }
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__term_io__next_value_of_V_9_9 = mercury__term_io__V_12_13;

              mercury__term_io__V_9_9 = mercury__term_io__next_value_of_V_9_9;
            }
            continue;
          }
        else
          {
          }
      }
      break;
    }
}

void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word mercury__term_io__TypeClassInfo_for_writer_17,
  MR_Word mercury__term_io__TypeClassInfo_for_writer_18,
  MR_Word mercury__term_io__Stream_5,
  MR_Char mercury__term_io__Char_6)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Char mercury__term_io__QuoteChar_8;

    switch (mercury__term_io__Char_6) {
      default:
        mercury__term_io__succeeded = MR_FALSE;
        break;
      case (MR_Char) 8:
        {
          mercury__term_io__QuoteChar_8 = (MR_Char) 98;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 9:
        {
          mercury__term_io__QuoteChar_8 = (MR_Char) 116;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 10:
        {
          mercury__term_io__QuoteChar_8 = (MR_Char) 110;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 34:
        {
          mercury__term_io__QuoteChar_8 = (MR_Char) 34;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          mercury__term_io__QuoteChar_8 = (MR_Char) 39;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 92:
        {
          mercury__term_io__QuoteChar_8 = (MR_Char) 92;
          mercury__term_io__succeeded = MR_TRUE;
        }
        break;
    }
    if (mercury__term_io__succeeded)
      {
        void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_12_12;
        void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box mercury__term_io__conv3_STATE_VARIABLE_State_10;

        {
          mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (MR_Word) ((MR_Char) 92)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_12_12);
        }
        mercury__term_io__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (MR_Word) (mercury__term_io__QuoteChar_8)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_State_10);
        }
      }
    else
      {
        {
          mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(mercury__term_io__Char_6);
        }
        if (!(mercury__term_io__succeeded))
          {
            if ((((MR_Unsigned) (mercury__term_io__Char_6 - (MR_Integer) 32)) <= ((MR_Unsigned) (MR_Integer) 94)))
              if ((((mercury__term_io_scalar_common_5[0])[(((mercury__term_io__Char_6 - (MR_Integer) 32)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__term_io__Char_6 - (MR_Integer) 32)) & (MR_Integer) 31))))))
                {
                  mercury__term_io__succeeded = MR_TRUE;
                }
              else
                mercury__term_io__succeeded = MR_FALSE;
            else
              mercury__term_io__succeeded = MR_FALSE;
            if (!(mercury__term_io__succeeded))
              {
                MR_Integer mercury__term_io__Var_20;

{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_6 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Var_20  = Int;
}
                mercury__term_io__succeeded = (mercury__term_io__Var_20 >= (MR_Integer) 128);
              }
          }
        if (mercury__term_io__succeeded)
          {
            void MR_CALL (* mercury__term_io__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));
            MR_Box mercury__term_io__conv5_STATE_VARIABLE_State_10;

            {
              mercury__term_io__func_4(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (MR_Word) (mercury__term_io__Char_6)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv5_STATE_VARIABLE_State_10);
            }
          }
        else
          {
            MR_String mercury__term_io__Var_15;
            void MR_CALL (* mercury__term_io__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box mercury__term_io__conv7_STATE_VARIABLE_State_10;

            {
              mercury__term_io__Var_15 = mercury__term_io__mercury_escape_char_1_f_0(mercury__term_io__Char_6);
            }
            mercury__term_io__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__term_io__func_6(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_17), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (mercury__term_io__Var_15)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv7_STATE_VARIABLE_State_10);
            }
          }
      }
  }
}

MR_String MR_CALL 
mercury__term_io__mercury_escape_char_1_f_0(
  MR_Char mercury__term_io__Char_3)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_String mercury__term_io__EscapeCode_4;
    MR_Integer mercury__term_io__Int_5;
    MR_String mercury__term_io__OctalString0_6;
    MR_String mercury__term_io__OctalString_7;
    MR_String mercury__term_io__Var_12;

{
#define MR_PROC_LABEL mercury__term_io__mercury_escape_char_1_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_3 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Int_5  = Int;
}
    {
      mercury__string__int_to_base_string_3_p_0(mercury__term_io__Int_5, (MR_Integer) 8, &mercury__term_io__OctalString0_6);
    }
    {
      mercury__string__pad_left_4_p_0(mercury__term_io__OctalString0_6, (MR_Char) 48, (MR_Integer) 3, &mercury__term_io__OctalString_7);
    }
    {
      mercury__string__append_3_p_2(mercury__term_io__OctalString_7, (MR_String) "\\", &mercury__term_io__Var_12);
    }
    {
      mercury__string__append_3_p_2((MR_String) "\\", mercury__term_io__Var_12, &mercury__term_io__EscapeCode_4);
    }
    return mercury__term_io__EscapeCode_4;
  }
}

void MR_CALL 
mercury__term_io__read_term_with_op_table_5_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_14,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_13,
  MR_Word mercury__term_io__InStream_6,
  MR_Box mercury__term_io__Ops_7,
  MR_Word * mercury__term_io__Result_8)
{
  {
    MR_bool mercury__term_io__succeeded;

    {
      mercury__parser__read_term_with_op_table_5_p_0(mercury__term_io__TypeInfo_for_T_14, mercury__term_io__TypeClassInfo_for_op_table_13, mercury__term_io__InStream_6, mercury__term_io__Ops_7, mercury__term_io__Result_8);
    }
  }
}

void MR_CALL 
mercury__term_io__read_term_with_op_table_4_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_14,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_13,
  MR_Box mercury__term_io__Ops_5,
  MR_Word * mercury__term_io__Result_6)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__InStream_8;
    MR_Box mercury__term_io__V_4_17;

{
#define MR_PROC_LABEL mercury__term_io__read_term_with_op_table_4_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_17  = (MR_Box) Stream;
}
    mercury__term_io__InStream_8 = (MR_Word) mercury__term_io__V_4_17;
    {
      mercury__parser__read_term_with_op_table_5_p_0(mercury__term_io__TypeInfo_for_T_14, mercury__term_io__TypeClassInfo_for_op_table_13, mercury__term_io__InStream_8, mercury__term_io__Ops_5, mercury__term_io__Result_6);
    }
  }
}

void MR_CALL 
mercury__term_io__read_term_4_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_13,
  MR_Word mercury__term_io__InStream_5,
  MR_Word * mercury__term_io__Result_6)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__TypeClassInfo_for_op_table_14;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__term_io__TypeClassInfo_for_op_table_14 = (MR_Word) &mercury__term_io_scalar_common_1[0];
    {
      mercury__parser__read_term_with_op_table_5_p_0(mercury__term_io__TypeInfo_for_T_13, mercury__term_io__TypeClassInfo_for_op_table_14, mercury__term_io__InStream_5, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Result_6);
    }
  }
}

void MR_CALL 
mercury__term_io__read_term_3_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_11,
  MR_Word * mercury__term_io__Result_4)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__TypeClassInfo_for_op_table_23;
    MR_Word mercury__term_io__InStream_6;
    MR_Box mercury__term_io__V_4_14;

{
#define MR_PROC_LABEL mercury__term_io__read_term_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_14  = (MR_Box) Stream;
}
    mercury__term_io__InStream_6 = (MR_Word) mercury__term_io__V_4_14;
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__term_io__TypeClassInfo_for_op_table_23 = (MR_Word) &mercury__term_io_scalar_common_1[0];
    {
      mercury__parser__read_term_with_op_table_5_p_0(mercury__term_io__TypeInfo_for_T_11, mercury__term_io__TypeClassInfo_for_op_table_23, mercury__term_io__InStream_6, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Result_4);
    }
  }
}

static MR_bool MR_CALL 
mercury__term_io____Unify____adjacent_to_graphic_token_0_0_10001(
  MR_Box mercury__term_io__wrapper_arg_1,
  MR_Box mercury__term_io__wrapper_arg_2)
{
  {
    MR_bool mercury__term_io__succeeded;

    {
      mercury__term_io__succeeded = mercury__term_io____Unify____adjacent_to_graphic_token_0_0(((MR_Word) mercury__term_io__wrapper_arg_1), ((MR_Word) mercury__term_io__wrapper_arg_2));
    }
    return mercury__term_io__succeeded;
  }
}

static void MR_CALL 
mercury__term_io____Compare____adjacent_to_graphic_token_0_0_10001(
  MR_Box * mercury__term_io__wrapper_arg_1,
  MR_Box mercury__term_io__wrapper_arg_2,
  MR_Box mercury__term_io__wrapper_arg_3)
{
  {
    MR_Word mercury__term_io__conv0_HeadVar__1_1;

    {
      mercury__term_io____Compare____adjacent_to_graphic_token_0_0(&mercury__term_io__conv0_HeadVar__1_1, ((MR_Word) mercury__term_io__wrapper_arg_2), ((MR_Word) mercury__term_io__wrapper_arg_3));
    }
    *mercury__term_io__wrapper_arg_1 = ((MR_Box) (mercury__term_io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_io____Unify____read_term_1_0_10001(
  MR_Box mercury__term_io__wrapper_arg_1,
  MR_Box mercury__term_io__wrapper_arg_2,
  MR_Box mercury__term_io__wrapper_arg_3)
{
  {
    MR_bool mercury__term_io__succeeded;

    {
      mercury__term_io__succeeded = mercury__term_io____Unify____read_term_1_0(((MR_Word) mercury__term_io__wrapper_arg_1), ((MR_Word) mercury__term_io__wrapper_arg_2), ((MR_Word) mercury__term_io__wrapper_arg_3));
    }
    return mercury__term_io__succeeded;
  }
}

static void MR_CALL 
mercury__term_io____Compare____read_term_1_0_10001(
  MR_Box mercury__term_io__wrapper_arg_1,
  MR_Box * mercury__term_io__wrapper_arg_2,
  MR_Box mercury__term_io__wrapper_arg_3,
  MR_Box mercury__term_io__wrapper_arg_4)
{
  {
    MR_Word mercury__term_io__conv0_HeadVar__1_1;

    {
      mercury__term_io____Compare____read_term_1_0(((MR_Word) mercury__term_io__wrapper_arg_1), &mercury__term_io__conv0_HeadVar__1_1, ((MR_Word) mercury__term_io__wrapper_arg_3), ((MR_Word) mercury__term_io__wrapper_arg_4));
    }
    *mercury__term_io__wrapper_arg_2 = ((MR_Box) (mercury__term_io__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_io____Unify____read_term_0_0_10001(
  MR_Box mercury__term_io__wrapper_arg_1,
  MR_Box mercury__term_io__wrapper_arg_2)
{
  {
    MR_bool mercury__term_io__succeeded;

    {
      mercury__term_io__succeeded = mercury__term_io____Unify____read_term_0_0(((MR_Word) mercury__term_io__wrapper_arg_1), ((MR_Word) mercury__term_io__wrapper_arg_2));
    }
    return mercury__term_io__succeeded;
  }
}

static void MR_CALL 
mercury__term_io____Compare____read_term_0_0_10001(
  MR_Box * mercury__term_io__wrapper_arg_1,
  MR_Box mercury__term_io__wrapper_arg_2,
  MR_Box mercury__term_io__wrapper_arg_3)
{
  {
    MR_Word mercury__term_io__conv0_HeadVar__1_1;

    {
      mercury__term_io____Compare____read_term_0_0(&mercury__term_io__conv0_HeadVar__1_1, ((MR_Word) mercury__term_io__wrapper_arg_2), ((MR_Word) mercury__term_io__wrapper_arg_3));
    }
    *mercury__term_io__wrapper_arg_1 = ((MR_Box) (mercury__term_io__conv0_HeadVar__1_1));
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

/* :- end_module term_io. */
