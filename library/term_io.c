/*
** Automatically generated from `term_io.m'
** by the Mercury compiler,
** version rotd-2017-01-21
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

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_57_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
  MR_Word mercury__term_io__V_17_17,
  MR_Word mercury__term_io__V_18_18,
  MR_Box mercury__term_io__V_19_19,
  MR_String mercury__term_io__V_8_8,
  MR_Integer mercury__term_io__V_9_9,
  MR_Integer mercury__term_io__V_10_10,
  MR_Box mercury__term_io__V_14_11,
  MR_Box * mercury__term_io__V_15_12);

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_54_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
  MR_Word mercury__term_io__V_17_17,
  MR_Word mercury__term_io__V_18_18,
  MR_Word mercury__term_io__V_19_19,
  MR_String mercury__term_io__V_8_8,
  MR_Integer mercury__term_io__V_9_9,
  MR_Integer mercury__term_io__V_10_10);

static MR_Integer MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(
  MR_Word mercury__term_io__HeadVar__1_1);

static void MR_CALL 
mercury__term_io__foldl_between_2__ho30_6_p_in__string_0(
  MR_String mercury__term_io__V_8_8,
  MR_Integer mercury__term_io__V_9_9,
  MR_Integer mercury__term_io__V_10_10,
  MR_Word mercury__term_io__V_14_11,
  MR_Word * mercury__term_io__V_15_12);

static MR_bool MR_CALL 
mercury__term_io__all_match_loop__ho22_3_p_in__string_0(
  MR_String mercury__term_io__V_5_5,
  MR_Integer mercury__term_io__V_6_6);

static void MR_CALL 
mercury__term_io__write_term_args_9_p_0(
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
mercury__term_io__write_list_tail_9_p_0(
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
mercury__term_io__write_arg_term_9_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_27,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_26,
  MR_Word mercury__term_io__OutStream_10,
  MR_Box mercury__term_io__Ops_11,
  MR_Word mercury__term_io__Term_12,
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_16,
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_17,
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_18,
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_19);


static /* final */ const MR_Box mercury__term_io_scalar_common_1[4][2];

static /* final */ const MR_Box mercury__term_io_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__term_io_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__term_io_scalar_common_4[2][5];

static /* final */ const MR_Integer mercury__term_io_scalar_common_5[1][3];


/* sealed */ struct mercury__term_io__vector_common_type_6_0_s {
  const MR_Integer mercury__term_io__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct mercury__term_io__vector_common_type_6_0_s mercury__term_io_vector_common_6[12];

/* sealed */ struct mercury__term_io__vector_common_type_7_0_s {
  const MR_String mercury__term_io__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct mercury__term_io__vector_common_type_7_0_s mercury__term_io_vector_common_7[24];



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


static /* final */ const struct mercury__term_io__vector_common_type_6_0_s mercury__term_io_vector_common_6[12] = {
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

static /* final */ const struct mercury__term_io__vector_common_type_7_0_s mercury__term_io_vector_common_7[24] = {
  /* row 0 */   {     (MR_String) "0b" },
  /* row 1 */   {     (MR_String) "0o" },
  /* row 2 */   {     (MR_String) "" },
  /* row 3 */   {     (MR_String) "0x" },
  /* row 4 */   {     (MR_String) "!" },
  /* row 5 */   {     (MR_String) ";" },
  /* row 6 */   {     (MR_String) "[]" },
  /* row 7 */   {     (MR_String) "{}" },
  /* row 8 */   {     (MR_String) "!" },
  /* row 9 */   {     (MR_String) ";" },
  /* row 10 */   {     (MR_String) "[]" },
  /* row 11 */   {     (MR_String) "{}" },
  /* row 12 */   {     (MR_String) "0b" },
  /* row 13 */   {     (MR_String) "0o" },
  /* row 14 */   {     (MR_String) "" },
  /* row 15 */   {     (MR_String) "0x" },
  /* row 16 */   {     (MR_String) "0b" },
  /* row 17 */   {     (MR_String) "0o" },
  /* row 18 */   {     (MR_String) "" },
  /* row 19 */   {     (MR_String) "0x" },
  /* row 20 */   {     (MR_String) "!" },
  /* row 21 */   {     (MR_String) ";" },
  /* row 22 */   {     (MR_String) "[]" },
  /* row 23 */   {     (MR_String) "{}" },
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_read_term_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_1 = {
  (MR_String) "error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term_io__term_io__field_types_read_term_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__term_io__term_io__field_types_read_term_1_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__term_io__term_io__du_stag_ordered_read_term_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_io__term_io__du_stag_ordered_read_term_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_57_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
  MR_Word mercury__term_io__V_17_17,
  MR_Word mercury__term_io__V_18_18,
  MR_Box mercury__term_io__V_19_19,
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
              mercury__term_io__write_escaped_char_4_p_0(mercury__term_io__V_17_17, mercury__term_io__V_18_18, mercury__term_io__V_19_19, mercury__term_io__V_13_14, mercury__term_io__V_14_11, &mercury__term_io__V_16_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__term_io__V_9__tmp_copy_9 = mercury__term_io__V_12_13;
              MR_Box mercury__term_io__V_14__tmp_copy_11 = mercury__term_io__V_16_15;

              mercury__term_io__V_14_11 = mercury__term_io__V_14__tmp_copy_11;
              mercury__term_io__V_9_9 = mercury__term_io__V_9__tmp_copy_9;
            }
            continue;
          }
        else
          *mercury__term_io__V_15_12 = mercury__term_io__V_14_11;
      }
      break;
    }
}

static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_54_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
  MR_Word mercury__term_io__V_17_17,
  MR_Word mercury__term_io__V_18_18,
  MR_Word mercury__term_io__V_19_19,
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
              mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__V_17_17, mercury__term_io__V_18_18, mercury__term_io__V_19_19, mercury__term_io__V_13_14);
            }
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__term_io__V_9__tmp_copy_9 = mercury__term_io__V_12_13;

              mercury__term_io__V_9_9 = mercury__term_io__V_9__tmp_copy_9;
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
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_p_0(
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
  MR_Word mercury__term_io__Stream_5,
  MR_Char mercury__term_io__C_6)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_String mercury__term_io__V_10_10;
    MR_String mercury__term_io__V_18_18;
    MR_String mercury__term_io__V_21_21;
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_9;

    {
      mercury__term_io__string_is_escaped_char_2_p_0(mercury__term_io__C_6, &mercury__term_io__V_18_18);
    }
    {
      mercury__string__append_3_p_2(mercury__term_io__V_18_18, (MR_String) "\'", &mercury__term_io__V_21_21);
    }
    {
      mercury__string__append_3_p_2((MR_String) "\'", mercury__term_io__V_21_21, &mercury__term_io__V_10_10);
    }
    mercury__term_io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_12), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (mercury__term_io__V_10_10)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_9);
    }
  }
}

static MR_Integer MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__term_io__succeeded;

    return (MR_Integer) 1200;
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
        MR_Word mercury__term_io__V_30_30;
        MR_Word mercury__term_io__V_31_31;
        MR_Word mercury__term_io__V_29_29;

        if (mercury__term_io__succeeded)
          {
            mercury__term_io__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
            mercury__term_io__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));
            mercury__term_io__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 2)));
            switch (MR_tag((MR_Word) mercury__term_io__V_31_31)) {
              default:
                mercury__term_io__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_String mercury__term_io__Op_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__V_31_31, (MR_Integer) 0)));
                  MR_Word mercury__term_io__Arg_13;
                  MR_Word mercury__term_io__V_32_32;
                  MR_Word mercury__term_io__V_33_33;

                  mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_30_30)) == (MR_mktag((MR_Integer) 1)));
                  if (mercury__term_io__succeeded)
                    {
                      mercury__term_io__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_30_30, (MR_Integer) 0)));
                      mercury__term_io__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_30_30, (MR_Integer) 1)));
                      if ((mercury__term_io__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word mercury__term_io__TypeClassInfo_for_op_table_28;
                          MR_Integer mercury__term_io__V_18_18;
                          MR_Word mercury__term_io__V_19_19;
                          MR_bool MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
                          MR_Box mercury__term_io__conv2_V_18_18;
                          MR_Box mercury__term_io__conv1_V_19_19;

                          mercury__term_io__Arg_13 = mercury__term_io__V_33_33;
                          mercury__private_builtin__dummy_var = (MR_Integer) 0;
                          mercury__term_io__TypeClassInfo_for_op_table_28 = (MR_Word) &mercury__term_io_scalar_common_1[0];
                          mercury__term_io__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_28, (MR_Integer) 0)), (MR_Integer) 8)));
                          {
                            mercury__term_io__succeeded = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_28), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__term_io__Op_10)), &mercury__term_io__conv2_V_18_18, &mercury__term_io__conv1_V_19_19);
                          }
                          if (mercury__term_io__succeeded)
                            {
                              mercury__term_io__V_18_18 = ((MR_Integer) mercury__term_io__conv2_V_18_18);
                              mercury__term_io__V_19_19 = ((MR_Word) mercury__term_io__conv1_V_19_19);
                              mercury__term_io__succeeded = MR_TRUE;
                            }
                        }
                      else
                        {
                          MR_Word mercury__term_io__TypeClassInfo_for_op_table_27;
                          MR_Word mercury__term_io__V_24_24;
                          MR_Word mercury__term_io__V_14_14;
                          MR_Integer mercury__term_io__V_15_15;
                          MR_Word mercury__term_io__V_16_16;
                          MR_Word mercury__term_io__V_17_17;
                          MR_bool MR_CALL (* mercury__term_io__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
                          MR_Box mercury__term_io__conv6_V_15_15;
                          MR_Box mercury__term_io__conv5_V_16_16;
                          MR_Box mercury__term_io__conv4_V_17_17;

                          mercury__term_io__Arg_13 = mercury__term_io__V_33_33;
                          mercury__term_io__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 0)));
                          mercury__term_io__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 1)));
                          mercury__term_io__succeeded = (mercury__term_io__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (mercury__term_io__succeeded)
                            {
                              mercury__private_builtin__dummy_var = (MR_Integer) 0;
                              mercury__term_io__TypeClassInfo_for_op_table_27 = (MR_Word) &mercury__term_io_scalar_common_1[0];
                              mercury__term_io__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_27, (MR_Integer) 0)), (MR_Integer) 5)));
                              {
                                mercury__term_io__succeeded = mercury__term_io__func_3(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_27), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__term_io__Op_10)), &mercury__term_io__conv6_V_15_15, &mercury__term_io__conv5_V_16_16, &mercury__term_io__conv4_V_17_17);
                              }
                              if (mercury__term_io__succeeded)
                                {
                                  mercury__term_io__V_15_15 = ((MR_Integer) mercury__term_io__conv6_V_15_15);
                                  mercury__term_io__V_16_16 = ((MR_Word) mercury__term_io__conv5_V_16_16);
                                  mercury__term_io__V_17_17 = ((MR_Word) mercury__term_io__conv4_V_17_17);
                                  mercury__term_io__succeeded = MR_TRUE;
                                }
                            }
                        }
                      if (mercury__term_io__succeeded)
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word mercury__term_io__HeadVar__1__tmp_copy_1 = mercury__term_io__Arg_13;

                            mercury__term_io__HeadVar__1_1 = mercury__term_io__HeadVar__1__tmp_copy_1;
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
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_io__V_31_31, (MR_Integer) 0)))) {
                  default:
                    mercury__term_io__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
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
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_p_0(
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
  MR_Box mercury__term_io__Stream_5,
  MR_Char mercury__term_io__C_6,
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_8,
  MR_Box * mercury__term_io__STATE_VARIABLE_State_9)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_String mercury__term_io__V_10_10;
    MR_String mercury__term_io__V_18_18;
    MR_String mercury__term_io__V_21_21;
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      mercury__term_io__string_is_escaped_char_2_p_0(mercury__term_io__C_6, &mercury__term_io__V_18_18);
    }
    {
      mercury__string__append_3_p_2(mercury__term_io__V_18_18, (MR_String) "\'", &mercury__term_io__V_21_21);
    }
    {
      mercury__string__append_3_p_2((MR_String) "\'", mercury__term_io__V_21_21, &mercury__term_io__V_10_10);
    }
    mercury__term_io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_12), mercury__term_io__Stream_5, ((MR_Box) (mercury__term_io__V_10_10)), mercury__term_io__STATE_VARIABLE_State_0_8, mercury__term_io__STATE_VARIABLE_State_9);
    }
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
              MR_Integer mercury__term_io__V_9__tmp_copy_9 = mercury__term_io__V_12_13;
              MR_Word mercury__term_io__V_14__tmp_copy_11 = mercury__term_io__V_16_15;

              mercury__term_io__V_14_11 = mercury__term_io__V_14__tmp_copy_11;
              mercury__term_io__V_9_9 = mercury__term_io__V_9__tmp_copy_9;
            }
            continue;
          }
        else
          *mercury__term_io__V_15_12 = mercury__term_io__V_14_11;
      }
      break;
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
                  MR_Integer mercury__term_io__V_6__tmp_copy_6 = mercury__term_io__V_7_7;

                  mercury__term_io__V_6_6 = mercury__term_io__V_6__tmp_copy_6;
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
                MR_Integer mercury__term_io__V_20_20;

{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_6 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_20_20  = Int;
}
                mercury__term_io__succeeded = (mercury__term_io__V_20_20 >= (MR_Integer) 128);
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
            MR_String mercury__term_io__V_15_15;
            void MR_CALL (* mercury__term_io__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box mercury__term_io__conv7_STATE_VARIABLE_State_10;

            {
              mercury__term_io__V_15_15 = mercury__term_io__mercury_escape_char_1_f_0(mercury__term_io__Char_6);
            }
            mercury__term_io__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__term_io__func_6(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_17), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (mercury__term_io__V_15_15)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv7_STATE_VARIABLE_State_10);
            }
          }
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
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word mercury__term_io__TypeClassInfo_for_writer_19,
  MR_Word mercury__term_io__TypeClassInfo_for_writer_20,
  MR_Word mercury__term_io__Stream_6,
  MR_String mercury__term_io__S_7,
  MR_Word mercury__term_io__NextToGraphicToken_8)
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
          mercury__term_io__result_3 = MR_strcmp(mercury__term_io__S_7, ((&mercury__term_io_vector_common_7[20 + mercury__term_io__mid_2]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0);
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
          MR_Integer mercury__term_io__V_26_26;
          MR_Char mercury__term_io__V_27_27;
          MR_Char mercury__term_io__V_30_30;
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
                  mercury__term_io__V_26_26 = (MR_Integer) 0;
                  mercury__term_io__V_27_27 = (MR_Char) 35;
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

	Index =  mercury__term_io__V_26_26 ;
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
                        mercury__string__unsafe_index_3_p_0(mercury__term_io__S_7, mercury__term_io__V_26_26, &mercury__term_io__V_30_30);
                      }
                      mercury__term_io__succeeded = (mercury__term_io__V_27_27 == mercury__term_io__V_30_30);
                    }
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
                  if (mercury__term_io__succeeded)
                    mercury__term_io__succeeded = (mercury__term_io__NextToGraphicToken_8 == (MR_Integer) 1);
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
            MR_Integer mercury__term_io__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
            MR_String mercury__term_io__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__term_io__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__term_io__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__term_io__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__term_io__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__term_io__V_14_14;
                  MR_Integer mercury__term_io__V_7_46;

{
#define MR_PROC_LABEL mercury__term_io____Compare____read_term_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_io__V_40_40 ;
	S2 =  mercury__term_io__V_12_12 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_7_46  = Res;
}
                  mercury__term_io__succeeded = (mercury__term_io__V_7_46 < (MR_Integer) 0);
                  if (mercury__term_io__succeeded)
                    mercury__term_io__V_14_14 = (MR_Integer) 1;
                  else
                    {
                      mercury__term_io__succeeded = (mercury__term_io__V_7_46 == (MR_Integer) 0);
                      if (mercury__term_io__succeeded)
                        mercury__term_io__V_14_14 = (MR_Integer) 0;
                      else
                        mercury__term_io__V_14_14 = (MR_Integer) 2;
                    }
                  mercury__term_io__succeeded = (mercury__term_io__V_14_14 == (MR_Integer) 0);
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
                  if (mercury__term_io__succeeded)
                    *mercury__term_io__HeadVar__1_1 = mercury__term_io__V_14_14;
                  else
                    {
                      mercury__term_io__succeeded = (mercury__term_io__V_39_39 < mercury__term_io__V_13_13);
                      if (mercury__term_io__succeeded)
                        *mercury__term_io__HeadVar__1_1 = (MR_Integer) 1;
                      else
                        {
                          mercury__term_io__succeeded = (mercury__term_io__V_39_39 == mercury__term_io__V_13_13);
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
            MR_Word mercury__term_io__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__term_io__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word mercury__term_io__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mercury__term_io__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__term_io__V_29_29;

                  {
                    mercury__varset____Compare____varset_1_0(mercury__term_io__TypeInfo_for_T_32, &mercury__term_io__V_29_29, mercury__term_io__V_42_42, mercury__term_io__V_27_27);
                  }
                  mercury__term_io__succeeded = (mercury__term_io__V_29_29 == (MR_Integer) 0);
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
                  if (mercury__term_io__succeeded)
                    *mercury__term_io__HeadVar__1_1 = mercury__term_io__V_29_29;
                  else
                    {
                      mercury__term____Compare____term_1_0(mercury__term_io__TypeInfo_for_T_32, mercury__term_io__HeadVar__1_1, mercury__term_io__V_41_41, mercury__term_io__V_28_28);
                    }
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
            MR_String mercury__term_io__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__term_io__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));
            MR_String mercury__term_io__V_7_7;
            MR_Integer mercury__term_io__V_8_8;

            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__term_io__succeeded)
              {
                mercury__term_io__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));
                mercury__term_io__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
                mercury__term_io__succeeded = (strcmp(mercury__term_io__V_5_5, mercury__term_io__V_7_7) == 0);
                if (mercury__term_io__succeeded)
                  mercury__term_io__succeeded = (mercury__term_io__V_6_6 == mercury__term_io__V_8_8);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__term_io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__term_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__term_io__V_11_11;
            MR_Word mercury__term_io__V_12_12;

            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__term_io__succeeded)
              {
                mercury__term_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));
                mercury__term_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
                {
                  mercury__term_io__succeeded = mercury__varset____Unify____varset_1_0(mercury__term_io__TypeInfo_for_T_15, mercury__term_io__V_9_9, mercury__term_io__V_11_11);
                }
                if (mercury__term_io__succeeded)
                  {
                    mercury__term_io__succeeded = mercury__term____Unify____term_1_0(mercury__term_io__TypeInfo_for_T_15, mercury__term_io__V_10_10, mercury__term_io__V_12_12);
                  }
              }
          }
          break;
      }
    return mercury__term_io__succeeded;
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
        MR_String mercury__term_io__V_8_8;
        MR_Word mercury__term_io__V_9_9;
        MR_Word mercury__term_io__V_11_11;
        MR_Word mercury__term_io__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__term_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_io__V_11_11, 0) = ((MR_Box) (MR_Word) (mercury__term_io__QuoteChar_7));
          MR_hl_field(MR_mktag(1), mercury__term_io__V_11_11, 1) = ((MR_Box) (mercury__term_io__V_12_12));
        }
        {
          mercury__term_io__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_io__V_9_9, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
          MR_hl_field(MR_mktag(1), mercury__term_io__V_9_9, 1) = ((MR_Box) (mercury__term_io__V_11_11));
        }
        {
          mercury__string__from_char_list_2_p_0(mercury__term_io__V_9_9, &mercury__term_io__V_8_8);
        }
        {
          mercury__term_io__Strings_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 0) = ((MR_Box) (mercury__term_io__V_8_8));
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
                MR_Integer mercury__term_io__V_18_18;

{
#define MR_PROC_LABEL mercury__term_io__add_escaped_char_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_4 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_18_18  = Int;
}
                mercury__term_io__succeeded = (mercury__term_io__V_18_18 >= (MR_Integer) 128);
              }
          }
        if (mercury__term_io__succeeded)
          {
            MR_String mercury__term_io__V_13_13;
            MR_Word mercury__term_io__V_5_26;
            MR_Word mercury__term_io__V_6_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__term_io__V_5_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_io__V_5_26, 0) = ((MR_Box) (MR_Word) (mercury__term_io__Char_4));
              MR_hl_field(MR_mktag(1), mercury__term_io__V_5_26, 1) = ((MR_Box) (mercury__term_io__V_6_27));
            }
            {
              mercury__string__to_char_list_2_p_1(&mercury__term_io__V_13_13, mercury__term_io__V_5_26);
            }
            {
              mercury__term_io__Strings_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 0) = ((MR_Box) (mercury__term_io__V_13_13));
              MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 1) = ((MR_Box) (mercury__term_io__Strings0_5));
            }
          }
        else
          {
            MR_String mercury__term_io__V_14_14;

            {
              mercury__term_io__V_14_14 = mercury__term_io__mercury_escape_char_1_f_0(mercury__term_io__Char_4);
            }
            {
              mercury__term_io__Strings_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 0) = ((MR_Box) (mercury__term_io__V_14_14));
              MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 1) = ((MR_Box) (mercury__term_io__Strings0_5));
            }
          }
      }
    return mercury__term_io__Strings_6;
  }
}

MR_String MR_CALL 
mercury__term_io__format_constant_agt_2_f_0(
  MR_Word mercury__term_io__HeadVar__1_1,
  MR_Word mercury__term_io__NextToGraphicToken_2)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_String mercury__term_io__HeadVar__3_3;

    switch (MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String mercury__term_io__A_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));

          {
            mercury__term_io__HeadVar__3_3 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__term_io__A_14, mercury__term_io__NextToGraphicToken_2);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer mercury__term_io__I_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));

          {
            mercury__string__int_to_base_string_3_p_0(mercury__term_io__I_4, (MR_Integer) 10, &mercury__term_io__HeadVar__3_3);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__term_io__Base_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word mercury__term_io__I_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));
          MR_String mercury__term_io__V_9_9 = ((&mercury__term_io_vector_common_7[16 + mercury__term_io__Base_6]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;
          MR_String mercury__term_io__V_10_10;
          MR_Integer mercury__term_io__V_11_11 = ((&mercury__term_io_vector_common_6[8 + mercury__term_io__Base_6]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;

          {
            mercury__term_io__V_10_10 = mercury__integer__to_base_string_2_f_0(mercury__term_io__I_7, mercury__term_io__V_11_11);
          }
          {
            mercury__string__append_3_p_2(mercury__term_io__V_9_9, mercury__term_io__V_10_10, &mercury__term_io__HeadVar__3_3);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String mercury__term_io__S_16 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));

              {
                mercury__term_io__HeadVar__3_3 = mercury__term_io__quoted_string_1_f_0(mercury__term_io__S_16);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Float mercury__term_io__F_12 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));

{
#define MR_PROC_LABEL mercury__term_io__format_constant_agt_2_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__term_io__F_12 ;
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
	 mercury__term_io__HeadVar__3_3  = Str;
}
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String mercury__term_io__N_18 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));

              {
                mercury__string__append_3_p_2((MR_String) "\044", mercury__term_io__N_18, &mercury__term_io__HeadVar__3_3);
              }
            }
            break;
        }
        break;
    }
    return mercury__term_io__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__term_io__write_constant_5_p_0(
  MR_Word mercury__term_io__OutStream_6,
  MR_Word mercury__term_io__Const_7,
  MR_Word mercury__term_io__NextToGraphicToken_8)
{
  {
    MR_bool mercury__term_io__succeeded;

    switch (MR_tag((MR_Word) mercury__term_io__Const_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mercury__term_io__TypeClassInfo_for_writer_31 = (MR_Word) &mercury__term_io_scalar_common_4[0];
          MR_Word mercury__term_io__TypeClassInfo_for_writer_32 = (MR_Word) &mercury__term_io_scalar_common_4[1];
          MR_String mercury__term_io__A_15 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Const_7, (MR_Integer) 0)));

          {
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(mercury__term_io__TypeClassInfo_for_writer_31, mercury__term_io__TypeClassInfo_for_writer_32, mercury__term_io__OutStream_6, mercury__term_io__A_15, mercury__term_io__NextToGraphicToken_8);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer mercury__term_io__I_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__Const_7, (MR_Integer) 0)));
          MR_Box mercury__term_io__V_5_57 = (MR_Box) mercury__term_io__OutStream_6;
          MR_Box mercury__term_io__V_8_58;
          MR_Word mercury__term_io__V_8_68;
          MR_String mercury__term_io__V_6_72;

{
#define MR_PROC_LABEL mercury__term_io__write_constant_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) mercury__term_io__V_5_57 ;
	Val =  mercury__term_io__I_10 ;
		{

    if (ML_fprintf(Stream, "%" MR_INTEGER_LENGTH_MODIFIER "d", Val) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__term_io__V_8_58 );
}
{
#define MR_PROC_LABEL mercury__term_io__write_constant_5_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__term_io__V_8_58 , Error);
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

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__term_io__V_8_58 , Error);
	Msg0 =  (MR_String) "error writing to output file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_6_72  = Msg;
}
              mercury__term_io__succeeded = MR_TRUE;
            }
          if (mercury__term_io__succeeded)
            {
              mercury__term_io__V_8_68 = (MR_Word) mercury__term_io__V_6_72;
              mercury__term_io__succeeded = MR_TRUE;
            }
          if (mercury__term_io__succeeded)
            {
              MR_Word mercury__term_io__TypeCtorInfo_10_69 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;

              {
                mercury__exception__throw_1_p_0(mercury__term_io__TypeCtorInfo_10_69, ((MR_Box) (mercury__term_io__V_8_68)));
                return;
              }
            }
          else
            {
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__term_io__Base_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__Const_7, (MR_Integer) 0)));
          MR_String mercury__term_io__Prefix_12 = ((&mercury__term_io_vector_common_7[12 + mercury__term_io__Base_11]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;
          MR_String mercury__term_io__IntString_13;
          MR_Integer mercury__term_io__V_26_26 = ((&mercury__term_io_vector_common_6[4 + mercury__term_io__Base_11]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;
          MR_Word mercury__term_io__I_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__Const_7, (MR_Integer) 1)));

          {
            mercury__term_io__IntString_13 = mercury__integer__to_base_string_2_f_0(mercury__term_io__I_30, mercury__term_io__V_26_26);
          }
          {
            mercury__io__write_string_4_p_0(mercury__term_io__OutStream_6, mercury__term_io__Prefix_12);
          }
          {
            mercury__io__write_string_4_p_0(mercury__term_io__OutStream_6, mercury__term_io__IntString_13);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_io__Const_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mercury__term_io__TypeClassInfo_for_writer_33 = (MR_Word) &mercury__term_io_scalar_common_4[0];
              MR_Word mercury__term_io__TypeClassInfo_for_writer_34 = (MR_Word) &mercury__term_io_scalar_common_4[1];
              MR_String mercury__term_io__S_16 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_io__Const_7, (MR_Integer) 1)));
              void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
              MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_11_79;
              void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              MR_Box mercury__term_io__conv3_STATE_VARIABLE_IO_19;

              {
                mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_34), ((MR_Box) (mercury__term_io__OutStream_6)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_11_79);
              }
              {
                mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_33, mercury__term_io__TypeClassInfo_for_writer_34, mercury__term_io__OutStream_6, mercury__term_io__S_16);
              }
              mercury__term_io__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_34), ((MR_Box) (mercury__term_io__OutStream_6)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_IO_19);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Float mercury__term_io__F_14 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term_io__Const_7, (MR_Integer) 1)));
              MR_Box mercury__term_io__V_5_38 = (MR_Box) mercury__term_io__OutStream_6;
              MR_Box mercury__term_io__V_8_39;
              MR_Word mercury__term_io__V_8_49;
              MR_String mercury__term_io__V_6_53;

{
#define MR_PROC_LABEL mercury__term_io__write_constant_5_p_0

	MercuryFilePtr Stream;
	MR_Float Val;
	MR_Integer Error;

	Stream = (MercuryFilePtr) mercury__term_io__V_5_38 ;
	Val =  mercury__term_io__F_14 ;
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__term_io__V_8_39 );
}
{
#define MR_PROC_LABEL mercury__term_io__write_constant_5_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__term_io__V_8_39 , Error);
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

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__term_io__V_8_39 , Error);
	Msg0 =  (MR_String) "error writing to output file: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_6_53  = Msg;
}
                  mercury__term_io__succeeded = MR_TRUE;
                }
              if (mercury__term_io__succeeded)
                {
                  mercury__term_io__V_8_49 = (MR_Word) mercury__term_io__V_6_53;
                  mercury__term_io__succeeded = MR_TRUE;
                }
              if (mercury__term_io__succeeded)
                {
                  MR_Word mercury__term_io__TypeCtorInfo_10_50 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;

                  {
                    mercury__exception__throw_1_p_0(mercury__term_io__TypeCtorInfo_10_50, ((MR_Box) (mercury__term_io__V_8_49)));
                    return;
                  }
                }
              else
                {
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String mercury__term_io__N_17 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_io__Const_7, (MR_Integer) 1)));

              {
                mercury__io__write_char_4_p_0(mercury__term_io__OutStream_6, (MR_Char) 36);
              }
              {
                mercury__io__write_string_4_p_0(mercury__term_io__OutStream_6, mercury__term_io__N_17);
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__term_io__write_term_args_9_p_0(
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
            MR_Integer mercury__term_io__V_56_56;
            MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box);
            MR_Box mercury__term_io__conv1_V_56_56;

            {
              mercury__io__write_string_4_p_0(mercury__term_io__OutStream_1, (MR_String) ", ");
            }
            mercury__term_io__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_42, (MR_Integer) 0)), (MR_Integer) 13)));
            {
              mercury__term_io__conv1_V_56_56 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_42), mercury__term_io__Ops_2);
            }
            mercury__term_io__V_56_56 = ((MR_Integer) mercury__term_io__conv1_V_56_56);
            {
              mercury__term_io__write_term_3_10_p_0(mercury__term_io__TypeInfo_for_T_43, mercury__term_io__TypeClassInfo_for_op_table_42, mercury__term_io__OutStream_1, mercury__term_io__Ops_2, mercury__term_io__X_23, mercury__term_io__V_56_56, mercury__term_io__STATE_VARIABLE_VarSet_0_4, &mercury__term_io__STATE_VARIABLE_VarSet_36_36, mercury__term_io__STATE_VARIABLE_N_0_6, &mercury__term_io__STATE_VARIABLE_N_37_37);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__term_io__HeadVar__3__tmp_copy_3 = mercury__term_io__Xs_24;
              MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0__tmp_copy_4 = mercury__term_io__STATE_VARIABLE_VarSet_36_36;
              MR_Integer mercury__term_io__STATE_VARIABLE_N_0__tmp_copy_6 = mercury__term_io__STATE_VARIABLE_N_37_37;

              mercury__term_io__STATE_VARIABLE_N_0_6 = mercury__term_io__STATE_VARIABLE_N_0__tmp_copy_6;
              mercury__term_io__STATE_VARIABLE_VarSet_0_4 = mercury__term_io__STATE_VARIABLE_VarSet_0__tmp_copy_4;
              mercury__term_io__HeadVar__3_3 = mercury__term_io__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__term_io__write_list_tail_9_p_0(
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
        MR_Word mercury__term_io__Val_18;
        MR_Word mercury__term_io__TypeCtorInfo_12_62;
        MR_Word mercury__term_io__TypeInfo_13_63;
        MR_Word mercury__term_io__TypeCtorInfo_14_64;
        MR_Word mercury__term_io__TypeInfo_15_65;
        MR_Word mercury__term_io__Id_16;
        MR_Word mercury__term_io__V_7_60;
        MR_Word mercury__term_io__V_17_17;
        MR_Word mercury__term_io__V_8_58;
        MR_Word mercury__term_io__V_9_59;
        MR_Box mercury__term_io__conv0_Val_18;

        if (mercury__term_io__succeeded)
          {
            mercury__term_io__Id_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Term_12, (MR_Integer) 0)));
            mercury__term_io__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Term_12, (MR_Integer) 1)));
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
              mercury__term_io__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term_io__TypeInfo_for_T_54, mercury__term_io__TypeInfo_13_63, mercury__term_io__TypeInfo_15_65, mercury__term_io__V_7_60, mercury__term_io__Id_16, &mercury__term_io__conv0_Val_18);
            }
            if (mercury__term_io__succeeded)
              {
                mercury__term_io__Val_18 = ((MR_Word) mercury__term_io__conv0_Val_18);
                mercury__term_io__succeeded = MR_TRUE;
              }
          }
        if (mercury__term_io__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word mercury__term_io__Term__tmp_copy_12 = mercury__term_io__Val_18;

              mercury__term_io__Term_12 = mercury__term_io__Term__tmp_copy_12;
            }
            continue;
          }
        else
          {
            MR_Word mercury__term_io__ListHead_19;
            MR_Word mercury__term_io__ListTail_20;
            MR_Word mercury__term_io__V_32_32;
            MR_String mercury__term_io__V_33_33;
            MR_Word mercury__term_io__V_34_34;
            MR_Word mercury__term_io__V_35_35;
            MR_Word mercury__term_io__V_36_36;
            MR_Word mercury__term_io__V_21_21;

            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Term_12)) == (MR_mktag((MR_Integer) 0)));
            if (mercury__term_io__succeeded)
              {
                mercury__term_io__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_12, (MR_Integer) 0)));
                mercury__term_io__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_12, (MR_Integer) 1)));
                mercury__term_io__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_12, (MR_Integer) 2)));
                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_32_32)) == (MR_mktag((MR_Integer) 0)));
                if (mercury__term_io__succeeded)
                  {
                    mercury__term_io__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__V_32_32, (MR_Integer) 0)));
                    mercury__term_io__succeeded = (strcmp(mercury__term_io__V_33_33, (MR_String) "[|]") == 0);
                    if (mercury__term_io__succeeded)
                      {
                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_34_34)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__term_io__succeeded)
                          {
                            mercury__term_io__ListHead_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_34_34, (MR_Integer) 0)));
                            mercury__term_io__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_34_34, (MR_Integer) 1)));
                            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_35_35)) == (MR_mktag((MR_Integer) 1)));
                            if (mercury__term_io__succeeded)
                              {
                                mercury__term_io__ListTail_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_35_35, (MR_Integer) 0)));
                                mercury__term_io__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_35_35, (MR_Integer) 1)));
                                mercury__term_io__succeeded = (mercury__term_io__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                          }
                      }
                  }
              }
            if (mercury__term_io__succeeded)
              {
                MR_Word mercury__term_io__STATE_VARIABLE_VarSet_39_39;
                MR_Integer mercury__term_io__STATE_VARIABLE_N_40_40;
                MR_Integer mercury__term_io__V_82_82;
                MR_Box MR_CALL (* mercury__term_io__func_1)(MR_Box, MR_Box);
                MR_Box mercury__term_io__conv2_V_82_82;

                {
                  mercury__io__write_string_4_p_0(mercury__term_io__OutStream_10, (MR_String) ", ");
                }
                mercury__term_io__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_53, (MR_Integer) 0)), (MR_Integer) 13)));
                {
                  mercury__term_io__conv2_V_82_82 = mercury__term_io__func_1(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_53), mercury__term_io__Ops_11);
                }
                mercury__term_io__V_82_82 = ((MR_Integer) mercury__term_io__conv2_V_82_82);
                {
                  mercury__term_io__write_term_3_10_p_0(mercury__term_io__TypeInfo_for_T_54, mercury__term_io__TypeClassInfo_for_op_table_53, mercury__term_io__OutStream_10, mercury__term_io__Ops_11, mercury__term_io__ListHead_19, mercury__term_io__V_82_82, mercury__term_io__STATE_VARIABLE_VarSet_0_23, &mercury__term_io__STATE_VARIABLE_VarSet_39_39, mercury__term_io__STATE_VARIABLE_N_0_25, &mercury__term_io__STATE_VARIABLE_N_40_40);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__term_io__Term__tmp_copy_12 = mercury__term_io__ListTail_20;
                  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0__tmp_copy_23 = mercury__term_io__STATE_VARIABLE_VarSet_39_39;
                  MR_Integer mercury__term_io__STATE_VARIABLE_N_0__tmp_copy_25 = mercury__term_io__STATE_VARIABLE_N_40_40;

                  mercury__term_io__STATE_VARIABLE_N_0_25 = mercury__term_io__STATE_VARIABLE_N_0__tmp_copy_25;
                  mercury__term_io__STATE_VARIABLE_VarSet_0_23 = mercury__term_io__STATE_VARIABLE_VarSet_0__tmp_copy_23;
                  mercury__term_io__Term_12 = mercury__term_io__Term__tmp_copy_12;
                }
                continue;
              }
            else
              {
                MR_Word mercury__term_io__V_45_45;
                MR_String mercury__term_io__V_46_46;
                MR_Word mercury__term_io__V_47_47;
                MR_Word mercury__term_io__V_22_22;

                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Term_12)) == (MR_mktag((MR_Integer) 0)));
                if (mercury__term_io__succeeded)
                  {
                    mercury__term_io__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_12, (MR_Integer) 0)));
                    mercury__term_io__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_12, (MR_Integer) 1)));
                    mercury__term_io__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_12, (MR_Integer) 2)));
                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_45_45)) == (MR_mktag((MR_Integer) 0)));
                    if (mercury__term_io__succeeded)
                      {
                        mercury__term_io__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__V_45_45, (MR_Integer) 0)));
                        mercury__term_io__succeeded = (strcmp(mercury__term_io__V_46_46, (MR_String) "[]") == 0);
                        if (mercury__term_io__succeeded)
                          mercury__term_io__succeeded = (mercury__term_io__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                      mercury__term_io__write_term_2_9_p_0(mercury__term_io__TypeInfo_for_T_54, mercury__term_io__TypeClassInfo_for_op_table_53, mercury__term_io__OutStream_10, mercury__term_io__Ops_11, mercury__term_io__Term_12, mercury__term_io__STATE_VARIABLE_VarSet_0_23, mercury__term_io__STATE_VARIABLE_VarSet_24, mercury__term_io__STATE_VARIABLE_N_0_25, mercury__term_io__STATE_VARIABLE_N_26);
                    }
                  }
              }
          }
      }
      break;
    }
}

void MR_CALL 
mercury__term_io__write_term_3_10_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_215,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_214,
  MR_Word mercury__term_io__OutStream_1,
  MR_Box mercury__term_io__Ops_2,
  MR_Word mercury__term_io__HeadVar__3_3,
  MR_Integer mercury__term_io__Priority_4,
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_5,
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_6,
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_7,
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_8)
{
  {
    MR_bool mercury__term_io__succeeded;

    if (((MR_tag((MR_Word) mercury__term_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mercury__term_io__Functor_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__term_io__Args_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__term_io__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__term_io__ListHead_37;
        MR_Word mercury__term_io__ListTail_38;
        MR_String mercury__term_io__V_72_72;
        MR_Word mercury__term_io__V_73_73;
        MR_Word mercury__term_io__V_74_74;

        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_30)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__term_io__succeeded)
          {
            mercury__term_io__V_72_72 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_30, (MR_Integer) 0)));
            mercury__term_io__succeeded = (strcmp(mercury__term_io__V_72_72, (MR_String) "[|]") == 0);
            if (mercury__term_io__succeeded)
              {
                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_31)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__term_io__succeeded)
                  {
                    mercury__term_io__ListHead_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_31, (MR_Integer) 0)));
                    mercury__term_io__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_31, (MR_Integer) 1)));
                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_73_73)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__term_io__succeeded)
                      {
                        mercury__term_io__ListTail_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_73_73, (MR_Integer) 0)));
                        mercury__term_io__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_73_73, (MR_Integer) 1)));
                        mercury__term_io__succeeded = (mercury__term_io__V_74_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
        if (mercury__term_io__succeeded)
          {
            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_77_77;
            MR_Integer mercury__term_io__STATE_VARIABLE_N_78_78;

            {
              mercury__io__write_char_4_p_0(mercury__term_io__OutStream_1, (MR_Char) 91);
            }
            {
              mercury__term_io__write_arg_term_9_p_0(mercury__term_io__TypeInfo_for_T_215, mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__OutStream_1, mercury__term_io__Ops_2, mercury__term_io__ListHead_37, mercury__term_io__STATE_VARIABLE_VarSet_0_5, &mercury__term_io__STATE_VARIABLE_VarSet_77_77, mercury__term_io__STATE_VARIABLE_N_0_7, &mercury__term_io__STATE_VARIABLE_N_78_78);
            }
            {
              mercury__term_io__write_list_tail_9_p_0(mercury__term_io__TypeInfo_for_T_215, mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__OutStream_1, mercury__term_io__Ops_2, mercury__term_io__ListTail_38, mercury__term_io__STATE_VARIABLE_VarSet_77_77, mercury__term_io__STATE_VARIABLE_VarSet_6, mercury__term_io__STATE_VARIABLE_N_78_78, mercury__term_io__STATE_VARIABLE_N_8);
            }
            {
              mercury__io__write_char_4_p_0(mercury__term_io__OutStream_1, (MR_Char) 93);
            }
          }
        else
          {
            MR_String mercury__term_io__V_85_85;

            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_30)) == (MR_mktag((MR_Integer) 0)));
            if (mercury__term_io__succeeded)
              {
                mercury__term_io__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_30, (MR_Integer) 0)));
                mercury__term_io__succeeded = (strcmp(mercury__term_io__V_85_85, (MR_String) "[]") == 0);
                if (mercury__term_io__succeeded)
                  mercury__term_io__succeeded = (mercury__term_io__Args_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            if (mercury__term_io__succeeded)
              {
                {
                  mercury__io__write_string_4_p_0(mercury__term_io__OutStream_1, (MR_String) "[]");
                }
                *mercury__term_io__STATE_VARIABLE_N_8 = mercury__term_io__STATE_VARIABLE_N_0_7;
                *mercury__term_io__STATE_VARIABLE_VarSet_6 = mercury__term_io__STATE_VARIABLE_VarSet_0_5;
              }
            else
              {
                MR_Word mercury__term_io__BracedTerm_39;
                MR_String mercury__term_io__V_88_88;
                MR_Word mercury__term_io__V_89_89;

                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_30)) == (MR_mktag((MR_Integer) 0)));
                if (mercury__term_io__succeeded)
                  {
                    mercury__term_io__V_88_88 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_30, (MR_Integer) 0)));
                    mercury__term_io__succeeded = (strcmp(mercury__term_io__V_88_88, (MR_String) "{}") == 0);
                    if (mercury__term_io__succeeded)
                      {
                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_31)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__term_io__succeeded)
                          {
                            mercury__term_io__BracedTerm_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_31, (MR_Integer) 0)));
                            mercury__term_io__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_31, (MR_Integer) 1)));
                            mercury__term_io__succeeded = (mercury__term_io__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
                if (mercury__term_io__succeeded)
                  {
                    {
                      mercury__io__write_string_4_p_0(mercury__term_io__OutStream_1, (MR_String) "{ ");
                    }
                    {
                      mercury__term_io__write_term_2_9_p_0(mercury__term_io__TypeInfo_for_T_215, mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__OutStream_1, mercury__term_io__Ops_2, mercury__term_io__BracedTerm_39, mercury__term_io__STATE_VARIABLE_VarSet_0_5, mercury__term_io__STATE_VARIABLE_VarSet_6, mercury__term_io__STATE_VARIABLE_N_0_7, mercury__term_io__STATE_VARIABLE_N_8);
                    }
                    {
                      mercury__io__write_string_4_p_0(mercury__term_io__OutStream_1, (MR_String) " }");
                    }
                  }
                else
                  {
                    MR_Word mercury__term_io__BracedHead_40;
                    MR_Word mercury__term_io__BracedTail_41;
                    MR_String mercury__term_io__V_97_97;

                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_30)) == (MR_mktag((MR_Integer) 0)));
                    if (mercury__term_io__succeeded)
                      {
                        mercury__term_io__V_97_97 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_30, (MR_Integer) 0)));
                        mercury__term_io__succeeded = (strcmp(mercury__term_io__V_97_97, (MR_String) "{}") == 0);
                        if (mercury__term_io__succeeded)
                          {
                            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_31)) == (MR_mktag((MR_Integer) 1)));
                            if (mercury__term_io__succeeded)
                              {
                                mercury__term_io__BracedHead_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_31, (MR_Integer) 0)));
                                mercury__term_io__BracedTail_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_31, (MR_Integer) 1)));
                              }
                          }
                      }
                    if (mercury__term_io__succeeded)
                      {
                        MR_Word mercury__term_io__STATE_VARIABLE_VarSet_100_100;
                        MR_Integer mercury__term_io__STATE_VARIABLE_N_101_101;

                        {
                          mercury__io__write_char_4_p_0(mercury__term_io__OutStream_1, (MR_Char) 123);
                        }
                        {
                          mercury__term_io__write_arg_term_9_p_0(mercury__term_io__TypeInfo_for_T_215, mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__OutStream_1, mercury__term_io__Ops_2, mercury__term_io__BracedHead_40, mercury__term_io__STATE_VARIABLE_VarSet_0_5, &mercury__term_io__STATE_VARIABLE_VarSet_100_100, mercury__term_io__STATE_VARIABLE_N_0_7, &mercury__term_io__STATE_VARIABLE_N_101_101);
                        }
                        {
                          mercury__term_io__write_term_args_9_p_0(mercury__term_io__TypeInfo_for_T_215, mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__OutStream_1, mercury__term_io__Ops_2, mercury__term_io__BracedTail_41, mercury__term_io__STATE_VARIABLE_VarSet_100_100, mercury__term_io__STATE_VARIABLE_VarSet_6, mercury__term_io__STATE_VARIABLE_N_101_101, mercury__term_io__STATE_VARIABLE_N_8);
                        }
                        {
                          mercury__io__write_char_4_p_0(mercury__term_io__OutStream_1, (MR_Char) 125);
                        }
                      }
                    else
                      {
                        MR_Word mercury__term_io__Var_42;
                        MR_Word mercury__term_io__FirstArg_44;
                        MR_Word mercury__term_io__OtherArgs_45;
                        MR_String mercury__term_io__V_108_108;
                        MR_Word mercury__term_io__V_109_109;
                        MR_Word mercury__term_io__V_110_110;
                        MR_Word mercury__term_io__V_43_43;

                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_30)) == (MR_mktag((MR_Integer) 0)));
                        if (mercury__term_io__succeeded)
                          {
                            mercury__term_io__V_108_108 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_30, (MR_Integer) 0)));
                            mercury__term_io__succeeded = (strcmp(mercury__term_io__V_108_108, (MR_String) "") == 0);
                            if (mercury__term_io__succeeded)
                              {
                                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_31)) == (MR_mktag((MR_Integer) 1)));
                                if (mercury__term_io__succeeded)
                                  {
                                    mercury__term_io__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_31, (MR_Integer) 0)));
                                    mercury__term_io__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_31, (MR_Integer) 1)));
                                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_109_109)) == (MR_mktag((MR_Integer) 1)));
                                    if (mercury__term_io__succeeded)
                                      {
                                        mercury__term_io__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_109_109, (MR_Integer) 0)));
                                        mercury__term_io__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_109_109, (MR_Integer) 1)));
                                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_110_110)) == (MR_mktag((MR_Integer) 1)));
                                        if (mercury__term_io__succeeded)
                                          {
                                            mercury__term_io__FirstArg_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_110_110, (MR_Integer) 0)));
                                            mercury__term_io__OtherArgs_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_110_110, (MR_Integer) 1)));
                                          }
                                      }
                                  }
                              }
                          }
                        if (mercury__term_io__succeeded)
                          {
                            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_111_111;
                            MR_Integer mercury__term_io__STATE_VARIABLE_N_112_112;
                            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_116_116;
                            MR_Integer mercury__term_io__STATE_VARIABLE_N_117_117;

                            {
                              mercury__term_io__write_variable_2_9_p_0(mercury__term_io__TypeInfo_for_T_215, mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__OutStream_1, mercury__term_io__Ops_2, mercury__term_io__Var_42, mercury__term_io__STATE_VARIABLE_VarSet_0_5, &mercury__term_io__STATE_VARIABLE_VarSet_111_111, mercury__term_io__STATE_VARIABLE_N_0_7, &mercury__term_io__STATE_VARIABLE_N_112_112);
                            }
                            {
                              mercury__io__write_char_4_p_0(mercury__term_io__OutStream_1, (MR_Char) 40);
                            }
                            {
                              mercury__term_io__write_arg_term_9_p_0(mercury__term_io__TypeInfo_for_T_215, mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__OutStream_1, mercury__term_io__Ops_2, mercury__term_io__FirstArg_44, mercury__term_io__STATE_VARIABLE_VarSet_111_111, &mercury__term_io__STATE_VARIABLE_VarSet_116_116, mercury__term_io__STATE_VARIABLE_N_112_112, &mercury__term_io__STATE_VARIABLE_N_117_117);
                            }
                            {
                              mercury__term_io__write_term_args_9_p_0(mercury__term_io__TypeInfo_for_T_215, mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__OutStream_1, mercury__term_io__Ops_2, mercury__term_io__OtherArgs_45, mercury__term_io__STATE_VARIABLE_VarSet_116_116, mercury__term_io__STATE_VARIABLE_VarSet_6, mercury__term_io__STATE_VARIABLE_N_117_117, mercury__term_io__STATE_VARIABLE_N_8);
                            }
                            {
                              mercury__io__write_char_4_p_0(mercury__term_io__OutStream_1, (MR_Char) 41);
                            }
                          }
                        else
                          {
                            MR_Word mercury__term_io__PrefixArg_46;
                            MR_Integer mercury__term_io__OpPriority_48;
                            MR_Word mercury__term_io__OpAssoc_49;
                            MR_String mercury__term_io__OpName_47;
                            MR_Word mercury__term_io__V_124_124;

                            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_31)) == (MR_mktag((MR_Integer) 1)));
                            if (mercury__term_io__succeeded)
                              {
                                mercury__term_io__PrefixArg_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_31, (MR_Integer) 0)));
                                mercury__term_io__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_31, (MR_Integer) 1)));
                                mercury__term_io__succeeded = (mercury__term_io__V_124_124 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (mercury__term_io__succeeded)
                                  {
                                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_30)) == (MR_mktag((MR_Integer) 0)));
                                    if (mercury__term_io__succeeded)
                                      {
                                        mercury__term_io__OpName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_30, (MR_Integer) 0)));
                                        {
                                          mercury__term_io__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__Ops_2, mercury__term_io__OpName_47, &mercury__term_io__OpPriority_48, &mercury__term_io__OpAssoc_49);
                                        }
                                      }
                                  }
                              }
                            if (mercury__term_io__succeeded)
                              {
                                MR_Word mercury__term_io__TypeClassInfo_for_writer_217 = (MR_Word) &mercury__term_io_scalar_common_4[1];
                                MR_Integer mercury__term_io__NewPriority_50;

                                mercury__term_io__succeeded = (mercury__term_io__OpPriority_48 > mercury__term_io__Priority_4);
                                if (mercury__term_io__succeeded)
                                  {
                                    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_217, (MR_Integer) 0)), (MR_Integer) 5)));
                                    MR_Box mercury__term_io__conv1_STATE_VARIABLE_IO_126_126;

                                    {
                                      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_217), ((MR_Box) (mercury__term_io__OutStream_1)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_IO_126_126);
                                    }
                                  }
                                else
                                  {
                                  }
                                {
                                  mercury__term_io__write_constant_4_p_0(mercury__term_io__OutStream_1, mercury__term_io__Functor_30);
                                }
                                {
                                  mercury__io__write_char_4_p_0(mercury__term_io__OutStream_1, (MR_Char) 32);
                                }
                                switch (mercury__term_io__OpAssoc_49) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                      mercury__term_io__NewPriority_50 = (mercury__term_io__OpPriority_48 - (MR_Integer) 1);
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    mercury__term_io__NewPriority_50 = mercury__term_io__OpPriority_48;
                                    break;
                                }
                                {
                                  mercury__term_io__write_term_3_10_p_0(mercury__term_io__TypeInfo_for_T_215, mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__OutStream_1, mercury__term_io__Ops_2, mercury__term_io__PrefixArg_46, mercury__term_io__NewPriority_50, mercury__term_io__STATE_VARIABLE_VarSet_0_5, mercury__term_io__STATE_VARIABLE_VarSet_6, mercury__term_io__STATE_VARIABLE_N_0_7, mercury__term_io__STATE_VARIABLE_N_8);
                                }
                                mercury__term_io__succeeded = (mercury__term_io__OpPriority_48 > mercury__term_io__Priority_4);
                                if (mercury__term_io__succeeded)
                                  {
                                    void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_217, (MR_Integer) 0)), (MR_Integer) 5)));
                                    MR_Box mercury__term_io__conv3_STATE_VARIABLE_IO_10;

                                    {
                                      mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_217), ((MR_Box) (mercury__term_io__OutStream_1)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_IO_10);
                                    }
                                  }
                                else
                                  {
                                  }
                              }
                            else
                              {
                                MR_Word mercury__term_io__PostfixArg_51;
                                MR_Integer mercury__term_io__OpPriority_211;
                                MR_Word mercury__term_io__OpAssoc_212;
                                MR_Word mercury__term_io__V_135_135;
                                MR_String mercury__term_io__OpName_201;

                                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_31)) == (MR_mktag((MR_Integer) 1)));
                                if (mercury__term_io__succeeded)
                                  {
                                    mercury__term_io__PostfixArg_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_31, (MR_Integer) 0)));
                                    mercury__term_io__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_31, (MR_Integer) 1)));
                                    mercury__term_io__succeeded = (mercury__term_io__V_135_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (mercury__term_io__succeeded)
                                      {
                                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_30)) == (MR_mktag((MR_Integer) 0)));
                                        if (mercury__term_io__succeeded)
                                          {
                                            mercury__term_io__OpName_201 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_30, (MR_Integer) 0)));
                                            {
                                              mercury__term_io__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__Ops_2, mercury__term_io__OpName_201, &mercury__term_io__OpPriority_211, &mercury__term_io__OpAssoc_212);
                                            }
                                          }
                                      }
                                  }
                                if (mercury__term_io__succeeded)
                                  {
                                    MR_Word mercury__term_io__TypeClassInfo_for_writer_219 = (MR_Word) &mercury__term_io_scalar_common_4[1];
                                    MR_Integer mercury__term_io__NewPriority_202;

                                    mercury__term_io__succeeded = (mercury__term_io__OpPriority_211 > mercury__term_io__Priority_4);
                                    if (mercury__term_io__succeeded)
                                      {
                                        void MR_CALL (* mercury__term_io__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_219, (MR_Integer) 0)), (MR_Integer) 5)));
                                        MR_Box mercury__term_io__conv5_STATE_VARIABLE_IO_137_137;

                                        {
                                          mercury__term_io__func_4(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_219), ((MR_Box) (mercury__term_io__OutStream_1)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv5_STATE_VARIABLE_IO_137_137);
                                        }
                                      }
                                    else
                                      {
                                      }
                                    switch (mercury__term_io__OpAssoc_212) {
                                      default: /*NOTREACHED*/ MR_assert(0);
                                      case (MR_Integer) 0:
                                        {
                                          mercury__term_io__NewPriority_202 = (mercury__term_io__OpPriority_211 - (MR_Integer) 1);
                                        }
                                        break;
                                      case (MR_Integer) 1:
                                        mercury__term_io__NewPriority_202 = mercury__term_io__OpPriority_211;
                                        break;
                                    }
                                    {
                                      mercury__term_io__write_term_3_10_p_0(mercury__term_io__TypeInfo_for_T_215, mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__OutStream_1, mercury__term_io__Ops_2, mercury__term_io__PostfixArg_51, mercury__term_io__NewPriority_202, mercury__term_io__STATE_VARIABLE_VarSet_0_5, mercury__term_io__STATE_VARIABLE_VarSet_6, mercury__term_io__STATE_VARIABLE_N_0_7, mercury__term_io__STATE_VARIABLE_N_8);
                                    }
                                    {
                                      mercury__io__write_char_4_p_0(mercury__term_io__OutStream_1, (MR_Char) 32);
                                    }
                                    {
                                      mercury__term_io__write_constant_4_p_0(mercury__term_io__OutStream_1, mercury__term_io__Functor_30);
                                    }
                                    mercury__term_io__succeeded = (mercury__term_io__OpPriority_211 > mercury__term_io__Priority_4);
                                    if (mercury__term_io__succeeded)
                                      {
                                        void MR_CALL (* mercury__term_io__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_219, (MR_Integer) 0)), (MR_Integer) 5)));
                                        MR_Box mercury__term_io__conv7_STATE_VARIABLE_IO_10;

                                        {
                                          mercury__term_io__func_6(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_219), ((MR_Box) (mercury__term_io__OutStream_1)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv7_STATE_VARIABLE_IO_10);
                                        }
                                      }
                                    else
                                      {
                                      }
                                  }
                                else
                                  {
                                    MR_Word mercury__term_io__Arg1_52;
                                    MR_Word mercury__term_io__Arg2_53;
                                    MR_Word mercury__term_io__LeftAssoc_54;
                                    MR_Word mercury__term_io__RightAssoc_55;
                                    MR_String mercury__term_io__OpName_208;
                                    MR_Integer mercury__term_io__OpPriority_209;
                                    MR_Word mercury__term_io__V_146_146;
                                    MR_Word mercury__term_io__V_147_147;

                                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_31)) == (MR_mktag((MR_Integer) 1)));
                                    if (mercury__term_io__succeeded)
                                      {
                                        mercury__term_io__Arg1_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_31, (MR_Integer) 0)));
                                        mercury__term_io__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_31, (MR_Integer) 1)));
                                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_146_146)) == (MR_mktag((MR_Integer) 1)));
                                        if (mercury__term_io__succeeded)
                                          {
                                            mercury__term_io__Arg2_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_146_146, (MR_Integer) 0)));
                                            mercury__term_io__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_146_146, (MR_Integer) 1)));
                                            mercury__term_io__succeeded = (mercury__term_io__V_147_147 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (mercury__term_io__succeeded)
                                              {
                                                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_30)) == (MR_mktag((MR_Integer) 0)));
                                                if (mercury__term_io__succeeded)
                                                  {
                                                    mercury__term_io__OpName_208 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_30, (MR_Integer) 0)));
                                                    {
                                                      mercury__term_io__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__Ops_2, mercury__term_io__OpName_208, &mercury__term_io__OpPriority_209, &mercury__term_io__LeftAssoc_54, &mercury__term_io__RightAssoc_55);
                                                    }
                                                  }
                                              }
                                          }
                                      }
                                    if (mercury__term_io__succeeded)
                                      {
                                        MR_Word mercury__term_io__TypeClassInfo_for_writer_221 = (MR_Word) &mercury__term_io_scalar_common_4[1];
                                        MR_Integer mercury__term_io__LeftPriority_56;
                                        MR_Integer mercury__term_io__RightPriority_58;
                                        MR_Word mercury__term_io__STATE_VARIABLE_VarSet_150_150;
                                        MR_Integer mercury__term_io__STATE_VARIABLE_N_151_151;

                                        mercury__term_io__succeeded = (mercury__term_io__OpPriority_209 > mercury__term_io__Priority_4);
                                        if (mercury__term_io__succeeded)
                                          {
                                            void MR_CALL (* mercury__term_io__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_221, (MR_Integer) 0)), (MR_Integer) 5)));
                                            MR_Box mercury__term_io__conv9_STATE_VARIABLE_IO_149_149;

                                            {
                                              mercury__term_io__func_8(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_221), ((MR_Box) (mercury__term_io__OutStream_1)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv9_STATE_VARIABLE_IO_149_149);
                                            }
                                          }
                                        else
                                          {
                                          }
                                        switch (mercury__term_io__LeftAssoc_54) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 0:
                                            {
                                              mercury__term_io__LeftPriority_56 = (mercury__term_io__OpPriority_209 - (MR_Integer) 1);
                                            }
                                            break;
                                          case (MR_Integer) 1:
                                            mercury__term_io__LeftPriority_56 = mercury__term_io__OpPriority_209;
                                            break;
                                        }
                                        {
                                          mercury__term_io__write_term_3_10_p_0(mercury__term_io__TypeInfo_for_T_215, mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__OutStream_1, mercury__term_io__Ops_2, mercury__term_io__Arg1_52, mercury__term_io__LeftPriority_56, mercury__term_io__STATE_VARIABLE_VarSet_0_5, &mercury__term_io__STATE_VARIABLE_VarSet_150_150, mercury__term_io__STATE_VARIABLE_N_0_7, &mercury__term_io__STATE_VARIABLE_N_151_151);
                                        }
                                        mercury__term_io__succeeded = (strcmp(mercury__term_io__OpName_208, (MR_String) ",") == 0);
                                        if (mercury__term_io__succeeded)
                                          {
                                            {
                                              mercury__io__write_string_4_p_0(mercury__term_io__OutStream_1, (MR_String) ", ");
                                            }
                                          }
                                        else
                                          {
                                            mercury__term_io__succeeded = (strcmp(mercury__term_io__OpName_208, (MR_String) ".") == 0);
                                            if (mercury__term_io__succeeded)
                                              {
                                                MR_String mercury__term_io__Dot_57;

                                                {
                                                  mercury__term_io__succeeded = mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(mercury__term_io__Arg2_53);
                                                }
                                                if (mercury__term_io__succeeded)
                                                  mercury__term_io__Dot_57 = (MR_String) "\'.\'";
                                                else
                                                  mercury__term_io__Dot_57 = (MR_String) ".";
                                                {
                                                  mercury__io__write_string_4_p_0(mercury__term_io__OutStream_1, mercury__term_io__Dot_57);
                                                }
                                              }
                                            else
                                              {
                                                {
                                                  mercury__io__write_char_4_p_0(mercury__term_io__OutStream_1, (MR_Char) 32);
                                                }
                                                {
                                                  mercury__term_io__write_constant_4_p_0(mercury__term_io__OutStream_1, mercury__term_io__Functor_30);
                                                }
                                                {
                                                  mercury__io__write_char_4_p_0(mercury__term_io__OutStream_1, (MR_Char) 32);
                                                }
                                              }
                                          }
                                        switch (mercury__term_io__RightAssoc_55) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 0:
                                            {
                                              mercury__term_io__RightPriority_58 = (mercury__term_io__OpPriority_209 - (MR_Integer) 1);
                                            }
                                            break;
                                          case (MR_Integer) 1:
                                            mercury__term_io__RightPriority_58 = mercury__term_io__OpPriority_209;
                                            break;
                                        }
                                        {
                                          mercury__term_io__write_term_3_10_p_0(mercury__term_io__TypeInfo_for_T_215, mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__OutStream_1, mercury__term_io__Ops_2, mercury__term_io__Arg2_53, mercury__term_io__RightPriority_58, mercury__term_io__STATE_VARIABLE_VarSet_150_150, mercury__term_io__STATE_VARIABLE_VarSet_6, mercury__term_io__STATE_VARIABLE_N_151_151, mercury__term_io__STATE_VARIABLE_N_8);
                                        }
                                        mercury__term_io__succeeded = (mercury__term_io__OpPriority_209 > mercury__term_io__Priority_4);
                                        if (mercury__term_io__succeeded)
                                          {
                                            void MR_CALL (* mercury__term_io__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_221, (MR_Integer) 0)), (MR_Integer) 5)));
                                            MR_Box mercury__term_io__conv11_STATE_VARIABLE_IO_10;

                                            {
                                              mercury__term_io__func_10(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_221), ((MR_Box) (mercury__term_io__OutStream_1)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv11_STATE_VARIABLE_IO_10);
                                            }
                                          }
                                        else
                                          {
                                          }
                                      }
                                    else
                                      {
                                        MR_Word mercury__term_io__FirstAssoc_59;
                                        MR_Word mercury__term_io__SecondAssoc_60;
                                        MR_Integer mercury__term_io__OpPriority_205;
                                        MR_Word mercury__term_io__Arg1_206;
                                        MR_Word mercury__term_io__Arg2_207;
                                        MR_Word mercury__term_io__V_166_166;
                                        MR_Word mercury__term_io__V_167_167;
                                        MR_String mercury__term_io__OpName_203;

                                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_31)) == (MR_mktag((MR_Integer) 1)));
                                        if (mercury__term_io__succeeded)
                                          {
                                            mercury__term_io__Arg1_206 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_31, (MR_Integer) 0)));
                                            mercury__term_io__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_31, (MR_Integer) 1)));
                                            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_166_166)) == (MR_mktag((MR_Integer) 1)));
                                            if (mercury__term_io__succeeded)
                                              {
                                                mercury__term_io__Arg2_207 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_166_166, (MR_Integer) 0)));
                                                mercury__term_io__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_166_166, (MR_Integer) 1)));
                                                mercury__term_io__succeeded = (mercury__term_io__V_167_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (mercury__term_io__succeeded)
                                                  {
                                                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_30)) == (MR_mktag((MR_Integer) 0)));
                                                    if (mercury__term_io__succeeded)
                                                      {
                                                        mercury__term_io__OpName_203 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_30, (MR_Integer) 0)));
                                                        {
                                                          mercury__term_io__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__Ops_2, mercury__term_io__OpName_203, &mercury__term_io__OpPriority_205, &mercury__term_io__FirstAssoc_59, &mercury__term_io__SecondAssoc_60);
                                                        }
                                                      }
                                                  }
                                              }
                                          }
                                        if (mercury__term_io__succeeded)
                                          {
                                            MR_Word mercury__term_io__TypeClassInfo_for_writer_223 = (MR_Word) &mercury__term_io_scalar_common_4[1];
                                            MR_Integer mercury__term_io__FirstPriority_61;
                                            MR_Integer mercury__term_io__SecondPriority_62;
                                            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_173_173;
                                            MR_Integer mercury__term_io__STATE_VARIABLE_N_174_174;

                                            mercury__term_io__succeeded = (mercury__term_io__OpPriority_205 > mercury__term_io__Priority_4);
                                            if (mercury__term_io__succeeded)
                                              {
                                                void MR_CALL (* mercury__term_io__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_223, (MR_Integer) 0)), (MR_Integer) 5)));
                                                MR_Box mercury__term_io__conv13_STATE_VARIABLE_IO_169_169;

                                                {
                                                  mercury__term_io__func_12(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_223), ((MR_Box) (mercury__term_io__OutStream_1)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv13_STATE_VARIABLE_IO_169_169);
                                                }
                                              }
                                            else
                                              {
                                              }
                                            {
                                              mercury__term_io__write_constant_4_p_0(mercury__term_io__OutStream_1, mercury__term_io__Functor_30);
                                            }
                                            {
                                              mercury__io__write_char_4_p_0(mercury__term_io__OutStream_1, (MR_Char) 32);
                                            }
                                            switch (mercury__term_io__FirstAssoc_59) {
                                              default: /*NOTREACHED*/ MR_assert(0);
                                              case (MR_Integer) 0:
                                                {
                                                  mercury__term_io__FirstPriority_61 = (mercury__term_io__OpPriority_205 - (MR_Integer) 1);
                                                }
                                                break;
                                              case (MR_Integer) 1:
                                                mercury__term_io__FirstPriority_61 = mercury__term_io__OpPriority_205;
                                                break;
                                            }
                                            {
                                              mercury__term_io__write_term_3_10_p_0(mercury__term_io__TypeInfo_for_T_215, mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__OutStream_1, mercury__term_io__Ops_2, mercury__term_io__Arg1_206, mercury__term_io__FirstPriority_61, mercury__term_io__STATE_VARIABLE_VarSet_0_5, &mercury__term_io__STATE_VARIABLE_VarSet_173_173, mercury__term_io__STATE_VARIABLE_N_0_7, &mercury__term_io__STATE_VARIABLE_N_174_174);
                                            }
                                            {
                                              mercury__io__write_char_4_p_0(mercury__term_io__OutStream_1, (MR_Char) 32);
                                            }
                                            switch (mercury__term_io__SecondAssoc_60) {
                                              default: /*NOTREACHED*/ MR_assert(0);
                                              case (MR_Integer) 0:
                                                {
                                                  mercury__term_io__SecondPriority_62 = (mercury__term_io__OpPriority_205 - (MR_Integer) 1);
                                                }
                                                break;
                                              case (MR_Integer) 1:
                                                mercury__term_io__SecondPriority_62 = mercury__term_io__OpPriority_205;
                                                break;
                                            }
                                            {
                                              mercury__term_io__write_term_3_10_p_0(mercury__term_io__TypeInfo_for_T_215, mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__OutStream_1, mercury__term_io__Ops_2, mercury__term_io__Arg2_207, mercury__term_io__SecondPriority_62, mercury__term_io__STATE_VARIABLE_VarSet_173_173, mercury__term_io__STATE_VARIABLE_VarSet_6, mercury__term_io__STATE_VARIABLE_N_174_174, mercury__term_io__STATE_VARIABLE_N_8);
                                            }
                                            mercury__term_io__succeeded = (mercury__term_io__OpPriority_205 > mercury__term_io__Priority_4);
                                            if (mercury__term_io__succeeded)
                                              {
                                                void MR_CALL (* mercury__term_io__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_223, (MR_Integer) 0)), (MR_Integer) 5)));
                                                MR_Box mercury__term_io__conv15_STATE_VARIABLE_IO_10;

                                                {
                                                  mercury__term_io__func_14(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_223), ((MR_Box) (mercury__term_io__OutStream_1)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv15_STATE_VARIABLE_IO_10);
                                                }
                                              }
                                            else
                                              {
                                              }
                                          }
                                        else
                                          {
                                            MR_String mercury__term_io__Op_63;
                                            MR_Integer mercury__term_io__V_183_183;

                                            mercury__term_io__succeeded = (mercury__term_io__Args_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (mercury__term_io__succeeded)
                                              {
                                                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_30)) == (MR_mktag((MR_Integer) 0)));
                                                if (mercury__term_io__succeeded)
                                                  {
                                                    mercury__term_io__Op_63 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_30, (MR_Integer) 0)));
                                                    {
                                                      mercury__term_io__succeeded = mercury__ops__lookup_op_2_p_0(mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__Ops_2, mercury__term_io__Op_63);
                                                    }
                                                    if (mercury__term_io__succeeded)
                                                      {
                                                        {
                                                          mercury__term_io__V_183_183 = mercury__ops__max_priority_1_f_0(mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__Ops_2);
                                                        }
                                                        mercury__term_io__succeeded = (mercury__term_io__Priority_4 <= mercury__term_io__V_183_183);
                                                      }
                                                  }
                                              }
                                            if (mercury__term_io__succeeded)
                                              {
                                                {
                                                  mercury__io__write_char_4_p_0(mercury__term_io__OutStream_1, (MR_Char) 40);
                                                }
                                                {
                                                  mercury__term_io__write_constant_4_p_0(mercury__term_io__OutStream_1, mercury__term_io__Functor_30);
                                                }
                                                {
                                                  mercury__io__write_char_4_p_0(mercury__term_io__OutStream_1, (MR_Char) 41);
                                                }
                                              }
                                            else
                                              {
                                                {
                                                  mercury__term_io__write_constant_5_p_0(mercury__term_io__OutStream_1, mercury__term_io__Functor_30, (MR_Integer) 0);
                                                }
                                              }
                                            if ((mercury__term_io__Args_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              {
                                                *mercury__term_io__STATE_VARIABLE_VarSet_6 = mercury__term_io__STATE_VARIABLE_VarSet_0_5;
                                                *mercury__term_io__STATE_VARIABLE_N_8 = mercury__term_io__STATE_VARIABLE_N_0_7;
                                              }
                                            else
                                              {
                                                MR_Word mercury__term_io__X_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_31, (MR_Integer) 0)));
                                                MR_Word mercury__term_io__Xs_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_31, (MR_Integer) 1)));
                                                MR_Word mercury__term_io__STATE_VARIABLE_VarSet_193_193;
                                                MR_Integer mercury__term_io__STATE_VARIABLE_N_194_194;

                                                {
                                                  mercury__io__write_char_4_p_0(mercury__term_io__OutStream_1, (MR_Char) 40);
                                                }
                                                {
                                                  mercury__term_io__write_arg_term_9_p_0(mercury__term_io__TypeInfo_for_T_215, mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__OutStream_1, mercury__term_io__Ops_2, mercury__term_io__X_64, mercury__term_io__STATE_VARIABLE_VarSet_0_5, &mercury__term_io__STATE_VARIABLE_VarSet_193_193, mercury__term_io__STATE_VARIABLE_N_0_7, &mercury__term_io__STATE_VARIABLE_N_194_194);
                                                }
                                                {
                                                  mercury__term_io__write_term_args_9_p_0(mercury__term_io__TypeInfo_for_T_215, mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__OutStream_1, mercury__term_io__Ops_2, mercury__term_io__Xs_65, mercury__term_io__STATE_VARIABLE_VarSet_193_193, mercury__term_io__STATE_VARIABLE_VarSet_6, mercury__term_io__STATE_VARIABLE_N_194_194, mercury__term_io__STATE_VARIABLE_N_8);
                                                }
                                                {
                                                  mercury__io__write_char_4_p_0(mercury__term_io__OutStream_1, (MR_Char) 41);
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
        MR_Word mercury__term_io__Id_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__term_io__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__3_3, (MR_Integer) 1)));

        {
          mercury__term_io__write_variable_2_9_p_0(mercury__term_io__TypeInfo_for_T_215, mercury__term_io__TypeClassInfo_for_op_table_214, mercury__term_io__OutStream_1, mercury__term_io__Ops_2, mercury__term_io__Id_13, mercury__term_io__STATE_VARIABLE_VarSet_0_5, mercury__term_io__STATE_VARIABLE_VarSet_6, mercury__term_io__STATE_VARIABLE_N_0_7, mercury__term_io__STATE_VARIABLE_N_8);
        }
      }
  }
}

static void MR_CALL 
mercury__term_io__write_arg_term_9_p_0(
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
    MR_Integer mercury__term_io__V_22_22;
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 13)));
    MR_Box mercury__term_io__conv1_V_22_22;

    {
      mercury__term_io__conv1_V_22_22 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_26), mercury__term_io__Ops_11);
    }
    mercury__term_io__V_22_22 = ((MR_Integer) mercury__term_io__conv1_V_22_22);
    {
      mercury__term_io__write_term_3_10_p_0(mercury__term_io__TypeInfo_for_T_27, mercury__term_io__TypeClassInfo_for_op_table_26, mercury__term_io__OutStream_10, mercury__term_io__Ops_11, mercury__term_io__Term_12, mercury__term_io__V_22_22, mercury__term_io__STATE_VARIABLE_VarSet_0_16, mercury__term_io__STATE_VARIABLE_VarSet_17, mercury__term_io__STATE_VARIABLE_N_0_18, mercury__term_io__STATE_VARIABLE_N_19);
    }
  }
}

void MR_CALL 
mercury__term_io__write_term_2_9_p_0(
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
    MR_Integer mercury__term_io__V_22_22;
    MR_Integer mercury__term_io__V_26_26;
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_28, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__term_io__conv1_V_26_26;

    {
      mercury__term_io__conv1_V_26_26 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_28), mercury__term_io__Ops_11);
    }
    mercury__term_io__V_26_26 = ((MR_Integer) mercury__term_io__conv1_V_26_26);
    mercury__term_io__V_22_22 = (mercury__term_io__V_26_26 + (MR_Integer) 1);
    {
      mercury__term_io__write_term_3_10_p_0(mercury__term_io__TypeInfo_for_T_29, mercury__term_io__TypeClassInfo_for_op_table_28, mercury__term_io__OutStream_10, mercury__term_io__Ops_11, mercury__term_io__Term_12, mercury__term_io__V_22_22, mercury__term_io__STATE_VARIABLE_VarSet_0_16, mercury__term_io__STATE_VARIABLE_VarSet_17, mercury__term_io__STATE_VARIABLE_N_0_18, mercury__term_io__STATE_VARIABLE_N_19);
    }
  }
}

void MR_CALL 
mercury__term_io__write_variable_2_9_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_37,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_36,
  MR_Word mercury__term_io__OutStream_10,
  MR_Box mercury__term_io__Ops_11,
  MR_Word mercury__term_io__Id_12,
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_21,
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_22,
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_23,
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_24)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__Val_16;
    MR_Word mercury__term_io__TypeCtorInfo_12_45 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__term_io__TypeInfo_13_46;
    MR_Word mercury__term_io__TypeCtorInfo_14_47 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
    MR_Word mercury__term_io__TypeInfo_15_48;
    MR_Word mercury__term_io__V_7_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 2)));
    MR_Word mercury__term_io__V_8_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 0)));
    MR_Word mercury__term_io__V_9_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 1)));
    MR_Box mercury__term_io__conv0_Val_16;

    {
      mercury__term_io__TypeInfo_13_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_46, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_12_45));
      MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_46, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_37));
    }
    {
      mercury__term_io__TypeInfo_15_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_15_48, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_14_47));
      MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_15_48, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_37));
    }
    {
      mercury__term_io__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term_io__TypeInfo_for_T_37, mercury__term_io__TypeInfo_13_46, mercury__term_io__TypeInfo_15_48, mercury__term_io__V_7_43, mercury__term_io__Id_12, &mercury__term_io__conv0_Val_16);
    }
    if (mercury__term_io__succeeded)
      {
        mercury__term_io__Val_16 = ((MR_Word) mercury__term_io__conv0_Val_16);
        mercury__term_io__succeeded = MR_TRUE;
      }
    if (mercury__term_io__succeeded)
      {
        mercury__term_io__write_term_2_9_p_0(mercury__term_io__TypeInfo_for_T_37, mercury__term_io__TypeClassInfo_for_op_table_36, mercury__term_io__OutStream_10, mercury__term_io__Ops_11, mercury__term_io__Val_16, mercury__term_io__STATE_VARIABLE_VarSet_0_21, mercury__term_io__STATE_VARIABLE_VarSet_22, mercury__term_io__STATE_VARIABLE_N_0_23, mercury__term_io__STATE_VARIABLE_N_24);
      }
    else
      {
        MR_String mercury__term_io__Name_17;
        MR_Word mercury__term_io__TypeCtorInfo_12_60 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mercury__term_io__TypeInfo_13_61;
        MR_Word mercury__term_io__TypeCtorInfo_14_62 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word mercury__term_io__V_8_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 1)));
        MR_Word mercury__term_io__V_7_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 0)));
        MR_Word mercury__term_io__V_9_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 2)));
        MR_Box mercury__term_io__conv1_Name_17;

        {
          mercury__term_io__TypeInfo_13_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_61, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_12_60));
          MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_61, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_37));
        }
        {
          mercury__term_io__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term_io__TypeInfo_for_T_37, mercury__term_io__TypeInfo_13_61, mercury__term_io__TypeCtorInfo_14_62, mercury__term_io__V_8_57, mercury__term_io__Id_12, &mercury__term_io__conv1_Name_17);
        }
        if (mercury__term_io__succeeded)
          {
            mercury__term_io__Name_17 = ((MR_String) mercury__term_io__conv1_Name_17);
            mercury__term_io__succeeded = MR_TRUE;
          }
        if (mercury__term_io__succeeded)
          {
            {
              mercury__io__write_string_4_p_0(mercury__term_io__OutStream_10, mercury__term_io__Name_17);
            }
            *mercury__term_io__STATE_VARIABLE_N_24 = mercury__term_io__STATE_VARIABLE_N_0_23;
            *mercury__term_io__STATE_VARIABLE_VarSet_22 = mercury__term_io__STATE_VARIABLE_VarSet_0_21;
          }
        else
          {
            MR_Integer mercury__term_io__VarNum_18 = (MR_Integer) mercury__term_io__Id_12;
            MR_String mercury__term_io__Num_19;
            MR_String mercury__term_io__VarName_20;

            {
              mercury__string__int_to_base_string_3_p_0(mercury__term_io__VarNum_18, (MR_Integer) 10, &mercury__term_io__Num_19);
            }
            {
              mercury__string__append_3_p_2((MR_String) "_", mercury__term_io__Num_19, &mercury__term_io__VarName_20);
            }
            {
              mercury__varset__name_var_4_p_0(mercury__term_io__TypeInfo_for_T_37, mercury__term_io__Id_12, mercury__term_io__VarName_20, mercury__term_io__STATE_VARIABLE_VarSet_0_21, mercury__term_io__STATE_VARIABLE_VarSet_22);
            }
            *mercury__term_io__STATE_VARIABLE_N_24 = (mercury__term_io__STATE_VARIABLE_N_0_23 + (MR_Integer) 1);
            {
              mercury__io__write_string_4_p_0(mercury__term_io__OutStream_10, mercury__term_io__VarName_20);
            }
          }
      }
  }
}

MR_String MR_CALL 
mercury__term_io__quoted_atom_agt_2_f_0(
  MR_String mercury__term_io__S_4,
  MR_Word mercury__term_io__NextToGraphicToken_5)
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
          mercury__term_io__result_3 = MR_strcmp(mercury__term_io__S_4, ((&mercury__term_io_vector_common_7[8 + mercury__term_io__mid_2]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0);
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
          MR_Integer mercury__term_io__V_20_20;
          MR_Char mercury__term_io__V_21_21;
          MR_Char mercury__term_io__V_24_24;
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
                  mercury__term_io__V_20_20 = (MR_Integer) 0;
                  mercury__term_io__V_21_21 = (MR_Char) 35;
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

	Index =  mercury__term_io__V_20_20 ;
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
                        mercury__string__unsafe_index_3_p_0(mercury__term_io__S_4, mercury__term_io__V_20_20, &mercury__term_io__V_24_24);
                      }
                      mercury__term_io__succeeded = (mercury__term_io__V_21_21 == mercury__term_io__V_24_24);
                    }
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
                  if (mercury__term_io__succeeded)
                    mercury__term_io__succeeded = (mercury__term_io__NextToGraphicToken_5 == (MR_Integer) 1);
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
          MR_Word mercury__term_io__V_9_9;
          MR_Word mercury__term_io__V_11_11;
          MR_Word mercury__term_io__V_12_12;
          MR_Word mercury__term_io__V_14_14;

          {
            mercury__term_io__ES_8 = mercury__term_io__escaped_string_1_f_0(mercury__term_io__S_4);
          }
          mercury__term_io__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          mercury__term_io__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_io_scalar_common_1[3]);
          {
            mercury__term_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__term_io__V_11_11, 0) = ((MR_Box) (mercury__term_io__ES_8));
            MR_hl_field(MR_mktag(1), mercury__term_io__V_11_11, 1) = ((MR_Box) (mercury__term_io__V_12_12));
          }
          {
            mercury__term_io__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__term_io__V_9_9, 0) = ((MR_Box) ((MR_String) "\'"));
            MR_hl_field(MR_mktag(1), mercury__term_io__V_9_9, 1) = ((MR_Box) (mercury__term_io__V_11_11));
          }
          {
            mercury__term_io__String_6 = mercury__string__append_list_1_f_0(mercury__term_io__V_9_9);
          }
        }
        break;
    }
    return mercury__term_io__String_6;
  }
}

void MR_CALL 
mercury__term_io__quote_atom_agt_5_p_0(
  MR_Word mercury__term_io__TypeClassInfo_for_writer_19,
  MR_Word mercury__term_io__TypeClassInfo_for_writer_20,
  MR_Box mercury__term_io__Stream_6,
  MR_String mercury__term_io__S_7,
  MR_Word mercury__term_io__NextToGraphicToken_8,
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
          mercury__term_io__result_3 = MR_strcmp(mercury__term_io__S_7, ((&mercury__term_io_vector_common_7[4 + mercury__term_io__mid_2]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0);
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
          MR_Integer mercury__term_io__V_26_26;
          MR_Char mercury__term_io__V_27_27;
          MR_Char mercury__term_io__V_30_30;
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
                  mercury__term_io__V_26_26 = (MR_Integer) 0;
                  mercury__term_io__V_27_27 = (MR_Char) 35;
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

	Index =  mercury__term_io__V_26_26 ;
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
                        mercury__string__unsafe_index_3_p_0(mercury__term_io__S_7, mercury__term_io__V_26_26, &mercury__term_io__V_30_30);
                      }
                      mercury__term_io__succeeded = (mercury__term_io__V_27_27 == mercury__term_io__V_30_30);
                    }
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
                  if (mercury__term_io__succeeded)
                    mercury__term_io__succeeded = (mercury__term_io__NextToGraphicToken_8 == (MR_Integer) 1);
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
mercury__term_io__quote_atom_agt_4_p_0(
  MR_String mercury__term_io__S_5,
  MR_Word mercury__term_io__NextToGraphicToken_6)
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
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__TypeClassInfo_for_writer_14, mercury__term_io__Stream_8, mercury__term_io__S_5, mercury__term_io__NextToGraphicToken_6);
    }
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
    MR_Word mercury__term_io__V_20_20;
    MR_Char mercury__term_io__V_21_21;

    {
      mercury__string__to_char_list_2_p_0(mercury__term_io__Str_2, &mercury__term_io__Chars_14);
    }
    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Chars_14)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__term_io__succeeded)
      {
        mercury__term_io__V_21_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Chars_14, (MR_Integer) 0)));
        mercury__term_io__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Chars_14, (MR_Integer) 1)));
        if ((mercury__term_io__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__term_io__Char_1 = mercury__term_io__V_21_21;
            mercury__term_io__succeeded = MR_TRUE;
          }
        else
          {
            MR_Char mercury__term_io__EscapedChar_15;
            MR_Word mercury__term_io__V_18_18;

            mercury__term_io__succeeded = (mercury__term_io__V_21_21 == (MR_Char) 92);
            if (mercury__term_io__succeeded)
              {
                mercury__term_io__EscapedChar_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_20_20, (MR_Integer) 0)));
                mercury__term_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_20_20, (MR_Integer) 1)));
                mercury__term_io__succeeded = (mercury__term_io__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
        MR_Word mercury__term_io__V_6_6;
        MR_Word mercury__term_io__V_8_8;
        MR_Word mercury__term_io__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__term_io__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_io__V_8_8, 0) = ((MR_Box) (MR_Word) (mercury__term_io__EscapeChar_5));
          MR_hl_field(MR_mktag(1), mercury__term_io__V_8_8, 1) = ((MR_Box) (mercury__term_io__V_9_9));
        }
        {
          mercury__term_io__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_io__V_6_6, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
          MR_hl_field(MR_mktag(1), mercury__term_io__V_6_6, 1) = ((MR_Box) (mercury__term_io__V_8_8));
        }
        {
          mercury__string__from_char_list_2_p_0(mercury__term_io__V_6_6, mercury__term_io__Str_2);
        }
        mercury__term_io__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word mercury__term_io__V_10_10;
        MR_Word mercury__term_io__V_11_11;

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
                MR_Integer mercury__term_io__V_21_21;

{
#define MR_PROC_LABEL mercury__term_io__encode_escaped_char_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_1 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_21_21  = Int;
}
                mercury__term_io__succeeded = (mercury__term_io__V_21_21 >= (MR_Integer) 128);
              }
          }
        if (mercury__term_io__succeeded)
          {
            mercury__term_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__term_io__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_io__V_10_10, 0) = ((MR_Box) (MR_Word) (mercury__term_io__Char_1));
              MR_hl_field(MR_mktag(1), mercury__term_io__V_10_10, 1) = ((MR_Box) (mercury__term_io__V_11_11));
            }
            {
              mercury__string__from_char_list_2_p_0(mercury__term_io__V_10_10, mercury__term_io__Str_2);
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
mercury__term_io__mercury_escape_char_1_f_0(
  MR_Char mercury__term_io__Char_3)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_String mercury__term_io__EscapeCode_4;
    MR_Integer mercury__term_io__Int_5;
    MR_String mercury__term_io__OctalString0_6;
    MR_String mercury__term_io__OctalString_7;
    MR_String mercury__term_io__V_12_12;

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
      mercury__string__append_3_p_2(mercury__term_io__OctalString_7, (MR_String) "\\", &mercury__term_io__V_12_12);
    }
    {
      mercury__string__append_3_p_2((MR_String) "\\", mercury__term_io__V_12_12, &mercury__term_io__EscapeCode_4);
    }
    return mercury__term_io__EscapeCode_4;
  }
}

MR_String MR_CALL 
mercury__term_io__integer_base_prefix_1_f_0(
  MR_Word mercury__term_io__HeadVar__1_1)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_String mercury__term_io__HeadVar__2_2 = ((&mercury__term_io_vector_common_7[0 + mercury__term_io__HeadVar__1_1]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;

    return mercury__term_io__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__term_io__integer_base_int_1_f_0(
  MR_Word mercury__term_io__HeadVar__1_1)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Integer mercury__term_io__HeadVar__2_2 = ((&mercury__term_io_vector_common_6[0 + mercury__term_io__HeadVar__1_1]))->mercury__term_io__vector_common_type_6_0__vct_6_f_0;

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
    MR_Word mercury__term_io__V_4_4;
    MR_Word mercury__term_io__V_5_5;
    MR_Word mercury__term_io__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
      mercury__term_io__foldl_between_2__ho30_6_p_in__string_0(mercury__term_io__String_3, (MR_Integer) 0, mercury__term_io__V_13_52, mercury__term_io__V_7_7, &mercury__term_io__V_5_5);
    }
    {
      mercury__list__reverse_2_p_0(mercury__term_io__TypeCtorInfo_8_8, mercury__term_io__V_5_5, &mercury__term_io__V_4_4);
    }
    {
      mercury__term_io__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__term_io__V_4_4);
    }
    return mercury__term_io__HeadVar__2_2;
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

MR_bool MR_CALL 
mercury__term_io__string_is_escaped_char_2_p_1(
  MR_Char * mercury__term_io__Char_1,
  MR_String mercury__term_io__String_2)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__Chars_10;
    MR_Word mercury__term_io__V_32_32;
    MR_Char mercury__term_io__V_33_33;

    {
      mercury__string__to_char_list_2_p_0(mercury__term_io__String_2, &mercury__term_io__Chars_10);
    }
    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Chars_10)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__term_io__succeeded)
      {
        mercury__term_io__V_33_33 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Chars_10, (MR_Integer) 0)));
        mercury__term_io__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Chars_10, (MR_Integer) 1)));
        if ((mercury__term_io__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__term_io__Char_1 = mercury__term_io__V_33_33;
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
                    MR_Integer mercury__term_io__V_37_37;

{
#define MR_PROC_LABEL mercury__term_io__string_is_escaped_char_2_p_1

	MR_Char Character;
	MR_Integer Int;

	Character =  *mercury__term_io__Char_1 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_37_37  = Int;
}
                    mercury__term_io__succeeded = (mercury__term_io__V_37_37 >= (MR_Integer) 128);
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
            MR_Word mercury__term_io__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 1)));
            MR_Char mercury__term_io__V_35_35 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 0)));

            mercury__term_io__succeeded = (mercury__term_io__V_33_33 == (MR_Char) 92);
            if (mercury__term_io__succeeded)
              {
                if ((mercury__term_io__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  switch (mercury__term_io__V_35_35) {
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
                    MR_Word mercury__term_io__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_34_34, (MR_Integer) 1)));
                    MR_Word mercury__term_io__V_23_23;
                    MR_Integer mercury__term_io__V_27_27;
                    MR_Char mercury__term_io__Char2_14 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_34_34, (MR_Integer) 0)));
                    MR_Char mercury__term_io__Char3_15;

                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_22_22)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__term_io__succeeded)
                      {
                        mercury__term_io__Char3_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_22_22, (MR_Integer) 0)));
                        mercury__term_io__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_22_22, (MR_Integer) 1)));
                        mercury__term_io__succeeded = (mercury__term_io__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (mercury__term_io__succeeded)
                          {
                            {
                              mercury__string__from_char_list_2_p_0(mercury__term_io__V_32_32, &mercury__term_io__NumString_17);
                            }
                            mercury__term_io__V_27_27 = (MR_Integer) 8;
                            {
                              mercury__term_io__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__term_io__V_27_27, mercury__term_io__NumString_17, &mercury__term_io__Int_18);
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
        MR_String mercury__term_io__V_7_7;
        MR_Word mercury__term_io__V_5_36;
        MR_Word mercury__term_io__V_6_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__term_io__V_5_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_io__V_5_36, 0) = ((MR_Box) (MR_Word) (mercury__term_io__QuoteChar_5));
          MR_hl_field(MR_mktag(1), mercury__term_io__V_5_36, 1) = ((MR_Box) (mercury__term_io__V_6_37));
        }
        {
          mercury__string__to_char_list_2_p_1(&mercury__term_io__V_7_7, mercury__term_io__V_5_36);
        }
        {
          mercury__string__append_3_p_2((MR_String) "\\", mercury__term_io__V_7_7, mercury__term_io__String_2);
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
                MR_Integer mercury__term_io__V_42_42;

{
#define MR_PROC_LABEL mercury__term_io__string_is_escaped_char_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_1 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_42_42  = Int;
}
                mercury__term_io__succeeded = (mercury__term_io__V_42_42 >= (MR_Integer) 128);
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
                MR_Integer mercury__term_io__V_20_20;

{
#define MR_PROC_LABEL mercury__term_io__write_escaped_char_4_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_6 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_20_20  = Int;
}
                mercury__term_io__succeeded = (mercury__term_io__V_20_20 >= (MR_Integer) 128);
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
            MR_String mercury__term_io__V_15_15;
            void MR_CALL (* mercury__term_io__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__term_io__V_15_15 = mercury__term_io__mercury_escape_char_1_f_0(mercury__term_io__Char_6);
            }
            mercury__term_io__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__term_io__func_3(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_17), mercury__term_io__Stream_5, ((MR_Box) (mercury__term_io__V_15_15)), mercury__term_io__STATE_VARIABLE_State_0_9, mercury__term_io__STATE_VARIABLE_State_10);
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
    MR_String mercury__term_io__V_7_7;
    MR_String mercury__term_io__V_10_10;

    {
      mercury__term_io__string_is_escaped_char_2_p_0(mercury__term_io__C_3, &mercury__term_io__V_7_7);
    }
    {
      mercury__string__append_3_p_2(mercury__term_io__V_7_7, (MR_String) "\'", &mercury__term_io__V_10_10);
    }
    {
      mercury__string__append_3_p_2((MR_String) "\'", mercury__term_io__V_10_10, &mercury__term_io__HeadVar__2_2);
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
mercury__term_io__quote_char_3_p_0(
  MR_Char mercury__term_io__C_4)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__OutStream_6;
    MR_String mercury__term_io__V_10_10;
    MR_Box mercury__term_io__V_4_14;
    MR_String mercury__term_io__V_19_19;
    MR_String mercury__term_io__V_22_22;

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
      mercury__term_io__string_is_escaped_char_2_p_0(mercury__term_io__C_4, &mercury__term_io__V_19_19);
    }
    {
      mercury__string__append_3_p_2(mercury__term_io__V_19_19, (MR_String) "\'", &mercury__term_io__V_22_22);
    }
    {
      mercury__string__append_3_p_2((MR_String) "\'", mercury__term_io__V_22_22, &mercury__term_io__V_10_10);
    }
    {
      mercury__io__write_string_4_p_0(mercury__term_io__OutStream_6, mercury__term_io__V_10_10);
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

MR_String MR_CALL 
mercury__term_io__quoted_string_1_f_0(
  MR_String mercury__term_io__S_3)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_String mercury__term_io__HeadVar__2_2;
    MR_Word mercury__term_io__V_4_4;
    MR_Word mercury__term_io__V_6_6;
    MR_String mercury__term_io__V_7_7;
    MR_Word mercury__term_io__V_8_8;
    MR_Word mercury__term_io__V_10_10;

    {
      mercury__term_io__V_7_7 = mercury__term_io__escaped_string_1_f_0(mercury__term_io__S_3);
    }
    mercury__term_io__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__term_io__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_io_scalar_common_1[2]);
    {
      mercury__term_io__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__term_io__V_6_6, 0) = ((MR_Box) (mercury__term_io__V_7_7));
      MR_hl_field(MR_mktag(1), mercury__term_io__V_6_6, 1) = ((MR_Box) (mercury__term_io__V_8_8));
    }
    {
      mercury__term_io__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__term_io__V_4_4, 0) = ((MR_Box) ((MR_String) "\""));
      MR_hl_field(MR_mktag(1), mercury__term_io__V_4_4, 1) = ((MR_Box) (mercury__term_io__V_6_6));
    }
    {
      mercury__term_io__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__term_io__V_4_4);
    }
    return mercury__term_io__HeadVar__2_2;
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

void MR_CALL 
mercury__term_io__write_variable_with_op_table_6_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_19,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_18,
  MR_Word mercury__term_io__OutStream_7,
  MR_Box mercury__term_io__Ops_8,
  MR_Word mercury__term_io__Variable_9,
  MR_Word mercury__term_io__VarSet_10)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__V_12_12;
    MR_Integer mercury__term_io__V_13_13;

    {
      mercury__term_io__write_variable_2_9_p_0(mercury__term_io__TypeInfo_for_T_19, mercury__term_io__TypeClassInfo_for_op_table_18, mercury__term_io__OutStream_7, mercury__term_io__Ops_8, mercury__term_io__Variable_9, mercury__term_io__VarSet_10, &mercury__term_io__V_12_12, (MR_Integer) 0, &mercury__term_io__V_13_13);
    }
  }
}

void MR_CALL 
mercury__term_io__write_variable_with_op_table_5_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_16,
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_15,
  MR_Box mercury__term_io__Ops_6,
  MR_Word mercury__term_io__Variable_7,
  MR_Word mercury__term_io__VarSet_8)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__OutStream_10;
    MR_Box mercury__term_io__V_4_19;
    MR_Word mercury__term_io__V_27_27;
    MR_Integer mercury__term_io__V_28_28;

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
      mercury__term_io__write_variable_2_9_p_0(mercury__term_io__TypeInfo_for_T_16, mercury__term_io__TypeClassInfo_for_op_table_15, mercury__term_io__OutStream_10, mercury__term_io__Ops_6, mercury__term_io__Variable_7, mercury__term_io__VarSet_8, &mercury__term_io__V_27_27, (MR_Integer) 0, &mercury__term_io__V_28_28);
    }
  }
}

void MR_CALL 
mercury__term_io__write_variable_5_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_15,
  MR_Word mercury__term_io__OutStream_6,
  MR_Word mercury__term_io__Variable_7,
  MR_Word mercury__term_io__VarSet_8)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__TypeClassInfo_for_op_table_16;
    MR_Word mercury__term_io__V_27_27;
    MR_Integer mercury__term_io__V_28_28;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__term_io__TypeClassInfo_for_op_table_16 = (MR_Word) &mercury__term_io_scalar_common_1[0];
    {
      mercury__term_io__write_variable_2_9_p_0(mercury__term_io__TypeInfo_for_T_15, mercury__term_io__TypeClassInfo_for_op_table_16, mercury__term_io__OutStream_6, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Variable_7, mercury__term_io__VarSet_8, &mercury__term_io__V_27_27, (MR_Integer) 0, &mercury__term_io__V_28_28);
    }
  }
}

void MR_CALL 
mercury__term_io__write_variable_4_p_0(
  MR_Word mercury__term_io__TypeInfo_for_T_13,
  MR_Word mercury__term_io__Variable_5,
  MR_Word mercury__term_io__VarSet_6)
{
  {
    MR_bool mercury__term_io__succeeded;
    MR_Word mercury__term_io__TypeClassInfo_for_op_table_26;
    MR_Word mercury__term_io__OutStream_8;
    MR_Box mercury__term_io__V_4_16;
    MR_Word mercury__term_io__V_37_37;
    MR_Integer mercury__term_io__V_38_38;

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
      mercury__term_io__write_variable_2_9_p_0(mercury__term_io__TypeInfo_for_T_13, mercury__term_io__TypeClassInfo_for_op_table_26, mercury__term_io__OutStream_8, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Variable_5, mercury__term_io__VarSet_6, &mercury__term_io__V_37_37, (MR_Integer) 0, &mercury__term_io__V_38_38);
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
    MR_Integer mercury__term_io__V_42_42;
    MR_Integer mercury__term_io__V_46_46;
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__term_io__conv1_V_46_46;
    MR_Word mercury__term_io__V_26_26;
    MR_Integer mercury__term_io__V_27_27;

    {
      mercury__term_io__conv1_V_46_46 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_17), mercury__term_io__Ops_8);
    }
    mercury__term_io__V_46_46 = ((MR_Integer) mercury__term_io__conv1_V_46_46);
    mercury__term_io__V_42_42 = (mercury__term_io__V_46_46 + (MR_Integer) 1);
    {
      mercury__term_io__write_term_3_10_p_0(mercury__term_io__TypeInfo_for_T_18, mercury__term_io__TypeClassInfo_for_op_table_17, mercury__term_io__OutStream_7, mercury__term_io__Ops_8, mercury__term_io__Term_10, mercury__term_io__V_42_42, mercury__term_io__VarSet_9, &mercury__term_io__V_26_26, (MR_Integer) 0, &mercury__term_io__V_27_27);
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
    MR_Integer mercury__term_io__V_53_53;
    MR_Integer mercury__term_io__V_57_57;
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box);
    MR_Box mercury__term_io__conv1_V_57_57;
    MR_Word mercury__term_io__V_37_37;
    MR_Integer mercury__term_io__V_38_38;

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
      mercury__term_io__conv1_V_57_57 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_15), mercury__term_io__Ops_6);
    }
    mercury__term_io__V_57_57 = ((MR_Integer) mercury__term_io__conv1_V_57_57);
    mercury__term_io__V_53_53 = (mercury__term_io__V_57_57 + (MR_Integer) 1);
    {
      mercury__term_io__write_term_3_10_p_0(mercury__term_io__TypeInfo_for_T_16, mercury__term_io__TypeClassInfo_for_op_table_15, mercury__term_io__OutStream_10, mercury__term_io__Ops_6, mercury__term_io__Term_8, mercury__term_io__V_53_53, mercury__term_io__VarSet_7, &mercury__term_io__V_37_37, (MR_Integer) 0, &mercury__term_io__V_38_38);
    }
    {
      mercury__io__write_string_4_p_0(mercury__term_io__OutStream_10, (MR_String) ".\n");
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
    MR_Integer mercury__term_io__V_53_53;
    MR_Integer mercury__term_io__V_57_57;
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box);
    MR_Box mercury__term_io__conv1_V_57_57;
    MR_Word mercury__term_io__V_37_37;
    MR_Integer mercury__term_io__V_38_38;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__term_io__TypeClassInfo_for_op_table_16 = (MR_Word) &mercury__term_io_scalar_common_1[0];
    mercury__term_io__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 12)));
    {
      mercury__term_io__conv1_V_57_57 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_16), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__term_io__V_57_57 = ((MR_Integer) mercury__term_io__conv1_V_57_57);
    mercury__term_io__V_53_53 = (mercury__term_io__V_57_57 + (MR_Integer) 1);
    {
      mercury__term_io__write_term_3_10_p_0(mercury__term_io__TypeInfo_for_T_15, mercury__term_io__TypeClassInfo_for_op_table_16, mercury__term_io__OutStream_6, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Term_8, mercury__term_io__V_53_53, mercury__term_io__VarSet_7, &mercury__term_io__V_37_37, (MR_Integer) 0, &mercury__term_io__V_38_38);
    }
    {
      mercury__io__write_string_4_p_0(mercury__term_io__OutStream_6, (MR_String) ".\n");
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
    MR_Integer mercury__term_io__V_32_32;
    MR_Integer mercury__term_io__V_36_36;
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_18, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__term_io__conv1_V_36_36;
    MR_Word mercury__term_io__V_12_12;
    MR_Integer mercury__term_io__V_13_13;

    {
      mercury__term_io__conv1_V_36_36 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_18), mercury__term_io__Ops_8);
    }
    mercury__term_io__V_36_36 = ((MR_Integer) mercury__term_io__conv1_V_36_36);
    mercury__term_io__V_32_32 = (mercury__term_io__V_36_36 + (MR_Integer) 1);
    {
      mercury__term_io__write_term_3_10_p_0(mercury__term_io__TypeInfo_for_T_19, mercury__term_io__TypeClassInfo_for_op_table_18, mercury__term_io__OutStream_7, mercury__term_io__Ops_8, mercury__term_io__Term_10, mercury__term_io__V_32_32, mercury__term_io__VarSet_9, &mercury__term_io__V_12_12, (MR_Integer) 0, &mercury__term_io__V_13_13);
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
    MR_Integer mercury__term_io__V_43_43;
    MR_Integer mercury__term_io__V_47_47;
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box);
    MR_Box mercury__term_io__conv1_V_47_47;
    MR_Word mercury__term_io__V_27_27;
    MR_Integer mercury__term_io__V_28_28;

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
      mercury__term_io__conv1_V_47_47 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_15), mercury__term_io__Ops_6);
    }
    mercury__term_io__V_47_47 = ((MR_Integer) mercury__term_io__conv1_V_47_47);
    mercury__term_io__V_43_43 = (mercury__term_io__V_47_47 + (MR_Integer) 1);
    {
      mercury__term_io__write_term_3_10_p_0(mercury__term_io__TypeInfo_for_T_16, mercury__term_io__TypeClassInfo_for_op_table_15, mercury__term_io__OutStream_10, mercury__term_io__Ops_6, mercury__term_io__Term_8, mercury__term_io__V_43_43, mercury__term_io__VarSet_7, &mercury__term_io__V_27_27, (MR_Integer) 0, &mercury__term_io__V_28_28);
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
    MR_Integer mercury__term_io__V_43_43;
    MR_Integer mercury__term_io__V_47_47;
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box);
    MR_Box mercury__term_io__conv1_V_47_47;
    MR_Word mercury__term_io__V_27_27;
    MR_Integer mercury__term_io__V_28_28;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__term_io__TypeClassInfo_for_op_table_16 = (MR_Word) &mercury__term_io_scalar_common_1[0];
    mercury__term_io__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 12)));
    {
      mercury__term_io__conv1_V_47_47 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_16), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__term_io__V_47_47 = ((MR_Integer) mercury__term_io__conv1_V_47_47);
    mercury__term_io__V_43_43 = (mercury__term_io__V_47_47 + (MR_Integer) 1);
    {
      mercury__term_io__write_term_3_10_p_0(mercury__term_io__TypeInfo_for_T_15, mercury__term_io__TypeClassInfo_for_op_table_16, mercury__term_io__OutStream_6, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Term_8, mercury__term_io__V_43_43, mercury__term_io__VarSet_7, &mercury__term_io__V_27_27, (MR_Integer) 0, &mercury__term_io__V_28_28);
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
