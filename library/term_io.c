/*
** Automatically generated from `term_io.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




#line 93 "term_io.c"
static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0;

#line 96 "term_io.c"
static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1;

#line 99 "term_io.c"
static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_value_ordered_adjacent_to_graphic_token_0[2];

#line 102 "term_io.c"
static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_name_ordered_adjacent_to_graphic_token_0[2];

#line 105 "term_io.c"
static const MR_Integer mercury__term_io__term_io__functor_number_map_adjacent_to_graphic_token_0[2];

#line 108 "term_io.c"
static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_0;

#line 111 "term_io.c"
static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_read_term_1_1[2];

#line 114 "term_io.c"
static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_1;

#line 117 "term_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_io__varset__pti_varset_1__pseudo_1;

#line 120 "term_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_io__term__pti_term_1__pseudo_1;

#line 123 "term_io.c"
static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_read_term_1_2[2];

#line 126 "term_io.c"
static const MR_DuFunctorDesc mercury__term_io__term_io__du_functor_desc_read_term_1_2;

#line 129 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_0[1];

#line 132 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_1[1];

#line 135 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_2[1];

#line 138 "term_io.c"
static const MR_DuPtagLayout mercury__term_io__term_io__du_ptag_ordered_read_term_1[3];

#line 141 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_name_ordered_read_term_1[3];

#line 144 "term_io.c"
static const MR_Integer mercury__term_io__term_io__functor_number_map_read_term_1[3];

#line 147 "term_io.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_io__term_io__ti_read_term_1term__type_ctor_info_generic_0;

#line 150 "term_io.c"
static MR_bool MR_CALL 
mercury__term_io____Unify____adjacent_to_graphic_token_0_0_10001(
#line 153 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 155 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2);

#line 158 "term_io.c"
static void MR_CALL 
mercury__term_io____Compare____adjacent_to_graphic_token_0_0_10001(
#line 161 "term_io.c"
  MR_Box * mercury__term_io__wrapper_arg_1,
#line 163 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2,
#line 165 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3);

#line 168 "term_io.c"
static MR_bool MR_CALL 
mercury__term_io____Unify____read_term_1_0_10001(
#line 171 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 173 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2,
#line 175 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3);

#line 178 "term_io.c"
static void MR_CALL 
mercury__term_io____Compare____read_term_1_0_10001(
#line 181 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 183 "term_io.c"
  MR_Box * mercury__term_io__wrapper_arg_2,
#line 185 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3,
#line 187 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_4);

#line 190 "term_io.c"
static MR_bool MR_CALL 
mercury__term_io____Unify____read_term_0_0_10001(
#line 193 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 195 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2);

#line 198 "term_io.c"
static void MR_CALL 
mercury__term_io____Compare____read_term_0_0_10001(
#line 201 "term_io.c"
  MR_Box * mercury__term_io__wrapper_arg_1,
#line 203 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2,
#line 205 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3);

#line 460 "string.int0"
static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_57_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
#line 460 "string.int0"
  MR_Word mercury__term_io__V_17_17,
#line 460 "string.int0"
  MR_Word mercury__term_io__V_18_18,
#line 460 "string.int0"
  MR_Box mercury__term_io__V_19_19,
#line 460 "string.int0"
  MR_String mercury__term_io__V_8_8,
#line 460 "string.int0"
  MR_Integer mercury__term_io__V_9_9,
#line 460 "string.int0"
  MR_Integer mercury__term_io__V_10_10,
#line 460 "string.int0"
  MR_Box mercury__term_io__V_14_11,
#line 460 "string.int0"
  MR_Box * mercury__term_io__V_15_12);

#line 460 "string.int0"
static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_54_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
#line 460 "string.int0"
  MR_Word mercury__term_io__V_17_17,
#line 460 "string.int0"
  MR_Word mercury__term_io__V_18_18,
#line 460 "string.int0"
  MR_Word mercury__term_io__V_19_19,
#line 460 "string.int0"
  MR_String mercury__term_io__V_8_8,
#line 460 "string.int0"
  MR_Integer mercury__term_io__V_9_9,
#line 460 "string.int0"
  MR_Integer mercury__term_io__V_10_10);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 517 "term_io.m"
static MR_bool MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(
#line 517 "term_io.m"
  MR_Word mercury__term_io__HeadVar__1_1);

#line 461 "string.int0"
static void MR_CALL 
mercury__term_io__foldl_between_2__ho30_6_p_in__string_0(
#line 461 "string.int0"
  MR_String mercury__term_io__V_8_8,
#line 461 "string.int0"
  MR_Integer mercury__term_io__V_9_9,
#line 461 "string.int0"
  MR_Integer mercury__term_io__V_10_10,
#line 461 "string.int0"
  MR_Word mercury__term_io__V_14_11,
#line 461 "string.int0"
  MR_Word * mercury__term_io__V_15_12);

#line 412 "string.int0"
static MR_bool MR_CALL 
mercury__term_io__all_match_loop__ho22_3_p_in__string_0(
#line 412 "string.int0"
  MR_String mercury__term_io__V_5_5,
#line 412 "string.int0"
  MR_Integer mercury__term_io__V_6_6);

#line 533 "term_io.m"
static void MR_CALL 
mercury__term_io__write_term_args_8_p_0(
#line 533 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_40,
#line 533 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_39,
#line 533 "term_io.m"
  MR_Box mercury__term_io__Ops_1,
#line 533 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2,
#line 533 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_3,
#line 533 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_4,
#line 533 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_5,
#line 533 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_6);

#line 488 "term_io.m"
static void MR_CALL 
mercury__term_io__write_list_tail_8_p_0(
#line 488 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_52,
#line 488 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_51,
#line 488 "term_io.m"
  MR_Box mercury__term_io__Ops_9,
#line 488 "term_io.m"
  MR_Word mercury__term_io__Term_10,
#line 488 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_21,
#line 488 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_22,
#line 488 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_23,
#line 488 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_24);

#line 337 "term_io.m"
static void MR_CALL 
mercury__term_io__write_arg_term_8_p_0(
#line 337 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_25,
#line 337 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_24,
#line 337 "term_io.m"
  MR_Box mercury__term_io__Ops_9,
#line 337 "term_io.m"
  MR_Word mercury__term_io__Term_10,
#line 337 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_14,
#line 337 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_15,
#line 337 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_16,
#line 337 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_17);


static /* final */ const MR_Box mercury__term_io_scalar_common_1[4][2];

static /* final */ const MR_Box mercury__term_io_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__term_io_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__term_io_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__term_io_scalar_common_5[1][1];

static /* final */ const MR_Integer mercury__term_io_scalar_common_6[1][3];


#line 587 "term_io.m"
/* sealed */ struct mercury__term_io__vector_common_type_7_0_s {
#line 587 "term_io.m"
  const MR_Integer mercury__term_io__vector_common_type_7_0__vct_7_f_0;
#line 587 "term_io.m"
};

static /* final */ const struct mercury__term_io__vector_common_type_7_0_s mercury__term_io_vector_common_7[12];

#line 592 "term_io.m"
/* sealed */ struct mercury__term_io__vector_common_type_8_0_s {
#line 592 "term_io.m"
  const MR_String mercury__term_io__vector_common_type_8_0__vct_8_f_0;
#line 592 "term_io.m"
};

static /* final */ const struct mercury__term_io__vector_common_type_8_0_s mercury__term_io_vector_common_8[24];



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

static /* final */ const MR_Box mercury__term_io_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Integer mercury__term_io_scalar_common_6[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 4227923967,
    (MR_Integer) 4160749569,
    (MR_Integer) 2013265921
  },
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

static /* final */ const struct mercury__term_io__vector_common_type_8_0_s mercury__term_io_vector_common_8[24] = {
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
#include "version_array.mh"



#line 516 "term_io.c"
static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0 = {
  (MR_String) "maybe_adjacent_to_graphic_token",
  (MR_Integer) 0
};

#line 522 "term_io.c"
static const MR_EnumFunctorDesc mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1 = {
  (MR_String) "not_adjacent_to_graphic_token",
  (MR_Integer) 1
};

#line 528 "term_io.c"
static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_value_ordered_adjacent_to_graphic_token_0[2] = {
  &mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0,
  &mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1
};

#line 534 "term_io.c"
static const MR_EnumFunctorDescPtr mercury__term_io__term_io__enum_name_ordered_adjacent_to_graphic_token_0[2] = {
  &mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_0,
  &mercury__term_io__term_io__enum_functor_desc_adjacent_to_graphic_token_0_1
};

#line 540 "term_io.c"
static const MR_Integer mercury__term_io__term_io__functor_number_map_adjacent_to_graphic_token_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 546 "term_io.c"
const MR_TypeCtorInfo_Struct mercury__term_io__term_io__type_ctor_info_adjacent_to_graphic_token_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 563 "term_io.c"
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
  NULL
};

#line 578 "term_io.c"
static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_read_term_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 584 "term_io.c"
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
  NULL
};

#line 599 "term_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_io__varset__pti_varset_1__pseudo_1 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 607 "term_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_io__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 615 "term_io.c"
static const MR_PseudoTypeInfo mercury__term_io__term_io__field_types_read_term_1_2[2] = {
  (MR_PseudoTypeInfo) &mercury__term_io__varset__pti_varset_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term_io__term__pti_term_1__pseudo_1
};

#line 621 "term_io.c"
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
  NULL
};

#line 636 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_0[1] = {
  &mercury__term_io__term_io__du_functor_desc_read_term_1_0
};

#line 641 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_1[1] = {
  &mercury__term_io__term_io__du_functor_desc_read_term_1_1
};

#line 646 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_stag_ordered_read_term_1_2[1] = {
  &mercury__term_io__term_io__du_functor_desc_read_term_1_2
};

#line 651 "term_io.c"
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

#line 670 "term_io.c"
static const MR_DuFunctorDescPtr mercury__term_io__term_io__du_name_ordered_read_term_1[3] = {
  &mercury__term_io__term_io__du_functor_desc_read_term_1_0,
  &mercury__term_io__term_io__du_functor_desc_read_term_1_1,
  &mercury__term_io__term_io__du_functor_desc_read_term_1_2
};

#line 677 "term_io.c"
static const MR_Integer mercury__term_io__term_io__functor_number_map_read_term_1[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 684 "term_io.c"
const MR_TypeCtorInfo_Struct mercury__term_io__term_io__type_ctor_info_read_term_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
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

#line 701 "term_io.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_io__term_io__ti_read_term_1term__type_ctor_info_generic_0 = {
  &mercury__term_io__term_io__type_ctor_info_read_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 709 "term_io.c"
const MR_TypeCtorInfo_Struct mercury__term_io__term_io__type_ctor_info_read_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 726 "term_io.c"
static MR_bool MR_CALL 
mercury__term_io____Unify____adjacent_to_graphic_token_0_0_10001(
#line 729 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 731 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2)
#line 733 "term_io.c"
{
#line 735 "term_io.c"
  {
#line 737 "term_io.c"
    MR_bool mercury__term_io__succeeded;

#line 740 "term_io.c"
    {
#line 742 "term_io.c"
      mercury__term_io__succeeded = mercury__term_io____Unify____adjacent_to_graphic_token_0_0(((MR_Word) mercury__term_io__wrapper_arg_1), ((MR_Word) mercury__term_io__wrapper_arg_2));
    }
#line 745 "term_io.c"
    return mercury__term_io__succeeded;
#line 747 "term_io.c"
  }
#line 749 "term_io.c"
}

#line 752 "term_io.c"
static void MR_CALL 
mercury__term_io____Compare____adjacent_to_graphic_token_0_0_10001(
#line 755 "term_io.c"
  MR_Box * mercury__term_io__wrapper_arg_1,
#line 757 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2,
#line 759 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3)
#line 761 "term_io.c"
{
#line 763 "term_io.c"
  {
#line 765 "term_io.c"
    MR_Word mercury__term_io__conv0_HeadVar__1_1;

#line 768 "term_io.c"
    {
#line 770 "term_io.c"
      mercury__term_io____Compare____adjacent_to_graphic_token_0_0(&mercury__term_io__conv0_HeadVar__1_1, ((MR_Word) mercury__term_io__wrapper_arg_2), ((MR_Word) mercury__term_io__wrapper_arg_3));
    }
#line 773 "term_io.c"
    *mercury__term_io__wrapper_arg_1 = ((MR_Box) (mercury__term_io__conv0_HeadVar__1_1));
#line 775 "term_io.c"
  }
#line 777 "term_io.c"
}

#line 780 "term_io.c"
static MR_bool MR_CALL 
mercury__term_io____Unify____read_term_1_0_10001(
#line 783 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 785 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2,
#line 787 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3)
#line 789 "term_io.c"
{
#line 791 "term_io.c"
  {
#line 793 "term_io.c"
    MR_bool mercury__term_io__succeeded;

#line 796 "term_io.c"
    {
#line 798 "term_io.c"
      mercury__term_io__succeeded = mercury__term_io____Unify____read_term_1_0(((MR_Word) mercury__term_io__wrapper_arg_1), ((MR_Word) mercury__term_io__wrapper_arg_2), ((MR_Word) mercury__term_io__wrapper_arg_3));
    }
#line 801 "term_io.c"
    return mercury__term_io__succeeded;
#line 803 "term_io.c"
  }
#line 805 "term_io.c"
}

#line 808 "term_io.c"
static void MR_CALL 
mercury__term_io____Compare____read_term_1_0_10001(
#line 811 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 813 "term_io.c"
  MR_Box * mercury__term_io__wrapper_arg_2,
#line 815 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3,
#line 817 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_4)
#line 819 "term_io.c"
{
#line 821 "term_io.c"
  {
#line 823 "term_io.c"
    MR_Word mercury__term_io__conv0_HeadVar__1_1;

#line 826 "term_io.c"
    {
#line 828 "term_io.c"
      mercury__term_io____Compare____read_term_1_0(((MR_Word) mercury__term_io__wrapper_arg_1), &mercury__term_io__conv0_HeadVar__1_1, ((MR_Word) mercury__term_io__wrapper_arg_3), ((MR_Word) mercury__term_io__wrapper_arg_4));
    }
#line 831 "term_io.c"
    *mercury__term_io__wrapper_arg_2 = ((MR_Box) (mercury__term_io__conv0_HeadVar__1_1));
#line 833 "term_io.c"
  }
#line 835 "term_io.c"
}

#line 838 "term_io.c"
static MR_bool MR_CALL 
mercury__term_io____Unify____read_term_0_0_10001(
#line 841 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_1,
#line 843 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2)
#line 845 "term_io.c"
{
#line 847 "term_io.c"
  {
#line 849 "term_io.c"
    MR_bool mercury__term_io__succeeded;

#line 852 "term_io.c"
    {
#line 854 "term_io.c"
      mercury__term_io__succeeded = mercury__term_io____Unify____read_term_0_0(((MR_Word) mercury__term_io__wrapper_arg_1), ((MR_Word) mercury__term_io__wrapper_arg_2));
    }
#line 857 "term_io.c"
    return mercury__term_io__succeeded;
#line 859 "term_io.c"
  }
#line 861 "term_io.c"
}

#line 864 "term_io.c"
static void MR_CALL 
mercury__term_io____Compare____read_term_0_0_10001(
#line 867 "term_io.c"
  MR_Box * mercury__term_io__wrapper_arg_1,
#line 869 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_2,
#line 871 "term_io.c"
  MR_Box mercury__term_io__wrapper_arg_3)
#line 873 "term_io.c"
{
#line 875 "term_io.c"
  {
#line 877 "term_io.c"
    MR_Word mercury__term_io__conv0_HeadVar__1_1;

#line 880 "term_io.c"
    {
#line 882 "term_io.c"
      mercury__term_io____Compare____read_term_0_0(&mercury__term_io__conv0_HeadVar__1_1, ((MR_Word) mercury__term_io__wrapper_arg_2), ((MR_Word) mercury__term_io__wrapper_arg_3));
    }
#line 885 "term_io.c"
    *mercury__term_io__wrapper_arg_1 = ((MR_Box) (mercury__term_io__conv0_HeadVar__1_1));
#line 887 "term_io.c"
  }
#line 889 "term_io.c"
}

#line 460 "string.int0"
static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_57_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
#line 460 "string.int0"
  MR_Word mercury__term_io__V_17_17,
#line 460 "string.int0"
  MR_Word mercury__term_io__V_18_18,
#line 460 "string.int0"
  MR_Box mercury__term_io__V_19_19,
#line 460 "string.int0"
  MR_String mercury__term_io__V_8_8,
#line 460 "string.int0"
  MR_Integer mercury__term_io__V_9_9,
#line 460 "string.int0"
  MR_Integer mercury__term_io__V_10_10,
#line 460 "string.int0"
  MR_Box mercury__term_io__V_14_11,
#line 460 "string.int0"
  MR_Box * mercury__term_io__V_15_12)
#line 460 "string.int0"
{
#line 421 "string.opt"
  while (MR_TRUE)
#line 421 "string.opt"
    {
#line 421 "string.opt"
      /* tailcall optimized into a loop */
#line 421 "string.opt"
      {
#line 421 "string.opt"
        MR_bool mercury__term_io__succeeded = (mercury__term_io__V_9_9 < mercury__term_io__V_10_10);
#line 421 "string.opt"
        MR_Integer mercury__term_io__V_12_13;
#line 421 "string.opt"
        MR_Char mercury__term_io__V_13_14;

#line 415 "string.opt"
        if (mercury__term_io__succeeded)
#line 415 "string.opt"
          {
#line 1047 "string.opt"
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
#line 1047 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 957 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_io__V_12_13  = NextIndex;
	 mercury__term_io__V_13_14  = Ch;
#line 1047 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 415 "string.opt"
            if (mercury__term_io__succeeded)
#line 417 "string.opt"
              mercury__term_io__succeeded = (mercury__term_io__V_12_13 <= mercury__term_io__V_10_10);
#line 415 "string.opt"
          }
#line 421 "string.opt"
        if (mercury__term_io__succeeded)
#line 419 "string.opt"
          {
#line 419 "string.opt"
            MR_Box mercury__term_io__V_16_15;

#line 419 "string.opt"
            {
#line 419 "string.opt"
              mercury__term_io__write_escaped_char_4_p_0(mercury__term_io__V_17_17, mercury__term_io__V_18_18, mercury__term_io__V_19_19, mercury__term_io__V_13_14, mercury__term_io__V_14_11, &mercury__term_io__V_16_15);
            }
#line 420 "string.opt"
            /* direct tailcall eliminated */
#line 420 "string.opt"
            {
#line 420 "string.opt"
              MR_Integer mercury__term_io__V_9__tmp_copy_9 = mercury__term_io__V_12_13;
#line 420 "string.opt"
              MR_Box mercury__term_io__V_14__tmp_copy_11 = mercury__term_io__V_16_15;

#line 420 "string.opt"
              mercury__term_io__V_14_11 = mercury__term_io__V_14__tmp_copy_11;
#line 420 "string.opt"
              mercury__term_io__V_9_9 = mercury__term_io__V_9__tmp_copy_9;
#line 420 "string.opt"
            }
#line 420 "string.opt"
            continue;
#line 419 "string.opt"
          }
#line 421 "string.opt"
        else
#line 422 "string.opt"
          *mercury__term_io__V_15_12 = mercury__term_io__V_14_11;
#line 421 "string.opt"
      }
#line 421 "string.opt"
      break;
#line 421 "string.opt"
    }
#line 460 "string.int0"
}

#line 460 "string.int0"
static void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_54_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(
#line 460 "string.int0"
  MR_Word mercury__term_io__V_17_17,
#line 460 "string.int0"
  MR_Word mercury__term_io__V_18_18,
#line 460 "string.int0"
  MR_Word mercury__term_io__V_19_19,
#line 460 "string.int0"
  MR_String mercury__term_io__V_8_8,
#line 460 "string.int0"
  MR_Integer mercury__term_io__V_9_9,
#line 460 "string.int0"
  MR_Integer mercury__term_io__V_10_10)
#line 460 "string.int0"
{
#line 421 "string.opt"
  while (MR_TRUE)
#line 421 "string.opt"
    {
#line 421 "string.opt"
      /* tailcall optimized into a loop */
#line 421 "string.opt"
      {
#line 421 "string.opt"
        MR_bool mercury__term_io__succeeded = (mercury__term_io__V_9_9 < mercury__term_io__V_10_10);
#line 421 "string.opt"
        MR_Integer mercury__term_io__V_12_13;
#line 421 "string.opt"
        MR_Char mercury__term_io__V_13_14;

#line 415 "string.opt"
        if (mercury__term_io__succeeded)
#line 415 "string.opt"
          {
#line 1047 "string.opt"
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
#line 1047 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 1079 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_io__V_12_13  = NextIndex;
	 mercury__term_io__V_13_14  = Ch;
#line 1047 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 415 "string.opt"
            if (mercury__term_io__succeeded)
#line 417 "string.opt"
              mercury__term_io__succeeded = (mercury__term_io__V_12_13 <= mercury__term_io__V_10_10);
#line 415 "string.opt"
          }
#line 421 "string.opt"
        if (mercury__term_io__succeeded)
#line 419 "string.opt"
          {
#line 419 "string.opt"
            {
#line 419 "string.opt"
              mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__V_17_17, mercury__term_io__V_18_18, mercury__term_io__V_19_19, mercury__term_io__V_13_14);
            }
#line 420 "string.opt"
            /* direct tailcall eliminated */
#line 420 "string.opt"
            {
#line 420 "string.opt"
              MR_Integer mercury__term_io__V_9__tmp_copy_9 = mercury__term_io__V_12_13;

#line 420 "string.opt"
              mercury__term_io__V_9_9 = mercury__term_io__V_9__tmp_copy_9;
#line 420 "string.opt"
            }
#line 420 "string.opt"
            continue;
#line 419 "string.opt"
          }
#line 421 "string.opt"
        else
#line 422 "string.opt"
          {
#line 422 "string.opt"
          }
#line 421 "string.opt"
      }
#line 421 "string.opt"
      break;
#line 421 "string.opt"
    }
#line 460 "string.int0"
}

#line 127 "term_io.m"
void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_p_0(
#line 127 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
#line 127 "term_io.m"
  MR_Word mercury__term_io__Stream_5,
#line 127 "term_io.m"
  MR_Char mercury__term_io__C_6)
#line 127 "term_io.m"
{
#line 602 "term_io.m"
  {
#line 602 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 602 "term_io.m"
    MR_String mercury__term_io__V_10_10;
#line 1152 "term_io.c"
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1154 "term_io.c"
    MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_9;

#line 603 "term_io.m"
    {
#line 603 "term_io.m"
      mercury__term_io__V_10_10 = mercury__term_io__quoted_char_1_f_0(mercury__term_io__C_6);
    }
#line 1162 "term_io.c"
    mercury__term_io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1164 "term_io.c"
    {
#line 1166 "term_io.c"
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_12), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (mercury__term_io__V_10_10)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_9);
    }
#line 602 "term_io.m"
  }
#line 127 "term_io.m"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__term_io__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 517 "term_io.m"
static MR_bool MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(
#line 517 "term_io.m"
  MR_Word mercury__term_io__HeadVar__1_1)
#line 517 "term_io.m"
{
#line 519 "term_io.m"
  while (MR_TRUE)
#line 519 "term_io.m"
    {
#line 519 "term_io.m"
      /* tailcall optimized into a loop */
#line 519 "term_io.m"
      {
#line 519 "term_io.m"
        MR_bool mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 519 "term_io.m"
        MR_Word mercury__term_io__V_30_30;
#line 519 "term_io.m"
        MR_Word mercury__term_io__V_31_31;
#line 519 "term_io.m"
        MR_Word mercury__term_io__V_29_29;

#line 519 "term_io.m"
        if (mercury__term_io__succeeded)
#line 519 "term_io.m"
          {
#line 519 "term_io.m"
            mercury__term_io__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
#line 519 "term_io.m"
            mercury__term_io__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));
#line 519 "term_io.m"
            mercury__term_io__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 2)));
#line 519 "term_io.m"
#line 519 "term_io.m"
            switch (MR_tag((MR_Word) mercury__term_io__V_31_31)) {
#line 519 "term_io.m"
              default:
#line 519 "term_io.m"
                mercury__term_io__succeeded = MR_FALSE;
#line 519 "term_io.m"
                break;
#line 519 "term_io.m"
              case (MR_Integer) 0:
#line 521 "term_io.m"
                {
#line 521 "term_io.m"
                  MR_String mercury__term_io__Op_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__V_31_31, (MR_Integer) 0)));
#line 521 "term_io.m"
                  MR_Word mercury__term_io__Arg_13;
#line 521 "term_io.m"
                  MR_Word mercury__term_io__V_32_32;
#line 521 "term_io.m"
                  MR_Word mercury__term_io__V_33_33;

#line 523 "term_io.m"
                  mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 523 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 523 "term_io.m"
                    {
#line 523 "term_io.m"
                      mercury__term_io__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_30_30, (MR_Integer) 0)));
#line 523 "term_io.m"
                      mercury__term_io__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_30_30, (MR_Integer) 1)));
#line 525 "term_io.m"
                      if ((mercury__term_io__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 526 "term_io.m"
                        {
#line 526 "term_io.m"
                          MR_Word mercury__term_io__TypeClassInfo_for_op_table_28;
#line 1263 "term_io.c"
                          MR_Integer mercury__term_io__V_18_18;
#line 1265 "term_io.c"
                          MR_Word mercury__term_io__V_19_19;
#line 1267 "term_io.c"
                          MR_bool MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 1269 "term_io.c"
                          MR_Box mercury__term_io__conv2_V_18_18;
#line 1271 "term_io.c"
                          MR_Box mercury__term_io__conv1_V_19_19;

#line 526 "term_io.m"
                          mercury__term_io__Arg_13 = mercury__term_io__V_33_33;
#line 45 "ops.opt"
                          mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1278 "term_io.c"
                          mercury__term_io__TypeClassInfo_for_op_table_28 = (MR_Word) &mercury__term_io_scalar_common_1[0];
#line 1280 "term_io.c"
                          mercury__term_io__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_28, (MR_Integer) 0)), (MR_Integer) 8)));
#line 1282 "term_io.c"
                          {
#line 1284 "term_io.c"
                            mercury__term_io__succeeded = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_28), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__term_io__Op_10)), &mercury__term_io__conv2_V_18_18, &mercury__term_io__conv1_V_19_19);
                          }
#line 1287 "term_io.c"
                          if (mercury__term_io__succeeded)
#line 1289 "term_io.c"
                            {
#line 1291 "term_io.c"
                              mercury__term_io__V_18_18 = ((MR_Integer) mercury__term_io__conv2_V_18_18);
#line 1293 "term_io.c"
                              mercury__term_io__V_19_19 = ((MR_Word) mercury__term_io__conv1_V_19_19);
#line 1295 "term_io.c"
                              mercury__term_io__succeeded = MR_TRUE;
#line 1297 "term_io.c"
                            }
#line 526 "term_io.m"
                        }
#line 525 "term_io.m"
                      else
#line 523 "term_io.m"
                        {
#line 523 "term_io.m"
                          MR_Word mercury__term_io__TypeClassInfo_for_op_table_27;
#line 523 "term_io.m"
                          MR_Word mercury__term_io__V_24_24;
#line 523 "term_io.m"
                          MR_Word mercury__term_io__V_14_14;
#line 1311 "term_io.c"
                          MR_Integer mercury__term_io__V_15_15;
#line 1313 "term_io.c"
                          MR_Word mercury__term_io__V_16_16;
#line 1315 "term_io.c"
                          MR_Word mercury__term_io__V_17_17;
#line 1317 "term_io.c"
                          MR_bool MR_CALL (* mercury__term_io__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
#line 1319 "term_io.c"
                          MR_Box mercury__term_io__conv6_V_15_15;
#line 1321 "term_io.c"
                          MR_Box mercury__term_io__conv5_V_16_16;
#line 1323 "term_io.c"
                          MR_Box mercury__term_io__conv4_V_17_17;

#line 523 "term_io.m"
                          mercury__term_io__Arg_13 = mercury__term_io__V_33_33;
#line 523 "term_io.m"
                          mercury__term_io__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 0)));
#line 523 "term_io.m"
                          mercury__term_io__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 1)));
#line 523 "term_io.m"
                          mercury__term_io__succeeded = (mercury__term_io__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 523 "term_io.m"
                          if (mercury__term_io__succeeded)
#line 523 "term_io.m"
                            {
#line 45 "ops.opt"
                              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1340 "term_io.c"
                              mercury__term_io__TypeClassInfo_for_op_table_27 = (MR_Word) &mercury__term_io_scalar_common_1[0];
#line 1342 "term_io.c"
                              mercury__term_io__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1344 "term_io.c"
                              {
#line 1346 "term_io.c"
                                mercury__term_io__succeeded = mercury__term_io__func_3(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_27), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__term_io__Op_10)), &mercury__term_io__conv6_V_15_15, &mercury__term_io__conv5_V_16_16, &mercury__term_io__conv4_V_17_17);
                              }
#line 1349 "term_io.c"
                              if (mercury__term_io__succeeded)
#line 1351 "term_io.c"
                                {
#line 1353 "term_io.c"
                                  mercury__term_io__V_15_15 = ((MR_Integer) mercury__term_io__conv6_V_15_15);
#line 1355 "term_io.c"
                                  mercury__term_io__V_16_16 = ((MR_Word) mercury__term_io__conv5_V_16_16);
#line 1357 "term_io.c"
                                  mercury__term_io__V_17_17 = ((MR_Word) mercury__term_io__conv4_V_17_17);
#line 1359 "term_io.c"
                                  mercury__term_io__succeeded = MR_TRUE;
#line 1361 "term_io.c"
                                }
#line 523 "term_io.m"
                            }
#line 523 "term_io.m"
                        }
#line 521 "term_io.m"
                      if (mercury__term_io__succeeded)
#line 529 "term_io.m"
                        {
#line 529 "term_io.m"
                          /* direct tailcall eliminated */
#line 529 "term_io.m"
                          {
#line 529 "term_io.m"
                            MR_Word mercury__term_io__HeadVar__1__tmp_copy_1 = mercury__term_io__Arg_13;

#line 529 "term_io.m"
                            mercury__term_io__HeadVar__1_1 = mercury__term_io__HeadVar__1__tmp_copy_1;
#line 529 "term_io.m"
                          }
#line 529 "term_io.m"
                          continue;
#line 529 "term_io.m"
                        }
#line 523 "term_io.m"
                    }
#line 521 "term_io.m"
                }
#line 519 "term_io.m"
                break;
#line 519 "term_io.m"
              case (MR_Integer) 1:
#line 519 "term_io.m"
                mercury__term_io__succeeded = MR_TRUE;
#line 519 "term_io.m"
                break;
#line 519 "term_io.m"
              case (MR_Integer) 3:
#line 519 "term_io.m"
#line 519 "term_io.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_io__V_31_31, (MR_Integer) 0)))) {
#line 519 "term_io.m"
                  default:
#line 519 "term_io.m"
                    mercury__term_io__succeeded = MR_FALSE;
#line 519 "term_io.m"
                    break;
#line 519 "term_io.m"
                  case (MR_Integer) 1:
#line 520 "term_io.m"
                    mercury__term_io__succeeded = MR_TRUE;
#line 519 "term_io.m"
                    break;
#line 519 "term_io.m"
                }
#line 519 "term_io.m"
                break;
#line 519 "term_io.m"
            }
#line 519 "term_io.m"
          }
#line 519 "term_io.m"
        return mercury__term_io__succeeded;
#line 519 "term_io.m"
      }
#line 519 "term_io.m"
      break;
#line 519 "term_io.m"
    }
#line 517 "term_io.m"
}

#line 127 "term_io.m"
void MR_CALL 
mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_p_0(
#line 127 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
#line 127 "term_io.m"
  MR_Box mercury__term_io__Stream_5,
#line 127 "term_io.m"
  MR_Char mercury__term_io__C_6,
#line 127 "term_io.m"
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_8,
#line 127 "term_io.m"
  MR_Box * mercury__term_io__STATE_VARIABLE_State_9)
#line 127 "term_io.m"
{
#line 602 "term_io.m"
  {
#line 602 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 602 "term_io.m"
    MR_String mercury__term_io__V_10_10;
#line 1455 "term_io.c"
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 603 "term_io.m"
    {
#line 603 "term_io.m"
      mercury__term_io__V_10_10 = mercury__term_io__quoted_char_1_f_0(mercury__term_io__C_6);
    }
#line 1463 "term_io.c"
    mercury__term_io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1465 "term_io.c"
    {
#line 1467 "term_io.c"
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_12), mercury__term_io__Stream_5, ((MR_Box) (mercury__term_io__V_10_10)), mercury__term_io__STATE_VARIABLE_State_0_8, mercury__term_io__STATE_VARIABLE_State_9);
#line 1469 "term_io.c"
      return;
    }
#line 602 "term_io.m"
  }
#line 127 "term_io.m"
}

#line 461 "string.int0"
static void MR_CALL 
mercury__term_io__foldl_between_2__ho30_6_p_in__string_0(
#line 461 "string.int0"
  MR_String mercury__term_io__V_8_8,
#line 461 "string.int0"
  MR_Integer mercury__term_io__V_9_9,
#line 461 "string.int0"
  MR_Integer mercury__term_io__V_10_10,
#line 461 "string.int0"
  MR_Word mercury__term_io__V_14_11,
#line 461 "string.int0"
  MR_Word * mercury__term_io__V_15_12)
#line 461 "string.int0"
{
#line 421 "string.opt"
  while (MR_TRUE)
#line 421 "string.opt"
    {
#line 421 "string.opt"
      /* tailcall optimized into a loop */
#line 421 "string.opt"
      {
#line 421 "string.opt"
        MR_bool mercury__term_io__succeeded = (mercury__term_io__V_9_9 < mercury__term_io__V_10_10);
#line 421 "string.opt"
        MR_Integer mercury__term_io__V_12_13;
#line 421 "string.opt"
        MR_Char mercury__term_io__V_13_14;

#line 415 "string.opt"
        if (mercury__term_io__succeeded)
#line 415 "string.opt"
          {
#line 1047 "string.opt"
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
#line 1047 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 1536 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_io__V_12_13  = NextIndex;
	 mercury__term_io__V_13_14  = Ch;
#line 1047 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 415 "string.opt"
            if (mercury__term_io__succeeded)
#line 417 "string.opt"
              mercury__term_io__succeeded = (mercury__term_io__V_12_13 <= mercury__term_io__V_10_10);
#line 415 "string.opt"
          }
#line 421 "string.opt"
        if (mercury__term_io__succeeded)
#line 419 "string.opt"
          {
#line 419 "string.opt"
            MR_Word mercury__term_io__V_16_15;

#line 358 "string.opt"
            {
#line 358 "string.opt"
              mercury__term_io__V_16_15 = mercury__term_io__add_escaped_char_2_f_0(mercury__term_io__V_13_14, mercury__term_io__V_14_11);
            }
#line 420 "string.opt"
            /* direct tailcall eliminated */
#line 420 "string.opt"
            {
#line 420 "string.opt"
              MR_Integer mercury__term_io__V_9__tmp_copy_9 = mercury__term_io__V_12_13;
#line 420 "string.opt"
              MR_Word mercury__term_io__V_14__tmp_copy_11 = mercury__term_io__V_16_15;

#line 420 "string.opt"
              mercury__term_io__V_14_11 = mercury__term_io__V_14__tmp_copy_11;
#line 420 "string.opt"
              mercury__term_io__V_9_9 = mercury__term_io__V_9__tmp_copy_9;
#line 420 "string.opt"
            }
#line 420 "string.opt"
            continue;
#line 419 "string.opt"
          }
#line 421 "string.opt"
        else
#line 422 "string.opt"
          *mercury__term_io__V_15_12 = mercury__term_io__V_14_11;
#line 421 "string.opt"
      }
#line 421 "string.opt"
      break;
#line 421 "string.opt"
    }
#line 461 "string.int0"
}

#line 412 "string.int0"
static MR_bool MR_CALL 
mercury__term_io__all_match_loop__ho22_3_p_in__string_0(
#line 412 "string.int0"
  MR_String mercury__term_io__V_5_5,
#line 412 "string.int0"
  MR_Integer mercury__term_io__V_6_6)
#line 412 "string.int0"
{
#line 154 "string.opt"
  while (MR_TRUE)
#line 154 "string.opt"
    {
#line 154 "string.opt"
      /* tailcall optimized into a loop */
#line 154 "string.opt"
      {
#line 154 "string.opt"
        MR_bool mercury__term_io__succeeded;
#line 154 "string.opt"
        MR_Integer mercury__term_io__V_7_7;
#line 154 "string.opt"
        MR_Char mercury__term_io__V_8_8;

#line 1047 "string.opt"
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
#line 1047 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 1646 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_io__V_7_7  = NextIndex;
	 mercury__term_io__V_8_8  = Ch;
#line 1047 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 154 "string.opt"
        if (mercury__term_io__succeeded)
#line 152 "string.opt"
          {
#line 152 "string.opt"
            {
#line 152 "string.opt"
              mercury__term_io__succeeded = mercury__lexer__graphic_token_char_1_p_0(mercury__term_io__V_8_8);
            }
#line 152 "string.opt"
            if (mercury__term_io__succeeded)
#line 153 "string.opt"
              {
#line 153 "string.opt"
                /* direct tailcall eliminated */
#line 153 "string.opt"
                {
#line 153 "string.opt"
                  MR_Integer mercury__term_io__V_6__tmp_copy_6 = mercury__term_io__V_7_7;

#line 153 "string.opt"
                  mercury__term_io__V_6_6 = mercury__term_io__V_6__tmp_copy_6;
#line 153 "string.opt"
                }
#line 153 "string.opt"
                continue;
#line 153 "string.opt"
              }
#line 152 "string.opt"
          }
#line 154 "string.opt"
        else
#line 155 "string.opt"
          mercury__term_io__succeeded = MR_TRUE;
#line 154 "string.opt"
        return mercury__term_io__succeeded;
#line 154 "string.opt"
      }
#line 154 "string.opt"
      break;
#line 154 "string.opt"
    }
#line 412 "string.int0"
}

#line 99 "term_io.m"
void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
#line 99 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_15,
#line 99 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_16,
#line 99 "term_io.m"
  MR_Word mercury__term_io__Stream_5,
#line 99 "term_io.m"
  MR_String mercury__term_io__S_6)
#line 99 "term_io.m"
{
#line 696 "term_io.m"
  {
#line 696 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 1719 "term_io.c"
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1721 "term_io.c"
    MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_11_11;
#line 1723 "term_io.c"
    void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1725 "term_io.c"
    MR_Box mercury__term_io__conv3_STATE_VARIABLE_State_9;

#line 1728 "term_io.c"
    {
#line 1730 "term_io.c"
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_16), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_11_11);
    }
#line 698 "term_io.m"
    {
#line 698 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_15, mercury__term_io__TypeClassInfo_for_writer_16, mercury__term_io__Stream_5, mercury__term_io__S_6);
    }
#line 1738 "term_io.c"
    mercury__term_io__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1740 "term_io.c"
    {
#line 1742 "term_io.c"
      mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_16), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_State_9);
    }
#line 696 "term_io.m"
  }
#line 99 "term_io.m"
}

#line 113 "term_io.m"
void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
#line 113 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
#line 113 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_13,
#line 113 "term_io.m"
  MR_Word mercury__term_io__Stream_5,
#line 113 "term_io.m"
  MR_String mercury__term_io__S_6)
#line 113 "term_io.m"
{
#line 611 "term_io.m"
  {
#line 611 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 612 "term_io.m"
    {
#line 612 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__Stream_5, mercury__term_io__S_6, (MR_Integer) 1);
#line 612 "term_io.m"
      return;
    }
#line 611 "term_io.m"
  }
#line 113 "term_io.m"
}

#line 161 "term_io.m"
void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
#line 161 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
#line 161 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_13,
#line 161 "term_io.m"
  MR_Word mercury__term_io__Stream_5,
#line 161 "term_io.m"
  MR_String mercury__term_io__String_6)
#line 161 "term_io.m"
{
#line 708 "term_io.m"
  {
#line 708 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 708 "term_io.m"
    MR_Integer mercury__term_io__V_8_26;
#line 708 "term_io.m"
    MR_Integer mercury__term_io__V_13_36;
#line 708 "term_io.m"
    MR_Integer mercury__term_io__V_17_37;

#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_6 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 1817 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_8_26  = Length;
#line 703 "string.opt"
}
#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_6 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 1837 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_17_37  = Length;
#line 703 "string.opt"
}
#line 242 "int.opt"
    mercury__term_io__succeeded = (mercury__term_io__V_8_26 < mercury__term_io__V_17_37);
#line 245 "int.opt"
    if (mercury__term_io__succeeded)
#line 244 "int.opt"
      mercury__term_io__V_13_36 = mercury__term_io__V_8_26;
#line 245 "int.opt"
    else
#line 246 "int.opt"
      mercury__term_io__V_13_36 = mercury__term_io__V_17_37;
#line 399 "string.opt"
    {
#line 399 "string.opt"
      mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_54_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__Stream_5, mercury__term_io__String_6, (MR_Integer) 0, mercury__term_io__V_13_36);
#line 399 "string.opt"
      return;
    }
#line 708 "term_io.m"
  }
#line 161 "term_io.m"
}

#line 141 "term_io.m"
void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
#line 141 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_17,
#line 141 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_18,
#line 141 "term_io.m"
  MR_Word mercury__term_io__Stream_5,
#line 141 "term_io.m"
  MR_Char mercury__term_io__Char_6)
#line 141 "term_io.m"
{
#line 739 "term_io.m"
  {
#line 739 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 739 "term_io.m"
    MR_Char mercury__term_io__QuoteChar_8;

#line 871 "term_io.m"
#line 871 "term_io.m"
    switch (mercury__term_io__Char_6) {
#line 871 "term_io.m"
      default:
#line 871 "term_io.m"
        mercury__term_io__succeeded = MR_FALSE;
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 8:
#line 876 "term_io.m"
        {
#line 876 "term_io.m"
          mercury__term_io__QuoteChar_8 = (MR_Char) 98;
#line 876 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 876 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 9:
#line 875 "term_io.m"
        {
#line 875 "term_io.m"
          mercury__term_io__QuoteChar_8 = (MR_Char) 116;
#line 875 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 875 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 10:
#line 874 "term_io.m"
        {
#line 874 "term_io.m"
          mercury__term_io__QuoteChar_8 = (MR_Char) 110;
#line 874 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 874 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 34:
#line 872 "term_io.m"
        {
#line 872 "term_io.m"
          mercury__term_io__QuoteChar_8 = (MR_Char) 34;
#line 872 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 872 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 39:
#line 871 "term_io.m"
        {
#line 871 "term_io.m"
          mercury__term_io__QuoteChar_8 = (MR_Char) 39;
#line 871 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 871 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 92:
#line 873 "term_io.m"
        {
#line 873 "term_io.m"
          mercury__term_io__QuoteChar_8 = (MR_Char) 92;
#line 873 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 873 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
    }
#line 739 "term_io.m"
    if (mercury__term_io__succeeded)
#line 737 "term_io.m"
      {
#line 1973 "term_io.c"
        void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1975 "term_io.c"
        MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_12_12;
#line 1977 "term_io.c"
        void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1979 "term_io.c"
        MR_Box mercury__term_io__conv3_STATE_VARIABLE_State_10;

#line 1982 "term_io.c"
        {
#line 1984 "term_io.c"
          mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (MR_Word) ((MR_Char) 92)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_12_12);
        }
#line 1987 "term_io.c"
        mercury__term_io__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1989 "term_io.c"
        {
#line 1991 "term_io.c"
          mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (MR_Word) (mercury__term_io__QuoteChar_8)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_State_10);
        }
#line 737 "term_io.m"
      }
#line 739 "term_io.m"
    else
#line 741 "term_io.m"
      {
#line 793 "term_io.m"
        {
#line 793 "term_io.m"
          mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(mercury__term_io__Char_6);
        }
#line 793 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 793 "term_io.m"
          {
#line 804 "term_io.m"
            if ((((MR_Unsigned) (mercury__term_io__Char_6 - (MR_Integer) 32)) <= ((MR_Unsigned) (MR_Integer) 94)))
#line 804 "term_io.m"
              if ((((mercury__term_io_scalar_common_6[0])[(((mercury__term_io__Char_6 - (MR_Integer) 32)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__term_io__Char_6 - (MR_Integer) 32)) & (MR_Integer) 31))))))
#line 804 "term_io.m"
                {
#line 804 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 804 "term_io.m"
                }
#line 804 "term_io.m"
              else
#line 804 "term_io.m"
                mercury__term_io__succeeded = MR_FALSE;
#line 804 "term_io.m"
            else
#line 804 "term_io.m"
              mercury__term_io__succeeded = MR_FALSE;
#line 793 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 795 "term_io.m"
              {
#line 795 "term_io.m"
                MR_Integer mercury__term_io__V_20_20;

#line 111 "char.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_6 ;
		{
#line 111 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 2047 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_20_20  = Int;
#line 111 "char.opt"
}
#line 795 "term_io.m"
                mercury__term_io__succeeded = (mercury__term_io__V_20_20 >= (MR_Integer) 128);
#line 795 "term_io.m"
              }
#line 793 "term_io.m"
          }
#line 741 "term_io.m"
        if (mercury__term_io__succeeded)
#line 2062 "term_io.c"
          {
#line 2064 "term_io.c"
            void MR_CALL (* mercury__term_io__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2066 "term_io.c"
            MR_Box mercury__term_io__conv5_STATE_VARIABLE_State_10;

#line 2069 "term_io.c"
            {
#line 2071 "term_io.c"
              mercury__term_io__func_4(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (MR_Word) (mercury__term_io__Char_6)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv5_STATE_VARIABLE_State_10);
            }
#line 2074 "term_io.c"
          }
#line 741 "term_io.m"
        else
#line 742 "term_io.m"
          {
#line 742 "term_io.m"
            MR_String mercury__term_io__V_15_15;
#line 2082 "term_io.c"
            void MR_CALL (* mercury__term_io__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2084 "term_io.c"
            MR_Box mercury__term_io__conv7_STATE_VARIABLE_State_10;

#line 742 "term_io.m"
            {
#line 742 "term_io.m"
              mercury__term_io__V_15_15 = mercury__term_io__mercury_escape_char_1_f_0(mercury__term_io__Char_6);
            }
#line 2092 "term_io.c"
            mercury__term_io__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2094 "term_io.c"
            {
#line 2096 "term_io.c"
              mercury__term_io__func_6(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_17), ((MR_Box) (mercury__term_io__Stream_5)), ((MR_Box) (mercury__term_io__V_15_15)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv7_STATE_VARIABLE_State_10);
            }
#line 742 "term_io.m"
          }
#line 741 "term_io.m"
      }
#line 739 "term_io.m"
  }
#line 141 "term_io.m"
}

#line 127 "term_io.m"
void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
#line 127 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
#line 127 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_13,
#line 127 "term_io.m"
  MR_Word mercury__term_io__Stream_5,
#line 127 "term_io.m"
  MR_Char mercury__term_io__C_6)
#line 127 "term_io.m"
{
#line 602 "term_io.m"
  {
#line 602 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 602 "term_io.m"
    {
#line 602 "term_io.m"
      mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_p_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__Stream_5, mercury__term_io__C_6);
#line 602 "term_io.m"
      return;
    }
#line 602 "term_io.m"
  }
#line 127 "term_io.m"
}

#line 227 "term_io.m"
void MR_CALL 
mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
#line 227 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_19,
#line 227 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_20,
#line 227 "term_io.m"
  MR_Word mercury__term_io__Stream_6,
#line 227 "term_io.m"
  MR_String mercury__term_io__S_7,
#line 227 "term_io.m"
  MR_Word mercury__term_io__NextToGraphicToken_8)
#line 227 "term_io.m"
{
#line 621 "term_io.m"
  {
#line 621 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 621 "term_io.m"
    MR_Word mercury__term_io__ShouldQuote_10;

#line 654 "term_io.m"
    {
#line 654 "term_io.m"
      MR_Integer mercury__term_io__lo_0;
#line 654 "term_io.m"
      MR_Integer mercury__term_io__hi_1;
#line 654 "term_io.m"
      MR_Integer mercury__term_io__mid_2;
#line 654 "term_io.m"
      MR_Integer mercury__term_io__result_3;

#line 654 "term_io.m"
      /* binary string simple lookup switch */
#line 654 "term_io.m"
      mercury__term_io__lo_0 = (MR_Integer) 0;
#line 654 "term_io.m"
      mercury__term_io__hi_1 = (MR_Integer) 3;
#line 654 "term_io.m"
      do
#line 654 "term_io.m"
        {
#line 654 "term_io.m"
          mercury__term_io__mid_2 = (((mercury__term_io__lo_0 + mercury__term_io__hi_1)) / (MR_Integer) 2);
#line 654 "term_io.m"
          mercury__term_io__result_3 = MR_strcmp(mercury__term_io__S_7, ((&mercury__term_io_vector_common_8[20 + mercury__term_io__mid_2]))->mercury__term_io__vector_common_type_8_0__vct_8_f_0);
#line 654 "term_io.m"
          if ((mercury__term_io__result_3 == (MR_Integer) 0))
#line 654 "term_io.m"
            {
#line 654 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 654 "term_io.m"
              /* jump out of search loop */
#line 654 "term_io.m"
              goto label_0;
#line 654 "term_io.m"
            }
#line 654 "term_io.m"
          else
#line 654 "term_io.m"
          if ((mercury__term_io__result_3 < (MR_Integer) 0))
#line 654 "term_io.m"
            mercury__term_io__hi_1 = (mercury__term_io__mid_2 - (MR_Integer) 1);
#line 654 "term_io.m"
          else
#line 654 "term_io.m"
            mercury__term_io__lo_0 = (mercury__term_io__mid_2 + (MR_Integer) 1);
#line 654 "term_io.m"
        }
#line 654 "term_io.m"
      while ((mercury__term_io__lo_0 <= mercury__term_io__hi_1));
#line 654 "term_io.m"
      mercury__term_io__succeeded = MR_FALSE;
#line 654 "term_io.m"
    label_0:;
#line 654 "term_io.m"
    }
#line 654 "term_io.m"
    if (!(mercury__term_io__succeeded))
#line 654 "term_io.m"
      {
#line 662 "term_io.m"
        {
#line 667 "term_io.m"
          MR_Integer mercury__term_io__V_26_26;
#line 667 "term_io.m"
          MR_Char mercury__term_io__V_27_27;
#line 667 "term_io.m"
          MR_Char mercury__term_io__V_30_30;
#line 667 "term_io.m"
          MR_Integer mercury__term_io__V_7_38;

#line 146 "string.opt"
          {
#line 146 "string.opt"
            mercury__term_io__succeeded = mercury__term_io__all_match_loop__ho22_3_p_in__string_0(mercury__term_io__S_7, (MR_Integer) 0);
          }
#line 662 "term_io.m"
          if (mercury__term_io__succeeded)
#line 662 "term_io.m"
            {
#line 663 "term_io.m"
              mercury__term_io__succeeded = (strcmp(mercury__term_io__S_7, (MR_String) "") == 0);
#line 663 "term_io.m"
              mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 662 "term_io.m"
              if (mercury__term_io__succeeded)
#line 662 "term_io.m"
                {
#line 667 "term_io.m"
                  mercury__term_io__V_26_26 = (MR_Integer) 0;
#line 667 "term_io.m"
                  mercury__term_io__V_27_27 = (MR_Char) 35;
#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_7 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 2266 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_7_38  = Length;
#line 703 "string.opt"
}
#line 527 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__term_io__V_26_26 ;
	Length =  mercury__term_io__V_7_38 ;
		{
#line 527 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 2295 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 527 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 667 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 667 "term_io.m"
                    {
#line 522 "string.opt"
                      {
#line 522 "string.opt"
                        mercury__string__unsafe_index_3_p_0(mercury__term_io__S_7, mercury__term_io__V_26_26, &mercury__term_io__V_30_30);
                      }
#line 667 "term_io.m"
                      mercury__term_io__succeeded = (mercury__term_io__V_27_27 == mercury__term_io__V_30_30);
#line 667 "term_io.m"
                    }
#line 667 "term_io.m"
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 662 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 674 "term_io.m"
                    mercury__term_io__succeeded = (mercury__term_io__NextToGraphicToken_8 == (MR_Integer) 1);
#line 662 "term_io.m"
                }
#line 662 "term_io.m"
            }
#line 662 "term_io.m"
        }
#line 654 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 651 "term_io.m"
          {
#line 651 "term_io.m"
            MR_Char mercury__term_io__FirstChar_24;
#line 651 "term_io.m"
            MR_Integer mercury__term_io__V_7_44;
#line 81 "char.opt"
            MR_Char mercury__term_io__V_3_48;

#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_7 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 2353 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_7_44  = Length;
#line 703 "string.opt"
}
#line 527 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__term_io__V_7_44 ;
		{
#line 527 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 2382 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 527 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 651 "term_io.m"
            if (mercury__term_io__succeeded)
#line 651 "term_io.m"
              {
#line 522 "string.opt"
                {
#line 522 "string.opt"
                  mercury__string__unsafe_index_3_p_0(mercury__term_io__S_7, (MR_Integer) 0, &mercury__term_io__FirstChar_24);
                }
#line 81 "char.opt"
                {
#line 81 "char.opt"
                  mercury__term_io__succeeded = mercury__char__lower_upper_2_p_0(mercury__term_io__FirstChar_24, &mercury__term_io__V_3_48);
                }
#line 651 "term_io.m"
                if (mercury__term_io__succeeded)
#line 651 "term_io.m"
                  {
#line 573 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_io__S_7 ;
		{
#line 573 "string.opt"

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

#line 2451 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 573 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 651 "term_io.m"
                  }
#line 651 "term_io.m"
              }
#line 651 "term_io.m"
          }
#line 654 "term_io.m"
      }
#line 684 "term_io.m"
    if (mercury__term_io__succeeded)
#line 683 "term_io.m"
      mercury__term_io__ShouldQuote_10 = (MR_Integer) 0;
#line 684 "term_io.m"
    else
#line 686 "term_io.m"
      mercury__term_io__ShouldQuote_10 = (MR_Integer) 1;
#line 626 "term_io.m"
#line 626 "term_io.m"
    switch (mercury__term_io__ShouldQuote_10) {
#line 626 "term_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 626 "term_io.m"
      case (MR_Integer) 0:
#line 2483 "term_io.c"
        {
#line 2485 "term_io.c"
          void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2487 "term_io.c"
          MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_12;

#line 2490 "term_io.c"
          {
#line 2492 "term_io.c"
            mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_19), ((MR_Box) (mercury__term_io__Stream_6)), ((MR_Box) (mercury__term_io__S_7)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_12);
          }
#line 2495 "term_io.c"
        }
#line 626 "term_io.m"
        break;
#line 626 "term_io.m"
      case (MR_Integer) 1:
#line 627 "term_io.m"
        {
#line 2503 "term_io.c"
          void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2505 "term_io.c"
          MR_Box mercury__term_io__conv3_STATE_VARIABLE_State_14_14;
#line 2507 "term_io.c"
          void MR_CALL (* mercury__term_io__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2509 "term_io.c"
          MR_Box mercury__term_io__conv5_STATE_VARIABLE_State_12;

#line 2512 "term_io.c"
          {
#line 2514 "term_io.c"
            mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_20), ((MR_Box) (mercury__term_io__Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 39)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_State_14_14);
          }
#line 629 "term_io.m"
          {
#line 629 "term_io.m"
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_19, mercury__term_io__TypeClassInfo_for_writer_20, mercury__term_io__Stream_6, mercury__term_io__S_7);
          }
#line 2522 "term_io.c"
          mercury__term_io__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2524 "term_io.c"
          {
#line 2526 "term_io.c"
            mercury__term_io__func_4(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_20), ((MR_Box) (mercury__term_io__Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 39)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv5_STATE_VARIABLE_State_12);
          }
#line 627 "term_io.m"
        }
#line 626 "term_io.m"
        break;
#line 626 "term_io.m"
    }
#line 621 "term_io.m"
  }
#line 227 "term_io.m"
}

#line 32 "term_io.m"
void MR_CALL 
mercury__term_io____Compare____read_term_1_0(
#line 32 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_32,
#line 32 "term_io.m"
  MR_Word * mercury__term_io__HeadVar__1_1,
#line 32 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2,
#line 32 "term_io.m"
  MR_Word mercury__term_io__HeadVar__3_3)
#line 32 "term_io.m"
{
#line 32 "term_io.m"
  {
#line 32 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 32 "term_io.m"
    MR_Integer mercury__term_io__CastX_30 = (MR_Integer) mercury__term_io__HeadVar__2_2;
#line 32 "term_io.m"
    MR_Integer mercury__term_io__CastY_31 = (MR_Integer) mercury__term_io__HeadVar__3_3;

#line 32 "term_io.m"
    mercury__term_io__succeeded = (mercury__term_io__CastX_30 == mercury__term_io__CastY_31);
#line 32 "term_io.m"
    if (mercury__term_io__succeeded)
#line 2566 "term_io.c"
      *mercury__term_io__HeadVar__1_1 = (MR_Integer) 0;
#line 32 "term_io.m"
    else
#line 32 "term_io.m"
#line 32 "term_io.m"
      switch (MR_tag((MR_Word) mercury__term_io__HeadVar__2_2)) {
#line 32 "term_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 32 "term_io.m"
        case (MR_Integer) 0:
#line 32 "term_io.m"
#line 32 "term_io.m"
          switch (MR_tag((MR_Word) mercury__term_io__HeadVar__3_3)) {
#line 32 "term_io.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 32 "term_io.m"
            case (MR_Integer) 0:
#line 32 "term_io.m"
              *mercury__term_io__HeadVar__1_1 = (MR_Integer) 0;
#line 32 "term_io.m"
              break;
#line 32 "term_io.m"
            case (MR_Integer) 1:
#line 2590 "term_io.c"
              *mercury__term_io__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "term_io.m"
              break;
#line 32 "term_io.m"
            case (MR_Integer) 2:
#line 2596 "term_io.c"
              *mercury__term_io__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "term_io.m"
              break;
#line 32 "term_io.m"
          }
#line 32 "term_io.m"
          break;
#line 32 "term_io.m"
        case (MR_Integer) 1:
#line 32 "term_io.m"
          {
#line 32 "term_io.m"
            MR_Integer mercury__term_io__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term_io.m"
            MR_String mercury__term_io__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));

#line 32 "term_io.m"
#line 32 "term_io.m"
            switch (MR_tag((MR_Word) mercury__term_io__HeadVar__3_3)) {
#line 32 "term_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 32 "term_io.m"
              case (MR_Integer) 0:
#line 2620 "term_io.c"
                *mercury__term_io__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "term_io.m"
                break;
#line 32 "term_io.m"
              case (MR_Integer) 1:
#line 32 "term_io.m"
                {
#line 32 "term_io.m"
                  MR_String mercury__term_io__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__3_3, (MR_Integer) 0)));
#line 32 "term_io.m"
                  MR_Integer mercury__term_io__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__3_3, (MR_Integer) 1)));
#line 32 "term_io.m"
                  MR_Word mercury__term_io__V_14_14;
#line 32 "term_io.m"
                  MR_Integer mercury__term_io__V_7_46;

#line 102 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term_io____Compare____read_term_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term_io__V_40_40 ;
	S2 =  mercury__term_io__V_12_12 ;
		{
#line 102 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 2652 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_7_46  = Res;
#line 102 "private_builtin.opt"
}
#line 89 "private_builtin.opt"
                  mercury__term_io__succeeded = (mercury__term_io__V_7_46 < (MR_Integer) 0);
#line 92 "private_builtin.opt"
                  if (mercury__term_io__succeeded)
#line 91 "private_builtin.opt"
                    mercury__term_io__V_14_14 = (MR_Integer) 1;
#line 92 "private_builtin.opt"
                  else
#line 97 "private_builtin.opt"
                    {
#line 94 "private_builtin.opt"
                      mercury__term_io__succeeded = (mercury__term_io__V_7_46 == (MR_Integer) 0);
#line 97 "private_builtin.opt"
                      if (mercury__term_io__succeeded)
#line 96 "private_builtin.opt"
                        mercury__term_io__V_14_14 = (MR_Integer) 0;
#line 97 "private_builtin.opt"
                      else
#line 98 "private_builtin.opt"
                        mercury__term_io__V_14_14 = (MR_Integer) 2;
#line 97 "private_builtin.opt"
                    }
#line 2681 "term_io.c"
                  mercury__term_io__succeeded = (mercury__term_io__V_14_14 == (MR_Integer) 0);
#line 32 "term_io.m"
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 32 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 32 "term_io.m"
                    *mercury__term_io__HeadVar__1_1 = mercury__term_io__V_14_14;
#line 32 "term_io.m"
                  else
#line 74 "private_builtin.opt"
                    {
#line 71 "private_builtin.opt"
                      mercury__term_io__succeeded = (mercury__term_io__V_39_39 < mercury__term_io__V_13_13);
#line 74 "private_builtin.opt"
                      if (mercury__term_io__succeeded)
#line 73 "private_builtin.opt"
                        *mercury__term_io__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                      else
#line 79 "private_builtin.opt"
                        {
#line 76 "private_builtin.opt"
                          mercury__term_io__succeeded = (mercury__term_io__V_39_39 == mercury__term_io__V_13_13);
#line 79 "private_builtin.opt"
                          if (mercury__term_io__succeeded)
#line 78 "private_builtin.opt"
                            *mercury__term_io__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
                          else
#line 80 "private_builtin.opt"
                            *mercury__term_io__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
                        }
#line 74 "private_builtin.opt"
                    }
#line 32 "term_io.m"
                }
#line 32 "term_io.m"
                break;
#line 32 "term_io.m"
              case (MR_Integer) 2:
#line 2723 "term_io.c"
                *mercury__term_io__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "term_io.m"
                break;
#line 32 "term_io.m"
            }
#line 32 "term_io.m"
          }
#line 32 "term_io.m"
          break;
#line 32 "term_io.m"
        case (MR_Integer) 2:
#line 32 "term_io.m"
          {
#line 32 "term_io.m"
            MR_Word mercury__term_io__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term_io.m"
            MR_Word mercury__term_io__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));

#line 32 "term_io.m"
#line 32 "term_io.m"
            switch (MR_tag((MR_Word) mercury__term_io__HeadVar__3_3)) {
#line 32 "term_io.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 32 "term_io.m"
              case (MR_Integer) 0:
#line 2749 "term_io.c"
                *mercury__term_io__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "term_io.m"
                break;
#line 32 "term_io.m"
              case (MR_Integer) 1:
#line 2755 "term_io.c"
                *mercury__term_io__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "term_io.m"
                break;
#line 32 "term_io.m"
              case (MR_Integer) 2:
#line 32 "term_io.m"
                {
#line 32 "term_io.m"
                  MR_Word mercury__term_io__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__3_3, (MR_Integer) 0)));
#line 32 "term_io.m"
                  MR_Word mercury__term_io__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__3_3, (MR_Integer) 1)));
#line 32 "term_io.m"
                  MR_Word mercury__term_io__V_29_29;

#line 32 "term_io.m"
                  {
#line 32 "term_io.m"
                    mercury__varset____Compare____varset_1_0(mercury__term_io__TypeInfo_for_T_32, &mercury__term_io__V_29_29, mercury__term_io__V_42_42, mercury__term_io__V_27_27);
                  }
#line 2775 "term_io.c"
                  mercury__term_io__succeeded = (mercury__term_io__V_29_29 == (MR_Integer) 0);
#line 32 "term_io.m"
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 32 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 32 "term_io.m"
                    *mercury__term_io__HeadVar__1_1 = mercury__term_io__V_29_29;
#line 32 "term_io.m"
                  else
#line 32 "term_io.m"
                    {
#line 32 "term_io.m"
                      mercury__term____Compare____term_1_0(mercury__term_io__TypeInfo_for_T_32, mercury__term_io__HeadVar__1_1, mercury__term_io__V_41_41, mercury__term_io__V_28_28);
#line 32 "term_io.m"
                      return;
                    }
#line 32 "term_io.m"
                }
#line 32 "term_io.m"
                break;
#line 32 "term_io.m"
            }
#line 32 "term_io.m"
          }
#line 32 "term_io.m"
          break;
#line 32 "term_io.m"
      }
#line 32 "term_io.m"
  }
#line 32 "term_io.m"
}

#line 32 "term_io.m"
MR_bool MR_CALL 
mercury__term_io____Unify____read_term_1_0(
#line 32 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_15,
#line 32 "term_io.m"
  MR_Word mercury__term_io__HeadVar__1_1,
#line 32 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2)
#line 32 "term_io.m"
{
#line 32 "term_io.m"
  {
#line 32 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 32 "term_io.m"
    MR_Integer mercury__term_io__CastX_13 = (MR_Integer) mercury__term_io__HeadVar__1_1;
#line 32 "term_io.m"
    MR_Integer mercury__term_io__CastY_14 = (MR_Integer) mercury__term_io__HeadVar__2_2;

#line 32 "term_io.m"
    mercury__term_io__succeeded = (mercury__term_io__CastX_13 == mercury__term_io__CastY_14);
#line 32 "term_io.m"
    if (mercury__term_io__succeeded)
#line 32 "term_io.m"
      mercury__term_io__succeeded = MR_TRUE;
#line 32 "term_io.m"
    else
#line 32 "term_io.m"
#line 32 "term_io.m"
      switch (MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) {
#line 32 "term_io.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 32 "term_io.m"
        case (MR_Integer) 0:
#line 32 "term_io.m"
          {
#line 32 "term_io.m"
            MR_Integer mercury__term_io__CastX_3 = (MR_Integer) mercury__term_io__HeadVar__1_1;
#line 32 "term_io.m"
            MR_Integer mercury__term_io__CastY_4 = (MR_Integer) mercury__term_io__HeadVar__2_2;

#line 32 "term_io.m"
            mercury__term_io__succeeded = (mercury__term_io__CastY_4 == mercury__term_io__CastX_3);
#line 32 "term_io.m"
          }
#line 32 "term_io.m"
          break;
#line 32 "term_io.m"
        case (MR_Integer) 1:
#line 32 "term_io.m"
          {
#line 32 "term_io.m"
            MR_String mercury__term_io__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
#line 32 "term_io.m"
            MR_Integer mercury__term_io__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));
#line 32 "term_io.m"
            MR_String mercury__term_io__V_7_7;
#line 32 "term_io.m"
            MR_Integer mercury__term_io__V_8_8;

#line 32 "term_io.m"
            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 32 "term_io.m"
            if (mercury__term_io__succeeded)
#line 32 "term_io.m"
              {
#line 32 "term_io.m"
                mercury__term_io__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));
#line 32 "term_io.m"
                mercury__term_io__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
#line 2880 "term_io.c"
                mercury__term_io__succeeded = (strcmp(mercury__term_io__V_5_5, mercury__term_io__V_7_7) == 0);
#line 32 "term_io.m"
                if (mercury__term_io__succeeded)
#line 2884 "term_io.c"
                  mercury__term_io__succeeded = (mercury__term_io__V_6_6 == mercury__term_io__V_8_8);
#line 32 "term_io.m"
              }
#line 32 "term_io.m"
          }
#line 32 "term_io.m"
          break;
#line 32 "term_io.m"
        case (MR_Integer) 2:
#line 32 "term_io.m"
          {
#line 32 "term_io.m"
            MR_Word mercury__term_io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
#line 32 "term_io.m"
            MR_Word mercury__term_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));
#line 32 "term_io.m"
            MR_Word mercury__term_io__V_11_11;
#line 32 "term_io.m"
            MR_Word mercury__term_io__V_12_12;

#line 32 "term_io.m"
            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 32 "term_io.m"
            if (mercury__term_io__succeeded)
#line 32 "term_io.m"
              {
#line 32 "term_io.m"
                mercury__term_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));
#line 32 "term_io.m"
                mercury__term_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
#line 2915 "term_io.c"
                {
#line 2917 "term_io.c"
                  mercury__term_io__succeeded = mercury__varset____Unify____varset_1_0(mercury__term_io__TypeInfo_for_T_15, mercury__term_io__V_9_9, mercury__term_io__V_11_11);
                }
#line 32 "term_io.m"
                if (mercury__term_io__succeeded)
#line 2922 "term_io.c"
                  {
#line 2924 "term_io.c"
                    return mercury__term_io__succeeded = mercury__term____Unify____term_1_0(mercury__term_io__TypeInfo_for_T_15, mercury__term_io__V_10_10, mercury__term_io__V_12_12);
                  }
#line 32 "term_io.m"
              }
#line 32 "term_io.m"
          }
#line 32 "term_io.m"
          break;
#line 32 "term_io.m"
      }
#line 32 "term_io.m"
    return mercury__term_io__succeeded;
#line 32 "term_io.m"
  }
#line 32 "term_io.m"
}

#line 37 "term_io.m"
void MR_CALL 
mercury__term_io____Compare____read_term_0_0(
#line 37 "term_io.m"
  MR_Word * mercury__term_io__HeadVar__1_1,
#line 37 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2,
#line 37 "term_io.m"
  MR_Word mercury__term_io__HeadVar__3_3)
#line 37 "term_io.m"
{
#line 37 "term_io.m"
  {
#line 37 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 37 "term_io.m"
    MR_Word mercury__term_io__TypeInfo_6_6 = (MR_Word) &mercury__term_io_scalar_common_1[1];
#line 37 "term_io.m"
    MR_Word mercury__term_io__Cast_HeadVar1_4 = mercury__term_io__HeadVar__2_2;
#line 37 "term_io.m"
    MR_Word mercury__term_io__Cast_HeadVar2_5 = mercury__term_io__HeadVar__3_3;

#line 37 "term_io.m"
    {
#line 37 "term_io.m"
      mercury__builtin__compare_3_p_0(mercury__term_io__TypeInfo_6_6, mercury__term_io__HeadVar__1_1, ((MR_Box) (mercury__term_io__Cast_HeadVar1_4)), ((MR_Box) (mercury__term_io__Cast_HeadVar2_5)));
#line 37 "term_io.m"
      return;
    }
#line 37 "term_io.m"
  }
#line 37 "term_io.m"
}

#line 37 "term_io.m"
MR_bool MR_CALL 
mercury__term_io____Unify____read_term_0_0(
#line 37 "term_io.m"
  MR_Word mercury__term_io__HeadVar__1_1,
#line 37 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2)
#line 37 "term_io.m"
{
#line 37 "term_io.m"
  {
#line 37 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 37 "term_io.m"
    MR_Word mercury__term_io__TypeCtorInfo_5_5 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 37 "term_io.m"
    MR_Word mercury__term_io__Cast_HeadVar1_3 = mercury__term_io__HeadVar__1_1;
#line 37 "term_io.m"
    MR_Word mercury__term_io__Cast_HeadVar2_4 = mercury__term_io__HeadVar__2_2;

#line 37 "term_io.m"
    {
#line 37 "term_io.m"
      return mercury__term_io__succeeded = mercury__term_io____Unify____read_term_1_0(mercury__term_io__TypeCtorInfo_5_5, mercury__term_io__Cast_HeadVar1_3, mercury__term_io__Cast_HeadVar2_4);
    }
#line 37 "term_io.m"
    return mercury__term_io__succeeded;
#line 37 "term_io.m"
  }
#line 37 "term_io.m"
}

#line 220 "term_io.m"
void MR_CALL 
mercury__term_io____Compare____adjacent_to_graphic_token_0_0(
#line 220 "term_io.m"
  MR_Word * mercury__term_io__HeadVar__1_1,
#line 220 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2,
#line 220 "term_io.m"
  MR_Word mercury__term_io__HeadVar__3_3)
#line 220 "term_io.m"
{
#line 220 "term_io.m"
  {
#line 220 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 220 "term_io.m"
    MR_Integer mercury__term_io__Cast_HeadVar1_4 = (MR_Integer) mercury__term_io__HeadVar__2_2;
#line 220 "term_io.m"
    MR_Integer mercury__term_io__Cast_HeadVar2_5 = (MR_Integer) mercury__term_io__HeadVar__3_3;

#line 71 "private_builtin.opt"
    mercury__term_io__succeeded = (mercury__term_io__Cast_HeadVar1_4 < mercury__term_io__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
    if (mercury__term_io__succeeded)
#line 73 "private_builtin.opt"
      *mercury__term_io__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
    else
#line 79 "private_builtin.opt"
      {
#line 76 "private_builtin.opt"
        mercury__term_io__succeeded = (mercury__term_io__Cast_HeadVar1_4 == mercury__term_io__Cast_HeadVar2_5);
#line 79 "private_builtin.opt"
        if (mercury__term_io__succeeded)
#line 78 "private_builtin.opt"
          *mercury__term_io__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
        else
#line 80 "private_builtin.opt"
          *mercury__term_io__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
      }
#line 220 "term_io.m"
  }
#line 220 "term_io.m"
}

#line 220 "term_io.m"
MR_bool MR_CALL 
mercury__term_io____Unify____adjacent_to_graphic_token_0_0(
#line 220 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_1,
#line 220 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2)
#line 220 "term_io.m"
{
#line 3064 "term_io.c"
  {
#line 3066 "term_io.c"
    MR_bool mercury__term_io__succeeded = (mercury__term_io__HeadVar__2_1 == mercury__term_io__HeadVar__2_2);

#line 3069 "term_io.c"
    return mercury__term_io__succeeded;
#line 3071 "term_io.c"
  }
#line 220 "term_io.m"
}

#line 715 "term_io.m"
MR_Word MR_CALL 
mercury__term_io__add_escaped_char_2_f_0(
#line 715 "term_io.m"
  MR_Char mercury__term_io__Char_4,
#line 715 "term_io.m"
  MR_Word mercury__term_io__Strings0_5)
#line 715 "term_io.m"
{
#line 720 "term_io.m"
  {
#line 720 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 720 "term_io.m"
    MR_Word mercury__term_io__Strings_6;
#line 720 "term_io.m"
    MR_Char mercury__term_io__QuoteChar_7;

#line 871 "term_io.m"
#line 871 "term_io.m"
    switch (mercury__term_io__Char_4) {
#line 871 "term_io.m"
      default:
#line 871 "term_io.m"
        mercury__term_io__succeeded = MR_FALSE;
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 8:
#line 876 "term_io.m"
        {
#line 876 "term_io.m"
          mercury__term_io__QuoteChar_7 = (MR_Char) 98;
#line 876 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 876 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 9:
#line 875 "term_io.m"
        {
#line 875 "term_io.m"
          mercury__term_io__QuoteChar_7 = (MR_Char) 116;
#line 875 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 875 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 10:
#line 874 "term_io.m"
        {
#line 874 "term_io.m"
          mercury__term_io__QuoteChar_7 = (MR_Char) 110;
#line 874 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 874 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 34:
#line 872 "term_io.m"
        {
#line 872 "term_io.m"
          mercury__term_io__QuoteChar_7 = (MR_Char) 34;
#line 872 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 872 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 39:
#line 871 "term_io.m"
        {
#line 871 "term_io.m"
          mercury__term_io__QuoteChar_7 = (MR_Char) 39;
#line 871 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 871 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 92:
#line 873 "term_io.m"
        {
#line 873 "term_io.m"
          mercury__term_io__QuoteChar_7 = (MR_Char) 92;
#line 873 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 873 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
    }
#line 720 "term_io.m"
    if (mercury__term_io__succeeded)
#line 719 "term_io.m"
      {
#line 719 "term_io.m"
        MR_String mercury__term_io__V_8_8;
#line 719 "term_io.m"
        MR_Word mercury__term_io__V_9_9;
#line 719 "term_io.m"
        MR_Word mercury__term_io__V_11_11;
#line 719 "term_io.m"
        MR_Word mercury__term_io__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 719 "term_io.m"
        {
#line 719 "term_io.m"
          mercury__term_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_11_11, 0) = ((MR_Box) (MR_Word) (mercury__term_io__QuoteChar_7));
#line 719 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_11_11, 1) = ((MR_Box) (mercury__term_io__V_12_12));
#line 719 "term_io.m"
        }
#line 719 "term_io.m"
        {
#line 719 "term_io.m"
          mercury__term_io__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_9_9, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 719 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_9_9, 1) = ((MR_Box) (mercury__term_io__V_11_11));
#line 719 "term_io.m"
        }
#line 502 "string.opt"
        {
#line 502 "string.opt"
          mercury__string__from_char_list_2_p_0(mercury__term_io__V_9_9, &mercury__term_io__V_8_8);
        }
#line 719 "term_io.m"
        {
#line 719 "term_io.m"
          mercury__term_io__Strings_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 0) = ((MR_Box) (mercury__term_io__V_8_8));
#line 719 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 1) = ((MR_Box) (mercury__term_io__Strings0_5));
#line 719 "term_io.m"
        }
#line 719 "term_io.m"
      }
#line 720 "term_io.m"
    else
#line 722 "term_io.m"
      {
#line 793 "term_io.m"
        {
#line 793 "term_io.m"
          mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(mercury__term_io__Char_4);
        }
#line 793 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 793 "term_io.m"
          {
#line 804 "term_io.m"
            if ((((MR_Unsigned) (mercury__term_io__Char_4 - (MR_Integer) 32)) <= ((MR_Unsigned) (MR_Integer) 94)))
#line 804 "term_io.m"
              if ((((mercury__term_io_scalar_common_6[0])[(((mercury__term_io__Char_4 - (MR_Integer) 32)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__term_io__Char_4 - (MR_Integer) 32)) & (MR_Integer) 31))))))
#line 804 "term_io.m"
                {
#line 804 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 804 "term_io.m"
                }
#line 804 "term_io.m"
              else
#line 804 "term_io.m"
                mercury__term_io__succeeded = MR_FALSE;
#line 804 "term_io.m"
            else
#line 804 "term_io.m"
              mercury__term_io__succeeded = MR_FALSE;
#line 793 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 795 "term_io.m"
              {
#line 795 "term_io.m"
                MR_Integer mercury__term_io__V_18_18;

#line 111 "char.opt"
{
#define MR_PROC_LABEL mercury__term_io__add_escaped_char_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_4 ;
		{
#line 111 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 3278 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_18_18  = Int;
#line 111 "char.opt"
}
#line 795 "term_io.m"
                mercury__term_io__succeeded = (mercury__term_io__V_18_18 >= (MR_Integer) 128);
#line 795 "term_io.m"
              }
#line 793 "term_io.m"
          }
#line 722 "term_io.m"
        if (mercury__term_io__succeeded)
#line 721 "term_io.m"
          {
#line 721 "term_io.m"
            MR_String mercury__term_io__V_13_13;
#line 721 "term_io.m"
            MR_Word mercury__term_io__V_5_26;
#line 721 "term_io.m"
            MR_Word mercury__term_io__V_6_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 217 "string.opt"
            {
#line 217 "string.opt"
              mercury__term_io__V_5_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "string.opt"
              MR_hl_field(MR_mktag(1), mercury__term_io__V_5_26, 0) = ((MR_Box) (MR_Word) (mercury__term_io__Char_4));
#line 217 "string.opt"
              MR_hl_field(MR_mktag(1), mercury__term_io__V_5_26, 1) = ((MR_Box) (mercury__term_io__V_6_27));
#line 217 "string.opt"
            }
#line 219 "string.opt"
            {
#line 219 "string.opt"
              mercury__string__to_char_list_2_p_1(&mercury__term_io__V_13_13, mercury__term_io__V_5_26);
            }
#line 721 "term_io.m"
            {
#line 721 "term_io.m"
              mercury__term_io__Strings_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "term_io.m"
              MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 0) = ((MR_Box) (mercury__term_io__V_13_13));
#line 721 "term_io.m"
              MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 1) = ((MR_Box) (mercury__term_io__Strings0_5));
#line 721 "term_io.m"
            }
#line 721 "term_io.m"
          }
#line 722 "term_io.m"
        else
#line 723 "term_io.m"
          {
#line 723 "term_io.m"
            MR_String mercury__term_io__V_14_14;

#line 723 "term_io.m"
            {
#line 723 "term_io.m"
              mercury__term_io__V_14_14 = mercury__term_io__mercury_escape_char_1_f_0(mercury__term_io__Char_4);
            }
#line 723 "term_io.m"
            {
#line 723 "term_io.m"
              mercury__term_io__Strings_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "term_io.m"
              MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 0) = ((MR_Box) (mercury__term_io__V_14_14));
#line 723 "term_io.m"
              MR_hl_field(MR_mktag(1), mercury__term_io__Strings_6, 1) = ((MR_Box) (mercury__term_io__Strings0_5));
#line 723 "term_io.m"
            }
#line 723 "term_io.m"
          }
#line 722 "term_io.m"
      }
#line 720 "term_io.m"
    return mercury__term_io__Strings_6;
#line 720 "term_io.m"
  }
#line 715 "term_io.m"
}

#line 572 "term_io.m"
MR_String MR_CALL 
mercury__term_io__format_constant_agt_2_f_0(
#line 572 "term_io.m"
  MR_Word mercury__term_io__HeadVar__1_1,
#line 572 "term_io.m"
  MR_Word mercury__term_io__NextToGraphicToken_2)
#line 572 "term_io.m"
{
#line 574 "term_io.m"
  {
#line 574 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 574 "term_io.m"
    MR_String mercury__term_io__HeadVar__3_3;

#line 574 "term_io.m"
#line 574 "term_io.m"
    switch (MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) {
#line 574 "term_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 574 "term_io.m"
      case (MR_Integer) 0:
#line 580 "term_io.m"
        {
#line 580 "term_io.m"
          MR_String mercury__term_io__A_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));

#line 581 "term_io.m"
          {
#line 581 "term_io.m"
            return mercury__term_io__HeadVar__3_3 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__term_io__A_14, mercury__term_io__NextToGraphicToken_2);
          }
#line 580 "term_io.m"
        }
#line 574 "term_io.m"
        break;
#line 574 "term_io.m"
      case (MR_Integer) 1:
#line 574 "term_io.m"
        {
#line 574 "term_io.m"
          MR_Integer mercury__term_io__I_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));

#line 554 "string.opt"
          {
#line 554 "string.opt"
            mercury__string__int_to_base_string_3_p_0(mercury__term_io__I_4, (MR_Integer) 10, &mercury__term_io__HeadVar__3_3);
          }
#line 574 "term_io.m"
        }
#line 574 "term_io.m"
        break;
#line 574 "term_io.m"
      case (MR_Integer) 2:
#line 576 "term_io.m"
        {
#line 576 "term_io.m"
          MR_Word mercury__term_io__Base_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
#line 576 "term_io.m"
          MR_Word mercury__term_io__I_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));
#line 576 "term_io.m"
          MR_String mercury__term_io__V_9_9 = ((&mercury__term_io_vector_common_8[16 + mercury__term_io__Base_6]))->mercury__term_io__vector_common_type_8_0__vct_8_f_0;
#line 576 "term_io.m"
          MR_String mercury__term_io__V_10_10;
#line 576 "term_io.m"
          MR_Integer mercury__term_io__V_11_11 = ((&mercury__term_io_vector_common_7[8 + mercury__term_io__Base_6]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;

#line 577 "term_io.m"
          {
#line 577 "term_io.m"
            mercury__term_io__V_10_10 = mercury__integer__to_base_string_2_f_0(mercury__term_io__I_7, mercury__term_io__V_11_11);
          }
#line 159 "string.opt"
          {
#line 159 "string.opt"
            mercury__string__append_3_p_2(mercury__term_io__V_9_9, mercury__term_io__V_10_10, &mercury__term_io__HeadVar__3_3);
          }
#line 576 "term_io.m"
        }
#line 574 "term_io.m"
        break;
#line 574 "term_io.m"
      case (MR_Integer) 3:
#line 574 "term_io.m"
#line 574 "term_io.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)))) {
#line 574 "term_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 574 "term_io.m"
          case (MR_Integer) 0:
#line 582 "term_io.m"
            {
#line 582 "term_io.m"
              MR_String mercury__term_io__S_16 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));

#line 583 "term_io.m"
              {
#line 583 "term_io.m"
                return mercury__term_io__HeadVar__3_3 = mercury__term_io__quoted_string_1_f_0(mercury__term_io__S_16);
              }
#line 582 "term_io.m"
            }
#line 574 "term_io.m"
            break;
#line 574 "term_io.m"
          case (MR_Integer) 1:
#line 578 "term_io.m"
            {
#line 578 "term_io.m"
              MR_Float mercury__term_io__F_12 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));

#line 337 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__format_constant_agt_2_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__term_io__F_12 ;
		{
#line 337 "string.opt"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 3491 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__HeadVar__3_3  = Str;
#line 337 "string.opt"
}
#line 578 "term_io.m"
            }
#line 574 "term_io.m"
            break;
#line 574 "term_io.m"
          case (MR_Integer) 2:
#line 584 "term_io.m"
            {
#line 584 "term_io.m"
              MR_String mercury__term_io__N_18 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));

#line 159 "string.opt"
              {
#line 159 "string.opt"
                mercury__string__append_3_p_2((MR_String) "\044", mercury__term_io__N_18, &mercury__term_io__HeadVar__3_3);
              }
#line 584 "term_io.m"
            }
#line 574 "term_io.m"
            break;
#line 574 "term_io.m"
        }
#line 574 "term_io.m"
        break;
#line 574 "term_io.m"
    }
#line 574 "term_io.m"
    return mercury__term_io__HeadVar__3_3;
#line 574 "term_io.m"
  }
#line 572 "term_io.m"
}

#line 549 "term_io.m"
void MR_CALL 
mercury__term_io__write_constant_4_p_0(
#line 549 "term_io.m"
  MR_Word mercury__term_io__HeadVar__1_1,
#line 549 "term_io.m"
  MR_Word mercury__term_io__NextToGraphicToken_2)
#line 549 "term_io.m"
{
#line 552 "term_io.m"
  {
#line 552 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 552 "term_io.m"
#line 552 "term_io.m"
    switch (MR_tag((MR_Word) mercury__term_io__HeadVar__1_1)) {
#line 552 "term_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 552 "term_io.m"
      case (MR_Integer) 0:
#line 561 "term_io.m"
        {
#line 561 "term_io.m"
          MR_Word mercury__term_io__TypeClassInfo_for_writer_56;
#line 561 "term_io.m"
          MR_Word mercury__term_io__TypeClassInfo_for_writer_57;
#line 561 "term_io.m"
          MR_String mercury__term_io__A_28 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
#line 561 "term_io.m"
          MR_Word mercury__term_io__Stream_53;
#line 561 "term_io.m"
          MR_Box mercury__term_io__V_4_60;

#line 990 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_constant_4_p_0

	MercuryFilePtr Stream;

		{
#line 990 "io.opt"

    Stream = mercury_current_text_output();

#line 3576 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_60  = (MR_Box) Stream;
#line 990 "io.opt"
}
#line 987 "io.opt"
          mercury__term_io__Stream_53 = (MR_Word) mercury__term_io__V_4_60;
#line 3585 "term_io.c"
          mercury__term_io__TypeClassInfo_for_writer_56 = (MR_Word) &mercury__term_io_scalar_common_4[0];
#line 3587 "term_io.c"
          mercury__term_io__TypeClassInfo_for_writer_57 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 619 "term_io.m"
          {
#line 619 "term_io.m"
            mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(mercury__term_io__TypeClassInfo_for_writer_56, mercury__term_io__TypeClassInfo_for_writer_57, mercury__term_io__Stream_53, mercury__term_io__A_28, mercury__term_io__NextToGraphicToken_2);
#line 619 "term_io.m"
            return;
          }
#line 561 "term_io.m"
        }
#line 552 "term_io.m"
        break;
#line 552 "term_io.m"
      case (MR_Integer) 1:
#line 552 "term_io.m"
        {
#line 552 "term_io.m"
          MR_Integer mercury__term_io__I_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));

#line 1531 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_constant_4_p_0

	MR_Integer Val;

	Val =  mercury__term_io__I_5 ;
		{
#line 1531 "io.opt"

    MercuryFilePtr out = mercury_current_text_output();
    if (ML_fprintf(out, "%" MR_INTEGER_LENGTH_MODIFIER "d", Val) < 0) {
        mercury_output_error(out, errno);
    }

#line 3622 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 1531 "io.opt"
}
#line 552 "term_io.m"
        }
#line 552 "term_io.m"
        break;
#line 552 "term_io.m"
      case (MR_Integer) 2:
#line 554 "term_io.m"
        {
#line 554 "term_io.m"
          MR_Word mercury__term_io__Base_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)));
#line 554 "term_io.m"
          MR_Word mercury__term_io__I_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));
#line 554 "term_io.m"
          MR_String mercury__term_io__Prefix_15 = ((&mercury__term_io_vector_common_8[12 + mercury__term_io__Base_11]))->mercury__term_io__vector_common_type_8_0__vct_8_f_0;
#line 554 "term_io.m"
          MR_String mercury__term_io__IntString_16;
#line 554 "term_io.m"
          MR_Integer mercury__term_io__V_19_19 = ((&mercury__term_io_vector_common_7[4 + mercury__term_io__Base_11]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;

#line 556 "term_io.m"
          {
#line 556 "term_io.m"
            mercury__term_io__IntString_16 = mercury__integer__to_base_string_2_f_0(mercury__term_io__I_12, mercury__term_io__V_19_19);
          }
#line 1585 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_constant_4_p_0

	MR_String Message;

	Message =  mercury__term_io__Prefix_15 ;
		{
#line 1585 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 3664 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 1585 "io.opt"
}
#line 1585 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_constant_4_p_0

	MR_String Message;

	Message =  mercury__term_io__IntString_16 ;
		{
#line 1585 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 3682 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 1585 "io.opt"
}
#line 554 "term_io.m"
        }
#line 552 "term_io.m"
        break;
#line 552 "term_io.m"
      case (MR_Integer) 3:
#line 552 "term_io.m"
#line 552 "term_io.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 0)))) {
#line 552 "term_io.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 552 "term_io.m"
          case (MR_Integer) 0:
#line 563 "term_io.m"
            {
#line 563 "term_io.m"
              MR_String mercury__term_io__S_34 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));

#line 564 "term_io.m"
              {
#line 564 "term_io.m"
                mercury__term_io__quote_string_3_p_0(mercury__term_io__S_34);
#line 564 "term_io.m"
                return;
              }
#line 563 "term_io.m"
            }
#line 552 "term_io.m"
            break;
#line 552 "term_io.m"
          case (MR_Integer) 1:
#line 559 "term_io.m"
            {
#line 559 "term_io.m"
              MR_Float mercury__term_io__F_22 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));

#line 1509 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_constant_4_p_0

	MR_Float Val;

	Val =  mercury__term_io__F_22 ;
		{
#line 1509 "io.opt"

    char buf[MR_SPRINTF_FLOAT_BUF_SIZE];
    MercuryFilePtr out;

    MR_sprintf_float(buf, Val);
    out = mercury_current_text_output();
    if (ML_fprintf(out, "%s", buf) < 0) {
        mercury_output_error(out, errno);
    }

#line 3743 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 1509 "io.opt"
}
#line 559 "term_io.m"
            }
#line 552 "term_io.m"
            break;
#line 552 "term_io.m"
          case (MR_Integer) 2:
#line 565 "term_io.m"
            {
#line 565 "term_io.m"
              MR_String mercury__term_io__N_40 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_io__HeadVar__1_1, (MR_Integer) 1)));

#line 1461 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_constant_4_p_0

	MR_Char Character;

	Character =  (MR_Char) 36 ;
		{
#line 1461 "io.opt"

    MercuryFilePtr out = mercury_current_text_output();
    char    buf[5];
    size_t  len;
    size_t  i;
    if (Character <= 0x7f) {
        if (MR_PUTCH(*out, Character) < 0) {
            mercury_output_error(out, errno);
        }
        if (Character == '\n') {
            MR_line_number(*out)++;
        }
    } else {
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*out, buf[i]) < 0) {
                mercury_output_error(out, errno);
                break;
            }
        }
    }

#line 3791 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 1461 "io.opt"
}
#line 1585 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_constant_4_p_0

	MR_String Message;

	Message =  mercury__term_io__N_40 ;
		{
#line 1585 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 3809 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 1585 "io.opt"
}
#line 565 "term_io.m"
            }
#line 552 "term_io.m"
            break;
#line 552 "term_io.m"
        }
#line 552 "term_io.m"
        break;
#line 552 "term_io.m"
    }
#line 552 "term_io.m"
  }
#line 549 "term_io.m"
}

#line 533 "term_io.m"
static void MR_CALL 
mercury__term_io__write_term_args_8_p_0(
#line 533 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_40,
#line 533 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_39,
#line 533 "term_io.m"
  MR_Box mercury__term_io__Ops_1,
#line 533 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2,
#line 533 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_3,
#line 533 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_4,
#line 533 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_5,
#line 533 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_6)
#line 533 "term_io.m"
{
#line 538 "term_io.m"
  while (MR_TRUE)
#line 538 "term_io.m"
    {
#line 538 "term_io.m"
      /* tailcall optimized into a loop */
#line 538 "term_io.m"
      {
#line 538 "term_io.m"
        MR_bool mercury__term_io__succeeded;

#line 538 "term_io.m"
        if ((mercury__term_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 538 "term_io.m"
          {
#line 538 "term_io.m"
            *mercury__term_io__STATE_VARIABLE_N_6 = mercury__term_io__STATE_VARIABLE_N_0_5;
#line 538 "term_io.m"
            *mercury__term_io__STATE_VARIABLE_VarSet_4 = mercury__term_io__STATE_VARIABLE_VarSet_0_3;
#line 538 "term_io.m"
          }
#line 538 "term_io.m"
        else
#line 539 "term_io.m"
          {
#line 539 "term_io.m"
            MR_Word mercury__term_io__X_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));
#line 539 "term_io.m"
            MR_Word mercury__term_io__Xs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
#line 539 "term_io.m"
            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_33_33;
#line 539 "term_io.m"
            MR_Integer mercury__term_io__STATE_VARIABLE_N_34_34;
#line 539 "term_io.m"
            MR_Integer mercury__term_io__V_52_52;
#line 3886 "term_io.c"
            MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box);
#line 3888 "term_io.c"
            MR_Box mercury__term_io__conv1_V_52_52;

#line 1585 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_term_args_8_p_0

	MR_String Message;

	Message =  (MR_String) ", " ;
		{
#line 1585 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 3903 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 1585 "io.opt"
}
#line 3909 "term_io.c"
            mercury__term_io__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_39, (MR_Integer) 0)), (MR_Integer) 13)));
#line 3911 "term_io.c"
            {
#line 3913 "term_io.c"
              mercury__term_io__conv1_V_52_52 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_39), mercury__term_io__Ops_1);
            }
#line 3916 "term_io.c"
            mercury__term_io__V_52_52 = ((MR_Integer) mercury__term_io__conv1_V_52_52);
#line 342 "term_io.m"
            {
#line 342 "term_io.m"
              mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_40, mercury__term_io__TypeClassInfo_for_op_table_39, mercury__term_io__Ops_1, mercury__term_io__X_20, mercury__term_io__V_52_52, mercury__term_io__STATE_VARIABLE_VarSet_0_3, &mercury__term_io__STATE_VARIABLE_VarSet_33_33, mercury__term_io__STATE_VARIABLE_N_0_5, &mercury__term_io__STATE_VARIABLE_N_34_34);
            }
#line 542 "term_io.m"
            /* direct tailcall eliminated */
#line 542 "term_io.m"
            {
#line 542 "term_io.m"
              MR_Word mercury__term_io__HeadVar__2__tmp_copy_2 = mercury__term_io__Xs_21;
#line 542 "term_io.m"
              MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0__tmp_copy_3 = mercury__term_io__STATE_VARIABLE_VarSet_33_33;
#line 542 "term_io.m"
              MR_Integer mercury__term_io__STATE_VARIABLE_N_0__tmp_copy_5 = mercury__term_io__STATE_VARIABLE_N_34_34;

#line 542 "term_io.m"
              mercury__term_io__STATE_VARIABLE_N_0_5 = mercury__term_io__STATE_VARIABLE_N_0__tmp_copy_5;
#line 542 "term_io.m"
              mercury__term_io__STATE_VARIABLE_VarSet_0_3 = mercury__term_io__STATE_VARIABLE_VarSet_0__tmp_copy_3;
#line 542 "term_io.m"
              mercury__term_io__HeadVar__2_2 = mercury__term_io__HeadVar__2__tmp_copy_2;
#line 542 "term_io.m"
            }
#line 542 "term_io.m"
            continue;
#line 539 "term_io.m"
          }
#line 538 "term_io.m"
      }
#line 538 "term_io.m"
      break;
#line 538 "term_io.m"
    }
#line 533 "term_io.m"
}

#line 488 "term_io.m"
static void MR_CALL 
mercury__term_io__write_list_tail_8_p_0(
#line 488 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_52,
#line 488 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_51,
#line 488 "term_io.m"
  MR_Box mercury__term_io__Ops_9,
#line 488 "term_io.m"
  MR_Word mercury__term_io__Term_10,
#line 488 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_21,
#line 488 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_22,
#line 488 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_23,
#line 488 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_24)
#line 488 "term_io.m"
{
#line 498 "term_io.m"
  while (MR_TRUE)
#line 498 "term_io.m"
    {
#line 498 "term_io.m"
      /* tailcall optimized into a loop */
#line 498 "term_io.m"
      {
#line 498 "term_io.m"
        MR_bool mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Term_10)) == (MR_mktag((MR_Integer) 1)));
#line 498 "term_io.m"
        MR_Word mercury__term_io__Val_16;
#line 494 "term_io.m"
        MR_Word mercury__term_io__TypeCtorInfo_12_60;
#line 494 "term_io.m"
        MR_Word mercury__term_io__TypeInfo_13_61;
#line 494 "term_io.m"
        MR_Word mercury__term_io__TypeCtorInfo_14_62;
#line 494 "term_io.m"
        MR_Word mercury__term_io__TypeInfo_15_63;
#line 494 "term_io.m"
        MR_Word mercury__term_io__Id_14;
#line 494 "term_io.m"
        MR_Word mercury__term_io__V_7_58;
#line 494 "term_io.m"
        MR_Word mercury__term_io__V_15_15;
#line 141 "varset.opt"
        MR_Word mercury__term_io__V_8_56;
#line 141 "varset.opt"
        MR_Word mercury__term_io__V_9_57;
#line 452 "map.opt"
        MR_Box mercury__term_io__conv0_Val_16;

#line 494 "term_io.m"
        if (mercury__term_io__succeeded)
#line 494 "term_io.m"
          {
#line 494 "term_io.m"
            mercury__term_io__Id_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Term_10, (MR_Integer) 0)));
#line 494 "term_io.m"
            mercury__term_io__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Term_10, (MR_Integer) 1)));
#line 141 "varset.opt"
            mercury__term_io__V_8_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 0)));
#line 141 "varset.opt"
            mercury__term_io__V_9_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 1)));
#line 141 "varset.opt"
            mercury__term_io__V_7_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_21, (MR_Integer) 2)));
#line 4023 "term_io.c"
            mercury__term_io__TypeCtorInfo_12_60 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 4025 "term_io.c"
            mercury__term_io__TypeCtorInfo_14_62 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 4027 "term_io.c"
            {
#line 4029 "term_io.c"
              mercury__term_io__TypeInfo_13_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4031 "term_io.c"
              MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_61, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_12_60));
#line 4033 "term_io.c"
              MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_61, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_52));
#line 4035 "term_io.c"
            }
#line 4037 "term_io.c"
            {
#line 4039 "term_io.c"
              mercury__term_io__TypeInfo_15_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4041 "term_io.c"
              MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_15_63, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_14_62));
#line 4043 "term_io.c"
              MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_15_63, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_52));
#line 4045 "term_io.c"
            }
#line 452 "map.opt"
            {
#line 452 "map.opt"
              mercury__term_io__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term_io__TypeInfo_for_T_52, mercury__term_io__TypeInfo_13_61, mercury__term_io__TypeInfo_15_63, mercury__term_io__V_7_58, mercury__term_io__Id_14, &mercury__term_io__conv0_Val_16);
            }
#line 452 "map.opt"
            if (mercury__term_io__succeeded)
#line 452 "map.opt"
              {
#line 452 "map.opt"
                mercury__term_io__Val_16 = ((MR_Word) mercury__term_io__conv0_Val_16);
#line 452 "map.opt"
                mercury__term_io__succeeded = MR_TRUE;
#line 452 "map.opt"
              }
#line 494 "term_io.m"
          }
#line 498 "term_io.m"
        if (mercury__term_io__succeeded)
#line 497 "term_io.m"
          {
#line 497 "term_io.m"
            /* direct tailcall eliminated */
#line 497 "term_io.m"
            {
#line 497 "term_io.m"
              MR_Word mercury__term_io__Term__tmp_copy_10 = mercury__term_io__Val_16;

#line 497 "term_io.m"
              mercury__term_io__Term_10 = mercury__term_io__Term__tmp_copy_10;
#line 497 "term_io.m"
            }
#line 497 "term_io.m"
            continue;
#line 497 "term_io.m"
          }
#line 498 "term_io.m"
        else
#line 504 "term_io.m"
          {
#line 504 "term_io.m"
            MR_Word mercury__term_io__ListHead_17;
#line 504 "term_io.m"
            MR_Word mercury__term_io__ListTail_18;
#line 499 "term_io.m"
            MR_Word mercury__term_io__V_30_30;
#line 499 "term_io.m"
            MR_String mercury__term_io__V_31_31;
#line 499 "term_io.m"
            MR_Word mercury__term_io__V_32_32;
#line 499 "term_io.m"
            MR_Word mercury__term_io__V_33_33;
#line 499 "term_io.m"
            MR_Word mercury__term_io__V_34_34;
#line 499 "term_io.m"
            MR_Word mercury__term_io__V_19_19;

#line 499 "term_io.m"
            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 499 "term_io.m"
            if (mercury__term_io__succeeded)
#line 499 "term_io.m"
              {
#line 499 "term_io.m"
                mercury__term_io__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_10, (MR_Integer) 0)));
#line 499 "term_io.m"
                mercury__term_io__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_10, (MR_Integer) 1)));
#line 499 "term_io.m"
                mercury__term_io__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_10, (MR_Integer) 2)));
#line 499 "term_io.m"
                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 499 "term_io.m"
                if (mercury__term_io__succeeded)
#line 499 "term_io.m"
                  {
#line 499 "term_io.m"
                    mercury__term_io__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__V_30_30, (MR_Integer) 0)));
#line 499 "term_io.m"
                    mercury__term_io__succeeded = (strcmp(mercury__term_io__V_31_31, (MR_String) "[|]") == 0);
#line 499 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 499 "term_io.m"
                      {
#line 499 "term_io.m"
                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 499 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 499 "term_io.m"
                          {
#line 499 "term_io.m"
                            mercury__term_io__ListHead_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 0)));
#line 499 "term_io.m"
                            mercury__term_io__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 1)));
#line 499 "term_io.m"
                            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 499 "term_io.m"
                            if (mercury__term_io__succeeded)
#line 499 "term_io.m"
                              {
#line 499 "term_io.m"
                                mercury__term_io__ListTail_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_33_33, (MR_Integer) 0)));
#line 499 "term_io.m"
                                mercury__term_io__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_33_33, (MR_Integer) 1)));
#line 499 "term_io.m"
                                mercury__term_io__succeeded = (mercury__term_io__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 499 "term_io.m"
                              }
#line 499 "term_io.m"
                          }
#line 499 "term_io.m"
                      }
#line 499 "term_io.m"
                  }
#line 499 "term_io.m"
              }
#line 504 "term_io.m"
            if (mercury__term_io__succeeded)
#line 501 "term_io.m"
              {
#line 501 "term_io.m"
                MR_Word mercury__term_io__STATE_VARIABLE_VarSet_37_37;
#line 501 "term_io.m"
                MR_Integer mercury__term_io__STATE_VARIABLE_N_38_38;
#line 501 "term_io.m"
                MR_Integer mercury__term_io__V_79_79;
#line 4172 "term_io.c"
                MR_Box MR_CALL (* mercury__term_io__func_1)(MR_Box, MR_Box);
#line 4174 "term_io.c"
                MR_Box mercury__term_io__conv2_V_79_79;

#line 1585 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_list_tail_8_p_0

	MR_String Message;

	Message =  (MR_String) ", " ;
		{
#line 1585 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 4189 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 1585 "io.opt"
}
#line 4195 "term_io.c"
                mercury__term_io__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_51, (MR_Integer) 0)), (MR_Integer) 13)));
#line 4197 "term_io.c"
                {
#line 4199 "term_io.c"
                  mercury__term_io__conv2_V_79_79 = mercury__term_io__func_1(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_51), mercury__term_io__Ops_9);
                }
#line 4202 "term_io.c"
                mercury__term_io__V_79_79 = ((MR_Integer) mercury__term_io__conv2_V_79_79);
#line 342 "term_io.m"
                {
#line 342 "term_io.m"
                  mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_52, mercury__term_io__TypeClassInfo_for_op_table_51, mercury__term_io__Ops_9, mercury__term_io__ListHead_17, mercury__term_io__V_79_79, mercury__term_io__STATE_VARIABLE_VarSet_0_21, &mercury__term_io__STATE_VARIABLE_VarSet_37_37, mercury__term_io__STATE_VARIABLE_N_0_23, &mercury__term_io__STATE_VARIABLE_N_38_38);
                }
#line 503 "term_io.m"
                /* direct tailcall eliminated */
#line 503 "term_io.m"
                {
#line 503 "term_io.m"
                  MR_Word mercury__term_io__Term__tmp_copy_10 = mercury__term_io__ListTail_18;
#line 503 "term_io.m"
                  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0__tmp_copy_21 = mercury__term_io__STATE_VARIABLE_VarSet_37_37;
#line 503 "term_io.m"
                  MR_Integer mercury__term_io__STATE_VARIABLE_N_0__tmp_copy_23 = mercury__term_io__STATE_VARIABLE_N_38_38;

#line 503 "term_io.m"
                  mercury__term_io__STATE_VARIABLE_N_0_23 = mercury__term_io__STATE_VARIABLE_N_0__tmp_copy_23;
#line 503 "term_io.m"
                  mercury__term_io__STATE_VARIABLE_VarSet_0_21 = mercury__term_io__STATE_VARIABLE_VarSet_0__tmp_copy_21;
#line 503 "term_io.m"
                  mercury__term_io__Term_10 = mercury__term_io__Term__tmp_copy_10;
#line 503 "term_io.m"
                }
#line 503 "term_io.m"
                continue;
#line 501 "term_io.m"
              }
#line 504 "term_io.m"
            else
#line 508 "term_io.m"
              {
#line 505 "term_io.m"
                MR_Word mercury__term_io__V_43_43;
#line 505 "term_io.m"
                MR_String mercury__term_io__V_44_44;
#line 505 "term_io.m"
                MR_Word mercury__term_io__V_45_45;
#line 505 "term_io.m"
                MR_Word mercury__term_io__V_20_20;

#line 505 "term_io.m"
                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 505 "term_io.m"
                if (mercury__term_io__succeeded)
#line 505 "term_io.m"
                  {
#line 505 "term_io.m"
                    mercury__term_io__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_10, (MR_Integer) 0)));
#line 505 "term_io.m"
                    mercury__term_io__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_10, (MR_Integer) 1)));
#line 505 "term_io.m"
                    mercury__term_io__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__Term_10, (MR_Integer) 2)));
#line 505 "term_io.m"
                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_43_43)) == (MR_mktag((MR_Integer) 0)));
#line 505 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 505 "term_io.m"
                      {
#line 505 "term_io.m"
                        mercury__term_io__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__V_43_43, (MR_Integer) 0)));
#line 505 "term_io.m"
                        mercury__term_io__succeeded = (strcmp(mercury__term_io__V_44_44, (MR_String) "[]") == 0);
#line 505 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 505 "term_io.m"
                          mercury__term_io__succeeded = (mercury__term_io__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "term_io.m"
                      }
#line 505 "term_io.m"
                  }
#line 508 "term_io.m"
                if (mercury__term_io__succeeded)
#line 507 "term_io.m"
                  {
#line 507 "term_io.m"
                    *mercury__term_io__STATE_VARIABLE_N_24 = mercury__term_io__STATE_VARIABLE_N_0_23;
#line 507 "term_io.m"
                    *mercury__term_io__STATE_VARIABLE_VarSet_22 = mercury__term_io__STATE_VARIABLE_VarSet_0_21;
#line 507 "term_io.m"
                  }
#line 508 "term_io.m"
                else
#line 509 "term_io.m"
                  {
#line 1585 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_list_tail_8_p_0

	MR_String Message;

	Message =  (MR_String) " | " ;
		{
#line 1585 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 4301 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 1585 "io.opt"
}
#line 510 "term_io.m"
                    {
#line 510 "term_io.m"
                      mercury__term_io__write_term_2_8_p_0(mercury__term_io__TypeInfo_for_T_52, mercury__term_io__TypeClassInfo_for_op_table_51, mercury__term_io__Ops_9, mercury__term_io__Term_10, mercury__term_io__STATE_VARIABLE_VarSet_0_21, mercury__term_io__STATE_VARIABLE_VarSet_22, mercury__term_io__STATE_VARIABLE_N_0_23, mercury__term_io__STATE_VARIABLE_N_24);
#line 510 "term_io.m"
                      return;
                    }
#line 509 "term_io.m"
                  }
#line 508 "term_io.m"
              }
#line 504 "term_io.m"
          }
#line 498 "term_io.m"
      }
#line 498 "term_io.m"
      break;
#line 498 "term_io.m"
    }
#line 488 "term_io.m"
}

#line 345 "term_io.m"
void MR_CALL 
mercury__term_io__write_term_3_9_p_0(
#line 345 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_223,
#line 345 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_222,
#line 345 "term_io.m"
  MR_Box mercury__term_io__Ops_1,
#line 345 "term_io.m"
  MR_Word mercury__term_io__HeadVar__2_2,
#line 345 "term_io.m"
  MR_Integer mercury__term_io__Priority_3,
#line 345 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_4,
#line 345 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_5,
#line 345 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_6,
#line 345 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_7)
#line 345 "term_io.m"
{
#line 349 "term_io.m"
  {
#line 349 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 349 "term_io.m"
    if (((MR_tag((MR_Word) mercury__term_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 352 "term_io.m"
      {
#line 352 "term_io.m"
        MR_Word mercury__term_io__Functor_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));
#line 352 "term_io.m"
        MR_Word mercury__term_io__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));
#line 351 "term_io.m"
        MR_Word mercury__term_io__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__HeadVar__2_2, (MR_Integer) 2)));
#line 361 "term_io.m"
        MR_Word mercury__term_io__ListHead_34;
#line 361 "term_io.m"
        MR_Word mercury__term_io__ListTail_35;
#line 354 "term_io.m"
        MR_String mercury__term_io__V_70_70;
#line 354 "term_io.m"
        MR_Word mercury__term_io__V_71_71;
#line 354 "term_io.m"
        MR_Word mercury__term_io__V_72_72;

#line 354 "term_io.m"
        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 354 "term_io.m"
        if (mercury__term_io__succeeded)
#line 354 "term_io.m"
          {
#line 354 "term_io.m"
            mercury__term_io__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 354 "term_io.m"
            mercury__term_io__succeeded = (strcmp(mercury__term_io__V_70_70, (MR_String) "[|]") == 0);
#line 354 "term_io.m"
            if (mercury__term_io__succeeded)
#line 354 "term_io.m"
              {
#line 355 "term_io.m"
                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 355 "term_io.m"
                if (mercury__term_io__succeeded)
#line 355 "term_io.m"
                  {
#line 355 "term_io.m"
                    mercury__term_io__ListHead_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 355 "term_io.m"
                    mercury__term_io__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 355 "term_io.m"
                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 355 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 355 "term_io.m"
                      {
#line 355 "term_io.m"
                        mercury__term_io__ListTail_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_71_71, (MR_Integer) 0)));
#line 355 "term_io.m"
                        mercury__term_io__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_71_71, (MR_Integer) 1)));
#line 355 "term_io.m"
                        mercury__term_io__succeeded = (mercury__term_io__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 355 "term_io.m"
                      }
#line 355 "term_io.m"
                  }
#line 354 "term_io.m"
              }
#line 354 "term_io.m"
          }
#line 361 "term_io.m"
        if (mercury__term_io__succeeded)
#line 357 "term_io.m"
          {
#line 357 "term_io.m"
            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_75_75;
#line 357 "term_io.m"
            MR_Integer mercury__term_io__STATE_VARIABLE_N_76_76;

#line 357 "term_io.m"
            {
#line 357 "term_io.m"
              mercury__io__write_char_3_p_0((MR_Char) 91);
            }
#line 358 "term_io.m"
            {
#line 358 "term_io.m"
              mercury__term_io__write_arg_term_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__ListHead_34, mercury__term_io__STATE_VARIABLE_VarSet_0_4, &mercury__term_io__STATE_VARIABLE_VarSet_75_75, mercury__term_io__STATE_VARIABLE_N_0_6, &mercury__term_io__STATE_VARIABLE_N_76_76);
            }
#line 359 "term_io.m"
            {
#line 359 "term_io.m"
              mercury__term_io__write_list_tail_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__ListTail_35, mercury__term_io__STATE_VARIABLE_VarSet_75_75, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_76_76, mercury__term_io__STATE_VARIABLE_N_7);
            }
#line 360 "term_io.m"
            {
#line 360 "term_io.m"
              mercury__io__write_char_3_p_0((MR_Char) 93);
#line 360 "term_io.m"
              return;
            }
#line 357 "term_io.m"
          }
#line 361 "term_io.m"
        else
#line 366 "term_io.m"
          {
#line 362 "term_io.m"
            MR_String mercury__term_io__V_83_83;

#line 362 "term_io.m"
            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 362 "term_io.m"
            if (mercury__term_io__succeeded)
#line 362 "term_io.m"
              {
#line 362 "term_io.m"
                mercury__term_io__V_83_83 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 362 "term_io.m"
                mercury__term_io__succeeded = (strcmp(mercury__term_io__V_83_83, (MR_String) "[]") == 0);
#line 362 "term_io.m"
                if (mercury__term_io__succeeded)
#line 363 "term_io.m"
                  mercury__term_io__succeeded = (mercury__term_io__Args_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "term_io.m"
              }
#line 366 "term_io.m"
            if (mercury__term_io__succeeded)
#line 365 "term_io.m"
              {
#line 365 "term_io.m"
                {
#line 365 "term_io.m"
                  mercury__io__write_string_3_p_0((MR_String) "[]");
                }
#line 365 "term_io.m"
                *mercury__term_io__STATE_VARIABLE_N_7 = mercury__term_io__STATE_VARIABLE_N_0_6;
#line 365 "term_io.m"
                *mercury__term_io__STATE_VARIABLE_VarSet_5 = mercury__term_io__STATE_VARIABLE_VarSet_0_4;
#line 365 "term_io.m"
              }
#line 366 "term_io.m"
            else
#line 373 "term_io.m"
              {
#line 373 "term_io.m"
                MR_Word mercury__term_io__BracedTerm_36;
#line 367 "term_io.m"
                MR_String mercury__term_io__V_86_86;
#line 367 "term_io.m"
                MR_Word mercury__term_io__V_87_87;

#line 367 "term_io.m"
                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 367 "term_io.m"
                if (mercury__term_io__succeeded)
#line 367 "term_io.m"
                  {
#line 367 "term_io.m"
                    mercury__term_io__V_86_86 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 367 "term_io.m"
                    mercury__term_io__succeeded = (strcmp(mercury__term_io__V_86_86, (MR_String) "{}") == 0);
#line 367 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 367 "term_io.m"
                      {
#line 368 "term_io.m"
                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 368 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 368 "term_io.m"
                          {
#line 368 "term_io.m"
                            mercury__term_io__BracedTerm_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 368 "term_io.m"
                            mercury__term_io__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 368 "term_io.m"
                            mercury__term_io__succeeded = (mercury__term_io__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 368 "term_io.m"
                          }
#line 367 "term_io.m"
                      }
#line 367 "term_io.m"
                  }
#line 373 "term_io.m"
                if (mercury__term_io__succeeded)
#line 370 "term_io.m"
                  {
#line 370 "term_io.m"
                    {
#line 370 "term_io.m"
                      mercury__io__write_string_3_p_0((MR_String) "{ ");
                    }
#line 371 "term_io.m"
                    {
#line 371 "term_io.m"
                      mercury__term_io__write_term_2_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__BracedTerm_36, mercury__term_io__STATE_VARIABLE_VarSet_0_4, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_0_6, mercury__term_io__STATE_VARIABLE_N_7);
                    }
#line 372 "term_io.m"
                    {
#line 372 "term_io.m"
                      mercury__io__write_string_3_p_0((MR_String) " }");
#line 372 "term_io.m"
                      return;
                    }
#line 370 "term_io.m"
                  }
#line 373 "term_io.m"
                else
#line 381 "term_io.m"
                  {
#line 381 "term_io.m"
                    MR_Word mercury__term_io__BracedHead_37;
#line 381 "term_io.m"
                    MR_Word mercury__term_io__BracedTail_38;
#line 374 "term_io.m"
                    MR_String mercury__term_io__V_95_95;

#line 374 "term_io.m"
                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 374 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 374 "term_io.m"
                      {
#line 374 "term_io.m"
                        mercury__term_io__V_95_95 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 374 "term_io.m"
                        mercury__term_io__succeeded = (strcmp(mercury__term_io__V_95_95, (MR_String) "{}") == 0);
#line 374 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 374 "term_io.m"
                          {
#line 375 "term_io.m"
                            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 375 "term_io.m"
                            if (mercury__term_io__succeeded)
#line 375 "term_io.m"
                              {
#line 375 "term_io.m"
                                mercury__term_io__BracedHead_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 375 "term_io.m"
                                mercury__term_io__BracedTail_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 375 "term_io.m"
                              }
#line 374 "term_io.m"
                          }
#line 374 "term_io.m"
                      }
#line 381 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 377 "term_io.m"
                      {
#line 377 "term_io.m"
                        MR_Word mercury__term_io__STATE_VARIABLE_VarSet_98_98;
#line 377 "term_io.m"
                        MR_Integer mercury__term_io__STATE_VARIABLE_N_99_99;

#line 377 "term_io.m"
                        {
#line 377 "term_io.m"
                          mercury__io__write_char_3_p_0((MR_Char) 123);
                        }
#line 378 "term_io.m"
                        {
#line 378 "term_io.m"
                          mercury__term_io__write_arg_term_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__BracedHead_37, mercury__term_io__STATE_VARIABLE_VarSet_0_4, &mercury__term_io__STATE_VARIABLE_VarSet_98_98, mercury__term_io__STATE_VARIABLE_N_0_6, &mercury__term_io__STATE_VARIABLE_N_99_99);
                        }
#line 379 "term_io.m"
                        {
#line 379 "term_io.m"
                          mercury__term_io__write_term_args_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__BracedTail_38, mercury__term_io__STATE_VARIABLE_VarSet_98_98, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_99_99, mercury__term_io__STATE_VARIABLE_N_7);
                        }
#line 380 "term_io.m"
                        {
#line 380 "term_io.m"
                          mercury__io__write_char_3_p_0((MR_Char) 125);
#line 380 "term_io.m"
                          return;
                        }
#line 377 "term_io.m"
                      }
#line 381 "term_io.m"
                    else
#line 393 "term_io.m"
                      {
#line 393 "term_io.m"
                        MR_Word mercury__term_io__Var_39;
#line 393 "term_io.m"
                        MR_Word mercury__term_io__FirstArg_41;
#line 393 "term_io.m"
                        MR_Word mercury__term_io__OtherArgs_42;
#line 385 "term_io.m"
                        MR_String mercury__term_io__V_106_106;
#line 385 "term_io.m"
                        MR_Word mercury__term_io__V_107_107;
#line 385 "term_io.m"
                        MR_Word mercury__term_io__V_108_108;
#line 386 "term_io.m"
                        MR_Word mercury__term_io__V_40_40;

#line 385 "term_io.m"
                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 385 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 385 "term_io.m"
                          {
#line 385 "term_io.m"
                            mercury__term_io__V_106_106 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 385 "term_io.m"
                            mercury__term_io__succeeded = (strcmp(mercury__term_io__V_106_106, (MR_String) "") == 0);
#line 385 "term_io.m"
                            if (mercury__term_io__succeeded)
#line 385 "term_io.m"
                              {
#line 386 "term_io.m"
                                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 386 "term_io.m"
                                if (mercury__term_io__succeeded)
#line 386 "term_io.m"
                                  {
#line 386 "term_io.m"
                                    mercury__term_io__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 386 "term_io.m"
                                    mercury__term_io__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 386 "term_io.m"
                                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_107_107)) == (MR_mktag((MR_Integer) 1)));
#line 386 "term_io.m"
                                    if (mercury__term_io__succeeded)
#line 386 "term_io.m"
                                      {
#line 386 "term_io.m"
                                        mercury__term_io__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_107_107, (MR_Integer) 0)));
#line 386 "term_io.m"
                                        mercury__term_io__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_107_107, (MR_Integer) 1)));
#line 386 "term_io.m"
                                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_108_108)) == (MR_mktag((MR_Integer) 1)));
#line 386 "term_io.m"
                                        if (mercury__term_io__succeeded)
#line 386 "term_io.m"
                                          {
#line 386 "term_io.m"
                                            mercury__term_io__FirstArg_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_108_108, (MR_Integer) 0)));
#line 386 "term_io.m"
                                            mercury__term_io__OtherArgs_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_108_108, (MR_Integer) 1)));
#line 386 "term_io.m"
                                          }
#line 386 "term_io.m"
                                      }
#line 386 "term_io.m"
                                  }
#line 385 "term_io.m"
                              }
#line 385 "term_io.m"
                          }
#line 393 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 388 "term_io.m"
                          {
#line 388 "term_io.m"
                            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_109_109;
#line 388 "term_io.m"
                            MR_Integer mercury__term_io__STATE_VARIABLE_N_110_110;
#line 388 "term_io.m"
                            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_114_114;
#line 388 "term_io.m"
                            MR_Integer mercury__term_io__STATE_VARIABLE_N_115_115;

#line 388 "term_io.m"
                            {
#line 388 "term_io.m"
                              mercury__term_io__write_variable_2_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Var_39, mercury__term_io__STATE_VARIABLE_VarSet_0_4, &mercury__term_io__STATE_VARIABLE_VarSet_109_109, mercury__term_io__STATE_VARIABLE_N_0_6, &mercury__term_io__STATE_VARIABLE_N_110_110);
                            }
#line 389 "term_io.m"
                            {
#line 389 "term_io.m"
                              mercury__io__write_char_3_p_0((MR_Char) 40);
                            }
#line 390 "term_io.m"
                            {
#line 390 "term_io.m"
                              mercury__term_io__write_arg_term_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__FirstArg_41, mercury__term_io__STATE_VARIABLE_VarSet_109_109, &mercury__term_io__STATE_VARIABLE_VarSet_114_114, mercury__term_io__STATE_VARIABLE_N_110_110, &mercury__term_io__STATE_VARIABLE_N_115_115);
                            }
#line 391 "term_io.m"
                            {
#line 391 "term_io.m"
                              mercury__term_io__write_term_args_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__OtherArgs_42, mercury__term_io__STATE_VARIABLE_VarSet_114_114, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_115_115, mercury__term_io__STATE_VARIABLE_N_7);
                            }
#line 392 "term_io.m"
                            {
#line 392 "term_io.m"
                              mercury__io__write_char_3_p_0((MR_Char) 41);
#line 392 "term_io.m"
                              return;
                            }
#line 388 "term_io.m"
                          }
#line 393 "term_io.m"
                        else
#line 405 "term_io.m"
                          {
#line 405 "term_io.m"
                            MR_Word mercury__term_io__PrefixArg_43;
#line 405 "term_io.m"
                            MR_Integer mercury__term_io__OpPriority_45;
#line 405 "term_io.m"
                            MR_Word mercury__term_io__OpAssoc_46;
#line 394 "term_io.m"
                            MR_String mercury__term_io__OpName_44;
#line 394 "term_io.m"
                            MR_Word mercury__term_io__V_122_122;

#line 394 "term_io.m"
                            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 394 "term_io.m"
                            if (mercury__term_io__succeeded)
#line 394 "term_io.m"
                              {
#line 394 "term_io.m"
                                mercury__term_io__PrefixArg_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 394 "term_io.m"
                                mercury__term_io__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 394 "term_io.m"
                                mercury__term_io__succeeded = (mercury__term_io__V_122_122 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 394 "term_io.m"
                                if (mercury__term_io__succeeded)
#line 394 "term_io.m"
                                  {
#line 395 "term_io.m"
                                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 395 "term_io.m"
                                    if (mercury__term_io__succeeded)
#line 395 "term_io.m"
                                      {
#line 395 "term_io.m"
                                        mercury__term_io__OpName_44 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 396 "term_io.m"
                                        {
#line 396 "term_io.m"
                                          mercury__term_io__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__OpName_44, &mercury__term_io__OpPriority_45, &mercury__term_io__OpAssoc_46);
                                        }
#line 395 "term_io.m"
                                      }
#line 394 "term_io.m"
                                  }
#line 394 "term_io.m"
                              }
#line 405 "term_io.m"
                            if (mercury__term_io__succeeded)
#line 398 "term_io.m"
                              {
#line 398 "term_io.m"
                                MR_Word mercury__term_io__TypeClassInfo_for_writer_225;
#line 398 "term_io.m"
                                MR_Word mercury__term_io__Stream_47;
#line 398 "term_io.m"
                                MR_Integer mercury__term_io__NewPriority_48;

#line 398 "term_io.m"
                                {
#line 398 "term_io.m"
                                  mercury__io__output_stream_3_p_0(&mercury__term_io__Stream_47);
                                }
#line 4814 "term_io.c"
                                mercury__term_io__TypeClassInfo_for_writer_225 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 40 "stream.string_writer.opt"
                                mercury__term_io__succeeded = (mercury__term_io__OpPriority_45 > mercury__term_io__Priority_3);
#line 43 "stream.string_writer.opt"
                                if (mercury__term_io__succeeded)
#line 4820 "term_io.c"
                                  {
#line 4822 "term_io.c"
                                    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_225, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4824 "term_io.c"
                                    MR_Box mercury__term_io__conv1_STATE_VARIABLE_IO_125_125;

#line 4827 "term_io.c"
                                    {
#line 4829 "term_io.c"
                                      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_225), ((MR_Box) (mercury__term_io__Stream_47)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_IO_125_125);
                                    }
#line 4832 "term_io.c"
                                  }
#line 43 "stream.string_writer.opt"
                                else
#line 44 "stream.string_writer.opt"
                                  {
#line 44 "stream.string_writer.opt"
                                  }
#line 400 "term_io.m"
                                {
#line 400 "term_io.m"
                                  mercury__term_io__write_constant_3_p_0(mercury__term_io__Functor_27);
                                }
#line 401 "term_io.m"
                                {
#line 401 "term_io.m"
                                  mercury__io__write_char_3_p_0((MR_Char) 32);
                                }
#line 40 "ops.opt"
#line 40 "ops.opt"
                                switch (mercury__term_io__OpAssoc_46) {
#line 40 "ops.opt"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 40 "ops.opt"
                                  case (MR_Integer) 0:
#line 41 "ops.opt"
                                    {
#line 42 "ops.opt"
                                      mercury__term_io__NewPriority_48 = (mercury__term_io__OpPriority_45 - (MR_Integer) 1);
#line 41 "ops.opt"
                                    }
#line 40 "ops.opt"
                                    break;
#line 40 "ops.opt"
                                  case (MR_Integer) 1:
#line 40 "ops.opt"
                                    mercury__term_io__NewPriority_48 = mercury__term_io__OpPriority_45;
#line 40 "ops.opt"
                                    break;
#line 40 "ops.opt"
                                }
#line 403 "term_io.m"
                                {
#line 403 "term_io.m"
                                  mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__PrefixArg_43, mercury__term_io__NewPriority_48, mercury__term_io__STATE_VARIABLE_VarSet_0_4, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_0_6, mercury__term_io__STATE_VARIABLE_N_7);
                                }
#line 40 "stream.string_writer.opt"
                                mercury__term_io__succeeded = (mercury__term_io__OpPriority_45 > mercury__term_io__Priority_3);
#line 43 "stream.string_writer.opt"
                                if (mercury__term_io__succeeded)
#line 4882 "term_io.c"
                                  {
#line 4884 "term_io.c"
                                    void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_225, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4886 "term_io.c"
                                    MR_Box mercury__term_io__conv3_STATE_VARIABLE_IO_9;

#line 4889 "term_io.c"
                                    {
#line 4891 "term_io.c"
                                      mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_225), ((MR_Box) (mercury__term_io__Stream_47)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_IO_9);
                                    }
#line 4894 "term_io.c"
                                  }
#line 43 "stream.string_writer.opt"
                                else
#line 44 "stream.string_writer.opt"
                                  {
#line 44 "stream.string_writer.opt"
                                  }
#line 398 "term_io.m"
                              }
#line 405 "term_io.m"
                            else
#line 417 "term_io.m"
                              {
#line 417 "term_io.m"
                                MR_Word mercury__term_io__PostfixArg_49;
#line 417 "term_io.m"
                                MR_Integer mercury__term_io__OpPriority_218;
#line 417 "term_io.m"
                                MR_Word mercury__term_io__OpAssoc_219;
#line 406 "term_io.m"
                                MR_Word mercury__term_io__V_134_134;
#line 406 "term_io.m"
                                MR_String mercury__term_io__OpName_203;

#line 406 "term_io.m"
                                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 406 "term_io.m"
                                if (mercury__term_io__succeeded)
#line 406 "term_io.m"
                                  {
#line 406 "term_io.m"
                                    mercury__term_io__PostfixArg_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 406 "term_io.m"
                                    mercury__term_io__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 406 "term_io.m"
                                    mercury__term_io__succeeded = (mercury__term_io__V_134_134 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 406 "term_io.m"
                                    if (mercury__term_io__succeeded)
#line 406 "term_io.m"
                                      {
#line 407 "term_io.m"
                                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 407 "term_io.m"
                                        if (mercury__term_io__succeeded)
#line 407 "term_io.m"
                                          {
#line 407 "term_io.m"
                                            mercury__term_io__OpName_203 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 408 "term_io.m"
                                            {
#line 408 "term_io.m"
                                              mercury__term_io__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__OpName_203, &mercury__term_io__OpPriority_218, &mercury__term_io__OpAssoc_219);
                                            }
#line 407 "term_io.m"
                                          }
#line 406 "term_io.m"
                                      }
#line 406 "term_io.m"
                                  }
#line 417 "term_io.m"
                                if (mercury__term_io__succeeded)
#line 410 "term_io.m"
                                  {
#line 410 "term_io.m"
                                    MR_Word mercury__term_io__TypeClassInfo_for_writer_227;
#line 410 "term_io.m"
                                    MR_Word mercury__term_io__Stream_204;
#line 410 "term_io.m"
                                    MR_Integer mercury__term_io__NewPriority_205;

#line 410 "term_io.m"
                                    {
#line 410 "term_io.m"
                                      mercury__io__output_stream_3_p_0(&mercury__term_io__Stream_204);
                                    }
#line 4970 "term_io.c"
                                    mercury__term_io__TypeClassInfo_for_writer_227 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 40 "stream.string_writer.opt"
                                    mercury__term_io__succeeded = (mercury__term_io__OpPriority_218 > mercury__term_io__Priority_3);
#line 43 "stream.string_writer.opt"
                                    if (mercury__term_io__succeeded)
#line 4976 "term_io.c"
                                      {
#line 4978 "term_io.c"
                                        void MR_CALL (* mercury__term_io__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_227, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4980 "term_io.c"
                                        MR_Box mercury__term_io__conv5_STATE_VARIABLE_IO_137_137;

#line 4983 "term_io.c"
                                        {
#line 4985 "term_io.c"
                                          mercury__term_io__func_4(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_227), ((MR_Box) (mercury__term_io__Stream_204)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv5_STATE_VARIABLE_IO_137_137);
                                        }
#line 4988 "term_io.c"
                                      }
#line 43 "stream.string_writer.opt"
                                    else
#line 44 "stream.string_writer.opt"
                                      {
#line 44 "stream.string_writer.opt"
                                      }
#line 40 "ops.opt"
#line 40 "ops.opt"
                                    switch (mercury__term_io__OpAssoc_219) {
#line 40 "ops.opt"
                                      default: /*NOTREACHED*/ MR_assert(0);
#line 40 "ops.opt"
                                      case (MR_Integer) 0:
#line 41 "ops.opt"
                                        {
#line 42 "ops.opt"
                                          mercury__term_io__NewPriority_205 = (mercury__term_io__OpPriority_218 - (MR_Integer) 1);
#line 41 "ops.opt"
                                        }
#line 40 "ops.opt"
                                        break;
#line 40 "ops.opt"
                                      case (MR_Integer) 1:
#line 40 "ops.opt"
                                        mercury__term_io__NewPriority_205 = mercury__term_io__OpPriority_218;
#line 40 "ops.opt"
                                        break;
#line 40 "ops.opt"
                                    }
#line 413 "term_io.m"
                                    {
#line 413 "term_io.m"
                                      mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__PostfixArg_49, mercury__term_io__NewPriority_205, mercury__term_io__STATE_VARIABLE_VarSet_0_4, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_0_6, mercury__term_io__STATE_VARIABLE_N_7);
                                    }
#line 414 "term_io.m"
                                    {
#line 414 "term_io.m"
                                      mercury__io__write_char_3_p_0((MR_Char) 32);
                                    }
#line 415 "term_io.m"
                                    {
#line 415 "term_io.m"
                                      mercury__term_io__write_constant_3_p_0(mercury__term_io__Functor_27);
                                    }
#line 40 "stream.string_writer.opt"
                                    mercury__term_io__succeeded = (mercury__term_io__OpPriority_218 > mercury__term_io__Priority_3);
#line 43 "stream.string_writer.opt"
                                    if (mercury__term_io__succeeded)
#line 5038 "term_io.c"
                                      {
#line 5040 "term_io.c"
                                        void MR_CALL (* mercury__term_io__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_227, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5042 "term_io.c"
                                        MR_Box mercury__term_io__conv7_STATE_VARIABLE_IO_9;

#line 5045 "term_io.c"
                                        {
#line 5047 "term_io.c"
                                          mercury__term_io__func_6(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_227), ((MR_Box) (mercury__term_io__Stream_204)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv7_STATE_VARIABLE_IO_9);
                                        }
#line 5050 "term_io.c"
                                      }
#line 43 "stream.string_writer.opt"
                                    else
#line 44 "stream.string_writer.opt"
                                      {
#line 44 "stream.string_writer.opt"
                                      }
#line 410 "term_io.m"
                                  }
#line 417 "term_io.m"
                                else
#line 447 "term_io.m"
                                  {
#line 447 "term_io.m"
                                    MR_Word mercury__term_io__Arg1_50;
#line 447 "term_io.m"
                                    MR_Word mercury__term_io__Arg2_51;
#line 447 "term_io.m"
                                    MR_Word mercury__term_io__LeftAssoc_52;
#line 447 "term_io.m"
                                    MR_Word mercury__term_io__RightAssoc_53;
#line 447 "term_io.m"
                                    MR_String mercury__term_io__OpName_214;
#line 447 "term_io.m"
                                    MR_Integer mercury__term_io__OpPriority_215;
#line 418 "term_io.m"
                                    MR_Word mercury__term_io__V_146_146;
#line 418 "term_io.m"
                                    MR_Word mercury__term_io__V_147_147;

#line 418 "term_io.m"
                                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 418 "term_io.m"
                                    if (mercury__term_io__succeeded)
#line 418 "term_io.m"
                                      {
#line 418 "term_io.m"
                                        mercury__term_io__Arg1_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 418 "term_io.m"
                                        mercury__term_io__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 418 "term_io.m"
                                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_146_146)) == (MR_mktag((MR_Integer) 1)));
#line 418 "term_io.m"
                                        if (mercury__term_io__succeeded)
#line 418 "term_io.m"
                                          {
#line 418 "term_io.m"
                                            mercury__term_io__Arg2_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_146_146, (MR_Integer) 0)));
#line 418 "term_io.m"
                                            mercury__term_io__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_146_146, (MR_Integer) 1)));
#line 418 "term_io.m"
                                            mercury__term_io__succeeded = (mercury__term_io__V_147_147 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "term_io.m"
                                            if (mercury__term_io__succeeded)
#line 418 "term_io.m"
                                              {
#line 419 "term_io.m"
                                                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 419 "term_io.m"
                                                if (mercury__term_io__succeeded)
#line 419 "term_io.m"
                                                  {
#line 419 "term_io.m"
                                                    mercury__term_io__OpName_214 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 420 "term_io.m"
                                                    {
#line 420 "term_io.m"
                                                      mercury__term_io__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__OpName_214, &mercury__term_io__OpPriority_215, &mercury__term_io__LeftAssoc_52, &mercury__term_io__RightAssoc_53);
                                                    }
#line 419 "term_io.m"
                                                  }
#line 418 "term_io.m"
                                              }
#line 418 "term_io.m"
                                          }
#line 418 "term_io.m"
                                      }
#line 447 "term_io.m"
                                    if (mercury__term_io__succeeded)
#line 422 "term_io.m"
                                      {
#line 422 "term_io.m"
                                        MR_Word mercury__term_io__TypeClassInfo_for_writer_229;
#line 422 "term_io.m"
                                        MR_Integer mercury__term_io__LeftPriority_54;
#line 422 "term_io.m"
                                        MR_Integer mercury__term_io__RightPriority_56;
#line 422 "term_io.m"
                                        MR_Word mercury__term_io__STATE_VARIABLE_VarSet_151_151;
#line 422 "term_io.m"
                                        MR_Integer mercury__term_io__STATE_VARIABLE_N_152_152;
#line 422 "term_io.m"
                                        MR_Word mercury__term_io__Stream_206;

#line 422 "term_io.m"
                                        {
#line 422 "term_io.m"
                                          mercury__io__output_stream_3_p_0(&mercury__term_io__Stream_206);
                                        }
#line 5150 "term_io.c"
                                        mercury__term_io__TypeClassInfo_for_writer_229 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 40 "stream.string_writer.opt"
                                        mercury__term_io__succeeded = (mercury__term_io__OpPriority_215 > mercury__term_io__Priority_3);
#line 43 "stream.string_writer.opt"
                                        if (mercury__term_io__succeeded)
#line 5156 "term_io.c"
                                          {
#line 5158 "term_io.c"
                                            void MR_CALL (* mercury__term_io__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_229, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5160 "term_io.c"
                                            MR_Box mercury__term_io__conv9_STATE_VARIABLE_IO_150_150;

#line 5163 "term_io.c"
                                            {
#line 5165 "term_io.c"
                                              mercury__term_io__func_8(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_229), ((MR_Box) (mercury__term_io__Stream_206)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv9_STATE_VARIABLE_IO_150_150);
                                            }
#line 5168 "term_io.c"
                                          }
#line 43 "stream.string_writer.opt"
                                        else
#line 44 "stream.string_writer.opt"
                                          {
#line 44 "stream.string_writer.opt"
                                          }
#line 40 "ops.opt"
#line 40 "ops.opt"
                                        switch (mercury__term_io__LeftAssoc_52) {
#line 40 "ops.opt"
                                          default: /*NOTREACHED*/ MR_assert(0);
#line 40 "ops.opt"
                                          case (MR_Integer) 0:
#line 41 "ops.opt"
                                            {
#line 42 "ops.opt"
                                              mercury__term_io__LeftPriority_54 = (mercury__term_io__OpPriority_215 - (MR_Integer) 1);
#line 41 "ops.opt"
                                            }
#line 40 "ops.opt"
                                            break;
#line 40 "ops.opt"
                                          case (MR_Integer) 1:
#line 40 "ops.opt"
                                            mercury__term_io__LeftPriority_54 = mercury__term_io__OpPriority_215;
#line 40 "ops.opt"
                                            break;
#line 40 "ops.opt"
                                        }
#line 425 "term_io.m"
                                        {
#line 425 "term_io.m"
                                          mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Arg1_50, mercury__term_io__LeftPriority_54, mercury__term_io__STATE_VARIABLE_VarSet_0_4, &mercury__term_io__STATE_VARIABLE_VarSet_151_151, mercury__term_io__STATE_VARIABLE_N_0_6, &mercury__term_io__STATE_VARIABLE_N_152_152);
                                        }
#line 426 "term_io.m"
                                        mercury__term_io__succeeded = (strcmp(mercury__term_io__OpName_214, (MR_String) ",") == 0);
#line 428 "term_io.m"
                                        if (mercury__term_io__succeeded)
#line 427 "term_io.m"
                                          {
#line 427 "term_io.m"
                                            {
#line 427 "term_io.m"
                                              mercury__io__write_string_3_p_0((MR_String) ", ");
                                            }
#line 427 "term_io.m"
                                          }
#line 428 "term_io.m"
                                        else
#line 439 "term_io.m"
                                          {
#line 428 "term_io.m"
                                            mercury__term_io__succeeded = (strcmp(mercury__term_io__OpName_214, (MR_String) ".") == 0);
#line 439 "term_io.m"
                                            if (mercury__term_io__succeeded)
#line 437 "term_io.m"
                                              {
#line 437 "term_io.m"
                                                MR_String mercury__term_io__Dot_55;

#line 433 "term_io.m"
                                                {
#line 433 "term_io.m"
                                                  mercury__term_io__succeeded = mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_p_0(mercury__term_io__Arg2_51);
                                                }
#line 435 "term_io.m"
                                                if (mercury__term_io__succeeded)
#line 434 "term_io.m"
                                                  mercury__term_io__Dot_55 = (MR_String) "\'.\'";
#line 435 "term_io.m"
                                                else
#line 436 "term_io.m"
                                                  mercury__term_io__Dot_55 = (MR_String) ".";
#line 438 "term_io.m"
                                                {
#line 438 "term_io.m"
                                                  mercury__io__write_string_3_p_0(mercury__term_io__Dot_55);
                                                }
#line 437 "term_io.m"
                                              }
#line 439 "term_io.m"
                                            else
#line 440 "term_io.m"
                                              {
#line 440 "term_io.m"
                                                {
#line 440 "term_io.m"
                                                  mercury__io__write_char_3_p_0((MR_Char) 32);
                                                }
#line 441 "term_io.m"
                                                {
#line 441 "term_io.m"
                                                  mercury__term_io__write_constant_3_p_0(mercury__term_io__Functor_27);
                                                }
#line 442 "term_io.m"
                                                {
#line 442 "term_io.m"
                                                  mercury__io__write_char_3_p_0((MR_Char) 32);
                                                }
#line 440 "term_io.m"
                                              }
#line 439 "term_io.m"
                                          }
#line 40 "ops.opt"
#line 40 "ops.opt"
                                        switch (mercury__term_io__RightAssoc_53) {
#line 40 "ops.opt"
                                          default: /*NOTREACHED*/ MR_assert(0);
#line 40 "ops.opt"
                                          case (MR_Integer) 0:
#line 41 "ops.opt"
                                            {
#line 42 "ops.opt"
                                              mercury__term_io__RightPriority_56 = (mercury__term_io__OpPriority_215 - (MR_Integer) 1);
#line 41 "ops.opt"
                                            }
#line 40 "ops.opt"
                                            break;
#line 40 "ops.opt"
                                          case (MR_Integer) 1:
#line 40 "ops.opt"
                                            mercury__term_io__RightPriority_56 = mercury__term_io__OpPriority_215;
#line 40 "ops.opt"
                                            break;
#line 40 "ops.opt"
                                        }
#line 445 "term_io.m"
                                        {
#line 445 "term_io.m"
                                          mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Arg2_51, mercury__term_io__RightPriority_56, mercury__term_io__STATE_VARIABLE_VarSet_151_151, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_152_152, mercury__term_io__STATE_VARIABLE_N_7);
                                        }
#line 40 "stream.string_writer.opt"
                                        mercury__term_io__succeeded = (mercury__term_io__OpPriority_215 > mercury__term_io__Priority_3);
#line 43 "stream.string_writer.opt"
                                        if (mercury__term_io__succeeded)
#line 5305 "term_io.c"
                                          {
#line 5307 "term_io.c"
                                            void MR_CALL (* mercury__term_io__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_229, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5309 "term_io.c"
                                            MR_Box mercury__term_io__conv11_STATE_VARIABLE_IO_9;

#line 5312 "term_io.c"
                                            {
#line 5314 "term_io.c"
                                              mercury__term_io__func_10(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_229), ((MR_Box) (mercury__term_io__Stream_206)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv11_STATE_VARIABLE_IO_9);
                                            }
#line 5317 "term_io.c"
                                          }
#line 43 "stream.string_writer.opt"
                                        else
#line 44 "stream.string_writer.opt"
                                          {
#line 44 "stream.string_writer.opt"
                                          }
#line 422 "term_io.m"
                                      }
#line 447 "term_io.m"
                                    else
#line 463 "term_io.m"
                                      {
#line 463 "term_io.m"
                                        MR_Word mercury__term_io__FirstAssoc_57;
#line 463 "term_io.m"
                                        MR_Word mercury__term_io__SecondAssoc_58;
#line 463 "term_io.m"
                                        MR_Integer mercury__term_io__OpPriority_210;
#line 463 "term_io.m"
                                        MR_Word mercury__term_io__Arg1_212;
#line 463 "term_io.m"
                                        MR_Word mercury__term_io__Arg2_213;
#line 448 "term_io.m"
                                        MR_Word mercury__term_io__V_167_167;
#line 448 "term_io.m"
                                        MR_Word mercury__term_io__V_168_168;
#line 448 "term_io.m"
                                        MR_String mercury__term_io__OpName_207;

#line 448 "term_io.m"
                                        mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Args_28)) == (MR_mktag((MR_Integer) 1)));
#line 448 "term_io.m"
                                        if (mercury__term_io__succeeded)
#line 448 "term_io.m"
                                          {
#line 448 "term_io.m"
                                            mercury__term_io__Arg1_212 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 448 "term_io.m"
                                            mercury__term_io__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 448 "term_io.m"
                                            mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_167_167)) == (MR_mktag((MR_Integer) 1)));
#line 448 "term_io.m"
                                            if (mercury__term_io__succeeded)
#line 448 "term_io.m"
                                              {
#line 448 "term_io.m"
                                                mercury__term_io__Arg2_213 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_167_167, (MR_Integer) 0)));
#line 448 "term_io.m"
                                                mercury__term_io__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_167_167, (MR_Integer) 1)));
#line 448 "term_io.m"
                                                mercury__term_io__succeeded = (mercury__term_io__V_168_168 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 448 "term_io.m"
                                                if (mercury__term_io__succeeded)
#line 448 "term_io.m"
                                                  {
#line 449 "term_io.m"
                                                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 449 "term_io.m"
                                                    if (mercury__term_io__succeeded)
#line 449 "term_io.m"
                                                      {
#line 449 "term_io.m"
                                                        mercury__term_io__OpName_207 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 450 "term_io.m"
                                                        {
#line 450 "term_io.m"
                                                          mercury__term_io__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__OpName_207, &mercury__term_io__OpPriority_210, &mercury__term_io__FirstAssoc_57, &mercury__term_io__SecondAssoc_58);
                                                        }
#line 449 "term_io.m"
                                                      }
#line 448 "term_io.m"
                                                  }
#line 448 "term_io.m"
                                              }
#line 448 "term_io.m"
                                          }
#line 463 "term_io.m"
                                        if (mercury__term_io__succeeded)
#line 453 "term_io.m"
                                          {
#line 453 "term_io.m"
                                            MR_Word mercury__term_io__TypeClassInfo_for_writer_231;
#line 453 "term_io.m"
                                            MR_Integer mercury__term_io__FirstPriority_59;
#line 453 "term_io.m"
                                            MR_Integer mercury__term_io__SecondPriority_60;
#line 453 "term_io.m"
                                            MR_Word mercury__term_io__STATE_VARIABLE_VarSet_175_175;
#line 453 "term_io.m"
                                            MR_Integer mercury__term_io__STATE_VARIABLE_N_176_176;
#line 453 "term_io.m"
                                            MR_Word mercury__term_io__Stream_208;

#line 453 "term_io.m"
                                            {
#line 453 "term_io.m"
                                              mercury__io__output_stream_3_p_0(&mercury__term_io__Stream_208);
                                            }
#line 5417 "term_io.c"
                                            mercury__term_io__TypeClassInfo_for_writer_231 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 40 "stream.string_writer.opt"
                                            mercury__term_io__succeeded = (mercury__term_io__OpPriority_210 > mercury__term_io__Priority_3);
#line 43 "stream.string_writer.opt"
                                            if (mercury__term_io__succeeded)
#line 5423 "term_io.c"
                                              {
#line 5425 "term_io.c"
                                                void MR_CALL (* mercury__term_io__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_231, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5427 "term_io.c"
                                                MR_Box mercury__term_io__conv13_STATE_VARIABLE_IO_171_171;

#line 5430 "term_io.c"
                                                {
#line 5432 "term_io.c"
                                                  mercury__term_io__func_12(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_231), ((MR_Box) (mercury__term_io__Stream_208)), ((MR_Box) (MR_Word) ((MR_Char) 40)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv13_STATE_VARIABLE_IO_171_171);
                                                }
#line 5435 "term_io.c"
                                              }
#line 43 "stream.string_writer.opt"
                                            else
#line 44 "stream.string_writer.opt"
                                              {
#line 44 "stream.string_writer.opt"
                                              }
#line 455 "term_io.m"
                                            {
#line 455 "term_io.m"
                                              mercury__term_io__write_constant_3_p_0(mercury__term_io__Functor_27);
                                            }
#line 456 "term_io.m"
                                            {
#line 456 "term_io.m"
                                              mercury__io__write_char_3_p_0((MR_Char) 32);
                                            }
#line 40 "ops.opt"
#line 40 "ops.opt"
                                            switch (mercury__term_io__FirstAssoc_57) {
#line 40 "ops.opt"
                                              default: /*NOTREACHED*/ MR_assert(0);
#line 40 "ops.opt"
                                              case (MR_Integer) 0:
#line 41 "ops.opt"
                                                {
#line 42 "ops.opt"
                                                  mercury__term_io__FirstPriority_59 = (mercury__term_io__OpPriority_210 - (MR_Integer) 1);
#line 41 "ops.opt"
                                                }
#line 40 "ops.opt"
                                                break;
#line 40 "ops.opt"
                                              case (MR_Integer) 1:
#line 40 "ops.opt"
                                                mercury__term_io__FirstPriority_59 = mercury__term_io__OpPriority_210;
#line 40 "ops.opt"
                                                break;
#line 40 "ops.opt"
                                            }
#line 458 "term_io.m"
                                            {
#line 458 "term_io.m"
                                              mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Arg1_212, mercury__term_io__FirstPriority_59, mercury__term_io__STATE_VARIABLE_VarSet_0_4, &mercury__term_io__STATE_VARIABLE_VarSet_175_175, mercury__term_io__STATE_VARIABLE_N_0_6, &mercury__term_io__STATE_VARIABLE_N_176_176);
                                            }
#line 459 "term_io.m"
                                            {
#line 459 "term_io.m"
                                              mercury__io__write_char_3_p_0((MR_Char) 32);
                                            }
#line 40 "ops.opt"
#line 40 "ops.opt"
                                            switch (mercury__term_io__SecondAssoc_58) {
#line 40 "ops.opt"
                                              default: /*NOTREACHED*/ MR_assert(0);
#line 40 "ops.opt"
                                              case (MR_Integer) 0:
#line 41 "ops.opt"
                                                {
#line 42 "ops.opt"
                                                  mercury__term_io__SecondPriority_60 = (mercury__term_io__OpPriority_210 - (MR_Integer) 1);
#line 41 "ops.opt"
                                                }
#line 40 "ops.opt"
                                                break;
#line 40 "ops.opt"
                                              case (MR_Integer) 1:
#line 40 "ops.opt"
                                                mercury__term_io__SecondPriority_60 = mercury__term_io__OpPriority_210;
#line 40 "ops.opt"
                                                break;
#line 40 "ops.opt"
                                            }
#line 461 "term_io.m"
                                            {
#line 461 "term_io.m"
                                              mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Arg2_213, mercury__term_io__SecondPriority_60, mercury__term_io__STATE_VARIABLE_VarSet_175_175, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_176_176, mercury__term_io__STATE_VARIABLE_N_7);
                                            }
#line 40 "stream.string_writer.opt"
                                            mercury__term_io__succeeded = (mercury__term_io__OpPriority_210 > mercury__term_io__Priority_3);
#line 43 "stream.string_writer.opt"
                                            if (mercury__term_io__succeeded)
#line 5518 "term_io.c"
                                              {
#line 5520 "term_io.c"
                                                void MR_CALL (* mercury__term_io__func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_231, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5522 "term_io.c"
                                                MR_Box mercury__term_io__conv15_STATE_VARIABLE_IO_9;

#line 5525 "term_io.c"
                                                {
#line 5527 "term_io.c"
                                                  mercury__term_io__func_14(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_231), ((MR_Box) (mercury__term_io__Stream_208)), ((MR_Box) (MR_Word) ((MR_Char) 41)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv15_STATE_VARIABLE_IO_9);
                                                }
#line 5530 "term_io.c"
                                              }
#line 43 "stream.string_writer.opt"
                                            else
#line 44 "stream.string_writer.opt"
                                              {
#line 44 "stream.string_writer.opt"
                                              }
#line 453 "term_io.m"
                                          }
#line 463 "term_io.m"
                                        else
#line 476 "term_io.m"
                                          {
#line 465 "term_io.m"
                                            MR_String mercury__term_io__Op_61;
#line 465 "term_io.m"
                                            MR_Integer mercury__term_io__V_185_185;

#line 465 "term_io.m"
                                            mercury__term_io__succeeded = (mercury__term_io__Args_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 465 "term_io.m"
                                            if (mercury__term_io__succeeded)
#line 465 "term_io.m"
                                              {
#line 466 "term_io.m"
                                                mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Functor_27)) == (MR_mktag((MR_Integer) 0)));
#line 466 "term_io.m"
                                                if (mercury__term_io__succeeded)
#line 466 "term_io.m"
                                                  {
#line 466 "term_io.m"
                                                    mercury__term_io__Op_61 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_io__Functor_27, (MR_Integer) 0)));
#line 467 "term_io.m"
                                                    {
#line 467 "term_io.m"
                                                      mercury__term_io__succeeded = mercury__ops__lookup_op_2_p_0(mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Op_61);
                                                    }
#line 465 "term_io.m"
                                                    if (mercury__term_io__succeeded)
#line 465 "term_io.m"
                                                      {
#line 468 "term_io.m"
                                                        {
#line 468 "term_io.m"
                                                          mercury__term_io__V_185_185 = mercury__ops__max_priority_1_f_0(mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1);
                                                        }
#line 468 "term_io.m"
                                                        mercury__term_io__succeeded = (mercury__term_io__Priority_3 <= mercury__term_io__V_185_185);
#line 465 "term_io.m"
                                                      }
#line 466 "term_io.m"
                                                  }
#line 465 "term_io.m"
                                              }
#line 473 "term_io.m"
                                            if (mercury__term_io__succeeded)
#line 470 "term_io.m"
                                              {
#line 470 "term_io.m"
                                                {
#line 470 "term_io.m"
                                                  mercury__io__write_char_3_p_0((MR_Char) 40);
                                                }
#line 471 "term_io.m"
                                                {
#line 471 "term_io.m"
                                                  mercury__term_io__write_constant_3_p_0(mercury__term_io__Functor_27);
                                                }
#line 472 "term_io.m"
                                                {
#line 472 "term_io.m"
                                                  mercury__io__write_char_3_p_0((MR_Char) 41);
                                                }
#line 470 "term_io.m"
                                              }
#line 473 "term_io.m"
                                            else
#line 474 "term_io.m"
                                              {
#line 474 "term_io.m"
                                                {
#line 474 "term_io.m"
                                                  mercury__term_io__write_constant_4_p_0(mercury__term_io__Functor_27, (MR_Integer) 0);
                                                }
#line 474 "term_io.m"
                                              }
#line 483 "term_io.m"
                                            if ((mercury__term_io__Args_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "term_io.m"
                                              {
#line 484 "term_io.m"
                                                *mercury__term_io__STATE_VARIABLE_VarSet_5 = mercury__term_io__STATE_VARIABLE_VarSet_0_4;
#line 484 "term_io.m"
                                                *mercury__term_io__STATE_VARIABLE_N_7 = mercury__term_io__STATE_VARIABLE_N_0_6;
#line 484 "term_io.m"
                                              }
#line 483 "term_io.m"
                                            else
#line 478 "term_io.m"
                                              {
#line 478 "term_io.m"
                                                MR_Word mercury__term_io__X_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 0)));
#line 478 "term_io.m"
                                                MR_Word mercury__term_io__Xs_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Args_28, (MR_Integer) 1)));
#line 478 "term_io.m"
                                                MR_Word mercury__term_io__STATE_VARIABLE_VarSet_195_195;
#line 478 "term_io.m"
                                                MR_Integer mercury__term_io__STATE_VARIABLE_N_196_196;

#line 479 "term_io.m"
                                                {
#line 479 "term_io.m"
                                                  mercury__io__write_char_3_p_0((MR_Char) 40);
                                                }
#line 480 "term_io.m"
                                                {
#line 480 "term_io.m"
                                                  mercury__term_io__write_arg_term_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__X_62, mercury__term_io__STATE_VARIABLE_VarSet_0_4, &mercury__term_io__STATE_VARIABLE_VarSet_195_195, mercury__term_io__STATE_VARIABLE_N_0_6, &mercury__term_io__STATE_VARIABLE_N_196_196);
                                                }
#line 481 "term_io.m"
                                                {
#line 481 "term_io.m"
                                                  mercury__term_io__write_term_args_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Xs_63, mercury__term_io__STATE_VARIABLE_VarSet_195_195, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_196_196, mercury__term_io__STATE_VARIABLE_N_7);
                                                }
#line 482 "term_io.m"
                                                {
#line 482 "term_io.m"
                                                  mercury__io__write_char_3_p_0((MR_Char) 41);
#line 482 "term_io.m"
                                                  return;
                                                }
#line 478 "term_io.m"
                                              }
#line 476 "term_io.m"
                                          }
#line 463 "term_io.m"
                                      }
#line 447 "term_io.m"
                                  }
#line 417 "term_io.m"
                              }
#line 405 "term_io.m"
                          }
#line 393 "term_io.m"
                      }
#line 381 "term_io.m"
                  }
#line 373 "term_io.m"
              }
#line 366 "term_io.m"
          }
#line 352 "term_io.m"
      }
#line 349 "term_io.m"
    else
#line 349 "term_io.m"
      {
#line 349 "term_io.m"
        MR_Word mercury__term_io__Id_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 0)));
#line 349 "term_io.m"
        MR_Word mercury__term_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__HeadVar__2_2, (MR_Integer) 1)));

#line 350 "term_io.m"
        {
#line 350 "term_io.m"
          mercury__term_io__write_variable_2_8_p_0(mercury__term_io__TypeInfo_for_T_223, mercury__term_io__TypeClassInfo_for_op_table_222, mercury__term_io__Ops_1, mercury__term_io__Id_11, mercury__term_io__STATE_VARIABLE_VarSet_0_4, mercury__term_io__STATE_VARIABLE_VarSet_5, mercury__term_io__STATE_VARIABLE_N_0_6, mercury__term_io__STATE_VARIABLE_N_7);
#line 350 "term_io.m"
          return;
        }
#line 349 "term_io.m"
      }
#line 349 "term_io.m"
  }
#line 345 "term_io.m"
}

#line 337 "term_io.m"
static void MR_CALL 
mercury__term_io__write_arg_term_8_p_0(
#line 337 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_25,
#line 337 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_24,
#line 337 "term_io.m"
  MR_Box mercury__term_io__Ops_9,
#line 337 "term_io.m"
  MR_Word mercury__term_io__Term_10,
#line 337 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_14,
#line 337 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_15,
#line 337 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_16,
#line 337 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_17)
#line 337 "term_io.m"
{
#line 341 "term_io.m"
  {
#line 341 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 341 "term_io.m"
    MR_Integer mercury__term_io__V_20_20;
#line 5734 "term_io.c"
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 13)));
#line 5736 "term_io.c"
    MR_Box mercury__term_io__conv1_V_20_20;

#line 5739 "term_io.c"
    {
#line 5741 "term_io.c"
      mercury__term_io__conv1_V_20_20 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_24), mercury__term_io__Ops_9);
    }
#line 5744 "term_io.c"
    mercury__term_io__V_20_20 = ((MR_Integer) mercury__term_io__conv1_V_20_20);
#line 342 "term_io.m"
    {
#line 342 "term_io.m"
      mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_25, mercury__term_io__TypeClassInfo_for_op_table_24, mercury__term_io__Ops_9, mercury__term_io__Term_10, mercury__term_io__V_20_20, mercury__term_io__STATE_VARIABLE_VarSet_0_14, mercury__term_io__STATE_VARIABLE_VarSet_15, mercury__term_io__STATE_VARIABLE_N_0_16, mercury__term_io__STATE_VARIABLE_N_17);
#line 342 "term_io.m"
      return;
    }
#line 341 "term_io.m"
  }
#line 337 "term_io.m"
}

#line 329 "term_io.m"
void MR_CALL 
mercury__term_io__write_term_2_8_p_0(
#line 329 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_27,
#line 329 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_26,
#line 329 "term_io.m"
  MR_Box mercury__term_io__Ops_9,
#line 329 "term_io.m"
  MR_Word mercury__term_io__Term_10,
#line 329 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_14,
#line 329 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_15,
#line 329 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_16,
#line 329 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_17)
#line 329 "term_io.m"
{
#line 333 "term_io.m"
  {
#line 333 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 333 "term_io.m"
    MR_Integer mercury__term_io__V_20_20;
#line 333 "term_io.m"
    MR_Integer mercury__term_io__V_24_24;
#line 5787 "term_io.c"
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 5789 "term_io.c"
    MR_Box mercury__term_io__conv1_V_24_24;

#line 5792 "term_io.c"
    {
#line 5794 "term_io.c"
      mercury__term_io__conv1_V_24_24 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_26), mercury__term_io__Ops_9);
    }
#line 5797 "term_io.c"
    mercury__term_io__V_24_24 = ((MR_Integer) mercury__term_io__conv1_V_24_24);
#line 334 "term_io.m"
    mercury__term_io__V_20_20 = (mercury__term_io__V_24_24 + (MR_Integer) 1);
#line 334 "term_io.m"
    {
#line 334 "term_io.m"
      mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_27, mercury__term_io__TypeClassInfo_for_op_table_26, mercury__term_io__Ops_9, mercury__term_io__Term_10, mercury__term_io__V_20_20, mercury__term_io__STATE_VARIABLE_VarSet_0_14, mercury__term_io__STATE_VARIABLE_VarSet_15, mercury__term_io__STATE_VARIABLE_N_0_16, mercury__term_io__STATE_VARIABLE_N_17);
#line 334 "term_io.m"
      return;
    }
#line 333 "term_io.m"
  }
#line 329 "term_io.m"
}

#line 300 "term_io.m"
void MR_CALL 
mercury__term_io__write_variable_2_8_p_0(
#line 300 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_35,
#line 300 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_34,
#line 300 "term_io.m"
  MR_Box mercury__term_io__Ops_9,
#line 300 "term_io.m"
  MR_Word mercury__term_io__Id_10,
#line 300 "term_io.m"
  MR_Word mercury__term_io__STATE_VARIABLE_VarSet_0_19,
#line 300 "term_io.m"
  MR_Word * mercury__term_io__STATE_VARIABLE_VarSet_20,
#line 300 "term_io.m"
  MR_Integer mercury__term_io__STATE_VARIABLE_N_0_21,
#line 300 "term_io.m"
  MR_Integer * mercury__term_io__STATE_VARIABLE_N_22)
#line 300 "term_io.m"
{
#line 307 "term_io.m"
  {
#line 307 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 307 "term_io.m"
    MR_Word mercury__term_io__Val_14;
#line 140 "varset.opt"
    MR_Word mercury__term_io__TypeCtorInfo_12_43 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 140 "varset.opt"
    MR_Word mercury__term_io__TypeInfo_13_44;
#line 140 "varset.opt"
    MR_Word mercury__term_io__TypeCtorInfo_14_45 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 140 "varset.opt"
    MR_Word mercury__term_io__TypeInfo_15_46;
#line 140 "varset.opt"
    MR_Word mercury__term_io__V_7_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_19, (MR_Integer) 2)));
#line 141 "varset.opt"
    MR_Word mercury__term_io__V_8_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_19, (MR_Integer) 0)));
#line 141 "varset.opt"
    MR_Word mercury__term_io__V_9_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_19, (MR_Integer) 1)));
#line 452 "map.opt"
    MR_Box mercury__term_io__conv0_Val_14;

#line 5857 "term_io.c"
    {
#line 5859 "term_io.c"
      mercury__term_io__TypeInfo_13_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5861 "term_io.c"
      MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_44, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_12_43));
#line 5863 "term_io.c"
      MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_44, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_35));
#line 5865 "term_io.c"
    }
#line 5867 "term_io.c"
    {
#line 5869 "term_io.c"
      mercury__term_io__TypeInfo_15_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5871 "term_io.c"
      MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_15_46, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_14_45));
#line 5873 "term_io.c"
      MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_15_46, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_35));
#line 5875 "term_io.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__term_io__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term_io__TypeInfo_for_T_35, mercury__term_io__TypeInfo_13_44, mercury__term_io__TypeInfo_15_46, mercury__term_io__V_7_41, mercury__term_io__Id_10, &mercury__term_io__conv0_Val_14);
    }
#line 452 "map.opt"
    if (mercury__term_io__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__term_io__Val_14 = ((MR_Word) mercury__term_io__conv0_Val_14);
#line 452 "map.opt"
        mercury__term_io__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 307 "term_io.m"
    if (mercury__term_io__succeeded)
#line 306 "term_io.m"
      {
#line 306 "term_io.m"
        mercury__term_io__write_term_2_8_p_0(mercury__term_io__TypeInfo_for_T_35, mercury__term_io__TypeClassInfo_for_op_table_34, mercury__term_io__Ops_9, mercury__term_io__Val_14, mercury__term_io__STATE_VARIABLE_VarSet_0_19, mercury__term_io__STATE_VARIABLE_VarSet_20, mercury__term_io__STATE_VARIABLE_N_0_21, mercury__term_io__STATE_VARIABLE_N_22);
#line 306 "term_io.m"
        return;
      }
#line 307 "term_io.m"
    else
#line 309 "term_io.m"
      {
#line 309 "term_io.m"
        MR_String mercury__term_io__Name_15;
#line 136 "varset.opt"
        MR_Word mercury__term_io__TypeCtorInfo_12_58 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 136 "varset.opt"
        MR_Word mercury__term_io__TypeInfo_13_59;
#line 136 "varset.opt"
        MR_Word mercury__term_io__TypeCtorInfo_14_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 136 "varset.opt"
        MR_Word mercury__term_io__V_8_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_19, (MR_Integer) 1)));
#line 137 "varset.opt"
        MR_Word mercury__term_io__V_7_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_19, (MR_Integer) 0)));
#line 137 "varset.opt"
        MR_Word mercury__term_io__V_9_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_io__STATE_VARIABLE_VarSet_0_19, (MR_Integer) 2)));
#line 452 "map.opt"
        MR_Box mercury__term_io__conv1_Name_15;

#line 5922 "term_io.c"
        {
#line 5924 "term_io.c"
          mercury__term_io__TypeInfo_13_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5926 "term_io.c"
          MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_59, 0) = ((MR_Box) (mercury__term_io__TypeCtorInfo_12_58));
#line 5928 "term_io.c"
          MR_hl_field(MR_mktag(0), mercury__term_io__TypeInfo_13_59, 1) = ((MR_Box) (mercury__term_io__TypeInfo_for_T_35));
#line 5930 "term_io.c"
        }
#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__term_io__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term_io__TypeInfo_for_T_35, mercury__term_io__TypeInfo_13_59, mercury__term_io__TypeCtorInfo_14_60, mercury__term_io__V_8_55, mercury__term_io__Id_10, &mercury__term_io__conv1_Name_15);
        }
#line 452 "map.opt"
        if (mercury__term_io__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__term_io__Name_15 = ((MR_String) mercury__term_io__conv1_Name_15);
#line 452 "map.opt"
            mercury__term_io__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 309 "term_io.m"
        if (mercury__term_io__succeeded)
#line 308 "term_io.m"
          {
#line 1585 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_variable_2_8_p_0

	MR_String Message;

	Message =  mercury__term_io__Name_15 ;
		{
#line 1585 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 5963 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 1585 "io.opt"
}
#line 308 "term_io.m"
            *mercury__term_io__STATE_VARIABLE_N_22 = mercury__term_io__STATE_VARIABLE_N_0_21;
#line 308 "term_io.m"
            *mercury__term_io__STATE_VARIABLE_VarSet_20 = mercury__term_io__STATE_VARIABLE_VarSet_0_19;
#line 308 "term_io.m"
          }
#line 309 "term_io.m"
        else
#line 312 "term_io.m"
          {
#line 312 "term_io.m"
            MR_Integer mercury__term_io__VarNum_16 = (MR_Integer) mercury__term_io__Id_10;
#line 312 "term_io.m"
            MR_String mercury__term_io__Num_17;
#line 312 "term_io.m"
            MR_String mercury__term_io__VarName_18;

#line 554 "string.opt"
            {
#line 554 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__term_io__VarNum_16, (MR_Integer) 10, &mercury__term_io__Num_17);
            }
#line 314 "term_io.m"
            {
#line 314 "term_io.m"
              mercury__string__append_3_p_2((MR_String) "_", mercury__term_io__Num_17, &mercury__term_io__VarName_18);
            }
#line 315 "term_io.m"
            {
#line 315 "term_io.m"
              mercury__varset__name_var_4_p_0(mercury__term_io__TypeInfo_for_T_35, mercury__term_io__Id_10, mercury__term_io__VarName_18, mercury__term_io__STATE_VARIABLE_VarSet_0_19, mercury__term_io__STATE_VARIABLE_VarSet_20);
            }
#line 316 "term_io.m"
            *mercury__term_io__STATE_VARIABLE_N_22 = (mercury__term_io__STATE_VARIABLE_N_0_21 + (MR_Integer) 1);
#line 1585 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_variable_2_8_p_0

	MR_String Message;

	Message =  mercury__term_io__VarName_18 ;
		{
#line 1585 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 6015 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 1585 "io.opt"
}
#line 312 "term_io.m"
          }
#line 309 "term_io.m"
      }
#line 307 "term_io.m"
  }
#line 300 "term_io.m"
}

#line 232 "term_io.m"
MR_String MR_CALL 
mercury__term_io__quoted_atom_agt_2_f_0(
#line 232 "term_io.m"
  MR_String mercury__term_io__S_4,
#line 232 "term_io.m"
  MR_Word mercury__term_io__NextToGraphicToken_5)
#line 232 "term_io.m"
{
#line 633 "term_io.m"
  {
#line 633 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 633 "term_io.m"
    MR_String mercury__term_io__String_6;
#line 633 "term_io.m"
    MR_Word mercury__term_io__ShouldQuote_7;

#line 654 "term_io.m"
    {
#line 654 "term_io.m"
      MR_Integer mercury__term_io__lo_0;
#line 654 "term_io.m"
      MR_Integer mercury__term_io__hi_1;
#line 654 "term_io.m"
      MR_Integer mercury__term_io__mid_2;
#line 654 "term_io.m"
      MR_Integer mercury__term_io__result_3;

#line 654 "term_io.m"
      /* binary string simple lookup switch */
#line 654 "term_io.m"
      mercury__term_io__lo_0 = (MR_Integer) 0;
#line 654 "term_io.m"
      mercury__term_io__hi_1 = (MR_Integer) 3;
#line 654 "term_io.m"
      do
#line 654 "term_io.m"
        {
#line 654 "term_io.m"
          mercury__term_io__mid_2 = (((mercury__term_io__lo_0 + mercury__term_io__hi_1)) / (MR_Integer) 2);
#line 654 "term_io.m"
          mercury__term_io__result_3 = MR_strcmp(mercury__term_io__S_4, ((&mercury__term_io_vector_common_8[8 + mercury__term_io__mid_2]))->mercury__term_io__vector_common_type_8_0__vct_8_f_0);
#line 654 "term_io.m"
          if ((mercury__term_io__result_3 == (MR_Integer) 0))
#line 654 "term_io.m"
            {
#line 654 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 654 "term_io.m"
              /* jump out of search loop */
#line 654 "term_io.m"
              goto label_0;
#line 654 "term_io.m"
            }
#line 654 "term_io.m"
          else
#line 654 "term_io.m"
          if ((mercury__term_io__result_3 < (MR_Integer) 0))
#line 654 "term_io.m"
            mercury__term_io__hi_1 = (mercury__term_io__mid_2 - (MR_Integer) 1);
#line 654 "term_io.m"
          else
#line 654 "term_io.m"
            mercury__term_io__lo_0 = (mercury__term_io__mid_2 + (MR_Integer) 1);
#line 654 "term_io.m"
        }
#line 654 "term_io.m"
      while ((mercury__term_io__lo_0 <= mercury__term_io__hi_1));
#line 654 "term_io.m"
      mercury__term_io__succeeded = MR_FALSE;
#line 654 "term_io.m"
    label_0:;
#line 654 "term_io.m"
    }
#line 654 "term_io.m"
    if (!(mercury__term_io__succeeded))
#line 654 "term_io.m"
      {
#line 662 "term_io.m"
        {
#line 667 "term_io.m"
          MR_Integer mercury__term_io__V_20_20;
#line 667 "term_io.m"
          MR_Char mercury__term_io__V_21_21;
#line 667 "term_io.m"
          MR_Char mercury__term_io__V_24_24;
#line 667 "term_io.m"
          MR_Integer mercury__term_io__V_7_32;

#line 146 "string.opt"
          {
#line 146 "string.opt"
            mercury__term_io__succeeded = mercury__term_io__all_match_loop__ho22_3_p_in__string_0(mercury__term_io__S_4, (MR_Integer) 0);
          }
#line 662 "term_io.m"
          if (mercury__term_io__succeeded)
#line 662 "term_io.m"
            {
#line 663 "term_io.m"
              mercury__term_io__succeeded = (strcmp(mercury__term_io__S_4, (MR_String) "") == 0);
#line 663 "term_io.m"
              mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 662 "term_io.m"
              if (mercury__term_io__succeeded)
#line 662 "term_io.m"
                {
#line 667 "term_io.m"
                  mercury__term_io__V_20_20 = (MR_Integer) 0;
#line 667 "term_io.m"
                  mercury__term_io__V_21_21 = (MR_Char) 35;
#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_4 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 6154 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_7_32  = Length;
#line 703 "string.opt"
}
#line 527 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__term_io__V_20_20 ;
	Length =  mercury__term_io__V_7_32 ;
		{
#line 527 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 6183 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 527 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 667 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 667 "term_io.m"
                    {
#line 522 "string.opt"
                      {
#line 522 "string.opt"
                        mercury__string__unsafe_index_3_p_0(mercury__term_io__S_4, mercury__term_io__V_20_20, &mercury__term_io__V_24_24);
                      }
#line 667 "term_io.m"
                      mercury__term_io__succeeded = (mercury__term_io__V_21_21 == mercury__term_io__V_24_24);
#line 667 "term_io.m"
                    }
#line 667 "term_io.m"
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 662 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 674 "term_io.m"
                    mercury__term_io__succeeded = (mercury__term_io__NextToGraphicToken_5 == (MR_Integer) 1);
#line 662 "term_io.m"
                }
#line 662 "term_io.m"
            }
#line 662 "term_io.m"
        }
#line 654 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 651 "term_io.m"
          {
#line 651 "term_io.m"
            MR_Char mercury__term_io__FirstChar_18;
#line 651 "term_io.m"
            MR_Integer mercury__term_io__V_7_38;
#line 81 "char.opt"
            MR_Char mercury__term_io__V_3_42;

#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_4 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 6241 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_7_38  = Length;
#line 703 "string.opt"
}
#line 527 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__term_io__V_7_38 ;
		{
#line 527 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 6270 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 527 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 651 "term_io.m"
            if (mercury__term_io__succeeded)
#line 651 "term_io.m"
              {
#line 522 "string.opt"
                {
#line 522 "string.opt"
                  mercury__string__unsafe_index_3_p_0(mercury__term_io__S_4, (MR_Integer) 0, &mercury__term_io__FirstChar_18);
                }
#line 81 "char.opt"
                {
#line 81 "char.opt"
                  mercury__term_io__succeeded = mercury__char__lower_upper_2_p_0(mercury__term_io__FirstChar_18, &mercury__term_io__V_3_42);
                }
#line 651 "term_io.m"
                if (mercury__term_io__succeeded)
#line 651 "term_io.m"
                  {
#line 573 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quoted_atom_agt_2_f_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_io__S_4 ;
		{
#line 573 "string.opt"

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

#line 6339 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 573 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 651 "term_io.m"
                  }
#line 651 "term_io.m"
              }
#line 651 "term_io.m"
          }
#line 654 "term_io.m"
      }
#line 684 "term_io.m"
    if (mercury__term_io__succeeded)
#line 683 "term_io.m"
      mercury__term_io__ShouldQuote_7 = (MR_Integer) 0;
#line 684 "term_io.m"
    else
#line 686 "term_io.m"
      mercury__term_io__ShouldQuote_7 = (MR_Integer) 1;
#line 638 "term_io.m"
#line 638 "term_io.m"
    switch (mercury__term_io__ShouldQuote_7) {
#line 638 "term_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 638 "term_io.m"
      case (MR_Integer) 0:
#line 637 "term_io.m"
        mercury__term_io__String_6 = mercury__term_io__S_4;
#line 638 "term_io.m"
        break;
#line 638 "term_io.m"
      case (MR_Integer) 1:
#line 639 "term_io.m"
        {
#line 639 "term_io.m"
          MR_String mercury__term_io__ES_8;
#line 639 "term_io.m"
          MR_Word mercury__term_io__V_9_9;
#line 639 "term_io.m"
          MR_Word mercury__term_io__V_11_11;
#line 639 "term_io.m"
          MR_Word mercury__term_io__V_12_12;
#line 639 "term_io.m"
          MR_Word mercury__term_io__V_14_14;

#line 640 "term_io.m"
          {
#line 640 "term_io.m"
            mercury__term_io__ES_8 = mercury__term_io__escaped_string_1_f_0(mercury__term_io__S_4);
          }
#line 641 "term_io.m"
          mercury__term_io__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 641 "term_io.m"
          mercury__term_io__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_io_scalar_common_1[3]);
#line 641 "term_io.m"
          {
#line 641 "term_io.m"
            mercury__term_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "term_io.m"
            MR_hl_field(MR_mktag(1), mercury__term_io__V_11_11, 0) = ((MR_Box) (mercury__term_io__ES_8));
#line 641 "term_io.m"
            MR_hl_field(MR_mktag(1), mercury__term_io__V_11_11, 1) = ((MR_Box) (mercury__term_io__V_12_12));
#line 641 "term_io.m"
          }
#line 641 "term_io.m"
          {
#line 641 "term_io.m"
            mercury__term_io__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "term_io.m"
            MR_hl_field(MR_mktag(1), mercury__term_io__V_9_9, 0) = ((MR_Box) ((MR_String) "\'"));
#line 641 "term_io.m"
            MR_hl_field(MR_mktag(1), mercury__term_io__V_9_9, 1) = ((MR_Box) (mercury__term_io__V_11_11));
#line 641 "term_io.m"
          }
#line 641 "term_io.m"
          {
#line 641 "term_io.m"
            return mercury__term_io__String_6 = mercury__string__append_list_1_f_0(mercury__term_io__V_9_9);
          }
#line 639 "term_io.m"
        }
#line 638 "term_io.m"
        break;
#line 638 "term_io.m"
    }
#line 633 "term_io.m"
    return mercury__term_io__String_6;
#line 633 "term_io.m"
  }
#line 232 "term_io.m"
}

#line 227 "term_io.m"
void MR_CALL 
mercury__term_io__quote_atom_agt_5_p_0(
#line 227 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_19,
#line 227 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_20,
#line 227 "term_io.m"
  MR_Box mercury__term_io__Stream_6,
#line 227 "term_io.m"
  MR_String mercury__term_io__S_7,
#line 227 "term_io.m"
  MR_Word mercury__term_io__NextToGraphicToken_8,
#line 227 "term_io.m"
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_11,
#line 227 "term_io.m"
  MR_Box * mercury__term_io__STATE_VARIABLE_State_12)
#line 227 "term_io.m"
{
#line 621 "term_io.m"
  {
#line 621 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 621 "term_io.m"
    MR_Word mercury__term_io__ShouldQuote_10;

#line 654 "term_io.m"
    {
#line 654 "term_io.m"
      MR_Integer mercury__term_io__lo_0;
#line 654 "term_io.m"
      MR_Integer mercury__term_io__hi_1;
#line 654 "term_io.m"
      MR_Integer mercury__term_io__mid_2;
#line 654 "term_io.m"
      MR_Integer mercury__term_io__result_3;

#line 654 "term_io.m"
      /* binary string simple lookup switch */
#line 654 "term_io.m"
      mercury__term_io__lo_0 = (MR_Integer) 0;
#line 654 "term_io.m"
      mercury__term_io__hi_1 = (MR_Integer) 3;
#line 654 "term_io.m"
      do
#line 654 "term_io.m"
        {
#line 654 "term_io.m"
          mercury__term_io__mid_2 = (((mercury__term_io__lo_0 + mercury__term_io__hi_1)) / (MR_Integer) 2);
#line 654 "term_io.m"
          mercury__term_io__result_3 = MR_strcmp(mercury__term_io__S_7, ((&mercury__term_io_vector_common_8[4 + mercury__term_io__mid_2]))->mercury__term_io__vector_common_type_8_0__vct_8_f_0);
#line 654 "term_io.m"
          if ((mercury__term_io__result_3 == (MR_Integer) 0))
#line 654 "term_io.m"
            {
#line 654 "term_io.m"
              mercury__term_io__succeeded = MR_TRUE;
#line 654 "term_io.m"
              /* jump out of search loop */
#line 654 "term_io.m"
              goto label_0;
#line 654 "term_io.m"
            }
#line 654 "term_io.m"
          else
#line 654 "term_io.m"
          if ((mercury__term_io__result_3 < (MR_Integer) 0))
#line 654 "term_io.m"
            mercury__term_io__hi_1 = (mercury__term_io__mid_2 - (MR_Integer) 1);
#line 654 "term_io.m"
          else
#line 654 "term_io.m"
            mercury__term_io__lo_0 = (mercury__term_io__mid_2 + (MR_Integer) 1);
#line 654 "term_io.m"
        }
#line 654 "term_io.m"
      while ((mercury__term_io__lo_0 <= mercury__term_io__hi_1));
#line 654 "term_io.m"
      mercury__term_io__succeeded = MR_FALSE;
#line 654 "term_io.m"
    label_0:;
#line 654 "term_io.m"
    }
#line 654 "term_io.m"
    if (!(mercury__term_io__succeeded))
#line 654 "term_io.m"
      {
#line 662 "term_io.m"
        {
#line 667 "term_io.m"
          MR_Integer mercury__term_io__V_26_26;
#line 667 "term_io.m"
          MR_Char mercury__term_io__V_27_27;
#line 667 "term_io.m"
          MR_Char mercury__term_io__V_30_30;
#line 667 "term_io.m"
          MR_Integer mercury__term_io__V_7_38;

#line 146 "string.opt"
          {
#line 146 "string.opt"
            mercury__term_io__succeeded = mercury__term_io__all_match_loop__ho22_3_p_in__string_0(mercury__term_io__S_7, (MR_Integer) 0);
          }
#line 662 "term_io.m"
          if (mercury__term_io__succeeded)
#line 662 "term_io.m"
            {
#line 663 "term_io.m"
              mercury__term_io__succeeded = (strcmp(mercury__term_io__S_7, (MR_String) "") == 0);
#line 663 "term_io.m"
              mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 662 "term_io.m"
              if (mercury__term_io__succeeded)
#line 662 "term_io.m"
                {
#line 667 "term_io.m"
                  mercury__term_io__V_26_26 = (MR_Integer) 0;
#line 667 "term_io.m"
                  mercury__term_io__V_27_27 = (MR_Char) 35;
#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_7 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 6569 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_7_38  = Length;
#line 703 "string.opt"
}
#line 527 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__term_io__V_26_26 ;
	Length =  mercury__term_io__V_7_38 ;
		{
#line 527 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 6598 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 527 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 667 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 667 "term_io.m"
                    {
#line 522 "string.opt"
                      {
#line 522 "string.opt"
                        mercury__string__unsafe_index_3_p_0(mercury__term_io__S_7, mercury__term_io__V_26_26, &mercury__term_io__V_30_30);
                      }
#line 667 "term_io.m"
                      mercury__term_io__succeeded = (mercury__term_io__V_27_27 == mercury__term_io__V_30_30);
#line 667 "term_io.m"
                    }
#line 667 "term_io.m"
                  mercury__term_io__succeeded = !(mercury__term_io__succeeded);
#line 662 "term_io.m"
                  if (mercury__term_io__succeeded)
#line 674 "term_io.m"
                    mercury__term_io__succeeded = (mercury__term_io__NextToGraphicToken_8 == (MR_Integer) 1);
#line 662 "term_io.m"
                }
#line 662 "term_io.m"
            }
#line 662 "term_io.m"
        }
#line 654 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 651 "term_io.m"
          {
#line 651 "term_io.m"
            MR_Char mercury__term_io__FirstChar_24;
#line 651 "term_io.m"
            MR_Integer mercury__term_io__V_7_44;
#line 81 "char.opt"
            MR_Char mercury__term_io__V_3_48;

#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__S_7 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 6656 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_7_44  = Length;
#line 703 "string.opt"
}
#line 527 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__term_io__V_7_44 ;
		{
#line 527 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 6685 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 527 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 651 "term_io.m"
            if (mercury__term_io__succeeded)
#line 651 "term_io.m"
              {
#line 522 "string.opt"
                {
#line 522 "string.opt"
                  mercury__string__unsafe_index_3_p_0(mercury__term_io__S_7, (MR_Integer) 0, &mercury__term_io__FirstChar_24);
                }
#line 81 "char.opt"
                {
#line 81 "char.opt"
                  mercury__term_io__succeeded = mercury__char__lower_upper_2_p_0(mercury__term_io__FirstChar_24, &mercury__term_io__V_3_48);
                }
#line 651 "term_io.m"
                if (mercury__term_io__succeeded)
#line 651 "term_io.m"
                  {
#line 573 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_5_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__term_io__S_7 ;
		{
#line 573 "string.opt"

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

#line 6754 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 573 "string.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 651 "term_io.m"
                  }
#line 651 "term_io.m"
              }
#line 651 "term_io.m"
          }
#line 654 "term_io.m"
      }
#line 684 "term_io.m"
    if (mercury__term_io__succeeded)
#line 683 "term_io.m"
      mercury__term_io__ShouldQuote_10 = (MR_Integer) 0;
#line 684 "term_io.m"
    else
#line 686 "term_io.m"
      mercury__term_io__ShouldQuote_10 = (MR_Integer) 1;
#line 626 "term_io.m"
#line 626 "term_io.m"
    switch (mercury__term_io__ShouldQuote_10) {
#line 626 "term_io.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 626 "term_io.m"
      case (MR_Integer) 0:
#line 6786 "term_io.c"
        {
#line 6788 "term_io.c"
          void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_19, (MR_Integer) 0)), (MR_Integer) 5)));

#line 6791 "term_io.c"
          {
#line 6793 "term_io.c"
            mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_19), mercury__term_io__Stream_6, ((MR_Box) (mercury__term_io__S_7)), mercury__term_io__STATE_VARIABLE_State_0_11, mercury__term_io__STATE_VARIABLE_State_12);
#line 6795 "term_io.c"
            return;
          }
#line 6798 "term_io.c"
        }
#line 626 "term_io.m"
        break;
#line 626 "term_io.m"
      case (MR_Integer) 1:
#line 627 "term_io.m"
        {
#line 627 "term_io.m"
          MR_Box mercury__term_io__STATE_VARIABLE_State_14_14;
#line 627 "term_io.m"
          MR_Box mercury__term_io__STATE_VARIABLE_State_15_15;
#line 6810 "term_io.c"
          void MR_CALL (* mercury__term_io__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6812 "term_io.c"
          void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 6815 "term_io.c"
          {
#line 6817 "term_io.c"
            mercury__term_io__func_1(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_20), mercury__term_io__Stream_6, ((MR_Box) (MR_Word) ((MR_Char) 39)), mercury__term_io__STATE_VARIABLE_State_0_11, &mercury__term_io__STATE_VARIABLE_State_14_14);
          }
#line 629 "term_io.m"
          {
#line 629 "term_io.m"
            mercury__term_io__write_escaped_string_4_p_0(mercury__term_io__TypeClassInfo_for_writer_19, mercury__term_io__TypeClassInfo_for_writer_20, mercury__term_io__Stream_6, mercury__term_io__S_7, mercury__term_io__STATE_VARIABLE_State_14_14, &mercury__term_io__STATE_VARIABLE_State_15_15);
          }
#line 6825 "term_io.c"
          mercury__term_io__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6827 "term_io.c"
          {
#line 6829 "term_io.c"
            mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_20), mercury__term_io__Stream_6, ((MR_Box) (MR_Word) ((MR_Char) 39)), mercury__term_io__STATE_VARIABLE_State_15_15, mercury__term_io__STATE_VARIABLE_State_12);
#line 6831 "term_io.c"
            return;
          }
#line 627 "term_io.m"
        }
#line 626 "term_io.m"
        break;
#line 626 "term_io.m"
    }
#line 621 "term_io.m"
  }
#line 227 "term_io.m"
}

#line 224 "term_io.m"
void MR_CALL 
mercury__term_io__quote_atom_agt_4_p_0(
#line 224 "term_io.m"
  MR_String mercury__term_io__S_5,
#line 224 "term_io.m"
  MR_Word mercury__term_io__NextToGraphicToken_6)
#line 224 "term_io.m"
{
#line 617 "term_io.m"
  {
#line 617 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 617 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_13;
#line 617 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_14;
#line 617 "term_io.m"
    MR_Word mercury__term_io__Stream_8;
#line 617 "term_io.m"
    MR_Box mercury__term_io__V_4_17;

#line 990 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_agt_4_p_0

	MercuryFilePtr Stream;

		{
#line 990 "io.opt"

    Stream = mercury_current_text_output();

#line 6878 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_17  = (MR_Box) Stream;
#line 990 "io.opt"
}
#line 987 "io.opt"
    mercury__term_io__Stream_8 = (MR_Word) mercury__term_io__V_4_17;
#line 6887 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_13 = (MR_Word) &mercury__term_io_scalar_common_4[0];
#line 6889 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_14 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 619 "term_io.m"
    {
#line 619 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__TypeClassInfo_for_writer_14, mercury__term_io__Stream_8, mercury__term_io__S_5, mercury__term_io__NextToGraphicToken_6);
#line 619 "term_io.m"
      return;
    }
#line 617 "term_io.m"
  }
#line 224 "term_io.m"
}

#line 216 "term_io.m"
MR_bool MR_CALL 
mercury__term_io__encode_escaped_char_2_p_1(
#line 216 "term_io.m"
  MR_Char * mercury__term_io__Char_1,
#line 216 "term_io.m"
  MR_String mercury__term_io__Str_2)
#line 216 "term_io.m"
{
#line 850 "term_io.m"
  {
#line 850 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 850 "term_io.m"
    MR_Word mercury__term_io__Chars_14;
#line 850 "term_io.m"
    MR_Word mercury__term_io__V_20_20;
#line 850 "term_io.m"
    MR_Char mercury__term_io__V_21_21;

#line 851 "term_io.m"
    {
#line 851 "term_io.m"
      mercury__string__to_char_list_2_p_0(mercury__term_io__Str_2, &mercury__term_io__Chars_14);
    }
#line 853 "term_io.m"
    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Chars_14)) == (MR_mktag((MR_Integer) 1)));
#line 853 "term_io.m"
    if (mercury__term_io__succeeded)
#line 853 "term_io.m"
      {
#line 853 "term_io.m"
        mercury__term_io__V_21_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Chars_14, (MR_Integer) 0)));
#line 853 "term_io.m"
        mercury__term_io__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Chars_14, (MR_Integer) 1)));
#line 854 "term_io.m"
        if ((mercury__term_io__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 853 "term_io.m"
          {
#line 853 "term_io.m"
            *mercury__term_io__Char_1 = mercury__term_io__V_21_21;
#line 853 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 853 "term_io.m"
          }
#line 854 "term_io.m"
        else
#line 855 "term_io.m"
          {
#line 855 "term_io.m"
            MR_Char mercury__term_io__EscapedChar_15;
#line 855 "term_io.m"
            MR_Word mercury__term_io__V_18_18;

#line 855 "term_io.m"
            mercury__term_io__succeeded = (mercury__term_io__V_21_21 == (MR_Char) 92);
#line 855 "term_io.m"
            if (mercury__term_io__succeeded)
#line 855 "term_io.m"
              {
#line 855 "term_io.m"
                mercury__term_io__EscapedChar_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_20_20, (MR_Integer) 0)));
#line 855 "term_io.m"
                mercury__term_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_20_20, (MR_Integer) 1)));
#line 855 "term_io.m"
                mercury__term_io__succeeded = (mercury__term_io__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "term_io.m"
                if (mercury__term_io__succeeded)
#line 871 "term_io.m"
#line 871 "term_io.m"
                  switch (mercury__term_io__EscapedChar_15) {
#line 871 "term_io.m"
                    default:
#line 871 "term_io.m"
                      mercury__term_io__succeeded = MR_FALSE;
#line 871 "term_io.m"
                      break;
#line 871 "term_io.m"
                    case (MR_Char) 34:
#line 872 "term_io.m"
                      {
#line 872 "term_io.m"
                        *mercury__term_io__Char_1 = (MR_Char) 34;
#line 872 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 872 "term_io.m"
                      }
#line 871 "term_io.m"
                      break;
#line 871 "term_io.m"
                    case (MR_Char) 39:
#line 871 "term_io.m"
                      {
#line 871 "term_io.m"
                        *mercury__term_io__Char_1 = (MR_Char) 39;
#line 871 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 871 "term_io.m"
                      }
#line 871 "term_io.m"
                      break;
#line 871 "term_io.m"
                    case (MR_Char) 92:
#line 873 "term_io.m"
                      {
#line 873 "term_io.m"
                        *mercury__term_io__Char_1 = (MR_Char) 92;
#line 873 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 873 "term_io.m"
                      }
#line 871 "term_io.m"
                      break;
#line 871 "term_io.m"
                    case (MR_Char) 98:
#line 876 "term_io.m"
                      {
#line 876 "term_io.m"
                        *mercury__term_io__Char_1 = (MR_Char) 8;
#line 876 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 876 "term_io.m"
                      }
#line 871 "term_io.m"
                      break;
#line 871 "term_io.m"
                    case (MR_Char) 110:
#line 874 "term_io.m"
                      {
#line 874 "term_io.m"
                        *mercury__term_io__Char_1 = (MR_Char) 10;
#line 874 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 874 "term_io.m"
                      }
#line 871 "term_io.m"
                      break;
#line 871 "term_io.m"
                    case (MR_Char) 116:
#line 875 "term_io.m"
                      {
#line 875 "term_io.m"
                        *mercury__term_io__Char_1 = (MR_Char) 9;
#line 875 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 875 "term_io.m"
                      }
#line 871 "term_io.m"
                      break;
#line 871 "term_io.m"
                  }
#line 855 "term_io.m"
              }
#line 855 "term_io.m"
          }
#line 853 "term_io.m"
      }
#line 850 "term_io.m"
    return mercury__term_io__succeeded;
#line 850 "term_io.m"
  }
#line 216 "term_io.m"
}

#line 215 "term_io.m"
MR_bool MR_CALL 
mercury__term_io__encode_escaped_char_2_p_0(
#line 215 "term_io.m"
  MR_Char mercury__term_io__Char_1,
#line 215 "term_io.m"
  MR_String * mercury__term_io__Str_2)
#line 215 "term_io.m"
{
#line 845 "term_io.m"
  {
#line 845 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 845 "term_io.m"
    MR_Char mercury__term_io__EscapeChar_5;

#line 871 "term_io.m"
#line 871 "term_io.m"
    switch (mercury__term_io__Char_1) {
#line 871 "term_io.m"
      default:
#line 871 "term_io.m"
        mercury__term_io__succeeded = MR_FALSE;
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 8:
#line 876 "term_io.m"
        {
#line 876 "term_io.m"
          mercury__term_io__EscapeChar_5 = (MR_Char) 98;
#line 876 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 876 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 9:
#line 875 "term_io.m"
        {
#line 875 "term_io.m"
          mercury__term_io__EscapeChar_5 = (MR_Char) 116;
#line 875 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 875 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 10:
#line 874 "term_io.m"
        {
#line 874 "term_io.m"
          mercury__term_io__EscapeChar_5 = (MR_Char) 110;
#line 874 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 874 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 34:
#line 872 "term_io.m"
        {
#line 872 "term_io.m"
          mercury__term_io__EscapeChar_5 = (MR_Char) 34;
#line 872 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 872 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 39:
#line 871 "term_io.m"
        {
#line 871 "term_io.m"
          mercury__term_io__EscapeChar_5 = (MR_Char) 39;
#line 871 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 871 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 92:
#line 873 "term_io.m"
        {
#line 873 "term_io.m"
          mercury__term_io__EscapeChar_5 = (MR_Char) 92;
#line 873 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 873 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
    }
#line 845 "term_io.m"
    if (mercury__term_io__succeeded)
#line 844 "term_io.m"
      {
#line 844 "term_io.m"
        MR_Word mercury__term_io__V_6_6;
#line 844 "term_io.m"
        MR_Word mercury__term_io__V_8_8;
#line 844 "term_io.m"
        MR_Word mercury__term_io__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 844 "term_io.m"
        {
#line 844 "term_io.m"
          mercury__term_io__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_8_8, 0) = ((MR_Box) (MR_Word) (mercury__term_io__EscapeChar_5));
#line 844 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_8_8, 1) = ((MR_Box) (mercury__term_io__V_9_9));
#line 844 "term_io.m"
        }
#line 844 "term_io.m"
        {
#line 844 "term_io.m"
          mercury__term_io__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_6_6, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 844 "term_io.m"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_6_6, 1) = ((MR_Box) (mercury__term_io__V_8_8));
#line 844 "term_io.m"
        }
#line 844 "term_io.m"
        {
#line 844 "term_io.m"
          mercury__string__from_char_list_2_p_0(mercury__term_io__V_6_6, mercury__term_io__Str_2);
        }
#line 844 "term_io.m"
        mercury__term_io__succeeded = MR_TRUE;
#line 844 "term_io.m"
      }
#line 845 "term_io.m"
    else
#line 847 "term_io.m"
      {
#line 847 "term_io.m"
        MR_Word mercury__term_io__V_10_10;
#line 847 "term_io.m"
        MR_Word mercury__term_io__V_11_11;

#line 793 "term_io.m"
        {
#line 793 "term_io.m"
          mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(mercury__term_io__Char_1);
        }
#line 793 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 793 "term_io.m"
          {
#line 804 "term_io.m"
            if ((((MR_Unsigned) (mercury__term_io__Char_1 - (MR_Integer) 32)) <= ((MR_Unsigned) (MR_Integer) 94)))
#line 804 "term_io.m"
              if ((((mercury__term_io_scalar_common_6[0])[(((mercury__term_io__Char_1 - (MR_Integer) 32)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__term_io__Char_1 - (MR_Integer) 32)) & (MR_Integer) 31))))))
#line 804 "term_io.m"
                {
#line 804 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 804 "term_io.m"
                }
#line 804 "term_io.m"
              else
#line 804 "term_io.m"
                mercury__term_io__succeeded = MR_FALSE;
#line 804 "term_io.m"
            else
#line 804 "term_io.m"
              mercury__term_io__succeeded = MR_FALSE;
#line 793 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 795 "term_io.m"
              {
#line 795 "term_io.m"
                MR_Integer mercury__term_io__V_21_21;

#line 111 "char.opt"
{
#define MR_PROC_LABEL mercury__term_io__encode_escaped_char_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_1 ;
		{
#line 111 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 7262 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_21_21  = Int;
#line 111 "char.opt"
}
#line 795 "term_io.m"
                mercury__term_io__succeeded = (mercury__term_io__V_21_21 >= (MR_Integer) 128);
#line 795 "term_io.m"
              }
#line 793 "term_io.m"
          }
#line 847 "term_io.m"
        if (mercury__term_io__succeeded)
#line 847 "term_io.m"
          {
#line 846 "term_io.m"
            mercury__term_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 846 "term_io.m"
            {
#line 846 "term_io.m"
              mercury__term_io__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 846 "term_io.m"
              MR_hl_field(MR_mktag(1), mercury__term_io__V_10_10, 0) = ((MR_Box) (MR_Word) (mercury__term_io__Char_1));
#line 846 "term_io.m"
              MR_hl_field(MR_mktag(1), mercury__term_io__V_10_10, 1) = ((MR_Box) (mercury__term_io__V_11_11));
#line 846 "term_io.m"
            }
#line 846 "term_io.m"
            {
#line 846 "term_io.m"
              mercury__string__from_char_list_2_p_0(mercury__term_io__V_10_10, mercury__term_io__Str_2);
            }
#line 846 "term_io.m"
            mercury__term_io__succeeded = MR_TRUE;
#line 847 "term_io.m"
          }
#line 847 "term_io.m"
      }
#line 845 "term_io.m"
    return mercury__term_io__succeeded;
#line 845 "term_io.m"
  }
#line 215 "term_io.m"
}

#line 203 "term_io.m"
MR_bool MR_CALL 
mercury__term_io__is_mercury_punctuation_char_1_p_0(
#line 203 "term_io.m"
  MR_Char mercury__term_io__HeadVar__1_1)
#line 203 "term_io.m"
{
#line 804 "term_io.m"
  {
#line 804 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 804 "term_io.m"
    if ((((MR_Unsigned) (mercury__term_io__HeadVar__1_1 - (MR_Integer) 32)) <= ((MR_Unsigned) (MR_Integer) 94)))
#line 804 "term_io.m"
      if ((((mercury__term_io_scalar_common_6[0])[(((mercury__term_io__HeadVar__1_1 - (MR_Integer) 32)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__term_io__HeadVar__1_1 - (MR_Integer) 32)) & (MR_Integer) 31))))))
#line 804 "term_io.m"
        {
#line 804 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 804 "term_io.m"
        }
#line 804 "term_io.m"
      else
#line 804 "term_io.m"
        mercury__term_io__succeeded = MR_FALSE;
#line 804 "term_io.m"
    else
#line 804 "term_io.m"
      mercury__term_io__succeeded = MR_FALSE;
#line 804 "term_io.m"
    return mercury__term_io__succeeded;
#line 804 "term_io.m"
  }
#line 203 "term_io.m"
}

#line 199 "term_io.m"
MR_String MR_CALL 
mercury__term_io__mercury_escape_char_1_f_0(
#line 199 "term_io.m"
  MR_Char mercury__term_io__Char_3)
#line 199 "term_io.m"
{
#line 778 "term_io.m"
  {
#line 778 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 778 "term_io.m"
    MR_String mercury__term_io__EscapeCode_4;
#line 778 "term_io.m"
    MR_Integer mercury__term_io__Int_5;
#line 778 "term_io.m"
    MR_String mercury__term_io__OctalString0_6;
#line 778 "term_io.m"
    MR_String mercury__term_io__OctalString_7;
#line 778 "term_io.m"
    MR_String mercury__term_io__V_12_12;

#line 111 "char.opt"
{
#define MR_PROC_LABEL mercury__term_io__mercury_escape_char_1_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_3 ;
		{
#line 111 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 7381 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__Int_5  = Int;
#line 111 "char.opt"
}
#line 780 "term_io.m"
    {
#line 780 "term_io.m"
      mercury__string__int_to_base_string_3_p_0(mercury__term_io__Int_5, (MR_Integer) 8, &mercury__term_io__OctalString0_6);
    }
#line 781 "term_io.m"
    {
#line 781 "term_io.m"
      mercury__string__pad_left_4_p_0(mercury__term_io__OctalString0_6, (MR_Char) 48, (MR_Integer) 3, &mercury__term_io__OctalString_7);
    }
#line 159 "string.opt"
    {
#line 159 "string.opt"
      mercury__string__append_3_p_2(mercury__term_io__OctalString_7, (MR_String) "\\", &mercury__term_io__V_12_12);
    }
#line 159 "string.opt"
    {
#line 159 "string.opt"
      mercury__string__append_3_p_2((MR_String) "\\", mercury__term_io__V_12_12, &mercury__term_io__EscapeCode_4);
    }
#line 778 "term_io.m"
    return mercury__term_io__EscapeCode_4;
#line 778 "term_io.m"
  }
#line 199 "term_io.m"
}

#line 188 "term_io.m"
MR_String MR_CALL 
mercury__term_io__integer_base_prefix_1_f_0(
#line 188 "term_io.m"
  MR_Word mercury__term_io__HeadVar__1_1)
#line 188 "term_io.m"
{
#line 592 "term_io.m"
  {
#line 592 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 592 "term_io.m"
    MR_String mercury__term_io__HeadVar__2_2 = ((&mercury__term_io_vector_common_8[0 + mercury__term_io__HeadVar__1_1]))->mercury__term_io__vector_common_type_8_0__vct_8_f_0;

#line 592 "term_io.m"
    return mercury__term_io__HeadVar__2_2;
#line 592 "term_io.m"
  }
#line 188 "term_io.m"
}

#line 184 "term_io.m"
MR_Integer MR_CALL 
mercury__term_io__integer_base_int_1_f_0(
#line 184 "term_io.m"
  MR_Word mercury__term_io__HeadVar__1_1)
#line 184 "term_io.m"
{
#line 587 "term_io.m"
  {
#line 587 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 587 "term_io.m"
    MR_Integer mercury__term_io__HeadVar__2_2 = ((&mercury__term_io_vector_common_7[0 + mercury__term_io__HeadVar__1_1]))->mercury__term_io__vector_common_type_7_0__vct_7_f_0;

#line 587 "term_io.m"
    return mercury__term_io__HeadVar__2_2;
#line 587 "term_io.m"
  }
#line 184 "term_io.m"
}

#line 168 "term_io.m"
MR_String MR_CALL 
mercury__term_io__escaped_string_1_f_0(
#line 168 "term_io.m"
  MR_String mercury__term_io__String_3)
#line 168 "term_io.m"
{
#line 711 "term_io.m"
  {
#line 711 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 711 "term_io.m"
    MR_String mercury__term_io__HeadVar__2_2;
#line 711 "term_io.m"
    MR_Word mercury__term_io__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 711 "term_io.m"
    MR_Word mercury__term_io__V_4_4;
#line 711 "term_io.m"
    MR_Word mercury__term_io__V_5_5;
#line 711 "term_io.m"
    MR_Word mercury__term_io__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 711 "term_io.m"
    MR_Integer mercury__term_io__V_8_38;
#line 711 "term_io.m"
    MR_Integer mercury__term_io__V_13_52;
#line 711 "term_io.m"
    MR_Integer mercury__term_io__V_17_53;

#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__escaped_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_3 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 7498 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_8_38  = Length;
#line 703 "string.opt"
}
#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__escaped_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_3 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 7518 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_17_53  = Length;
#line 703 "string.opt"
}
#line 242 "int.opt"
    mercury__term_io__succeeded = (mercury__term_io__V_8_38 < mercury__term_io__V_17_53);
#line 245 "int.opt"
    if (mercury__term_io__succeeded)
#line 244 "int.opt"
      mercury__term_io__V_13_52 = mercury__term_io__V_8_38;
#line 245 "int.opt"
    else
#line 246 "int.opt"
      mercury__term_io__V_13_52 = mercury__term_io__V_17_53;
#line 399 "string.opt"
    {
#line 399 "string.opt"
      mercury__term_io__foldl_between_2__ho30_6_p_in__string_0(mercury__term_io__String_3, (MR_Integer) 0, mercury__term_io__V_13_52, mercury__term_io__V_7_7, &mercury__term_io__V_5_5);
    }
#line 1040 "list.opt"
    {
#line 1040 "list.opt"
      mercury__list__reverse_2_p_0(mercury__term_io__TypeCtorInfo_8_8, mercury__term_io__V_5_5, &mercury__term_io__V_4_4);
    }
#line 712 "term_io.m"
    {
#line 712 "term_io.m"
      return mercury__term_io__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__term_io__V_4_4);
    }
#line 711 "term_io.m"
    return mercury__term_io__HeadVar__2_2;
#line 711 "term_io.m"
  }
#line 168 "term_io.m"
}

#line 161 "term_io.m"
void MR_CALL 
mercury__term_io__write_escaped_string_4_p_0(
#line 161 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
#line 161 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_13,
#line 161 "term_io.m"
  MR_Box mercury__term_io__Stream_5,
#line 161 "term_io.m"
  MR_String mercury__term_io__String_6,
#line 161 "term_io.m"
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_8,
#line 161 "term_io.m"
  MR_Box * mercury__term_io__STATE_VARIABLE_State_9)
#line 161 "term_io.m"
{
#line 708 "term_io.m"
  {
#line 708 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 708 "term_io.m"
    MR_Integer mercury__term_io__V_8_23;
#line 708 "term_io.m"
    MR_Integer mercury__term_io__V_13_33;
#line 708 "term_io.m"
    MR_Integer mercury__term_io__V_17_34;

#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_6 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 7598 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_8_23  = Length;
#line 703 "string.opt"
}
#line 703 "string.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_escaped_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__term_io__String_6 ;
		{
#line 703 "string.opt"

    Length = strlen(Str);

#line 7618 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_17_34  = Length;
#line 703 "string.opt"
}
#line 242 "int.opt"
    mercury__term_io__succeeded = (mercury__term_io__V_8_23 < mercury__term_io__V_17_34);
#line 245 "int.opt"
    if (mercury__term_io__succeeded)
#line 244 "int.opt"
      mercury__term_io__V_13_33 = mercury__term_io__V_8_23;
#line 245 "int.opt"
    else
#line 246 "int.opt"
      mercury__term_io__V_13_33 = mercury__term_io__V_17_34;
#line 399 "string.opt"
    {
#line 399 "string.opt"
      mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_50_57_95_95_91_52_44_32_53_93_95_48_6_p_in__string_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__Stream_5, mercury__term_io__String_6, (MR_Integer) 0, mercury__term_io__V_13_33, mercury__term_io__STATE_VARIABLE_State_0_8, mercury__term_io__STATE_VARIABLE_State_9);
#line 399 "string.opt"
      return;
    }
#line 708 "term_io.m"
  }
#line 161 "term_io.m"
}

#line 159 "term_io.m"
void MR_CALL 
mercury__term_io__write_escaped_string_3_p_0(
#line 159 "term_io.m"
  MR_String mercury__term_io__String_4)
#line 159 "term_io.m"
{
#line 704 "term_io.m"
  {
#line 704 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 704 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_11;
#line 704 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_12;
#line 704 "term_io.m"
    MR_Word mercury__term_io__Stream_6;
#line 704 "term_io.m"
    MR_Box mercury__term_io__V_4_15;

#line 990 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_escaped_string_3_p_0

	MercuryFilePtr Stream;

		{
#line 990 "io.opt"

    Stream = mercury_current_text_output();

#line 7678 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_15  = (MR_Box) Stream;
#line 990 "io.opt"
}
#line 987 "io.opt"
    mercury__term_io__Stream_6 = (MR_Word) mercury__term_io__V_4_15;
#line 7687 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_11 = (MR_Word) &mercury__term_io_scalar_common_4[0];
#line 7689 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_12 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 706 "term_io.m"
    {
#line 706 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_11, mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__Stream_6, mercury__term_io__String_4);
#line 706 "term_io.m"
      return;
    }
#line 704 "term_io.m"
  }
#line 159 "term_io.m"
}

#line 154 "term_io.m"
MR_bool MR_CALL 
mercury__term_io__string_is_escaped_char_2_p_1(
#line 154 "term_io.m"
  MR_Char * mercury__term_io__Char_1,
#line 154 "term_io.m"
  MR_String mercury__term_io__String_2)
#line 154 "term_io.m"
{
#line 758 "term_io.m"
  {
#line 758 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 758 "term_io.m"
    MR_Word mercury__term_io__Chars_10;
#line 758 "term_io.m"
    MR_Word mercury__term_io__V_32_32;
#line 758 "term_io.m"
    MR_Char mercury__term_io__V_33_33;

#line 759 "term_io.m"
    {
#line 759 "term_io.m"
      mercury__string__to_char_list_2_p_0(mercury__term_io__String_2, &mercury__term_io__Chars_10);
    }
#line 761 "term_io.m"
    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__Chars_10)) == (MR_mktag((MR_Integer) 1)));
#line 761 "term_io.m"
    if (mercury__term_io__succeeded)
#line 761 "term_io.m"
      {
#line 761 "term_io.m"
        mercury__term_io__V_33_33 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Chars_10, (MR_Integer) 0)));
#line 761 "term_io.m"
        mercury__term_io__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__Chars_10, (MR_Integer) 1)));
#line 767 "term_io.m"
        if ((mercury__term_io__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 761 "term_io.m"
          {
#line 761 "term_io.m"
            *mercury__term_io__Char_1 = mercury__term_io__V_33_33;
#line 793 "term_io.m"
            {
#line 793 "term_io.m"
              mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(*mercury__term_io__Char_1);
            }
#line 793 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 793 "term_io.m"
              {
#line 804 "term_io.m"
                if ((((MR_Unsigned) (*mercury__term_io__Char_1 - (MR_Integer) 32)) <= ((MR_Unsigned) (MR_Integer) 94)))
#line 804 "term_io.m"
                  if ((((mercury__term_io_scalar_common_6[0])[(((*mercury__term_io__Char_1 - (MR_Integer) 32)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((*mercury__term_io__Char_1 - (MR_Integer) 32)) & (MR_Integer) 31))))))
#line 804 "term_io.m"
                    {
#line 804 "term_io.m"
                      mercury__term_io__succeeded = MR_TRUE;
#line 804 "term_io.m"
                    }
#line 804 "term_io.m"
                  else
#line 804 "term_io.m"
                    mercury__term_io__succeeded = MR_FALSE;
#line 804 "term_io.m"
                else
#line 804 "term_io.m"
                  mercury__term_io__succeeded = MR_FALSE;
#line 793 "term_io.m"
                if (!(mercury__term_io__succeeded))
#line 795 "term_io.m"
                  {
#line 795 "term_io.m"
                    MR_Integer mercury__term_io__V_37_37;

#line 111 "char.opt"
{
#define MR_PROC_LABEL mercury__term_io__string_is_escaped_char_2_p_1

	MR_Char Character;
	MR_Integer Int;

	Character =  *mercury__term_io__Char_1 ;
		{
#line 111 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 7791 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_37_37  = Int;
#line 111 "char.opt"
}
#line 795 "term_io.m"
                    mercury__term_io__succeeded = (mercury__term_io__V_37_37 >= (MR_Integer) 128);
#line 795 "term_io.m"
                  }
#line 793 "term_io.m"
              }
#line 764 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 871 "term_io.m"
#line 871 "term_io.m"
              switch (*mercury__term_io__Char_1) {
#line 871 "term_io.m"
                default:
#line 871 "term_io.m"
                  mercury__term_io__succeeded = MR_FALSE;
#line 871 "term_io.m"
                  break;
#line 871 "term_io.m"
                case (MR_Char) 8:
#line 876 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 871 "term_io.m"
                  break;
#line 871 "term_io.m"
                case (MR_Char) 9:
#line 875 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 871 "term_io.m"
                  break;
#line 871 "term_io.m"
                case (MR_Char) 10:
#line 874 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 871 "term_io.m"
                  break;
#line 871 "term_io.m"
                case (MR_Char) 34:
#line 872 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 871 "term_io.m"
                  break;
#line 871 "term_io.m"
                case (MR_Char) 39:
#line 871 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 871 "term_io.m"
                  break;
#line 871 "term_io.m"
                case (MR_Char) 92:
#line 873 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 871 "term_io.m"
                  break;
#line 871 "term_io.m"
              }
#line 761 "term_io.m"
          }
#line 767 "term_io.m"
        else
#line 767 "term_io.m"
          {
#line 767 "term_io.m"
            MR_Word mercury__term_io__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 1)));
#line 767 "term_io.m"
            MR_Char mercury__term_io__V_35_35 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_32_32, (MR_Integer) 0)));

#line 768 "term_io.m"
            mercury__term_io__succeeded = (mercury__term_io__V_33_33 == (MR_Char) 92);
#line 767 "term_io.m"
            if (mercury__term_io__succeeded)
#line 767 "term_io.m"
              {
#line 767 "term_io.m"
                if ((mercury__term_io__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 871 "term_io.m"
#line 871 "term_io.m"
                  switch (mercury__term_io__V_35_35) {
#line 871 "term_io.m"
                    default:
#line 871 "term_io.m"
                      mercury__term_io__succeeded = MR_FALSE;
#line 871 "term_io.m"
                      break;
#line 871 "term_io.m"
                    case (MR_Char) 34:
#line 872 "term_io.m"
                      {
#line 872 "term_io.m"
                        *mercury__term_io__Char_1 = (MR_Char) 34;
#line 872 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 872 "term_io.m"
                      }
#line 871 "term_io.m"
                      break;
#line 871 "term_io.m"
                    case (MR_Char) 39:
#line 871 "term_io.m"
                      {
#line 871 "term_io.m"
                        *mercury__term_io__Char_1 = (MR_Char) 39;
#line 871 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 871 "term_io.m"
                      }
#line 871 "term_io.m"
                      break;
#line 871 "term_io.m"
                    case (MR_Char) 92:
#line 873 "term_io.m"
                      {
#line 873 "term_io.m"
                        *mercury__term_io__Char_1 = (MR_Char) 92;
#line 873 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 873 "term_io.m"
                      }
#line 871 "term_io.m"
                      break;
#line 871 "term_io.m"
                    case (MR_Char) 98:
#line 876 "term_io.m"
                      {
#line 876 "term_io.m"
                        *mercury__term_io__Char_1 = (MR_Char) 8;
#line 876 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 876 "term_io.m"
                      }
#line 871 "term_io.m"
                      break;
#line 871 "term_io.m"
                    case (MR_Char) 110:
#line 874 "term_io.m"
                      {
#line 874 "term_io.m"
                        *mercury__term_io__Char_1 = (MR_Char) 10;
#line 874 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 874 "term_io.m"
                      }
#line 871 "term_io.m"
                      break;
#line 871 "term_io.m"
                    case (MR_Char) 116:
#line 875 "term_io.m"
                      {
#line 875 "term_io.m"
                        *mercury__term_io__Char_1 = (MR_Char) 9;
#line 875 "term_io.m"
                        mercury__term_io__succeeded = MR_TRUE;
#line 875 "term_io.m"
                      }
#line 871 "term_io.m"
                      break;
#line 871 "term_io.m"
                  }
#line 767 "term_io.m"
                else
#line 771 "term_io.m"
                  {
#line 771 "term_io.m"
                    MR_String mercury__term_io__NumString_17;
#line 771 "term_io.m"
                    MR_Integer mercury__term_io__Int_18;
#line 771 "term_io.m"
                    MR_Word mercury__term_io__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_34_34, (MR_Integer) 1)));
#line 771 "term_io.m"
                    MR_Word mercury__term_io__V_23_23;
#line 771 "term_io.m"
                    MR_Integer mercury__term_io__V_27_27;
#line 771 "term_io.m"
                    MR_Char mercury__term_io__Char2_14 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_34_34, (MR_Integer) 0)));
#line 771 "term_io.m"
                    MR_Char mercury__term_io__Char3_15;

#line 771 "term_io.m"
                    mercury__term_io__succeeded = ((MR_tag((MR_Word) mercury__term_io__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 771 "term_io.m"
                    if (mercury__term_io__succeeded)
#line 771 "term_io.m"
                      {
#line 771 "term_io.m"
                        mercury__term_io__Char3_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_22_22, (MR_Integer) 0)));
#line 771 "term_io.m"
                        mercury__term_io__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_io__V_22_22, (MR_Integer) 1)));
#line 771 "term_io.m"
                        mercury__term_io__succeeded = (mercury__term_io__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "term_io.m"
                        if (mercury__term_io__succeeded)
#line 771 "term_io.m"
                          {
#line 773 "term_io.m"
                            {
#line 773 "term_io.m"
                              mercury__string__from_char_list_2_p_0(mercury__term_io__V_32_32, &mercury__term_io__NumString_17);
                            }
#line 774 "term_io.m"
                            mercury__term_io__V_27_27 = (MR_Integer) 8;
#line 774 "term_io.m"
                            {
#line 774 "term_io.m"
                              mercury__term_io__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__term_io__V_27_27, mercury__term_io__NumString_17, &mercury__term_io__Int_18);
                            }
#line 771 "term_io.m"
                            if (mercury__term_io__succeeded)
#line 771 "term_io.m"
                              {
#line 104 "char.opt"
{
#define MR_PROC_LABEL mercury__term_io__string_is_escaped_char_2_p_1

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__term_io__Int_18 ;
		{
#line 104 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 8021 "term_io.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__term_io__Char_1  = Character;
#line 104 "char.opt"
	}
mercury__term_io__succeeded  = SUCCESS_INDICATOR;
}
#line 771 "term_io.m"
                              }
#line 771 "term_io.m"
                          }
#line 771 "term_io.m"
                      }
#line 771 "term_io.m"
                  }
#line 767 "term_io.m"
              }
#line 767 "term_io.m"
          }
#line 761 "term_io.m"
      }
#line 758 "term_io.m"
    return mercury__term_io__succeeded;
#line 758 "term_io.m"
  }
#line 154 "term_io.m"
}

#line 153 "term_io.m"
void MR_CALL 
mercury__term_io__string_is_escaped_char_2_p_0(
#line 153 "term_io.m"
  MR_Char mercury__term_io__Char_1,
#line 153 "term_io.m"
  MR_String * mercury__term_io__String_2)
#line 153 "term_io.m"
{
#line 753 "term_io.m"
  {
#line 753 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 753 "term_io.m"
    MR_Char mercury__term_io__QuoteChar_5;

#line 871 "term_io.m"
#line 871 "term_io.m"
    switch (mercury__term_io__Char_1) {
#line 871 "term_io.m"
      default:
#line 871 "term_io.m"
        mercury__term_io__succeeded = MR_FALSE;
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 8:
#line 876 "term_io.m"
        {
#line 876 "term_io.m"
          mercury__term_io__QuoteChar_5 = (MR_Char) 98;
#line 876 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 876 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 9:
#line 875 "term_io.m"
        {
#line 875 "term_io.m"
          mercury__term_io__QuoteChar_5 = (MR_Char) 116;
#line 875 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 875 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 10:
#line 874 "term_io.m"
        {
#line 874 "term_io.m"
          mercury__term_io__QuoteChar_5 = (MR_Char) 110;
#line 874 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 874 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 34:
#line 872 "term_io.m"
        {
#line 872 "term_io.m"
          mercury__term_io__QuoteChar_5 = (MR_Char) 34;
#line 872 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 872 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 39:
#line 871 "term_io.m"
        {
#line 871 "term_io.m"
          mercury__term_io__QuoteChar_5 = (MR_Char) 39;
#line 871 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 871 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 92:
#line 873 "term_io.m"
        {
#line 873 "term_io.m"
          mercury__term_io__QuoteChar_5 = (MR_Char) 92;
#line 873 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 873 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
    }
#line 753 "term_io.m"
    if (mercury__term_io__succeeded)
#line 752 "term_io.m"
      {
#line 752 "term_io.m"
        MR_String mercury__term_io__V_7_7;
#line 752 "term_io.m"
        MR_Word mercury__term_io__V_5_36;
#line 752 "term_io.m"
        MR_Word mercury__term_io__V_6_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 217 "string.opt"
        {
#line 217 "string.opt"
          mercury__term_io__V_5_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_5_36, 0) = ((MR_Box) (MR_Word) (mercury__term_io__QuoteChar_5));
#line 217 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__term_io__V_5_36, 1) = ((MR_Box) (mercury__term_io__V_6_37));
#line 217 "string.opt"
        }
#line 219 "string.opt"
        {
#line 219 "string.opt"
          mercury__string__to_char_list_2_p_1(&mercury__term_io__V_7_7, mercury__term_io__V_5_36);
        }
#line 159 "string.opt"
        {
#line 159 "string.opt"
          mercury__string__append_3_p_2((MR_String) "\\", mercury__term_io__V_7_7, mercury__term_io__String_2);
#line 159 "string.opt"
          return;
        }
#line 752 "term_io.m"
      }
#line 753 "term_io.m"
    else
#line 755 "term_io.m"
      {
#line 793 "term_io.m"
        {
#line 793 "term_io.m"
          mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(mercury__term_io__Char_1);
        }
#line 793 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 793 "term_io.m"
          {
#line 804 "term_io.m"
            if ((((MR_Unsigned) (mercury__term_io__Char_1 - (MR_Integer) 32)) <= ((MR_Unsigned) (MR_Integer) 94)))
#line 804 "term_io.m"
              if ((((mercury__term_io_scalar_common_6[0])[(((mercury__term_io__Char_1 - (MR_Integer) 32)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__term_io__Char_1 - (MR_Integer) 32)) & (MR_Integer) 31))))))
#line 804 "term_io.m"
                {
#line 804 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 804 "term_io.m"
                }
#line 804 "term_io.m"
              else
#line 804 "term_io.m"
                mercury__term_io__succeeded = MR_FALSE;
#line 804 "term_io.m"
            else
#line 804 "term_io.m"
              mercury__term_io__succeeded = MR_FALSE;
#line 793 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 795 "term_io.m"
              {
#line 795 "term_io.m"
                MR_Integer mercury__term_io__V_42_42;

#line 111 "char.opt"
{
#define MR_PROC_LABEL mercury__term_io__string_is_escaped_char_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_1 ;
		{
#line 111 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 8237 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_42_42  = Int;
#line 111 "char.opt"
}
#line 795 "term_io.m"
                mercury__term_io__succeeded = (mercury__term_io__V_42_42 >= (MR_Integer) 128);
#line 795 "term_io.m"
              }
#line 793 "term_io.m"
          }
#line 755 "term_io.m"
        if (mercury__term_io__succeeded)
#line 216 "string.opt"
          {
#line 216 "string.opt"
            MR_Word mercury__term_io__V_5_50;
#line 216 "string.opt"
            MR_Word mercury__term_io__V_6_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 217 "string.opt"
            {
#line 217 "string.opt"
              mercury__term_io__V_5_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "string.opt"
              MR_hl_field(MR_mktag(1), mercury__term_io__V_5_50, 0) = ((MR_Box) (MR_Word) (mercury__term_io__Char_1));
#line 217 "string.opt"
              MR_hl_field(MR_mktag(1), mercury__term_io__V_5_50, 1) = ((MR_Box) (mercury__term_io__V_6_51));
#line 217 "string.opt"
            }
#line 219 "string.opt"
            {
#line 219 "string.opt"
              mercury__string__to_char_list_2_p_1(mercury__term_io__String_2, mercury__term_io__V_5_50);
#line 219 "string.opt"
              return;
            }
#line 216 "string.opt"
          }
#line 755 "term_io.m"
        else
#line 756 "term_io.m"
          {
#line 756 "term_io.m"
            *mercury__term_io__String_2 = mercury__term_io__mercury_escape_char_1_f_0(mercury__term_io__Char_1);
          }
#line 755 "term_io.m"
      }
#line 753 "term_io.m"
  }
#line 153 "term_io.m"
}

#line 148 "term_io.m"
MR_String MR_CALL 
mercury__term_io__escaped_char_1_f_0(
#line 148 "term_io.m"
  MR_Char mercury__term_io__Char_3)
#line 148 "term_io.m"
{
#line 746 "term_io.m"
  {
#line 746 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 746 "term_io.m"
    MR_String mercury__term_io__String_4;

#line 746 "term_io.m"
    {
#line 746 "term_io.m"
      mercury__term_io__string_is_escaped_char_2_p_0(mercury__term_io__Char_3, &mercury__term_io__String_4);
    }
#line 746 "term_io.m"
    return mercury__term_io__String_4;
#line 746 "term_io.m"
  }
#line 148 "term_io.m"
}

#line 141 "term_io.m"
void MR_CALL 
mercury__term_io__write_escaped_char_4_p_0(
#line 141 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_17,
#line 141 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_18,
#line 141 "term_io.m"
  MR_Box mercury__term_io__Stream_5,
#line 141 "term_io.m"
  MR_Char mercury__term_io__Char_6,
#line 141 "term_io.m"
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_9,
#line 141 "term_io.m"
  MR_Box * mercury__term_io__STATE_VARIABLE_State_10)
#line 141 "term_io.m"
{
#line 739 "term_io.m"
  {
#line 739 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 739 "term_io.m"
    MR_Char mercury__term_io__QuoteChar_8;

#line 871 "term_io.m"
#line 871 "term_io.m"
    switch (mercury__term_io__Char_6) {
#line 871 "term_io.m"
      default:
#line 871 "term_io.m"
        mercury__term_io__succeeded = MR_FALSE;
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 8:
#line 876 "term_io.m"
        {
#line 876 "term_io.m"
          mercury__term_io__QuoteChar_8 = (MR_Char) 98;
#line 876 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 876 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 9:
#line 875 "term_io.m"
        {
#line 875 "term_io.m"
          mercury__term_io__QuoteChar_8 = (MR_Char) 116;
#line 875 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 875 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 10:
#line 874 "term_io.m"
        {
#line 874 "term_io.m"
          mercury__term_io__QuoteChar_8 = (MR_Char) 110;
#line 874 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 874 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 34:
#line 872 "term_io.m"
        {
#line 872 "term_io.m"
          mercury__term_io__QuoteChar_8 = (MR_Char) 34;
#line 872 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 872 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 39:
#line 871 "term_io.m"
        {
#line 871 "term_io.m"
          mercury__term_io__QuoteChar_8 = (MR_Char) 39;
#line 871 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 871 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
      case (MR_Char) 92:
#line 873 "term_io.m"
        {
#line 873 "term_io.m"
          mercury__term_io__QuoteChar_8 = (MR_Char) 92;
#line 873 "term_io.m"
          mercury__term_io__succeeded = MR_TRUE;
#line 873 "term_io.m"
        }
#line 871 "term_io.m"
        break;
#line 871 "term_io.m"
    }
#line 739 "term_io.m"
    if (mercury__term_io__succeeded)
#line 737 "term_io.m"
      {
#line 737 "term_io.m"
        MR_Box mercury__term_io__STATE_VARIABLE_State_12_12;
#line 8431 "term_io.c"
        void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8433 "term_io.c"
        void MR_CALL (* mercury__term_io__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 8436 "term_io.c"
        {
#line 8438 "term_io.c"
          mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), mercury__term_io__Stream_5, ((MR_Box) (MR_Word) ((MR_Char) 92)), mercury__term_io__STATE_VARIABLE_State_0_9, &mercury__term_io__STATE_VARIABLE_State_12_12);
        }
#line 8441 "term_io.c"
        mercury__term_io__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8443 "term_io.c"
        {
#line 8445 "term_io.c"
          mercury__term_io__func_1(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), mercury__term_io__Stream_5, ((MR_Box) (MR_Word) (mercury__term_io__QuoteChar_8)), mercury__term_io__STATE_VARIABLE_State_12_12, mercury__term_io__STATE_VARIABLE_State_10);
#line 8447 "term_io.c"
          return;
        }
#line 737 "term_io.m"
      }
#line 739 "term_io.m"
    else
#line 741 "term_io.m"
      {
#line 793 "term_io.m"
        {
#line 793 "term_io.m"
          mercury__term_io__succeeded = mercury__char__is_alnum_1_p_0(mercury__term_io__Char_6);
        }
#line 793 "term_io.m"
        if (!(mercury__term_io__succeeded))
#line 793 "term_io.m"
          {
#line 804 "term_io.m"
            if ((((MR_Unsigned) (mercury__term_io__Char_6 - (MR_Integer) 32)) <= ((MR_Unsigned) (MR_Integer) 94)))
#line 804 "term_io.m"
              if ((((mercury__term_io_scalar_common_6[0])[(((mercury__term_io__Char_6 - (MR_Integer) 32)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((mercury__term_io__Char_6 - (MR_Integer) 32)) & (MR_Integer) 31))))))
#line 804 "term_io.m"
                {
#line 804 "term_io.m"
                  mercury__term_io__succeeded = MR_TRUE;
#line 804 "term_io.m"
                }
#line 804 "term_io.m"
              else
#line 804 "term_io.m"
                mercury__term_io__succeeded = MR_FALSE;
#line 804 "term_io.m"
            else
#line 804 "term_io.m"
              mercury__term_io__succeeded = MR_FALSE;
#line 793 "term_io.m"
            if (!(mercury__term_io__succeeded))
#line 795 "term_io.m"
              {
#line 795 "term_io.m"
                MR_Integer mercury__term_io__V_20_20;

#line 111 "char.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_escaped_char_4_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__term_io__Char_6 ;
		{
#line 111 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 8503 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_20_20  = Int;
#line 111 "char.opt"
}
#line 795 "term_io.m"
                mercury__term_io__succeeded = (mercury__term_io__V_20_20 >= (MR_Integer) 128);
#line 795 "term_io.m"
              }
#line 793 "term_io.m"
          }
#line 741 "term_io.m"
        if (mercury__term_io__succeeded)
#line 8518 "term_io.c"
          {
#line 8520 "term_io.c"
            void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_18, (MR_Integer) 0)), (MR_Integer) 5)));

#line 8523 "term_io.c"
            {
#line 8525 "term_io.c"
              mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_18), mercury__term_io__Stream_5, ((MR_Box) (MR_Word) (mercury__term_io__Char_6)), mercury__term_io__STATE_VARIABLE_State_0_9, mercury__term_io__STATE_VARIABLE_State_10);
#line 8527 "term_io.c"
              return;
            }
#line 8530 "term_io.c"
          }
#line 741 "term_io.m"
        else
#line 742 "term_io.m"
          {
#line 742 "term_io.m"
            MR_String mercury__term_io__V_15_15;
#line 8538 "term_io.c"
            void MR_CALL (* mercury__term_io__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 742 "term_io.m"
            {
#line 742 "term_io.m"
              mercury__term_io__V_15_15 = mercury__term_io__mercury_escape_char_1_f_0(mercury__term_io__Char_6);
            }
#line 8546 "term_io.c"
            mercury__term_io__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8548 "term_io.c"
            {
#line 8550 "term_io.c"
              mercury__term_io__func_3(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_17), mercury__term_io__Stream_5, ((MR_Box) (mercury__term_io__V_15_15)), mercury__term_io__STATE_VARIABLE_State_0_9, mercury__term_io__STATE_VARIABLE_State_10);
#line 8552 "term_io.c"
              return;
            }
#line 742 "term_io.m"
          }
#line 741 "term_io.m"
      }
#line 739 "term_io.m"
  }
#line 141 "term_io.m"
}

#line 139 "term_io.m"
void MR_CALL 
mercury__term_io__write_escaped_char_3_p_0(
#line 139 "term_io.m"
  MR_Char mercury__term_io__Char_4)
#line 139 "term_io.m"
{
#line 731 "term_io.m"
  {
#line 731 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 731 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_11;
#line 731 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_12;
#line 731 "term_io.m"
    MR_Word mercury__term_io__Stream_6;
#line 731 "term_io.m"
    MR_Box mercury__term_io__V_4_15;

#line 990 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_escaped_char_3_p_0

	MercuryFilePtr Stream;

		{
#line 990 "io.opt"

    Stream = mercury_current_text_output();

#line 8595 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_15  = (MR_Box) Stream;
#line 990 "io.opt"
}
#line 987 "io.opt"
    mercury__term_io__Stream_6 = (MR_Word) mercury__term_io__V_4_15;
#line 8604 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_11 = (MR_Word) &mercury__term_io_scalar_common_4[0];
#line 8606 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_12 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 733 "term_io.m"
    {
#line 733 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_11, mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__Stream_6, mercury__term_io__Char_4);
#line 733 "term_io.m"
      return;
    }
#line 731 "term_io.m"
  }
#line 139 "term_io.m"
}

#line 134 "term_io.m"
MR_String MR_CALL 
mercury__term_io__quoted_char_1_f_0(
#line 134 "term_io.m"
  MR_Char mercury__term_io__C_3)
#line 134 "term_io.m"
{
#line 605 "term_io.m"
  {
#line 605 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 605 "term_io.m"
    MR_String mercury__term_io__HeadVar__2_2;
#line 605 "term_io.m"
    MR_String mercury__term_io__V_7_7;
#line 605 "term_io.m"
    MR_String mercury__term_io__V_10_10;
#line 605 "term_io.m"
    MR_Word mercury__term_io__V_16_16;
#line 605 "term_io.m"
    MR_String mercury__term_io__V_17_17;
#line 605 "term_io.m"
    MR_Word mercury__term_io__V_7_24;
#line 605 "term_io.m"
    MR_Word mercury__term_io__V_8_25;

#line 746 "term_io.m"
    {
#line 746 "term_io.m"
      mercury__term_io__string_is_escaped_char_2_p_0(mercury__term_io__C_3, &mercury__term_io__V_7_7);
    }
#line 8651 "term_io.c"
    mercury__term_io__V_16_16 = (MR_Word) &mercury__term_io_scalar_common_5[0];
#line 83 "string.format.opt"
    mercury__term_io__V_7_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 84 "string.format.opt"
    mercury__term_io__V_8_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 85 "string.format.opt"
    {
#line 85 "string.format.opt"
      mercury__string__format__format_string_component_5_p_0(mercury__term_io__V_16_16, mercury__term_io__V_7_24, mercury__term_io__V_8_25, mercury__term_io__V_7_7, &mercury__term_io__V_10_10);
    }
#line 159 "string.opt"
    {
#line 159 "string.opt"
      mercury__string__append_3_p_2(mercury__term_io__V_10_10, (MR_String) "\'", &mercury__term_io__V_17_17);
    }
#line 159 "string.opt"
    {
#line 159 "string.opt"
      mercury__string__append_3_p_2((MR_String) "\'", mercury__term_io__V_17_17, &mercury__term_io__HeadVar__2_2);
    }
#line 605 "term_io.m"
    return mercury__term_io__HeadVar__2_2;
#line 605 "term_io.m"
  }
#line 134 "term_io.m"
}

#line 127 "term_io.m"
void MR_CALL 
mercury__term_io__quote_char_4_p_0(
#line 127 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
#line 127 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_13,
#line 127 "term_io.m"
  MR_Box mercury__term_io__Stream_5,
#line 127 "term_io.m"
  MR_Char mercury__term_io__C_6,
#line 127 "term_io.m"
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_8,
#line 127 "term_io.m"
  MR_Box * mercury__term_io__STATE_VARIABLE_State_9)
#line 127 "term_io.m"
{
#line 602 "term_io.m"
  {
#line 602 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 602 "term_io.m"
    {
#line 602 "term_io.m"
      mercury__term_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_p_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__Stream_5, mercury__term_io__C_6, mercury__term_io__STATE_VARIABLE_State_0_8, mercury__term_io__STATE_VARIABLE_State_9);
#line 602 "term_io.m"
      return;
    }
#line 602 "term_io.m"
  }
#line 127 "term_io.m"
}

#line 125 "term_io.m"
void MR_CALL 
mercury__term_io__quote_char_3_p_0(
#line 125 "term_io.m"
  MR_Char mercury__term_io__C_4)
#line 125 "term_io.m"
{
#line 599 "term_io.m"
  {
#line 599 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 599 "term_io.m"
    MR_String mercury__term_io__V_8_8;

#line 600 "term_io.m"
    {
#line 600 "term_io.m"
      mercury__term_io__V_8_8 = mercury__term_io__quoted_char_1_f_0(mercury__term_io__C_4);
    }
#line 1585 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_char_3_p_0

	MR_String Message;

	Message =  mercury__term_io__V_8_8 ;
		{
#line 1585 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 8744 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 1585 "io.opt"
}
#line 599 "term_io.m"
  }
#line 125 "term_io.m"
}

#line 120 "term_io.m"
MR_String MR_CALL 
mercury__term_io__quoted_atom_1_f_0(
#line 120 "term_io.m"
  MR_String mercury__term_io__S_3)
#line 120 "term_io.m"
{
#line 614 "term_io.m"
  {
#line 614 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 614 "term_io.m"
    MR_String mercury__term_io__HeadVar__2_2;

#line 615 "term_io.m"
    {
#line 615 "term_io.m"
      return mercury__term_io__HeadVar__2_2 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__term_io__S_3, (MR_Integer) 1);
    }
#line 614 "term_io.m"
    return mercury__term_io__HeadVar__2_2;
#line 614 "term_io.m"
  }
#line 120 "term_io.m"
}

#line 113 "term_io.m"
void MR_CALL 
mercury__term_io__quote_atom_4_p_0(
#line 113 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_12,
#line 113 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_13,
#line 113 "term_io.m"
  MR_Box mercury__term_io__Stream_5,
#line 113 "term_io.m"
  MR_String mercury__term_io__S_6,
#line 113 "term_io.m"
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_8,
#line 113 "term_io.m"
  MR_Box * mercury__term_io__STATE_VARIABLE_State_9)
#line 113 "term_io.m"
{
#line 611 "term_io.m"
  {
#line 611 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 612 "term_io.m"
    {
#line 612 "term_io.m"
      mercury__term_io__quote_atom_agt_5_p_0(mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__TypeClassInfo_for_writer_13, mercury__term_io__Stream_5, mercury__term_io__S_6, (MR_Integer) 1, mercury__term_io__STATE_VARIABLE_State_0_8, mercury__term_io__STATE_VARIABLE_State_9);
#line 612 "term_io.m"
      return;
    }
#line 611 "term_io.m"
  }
#line 113 "term_io.m"
}

#line 111 "term_io.m"
void MR_CALL 
mercury__term_io__quote_atom_3_p_0(
#line 111 "term_io.m"
  MR_String mercury__term_io__S_4)
#line 111 "term_io.m"
{
#line 608 "term_io.m"
  {
#line 608 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 608 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_18;
#line 608 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_19;
#line 608 "term_io.m"
    MR_Word mercury__term_io__Stream_15;
#line 608 "term_io.m"
    MR_Box mercury__term_io__V_4_22;

#line 990 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_atom_3_p_0

	MercuryFilePtr Stream;

		{
#line 990 "io.opt"

    Stream = mercury_current_text_output();

#line 8846 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_22  = (MR_Box) Stream;
#line 990 "io.opt"
}
#line 987 "io.opt"
    mercury__term_io__Stream_15 = (MR_Word) mercury__term_io__V_4_22;
#line 8855 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_18 = (MR_Word) &mercury__term_io_scalar_common_4[0];
#line 8857 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_19 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 619 "term_io.m"
    {
#line 619 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(mercury__term_io__TypeClassInfo_for_writer_18, mercury__term_io__TypeClassInfo_for_writer_19, mercury__term_io__Stream_15, mercury__term_io__S_4, (MR_Integer) 1);
#line 619 "term_io.m"
      return;
    }
#line 608 "term_io.m"
  }
#line 111 "term_io.m"
}

#line 106 "term_io.m"
MR_String MR_CALL 
mercury__term_io__quoted_string_1_f_0(
#line 106 "term_io.m"
  MR_String mercury__term_io__S_3)
#line 106 "term_io.m"
{
#line 701 "term_io.m"
  {
#line 701 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 701 "term_io.m"
    MR_String mercury__term_io__HeadVar__2_2;
#line 701 "term_io.m"
    MR_Word mercury__term_io__V_4_4;
#line 701 "term_io.m"
    MR_Word mercury__term_io__V_6_6;
#line 701 "term_io.m"
    MR_String mercury__term_io__V_7_7;
#line 701 "term_io.m"
    MR_Word mercury__term_io__V_8_8;
#line 701 "term_io.m"
    MR_Word mercury__term_io__V_10_10;

#line 702 "term_io.m"
    {
#line 702 "term_io.m"
      mercury__term_io__V_7_7 = mercury__term_io__escaped_string_1_f_0(mercury__term_io__S_3);
    }
#line 702 "term_io.m"
    mercury__term_io__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 702 "term_io.m"
    mercury__term_io__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__term_io_scalar_common_1[2]);
#line 702 "term_io.m"
    {
#line 702 "term_io.m"
      mercury__term_io__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "term_io.m"
      MR_hl_field(MR_mktag(1), mercury__term_io__V_6_6, 0) = ((MR_Box) (mercury__term_io__V_7_7));
#line 702 "term_io.m"
      MR_hl_field(MR_mktag(1), mercury__term_io__V_6_6, 1) = ((MR_Box) (mercury__term_io__V_8_8));
#line 702 "term_io.m"
    }
#line 702 "term_io.m"
    {
#line 702 "term_io.m"
      mercury__term_io__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "term_io.m"
      MR_hl_field(MR_mktag(1), mercury__term_io__V_4_4, 0) = ((MR_Box) ((MR_String) "\""));
#line 702 "term_io.m"
      MR_hl_field(MR_mktag(1), mercury__term_io__V_4_4, 1) = ((MR_Box) (mercury__term_io__V_6_6));
#line 702 "term_io.m"
    }
#line 702 "term_io.m"
    {
#line 702 "term_io.m"
      return mercury__term_io__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__term_io__V_4_4);
    }
#line 701 "term_io.m"
    return mercury__term_io__HeadVar__2_2;
#line 701 "term_io.m"
  }
#line 106 "term_io.m"
}

#line 99 "term_io.m"
void MR_CALL 
mercury__term_io__quote_string_4_p_0(
#line 99 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_15,
#line 99 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_writer_16,
#line 99 "term_io.m"
  MR_Box mercury__term_io__Stream_5,
#line 99 "term_io.m"
  MR_String mercury__term_io__S_6,
#line 99 "term_io.m"
  MR_Box mercury__term_io__STATE_VARIABLE_State_0_8,
#line 99 "term_io.m"
  MR_Box * mercury__term_io__STATE_VARIABLE_State_9)
#line 99 "term_io.m"
{
#line 696 "term_io.m"
  {
#line 696 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 696 "term_io.m"
    MR_Box mercury__term_io__STATE_VARIABLE_State_11_11;
#line 696 "term_io.m"
    MR_Box mercury__term_io__STATE_VARIABLE_State_12_12;
#line 8961 "term_io.c"
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8963 "term_io.c"
    void MR_CALL (* mercury__term_io__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 8966 "term_io.c"
    {
#line 8968 "term_io.c"
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_16), mercury__term_io__Stream_5, ((MR_Box) (MR_Word) ((MR_Char) 34)), mercury__term_io__STATE_VARIABLE_State_0_8, &mercury__term_io__STATE_VARIABLE_State_11_11);
    }
#line 698 "term_io.m"
    {
#line 698 "term_io.m"
      mercury__term_io__write_escaped_string_4_p_0(mercury__term_io__TypeClassInfo_for_writer_15, mercury__term_io__TypeClassInfo_for_writer_16, mercury__term_io__Stream_5, mercury__term_io__S_6, mercury__term_io__STATE_VARIABLE_State_11_11, &mercury__term_io__STATE_VARIABLE_State_12_12);
    }
#line 8976 "term_io.c"
    mercury__term_io__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8978 "term_io.c"
    {
#line 8980 "term_io.c"
      mercury__term_io__func_1(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_16), mercury__term_io__Stream_5, ((MR_Box) (MR_Word) ((MR_Char) 34)), mercury__term_io__STATE_VARIABLE_State_12_12, mercury__term_io__STATE_VARIABLE_State_9);
#line 8982 "term_io.c"
      return;
    }
#line 696 "term_io.m"
  }
#line 99 "term_io.m"
}

#line 97 "term_io.m"
void MR_CALL 
mercury__term_io__quote_string_3_p_0(
#line 97 "term_io.m"
  MR_String mercury__term_io__S_4)
#line 97 "term_io.m"
{
#line 692 "term_io.m"
  {
#line 692 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 692 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_11;
#line 692 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_writer_12;
#line 692 "term_io.m"
    MR_Word mercury__term_io__Stream_6;
#line 692 "term_io.m"
    MR_Box mercury__term_io__V_4_15;
#line 9009 "term_io.c"
    void MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9011 "term_io.c"
    MR_Box mercury__term_io__conv1_STATE_VARIABLE_State_11_22;
#line 9013 "term_io.c"
    void MR_CALL (* mercury__term_io__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9015 "term_io.c"
    MR_Box mercury__term_io__conv3_STATE_VARIABLE_IO_8;

#line 990 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__quote_string_3_p_0

	MercuryFilePtr Stream;

		{
#line 990 "io.opt"

    Stream = mercury_current_text_output();

#line 9029 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_15  = (MR_Box) Stream;
#line 990 "io.opt"
}
#line 987 "io.opt"
    mercury__term_io__Stream_6 = (MR_Word) mercury__term_io__V_4_15;
#line 9038 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_11 = (MR_Word) &mercury__term_io_scalar_common_4[0];
#line 9040 "term_io.c"
    mercury__term_io__TypeClassInfo_for_writer_12 = (MR_Word) &mercury__term_io_scalar_common_4[1];
#line 9042 "term_io.c"
    mercury__term_io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9044 "term_io.c"
    {
#line 9046 "term_io.c"
      mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_12), ((MR_Box) (mercury__term_io__Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv1_STATE_VARIABLE_State_11_22);
    }
#line 698 "term_io.m"
    {
#line 698 "term_io.m"
      mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(mercury__term_io__TypeClassInfo_for_writer_11, mercury__term_io__TypeClassInfo_for_writer_12, mercury__term_io__Stream_6, mercury__term_io__S_4);
    }
#line 9054 "term_io.c"
    mercury__term_io__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_writer_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9056 "term_io.c"
    {
#line 9058 "term_io.c"
      mercury__term_io__func_2(((MR_Box) mercury__term_io__TypeClassInfo_for_writer_12), ((MR_Box) (mercury__term_io__Stream_6)), ((MR_Box) (MR_Word) ((MR_Char) 34)), ((MR_Box) ((MR_Integer) 0)), &mercury__term_io__conv3_STATE_VARIABLE_IO_8);
    }
#line 692 "term_io.m"
  }
#line 97 "term_io.m"
}

#line 91 "term_io.m"
void MR_CALL 
mercury__term_io__write_variable_with_op_table_5_p_0(
#line 91 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_17,
#line 91 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_16,
#line 91 "term_io.m"
  MR_Box mercury__term_io__Ops_6,
#line 91 "term_io.m"
  MR_Word mercury__term_io__Variable_7,
#line 91 "term_io.m"
  MR_Word mercury__term_io__VarSet_8)
#line 91 "term_io.m"
{
#line 297 "term_io.m"
  {
#line 297 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 298 "term_io.m"
    MR_Word mercury__term_io__V_10_10;
#line 298 "term_io.m"
    MR_Integer mercury__term_io__V_11_11;

#line 298 "term_io.m"
    {
#line 298 "term_io.m"
      mercury__term_io__write_variable_2_8_p_0(mercury__term_io__TypeInfo_for_T_17, mercury__term_io__TypeClassInfo_for_op_table_16, mercury__term_io__Ops_6, mercury__term_io__Variable_7, mercury__term_io__VarSet_8, &mercury__term_io__V_10_10, (MR_Integer) 0, &mercury__term_io__V_11_11);
    }
#line 297 "term_io.m"
  }
#line 91 "term_io.m"
}

#line 85 "term_io.m"
void MR_CALL 
mercury__term_io__write_variable_4_p_0(
#line 85 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_13,
#line 85 "term_io.m"
  MR_Word mercury__term_io__Variable_5,
#line 85 "term_io.m"
  MR_Word mercury__term_io__VarSet_6)
#line 85 "term_io.m"
{
#line 293 "term_io.m"
  {
#line 293 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 293 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_op_table_14;
#line 298 "term_io.m"
    MR_Word mercury__term_io__V_24_24;
#line 298 "term_io.m"
    MR_Integer mercury__term_io__V_25_25;

#line 45 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 9124 "term_io.c"
    mercury__term_io__TypeClassInfo_for_op_table_14 = (MR_Word) &mercury__term_io_scalar_common_1[0];
#line 298 "term_io.m"
    {
#line 298 "term_io.m"
      mercury__term_io__write_variable_2_8_p_0(mercury__term_io__TypeInfo_for_T_13, mercury__term_io__TypeClassInfo_for_op_table_14, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Variable_5, mercury__term_io__VarSet_6, &mercury__term_io__V_24_24, (MR_Integer) 0, &mercury__term_io__V_25_25);
    }
#line 293 "term_io.m"
  }
#line 85 "term_io.m"
}

#line 81 "term_io.m"
MR_String MR_CALL 
mercury__term_io__format_constant_1_f_0(
#line 81 "term_io.m"
  MR_Word mercury__term_io__Const_3)
#line 81 "term_io.m"
{
#line 569 "term_io.m"
  {
#line 569 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 569 "term_io.m"
    MR_String mercury__term_io__HeadVar__2_2;

#line 570 "term_io.m"
    {
#line 570 "term_io.m"
      return mercury__term_io__HeadVar__2_2 = mercury__term_io__format_constant_agt_2_f_0(mercury__term_io__Const_3, (MR_Integer) 1);
    }
#line 569 "term_io.m"
    return mercury__term_io__HeadVar__2_2;
#line 569 "term_io.m"
  }
#line 81 "term_io.m"
}

#line 77 "term_io.m"
void MR_CALL 
mercury__term_io__write_constant_3_p_0(
#line 77 "term_io.m"
  MR_Word mercury__term_io__Const_4)
#line 77 "term_io.m"
{
#line 546 "term_io.m"
  {
#line 546 "term_io.m"
    MR_bool mercury__term_io__succeeded;

#line 547 "term_io.m"
    {
#line 547 "term_io.m"
      mercury__term_io__write_constant_4_p_0(mercury__term_io__Const_4, (MR_Integer) 1);
#line 547 "term_io.m"
      return;
    }
#line 546 "term_io.m"
  }
#line 77 "term_io.m"
}

#line 72 "term_io.m"
void MR_CALL 
mercury__term_io__write_term_nl_with_op_table_5_p_0(
#line 72 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_16,
#line 72 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_15,
#line 72 "term_io.m"
  MR_Box mercury__term_io__Ops_6,
#line 72 "term_io.m"
  MR_Word mercury__term_io__VarSet_7,
#line 72 "term_io.m"
  MR_Word mercury__term_io__Term_8)
#line 72 "term_io.m"
{
#line 885 "term_io.m"
  {
#line 885 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 885 "term_io.m"
    MR_Integer mercury__term_io__V_38_38;
#line 885 "term_io.m"
    MR_Integer mercury__term_io__V_42_42;
#line 9209 "term_io.c"
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_15, (MR_Integer) 0)), (MR_Integer) 12)));
#line 9211 "term_io.c"
    MR_Box mercury__term_io__conv1_V_42_42;
#line 334 "term_io.m"
    MR_Word mercury__term_io__V_23_23;
#line 334 "term_io.m"
    MR_Integer mercury__term_io__V_24_24;

#line 9218 "term_io.c"
    {
#line 9220 "term_io.c"
      mercury__term_io__conv1_V_42_42 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_15), mercury__term_io__Ops_6);
    }
#line 9223 "term_io.c"
    mercury__term_io__V_42_42 = ((MR_Integer) mercury__term_io__conv1_V_42_42);
#line 334 "term_io.m"
    mercury__term_io__V_38_38 = (mercury__term_io__V_42_42 + (MR_Integer) 1);
#line 334 "term_io.m"
    {
#line 334 "term_io.m"
      mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_16, mercury__term_io__TypeClassInfo_for_op_table_15, mercury__term_io__Ops_6, mercury__term_io__Term_8, mercury__term_io__V_38_38, mercury__term_io__VarSet_7, &mercury__term_io__V_23_23, (MR_Integer) 0, &mercury__term_io__V_24_24);
    }
#line 1585 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_term_nl_with_op_table_5_p_0

	MR_String Message;

	Message =  (MR_String) ".\n" ;
		{
#line 1585 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 9244 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 1585 "io.opt"
}
#line 885 "term_io.m"
  }
#line 72 "term_io.m"
}

#line 67 "term_io.m"
void MR_CALL 
mercury__term_io__write_term_nl_4_p_0(
#line 67 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_13,
#line 67 "term_io.m"
  MR_Word mercury__term_io__VarSet_5,
#line 67 "term_io.m"
  MR_Word mercury__term_io__Term_6)
#line 67 "term_io.m"
{
#line 881 "term_io.m"
  {
#line 881 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 881 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_op_table_14;
#line 881 "term_io.m"
    MR_Integer mercury__term_io__V_48_48;
#line 881 "term_io.m"
    MR_Integer mercury__term_io__V_52_52;
#line 9276 "term_io.c"
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box);
#line 9278 "term_io.c"
    MR_Box mercury__term_io__conv1_V_52_52;
#line 334 "term_io.m"
    MR_Word mercury__term_io__V_33_33;
#line 334 "term_io.m"
    MR_Integer mercury__term_io__V_34_34;

#line 45 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 9287 "term_io.c"
    mercury__term_io__TypeClassInfo_for_op_table_14 = (MR_Word) &mercury__term_io_scalar_common_1[0];
#line 9289 "term_io.c"
    mercury__term_io__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_14, (MR_Integer) 0)), (MR_Integer) 12)));
#line 9291 "term_io.c"
    {
#line 9293 "term_io.c"
      mercury__term_io__conv1_V_52_52 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_14), ((MR_Box) ((MR_Integer) 0)));
    }
#line 9296 "term_io.c"
    mercury__term_io__V_52_52 = ((MR_Integer) mercury__term_io__conv1_V_52_52);
#line 334 "term_io.m"
    mercury__term_io__V_48_48 = (mercury__term_io__V_52_52 + (MR_Integer) 1);
#line 334 "term_io.m"
    {
#line 334 "term_io.m"
      mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_13, mercury__term_io__TypeClassInfo_for_op_table_14, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Term_6, mercury__term_io__V_48_48, mercury__term_io__VarSet_5, &mercury__term_io__V_33_33, (MR_Integer) 0, &mercury__term_io__V_34_34);
    }
#line 1585 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__write_term_nl_4_p_0

	MR_String Message;

	Message =  (MR_String) ".\n" ;
		{
#line 1585 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);

#line 9317 "term_io.c"

		;}
#undef MR_PROC_LABEL
#line 1585 "io.opt"
}
#line 881 "term_io.m"
  }
#line 67 "term_io.m"
}

#line 62 "term_io.m"
void MR_CALL 
mercury__term_io__write_term_with_op_table_5_p_0(
#line 62 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_17,
#line 62 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_16,
#line 62 "term_io.m"
  MR_Box mercury__term_io__Ops_6,
#line 62 "term_io.m"
  MR_Word mercury__term_io__VarSet_7,
#line 62 "term_io.m"
  MR_Word mercury__term_io__Term_8)
#line 62 "term_io.m"
{
#line 326 "term_io.m"
  {
#line 326 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 326 "term_io.m"
    MR_Integer mercury__term_io__V_29_29;
#line 326 "term_io.m"
    MR_Integer mercury__term_io__V_33_33;
#line 9351 "term_io.c"
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_16, (MR_Integer) 0)), (MR_Integer) 12)));
#line 9353 "term_io.c"
    MR_Box mercury__term_io__conv1_V_33_33;
#line 334 "term_io.m"
    MR_Word mercury__term_io__V_10_10;
#line 334 "term_io.m"
    MR_Integer mercury__term_io__V_11_11;

#line 9360 "term_io.c"
    {
#line 9362 "term_io.c"
      mercury__term_io__conv1_V_33_33 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_16), mercury__term_io__Ops_6);
    }
#line 9365 "term_io.c"
    mercury__term_io__V_33_33 = ((MR_Integer) mercury__term_io__conv1_V_33_33);
#line 334 "term_io.m"
    mercury__term_io__V_29_29 = (mercury__term_io__V_33_33 + (MR_Integer) 1);
#line 334 "term_io.m"
    {
#line 334 "term_io.m"
      mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_17, mercury__term_io__TypeClassInfo_for_op_table_16, mercury__term_io__Ops_6, mercury__term_io__Term_8, mercury__term_io__V_29_29, mercury__term_io__VarSet_7, &mercury__term_io__V_10_10, (MR_Integer) 0, &mercury__term_io__V_11_11);
    }
#line 326 "term_io.m"
  }
#line 62 "term_io.m"
}

#line 57 "term_io.m"
void MR_CALL 
mercury__term_io__write_term_4_p_0(
#line 57 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_13,
#line 57 "term_io.m"
  MR_Word mercury__term_io__VarSet_5,
#line 57 "term_io.m"
  MR_Word mercury__term_io__Term_6)
#line 57 "term_io.m"
{
#line 322 "term_io.m"
  {
#line 322 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 322 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_op_table_14;
#line 322 "term_io.m"
    MR_Integer mercury__term_io__V_39_39;
#line 322 "term_io.m"
    MR_Integer mercury__term_io__V_43_43;
#line 9400 "term_io.c"
    MR_Box MR_CALL (* mercury__term_io__func_0)(MR_Box, MR_Box);
#line 9402 "term_io.c"
    MR_Box mercury__term_io__conv1_V_43_43;
#line 334 "term_io.m"
    MR_Word mercury__term_io__V_24_24;
#line 334 "term_io.m"
    MR_Integer mercury__term_io__V_25_25;

#line 45 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 9411 "term_io.c"
    mercury__term_io__TypeClassInfo_for_op_table_14 = (MR_Word) &mercury__term_io_scalar_common_1[0];
#line 9413 "term_io.c"
    mercury__term_io__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__term_io__TypeClassInfo_for_op_table_14, (MR_Integer) 0)), (MR_Integer) 12)));
#line 9415 "term_io.c"
    {
#line 9417 "term_io.c"
      mercury__term_io__conv1_V_43_43 = mercury__term_io__func_0(((MR_Box) mercury__term_io__TypeClassInfo_for_op_table_14), ((MR_Box) ((MR_Integer) 0)));
    }
#line 9420 "term_io.c"
    mercury__term_io__V_43_43 = ((MR_Integer) mercury__term_io__conv1_V_43_43);
#line 334 "term_io.m"
    mercury__term_io__V_39_39 = (mercury__term_io__V_43_43 + (MR_Integer) 1);
#line 334 "term_io.m"
    {
#line 334 "term_io.m"
      mercury__term_io__write_term_3_9_p_0(mercury__term_io__TypeInfo_for_T_13, mercury__term_io__TypeClassInfo_for_op_table_14, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Term_6, mercury__term_io__V_39_39, mercury__term_io__VarSet_5, &mercury__term_io__V_24_24, (MR_Integer) 0, &mercury__term_io__V_25_25);
    }
#line 322 "term_io.m"
  }
#line 57 "term_io.m"
}

#line 51 "term_io.m"
void MR_CALL 
mercury__term_io__read_term_with_op_table_4_p_0(
#line 51 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_12,
#line 51 "term_io.m"
  MR_Word mercury__term_io__TypeClassInfo_for_op_table_11,
#line 51 "term_io.m"
  MR_Box mercury__term_io__Ops_5,
#line 51 "term_io.m"
  MR_Word * mercury__term_io__Result_6)
#line 51 "term_io.m"
{
#line 60 "parser.opt"
  {
#line 60 "parser.opt"
    MR_bool mercury__term_io__succeeded;
#line 60 "parser.opt"
    MR_String mercury__term_io__V_8_17;
#line 60 "parser.opt"
    MR_Box mercury__term_io__V_6_23;
#line 60 "parser.opt"
    MR_Word mercury__term_io__V_10_33;
#line 60 "parser.opt"
    MR_Word mercury__term_io__V_6_37;
#line 60 "parser.opt"
    MR_Word mercury__term_io__V_7_39;
#line 60 "parser.opt"
    MR_Integer mercury__term_io__V_8_40;
#line 60 "parser.opt"
    MR_Box mercury__term_io__V_4_44;

#line 848 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__read_term_with_op_table_4_p_0

	MercuryFilePtr Stream;

		{
#line 848 "io.opt"

    Stream = mercury_current_text_input();

#line 9477 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_6_23  = (MR_Box) Stream;
#line 848 "io.opt"
}
#line 945 "io.opt"
    {
#line 945 "io.opt"
      mercury__io__stream_name_4_p_0(mercury__term_io__V_6_23, &mercury__term_io__V_8_17);
    }
#line 848 "io.opt"
{
#define MR_PROC_LABEL mercury__term_io__read_term_with_op_table_4_p_0

	MercuryFilePtr Stream;

		{
#line 848 "io.opt"

    Stream = mercury_current_text_input();

#line 9500 "term_io.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_io__V_4_44  = (MR_Box) Stream;
#line 848 "io.opt"
}
#line 845 "io.opt"
    mercury__term_io__V_6_37 = (MR_Word) mercury__term_io__V_4_44;
#line 39 "lexer.opt"
    {
#line 39 "lexer.opt"
      mercury__lexer__get_token_5_p_0(mercury__term_io__V_6_37, &mercury__term_io__V_7_39, &mercury__term_io__V_8_40);
    }
#line 40 "lexer.opt"
    {
#line 40 "lexer.opt"
      mercury__lexer__get_token_list_2_6_p_0(mercury__term_io__V_6_37, mercury__term_io__V_7_39, mercury__term_io__V_8_40, &mercury__term_io__V_10_33);
    }
#line 46 "parser.opt"
    {
#line 46 "parser.opt"
      mercury__parser__parse_tokens_with_op_table_4_p_0(mercury__term_io__TypeInfo_for_T_12, mercury__term_io__TypeClassInfo_for_op_table_11, mercury__term_io__Ops_5, mercury__term_io__V_8_17, mercury__term_io__V_10_33, mercury__term_io__Result_6);
#line 46 "parser.opt"
      return;
    }
#line 60 "parser.opt"
  }
#line 51 "term_io.m"
}

#line 46 "term_io.m"
void MR_CALL 
mercury__term_io__read_term_3_p_0(
#line 46 "term_io.m"
  MR_Word mercury__term_io__TypeInfo_for_T_11,
#line 46 "term_io.m"
  MR_Word * mercury__term_io__Result_4)
#line 46 "term_io.m"
{
#line 263 "term_io.m"
  {
#line 263 "term_io.m"
    MR_bool mercury__term_io__succeeded;
#line 263 "term_io.m"
    MR_Word mercury__term_io__TypeClassInfo_for_op_table_12;

#line 45 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 9549 "term_io.c"
    mercury__term_io__TypeClassInfo_for_op_table_12 = (MR_Word) &mercury__term_io_scalar_common_1[0];
#line 265 "term_io.m"
    {
#line 265 "term_io.m"
      mercury__term_io__read_term_with_op_table_4_p_0(mercury__term_io__TypeInfo_for_T_11, mercury__term_io__TypeClassInfo_for_op_table_12, ((MR_Box) ((MR_Integer) 0)), mercury__term_io__Result_4);
#line 265 "term_io.m"
      return;
    }
#line 263 "term_io.m"
  }
#line 46 "term_io.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module term_io. */
