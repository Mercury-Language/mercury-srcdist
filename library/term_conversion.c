/*
** Automatically generated from `term_conversion.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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


/* :- module term_conversion. */
/* :- implementation. */

/*
INIT mercury__term_conversion__init
ENDINIT
*/

#include "term_conversion.mih"


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
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




#line 93 "term_conversion.c"
static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_arg_context_0_0[3];

#line 96 "term_conversion.c"
static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_arg_context_0_0;

#line 99 "term_conversion.c"
static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_arg_context_0_0[1];

#line 102 "term_conversion.c"
static const MR_DuPtagLayout mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_arg_context_0[1];

#line 105 "term_conversion.c"
static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_arg_context_0[1];

#line 108 "term_conversion.c"
static const MR_Integer mercury__term_conversion__term_conversion__functor_number_map_term_to_type_arg_context_0[1];

#line 111 "term_conversion.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_conversion__list__ti_list_1term_conversion__type_ctor_info_term_to_type_arg_context_0;

#line 114 "term_conversion.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_conversion__term__pti_term_1__pseudo_1;

#line 117 "term_conversion.c"
static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_error_1_0[4];

#line 120 "term_conversion.c"
static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_0;

#line 123 "term_conversion.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_conversion__term__pti_var_1__pseudo_1;

#line 126 "term_conversion.c"
static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_error_1_1[2];

#line 129 "term_conversion.c"
static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_1;

#line 132 "term_conversion.c"
static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_0[1];

#line 135 "term_conversion.c"
static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_1[1];

#line 138 "term_conversion.c"
static const MR_DuPtagLayout mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_error_1[2];

#line 141 "term_conversion.c"
static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_error_1[2];

#line 144 "term_conversion.c"
static const MR_Integer mercury__term_conversion__term_conversion__functor_number_map_term_to_type_error_1[2];

#line 147 "term_conversion.c"
static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_result_2_0[1];

#line 150 "term_conversion.c"
static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_0;

#line 153 "term_conversion.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_conversion__term_conversion__pti_term_to_type_error_1__pseudo_2;

#line 156 "term_conversion.c"
static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_result_2_1[1];

#line 159 "term_conversion.c"
static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_1;

#line 162 "term_conversion.c"
static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_0[1];

#line 165 "term_conversion.c"
static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_1[1];

#line 168 "term_conversion.c"
static const MR_DuPtagLayout mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_result_2[2];

#line 171 "term_conversion.c"
static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_result_2[2];

#line 174 "term_conversion.c"
static const MR_Integer mercury__term_conversion__term_conversion__functor_number_map_term_to_type_result_2[2];

#line 177 "term_conversion.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term_conversion__term_conversion__pti_term_to_type_result_2__pseudo_1__plain_term__type_ctor_info_generic_0;

#line 180 "term_conversion.c"
static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_arg_context_0_0_10001(
#line 183 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_1,
#line 185 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_2);

#line 188 "term_conversion.c"
static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_arg_context_0_0_10001(
#line 191 "term_conversion.c"
  MR_Box * mercury__term_conversion__wrapper_arg_1,
#line 193 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_2,
#line 195 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_3);

#line 198 "term_conversion.c"
static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_context_0_0_10001(
#line 201 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_1,
#line 203 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_2);

#line 206 "term_conversion.c"
static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_context_0_0_10001(
#line 209 "term_conversion.c"
  MR_Box * mercury__term_conversion__wrapper_arg_1,
#line 211 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_2,
#line 213 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_3);

#line 216 "term_conversion.c"
static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_error_1_0_10001(
#line 219 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_1,
#line 221 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_2,
#line 223 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_3);

#line 226 "term_conversion.c"
static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_error_1_0_10001(
#line 229 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_1,
#line 231 "term_conversion.c"
  MR_Box * mercury__term_conversion__wrapper_arg_2,
#line 233 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_3,
#line 235 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_4);

#line 238 "term_conversion.c"
static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_2_0_10001(
#line 241 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_1,
#line 243 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_2,
#line 245 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_3,
#line 247 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_4);

#line 250 "term_conversion.c"
static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_2_0_10001(
#line 253 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_1,
#line 255 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_2,
#line 257 "term_conversion.c"
  MR_Box * mercury__term_conversion__wrapper_arg_3,
#line 259 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_4,
#line 261 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_5);

#line 264 "term_conversion.c"
static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_1_0_10001(
#line 267 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_1,
#line 269 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_2,
#line 271 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_3);

#line 274 "term_conversion.c"
static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_1_0_10001(
#line 277 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_1,
#line 279 "term_conversion.c"
  MR_Box * mercury__term_conversion__wrapper_arg_2,
#line 281 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_3,
#line 283 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_4);

#line 92 "version_array.opt"
static MR_Word MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
#line 92 "version_array.opt"
  MR_Word mercury__term_conversion__TypeInfo_for_T1_1_16,
#line 92 "version_array.opt"
  MR_Box mercury__term_conversion__VA_7_7,
#line 92 "version_array.opt"
  MR_Word mercury__term_conversion__Acc_8_8,
#line 92 "version_array.opt"
  MR_Integer mercury__term_conversion__Hi_9_9);

#line 318 "list.int"
static void MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(
#line 318 "list.int"
  MR_Word mercury__term_conversion__V_15_15,
#line 318 "list.int"
  MR_Word mercury__term_conversion__HeadVar__2_2,
#line 318 "list.int"
  MR_Word * mercury__term_conversion__HeadVar__3_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 461 "term_conversion.m"
static void MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
#line 461 "term_conversion.m"
  MR_Word mercury__term_conversion__Context_4,
#line 461 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_5,
#line 461 "term_conversion.m"
  MR_Word * mercury__term_conversion__Term_6);

#line 452 "term_conversion.m"
static void MR_CALL 
mercury__term_conversion__univ_list_to_term_list_2_p_0(
#line 452 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_7,
#line 452 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__1_1,
#line 452 "term_conversion.m"
  MR_Word * mercury__term_conversion__HeadVar__2_2);

#line 380 "term_conversion.m"
static MR_bool MR_CALL 
mercury__term_conversion__univ_to_term_special_case_6_p_0(
#line 380 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_69,
#line 380 "term_conversion.m"
  MR_String mercury__term_conversion__ModuleName_7,
#line 380 "term_conversion.m"
  MR_String mercury__term_conversion__TypeCtorName_8,
#line 380 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeArgs_9,
#line 380 "term_conversion.m"
  MR_Word mercury__term_conversion__Univ_10,
#line 380 "term_conversion.m"
  MR_Word mercury__term_conversion__Context_11,
#line 380 "term_conversion.m"
  MR_Word * mercury__term_conversion__Term_12);

#line 304 "term_conversion.m"
static MR_bool MR_CALL 
mercury__term_conversion__term_list_to_univ_list_7_p_0(
#line 304 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_33,
#line 304 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__1_1,
#line 304 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__2_2,
#line 304 "term_conversion.m"
  MR_Word mercury__term_conversion__Functor_3,
#line 304 "term_conversion.m"
  MR_Integer mercury__term_conversion__ArgNum_4,
#line 304 "term_conversion.m"
  MR_Word mercury__term_conversion__PrevContext_5,
#line 304 "term_conversion.m"
  MR_Word mercury__term_conversion__TermContext_6,
#line 304 "term_conversion.m"
  MR_Word * mercury__term_conversion__HeadVar__7_7);

#line 191 "term_conversion.m"
static MR_bool MR_CALL 
mercury__term_conversion__term_to_univ_special_case_6_p_0(
#line 191 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_137,
#line 191 "term_conversion.m"
  MR_String mercury__term_conversion__ModuleName_7,
#line 191 "term_conversion.m"
  MR_String mercury__term_conversion__TypeCtorName_8,
#line 191 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeArgs_9,
#line 191 "term_conversion.m"
  MR_Word mercury__term_conversion__Term_10,
#line 191 "term_conversion.m"
  MR_Word mercury__term_conversion__PrevContext_11,
#line 191 "term_conversion.m"
  MR_Word * mercury__term_conversion__Result_12);

#line 145 "term_conversion.m"
static void MR_CALL 
mercury__term_conversion__try_term_to_univ_2_4_p_0(
#line 145 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_34,
#line 145 "term_conversion.m"
  MR_Word mercury__term_conversion__Term_5,
#line 145 "term_conversion.m"
  MR_Word mercury__term_conversion__Type_6,
#line 145 "term_conversion.m"
  MR_Word mercury__term_conversion__Context_7,
#line 145 "term_conversion.m"
  MR_Word * mercury__term_conversion__Result_8);


static /* final */ const MR_Box mercury__term_conversion_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__term_conversion_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__term_conversion_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__term_conversion_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__term_conversion_scalar_common_6[6][1];


#line 220 "term_conversion.m"
/* sealed */ struct mercury__term_conversion__vector_common_type_5_0_s {
#line 220 "term_conversion.m"
  const MR_String mercury__term_conversion__vector_common_type_5_0__vct_5_f_0;
#line 220 "term_conversion.m"
  const MR_Integer mercury__term_conversion__vector_common_type_5_0__vct_5_f_1;
#line 220 "term_conversion.m"
};

static /* final */ const struct mercury__term_conversion__vector_common_type_5_0_s mercury__term_conversion_vector_common_5[19];



static /* final */ const MR_Box mercury__term_conversion_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_arg_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__term_conversion_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_conversion_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_conversion_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_conversion_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_conversion_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_conversion_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_conversion_scalar_common_6[6][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "version_array"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "univ"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "type_info"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "array"))
  },
};


static /* final */ const struct mercury__term_conversion__vector_common_type_5_0_s mercury__term_conversion_vector_common_5[19] = {
  /* row 0 */
  {
    (MR_String) "character",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "float",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "int",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "string",
    (MR_Integer) 3
  },
  /* row 4 */
  {
    (MR_String) "array",
    (MR_Integer) 0
  },
  /* row 5 */
  {
    (MR_String) "bitmap",
    (MR_Integer) 1
  },
  /* row 6 */
  {
    (MR_String) "builtin",
    (MR_Integer) 2
  },
  /* row 7 */
  {
    (MR_String) "univ",
    (MR_Integer) 3
  },
  /* row 8 */
  {
    (MR_String) "version_array",
    (MR_Integer) 4
  },
  /* row 9 */
  {
    (MR_String) "character",
    (MR_Integer) 0
  },
  /* row 10 */
  {
    (MR_String) "float",
    (MR_Integer) 1
  },
  /* row 11 */
  {
    (MR_String) "int",
    (MR_Integer) 2
  },
  /* row 12 */
  {
    (MR_String) "string",
    (MR_Integer) 3
  },
  /* row 13 */
  {
    (MR_String) "array",
    (MR_Integer) 0
  },
  /* row 14 */
  {
    (MR_String) "bitmap",
    (MR_Integer) 1
  },
  /* row 15 */
  {
    (MR_String) "builtin",
    (MR_Integer) 2
  },
  /* row 16 */
  {
    (MR_String) "type_desc",
    (MR_Integer) 3
  },
  /* row 17 */
  {
    (MR_String) "univ",
    (MR_Integer) 4
  },
  /* row 18 */
  {
    (MR_String) "version_array",
    (MR_Integer) 5
  },
};


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
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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
#include "private_builtin.mh"
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



#line 915 "term_conversion.c"
static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_arg_context_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_const_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 922 "term_conversion.c"
static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_arg_context_0_0 = {
  (MR_String) "arg_context",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_conversion__term_conversion__field_types_term_to_type_arg_context_0_0,
  NULL,
  NULL,
  NULL
};

#line 937 "term_conversion.c"
static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_arg_context_0_0[1] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_arg_context_0_0
};

#line 942 "term_conversion.c"
static const MR_DuPtagLayout mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_arg_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_arg_context_0_0
  }
};

#line 951 "term_conversion.c"
static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_arg_context_0[1] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_arg_context_0_0
};

#line 956 "term_conversion.c"
static const MR_Integer mercury__term_conversion__term_conversion__functor_number_map_term_to_type_arg_context_0[1] = {
  (MR_Integer) 0
};

#line 961 "term_conversion.c"
const MR_TypeCtorInfo_Struct mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_arg_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_conversion____Unify____term_to_type_arg_context_0_0_10001)),
  ((MR_Box) (mercury__term_conversion____Compare____term_to_type_arg_context_0_0_10001)),
  (MR_String) "term_conversion",
  (MR_String) "term_to_type_arg_context",
  {     mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_arg_context_0 },
  {     mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_arg_context_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term_conversion__term_conversion__functor_number_map_term_to_type_arg_context_0
};

#line 978 "term_conversion.c"
static const MR_FA_TypeInfo_Struct1 mercury__term_conversion__list__ti_list_1term_conversion__type_ctor_info_term_to_type_arg_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_arg_context_0
  }
};

#line 986 "term_conversion.c"
const MR_TypeCtorInfo_Struct mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term_conversion____Unify____term_to_type_context_0_0_10001)),
  ((MR_Box) (mercury__term_conversion____Compare____term_to_type_context_0_0_10001)),
  (MR_String) "term_conversion",
  (MR_String) "term_to_type_context",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__term_conversion__list__ti_list_1term_conversion__type_ctor_info_term_to_type_arg_context_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1003 "term_conversion.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_conversion__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1011 "term_conversion.c"
static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_error_1_0[4] = {
  (MR_PseudoTypeInfo) &mercury__term_conversion__term__pti_term_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__term_conversion__list__ti_list_1term_conversion__type_ctor_info_term_to_type_arg_context_0
};

#line 1019 "term_conversion.c"
static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_0 = {
  (MR_String) "type_error",
  (MR_Integer) 4,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_conversion__term_conversion__field_types_term_to_type_error_1_0,
  NULL,
  NULL,
  NULL
};

#line 1034 "term_conversion.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_conversion__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1042 "term_conversion.c"
static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_error_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__term_conversion__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term_conversion__list__ti_list_1term_conversion__type_ctor_info_term_to_type_arg_context_0
};

#line 1048 "term_conversion.c"
static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_1 = {
  (MR_String) "mode_error",
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term_conversion__term_conversion__field_types_term_to_type_error_1_1,
  NULL,
  NULL,
  NULL
};

#line 1063 "term_conversion.c"
static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_0[1] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_0
};

#line 1068 "term_conversion.c"
static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_1[1] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_1
};

#line 1073 "term_conversion.c"
static const MR_DuPtagLayout mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_error_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_1
  }
};

#line 1087 "term_conversion.c"
static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_error_1[2] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_1,
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_0
};

#line 1093 "term_conversion.c"
static const MR_Integer mercury__term_conversion__term_conversion__functor_number_map_term_to_type_error_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1099 "term_conversion.c"
const MR_TypeCtorInfo_Struct mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_error_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_conversion____Unify____term_to_type_error_1_0_10001)),
  ((MR_Box) (mercury__term_conversion____Compare____term_to_type_error_1_0_10001)),
  (MR_String) "term_conversion",
  (MR_String) "term_to_type_error",
  {     mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_error_1 },
  {     mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_error_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__term_conversion__term_conversion__functor_number_map_term_to_type_error_1
};

#line 1116 "term_conversion.c"
static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_result_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1121 "term_conversion.c"
static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_conversion__term_conversion__field_types_term_to_type_result_2_0,
  NULL,
  NULL,
  NULL
};

#line 1136 "term_conversion.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_conversion__term_conversion__pti_term_to_type_error_1__pseudo_2 = {
  &mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_error_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1144 "term_conversion.c"
static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_result_2_1[1] = {
  (MR_PseudoTypeInfo) &mercury__term_conversion__term_conversion__pti_term_to_type_error_1__pseudo_2
};

#line 1149 "term_conversion.c"
static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term_conversion__term_conversion__field_types_term_to_type_result_2_1,
  NULL,
  NULL,
  NULL
};

#line 1164 "term_conversion.c"
static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_0[1] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_0
};

#line 1169 "term_conversion.c"
static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_1[1] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_1
};

#line 1174 "term_conversion.c"
static const MR_DuPtagLayout mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_result_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_1
  }
};

#line 1188 "term_conversion.c"
static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_result_2[2] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_1,
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_0
};

#line 1194 "term_conversion.c"
static const MR_Integer mercury__term_conversion__term_conversion__functor_number_map_term_to_type_result_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1200 "term_conversion.c"
const MR_TypeCtorInfo_Struct mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_result_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_conversion____Unify____term_to_type_result_2_0_10001)),
  ((MR_Box) (mercury__term_conversion____Compare____term_to_type_result_2_0_10001)),
  (MR_String) "term_conversion",
  (MR_String) "term_to_type_result",
  {     mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_result_2 },
  {     mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_result_2 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__term_conversion__term_conversion__functor_number_map_term_to_type_result_2
};

#line 1217 "term_conversion.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term_conversion__term_conversion__pti_term_to_type_result_2__pseudo_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_result_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1226 "term_conversion.c"
const MR_TypeCtorInfo_Struct mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_result_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__term_conversion____Unify____term_to_type_result_1_0_10001)),
  ((MR_Box) (mercury__term_conversion____Compare____term_to_type_result_1_0_10001)),
  (MR_String) "term_conversion",
  (MR_String) "term_to_type_result",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__term_conversion__term_conversion__pti_term_to_type_result_2__pseudo_1__plain_term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1243 "term_conversion.c"
static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_arg_context_0_0_10001(
#line 1246 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_1,
#line 1248 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_2)
#line 1250 "term_conversion.c"
{
#line 1252 "term_conversion.c"
  {
#line 1254 "term_conversion.c"
    MR_bool mercury__term_conversion__succeeded;

#line 1257 "term_conversion.c"
    {
#line 1259 "term_conversion.c"
      mercury__term_conversion__succeeded = mercury__term_conversion____Unify____term_to_type_arg_context_0_0(((MR_Word) mercury__term_conversion__wrapper_arg_1), ((MR_Word) mercury__term_conversion__wrapper_arg_2));
    }
#line 1262 "term_conversion.c"
    return mercury__term_conversion__succeeded;
#line 1264 "term_conversion.c"
  }
#line 1266 "term_conversion.c"
}

#line 1269 "term_conversion.c"
static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_arg_context_0_0_10001(
#line 1272 "term_conversion.c"
  MR_Box * mercury__term_conversion__wrapper_arg_1,
#line 1274 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_2,
#line 1276 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_3)
#line 1278 "term_conversion.c"
{
#line 1280 "term_conversion.c"
  {
#line 1282 "term_conversion.c"
    MR_Word mercury__term_conversion__conv0_HeadVar__1_1;

#line 1285 "term_conversion.c"
    {
#line 1287 "term_conversion.c"
      mercury__term_conversion____Compare____term_to_type_arg_context_0_0(&mercury__term_conversion__conv0_HeadVar__1_1, ((MR_Word) mercury__term_conversion__wrapper_arg_2), ((MR_Word) mercury__term_conversion__wrapper_arg_3));
    }
#line 1290 "term_conversion.c"
    *mercury__term_conversion__wrapper_arg_1 = ((MR_Box) (mercury__term_conversion__conv0_HeadVar__1_1));
#line 1292 "term_conversion.c"
  }
#line 1294 "term_conversion.c"
}

#line 1297 "term_conversion.c"
static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_context_0_0_10001(
#line 1300 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_1,
#line 1302 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_2)
#line 1304 "term_conversion.c"
{
#line 1306 "term_conversion.c"
  {
#line 1308 "term_conversion.c"
    MR_bool mercury__term_conversion__succeeded;

#line 1311 "term_conversion.c"
    {
#line 1313 "term_conversion.c"
      mercury__term_conversion__succeeded = mercury__term_conversion____Unify____term_to_type_context_0_0(((MR_Word) mercury__term_conversion__wrapper_arg_1), ((MR_Word) mercury__term_conversion__wrapper_arg_2));
    }
#line 1316 "term_conversion.c"
    return mercury__term_conversion__succeeded;
#line 1318 "term_conversion.c"
  }
#line 1320 "term_conversion.c"
}

#line 1323 "term_conversion.c"
static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_context_0_0_10001(
#line 1326 "term_conversion.c"
  MR_Box * mercury__term_conversion__wrapper_arg_1,
#line 1328 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_2,
#line 1330 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_3)
#line 1332 "term_conversion.c"
{
#line 1334 "term_conversion.c"
  {
#line 1336 "term_conversion.c"
    MR_Word mercury__term_conversion__conv0_HeadVar__1_1;

#line 1339 "term_conversion.c"
    {
#line 1341 "term_conversion.c"
      mercury__term_conversion____Compare____term_to_type_context_0_0(&mercury__term_conversion__conv0_HeadVar__1_1, ((MR_Word) mercury__term_conversion__wrapper_arg_2), ((MR_Word) mercury__term_conversion__wrapper_arg_3));
    }
#line 1344 "term_conversion.c"
    *mercury__term_conversion__wrapper_arg_1 = ((MR_Box) (mercury__term_conversion__conv0_HeadVar__1_1));
#line 1346 "term_conversion.c"
  }
#line 1348 "term_conversion.c"
}

#line 1351 "term_conversion.c"
static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_error_1_0_10001(
#line 1354 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_1,
#line 1356 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_2,
#line 1358 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_3)
#line 1360 "term_conversion.c"
{
#line 1362 "term_conversion.c"
  {
#line 1364 "term_conversion.c"
    MR_bool mercury__term_conversion__succeeded;

#line 1367 "term_conversion.c"
    {
#line 1369 "term_conversion.c"
      mercury__term_conversion__succeeded = mercury__term_conversion____Unify____term_to_type_error_1_0(((MR_Word) mercury__term_conversion__wrapper_arg_1), ((MR_Word) mercury__term_conversion__wrapper_arg_2), ((MR_Word) mercury__term_conversion__wrapper_arg_3));
    }
#line 1372 "term_conversion.c"
    return mercury__term_conversion__succeeded;
#line 1374 "term_conversion.c"
  }
#line 1376 "term_conversion.c"
}

#line 1379 "term_conversion.c"
static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_error_1_0_10001(
#line 1382 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_1,
#line 1384 "term_conversion.c"
  MR_Box * mercury__term_conversion__wrapper_arg_2,
#line 1386 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_3,
#line 1388 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_4)
#line 1390 "term_conversion.c"
{
#line 1392 "term_conversion.c"
  {
#line 1394 "term_conversion.c"
    MR_Word mercury__term_conversion__conv0_HeadVar__1_1;

#line 1397 "term_conversion.c"
    {
#line 1399 "term_conversion.c"
      mercury__term_conversion____Compare____term_to_type_error_1_0(((MR_Word) mercury__term_conversion__wrapper_arg_1), &mercury__term_conversion__conv0_HeadVar__1_1, ((MR_Word) mercury__term_conversion__wrapper_arg_3), ((MR_Word) mercury__term_conversion__wrapper_arg_4));
    }
#line 1402 "term_conversion.c"
    *mercury__term_conversion__wrapper_arg_2 = ((MR_Box) (mercury__term_conversion__conv0_HeadVar__1_1));
#line 1404 "term_conversion.c"
  }
#line 1406 "term_conversion.c"
}

#line 1409 "term_conversion.c"
static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_2_0_10001(
#line 1412 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_1,
#line 1414 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_2,
#line 1416 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_3,
#line 1418 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_4)
#line 1420 "term_conversion.c"
{
#line 1422 "term_conversion.c"
  {
#line 1424 "term_conversion.c"
    MR_bool mercury__term_conversion__succeeded;

#line 1427 "term_conversion.c"
    {
#line 1429 "term_conversion.c"
      mercury__term_conversion__succeeded = mercury__term_conversion____Unify____term_to_type_result_2_0(((MR_Word) mercury__term_conversion__wrapper_arg_1), ((MR_Word) mercury__term_conversion__wrapper_arg_2), ((MR_Word) mercury__term_conversion__wrapper_arg_3), ((MR_Word) mercury__term_conversion__wrapper_arg_4));
    }
#line 1432 "term_conversion.c"
    return mercury__term_conversion__succeeded;
#line 1434 "term_conversion.c"
  }
#line 1436 "term_conversion.c"
}

#line 1439 "term_conversion.c"
static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_2_0_10001(
#line 1442 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_1,
#line 1444 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_2,
#line 1446 "term_conversion.c"
  MR_Box * mercury__term_conversion__wrapper_arg_3,
#line 1448 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_4,
#line 1450 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_5)
#line 1452 "term_conversion.c"
{
#line 1454 "term_conversion.c"
  {
#line 1456 "term_conversion.c"
    MR_Word mercury__term_conversion__conv0_HeadVar__1_1;

#line 1459 "term_conversion.c"
    {
#line 1461 "term_conversion.c"
      mercury__term_conversion____Compare____term_to_type_result_2_0(((MR_Word) mercury__term_conversion__wrapper_arg_1), ((MR_Word) mercury__term_conversion__wrapper_arg_2), &mercury__term_conversion__conv0_HeadVar__1_1, ((MR_Word) mercury__term_conversion__wrapper_arg_4), ((MR_Word) mercury__term_conversion__wrapper_arg_5));
    }
#line 1464 "term_conversion.c"
    *mercury__term_conversion__wrapper_arg_3 = ((MR_Box) (mercury__term_conversion__conv0_HeadVar__1_1));
#line 1466 "term_conversion.c"
  }
#line 1468 "term_conversion.c"
}

#line 1471 "term_conversion.c"
static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_1_0_10001(
#line 1474 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_1,
#line 1476 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_2,
#line 1478 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_3)
#line 1480 "term_conversion.c"
{
#line 1482 "term_conversion.c"
  {
#line 1484 "term_conversion.c"
    MR_bool mercury__term_conversion__succeeded;

#line 1487 "term_conversion.c"
    {
#line 1489 "term_conversion.c"
      mercury__term_conversion__succeeded = mercury__term_conversion____Unify____term_to_type_result_1_0(((MR_Word) mercury__term_conversion__wrapper_arg_1), ((MR_Word) mercury__term_conversion__wrapper_arg_2), ((MR_Word) mercury__term_conversion__wrapper_arg_3));
    }
#line 1492 "term_conversion.c"
    return mercury__term_conversion__succeeded;
#line 1494 "term_conversion.c"
  }
#line 1496 "term_conversion.c"
}

#line 1499 "term_conversion.c"
static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_1_0_10001(
#line 1502 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_1,
#line 1504 "term_conversion.c"
  MR_Box * mercury__term_conversion__wrapper_arg_2,
#line 1506 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_3,
#line 1508 "term_conversion.c"
  MR_Box mercury__term_conversion__wrapper_arg_4)
#line 1510 "term_conversion.c"
{
#line 1512 "term_conversion.c"
  {
#line 1514 "term_conversion.c"
    MR_Word mercury__term_conversion__conv0_HeadVar__1_1;

#line 1517 "term_conversion.c"
    {
#line 1519 "term_conversion.c"
      mercury__term_conversion____Compare____term_to_type_result_1_0(((MR_Word) mercury__term_conversion__wrapper_arg_1), &mercury__term_conversion__conv0_HeadVar__1_1, ((MR_Word) mercury__term_conversion__wrapper_arg_3), ((MR_Word) mercury__term_conversion__wrapper_arg_4));
    }
#line 1522 "term_conversion.c"
    *mercury__term_conversion__wrapper_arg_2 = ((MR_Box) (mercury__term_conversion__conv0_HeadVar__1_1));
#line 1524 "term_conversion.c"
  }
#line 1526 "term_conversion.c"
}

#line 92 "version_array.opt"
static MR_Word MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
#line 92 "version_array.opt"
  MR_Word mercury__term_conversion__TypeInfo_for_T1_1_16,
#line 92 "version_array.opt"
  MR_Box mercury__term_conversion__VA_7_7,
#line 92 "version_array.opt"
  MR_Word mercury__term_conversion__Acc_8_8,
#line 92 "version_array.opt"
  MR_Integer mercury__term_conversion__Hi_9_9)
#line 92 "version_array.opt"
{
#line 264 "version_array.opt"
  while (MR_TRUE)
#line 264 "version_array.opt"
    {
#line 264 "version_array.opt"
      /* tailcall optimized into a loop */
#line 264 "version_array.opt"
      {
#line 264 "version_array.opt"
        MR_bool mercury__term_conversion__succeeded = ((MR_Integer) 0 <= mercury__term_conversion__Hi_9_9);
#line 264 "version_array.opt"
        MR_Word mercury__term_conversion__HeadVar__5_5_10;

#line 264 "version_array.opt"
        if (mercury__term_conversion__succeeded)
#line 259 "version_array.opt"
          {
#line 259 "version_array.opt"
            MR_Word mercury__term_conversion__V_11_12;
#line 259 "version_array.opt"
            MR_Integer mercury__term_conversion__V_13_13;
#line 259 "version_array.opt"
            MR_Box mercury__term_conversion__V_12_14;

#line 261 "version_array.opt"
            {
#line 261 "version_array.opt"
              mercury__term_conversion__V_12_14 = mercury__version_array__lookup_2_f_0(mercury__term_conversion__TypeInfo_for_T1_1_16, mercury__term_conversion__VA_7_7, mercury__term_conversion__Hi_9_9);
            }
#line 44 "list.opt"
            {
#line 44 "list.opt"
              mercury__term_conversion__V_11_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 44 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__term_conversion__V_11_12, 0) = mercury__term_conversion__V_12_14;
#line 44 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__term_conversion__V_11_12, 1) = ((MR_Box) (mercury__term_conversion__Acc_8_8));
#line 44 "list.opt"
            }
#line 262 "version_array.opt"
            mercury__term_conversion__V_13_13 = (mercury__term_conversion__Hi_9_9 - (MR_Integer) 1);
#line 259 "version_array.opt"
            /* direct tailcall eliminated */
#line 259 "version_array.opt"
            {
#line 259 "version_array.opt"
              MR_Word mercury__term_conversion__Acc_8__tmp_copy_8 = mercury__term_conversion__V_11_12;
#line 259 "version_array.opt"
              MR_Integer mercury__term_conversion__Hi_9__tmp_copy_9 = mercury__term_conversion__V_13_13;

#line 259 "version_array.opt"
              mercury__term_conversion__Hi_9_9 = mercury__term_conversion__Hi_9__tmp_copy_9;
#line 259 "version_array.opt"
              mercury__term_conversion__Acc_8_8 = mercury__term_conversion__Acc_8__tmp_copy_8;
#line 259 "version_array.opt"
            }
#line 259 "version_array.opt"
            continue;
#line 259 "version_array.opt"
          }
#line 264 "version_array.opt"
        else
#line 265 "version_array.opt"
          mercury__term_conversion__HeadVar__5_5_10 = mercury__term_conversion__Acc_8_8;
#line 264 "version_array.opt"
        return mercury__term_conversion__HeadVar__5_5_10;
#line 264 "version_array.opt"
      }
#line 264 "version_array.opt"
      break;
#line 264 "version_array.opt"
    }
#line 92 "version_array.opt"
}

#line 318 "list.int"
static void MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(
#line 318 "list.int"
  MR_Word mercury__term_conversion__V_15_15,
#line 318 "list.int"
  MR_Word mercury__term_conversion__HeadVar__2_2,
#line 318 "list.int"
  MR_Word * mercury__term_conversion__HeadVar__3_3)
#line 318 "list.int"
{
#line 166 "list.opt"
  {
#line 166 "list.opt"
    MR_bool mercury__term_conversion__succeeded;

#line 166 "list.opt"
    if ((mercury__term_conversion__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 166 "list.opt"
      *mercury__term_conversion__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 166 "list.opt"
    else
#line 167 "list.opt"
      {
#line 167 "list.opt"
        MR_Word mercury__term_conversion__H0_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0)));
#line 167 "list.opt"
        MR_Word mercury__term_conversion__T0_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 1)));
#line 167 "list.opt"
        MR_Word mercury__term_conversion__H_8_8;
#line 167 "list.opt"
        MR_Word mercury__term_conversion__T_9_9;

#line 168 "list.opt"
        {
#line 168 "list.opt"
          mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(mercury__term_conversion__V_15_15, mercury__term_conversion__H0_6_6, &mercury__term_conversion__H_8_8);
        }
#line 169 "list.opt"
        {
#line 169 "list.opt"
          mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(mercury__term_conversion__V_15_15, mercury__term_conversion__T0_7_7, &mercury__term_conversion__T_9_9);
        }
#line 167 "list.opt"
        {
#line 167 "list.opt"
          MR_Word base;
#line 167 "list.opt"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "list.opt"
          *mercury__term_conversion__HeadVar__3_3 = base;
#line 167 "list.opt"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_conversion__H_8_8));
#line 167 "list.opt"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_conversion__T_9_9));
#line 167 "list.opt"
        }
#line 167 "list.opt"
      }
#line 166 "list.opt"
  }
#line 318 "list.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__term_conversion__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 461 "term_conversion.m"
static void MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
#line 461 "term_conversion.m"
  MR_Word mercury__term_conversion__Context_4,
#line 461 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_5,
#line 461 "term_conversion.m"
  MR_Word * mercury__term_conversion__Term_6)
#line 461 "term_conversion.m"
{
#line 463 "term_conversion.m"
  {
#line 463 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 463 "term_conversion.m"
    MR_Word mercury__term_conversion__TypeCtor_7;
#line 463 "term_conversion.m"
    MR_Word mercury__term_conversion__ArgTypes_8;
#line 463 "term_conversion.m"
    MR_String mercury__term_conversion__TypeName_9;
#line 463 "term_conversion.m"
    MR_String mercury__term_conversion__ModuleName_10;
#line 463 "term_conversion.m"
    MR_Word mercury__term_conversion__ArgTerms_11;
#line 144 "type_desc.opt"
    MR_String mercury__term_conversion___ModuleName_5_32;
#line 144 "type_desc.opt"
    MR_Integer mercury__term_conversion___Arity_6_33;
#line 144 "type_desc.opt"
    MR_String mercury__term_conversion___ModuleName_5_36;
#line 144 "type_desc.opt"
    MR_Integer mercury__term_conversion___Arity_6_37;

#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__term_conversion__TypeInfo_5 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 1755 "term_conversion.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__TypeCtor_7  = TypeCtorDesc;
	 mercury__term_conversion__ArgTypes_8  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 144 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_conversion__TypeCtor_7 ;
		{
#line 144 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}
#line 1804 "term_conversion.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion___ModuleName_5_32  = TypeCtorModuleName;
	 mercury__term_conversion__TypeName_9  = TypeCtorName;
	 mercury__term_conversion___Arity_6_33  = TypeCtorArity;
#line 144 "type_desc.opt"
}
#line 144 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_conversion__TypeCtor_7 ;
		{
#line 144 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}
#line 1854 "term_conversion.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion___ModuleName_5_36  = TypeCtorModuleName;
	 mercury__term_conversion__ModuleName_10  = TypeCtorName;
	 mercury__term_conversion___Arity_6_37  = TypeCtorArity;
#line 144 "type_desc.opt"
}
#line 467 "term_conversion.m"
    {
#line 467 "term_conversion.m"
      mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(mercury__term_conversion__Context_4, mercury__term_conversion__ArgTypes_8, &mercury__term_conversion__ArgTerms_11);
    }
#line 469 "term_conversion.m"
    mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__ModuleName_10, (MR_String) "builtin") == 0);
#line 471 "term_conversion.m"
    if (mercury__term_conversion__succeeded)
#line 470 "term_conversion.m"
      {
#line 470 "term_conversion.m"
        MR_Word mercury__term_conversion__V_15_15;

#line 470 "term_conversion.m"
        {
#line 470 "term_conversion.m"
          mercury__term_conversion__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 470 "term_conversion.m"
          MR_hl_field(MR_mktag(0), mercury__term_conversion__V_15_15, 0) = ((MR_Box) (mercury__term_conversion__TypeName_9));
#line 470 "term_conversion.m"
        }
#line 470 "term_conversion.m"
        {
#line 470 "term_conversion.m"
          MR_Word base;
#line 470 "term_conversion.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 470 "term_conversion.m"
          *mercury__term_conversion__Term_6 = base;
#line 470 "term_conversion.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__V_15_15));
#line 470 "term_conversion.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term_conversion__ArgTerms_11));
#line 470 "term_conversion.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term_conversion__Context_4));
#line 470 "term_conversion.m"
        }
#line 470 "term_conversion.m"
      }
#line 471 "term_conversion.m"
    else
#line 472 "term_conversion.m"
      {
#line 472 "term_conversion.m"
        MR_Word mercury__term_conversion__Arg1_12;
#line 472 "term_conversion.m"
        MR_Word mercury__term_conversion__Arg2_13;
#line 472 "term_conversion.m"
        MR_Word mercury__term_conversion__V_16_16;
#line 472 "term_conversion.m"
        MR_Word mercury__term_conversion__V_17_17;
#line 472 "term_conversion.m"
        MR_Word mercury__term_conversion__V_18_18;
#line 472 "term_conversion.m"
        MR_Word mercury__term_conversion__V_19_19;
#line 472 "term_conversion.m"
        MR_Word mercury__term_conversion__V_21_21;
#line 472 "term_conversion.m"
        MR_Word mercury__term_conversion__V_22_22;
#line 472 "term_conversion.m"
        MR_Word mercury__term_conversion__V_23_23;

#line 472 "term_conversion.m"
        {
#line 472 "term_conversion.m"
          mercury__term_conversion__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 472 "term_conversion.m"
          MR_hl_field(MR_mktag(0), mercury__term_conversion__V_16_16, 0) = ((MR_Box) (mercury__term_conversion__ModuleName_10));
#line 472 "term_conversion.m"
        }
#line 472 "term_conversion.m"
        mercury__term_conversion__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 472 "term_conversion.m"
        {
#line 472 "term_conversion.m"
          mercury__term_conversion__Arg1_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 472 "term_conversion.m"
          MR_hl_field(MR_mktag(0), mercury__term_conversion__Arg1_12, 0) = ((MR_Box) (mercury__term_conversion__V_16_16));
#line 472 "term_conversion.m"
          MR_hl_field(MR_mktag(0), mercury__term_conversion__Arg1_12, 1) = ((MR_Box) (mercury__term_conversion__V_17_17));
#line 472 "term_conversion.m"
          MR_hl_field(MR_mktag(0), mercury__term_conversion__Arg1_12, 2) = ((MR_Box) (mercury__term_conversion__Context_4));
#line 472 "term_conversion.m"
        }
#line 473 "term_conversion.m"
        {
#line 473 "term_conversion.m"
          mercury__term_conversion__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 473 "term_conversion.m"
          MR_hl_field(MR_mktag(0), mercury__term_conversion__V_18_18, 0) = ((MR_Box) (mercury__term_conversion__TypeName_9));
#line 473 "term_conversion.m"
        }
#line 473 "term_conversion.m"
        {
#line 473 "term_conversion.m"
          mercury__term_conversion__Arg2_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 473 "term_conversion.m"
          MR_hl_field(MR_mktag(0), mercury__term_conversion__Arg2_13, 0) = ((MR_Box) (mercury__term_conversion__V_18_18));
#line 473 "term_conversion.m"
          MR_hl_field(MR_mktag(0), mercury__term_conversion__Arg2_13, 1) = ((MR_Box) (mercury__term_conversion__ArgTerms_11));
#line 473 "term_conversion.m"
          MR_hl_field(MR_mktag(0), mercury__term_conversion__Arg2_13, 2) = ((MR_Box) (mercury__term_conversion__Context_4));
#line 473 "term_conversion.m"
        }
#line 474 "term_conversion.m"
        mercury__term_conversion__V_19_19 = (MR_Word) &mercury__term_conversion_scalar_common_6[3];
#line 474 "term_conversion.m"
        mercury__term_conversion__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 474 "term_conversion.m"
        {
#line 474 "term_conversion.m"
          mercury__term_conversion__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "term_conversion.m"
          MR_hl_field(MR_mktag(1), mercury__term_conversion__V_22_22, 0) = ((MR_Box) (mercury__term_conversion__Arg2_13));
#line 474 "term_conversion.m"
          MR_hl_field(MR_mktag(1), mercury__term_conversion__V_22_22, 1) = ((MR_Box) (mercury__term_conversion__V_23_23));
#line 474 "term_conversion.m"
        }
#line 474 "term_conversion.m"
        {
#line 474 "term_conversion.m"
          mercury__term_conversion__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "term_conversion.m"
          MR_hl_field(MR_mktag(1), mercury__term_conversion__V_21_21, 0) = ((MR_Box) (mercury__term_conversion__Arg1_12));
#line 474 "term_conversion.m"
          MR_hl_field(MR_mktag(1), mercury__term_conversion__V_21_21, 1) = ((MR_Box) (mercury__term_conversion__V_22_22));
#line 474 "term_conversion.m"
        }
#line 474 "term_conversion.m"
        {
#line 474 "term_conversion.m"
          MR_Word base;
#line 474 "term_conversion.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 474 "term_conversion.m"
          *mercury__term_conversion__Term_6 = base;
#line 474 "term_conversion.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__V_19_19));
#line 474 "term_conversion.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term_conversion__V_21_21));
#line 474 "term_conversion.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term_conversion__Context_4));
#line 474 "term_conversion.m"
        }
#line 472 "term_conversion.m"
      }
#line 463 "term_conversion.m"
  }
#line 461 "term_conversion.m"
}

#line 31 "term_conversion.m"
void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_2_0(
#line 31 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_14,
#line 31 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_U_15,
#line 31 "term_conversion.m"
  MR_Word * mercury__term_conversion__HeadVar__1_1,
#line 31 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__2_2,
#line 31 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__3_3)
#line 31 "term_conversion.m"
{
#line 31 "term_conversion.m"
  {
#line 31 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 31 "term_conversion.m"
    MR_Integer mercury__term_conversion__CastX_12 = (MR_Integer) mercury__term_conversion__HeadVar__2_2;
#line 31 "term_conversion.m"
    MR_Integer mercury__term_conversion__CastY_13 = (MR_Integer) mercury__term_conversion__HeadVar__3_3;

#line 31 "term_conversion.m"
    mercury__term_conversion__succeeded = (mercury__term_conversion__CastX_12 == mercury__term_conversion__CastY_13);
#line 31 "term_conversion.m"
    if (mercury__term_conversion__succeeded)
#line 2043 "term_conversion.c"
      *mercury__term_conversion__HeadVar__1_1 = (MR_Integer) 0;
#line 31 "term_conversion.m"
    else
#line 31 "term_conversion.m"
    if (((MR_tag((MR_Word) mercury__term_conversion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 31 "term_conversion.m"
      {
#line 31 "term_conversion.m"
        MR_Word mercury__term_conversion__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0)));

#line 31 "term_conversion.m"
        if (((MR_tag((MR_Word) mercury__term_conversion__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 31 "term_conversion.m"
          {
#line 31 "term_conversion.m"
            MR_Word mercury__term_conversion__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 0)));

#line 31 "term_conversion.m"
            {
#line 31 "term_conversion.m"
              mercury__term_conversion____Compare____term_to_type_error_1_0(mercury__term_conversion__TypeInfo_for_U_15, mercury__term_conversion__HeadVar__1_1, mercury__term_conversion__V_18_18, mercury__term_conversion__V_11_11);
#line 31 "term_conversion.m"
              return;
            }
#line 31 "term_conversion.m"
          }
#line 31 "term_conversion.m"
        else
#line 2072 "term_conversion.c"
          *mercury__term_conversion__HeadVar__1_1 = (MR_Integer) 2;
#line 31 "term_conversion.m"
      }
#line 31 "term_conversion.m"
    else
#line 31 "term_conversion.m"
      {
#line 31 "term_conversion.m"
        MR_Box mercury__term_conversion__V_19_19 = (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0));

#line 31 "term_conversion.m"
        if (((MR_tag((MR_Word) mercury__term_conversion__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2085 "term_conversion.c"
          *mercury__term_conversion__HeadVar__1_1 = (MR_Integer) 1;
#line 31 "term_conversion.m"
        else
#line 31 "term_conversion.m"
          {
#line 31 "term_conversion.m"
            MR_Box mercury__term_conversion__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 0));

#line 31 "term_conversion.m"
            {
#line 31 "term_conversion.m"
              mercury__builtin__compare_3_p_0(mercury__term_conversion__TypeInfo_for_T_14, mercury__term_conversion__HeadVar__1_1, mercury__term_conversion__V_19_19, mercury__term_conversion__V_5_5);
#line 31 "term_conversion.m"
              return;
            }
#line 31 "term_conversion.m"
          }
#line 31 "term_conversion.m"
      }
#line 31 "term_conversion.m"
  }
#line 31 "term_conversion.m"
}

#line 31 "term_conversion.m"
MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_2_0(
#line 31 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_9,
#line 31 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_U_10,
#line 31 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__1_1,
#line 31 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__2_2)
#line 31 "term_conversion.m"
{
#line 31 "term_conversion.m"
  {
#line 31 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 31 "term_conversion.m"
    MR_Integer mercury__term_conversion__CastX_7 = (MR_Integer) mercury__term_conversion__HeadVar__1_1;
#line 31 "term_conversion.m"
    MR_Integer mercury__term_conversion__CastY_8 = (MR_Integer) mercury__term_conversion__HeadVar__2_2;

#line 31 "term_conversion.m"
    mercury__term_conversion__succeeded = (mercury__term_conversion__CastX_7 == mercury__term_conversion__CastY_8);
#line 31 "term_conversion.m"
    if (mercury__term_conversion__succeeded)
#line 31 "term_conversion.m"
      mercury__term_conversion__succeeded = MR_TRUE;
#line 31 "term_conversion.m"
    else
#line 31 "term_conversion.m"
    if (((MR_tag((MR_Word) mercury__term_conversion__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 31 "term_conversion.m"
      {
#line 31 "term_conversion.m"
        MR_Word mercury__term_conversion__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 0)));
#line 31 "term_conversion.m"
        MR_Word mercury__term_conversion__V_6_6;

#line 31 "term_conversion.m"
        mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 31 "term_conversion.m"
        if (mercury__term_conversion__succeeded)
#line 31 "term_conversion.m"
          {
#line 31 "term_conversion.m"
            mercury__term_conversion__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0)));
#line 2157 "term_conversion.c"
            {
#line 2159 "term_conversion.c"
              return mercury__term_conversion__succeeded = mercury__term_conversion____Unify____term_to_type_error_1_0(mercury__term_conversion__TypeInfo_for_U_10, mercury__term_conversion__V_5_5, mercury__term_conversion__V_6_6);
            }
#line 31 "term_conversion.m"
          }
#line 31 "term_conversion.m"
      }
#line 31 "term_conversion.m"
    else
#line 31 "term_conversion.m"
      {
#line 31 "term_conversion.m"
        MR_Box mercury__term_conversion__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 0));
#line 31 "term_conversion.m"
        MR_Box mercury__term_conversion__V_4_4;

#line 31 "term_conversion.m"
        mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 31 "term_conversion.m"
        if (mercury__term_conversion__succeeded)
#line 31 "term_conversion.m"
          {
#line 31 "term_conversion.m"
            mercury__term_conversion__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0));
#line 2183 "term_conversion.c"
            {
#line 2185 "term_conversion.c"
              return mercury__term_conversion__succeeded = mercury__builtin__unify_2_p_0(mercury__term_conversion__TypeInfo_for_T_9, mercury__term_conversion__V_3_3, mercury__term_conversion__V_4_4);
            }
#line 31 "term_conversion.m"
          }
#line 31 "term_conversion.m"
      }
#line 31 "term_conversion.m"
    return mercury__term_conversion__succeeded;
#line 31 "term_conversion.m"
  }
#line 31 "term_conversion.m"
}

#line 35 "term_conversion.m"
void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_1_0(
#line 35 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_6,
#line 35 "term_conversion.m"
  MR_Word * mercury__term_conversion__HeadVar__1_1,
#line 35 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__2_2,
#line 35 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__3_3)
#line 35 "term_conversion.m"
{
#line 35 "term_conversion.m"
  {
#line 35 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 35 "term_conversion.m"
    MR_Word mercury__term_conversion__TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 35 "term_conversion.m"
    MR_Word mercury__term_conversion__Cast_HeadVar1_4 = mercury__term_conversion__HeadVar__2_2;
#line 35 "term_conversion.m"
    MR_Word mercury__term_conversion__Cast_HeadVar2_5 = mercury__term_conversion__HeadVar__3_3;

#line 35 "term_conversion.m"
    {
#line 35 "term_conversion.m"
      mercury__term_conversion____Compare____term_to_type_result_2_0(mercury__term_conversion__TypeInfo_for_T_6, mercury__term_conversion__TypeCtorInfo_7_7, mercury__term_conversion__HeadVar__1_1, mercury__term_conversion__Cast_HeadVar1_4, mercury__term_conversion__Cast_HeadVar2_5);
#line 35 "term_conversion.m"
      return;
    }
#line 35 "term_conversion.m"
  }
#line 35 "term_conversion.m"
}

#line 35 "term_conversion.m"
MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_1_0(
#line 35 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_5,
#line 35 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__1_1,
#line 35 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__2_2)
#line 35 "term_conversion.m"
{
#line 35 "term_conversion.m"
  {
#line 35 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 35 "term_conversion.m"
    MR_Word mercury__term_conversion__TypeCtorInfo_6_6 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 35 "term_conversion.m"
    MR_Word mercury__term_conversion__Cast_HeadVar1_3 = mercury__term_conversion__HeadVar__1_1;
#line 35 "term_conversion.m"
    MR_Word mercury__term_conversion__Cast_HeadVar2_4 = mercury__term_conversion__HeadVar__2_2;

#line 35 "term_conversion.m"
    {
#line 35 "term_conversion.m"
      return mercury__term_conversion__succeeded = mercury__term_conversion____Unify____term_to_type_result_2_0(mercury__term_conversion__TypeInfo_for_T_5, mercury__term_conversion__TypeCtorInfo_6_6, mercury__term_conversion__Cast_HeadVar1_3, mercury__term_conversion__Cast_HeadVar2_4);
    }
#line 35 "term_conversion.m"
    return mercury__term_conversion__succeeded;
#line 35 "term_conversion.m"
  }
#line 35 "term_conversion.m"
}

#line 37 "term_conversion.m"
void MR_CALL 
mercury__term_conversion____Compare____term_to_type_error_1_0(
#line 37 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_34,
#line 37 "term_conversion.m"
  MR_Word * mercury__term_conversion__HeadVar__1_1,
#line 37 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__2_2,
#line 37 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__3_3)
#line 37 "term_conversion.m"
{
#line 37 "term_conversion.m"
  {
#line 37 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 37 "term_conversion.m"
    MR_Integer mercury__term_conversion__CastX_32 = (MR_Integer) mercury__term_conversion__HeadVar__2_2;
#line 37 "term_conversion.m"
    MR_Integer mercury__term_conversion__CastY_33 = (MR_Integer) mercury__term_conversion__HeadVar__3_3;

#line 37 "term_conversion.m"
    mercury__term_conversion__succeeded = (mercury__term_conversion__CastX_32 == mercury__term_conversion__CastY_33);
#line 37 "term_conversion.m"
    if (mercury__term_conversion__succeeded)
#line 2295 "term_conversion.c"
      *mercury__term_conversion__HeadVar__1_1 = (MR_Integer) 0;
#line 37 "term_conversion.m"
    else
#line 37 "term_conversion.m"
    if (((MR_tag((MR_Word) mercury__term_conversion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 37 "term_conversion.m"
      {
#line 37 "term_conversion.m"
        MR_Word mercury__term_conversion__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 1)));
#line 37 "term_conversion.m"
        MR_Word mercury__term_conversion__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0)));

#line 37 "term_conversion.m"
        if (((MR_tag((MR_Word) mercury__term_conversion__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 37 "term_conversion.m"
          {
#line 37 "term_conversion.m"
            MR_Word mercury__term_conversion__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 0)));
#line 37 "term_conversion.m"
            MR_Word mercury__term_conversion__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 1)));
#line 37 "term_conversion.m"
            MR_Word mercury__term_conversion__V_31_31;
#line 37 "term_conversion.m"
            MR_Integer mercury__term_conversion__V_49_49 = (MR_Integer) mercury__term_conversion__V_44_44;
#line 37 "term_conversion.m"
            MR_Integer mercury__term_conversion__V_50_50 = (MR_Integer) mercury__term_conversion__V_29_29;

#line 66 "private_builtin.opt"
            mercury__term_conversion__succeeded = (mercury__term_conversion__V_49_49 < mercury__term_conversion__V_50_50);
#line 69 "private_builtin.opt"
            if (mercury__term_conversion__succeeded)
#line 68 "private_builtin.opt"
              mercury__term_conversion__V_31_31 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__term_conversion__succeeded = (mercury__term_conversion__V_49_49 == mercury__term_conversion__V_50_50);
#line 74 "private_builtin.opt"
                if (mercury__term_conversion__succeeded)
#line 73 "private_builtin.opt"
                  mercury__term_conversion__V_31_31 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__term_conversion__V_31_31 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 2345 "term_conversion.c"
            mercury__term_conversion__succeeded = (mercury__term_conversion__V_31_31 == (MR_Integer) 0);
#line 37 "term_conversion.m"
            mercury__term_conversion__succeeded = !(mercury__term_conversion__succeeded);
#line 37 "term_conversion.m"
            if (mercury__term_conversion__succeeded)
#line 37 "term_conversion.m"
              *mercury__term_conversion__HeadVar__1_1 = mercury__term_conversion__V_31_31;
#line 37 "term_conversion.m"
            else
#line 37 "term_conversion.m"
              {
#line 37 "term_conversion.m"
                MR_Word mercury__term_conversion__TypeInfo_37_37 = (MR_Word) &mercury__term_conversion_scalar_common_1[0];

#line 37 "term_conversion.m"
                {
#line 37 "term_conversion.m"
                  mercury__builtin__compare_3_p_0(mercury__term_conversion__TypeInfo_37_37, mercury__term_conversion__HeadVar__1_1, ((MR_Box) (mercury__term_conversion__V_43_43)), ((MR_Box) (mercury__term_conversion__V_30_30)));
#line 37 "term_conversion.m"
                  return;
                }
#line 37 "term_conversion.m"
              }
#line 37 "term_conversion.m"
          }
#line 37 "term_conversion.m"
        else
#line 2373 "term_conversion.c"
          *mercury__term_conversion__HeadVar__1_1 = (MR_Integer) 2;
#line 37 "term_conversion.m"
      }
#line 37 "term_conversion.m"
    else
#line 37 "term_conversion.m"
      {
#line 37 "term_conversion.m"
        MR_Word mercury__term_conversion__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 3)));
#line 37 "term_conversion.m"
        MR_Word mercury__term_conversion__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 2)));
#line 37 "term_conversion.m"
        MR_Word mercury__term_conversion__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 1)));
#line 37 "term_conversion.m"
        MR_Word mercury__term_conversion__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0)));

#line 37 "term_conversion.m"
        if (((MR_tag((MR_Word) mercury__term_conversion__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2392 "term_conversion.c"
          *mercury__term_conversion__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "term_conversion.m"
        else
#line 37 "term_conversion.m"
          {
#line 37 "term_conversion.m"
            MR_Word mercury__term_conversion__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 0)));
#line 37 "term_conversion.m"
            MR_Word mercury__term_conversion__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 1)));
#line 37 "term_conversion.m"
            MR_Word mercury__term_conversion__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 2)));
#line 37 "term_conversion.m"
            MR_Word mercury__term_conversion__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 3)));
#line 37 "term_conversion.m"
            MR_Word mercury__term_conversion__V_12_12;

#line 37 "term_conversion.m"
            {
#line 37 "term_conversion.m"
              mercury__term____Compare____term_1_0(mercury__term_conversion__TypeInfo_for_T_34, &mercury__term_conversion__V_12_12, mercury__term_conversion__V_48_48, mercury__term_conversion__V_8_8);
            }
#line 2414 "term_conversion.c"
            mercury__term_conversion__succeeded = (mercury__term_conversion__V_12_12 == (MR_Integer) 0);
#line 37 "term_conversion.m"
            mercury__term_conversion__succeeded = !(mercury__term_conversion__succeeded);
#line 37 "term_conversion.m"
            if (mercury__term_conversion__succeeded)
#line 37 "term_conversion.m"
              *mercury__term_conversion__HeadVar__1_1 = mercury__term_conversion__V_12_12;
#line 37 "term_conversion.m"
            else
#line 37 "term_conversion.m"
              {
#line 37 "term_conversion.m"
                MR_Word mercury__term_conversion__V_13_13;

#line 37 "term_conversion.m"
                {
#line 37 "term_conversion.m"
                  mercury__type_desc____Compare____type_desc_0_0(&mercury__term_conversion__V_13_13, mercury__term_conversion__V_47_47, mercury__term_conversion__V_9_9);
                }
#line 2434 "term_conversion.c"
                mercury__term_conversion__succeeded = (mercury__term_conversion__V_13_13 == (MR_Integer) 0);
#line 37 "term_conversion.m"
                mercury__term_conversion__succeeded = !(mercury__term_conversion__succeeded);
#line 37 "term_conversion.m"
                if (mercury__term_conversion__succeeded)
#line 37 "term_conversion.m"
                  *mercury__term_conversion__HeadVar__1_1 = mercury__term_conversion__V_13_13;
#line 37 "term_conversion.m"
                else
#line 37 "term_conversion.m"
                  {
#line 37 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_14_14;

#line 37 "term_conversion.m"
                    {
#line 37 "term_conversion.m"
                      mercury__term____Compare____context_0_0(&mercury__term_conversion__V_14_14, mercury__term_conversion__V_46_46, mercury__term_conversion__V_10_10);
                    }
#line 2454 "term_conversion.c"
                    mercury__term_conversion__succeeded = (mercury__term_conversion__V_14_14 == (MR_Integer) 0);
#line 37 "term_conversion.m"
                    mercury__term_conversion__succeeded = !(mercury__term_conversion__succeeded);
#line 37 "term_conversion.m"
                    if (mercury__term_conversion__succeeded)
#line 37 "term_conversion.m"
                      *mercury__term_conversion__HeadVar__1_1 = mercury__term_conversion__V_14_14;
#line 37 "term_conversion.m"
                    else
#line 37 "term_conversion.m"
                      {
#line 37 "term_conversion.m"
                        MR_Word mercury__term_conversion__TypeInfo_42_42 = (MR_Word) &mercury__term_conversion_scalar_common_1[0];

#line 37 "term_conversion.m"
                        {
#line 37 "term_conversion.m"
                          mercury__builtin__compare_3_p_0(mercury__term_conversion__TypeInfo_42_42, mercury__term_conversion__HeadVar__1_1, ((MR_Box) (mercury__term_conversion__V_45_45)), ((MR_Box) (mercury__term_conversion__V_11_11)));
#line 37 "term_conversion.m"
                          return;
                        }
#line 37 "term_conversion.m"
                      }
#line 37 "term_conversion.m"
                  }
#line 37 "term_conversion.m"
              }
#line 37 "term_conversion.m"
          }
#line 37 "term_conversion.m"
      }
#line 37 "term_conversion.m"
  }
#line 37 "term_conversion.m"
}

#line 37 "term_conversion.m"
MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_error_1_0(
#line 37 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_17,
#line 37 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__1_1,
#line 37 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__2_2)
#line 37 "term_conversion.m"
{
#line 37 "term_conversion.m"
  {
#line 37 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 37 "term_conversion.m"
    MR_Integer mercury__term_conversion__CastX_15 = (MR_Integer) mercury__term_conversion__HeadVar__1_1;
#line 37 "term_conversion.m"
    MR_Integer mercury__term_conversion__CastY_16 = (MR_Integer) mercury__term_conversion__HeadVar__2_2;

#line 37 "term_conversion.m"
    mercury__term_conversion__succeeded = (mercury__term_conversion__CastX_15 == mercury__term_conversion__CastY_16);
#line 37 "term_conversion.m"
    if (mercury__term_conversion__succeeded)
#line 37 "term_conversion.m"
      mercury__term_conversion__succeeded = MR_TRUE;
#line 37 "term_conversion.m"
    else
#line 37 "term_conversion.m"
    if (((MR_tag((MR_Word) mercury__term_conversion__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 37 "term_conversion.m"
      {
#line 37 "term_conversion.m"
        MR_Word mercury__term_conversion__TypeInfo_20_20;
#line 37 "term_conversion.m"
        MR_Word mercury__term_conversion__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 0)));
#line 37 "term_conversion.m"
        MR_Word mercury__term_conversion__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 1)));
#line 37 "term_conversion.m"
        MR_Word mercury__term_conversion__V_13_13;
#line 37 "term_conversion.m"
        MR_Word mercury__term_conversion__V_14_14;
#line 37 "term_conversion.m"
        MR_Integer mercury__term_conversion__V_26_26;
#line 37 "term_conversion.m"
        MR_Integer mercury__term_conversion__V_27_27;

#line 37 "term_conversion.m"
        mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 37 "term_conversion.m"
        if (mercury__term_conversion__succeeded)
#line 37 "term_conversion.m"
          {
#line 37 "term_conversion.m"
            mercury__term_conversion__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0)));
#line 37 "term_conversion.m"
            mercury__term_conversion__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 1)));
#line 2548 "term_conversion.c"
            mercury__term_conversion__V_26_26 = (MR_Integer) mercury__term_conversion__V_11_11;
#line 2550 "term_conversion.c"
            mercury__term_conversion__V_27_27 = (MR_Integer) mercury__term_conversion__V_13_13;
#line 2552 "term_conversion.c"
            mercury__term_conversion__succeeded = (mercury__term_conversion__V_26_26 == mercury__term_conversion__V_27_27);
#line 37 "term_conversion.m"
            if (mercury__term_conversion__succeeded)
#line 37 "term_conversion.m"
              {
#line 2558 "term_conversion.c"
                mercury__term_conversion__TypeInfo_20_20 = (MR_Word) &mercury__term_conversion_scalar_common_1[0];
#line 2560 "term_conversion.c"
                {
#line 2562 "term_conversion.c"
                  return mercury__term_conversion__succeeded = mercury__builtin__unify_2_p_0(mercury__term_conversion__TypeInfo_20_20, ((MR_Box) (mercury__term_conversion__V_12_12)), ((MR_Box) (mercury__term_conversion__V_14_14)));
                }
#line 37 "term_conversion.m"
              }
#line 37 "term_conversion.m"
          }
#line 37 "term_conversion.m"
      }
#line 37 "term_conversion.m"
    else
#line 37 "term_conversion.m"
      {
#line 37 "term_conversion.m"
        MR_Word mercury__term_conversion__TypeInfo_25_25;
#line 37 "term_conversion.m"
        MR_Word mercury__term_conversion__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 0)));
#line 37 "term_conversion.m"
        MR_Word mercury__term_conversion__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 1)));
#line 37 "term_conversion.m"
        MR_Word mercury__term_conversion__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 2)));
#line 37 "term_conversion.m"
        MR_Word mercury__term_conversion__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 3)));
#line 37 "term_conversion.m"
        MR_Word mercury__term_conversion__V_7_7;
#line 37 "term_conversion.m"
        MR_Word mercury__term_conversion__V_8_8;
#line 37 "term_conversion.m"
        MR_Word mercury__term_conversion__V_9_9;
#line 37 "term_conversion.m"
        MR_Word mercury__term_conversion__V_10_10;

#line 37 "term_conversion.m"
        mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 37 "term_conversion.m"
        if (mercury__term_conversion__succeeded)
#line 37 "term_conversion.m"
          {
#line 37 "term_conversion.m"
            mercury__term_conversion__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0)));
#line 37 "term_conversion.m"
            mercury__term_conversion__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 1)));
#line 37 "term_conversion.m"
            mercury__term_conversion__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 2)));
#line 37 "term_conversion.m"
            mercury__term_conversion__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 3)));
#line 2608 "term_conversion.c"
            {
#line 2610 "term_conversion.c"
              mercury__term_conversion__succeeded = mercury__term____Unify____term_1_0(mercury__term_conversion__TypeInfo_for_T_17, mercury__term_conversion__V_3_3, mercury__term_conversion__V_7_7);
            }
#line 37 "term_conversion.m"
            if (mercury__term_conversion__succeeded)
#line 37 "term_conversion.m"
              {
#line 2617 "term_conversion.c"
                {
#line 2619 "term_conversion.c"
                  mercury__term_conversion__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_conversion__V_4_4, mercury__term_conversion__V_8_8);
                }
#line 37 "term_conversion.m"
                if (mercury__term_conversion__succeeded)
#line 37 "term_conversion.m"
                  {
#line 2626 "term_conversion.c"
                    {
#line 2628 "term_conversion.c"
                      mercury__term_conversion__succeeded = mercury__term____Unify____context_0_0(mercury__term_conversion__V_5_5, mercury__term_conversion__V_9_9);
                    }
#line 37 "term_conversion.m"
                    if (mercury__term_conversion__succeeded)
#line 37 "term_conversion.m"
                      {
#line 2635 "term_conversion.c"
                        mercury__term_conversion__TypeInfo_25_25 = (MR_Word) &mercury__term_conversion_scalar_common_1[0];
#line 2637 "term_conversion.c"
                        {
#line 2639 "term_conversion.c"
                          return mercury__term_conversion__succeeded = mercury__builtin__unify_2_p_0(mercury__term_conversion__TypeInfo_25_25, ((MR_Box) (mercury__term_conversion__V_6_6)), ((MR_Box) (mercury__term_conversion__V_10_10)));
                        }
#line 37 "term_conversion.m"
                      }
#line 37 "term_conversion.m"
                  }
#line 37 "term_conversion.m"
              }
#line 37 "term_conversion.m"
          }
#line 37 "term_conversion.m"
      }
#line 37 "term_conversion.m"
    return mercury__term_conversion__succeeded;
#line 37 "term_conversion.m"
  }
#line 37 "term_conversion.m"
}

#line 49 "term_conversion.m"
void MR_CALL 
mercury__term_conversion____Compare____term_to_type_context_0_0(
#line 49 "term_conversion.m"
  MR_Word * mercury__term_conversion__HeadVar__1_1,
#line 49 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__2_2,
#line 49 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__3_3)
#line 49 "term_conversion.m"
{
#line 49 "term_conversion.m"
  {
#line 49 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 49 "term_conversion.m"
    MR_Word mercury__term_conversion__TypeInfo_6_6 = (MR_Word) &mercury__term_conversion_scalar_common_1[0];
#line 49 "term_conversion.m"
    MR_Word mercury__term_conversion__Cast_HeadVar1_4 = mercury__term_conversion__HeadVar__2_2;
#line 49 "term_conversion.m"
    MR_Word mercury__term_conversion__Cast_HeadVar2_5 = mercury__term_conversion__HeadVar__3_3;

#line 49 "term_conversion.m"
    {
#line 49 "term_conversion.m"
      mercury__builtin__compare_3_p_0(mercury__term_conversion__TypeInfo_6_6, mercury__term_conversion__HeadVar__1_1, ((MR_Box) (mercury__term_conversion__Cast_HeadVar1_4)), ((MR_Box) (mercury__term_conversion__Cast_HeadVar2_5)));
#line 49 "term_conversion.m"
      return;
    }
#line 49 "term_conversion.m"
  }
#line 49 "term_conversion.m"
}

#line 49 "term_conversion.m"
MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_context_0_0(
#line 49 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__1_1,
#line 49 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__2_2)
#line 49 "term_conversion.m"
{
#line 49 "term_conversion.m"
  {
#line 49 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 49 "term_conversion.m"
    MR_Word mercury__term_conversion__TypeInfo_5_5 = (MR_Word) &mercury__term_conversion_scalar_common_1[0];
#line 49 "term_conversion.m"
    MR_Word mercury__term_conversion__Cast_HeadVar1_3 = mercury__term_conversion__HeadVar__1_1;
#line 49 "term_conversion.m"
    MR_Word mercury__term_conversion__Cast_HeadVar2_4 = mercury__term_conversion__HeadVar__2_2;

#line 49 "term_conversion.m"
    {
#line 49 "term_conversion.m"
      return mercury__term_conversion__succeeded = mercury__builtin__unify_2_p_0(mercury__term_conversion__TypeInfo_5_5, ((MR_Box) (mercury__term_conversion__Cast_HeadVar1_3)), ((MR_Box) (mercury__term_conversion__Cast_HeadVar2_4)));
    }
#line 49 "term_conversion.m"
    return mercury__term_conversion__succeeded;
#line 49 "term_conversion.m"
  }
#line 49 "term_conversion.m"
}

#line 51 "term_conversion.m"
void MR_CALL 
mercury__term_conversion____Compare____term_to_type_arg_context_0_0(
#line 51 "term_conversion.m"
  MR_Word * mercury__term_conversion__HeadVar__1_1,
#line 51 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__2_2,
#line 51 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__3_3)
#line 51 "term_conversion.m"
{
#line 51 "term_conversion.m"
  {
#line 51 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 51 "term_conversion.m"
    MR_Integer mercury__term_conversion__CastX_12 = (MR_Integer) mercury__term_conversion__HeadVar__2_2;
#line 51 "term_conversion.m"
    MR_Integer mercury__term_conversion__CastY_13 = (MR_Integer) mercury__term_conversion__HeadVar__3_3;

#line 51 "term_conversion.m"
    mercury__term_conversion__succeeded = (mercury__term_conversion__CastX_12 == mercury__term_conversion__CastY_13);
#line 51 "term_conversion.m"
    if (mercury__term_conversion__succeeded)
#line 2749 "term_conversion.c"
      *mercury__term_conversion__HeadVar__1_1 = (MR_Integer) 0;
#line 51 "term_conversion.m"
    else
#line 51 "term_conversion.m"
      {
#line 51 "term_conversion.m"
        MR_Word mercury__term_conversion__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0)));
#line 51 "term_conversion.m"
        MR_Integer mercury__term_conversion__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "term_conversion.m"
        MR_Word mercury__term_conversion__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 2)));
#line 51 "term_conversion.m"
        MR_Word mercury__term_conversion__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 0)));
#line 51 "term_conversion.m"
        MR_Integer mercury__term_conversion__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 1)));
#line 51 "term_conversion.m"
        MR_Word mercury__term_conversion__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 2)));
#line 51 "term_conversion.m"
        MR_Word mercury__term_conversion__V_10_10;

#line 51 "term_conversion.m"
        {
#line 51 "term_conversion.m"
          mercury__term____Compare____const_0_0(&mercury__term_conversion__V_10_10, mercury__term_conversion__V_4_4, mercury__term_conversion__V_7_7);
        }
#line 2775 "term_conversion.c"
        mercury__term_conversion__succeeded = (mercury__term_conversion__V_10_10 == (MR_Integer) 0);
#line 51 "term_conversion.m"
        mercury__term_conversion__succeeded = !(mercury__term_conversion__succeeded);
#line 51 "term_conversion.m"
        if (mercury__term_conversion__succeeded)
#line 51 "term_conversion.m"
          *mercury__term_conversion__HeadVar__1_1 = mercury__term_conversion__V_10_10;
#line 51 "term_conversion.m"
        else
#line 51 "term_conversion.m"
          {
#line 51 "term_conversion.m"
            MR_Word mercury__term_conversion__V_11_11;

#line 66 "private_builtin.opt"
            mercury__term_conversion__succeeded = (mercury__term_conversion__V_5_5 < mercury__term_conversion__V_8_8);
#line 69 "private_builtin.opt"
            if (mercury__term_conversion__succeeded)
#line 68 "private_builtin.opt"
              mercury__term_conversion__V_11_11 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__term_conversion__succeeded = (mercury__term_conversion__V_5_5 == mercury__term_conversion__V_8_8);
#line 74 "private_builtin.opt"
                if (mercury__term_conversion__succeeded)
#line 73 "private_builtin.opt"
                  mercury__term_conversion__V_11_11 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__term_conversion__V_11_11 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 2812 "term_conversion.c"
            mercury__term_conversion__succeeded = (mercury__term_conversion__V_11_11 == (MR_Integer) 0);
#line 51 "term_conversion.m"
            mercury__term_conversion__succeeded = !(mercury__term_conversion__succeeded);
#line 51 "term_conversion.m"
            if (mercury__term_conversion__succeeded)
#line 51 "term_conversion.m"
              *mercury__term_conversion__HeadVar__1_1 = mercury__term_conversion__V_11_11;
#line 51 "term_conversion.m"
            else
#line 51 "term_conversion.m"
              {
#line 51 "term_conversion.m"
                mercury__term____Compare____context_0_0(mercury__term_conversion__HeadVar__1_1, mercury__term_conversion__V_6_6, mercury__term_conversion__V_9_9);
#line 51 "term_conversion.m"
                return;
              }
#line 51 "term_conversion.m"
          }
#line 51 "term_conversion.m"
      }
#line 51 "term_conversion.m"
  }
#line 51 "term_conversion.m"
}

#line 51 "term_conversion.m"
MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_arg_context_0_0(
#line 51 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__1_1,
#line 51 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__2_2)
#line 51 "term_conversion.m"
{
#line 51 "term_conversion.m"
  {
#line 51 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 51 "term_conversion.m"
    MR_Integer mercury__term_conversion__CastX_9 = (MR_Integer) mercury__term_conversion__HeadVar__1_1;
#line 51 "term_conversion.m"
    MR_Integer mercury__term_conversion__CastY_10 = (MR_Integer) mercury__term_conversion__HeadVar__2_2;

#line 51 "term_conversion.m"
    mercury__term_conversion__succeeded = (mercury__term_conversion__CastX_9 == mercury__term_conversion__CastY_10);
#line 51 "term_conversion.m"
    if (mercury__term_conversion__succeeded)
#line 51 "term_conversion.m"
      mercury__term_conversion__succeeded = MR_TRUE;
#line 51 "term_conversion.m"
    else
#line 51 "term_conversion.m"
      {
#line 51 "term_conversion.m"
        MR_Word mercury__term_conversion__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 0)));
#line 51 "term_conversion.m"
        MR_Integer mercury__term_conversion__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 1)));
#line 51 "term_conversion.m"
        MR_Word mercury__term_conversion__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 2)));
#line 51 "term_conversion.m"
        MR_Word mercury__term_conversion__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0)));
#line 51 "term_conversion.m"
        MR_Integer mercury__term_conversion__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "term_conversion.m"
        MR_Word mercury__term_conversion__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 2)));

#line 2879 "term_conversion.c"
        {
#line 2881 "term_conversion.c"
          mercury__term_conversion__succeeded = mercury__term____Unify____const_0_0(mercury__term_conversion__V_3_3, mercury__term_conversion__V_6_6);
        }
#line 51 "term_conversion.m"
        if (mercury__term_conversion__succeeded)
#line 51 "term_conversion.m"
          {
#line 2888 "term_conversion.c"
            mercury__term_conversion__succeeded = (mercury__term_conversion__V_4_4 == mercury__term_conversion__V_7_7);
#line 51 "term_conversion.m"
            if (mercury__term_conversion__succeeded)
#line 2892 "term_conversion.c"
              {
#line 2894 "term_conversion.c"
                return mercury__term_conversion__succeeded = mercury__term____Unify____context_0_0(mercury__term_conversion__V_5_5, mercury__term_conversion__V_8_8);
              }
#line 51 "term_conversion.m"
          }
#line 51 "term_conversion.m"
      }
#line 51 "term_conversion.m"
    return mercury__term_conversion__succeeded;
#line 51 "term_conversion.m"
  }
#line 51 "term_conversion.m"
}

#line 452 "term_conversion.m"
static void MR_CALL 
mercury__term_conversion__univ_list_to_term_list_2_p_0(
#line 452 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_7,
#line 452 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__1_1,
#line 452 "term_conversion.m"
  MR_Word * mercury__term_conversion__HeadVar__2_2)
#line 452 "term_conversion.m"
{
#line 454 "term_conversion.m"
  {
#line 454 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;

#line 454 "term_conversion.m"
    if ((mercury__term_conversion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 454 "term_conversion.m"
      *mercury__term_conversion__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 454 "term_conversion.m"
    else
#line 455 "term_conversion.m"
      {
#line 455 "term_conversion.m"
        MR_Word mercury__term_conversion__Value_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 0)));
#line 455 "term_conversion.m"
        MR_Word mercury__term_conversion__Values_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 1)));
#line 455 "term_conversion.m"
        MR_Word mercury__term_conversion__Term_5;
#line 455 "term_conversion.m"
        MR_Word mercury__term_conversion__Terms_6;

#line 456 "term_conversion.m"
        {
#line 456 "term_conversion.m"
          mercury__term_conversion__univ_to_term_2_p_0(mercury__term_conversion__TypeInfo_for_T_7, mercury__term_conversion__Value_3, &mercury__term_conversion__Term_5);
        }
#line 457 "term_conversion.m"
        {
#line 457 "term_conversion.m"
          mercury__term_conversion__univ_list_to_term_list_2_p_0(mercury__term_conversion__TypeInfo_for_T_7, mercury__term_conversion__Values_4, &mercury__term_conversion__Terms_6);
        }
#line 455 "term_conversion.m"
        {
#line 455 "term_conversion.m"
          MR_Word base;
#line 455 "term_conversion.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 455 "term_conversion.m"
          *mercury__term_conversion__HeadVar__2_2 = base;
#line 455 "term_conversion.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_conversion__Term_5));
#line 455 "term_conversion.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_conversion__Terms_6));
#line 455 "term_conversion.m"
        }
#line 455 "term_conversion.m"
      }
#line 454 "term_conversion.m"
  }
#line 452 "term_conversion.m"
}

#line 380 "term_conversion.m"
static MR_bool MR_CALL 
mercury__term_conversion__univ_to_term_special_case_6_p_0(
#line 380 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_69,
#line 380 "term_conversion.m"
  MR_String mercury__term_conversion__ModuleName_7,
#line 380 "term_conversion.m"
  MR_String mercury__term_conversion__TypeCtorName_8,
#line 380 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeArgs_9,
#line 380 "term_conversion.m"
  MR_Word mercury__term_conversion__Univ_10,
#line 380 "term_conversion.m"
  MR_Word mercury__term_conversion__Context_11,
#line 380 "term_conversion.m"
  MR_Word * mercury__term_conversion__Term_12)
#line 380 "term_conversion.m"
{
#line 407 "term_conversion.m"
  {
#line 407 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 407 "term_conversion.m"
    MR_Integer mercury__term_conversion__lo_0;
#line 407 "term_conversion.m"
    MR_Integer mercury__term_conversion__hi_1;
#line 407 "term_conversion.m"
    MR_Integer mercury__term_conversion__mid_2;
#line 407 "term_conversion.m"
    MR_Integer mercury__term_conversion__result_3;

#line 407 "term_conversion.m"
    /* binary string jump switch */
#line 407 "term_conversion.m"
    mercury__term_conversion__lo_0 = (MR_Integer) 0;
#line 407 "term_conversion.m"
    mercury__term_conversion__hi_1 = (MR_Integer) 5;
#line 407 "term_conversion.m"
    do
#line 407 "term_conversion.m"
      {
#line 407 "term_conversion.m"
        mercury__term_conversion__mid_2 = (((mercury__term_conversion__lo_0 + mercury__term_conversion__hi_1)) / (MR_Integer) 2);
#line 407 "term_conversion.m"
        mercury__term_conversion__result_3 = MR_strcmp(mercury__term_conversion__ModuleName_7, ((&mercury__term_conversion_vector_common_5[13 + mercury__term_conversion__mid_2]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_0);
#line 407 "term_conversion.m"
        if ((mercury__term_conversion__result_3 == (MR_Integer) 0))
#line 407 "term_conversion.m"
          {
#line 407 "term_conversion.m"
#line 407 "term_conversion.m"
            switch (((&mercury__term_conversion_vector_common_5[13 + mercury__term_conversion__mid_2]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_1) {
#line 407 "term_conversion.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 407 "term_conversion.m"
              case (MR_Integer) 0:
#line 431 "term_conversion.m"
                {
#line 431 "term_conversion.m"
                  /* case "array" */
#line 431 "term_conversion.m"
                  {
#line 431 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeInfo_78_78;
#line 431 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeCtorInfo_79_79;
#line 431 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeInfo_80_80;
#line 431 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeCtorInfo_81_81;
#line 431 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeInfo_82_82;
#line 431 "term_conversion.m"
                    MR_Word mercury__term_conversion__ElemType_26;
#line 431 "term_conversion.m"
                    MR_Word mercury__term_conversion__List_28;
#line 431 "term_conversion.m"
                    MR_ArrayPtr mercury__term_conversion__Array_29;
#line 431 "term_conversion.m"
                    MR_Word mercury__term_conversion__ArgsTerm_30;
#line 431 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_38_38;
#line 431 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_41_41;
#line 431 "term_conversion.m"
                    MR_String mercury__term_conversion__V_42_42;
#line 431 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_43_43;
#line 431 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_44_44;
#line 431 "term_conversion.m"
                    MR_Integer mercury__term_conversion__Low_5_92;
#line 431 "term_conversion.m"
                    MR_Integer mercury__term_conversion__High_6_93;
#line 74 "type_desc.opt"
                    MR_Box mercury__term_conversion__Elem_27;
#line 436 "term_conversion.m"
                    MR_Box mercury__term_conversion__conv8_Array_29;
#line 245 "array.opt"
                    MR_Word mercury__term_conversion__TypeInfo_78_98;
#line 253 "array.opt"
                    MR_Word mercury__term_conversion__TypeInfo_78_99;

#line 432 "term_conversion.m"
                    mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__TypeCtorName_8, (MR_String) "array") == 0);
#line 431 "term_conversion.m"
                    if (mercury__term_conversion__succeeded)
#line 431 "term_conversion.m"
                      {
#line 433 "term_conversion.m"
                        mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__TypeArgs_9)) == (MR_mktag((MR_Integer) 1)));
#line 433 "term_conversion.m"
                        if (mercury__term_conversion__succeeded)
#line 433 "term_conversion.m"
                          {
#line 433 "term_conversion.m"
                            mercury__term_conversion__ElemType_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__TypeArgs_9, (MR_Integer) 0)));
#line 433 "term_conversion.m"
                            mercury__term_conversion__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__TypeArgs_9, (MR_Integer) 1)));
#line 433 "term_conversion.m"
                            mercury__term_conversion__succeeded = (mercury__term_conversion__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 431 "term_conversion.m"
                            if (mercury__term_conversion__succeeded)
#line 431 "term_conversion.m"
                              {
#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_special_case_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__term_conversion__ElemType_26 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 3111 "term_conversion.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__TypeInfo_78_78  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 3118 "term_conversion.c"
                                mercury__term_conversion__TypeCtorInfo_79_79 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 3120 "term_conversion.c"
                                mercury__term_conversion__TypeCtorInfo_81_81 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 3122 "term_conversion.c"
                                {
#line 3124 "term_conversion.c"
                                  mercury__term_conversion__TypeInfo_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3126 "term_conversion.c"
                                  MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_80_80, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_79_79));
#line 3128 "term_conversion.c"
                                  MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_80_80, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_78_78));
#line 3130 "term_conversion.c"
                                }
#line 3132 "term_conversion.c"
                                {
#line 3134 "term_conversion.c"
                                  mercury__term_conversion__TypeInfo_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3136 "term_conversion.c"
                                  MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_82_82, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_81_81));
#line 3138 "term_conversion.c"
                                  MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_82_82, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_78_78));
#line 3140 "term_conversion.c"
                                }
#line 436 "term_conversion.m"
                                {
#line 436 "term_conversion.m"
                                  mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeInfo_82_82, mercury__term_conversion__Univ_10, &mercury__term_conversion__conv8_Array_29);
                                }
#line 436 "term_conversion.m"
                                mercury__term_conversion__Array_29 = ((MR_ArrayPtr) mercury__term_conversion__conv8_Array_29);
#line 245 "array.opt"
{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_special_case_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__term_conversion__Array_29 , Array);
		{
#line 245 "array.opt"

    /* Array not used */
    Min = 0;

#line 3163 "term_conversion.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__Low_5_92  = Min;
#line 245 "array.opt"
}
#line 253 "array.opt"
{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_special_case_6_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__term_conversion__Array_29 , Array);
		{
#line 253 "array.opt"

    Max = Array->size - 1;

#line 3183 "term_conversion.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__High_6_93  = Max;
#line 253 "array.opt"
}
#line 334 "array.opt"
                                {
#line 334 "array.opt"
                                  mercury__array__fetch_items_4_p_0(mercury__term_conversion__TypeInfo_78_78, (MR_ArrayPtr) mercury__term_conversion__Array_29, mercury__term_conversion__Low_5_92, mercury__term_conversion__High_6_93, &mercury__term_conversion__List_28);
                                }
#line 438 "term_conversion.m"
                                {
#line 438 "term_conversion.m"
                                  mercury__term_conversion__type_to_term_2_p_0(mercury__term_conversion__TypeInfo_80_80, mercury__term_conversion__TypeInfo_for_T_69, ((MR_Box) (mercury__term_conversion__List_28)), &mercury__term_conversion__ArgsTerm_30);
                                }
#line 439 "term_conversion.m"
                                mercury__term_conversion__V_42_42 = (MR_String) "array";
#line 439 "term_conversion.m"
                                mercury__term_conversion__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 439 "term_conversion.m"
                                mercury__term_conversion__V_41_41 = (MR_Word) &mercury__term_conversion_scalar_common_6[5];
#line 439 "term_conversion.m"
                                {
#line 439 "term_conversion.m"
                                  mercury__term_conversion__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "term_conversion.m"
                                  MR_hl_field(MR_mktag(1), mercury__term_conversion__V_43_43, 0) = ((MR_Box) (mercury__term_conversion__ArgsTerm_30));
#line 439 "term_conversion.m"
                                  MR_hl_field(MR_mktag(1), mercury__term_conversion__V_43_43, 1) = ((MR_Box) (mercury__term_conversion__V_44_44));
#line 439 "term_conversion.m"
                                }
#line 439 "term_conversion.m"
                                {
#line 439 "term_conversion.m"
                                  MR_Word base;
#line 439 "term_conversion.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 439 "term_conversion.m"
                                  *mercury__term_conversion__Term_12 = base;
#line 439 "term_conversion.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__V_41_41));
#line 439 "term_conversion.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term_conversion__V_43_43));
#line 439 "term_conversion.m"
                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term_conversion__Context_11));
#line 439 "term_conversion.m"
                                }
#line 439 "term_conversion.m"
                                mercury__term_conversion__succeeded = MR_TRUE;
#line 431 "term_conversion.m"
                              }
#line 433 "term_conversion.m"
                          }
#line 431 "term_conversion.m"
                      }
#line 431 "term_conversion.m"
                  }
#line 431 "term_conversion.m"
                }
#line 407 "term_conversion.m"
                break;
#line 407 "term_conversion.m"
              case (MR_Integer) 1:
#line 424 "term_conversion.m"
                {
#line 424 "term_conversion.m"
                  /* case "bitmap" */
#line 424 "term_conversion.m"
                  {
#line 424 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeCtorInfo_77_77;
#line 424 "term_conversion.m"
                    MR_Box mercury__term_conversion__Bitmap_24;
#line 424 "term_conversion.m"
                    MR_String mercury__term_conversion__BitmapStr_25;
#line 424 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_45_45;
#line 424 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_46_46;
#line 427 "term_conversion.m"
                    MR_Box mercury__term_conversion__conv7_Bitmap_24;

#line 425 "term_conversion.m"
                    mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__TypeCtorName_8, (MR_String) "bitmap") == 0);
#line 424 "term_conversion.m"
                    if (mercury__term_conversion__succeeded)
#line 424 "term_conversion.m"
                      {
#line 426 "term_conversion.m"
                        mercury__term_conversion__succeeded = (mercury__term_conversion__TypeArgs_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 424 "term_conversion.m"
                        if (mercury__term_conversion__succeeded)
#line 424 "term_conversion.m"
                          {
#line 3279 "term_conversion.c"
                            mercury__term_conversion__TypeCtorInfo_77_77 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 427 "term_conversion.m"
                            {
#line 427 "term_conversion.m"
                              mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeCtorInfo_77_77, mercury__term_conversion__Univ_10, &mercury__term_conversion__conv7_Bitmap_24);
                            }
#line 427 "term_conversion.m"
                            mercury__term_conversion__Bitmap_24 = ((MR_Box) mercury__term_conversion__conv7_Bitmap_24);
#line 428 "term_conversion.m"
                            {
#line 428 "term_conversion.m"
                              mercury__term_conversion__BitmapStr_25 = mercury__bitmap__to_string_1_f_0(mercury__term_conversion__Bitmap_24);
                            }
#line 429 "term_conversion.m"
                            mercury__term_conversion__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "term_conversion.m"
                            {
#line 429 "term_conversion.m"
                              mercury__term_conversion__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "term_conversion.m"
                              MR_hl_field(MR_mktag(3), mercury__term_conversion__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 429 "term_conversion.m"
                              MR_hl_field(MR_mktag(3), mercury__term_conversion__V_45_45, 1) = ((MR_Box) (mercury__term_conversion__BitmapStr_25));
#line 429 "term_conversion.m"
                            }
#line 429 "term_conversion.m"
                            {
#line 429 "term_conversion.m"
                              MR_Word base;
#line 429 "term_conversion.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 429 "term_conversion.m"
                              *mercury__term_conversion__Term_12 = base;
#line 429 "term_conversion.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__V_45_45));
#line 429 "term_conversion.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term_conversion__V_46_46));
#line 429 "term_conversion.m"
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term_conversion__Context_11));
#line 429 "term_conversion.m"
                            }
#line 429 "term_conversion.m"
                            mercury__term_conversion__succeeded = MR_TRUE;
#line 424 "term_conversion.m"
                          }
#line 424 "term_conversion.m"
                      }
#line 424 "term_conversion.m"
                  }
#line 424 "term_conversion.m"
                }
#line 407 "term_conversion.m"
                break;
#line 407 "term_conversion.m"
              case (MR_Integer) 2:
#line 386 "term_conversion.m"
                {
#line 386 "term_conversion.m"
                  /* case "builtin" */
#line 386 "term_conversion.m"
                  {
#line 386 "term_conversion.m"
                    MR_Word mercury__term_conversion__Functor_15;
#line 386 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_63_63;
#line 393 "term_conversion.m"
                    MR_Integer mercury__term_conversion__lo_4;
#line 393 "term_conversion.m"
                    MR_Integer mercury__term_conversion__hi_5;
#line 393 "term_conversion.m"
                    MR_Integer mercury__term_conversion__mid_6;
#line 393 "term_conversion.m"
                    MR_Integer mercury__term_conversion__result_7;

#line 387 "term_conversion.m"
                    mercury__term_conversion__succeeded = (mercury__term_conversion__TypeArgs_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 386 "term_conversion.m"
                    if (mercury__term_conversion__succeeded)
#line 386 "term_conversion.m"
                      {
#line 393 "term_conversion.m"
                        /* binary string jump switch */
#line 393 "term_conversion.m"
                        mercury__term_conversion__lo_4 = (MR_Integer) 0;
#line 393 "term_conversion.m"
                        mercury__term_conversion__hi_5 = (MR_Integer) 3;
#line 393 "term_conversion.m"
                        do
#line 393 "term_conversion.m"
                          {
#line 393 "term_conversion.m"
                            mercury__term_conversion__mid_6 = (((mercury__term_conversion__lo_4 + mercury__term_conversion__hi_5)) / (MR_Integer) 2);
#line 393 "term_conversion.m"
                            mercury__term_conversion__result_7 = MR_strcmp(mercury__term_conversion__TypeCtorName_8, ((&mercury__term_conversion_vector_common_5[9 + mercury__term_conversion__mid_6]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_0);
#line 393 "term_conversion.m"
                            if ((mercury__term_conversion__result_7 == (MR_Integer) 0))
#line 393 "term_conversion.m"
                              {
#line 393 "term_conversion.m"
#line 393 "term_conversion.m"
                                switch (((&mercury__term_conversion_vector_common_5[9 + mercury__term_conversion__mid_6]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_1) {
#line 393 "term_conversion.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 393 "term_conversion.m"
                                  case (MR_Integer) 0:
#line 389 "term_conversion.m"
                                    {
#line 389 "term_conversion.m"
                                      /* case "character" */
#line 389 "term_conversion.m"
                                      {
#line 389 "term_conversion.m"
                                        MR_Word mercury__term_conversion__TypeCtorInfo_70_70 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 389 "term_conversion.m"
                                        MR_Char mercury__term_conversion__Char_13;
#line 389 "term_conversion.m"
                                        MR_String mercury__term_conversion__CharName_14;
#line 390 "term_conversion.m"
                                        MR_Box mercury__term_conversion__conv6_Char_13;

#line 390 "term_conversion.m"
                                        {
#line 390 "term_conversion.m"
                                          mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeCtorInfo_70_70, mercury__term_conversion__Univ_10, &mercury__term_conversion__conv6_Char_13);
                                        }
#line 390 "term_conversion.m"
                                        mercury__term_conversion__Char_13 = ((MR_Char) (MR_Word) mercury__term_conversion__conv6_Char_13);
#line 391 "term_conversion.m"
                                        {
#line 391 "term_conversion.m"
                                          mercury__string__char_to_string_2_p_0(mercury__term_conversion__Char_13, &mercury__term_conversion__CharName_14);
                                        }
#line 392 "term_conversion.m"
                                        {
#line 392 "term_conversion.m"
                                          mercury__term_conversion__Functor_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 392 "term_conversion.m"
                                          MR_hl_field(MR_mktag(0), mercury__term_conversion__Functor_15, 0) = ((MR_Box) (mercury__term_conversion__CharName_14));
#line 392 "term_conversion.m"
                                        }
#line 389 "term_conversion.m"
                                        mercury__term_conversion__succeeded = MR_TRUE;
#line 389 "term_conversion.m"
                                      }
#line 389 "term_conversion.m"
                                    }
#line 393 "term_conversion.m"
                                    break;
#line 393 "term_conversion.m"
                                  case (MR_Integer) 1:
#line 402 "term_conversion.m"
                                    {
#line 402 "term_conversion.m"
                                      /* case "float" */
#line 402 "term_conversion.m"
                                      {
#line 402 "term_conversion.m"
                                        MR_Word mercury__term_conversion__TypeCtorInfo_73_73 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 402 "term_conversion.m"
                                        MR_Float mercury__term_conversion__Float_18;
#line 403 "term_conversion.m"
                                        MR_Box mercury__term_conversion__conv5_Float_18;

#line 403 "term_conversion.m"
                                        {
#line 403 "term_conversion.m"
                                          mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeCtorInfo_73_73, mercury__term_conversion__Univ_10, &mercury__term_conversion__conv5_Float_18);
                                        }
#line 403 "term_conversion.m"
                                        mercury__term_conversion__Float_18 = MR_unbox_float(mercury__term_conversion__conv5_Float_18);
#line 404 "term_conversion.m"
                                        {
#line 404 "term_conversion.m"
                                          mercury__term_conversion__Functor_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "term_conversion.m"
                                          MR_hl_field(MR_mktag(3), mercury__term_conversion__Functor_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 404 "term_conversion.m"
                                          MR_hl_field(MR_mktag(3), mercury__term_conversion__Functor_15, 1) = MR_box_float(mercury__term_conversion__Float_18);
#line 404 "term_conversion.m"
                                        }
#line 402 "term_conversion.m"
                                        mercury__term_conversion__succeeded = MR_TRUE;
#line 402 "term_conversion.m"
                                      }
#line 402 "term_conversion.m"
                                    }
#line 393 "term_conversion.m"
                                    break;
#line 393 "term_conversion.m"
                                  case (MR_Integer) 2:
#line 398 "term_conversion.m"
                                    {
#line 398 "term_conversion.m"
                                      /* case "int" */
#line 398 "term_conversion.m"
                                      {
#line 398 "term_conversion.m"
                                        MR_Word mercury__term_conversion__TypeCtorInfo_72_72 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 398 "term_conversion.m"
                                        MR_Integer mercury__term_conversion__Int_17;
#line 399 "term_conversion.m"
                                        MR_Box mercury__term_conversion__conv4_Int_17;

#line 399 "term_conversion.m"
                                        {
#line 399 "term_conversion.m"
                                          mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeCtorInfo_72_72, mercury__term_conversion__Univ_10, &mercury__term_conversion__conv4_Int_17);
                                        }
#line 399 "term_conversion.m"
                                        mercury__term_conversion__Int_17 = ((MR_Integer) mercury__term_conversion__conv4_Int_17);
#line 400 "term_conversion.m"
                                        {
#line 400 "term_conversion.m"
                                          mercury__term_conversion__Functor_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 400 "term_conversion.m"
                                          MR_hl_field(MR_mktag(1), mercury__term_conversion__Functor_15, 0) = ((MR_Box) (mercury__term_conversion__Int_17));
#line 400 "term_conversion.m"
                                        }
#line 398 "term_conversion.m"
                                        mercury__term_conversion__succeeded = MR_TRUE;
#line 398 "term_conversion.m"
                                      }
#line 398 "term_conversion.m"
                                    }
#line 393 "term_conversion.m"
                                    break;
#line 393 "term_conversion.m"
                                  case (MR_Integer) 3:
#line 394 "term_conversion.m"
                                    {
#line 394 "term_conversion.m"
                                      /* case "string" */
#line 394 "term_conversion.m"
                                      {
#line 394 "term_conversion.m"
                                        MR_Word mercury__term_conversion__TypeCtorInfo_71_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 394 "term_conversion.m"
                                        MR_String mercury__term_conversion__String_16;
#line 395 "term_conversion.m"
                                        MR_Box mercury__term_conversion__conv3_String_16;

#line 395 "term_conversion.m"
                                        {
#line 395 "term_conversion.m"
                                          mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeCtorInfo_71_71, mercury__term_conversion__Univ_10, &mercury__term_conversion__conv3_String_16);
                                        }
#line 395 "term_conversion.m"
                                        mercury__term_conversion__String_16 = ((MR_String) mercury__term_conversion__conv3_String_16);
#line 396 "term_conversion.m"
                                        {
#line 396 "term_conversion.m"
                                          mercury__term_conversion__Functor_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "term_conversion.m"
                                          MR_hl_field(MR_mktag(3), mercury__term_conversion__Functor_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 396 "term_conversion.m"
                                          MR_hl_field(MR_mktag(3), mercury__term_conversion__Functor_15, 1) = ((MR_Box) (mercury__term_conversion__String_16));
#line 396 "term_conversion.m"
                                        }
#line 394 "term_conversion.m"
                                        mercury__term_conversion__succeeded = MR_TRUE;
#line 394 "term_conversion.m"
                                      }
#line 394 "term_conversion.m"
                                    }
#line 393 "term_conversion.m"
                                    break;
#line 393 "term_conversion.m"
                                }
#line 393 "term_conversion.m"
                                /* jump out of search loop */
#line 393 "term_conversion.m"
                                goto label_0;
#line 393 "term_conversion.m"
                              }
#line 393 "term_conversion.m"
                            else
#line 393 "term_conversion.m"
                            if ((mercury__term_conversion__result_7 < (MR_Integer) 0))
#line 393 "term_conversion.m"
                              mercury__term_conversion__hi_5 = (mercury__term_conversion__mid_6 - (MR_Integer) 1);
#line 393 "term_conversion.m"
                            else
#line 393 "term_conversion.m"
                              mercury__term_conversion__lo_4 = (mercury__term_conversion__mid_6 + (MR_Integer) 1);
#line 393 "term_conversion.m"
                          }
#line 393 "term_conversion.m"
                        while ((mercury__term_conversion__lo_4 <= mercury__term_conversion__hi_5));
#line 393 "term_conversion.m"
                        mercury__term_conversion__succeeded = MR_FALSE;
#line 393 "term_conversion.m"
                      label_0:;
#line 386 "term_conversion.m"
                        if (mercury__term_conversion__succeeded)
#line 386 "term_conversion.m"
                          {
#line 406 "term_conversion.m"
                            mercury__term_conversion__V_63_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 406 "term_conversion.m"
                            {
#line 406 "term_conversion.m"
                              MR_Word base;
#line 406 "term_conversion.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 406 "term_conversion.m"
                              *mercury__term_conversion__Term_12 = base;
#line 406 "term_conversion.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__Functor_15));
#line 406 "term_conversion.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term_conversion__V_63_63));
#line 406 "term_conversion.m"
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term_conversion__Context_11));
#line 406 "term_conversion.m"
                            }
#line 406 "term_conversion.m"
                            mercury__term_conversion__succeeded = MR_TRUE;
#line 386 "term_conversion.m"
                          }
#line 386 "term_conversion.m"
                      }
#line 386 "term_conversion.m"
                  }
#line 386 "term_conversion.m"
                }
#line 407 "term_conversion.m"
                break;
#line 407 "term_conversion.m"
              case (MR_Integer) 3:
#line 408 "term_conversion.m"
                {
#line 408 "term_conversion.m"
                  /* case "type_desc" */
#line 408 "term_conversion.m"
                  {
#line 408 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeCtorInfo_74_74;
#line 408 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeInfo_19;
#line 408 "term_conversion.m"
                    MR_Word mercury__term_conversion__SubTerm_20;
#line 408 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_59_59;
#line 408 "term_conversion.m"
                    MR_String mercury__term_conversion__V_60_60;
#line 408 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_61_61;
#line 408 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_62_62;
#line 411 "term_conversion.m"
                    MR_Box mercury__term_conversion__conv2_TypeInfo_19;

#line 409 "term_conversion.m"
                    mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__TypeCtorName_8, (MR_String) "type_desc") == 0);
#line 408 "term_conversion.m"
                    if (mercury__term_conversion__succeeded)
#line 408 "term_conversion.m"
                      {
#line 410 "term_conversion.m"
                        mercury__term_conversion__succeeded = (mercury__term_conversion__TypeArgs_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "term_conversion.m"
                        if (mercury__term_conversion__succeeded)
#line 408 "term_conversion.m"
                          {
#line 3643 "term_conversion.c"
                            mercury__term_conversion__TypeCtorInfo_74_74 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 411 "term_conversion.m"
                            {
#line 411 "term_conversion.m"
                              mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeCtorInfo_74_74, mercury__term_conversion__Univ_10, &mercury__term_conversion__conv2_TypeInfo_19);
                            }
#line 411 "term_conversion.m"
                            mercury__term_conversion__TypeInfo_19 = ((MR_Word) mercury__term_conversion__conv2_TypeInfo_19);
#line 412 "term_conversion.m"
                            {
#line 412 "term_conversion.m"
                              mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(mercury__term_conversion__Context_11, mercury__term_conversion__TypeInfo_19, &mercury__term_conversion__SubTerm_20);
                            }
#line 413 "term_conversion.m"
                            mercury__term_conversion__V_60_60 = (MR_String) "type_info";
#line 413 "term_conversion.m"
                            mercury__term_conversion__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 413 "term_conversion.m"
                            mercury__term_conversion__V_59_59 = (MR_Word) &mercury__term_conversion_scalar_common_6[4];
#line 413 "term_conversion.m"
                            {
#line 413 "term_conversion.m"
                              mercury__term_conversion__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "term_conversion.m"
                              MR_hl_field(MR_mktag(1), mercury__term_conversion__V_61_61, 0) = ((MR_Box) (mercury__term_conversion__SubTerm_20));
#line 413 "term_conversion.m"
                              MR_hl_field(MR_mktag(1), mercury__term_conversion__V_61_61, 1) = ((MR_Box) (mercury__term_conversion__V_62_62));
#line 413 "term_conversion.m"
                            }
#line 413 "term_conversion.m"
                            {
#line 413 "term_conversion.m"
                              MR_Word base;
#line 413 "term_conversion.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 413 "term_conversion.m"
                              *mercury__term_conversion__Term_12 = base;
#line 413 "term_conversion.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__V_59_59));
#line 413 "term_conversion.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term_conversion__V_61_61));
#line 413 "term_conversion.m"
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term_conversion__Context_11));
#line 413 "term_conversion.m"
                            }
#line 413 "term_conversion.m"
                            mercury__term_conversion__succeeded = MR_TRUE;
#line 408 "term_conversion.m"
                          }
#line 408 "term_conversion.m"
                      }
#line 408 "term_conversion.m"
                  }
#line 408 "term_conversion.m"
                }
#line 407 "term_conversion.m"
                break;
#line 407 "term_conversion.m"
              case (MR_Integer) 4:
#line 415 "term_conversion.m"
                {
#line 415 "term_conversion.m"
                  /* case "univ" */
#line 415 "term_conversion.m"
                  {
#line 415 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeCtorInfo_75_75;
#line 415 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeInfo_76_76;
#line 415 "term_conversion.m"
                    MR_Word mercury__term_conversion__NestedUniv_21;
#line 415 "term_conversion.m"
                    MR_Word mercury__term_conversion__ValueTerm_22;
#line 415 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeTerm_23;
#line 415 "term_conversion.m"
                    MR_Box mercury__term_conversion__V_47_47;
#line 415 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_48_48;
#line 415 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_49_49;
#line 415 "term_conversion.m"
                    MR_String mercury__term_conversion__V_50_50;
#line 415 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_51_51;
#line 415 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_52_52;
#line 415 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_53_53;
#line 415 "term_conversion.m"
                    MR_String mercury__term_conversion__V_54_54;
#line 415 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_55_55;
#line 415 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_56_56;
#line 415 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_57_57;
#line 415 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_58_58;
#line 418 "term_conversion.m"
                    MR_Box mercury__term_conversion__conv1_NestedUniv_21;

#line 416 "term_conversion.m"
                    mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__TypeCtorName_8, (MR_String) "univ") == 0);
#line 415 "term_conversion.m"
                    if (mercury__term_conversion__succeeded)
#line 415 "term_conversion.m"
                      {
#line 417 "term_conversion.m"
                        mercury__term_conversion__succeeded = (mercury__term_conversion__TypeArgs_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "term_conversion.m"
                        if (mercury__term_conversion__succeeded)
#line 415 "term_conversion.m"
                          {
#line 3758 "term_conversion.c"
                            mercury__term_conversion__TypeCtorInfo_75_75 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 418 "term_conversion.m"
                            {
#line 418 "term_conversion.m"
                              mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeCtorInfo_75_75, mercury__term_conversion__Univ_10, &mercury__term_conversion__conv1_NestedUniv_21);
                            }
#line 418 "term_conversion.m"
                            mercury__term_conversion__NestedUniv_21 = ((MR_Word) mercury__term_conversion__conv1_NestedUniv_21);
#line 12 "univ.opt"
                            mercury__term_conversion__TypeInfo_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__NestedUniv_21, (MR_Integer) 0)));
#line 12 "univ.opt"
                            mercury__term_conversion__V_47_47 = (MR_hl_field(MR_mktag(0), mercury__term_conversion__NestedUniv_21, (MR_Integer) 1));
#line 419 "term_conversion.m"
                            {
#line 419 "term_conversion.m"
                              mercury__term_conversion__type_to_term_2_p_0(mercury__term_conversion__TypeInfo_76_76, mercury__term_conversion__TypeInfo_for_T_69, mercury__term_conversion__V_47_47, &mercury__term_conversion__ValueTerm_22);
                            }
#line 420 "term_conversion.m"
                            {
#line 420 "term_conversion.m"
                              mercury__term_conversion__V_48_48 = mercury__univ__univ_type_1_f_0(mercury__term_conversion__NestedUniv_21);
                            }
#line 420 "term_conversion.m"
                            {
#line 420 "term_conversion.m"
                              mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(mercury__term_conversion__Context_11, mercury__term_conversion__V_48_48, &mercury__term_conversion__TypeTerm_23);
                            }
#line 421 "term_conversion.m"
                            mercury__term_conversion__V_50_50 = (MR_String) "univ";
#line 422 "term_conversion.m"
                            mercury__term_conversion__V_54_54 = (MR_String) ":";
#line 422 "term_conversion.m"
                            mercury__term_conversion__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 422 "term_conversion.m"
                            mercury__term_conversion__V_58_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 421 "term_conversion.m"
                            mercury__term_conversion__V_49_49 = (MR_Word) &mercury__term_conversion_scalar_common_6[2];
#line 422 "term_conversion.m"
                            mercury__term_conversion__V_53_53 = (MR_Word) &mercury__term_conversion_scalar_common_6[3];
#line 422 "term_conversion.m"
                            {
#line 422 "term_conversion.m"
                              mercury__term_conversion__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "term_conversion.m"
                              MR_hl_field(MR_mktag(1), mercury__term_conversion__V_56_56, 0) = ((MR_Box) (mercury__term_conversion__TypeTerm_23));
#line 422 "term_conversion.m"
                              MR_hl_field(MR_mktag(1), mercury__term_conversion__V_56_56, 1) = ((MR_Box) (mercury__term_conversion__V_57_57));
#line 422 "term_conversion.m"
                            }
#line 422 "term_conversion.m"
                            {
#line 422 "term_conversion.m"
                              mercury__term_conversion__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "term_conversion.m"
                              MR_hl_field(MR_mktag(1), mercury__term_conversion__V_55_55, 0) = ((MR_Box) (mercury__term_conversion__ValueTerm_22));
#line 422 "term_conversion.m"
                              MR_hl_field(MR_mktag(1), mercury__term_conversion__V_55_55, 1) = ((MR_Box) (mercury__term_conversion__V_56_56));
#line 422 "term_conversion.m"
                            }
#line 422 "term_conversion.m"
                            {
#line 422 "term_conversion.m"
                              mercury__term_conversion__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 422 "term_conversion.m"
                              MR_hl_field(MR_mktag(0), mercury__term_conversion__V_52_52, 0) = ((MR_Box) (mercury__term_conversion__V_53_53));
#line 422 "term_conversion.m"
                              MR_hl_field(MR_mktag(0), mercury__term_conversion__V_52_52, 1) = ((MR_Box) (mercury__term_conversion__V_55_55));
#line 422 "term_conversion.m"
                              MR_hl_field(MR_mktag(0), mercury__term_conversion__V_52_52, 2) = ((MR_Box) (mercury__term_conversion__Context_11));
#line 422 "term_conversion.m"
                            }
#line 422 "term_conversion.m"
                            {
#line 422 "term_conversion.m"
                              mercury__term_conversion__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "term_conversion.m"
                              MR_hl_field(MR_mktag(1), mercury__term_conversion__V_51_51, 0) = ((MR_Box) (mercury__term_conversion__V_52_52));
#line 422 "term_conversion.m"
                              MR_hl_field(MR_mktag(1), mercury__term_conversion__V_51_51, 1) = ((MR_Box) (mercury__term_conversion__V_58_58));
#line 422 "term_conversion.m"
                            }
#line 421 "term_conversion.m"
                            {
#line 421 "term_conversion.m"
                              MR_Word base;
#line 421 "term_conversion.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 421 "term_conversion.m"
                              *mercury__term_conversion__Term_12 = base;
#line 421 "term_conversion.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__V_49_49));
#line 421 "term_conversion.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term_conversion__V_51_51));
#line 421 "term_conversion.m"
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term_conversion__Context_11));
#line 421 "term_conversion.m"
                            }
#line 421 "term_conversion.m"
                            mercury__term_conversion__succeeded = MR_TRUE;
#line 415 "term_conversion.m"
                          }
#line 415 "term_conversion.m"
                      }
#line 415 "term_conversion.m"
                  }
#line 415 "term_conversion.m"
                }
#line 407 "term_conversion.m"
                break;
#line 407 "term_conversion.m"
              case (MR_Integer) 5:
#line 441 "term_conversion.m"
                {
#line 441 "term_conversion.m"
                  /* case "version_array" */
#line 441 "term_conversion.m"
                  {
#line 441 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeInfo_83_83;
#line 441 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeCtorInfo_84_84;
#line 441 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeInfo_85_85;
#line 441 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeCtorInfo_86_86;
#line 441 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeInfo_87_87;
#line 441 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_31_31;
#line 441 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_34_34;
#line 441 "term_conversion.m"
                    MR_String mercury__term_conversion__V_35_35;
#line 441 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_36_36;
#line 441 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_37_37;
#line 441 "term_conversion.m"
                    MR_Word mercury__term_conversion__ElemType_64;
#line 441 "term_conversion.m"
                    MR_Word mercury__term_conversion__List_66;
#line 441 "term_conversion.m"
                    MR_Box mercury__term_conversion__Array_67;
#line 441 "term_conversion.m"
                    MR_Word mercury__term_conversion__ArgsTerm_68;
#line 74 "type_desc.opt"
                    MR_Box mercury__term_conversion__Elem_65;
#line 446 "term_conversion.m"
                    MR_Box mercury__term_conversion__conv0_Array_67;

#line 442 "term_conversion.m"
                    mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__TypeCtorName_8, (MR_String) "version_array") == 0);
#line 441 "term_conversion.m"
                    if (mercury__term_conversion__succeeded)
#line 441 "term_conversion.m"
                      {
#line 443 "term_conversion.m"
                        mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__TypeArgs_9)) == (MR_mktag((MR_Integer) 1)));
#line 443 "term_conversion.m"
                        if (mercury__term_conversion__succeeded)
#line 443 "term_conversion.m"
                          {
#line 443 "term_conversion.m"
                            mercury__term_conversion__ElemType_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__TypeArgs_9, (MR_Integer) 0)));
#line 443 "term_conversion.m"
                            mercury__term_conversion__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__TypeArgs_9, (MR_Integer) 1)));
#line 443 "term_conversion.m"
                            mercury__term_conversion__succeeded = (mercury__term_conversion__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 441 "term_conversion.m"
                            if (mercury__term_conversion__succeeded)
#line 441 "term_conversion.m"
                              {
#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_special_case_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__term_conversion__ElemType_64 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 3944 "term_conversion.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__TypeInfo_83_83  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 3951 "term_conversion.c"
                                mercury__term_conversion__TypeCtorInfo_84_84 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 3953 "term_conversion.c"
                                mercury__term_conversion__TypeCtorInfo_86_86 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 3955 "term_conversion.c"
                                {
#line 3957 "term_conversion.c"
                                  mercury__term_conversion__TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3959 "term_conversion.c"
                                  MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_85_85, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_84_84));
#line 3961 "term_conversion.c"
                                  MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_85_85, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_83_83));
#line 3963 "term_conversion.c"
                                }
#line 3965 "term_conversion.c"
                                {
#line 3967 "term_conversion.c"
                                  mercury__term_conversion__TypeInfo_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3969 "term_conversion.c"
                                  MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_87_87, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_86_86));
#line 3971 "term_conversion.c"
                                  MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_87_87, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_83_83));
#line 3973 "term_conversion.c"
                                }
#line 446 "term_conversion.m"
                                {
#line 446 "term_conversion.m"
                                  mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeInfo_87_87, mercury__term_conversion__Univ_10, &mercury__term_conversion__conv0_Array_67);
                                }
#line 446 "term_conversion.m"
                                mercury__term_conversion__Array_67 = ((MR_Box) mercury__term_conversion__conv0_Array_67);
#line 447 "term_conversion.m"
                                {
#line 447 "term_conversion.m"
                                  mercury__term_conversion__List_66 = mercury__version_array__to_list_1_f_0(mercury__term_conversion__TypeInfo_83_83, mercury__term_conversion__Array_67);
                                }
#line 448 "term_conversion.m"
                                {
#line 448 "term_conversion.m"
                                  mercury__term_conversion__type_to_term_2_p_0(mercury__term_conversion__TypeInfo_85_85, mercury__term_conversion__TypeInfo_for_T_69, ((MR_Box) (mercury__term_conversion__List_66)), &mercury__term_conversion__ArgsTerm_68);
                                }
#line 449 "term_conversion.m"
                                mercury__term_conversion__V_35_35 = (MR_String) "version_array";
#line 449 "term_conversion.m"
                                mercury__term_conversion__V_37_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 449 "term_conversion.m"
                                mercury__term_conversion__V_34_34 = (MR_Word) &mercury__term_conversion_scalar_common_6[1];
#line 449 "term_conversion.m"
                                {
#line 449 "term_conversion.m"
                                  mercury__term_conversion__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "term_conversion.m"
                                  MR_hl_field(MR_mktag(1), mercury__term_conversion__V_36_36, 0) = ((MR_Box) (mercury__term_conversion__ArgsTerm_68));
#line 449 "term_conversion.m"
                                  MR_hl_field(MR_mktag(1), mercury__term_conversion__V_36_36, 1) = ((MR_Box) (mercury__term_conversion__V_37_37));
#line 449 "term_conversion.m"
                                }
#line 449 "term_conversion.m"
                                {
#line 449 "term_conversion.m"
                                  MR_Word base;
#line 449 "term_conversion.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 449 "term_conversion.m"
                                  *mercury__term_conversion__Term_12 = base;
#line 449 "term_conversion.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__V_34_34));
#line 449 "term_conversion.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term_conversion__V_36_36));
#line 449 "term_conversion.m"
                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term_conversion__Context_11));
#line 449 "term_conversion.m"
                                }
#line 449 "term_conversion.m"
                                mercury__term_conversion__succeeded = MR_TRUE;
#line 441 "term_conversion.m"
                              }
#line 443 "term_conversion.m"
                          }
#line 441 "term_conversion.m"
                      }
#line 441 "term_conversion.m"
                  }
#line 441 "term_conversion.m"
                }
#line 407 "term_conversion.m"
                break;
#line 407 "term_conversion.m"
            }
#line 407 "term_conversion.m"
            /* jump out of search loop */
#line 407 "term_conversion.m"
            goto label_1;
#line 407 "term_conversion.m"
          }
#line 407 "term_conversion.m"
        else
#line 407 "term_conversion.m"
        if ((mercury__term_conversion__result_3 < (MR_Integer) 0))
#line 407 "term_conversion.m"
          mercury__term_conversion__hi_1 = (mercury__term_conversion__mid_2 - (MR_Integer) 1);
#line 407 "term_conversion.m"
        else
#line 407 "term_conversion.m"
          mercury__term_conversion__lo_0 = (mercury__term_conversion__mid_2 + (MR_Integer) 1);
#line 407 "term_conversion.m"
      }
#line 407 "term_conversion.m"
    while ((mercury__term_conversion__lo_0 <= mercury__term_conversion__hi_1));
#line 407 "term_conversion.m"
    mercury__term_conversion__succeeded = MR_FALSE;
#line 407 "term_conversion.m"
  label_1:;
#line 407 "term_conversion.m"
    return mercury__term_conversion__succeeded;
#line 407 "term_conversion.m"
  }
#line 380 "term_conversion.m"
}

#line 304 "term_conversion.m"
static MR_bool MR_CALL 
mercury__term_conversion__term_list_to_univ_list_7_p_0(
#line 304 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_33,
#line 304 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__1_1,
#line 304 "term_conversion.m"
  MR_Word mercury__term_conversion__HeadVar__2_2,
#line 304 "term_conversion.m"
  MR_Word mercury__term_conversion__Functor_3,
#line 304 "term_conversion.m"
  MR_Integer mercury__term_conversion__ArgNum_4,
#line 304 "term_conversion.m"
  MR_Word mercury__term_conversion__PrevContext_5,
#line 304 "term_conversion.m"
  MR_Word mercury__term_conversion__TermContext_6,
#line 304 "term_conversion.m"
  MR_Word * mercury__term_conversion__HeadVar__7_7)
#line 304 "term_conversion.m"
{
#line 309 "term_conversion.m"
  {
#line 309 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;

#line 309 "term_conversion.m"
    if ((mercury__term_conversion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "term_conversion.m"
      {
#line 309 "term_conversion.m"
        MR_Word mercury__term_conversion__V_12_12;

#line 309 "term_conversion.m"
        mercury__term_conversion__succeeded = (mercury__term_conversion__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 309 "term_conversion.m"
        if (mercury__term_conversion__succeeded)
#line 309 "term_conversion.m"
          {
#line 309 "term_conversion.m"
            mercury__term_conversion__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 309 "term_conversion.m"
            *mercury__term_conversion__HeadVar__7_7 = (MR_Word) &mercury__term_conversion_scalar_common_6[0];
#line 309 "term_conversion.m"
            mercury__term_conversion__succeeded = MR_TRUE;
#line 309 "term_conversion.m"
          }
#line 309 "term_conversion.m"
      }
#line 309 "term_conversion.m"
    else
#line 311 "term_conversion.m"
      {
#line 311 "term_conversion.m"
        MR_Word mercury__term_conversion__ArgTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 0)));
#line 311 "term_conversion.m"
        MR_Word mercury__term_conversion__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 1)));
#line 311 "term_conversion.m"
        MR_Word mercury__term_conversion__Type_15;
#line 311 "term_conversion.m"
        MR_Word mercury__term_conversion__Types_16;
#line 311 "term_conversion.m"
        MR_Word mercury__term_conversion__ArgContext_22;
#line 311 "term_conversion.m"
        MR_Word mercury__term_conversion__NewContext_23;
#line 311 "term_conversion.m"
        MR_Word mercury__term_conversion__ArgResult_24;

#line 310 "term_conversion.m"
        mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 310 "term_conversion.m"
        if (mercury__term_conversion__succeeded)
#line 310 "term_conversion.m"
          {
#line 310 "term_conversion.m"
            mercury__term_conversion__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0)));
#line 310 "term_conversion.m"
            mercury__term_conversion__Types_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 1)));
#line 312 "term_conversion.m"
            {
#line 312 "term_conversion.m"
              mercury__term_conversion__ArgContext_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 312 "term_conversion.m"
              MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgContext_22, 0) = ((MR_Box) (mercury__term_conversion__Functor_3));
#line 312 "term_conversion.m"
              MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgContext_22, 1) = ((MR_Box) (mercury__term_conversion__ArgNum_4));
#line 312 "term_conversion.m"
              MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgContext_22, 2) = ((MR_Box) (mercury__term_conversion__TermContext_6));
#line 312 "term_conversion.m"
            }
#line 313 "term_conversion.m"
            {
#line 313 "term_conversion.m"
              mercury__term_conversion__NewContext_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "term_conversion.m"
              MR_hl_field(MR_mktag(1), mercury__term_conversion__NewContext_23, 0) = ((MR_Box) (mercury__term_conversion__ArgContext_22));
#line 313 "term_conversion.m"
              MR_hl_field(MR_mktag(1), mercury__term_conversion__NewContext_23, 1) = ((MR_Box) (mercury__term_conversion__PrevContext_5));
#line 313 "term_conversion.m"
            }
#line 314 "term_conversion.m"
            {
#line 314 "term_conversion.m"
              mercury__term_conversion__try_term_to_univ_2_4_p_0(mercury__term_conversion__TypeInfo_for_T_33, mercury__term_conversion__ArgTerm_13, mercury__term_conversion__Type_15, mercury__term_conversion__NewContext_23, &mercury__term_conversion__ArgResult_24);
            }
#line 326 "term_conversion.m"
            if (((MR_tag((MR_Word) mercury__term_conversion__ArgResult_24)) == (MR_mktag((MR_Integer) 1))))
#line 328 "term_conversion.m"
              {
#line 328 "term_conversion.m"
                *mercury__term_conversion__HeadVar__7_7 = (MR_Word) mercury__term_conversion__ArgResult_24;
#line 328 "term_conversion.m"
                mercury__term_conversion__succeeded = MR_TRUE;
#line 328 "term_conversion.m"
              }
#line 326 "term_conversion.m"
            else
#line 316 "term_conversion.m"
              {
#line 316 "term_conversion.m"
                MR_Word mercury__term_conversion__Arg_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgResult_24, (MR_Integer) 0)));
#line 316 "term_conversion.m"
                MR_Word mercury__term_conversion__RestResult_26;
#line 316 "term_conversion.m"
                MR_Integer mercury__term_conversion__V_29_29 = (mercury__term_conversion__ArgNum_4 + (MR_Integer) 1);

#line 317 "term_conversion.m"
                {
#line 317 "term_conversion.m"
                  mercury__term_conversion__succeeded = mercury__term_conversion__term_list_to_univ_list_7_p_0(mercury__term_conversion__TypeInfo_for_T_33, mercury__term_conversion__ArgTerms_14, mercury__term_conversion__Types_16, mercury__term_conversion__Functor_3, mercury__term_conversion__V_29_29, mercury__term_conversion__PrevContext_5, mercury__term_conversion__TermContext_6, &mercury__term_conversion__RestResult_26);
                }
#line 316 "term_conversion.m"
                if (mercury__term_conversion__succeeded)
#line 316 "term_conversion.m"
                  {
#line 322 "term_conversion.m"
                    if (((MR_tag((MR_Word) mercury__term_conversion__RestResult_26)) == (MR_mktag((MR_Integer) 1))))
#line 324 "term_conversion.m"
                      *mercury__term_conversion__HeadVar__7_7 = mercury__term_conversion__RestResult_26;
#line 322 "term_conversion.m"
                    else
#line 320 "term_conversion.m"
                      {
#line 320 "term_conversion.m"
                        MR_Word mercury__term_conversion__Rest_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__RestResult_26, (MR_Integer) 0)));
#line 320 "term_conversion.m"
                        MR_Word mercury__term_conversion__V_31_31;

#line 321 "term_conversion.m"
                        {
#line 321 "term_conversion.m"
                          mercury__term_conversion__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "term_conversion.m"
                          MR_hl_field(MR_mktag(1), mercury__term_conversion__V_31_31, 0) = ((MR_Box) (mercury__term_conversion__Arg_25));
#line 321 "term_conversion.m"
                          MR_hl_field(MR_mktag(1), mercury__term_conversion__V_31_31, 1) = ((MR_Box) (mercury__term_conversion__Rest_27));
#line 321 "term_conversion.m"
                        }
#line 321 "term_conversion.m"
                        {
#line 321 "term_conversion.m"
                          MR_Word base;
#line 321 "term_conversion.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 321 "term_conversion.m"
                          *mercury__term_conversion__HeadVar__7_7 = base;
#line 321 "term_conversion.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__V_31_31));
#line 321 "term_conversion.m"
                        }
#line 320 "term_conversion.m"
                      }
#line 322 "term_conversion.m"
                    mercury__term_conversion__succeeded = MR_TRUE;
#line 316 "term_conversion.m"
                  }
#line 316 "term_conversion.m"
              }
#line 310 "term_conversion.m"
          }
#line 311 "term_conversion.m"
      }
#line 309 "term_conversion.m"
    return mercury__term_conversion__succeeded;
#line 309 "term_conversion.m"
  }
#line 304 "term_conversion.m"
}

#line 191 "term_conversion.m"
static MR_bool MR_CALL 
mercury__term_conversion__term_to_univ_special_case_6_p_0(
#line 191 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_137,
#line 191 "term_conversion.m"
  MR_String mercury__term_conversion__ModuleName_7,
#line 191 "term_conversion.m"
  MR_String mercury__term_conversion__TypeCtorName_8,
#line 191 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeArgs_9,
#line 191 "term_conversion.m"
  MR_Word mercury__term_conversion__Term_10,
#line 191 "term_conversion.m"
  MR_Word mercury__term_conversion__PrevContext_11,
#line 191 "term_conversion.m"
  MR_Word * mercury__term_conversion__Result_12)
#line 191 "term_conversion.m"
{
#line 220 "term_conversion.m"
  {
#line 220 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 220 "term_conversion.m"
    MR_Word mercury__term_conversion__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Term_10, (MR_Integer) 2)));
#line 220 "term_conversion.m"
    MR_Word mercury__term_conversion__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Term_10, (MR_Integer) 1)));
#line 220 "term_conversion.m"
    MR_Word mercury__term_conversion__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Term_10, (MR_Integer) 0)));
#line 220 "term_conversion.m"
    MR_Integer mercury__term_conversion__lo_0;
#line 220 "term_conversion.m"
    MR_Integer mercury__term_conversion__hi_1;
#line 220 "term_conversion.m"
    MR_Integer mercury__term_conversion__mid_2;
#line 220 "term_conversion.m"
    MR_Integer mercury__term_conversion__result_3;

#line 220 "term_conversion.m"
    /* binary string jump switch */
#line 220 "term_conversion.m"
    mercury__term_conversion__lo_0 = (MR_Integer) 0;
#line 220 "term_conversion.m"
    mercury__term_conversion__hi_1 = (MR_Integer) 4;
#line 220 "term_conversion.m"
    do
#line 220 "term_conversion.m"
      {
#line 220 "term_conversion.m"
        mercury__term_conversion__mid_2 = (((mercury__term_conversion__lo_0 + mercury__term_conversion__hi_1)) / (MR_Integer) 2);
#line 220 "term_conversion.m"
        mercury__term_conversion__result_3 = MR_strcmp(mercury__term_conversion__ModuleName_7, ((&mercury__term_conversion_vector_common_5[4 + mercury__term_conversion__mid_2]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_0);
#line 220 "term_conversion.m"
        if ((mercury__term_conversion__result_3 == (MR_Integer) 0))
#line 220 "term_conversion.m"
          {
#line 220 "term_conversion.m"
#line 220 "term_conversion.m"
            switch (((&mercury__term_conversion_vector_common_5[4 + mercury__term_conversion__mid_2]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_1) {
#line 220 "term_conversion.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 220 "term_conversion.m"
              case (MR_Integer) 0:
#line 229 "term_conversion.m"
                {
#line 229 "term_conversion.m"
                  /* case "array" */
#line 229 "term_conversion.m"
                  {
#line 229 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeInfo_143_143;
#line 229 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeCtorInfo_144_144;
#line 229 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeInfo_145_145;
#line 229 "term_conversion.m"
                    MR_Word mercury__term_conversion__ElemType_22;
#line 229 "term_conversion.m"
                    MR_Word mercury__term_conversion__ArgList_23;
#line 229 "term_conversion.m"
                    MR_Word mercury__term_conversion__ListType_26;
#line 229 "term_conversion.m"
                    MR_Word mercury__term_conversion__ArgContext_27;
#line 229 "term_conversion.m"
                    MR_Word mercury__term_conversion__NewContext_28;
#line 229 "term_conversion.m"
                    MR_Word mercury__term_conversion__ArgResult_29;
#line 229 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_84_84;
#line 229 "term_conversion.m"
                    MR_String mercury__term_conversion__V_86_86;
#line 229 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_88_88;
#line 229 "term_conversion.m"
                    MR_Integer mercury__term_conversion__V_93_93;
#line 239 "term_conversion.m"
                    MR_Box mercury__term_conversion__Elem_25;
#line 240 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_89_89;

#line 230 "term_conversion.m"
                    mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__TypeCtorName_8, (MR_String) "array") == 0);
#line 229 "term_conversion.m"
                    if (mercury__term_conversion__succeeded)
#line 229 "term_conversion.m"
                      {
#line 231 "term_conversion.m"
                        mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__TypeArgs_9)) == (MR_mktag((MR_Integer) 1)));
#line 231 "term_conversion.m"
                        if (mercury__term_conversion__succeeded)
#line 231 "term_conversion.m"
                          {
#line 231 "term_conversion.m"
                            mercury__term_conversion__ElemType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__TypeArgs_9, (MR_Integer) 0)));
#line 231 "term_conversion.m"
                            mercury__term_conversion__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__TypeArgs_9, (MR_Integer) 1)));
#line 231 "term_conversion.m"
                            mercury__term_conversion__succeeded = (mercury__term_conversion__V_84_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "term_conversion.m"
                            if (mercury__term_conversion__succeeded)
#line 229 "term_conversion.m"
                              {
#line 234 "term_conversion.m"
                                mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__V_165_165)) == (MR_mktag((MR_Integer) 0)));
#line 234 "term_conversion.m"
                                if (mercury__term_conversion__succeeded)
#line 234 "term_conversion.m"
                                  {
#line 234 "term_conversion.m"
                                    mercury__term_conversion__V_86_86 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_conversion__V_165_165, (MR_Integer) 0)));
#line 234 "term_conversion.m"
                                    mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__V_86_86, (MR_String) "array") == 0);
#line 229 "term_conversion.m"
                                    if (mercury__term_conversion__succeeded)
#line 229 "term_conversion.m"
                                      {
#line 234 "term_conversion.m"
                                        mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__V_164_164)) == (MR_mktag((MR_Integer) 1)));
#line 234 "term_conversion.m"
                                        if (mercury__term_conversion__succeeded)
#line 234 "term_conversion.m"
                                          {
#line 234 "term_conversion.m"
                                            mercury__term_conversion__ArgList_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__V_164_164, (MR_Integer) 0)));
#line 234 "term_conversion.m"
                                            mercury__term_conversion__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__V_164_164, (MR_Integer) 1)));
#line 234 "term_conversion.m"
                                            mercury__term_conversion__succeeded = (mercury__term_conversion__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "term_conversion.m"
                                            if (mercury__term_conversion__succeeded)
#line 229 "term_conversion.m"
                                              {
#line 239 "term_conversion.m"
                                                {
#line 239 "term_conversion.m"
                                                  mercury__type_desc__has_type_2_p_0(&mercury__term_conversion__TypeInfo_143_143, mercury__term_conversion__ElemType_22);
                                                }
#line 4417 "term_conversion.c"
                                                mercury__term_conversion__TypeCtorInfo_144_144 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 4419 "term_conversion.c"
                                                {
#line 4421 "term_conversion.c"
                                                  mercury__term_conversion__TypeInfo_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4423 "term_conversion.c"
                                                  MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_145_145, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_144_144));
#line 4425 "term_conversion.c"
                                                  MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_145_145, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_143_143));
#line 4427 "term_conversion.c"
                                                }
#line 240 "term_conversion.m"
                                                {
#line 240 "term_conversion.m"
                                                  mercury__term_conversion__ListType_26 = mercury__type_desc__type_of_1_f_0(mercury__term_conversion__TypeInfo_145_145);
                                                }
#line 241 "term_conversion.m"
                                                mercury__term_conversion__V_93_93 = (MR_Integer) 1;
#line 241 "term_conversion.m"
                                                {
#line 241 "term_conversion.m"
                                                  mercury__term_conversion__ArgContext_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 241 "term_conversion.m"
                                                  MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgContext_27, 0) = ((MR_Box) (mercury__term_conversion__V_165_165));
#line 241 "term_conversion.m"
                                                  MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgContext_27, 1) = ((MR_Box) (mercury__term_conversion__V_93_93));
#line 241 "term_conversion.m"
                                                  MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgContext_27, 2) = ((MR_Box) (mercury__term_conversion__V_163_163));
#line 241 "term_conversion.m"
                                                }
#line 242 "term_conversion.m"
                                                {
#line 242 "term_conversion.m"
                                                  mercury__term_conversion__NewContext_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "term_conversion.m"
                                                  MR_hl_field(MR_mktag(1), mercury__term_conversion__NewContext_28, 0) = ((MR_Box) (mercury__term_conversion__ArgContext_27));
#line 242 "term_conversion.m"
                                                  MR_hl_field(MR_mktag(1), mercury__term_conversion__NewContext_28, 1) = ((MR_Box) (mercury__term_conversion__PrevContext_11));
#line 242 "term_conversion.m"
                                                }
#line 243 "term_conversion.m"
                                                {
#line 243 "term_conversion.m"
                                                  mercury__term_conversion__try_term_to_univ_2_4_p_0(mercury__term_conversion__TypeInfo_for_T_137, mercury__term_conversion__ArgList_23, mercury__term_conversion__ListType_26, mercury__term_conversion__NewContext_28, &mercury__term_conversion__ArgResult_29);
                                                }
#line 251 "term_conversion.m"
                                                if (((MR_tag((MR_Word) mercury__term_conversion__ArgResult_29)) == (MR_mktag((MR_Integer) 1))))
#line 253 "term_conversion.m"
                                                  *mercury__term_conversion__Result_12 = mercury__term_conversion__ArgResult_29;
#line 251 "term_conversion.m"
                                                else
#line 245 "term_conversion.m"
                                                  {
#line 245 "term_conversion.m"
                                                    MR_Word mercury__term_conversion__TypeInfo_146_146;
#line 245 "term_conversion.m"
                                                    MR_Word mercury__term_conversion__TypeInfo_147_147;
#line 245 "term_conversion.m"
                                                    MR_Word mercury__term_conversion__TypeCtorInfo_148_148;
#line 245 "term_conversion.m"
                                                    MR_Word mercury__term_conversion__TypeInfo_149_149;
#line 245 "term_conversion.m"
                                                    MR_Word mercury__term_conversion__ListUniv_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgResult_29, (MR_Integer) 0)));
#line 245 "term_conversion.m"
                                                    MR_Word mercury__term_conversion__List_32;
#line 245 "term_conversion.m"
                                                    MR_ArrayPtr mercury__term_conversion__Array_33;
#line 245 "term_conversion.m"
                                                    MR_Word mercury__term_conversion__V_96_96;
#line 246 "term_conversion.m"
                                                    MR_Box mercury__term_conversion__Elem2_31;
#line 248 "term_conversion.m"
                                                    MR_Box mercury__term_conversion__conv1_List_32;
#line 249 "term_conversion.m"
                                                    MR_ArrayPtr mercury__term_conversion__conv2_Array_33;

#line 246 "term_conversion.m"
                                                    {
#line 246 "term_conversion.m"
                                                      mercury__type_desc__has_type_2_p_0(&mercury__term_conversion__TypeInfo_146_146, mercury__term_conversion__ElemType_22);
                                                    }
#line 4499 "term_conversion.c"
                                                    {
#line 4501 "term_conversion.c"
                                                      mercury__term_conversion__TypeInfo_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4503 "term_conversion.c"
                                                      MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_147_147, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_144_144));
#line 4505 "term_conversion.c"
                                                      MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_147_147, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_146_146));
#line 4507 "term_conversion.c"
                                                    }
#line 248 "term_conversion.m"
                                                    {
#line 248 "term_conversion.m"
                                                      mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeInfo_147_147, mercury__term_conversion__ListUniv_30, &mercury__term_conversion__conv1_List_32);
                                                    }
#line 248 "term_conversion.m"
                                                    mercury__term_conversion__List_32 = ((MR_Word) mercury__term_conversion__conv1_List_32);
#line 249 "term_conversion.m"
                                                    {
#line 249 "term_conversion.m"
                                                      mercury__term_conversion__conv2_Array_33 = mercury__array__array_1_f_0(mercury__term_conversion__TypeInfo_146_146, mercury__term_conversion__List_32);
                                                    }
#line 249 "term_conversion.m"
                                                    mercury__term_conversion__Array_33 = (MR_ArrayPtr) mercury__term_conversion__conv2_Array_33;
#line 4523 "term_conversion.c"
                                                    mercury__term_conversion__TypeCtorInfo_148_148 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 4525 "term_conversion.c"
                                                    {
#line 4527 "term_conversion.c"
                                                      mercury__term_conversion__TypeInfo_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4529 "term_conversion.c"
                                                      MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_149_149, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_148_148));
#line 4531 "term_conversion.c"
                                                      MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_149_149, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_146_146));
#line 4533 "term_conversion.c"
                                                    }
#line 250 "term_conversion.m"
                                                    {
#line 250 "term_conversion.m"
                                                      mercury__term_conversion__V_96_96 = mercury__univ__univ_1_f_0(mercury__term_conversion__TypeInfo_149_149, ((MR_Box) (mercury__term_conversion__Array_33)));
                                                    }
#line 250 "term_conversion.m"
                                                    {
#line 250 "term_conversion.m"
                                                      MR_Word base;
#line 250 "term_conversion.m"
                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 250 "term_conversion.m"
                                                      *mercury__term_conversion__Result_12 = base;
#line 250 "term_conversion.m"
                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__V_96_96));
#line 250 "term_conversion.m"
                                                    }
#line 245 "term_conversion.m"
                                                  }
#line 251 "term_conversion.m"
                                                mercury__term_conversion__succeeded = MR_TRUE;
#line 229 "term_conversion.m"
                                              }
#line 234 "term_conversion.m"
                                          }
#line 229 "term_conversion.m"
                                      }
#line 234 "term_conversion.m"
                                  }
#line 229 "term_conversion.m"
                              }
#line 231 "term_conversion.m"
                          }
#line 229 "term_conversion.m"
                      }
#line 229 "term_conversion.m"
                  }
#line 229 "term_conversion.m"
                }
#line 220 "term_conversion.m"
                break;
#line 220 "term_conversion.m"
              case (MR_Integer) 1:
#line 221 "term_conversion.m"
                {
#line 221 "term_conversion.m"
                  /* case "bitmap" */
#line 221 "term_conversion.m"
                  {
#line 221 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeCtorInfo_142_142;
#line 221 "term_conversion.m"
                    MR_Box mercury__term_conversion__V_99_99;
#line 221 "term_conversion.m"
                    MR_Word mercury__term_conversion__Univ_102;
#line 221 "term_conversion.m"
                    MR_String mercury__term_conversion__String_103;

#line 222 "term_conversion.m"
                    mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__TypeCtorName_8, (MR_String) "bitmap") == 0);
#line 221 "term_conversion.m"
                    if (mercury__term_conversion__succeeded)
#line 221 "term_conversion.m"
                      {
#line 223 "term_conversion.m"
                        mercury__term_conversion__succeeded = (mercury__term_conversion__TypeArgs_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 221 "term_conversion.m"
                        if (mercury__term_conversion__succeeded)
#line 221 "term_conversion.m"
                          {
#line 225 "term_conversion.m"
                            mercury__term_conversion__succeeded = ((((MR_tag((MR_Word) mercury__term_conversion__V_165_165)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_conversion__V_165_165, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 225 "term_conversion.m"
                            if (mercury__term_conversion__succeeded)
#line 225 "term_conversion.m"
                              {
#line 225 "term_conversion.m"
                                mercury__term_conversion__String_103 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_conversion__V_165_165, (MR_Integer) 1)));
#line 225 "term_conversion.m"
                                mercury__term_conversion__succeeded = (mercury__term_conversion__V_164_164 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 221 "term_conversion.m"
                                if (mercury__term_conversion__succeeded)
#line 221 "term_conversion.m"
                                  {
#line 226 "term_conversion.m"
                                    {
#line 226 "term_conversion.m"
                                      mercury__term_conversion__succeeded = mercury__bitmap__from_string_1_f_0(mercury__term_conversion__String_103, &mercury__term_conversion__V_99_99);
                                    }
#line 221 "term_conversion.m"
                                    if (mercury__term_conversion__succeeded)
#line 221 "term_conversion.m"
                                      {
#line 4628 "term_conversion.c"
                                        mercury__term_conversion__TypeCtorInfo_142_142 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 226 "term_conversion.m"
                                        {
#line 226 "term_conversion.m"
                                          mercury__univ__type_to_univ_2_p_1(mercury__term_conversion__TypeCtorInfo_142_142, ((MR_Box) (mercury__term_conversion__V_99_99)), &mercury__term_conversion__Univ_102);
                                        }
#line 227 "term_conversion.m"
                                        {
#line 227 "term_conversion.m"
                                          MR_Word base;
#line 227 "term_conversion.m"
                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 227 "term_conversion.m"
                                          *mercury__term_conversion__Result_12 = base;
#line 227 "term_conversion.m"
                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__Univ_102));
#line 227 "term_conversion.m"
                                        }
#line 227 "term_conversion.m"
                                        mercury__term_conversion__succeeded = MR_TRUE;
#line 221 "term_conversion.m"
                                      }
#line 221 "term_conversion.m"
                                  }
#line 225 "term_conversion.m"
                              }
#line 221 "term_conversion.m"
                          }
#line 221 "term_conversion.m"
                      }
#line 221 "term_conversion.m"
                  }
#line 221 "term_conversion.m"
                }
#line 220 "term_conversion.m"
                break;
#line 220 "term_conversion.m"
              case (MR_Integer) 2:
#line 198 "term_conversion.m"
                {
#line 198 "term_conversion.m"
                  /* case "builtin" */
#line 198 "term_conversion.m"
                  {
#line 198 "term_conversion.m"
                    MR_Word mercury__term_conversion__Univ_17;
#line 206 "term_conversion.m"
                    MR_Integer mercury__term_conversion__lo_4;
#line 206 "term_conversion.m"
                    MR_Integer mercury__term_conversion__hi_5;
#line 206 "term_conversion.m"
                    MR_Integer mercury__term_conversion__mid_6;
#line 206 "term_conversion.m"
                    MR_Integer mercury__term_conversion__result_7;

#line 199 "term_conversion.m"
                    mercury__term_conversion__succeeded = (mercury__term_conversion__TypeArgs_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 198 "term_conversion.m"
                    if (mercury__term_conversion__succeeded)
#line 198 "term_conversion.m"
                      {
#line 200 "term_conversion.m"
                        mercury__term_conversion__succeeded = (mercury__term_conversion__V_164_164 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 198 "term_conversion.m"
                        if (mercury__term_conversion__succeeded)
#line 198 "term_conversion.m"
                          {
#line 206 "term_conversion.m"
                            /* binary string jump switch */
#line 206 "term_conversion.m"
                            mercury__term_conversion__lo_4 = (MR_Integer) 0;
#line 206 "term_conversion.m"
                            mercury__term_conversion__hi_5 = (MR_Integer) 3;
#line 206 "term_conversion.m"
                            do
#line 206 "term_conversion.m"
                              {
#line 206 "term_conversion.m"
                                mercury__term_conversion__mid_6 = (((mercury__term_conversion__lo_4 + mercury__term_conversion__hi_5)) / (MR_Integer) 2);
#line 206 "term_conversion.m"
                                mercury__term_conversion__result_7 = MR_strcmp(mercury__term_conversion__TypeCtorName_8, ((&mercury__term_conversion_vector_common_5[0 + mercury__term_conversion__mid_6]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_0);
#line 206 "term_conversion.m"
                                if ((mercury__term_conversion__result_7 == (MR_Integer) 0))
#line 206 "term_conversion.m"
                                  {
#line 206 "term_conversion.m"
#line 206 "term_conversion.m"
                                    switch (((&mercury__term_conversion_vector_common_5[0 + mercury__term_conversion__mid_6]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_1) {
#line 206 "term_conversion.m"
                                      default: /*NOTREACHED*/ MR_assert(0);
#line 206 "term_conversion.m"
                                      case (MR_Integer) 0:
#line 202 "term_conversion.m"
                                        {
#line 202 "term_conversion.m"
                                          /* case "character" */
#line 202 "term_conversion.m"
                                          {
#line 202 "term_conversion.m"
                                            MR_Word mercury__term_conversion__TypeCtorInfo_138_138;
#line 202 "term_conversion.m"
                                            MR_String mercury__term_conversion__FunctorName_15;
#line 202 "term_conversion.m"
                                            MR_Char mercury__term_conversion__Char_16;
#line 202 "term_conversion.m"
                                            MR_String mercury__term_conversion__V_101_101;

#line 203 "term_conversion.m"
                                            mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__V_165_165)) == (MR_mktag((MR_Integer) 0)));
#line 203 "term_conversion.m"
                                            if (mercury__term_conversion__succeeded)
#line 203 "term_conversion.m"
                                              {
#line 203 "term_conversion.m"
                                                mercury__term_conversion__FunctorName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_conversion__V_165_165, (MR_Integer) 0)));
#line 204 "term_conversion.m"
                                                mercury__term_conversion__V_101_101 = (MR_String) "";
#line 204 "term_conversion.m"
                                                {
#line 204 "term_conversion.m"
                                                  mercury__term_conversion__succeeded = mercury__string__first_char_3_p_1(mercury__term_conversion__FunctorName_15, &mercury__term_conversion__Char_16, mercury__term_conversion__V_101_101);
                                                }
#line 202 "term_conversion.m"
                                                if (mercury__term_conversion__succeeded)
#line 202 "term_conversion.m"
                                                  {
#line 4755 "term_conversion.c"
                                                    mercury__term_conversion__TypeCtorInfo_138_138 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 205 "term_conversion.m"
                                                    {
#line 205 "term_conversion.m"
                                                      mercury__univ__type_to_univ_2_p_0(mercury__term_conversion__TypeCtorInfo_138_138, ((MR_Box) (MR_Word) (mercury__term_conversion__Char_16)), &mercury__term_conversion__Univ_17);
                                                    }
#line 205 "term_conversion.m"
                                                    mercury__term_conversion__succeeded = MR_TRUE;
#line 202 "term_conversion.m"
                                                  }
#line 203 "term_conversion.m"
                                              }
#line 202 "term_conversion.m"
                                          }
#line 202 "term_conversion.m"
                                        }
#line 206 "term_conversion.m"
                                        break;
#line 206 "term_conversion.m"
                                      case (MR_Integer) 1:
#line 215 "term_conversion.m"
                                        {
#line 215 "term_conversion.m"
                                          /* case "float" */
#line 215 "term_conversion.m"
                                          {
#line 215 "term_conversion.m"
                                            MR_Word mercury__term_conversion__TypeCtorInfo_141_141;
#line 215 "term_conversion.m"
                                            MR_Float mercury__term_conversion__Float_20;

#line 216 "term_conversion.m"
                                            mercury__term_conversion__succeeded = ((((MR_tag((MR_Word) mercury__term_conversion__V_165_165)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_conversion__V_165_165, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 216 "term_conversion.m"
                                            if (mercury__term_conversion__succeeded)
#line 216 "term_conversion.m"
                                              {
#line 216 "term_conversion.m"
                                                mercury__term_conversion__Float_20 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term_conversion__V_165_165, (MR_Integer) 1)));
#line 4795 "term_conversion.c"
                                                mercury__term_conversion__TypeCtorInfo_141_141 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 217 "term_conversion.m"
                                                {
#line 217 "term_conversion.m"
                                                  mercury__univ__type_to_univ_2_p_1(mercury__term_conversion__TypeCtorInfo_141_141, MR_box_float(mercury__term_conversion__Float_20), &mercury__term_conversion__Univ_17);
                                                }
#line 217 "term_conversion.m"
                                                mercury__term_conversion__succeeded = MR_TRUE;
#line 216 "term_conversion.m"
                                              }
#line 215 "term_conversion.m"
                                          }
#line 215 "term_conversion.m"
                                        }
#line 206 "term_conversion.m"
                                        break;
#line 206 "term_conversion.m"
                                      case (MR_Integer) 2:
#line 211 "term_conversion.m"
                                        {
#line 211 "term_conversion.m"
                                          /* case "int" */
#line 211 "term_conversion.m"
                                          {
#line 211 "term_conversion.m"
                                            MR_Word mercury__term_conversion__TypeCtorInfo_140_140;
#line 211 "term_conversion.m"
                                            MR_Integer mercury__term_conversion__Int_19;

#line 212 "term_conversion.m"
                                            mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__V_165_165)) == (MR_mktag((MR_Integer) 1)));
#line 212 "term_conversion.m"
                                            if (mercury__term_conversion__succeeded)
#line 212 "term_conversion.m"
                                              {
#line 212 "term_conversion.m"
                                                mercury__term_conversion__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_conversion__V_165_165, (MR_Integer) 0)));
#line 4833 "term_conversion.c"
                                                mercury__term_conversion__TypeCtorInfo_140_140 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 213 "term_conversion.m"
                                                {
#line 213 "term_conversion.m"
                                                  mercury__univ__type_to_univ_2_p_1(mercury__term_conversion__TypeCtorInfo_140_140, ((MR_Box) (mercury__term_conversion__Int_19)), &mercury__term_conversion__Univ_17);
                                                }
#line 213 "term_conversion.m"
                                                mercury__term_conversion__succeeded = MR_TRUE;
#line 212 "term_conversion.m"
                                              }
#line 211 "term_conversion.m"
                                          }
#line 211 "term_conversion.m"
                                        }
#line 206 "term_conversion.m"
                                        break;
#line 206 "term_conversion.m"
                                      case (MR_Integer) 3:
#line 207 "term_conversion.m"
                                        {
#line 207 "term_conversion.m"
                                          /* case "string" */
#line 207 "term_conversion.m"
                                          {
#line 207 "term_conversion.m"
                                            MR_Word mercury__term_conversion__TypeCtorInfo_139_139;
#line 207 "term_conversion.m"
                                            MR_String mercury__term_conversion__String_18;

#line 208 "term_conversion.m"
                                            mercury__term_conversion__succeeded = ((((MR_tag((MR_Word) mercury__term_conversion__V_165_165)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_conversion__V_165_165, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 208 "term_conversion.m"
                                            if (mercury__term_conversion__succeeded)
#line 208 "term_conversion.m"
                                              {
#line 208 "term_conversion.m"
                                                mercury__term_conversion__String_18 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_conversion__V_165_165, (MR_Integer) 1)));
#line 4871 "term_conversion.c"
                                                mercury__term_conversion__TypeCtorInfo_139_139 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 209 "term_conversion.m"
                                                {
#line 209 "term_conversion.m"
                                                  mercury__univ__type_to_univ_2_p_1(mercury__term_conversion__TypeCtorInfo_139_139, ((MR_Box) (mercury__term_conversion__String_18)), &mercury__term_conversion__Univ_17);
                                                }
#line 209 "term_conversion.m"
                                                mercury__term_conversion__succeeded = MR_TRUE;
#line 208 "term_conversion.m"
                                              }
#line 207 "term_conversion.m"
                                          }
#line 207 "term_conversion.m"
                                        }
#line 206 "term_conversion.m"
                                        break;
#line 206 "term_conversion.m"
                                    }
#line 206 "term_conversion.m"
                                    /* jump out of search loop */
#line 206 "term_conversion.m"
                                    goto label_0;
#line 206 "term_conversion.m"
                                  }
#line 206 "term_conversion.m"
                                else
#line 206 "term_conversion.m"
                                if ((mercury__term_conversion__result_7 < (MR_Integer) 0))
#line 206 "term_conversion.m"
                                  mercury__term_conversion__hi_5 = (mercury__term_conversion__mid_6 - (MR_Integer) 1);
#line 206 "term_conversion.m"
                                else
#line 206 "term_conversion.m"
                                  mercury__term_conversion__lo_4 = (mercury__term_conversion__mid_6 + (MR_Integer) 1);
#line 206 "term_conversion.m"
                              }
#line 206 "term_conversion.m"
                            while ((mercury__term_conversion__lo_4 <= mercury__term_conversion__hi_5));
#line 206 "term_conversion.m"
                            mercury__term_conversion__succeeded = MR_FALSE;
#line 206 "term_conversion.m"
                          label_0:;
#line 198 "term_conversion.m"
                            if (mercury__term_conversion__succeeded)
#line 198 "term_conversion.m"
                              {
#line 219 "term_conversion.m"
                                {
#line 219 "term_conversion.m"
                                  MR_Word base;
#line 219 "term_conversion.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 219 "term_conversion.m"
                                  *mercury__term_conversion__Result_12 = base;
#line 219 "term_conversion.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__Univ_17));
#line 219 "term_conversion.m"
                                }
#line 219 "term_conversion.m"
                                mercury__term_conversion__succeeded = MR_TRUE;
#line 198 "term_conversion.m"
                              }
#line 198 "term_conversion.m"
                          }
#line 198 "term_conversion.m"
                      }
#line 198 "term_conversion.m"
                  }
#line 198 "term_conversion.m"
                }
#line 220 "term_conversion.m"
                break;
#line 220 "term_conversion.m"
              case (MR_Integer) 3:
#line 278 "term_conversion.m"
                {
#line 278 "term_conversion.m"
                  /* case "univ" */
#line 278 "term_conversion.m"
                  {
#line 278 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeCtorInfo_160_160;
#line 278 "term_conversion.m"
                    MR_Word mercury__term_conversion__ArgTerm_35;
#line 278 "term_conversion.m"
                    MR_Word mercury__term_conversion__ValueTerm_37;
#line 278 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeTerm_38;
#line 278 "term_conversion.m"
                    MR_String mercury__term_conversion__V_47_47;
#line 278 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_49_49;
#line 278 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_50_50;
#line 278 "term_conversion.m"
                    MR_String mercury__term_conversion__V_51_51;
#line 278 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_52_52;
#line 278 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_53_53;
#line 278 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_54_54;
#line 278 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_70_70;
#line 278 "term_conversion.m"
                    MR_Word mercury__term_conversion__Univ_133;
#line 278 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_167_167;
#line 278 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_168_168;
#line 278 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_170_170;
#line 278 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_171_171;
#line 278 "term_conversion.m"
                    MR_String mercury__term_conversion__V_172_172;
#line 285 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_39_39;
#line 288 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_166_166;
#line 287 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_169_169;

#line 279 "term_conversion.m"
                    mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__TypeCtorName_8, (MR_String) "univ") == 0);
#line 278 "term_conversion.m"
                    if (mercury__term_conversion__succeeded)
#line 278 "term_conversion.m"
                      {
#line 280 "term_conversion.m"
                        mercury__term_conversion__succeeded = (mercury__term_conversion__TypeArgs_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "term_conversion.m"
                        if (mercury__term_conversion__succeeded)
#line 278 "term_conversion.m"
                          {
#line 284 "term_conversion.m"
                            mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__V_165_165)) == (MR_mktag((MR_Integer) 0)));
#line 284 "term_conversion.m"
                            if (mercury__term_conversion__succeeded)
#line 284 "term_conversion.m"
                              {
#line 284 "term_conversion.m"
                                mercury__term_conversion__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_conversion__V_165_165, (MR_Integer) 0)));
#line 284 "term_conversion.m"
                                mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__V_47_47, (MR_String) "univ") == 0);
#line 278 "term_conversion.m"
                                if (mercury__term_conversion__succeeded)
#line 278 "term_conversion.m"
                                  {
#line 284 "term_conversion.m"
                                    mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__V_164_164)) == (MR_mktag((MR_Integer) 1)));
#line 284 "term_conversion.m"
                                    if (mercury__term_conversion__succeeded)
#line 284 "term_conversion.m"
                                      {
#line 284 "term_conversion.m"
                                        mercury__term_conversion__ArgTerm_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__V_164_164, (MR_Integer) 0)));
#line 284 "term_conversion.m"
                                        mercury__term_conversion__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__V_164_164, (MR_Integer) 1)));
#line 284 "term_conversion.m"
                                        mercury__term_conversion__succeeded = (mercury__term_conversion__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "term_conversion.m"
                                        if (mercury__term_conversion__succeeded)
#line 278 "term_conversion.m"
                                          {
#line 285 "term_conversion.m"
                                            mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__ArgTerm_35)) == (MR_mktag((MR_Integer) 0)));
#line 285 "term_conversion.m"
                                            if (mercury__term_conversion__succeeded)
#line 285 "term_conversion.m"
                                              {
#line 285 "term_conversion.m"
                                                mercury__term_conversion__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgTerm_35, (MR_Integer) 0)));
#line 285 "term_conversion.m"
                                                mercury__term_conversion__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgTerm_35, (MR_Integer) 1)));
#line 285 "term_conversion.m"
                                                mercury__term_conversion__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgTerm_35, (MR_Integer) 2)));
#line 285 "term_conversion.m"
                                                mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__V_50_50)) == (MR_mktag((MR_Integer) 0)));
#line 285 "term_conversion.m"
                                                if (mercury__term_conversion__succeeded)
#line 285 "term_conversion.m"
                                                  {
#line 285 "term_conversion.m"
                                                    mercury__term_conversion__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_conversion__V_50_50, (MR_Integer) 0)));
#line 285 "term_conversion.m"
                                                    mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__V_51_51, (MR_String) ":") == 0);
#line 278 "term_conversion.m"
                                                    if (mercury__term_conversion__succeeded)
#line 278 "term_conversion.m"
                                                      {
#line 285 "term_conversion.m"
                                                        mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 285 "term_conversion.m"
                                                        if (mercury__term_conversion__succeeded)
#line 285 "term_conversion.m"
                                                          {
#line 285 "term_conversion.m"
                                                            mercury__term_conversion__ValueTerm_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__V_52_52, (MR_Integer) 0)));
#line 285 "term_conversion.m"
                                                            mercury__term_conversion__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__V_52_52, (MR_Integer) 1)));
#line 285 "term_conversion.m"
                                                            mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 285 "term_conversion.m"
                                                            if (mercury__term_conversion__succeeded)
#line 285 "term_conversion.m"
                                                              {
#line 285 "term_conversion.m"
                                                                mercury__term_conversion__TypeTerm_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__V_53_53, (MR_Integer) 0)));
#line 285 "term_conversion.m"
                                                                mercury__term_conversion__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__V_53_53, (MR_Integer) 1)));
#line 285 "term_conversion.m"
                                                                mercury__term_conversion__succeeded = (mercury__term_conversion__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "term_conversion.m"
                                                                if (mercury__term_conversion__succeeded)
#line 278 "term_conversion.m"
                                                                  {
#line 288 "term_conversion.m"
                                                                    mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__ValueTerm_37)) == (MR_mktag((MR_Integer) 0)));
#line 288 "term_conversion.m"
                                                                    if (mercury__term_conversion__succeeded)
#line 288 "term_conversion.m"
                                                                      {
#line 288 "term_conversion.m"
                                                                        mercury__term_conversion__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ValueTerm_37, (MR_Integer) 0)));
#line 288 "term_conversion.m"
                                                                        mercury__term_conversion__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ValueTerm_37, (MR_Integer) 1)));
#line 288 "term_conversion.m"
                                                                        mercury__term_conversion__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ValueTerm_37, (MR_Integer) 2)));
#line 287 "term_conversion.m"
                                                                        mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__TypeTerm_38)) == (MR_mktag((MR_Integer) 0)));
#line 287 "term_conversion.m"
                                                                        if (mercury__term_conversion__succeeded)
#line 287 "term_conversion.m"
                                                                          {
#line 287 "term_conversion.m"
                                                                            mercury__term_conversion__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeTerm_38, (MR_Integer) 0)));
#line 287 "term_conversion.m"
                                                                            mercury__term_conversion__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeTerm_38, (MR_Integer) 1)));
#line 287 "term_conversion.m"
                                                                            mercury__term_conversion__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeTerm_38, (MR_Integer) 2)));
#line 288 "term_conversion.m"
                                                                            mercury__term_conversion__succeeded = (mercury__term_conversion__V_167_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "term_conversion.m"
                                                                            if (mercury__term_conversion__succeeded)
#line 278 "term_conversion.m"
                                                                              {
#line 295 "term_conversion.m"
                                                                                mercury__term_conversion__succeeded = (mercury__term_conversion__V_170_170 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "term_conversion.m"
                                                                                if (mercury__term_conversion__succeeded)
#line 278 "term_conversion.m"
                                                                                  {
#line 295 "term_conversion.m"
                                                                                    mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__V_171_171)) == (MR_mktag((MR_Integer) 0)));
#line 295 "term_conversion.m"
                                                                                    if (mercury__term_conversion__succeeded)
#line 295 "term_conversion.m"
                                                                                      {
#line 295 "term_conversion.m"
                                                                                        mercury__term_conversion__V_172_172 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_conversion__V_171_171, (MR_Integer) 0)));
#line 290 "term_conversion.m"
#line 290 "term_conversion.m"
                                                                                        switch (MR_tag((MR_Word) mercury__term_conversion__V_168_168)) {
#line 290 "term_conversion.m"
                                                                                          default:
#line 290 "term_conversion.m"
                                                                                            mercury__term_conversion__succeeded = MR_FALSE;
#line 290 "term_conversion.m"
                                                                                            break;
#line 290 "term_conversion.m"
                                                                                          case (MR_Integer) 1:
#line 287 "term_conversion.m"
                                                                                            {
#line 287 "term_conversion.m"
                                                                                              MR_Word mercury__term_conversion__TypeCtorInfo_157_157;
#line 287 "term_conversion.m"
                                                                                              MR_Integer mercury__term_conversion__Int_127;

#line 287 "term_conversion.m"
                                                                                              mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__V_172_172, (MR_String) "int") == 0);
#line 287 "term_conversion.m"
                                                                                              if (mercury__term_conversion__succeeded)
#line 287 "term_conversion.m"
                                                                                                {
#line 288 "term_conversion.m"
                                                                                                  mercury__term_conversion__Int_127 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term_conversion__V_168_168, (MR_Integer) 0)));
#line 5159 "term_conversion.c"
                                                                                                  mercury__term_conversion__TypeCtorInfo_157_157 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 289 "term_conversion.m"
                                                                                                  {
#line 289 "term_conversion.m"
                                                                                                    mercury__term_conversion__Univ_133 = mercury__univ__univ_1_f_0(mercury__term_conversion__TypeCtorInfo_157_157, ((MR_Box) (mercury__term_conversion__Int_127)));
                                                                                                  }
#line 289 "term_conversion.m"
                                                                                                  mercury__term_conversion__succeeded = MR_TRUE;
#line 287 "term_conversion.m"
                                                                                                }
#line 287 "term_conversion.m"
                                                                                            }
#line 290 "term_conversion.m"
                                                                                            break;
#line 290 "term_conversion.m"
                                                                                          case (MR_Integer) 3:
#line 290 "term_conversion.m"
#line 290 "term_conversion.m"
                                                                                            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_conversion__V_168_168, (MR_Integer) 0)))) {
#line 290 "term_conversion.m"
                                                                                              default:
#line 290 "term_conversion.m"
                                                                                                mercury__term_conversion__succeeded = MR_FALSE;
#line 290 "term_conversion.m"
                                                                                                break;
#line 290 "term_conversion.m"
                                                                                              case (MR_Integer) 0:
#line 291 "term_conversion.m"
                                                                                                {
#line 291 "term_conversion.m"
                                                                                                  MR_Word mercury__term_conversion__TypeCtorInfo_158_158;
#line 291 "term_conversion.m"
                                                                                                  MR_String mercury__term_conversion__String_128;

#line 291 "term_conversion.m"
                                                                                                  mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__V_172_172, (MR_String) "string") == 0);
#line 291 "term_conversion.m"
                                                                                                  if (mercury__term_conversion__succeeded)
#line 291 "term_conversion.m"
                                                                                                    {
#line 292 "term_conversion.m"
                                                                                                      mercury__term_conversion__String_128 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term_conversion__V_168_168, (MR_Integer) 1)));
#line 5202 "term_conversion.c"
                                                                                                      mercury__term_conversion__TypeCtorInfo_158_158 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 293 "term_conversion.m"
                                                                                                      {
#line 293 "term_conversion.m"
                                                                                                        mercury__term_conversion__Univ_133 = mercury__univ__univ_1_f_0(mercury__term_conversion__TypeCtorInfo_158_158, ((MR_Box) (mercury__term_conversion__String_128)));
                                                                                                      }
#line 293 "term_conversion.m"
                                                                                                      mercury__term_conversion__succeeded = MR_TRUE;
#line 291 "term_conversion.m"
                                                                                                    }
#line 291 "term_conversion.m"
                                                                                                }
#line 290 "term_conversion.m"
                                                                                                break;
#line 290 "term_conversion.m"
                                                                                              case (MR_Integer) 1:
#line 295 "term_conversion.m"
                                                                                                {
#line 295 "term_conversion.m"
                                                                                                  MR_Word mercury__term_conversion__TypeCtorInfo_159_159;
#line 295 "term_conversion.m"
                                                                                                  MR_Float mercury__term_conversion__Float_129;

#line 295 "term_conversion.m"
                                                                                                  mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__V_172_172, (MR_String) "float") == 0);
#line 295 "term_conversion.m"
                                                                                                  if (mercury__term_conversion__succeeded)
#line 295 "term_conversion.m"
                                                                                                    {
#line 296 "term_conversion.m"
                                                                                                      mercury__term_conversion__Float_129 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term_conversion__V_168_168, (MR_Integer) 1)));
#line 5234 "term_conversion.c"
                                                                                                      mercury__term_conversion__TypeCtorInfo_159_159 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 297 "term_conversion.m"
                                                                                                      {
#line 297 "term_conversion.m"
                                                                                                        mercury__term_conversion__Univ_133 = mercury__univ__univ_1_f_0(mercury__term_conversion__TypeCtorInfo_159_159, MR_box_float(mercury__term_conversion__Float_129));
                                                                                                      }
#line 297 "term_conversion.m"
                                                                                                      mercury__term_conversion__succeeded = MR_TRUE;
#line 295 "term_conversion.m"
                                                                                                    }
#line 295 "term_conversion.m"
                                                                                                }
#line 290 "term_conversion.m"
                                                                                                break;
#line 290 "term_conversion.m"
                                                                                            }
#line 290 "term_conversion.m"
                                                                                            break;
#line 290 "term_conversion.m"
                                                                                        }
#line 278 "term_conversion.m"
                                                                                        if (mercury__term_conversion__succeeded)
#line 278 "term_conversion.m"
                                                                                          {
#line 5259 "term_conversion.c"
                                                                                            mercury__term_conversion__TypeCtorInfo_160_160 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 301 "term_conversion.m"
                                                                                            {
#line 301 "term_conversion.m"
                                                                                              mercury__term_conversion__V_70_70 = mercury__univ__univ_1_f_0(mercury__term_conversion__TypeCtorInfo_160_160, ((MR_Box) (mercury__term_conversion__Univ_133)));
                                                                                            }
#line 301 "term_conversion.m"
                                                                                            {
#line 301 "term_conversion.m"
                                                                                              MR_Word base;
#line 301 "term_conversion.m"
                                                                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 301 "term_conversion.m"
                                                                                              *mercury__term_conversion__Result_12 = base;
#line 301 "term_conversion.m"
                                                                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__V_70_70));
#line 301 "term_conversion.m"
                                                                                            }
#line 301 "term_conversion.m"
                                                                                            mercury__term_conversion__succeeded = MR_TRUE;
#line 278 "term_conversion.m"
                                                                                          }
#line 295 "term_conversion.m"
                                                                                      }
#line 278 "term_conversion.m"
                                                                                  }
#line 278 "term_conversion.m"
                                                                              }
#line 287 "term_conversion.m"
                                                                          }
#line 288 "term_conversion.m"
                                                                      }
#line 278 "term_conversion.m"
                                                                  }
#line 285 "term_conversion.m"
                                                              }
#line 285 "term_conversion.m"
                                                          }
#line 278 "term_conversion.m"
                                                      }
#line 285 "term_conversion.m"
                                                  }
#line 285 "term_conversion.m"
                                              }
#line 278 "term_conversion.m"
                                          }
#line 284 "term_conversion.m"
                                      }
#line 278 "term_conversion.m"
                                  }
#line 284 "term_conversion.m"
                              }
#line 278 "term_conversion.m"
                          }
#line 278 "term_conversion.m"
                      }
#line 278 "term_conversion.m"
                  }
#line 278 "term_conversion.m"
                }
#line 220 "term_conversion.m"
                break;
#line 220 "term_conversion.m"
              case (MR_Integer) 4:
#line 256 "term_conversion.m"
                {
#line 256 "term_conversion.m"
                  /* case "version_array" */
#line 256 "term_conversion.m"
                  {
#line 256 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeInfo_150_150;
#line 256 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeCtorInfo_151_151;
#line 256 "term_conversion.m"
                    MR_Word mercury__term_conversion__TypeInfo_152_152;
#line 256 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_71_71;
#line 256 "term_conversion.m"
                    MR_String mercury__term_conversion__V_73_73;
#line 256 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_75_75;
#line 256 "term_conversion.m"
                    MR_Integer mercury__term_conversion__V_80_80;
#line 256 "term_conversion.m"
                    MR_Word mercury__term_conversion__ElemType_114;
#line 256 "term_conversion.m"
                    MR_Word mercury__term_conversion__ArgList_115;
#line 256 "term_conversion.m"
                    MR_Word mercury__term_conversion__ListType_118;
#line 256 "term_conversion.m"
                    MR_Word mercury__term_conversion__ArgContext_119;
#line 256 "term_conversion.m"
                    MR_Word mercury__term_conversion__NewContext_120;
#line 256 "term_conversion.m"
                    MR_Word mercury__term_conversion__ArgResult_121;
#line 261 "term_conversion.m"
                    MR_Box mercury__term_conversion__Elem_117;
#line 262 "term_conversion.m"
                    MR_Word mercury__term_conversion__V_76_76;

#line 257 "term_conversion.m"
                    mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__TypeCtorName_8, (MR_String) "version_array") == 0);
#line 256 "term_conversion.m"
                    if (mercury__term_conversion__succeeded)
#line 256 "term_conversion.m"
                      {
#line 258 "term_conversion.m"
                        mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__TypeArgs_9)) == (MR_mktag((MR_Integer) 1)));
#line 258 "term_conversion.m"
                        if (mercury__term_conversion__succeeded)
#line 258 "term_conversion.m"
                          {
#line 258 "term_conversion.m"
                            mercury__term_conversion__ElemType_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__TypeArgs_9, (MR_Integer) 0)));
#line 258 "term_conversion.m"
                            mercury__term_conversion__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__TypeArgs_9, (MR_Integer) 1)));
#line 258 "term_conversion.m"
                            mercury__term_conversion__succeeded = (mercury__term_conversion__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 256 "term_conversion.m"
                            if (mercury__term_conversion__succeeded)
#line 256 "term_conversion.m"
                              {
#line 260 "term_conversion.m"
                                mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__V_165_165)) == (MR_mktag((MR_Integer) 0)));
#line 260 "term_conversion.m"
                                if (mercury__term_conversion__succeeded)
#line 260 "term_conversion.m"
                                  {
#line 260 "term_conversion.m"
                                    mercury__term_conversion__V_73_73 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_conversion__V_165_165, (MR_Integer) 0)));
#line 260 "term_conversion.m"
                                    mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__V_73_73, (MR_String) "version_array") == 0);
#line 256 "term_conversion.m"
                                    if (mercury__term_conversion__succeeded)
#line 256 "term_conversion.m"
                                      {
#line 260 "term_conversion.m"
                                        mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__V_164_164)) == (MR_mktag((MR_Integer) 1)));
#line 260 "term_conversion.m"
                                        if (mercury__term_conversion__succeeded)
#line 260 "term_conversion.m"
                                          {
#line 260 "term_conversion.m"
                                            mercury__term_conversion__ArgList_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__V_164_164, (MR_Integer) 0)));
#line 260 "term_conversion.m"
                                            mercury__term_conversion__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__V_164_164, (MR_Integer) 1)));
#line 260 "term_conversion.m"
                                            mercury__term_conversion__succeeded = (mercury__term_conversion__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 256 "term_conversion.m"
                                            if (mercury__term_conversion__succeeded)
#line 256 "term_conversion.m"
                                              {
#line 261 "term_conversion.m"
                                                {
#line 261 "term_conversion.m"
                                                  mercury__type_desc__has_type_2_p_0(&mercury__term_conversion__TypeInfo_150_150, mercury__term_conversion__ElemType_114);
                                                }
#line 5418 "term_conversion.c"
                                                mercury__term_conversion__TypeCtorInfo_151_151 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 5420 "term_conversion.c"
                                                {
#line 5422 "term_conversion.c"
                                                  mercury__term_conversion__TypeInfo_152_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5424 "term_conversion.c"
                                                  MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_152_152, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_151_151));
#line 5426 "term_conversion.c"
                                                  MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_152_152, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_150_150));
#line 5428 "term_conversion.c"
                                                }
#line 262 "term_conversion.m"
                                                {
#line 262 "term_conversion.m"
                                                  mercury__term_conversion__ListType_118 = mercury__type_desc__type_of_1_f_0(mercury__term_conversion__TypeInfo_152_152);
                                                }
#line 263 "term_conversion.m"
                                                mercury__term_conversion__V_80_80 = (MR_Integer) 1;
#line 263 "term_conversion.m"
                                                {
#line 263 "term_conversion.m"
                                                  mercury__term_conversion__ArgContext_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 263 "term_conversion.m"
                                                  MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgContext_119, 0) = ((MR_Box) (mercury__term_conversion__V_165_165));
#line 263 "term_conversion.m"
                                                  MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgContext_119, 1) = ((MR_Box) (mercury__term_conversion__V_80_80));
#line 263 "term_conversion.m"
                                                  MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgContext_119, 2) = ((MR_Box) (mercury__term_conversion__V_163_163));
#line 263 "term_conversion.m"
                                                }
#line 264 "term_conversion.m"
                                                {
#line 264 "term_conversion.m"
                                                  mercury__term_conversion__NewContext_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "term_conversion.m"
                                                  MR_hl_field(MR_mktag(1), mercury__term_conversion__NewContext_120, 0) = ((MR_Box) (mercury__term_conversion__ArgContext_119));
#line 264 "term_conversion.m"
                                                  MR_hl_field(MR_mktag(1), mercury__term_conversion__NewContext_120, 1) = ((MR_Box) (mercury__term_conversion__PrevContext_11));
#line 264 "term_conversion.m"
                                                }
#line 265 "term_conversion.m"
                                                {
#line 265 "term_conversion.m"
                                                  mercury__term_conversion__try_term_to_univ_2_4_p_0(mercury__term_conversion__TypeInfo_for_T_137, mercury__term_conversion__ArgList_115, mercury__term_conversion__ListType_118, mercury__term_conversion__NewContext_120, &mercury__term_conversion__ArgResult_121);
                                                }
#line 273 "term_conversion.m"
                                                if (((MR_tag((MR_Word) mercury__term_conversion__ArgResult_121)) == (MR_mktag((MR_Integer) 1))))
#line 275 "term_conversion.m"
                                                  *mercury__term_conversion__Result_12 = mercury__term_conversion__ArgResult_121;
#line 273 "term_conversion.m"
                                                else
#line 267 "term_conversion.m"
                                                  {
#line 267 "term_conversion.m"
                                                    MR_Word mercury__term_conversion__TypeInfo_153_153;
#line 267 "term_conversion.m"
                                                    MR_Word mercury__term_conversion__TypeInfo_154_154;
#line 267 "term_conversion.m"
                                                    MR_Word mercury__term_conversion__TypeCtorInfo_155_155;
#line 267 "term_conversion.m"
                                                    MR_Word mercury__term_conversion__TypeInfo_156_156;
#line 267 "term_conversion.m"
                                                    MR_Word mercury__term_conversion__V_83_83;
#line 267 "term_conversion.m"
                                                    MR_Word mercury__term_conversion__ListUniv_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgResult_121, (MR_Integer) 0)));
#line 267 "term_conversion.m"
                                                    MR_Word mercury__term_conversion__List_106;
#line 267 "term_conversion.m"
                                                    MR_Box mercury__term_conversion__Array_107;
#line 268 "term_conversion.m"
                                                    MR_Box mercury__term_conversion__Elem2_105;
#line 270 "term_conversion.m"
                                                    MR_Box mercury__term_conversion__conv0_List_106;

#line 268 "term_conversion.m"
                                                    {
#line 268 "term_conversion.m"
                                                      mercury__type_desc__has_type_2_p_0(&mercury__term_conversion__TypeInfo_153_153, mercury__term_conversion__ElemType_114);
                                                    }
#line 5498 "term_conversion.c"
                                                    {
#line 5500 "term_conversion.c"
                                                      mercury__term_conversion__TypeInfo_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5502 "term_conversion.c"
                                                      MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_154_154, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_151_151));
#line 5504 "term_conversion.c"
                                                      MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_154_154, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_153_153));
#line 5506 "term_conversion.c"
                                                    }
#line 270 "term_conversion.m"
                                                    {
#line 270 "term_conversion.m"
                                                      mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeInfo_154_154, mercury__term_conversion__ListUniv_104, &mercury__term_conversion__conv0_List_106);
                                                    }
#line 270 "term_conversion.m"
                                                    mercury__term_conversion__List_106 = ((MR_Word) mercury__term_conversion__conv0_List_106);
#line 271 "term_conversion.m"
                                                    {
#line 271 "term_conversion.m"
                                                      mercury__term_conversion__Array_107 = mercury__version_array__version_array_1_f_0(mercury__term_conversion__TypeInfo_153_153, mercury__term_conversion__List_106);
                                                    }
#line 5520 "term_conversion.c"
                                                    mercury__term_conversion__TypeCtorInfo_155_155 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 5522 "term_conversion.c"
                                                    {
#line 5524 "term_conversion.c"
                                                      mercury__term_conversion__TypeInfo_156_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5526 "term_conversion.c"
                                                      MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_156_156, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_155_155));
#line 5528 "term_conversion.c"
                                                      MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_156_156, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_153_153));
#line 5530 "term_conversion.c"
                                                    }
#line 272 "term_conversion.m"
                                                    {
#line 272 "term_conversion.m"
                                                      mercury__term_conversion__V_83_83 = mercury__univ__univ_1_f_0(mercury__term_conversion__TypeInfo_156_156, ((MR_Box) (mercury__term_conversion__Array_107)));
                                                    }
#line 272 "term_conversion.m"
                                                    {
#line 272 "term_conversion.m"
                                                      MR_Word base;
#line 272 "term_conversion.m"
                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 272 "term_conversion.m"
                                                      *mercury__term_conversion__Result_12 = base;
#line 272 "term_conversion.m"
                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__V_83_83));
#line 272 "term_conversion.m"
                                                    }
#line 267 "term_conversion.m"
                                                  }
#line 273 "term_conversion.m"
                                                mercury__term_conversion__succeeded = MR_TRUE;
#line 256 "term_conversion.m"
                                              }
#line 260 "term_conversion.m"
                                          }
#line 256 "term_conversion.m"
                                      }
#line 260 "term_conversion.m"
                                  }
#line 256 "term_conversion.m"
                              }
#line 258 "term_conversion.m"
                          }
#line 256 "term_conversion.m"
                      }
#line 256 "term_conversion.m"
                  }
#line 256 "term_conversion.m"
                }
#line 220 "term_conversion.m"
                break;
#line 220 "term_conversion.m"
            }
#line 220 "term_conversion.m"
            /* jump out of search loop */
#line 220 "term_conversion.m"
            goto label_1;
#line 220 "term_conversion.m"
          }
#line 220 "term_conversion.m"
        else
#line 220 "term_conversion.m"
        if ((mercury__term_conversion__result_3 < (MR_Integer) 0))
#line 220 "term_conversion.m"
          mercury__term_conversion__hi_1 = (mercury__term_conversion__mid_2 - (MR_Integer) 1);
#line 220 "term_conversion.m"
        else
#line 220 "term_conversion.m"
          mercury__term_conversion__lo_0 = (mercury__term_conversion__mid_2 + (MR_Integer) 1);
#line 220 "term_conversion.m"
      }
#line 220 "term_conversion.m"
    while ((mercury__term_conversion__lo_0 <= mercury__term_conversion__hi_1));
#line 220 "term_conversion.m"
    mercury__term_conversion__succeeded = MR_FALSE;
#line 220 "term_conversion.m"
  label_1:;
#line 220 "term_conversion.m"
    return mercury__term_conversion__succeeded;
#line 220 "term_conversion.m"
  }
#line 191 "term_conversion.m"
}

#line 145 "term_conversion.m"
static void MR_CALL 
mercury__term_conversion__try_term_to_univ_2_4_p_0(
#line 145 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_34,
#line 145 "term_conversion.m"
  MR_Word mercury__term_conversion__Term_5,
#line 145 "term_conversion.m"
  MR_Word mercury__term_conversion__Type_6,
#line 145 "term_conversion.m"
  MR_Word mercury__term_conversion__Context_7,
#line 145 "term_conversion.m"
  MR_Word * mercury__term_conversion__Result_8)
#line 145 "term_conversion.m"
{
#line 153 "term_conversion.m"
  {
#line 153 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;

#line 153 "term_conversion.m"
    if (((MR_tag((MR_Word) mercury__term_conversion__Term_5)) == (MR_mktag((MR_Integer) 0))))
#line 154 "term_conversion.m"
      {
#line 154 "term_conversion.m"
        MR_Word mercury__term_conversion__Functor_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Term_5, (MR_Integer) 0)));
#line 154 "term_conversion.m"
        MR_Word mercury__term_conversion__ArgTerms_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Term_5, (MR_Integer) 1)));
#line 154 "term_conversion.m"
        MR_Word mercury__term_conversion__TermContext_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Term_5, (MR_Integer) 2)));
#line 163 "term_conversion.m"
        MR_Word mercury__term_conversion__SpecialCaseResult_18;
#line 156 "term_conversion.m"
        MR_Word mercury__term_conversion__TypeCtor_14;
#line 156 "term_conversion.m"
        MR_Word mercury__term_conversion__TypeArgs_15;
#line 156 "term_conversion.m"
        MR_String mercury__term_conversion__ModuleName_16;
#line 156 "term_conversion.m"
        MR_String mercury__term_conversion__TypeCtorName_17;
#line 144 "type_desc.opt"
        MR_String mercury__term_conversion___Name_5_40;
#line 144 "type_desc.opt"
        MR_Integer mercury__term_conversion___Arity_6_41;
#line 144 "type_desc.opt"
        MR_String mercury__term_conversion___ModuleName_5_44;
#line 144 "type_desc.opt"
        MR_Integer mercury__term_conversion___Arity_6_45;

#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_conversion__try_term_to_univ_2_4_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__term_conversion__Type_6 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 5678 "term_conversion.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__TypeCtor_14  = TypeCtorDesc;
	 mercury__term_conversion__TypeArgs_15  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 144 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_conversion__try_term_to_univ_2_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_conversion__TypeCtor_14 ;
		{
#line 144 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}
#line 5727 "term_conversion.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__ModuleName_16  = TypeCtorModuleName;
	 mercury__term_conversion___Name_5_40  = TypeCtorName;
	 mercury__term_conversion___Arity_6_41  = TypeCtorArity;
#line 144 "type_desc.opt"
}
#line 144 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_conversion__try_term_to_univ_2_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_conversion__TypeCtor_14 ;
		{
#line 144 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}
#line 5777 "term_conversion.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion___ModuleName_5_44  = TypeCtorModuleName;
	 mercury__term_conversion__TypeCtorName_17  = TypeCtorName;
	 mercury__term_conversion___Arity_6_45  = TypeCtorArity;
#line 144 "type_desc.opt"
}
#line 159 "term_conversion.m"
        {
#line 159 "term_conversion.m"
          mercury__term_conversion__succeeded = mercury__term_conversion__term_to_univ_special_case_6_p_0(mercury__term_conversion__TypeInfo_for_T_34, mercury__term_conversion__ModuleName_16, mercury__term_conversion__TypeCtorName_17, mercury__term_conversion__TypeArgs_15, mercury__term_conversion__Term_5, mercury__term_conversion__Context_7, &mercury__term_conversion__SpecialCaseResult_18);
        }
#line 163 "term_conversion.m"
        if (mercury__term_conversion__succeeded)
#line 162 "term_conversion.m"
          *mercury__term_conversion__Result_8 = mercury__term_conversion__SpecialCaseResult_18;
#line 163 "term_conversion.m"
        else
#line 183 "term_conversion.m"
          {
#line 183 "term_conversion.m"
            MR_Integer mercury__term_conversion__FunctorNumber_21;
#line 183 "term_conversion.m"
            MR_Word mercury__term_conversion__ArgsResult_23;
#line 164 "term_conversion.m"
            MR_Word mercury__term_conversion__TypeCtorInfo_35_35;
#line 164 "term_conversion.m"
            MR_Word mercury__term_conversion__TypeInfo_36_36;
#line 164 "term_conversion.m"
            MR_String mercury__term_conversion__FunctorName_19;
#line 164 "term_conversion.m"
            MR_Integer mercury__term_conversion__Arity_20;
#line 164 "term_conversion.m"
            MR_Word mercury__term_conversion__ArgTypes_22;
#line 164 "term_conversion.m"
            MR_Integer mercury__term_conversion__V_28_28;
#line 164 "term_conversion.m"
            MR_Integer mercury__term_conversion__V_5_48;
#line 164 "term_conversion.m"
            MR_Integer mercury__term_conversion__N_11_54;

#line 164 "term_conversion.m"
            mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__Functor_11)) == (MR_mktag((MR_Integer) 0)));
#line 164 "term_conversion.m"
            if (mercury__term_conversion__succeeded)
#line 164 "term_conversion.m"
              {
#line 164 "term_conversion.m"
                mercury__term_conversion__FunctorName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Functor_11, (MR_Integer) 0)));
#line 5828 "term_conversion.c"
                mercury__term_conversion__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 77 "list.opt"
                mercury__term_conversion__V_5_48 = (MR_Integer) 0;
#line 5832 "term_conversion.c"
                {
#line 5834 "term_conversion.c"
                  mercury__term_conversion__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5836 "term_conversion.c"
                  MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_36_36, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_35_35));
#line 5838 "term_conversion.c"
                  MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_36_36, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_for_T_34));
#line 5840 "term_conversion.c"
                }
#line 78 "list.opt"
                {
#line 78 "list.opt"
                  mercury__list__length_2_3_p_0(mercury__term_conversion__TypeInfo_36_36, (MR_Word) mercury__term_conversion__ArgTerms_12, mercury__term_conversion__V_5_48, &mercury__term_conversion__Arity_20);
                }
#line 67 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_conversion__try_term_to_univ_2_4_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_conversion__Type_6 ;
		{
#line 67 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 5864 "term_conversion.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_conversion__N_11_54  = Functors;
#line 67 "construct.opt"
	}
mercury__term_conversion__succeeded  = SUCCESS_INDICATOR;
}
#line 164 "term_conversion.m"
                if (mercury__term_conversion__succeeded)
#line 164 "term_conversion.m"
                  {
#line 208 "construct.opt"
                    {
#line 208 "construct.opt"
                      mercury__term_conversion__succeeded = mercury__construct__find_functor_2_6_p_0(mercury__term_conversion__Type_6, mercury__term_conversion__FunctorName_19, mercury__term_conversion__Arity_20, mercury__term_conversion__N_11_54, &mercury__term_conversion__FunctorNumber_21, &mercury__term_conversion__ArgTypes_22);
                    }
#line 164 "term_conversion.m"
                    if (mercury__term_conversion__succeeded)
#line 164 "term_conversion.m"
                      {
#line 167 "term_conversion.m"
                        mercury__term_conversion__V_28_28 = (MR_Integer) 1;
#line 167 "term_conversion.m"
                        {
#line 167 "term_conversion.m"
                          mercury__term_conversion__succeeded = mercury__term_conversion__term_list_to_univ_list_7_p_0(mercury__term_conversion__TypeInfo_for_T_34, mercury__term_conversion__ArgTerms_12, mercury__term_conversion__ArgTypes_22, mercury__term_conversion__Functor_11, mercury__term_conversion__V_28_28, mercury__term_conversion__Context_7, mercury__term_conversion__TermContext_13, &mercury__term_conversion__ArgsResult_23);
                        }
#line 164 "term_conversion.m"
                      }
#line 164 "term_conversion.m"
                  }
#line 164 "term_conversion.m"
              }
#line 183 "term_conversion.m"
            if (mercury__term_conversion__succeeded)
#line 179 "term_conversion.m"
              if (((MR_tag((MR_Word) mercury__term_conversion__ArgsResult_23)) == (MR_mktag((MR_Integer) 1))))
#line 181 "term_conversion.m"
                *mercury__term_conversion__Result_8 = (MR_Word) mercury__term_conversion__ArgsResult_23;
#line 179 "term_conversion.m"
              else
#line 171 "term_conversion.m"
                {
#line 171 "term_conversion.m"
                  MR_Word mercury__term_conversion__ArgValues_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgsResult_23, (MR_Integer) 0)));
#line 176 "term_conversion.m"
                  MR_Word mercury__term_conversion__Value_25;

#line 173 "term_conversion.m"
                  {
#line 173 "term_conversion.m"
                    mercury__term_conversion__succeeded = mercury__construct__construct_3_f_0(mercury__term_conversion__Type_6, mercury__term_conversion__FunctorNumber_21, mercury__term_conversion__ArgValues_24, &mercury__term_conversion__Value_25);
                  }
#line 176 "term_conversion.m"
                  if (mercury__term_conversion__succeeded)
#line 175 "term_conversion.m"
                    {
#line 175 "term_conversion.m"
                      MR_Word base;
#line 175 "term_conversion.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 175 "term_conversion.m"
                      *mercury__term_conversion__Result_8 = base;
#line 175 "term_conversion.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__Value_25));
#line 175 "term_conversion.m"
                    }
#line 176 "term_conversion.m"
                  else
#line 177 "term_conversion.m"
                    {
#line 177 "term_conversion.m"
                      {
#line 177 "term_conversion.m"
                        mercury__require__unexpected_3_p_0((MR_String) "term_conversion", (MR_String) "predicate \140term_conversion.try_term_to_univ_2\'/4", (MR_String) "construct/3 failed");
#line 177 "term_conversion.m"
                        return;
                      }
#line 177 "term_conversion.m"
                    }
#line 171 "term_conversion.m"
                }
#line 183 "term_conversion.m"
            else
#line 186 "term_conversion.m"
              {
#line 186 "term_conversion.m"
                MR_Word mercury__term_conversion__TypeCtorInfo_37_37 = (MR_Word) &mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_arg_context_0;
#line 186 "term_conversion.m"
                MR_Word mercury__term_conversion__RevContext_27;
#line 186 "term_conversion.m"
                MR_Word mercury__term_conversion__V_32_32;

#line 186 "term_conversion.m"
                {
#line 186 "term_conversion.m"
                  mercury__list__reverse_2_p_0(mercury__term_conversion__TypeCtorInfo_37_37, mercury__term_conversion__Context_7, &mercury__term_conversion__RevContext_27);
                }
#line 187 "term_conversion.m"
                {
#line 187 "term_conversion.m"
                  mercury__term_conversion__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 187 "term_conversion.m"
                  MR_hl_field(MR_mktag(0), mercury__term_conversion__V_32_32, 0) = ((MR_Box) (mercury__term_conversion__Term_5));
#line 187 "term_conversion.m"
                  MR_hl_field(MR_mktag(0), mercury__term_conversion__V_32_32, 1) = ((MR_Box) (mercury__term_conversion__Type_6));
#line 187 "term_conversion.m"
                  MR_hl_field(MR_mktag(0), mercury__term_conversion__V_32_32, 2) = ((MR_Box) (mercury__term_conversion__TermContext_13));
#line 187 "term_conversion.m"
                  MR_hl_field(MR_mktag(0), mercury__term_conversion__V_32_32, 3) = ((MR_Box) (mercury__term_conversion__RevContext_27));
#line 187 "term_conversion.m"
                }
#line 187 "term_conversion.m"
                {
#line 187 "term_conversion.m"
                  MR_Word base;
#line 187 "term_conversion.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 187 "term_conversion.m"
                  *mercury__term_conversion__Result_8 = base;
#line 187 "term_conversion.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_conversion__V_32_32));
#line 187 "term_conversion.m"
                }
#line 186 "term_conversion.m"
              }
#line 183 "term_conversion.m"
          }
#line 154 "term_conversion.m"
      }
#line 153 "term_conversion.m"
    else
#line 151 "term_conversion.m"
      {
#line 151 "term_conversion.m"
        MR_Word mercury__term_conversion__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__Term_5, (MR_Integer) 0)));
#line 151 "term_conversion.m"
        MR_Word mercury__term_conversion__V_33_33;
#line 151 "term_conversion.m"
        MR_Word mercury__term_conversion__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__Term_5, (MR_Integer) 1)));

#line 152 "term_conversion.m"
        {
#line 152 "term_conversion.m"
          mercury__term_conversion__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "term_conversion.m"
          MR_hl_field(MR_mktag(1), mercury__term_conversion__V_33_33, 0) = ((MR_Box) (mercury__term_conversion__Var_9));
#line 152 "term_conversion.m"
          MR_hl_field(MR_mktag(1), mercury__term_conversion__V_33_33, 1) = ((MR_Box) (mercury__term_conversion__Context_7));
#line 152 "term_conversion.m"
        }
#line 152 "term_conversion.m"
        {
#line 152 "term_conversion.m"
          MR_Word base;
#line 152 "term_conversion.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 152 "term_conversion.m"
          *mercury__term_conversion__Result_8 = base;
#line 152 "term_conversion.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_conversion__V_33_33));
#line 152 "term_conversion.m"
        }
#line 151 "term_conversion.m"
      }
#line 153 "term_conversion.m"
  }
#line 145 "term_conversion.m"
}

#line 100 "term_conversion.m"
void MR_CALL 
mercury__term_conversion__univ_to_term_2_p_0(
#line 100 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_28_28,
#line 100 "term_conversion.m"
  MR_Word mercury__term_conversion__Univ_3,
#line 100 "term_conversion.m"
  MR_Word * mercury__term_conversion__Term_4)
#line 100 "term_conversion.m"
{
#line 357 "term_conversion.m"
  {
#line 357 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 357 "term_conversion.m"
    MR_Word mercury__term_conversion__TypeInfo_6_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Univ_3, (MR_Integer) 0)));
#line 357 "term_conversion.m"
    MR_Word mercury__term_conversion__Context_5 = (MR_Word) &mercury__term_conversion_scalar_common_1[1];
#line 357 "term_conversion.m"
    MR_Word mercury__term_conversion__Type_6;
#line 12 "univ.opt"
    MR_Box mercury__term_conversion__V_4_34 = (MR_hl_field(MR_mktag(0), mercury__term_conversion__Univ_3, (MR_Integer) 1));
#line 58 "type_desc.opt"
    MR_Box mercury__term_conversion__V_36_36;
#line 67 "construct.opt"
    MR_Integer mercury__term_conversion__V_7_7;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_conversion__TypeInfo_6_35 ;
		{
#line 58 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 6091 "term_conversion.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__Type_6  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 67 "construct.opt"
{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_conversion__Type_6 ;
		{
#line 67 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 6115 "term_conversion.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_conversion__V_7_7  = Functors;
#line 67 "construct.opt"
	}
mercury__term_conversion__succeeded  = SUCCESS_INDICATOR;
}
#line 365 "term_conversion.m"
    if (mercury__term_conversion__succeeded)
#line 362 "term_conversion.m"
      {
#line 362 "term_conversion.m"
        MR_Word mercury__term_conversion__TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Univ_3, (MR_Integer) 0)));
#line 362 "term_conversion.m"
        MR_String mercury__term_conversion__FunctorString_8;
#line 362 "term_conversion.m"
        MR_Word mercury__term_conversion__FunctorArgs_10;
#line 362 "term_conversion.m"
        MR_Word mercury__term_conversion__TermArgs_11;
#line 362 "term_conversion.m"
        MR_Box mercury__term_conversion__V_18_18 = (MR_hl_field(MR_mktag(0), mercury__term_conversion__Univ_3, (MR_Integer) 1));
#line 362 "term_conversion.m"
        MR_Word mercury__term_conversion__V_20_20;
#line 361 "term_conversion.m"
        MR_Integer mercury__term_conversion___FunctorArity_9;

#line 361 "term_conversion.m"
        {
#line 361 "term_conversion.m"
          mercury__deconstruct__deconstruct_5_p_1(mercury__term_conversion__TypeInfo_29_29, mercury__term_conversion__V_18_18, (MR_Integer) 1, &mercury__term_conversion__FunctorString_8, &mercury__term_conversion___FunctorArity_9, &mercury__term_conversion__FunctorArgs_10);
        }
#line 363 "term_conversion.m"
        {
#line 363 "term_conversion.m"
          mercury__term_conversion__univ_list_to_term_list_2_p_0(mercury__term_conversion__TypeInfo_28_28, mercury__term_conversion__FunctorArgs_10, &mercury__term_conversion__TermArgs_11);
        }
#line 364 "term_conversion.m"
        {
#line 364 "term_conversion.m"
          mercury__term_conversion__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 364 "term_conversion.m"
          MR_hl_field(MR_mktag(0), mercury__term_conversion__V_20_20, 0) = ((MR_Box) (mercury__term_conversion__FunctorString_8));
#line 364 "term_conversion.m"
        }
#line 364 "term_conversion.m"
        {
#line 364 "term_conversion.m"
          MR_Word base;
#line 364 "term_conversion.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 364 "term_conversion.m"
          *mercury__term_conversion__Term_4 = base;
#line 364 "term_conversion.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__V_20_20));
#line 364 "term_conversion.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term_conversion__TermArgs_11));
#line 364 "term_conversion.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term_conversion__Context_5));
#line 364 "term_conversion.m"
        }
#line 362 "term_conversion.m"
      }
#line 365 "term_conversion.m"
    else
#line 374 "term_conversion.m"
      {
#line 374 "term_conversion.m"
        MR_Word mercury__term_conversion__SpecialCaseTerm_16;
#line 367 "term_conversion.m"
        MR_Word mercury__term_conversion__TypeCtor_12;
#line 367 "term_conversion.m"
        MR_Word mercury__term_conversion__TypeArgs_13;
#line 367 "term_conversion.m"
        MR_String mercury__term_conversion__ModuleName_14;
#line 367 "term_conversion.m"
        MR_String mercury__term_conversion__TypeCtorName_15;
#line 144 "type_desc.opt"
        MR_String mercury__term_conversion___Name_5_41;
#line 144 "type_desc.opt"
        MR_Integer mercury__term_conversion___Arity_6_42;
#line 144 "type_desc.opt"
        MR_String mercury__term_conversion___ModuleName_5_45;
#line 144 "type_desc.opt"
        MR_Integer mercury__term_conversion___Arity_6_46;

#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__term_conversion__Type_6 ;
		{
#line 78 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 6226 "term_conversion.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__TypeCtor_12  = TypeCtorDesc;
	 mercury__term_conversion__TypeArgs_13  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 144 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_conversion__TypeCtor_12 ;
		{
#line 144 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}
#line 6275 "term_conversion.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__ModuleName_14  = TypeCtorModuleName;
	 mercury__term_conversion___Name_5_41  = TypeCtorName;
	 mercury__term_conversion___Arity_6_42  = TypeCtorArity;
#line 144 "type_desc.opt"
}
#line 144 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_conversion__TypeCtor_12 ;
		{
#line 144 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}
#line 6325 "term_conversion.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion___ModuleName_5_45  = TypeCtorModuleName;
	 mercury__term_conversion__TypeCtorName_15  = TypeCtorName;
	 mercury__term_conversion___Arity_6_46  = TypeCtorArity;
#line 144 "type_desc.opt"
}
#line 370 "term_conversion.m"
        {
#line 370 "term_conversion.m"
          mercury__term_conversion__succeeded = mercury__term_conversion__univ_to_term_special_case_6_p_0(mercury__term_conversion__TypeInfo_28_28, mercury__term_conversion__ModuleName_14, mercury__term_conversion__TypeCtorName_15, mercury__term_conversion__TypeArgs_13, mercury__term_conversion__Univ_3, mercury__term_conversion__Context_5, &mercury__term_conversion__SpecialCaseTerm_16);
        }
#line 374 "term_conversion.m"
        if (mercury__term_conversion__succeeded)
#line 373 "term_conversion.m"
          *mercury__term_conversion__Term_4 = mercury__term_conversion__SpecialCaseTerm_16;
#line 374 "term_conversion.m"
        else
#line 375 "term_conversion.m"
          {
#line 375 "term_conversion.m"
            MR_Word mercury__term_conversion__TypeInfo_6_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Univ_3, (MR_Integer) 0)));
#line 375 "term_conversion.m"
            MR_String mercury__term_conversion__Message_17;
#line 375 "term_conversion.m"
            MR_String mercury__term_conversion__V_22_22;
#line 375 "term_conversion.m"
            MR_String mercury__term_conversion__V_23_23;
#line 375 "term_conversion.m"
            MR_Word mercury__term_conversion__V_24_24;
#line 12 "univ.opt"
            MR_Box mercury__term_conversion__V_4_49 = (MR_hl_field(MR_mktag(0), mercury__term_conversion__Univ_3, (MR_Integer) 1));
#line 58 "type_desc.opt"
            MR_Box mercury__term_conversion__V_51_51;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_conversion__TypeInfo_6_50 ;
		{
#line 58 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 6388 "term_conversion.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__V_24_24  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 375 "term_conversion.m"
            {
#line 375 "term_conversion.m"
              mercury__term_conversion__V_23_23 = mercury__type_desc__type_name_1_f_0(mercury__term_conversion__V_24_24);
            }
#line 415 "string.opt"
            {
#line 415 "string.opt"
              mercury__string__append_3_p_2(mercury__term_conversion__V_23_23, (MR_String) "\'", &mercury__term_conversion__V_22_22);
            }
#line 415 "string.opt"
            {
#line 415 "string.opt"
              mercury__string__append_3_p_2((MR_String) "unknown type \140", mercury__term_conversion__V_22_22, &mercury__term_conversion__Message_17);
            }
#line 376 "term_conversion.m"
            {
#line 376 "term_conversion.m"
              mercury__require__unexpected_3_p_0((MR_String) "term_conversion", (MR_String) "predicate \140term_conversion.univ_to_term\'/2", mercury__term_conversion__Message_17);
#line 376 "term_conversion.m"
              return;
            }
#line 375 "term_conversion.m"
          }
#line 374 "term_conversion.m"
      }
#line 357 "term_conversion.m"
  }
#line 100 "term_conversion.m"
}

#line 99 "term_conversion.m"
MR_Word MR_CALL 
mercury__term_conversion__univ_to_term_1_f_0(
#line 99 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_5_5,
#line 99 "term_conversion.m"
  MR_Word mercury__term_conversion__Univ_3)
#line 99 "term_conversion.m"
{
#line 355 "term_conversion.m"
  {
#line 355 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 355 "term_conversion.m"
    MR_Word mercury__term_conversion__Term_4;

#line 355 "term_conversion.m"
    {
#line 355 "term_conversion.m"
      mercury__term_conversion__univ_to_term_2_p_0(mercury__term_conversion__TypeInfo_5_5, mercury__term_conversion__Univ_3, &mercury__term_conversion__Term_4);
    }
#line 355 "term_conversion.m"
    return mercury__term_conversion__Term_4;
#line 355 "term_conversion.m"
  }
#line 99 "term_conversion.m"
}

#line 94 "term_conversion.m"
void MR_CALL 
mercury__term_conversion__type_to_term_2_p_0(
#line 94 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_6,
#line 94 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_7_7,
#line 94 "term_conversion.m"
  MR_Box mercury__term_conversion__Val_3,
#line 94 "term_conversion.m"
  MR_Word * mercury__term_conversion__Term_4)
#line 94 "term_conversion.m"
{
#line 350 "term_conversion.m"
  {
#line 350 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 350 "term_conversion.m"
    MR_Word mercury__term_conversion__Univ_5;

#line 351 "term_conversion.m"
    {
#line 351 "term_conversion.m"
      mercury__univ__type_to_univ_2_p_1(mercury__term_conversion__TypeInfo_for_T_6, mercury__term_conversion__Val_3, &mercury__term_conversion__Univ_5);
    }
#line 352 "term_conversion.m"
    {
#line 352 "term_conversion.m"
      mercury__term_conversion__univ_to_term_2_p_0(mercury__term_conversion__TypeInfo_7_7, mercury__term_conversion__Univ_5, mercury__term_conversion__Term_4);
#line 352 "term_conversion.m"
      return;
    }
#line 350 "term_conversion.m"
  }
#line 94 "term_conversion.m"
}

#line 93 "term_conversion.m"
MR_Word MR_CALL 
mercury__term_conversion__type_to_term_1_f_0(
#line 93 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_5,
#line 93 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_6_6,
#line 93 "term_conversion.m"
  MR_Box mercury__term_conversion__Var_3)
#line 93 "term_conversion.m"
{
#line 350 "term_conversion.m"
  {
#line 350 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 350 "term_conversion.m"
    MR_Word mercury__term_conversion__Term_4;
#line 350 "term_conversion.m"
    MR_Word mercury__term_conversion__Univ_9;

#line 351 "term_conversion.m"
    {
#line 351 "term_conversion.m"
      mercury__univ__type_to_univ_2_p_1(mercury__term_conversion__TypeInfo_for_T_5, mercury__term_conversion__Var_3, &mercury__term_conversion__Univ_9);
    }
#line 352 "term_conversion.m"
    {
#line 352 "term_conversion.m"
      mercury__term_conversion__univ_to_term_2_p_0(mercury__term_conversion__TypeInfo_6_6, mercury__term_conversion__Univ_9, &mercury__term_conversion__Term_4);
    }
#line 350 "term_conversion.m"
    return mercury__term_conversion__Term_4;
#line 350 "term_conversion.m"
  }
#line 93 "term_conversion.m"
}

#line 89 "term_conversion.m"
void MR_CALL 
mercury__term_conversion__det_term_to_type_2_p_0(
#line 89 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_19_19,
#line 89 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_20,
#line 89 "term_conversion.m"
  MR_Word mercury__term_conversion__Term_3,
#line 89 "term_conversion.m"
  MR_Box * mercury__term_conversion__X_4)
#line 89 "term_conversion.m"
{
#line 337 "term_conversion.m"
  {
#line 337 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 337 "term_conversion.m"
    MR_Box mercury__term_conversion__XPrime_5;
#line 121 "term_conversion.m"
    MR_Word mercury__term_conversion__V_23_23;

#line 122 "term_conversion.m"
    {
#line 122 "term_conversion.m"
      mercury__term_conversion__try_term_to_type_2_p_0(mercury__term_conversion__TypeInfo_19_19, mercury__term_conversion__TypeInfo_for_T_20, mercury__term_conversion__Term_3, &mercury__term_conversion__V_23_23);
    }
#line 122 "term_conversion.m"
    mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 122 "term_conversion.m"
    if (mercury__term_conversion__succeeded)
#line 122 "term_conversion.m"
      {
#line 122 "term_conversion.m"
        mercury__term_conversion__XPrime_5 = (MR_hl_field(MR_mktag(0), mercury__term_conversion__V_23_23, (MR_Integer) 0));
#line 336 "term_conversion.m"
        *mercury__term_conversion__X_4 = mercury__term_conversion__XPrime_5;
#line 122 "term_conversion.m"
      }
#line 122 "term_conversion.m"
    else
#line 339 "term_conversion.m"
      {
#line 51 "term.opt"
        MR_Word mercury__term_conversion__ArgTerms_3_25;
#line 51 "term.opt"
        MR_Word mercury__term_conversion__V_2_24;
#line 51 "term.opt"
        MR_Word mercury__term_conversion__V_4_26;

#line 51 "term.opt"
        mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 51 "term.opt"
        if (mercury__term_conversion__succeeded)
#line 51 "term.opt"
          {
#line 51 "term.opt"
            mercury__term_conversion__V_2_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Term_3, (MR_Integer) 0)));
#line 51 "term.opt"
            mercury__term_conversion__ArgTerms_3_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Term_3, (MR_Integer) 1)));
#line 51 "term.opt"
            mercury__term_conversion__V_4_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Term_3, (MR_Integer) 2)));
#line 52 "term.opt"
            {
#line 52 "term.opt"
              mercury__term_conversion__succeeded = mercury__term__is_ground_list_1_p_0(mercury__term_conversion__TypeInfo_19_19, mercury__term_conversion__ArgTerms_3_25);
            }
#line 51 "term.opt"
          }
#line 337 "term_conversion.m"
        mercury__term_conversion__succeeded = !(mercury__term_conversion__succeeded);
#line 339 "term_conversion.m"
        if (mercury__term_conversion__succeeded)
#line 338 "term_conversion.m"
          {
#line 338 "term_conversion.m"
            {
#line 338 "term_conversion.m"
              mercury__require__unexpected_3_p_0((MR_String) "term_conversion", (MR_String) "predicate \140term_conversion.det_term_to_type\'/2", (MR_String) "the term is not ground");
#line 338 "term_conversion.m"
              return;
            }
#line 338 "term_conversion.m"
          }
#line 339 "term_conversion.m"
        else
#line 341 "term_conversion.m"
          {
#line 341 "term_conversion.m"
            MR_String mercury__term_conversion__Message_6;
#line 341 "term_conversion.m"
            MR_String mercury__term_conversion__V_11_11;
#line 341 "term_conversion.m"
            MR_String mercury__term_conversion__V_13_13;
#line 341 "term_conversion.m"
            MR_String mercury__term_conversion__V_14_14;
#line 341 "term_conversion.m"
            MR_Word mercury__term_conversion__V_15_15;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_conversion__det_term_to_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_conversion__TypeInfo_for_T_20 ;
		{
#line 58 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 6653 "term_conversion.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__V_15_15  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 341 "term_conversion.m"
            {
#line 341 "term_conversion.m"
              mercury__term_conversion__V_14_14 = mercury__type_desc__type_name_1_f_0(mercury__term_conversion__V_15_15);
            }
#line 415 "string.opt"
            {
#line 415 "string.opt"
              mercury__string__append_3_p_2(mercury__term_conversion__V_14_14, (MR_String) "\'", &mercury__term_conversion__V_13_13);
            }
#line 415 "string.opt"
            {
#line 415 "string.opt"
              mercury__string__append_3_p_2((MR_String) " for type \140", mercury__term_conversion__V_13_13, &mercury__term_conversion__V_11_11);
            }
#line 415 "string.opt"
            {
#line 415 "string.opt"
              mercury__string__append_3_p_2((MR_String) "type error:\nthe term is not a valid term", mercury__term_conversion__V_11_11, &mercury__term_conversion__Message_6);
            }
#line 342 "term_conversion.m"
            {
#line 342 "term_conversion.m"
              mercury__require__unexpected_3_p_0((MR_String) "term_conversion", (MR_String) "predicate \140term_conversion.det_term_to_type\'/2", mercury__term_conversion__Message_6);
#line 342 "term_conversion.m"
              return;
            }
#line 341 "term_conversion.m"
          }
#line 339 "term_conversion.m"
      }
#line 337 "term_conversion.m"
  }
#line 89 "term_conversion.m"
}

#line 88 "term_conversion.m"
MR_Box MR_CALL 
mercury__term_conversion__det_term_to_type_1_f_0(
#line 88 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_5_5,
#line 88 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_6,
#line 88 "term_conversion.m"
  MR_Word mercury__term_conversion__Term_3)
#line 88 "term_conversion.m"
{
#line 332 "term_conversion.m"
  {
#line 332 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 332 "term_conversion.m"
    MR_Box mercury__term_conversion__X_4;

#line 332 "term_conversion.m"
    {
#line 332 "term_conversion.m"
      mercury__term_conversion__det_term_to_type_2_p_0(mercury__term_conversion__TypeInfo_5_5, mercury__term_conversion__TypeInfo_for_T_6, mercury__term_conversion__Term_3, &mercury__term_conversion__X_4);
    }
#line 332 "term_conversion.m"
    return mercury__term_conversion__X_4;
#line 332 "term_conversion.m"
  }
#line 88 "term_conversion.m"
}

#line 84 "term_conversion.m"
MR_bool MR_CALL 
mercury__term_conversion__term_to_type_2_p_0(
#line 84 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_U_6,
#line 84 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_7,
#line 84 "term_conversion.m"
  MR_Word mercury__term_conversion__Term_3,
#line 84 "term_conversion.m"
  MR_Box * mercury__term_conversion__Val_4)
#line 84 "term_conversion.m"
{
#line 121 "term_conversion.m"
  {
#line 121 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 121 "term_conversion.m"
    MR_Word mercury__term_conversion__V_5_5;

#line 122 "term_conversion.m"
    {
#line 122 "term_conversion.m"
      mercury__term_conversion__try_term_to_type_2_p_0(mercury__term_conversion__TypeInfo_for_U_6, mercury__term_conversion__TypeInfo_for_T_7, mercury__term_conversion__Term_3, &mercury__term_conversion__V_5_5);
    }
#line 122 "term_conversion.m"
    mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 122 "term_conversion.m"
    if (mercury__term_conversion__succeeded)
#line 122 "term_conversion.m"
      *mercury__term_conversion__Val_4 = (MR_hl_field(MR_mktag(0), mercury__term_conversion__V_5_5, (MR_Integer) 0));
#line 121 "term_conversion.m"
    return mercury__term_conversion__succeeded;
#line 121 "term_conversion.m"
  }
#line 84 "term_conversion.m"
}

#line 80 "term_conversion.m"
void MR_CALL 
mercury__term_conversion__try_term_to_type_2_p_0(
#line 80 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_U_11,
#line 80 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_12,
#line 80 "term_conversion.m"
  MR_Word mercury__term_conversion__Term_3,
#line 80 "term_conversion.m"
  MR_Word * mercury__term_conversion__Result_4)
#line 80 "term_conversion.m"
{
#line 127 "term_conversion.m"
  {
#line 127 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 127 "term_conversion.m"
    MR_Word mercury__term_conversion__UnivResult_6;
#line 127 "term_conversion.m"
    MR_Word mercury__term_conversion__V_10_10;
#line 127 "term_conversion.m"
    MR_Word mercury__term_conversion__V_17_17;
#line 58 "type_desc.opt"
    MR_Box mercury__term_conversion__ValTypedVar_5;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term_conversion__try_term_to_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_conversion__TypeInfo_for_T_12 ;
		{
#line 58 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 6816 "term_conversion.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__V_10_10  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 143 "term_conversion.m"
    mercury__term_conversion__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 143 "term_conversion.m"
    {
#line 143 "term_conversion.m"
      mercury__term_conversion__try_term_to_univ_2_4_p_0(mercury__term_conversion__TypeInfo_for_U_11, mercury__term_conversion__Term_3, mercury__term_conversion__V_10_10, mercury__term_conversion__V_17_17, &mercury__term_conversion__UnivResult_6);
    }
#line 134 "term_conversion.m"
    if (((MR_tag((MR_Word) mercury__term_conversion__UnivResult_6)) == (MR_mktag((MR_Integer) 1))))
#line 136 "term_conversion.m"
      *mercury__term_conversion__Result_4 = mercury__term_conversion__UnivResult_6;
#line 134 "term_conversion.m"
    else
#line 130 "term_conversion.m"
      {
#line 130 "term_conversion.m"
        MR_Word mercury__term_conversion__Univ_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__UnivResult_6, (MR_Integer) 0)));
#line 130 "term_conversion.m"
        MR_Box mercury__term_conversion__Val_8;

#line 131 "term_conversion.m"
        {
#line 131 "term_conversion.m"
          mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeInfo_for_T_12, mercury__term_conversion__Univ_7, &mercury__term_conversion__Val_8);
        }
#line 133 "term_conversion.m"
        {
#line 133 "term_conversion.m"
          MR_Word base;
#line 133 "term_conversion.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 133 "term_conversion.m"
          *mercury__term_conversion__Result_4 = base;
#line 133 "term_conversion.m"
          MR_hl_field(MR_mktag(0), base, 0) = mercury__term_conversion__Val_8;
#line 133 "term_conversion.m"
        }
#line 130 "term_conversion.m"
      }
#line 127 "term_conversion.m"
  }
#line 80 "term_conversion.m"
}

#line 79 "term_conversion.m"
MR_Word MR_CALL 
mercury__term_conversion__try_term_to_type_1_f_0(
#line 79 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_U_5,
#line 79 "term_conversion.m"
  MR_Word mercury__term_conversion__TypeInfo_for_T_6,
#line 79 "term_conversion.m"
  MR_Word mercury__term_conversion__Term_3)
#line 79 "term_conversion.m"
{
#line 125 "term_conversion.m"
  {
#line 125 "term_conversion.m"
    MR_bool mercury__term_conversion__succeeded;
#line 125 "term_conversion.m"
    MR_Word mercury__term_conversion__Result_4;

#line 125 "term_conversion.m"
    {
#line 125 "term_conversion.m"
      mercury__term_conversion__try_term_to_type_2_p_0(mercury__term_conversion__TypeInfo_for_U_5, mercury__term_conversion__TypeInfo_for_T_6, mercury__term_conversion__Term_3, &mercury__term_conversion__Result_4);
    }
#line 125 "term_conversion.m"
    return mercury__term_conversion__Result_4;
#line 125 "term_conversion.m"
  }
#line 79 "term_conversion.m"
}

void mercury__term_conversion__init(void)
{
}

void mercury__term_conversion__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_arg_context_0);
	MR_register_type_ctor_info(&mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_context_0);
	MR_register_type_ctor_info(&mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_error_1);
	MR_register_type_ctor_info(&mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_result_2);
	MR_register_type_ctor_info(&mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_result_1);
}

void mercury__term_conversion__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module term_conversion. */
