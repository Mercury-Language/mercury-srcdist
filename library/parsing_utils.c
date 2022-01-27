/*
** Automatically generated from `parsing_utils.m'
** by the Mercury compiler,
** version 13.05.2, configured for x86_64-apple-darwin12.5.0.
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


/* :- module parsing_utils. */
/* :- implementation. */

/*
INIT mercury__parsing_utils__init
ENDINIT
*/

#include "parsing_utils.mih"


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




#line 86 "parsing_utils.c"
static const MR_FA_TypeInfo_Struct1 mercury__parsing_utils__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 89 "parsing_utils.c"
static const MR_PseudoTypeInfo mercury__parsing_utils__parsing_utils__field_types_fail_message_info_0_0[2];

#line 92 "parsing_utils.c"
static const MR_DuFunctorDesc mercury__parsing_utils__parsing_utils__du_functor_desc_fail_message_info_0_0;

#line 95 "parsing_utils.c"
static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_stag_ordered_fail_message_info_0_0[1];

#line 98 "parsing_utils.c"
static const MR_DuPtagLayout mercury__parsing_utils__parsing_utils__du_ptag_ordered_fail_message_info_0[1];

#line 101 "parsing_utils.c"
static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_name_ordered_fail_message_info_0[1];

#line 104 "parsing_utils.c"
static const MR_Integer mercury__parsing_utils__parsing_utils__functor_number_map_fail_message_info_0[1];

#line 107 "parsing_utils.c"
static const MR_FA_TypeInfo_Struct1 mercury__parsing_utils__array__ti_array_1builtin__type_ctor_info_int_0;

#line 110 "parsing_utils.c"
static const MR_PseudoTypeInfo mercury__parsing_utils__parsing_utils__field_types_parse_result_1_0[1];

#line 113 "parsing_utils.c"
static const MR_DuFunctorDesc mercury__parsing_utils__parsing_utils__du_functor_desc_parse_result_1_0;

#line 116 "parsing_utils.c"
static const MR_PseudoTypeInfo mercury__parsing_utils__parsing_utils__field_types_parse_result_1_1[3];

#line 119 "parsing_utils.c"
static const MR_ConstString mercury__parsing_utils__parsing_utils__field_names_parse_result_1_1[3];

#line 122 "parsing_utils.c"
static const MR_DuFunctorDesc mercury__parsing_utils__parsing_utils__du_functor_desc_parse_result_1_1;

#line 125 "parsing_utils.c"
static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_stag_ordered_parse_result_1_0[1];

#line 128 "parsing_utils.c"
static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_stag_ordered_parse_result_1_1[1];

#line 131 "parsing_utils.c"
static const MR_DuPtagLayout mercury__parsing_utils__parsing_utils__du_ptag_ordered_parse_result_1[2];

#line 134 "parsing_utils.c"
static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_name_ordered_parse_result_1[2];

#line 137 "parsing_utils.c"
static const MR_Integer mercury__parsing_utils__parsing_utils__functor_number_map_parse_result_1[2];

#line 140 "parsing_utils.c"
static const MR_VA_PseudoTypeInfo_Struct4 mercury__parsing_utils____vpti_pred_4__plain_parsing_utils__type_ctor_info_src_0__pseudo_1__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0;

#line 143 "parsing_utils.c"
static const MR_VA_PseudoTypeInfo_Struct6 mercury__parsing_utils____vpti_pred_6__plain_parsing_utils__type_ctor_info_src_0__pseudo_1__pseudo_2__pseudo_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0;

#line 146 "parsing_utils.c"
static const MR_VA_TypeInfo_Struct4 mercury__parsing_utils____vti_pred_4parsing_utils__type_ctor_info_src_0unit__type_ctor_info_unit_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 149 "parsing_utils.c"
static const MR_FA_TypeInfo_Struct1 mercury__parsing_utils__mutvar__ti_mutvar_1builtin__type_ctor_info_int_0;

#line 152 "parsing_utils.c"
static const MR_FA_TypeInfo_Struct1 mercury__parsing_utils__mutvar__ti_mutvar_1parsing_utils__type_ctor_info_fail_message_info_0;

#line 155 "parsing_utils.c"
static const MR_PseudoTypeInfo mercury__parsing_utils__parsing_utils__field_types_src_0_0[5];

#line 158 "parsing_utils.c"
static const MR_ConstString mercury__parsing_utils__parsing_utils__field_names_src_0_0[5];

#line 161 "parsing_utils.c"
static const MR_DuFunctorDesc mercury__parsing_utils__parsing_utils__du_functor_desc_src_0_0;

#line 164 "parsing_utils.c"
static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_stag_ordered_src_0_0[1];

#line 167 "parsing_utils.c"
static const MR_DuPtagLayout mercury__parsing_utils__parsing_utils__du_ptag_ordered_src_0[1];

#line 170 "parsing_utils.c"
static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_name_ordered_src_0[1];

#line 173 "parsing_utils.c"
static const MR_Integer mercury__parsing_utils__parsing_utils__functor_number_map_src_0[1];

#line 176 "parsing_utils.c"
static MR_bool MR_CALL 
mercury__parsing_utils____Unify____fail_message_info_0_0_10001(
#line 179 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 181 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2);

#line 184 "parsing_utils.c"
static void MR_CALL 
mercury__parsing_utils____Compare____fail_message_info_0_0_10001(
#line 187 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_1,
#line 189 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2,
#line 191 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3);

#line 194 "parsing_utils.c"
static MR_bool MR_CALL 
mercury__parsing_utils____Unify____line_numbers_0_0_10001(
#line 197 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 199 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2);

#line 202 "parsing_utils.c"
static void MR_CALL 
mercury__parsing_utils____Compare____line_numbers_0_0_10001(
#line 205 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_1,
#line 207 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2,
#line 209 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3);

#line 212 "parsing_utils.c"
static MR_bool MR_CALL 
mercury__parsing_utils____Unify____parse_result_1_0_10001(
#line 215 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 217 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2,
#line 219 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3);

#line 222 "parsing_utils.c"
static void MR_CALL 
mercury__parsing_utils____Compare____parse_result_1_0_10001(
#line 225 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 227 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_2,
#line 229 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3,
#line 231 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_4);

#line 234 "parsing_utils.c"
static MR_bool MR_CALL 
mercury__parsing_utils____Unify____parser_1_0_10001(
#line 237 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 239 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2,
#line 241 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3);

#line 244 "parsing_utils.c"
static void MR_CALL 
mercury__parsing_utils____Compare____parser_1_0_10001(
#line 247 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 249 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_2,
#line 251 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3,
#line 253 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_4);

#line 256 "parsing_utils.c"
static MR_bool MR_CALL 
mercury__parsing_utils____Unify____parser_with_state_2_0_10001(
#line 259 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 261 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2,
#line 263 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3,
#line 265 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_4);

#line 268 "parsing_utils.c"
static void MR_CALL 
mercury__parsing_utils____Compare____parser_with_state_2_0_10001(
#line 271 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 273 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2,
#line 275 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_3,
#line 277 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_4,
#line 279 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_5);

#line 282 "parsing_utils.c"
static MR_bool MR_CALL 
mercury__parsing_utils____Unify____ps_0_0_10001(
#line 285 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 287 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2);

#line 290 "parsing_utils.c"
static void MR_CALL 
mercury__parsing_utils____Compare____ps_0_0_10001(
#line 293 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_1,
#line 295 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2,
#line 297 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3);

#line 300 "parsing_utils.c"
static MR_bool MR_CALL 
mercury__parsing_utils____Unify____skip_whitespace_pred_0_0_10001(
#line 303 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 305 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2);

#line 308 "parsing_utils.c"
static void MR_CALL 
mercury__parsing_utils____Compare____skip_whitespace_pred_0_0_10001(
#line 311 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_1,
#line 313 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2,
#line 315 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3);

#line 318 "parsing_utils.c"
static MR_bool MR_CALL 
mercury__parsing_utils____Unify____src_0_0_10001(
#line 321 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 323 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2);

#line 326 "parsing_utils.c"
static void MR_CALL 
mercury__parsing_utils____Compare____src_0_0_10001(
#line 329 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_1,
#line 331 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2,
#line 333 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3);

#line 685 "parsing_utils.m"
static MR_bool MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_p_0(
#line 685 "parsing_utils.m"
  MR_String mercury__parsing_utils__V_31_31,
#line 685 "parsing_utils.m"
  MR_Word mercury__parsing_utils__V_32_32,
#line 685 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_10,
#line 685 "parsing_utils.m"
  MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_0_15,
#line 685 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__STATE_VARIABLE_RevResult_16,
#line 685 "parsing_utils.m"
  MR_Box mercury__parsing_utils__STATE_VARIABLE_S_0_17,
#line 685 "parsing_utils.m"
  MR_Box * mercury__parsing_utils__STATE_VARIABLE_S_18,
#line 685 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_19,
#line 685 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_20);

#line 668 "parsing_utils.m"
static MR_bool MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_6_p_0(
#line 668 "parsing_utils.m"
  MR_String mercury__parsing_utils__V_22_22,
#line 668 "parsing_utils.m"
  MR_Word mercury__parsing_utils__V_23_23,
#line 668 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_8,
#line 668 "parsing_utils.m"
  MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_0_12,
#line 668 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__STATE_VARIABLE_RevResult_13,
#line 668 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_14,
#line 668 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_15);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 890 "parsing_utils.m"
static MR_bool MR_CALL 
mercury__parsing_utils__digits_2_5_p_0(
#line 890 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__Base_6,
#line 890 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_7,
#line 890 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_12,
#line 890 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_13);

#line 617 "parsing_utils.m"
static MR_bool MR_CALL 
mercury__parsing_utils__imatch_string_2_5_p_0(
#line 617 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__N_6,
#line 617 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__I_7,
#line 617 "parsing_utils.m"
  MR_String mercury__parsing_utils__MatchStr_8,
#line 617 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__Offset_9,
#line 617 "parsing_utils.m"
  MR_String mercury__parsing_utils__Str_10);

#line 595 "parsing_utils.m"
static MR_bool MR_CALL 
mercury__parsing_utils__match_string_2_5_p_0(
#line 595 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__N_6,
#line 595 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__I_7,
#line 595 "parsing_utils.m"
  MR_String mercury__parsing_utils__MatchStr_8,
#line 595 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__Offset_9,
#line 595 "parsing_utils.m"
  MR_String mercury__parsing_utils__Str_10);

#line 420 "parsing_utils.c"
static MR_bool MR_CALL 
mercury__parsing_utils__new_src_and_ps_3_p_0_1(
#line 423 "parsing_utils.c"
  MR_Box mercury__parsing_utils__closure_arg,
#line 425 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 427 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_2,
#line 429 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3,
#line 431 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_4);

#line 434 "parsing_utils.c"
static MR_bool MR_CALL 
mercury__parsing_utils__parse_3_p_0_1(
#line 437 "parsing_utils.c"
  MR_Box mercury__parsing_utils__closure_arg,
#line 439 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 441 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_2,
#line 443 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3,
#line 445 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_4);


static /* final */ const MR_Box mercury__parsing_utils_scalar_common_1[5][2];

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_2[1][6];

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_3[3][3];

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_4[1][4];

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_5[2][5];

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_6[1][7];




static /* final */ const MR_Box mercury__parsing_utils_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__mutvar__mutvar__type_ctor_info_mutvar_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__mutvar__mutvar__type_ctor_info_mutvar_1)),
    ((MR_Box) (&mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_2[1][6] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__parsing_utils__parsing_utils__type_ctor_info_src_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_3[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__parsing_utils_scalar_common_6[0])),
    ((MR_Box) (mercury__parsing_utils__parse_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__parsing_utils_scalar_common_6[0])),
    ((MR_Box) (mercury__parsing_utils__new_src_and_ps_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_4[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__parsing_utils_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_5[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__parsing_utils_scalar_common_4[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__parsing_utils_scalar_common_4[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__parsing_utils_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__parsing_utils__parsing_utils__type_ctor_info_src_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "parsing_utils.mh"
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
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
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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
#include "bitmap.mh"
#include "bitmap.mh"
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
#include "version_array.mh"
#include "version_array.mh"



#line 880 "parsing_utils.c"
static const MR_FA_TypeInfo_Struct1 mercury__parsing_utils__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 888 "parsing_utils.c"
static const MR_PseudoTypeInfo mercury__parsing_utils__parsing_utils__field_types_fail_message_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__parsing_utils__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

#line 894 "parsing_utils.c"
static const MR_DuFunctorDesc mercury__parsing_utils__parsing_utils__du_functor_desc_fail_message_info_0_0 = {
  (MR_String) "fail_message_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__parsing_utils__parsing_utils__field_types_fail_message_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 909 "parsing_utils.c"
static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_stag_ordered_fail_message_info_0_0[1] = {
  &mercury__parsing_utils__parsing_utils__du_functor_desc_fail_message_info_0_0
};

#line 914 "parsing_utils.c"
static const MR_DuPtagLayout mercury__parsing_utils__parsing_utils__du_ptag_ordered_fail_message_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__parsing_utils__parsing_utils__du_stag_ordered_fail_message_info_0_0
  }
};

#line 923 "parsing_utils.c"
static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_name_ordered_fail_message_info_0[1] = {
  &mercury__parsing_utils__parsing_utils__du_functor_desc_fail_message_info_0_0
};

#line 928 "parsing_utils.c"
static const MR_Integer mercury__parsing_utils__parsing_utils__functor_number_map_fail_message_info_0[1] = {
  (MR_Integer) 0
};

#line 933 "parsing_utils.c"
const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__parsing_utils____Unify____fail_message_info_0_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____fail_message_info_0_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "fail_message_info",
  {
    mercury__parsing_utils__parsing_utils__du_name_ordered_fail_message_info_0
  },
  {
    mercury__parsing_utils__parsing_utils__du_ptag_ordered_fail_message_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__parsing_utils__parsing_utils__functor_number_map_fail_message_info_0
};

#line 954 "parsing_utils.c"
static const MR_FA_TypeInfo_Struct1 mercury__parsing_utils__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 962 "parsing_utils.c"
const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_line_numbers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__parsing_utils____Unify____line_numbers_0_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____line_numbers_0_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "line_numbers",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__parsing_utils__array__ti_array_1builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 983 "parsing_utils.c"
static const MR_PseudoTypeInfo mercury__parsing_utils__parsing_utils__field_types_parse_result_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 988 "parsing_utils.c"
static const MR_DuFunctorDesc mercury__parsing_utils__parsing_utils__du_functor_desc_parse_result_1_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__parsing_utils__parsing_utils__field_types_parse_result_1_0,
  NULL,
  NULL,
  NULL
};

#line 1003 "parsing_utils.c"
static const MR_PseudoTypeInfo mercury__parsing_utils__parsing_utils__field_types_parse_result_1_1[3] = {
  (MR_PseudoTypeInfo) &mercury__parsing_utils__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1010 "parsing_utils.c"
static const MR_ConstString mercury__parsing_utils__parsing_utils__field_names_parse_result_1_1[3] = {
  (MR_String) "error_message",
  (MR_String) "error_line",
  (MR_String) "error_col"
};

#line 1017 "parsing_utils.c"
static const MR_DuFunctorDesc mercury__parsing_utils__parsing_utils__du_functor_desc_parse_result_1_1 = {
  (MR_String) "error",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__parsing_utils__parsing_utils__field_types_parse_result_1_1,
  mercury__parsing_utils__parsing_utils__field_names_parse_result_1_1,
  NULL,
  NULL
};

#line 1032 "parsing_utils.c"
static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_stag_ordered_parse_result_1_0[1] = {
  &mercury__parsing_utils__parsing_utils__du_functor_desc_parse_result_1_0
};

#line 1037 "parsing_utils.c"
static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_stag_ordered_parse_result_1_1[1] = {
  &mercury__parsing_utils__parsing_utils__du_functor_desc_parse_result_1_1
};

#line 1042 "parsing_utils.c"
static const MR_DuPtagLayout mercury__parsing_utils__parsing_utils__du_ptag_ordered_parse_result_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__parsing_utils__parsing_utils__du_stag_ordered_parse_result_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__parsing_utils__parsing_utils__du_stag_ordered_parse_result_1_1
  }
};

#line 1056 "parsing_utils.c"
static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_name_ordered_parse_result_1[2] = {
  &mercury__parsing_utils__parsing_utils__du_functor_desc_parse_result_1_1,
  &mercury__parsing_utils__parsing_utils__du_functor_desc_parse_result_1_0
};

#line 1062 "parsing_utils.c"
static const MR_Integer mercury__parsing_utils__parsing_utils__functor_number_map_parse_result_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1068 "parsing_utils.c"
const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_parse_result_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__parsing_utils____Unify____parse_result_1_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____parse_result_1_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "parse_result",
  {
    mercury__parsing_utils__parsing_utils__du_name_ordered_parse_result_1
  },
  {
    mercury__parsing_utils__parsing_utils__du_ptag_ordered_parse_result_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__parsing_utils__parsing_utils__functor_number_map_parse_result_1
};

#line 1089 "parsing_utils.c"
static const MR_VA_PseudoTypeInfo_Struct4 mercury__parsing_utils____vpti_pred_4__plain_parsing_utils__type_ctor_info_src_0__pseudo_1__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &mercury__parsing_utils__parsing_utils__type_ctor_info_src_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1101 "parsing_utils.c"
const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_parser_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__parsing_utils____Unify____parser_1_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____parser_1_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "parser",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__parsing_utils____vpti_pred_4__plain_parsing_utils__type_ctor_info_src_0__pseudo_1__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1122 "parsing_utils.c"
static const MR_VA_PseudoTypeInfo_Struct6 mercury__parsing_utils____vpti_pred_6__plain_parsing_utils__type_ctor_info_src_0__pseudo_1__pseudo_2__pseudo_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) &mercury__parsing_utils__parsing_utils__type_ctor_info_src_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1136 "parsing_utils.c"
const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_parser_with_state_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__parsing_utils____Unify____parser_with_state_2_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____parser_with_state_2_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "parser_with_state",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__parsing_utils____vpti_pred_6__plain_parsing_utils__type_ctor_info_src_0__pseudo_1__pseudo_2__pseudo_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1157 "parsing_utils.c"
const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_ps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__parsing_utils____Unify____ps_0_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____ps_0_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "ps",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1178 "parsing_utils.c"
static const MR_VA_TypeInfo_Struct4 mercury__parsing_utils____vti_pred_4parsing_utils__type_ctor_info_src_0unit__type_ctor_info_unit_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) &mercury__parsing_utils__parsing_utils__type_ctor_info_src_0,
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1190 "parsing_utils.c"
const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_skip_whitespace_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__parsing_utils____Unify____skip_whitespace_pred_0_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____skip_whitespace_pred_0_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "skip_whitespace_pred",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__parsing_utils____vti_pred_4parsing_utils__type_ctor_info_src_0unit__type_ctor_info_unit_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1211 "parsing_utils.c"
static const MR_FA_TypeInfo_Struct1 mercury__parsing_utils__mutvar__ti_mutvar_1builtin__type_ctor_info_int_0 = {
  &mercury__mutvar__mutvar__type_ctor_info_mutvar_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1219 "parsing_utils.c"
static const MR_FA_TypeInfo_Struct1 mercury__parsing_utils__mutvar__ti_mutvar_1parsing_utils__type_ctor_info_fail_message_info_0 = {
  &mercury__mutvar__mutvar__type_ctor_info_mutvar_1,
  {
    (MR_TypeInfo) &mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0
  }
};

#line 1227 "parsing_utils.c"
static const MR_PseudoTypeInfo mercury__parsing_utils__parsing_utils__field_types_src_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__parsing_utils____vti_pred_4parsing_utils__type_ctor_info_src_0unit__type_ctor_info_unit_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__parsing_utils__mutvar__ti_mutvar_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__parsing_utils__mutvar__ti_mutvar_1parsing_utils__type_ctor_info_fail_message_info_0
};

#line 1236 "parsing_utils.c"
static const MR_ConstString mercury__parsing_utils__parsing_utils__field_names_src_0_0[5] = {
  (MR_String) "input_length",
  (MR_String) "input_string",
  (MR_String) "skip_ws_pred",
  (MR_String) "furthest_offset",
  (MR_String) "last_fail_message"
};

#line 1245 "parsing_utils.c"
static const MR_DuFunctorDesc mercury__parsing_utils__parsing_utils__du_functor_desc_src_0_0 = {
  (MR_String) "src",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__parsing_utils__parsing_utils__field_types_src_0_0,
  mercury__parsing_utils__parsing_utils__field_names_src_0_0,
  NULL,
  NULL
};

#line 1260 "parsing_utils.c"
static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_stag_ordered_src_0_0[1] = {
  &mercury__parsing_utils__parsing_utils__du_functor_desc_src_0_0
};

#line 1265 "parsing_utils.c"
static const MR_DuPtagLayout mercury__parsing_utils__parsing_utils__du_ptag_ordered_src_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__parsing_utils__parsing_utils__du_stag_ordered_src_0_0
  }
};

#line 1274 "parsing_utils.c"
static const MR_DuFunctorDescPtr mercury__parsing_utils__parsing_utils__du_name_ordered_src_0[1] = {
  &mercury__parsing_utils__parsing_utils__du_functor_desc_src_0_0
};

#line 1279 "parsing_utils.c"
static const MR_Integer mercury__parsing_utils__parsing_utils__functor_number_map_src_0[1] = {
  (MR_Integer) 0
};

#line 1284 "parsing_utils.c"
const MR_TypeCtorInfo_Struct mercury__parsing_utils__parsing_utils__type_ctor_info_src_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__parsing_utils____Unify____src_0_0_10001)),
  ((MR_Box) (mercury__parsing_utils____Compare____src_0_0_10001)),
  (MR_String) "parsing_utils",
  (MR_String) "src",
  {
    mercury__parsing_utils__parsing_utils__du_name_ordered_src_0
  },
  {
    mercury__parsing_utils__parsing_utils__du_ptag_ordered_src_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__parsing_utils__parsing_utils__functor_number_map_src_0
};

#line 1305 "parsing_utils.c"
static MR_bool MR_CALL 
mercury__parsing_utils____Unify____fail_message_info_0_0_10001(
#line 1308 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 1310 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2)
#line 1312 "parsing_utils.c"
{
#line 1314 "parsing_utils.c"
  {
#line 1316 "parsing_utils.c"
    MR_bool mercury__parsing_utils__succeeded;

#line 1319 "parsing_utils.c"
    {
#line 1321 "parsing_utils.c"
      mercury__parsing_utils__succeeded = mercury__parsing_utils____Unify____fail_message_info_0_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), ((MR_Word) mercury__parsing_utils__wrapper_arg_2));
    }
#line 1324 "parsing_utils.c"
    return mercury__parsing_utils__succeeded;
#line 1326 "parsing_utils.c"
  }
#line 1328 "parsing_utils.c"
}

#line 1331 "parsing_utils.c"
static void MR_CALL 
mercury__parsing_utils____Compare____fail_message_info_0_0_10001(
#line 1334 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_1,
#line 1336 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2,
#line 1338 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3)
#line 1340 "parsing_utils.c"
{
#line 1342 "parsing_utils.c"
  {
#line 1344 "parsing_utils.c"
    MR_Word mercury__parsing_utils__conv0_HeadVar__1_1;

#line 1347 "parsing_utils.c"
    {
#line 1349 "parsing_utils.c"
      mercury__parsing_utils____Compare____fail_message_info_0_0(&mercury__parsing_utils__conv0_HeadVar__1_1, ((MR_Word) mercury__parsing_utils__wrapper_arg_2), ((MR_Word) mercury__parsing_utils__wrapper_arg_3));
    }
#line 1352 "parsing_utils.c"
    *mercury__parsing_utils__wrapper_arg_1 = ((MR_Box) (mercury__parsing_utils__conv0_HeadVar__1_1));
#line 1354 "parsing_utils.c"
  }
#line 1356 "parsing_utils.c"
}

#line 1359 "parsing_utils.c"
static MR_bool MR_CALL 
mercury__parsing_utils____Unify____line_numbers_0_0_10001(
#line 1362 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 1364 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2)
#line 1366 "parsing_utils.c"
{
#line 1368 "parsing_utils.c"
  {
#line 1370 "parsing_utils.c"
    MR_bool mercury__parsing_utils__succeeded;

#line 1373 "parsing_utils.c"
    {
#line 1375 "parsing_utils.c"
      mercury__parsing_utils__succeeded = mercury__parsing_utils____Unify____line_numbers_0_0(((MR_ArrayPtr) mercury__parsing_utils__wrapper_arg_1), ((MR_ArrayPtr) mercury__parsing_utils__wrapper_arg_2));
    }
#line 1378 "parsing_utils.c"
    return mercury__parsing_utils__succeeded;
#line 1380 "parsing_utils.c"
  }
#line 1382 "parsing_utils.c"
}

#line 1385 "parsing_utils.c"
static void MR_CALL 
mercury__parsing_utils____Compare____line_numbers_0_0_10001(
#line 1388 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_1,
#line 1390 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2,
#line 1392 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3)
#line 1394 "parsing_utils.c"
{
#line 1396 "parsing_utils.c"
  {
#line 1398 "parsing_utils.c"
    MR_Word mercury__parsing_utils__conv0_HeadVar__1_1;

#line 1401 "parsing_utils.c"
    {
#line 1403 "parsing_utils.c"
      mercury__parsing_utils____Compare____line_numbers_0_0(&mercury__parsing_utils__conv0_HeadVar__1_1, ((MR_ArrayPtr) mercury__parsing_utils__wrapper_arg_2), ((MR_ArrayPtr) mercury__parsing_utils__wrapper_arg_3));
    }
#line 1406 "parsing_utils.c"
    *mercury__parsing_utils__wrapper_arg_1 = ((MR_Box) (mercury__parsing_utils__conv0_HeadVar__1_1));
#line 1408 "parsing_utils.c"
  }
#line 1410 "parsing_utils.c"
}

#line 1413 "parsing_utils.c"
static MR_bool MR_CALL 
mercury__parsing_utils____Unify____parse_result_1_0_10001(
#line 1416 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 1418 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2,
#line 1420 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3)
#line 1422 "parsing_utils.c"
{
#line 1424 "parsing_utils.c"
  {
#line 1426 "parsing_utils.c"
    MR_bool mercury__parsing_utils__succeeded;

#line 1429 "parsing_utils.c"
    {
#line 1431 "parsing_utils.c"
      mercury__parsing_utils__succeeded = mercury__parsing_utils____Unify____parse_result_1_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), ((MR_Word) mercury__parsing_utils__wrapper_arg_2), ((MR_Word) mercury__parsing_utils__wrapper_arg_3));
    }
#line 1434 "parsing_utils.c"
    return mercury__parsing_utils__succeeded;
#line 1436 "parsing_utils.c"
  }
#line 1438 "parsing_utils.c"
}

#line 1441 "parsing_utils.c"
static void MR_CALL 
mercury__parsing_utils____Compare____parse_result_1_0_10001(
#line 1444 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 1446 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_2,
#line 1448 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3,
#line 1450 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_4)
#line 1452 "parsing_utils.c"
{
#line 1454 "parsing_utils.c"
  {
#line 1456 "parsing_utils.c"
    MR_Word mercury__parsing_utils__conv0_HeadVar__1_1;

#line 1459 "parsing_utils.c"
    {
#line 1461 "parsing_utils.c"
      mercury__parsing_utils____Compare____parse_result_1_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), &mercury__parsing_utils__conv0_HeadVar__1_1, ((MR_Word) mercury__parsing_utils__wrapper_arg_3), ((MR_Word) mercury__parsing_utils__wrapper_arg_4));
    }
#line 1464 "parsing_utils.c"
    *mercury__parsing_utils__wrapper_arg_2 = ((MR_Box) (mercury__parsing_utils__conv0_HeadVar__1_1));
#line 1466 "parsing_utils.c"
  }
#line 1468 "parsing_utils.c"
}

#line 1471 "parsing_utils.c"
static MR_bool MR_CALL 
mercury__parsing_utils____Unify____parser_1_0_10001(
#line 1474 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 1476 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2,
#line 1478 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3)
#line 1480 "parsing_utils.c"
{
#line 1482 "parsing_utils.c"
  {
#line 1484 "parsing_utils.c"
    MR_bool mercury__parsing_utils__succeeded;

#line 1487 "parsing_utils.c"
    {
#line 1489 "parsing_utils.c"
      mercury__parsing_utils__succeeded = mercury__parsing_utils____Unify____parser_1_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), ((MR_Word) mercury__parsing_utils__wrapper_arg_2), ((MR_Word) mercury__parsing_utils__wrapper_arg_3));
    }
#line 1492 "parsing_utils.c"
    return mercury__parsing_utils__succeeded;
#line 1494 "parsing_utils.c"
  }
#line 1496 "parsing_utils.c"
}

#line 1499 "parsing_utils.c"
static void MR_CALL 
mercury__parsing_utils____Compare____parser_1_0_10001(
#line 1502 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 1504 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_2,
#line 1506 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3,
#line 1508 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_4)
#line 1510 "parsing_utils.c"
{
#line 1512 "parsing_utils.c"
  {
#line 1514 "parsing_utils.c"
    MR_Word mercury__parsing_utils__conv0_HeadVar__1_1;

#line 1517 "parsing_utils.c"
    {
#line 1519 "parsing_utils.c"
      mercury__parsing_utils____Compare____parser_1_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), &mercury__parsing_utils__conv0_HeadVar__1_1, ((MR_Word) mercury__parsing_utils__wrapper_arg_3), ((MR_Word) mercury__parsing_utils__wrapper_arg_4));
    }
#line 1522 "parsing_utils.c"
    *mercury__parsing_utils__wrapper_arg_2 = ((MR_Box) (mercury__parsing_utils__conv0_HeadVar__1_1));
#line 1524 "parsing_utils.c"
  }
#line 1526 "parsing_utils.c"
}

#line 1529 "parsing_utils.c"
static MR_bool MR_CALL 
mercury__parsing_utils____Unify____parser_with_state_2_0_10001(
#line 1532 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 1534 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2,
#line 1536 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3,
#line 1538 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_4)
#line 1540 "parsing_utils.c"
{
#line 1542 "parsing_utils.c"
  {
#line 1544 "parsing_utils.c"
    MR_bool mercury__parsing_utils__succeeded;

#line 1547 "parsing_utils.c"
    {
#line 1549 "parsing_utils.c"
      mercury__parsing_utils__succeeded = mercury__parsing_utils____Unify____parser_with_state_2_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), ((MR_Word) mercury__parsing_utils__wrapper_arg_2), ((MR_Word) mercury__parsing_utils__wrapper_arg_3), ((MR_Word) mercury__parsing_utils__wrapper_arg_4));
    }
#line 1552 "parsing_utils.c"
    return mercury__parsing_utils__succeeded;
#line 1554 "parsing_utils.c"
  }
#line 1556 "parsing_utils.c"
}

#line 1559 "parsing_utils.c"
static void MR_CALL 
mercury__parsing_utils____Compare____parser_with_state_2_0_10001(
#line 1562 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 1564 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2,
#line 1566 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_3,
#line 1568 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_4,
#line 1570 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_5)
#line 1572 "parsing_utils.c"
{
#line 1574 "parsing_utils.c"
  {
#line 1576 "parsing_utils.c"
    MR_Word mercury__parsing_utils__conv0_HeadVar__1_1;

#line 1579 "parsing_utils.c"
    {
#line 1581 "parsing_utils.c"
      mercury__parsing_utils____Compare____parser_with_state_2_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), ((MR_Word) mercury__parsing_utils__wrapper_arg_2), &mercury__parsing_utils__conv0_HeadVar__1_1, ((MR_Word) mercury__parsing_utils__wrapper_arg_4), ((MR_Word) mercury__parsing_utils__wrapper_arg_5));
    }
#line 1584 "parsing_utils.c"
    *mercury__parsing_utils__wrapper_arg_3 = ((MR_Box) (mercury__parsing_utils__conv0_HeadVar__1_1));
#line 1586 "parsing_utils.c"
  }
#line 1588 "parsing_utils.c"
}

#line 1591 "parsing_utils.c"
static MR_bool MR_CALL 
mercury__parsing_utils____Unify____ps_0_0_10001(
#line 1594 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 1596 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2)
#line 1598 "parsing_utils.c"
{
#line 1600 "parsing_utils.c"
  {
#line 1602 "parsing_utils.c"
    MR_bool mercury__parsing_utils__succeeded;

#line 1605 "parsing_utils.c"
    {
#line 1607 "parsing_utils.c"
      mercury__parsing_utils__succeeded = mercury__parsing_utils____Unify____ps_0_0(((MR_Integer) mercury__parsing_utils__wrapper_arg_1), ((MR_Integer) mercury__parsing_utils__wrapper_arg_2));
    }
#line 1610 "parsing_utils.c"
    return mercury__parsing_utils__succeeded;
#line 1612 "parsing_utils.c"
  }
#line 1614 "parsing_utils.c"
}

#line 1617 "parsing_utils.c"
static void MR_CALL 
mercury__parsing_utils____Compare____ps_0_0_10001(
#line 1620 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_1,
#line 1622 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2,
#line 1624 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3)
#line 1626 "parsing_utils.c"
{
#line 1628 "parsing_utils.c"
  {
#line 1630 "parsing_utils.c"
    MR_Word mercury__parsing_utils__conv0_HeadVar__1_1;

#line 1633 "parsing_utils.c"
    {
#line 1635 "parsing_utils.c"
      mercury__parsing_utils____Compare____ps_0_0(&mercury__parsing_utils__conv0_HeadVar__1_1, ((MR_Integer) mercury__parsing_utils__wrapper_arg_2), ((MR_Integer) mercury__parsing_utils__wrapper_arg_3));
    }
#line 1638 "parsing_utils.c"
    *mercury__parsing_utils__wrapper_arg_1 = ((MR_Box) (mercury__parsing_utils__conv0_HeadVar__1_1));
#line 1640 "parsing_utils.c"
  }
#line 1642 "parsing_utils.c"
}

#line 1645 "parsing_utils.c"
static MR_bool MR_CALL 
mercury__parsing_utils____Unify____skip_whitespace_pred_0_0_10001(
#line 1648 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 1650 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2)
#line 1652 "parsing_utils.c"
{
#line 1654 "parsing_utils.c"
  {
#line 1656 "parsing_utils.c"
    MR_bool mercury__parsing_utils__succeeded;

#line 1659 "parsing_utils.c"
    {
#line 1661 "parsing_utils.c"
      mercury__parsing_utils__succeeded = mercury__parsing_utils____Unify____skip_whitespace_pred_0_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), ((MR_Word) mercury__parsing_utils__wrapper_arg_2));
    }
#line 1664 "parsing_utils.c"
    return mercury__parsing_utils__succeeded;
#line 1666 "parsing_utils.c"
  }
#line 1668 "parsing_utils.c"
}

#line 1671 "parsing_utils.c"
static void MR_CALL 
mercury__parsing_utils____Compare____skip_whitespace_pred_0_0_10001(
#line 1674 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_1,
#line 1676 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2,
#line 1678 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3)
#line 1680 "parsing_utils.c"
{
#line 1682 "parsing_utils.c"
  {
#line 1684 "parsing_utils.c"
    MR_Word mercury__parsing_utils__conv0_HeadVar__1_1;

#line 1687 "parsing_utils.c"
    {
#line 1689 "parsing_utils.c"
      mercury__parsing_utils____Compare____skip_whitespace_pred_0_0(&mercury__parsing_utils__conv0_HeadVar__1_1, ((MR_Word) mercury__parsing_utils__wrapper_arg_2), ((MR_Word) mercury__parsing_utils__wrapper_arg_3));
    }
#line 1692 "parsing_utils.c"
    *mercury__parsing_utils__wrapper_arg_1 = ((MR_Box) (mercury__parsing_utils__conv0_HeadVar__1_1));
#line 1694 "parsing_utils.c"
  }
#line 1696 "parsing_utils.c"
}

#line 1699 "parsing_utils.c"
static MR_bool MR_CALL 
mercury__parsing_utils____Unify____src_0_0_10001(
#line 1702 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 1704 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2)
#line 1706 "parsing_utils.c"
{
#line 1708 "parsing_utils.c"
  {
#line 1710 "parsing_utils.c"
    MR_bool mercury__parsing_utils__succeeded;

#line 1713 "parsing_utils.c"
    {
#line 1715 "parsing_utils.c"
      mercury__parsing_utils__succeeded = mercury__parsing_utils____Unify____src_0_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), ((MR_Word) mercury__parsing_utils__wrapper_arg_2));
    }
#line 1718 "parsing_utils.c"
    return mercury__parsing_utils__succeeded;
#line 1720 "parsing_utils.c"
  }
#line 1722 "parsing_utils.c"
}

#line 1725 "parsing_utils.c"
static void MR_CALL 
mercury__parsing_utils____Compare____src_0_0_10001(
#line 1728 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_1,
#line 1730 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_2,
#line 1732 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3)
#line 1734 "parsing_utils.c"
{
#line 1736 "parsing_utils.c"
  {
#line 1738 "parsing_utils.c"
    MR_Word mercury__parsing_utils__conv0_HeadVar__1_1;

#line 1741 "parsing_utils.c"
    {
#line 1743 "parsing_utils.c"
      mercury__parsing_utils____Compare____src_0_0(&mercury__parsing_utils__conv0_HeadVar__1_1, ((MR_Word) mercury__parsing_utils__wrapper_arg_2), ((MR_Word) mercury__parsing_utils__wrapper_arg_3));
    }
#line 1746 "parsing_utils.c"
    *mercury__parsing_utils__wrapper_arg_1 = ((MR_Box) (mercury__parsing_utils__conv0_HeadVar__1_1));
#line 1748 "parsing_utils.c"
  }
#line 1750 "parsing_utils.c"
}

#line 685 "parsing_utils.m"
static MR_bool MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_p_0(
#line 685 "parsing_utils.m"
  MR_String mercury__parsing_utils__V_31_31,
#line 685 "parsing_utils.m"
  MR_Word mercury__parsing_utils__V_32_32,
#line 685 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_10,
#line 685 "parsing_utils.m"
  MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_0_15,
#line 685 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__STATE_VARIABLE_RevResult_16,
#line 685 "parsing_utils.m"
  MR_Box mercury__parsing_utils__STATE_VARIABLE_S_0_17,
#line 685 "parsing_utils.m"
  MR_Box * mercury__parsing_utils__STATE_VARIABLE_S_18,
#line 685 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_19,
#line 685 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_20)
#line 685 "parsing_utils.m"
{
#line 692 "parsing_utils.m"
  while (MR_TRUE)
#line 692 "parsing_utils.m"
    {
#line 692 "parsing_utils.m"
      /* tailcall optimized into a loop */
#line 692 "parsing_utils.m"
      {
#line 692 "parsing_utils.m"
        MR_bool mercury__parsing_utils__succeeded;
#line 692 "parsing_utils.m"
        MR_Box mercury__parsing_utils__X_14;
#line 692 "parsing_utils.m"
        MR_Box mercury__parsing_utils__STATE_VARIABLE_S_21_21;
#line 692 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_22_22;
#line 743 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_35_59;
#line 743 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_11_77;
#line 743 "parsing_utils.m"
        MR_Word mercury__parsing_utils__SkipWS_82;
#line 743 "parsing_utils.m"
        MR_Word mercury__parsing_utils__SkipWS0_86;
#line 428 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__V_87_87;
#line 428 "parsing_utils.m"
        MR_String mercury__parsing_utils__V_88_88;
#line 428 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_89_89;
#line 428 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_90_90;
#line 435 "parsing_utils.m"
        MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 435 "parsing_utils.m"
        MR_Box mercury__parsing_utils__conv2_V_83_83;
#line 435 "parsing_utils.m"
        MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_35_59;
#line 747 "parsing_utils.m"
        MR_bool MR_CALL (* mercury__parsing_utils__func_3)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 747 "parsing_utils.m"
        MR_Box mercury__parsing_utils__conv4_STATE_VARIABLE_PS_22_22;

#line 807 "parsing_utils.m"
        {
#line 807 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__match_string_4_p_0(mercury__parsing_utils__V_31_31, mercury__parsing_utils__Src_10, mercury__parsing_utils__STATE_VARIABLE_PS_0_19, &mercury__parsing_utils__STATE_VARIABLE_PS_11_77);
        }
#line 743 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 743 "parsing_utils.m"
          {
#line 428 "parsing_utils.m"
            mercury__parsing_utils__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_10, (MR_Integer) 0)));
#line 428 "parsing_utils.m"
            mercury__parsing_utils__V_88_88 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_10, (MR_Integer) 1)));
#line 428 "parsing_utils.m"
            mercury__parsing_utils__SkipWS0_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_10, (MR_Integer) 2)));
#line 428 "parsing_utils.m"
            mercury__parsing_utils__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_10, (MR_Integer) 3)));
#line 428 "parsing_utils.m"
            mercury__parsing_utils__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_10, (MR_Integer) 4)));
#line 443 "parsing_utils.m"
{
#define MR_PROC_LABEL mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_86 ;
		{
#line 443 "parsing_utils.m"

    SkipWS = SkipWS0;

#line 1851 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_82  = SkipWS;
#line 443 "parsing_utils.m"
}
#line 435 "parsing_utils.m"
            mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_82, (MR_Integer) 1)));
#line 435 "parsing_utils.m"
            {
#line 435 "parsing_utils.m"
              mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_82), ((MR_Box) (mercury__parsing_utils__Src_10)), &mercury__parsing_utils__conv2_V_83_83, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_11_77)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_35_59);
            }
#line 435 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 435 "parsing_utils.m"
              {
#line 435 "parsing_utils.m"
                mercury__parsing_utils__STATE_VARIABLE_PS_35_59 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_35_59);
#line 435 "parsing_utils.m"
                mercury__parsing_utils__succeeded = MR_TRUE;
#line 435 "parsing_utils.m"
              }
#line 743 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 743 "parsing_utils.m"
              {
#line 747 "parsing_utils.m"
                mercury__parsing_utils__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__V_32_32, (MR_Integer) 1)));
#line 747 "parsing_utils.m"
                {
#line 747 "parsing_utils.m"
                  mercury__parsing_utils__succeeded = mercury__parsing_utils__func_3(((MR_Box) mercury__parsing_utils__V_32_32), ((MR_Box) (mercury__parsing_utils__Src_10)), &mercury__parsing_utils__X_14, mercury__parsing_utils__STATE_VARIABLE_S_0_17, &mercury__parsing_utils__STATE_VARIABLE_S_21_21, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_35_59)), &mercury__parsing_utils__conv4_STATE_VARIABLE_PS_22_22);
                }
#line 747 "parsing_utils.m"
                if (mercury__parsing_utils__succeeded)
#line 747 "parsing_utils.m"
                  {
#line 747 "parsing_utils.m"
                    mercury__parsing_utils__STATE_VARIABLE_PS_22_22 = ((MR_Integer) mercury__parsing_utils__conv4_STATE_VARIABLE_PS_22_22);
#line 747 "parsing_utils.m"
                    mercury__parsing_utils__succeeded = MR_TRUE;
#line 747 "parsing_utils.m"
                  }
#line 743 "parsing_utils.m"
              }
#line 743 "parsing_utils.m"
          }
#line 692 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 690 "parsing_utils.m"
          {
#line 690 "parsing_utils.m"
            MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_23_23;

#line 43 "list.opt"
            {
#line 43 "list.opt"
              mercury__parsing_utils__STATE_VARIABLE_RevResult_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 43 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__parsing_utils__STATE_VARIABLE_RevResult_23_23, 0) = mercury__parsing_utils__X_14;
#line 43 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__parsing_utils__STATE_VARIABLE_RevResult_23_23, 1) = ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_RevResult_0_15));
#line 43 "list.opt"
            }
#line 691 "parsing_utils.m"
            /* direct tailcall eliminated */
#line 691 "parsing_utils.m"
            {
#line 691 "parsing_utils.m"
              MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_0__tmp_copy_15 = mercury__parsing_utils__STATE_VARIABLE_RevResult_23_23;
#line 691 "parsing_utils.m"
              MR_Box mercury__parsing_utils__STATE_VARIABLE_S_0__tmp_copy_17 = mercury__parsing_utils__STATE_VARIABLE_S_21_21;
#line 691 "parsing_utils.m"
              MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0__tmp_copy_19 = mercury__parsing_utils__STATE_VARIABLE_PS_22_22;

#line 691 "parsing_utils.m"
              mercury__parsing_utils__STATE_VARIABLE_PS_0_19 = mercury__parsing_utils__STATE_VARIABLE_PS_0__tmp_copy_19;
#line 691 "parsing_utils.m"
              mercury__parsing_utils__STATE_VARIABLE_S_0_17 = mercury__parsing_utils__STATE_VARIABLE_S_0__tmp_copy_17;
#line 691 "parsing_utils.m"
              mercury__parsing_utils__STATE_VARIABLE_RevResult_0_15 = mercury__parsing_utils__STATE_VARIABLE_RevResult_0__tmp_copy_15;
#line 691 "parsing_utils.m"
            }
#line 691 "parsing_utils.m"
            continue;
#line 690 "parsing_utils.m"
          }
#line 692 "parsing_utils.m"
        else
#line 693 "parsing_utils.m"
          {
#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 1955 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 693 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 693 "parsing_utils.m"
              {
#line 693 "parsing_utils.m"
                *mercury__parsing_utils__STATE_VARIABLE_PS_20 = mercury__parsing_utils__STATE_VARIABLE_PS_0_19;
#line 693 "parsing_utils.m"
                *mercury__parsing_utils__STATE_VARIABLE_S_18 = mercury__parsing_utils__STATE_VARIABLE_S_0_17;
#line 693 "parsing_utils.m"
                *mercury__parsing_utils__STATE_VARIABLE_RevResult_16 = mercury__parsing_utils__STATE_VARIABLE_RevResult_0_15;
#line 693 "parsing_utils.m"
                mercury__parsing_utils__succeeded = MR_TRUE;
#line 693 "parsing_utils.m"
              }
#line 693 "parsing_utils.m"
          }
#line 692 "parsing_utils.m"
        return mercury__parsing_utils__succeeded;
#line 692 "parsing_utils.m"
      }
#line 692 "parsing_utils.m"
      break;
#line 692 "parsing_utils.m"
    }
#line 685 "parsing_utils.m"
}

#line 668 "parsing_utils.m"
static MR_bool MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_6_p_0(
#line 668 "parsing_utils.m"
  MR_String mercury__parsing_utils__V_22_22,
#line 668 "parsing_utils.m"
  MR_Word mercury__parsing_utils__V_23_23,
#line 668 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_8,
#line 668 "parsing_utils.m"
  MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_0_12,
#line 668 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__STATE_VARIABLE_RevResult_13,
#line 668 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_14,
#line 668 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_15)
#line 668 "parsing_utils.m"
{
#line 675 "parsing_utils.m"
  while (MR_TRUE)
#line 675 "parsing_utils.m"
    {
#line 675 "parsing_utils.m"
      /* tailcall optimized into a loop */
#line 675 "parsing_utils.m"
      {
#line 675 "parsing_utils.m"
        MR_bool mercury__parsing_utils__succeeded;
#line 675 "parsing_utils.m"
        MR_Box mercury__parsing_utils__X_11;
#line 675 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_16_16;
#line 727 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_26_43;
#line 727 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_11_56;
#line 727 "parsing_utils.m"
        MR_Word mercury__parsing_utils__SkipWS_61;
#line 727 "parsing_utils.m"
        MR_Word mercury__parsing_utils__SkipWS0_65;
#line 428 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__V_66_66;
#line 428 "parsing_utils.m"
        MR_String mercury__parsing_utils__V_67_67;
#line 428 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_68_68;
#line 428 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_69_69;
#line 435 "parsing_utils.m"
        MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 435 "parsing_utils.m"
        MR_Box mercury__parsing_utils__conv2_V_62_62;
#line 435 "parsing_utils.m"
        MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_26_43;
#line 731 "parsing_utils.m"
        MR_bool MR_CALL (* mercury__parsing_utils__func_3)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 731 "parsing_utils.m"
        MR_Box mercury__parsing_utils__conv4_STATE_VARIABLE_PS_16_16;

#line 807 "parsing_utils.m"
        {
#line 807 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__match_string_4_p_0(mercury__parsing_utils__V_22_22, mercury__parsing_utils__Src_8, mercury__parsing_utils__STATE_VARIABLE_PS_0_14, &mercury__parsing_utils__STATE_VARIABLE_PS_11_56);
        }
#line 727 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 727 "parsing_utils.m"
          {
#line 428 "parsing_utils.m"
            mercury__parsing_utils__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_8, (MR_Integer) 0)));
#line 428 "parsing_utils.m"
            mercury__parsing_utils__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_8, (MR_Integer) 1)));
#line 428 "parsing_utils.m"
            mercury__parsing_utils__SkipWS0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_8, (MR_Integer) 2)));
#line 428 "parsing_utils.m"
            mercury__parsing_utils__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_8, (MR_Integer) 3)));
#line 428 "parsing_utils.m"
            mercury__parsing_utils__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_8, (MR_Integer) 4)));
#line 443 "parsing_utils.m"
{
#define MR_PROC_LABEL mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_6_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_65 ;
		{
#line 443 "parsing_utils.m"

    SkipWS = SkipWS0;

#line 2083 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_61  = SkipWS;
#line 443 "parsing_utils.m"
}
#line 435 "parsing_utils.m"
            mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_61, (MR_Integer) 1)));
#line 435 "parsing_utils.m"
            {
#line 435 "parsing_utils.m"
              mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_61), ((MR_Box) (mercury__parsing_utils__Src_8)), &mercury__parsing_utils__conv2_V_62_62, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_11_56)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_26_43);
            }
#line 435 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 435 "parsing_utils.m"
              {
#line 435 "parsing_utils.m"
                mercury__parsing_utils__STATE_VARIABLE_PS_26_43 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_26_43);
#line 435 "parsing_utils.m"
                mercury__parsing_utils__succeeded = MR_TRUE;
#line 435 "parsing_utils.m"
              }
#line 727 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 727 "parsing_utils.m"
              {
#line 731 "parsing_utils.m"
                mercury__parsing_utils__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__V_23_23, (MR_Integer) 1)));
#line 731 "parsing_utils.m"
                {
#line 731 "parsing_utils.m"
                  mercury__parsing_utils__succeeded = mercury__parsing_utils__func_3(((MR_Box) mercury__parsing_utils__V_23_23), ((MR_Box) (mercury__parsing_utils__Src_8)), &mercury__parsing_utils__X_11, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_26_43)), &mercury__parsing_utils__conv4_STATE_VARIABLE_PS_16_16);
                }
#line 731 "parsing_utils.m"
                if (mercury__parsing_utils__succeeded)
#line 731 "parsing_utils.m"
                  {
#line 731 "parsing_utils.m"
                    mercury__parsing_utils__STATE_VARIABLE_PS_16_16 = ((MR_Integer) mercury__parsing_utils__conv4_STATE_VARIABLE_PS_16_16);
#line 731 "parsing_utils.m"
                    mercury__parsing_utils__succeeded = MR_TRUE;
#line 731 "parsing_utils.m"
                  }
#line 727 "parsing_utils.m"
              }
#line 727 "parsing_utils.m"
          }
#line 675 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 673 "parsing_utils.m"
          {
#line 673 "parsing_utils.m"
            MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_17_17;

#line 43 "list.opt"
            {
#line 43 "list.opt"
              mercury__parsing_utils__STATE_VARIABLE_RevResult_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 43 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__parsing_utils__STATE_VARIABLE_RevResult_17_17, 0) = mercury__parsing_utils__X_11;
#line 43 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__parsing_utils__STATE_VARIABLE_RevResult_17_17, 1) = ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_RevResult_0_12));
#line 43 "list.opt"
            }
#line 674 "parsing_utils.m"
            /* direct tailcall eliminated */
#line 674 "parsing_utils.m"
            {
#line 674 "parsing_utils.m"
              MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_0__tmp_copy_12 = mercury__parsing_utils__STATE_VARIABLE_RevResult_17_17;
#line 674 "parsing_utils.m"
              MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0__tmp_copy_14 = mercury__parsing_utils__STATE_VARIABLE_PS_16_16;

#line 674 "parsing_utils.m"
              mercury__parsing_utils__STATE_VARIABLE_PS_0_14 = mercury__parsing_utils__STATE_VARIABLE_PS_0__tmp_copy_14;
#line 674 "parsing_utils.m"
              mercury__parsing_utils__STATE_VARIABLE_RevResult_0_12 = mercury__parsing_utils__STATE_VARIABLE_RevResult_0__tmp_copy_12;
#line 674 "parsing_utils.m"
            }
#line 674 "parsing_utils.m"
            continue;
#line 673 "parsing_utils.m"
          }
#line 675 "parsing_utils.m"
        else
#line 676 "parsing_utils.m"
          {
#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 2183 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 676 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 676 "parsing_utils.m"
              {
#line 676 "parsing_utils.m"
                *mercury__parsing_utils__STATE_VARIABLE_PS_15 = mercury__parsing_utils__STATE_VARIABLE_PS_0_14;
#line 676 "parsing_utils.m"
                *mercury__parsing_utils__STATE_VARIABLE_RevResult_13 = mercury__parsing_utils__STATE_VARIABLE_RevResult_0_12;
#line 676 "parsing_utils.m"
                mercury__parsing_utils__succeeded = MR_TRUE;
#line 676 "parsing_utils.m"
              }
#line 676 "parsing_utils.m"
          }
#line 675 "parsing_utils.m"
        return mercury__parsing_utils__succeeded;
#line 675 "parsing_utils.m"
      }
#line 675 "parsing_utils.m"
      break;
#line 675 "parsing_utils.m"
    }
#line 668 "parsing_utils.m"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__parsing_utils__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 286 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_105_108_95_119_105_116_104_95_109_101_115_115_97_103_101_95_95_91_54_93_95_48_6_p_0(
#line 286 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_13,
#line 286 "parsing_utils.m"
  MR_String mercury__parsing_utils__Msg_7,
#line 286 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__Offset_8,
#line 286 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_9,
#line 286 "parsing_utils.m"
  MR_Box * mercury__parsing_utils__Val_10,
#line 286 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__PS_12)
#line 286 "parsing_utils.m"
{
#line 784 "parsing_utils.m"
  {
#line 784 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;

#line 784 "parsing_utils.m"
    {
#line 784 "parsing_utils.m"
      return mercury__parsing_utils__succeeded = mercury__parsing_utils__fail_with_message_5_p_0(mercury__parsing_utils__TypeInfo_for_T_13, mercury__parsing_utils__Msg_7, mercury__parsing_utils__Src_9, mercury__parsing_utils__Val_10, mercury__parsing_utils__Offset_8, mercury__parsing_utils__PS_12);
    }
#line 784 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 784 "parsing_utils.m"
  }
#line 286 "parsing_utils.m"
}

#line 125 "parsing_utils.m"
void MR_CALL 
mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_117_114_114_101_110_116_95_111_102_102_115_101_116_95_95_91_49_93_95_48_4_p_0(
#line 125 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__Offset_6,
#line 125 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_8,
#line 125 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_9)
#line 125 "parsing_utils.m"
{
#line 542 "parsing_utils.m"
  {
#line 542 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;

#line 543 "parsing_utils.m"
    *mercury__parsing_utils__Offset_6 = mercury__parsing_utils__STATE_VARIABLE_PS_0_8;
#line 543 "parsing_utils.m"
    *mercury__parsing_utils__STATE_VARIABLE_PS_9 = mercury__parsing_utils__STATE_VARIABLE_PS_0_8;
#line 542 "parsing_utils.m"
  }
#line 125 "parsing_utils.m"
}

#line 349 "parsing_utils.m"
void MR_CALL 
mercury__parsing_utils____Compare____src_0_0(
#line 349 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__HeadVar__1_1,
#line 349 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__2_2,
#line 349 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__3_3)
#line 349 "parsing_utils.m"
{
#line 349 "parsing_utils.m"
  {
#line 349 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 349 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__CastX_18 = (MR_Integer) mercury__parsing_utils__HeadVar__2_2;
#line 349 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__CastY_19 = (MR_Integer) mercury__parsing_utils__HeadVar__3_3;

#line 349 "parsing_utils.m"
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__CastX_18 == mercury__parsing_utils__CastY_19);
#line 349 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 2317 "parsing_utils.c"
      *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 0;
#line 349 "parsing_utils.m"
    else
#line 349 "parsing_utils.m"
      {
#line 349 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 349 "parsing_utils.m"
        MR_String mercury__parsing_utils__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 1)));
#line 349 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 2)));
#line 349 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 3)));
#line 349 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 4)));
#line 349 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 0)));
#line 349 "parsing_utils.m"
        MR_String mercury__parsing_utils__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 1)));
#line 349 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 2)));
#line 349 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 3)));
#line 349 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 4)));
#line 349 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_14_14;

#line 66 "private_builtin.opt"
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_4_4 < mercury__parsing_utils__V_9_9);
#line 69 "private_builtin.opt"
        if (mercury__parsing_utils__succeeded)
#line 68 "private_builtin.opt"
          mercury__parsing_utils__V_14_14 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_4_4 == mercury__parsing_utils__V_9_9);
#line 74 "private_builtin.opt"
            if (mercury__parsing_utils__succeeded)
#line 73 "private_builtin.opt"
              mercury__parsing_utils__V_14_14 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__parsing_utils__V_14_14 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 2368 "parsing_utils.c"
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_14_14 == (MR_Integer) 0);
#line 349 "parsing_utils.m"
        mercury__parsing_utils__succeeded = !(mercury__parsing_utils__succeeded);
#line 349 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 349 "parsing_utils.m"
          *mercury__parsing_utils__HeadVar__1_1 = mercury__parsing_utils__V_14_14;
#line 349 "parsing_utils.m"
        else
#line 349 "parsing_utils.m"
          {
#line 349 "parsing_utils.m"
            MR_Word mercury__parsing_utils__V_15_15;
#line 349 "parsing_utils.m"
            MR_Integer mercury__parsing_utils__Res_7_31;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils____Compare____src_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__parsing_utils__V_5_5 ;
	S2 =  mercury__parsing_utils__V_10_10 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 2400 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__Res_7_31  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
            mercury__parsing_utils__succeeded = (mercury__parsing_utils__Res_7_31 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
            if (mercury__parsing_utils__succeeded)
#line 104 "private_builtin.opt"
              mercury__parsing_utils__V_15_15 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
            else
#line 110 "private_builtin.opt"
              {
#line 107 "private_builtin.opt"
                mercury__parsing_utils__succeeded = (mercury__parsing_utils__Res_7_31 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                if (mercury__parsing_utils__succeeded)
#line 109 "private_builtin.opt"
                  mercury__parsing_utils__V_15_15 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                else
#line 111 "private_builtin.opt"
                  mercury__parsing_utils__V_15_15 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
              }
#line 2429 "parsing_utils.c"
            mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_15_15 == (MR_Integer) 0);
#line 349 "parsing_utils.m"
            mercury__parsing_utils__succeeded = !(mercury__parsing_utils__succeeded);
#line 349 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 349 "parsing_utils.m"
              *mercury__parsing_utils__HeadVar__1_1 = mercury__parsing_utils__V_15_15;
#line 349 "parsing_utils.m"
            else
#line 349 "parsing_utils.m"
              {
#line 349 "parsing_utils.m"
                MR_Word mercury__parsing_utils__V_16_16;
#line 349 "parsing_utils.m"
                MR_Word mercury__parsing_utils__TypeInfo_22_22 = (MR_Word) &mercury__parsing_utils_scalar_common_2[0];

#line 349 "parsing_utils.m"
                {
#line 349 "parsing_utils.m"
                  mercury__builtin__compare_3_p_0(mercury__parsing_utils__TypeInfo_22_22, &mercury__parsing_utils__V_16_16, ((MR_Box) (mercury__parsing_utils__V_6_6)), ((MR_Box) (mercury__parsing_utils__V_11_11)));
                }
#line 2451 "parsing_utils.c"
                mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_16_16 == (MR_Integer) 0);
#line 349 "parsing_utils.m"
                mercury__parsing_utils__succeeded = !(mercury__parsing_utils__succeeded);
#line 349 "parsing_utils.m"
                if (mercury__parsing_utils__succeeded)
#line 349 "parsing_utils.m"
                  *mercury__parsing_utils__HeadVar__1_1 = mercury__parsing_utils__V_16_16;
#line 349 "parsing_utils.m"
                else
#line 349 "parsing_utils.m"
                  {
#line 349 "parsing_utils.m"
                    MR_Word mercury__parsing_utils__V_17_17;
#line 349 "parsing_utils.m"
                    MR_Word mercury__parsing_utils__TypeInfo_23_23 = (MR_Word) &mercury__parsing_utils_scalar_common_1[2];

#line 349 "parsing_utils.m"
                    {
#line 349 "parsing_utils.m"
                      mercury__builtin__compare_3_p_0(mercury__parsing_utils__TypeInfo_23_23, &mercury__parsing_utils__V_17_17, ((MR_Box) (mercury__parsing_utils__V_7_7)), ((MR_Box) (mercury__parsing_utils__V_12_12)));
                    }
#line 2473 "parsing_utils.c"
                    mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_17_17 == (MR_Integer) 0);
#line 349 "parsing_utils.m"
                    mercury__parsing_utils__succeeded = !(mercury__parsing_utils__succeeded);
#line 349 "parsing_utils.m"
                    if (mercury__parsing_utils__succeeded)
#line 349 "parsing_utils.m"
                      *mercury__parsing_utils__HeadVar__1_1 = mercury__parsing_utils__V_17_17;
#line 349 "parsing_utils.m"
                    else
#line 349 "parsing_utils.m"
                      {
#line 349 "parsing_utils.m"
                        MR_Word mercury__parsing_utils__TypeInfo_24_24 = (MR_Word) &mercury__parsing_utils_scalar_common_1[3];

#line 349 "parsing_utils.m"
                        {
#line 349 "parsing_utils.m"
                          mercury__builtin__compare_3_p_0(mercury__parsing_utils__TypeInfo_24_24, mercury__parsing_utils__HeadVar__1_1, ((MR_Box) (mercury__parsing_utils__V_8_8)), ((MR_Box) (mercury__parsing_utils__V_13_13)));
#line 349 "parsing_utils.m"
                          return;
                        }
#line 349 "parsing_utils.m"
                      }
#line 349 "parsing_utils.m"
                  }
#line 349 "parsing_utils.m"
              }
#line 349 "parsing_utils.m"
          }
#line 349 "parsing_utils.m"
      }
#line 349 "parsing_utils.m"
  }
#line 349 "parsing_utils.m"
}

#line 349 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils____Unify____src_0_0(
#line 349 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__1_1,
#line 349 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__2_2)
#line 349 "parsing_utils.m"
{
#line 349 "parsing_utils.m"
  {
#line 349 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 349 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__CastX_13 = (MR_Integer) mercury__parsing_utils__HeadVar__1_1;
#line 349 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__CastY_14 = (MR_Integer) mercury__parsing_utils__HeadVar__2_2;

#line 349 "parsing_utils.m"
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__CastX_13 == mercury__parsing_utils__CastY_14);
#line 349 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 349 "parsing_utils.m"
      mercury__parsing_utils__succeeded = MR_TRUE;
#line 349 "parsing_utils.m"
    else
#line 349 "parsing_utils.m"
      {
#line 349 "parsing_utils.m"
        MR_Word mercury__parsing_utils__TypeInfo_15_15;
#line 349 "parsing_utils.m"
        MR_Word mercury__parsing_utils__TypeInfo_16_16;
#line 349 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 0)));
#line 349 "parsing_utils.m"
        MR_String mercury__parsing_utils__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 1)));
#line 349 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 2)));
#line 349 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 3)));
#line 349 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 4)));
#line 349 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 349 "parsing_utils.m"
        MR_String mercury__parsing_utils__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 1)));
#line 349 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 2)));
#line 349 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 3)));
#line 349 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 4)));

#line 2563 "parsing_utils.c"
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_3_3 == mercury__parsing_utils__V_8_8);
#line 349 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 349 "parsing_utils.m"
          {
#line 2569 "parsing_utils.c"
            mercury__parsing_utils__succeeded = (strcmp(mercury__parsing_utils__V_4_4, mercury__parsing_utils__V_9_9) == 0);
#line 349 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 349 "parsing_utils.m"
              {
#line 2575 "parsing_utils.c"
                {
#line 2577 "parsing_utils.c"
                  mercury__parsing_utils__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__parsing_utils__V_5_5, (MR_Word) mercury__parsing_utils__V_10_10);
                }
#line 349 "parsing_utils.m"
                if (mercury__parsing_utils__succeeded)
#line 349 "parsing_utils.m"
                  {
#line 2584 "parsing_utils.c"
                    mercury__parsing_utils__TypeInfo_15_15 = (MR_Word) &mercury__parsing_utils_scalar_common_1[2];
#line 2586 "parsing_utils.c"
                    {
#line 2588 "parsing_utils.c"
                      mercury__parsing_utils__succeeded = mercury__builtin__unify_2_p_0(mercury__parsing_utils__TypeInfo_15_15, ((MR_Box) (mercury__parsing_utils__V_6_6)), ((MR_Box) (mercury__parsing_utils__V_11_11)));
                    }
#line 349 "parsing_utils.m"
                    if (mercury__parsing_utils__succeeded)
#line 349 "parsing_utils.m"
                      {
#line 2595 "parsing_utils.c"
                        mercury__parsing_utils__TypeInfo_16_16 = (MR_Word) &mercury__parsing_utils_scalar_common_1[3];
#line 2597 "parsing_utils.c"
                        {
#line 2599 "parsing_utils.c"
                          return mercury__parsing_utils__succeeded = mercury__builtin__unify_2_p_0(mercury__parsing_utils__TypeInfo_16_16, ((MR_Box) (mercury__parsing_utils__V_7_7)), ((MR_Box) (mercury__parsing_utils__V_12_12)));
                        }
#line 349 "parsing_utils.m"
                      }
#line 349 "parsing_utils.m"
                  }
#line 349 "parsing_utils.m"
              }
#line 349 "parsing_utils.m"
          }
#line 349 "parsing_utils.m"
      }
#line 349 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 349 "parsing_utils.m"
  }
#line 349 "parsing_utils.m"
}

#line 72 "parsing_utils.m"
void MR_CALL 
mercury__parsing_utils____Compare____skip_whitespace_pred_0_0(
#line 72 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__HeadVar__1_1,
#line 72 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__2_2,
#line 72 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__3_3)
#line 72 "parsing_utils.m"
{
#line 72 "parsing_utils.m"
  {
#line 72 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 72 "parsing_utils.m"
    MR_Word mercury__parsing_utils__TypeInfo_6_6 = (MR_Word) &mercury__parsing_utils_scalar_common_2[0];
#line 72 "parsing_utils.m"
    MR_Word mercury__parsing_utils__Cast_HeadVar1_4 = mercury__parsing_utils__HeadVar__2_2;
#line 72 "parsing_utils.m"
    MR_Word mercury__parsing_utils__Cast_HeadVar2_5 = mercury__parsing_utils__HeadVar__3_3;

#line 72 "parsing_utils.m"
    {
#line 72 "parsing_utils.m"
      mercury__builtin__compare_3_p_0(mercury__parsing_utils__TypeInfo_6_6, mercury__parsing_utils__HeadVar__1_1, ((MR_Box) (mercury__parsing_utils__Cast_HeadVar1_4)), ((MR_Box) (mercury__parsing_utils__Cast_HeadVar2_5)));
#line 72 "parsing_utils.m"
      return;
    }
#line 72 "parsing_utils.m"
  }
#line 72 "parsing_utils.m"
}

#line 72 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils____Unify____skip_whitespace_pred_0_0(
#line 72 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__1_1,
#line 72 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__2_2)
#line 72 "parsing_utils.m"
{
#line 72 "parsing_utils.m"
  {
#line 72 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 72 "parsing_utils.m"
    MR_Word mercury__parsing_utils__Cast_HeadVar1_3 = mercury__parsing_utils__HeadVar__1_1;
#line 72 "parsing_utils.m"
    MR_Word mercury__parsing_utils__Cast_HeadVar2_4 = mercury__parsing_utils__HeadVar__2_2;

#line 72 "parsing_utils.m"
    {
#line 72 "parsing_utils.m"
      return mercury__parsing_utils__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__parsing_utils__Cast_HeadVar1_3, (MR_Word) mercury__parsing_utils__Cast_HeadVar2_4);
    }
#line 72 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 72 "parsing_utils.m"
  }
#line 72 "parsing_utils.m"
}

#line 347 "parsing_utils.m"
void MR_CALL 
mercury__parsing_utils____Compare____ps_0_0(
#line 347 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__HeadVar__1_1,
#line 347 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__HeadVar__2_2,
#line 347 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__HeadVar__3_3)
#line 347 "parsing_utils.m"
{
#line 347 "parsing_utils.m"
  {
#line 347 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 347 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__Cast_HeadVar1_4 = mercury__parsing_utils__HeadVar__2_2;
#line 347 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__Cast_HeadVar2_5 = mercury__parsing_utils__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__Cast_HeadVar1_4 < mercury__parsing_utils__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__parsing_utils__succeeded)
#line 68 "private_builtin.opt"
      *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__Cast_HeadVar1_4 == mercury__parsing_utils__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__parsing_utils__succeeded)
#line 73 "private_builtin.opt"
          *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 347 "parsing_utils.m"
  }
#line 347 "parsing_utils.m"
}

#line 347 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils____Unify____ps_0_0(
#line 347 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__HeadVar__1_1,
#line 347 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__HeadVar__2_2)
#line 347 "parsing_utils.m"
{
#line 347 "parsing_utils.m"
  {
#line 347 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 347 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__Cast_HeadVar1_3 = mercury__parsing_utils__HeadVar__1_1;
#line 347 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__Cast_HeadVar2_4 = mercury__parsing_utils__HeadVar__2_2;

#line 347 "parsing_utils.m"
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__Cast_HeadVar1_3 == mercury__parsing_utils__Cast_HeadVar2_4);
#line 347 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 347 "parsing_utils.m"
  }
#line 347 "parsing_utils.m"
}

#line 66 "parsing_utils.m"
void MR_CALL 
mercury__parsing_utils____Compare____parser_with_state_2_0(
#line 66 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_6,
#line 66 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_S_7,
#line 66 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__HeadVar__1_1,
#line 66 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__2_2,
#line 66 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__3_3)
#line 66 "parsing_utils.m"
{
#line 66 "parsing_utils.m"
  {
#line 66 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 66 "parsing_utils.m"
    MR_Word mercury__parsing_utils__Cast_HeadVar1_4 = mercury__parsing_utils__HeadVar__2_2;
#line 66 "parsing_utils.m"
    MR_Word mercury__parsing_utils__Cast_HeadVar2_5 = mercury__parsing_utils__HeadVar__3_3;

#line 66 "parsing_utils.m"
    {
#line 66 "parsing_utils.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__parsing_utils__HeadVar__1_1, (MR_Word) mercury__parsing_utils__Cast_HeadVar1_4, (MR_Word) mercury__parsing_utils__Cast_HeadVar2_5);
#line 66 "parsing_utils.m"
      return;
    }
#line 66 "parsing_utils.m"
  }
#line 66 "parsing_utils.m"
}

#line 66 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils____Unify____parser_with_state_2_0(
#line 66 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_5,
#line 66 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_S_6,
#line 66 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__1_1,
#line 66 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__2_2)
#line 66 "parsing_utils.m"
{
#line 66 "parsing_utils.m"
  {
#line 66 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 66 "parsing_utils.m"
    MR_Word mercury__parsing_utils__Cast_HeadVar1_3 = mercury__parsing_utils__HeadVar__1_1;
#line 66 "parsing_utils.m"
    MR_Word mercury__parsing_utils__Cast_HeadVar2_4 = mercury__parsing_utils__HeadVar__2_2;

#line 66 "parsing_utils.m"
    {
#line 66 "parsing_utils.m"
      return mercury__parsing_utils__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__parsing_utils__Cast_HeadVar1_3, (MR_Word) mercury__parsing_utils__Cast_HeadVar2_4);
    }
#line 66 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 66 "parsing_utils.m"
  }
#line 66 "parsing_utils.m"
}

#line 61 "parsing_utils.m"
void MR_CALL 
mercury__parsing_utils____Compare____parser_1_0(
#line 61 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_6,
#line 61 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__HeadVar__1_1,
#line 61 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__2_2,
#line 61 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__3_3)
#line 61 "parsing_utils.m"
{
#line 61 "parsing_utils.m"
  {
#line 61 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 61 "parsing_utils.m"
    MR_Word mercury__parsing_utils__Cast_HeadVar1_4 = mercury__parsing_utils__HeadVar__2_2;
#line 61 "parsing_utils.m"
    MR_Word mercury__parsing_utils__Cast_HeadVar2_5 = mercury__parsing_utils__HeadVar__3_3;

#line 61 "parsing_utils.m"
    {
#line 61 "parsing_utils.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__parsing_utils__HeadVar__1_1, (MR_Word) mercury__parsing_utils__Cast_HeadVar1_4, (MR_Word) mercury__parsing_utils__Cast_HeadVar2_5);
#line 61 "parsing_utils.m"
      return;
    }
#line 61 "parsing_utils.m"
  }
#line 61 "parsing_utils.m"
}

#line 61 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils____Unify____parser_1_0(
#line 61 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_5,
#line 61 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__1_1,
#line 61 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__2_2)
#line 61 "parsing_utils.m"
{
#line 61 "parsing_utils.m"
  {
#line 61 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 61 "parsing_utils.m"
    MR_Word mercury__parsing_utils__Cast_HeadVar1_3 = mercury__parsing_utils__HeadVar__1_1;
#line 61 "parsing_utils.m"
    MR_Word mercury__parsing_utils__Cast_HeadVar2_4 = mercury__parsing_utils__HeadVar__2_2;

#line 61 "parsing_utils.m"
    {
#line 61 "parsing_utils.m"
      return mercury__parsing_utils__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__parsing_utils__Cast_HeadVar1_3, (MR_Word) mercury__parsing_utils__Cast_HeadVar2_4);
    }
#line 61 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 61 "parsing_utils.m"
  }
#line 61 "parsing_utils.m"
}

#line 74 "parsing_utils.m"
void MR_CALL 
mercury__parsing_utils____Compare____parse_result_1_0(
#line 74 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_24,
#line 74 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__HeadVar__1_1,
#line 74 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__2_2,
#line 74 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__3_3)
#line 74 "parsing_utils.m"
{
#line 74 "parsing_utils.m"
  {
#line 74 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 74 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__CastX_22 = (MR_Integer) mercury__parsing_utils__HeadVar__2_2;
#line 74 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__CastY_23 = (MR_Integer) mercury__parsing_utils__HeadVar__3_3;

#line 74 "parsing_utils.m"
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__CastX_22 == mercury__parsing_utils__CastY_23);
#line 74 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 2919 "parsing_utils.c"
      *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "parsing_utils.m"
    else
#line 74 "parsing_utils.m"
      if (((MR_tag((MR_Word) mercury__parsing_utils__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 74 "parsing_utils.m"
        {
#line 74 "parsing_utils.m"
          MR_Integer mercury__parsing_utils__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 2)));
#line 74 "parsing_utils.m"
          MR_Integer mercury__parsing_utils__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 1)));
#line 74 "parsing_utils.m"
          MR_Word mercury__parsing_utils__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 0)));

#line 74 "parsing_utils.m"
          if (((MR_tag((MR_Word) mercury__parsing_utils__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 74 "parsing_utils.m"
            {
#line 74 "parsing_utils.m"
              MR_Word mercury__parsing_utils__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 0)));
#line 74 "parsing_utils.m"
              MR_Integer mercury__parsing_utils__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 1)));
#line 74 "parsing_utils.m"
              MR_Integer mercury__parsing_utils__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 2)));
#line 74 "parsing_utils.m"
              MR_Word mercury__parsing_utils__V_20_20;
#line 74 "parsing_utils.m"
              MR_Word mercury__parsing_utils__TypeInfo_25_25 = (MR_Word) &mercury__parsing_utils_scalar_common_1[0];

#line 74 "parsing_utils.m"
              {
#line 74 "parsing_utils.m"
                mercury__builtin__compare_3_p_0(mercury__parsing_utils__TypeInfo_25_25, &mercury__parsing_utils__V_20_20, ((MR_Box) (mercury__parsing_utils__V_30_30)), ((MR_Box) (mercury__parsing_utils__V_17_17)));
              }
#line 2954 "parsing_utils.c"
              mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_20_20 == (MR_Integer) 0);
#line 74 "parsing_utils.m"
              mercury__parsing_utils__succeeded = !(mercury__parsing_utils__succeeded);
#line 74 "parsing_utils.m"
              if (mercury__parsing_utils__succeeded)
#line 74 "parsing_utils.m"
                *mercury__parsing_utils__HeadVar__1_1 = mercury__parsing_utils__V_20_20;
#line 74 "parsing_utils.m"
              else
#line 74 "parsing_utils.m"
                {
#line 74 "parsing_utils.m"
                  MR_Word mercury__parsing_utils__V_21_21;

#line 66 "private_builtin.opt"
                  mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_29_29 < mercury__parsing_utils__V_18_18);
#line 69 "private_builtin.opt"
                  if (mercury__parsing_utils__succeeded)
#line 68 "private_builtin.opt"
                    mercury__parsing_utils__V_21_21 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                  else
#line 74 "private_builtin.opt"
                    {
#line 71 "private_builtin.opt"
                      mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_29_29 == mercury__parsing_utils__V_18_18);
#line 74 "private_builtin.opt"
                      if (mercury__parsing_utils__succeeded)
#line 73 "private_builtin.opt"
                        mercury__parsing_utils__V_21_21 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                      else
#line 75 "private_builtin.opt"
                        mercury__parsing_utils__V_21_21 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                    }
#line 2991 "parsing_utils.c"
                  mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_21_21 == (MR_Integer) 0);
#line 74 "parsing_utils.m"
                  mercury__parsing_utils__succeeded = !(mercury__parsing_utils__succeeded);
#line 74 "parsing_utils.m"
                  if (mercury__parsing_utils__succeeded)
#line 74 "parsing_utils.m"
                    *mercury__parsing_utils__HeadVar__1_1 = mercury__parsing_utils__V_21_21;
#line 74 "parsing_utils.m"
                  else
#line 69 "private_builtin.opt"
                    {
#line 66 "private_builtin.opt"
                      mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_28_28 < mercury__parsing_utils__V_19_19);
#line 69 "private_builtin.opt"
                      if (mercury__parsing_utils__succeeded)
#line 68 "private_builtin.opt"
                        *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                      else
#line 74 "private_builtin.opt"
                        {
#line 71 "private_builtin.opt"
                          mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_28_28 == mercury__parsing_utils__V_19_19);
#line 74 "private_builtin.opt"
                          if (mercury__parsing_utils__succeeded)
#line 73 "private_builtin.opt"
                            *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                          else
#line 75 "private_builtin.opt"
                            *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                        }
#line 69 "private_builtin.opt"
                    }
#line 74 "parsing_utils.m"
                }
#line 74 "parsing_utils.m"
            }
#line 74 "parsing_utils.m"
          else
#line 3033 "parsing_utils.c"
            *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "parsing_utils.m"
        }
#line 74 "parsing_utils.m"
      else
#line 74 "parsing_utils.m"
        {
#line 74 "parsing_utils.m"
          MR_Box mercury__parsing_utils__V_31_31 = (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 0));

#line 74 "parsing_utils.m"
          if (((MR_tag((MR_Word) mercury__parsing_utils__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3046 "parsing_utils.c"
            *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "parsing_utils.m"
          else
#line 74 "parsing_utils.m"
            {
#line 74 "parsing_utils.m"
              MR_Box mercury__parsing_utils__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 0));

#line 74 "parsing_utils.m"
              {
#line 74 "parsing_utils.m"
                mercury__builtin__compare_3_p_0(mercury__parsing_utils__TypeInfo_for_T_24, mercury__parsing_utils__HeadVar__1_1, mercury__parsing_utils__V_31_31, mercury__parsing_utils__V_5_5);
#line 74 "parsing_utils.m"
                return;
              }
#line 74 "parsing_utils.m"
            }
#line 74 "parsing_utils.m"
        }
#line 74 "parsing_utils.m"
  }
#line 74 "parsing_utils.m"
}

#line 74 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils____Unify____parse_result_1_0(
#line 74 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_13,
#line 74 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__1_1,
#line 74 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__2_2)
#line 74 "parsing_utils.m"
{
#line 74 "parsing_utils.m"
  {
#line 74 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 74 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__CastX_11 = (MR_Integer) mercury__parsing_utils__HeadVar__1_1;
#line 74 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__CastY_12 = (MR_Integer) mercury__parsing_utils__HeadVar__2_2;

#line 74 "parsing_utils.m"
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__CastX_11 == mercury__parsing_utils__CastY_12);
#line 74 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 74 "parsing_utils.m"
      mercury__parsing_utils__succeeded = MR_TRUE;
#line 74 "parsing_utils.m"
    else
#line 74 "parsing_utils.m"
      if (((MR_tag((MR_Word) mercury__parsing_utils__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 74 "parsing_utils.m"
        {
#line 74 "parsing_utils.m"
          MR_Word mercury__parsing_utils__TypeInfo_14_14;
#line 74 "parsing_utils.m"
          MR_Word mercury__parsing_utils__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 0)));
#line 74 "parsing_utils.m"
          MR_Integer mercury__parsing_utils__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 1)));
#line 74 "parsing_utils.m"
          MR_Integer mercury__parsing_utils__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 2)));
#line 74 "parsing_utils.m"
          MR_Word mercury__parsing_utils__V_8_8;
#line 74 "parsing_utils.m"
          MR_Integer mercury__parsing_utils__V_9_9;
#line 74 "parsing_utils.m"
          MR_Integer mercury__parsing_utils__V_10_10;

#line 74 "parsing_utils.m"
          mercury__parsing_utils__succeeded = ((MR_tag((MR_Word) mercury__parsing_utils__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 74 "parsing_utils.m"
          if (mercury__parsing_utils__succeeded)
#line 74 "parsing_utils.m"
            {
#line 74 "parsing_utils.m"
              mercury__parsing_utils__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 74 "parsing_utils.m"
              mercury__parsing_utils__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 1)));
#line 74 "parsing_utils.m"
              mercury__parsing_utils__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 2)));
#line 3130 "parsing_utils.c"
              mercury__parsing_utils__TypeInfo_14_14 = (MR_Word) &mercury__parsing_utils_scalar_common_1[0];
#line 3132 "parsing_utils.c"
              {
#line 3134 "parsing_utils.c"
                mercury__parsing_utils__succeeded = mercury__builtin__unify_2_p_0(mercury__parsing_utils__TypeInfo_14_14, ((MR_Box) (mercury__parsing_utils__V_5_5)), ((MR_Box) (mercury__parsing_utils__V_8_8)));
              }
#line 74 "parsing_utils.m"
              if (mercury__parsing_utils__succeeded)
#line 74 "parsing_utils.m"
                {
#line 3141 "parsing_utils.c"
                  mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_6_6 == mercury__parsing_utils__V_9_9);
#line 74 "parsing_utils.m"
                  if (mercury__parsing_utils__succeeded)
#line 3145 "parsing_utils.c"
                    mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_7_7 == mercury__parsing_utils__V_10_10);
#line 74 "parsing_utils.m"
                }
#line 74 "parsing_utils.m"
            }
#line 74 "parsing_utils.m"
        }
#line 74 "parsing_utils.m"
      else
#line 74 "parsing_utils.m"
        {
#line 74 "parsing_utils.m"
          MR_Box mercury__parsing_utils__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 0));
#line 74 "parsing_utils.m"
          MR_Box mercury__parsing_utils__V_4_4;

#line 74 "parsing_utils.m"
          mercury__parsing_utils__succeeded = ((MR_tag((MR_Word) mercury__parsing_utils__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 74 "parsing_utils.m"
          if (mercury__parsing_utils__succeeded)
#line 74 "parsing_utils.m"
            {
#line 74 "parsing_utils.m"
              mercury__parsing_utils__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 0));
#line 3170 "parsing_utils.c"
              {
#line 3172 "parsing_utils.c"
                return mercury__parsing_utils__succeeded = mercury__builtin__unify_2_p_0(mercury__parsing_utils__TypeInfo_for_T_13, mercury__parsing_utils__V_3_3, mercury__parsing_utils__V_4_4);
              }
#line 74 "parsing_utils.m"
            }
#line 74 "parsing_utils.m"
        }
#line 74 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 74 "parsing_utils.m"
  }
#line 74 "parsing_utils.m"
}

#line 477 "parsing_utils.m"
void MR_CALL 
mercury__parsing_utils____Compare____line_numbers_0_0(
#line 477 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__HeadVar__1_1,
#line 477 "parsing_utils.m"
  MR_ArrayPtr mercury__parsing_utils__HeadVar__2_2,
#line 477 "parsing_utils.m"
  MR_ArrayPtr mercury__parsing_utils__HeadVar__3_3)
#line 477 "parsing_utils.m"
{
#line 477 "parsing_utils.m"
  {
#line 477 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 477 "parsing_utils.m"
    MR_Word mercury__parsing_utils__TypeInfo_6_6 = (MR_Word) &mercury__parsing_utils_scalar_common_1[1];
#line 477 "parsing_utils.m"
    MR_ArrayPtr mercury__parsing_utils__Cast_HeadVar1_4 = mercury__parsing_utils__HeadVar__2_2;
#line 477 "parsing_utils.m"
    MR_ArrayPtr mercury__parsing_utils__Cast_HeadVar2_5 = mercury__parsing_utils__HeadVar__3_3;

#line 477 "parsing_utils.m"
    {
#line 477 "parsing_utils.m"
      mercury__builtin__compare_3_p_0(mercury__parsing_utils__TypeInfo_6_6, mercury__parsing_utils__HeadVar__1_1, ((MR_Box) (mercury__parsing_utils__Cast_HeadVar1_4)), ((MR_Box) (mercury__parsing_utils__Cast_HeadVar2_5)));
#line 477 "parsing_utils.m"
      return;
    }
#line 477 "parsing_utils.m"
  }
#line 477 "parsing_utils.m"
}

#line 477 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils____Unify____line_numbers_0_0(
#line 477 "parsing_utils.m"
  MR_ArrayPtr mercury__parsing_utils__HeadVar__1_1,
#line 477 "parsing_utils.m"
  MR_ArrayPtr mercury__parsing_utils__HeadVar__2_2)
#line 477 "parsing_utils.m"
{
#line 477 "parsing_utils.m"
  {
#line 477 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 477 "parsing_utils.m"
    MR_Word mercury__parsing_utils__TypeCtorInfo_5_5 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 477 "parsing_utils.m"
    MR_ArrayPtr mercury__parsing_utils__Cast_HeadVar1_3 = mercury__parsing_utils__HeadVar__1_1;
#line 477 "parsing_utils.m"
    MR_ArrayPtr mercury__parsing_utils__Cast_HeadVar2_4 = mercury__parsing_utils__HeadVar__2_2;

#line 477 "parsing_utils.m"
    {
#line 477 "parsing_utils.m"
      return mercury__parsing_utils__succeeded = mercury__array____Unify____array_1_0(mercury__parsing_utils__TypeCtorInfo_5_5, (MR_ArrayPtr) mercury__parsing_utils__Cast_HeadVar1_3, (MR_ArrayPtr) mercury__parsing_utils__Cast_HeadVar2_4);
    }
#line 477 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 477 "parsing_utils.m"
  }
#line 477 "parsing_utils.m"
}

#line 364 "parsing_utils.m"
void MR_CALL 
mercury__parsing_utils____Compare____fail_message_info_0_0(
#line 364 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__HeadVar__1_1,
#line 364 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__2_2,
#line 364 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__3_3)
#line 364 "parsing_utils.m"
{
#line 364 "parsing_utils.m"
  {
#line 364 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 364 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__CastX_9 = (MR_Integer) mercury__parsing_utils__HeadVar__2_2;
#line 364 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__CastY_10 = (MR_Integer) mercury__parsing_utils__HeadVar__3_3;

#line 364 "parsing_utils.m"
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__CastX_9 == mercury__parsing_utils__CastY_10);
#line 364 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 3276 "parsing_utils.c"
      *mercury__parsing_utils__HeadVar__1_1 = (MR_Integer) 0;
#line 364 "parsing_utils.m"
    else
#line 364 "parsing_utils.m"
      {
#line 364 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 364 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 1)));
#line 364 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 0)));
#line 364 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__3_3, (MR_Integer) 1)));
#line 364 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_8_8;

#line 66 "private_builtin.opt"
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_4_4 < mercury__parsing_utils__V_6_6);
#line 69 "private_builtin.opt"
        if (mercury__parsing_utils__succeeded)
#line 68 "private_builtin.opt"
          mercury__parsing_utils__V_8_8 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_4_4 == mercury__parsing_utils__V_6_6);
#line 74 "private_builtin.opt"
            if (mercury__parsing_utils__succeeded)
#line 73 "private_builtin.opt"
              mercury__parsing_utils__V_8_8 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__parsing_utils__V_8_8 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 3315 "parsing_utils.c"
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_8_8 == (MR_Integer) 0);
#line 364 "parsing_utils.m"
        mercury__parsing_utils__succeeded = !(mercury__parsing_utils__succeeded);
#line 364 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 364 "parsing_utils.m"
          *mercury__parsing_utils__HeadVar__1_1 = mercury__parsing_utils__V_8_8;
#line 364 "parsing_utils.m"
        else
#line 364 "parsing_utils.m"
          {
#line 364 "parsing_utils.m"
            MR_Word mercury__parsing_utils__TypeInfo_12_12 = (MR_Word) &mercury__parsing_utils_scalar_common_1[0];

#line 364 "parsing_utils.m"
            {
#line 364 "parsing_utils.m"
              mercury__builtin__compare_3_p_0(mercury__parsing_utils__TypeInfo_12_12, mercury__parsing_utils__HeadVar__1_1, ((MR_Box) (mercury__parsing_utils__V_5_5)), ((MR_Box) (mercury__parsing_utils__V_7_7)));
#line 364 "parsing_utils.m"
              return;
            }
#line 364 "parsing_utils.m"
          }
#line 364 "parsing_utils.m"
      }
#line 364 "parsing_utils.m"
  }
#line 364 "parsing_utils.m"
}

#line 364 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils____Unify____fail_message_info_0_0(
#line 364 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__1_1,
#line 364 "parsing_utils.m"
  MR_Word mercury__parsing_utils__HeadVar__2_2)
#line 364 "parsing_utils.m"
{
#line 364 "parsing_utils.m"
  {
#line 364 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 364 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__CastX_7 = (MR_Integer) mercury__parsing_utils__HeadVar__1_1;
#line 364 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__CastY_8 = (MR_Integer) mercury__parsing_utils__HeadVar__2_2;

#line 364 "parsing_utils.m"
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__CastX_7 == mercury__parsing_utils__CastY_8);
#line 364 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 364 "parsing_utils.m"
      mercury__parsing_utils__succeeded = MR_TRUE;
#line 364 "parsing_utils.m"
    else
#line 364 "parsing_utils.m"
      {
#line 364 "parsing_utils.m"
        MR_Word mercury__parsing_utils__TypeInfo_9_9;
#line 364 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 0)));
#line 364 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__1_1, (MR_Integer) 1)));
#line 364 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 0)));
#line 364 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__HeadVar__2_2, (MR_Integer) 1)));

#line 3385 "parsing_utils.c"
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_3_3 == mercury__parsing_utils__V_5_5);
#line 364 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 364 "parsing_utils.m"
          {
#line 3391 "parsing_utils.c"
            mercury__parsing_utils__TypeInfo_9_9 = (MR_Word) &mercury__parsing_utils_scalar_common_1[0];
#line 3393 "parsing_utils.c"
            {
#line 3395 "parsing_utils.c"
              return mercury__parsing_utils__succeeded = mercury__builtin__unify_2_p_0(mercury__parsing_utils__TypeInfo_9_9, ((MR_Box) (mercury__parsing_utils__V_4_4)), ((MR_Box) (mercury__parsing_utils__V_6_6)));
            }
#line 364 "parsing_utils.m"
          }
#line 364 "parsing_utils.m"
      }
#line 364 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 364 "parsing_utils.m"
  }
#line 364 "parsing_utils.m"
}

#line 942 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__identifier_2_5_p_0(
#line 942 "parsing_utils.m"
  MR_String mercury__parsing_utils__IdChars_6,
#line 942 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_7,
#line 942 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_11,
#line 942 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_12)
#line 942 "parsing_utils.m"
{
#line 945 "parsing_utils.m"
  while (MR_TRUE)
#line 945 "parsing_utils.m"
    {
#line 945 "parsing_utils.m"
      /* tailcall optimized into a loop */
#line 945 "parsing_utils.m"
      {
#line 945 "parsing_utils.m"
        MR_bool mercury__parsing_utils__succeeded;
#line 948 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_13_13;
#line 570 "parsing_utils.m"
        MR_Char mercury__parsing_utils__V_9_9;

#line 945 "parsing_utils.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 571 "parsing_utils.m"
        {
#line 571 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_7, &mercury__parsing_utils__V_9_9, mercury__parsing_utils__STATE_VARIABLE_PS_0_11, &mercury__parsing_utils__STATE_VARIABLE_PS_13_13);
        }
#line 570 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 570 "parsing_utils.m"
          {
#line 530 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__identifier_2_5_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__parsing_utils__IdChars_6 ;
	Ch =  mercury__parsing_utils__V_9_9 ;
		{
#line 530 "string.opt"

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }

#line 3472 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 530 "string.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 570 "parsing_utils.m"
          }
#line 948 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 947 "parsing_utils.m"
          {
#line 947 "parsing_utils.m"
            /* direct tailcall eliminated */
#line 947 "parsing_utils.m"
            {
#line 947 "parsing_utils.m"
              MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0__tmp_copy_11 = mercury__parsing_utils__STATE_VARIABLE_PS_13_13;

#line 947 "parsing_utils.m"
              mercury__parsing_utils__STATE_VARIABLE_PS_0_11 = mercury__parsing_utils__STATE_VARIABLE_PS_0__tmp_copy_11;
#line 947 "parsing_utils.m"
            }
#line 947 "parsing_utils.m"
            continue;
#line 947 "parsing_utils.m"
          }
#line 948 "parsing_utils.m"
        else
#line 947 "parsing_utils.m"
          {
#line 947 "parsing_utils.m"
            *mercury__parsing_utils__STATE_VARIABLE_PS_12 = mercury__parsing_utils__STATE_VARIABLE_PS_0_11;
#line 947 "parsing_utils.m"
            mercury__parsing_utils__succeeded = MR_TRUE;
#line 947 "parsing_utils.m"
          }
#line 945 "parsing_utils.m"
        return mercury__parsing_utils__succeeded;
#line 945 "parsing_utils.m"
      }
#line 945 "parsing_utils.m"
      break;
#line 945 "parsing_utils.m"
    }
#line 942 "parsing_utils.m"
}

#line 916 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__string_literal_2_5_p_0(
#line 916 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_6,
#line 916 "parsing_utils.m"
  MR_Char mercury__parsing_utils__QuoteChar_7,
#line 916 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_13,
#line 916 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_14)
#line 916 "parsing_utils.m"
{
#line 919 "parsing_utils.m"
  while (MR_TRUE)
#line 919 "parsing_utils.m"
    {
#line 919 "parsing_utils.m"
      /* tailcall optimized into a loop */
#line 919 "parsing_utils.m"
      {
#line 919 "parsing_utils.m"
        MR_bool mercury__parsing_utils__succeeded;
#line 919 "parsing_utils.m"
        MR_Char mercury__parsing_utils__C_9;
#line 919 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_15_15;

#line 919 "parsing_utils.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 920 "parsing_utils.m"
        {
#line 920 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_6, &mercury__parsing_utils__C_9, mercury__parsing_utils__STATE_VARIABLE_PS_0_13, &mercury__parsing_utils__STATE_VARIABLE_PS_15_15);
        }
#line 919 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 919 "parsing_utils.m"
          {
#line 921 "parsing_utils.m"
            mercury__parsing_utils__succeeded = (mercury__parsing_utils__C_9 == mercury__parsing_utils__QuoteChar_7);
#line 923 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 921 "parsing_utils.m"
              {
#line 921 "parsing_utils.m"
                *mercury__parsing_utils__STATE_VARIABLE_PS_14 = mercury__parsing_utils__STATE_VARIABLE_PS_15_15;
#line 921 "parsing_utils.m"
                mercury__parsing_utils__succeeded = MR_TRUE;
#line 921 "parsing_utils.m"
              }
#line 923 "parsing_utils.m"
            else
#line 926 "parsing_utils.m"
              {
#line 923 "parsing_utils.m"
                mercury__parsing_utils__succeeded = (mercury__parsing_utils__C_9 == (MR_Char) 92);
#line 926 "parsing_utils.m"
                if (mercury__parsing_utils__succeeded)
#line 924 "parsing_utils.m"
                  {
#line 924 "parsing_utils.m"
                    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_16_16;
#line 924 "parsing_utils.m"
                    MR_Char mercury__parsing_utils__V_10_10;

#line 924 "parsing_utils.m"
                    {
#line 924 "parsing_utils.m"
                      mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_6, &mercury__parsing_utils__V_10_10, mercury__parsing_utils__STATE_VARIABLE_PS_15_15, &mercury__parsing_utils__STATE_VARIABLE_PS_16_16);
                    }
#line 924 "parsing_utils.m"
                    if (mercury__parsing_utils__succeeded)
#line 925 "parsing_utils.m"
                      {
#line 925 "parsing_utils.m"
                        /* direct tailcall eliminated */
#line 925 "parsing_utils.m"
                        {
#line 925 "parsing_utils.m"
                          MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0__tmp_copy_13 = mercury__parsing_utils__STATE_VARIABLE_PS_16_16;

#line 925 "parsing_utils.m"
                          mercury__parsing_utils__STATE_VARIABLE_PS_0_13 = mercury__parsing_utils__STATE_VARIABLE_PS_0__tmp_copy_13;
#line 925 "parsing_utils.m"
                        }
#line 925 "parsing_utils.m"
                        continue;
#line 925 "parsing_utils.m"
                      }
#line 924 "parsing_utils.m"
                  }
#line 926 "parsing_utils.m"
                else
#line 927 "parsing_utils.m"
                  {
#line 927 "parsing_utils.m"
                    /* direct tailcall eliminated */
#line 927 "parsing_utils.m"
                    {
#line 927 "parsing_utils.m"
                      MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0__tmp_copy_13 = mercury__parsing_utils__STATE_VARIABLE_PS_15_15;

#line 927 "parsing_utils.m"
                      mercury__parsing_utils__STATE_VARIABLE_PS_0_13 = mercury__parsing_utils__STATE_VARIABLE_PS_0__tmp_copy_13;
#line 927 "parsing_utils.m"
                    }
#line 927 "parsing_utils.m"
                    continue;
#line 927 "parsing_utils.m"
                  }
#line 926 "parsing_utils.m"
              }
#line 919 "parsing_utils.m"
          }
#line 919 "parsing_utils.m"
        return mercury__parsing_utils__succeeded;
#line 919 "parsing_utils.m"
      }
#line 919 "parsing_utils.m"
      break;
#line 919 "parsing_utils.m"
    }
#line 916 "parsing_utils.m"
}

#line 890 "parsing_utils.m"
static MR_bool MR_CALL 
mercury__parsing_utils__digits_2_5_p_0(
#line 890 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__Base_6,
#line 890 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_7,
#line 890 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_12,
#line 890 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_13)
#line 890 "parsing_utils.m"
{
#line 892 "parsing_utils.m"
  while (MR_TRUE)
#line 892 "parsing_utils.m"
    {
#line 892 "parsing_utils.m"
      /* tailcall optimized into a loop */
#line 892 "parsing_utils.m"
      {
#line 892 "parsing_utils.m"
        MR_bool mercury__parsing_utils__succeeded;
#line 899 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_14_14;
#line 894 "parsing_utils.m"
        MR_Char mercury__parsing_utils__C_9;
#line 894 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__D_10;
#line 125 "char.opt"
        MR_Char mercury__parsing_utils__Upper_5_18;

#line 892 "parsing_utils.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 894 "parsing_utils.m"
        {
#line 894 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_7, &mercury__parsing_utils__C_9, mercury__parsing_utils__STATE_VARIABLE_PS_0_12, &mercury__parsing_utils__STATE_VARIABLE_PS_14_14);
        }
#line 894 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 894 "parsing_utils.m"
          {
#line 122 "char.opt"
            {
#line 122 "char.opt"
              mercury__parsing_utils__succeeded = mercury__char__lower_upper_2_p_0(mercury__parsing_utils__C_9, &mercury__parsing_utils__Upper_5_18);
            }
#line 125 "char.opt"
            if (mercury__parsing_utils__succeeded)
#line 124 "char.opt"
              {
#line 124 "char.opt"
                mercury__parsing_utils__succeeded = mercury__char__int_to_digit_2_p_1(&mercury__parsing_utils__D_10, mercury__parsing_utils__Upper_5_18);
              }
#line 125 "char.opt"
            else
#line 126 "char.opt"
              {
#line 126 "char.opt"
                mercury__parsing_utils__succeeded = mercury__char__int_to_digit_2_p_1(&mercury__parsing_utils__D_10, mercury__parsing_utils__C_9);
              }
#line 894 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 896 "parsing_utils.m"
              mercury__parsing_utils__succeeded = (mercury__parsing_utils__D_10 < mercury__parsing_utils__Base_6);
#line 894 "parsing_utils.m"
          }
#line 899 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 898 "parsing_utils.m"
          {
#line 898 "parsing_utils.m"
            /* direct tailcall eliminated */
#line 898 "parsing_utils.m"
            {
#line 898 "parsing_utils.m"
              MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0__tmp_copy_12 = mercury__parsing_utils__STATE_VARIABLE_PS_14_14;

#line 898 "parsing_utils.m"
              mercury__parsing_utils__STATE_VARIABLE_PS_0_12 = mercury__parsing_utils__STATE_VARIABLE_PS_0__tmp_copy_12;
#line 898 "parsing_utils.m"
            }
#line 898 "parsing_utils.m"
            continue;
#line 898 "parsing_utils.m"
          }
#line 899 "parsing_utils.m"
        else
#line 898 "parsing_utils.m"
          {
#line 898 "parsing_utils.m"
            *mercury__parsing_utils__STATE_VARIABLE_PS_13 = mercury__parsing_utils__STATE_VARIABLE_PS_0_12;
#line 898 "parsing_utils.m"
            mercury__parsing_utils__succeeded = MR_TRUE;
#line 898 "parsing_utils.m"
          }
#line 892 "parsing_utils.m"
        return mercury__parsing_utils__succeeded;
#line 892 "parsing_utils.m"
      }
#line 892 "parsing_utils.m"
      break;
#line 892 "parsing_utils.m"
    }
#line 890 "parsing_utils.m"
}

#line 685 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__zero_or_more_2_8_p_0(
#line 685 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_27,
#line 685 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_S_28,
#line 685 "parsing_utils.m"
  MR_Word mercury__parsing_utils__P_9,
#line 685 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_10,
#line 685 "parsing_utils.m"
  MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_0_15,
#line 685 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__STATE_VARIABLE_RevResult_16,
#line 685 "parsing_utils.m"
  MR_Box mercury__parsing_utils__STATE_VARIABLE_S_0_17,
#line 685 "parsing_utils.m"
  MR_Box * mercury__parsing_utils__STATE_VARIABLE_S_18,
#line 685 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_19,
#line 685 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_20)
#line 685 "parsing_utils.m"
{
#line 692 "parsing_utils.m"
  while (MR_TRUE)
#line 692 "parsing_utils.m"
    {
#line 692 "parsing_utils.m"
      /* tailcall optimized into a loop */
#line 692 "parsing_utils.m"
      {
#line 692 "parsing_utils.m"
        MR_bool mercury__parsing_utils__succeeded;
#line 692 "parsing_utils.m"
        MR_Box mercury__parsing_utils__X_14;
#line 692 "parsing_utils.m"
        MR_Box mercury__parsing_utils__STATE_VARIABLE_S_21_21;
#line 692 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_22_22;
#line 689 "parsing_utils.m"
        MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__P_9, (MR_Integer) 1)));
#line 689 "parsing_utils.m"
        MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_22_22;

#line 689 "parsing_utils.m"
        {
#line 689 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__P_9), ((MR_Box) (mercury__parsing_utils__Src_10)), &mercury__parsing_utils__X_14, mercury__parsing_utils__STATE_VARIABLE_S_0_17, &mercury__parsing_utils__STATE_VARIABLE_S_21_21, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_19)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_22_22);
        }
#line 689 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 689 "parsing_utils.m"
          {
#line 689 "parsing_utils.m"
            mercury__parsing_utils__STATE_VARIABLE_PS_22_22 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_22_22);
#line 689 "parsing_utils.m"
            mercury__parsing_utils__succeeded = MR_TRUE;
#line 689 "parsing_utils.m"
          }
#line 692 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 690 "parsing_utils.m"
          {
#line 690 "parsing_utils.m"
            MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_23_23;

#line 43 "list.opt"
            {
#line 43 "list.opt"
              mercury__parsing_utils__STATE_VARIABLE_RevResult_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 43 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__parsing_utils__STATE_VARIABLE_RevResult_23_23, 0) = mercury__parsing_utils__X_14;
#line 43 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__parsing_utils__STATE_VARIABLE_RevResult_23_23, 1) = ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_RevResult_0_15));
#line 43 "list.opt"
            }
#line 691 "parsing_utils.m"
            /* direct tailcall eliminated */
#line 691 "parsing_utils.m"
            {
#line 691 "parsing_utils.m"
              MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_0__tmp_copy_15 = mercury__parsing_utils__STATE_VARIABLE_RevResult_23_23;
#line 691 "parsing_utils.m"
              MR_Box mercury__parsing_utils__STATE_VARIABLE_S_0__tmp_copy_17 = mercury__parsing_utils__STATE_VARIABLE_S_21_21;
#line 691 "parsing_utils.m"
              MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0__tmp_copy_19 = mercury__parsing_utils__STATE_VARIABLE_PS_22_22;

#line 691 "parsing_utils.m"
              mercury__parsing_utils__STATE_VARIABLE_PS_0_19 = mercury__parsing_utils__STATE_VARIABLE_PS_0__tmp_copy_19;
#line 691 "parsing_utils.m"
              mercury__parsing_utils__STATE_VARIABLE_S_0_17 = mercury__parsing_utils__STATE_VARIABLE_S_0__tmp_copy_17;
#line 691 "parsing_utils.m"
              mercury__parsing_utils__STATE_VARIABLE_RevResult_0_15 = mercury__parsing_utils__STATE_VARIABLE_RevResult_0__tmp_copy_15;
#line 691 "parsing_utils.m"
            }
#line 691 "parsing_utils.m"
            continue;
#line 690 "parsing_utils.m"
          }
#line 692 "parsing_utils.m"
        else
#line 693 "parsing_utils.m"
          {
#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__zero_or_more_2_8_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 3873 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 693 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 693 "parsing_utils.m"
              {
#line 693 "parsing_utils.m"
                *mercury__parsing_utils__STATE_VARIABLE_PS_20 = mercury__parsing_utils__STATE_VARIABLE_PS_0_19;
#line 693 "parsing_utils.m"
                *mercury__parsing_utils__STATE_VARIABLE_S_18 = mercury__parsing_utils__STATE_VARIABLE_S_0_17;
#line 693 "parsing_utils.m"
                *mercury__parsing_utils__STATE_VARIABLE_RevResult_16 = mercury__parsing_utils__STATE_VARIABLE_RevResult_0_15;
#line 693 "parsing_utils.m"
                mercury__parsing_utils__succeeded = MR_TRUE;
#line 693 "parsing_utils.m"
              }
#line 693 "parsing_utils.m"
          }
#line 692 "parsing_utils.m"
        return mercury__parsing_utils__succeeded;
#line 692 "parsing_utils.m"
      }
#line 692 "parsing_utils.m"
      break;
#line 692 "parsing_utils.m"
    }
#line 685 "parsing_utils.m"
}

#line 668 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__zero_or_more_2_6_p_0(
#line 668 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_20,
#line 668 "parsing_utils.m"
  MR_Word mercury__parsing_utils__P_7,
#line 668 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_8,
#line 668 "parsing_utils.m"
  MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_0_12,
#line 668 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__STATE_VARIABLE_RevResult_13,
#line 668 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_14,
#line 668 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_15)
#line 668 "parsing_utils.m"
{
#line 675 "parsing_utils.m"
  while (MR_TRUE)
#line 675 "parsing_utils.m"
    {
#line 675 "parsing_utils.m"
      /* tailcall optimized into a loop */
#line 675 "parsing_utils.m"
      {
#line 675 "parsing_utils.m"
        MR_bool mercury__parsing_utils__succeeded;
#line 675 "parsing_utils.m"
        MR_Box mercury__parsing_utils__X_11;
#line 675 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_16_16;
#line 672 "parsing_utils.m"
        MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__P_7, (MR_Integer) 1)));
#line 672 "parsing_utils.m"
        MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_16_16;

#line 672 "parsing_utils.m"
        {
#line 672 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__P_7), ((MR_Box) (mercury__parsing_utils__Src_8)), &mercury__parsing_utils__X_11, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_14)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_16_16);
        }
#line 672 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 672 "parsing_utils.m"
          {
#line 672 "parsing_utils.m"
            mercury__parsing_utils__STATE_VARIABLE_PS_16_16 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_16_16);
#line 672 "parsing_utils.m"
            mercury__parsing_utils__succeeded = MR_TRUE;
#line 672 "parsing_utils.m"
          }
#line 675 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 673 "parsing_utils.m"
          {
#line 673 "parsing_utils.m"
            MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_17_17;

#line 43 "list.opt"
            {
#line 43 "list.opt"
              mercury__parsing_utils__STATE_VARIABLE_RevResult_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 43 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__parsing_utils__STATE_VARIABLE_RevResult_17_17, 0) = mercury__parsing_utils__X_11;
#line 43 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__parsing_utils__STATE_VARIABLE_RevResult_17_17, 1) = ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_RevResult_0_12));
#line 43 "list.opt"
            }
#line 674 "parsing_utils.m"
            /* direct tailcall eliminated */
#line 674 "parsing_utils.m"
            {
#line 674 "parsing_utils.m"
              MR_Word mercury__parsing_utils__STATE_VARIABLE_RevResult_0__tmp_copy_12 = mercury__parsing_utils__STATE_VARIABLE_RevResult_17_17;
#line 674 "parsing_utils.m"
              MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0__tmp_copy_14 = mercury__parsing_utils__STATE_VARIABLE_PS_16_16;

#line 674 "parsing_utils.m"
              mercury__parsing_utils__STATE_VARIABLE_PS_0_14 = mercury__parsing_utils__STATE_VARIABLE_PS_0__tmp_copy_14;
#line 674 "parsing_utils.m"
              mercury__parsing_utils__STATE_VARIABLE_RevResult_0_12 = mercury__parsing_utils__STATE_VARIABLE_RevResult_0__tmp_copy_12;
#line 674 "parsing_utils.m"
            }
#line 674 "parsing_utils.m"
            continue;
#line 673 "parsing_utils.m"
          }
#line 675 "parsing_utils.m"
        else
#line 676 "parsing_utils.m"
          {
#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__zero_or_more_2_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 4013 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 676 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 676 "parsing_utils.m"
              {
#line 676 "parsing_utils.m"
                *mercury__parsing_utils__STATE_VARIABLE_PS_15 = mercury__parsing_utils__STATE_VARIABLE_PS_0_14;
#line 676 "parsing_utils.m"
                *mercury__parsing_utils__STATE_VARIABLE_RevResult_13 = mercury__parsing_utils__STATE_VARIABLE_RevResult_0_12;
#line 676 "parsing_utils.m"
                mercury__parsing_utils__succeeded = MR_TRUE;
#line 676 "parsing_utils.m"
              }
#line 676 "parsing_utils.m"
          }
#line 675 "parsing_utils.m"
        return mercury__parsing_utils__succeeded;
#line 675 "parsing_utils.m"
      }
#line 675 "parsing_utils.m"
      break;
#line 675 "parsing_utils.m"
    }
#line 668 "parsing_utils.m"
}

#line 617 "parsing_utils.m"
static MR_bool MR_CALL 
mercury__parsing_utils__imatch_string_2_5_p_0(
#line 617 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__N_6,
#line 617 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__I_7,
#line 617 "parsing_utils.m"
  MR_String mercury__parsing_utils__MatchStr_8,
#line 617 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__Offset_9,
#line 617 "parsing_utils.m"
  MR_String mercury__parsing_utils__Str_10)
#line 617 "parsing_utils.m"
{
#line 631 "parsing_utils.m"
  while (MR_TRUE)
#line 631 "parsing_utils.m"
    {
#line 631 "parsing_utils.m"
      /* tailcall optimized into a loop */
#line 631 "parsing_utils.m"
      {
#line 631 "parsing_utils.m"
        MR_bool mercury__parsing_utils__succeeded = (mercury__parsing_utils__I_7 < mercury__parsing_utils__N_6);

#line 631 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 625 "parsing_utils.m"
          {
#line 625 "parsing_utils.m"
            MR_Integer mercury__parsing_utils__CodeUnit1_11;
#line 625 "parsing_utils.m"
            MR_Integer mercury__parsing_utils__CodeUnit2_12;
#line 625 "parsing_utils.m"
            MR_Char mercury__parsing_utils__Chr1_13;
#line 625 "parsing_utils.m"
            MR_Char mercury__parsing_utils__Chr2_14;
#line 625 "parsing_utils.m"
            MR_Integer mercury__parsing_utils__V_15_15;
#line 625 "parsing_utils.m"
            MR_Char mercury__parsing_utils__V_16_16;
#line 625 "parsing_utils.m"
            MR_Integer mercury__parsing_utils__V_17_17;
#line 625 "parsing_utils.m"
            MR_Integer mercury__parsing_utils__V_18_18;
#line 625 "parsing_utils.m"
            MR_Char mercury__parsing_utils__V_19_19;
#line 85 "char.opt"
            MR_Char mercury__parsing_utils__UpperChar_5_24;
#line 85 "char.opt"
            MR_Char mercury__parsing_utils__UpperChar_5_29;

#line 617 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__imatch_string_2_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__parsing_utils__MatchStr_8 ;
	Index =  mercury__parsing_utils__I_7 ;
		{
#line 617 "string.opt"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 4116 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__CodeUnit1_11  = Code;
#line 617 "string.opt"
}
#line 626 "parsing_utils.m"
            mercury__parsing_utils__V_15_15 = (mercury__parsing_utils__Offset_9 + mercury__parsing_utils__I_7);
#line 617 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__imatch_string_2_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__parsing_utils__Str_10 ;
	Index =  mercury__parsing_utils__V_15_15 ;
		{
#line 617 "string.opt"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 4141 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__CodeUnit2_12  = Code;
#line 617 "string.opt"
}
#line 627 "parsing_utils.m"
            {
#line 627 "parsing_utils.m"
              mercury__char__det_from_int_2_p_0(mercury__parsing_utils__CodeUnit1_11, &mercury__parsing_utils__Chr1_13);
            }
#line 628 "parsing_utils.m"
            {
#line 628 "parsing_utils.m"
              mercury__char__det_from_int_2_p_0(mercury__parsing_utils__CodeUnit2_12, &mercury__parsing_utils__Chr2_14);
            }
#line 82 "char.opt"
            {
#line 82 "char.opt"
              mercury__parsing_utils__succeeded = mercury__char__lower_upper_2_p_0(mercury__parsing_utils__Chr1_13, &mercury__parsing_utils__UpperChar_5_24);
            }
#line 85 "char.opt"
            if (mercury__parsing_utils__succeeded)
#line 84 "char.opt"
              mercury__parsing_utils__V_16_16 = mercury__parsing_utils__UpperChar_5_24;
#line 85 "char.opt"
            else
#line 86 "char.opt"
              mercury__parsing_utils__V_16_16 = mercury__parsing_utils__Chr1_13;
#line 82 "char.opt"
            {
#line 82 "char.opt"
              mercury__parsing_utils__succeeded = mercury__char__lower_upper_2_p_0(mercury__parsing_utils__Chr2_14, &mercury__parsing_utils__UpperChar_5_29);
            }
#line 85 "char.opt"
            if (mercury__parsing_utils__succeeded)
#line 84 "char.opt"
              mercury__parsing_utils__V_19_19 = mercury__parsing_utils__UpperChar_5_29;
#line 85 "char.opt"
            else
#line 86 "char.opt"
              mercury__parsing_utils__V_19_19 = mercury__parsing_utils__Chr2_14;
#line 629 "parsing_utils.m"
            mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_16_16 == mercury__parsing_utils__V_19_19);
#line 625 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 625 "parsing_utils.m"
              {
#line 630 "parsing_utils.m"
                mercury__parsing_utils__V_18_18 = (MR_Integer) 1;
#line 630 "parsing_utils.m"
                mercury__parsing_utils__V_17_17 = (mercury__parsing_utils__I_7 + mercury__parsing_utils__V_18_18);
#line 630 "parsing_utils.m"
                /* direct tailcall eliminated */
#line 630 "parsing_utils.m"
                {
#line 630 "parsing_utils.m"
                  MR_Integer mercury__parsing_utils__I__tmp_copy_7 = mercury__parsing_utils__V_17_17;

#line 630 "parsing_utils.m"
                  mercury__parsing_utils__I_7 = mercury__parsing_utils__I__tmp_copy_7;
#line 630 "parsing_utils.m"
                }
#line 630 "parsing_utils.m"
                continue;
#line 625 "parsing_utils.m"
              }
#line 625 "parsing_utils.m"
          }
#line 631 "parsing_utils.m"
        else
#line 632 "parsing_utils.m"
          mercury__parsing_utils__succeeded = MR_TRUE;
#line 631 "parsing_utils.m"
        return mercury__parsing_utils__succeeded;
#line 631 "parsing_utils.m"
      }
#line 631 "parsing_utils.m"
      break;
#line 631 "parsing_utils.m"
    }
#line 617 "parsing_utils.m"
}

#line 607 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__imatch_string_4_p_0(
#line 607 "parsing_utils.m"
  MR_String mercury__parsing_utils__MatchStr_5,
#line 607 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_6,
#line 607 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__PS_7,
#line 607 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__HeadVar__4_4)
#line 607 "parsing_utils.m"
{
#line 609 "parsing_utils.m"
  {
#line 609 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 609 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__N_8;
#line 611 "parsing_utils.m"
    MR_Word mercury__parsing_utils__TypeCtorInfo_11_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 611 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_9_9;
#line 611 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_10_10;
#line 611 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_11_11;
#line 611 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_13_13;
#line 611 "parsing_utils.m"
    MR_Word mercury__parsing_utils__MutVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 3)));
#line 611 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__OS0_24;
#line 959 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 0)));
#line 959 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 1)));
#line 959 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 2)));
#line 959 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 4)));
#line 960 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv0_OS0_24;
#line 613 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_14_14;
#line 613 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_15_15;
#line 613 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_16_16;

#line 960 "parsing_utils.m"
    {
#line 960 "parsing_utils.m"
      mercury__mutvar__get_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_11_29, mercury__parsing_utils__MutVar_23, &mercury__parsing_utils__conv0_OS0_24);
    }
#line 960 "parsing_utils.m"
    mercury__parsing_utils__OS0_24 = ((MR_Integer) mercury__parsing_utils__conv0_OS0_24);
#line 961 "parsing_utils.m"
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__PS_7 > mercury__parsing_utils__OS0_24);
#line 963 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 962 "parsing_utils.m"
      {
#line 962 "parsing_utils.m"
        mercury__mutvar__set_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_11_29, mercury__parsing_utils__MutVar_23, ((MR_Box) (mercury__parsing_utils__PS_7)));
      }
#line 963 "parsing_utils.m"
    else
#line 964 "parsing_utils.m"
      {
#line 964 "parsing_utils.m"
      }
#line 231 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__imatch_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__parsing_utils__MatchStr_5 ;
		{
#line 231 "string.opt"

    Length = strlen(Str);

#line 4311 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__N_8  = Length;
#line 231 "string.opt"
}
#line 613 "parsing_utils.m"
    mercury__parsing_utils__V_9_9 = (mercury__parsing_utils__PS_7 + mercury__parsing_utils__N_8);
#line 613 "parsing_utils.m"
    mercury__parsing_utils__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 0)));
#line 613 "parsing_utils.m"
    mercury__parsing_utils__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 1)));
#line 613 "parsing_utils.m"
    mercury__parsing_utils__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 2)));
#line 613 "parsing_utils.m"
    mercury__parsing_utils__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 3)));
#line 613 "parsing_utils.m"
    mercury__parsing_utils__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 4)));
#line 613 "parsing_utils.m"
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_9_9 <= mercury__parsing_utils__V_10_10);
#line 611 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 611 "parsing_utils.m"
      {
#line 614 "parsing_utils.m"
        mercury__parsing_utils__V_11_11 = (MR_Integer) 0;
#line 614 "parsing_utils.m"
        {
#line 614 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__imatch_string_2_5_p_0(mercury__parsing_utils__N_8, mercury__parsing_utils__V_11_11, mercury__parsing_utils__MatchStr_5, mercury__parsing_utils__PS_7, mercury__parsing_utils__V_13_13);
        }
#line 611 "parsing_utils.m"
      }
#line 609 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 609 "parsing_utils.m"
      {
#line 609 "parsing_utils.m"
        *mercury__parsing_utils__HeadVar__4_4 = (mercury__parsing_utils__PS_7 + mercury__parsing_utils__N_8);
#line 609 "parsing_utils.m"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 609 "parsing_utils.m"
      }
#line 609 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 609 "parsing_utils.m"
  }
#line 607 "parsing_utils.m"
}

#line 595 "parsing_utils.m"
static MR_bool MR_CALL 
mercury__parsing_utils__match_string_2_5_p_0(
#line 595 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__N_6,
#line 595 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__I_7,
#line 595 "parsing_utils.m"
  MR_String mercury__parsing_utils__MatchStr_8,
#line 595 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__Offset_9,
#line 595 "parsing_utils.m"
  MR_String mercury__parsing_utils__Str_10)
#line 595 "parsing_utils.m"
{
#line 603 "parsing_utils.m"
  while (MR_TRUE)
#line 603 "parsing_utils.m"
    {
#line 603 "parsing_utils.m"
      /* tailcall optimized into a loop */
#line 603 "parsing_utils.m"
      {
#line 603 "parsing_utils.m"
        MR_bool mercury__parsing_utils__succeeded = (mercury__parsing_utils__I_7 < mercury__parsing_utils__N_6);

#line 603 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 600 "parsing_utils.m"
          {
#line 600 "parsing_utils.m"
            MR_Integer mercury__parsing_utils__CodeUnit_11;
#line 600 "parsing_utils.m"
            MR_Integer mercury__parsing_utils__V_12_12;
#line 600 "parsing_utils.m"
            MR_Integer mercury__parsing_utils__V_13_13;
#line 600 "parsing_utils.m"
            MR_Integer mercury__parsing_utils__V_14_14;
#line 600 "parsing_utils.m"
            MR_Integer mercury__parsing_utils__V_15_15;

#line 617 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__match_string_2_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__parsing_utils__MatchStr_8 ;
	Index =  mercury__parsing_utils__I_7 ;
		{
#line 617 "string.opt"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 4419 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__CodeUnit_11  = Code;
#line 617 "string.opt"
}
#line 601 "parsing_utils.m"
            mercury__parsing_utils__V_12_12 = (mercury__parsing_utils__Offset_9 + mercury__parsing_utils__I_7);
#line 617 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__match_string_2_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__parsing_utils__Str_10 ;
	Index =  mercury__parsing_utils__V_12_12 ;
		{
#line 617 "string.opt"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 4444 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__V_15_15  = Code;
#line 617 "string.opt"
}
#line 601 "parsing_utils.m"
            mercury__parsing_utils__succeeded = (mercury__parsing_utils__CodeUnit_11 == mercury__parsing_utils__V_15_15);
#line 600 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 600 "parsing_utils.m"
              {
#line 602 "parsing_utils.m"
                mercury__parsing_utils__V_14_14 = (MR_Integer) 1;
#line 602 "parsing_utils.m"
                mercury__parsing_utils__V_13_13 = (mercury__parsing_utils__I_7 + mercury__parsing_utils__V_14_14);
#line 602 "parsing_utils.m"
                /* direct tailcall eliminated */
#line 602 "parsing_utils.m"
                {
#line 602 "parsing_utils.m"
                  MR_Integer mercury__parsing_utils__I__tmp_copy_7 = mercury__parsing_utils__V_13_13;

#line 602 "parsing_utils.m"
                  mercury__parsing_utils__I_7 = mercury__parsing_utils__I__tmp_copy_7;
#line 602 "parsing_utils.m"
                }
#line 602 "parsing_utils.m"
                continue;
#line 600 "parsing_utils.m"
              }
#line 600 "parsing_utils.m"
          }
#line 603 "parsing_utils.m"
        else
#line 604 "parsing_utils.m"
          mercury__parsing_utils__succeeded = MR_TRUE;
#line 603 "parsing_utils.m"
        return mercury__parsing_utils__succeeded;
#line 603 "parsing_utils.m"
      }
#line 603 "parsing_utils.m"
      break;
#line 603 "parsing_utils.m"
    }
#line 595 "parsing_utils.m"
}

#line 585 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__match_string_4_p_0(
#line 585 "parsing_utils.m"
  MR_String mercury__parsing_utils__MatchStr_5,
#line 585 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_6,
#line 585 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__PS_7,
#line 585 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__HeadVar__4_4)
#line 585 "parsing_utils.m"
{
#line 587 "parsing_utils.m"
  {
#line 587 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 587 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__N_8;
#line 589 "parsing_utils.m"
    MR_Word mercury__parsing_utils__TypeCtorInfo_11_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 589 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_9_9;
#line 589 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_10_10;
#line 589 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_11_11;
#line 589 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_13_13;
#line 589 "parsing_utils.m"
    MR_Word mercury__parsing_utils__MutVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 3)));
#line 589 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__OS0_24;
#line 959 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 0)));
#line 959 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 1)));
#line 959 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 2)));
#line 959 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 4)));
#line 960 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv0_OS0_24;
#line 591 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_14_14;
#line 591 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_15_15;
#line 591 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_16_16;

#line 960 "parsing_utils.m"
    {
#line 960 "parsing_utils.m"
      mercury__mutvar__get_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_11_29, mercury__parsing_utils__MutVar_23, &mercury__parsing_utils__conv0_OS0_24);
    }
#line 960 "parsing_utils.m"
    mercury__parsing_utils__OS0_24 = ((MR_Integer) mercury__parsing_utils__conv0_OS0_24);
#line 961 "parsing_utils.m"
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__PS_7 > mercury__parsing_utils__OS0_24);
#line 963 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 962 "parsing_utils.m"
      {
#line 962 "parsing_utils.m"
        mercury__mutvar__set_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_11_29, mercury__parsing_utils__MutVar_23, ((MR_Box) (mercury__parsing_utils__PS_7)));
      }
#line 963 "parsing_utils.m"
    else
#line 964 "parsing_utils.m"
      {
#line 964 "parsing_utils.m"
      }
#line 231 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__match_string_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__parsing_utils__MatchStr_5 ;
		{
#line 231 "string.opt"

    Length = strlen(Str);

#line 4578 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__N_8  = Length;
#line 231 "string.opt"
}
#line 591 "parsing_utils.m"
    mercury__parsing_utils__V_9_9 = (mercury__parsing_utils__PS_7 + mercury__parsing_utils__N_8);
#line 591 "parsing_utils.m"
    mercury__parsing_utils__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 0)));
#line 591 "parsing_utils.m"
    mercury__parsing_utils__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 1)));
#line 591 "parsing_utils.m"
    mercury__parsing_utils__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 2)));
#line 591 "parsing_utils.m"
    mercury__parsing_utils__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 3)));
#line 591 "parsing_utils.m"
    mercury__parsing_utils__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_6, (MR_Integer) 4)));
#line 591 "parsing_utils.m"
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_9_9 <= mercury__parsing_utils__V_10_10);
#line 589 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 589 "parsing_utils.m"
      {
#line 592 "parsing_utils.m"
        mercury__parsing_utils__V_11_11 = (MR_Integer) 0;
#line 592 "parsing_utils.m"
        {
#line 592 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__match_string_2_5_p_0(mercury__parsing_utils__N_8, mercury__parsing_utils__V_11_11, mercury__parsing_utils__MatchStr_5, mercury__parsing_utils__PS_7, mercury__parsing_utils__V_13_13);
        }
#line 589 "parsing_utils.m"
      }
#line 587 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 587 "parsing_utils.m"
      {
#line 587 "parsing_utils.m"
        *mercury__parsing_utils__HeadVar__4_4 = (mercury__parsing_utils__PS_7 + mercury__parsing_utils__N_8);
#line 587 "parsing_utils.m"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 587 "parsing_utils.m"
      }
#line 587 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 587 "parsing_utils.m"
  }
#line 585 "parsing_utils.m"
}

#line 510 "parsing_utils.m"
void MR_CALL 
mercury__parsing_utils__offset_to_line_number_and_position_2_6_p_0(
#line 510 "parsing_utils.m"
  MR_ArrayPtr mercury__parsing_utils__LineNos_7,
#line 510 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__Lo_8,
#line 510 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__Hi_9,
#line 510 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__Offset_10,
#line 510 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__LineNo_11,
#line 510 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__Pos_12)
#line 510 "parsing_utils.m"
{
#line 527 "parsing_utils.m"
  while (MR_TRUE)
#line 527 "parsing_utils.m"
    {
#line 527 "parsing_utils.m"
      /* tailcall optimized into a loop */
#line 527 "parsing_utils.m"
      {
#line 527 "parsing_utils.m"
        MR_bool mercury__parsing_utils__succeeded = (mercury__parsing_utils__Lo_8 < mercury__parsing_utils__Hi_9);

#line 527 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 518 "parsing_utils.m"
          {
#line 518 "parsing_utils.m"
            MR_Word mercury__parsing_utils__TypeCtorInfo_27_27;
#line 518 "parsing_utils.m"
            MR_Integer mercury__parsing_utils__Mid_13;
#line 518 "parsing_utils.m"
            MR_Integer mercury__parsing_utils__MidOffset_14;
#line 518 "parsing_utils.m"
            MR_Integer mercury__parsing_utils__V_16_16 = (mercury__parsing_utils__Lo_8 + mercury__parsing_utils__Hi_9);
#line 267 "array.opt"
            MR_Box mercury__parsing_utils__conv0_MidOffset_14;

#line 105 "int.opt"
            mercury__parsing_utils__Mid_13 = (mercury__parsing_utils__V_16_16 / (MR_Integer) 2);
#line 4674 "parsing_utils.c"
            mercury__parsing_utils__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 267 "array.opt"
            {
#line 267 "array.opt"
              mercury__array__lookup_3_p_0(mercury__parsing_utils__TypeCtorInfo_27_27, (MR_ArrayPtr) mercury__parsing_utils__LineNos_7, mercury__parsing_utils__Mid_13, &mercury__parsing_utils__conv0_MidOffset_14);
            }
#line 267 "array.opt"
            mercury__parsing_utils__MidOffset_14 = ((MR_Integer) mercury__parsing_utils__conv0_MidOffset_14);
#line 520 "parsing_utils.m"
            mercury__parsing_utils__succeeded = (mercury__parsing_utils__MidOffset_14 < mercury__parsing_utils__Offset_10);
#line 523 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 521 "parsing_utils.m"
              {
#line 521 "parsing_utils.m"
                MR_Integer mercury__parsing_utils__V_18_18 = (mercury__parsing_utils__Mid_13 + (MR_Integer) 1);

#line 521 "parsing_utils.m"
                /* direct tailcall eliminated */
#line 521 "parsing_utils.m"
                {
#line 521 "parsing_utils.m"
                  MR_Integer mercury__parsing_utils__Lo__tmp_copy_8 = mercury__parsing_utils__V_18_18;

#line 521 "parsing_utils.m"
                  mercury__parsing_utils__Lo_8 = mercury__parsing_utils__Lo__tmp_copy_8;
#line 521 "parsing_utils.m"
                }
#line 521 "parsing_utils.m"
                continue;
#line 521 "parsing_utils.m"
              }
#line 523 "parsing_utils.m"
            else
#line 524 "parsing_utils.m"
              {
#line 524 "parsing_utils.m"
                /* direct tailcall eliminated */
#line 524 "parsing_utils.m"
                {
#line 524 "parsing_utils.m"
                  MR_Integer mercury__parsing_utils__Hi__tmp_copy_9 = mercury__parsing_utils__Mid_13;

#line 524 "parsing_utils.m"
                  mercury__parsing_utils__Hi_9 = mercury__parsing_utils__Hi__tmp_copy_9;
#line 524 "parsing_utils.m"
                }
#line 524 "parsing_utils.m"
                continue;
#line 524 "parsing_utils.m"
              }
#line 518 "parsing_utils.m"
          }
#line 527 "parsing_utils.m"
        else
#line 535 "parsing_utils.m"
          {
#line 535 "parsing_utils.m"
            MR_Integer mercury__parsing_utils__LineBegin_15;
#line 535 "parsing_utils.m"
            MR_Integer mercury__parsing_utils__V_25_25;

#line 531 "parsing_utils.m"
            mercury__parsing_utils__succeeded = (mercury__parsing_utils__Lo_8 == (MR_Integer) 0);
#line 533 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 532 "parsing_utils.m"
              mercury__parsing_utils__LineBegin_15 = (MR_Integer) 0;
#line 533 "parsing_utils.m"
            else
#line 534 "parsing_utils.m"
              {
#line 534 "parsing_utils.m"
                MR_Word mercury__parsing_utils__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 534 "parsing_utils.m"
                MR_Integer mercury__parsing_utils__V_20_20;
#line 534 "parsing_utils.m"
                MR_Integer mercury__parsing_utils__V_21_21 = (mercury__parsing_utils__Lo_8 - (MR_Integer) 1);
#line 267 "array.opt"
                MR_Box mercury__parsing_utils__conv1_V_20_20;

#line 267 "array.opt"
                {
#line 267 "array.opt"
                  mercury__array__lookup_3_p_0(mercury__parsing_utils__TypeCtorInfo_28_28, (MR_ArrayPtr) mercury__parsing_utils__LineNos_7, mercury__parsing_utils__V_21_21, &mercury__parsing_utils__conv1_V_20_20);
                }
#line 267 "array.opt"
                mercury__parsing_utils__V_20_20 = ((MR_Integer) mercury__parsing_utils__conv1_V_20_20);
#line 534 "parsing_utils.m"
                mercury__parsing_utils__LineBegin_15 = (mercury__parsing_utils__V_20_20 + (MR_Integer) 1);
#line 534 "parsing_utils.m"
              }
#line 536 "parsing_utils.m"
            *mercury__parsing_utils__LineNo_11 = ((MR_Integer) 1 + mercury__parsing_utils__Lo_8);
#line 537 "parsing_utils.m"
            mercury__parsing_utils__V_25_25 = ((MR_Integer) 1 + mercury__parsing_utils__Offset_10);
#line 537 "parsing_utils.m"
            *mercury__parsing_utils__Pos_12 = (mercury__parsing_utils__V_25_25 - mercury__parsing_utils__LineBegin_15);
#line 535 "parsing_utils.m"
          }
#line 527 "parsing_utils.m"
      }
#line 527 "parsing_utils.m"
      break;
#line 527 "parsing_utils.m"
    }
#line 510 "parsing_utils.m"
}

#line 486 "parsing_utils.m"
void MR_CALL 
mercury__parsing_utils__src_to_line_numbers_2_4_p_0(
#line 486 "parsing_utils.m"
  MR_String mercury__parsing_utils__Str_5,
#line 486 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__Pos0_6,
#line 486 "parsing_utils.m"
  MR_Word mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_0_10,
#line 486 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_11)
#line 486 "parsing_utils.m"
{
#line 497 "parsing_utils.m"
  while (MR_TRUE)
#line 497 "parsing_utils.m"
    {
#line 497 "parsing_utils.m"
      /* tailcall optimized into a loop */
#line 497 "parsing_utils.m"
      {
#line 497 "parsing_utils.m"
        MR_bool mercury__parsing_utils__succeeded;
#line 497 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__Pos_8;
#line 497 "parsing_utils.m"
        MR_Char mercury__parsing_utils__Char_9;

#line 580 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__src_to_line_numbers_2_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__parsing_utils__Str_5 ;
	Index =  mercury__parsing_utils__Pos0_6 ;
		{
#line 580 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4837 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__parsing_utils__Pos_8  = NextIndex;
	 mercury__parsing_utils__Char_9  = Ch;
#line 580 "string.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 497 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 495 "parsing_utils.m"
          {
#line 495 "parsing_utils.m"
            MR_Word mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_12_12;

#line 491 "parsing_utils.m"
            mercury__parsing_utils__succeeded = (mercury__parsing_utils__Char_9 == (MR_Char) 10);
#line 493 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 492 "parsing_utils.m"
              {
#line 492 "parsing_utils.m"
                mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "parsing_utils.m"
                MR_hl_field(MR_mktag(1), mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_12_12, 0) = ((MR_Box) (mercury__parsing_utils__Pos0_6));
#line 492 "parsing_utils.m"
                MR_hl_field(MR_mktag(1), mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_12_12, 1) = ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_0_10));
#line 492 "parsing_utils.m"
              }
#line 493 "parsing_utils.m"
            else
#line 492 "parsing_utils.m"
              mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_12_12 = mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_0_10;
#line 496 "parsing_utils.m"
            /* direct tailcall eliminated */
#line 496 "parsing_utils.m"
            {
#line 496 "parsing_utils.m"
              MR_Integer mercury__parsing_utils__Pos0__tmp_copy_6 = mercury__parsing_utils__Pos_8;
#line 496 "parsing_utils.m"
              MR_Word mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_0__tmp_copy_10 = mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_12_12;

#line 496 "parsing_utils.m"
              mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_0_10 = mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_0__tmp_copy_10;
#line 496 "parsing_utils.m"
              mercury__parsing_utils__Pos0_6 = mercury__parsing_utils__Pos0__tmp_copy_6;
#line 496 "parsing_utils.m"
            }
#line 496 "parsing_utils.m"
            continue;
#line 495 "parsing_utils.m"
          }
#line 497 "parsing_utils.m"
        else
#line 498 "parsing_utils.m"
          {
#line 498 "parsing_utils.m"
            MR_Word base;
#line 498 "parsing_utils.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "parsing_utils.m"
            *mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_11 = base;
#line 498 "parsing_utils.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__parsing_utils__Pos0_6));
#line 498 "parsing_utils.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_RevLineNosList_0_10));
#line 498 "parsing_utils.m"
          }
#line 497 "parsing_utils.m"
      }
#line 497 "parsing_utils.m"
      break;
#line 497 "parsing_utils.m"
    }
#line 486 "parsing_utils.m"
}

#line 437 "parsing_utils.m"
void MR_CALL 
mercury__parsing_utils__unsafe_skip_ws_pred_cast_2_p_0(
#line 437 "parsing_utils.m"
  MR_Word mercury__parsing_utils__SkipWS0_1,
#line 437 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__SkipWS_2)
#line 437 "parsing_utils.m"
{
#line 440 "parsing_utils.m"
  {
#line 440 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;

#line 443 "parsing_utils.m"
{
#define MR_PROC_LABEL mercury__parsing_utils__unsafe_skip_ws_pred_cast_2_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_1 ;
		{
#line 443 "parsing_utils.m"

    SkipWS = SkipWS0;

#line 4944 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__parsing_utils__SkipWS_2  = SkipWS;
#line 443 "parsing_utils.m"
}
#line 440 "parsing_utils.m"
  }
#line 437 "parsing_utils.m"
}

#line 431 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__skip_whitespace_3_p_0(
#line 431 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_4,
#line 431 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__PS0_5,
#line 431 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__PS_6)
#line 431 "parsing_utils.m"
{
#line 433 "parsing_utils.m"
  {
#line 433 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 433 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS_7;
#line 433 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_4, (MR_Integer) 2)));
#line 428 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_4, (MR_Integer) 0)));
#line 428 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_4, (MR_Integer) 1)));
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_4, (MR_Integer) 3)));
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_4, (MR_Integer) 4)));
#line 435 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv2_V_8_8;
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv1_PS_6;

#line 443 "parsing_utils.m"
{
#define MR_PROC_LABEL mercury__parsing_utils__skip_whitespace_3_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_11 ;
		{
#line 443 "parsing_utils.m"

    SkipWS = SkipWS0;

#line 5003 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_7  = SkipWS;
#line 443 "parsing_utils.m"
}
#line 435 "parsing_utils.m"
    mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_7, (MR_Integer) 1)));
#line 435 "parsing_utils.m"
    {
#line 435 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_7), ((MR_Box) (mercury__parsing_utils__Src_4)), &mercury__parsing_utils__conv2_V_8_8, ((MR_Box) (mercury__parsing_utils__PS0_5)), &mercury__parsing_utils__conv1_PS_6);
    }
#line 435 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 435 "parsing_utils.m"
      {
#line 435 "parsing_utils.m"
        *mercury__parsing_utils__PS_6 = ((MR_Integer) mercury__parsing_utils__conv1_PS_6);
#line 435 "parsing_utils.m"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 435 "parsing_utils.m"
      }
#line 433 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 433 "parsing_utils.m"
  }
#line 431 "parsing_utils.m"
}

#line 332 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__comma_separated_list_7_p_0(
#line 332 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_20,
#line 332 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_S_21,
#line 332 "parsing_utils.m"
  MR_Word mercury__parsing_utils__P_8,
#line 332 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_9,
#line 332 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__Result_10,
#line 332 "parsing_utils.m"
  MR_Box mercury__parsing_utils__STATE_VARIABLE_S_0_13,
#line 332 "parsing_utils.m"
  MR_Box * mercury__parsing_utils__STATE_VARIABLE_S_14,
#line 332 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_15,
#line 332 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_16)
#line 332 "parsing_utils.m"
{
#line 763 "parsing_utils.m"
  {
#line 763 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;

#line 764 "parsing_utils.m"
    {
#line 764 "parsing_utils.m"
      return mercury__parsing_utils__succeeded = mercury__parsing_utils__separated_list_8_p_0(mercury__parsing_utils__TypeInfo_for_T_20, mercury__parsing_utils__TypeInfo_for_S_21, (MR_String) ",", mercury__parsing_utils__P_8, mercury__parsing_utils__Src_9, mercury__parsing_utils__Result_10, mercury__parsing_utils__STATE_VARIABLE_S_0_13, mercury__parsing_utils__STATE_VARIABLE_S_14, mercury__parsing_utils__STATE_VARIABLE_PS_0_15, mercury__parsing_utils__STATE_VARIABLE_PS_16);
    }
#line 763 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 763 "parsing_utils.m"
  }
#line 332 "parsing_utils.m"
}

#line 325 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__separated_list_8_p_0(
#line 325 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_48,
#line 325 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_S_49,
#line 325 "parsing_utils.m"
  MR_String mercury__parsing_utils__Separator_9,
#line 325 "parsing_utils.m"
  MR_Word mercury__parsing_utils__P_10,
#line 325 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_11,
#line 325 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__Result_12,
#line 325 "parsing_utils.m"
  MR_Box mercury__parsing_utils__STATE_VARIABLE_S_0_21,
#line 325 "parsing_utils.m"
  MR_Box * mercury__parsing_utils__STATE_VARIABLE_S_22,
#line 325 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_23,
#line 325 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_24)
#line 325 "parsing_utils.m"
{
#line 752 "parsing_utils.m"
  {
#line 752 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 752 "parsing_utils.m"
    MR_Box mercury__parsing_utils__X_19;
#line 752 "parsing_utils.m"
    MR_Box mercury__parsing_utils__STATE_VARIABLE_S_38_38;
#line 752 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_39_39;
#line 749 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__P_10, (MR_Integer) 1)));
#line 749 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_39_39;

#line 749 "parsing_utils.m"
    {
#line 749 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__P_10), ((MR_Box) (mercury__parsing_utils__Src_11)), &mercury__parsing_utils__X_19, mercury__parsing_utils__STATE_VARIABLE_S_0_21, &mercury__parsing_utils__STATE_VARIABLE_S_38_38, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_23)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_39_39);
    }
#line 749 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 749 "parsing_utils.m"
      {
#line 749 "parsing_utils.m"
        mercury__parsing_utils__STATE_VARIABLE_PS_39_39 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_39_39);
#line 749 "parsing_utils.m"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 749 "parsing_utils.m"
      }
#line 752 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 750 "parsing_utils.m"
      {
#line 750 "parsing_utils.m"
        MR_Word mercury__parsing_utils__Xs_20;
#line 750 "parsing_utils.m"
        MR_Word mercury__parsing_utils__RevResult_59;
#line 750 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_60_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 682 "parsing_utils.m"
        {
#line 682 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_p_0(mercury__parsing_utils__Separator_9, mercury__parsing_utils__P_10, mercury__parsing_utils__Src_11, mercury__parsing_utils__V_60_60, &mercury__parsing_utils__RevResult_59, mercury__parsing_utils__STATE_VARIABLE_S_38_38, mercury__parsing_utils__STATE_VARIABLE_S_22, mercury__parsing_utils__STATE_VARIABLE_PS_39_39, mercury__parsing_utils__STATE_VARIABLE_PS_24);
        }
#line 750 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 750 "parsing_utils.m"
          {
#line 118 "list.opt"
            {
#line 118 "list.opt"
              mercury__list__reverse_2_p_0(mercury__parsing_utils__TypeInfo_for_T_48, mercury__parsing_utils__RevResult_59, &mercury__parsing_utils__Xs_20);
            }
#line 751 "parsing_utils.m"
            {
#line 751 "parsing_utils.m"
              MR_Word base;
#line 751 "parsing_utils.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "parsing_utils.m"
              *mercury__parsing_utils__Result_12 = base;
#line 751 "parsing_utils.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__parsing_utils__X_19;
#line 751 "parsing_utils.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parsing_utils__Xs_20));
#line 751 "parsing_utils.m"
            }
#line 751 "parsing_utils.m"
            mercury__parsing_utils__succeeded = MR_TRUE;
#line 750 "parsing_utils.m"
          }
#line 750 "parsing_utils.m"
      }
#line 752 "parsing_utils.m"
    else
#line 753 "parsing_utils.m"
      {
#line 753 "parsing_utils.m"
        *mercury__parsing_utils__Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 753 "parsing_utils.m"
        *mercury__parsing_utils__STATE_VARIABLE_PS_24 = mercury__parsing_utils__STATE_VARIABLE_PS_0_23;
#line 753 "parsing_utils.m"
        *mercury__parsing_utils__STATE_VARIABLE_S_22 = mercury__parsing_utils__STATE_VARIABLE_S_0_21;
#line 753 "parsing_utils.m"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 753 "parsing_utils.m"
      }
#line 752 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 752 "parsing_utils.m"
  }
#line 325 "parsing_utils.m"
}

#line 317 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__brackets_9_p_0(
#line 317 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_27,
#line 317 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_S_28,
#line 317 "parsing_utils.m"
  MR_String mercury__parsing_utils__L_10,
#line 317 "parsing_utils.m"
  MR_String mercury__parsing_utils__R_11,
#line 317 "parsing_utils.m"
  MR_Word mercury__parsing_utils__P_12,
#line 317 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_13,
#line 317 "parsing_utils.m"
  MR_Box * mercury__parsing_utils__Result_14,
#line 317 "parsing_utils.m"
  MR_Box mercury__parsing_utils__STATE_VARIABLE_S_0_19,
#line 317 "parsing_utils.m"
  MR_Box * mercury__parsing_utils__STATE_VARIABLE_S_20,
#line 317 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_21,
#line 317 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_22)
#line 317 "parsing_utils.m"
{
#line 719 "parsing_utils.m"
  {
#line 719 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 719 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_23_23;
#line 719 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_25_25;
#line 719 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_11_34;
#line 719 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS_39;
#line 719 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS0_43;
#line 719 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_11_53;
#line 719 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS_58;
#line 719 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS0_62;
#line 428 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_44_44;
#line 428 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_45_45;
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_46_46;
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_47_47;
#line 435 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv2_V_40_40;
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_23_23;
#line 721 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_3)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 721 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv4_STATE_VARIABLE_PS_25_25;
#line 428 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_63_63;
#line 428 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_64_64;
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_65_65;
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_66_66;
#line 435 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_5)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv7_V_59_59;
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv6_STATE_VARIABLE_PS_22;

#line 807 "parsing_utils.m"
    {
#line 807 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__match_string_4_p_0(mercury__parsing_utils__L_10, mercury__parsing_utils__Src_13, mercury__parsing_utils__STATE_VARIABLE_PS_0_21, &mercury__parsing_utils__STATE_VARIABLE_PS_11_34);
    }
#line 719 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 719 "parsing_utils.m"
      {
#line 428 "parsing_utils.m"
        mercury__parsing_utils__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_13, (MR_Integer) 0)));
#line 428 "parsing_utils.m"
        mercury__parsing_utils__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_13, (MR_Integer) 1)));
#line 428 "parsing_utils.m"
        mercury__parsing_utils__SkipWS0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_13, (MR_Integer) 2)));
#line 428 "parsing_utils.m"
        mercury__parsing_utils__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_13, (MR_Integer) 3)));
#line 428 "parsing_utils.m"
        mercury__parsing_utils__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_13, (MR_Integer) 4)));
#line 443 "parsing_utils.m"
{
#define MR_PROC_LABEL mercury__parsing_utils__brackets_9_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_43 ;
		{
#line 443 "parsing_utils.m"

    SkipWS = SkipWS0;

#line 5307 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_39  = SkipWS;
#line 443 "parsing_utils.m"
}
#line 435 "parsing_utils.m"
        mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_39, (MR_Integer) 1)));
#line 435 "parsing_utils.m"
        {
#line 435 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_39), ((MR_Box) (mercury__parsing_utils__Src_13)), &mercury__parsing_utils__conv2_V_40_40, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_11_34)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_23_23);
        }
#line 435 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 435 "parsing_utils.m"
          {
#line 435 "parsing_utils.m"
            mercury__parsing_utils__STATE_VARIABLE_PS_23_23 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_23_23);
#line 435 "parsing_utils.m"
            mercury__parsing_utils__succeeded = MR_TRUE;
#line 435 "parsing_utils.m"
          }
#line 719 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 719 "parsing_utils.m"
          {
#line 721 "parsing_utils.m"
            mercury__parsing_utils__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__P_12, (MR_Integer) 1)));
#line 721 "parsing_utils.m"
            {
#line 721 "parsing_utils.m"
              mercury__parsing_utils__succeeded = mercury__parsing_utils__func_3(((MR_Box) mercury__parsing_utils__P_12), ((MR_Box) (mercury__parsing_utils__Src_13)), mercury__parsing_utils__Result_14, mercury__parsing_utils__STATE_VARIABLE_S_0_19, mercury__parsing_utils__STATE_VARIABLE_S_20, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_23_23)), &mercury__parsing_utils__conv4_STATE_VARIABLE_PS_25_25);
            }
#line 721 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 721 "parsing_utils.m"
              {
#line 721 "parsing_utils.m"
                mercury__parsing_utils__STATE_VARIABLE_PS_25_25 = ((MR_Integer) mercury__parsing_utils__conv4_STATE_VARIABLE_PS_25_25);
#line 721 "parsing_utils.m"
                mercury__parsing_utils__succeeded = MR_TRUE;
#line 721 "parsing_utils.m"
              }
#line 719 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 719 "parsing_utils.m"
              {
#line 807 "parsing_utils.m"
                {
#line 807 "parsing_utils.m"
                  mercury__parsing_utils__succeeded = mercury__parsing_utils__match_string_4_p_0(mercury__parsing_utils__R_11, mercury__parsing_utils__Src_13, mercury__parsing_utils__STATE_VARIABLE_PS_25_25, &mercury__parsing_utils__STATE_VARIABLE_PS_11_53);
                }
#line 719 "parsing_utils.m"
                if (mercury__parsing_utils__succeeded)
#line 719 "parsing_utils.m"
                  {
#line 428 "parsing_utils.m"
                    mercury__parsing_utils__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_13, (MR_Integer) 0)));
#line 428 "parsing_utils.m"
                    mercury__parsing_utils__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_13, (MR_Integer) 1)));
#line 428 "parsing_utils.m"
                    mercury__parsing_utils__SkipWS0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_13, (MR_Integer) 2)));
#line 428 "parsing_utils.m"
                    mercury__parsing_utils__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_13, (MR_Integer) 3)));
#line 428 "parsing_utils.m"
                    mercury__parsing_utils__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_13, (MR_Integer) 4)));
#line 443 "parsing_utils.m"
{
#define MR_PROC_LABEL mercury__parsing_utils__brackets_9_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_62 ;
		{
#line 443 "parsing_utils.m"

    SkipWS = SkipWS0;

#line 5388 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_58  = SkipWS;
#line 443 "parsing_utils.m"
}
#line 435 "parsing_utils.m"
                    mercury__parsing_utils__func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_58, (MR_Integer) 1)));
#line 435 "parsing_utils.m"
                    {
#line 435 "parsing_utils.m"
                      mercury__parsing_utils__succeeded = mercury__parsing_utils__func_5(((MR_Box) mercury__parsing_utils__SkipWS_58), ((MR_Box) (mercury__parsing_utils__Src_13)), &mercury__parsing_utils__conv7_V_59_59, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_11_53)), &mercury__parsing_utils__conv6_STATE_VARIABLE_PS_22);
                    }
#line 435 "parsing_utils.m"
                    if (mercury__parsing_utils__succeeded)
#line 435 "parsing_utils.m"
                      {
#line 435 "parsing_utils.m"
                        *mercury__parsing_utils__STATE_VARIABLE_PS_22 = ((MR_Integer) mercury__parsing_utils__conv6_STATE_VARIABLE_PS_22);
#line 435 "parsing_utils.m"
                        mercury__parsing_utils__succeeded = MR_TRUE;
#line 435 "parsing_utils.m"
                      }
#line 719 "parsing_utils.m"
                  }
#line 719 "parsing_utils.m"
              }
#line 719 "parsing_utils.m"
          }
#line 719 "parsing_utils.m"
      }
#line 719 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 719 "parsing_utils.m"
  }
#line 317 "parsing_utils.m"
}

#line 311 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__one_or_more_7_p_0(
#line 311 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_23,
#line 311 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_S_24,
#line 311 "parsing_utils.m"
  MR_Word mercury__parsing_utils__P_8,
#line 311 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_9,
#line 311 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__Result_10,
#line 311 "parsing_utils.m"
  MR_Box mercury__parsing_utils__STATE_VARIABLE_S_0_15,
#line 311 "parsing_utils.m"
  MR_Box * mercury__parsing_utils__STATE_VARIABLE_S_16,
#line 311 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_17,
#line 311 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_18)
#line 311 "parsing_utils.m"
{
#line 705 "parsing_utils.m"
  {
#line 705 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 705 "parsing_utils.m"
    MR_Box mercury__parsing_utils__X_13;
#line 705 "parsing_utils.m"
    MR_Word mercury__parsing_utils__Xs_14;
#line 705 "parsing_utils.m"
    MR_Box mercury__parsing_utils__STATE_VARIABLE_S_19_19;
#line 705 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_20_20;
#line 705 "parsing_utils.m"
    MR_Word mercury__parsing_utils__RevResult_34;
#line 705 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_35_35;
#line 706 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__P_8, (MR_Integer) 1)));
#line 706 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_20_20;

#line 706 "parsing_utils.m"
    {
#line 706 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__P_8), ((MR_Box) (mercury__parsing_utils__Src_9)), &mercury__parsing_utils__X_13, mercury__parsing_utils__STATE_VARIABLE_S_0_15, &mercury__parsing_utils__STATE_VARIABLE_S_19_19, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_17)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_20_20);
    }
#line 706 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 706 "parsing_utils.m"
      {
#line 706 "parsing_utils.m"
        mercury__parsing_utils__STATE_VARIABLE_PS_20_20 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_20_20);
#line 706 "parsing_utils.m"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 706 "parsing_utils.m"
      }
#line 705 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 705 "parsing_utils.m"
      {
#line 682 "parsing_utils.m"
        mercury__parsing_utils__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 682 "parsing_utils.m"
        {
#line 682 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__zero_or_more_2_8_p_0(mercury__parsing_utils__TypeInfo_for_T_23, mercury__parsing_utils__TypeInfo_for_S_24, mercury__parsing_utils__P_8, mercury__parsing_utils__Src_9, mercury__parsing_utils__V_35_35, &mercury__parsing_utils__RevResult_34, mercury__parsing_utils__STATE_VARIABLE_S_19_19, mercury__parsing_utils__STATE_VARIABLE_S_16, mercury__parsing_utils__STATE_VARIABLE_PS_20_20, mercury__parsing_utils__STATE_VARIABLE_PS_18);
        }
#line 705 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 705 "parsing_utils.m"
          {
#line 118 "list.opt"
            {
#line 118 "list.opt"
              mercury__list__reverse_2_p_0(mercury__parsing_utils__TypeInfo_for_T_23, mercury__parsing_utils__RevResult_34, &mercury__parsing_utils__Xs_14);
            }
#line 708 "parsing_utils.m"
            {
#line 708 "parsing_utils.m"
              MR_Word base;
#line 708 "parsing_utils.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "parsing_utils.m"
              *mercury__parsing_utils__Result_10 = base;
#line 708 "parsing_utils.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__parsing_utils__X_13;
#line 708 "parsing_utils.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parsing_utils__Xs_14));
#line 708 "parsing_utils.m"
            }
#line 708 "parsing_utils.m"
            mercury__parsing_utils__succeeded = MR_TRUE;
#line 705 "parsing_utils.m"
          }
#line 705 "parsing_utils.m"
      }
#line 705 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 705 "parsing_utils.m"
  }
#line 311 "parsing_utils.m"
}

#line 303 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__zero_or_more_7_p_0(
#line 303 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_21,
#line 303 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_S_22,
#line 303 "parsing_utils.m"
  MR_Word mercury__parsing_utils__P_8,
#line 303 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_9,
#line 303 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__Result_10,
#line 303 "parsing_utils.m"
  MR_Box mercury__parsing_utils__STATE_VARIABLE_S_0_14,
#line 303 "parsing_utils.m"
  MR_Box * mercury__parsing_utils__STATE_VARIABLE_S_15,
#line 303 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_16,
#line 303 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_17)
#line 303 "parsing_utils.m"
{
#line 681 "parsing_utils.m"
  {
#line 681 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 681 "parsing_utils.m"
    MR_Word mercury__parsing_utils__RevResult_13;
#line 681 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 682 "parsing_utils.m"
    {
#line 682 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__zero_or_more_2_8_p_0(mercury__parsing_utils__TypeInfo_for_T_21, mercury__parsing_utils__TypeInfo_for_S_22, mercury__parsing_utils__P_8, mercury__parsing_utils__Src_9, mercury__parsing_utils__V_18_18, &mercury__parsing_utils__RevResult_13, mercury__parsing_utils__STATE_VARIABLE_S_0_14, mercury__parsing_utils__STATE_VARIABLE_S_15, mercury__parsing_utils__STATE_VARIABLE_PS_0_16, mercury__parsing_utils__STATE_VARIABLE_PS_17);
    }
#line 681 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 681 "parsing_utils.m"
      {
#line 118 "list.opt"
        {
#line 118 "list.opt"
          mercury__list__reverse_2_p_0(mercury__parsing_utils__TypeInfo_for_T_21, mercury__parsing_utils__RevResult_13, mercury__parsing_utils__Result_10);
        }
#line 118 "list.opt"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 681 "parsing_utils.m"
      }
#line 681 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 681 "parsing_utils.m"
  }
#line 303 "parsing_utils.m"
}

#line 296 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__optional_7_p_0(
#line 296 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_22,
#line 296 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_S_23,
#line 296 "parsing_utils.m"
  MR_Word mercury__parsing_utils__P_8,
#line 296 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_9,
#line 296 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__Result_10,
#line 296 "parsing_utils.m"
  MR_Box mercury__parsing_utils__STATE_VARIABLE_S_0_14,
#line 296 "parsing_utils.m"
  MR_Box * mercury__parsing_utils__STATE_VARIABLE_S_15,
#line 296 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_16,
#line 296 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_17)
#line 296 "parsing_utils.m"
{
#line 654 "parsing_utils.m"
  {
#line 654 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 654 "parsing_utils.m"
    MR_Box mercury__parsing_utils__X_13;
#line 654 "parsing_utils.m"
    MR_Box mercury__parsing_utils__STATE_VARIABLE_S_18_18;
#line 654 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_19_19;
#line 652 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__P_8, (MR_Integer) 1)));
#line 652 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_19_19;

#line 652 "parsing_utils.m"
    {
#line 652 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__P_8), ((MR_Box) (mercury__parsing_utils__Src_9)), &mercury__parsing_utils__X_13, mercury__parsing_utils__STATE_VARIABLE_S_0_14, &mercury__parsing_utils__STATE_VARIABLE_S_18_18, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_16)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_19_19);
    }
#line 652 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 652 "parsing_utils.m"
      {
#line 652 "parsing_utils.m"
        mercury__parsing_utils__STATE_VARIABLE_PS_19_19 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_19_19);
#line 652 "parsing_utils.m"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 652 "parsing_utils.m"
      }
#line 654 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 653 "parsing_utils.m"
      {
#line 653 "parsing_utils.m"
        *mercury__parsing_utils__STATE_VARIABLE_PS_17 = mercury__parsing_utils__STATE_VARIABLE_PS_19_19;
#line 653 "parsing_utils.m"
        *mercury__parsing_utils__STATE_VARIABLE_S_15 = mercury__parsing_utils__STATE_VARIABLE_S_18_18;
#line 653 "parsing_utils.m"
        {
#line 653 "parsing_utils.m"
          MR_Word base;
#line 653 "parsing_utils.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 653 "parsing_utils.m"
          *mercury__parsing_utils__Result_10 = base;
#line 653 "parsing_utils.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__parsing_utils__X_13;
#line 653 "parsing_utils.m"
        }
#line 653 "parsing_utils.m"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 653 "parsing_utils.m"
      }
#line 654 "parsing_utils.m"
    else
#line 655 "parsing_utils.m"
      {
#line 655 "parsing_utils.m"
        *mercury__parsing_utils__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__optional_7_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 5684 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 655 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 655 "parsing_utils.m"
          {
#line 656 "parsing_utils.m"
            *mercury__parsing_utils__STATE_VARIABLE_PS_17 = mercury__parsing_utils__STATE_VARIABLE_PS_0_16;
#line 656 "parsing_utils.m"
            *mercury__parsing_utils__STATE_VARIABLE_S_15 = mercury__parsing_utils__STATE_VARIABLE_S_0_14;
#line 656 "parsing_utils.m"
            mercury__parsing_utils__succeeded = MR_TRUE;
#line 655 "parsing_utils.m"
          }
#line 655 "parsing_utils.m"
      }
#line 654 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 654 "parsing_utils.m"
  }
#line 296 "parsing_utils.m"
}

#line 286 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__fail_with_message_6_p_0(
#line 286 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_13,
#line 286 "parsing_utils.m"
  MR_String mercury__parsing_utils__Msg_7,
#line 286 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__Offset_8,
#line 286 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_9,
#line 286 "parsing_utils.m"
  MR_Box * mercury__parsing_utils__Val_10,
#line 286 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__HeadVar__5_11,
#line 286 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__PS_12)
#line 286 "parsing_utils.m"
{
#line 784 "parsing_utils.m"
  {
#line 784 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;

#line 784 "parsing_utils.m"
    {
#line 784 "parsing_utils.m"
      return mercury__parsing_utils__succeeded = mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_105_108_95_119_105_116_104_95_109_101_115_115_97_103_101_95_95_91_54_93_95_48_6_p_0(mercury__parsing_utils__TypeInfo_for_T_13, mercury__parsing_utils__Msg_7, mercury__parsing_utils__Offset_8, mercury__parsing_utils__Src_9, mercury__parsing_utils__Val_10, mercury__parsing_utils__PS_12);
    }
#line 784 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 784 "parsing_utils.m"
  }
#line 286 "parsing_utils.m"
}

#line 281 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__fail_with_message_5_p_0(
#line 281 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_25,
#line 281 "parsing_utils.m"
  MR_String mercury__parsing_utils__Msg_6,
#line 281 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_7,
#line 281 "parsing_utils.m"
  MR_Box * mercury__parsing_utils__Val_8,
#line 281 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_10,
#line 281 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_11)
#line 281 "parsing_utils.m"
{
#line 768 "parsing_utils.m"
  {
#line 768 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 774 "parsing_utils.m"
    MR_Word mercury__parsing_utils__TypeCtorInfo_26_26 = (MR_Word) &mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0;
#line 774 "parsing_utils.m"
    MR_Word mercury__parsing_utils__TypeCtorInfo_27_27;
#line 774 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 4)));
#line 774 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_13_13;
#line 774 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_14_14;
#line 774 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_15_15;
#line 774 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_16_16;
#line 773 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 0)));
#line 773 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 1)));
#line 773 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 2)));
#line 773 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 3)));
#line 775 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_21_21;
#line 775 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_22_22;
#line 775 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_23_23;
#line 775 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_24_24;

#line 774 "parsing_utils.m"
    {
#line 774 "parsing_utils.m"
      mercury__parsing_utils__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 774 "parsing_utils.m"
      MR_hl_field(MR_mktag(1), mercury__parsing_utils__V_14_14, 0) = ((MR_Box) (mercury__parsing_utils__Msg_6));
#line 774 "parsing_utils.m"
    }
#line 773 "parsing_utils.m"
    {
#line 773 "parsing_utils.m"
      mercury__parsing_utils__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 773 "parsing_utils.m"
      MR_hl_field(MR_mktag(0), mercury__parsing_utils__V_13_13, 0) = ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_10));
#line 773 "parsing_utils.m"
      MR_hl_field(MR_mktag(0), mercury__parsing_utils__V_13_13, 1) = ((MR_Box) (mercury__parsing_utils__V_14_14));
#line 773 "parsing_utils.m"
    }
#line 773 "parsing_utils.m"
    {
#line 773 "parsing_utils.m"
      mercury__mutvar__set_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_26_26, mercury__parsing_utils__V_12_12, ((MR_Box) (mercury__parsing_utils__V_13_13)));
    }
#line 775 "parsing_utils.m"
    mercury__parsing_utils__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 0)));
#line 775 "parsing_utils.m"
    mercury__parsing_utils__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 1)));
#line 775 "parsing_utils.m"
    mercury__parsing_utils__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 2)));
#line 775 "parsing_utils.m"
    mercury__parsing_utils__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 3)));
#line 775 "parsing_utils.m"
    mercury__parsing_utils__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 4)));
#line 5835 "parsing_utils.c"
    mercury__parsing_utils__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 775 "parsing_utils.m"
    {
#line 775 "parsing_utils.m"
      mercury__mutvar__set_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_27_27, mercury__parsing_utils__V_15_15, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_10)));
    }
#line 92 "builtin.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__fail_with_message_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 92 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;

#line 5853 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 92 "builtin.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 774 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 774 "parsing_utils.m"
      {
#line 777 "parsing_utils.m"
        mercury__parsing_utils__V_16_16 = (MR_Integer) 0;
#line 109 "builtin.opt"
        {
#line 109 "builtin.opt"
          mercury__parsing_utils__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__parsing_utils__TypeCtorInfo_27_27, mercury__parsing_utils__TypeInfo_for_T_25, ((MR_Box) (mercury__parsing_utils__V_16_16)), mercury__parsing_utils__Val_8);
        }
#line 774 "parsing_utils.m"
      }
#line 768 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 768 "parsing_utils.m"
      {
#line 779 "parsing_utils.m"
        *mercury__parsing_utils__STATE_VARIABLE_PS_11 = mercury__parsing_utils__STATE_VARIABLE_PS_0_10;
#line 779 "parsing_utils.m"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 768 "parsing_utils.m"
      }
#line 768 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 768 "parsing_utils.m"
  }
#line 281 "parsing_utils.m"
}

#line 274 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__comma_separated_list_5_p_0(
#line 274 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_14,
#line 274 "parsing_utils.m"
  MR_Word mercury__parsing_utils__P_6,
#line 274 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_7,
#line 274 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__Result_8,
#line 274 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_10,
#line 274 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_11)
#line 274 "parsing_utils.m"
{
#line 758 "parsing_utils.m"
  {
#line 758 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;

#line 759 "parsing_utils.m"
    {
#line 759 "parsing_utils.m"
      return mercury__parsing_utils__succeeded = mercury__parsing_utils__separated_list_6_p_0(mercury__parsing_utils__TypeInfo_for_T_14, (MR_String) ",", mercury__parsing_utils__P_6, mercury__parsing_utils__Src_7, mercury__parsing_utils__Result_8, mercury__parsing_utils__STATE_VARIABLE_PS_0_10, mercury__parsing_utils__STATE_VARIABLE_PS_11);
    }
#line 758 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 758 "parsing_utils.m"
  }
#line 274 "parsing_utils.m"
}

#line 268 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__separated_list_6_p_0(
#line 268 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_34,
#line 268 "parsing_utils.m"
  MR_String mercury__parsing_utils__Separator_7,
#line 268 "parsing_utils.m"
  MR_Word mercury__parsing_utils__P_8,
#line 268 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_9,
#line 268 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__Result_10,
#line 268 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_18,
#line 268 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_19)
#line 268 "parsing_utils.m"
{
#line 736 "parsing_utils.m"
  {
#line 736 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 736 "parsing_utils.m"
    MR_Box mercury__parsing_utils__X_16;
#line 736 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_28_28;
#line 733 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__P_8, (MR_Integer) 1)));
#line 733 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_28_28;

#line 733 "parsing_utils.m"
    {
#line 733 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__P_8), ((MR_Box) (mercury__parsing_utils__Src_9)), &mercury__parsing_utils__X_16, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_18)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_28_28);
    }
#line 733 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 733 "parsing_utils.m"
      {
#line 733 "parsing_utils.m"
        mercury__parsing_utils__STATE_VARIABLE_PS_28_28 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_28_28);
#line 733 "parsing_utils.m"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 733 "parsing_utils.m"
      }
#line 736 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 734 "parsing_utils.m"
      {
#line 734 "parsing_utils.m"
        MR_Word mercury__parsing_utils__Xs_17;
#line 734 "parsing_utils.m"
        MR_Word mercury__parsing_utils__RevResult_41;
#line 734 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 662 "parsing_utils.m"
        {
#line 662 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_6_p_0(mercury__parsing_utils__Separator_7, mercury__parsing_utils__P_8, mercury__parsing_utils__Src_9, mercury__parsing_utils__V_42_42, &mercury__parsing_utils__RevResult_41, mercury__parsing_utils__STATE_VARIABLE_PS_28_28, mercury__parsing_utils__STATE_VARIABLE_PS_19);
        }
#line 734 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 734 "parsing_utils.m"
          {
#line 118 "list.opt"
            {
#line 118 "list.opt"
              mercury__list__reverse_2_p_0(mercury__parsing_utils__TypeInfo_for_T_34, mercury__parsing_utils__RevResult_41, &mercury__parsing_utils__Xs_17);
            }
#line 735 "parsing_utils.m"
            {
#line 735 "parsing_utils.m"
              MR_Word base;
#line 735 "parsing_utils.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "parsing_utils.m"
              *mercury__parsing_utils__Result_10 = base;
#line 735 "parsing_utils.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__parsing_utils__X_16;
#line 735 "parsing_utils.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parsing_utils__Xs_17));
#line 735 "parsing_utils.m"
            }
#line 735 "parsing_utils.m"
            mercury__parsing_utils__succeeded = MR_TRUE;
#line 734 "parsing_utils.m"
          }
#line 734 "parsing_utils.m"
      }
#line 736 "parsing_utils.m"
    else
#line 737 "parsing_utils.m"
      {
#line 737 "parsing_utils.m"
        *mercury__parsing_utils__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 737 "parsing_utils.m"
        *mercury__parsing_utils__STATE_VARIABLE_PS_19 = mercury__parsing_utils__STATE_VARIABLE_PS_0_18;
#line 737 "parsing_utils.m"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 737 "parsing_utils.m"
      }
#line 736 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 736 "parsing_utils.m"
  }
#line 268 "parsing_utils.m"
}

#line 261 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__brackets_7_p_0(
#line 261 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_21,
#line 261 "parsing_utils.m"
  MR_String mercury__parsing_utils__L_8,
#line 261 "parsing_utils.m"
  MR_String mercury__parsing_utils__R_9,
#line 261 "parsing_utils.m"
  MR_Word mercury__parsing_utils__P_10,
#line 261 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_11,
#line 261 "parsing_utils.m"
  MR_Box * mercury__parsing_utils__Result_12,
#line 261 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_16,
#line 261 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_17)
#line 261 "parsing_utils.m"
{
#line 712 "parsing_utils.m"
  {
#line 712 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 712 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_18_18;
#line 712 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_19_19;
#line 712 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_11_27;
#line 712 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS_32;
#line 712 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS0_36;
#line 712 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_11_46;
#line 712 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS_51;
#line 712 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS0_55;
#line 428 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_37_37;
#line 428 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_38_38;
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_39_39;
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_40_40;
#line 435 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv2_V_33_33;
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_18_18;
#line 714 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_3)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 714 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv4_STATE_VARIABLE_PS_19_19;
#line 428 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_56_56;
#line 428 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_57_57;
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_58_58;
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_59_59;
#line 435 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_5)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv7_V_52_52;
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv6_STATE_VARIABLE_PS_17;

#line 807 "parsing_utils.m"
    {
#line 807 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__match_string_4_p_0(mercury__parsing_utils__L_8, mercury__parsing_utils__Src_11, mercury__parsing_utils__STATE_VARIABLE_PS_0_16, &mercury__parsing_utils__STATE_VARIABLE_PS_11_27);
    }
#line 712 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 712 "parsing_utils.m"
      {
#line 428 "parsing_utils.m"
        mercury__parsing_utils__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_11, (MR_Integer) 0)));
#line 428 "parsing_utils.m"
        mercury__parsing_utils__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_11, (MR_Integer) 1)));
#line 428 "parsing_utils.m"
        mercury__parsing_utils__SkipWS0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_11, (MR_Integer) 2)));
#line 428 "parsing_utils.m"
        mercury__parsing_utils__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_11, (MR_Integer) 3)));
#line 428 "parsing_utils.m"
        mercury__parsing_utils__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_11, (MR_Integer) 4)));
#line 443 "parsing_utils.m"
{
#define MR_PROC_LABEL mercury__parsing_utils__brackets_7_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_36 ;
		{
#line 443 "parsing_utils.m"

    SkipWS = SkipWS0;

#line 6143 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_32  = SkipWS;
#line 443 "parsing_utils.m"
}
#line 435 "parsing_utils.m"
        mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_32, (MR_Integer) 1)));
#line 435 "parsing_utils.m"
        {
#line 435 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_32), ((MR_Box) (mercury__parsing_utils__Src_11)), &mercury__parsing_utils__conv2_V_33_33, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_11_27)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_18_18);
        }
#line 435 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 435 "parsing_utils.m"
          {
#line 435 "parsing_utils.m"
            mercury__parsing_utils__STATE_VARIABLE_PS_18_18 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_18_18);
#line 435 "parsing_utils.m"
            mercury__parsing_utils__succeeded = MR_TRUE;
#line 435 "parsing_utils.m"
          }
#line 712 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 712 "parsing_utils.m"
          {
#line 714 "parsing_utils.m"
            mercury__parsing_utils__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__P_10, (MR_Integer) 1)));
#line 714 "parsing_utils.m"
            {
#line 714 "parsing_utils.m"
              mercury__parsing_utils__succeeded = mercury__parsing_utils__func_3(((MR_Box) mercury__parsing_utils__P_10), ((MR_Box) (mercury__parsing_utils__Src_11)), mercury__parsing_utils__Result_12, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_18_18)), &mercury__parsing_utils__conv4_STATE_VARIABLE_PS_19_19);
            }
#line 714 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 714 "parsing_utils.m"
              {
#line 714 "parsing_utils.m"
                mercury__parsing_utils__STATE_VARIABLE_PS_19_19 = ((MR_Integer) mercury__parsing_utils__conv4_STATE_VARIABLE_PS_19_19);
#line 714 "parsing_utils.m"
                mercury__parsing_utils__succeeded = MR_TRUE;
#line 714 "parsing_utils.m"
              }
#line 712 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 712 "parsing_utils.m"
              {
#line 807 "parsing_utils.m"
                {
#line 807 "parsing_utils.m"
                  mercury__parsing_utils__succeeded = mercury__parsing_utils__match_string_4_p_0(mercury__parsing_utils__R_9, mercury__parsing_utils__Src_11, mercury__parsing_utils__STATE_VARIABLE_PS_19_19, &mercury__parsing_utils__STATE_VARIABLE_PS_11_46);
                }
#line 712 "parsing_utils.m"
                if (mercury__parsing_utils__succeeded)
#line 712 "parsing_utils.m"
                  {
#line 428 "parsing_utils.m"
                    mercury__parsing_utils__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_11, (MR_Integer) 0)));
#line 428 "parsing_utils.m"
                    mercury__parsing_utils__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_11, (MR_Integer) 1)));
#line 428 "parsing_utils.m"
                    mercury__parsing_utils__SkipWS0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_11, (MR_Integer) 2)));
#line 428 "parsing_utils.m"
                    mercury__parsing_utils__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_11, (MR_Integer) 3)));
#line 428 "parsing_utils.m"
                    mercury__parsing_utils__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_11, (MR_Integer) 4)));
#line 443 "parsing_utils.m"
{
#define MR_PROC_LABEL mercury__parsing_utils__brackets_7_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_55 ;
		{
#line 443 "parsing_utils.m"

    SkipWS = SkipWS0;

#line 6224 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_51  = SkipWS;
#line 443 "parsing_utils.m"
}
#line 435 "parsing_utils.m"
                    mercury__parsing_utils__func_5 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_51, (MR_Integer) 1)));
#line 435 "parsing_utils.m"
                    {
#line 435 "parsing_utils.m"
                      mercury__parsing_utils__succeeded = mercury__parsing_utils__func_5(((MR_Box) mercury__parsing_utils__SkipWS_51), ((MR_Box) (mercury__parsing_utils__Src_11)), &mercury__parsing_utils__conv7_V_52_52, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_11_46)), &mercury__parsing_utils__conv6_STATE_VARIABLE_PS_17);
                    }
#line 435 "parsing_utils.m"
                    if (mercury__parsing_utils__succeeded)
#line 435 "parsing_utils.m"
                      {
#line 435 "parsing_utils.m"
                        *mercury__parsing_utils__STATE_VARIABLE_PS_17 = ((MR_Integer) mercury__parsing_utils__conv6_STATE_VARIABLE_PS_17);
#line 435 "parsing_utils.m"
                        mercury__parsing_utils__succeeded = MR_TRUE;
#line 435 "parsing_utils.m"
                      }
#line 712 "parsing_utils.m"
                  }
#line 712 "parsing_utils.m"
              }
#line 712 "parsing_utils.m"
          }
#line 712 "parsing_utils.m"
      }
#line 712 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 712 "parsing_utils.m"
  }
#line 261 "parsing_utils.m"
}

#line 255 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__one_or_more_5_p_0(
#line 255 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_16,
#line 255 "parsing_utils.m"
  MR_Word mercury__parsing_utils__P_6,
#line 255 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_7,
#line 255 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__Result_8,
#line 255 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_12,
#line 255 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_13)
#line 255 "parsing_utils.m"
{
#line 698 "parsing_utils.m"
  {
#line 698 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 698 "parsing_utils.m"
    MR_Box mercury__parsing_utils__X_10;
#line 698 "parsing_utils.m"
    MR_Word mercury__parsing_utils__Xs_11;
#line 698 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_14_14;
#line 698 "parsing_utils.m"
    MR_Word mercury__parsing_utils__RevResult_23;
#line 698 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_24_24;
#line 699 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__P_6, (MR_Integer) 1)));
#line 699 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_14_14;

#line 699 "parsing_utils.m"
    {
#line 699 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__P_6), ((MR_Box) (mercury__parsing_utils__Src_7)), &mercury__parsing_utils__X_10, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_12)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_14_14);
    }
#line 699 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 699 "parsing_utils.m"
      {
#line 699 "parsing_utils.m"
        mercury__parsing_utils__STATE_VARIABLE_PS_14_14 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_14_14);
#line 699 "parsing_utils.m"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 699 "parsing_utils.m"
      }
#line 698 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 698 "parsing_utils.m"
      {
#line 662 "parsing_utils.m"
        mercury__parsing_utils__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 662 "parsing_utils.m"
        {
#line 662 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__zero_or_more_2_6_p_0(mercury__parsing_utils__TypeInfo_for_T_16, mercury__parsing_utils__P_6, mercury__parsing_utils__Src_7, mercury__parsing_utils__V_24_24, &mercury__parsing_utils__RevResult_23, mercury__parsing_utils__STATE_VARIABLE_PS_14_14, mercury__parsing_utils__STATE_VARIABLE_PS_13);
        }
#line 698 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 698 "parsing_utils.m"
          {
#line 118 "list.opt"
            {
#line 118 "list.opt"
              mercury__list__reverse_2_p_0(mercury__parsing_utils__TypeInfo_for_T_16, mercury__parsing_utils__RevResult_23, &mercury__parsing_utils__Xs_11);
            }
#line 701 "parsing_utils.m"
            {
#line 701 "parsing_utils.m"
              MR_Word base;
#line 701 "parsing_utils.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "parsing_utils.m"
              *mercury__parsing_utils__Result_8 = base;
#line 701 "parsing_utils.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__parsing_utils__X_10;
#line 701 "parsing_utils.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__parsing_utils__Xs_11));
#line 701 "parsing_utils.m"
            }
#line 701 "parsing_utils.m"
            mercury__parsing_utils__succeeded = MR_TRUE;
#line 698 "parsing_utils.m"
          }
#line 698 "parsing_utils.m"
      }
#line 698 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 698 "parsing_utils.m"
  }
#line 255 "parsing_utils.m"
}

#line 247 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__zero_or_more_5_p_0(
#line 247 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_15,
#line 247 "parsing_utils.m"
  MR_Word mercury__parsing_utils__P_6,
#line 247 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_7,
#line 247 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__Result_8,
#line 247 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_11,
#line 247 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_12)
#line 247 "parsing_utils.m"
{
#line 661 "parsing_utils.m"
  {
#line 661 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 661 "parsing_utils.m"
    MR_Word mercury__parsing_utils__RevResult_10;
#line 661 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 662 "parsing_utils.m"
    {
#line 662 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__zero_or_more_2_6_p_0(mercury__parsing_utils__TypeInfo_for_T_15, mercury__parsing_utils__P_6, mercury__parsing_utils__Src_7, mercury__parsing_utils__V_13_13, &mercury__parsing_utils__RevResult_10, mercury__parsing_utils__STATE_VARIABLE_PS_0_11, mercury__parsing_utils__STATE_VARIABLE_PS_12);
    }
#line 661 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 661 "parsing_utils.m"
      {
#line 118 "list.opt"
        {
#line 118 "list.opt"
          mercury__list__reverse_2_p_0(mercury__parsing_utils__TypeInfo_for_T_15, mercury__parsing_utils__RevResult_10, mercury__parsing_utils__Result_8);
        }
#line 118 "list.opt"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 661 "parsing_utils.m"
      }
#line 661 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 661 "parsing_utils.m"
  }
#line 247 "parsing_utils.m"
}

#line 240 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__optional_5_p_0(
#line 240 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_15,
#line 240 "parsing_utils.m"
  MR_Word mercury__parsing_utils__P_6,
#line 240 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_7,
#line 240 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__Result_8,
#line 240 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_11,
#line 240 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_12)
#line 240 "parsing_utils.m"
{
#line 644 "parsing_utils.m"
  {
#line 644 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 644 "parsing_utils.m"
    MR_Box mercury__parsing_utils__X_10;
#line 644 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_13_13;
#line 642 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__P_6, (MR_Integer) 1)));
#line 642 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_13_13;

#line 642 "parsing_utils.m"
    {
#line 642 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__P_6), ((MR_Box) (mercury__parsing_utils__Src_7)), &mercury__parsing_utils__X_10, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_11)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_13_13);
    }
#line 642 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 642 "parsing_utils.m"
      {
#line 642 "parsing_utils.m"
        mercury__parsing_utils__STATE_VARIABLE_PS_13_13 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_13_13);
#line 642 "parsing_utils.m"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 642 "parsing_utils.m"
      }
#line 644 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 643 "parsing_utils.m"
      {
#line 643 "parsing_utils.m"
        *mercury__parsing_utils__STATE_VARIABLE_PS_12 = mercury__parsing_utils__STATE_VARIABLE_PS_13_13;
#line 643 "parsing_utils.m"
        {
#line 643 "parsing_utils.m"
          MR_Word base;
#line 643 "parsing_utils.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 643 "parsing_utils.m"
          *mercury__parsing_utils__Result_8 = base;
#line 643 "parsing_utils.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__parsing_utils__X_10;
#line 643 "parsing_utils.m"
        }
#line 643 "parsing_utils.m"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 643 "parsing_utils.m"
      }
#line 644 "parsing_utils.m"
    else
#line 645 "parsing_utils.m"
      {
#line 645 "parsing_utils.m"
        *mercury__parsing_utils__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__optional_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 6496 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 645 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 645 "parsing_utils.m"
          {
#line 646 "parsing_utils.m"
            *mercury__parsing_utils__STATE_VARIABLE_PS_12 = mercury__parsing_utils__STATE_VARIABLE_PS_0_11;
#line 646 "parsing_utils.m"
            mercury__parsing_utils__succeeded = MR_TRUE;
#line 645 "parsing_utils.m"
          }
#line 645 "parsing_utils.m"
      }
#line 644 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 644 "parsing_utils.m"
  }
#line 240 "parsing_utils.m"
}

#line 234 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__string_literal_5_p_0(
#line 234 "parsing_utils.m"
  MR_Char mercury__parsing_utils__QuoteChar_6,
#line 234 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_7,
#line 234 "parsing_utils.m"
  MR_String * mercury__parsing_utils__String_8,
#line 234 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_14,
#line 234 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_15)
#line 234 "parsing_utils.m"
{
#line 905 "parsing_utils.m"
  {
#line 905 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 905 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__End_13;
#line 905 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_17_17;
#line 905 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_19_19;
#line 905 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_20_20;
#line 905 "parsing_utils.m"
    MR_Char mercury__parsing_utils__V_26_26;
#line 905 "parsing_utils.m"
    MR_Char mercury__parsing_utils__V_27_27;
#line 905 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS_41;
#line 905 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS0_45;
#line 910 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_22_22;
#line 910 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_23_23;
#line 910 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_24_24;
#line 910 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_25_25;
#line 428 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_46_46;
#line 428 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_47_47;
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_48_48;
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_49_49;
#line 435 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv2_V_42_42;
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_15;

#line 906 "parsing_utils.m"
    {
#line 906 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_7, &mercury__parsing_utils__V_26_26, mercury__parsing_utils__STATE_VARIABLE_PS_0_14, &mercury__parsing_utils__STATE_VARIABLE_PS_17_17);
    }
#line 905 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 905 "parsing_utils.m"
      {
#line 906 "parsing_utils.m"
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__QuoteChar_6 == mercury__parsing_utils__V_26_26);
#line 905 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 905 "parsing_utils.m"
          {
#line 908 "parsing_utils.m"
            {
#line 908 "parsing_utils.m"
              mercury__parsing_utils__succeeded = mercury__parsing_utils__string_literal_2_5_p_0(mercury__parsing_utils__Src_7, mercury__parsing_utils__QuoteChar_6, mercury__parsing_utils__STATE_VARIABLE_PS_17_17, &mercury__parsing_utils__STATE_VARIABLE_PS_19_19);
            }
#line 905 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 905 "parsing_utils.m"
              {
#line 910 "parsing_utils.m"
                mercury__parsing_utils__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 0)));
#line 910 "parsing_utils.m"
                mercury__parsing_utils__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 1)));
#line 910 "parsing_utils.m"
                mercury__parsing_utils__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 2)));
#line 910 "parsing_utils.m"
                mercury__parsing_utils__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 3)));
#line 910 "parsing_utils.m"
                mercury__parsing_utils__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 4)));
#line 603 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__string_literal_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__parsing_utils__V_20_20 ;
	Index =  mercury__parsing_utils__STATE_VARIABLE_PS_19_19 ;
		{
#line 603 "string.opt"

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 6644 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__parsing_utils__End_13  = PrevIndex;
	 mercury__parsing_utils__V_27_27  = Ch;
#line 603 "string.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 905 "parsing_utils.m"
                if (mercury__parsing_utils__succeeded)
#line 905 "parsing_utils.m"
                  {
#line 910 "parsing_utils.m"
                    mercury__parsing_utils__succeeded = (mercury__parsing_utils__QuoteChar_6 == mercury__parsing_utils__V_27_27);
#line 905 "parsing_utils.m"
                    if (mercury__parsing_utils__succeeded)
#line 905 "parsing_utils.m"
                      {
#line 428 "parsing_utils.m"
                        mercury__parsing_utils__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 0)));
#line 428 "parsing_utils.m"
                        mercury__parsing_utils__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 1)));
#line 428 "parsing_utils.m"
                        mercury__parsing_utils__SkipWS0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 2)));
#line 428 "parsing_utils.m"
                        mercury__parsing_utils__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 3)));
#line 428 "parsing_utils.m"
                        mercury__parsing_utils__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 4)));
#line 443 "parsing_utils.m"
{
#define MR_PROC_LABEL mercury__parsing_utils__string_literal_5_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_45 ;
		{
#line 443 "parsing_utils.m"

    SkipWS = SkipWS0;

#line 6688 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_41  = SkipWS;
#line 443 "parsing_utils.m"
}
#line 435 "parsing_utils.m"
                        mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_41, (MR_Integer) 1)));
#line 435 "parsing_utils.m"
                        {
#line 435 "parsing_utils.m"
                          mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_41), ((MR_Box) (mercury__parsing_utils__Src_7)), &mercury__parsing_utils__conv2_V_42_42, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_19_19)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_15);
                        }
#line 435 "parsing_utils.m"
                        if (mercury__parsing_utils__succeeded)
#line 435 "parsing_utils.m"
                          {
#line 435 "parsing_utils.m"
                            *mercury__parsing_utils__STATE_VARIABLE_PS_15 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_15);
#line 435 "parsing_utils.m"
                            mercury__parsing_utils__succeeded = MR_TRUE;
#line 435 "parsing_utils.m"
                          }
#line 905 "parsing_utils.m"
                        if (mercury__parsing_utils__succeeded)
#line 912 "parsing_utils.m"
                          {
#line 912 "parsing_utils.m"
                            return mercury__parsing_utils__succeeded = mercury__parsing_utils__input_substring_4_p_0(mercury__parsing_utils__Src_7, mercury__parsing_utils__STATE_VARIABLE_PS_17_17, mercury__parsing_utils__End_13, mercury__parsing_utils__String_8);
                          }
#line 905 "parsing_utils.m"
                      }
#line 905 "parsing_utils.m"
                  }
#line 905 "parsing_utils.m"
              }
#line 905 "parsing_utils.m"
          }
#line 905 "parsing_utils.m"
      }
#line 905 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 905 "parsing_utils.m"
  }
#line 234 "parsing_utils.m"
}

#line 225 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__int_literal_4_p_0(
#line 225 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_5,
#line 225 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__Int_6,
#line 225 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_9,
#line 225 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_10)
#line 225 "parsing_utils.m"
{
#line 876 "parsing_utils.m"
  {
#line 876 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 876 "parsing_utils.m"
    MR_String mercury__parsing_utils__IntStr_8;
#line 876 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_5_14;

#line 877 "parsing_utils.m"
    {
#line 877 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__int_literal_as_string_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__IntStr_8, mercury__parsing_utils__STATE_VARIABLE_PS_0_9, mercury__parsing_utils__STATE_VARIABLE_PS_10);
    }
#line 876 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 876 "parsing_utils.m"
      {
#line 392 "string.opt"
        mercury__parsing_utils__V_5_14 = (MR_Integer) 10;
#line 393 "string.opt"
        {
#line 393 "string.opt"
          return mercury__parsing_utils__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__parsing_utils__V_5_14, mercury__parsing_utils__IntStr_8, mercury__parsing_utils__Int_6);
        }
#line 876 "parsing_utils.m"
      }
#line 876 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 876 "parsing_utils.m"
  }
#line 225 "parsing_utils.m"
}

#line 223 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__int_literal_as_string_4_p_0(
#line 223 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_5,
#line 223 "parsing_utils.m"
  MR_String * mercury__parsing_utils__IntStr_6,
#line 223 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_14,
#line 223 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_15)
#line 223 "parsing_utils.m"
{
#line 862 "parsing_utils.m"
  {
#line 862 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 862 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_18_18;
#line 862 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_20_20;
#line 862 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_25_25;
#line 862 "parsing_utils.m"
    MR_Char mercury__parsing_utils__C_60;
#line 862 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__D_61;
#line 862 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_14_63;
#line 862 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS_89;
#line 862 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS0_93;
#line 644 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_13_45;
#line 570 "parsing_utils.m"
    MR_Char mercury__parsing_utils__X_44;
#line 125 "char.opt"
    MR_Char mercury__parsing_utils__Upper_5_67;
#line 867 "parsing_utils.m"
    MR_Char mercury__parsing_utils__V_22_22;
#line 867 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_23_23;
#line 867 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_24_24;
#line 867 "parsing_utils.m"
    MR_Char mercury__parsing_utils__V_32_32;
#line 867 "parsing_utils.m"
    MR_Char mercury__parsing_utils__C_73;
#line 867 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__D_74;
#line 867 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_14_76;
#line 125 "char.opt"
    MR_Char mercury__parsing_utils__Upper_5_80;
#line 888 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_12_12;
#line 428 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_94_94;
#line 428 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_95_95;
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_96_96;
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_97_97;
#line 435 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv2_V_90_90;
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_15;

#line 571 "parsing_utils.m"
    {
#line 571 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__X_44, mercury__parsing_utils__STATE_VARIABLE_PS_0_14, &mercury__parsing_utils__STATE_VARIABLE_PS_13_45);
    }
#line 570 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 570 "parsing_utils.m"
      {
#line 530 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__int_literal_as_string_4_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  (MR_String) "-" ;
	Ch =  mercury__parsing_utils__X_44 ;
		{
#line 530 "string.opt"

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }

#line 6888 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 530 "string.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 570 "parsing_utils.m"
      }
#line 644 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 643 "parsing_utils.m"
      {
#line 643 "parsing_utils.m"
        mercury__parsing_utils__STATE_VARIABLE_PS_18_18 = mercury__parsing_utils__STATE_VARIABLE_PS_13_45;
#line 643 "parsing_utils.m"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 643 "parsing_utils.m"
      }
#line 644 "parsing_utils.m"
    else
#line 645 "parsing_utils.m"
      {
#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__int_literal_as_string_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 6924 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 645 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 645 "parsing_utils.m"
          {
#line 646 "parsing_utils.m"
            mercury__parsing_utils__STATE_VARIABLE_PS_18_18 = mercury__parsing_utils__STATE_VARIABLE_PS_0_14;
#line 646 "parsing_utils.m"
            mercury__parsing_utils__succeeded = MR_TRUE;
#line 645 "parsing_utils.m"
          }
#line 645 "parsing_utils.m"
      }
#line 862 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 862 "parsing_utils.m"
      {
#line 865 "parsing_utils.m"
        mercury__parsing_utils__V_20_20 = (MR_Integer) 10;
#line 885 "parsing_utils.m"
        {
#line 885 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__C_60, mercury__parsing_utils__STATE_VARIABLE_PS_18_18, &mercury__parsing_utils__STATE_VARIABLE_PS_14_63);
        }
#line 862 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 862 "parsing_utils.m"
          {
#line 122 "char.opt"
            {
#line 122 "char.opt"
              mercury__parsing_utils__succeeded = mercury__char__lower_upper_2_p_0(mercury__parsing_utils__C_60, &mercury__parsing_utils__Upper_5_67);
            }
#line 125 "char.opt"
            if (mercury__parsing_utils__succeeded)
#line 124 "char.opt"
              {
#line 124 "char.opt"
                mercury__parsing_utils__succeeded = mercury__char__int_to_digit_2_p_1(&mercury__parsing_utils__D_61, mercury__parsing_utils__Upper_5_67);
              }
#line 125 "char.opt"
            else
#line 126 "char.opt"
              {
#line 126 "char.opt"
                mercury__parsing_utils__succeeded = mercury__char__int_to_digit_2_p_1(&mercury__parsing_utils__D_61, mercury__parsing_utils__C_60);
              }
#line 862 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 862 "parsing_utils.m"
              {
#line 887 "parsing_utils.m"
                mercury__parsing_utils__succeeded = (mercury__parsing_utils__D_61 < mercury__parsing_utils__V_20_20);
#line 862 "parsing_utils.m"
                if (mercury__parsing_utils__succeeded)
#line 862 "parsing_utils.m"
                  {
#line 888 "parsing_utils.m"
                    {
#line 888 "parsing_utils.m"
                      mercury__parsing_utils__succeeded = mercury__parsing_utils__digits_2_5_p_0(mercury__parsing_utils__V_20_20, mercury__parsing_utils__Src_5, mercury__parsing_utils__STATE_VARIABLE_PS_14_63, &mercury__parsing_utils__STATE_VARIABLE_PS_25_25);
                    }
#line 862 "parsing_utils.m"
                    if (mercury__parsing_utils__succeeded)
#line 862 "parsing_utils.m"
                      {
#line 867 "parsing_utils.m"
                        mercury__parsing_utils__V_22_22 = (MR_Char) 46;
#line 867 "parsing_utils.m"
                        {
#line 867 "parsing_utils.m"
                          mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__V_32_32, mercury__parsing_utils__STATE_VARIABLE_PS_25_25, &mercury__parsing_utils__STATE_VARIABLE_PS_23_23);
                        }
#line 867 "parsing_utils.m"
                        if (mercury__parsing_utils__succeeded)
#line 867 "parsing_utils.m"
                          {
#line 867 "parsing_utils.m"
                            mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_22_22 == mercury__parsing_utils__V_32_32);
#line 867 "parsing_utils.m"
                            if (mercury__parsing_utils__succeeded)
#line 867 "parsing_utils.m"
                              {
#line 868 "parsing_utils.m"
                                mercury__parsing_utils__V_24_24 = (MR_Integer) 10;
#line 885 "parsing_utils.m"
                                {
#line 885 "parsing_utils.m"
                                  mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__C_73, mercury__parsing_utils__STATE_VARIABLE_PS_23_23, &mercury__parsing_utils__STATE_VARIABLE_PS_14_76);
                                }
#line 867 "parsing_utils.m"
                                if (mercury__parsing_utils__succeeded)
#line 867 "parsing_utils.m"
                                  {
#line 122 "char.opt"
                                    {
#line 122 "char.opt"
                                      mercury__parsing_utils__succeeded = mercury__char__lower_upper_2_p_0(mercury__parsing_utils__C_73, &mercury__parsing_utils__Upper_5_80);
                                    }
#line 125 "char.opt"
                                    if (mercury__parsing_utils__succeeded)
#line 124 "char.opt"
                                      {
#line 124 "char.opt"
                                        mercury__parsing_utils__succeeded = mercury__char__int_to_digit_2_p_1(&mercury__parsing_utils__D_74, mercury__parsing_utils__Upper_5_80);
                                      }
#line 125 "char.opt"
                                    else
#line 126 "char.opt"
                                      {
#line 126 "char.opt"
                                        mercury__parsing_utils__succeeded = mercury__char__int_to_digit_2_p_1(&mercury__parsing_utils__D_74, mercury__parsing_utils__C_73);
                                      }
#line 867 "parsing_utils.m"
                                    if (mercury__parsing_utils__succeeded)
#line 867 "parsing_utils.m"
                                      {
#line 887 "parsing_utils.m"
                                        mercury__parsing_utils__succeeded = (mercury__parsing_utils__D_74 < mercury__parsing_utils__V_24_24);
#line 867 "parsing_utils.m"
                                        if (mercury__parsing_utils__succeeded)
#line 888 "parsing_utils.m"
                                          {
#line 888 "parsing_utils.m"
                                            mercury__parsing_utils__succeeded = mercury__parsing_utils__digits_2_5_p_0(mercury__parsing_utils__V_24_24, mercury__parsing_utils__Src_5, mercury__parsing_utils__STATE_VARIABLE_PS_14_76, &mercury__parsing_utils__V_12_12);
                                          }
#line 867 "parsing_utils.m"
                                      }
#line 867 "parsing_utils.m"
                                  }
#line 867 "parsing_utils.m"
                              }
#line 867 "parsing_utils.m"
                          }
#line 866 "parsing_utils.m"
                        mercury__parsing_utils__succeeded = !(mercury__parsing_utils__succeeded);
#line 862 "parsing_utils.m"
                        if (mercury__parsing_utils__succeeded)
#line 862 "parsing_utils.m"
                          {
#line 428 "parsing_utils.m"
                            mercury__parsing_utils__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 0)));
#line 428 "parsing_utils.m"
                            mercury__parsing_utils__V_95_95 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 1)));
#line 428 "parsing_utils.m"
                            mercury__parsing_utils__SkipWS0_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 2)));
#line 428 "parsing_utils.m"
                            mercury__parsing_utils__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 3)));
#line 428 "parsing_utils.m"
                            mercury__parsing_utils__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 4)));
#line 443 "parsing_utils.m"
{
#define MR_PROC_LABEL mercury__parsing_utils__int_literal_as_string_4_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_93 ;
		{
#line 443 "parsing_utils.m"

    SkipWS = SkipWS0;

#line 7095 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_89  = SkipWS;
#line 443 "parsing_utils.m"
}
#line 435 "parsing_utils.m"
                            mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_89, (MR_Integer) 1)));
#line 435 "parsing_utils.m"
                            {
#line 435 "parsing_utils.m"
                              mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_89), ((MR_Box) (mercury__parsing_utils__Src_5)), &mercury__parsing_utils__conv2_V_90_90, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_25_25)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_15);
                            }
#line 435 "parsing_utils.m"
                            if (mercury__parsing_utils__succeeded)
#line 435 "parsing_utils.m"
                              {
#line 435 "parsing_utils.m"
                                *mercury__parsing_utils__STATE_VARIABLE_PS_15 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_15);
#line 435 "parsing_utils.m"
                                mercury__parsing_utils__succeeded = MR_TRUE;
#line 435 "parsing_utils.m"
                              }
#line 862 "parsing_utils.m"
                            if (mercury__parsing_utils__succeeded)
#line 872 "parsing_utils.m"
                              {
#line 872 "parsing_utils.m"
                                return mercury__parsing_utils__succeeded = mercury__parsing_utils__input_substring_4_p_0(mercury__parsing_utils__Src_5, mercury__parsing_utils__STATE_VARIABLE_PS_0_14, mercury__parsing_utils__STATE_VARIABLE_PS_25_25, mercury__parsing_utils__IntStr_6);
                              }
#line 862 "parsing_utils.m"
                          }
#line 862 "parsing_utils.m"
                      }
#line 862 "parsing_utils.m"
                  }
#line 862 "parsing_utils.m"
              }
#line 862 "parsing_utils.m"
          }
#line 862 "parsing_utils.m"
      }
#line 862 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 862 "parsing_utils.m"
  }
#line 223 "parsing_utils.m"
}

#line 214 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__float_literal_4_p_0(
#line 214 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_5,
#line 214 "parsing_utils.m"
  MR_Float * mercury__parsing_utils__Float_6,
#line 214 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_9,
#line 214 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_10)
#line 214 "parsing_utils.m"
{
#line 856 "parsing_utils.m"
  {
#line 856 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 856 "parsing_utils.m"
    MR_String mercury__parsing_utils__FloatStr_8;

#line 857 "parsing_utils.m"
    {
#line 857 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__float_literal_as_string_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__FloatStr_8, mercury__parsing_utils__STATE_VARIABLE_PS_0_9, mercury__parsing_utils__STATE_VARIABLE_PS_10);
    }
#line 856 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 856 "parsing_utils.m"
      {
#line 403 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__float_literal_4_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__parsing_utils__FloatStr_8 ;
		{
#line 403 "string.opt"
{
    /*
    ** The %c checks for any erroneous characters appearing after the float;
    ** if there are then sscanf() will return 2 rather than 1.
    */
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        /* MR_TRUE if sscanf succeeds, MR_FALSE otherwise */
}
#line 7196 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__parsing_utils__Float_6  = FloatVal;
#line 403 "string.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 856 "parsing_utils.m"
      }
#line 856 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 856 "parsing_utils.m"
  }
#line 214 "parsing_utils.m"
}

#line 212 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__float_literal_as_string_4_p_0(
#line 212 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_5,
#line 212 "parsing_utils.m"
  MR_String * mercury__parsing_utils__FloatStr_6,
#line 212 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_14,
#line 212 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_15)
#line 212 "parsing_utils.m"
{
#line 824 "parsing_utils.m"
  {
#line 824 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 824 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__EndPlusOne_13;
#line 824 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_19_19;
#line 824 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_21_21;
#line 824 "parsing_utils.m"
    MR_Char mercury__parsing_utils__V_22_22;
#line 824 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_23_23;
#line 824 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_24_24;
#line 824 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_25_25;
#line 824 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_30_30;
#line 824 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_31_31;
#line 824 "parsing_utils.m"
    MR_Char mercury__parsing_utils__V_34_34;
#line 824 "parsing_utils.m"
    MR_Char mercury__parsing_utils__C_45;
#line 824 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__D_46;
#line 824 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_14_48;
#line 824 "parsing_utils.m"
    MR_Char mercury__parsing_utils__C_58;
#line 824 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__D_59;
#line 824 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_14_61;
#line 826 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_18_18;
#line 826 "parsing_utils.m"
    MR_Char mercury__parsing_utils__V_33_33;
#line 125 "char.opt"
    MR_Char mercury__parsing_utils__Upper_5_52;
#line 125 "char.opt"
    MR_Char mercury__parsing_utils__Upper_5_65;
#line 833 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_27_27;
#line 830 "parsing_utils.m"
    MR_Char mercury__parsing_utils__V_11_11;
#line 830 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_26_26;

#line 826 "parsing_utils.m"
    {
#line 826 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__V_33_33, mercury__parsing_utils__STATE_VARIABLE_PS_0_14, &mercury__parsing_utils__STATE_VARIABLE_PS_18_18);
    }
#line 826 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 826 "parsing_utils.m"
      mercury__parsing_utils__succeeded = ((MR_Char) 45 == mercury__parsing_utils__V_33_33);
#line 826 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 826 "parsing_utils.m"
      mercury__parsing_utils__STATE_VARIABLE_PS_19_19 = mercury__parsing_utils__STATE_VARIABLE_PS_18_18;
#line 826 "parsing_utils.m"
    else
#line 826 "parsing_utils.m"
      mercury__parsing_utils__STATE_VARIABLE_PS_19_19 = mercury__parsing_utils__STATE_VARIABLE_PS_0_14;
#line 885 "parsing_utils.m"
    {
#line 885 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__C_45, mercury__parsing_utils__STATE_VARIABLE_PS_19_19, &mercury__parsing_utils__STATE_VARIABLE_PS_14_48);
    }
#line 824 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 824 "parsing_utils.m"
      {
#line 122 "char.opt"
        {
#line 122 "char.opt"
          mercury__parsing_utils__succeeded = mercury__char__lower_upper_2_p_0(mercury__parsing_utils__C_45, &mercury__parsing_utils__Upper_5_52);
        }
#line 125 "char.opt"
        if (mercury__parsing_utils__succeeded)
#line 124 "char.opt"
          {
#line 124 "char.opt"
            mercury__parsing_utils__succeeded = mercury__char__int_to_digit_2_p_1(&mercury__parsing_utils__D_46, mercury__parsing_utils__Upper_5_52);
          }
#line 125 "char.opt"
        else
#line 126 "char.opt"
          {
#line 126 "char.opt"
            mercury__parsing_utils__succeeded = mercury__char__int_to_digit_2_p_1(&mercury__parsing_utils__D_46, mercury__parsing_utils__C_45);
          }
#line 824 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 824 "parsing_utils.m"
          {
#line 887 "parsing_utils.m"
            mercury__parsing_utils__succeeded = (mercury__parsing_utils__D_46 < (MR_Integer) 10);
#line 824 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 824 "parsing_utils.m"
              {
#line 888 "parsing_utils.m"
                {
#line 888 "parsing_utils.m"
                  mercury__parsing_utils__succeeded = mercury__parsing_utils__digits_2_5_p_0((MR_Integer) 10, mercury__parsing_utils__Src_5, mercury__parsing_utils__STATE_VARIABLE_PS_14_48, &mercury__parsing_utils__STATE_VARIABLE_PS_21_21);
                }
#line 824 "parsing_utils.m"
                if (mercury__parsing_utils__succeeded)
#line 824 "parsing_utils.m"
                  {
#line 828 "parsing_utils.m"
                    mercury__parsing_utils__V_22_22 = (MR_Char) 46;
#line 828 "parsing_utils.m"
                    {
#line 828 "parsing_utils.m"
                      mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__V_34_34, mercury__parsing_utils__STATE_VARIABLE_PS_21_21, &mercury__parsing_utils__STATE_VARIABLE_PS_23_23);
                    }
#line 824 "parsing_utils.m"
                    if (mercury__parsing_utils__succeeded)
#line 824 "parsing_utils.m"
                      {
#line 828 "parsing_utils.m"
                        mercury__parsing_utils__succeeded = (mercury__parsing_utils__V_22_22 == mercury__parsing_utils__V_34_34);
#line 824 "parsing_utils.m"
                        if (mercury__parsing_utils__succeeded)
#line 824 "parsing_utils.m"
                          {
#line 829 "parsing_utils.m"
                            mercury__parsing_utils__V_24_24 = (MR_Integer) 10;
#line 885 "parsing_utils.m"
                            {
#line 885 "parsing_utils.m"
                              mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__C_58, mercury__parsing_utils__STATE_VARIABLE_PS_23_23, &mercury__parsing_utils__STATE_VARIABLE_PS_14_61);
                            }
#line 824 "parsing_utils.m"
                            if (mercury__parsing_utils__succeeded)
#line 824 "parsing_utils.m"
                              {
#line 122 "char.opt"
                                {
#line 122 "char.opt"
                                  mercury__parsing_utils__succeeded = mercury__char__lower_upper_2_p_0(mercury__parsing_utils__C_58, &mercury__parsing_utils__Upper_5_65);
                                }
#line 125 "char.opt"
                                if (mercury__parsing_utils__succeeded)
#line 124 "char.opt"
                                  {
#line 124 "char.opt"
                                    mercury__parsing_utils__succeeded = mercury__char__int_to_digit_2_p_1(&mercury__parsing_utils__D_59, mercury__parsing_utils__Upper_5_65);
                                  }
#line 125 "char.opt"
                                else
#line 126 "char.opt"
                                  {
#line 126 "char.opt"
                                    mercury__parsing_utils__succeeded = mercury__char__int_to_digit_2_p_1(&mercury__parsing_utils__D_59, mercury__parsing_utils__C_58);
                                  }
#line 824 "parsing_utils.m"
                                if (mercury__parsing_utils__succeeded)
#line 824 "parsing_utils.m"
                                  {
#line 887 "parsing_utils.m"
                                    mercury__parsing_utils__succeeded = (mercury__parsing_utils__D_59 < mercury__parsing_utils__V_24_24);
#line 824 "parsing_utils.m"
                                    if (mercury__parsing_utils__succeeded)
#line 824 "parsing_utils.m"
                                      {
#line 888 "parsing_utils.m"
                                        {
#line 888 "parsing_utils.m"
                                          mercury__parsing_utils__succeeded = mercury__parsing_utils__digits_2_5_p_0(mercury__parsing_utils__V_24_24, mercury__parsing_utils__Src_5, mercury__parsing_utils__STATE_VARIABLE_PS_14_61, &mercury__parsing_utils__STATE_VARIABLE_PS_25_25);
                                        }
#line 824 "parsing_utils.m"
                                        if (mercury__parsing_utils__succeeded)
#line 824 "parsing_utils.m"
                                          {
#line 830 "parsing_utils.m"
                                            mercury__parsing_utils__V_26_26 = (MR_String) "eE";
#line 571 "parsing_utils.m"
                                            {
#line 571 "parsing_utils.m"
                                              mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__V_11_11, mercury__parsing_utils__STATE_VARIABLE_PS_25_25, &mercury__parsing_utils__STATE_VARIABLE_PS_27_27);
                                            }
#line 830 "parsing_utils.m"
                                            if (mercury__parsing_utils__succeeded)
#line 830 "parsing_utils.m"
                                              {
#line 530 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__float_literal_as_string_4_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__parsing_utils__V_26_26 ;
	Ch =  mercury__parsing_utils__V_11_11 ;
		{
#line 530 "string.opt"

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }

#line 7444 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 530 "string.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 830 "parsing_utils.m"
                                              }
#line 833 "parsing_utils.m"
                                            if (mercury__parsing_utils__succeeded)
#line 831 "parsing_utils.m"
                                              {
#line 831 "parsing_utils.m"
                                                MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_28_28;
#line 831 "parsing_utils.m"
                                                MR_Char mercury__parsing_utils__C_85;
#line 831 "parsing_utils.m"
                                                MR_Integer mercury__parsing_utils__D_86;
#line 831 "parsing_utils.m"
                                                MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_14_88;
#line 850 "parsing_utils.m"
                                                MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_9_78;
#line 844 "parsing_utils.m"
                                                MR_Char mercury__parsing_utils__Char_77;
#line 125 "char.opt"
                                                MR_Char mercury__parsing_utils__Upper_5_92;

#line 844 "parsing_utils.m"
                                                {
#line 844 "parsing_utils.m"
                                                  mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__Char_77, mercury__parsing_utils__STATE_VARIABLE_PS_27_27, &mercury__parsing_utils__STATE_VARIABLE_PS_9_78);
                                                }
#line 844 "parsing_utils.m"
                                                if (mercury__parsing_utils__succeeded)
#line 846 "parsing_utils.m"
                                                  {
#line 846 "parsing_utils.m"
                                                    if ((mercury__parsing_utils__Char_77 == (MR_Char) 43))
#line 846 "parsing_utils.m"
                                                      mercury__parsing_utils__succeeded = MR_TRUE;
#line 846 "parsing_utils.m"
                                                    else
#line 846 "parsing_utils.m"
                                                      if ((mercury__parsing_utils__Char_77 == (MR_Char) 45))
#line 845 "parsing_utils.m"
                                                        mercury__parsing_utils__succeeded = MR_TRUE;
#line 846 "parsing_utils.m"
                                                      else
#line 846 "parsing_utils.m"
                                                        mercury__parsing_utils__succeeded = MR_FALSE;
#line 846 "parsing_utils.m"
                                                  }
#line 850 "parsing_utils.m"
                                                if (mercury__parsing_utils__succeeded)
#line 846 "parsing_utils.m"
                                                  mercury__parsing_utils__STATE_VARIABLE_PS_28_28 = mercury__parsing_utils__STATE_VARIABLE_PS_9_78;
#line 850 "parsing_utils.m"
                                                else
#line 846 "parsing_utils.m"
                                                  mercury__parsing_utils__STATE_VARIABLE_PS_28_28 = mercury__parsing_utils__STATE_VARIABLE_PS_27_27;
#line 885 "parsing_utils.m"
                                                {
#line 885 "parsing_utils.m"
                                                  mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__C_85, mercury__parsing_utils__STATE_VARIABLE_PS_28_28, &mercury__parsing_utils__STATE_VARIABLE_PS_14_88);
                                                }
#line 831 "parsing_utils.m"
                                                if (mercury__parsing_utils__succeeded)
#line 831 "parsing_utils.m"
                                                  {
#line 122 "char.opt"
                                                    {
#line 122 "char.opt"
                                                      mercury__parsing_utils__succeeded = mercury__char__lower_upper_2_p_0(mercury__parsing_utils__C_85, &mercury__parsing_utils__Upper_5_92);
                                                    }
#line 125 "char.opt"
                                                    if (mercury__parsing_utils__succeeded)
#line 124 "char.opt"
                                                      {
#line 124 "char.opt"
                                                        mercury__parsing_utils__succeeded = mercury__char__int_to_digit_2_p_1(&mercury__parsing_utils__D_86, mercury__parsing_utils__Upper_5_92);
                                                      }
#line 125 "char.opt"
                                                    else
#line 126 "char.opt"
                                                      {
#line 126 "char.opt"
                                                        mercury__parsing_utils__succeeded = mercury__char__int_to_digit_2_p_1(&mercury__parsing_utils__D_86, mercury__parsing_utils__C_85);
                                                      }
#line 831 "parsing_utils.m"
                                                    if (mercury__parsing_utils__succeeded)
#line 831 "parsing_utils.m"
                                                      {
#line 887 "parsing_utils.m"
                                                        mercury__parsing_utils__succeeded = (mercury__parsing_utils__D_86 < (MR_Integer) 10);
#line 831 "parsing_utils.m"
                                                        if (mercury__parsing_utils__succeeded)
#line 888 "parsing_utils.m"
                                                          {
#line 888 "parsing_utils.m"
                                                            mercury__parsing_utils__succeeded = mercury__parsing_utils__digits_2_5_p_0((MR_Integer) 10, mercury__parsing_utils__Src_5, mercury__parsing_utils__STATE_VARIABLE_PS_14_88, &mercury__parsing_utils__STATE_VARIABLE_PS_30_30);
                                                          }
#line 831 "parsing_utils.m"
                                                      }
#line 831 "parsing_utils.m"
                                                  }
#line 831 "parsing_utils.m"
                                              }
#line 833 "parsing_utils.m"
                                            else
#line 832 "parsing_utils.m"
                                              {
#line 832 "parsing_utils.m"
                                                mercury__parsing_utils__STATE_VARIABLE_PS_30_30 = mercury__parsing_utils__STATE_VARIABLE_PS_25_25;
#line 832 "parsing_utils.m"
                                                mercury__parsing_utils__succeeded = MR_TRUE;
#line 832 "parsing_utils.m"
                                              }
#line 824 "parsing_utils.m"
                                            if (mercury__parsing_utils__succeeded)
#line 824 "parsing_utils.m"
                                              {
#line 836 "parsing_utils.m"
                                                {
#line 836 "parsing_utils.m"
                                                  mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_117_114_114_101_110_116_95_111_102_102_115_101_116_95_95_91_49_93_95_48_4_p_0(&mercury__parsing_utils__EndPlusOne_13, mercury__parsing_utils__STATE_VARIABLE_PS_30_30, &mercury__parsing_utils__STATE_VARIABLE_PS_31_31);
                                                }
#line 837 "parsing_utils.m"
                                                {
#line 837 "parsing_utils.m"
                                                  mercury__parsing_utils__succeeded = mercury__parsing_utils__skip_whitespace_3_p_0(mercury__parsing_utils__Src_5, mercury__parsing_utils__STATE_VARIABLE_PS_31_31, mercury__parsing_utils__STATE_VARIABLE_PS_15);
                                                }
#line 824 "parsing_utils.m"
                                                if (mercury__parsing_utils__succeeded)
#line 838 "parsing_utils.m"
                                                  {
#line 838 "parsing_utils.m"
                                                    return mercury__parsing_utils__succeeded = mercury__parsing_utils__input_substring_4_p_0(mercury__parsing_utils__Src_5, mercury__parsing_utils__STATE_VARIABLE_PS_0_14, mercury__parsing_utils__EndPlusOne_13, mercury__parsing_utils__FloatStr_6);
                                                  }
#line 824 "parsing_utils.m"
                                              }
#line 824 "parsing_utils.m"
                                          }
#line 824 "parsing_utils.m"
                                      }
#line 824 "parsing_utils.m"
                                  }
#line 824 "parsing_utils.m"
                              }
#line 824 "parsing_utils.m"
                          }
#line 824 "parsing_utils.m"
                      }
#line 824 "parsing_utils.m"
                  }
#line 824 "parsing_utils.m"
              }
#line 824 "parsing_utils.m"
          }
#line 824 "parsing_utils.m"
      }
#line 824 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 824 "parsing_utils.m"
  }
#line 212 "parsing_utils.m"
}

#line 203 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__eof_4_p_0(
#line 203 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_5,
#line 203 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_8,
#line 203 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_9)
#line 203 "parsing_utils.m"
{
#line 547 "parsing_utils.m"
  {
#line 547 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 547 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_15_15;
#line 549 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_11_11;
#line 549 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_12_12;
#line 549 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_13_13;
#line 549 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_14_14;

#line 547 "parsing_utils.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 543 "parsing_utils.m"
    *mercury__parsing_utils__STATE_VARIABLE_PS_9 = mercury__parsing_utils__STATE_VARIABLE_PS_0_8;
#line 549 "parsing_utils.m"
    mercury__parsing_utils__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 0)));
#line 549 "parsing_utils.m"
    mercury__parsing_utils__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 1)));
#line 549 "parsing_utils.m"
    mercury__parsing_utils__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 2)));
#line 549 "parsing_utils.m"
    mercury__parsing_utils__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 3)));
#line 549 "parsing_utils.m"
    mercury__parsing_utils__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 4)));
#line 549 "parsing_utils.m"
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__STATE_VARIABLE_PS_0_8 == mercury__parsing_utils__V_15_15);
#line 547 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 547 "parsing_utils.m"
  }
#line 203 "parsing_utils.m"
}

#line 198 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__skip_to_eol_4_p_0(
#line 198 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_5,
#line 198 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_9,
#line 198 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_10)
#line 198 "parsing_utils.m"
{
#line 800 "parsing_utils.m"
  while (MR_TRUE)
#line 800 "parsing_utils.m"
    {
#line 800 "parsing_utils.m"
      /* tailcall optimized into a loop */
#line 800 "parsing_utils.m"
      {
#line 800 "parsing_utils.m"
        MR_bool mercury__parsing_utils__succeeded;
#line 800 "parsing_utils.m"
        MR_Char mercury__parsing_utils__C_7;
#line 800 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_11_11;

#line 800 "parsing_utils.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 801 "parsing_utils.m"
        {
#line 801 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__C_7, mercury__parsing_utils__STATE_VARIABLE_PS_0_9, &mercury__parsing_utils__STATE_VARIABLE_PS_11_11);
        }
#line 800 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 800 "parsing_utils.m"
          {
#line 802 "parsing_utils.m"
            mercury__parsing_utils__succeeded = (mercury__parsing_utils__C_7 == (MR_Char) 10);
#line 802 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 802 "parsing_utils.m"
              {
#line 802 "parsing_utils.m"
                *mercury__parsing_utils__STATE_VARIABLE_PS_10 = mercury__parsing_utils__STATE_VARIABLE_PS_11_11;
#line 802 "parsing_utils.m"
                mercury__parsing_utils__succeeded = MR_TRUE;
#line 802 "parsing_utils.m"
              }
#line 802 "parsing_utils.m"
            else
#line 802 "parsing_utils.m"
              {
#line 802 "parsing_utils.m"
                /* direct tailcall eliminated */
#line 802 "parsing_utils.m"
                {
#line 802 "parsing_utils.m"
                  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0__tmp_copy_9 = mercury__parsing_utils__STATE_VARIABLE_PS_11_11;

#line 802 "parsing_utils.m"
                  mercury__parsing_utils__STATE_VARIABLE_PS_0_9 = mercury__parsing_utils__STATE_VARIABLE_PS_0__tmp_copy_9;
#line 802 "parsing_utils.m"
                }
#line 802 "parsing_utils.m"
                continue;
#line 802 "parsing_utils.m"
              }
#line 800 "parsing_utils.m"
          }
#line 800 "parsing_utils.m"
        return mercury__parsing_utils__succeeded;
#line 800 "parsing_utils.m"
      }
#line 800 "parsing_utils.m"
      break;
#line 800 "parsing_utils.m"
    }
#line 198 "parsing_utils.m"
}

#line 192 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__whitespace_4_p_0(
#line 192 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_5,
#line 192 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_9,
#line 192 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_10)
#line 192 "parsing_utils.m"
{
#line 788 "parsing_utils.m"
  while (MR_TRUE)
#line 788 "parsing_utils.m"
    {
#line 788 "parsing_utils.m"
      /* tailcall optimized into a loop */
#line 788 "parsing_utils.m"
      {
#line 788 "parsing_utils.m"
        MR_bool mercury__parsing_utils__succeeded;
#line 794 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_11_11;
#line 790 "parsing_utils.m"
        MR_Char mercury__parsing_utils__C_7;

#line 788 "parsing_utils.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 790 "parsing_utils.m"
        {
#line 790 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_5, &mercury__parsing_utils__C_7, mercury__parsing_utils__STATE_VARIABLE_PS_0_9, &mercury__parsing_utils__STATE_VARIABLE_PS_11_11);
        }
#line 790 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 791 "parsing_utils.m"
          {
#line 791 "parsing_utils.m"
            mercury__parsing_utils__succeeded = mercury__char__is_whitespace_1_p_0(mercury__parsing_utils__C_7);
          }
#line 794 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 793 "parsing_utils.m"
          {
#line 793 "parsing_utils.m"
            /* direct tailcall eliminated */
#line 793 "parsing_utils.m"
            {
#line 793 "parsing_utils.m"
              MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0__tmp_copy_9 = mercury__parsing_utils__STATE_VARIABLE_PS_11_11;

#line 793 "parsing_utils.m"
              mercury__parsing_utils__STATE_VARIABLE_PS_0_9 = mercury__parsing_utils__STATE_VARIABLE_PS_0__tmp_copy_9;
#line 793 "parsing_utils.m"
            }
#line 793 "parsing_utils.m"
            continue;
#line 793 "parsing_utils.m"
          }
#line 794 "parsing_utils.m"
        else
#line 795 "parsing_utils.m"
          {
#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__whitespace_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 7818 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 795 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 795 "parsing_utils.m"
              {
#line 795 "parsing_utils.m"
                *mercury__parsing_utils__STATE_VARIABLE_PS_10 = mercury__parsing_utils__STATE_VARIABLE_PS_0_9;
#line 795 "parsing_utils.m"
                mercury__parsing_utils__succeeded = MR_TRUE;
#line 795 "parsing_utils.m"
              }
#line 795 "parsing_utils.m"
          }
#line 788 "parsing_utils.m"
        return mercury__parsing_utils__succeeded;
#line 788 "parsing_utils.m"
      }
#line 788 "parsing_utils.m"
      break;
#line 788 "parsing_utils.m"
    }
#line 192 "parsing_utils.m"
}

#line 186 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__identifier_6_p_0(
#line 186 "parsing_utils.m"
  MR_String mercury__parsing_utils__InitIdChars_7,
#line 186 "parsing_utils.m"
  MR_String mercury__parsing_utils__IdChars_8,
#line 186 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_9,
#line 186 "parsing_utils.m"
  MR_String * mercury__parsing_utils__Identifier_10,
#line 186 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_16,
#line 186 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_17)
#line 186 "parsing_utils.m"
{
#line 932 "parsing_utils.m"
  {
#line 932 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 932 "parsing_utils.m"
    MR_Char mercury__parsing_utils__V_13_13;
#line 932 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_19_19;
#line 932 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_21_21;
#line 932 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS_43;
#line 932 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS0_47;
#line 428 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_48_48;
#line 428 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_49_49;
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_50_50;
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_51_51;
#line 435 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv2_V_44_44;
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_17;

#line 571 "parsing_utils.m"
    {
#line 571 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_9, &mercury__parsing_utils__V_13_13, mercury__parsing_utils__STATE_VARIABLE_PS_0_16, &mercury__parsing_utils__STATE_VARIABLE_PS_19_19);
    }
#line 932 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 932 "parsing_utils.m"
      {
#line 530 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__identifier_6_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__parsing_utils__InitIdChars_7 ;
	Ch =  mercury__parsing_utils__V_13_13 ;
		{
#line 530 "string.opt"

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }

#line 7929 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 530 "string.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 932 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 932 "parsing_utils.m"
          {
#line 935 "parsing_utils.m"
            {
#line 935 "parsing_utils.m"
              mercury__parsing_utils__succeeded = mercury__parsing_utils__identifier_2_5_p_0(mercury__parsing_utils__IdChars_8, mercury__parsing_utils__Src_9, mercury__parsing_utils__STATE_VARIABLE_PS_19_19, &mercury__parsing_utils__STATE_VARIABLE_PS_21_21);
            }
#line 932 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 932 "parsing_utils.m"
              {
#line 428 "parsing_utils.m"
                mercury__parsing_utils__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 0)));
#line 428 "parsing_utils.m"
                mercury__parsing_utils__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 1)));
#line 428 "parsing_utils.m"
                mercury__parsing_utils__SkipWS0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 2)));
#line 428 "parsing_utils.m"
                mercury__parsing_utils__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 3)));
#line 428 "parsing_utils.m"
                mercury__parsing_utils__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 4)));
#line 443 "parsing_utils.m"
{
#define MR_PROC_LABEL mercury__parsing_utils__identifier_6_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_47 ;
		{
#line 443 "parsing_utils.m"

    SkipWS = SkipWS0;

#line 7974 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_43  = SkipWS;
#line 443 "parsing_utils.m"
}
#line 435 "parsing_utils.m"
                mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_43, (MR_Integer) 1)));
#line 435 "parsing_utils.m"
                {
#line 435 "parsing_utils.m"
                  mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_43), ((MR_Box) (mercury__parsing_utils__Src_9)), &mercury__parsing_utils__conv2_V_44_44, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_21_21)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_17);
                }
#line 435 "parsing_utils.m"
                if (mercury__parsing_utils__succeeded)
#line 435 "parsing_utils.m"
                  {
#line 435 "parsing_utils.m"
                    *mercury__parsing_utils__STATE_VARIABLE_PS_17 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_17);
#line 435 "parsing_utils.m"
                    mercury__parsing_utils__succeeded = MR_TRUE;
#line 435 "parsing_utils.m"
                  }
#line 932 "parsing_utils.m"
                if (mercury__parsing_utils__succeeded)
#line 938 "parsing_utils.m"
                  {
#line 938 "parsing_utils.m"
                    return mercury__parsing_utils__succeeded = mercury__parsing_utils__input_substring_4_p_0(mercury__parsing_utils__Src_9, mercury__parsing_utils__STATE_VARIABLE_PS_0_16, mercury__parsing_utils__STATE_VARIABLE_PS_21_21, mercury__parsing_utils__Identifier_10);
                  }
#line 932 "parsing_utils.m"
              }
#line 932 "parsing_utils.m"
          }
#line 932 "parsing_utils.m"
      }
#line 932 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 932 "parsing_utils.m"
  }
#line 186 "parsing_utils.m"
}

#line 178 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__ikeyword_6_p_0(
#line 178 "parsing_utils.m"
  MR_String mercury__parsing_utils__IdChars_7,
#line 178 "parsing_utils.m"
  MR_String mercury__parsing_utils__Keyword_8,
#line 178 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_9,
#line 178 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_13,
#line 178 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_14)
#line 178 "parsing_utils.m"
{
#line 817 "parsing_utils.m"
  {
#line 817 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 817 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_15_15;
#line 817 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS_27;
#line 817 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS0_31;
#line 570 "parsing_utils.m"
    MR_Char mercury__parsing_utils__V_11_11;
#line 571 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_12_12;
#line 428 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_32_32;
#line 428 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_33_33;
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_34_34;
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_35_35;
#line 435 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv2_V_28_28;
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_14;

#line 817 "parsing_utils.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 818 "parsing_utils.m"
    {
#line 818 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__imatch_string_4_p_0(mercury__parsing_utils__Keyword_8, mercury__parsing_utils__Src_9, mercury__parsing_utils__STATE_VARIABLE_PS_0_13, &mercury__parsing_utils__STATE_VARIABLE_PS_15_15);
    }
#line 817 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 817 "parsing_utils.m"
      {
#line 571 "parsing_utils.m"
        {
#line 571 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_9, &mercury__parsing_utils__V_11_11, mercury__parsing_utils__STATE_VARIABLE_PS_15_15, &mercury__parsing_utils__V_12_12);
        }
#line 570 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 570 "parsing_utils.m"
          {
#line 530 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__ikeyword_6_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__parsing_utils__IdChars_7 ;
	Ch =  mercury__parsing_utils__V_11_11 ;
		{
#line 530 "string.opt"

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }

#line 8106 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 530 "string.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 570 "parsing_utils.m"
          }
#line 819 "parsing_utils.m"
        mercury__parsing_utils__succeeded = !(mercury__parsing_utils__succeeded);
#line 817 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 817 "parsing_utils.m"
          {
#line 428 "parsing_utils.m"
            mercury__parsing_utils__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 0)));
#line 428 "parsing_utils.m"
            mercury__parsing_utils__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 1)));
#line 428 "parsing_utils.m"
            mercury__parsing_utils__SkipWS0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 2)));
#line 428 "parsing_utils.m"
            mercury__parsing_utils__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 3)));
#line 428 "parsing_utils.m"
            mercury__parsing_utils__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 4)));
#line 443 "parsing_utils.m"
{
#define MR_PROC_LABEL mercury__parsing_utils__ikeyword_6_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_31 ;
		{
#line 443 "parsing_utils.m"

    SkipWS = SkipWS0;

#line 8146 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_27  = SkipWS;
#line 443 "parsing_utils.m"
}
#line 435 "parsing_utils.m"
            mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_27, (MR_Integer) 1)));
#line 435 "parsing_utils.m"
            {
#line 435 "parsing_utils.m"
              mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_27), ((MR_Box) (mercury__parsing_utils__Src_9)), &mercury__parsing_utils__conv2_V_28_28, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_15_15)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_14);
            }
#line 435 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 435 "parsing_utils.m"
              {
#line 435 "parsing_utils.m"
                *mercury__parsing_utils__STATE_VARIABLE_PS_14 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_14);
#line 435 "parsing_utils.m"
                mercury__parsing_utils__succeeded = MR_TRUE;
#line 435 "parsing_utils.m"
              }
#line 817 "parsing_utils.m"
          }
#line 817 "parsing_utils.m"
      }
#line 817 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 817 "parsing_utils.m"
  }
#line 178 "parsing_utils.m"
}

#line 171 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__keyword_6_p_0(
#line 171 "parsing_utils.m"
  MR_String mercury__parsing_utils__IdChars_7,
#line 171 "parsing_utils.m"
  MR_String mercury__parsing_utils__Keyword_8,
#line 171 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_9,
#line 171 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_13,
#line 171 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_14)
#line 171 "parsing_utils.m"
{
#line 812 "parsing_utils.m"
  {
#line 812 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 812 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_15_15;
#line 812 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS_27;
#line 812 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS0_31;
#line 570 "parsing_utils.m"
    MR_Char mercury__parsing_utils__V_11_11;
#line 571 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_12_12;
#line 428 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_32_32;
#line 428 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_33_33;
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_34_34;
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_35_35;
#line 435 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv2_V_28_28;
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_14;

#line 812 "parsing_utils.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 813 "parsing_utils.m"
    {
#line 813 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__match_string_4_p_0(mercury__parsing_utils__Keyword_8, mercury__parsing_utils__Src_9, mercury__parsing_utils__STATE_VARIABLE_PS_0_13, &mercury__parsing_utils__STATE_VARIABLE_PS_15_15);
    }
#line 812 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 812 "parsing_utils.m"
      {
#line 571 "parsing_utils.m"
        {
#line 571 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_9, &mercury__parsing_utils__V_11_11, mercury__parsing_utils__STATE_VARIABLE_PS_15_15, &mercury__parsing_utils__V_12_12);
        }
#line 570 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 570 "parsing_utils.m"
          {
#line 530 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__keyword_6_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__parsing_utils__IdChars_7 ;
	Ch =  mercury__parsing_utils__V_11_11 ;
		{
#line 530 "string.opt"

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }

#line 8269 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 530 "string.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 570 "parsing_utils.m"
          }
#line 814 "parsing_utils.m"
        mercury__parsing_utils__succeeded = !(mercury__parsing_utils__succeeded);
#line 812 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 812 "parsing_utils.m"
          {
#line 428 "parsing_utils.m"
            mercury__parsing_utils__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 0)));
#line 428 "parsing_utils.m"
            mercury__parsing_utils__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 1)));
#line 428 "parsing_utils.m"
            mercury__parsing_utils__SkipWS0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 2)));
#line 428 "parsing_utils.m"
            mercury__parsing_utils__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 3)));
#line 428 "parsing_utils.m"
            mercury__parsing_utils__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 4)));
#line 443 "parsing_utils.m"
{
#define MR_PROC_LABEL mercury__parsing_utils__keyword_6_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_31 ;
		{
#line 443 "parsing_utils.m"

    SkipWS = SkipWS0;

#line 8309 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_27  = SkipWS;
#line 443 "parsing_utils.m"
}
#line 435 "parsing_utils.m"
            mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_27, (MR_Integer) 1)));
#line 435 "parsing_utils.m"
            {
#line 435 "parsing_utils.m"
              mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_27), ((MR_Box) (mercury__parsing_utils__Src_9)), &mercury__parsing_utils__conv2_V_28_28, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_15_15)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_14);
            }
#line 435 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 435 "parsing_utils.m"
              {
#line 435 "parsing_utils.m"
                *mercury__parsing_utils__STATE_VARIABLE_PS_14 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_14);
#line 435 "parsing_utils.m"
                mercury__parsing_utils__succeeded = MR_TRUE;
#line 435 "parsing_utils.m"
              }
#line 812 "parsing_utils.m"
          }
#line 812 "parsing_utils.m"
      }
#line 812 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 812 "parsing_utils.m"
  }
#line 171 "parsing_utils.m"
}

#line 165 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__punct_5_p_0(
#line 165 "parsing_utils.m"
  MR_String mercury__parsing_utils__Punct_6,
#line 165 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_7,
#line 165 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_9,
#line 165 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_10)
#line 165 "parsing_utils.m"
{
#line 806 "parsing_utils.m"
  {
#line 806 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 806 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_11_11;
#line 806 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS_16;
#line 806 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS0_20;
#line 428 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_21_21;
#line 428 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_22_22;
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_23_23;
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_24_24;
#line 435 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv2_V_17_17;
#line 435 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv1_STATE_VARIABLE_PS_10;

#line 806 "parsing_utils.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 807 "parsing_utils.m"
    {
#line 807 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__match_string_4_p_0(mercury__parsing_utils__Punct_6, mercury__parsing_utils__Src_7, mercury__parsing_utils__STATE_VARIABLE_PS_0_9, &mercury__parsing_utils__STATE_VARIABLE_PS_11_11);
    }
#line 806 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 806 "parsing_utils.m"
      {
#line 428 "parsing_utils.m"
        mercury__parsing_utils__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 0)));
#line 428 "parsing_utils.m"
        mercury__parsing_utils__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 1)));
#line 428 "parsing_utils.m"
        mercury__parsing_utils__SkipWS0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 2)));
#line 428 "parsing_utils.m"
        mercury__parsing_utils__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 3)));
#line 428 "parsing_utils.m"
        mercury__parsing_utils__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_7, (MR_Integer) 4)));
#line 443 "parsing_utils.m"
{
#define MR_PROC_LABEL mercury__parsing_utils__punct_5_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_20 ;
		{
#line 443 "parsing_utils.m"

    SkipWS = SkipWS0;

#line 8416 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__SkipWS_16  = SkipWS;
#line 443 "parsing_utils.m"
}
#line 435 "parsing_utils.m"
        mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__SkipWS_16, (MR_Integer) 1)));
#line 435 "parsing_utils.m"
        {
#line 435 "parsing_utils.m"
          mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__SkipWS_16), ((MR_Box) (mercury__parsing_utils__Src_7)), &mercury__parsing_utils__conv2_V_17_17, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_11_11)), &mercury__parsing_utils__conv1_STATE_VARIABLE_PS_10);
        }
#line 435 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 435 "parsing_utils.m"
          {
#line 435 "parsing_utils.m"
            *mercury__parsing_utils__STATE_VARIABLE_PS_10 = ((MR_Integer) mercury__parsing_utils__conv1_STATE_VARIABLE_PS_10);
#line 435 "parsing_utils.m"
            mercury__parsing_utils__succeeded = MR_TRUE;
#line 435 "parsing_utils.m"
          }
#line 806 "parsing_utils.m"
      }
#line 806 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 806 "parsing_utils.m"
  }
#line 165 "parsing_utils.m"
}

#line 160 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__char_in_class_5_p_0(
#line 160 "parsing_utils.m"
  MR_String mercury__parsing_utils__CharClass_6,
#line 160 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_7,
#line 160 "parsing_utils.m"
  MR_Char * mercury__parsing_utils__Char_8,
#line 160 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_10,
#line 160 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_11)
#line 160 "parsing_utils.m"
{
#line 570 "parsing_utils.m"
  {
#line 570 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;

#line 571 "parsing_utils.m"
    {
#line 571 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__next_char_4_p_0(mercury__parsing_utils__Src_7, mercury__parsing_utils__Char_8, mercury__parsing_utils__STATE_VARIABLE_PS_0_10, mercury__parsing_utils__STATE_VARIABLE_PS_11);
    }
#line 570 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 570 "parsing_utils.m"
      {
#line 530 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__char_in_class_5_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__parsing_utils__CharClass_6 ;
	Ch =  *mercury__parsing_utils__Char_8 ;
		{
#line 530 "string.opt"

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }

#line 8502 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 530 "string.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 570 "parsing_utils.m"
      }
#line 570 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 570 "parsing_utils.m"
  }
#line 160 "parsing_utils.m"
}

#line 156 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__next_char_no_progress_4_p_0(
#line 156 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_5,
#line 156 "parsing_utils.m"
  MR_Char * mercury__parsing_utils__Char_6,
#line 156 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_11,
#line 156 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_12)
#line 156 "parsing_utils.m"
{
#line 562 "parsing_utils.m"
  {
#line 562 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 562 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 0)));
#line 562 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 1)));
#line 564 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 2)));
#line 564 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 3)));
#line 564 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 4)));

#line 564 "parsing_utils.m"
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__STATE_VARIABLE_PS_0_11 < mercury__parsing_utils__V_13_13);
#line 562 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 562 "parsing_utils.m"
      {
#line 580 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__next_char_no_progress_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__parsing_utils__V_16_16 ;
	Index =  mercury__parsing_utils__STATE_VARIABLE_PS_0_11 ;
		{
#line 580 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 8579 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__parsing_utils__STATE_VARIABLE_PS_12  = NextIndex;
	 *mercury__parsing_utils__Char_6  = Ch;
#line 580 "string.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 562 "parsing_utils.m"
      }
#line 562 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 562 "parsing_utils.m"
  }
#line 156 "parsing_utils.m"
}

#line 150 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__next_char_4_p_0(
#line 150 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_5,
#line 150 "parsing_utils.m"
  MR_Char * mercury__parsing_utils__Char_6,
#line 150 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_11,
#line 150 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_12)
#line 150 "parsing_utils.m"
{
#line 554 "parsing_utils.m"
  {
#line 554 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 555 "parsing_utils.m"
    MR_Word mercury__parsing_utils__TypeCtorInfo_11_37;
#line 555 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 0)));
#line 555 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 1)));
#line 555 "parsing_utils.m"
    MR_Word mercury__parsing_utils__MutVar_31;
#line 555 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__OS0_32;
#line 556 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 2)));
#line 556 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 3)));
#line 556 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 4)));
#line 959 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_33_33;
#line 959 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_34_34;
#line 959 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_35_35;
#line 959 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_36_36;
#line 960 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv0_OS0_32;

#line 556 "parsing_utils.m"
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__STATE_VARIABLE_PS_0_11 < mercury__parsing_utils__V_13_13);
#line 555 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 555 "parsing_utils.m"
      {
#line 580 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__next_char_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__parsing_utils__V_16_16 ;
	Index =  mercury__parsing_utils__STATE_VARIABLE_PS_0_11 ;
		{
#line 580 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 8674 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__parsing_utils__STATE_VARIABLE_PS_12  = NextIndex;
	 *mercury__parsing_utils__Char_6  = Ch;
#line 580 "string.opt"
	}
mercury__parsing_utils__succeeded  = SUCCESS_INDICATOR;
}
#line 555 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 555 "parsing_utils.m"
          {
#line 959 "parsing_utils.m"
            mercury__parsing_utils__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 0)));
#line 959 "parsing_utils.m"
            mercury__parsing_utils__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 1)));
#line 959 "parsing_utils.m"
            mercury__parsing_utils__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 2)));
#line 959 "parsing_utils.m"
            mercury__parsing_utils__MutVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 3)));
#line 959 "parsing_utils.m"
            mercury__parsing_utils__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 4)));
#line 8699 "parsing_utils.c"
            mercury__parsing_utils__TypeCtorInfo_11_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 960 "parsing_utils.m"
            {
#line 960 "parsing_utils.m"
              mercury__mutvar__get_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_11_37, mercury__parsing_utils__MutVar_31, &mercury__parsing_utils__conv0_OS0_32);
            }
#line 960 "parsing_utils.m"
            mercury__parsing_utils__OS0_32 = ((MR_Integer) mercury__parsing_utils__conv0_OS0_32);
#line 961 "parsing_utils.m"
            mercury__parsing_utils__succeeded = (mercury__parsing_utils__STATE_VARIABLE_PS_0_11 > mercury__parsing_utils__OS0_32);
#line 963 "parsing_utils.m"
            if (mercury__parsing_utils__succeeded)
#line 962 "parsing_utils.m"
              {
#line 962 "parsing_utils.m"
                mercury__mutvar__set_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_11_37, mercury__parsing_utils__MutVar_31, ((MR_Box) (mercury__parsing_utils__STATE_VARIABLE_PS_0_11)));
              }
#line 963 "parsing_utils.m"
            else
#line 964 "parsing_utils.m"
              {
#line 964 "parsing_utils.m"
              }
#line 963 "parsing_utils.m"
            mercury__parsing_utils__succeeded = MR_TRUE;
#line 555 "parsing_utils.m"
          }
#line 555 "parsing_utils.m"
      }
#line 554 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 554 "parsing_utils.m"
  }
#line 150 "parsing_utils.m"
}

#line 146 "parsing_utils.m"
MR_bool MR_CALL 
mercury__parsing_utils__input_substring_4_p_0(
#line 146 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_5,
#line 146 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__Start_6,
#line 146 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__EndPlusOne_7,
#line 146 "parsing_utils.m"
  MR_String * mercury__parsing_utils__Substring_8)
#line 146 "parsing_utils.m"
{
#line 577 "parsing_utils.m"
  {
#line 577 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 578 "parsing_utils.m"
    MR_Word mercury__parsing_utils__TypeCtorInfo_11_31;
#line 578 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 0)));
#line 578 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 1)));
#line 578 "parsing_utils.m"
    MR_Word mercury__parsing_utils__MutVar_25;
#line 578 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__OS0_26;
#line 578 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 2)));
#line 578 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 3)));
#line 578 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 4)));
#line 959 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_27_27;
#line 959 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_28_28;
#line 959 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_29_29;
#line 959 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_30_30;
#line 960 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv0_OS0_26;

#line 578 "parsing_utils.m"
    mercury__parsing_utils__succeeded = (mercury__parsing_utils__EndPlusOne_7 <= mercury__parsing_utils__V_9_9);
#line 578 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 578 "parsing_utils.m"
      {
#line 791 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__input_substring_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__parsing_utils__V_11_11 ;
	Start =  mercury__parsing_utils__Start_6 ;
	End =  mercury__parsing_utils__EndPlusOne_7 ;
		{
#line 791 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 8808 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__parsing_utils__Substring_8  = SubString;
#line 791 "string.opt"
}
#line 959 "parsing_utils.m"
        mercury__parsing_utils__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 0)));
#line 959 "parsing_utils.m"
        mercury__parsing_utils__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 1)));
#line 959 "parsing_utils.m"
        mercury__parsing_utils__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 2)));
#line 959 "parsing_utils.m"
        mercury__parsing_utils__MutVar_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 3)));
#line 959 "parsing_utils.m"
        mercury__parsing_utils__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_5, (MR_Integer) 4)));
#line 8825 "parsing_utils.c"
        mercury__parsing_utils__TypeCtorInfo_11_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 960 "parsing_utils.m"
        {
#line 960 "parsing_utils.m"
          mercury__mutvar__get_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_11_31, mercury__parsing_utils__MutVar_25, &mercury__parsing_utils__conv0_OS0_26);
        }
#line 960 "parsing_utils.m"
        mercury__parsing_utils__OS0_26 = ((MR_Integer) mercury__parsing_utils__conv0_OS0_26);
#line 961 "parsing_utils.m"
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__Start_6 > mercury__parsing_utils__OS0_26);
#line 963 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 962 "parsing_utils.m"
          {
#line 962 "parsing_utils.m"
            mercury__mutvar__set_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_11_31, mercury__parsing_utils__MutVar_25, ((MR_Box) (mercury__parsing_utils__Start_6)));
          }
#line 963 "parsing_utils.m"
        else
#line 964 "parsing_utils.m"
          {
#line 964 "parsing_utils.m"
          }
#line 963 "parsing_utils.m"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 578 "parsing_utils.m"
      }
#line 577 "parsing_utils.m"
    return mercury__parsing_utils__succeeded;
#line 577 "parsing_utils.m"
  }
#line 146 "parsing_utils.m"
}

#line 139 "parsing_utils.m"
void MR_CALL 
mercury__parsing_utils__offset_to_line_number_and_position_4_p_0(
#line 139 "parsing_utils.m"
  MR_ArrayPtr mercury__parsing_utils__LineNos_5,
#line 139 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__Offset_6,
#line 139 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__LineNo_7,
#line 139 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__Pos_8)
#line 139 "parsing_utils.m"
{
#line 503 "parsing_utils.m"
  {
#line 503 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 503 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__Hi_10;
#line 503 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_11_11;
#line 254 "array.opt"
    MR_Word mercury__parsing_utils__TypeCtorInfo_13_16;

#line 254 "array.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__offset_to_line_number_and_position_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__parsing_utils__LineNos_5 , Array);
		{
#line 254 "array.opt"

    Max = Array->size;

#line 8897 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__V_11_11  = Max;
#line 254 "array.opt"
}
#line 505 "parsing_utils.m"
    mercury__parsing_utils__Hi_10 = (mercury__parsing_utils__V_11_11 - (MR_Integer) 1);
#line 506 "parsing_utils.m"
    {
#line 506 "parsing_utils.m"
      mercury__parsing_utils__offset_to_line_number_and_position_2_6_p_0(mercury__parsing_utils__LineNos_5, (MR_Integer) 0, mercury__parsing_utils__Hi_10, mercury__parsing_utils__Offset_6, mercury__parsing_utils__LineNo_7, mercury__parsing_utils__Pos_8);
#line 506 "parsing_utils.m"
      return;
    }
#line 503 "parsing_utils.m"
  }
#line 139 "parsing_utils.m"
}

#line 133 "parsing_utils.m"
MR_ArrayPtr MR_CALL 
mercury__parsing_utils__src_to_line_numbers_1_f_0(
#line 133 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_3)
#line 133 "parsing_utils.m"
{
#line 481 "parsing_utils.m"
  {
#line 481 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 481 "parsing_utils.m"
    MR_ArrayPtr mercury__parsing_utils__LineNos_4;
#line 481 "parsing_utils.m"
    MR_Word mercury__parsing_utils__TypeCtorInfo_13_13;
#line 481 "parsing_utils.m"
    MR_String mercury__parsing_utils__Str_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_3, (MR_Integer) 1)));
#line 481 "parsing_utils.m"
    MR_Word mercury__parsing_utils__RevLineNosList_6;
#line 481 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 482 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_3, (MR_Integer) 0)));
#line 482 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_3, (MR_Integer) 2)));
#line 482 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_3, (MR_Integer) 3)));
#line 482 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_3, (MR_Integer) 4)));
#line 484 "parsing_utils.m"
    MR_ArrayPtr mercury__parsing_utils__conv0_LineNos_4;

#line 483 "parsing_utils.m"
    {
#line 483 "parsing_utils.m"
      mercury__parsing_utils__src_to_line_numbers_2_4_p_0(mercury__parsing_utils__Str_5, (MR_Integer) 0, mercury__parsing_utils__V_8_8, &mercury__parsing_utils__RevLineNosList_6);
    }
#line 8955 "parsing_utils.c"
    mercury__parsing_utils__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 484 "parsing_utils.m"
    {
#line 484 "parsing_utils.m"
      mercury__parsing_utils__conv0_LineNos_4 = mercury__array__from_reverse_list_1_f_0(mercury__parsing_utils__TypeCtorInfo_13_13, mercury__parsing_utils__RevLineNosList_6);
    }
#line 484 "parsing_utils.m"
    mercury__parsing_utils__LineNos_4 = (MR_ArrayPtr) mercury__parsing_utils__conv0_LineNos_4;
#line 481 "parsing_utils.m"
    return mercury__parsing_utils__LineNos_4;
#line 481 "parsing_utils.m"
  }
#line 133 "parsing_utils.m"
}

#line 125 "parsing_utils.m"
void MR_CALL 
mercury__parsing_utils__current_offset_4_p_0(
#line 125 "parsing_utils.m"
  MR_Word mercury__parsing_utils___Src_5,
#line 125 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__Offset_6,
#line 125 "parsing_utils.m"
  MR_Integer mercury__parsing_utils__STATE_VARIABLE_PS_0_8,
#line 125 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__STATE_VARIABLE_PS_9)
#line 125 "parsing_utils.m"
{
#line 542 "parsing_utils.m"
  {
#line 542 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;

#line 542 "parsing_utils.m"
    {
#line 542 "parsing_utils.m"
      mercury__parsing_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_117_114_114_101_110_116_95_111_102_102_115_101_116_95_95_91_49_93_95_48_4_p_0(mercury__parsing_utils__Offset_6, mercury__parsing_utils__STATE_VARIABLE_PS_0_8, mercury__parsing_utils__STATE_VARIABLE_PS_9);
#line 542 "parsing_utils.m"
      return;
    }
#line 542 "parsing_utils.m"
  }
#line 125 "parsing_utils.m"
}

#line 119 "parsing_utils.m"
void MR_CALL 
mercury__parsing_utils__get_skip_whitespace_pred_2_p_0(
#line 119 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_3,
#line 119 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__SkipWS_4)
#line 119 "parsing_utils.m"
{
#line 427 "parsing_utils.m"
  {
#line 427 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 427 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_3, (MR_Integer) 2)));
#line 428 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_3, (MR_Integer) 0)));
#line 428 "parsing_utils.m"
    MR_String mercury__parsing_utils__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_3, (MR_Integer) 1)));
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_3, (MR_Integer) 3)));
#line 428 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_3, (MR_Integer) 4)));

#line 443 "parsing_utils.m"
{
#define MR_PROC_LABEL mercury__parsing_utils__get_skip_whitespace_pred_2_p_0

	MR_Word SkipWS0;
	MR_Word SkipWS;

	SkipWS0 =  mercury__parsing_utils__SkipWS0_5 ;
		{
#line 443 "parsing_utils.m"

    SkipWS = SkipWS0;

#line 9038 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__parsing_utils__SkipWS_4  = SkipWS;
#line 443 "parsing_utils.m"
}
#line 427 "parsing_utils.m"
  }
#line 119 "parsing_utils.m"
}

#line 115 "parsing_utils.m"
void MR_CALL 
mercury__parsing_utils__input_string_3_p_0(
#line 115 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Src_4,
#line 115 "parsing_utils.m"
  MR_String * mercury__parsing_utils__HeadVar__2_2,
#line 115 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__HeadVar__3_3)
#line 115 "parsing_utils.m"
{
#line 423 "parsing_utils.m"
  {
#line 423 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 423 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_6_6;
#line 423 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_7_7;
#line 423 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_8_8;

#line 423 "parsing_utils.m"
    *mercury__parsing_utils__HeadVar__3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_4, (MR_Integer) 0)));
#line 423 "parsing_utils.m"
    *mercury__parsing_utils__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_4, (MR_Integer) 1)));
#line 423 "parsing_utils.m"
    mercury__parsing_utils__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_4, (MR_Integer) 2)));
#line 423 "parsing_utils.m"
    mercury__parsing_utils__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_4, (MR_Integer) 3)));
#line 423 "parsing_utils.m"
    mercury__parsing_utils__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_4, (MR_Integer) 4)));
#line 423 "parsing_utils.m"
  }
#line 115 "parsing_utils.m"
}

#line 9087 "parsing_utils.c"
static MR_bool MR_CALL 
mercury__parsing_utils__new_src_and_ps_3_p_0_1(
#line 9090 "parsing_utils.c"
  MR_Box mercury__parsing_utils__closure_arg,
#line 9092 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 9094 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_2,
#line 9096 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3,
#line 9098 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_4)
#line 9100 "parsing_utils.c"
{
#line 9102 "parsing_utils.c"
  {
#line 9104 "parsing_utils.c"
    MR_bool mercury__parsing_utils__succeeded;
#line 9106 "parsing_utils.c"
    MR_Box mercury__parsing_utils__closure = mercury__parsing_utils__closure_arg;
#line 9108 "parsing_utils.c"
    MR_Integer mercury__parsing_utils__conv0_STATE_VARIABLE_PS_10;

#line 9111 "parsing_utils.c"
    {
#line 9113 "parsing_utils.c"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__whitespace_4_p_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), ((MR_Integer) mercury__parsing_utils__wrapper_arg_3), &mercury__parsing_utils__conv0_STATE_VARIABLE_PS_10);
    }
#line 9116 "parsing_utils.c"
    if (mercury__parsing_utils__succeeded)
#line 9118 "parsing_utils.c"
      {
#line 9120 "parsing_utils.c"
        *mercury__parsing_utils__wrapper_arg_4 = ((MR_Box) (mercury__parsing_utils__conv0_STATE_VARIABLE_PS_10));
#line 9122 "parsing_utils.c"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 9124 "parsing_utils.c"
      }
#line 9126 "parsing_utils.c"
    return mercury__parsing_utils__succeeded;
#line 9128 "parsing_utils.c"
  }
#line 9130 "parsing_utils.c"
}

#line 111 "parsing_utils.m"
void MR_CALL 
mercury__parsing_utils__new_src_and_ps_3_p_0(
#line 111 "parsing_utils.m"
  MR_String mercury__parsing_utils__InputString_4,
#line 111 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__Src_5,
#line 111 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__PS_6)
#line 111 "parsing_utils.m"
{
#line 407 "parsing_utils.m"
  {
#line 407 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 407 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS_16 = (MR_Word) &mercury__parsing_utils_scalar_common_3[2];
#line 414 "parsing_utils.m"
    MR_Word mercury__parsing_utils__TypeCtorInfo_16_24 = (MR_Word) &mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0;
#line 414 "parsing_utils.m"
    MR_Word mercury__parsing_utils__TypeCtorInfo_17_25;
#line 414 "parsing_utils.m"
    MR_Word mercury__parsing_utils__ErrorInfoMutVar_17;
#line 414 "parsing_utils.m"
    MR_Word mercury__parsing_utils__FurthestOffsetMutvar_18;
#line 414 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_19_19 = (MR_Word) &mercury__parsing_utils_scalar_common_1[4];
#line 414 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 414 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_23_23;

#line 414 "parsing_utils.m"
    {
#line 414 "parsing_utils.m"
      mercury__mutvar__new_mutvar_2_p_1(mercury__parsing_utils__TypeCtorInfo_16_24, ((MR_Box) (mercury__parsing_utils__V_19_19)), &mercury__parsing_utils__ErrorInfoMutVar_17);
    }
#line 9170 "parsing_utils.c"
    mercury__parsing_utils__TypeCtorInfo_17_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 415 "parsing_utils.m"
    {
#line 415 "parsing_utils.m"
      mercury__mutvar__new_mutvar_2_p_1(mercury__parsing_utils__TypeCtorInfo_17_25, ((MR_Box) ((MR_Integer) 0)), &mercury__parsing_utils__FurthestOffsetMutvar_18);
    }
#line 231 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__new_src_and_ps_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__parsing_utils__InputString_4 ;
		{
#line 231 "string.opt"

    Length = strlen(Str);

#line 9190 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__V_23_23  = Length;
#line 231 "string.opt"
}
#line 416 "parsing_utils.m"
    {
#line 416 "parsing_utils.m"
      MR_Word base;
#line 416 "parsing_utils.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 416 "parsing_utils.m"
      *mercury__parsing_utils__Src_5 = base;
#line 416 "parsing_utils.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parsing_utils__V_23_23));
#line 416 "parsing_utils.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__parsing_utils__InputString_4));
#line 416 "parsing_utils.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__parsing_utils__SkipWS_16));
#line 416 "parsing_utils.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__parsing_utils__FurthestOffsetMutvar_18));
#line 416 "parsing_utils.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__parsing_utils__ErrorInfoMutVar_17));
#line 416 "parsing_utils.m"
    }
#line 418 "parsing_utils.m"
    *mercury__parsing_utils__PS_6 = (MR_Integer) 0;
#line 407 "parsing_utils.m"
  }
#line 111 "parsing_utils.m"
}

#line 105 "parsing_utils.m"
void MR_CALL 
mercury__parsing_utils__new_src_and_ps_4_p_0(
#line 105 "parsing_utils.m"
  MR_String mercury__parsing_utils__InputString_5,
#line 105 "parsing_utils.m"
  MR_Word mercury__parsing_utils__SkipWS_6,
#line 105 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__Src_7,
#line 105 "parsing_utils.m"
  MR_Integer * mercury__parsing_utils__PS_8)
#line 105 "parsing_utils.m"
{
#line 413 "parsing_utils.m"
  {
#line 413 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 414 "parsing_utils.m"
    MR_Word mercury__parsing_utils__TypeCtorInfo_16_16 = (MR_Word) &mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0;
#line 414 "parsing_utils.m"
    MR_Word mercury__parsing_utils__TypeCtorInfo_17_17;
#line 414 "parsing_utils.m"
    MR_Word mercury__parsing_utils__ErrorInfoMutVar_9;
#line 414 "parsing_utils.m"
    MR_Word mercury__parsing_utils__FurthestOffsetMutvar_10;
#line 414 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_11_11 = (MR_Word) &mercury__parsing_utils_scalar_common_1[4];
#line 414 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 414 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_15_15;

#line 414 "parsing_utils.m"
    {
#line 414 "parsing_utils.m"
      mercury__mutvar__new_mutvar_2_p_1(mercury__parsing_utils__TypeCtorInfo_16_16, ((MR_Box) (mercury__parsing_utils__V_11_11)), &mercury__parsing_utils__ErrorInfoMutVar_9);
    }
#line 9261 "parsing_utils.c"
    mercury__parsing_utils__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 415 "parsing_utils.m"
    {
#line 415 "parsing_utils.m"
      mercury__mutvar__new_mutvar_2_p_1(mercury__parsing_utils__TypeCtorInfo_17_17, ((MR_Box) ((MR_Integer) 0)), &mercury__parsing_utils__FurthestOffsetMutvar_10);
    }
#line 231 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__new_src_and_ps_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__parsing_utils__InputString_5 ;
		{
#line 231 "string.opt"

    Length = strlen(Str);

#line 9281 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__V_15_15  = Length;
#line 231 "string.opt"
}
#line 416 "parsing_utils.m"
    {
#line 416 "parsing_utils.m"
      MR_Word base;
#line 416 "parsing_utils.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 416 "parsing_utils.m"
      *mercury__parsing_utils__Src_7 = base;
#line 416 "parsing_utils.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__parsing_utils__V_15_15));
#line 416 "parsing_utils.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__parsing_utils__InputString_5));
#line 416 "parsing_utils.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__parsing_utils__SkipWS_6));
#line 416 "parsing_utils.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__parsing_utils__FurthestOffsetMutvar_10));
#line 416 "parsing_utils.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__parsing_utils__ErrorInfoMutVar_9));
#line 416 "parsing_utils.m"
    }
#line 418 "parsing_utils.m"
    *mercury__parsing_utils__PS_8 = (MR_Integer) 0;
#line 413 "parsing_utils.m"
  }
#line 105 "parsing_utils.m"
}

#line 9315 "parsing_utils.c"
static MR_bool MR_CALL 
mercury__parsing_utils__parse_3_p_0_1(
#line 9318 "parsing_utils.c"
  MR_Box mercury__parsing_utils__closure_arg,
#line 9320 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_1,
#line 9322 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_2,
#line 9324 "parsing_utils.c"
  MR_Box mercury__parsing_utils__wrapper_arg_3,
#line 9326 "parsing_utils.c"
  MR_Box * mercury__parsing_utils__wrapper_arg_4)
#line 9328 "parsing_utils.c"
{
#line 9330 "parsing_utils.c"
  {
#line 9332 "parsing_utils.c"
    MR_bool mercury__parsing_utils__succeeded;
#line 9334 "parsing_utils.c"
    MR_Box mercury__parsing_utils__closure = mercury__parsing_utils__closure_arg;
#line 9336 "parsing_utils.c"
    MR_Integer mercury__parsing_utils__conv0_STATE_VARIABLE_PS_10;

#line 9339 "parsing_utils.c"
    {
#line 9341 "parsing_utils.c"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__whitespace_4_p_0(((MR_Word) mercury__parsing_utils__wrapper_arg_1), ((MR_Integer) mercury__parsing_utils__wrapper_arg_3), &mercury__parsing_utils__conv0_STATE_VARIABLE_PS_10);
    }
#line 9344 "parsing_utils.c"
    if (mercury__parsing_utils__succeeded)
#line 9346 "parsing_utils.c"
      {
#line 9348 "parsing_utils.c"
        *mercury__parsing_utils__wrapper_arg_4 = ((MR_Box) (mercury__parsing_utils__conv0_STATE_VARIABLE_PS_10));
#line 9350 "parsing_utils.c"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 9352 "parsing_utils.c"
      }
#line 9354 "parsing_utils.c"
    return mercury__parsing_utils__succeeded;
#line 9356 "parsing_utils.c"
  }
#line 9358 "parsing_utils.c"
}

#line 96 "parsing_utils.m"
void MR_CALL 
mercury__parsing_utils__parse_3_p_0(
#line 96 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_8,
#line 96 "parsing_utils.m"
  MR_String mercury__parsing_utils__InputString_4,
#line 96 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Parser_5,
#line 96 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__Result_6)
#line 96 "parsing_utils.m"
{
#line 376 "parsing_utils.m"
  {
#line 376 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 377 "parsing_utils.m"
    MR_Word mercury__parsing_utils__Src_18;
#line 377 "parsing_utils.m"
    MR_Word mercury__parsing_utils__SkipWS_50 = (MR_Word) &mercury__parsing_utils_scalar_common_3[1];
#line 414 "parsing_utils.m"
    MR_Word mercury__parsing_utils__TypeCtorInfo_16_58 = (MR_Word) &mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0;
#line 414 "parsing_utils.m"
    MR_Word mercury__parsing_utils__TypeCtorInfo_17_59;
#line 414 "parsing_utils.m"
    MR_Word mercury__parsing_utils__ErrorInfoMutVar_51;
#line 414 "parsing_utils.m"
    MR_Word mercury__parsing_utils__FurthestOffsetMutvar_52;
#line 414 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_53_53 = (MR_Word) &mercury__parsing_utils_scalar_common_1[4];
#line 414 "parsing_utils.m"
    MR_Word mercury__parsing_utils__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 414 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_57_57;
#line 380 "parsing_utils.m"
    MR_Box mercury__parsing_utils__Val_20;
#line 378 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_21_21;
#line 378 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 378 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv2_V_21_21;

#line 414 "parsing_utils.m"
    {
#line 414 "parsing_utils.m"
      mercury__mutvar__new_mutvar_2_p_1(mercury__parsing_utils__TypeCtorInfo_16_58, ((MR_Box) (mercury__parsing_utils__V_53_53)), &mercury__parsing_utils__ErrorInfoMutVar_51);
    }
#line 9410 "parsing_utils.c"
    mercury__parsing_utils__TypeCtorInfo_17_59 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 415 "parsing_utils.m"
    {
#line 415 "parsing_utils.m"
      mercury__mutvar__new_mutvar_2_p_1(mercury__parsing_utils__TypeCtorInfo_17_59, ((MR_Box) ((MR_Integer) 0)), &mercury__parsing_utils__FurthestOffsetMutvar_52);
    }
#line 231 "string.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__parse_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__parsing_utils__InputString_4 ;
		{
#line 231 "string.opt"

    Length = strlen(Str);

#line 9430 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__V_57_57  = Length;
#line 231 "string.opt"
}
#line 416 "parsing_utils.m"
    {
#line 416 "parsing_utils.m"
      mercury__parsing_utils__Src_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 416 "parsing_utils.m"
      MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, 0) = ((MR_Box) (mercury__parsing_utils__V_57_57));
#line 416 "parsing_utils.m"
      MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, 1) = ((MR_Box) (mercury__parsing_utils__InputString_4));
#line 416 "parsing_utils.m"
      MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, 2) = ((MR_Box) (mercury__parsing_utils__SkipWS_50));
#line 416 "parsing_utils.m"
      MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, 3) = ((MR_Box) (mercury__parsing_utils__FurthestOffsetMutvar_52));
#line 416 "parsing_utils.m"
      MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, 4) = ((MR_Box) (mercury__parsing_utils__ErrorInfoMutVar_51));
#line 416 "parsing_utils.m"
    }
#line 378 "parsing_utils.m"
    mercury__parsing_utils__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Parser_5, (MR_Integer) 1)));
#line 378 "parsing_utils.m"
    {
#line 378 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__func_1(((MR_Box) mercury__parsing_utils__Parser_5), ((MR_Box) (mercury__parsing_utils__Src_18)), &mercury__parsing_utils__Val_20, ((MR_Box) ((MR_Integer) 0)), &mercury__parsing_utils__conv2_V_21_21);
    }
#line 378 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 378 "parsing_utils.m"
      {
#line 378 "parsing_utils.m"
        mercury__parsing_utils__V_21_21 = ((MR_Integer) mercury__parsing_utils__conv2_V_21_21);
#line 378 "parsing_utils.m"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 378 "parsing_utils.m"
      }
#line 380 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 379 "parsing_utils.m"
      {
#line 379 "parsing_utils.m"
        MR_Word base;
#line 379 "parsing_utils.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 379 "parsing_utils.m"
        *mercury__parsing_utils__Result_6 = base;
#line 379 "parsing_utils.m"
        MR_hl_field(MR_mktag(0), base, 0) = mercury__parsing_utils__Val_20;
#line 379 "parsing_utils.m"
      }
#line 380 "parsing_utils.m"
    else
#line 381 "parsing_utils.m"
      {
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__TypeCtorInfo_34_42 = (MR_Word) &mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0;
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__TypeCtorInfo_35_43;
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__TypeCtorInfo_13_72;
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__Info_22;
#line 381 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__FurthestOffset_23;
#line 381 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__MessageOffset_24;
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__LastFailMsg_25;
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__Msg_26;
#line 381 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__Offset_27;
#line 381 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__Line_28;
#line 381 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__Col_29;
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__Result0_30;
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 4)));
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_32_32;
#line 381 "parsing_utils.m"
        MR_ArrayPtr mercury__parsing_utils__V_33_33;
#line 381 "parsing_utils.m"
        MR_String mercury__parsing_utils__Str_64;
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__RevLineNosList_65;
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_67_67;
#line 381 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__Hi_78;
#line 381 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__V_79_79;
#line 381 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 0)));
#line 381 "parsing_utils.m"
        MR_String mercury__parsing_utils__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 1)));
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 2)));
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 3)));
#line 381 "parsing_utils.m"
        MR_Box mercury__parsing_utils__conv3_Info_22;
#line 382 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__V_38_38;
#line 382 "parsing_utils.m"
        MR_String mercury__parsing_utils__V_39_39;
#line 382 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_40_40;
#line 382 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_41_41;
#line 382 "parsing_utils.m"
        MR_Box mercury__parsing_utils__conv4_FurthestOffset_23;
#line 482 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__V_68_68;
#line 482 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_69_69;
#line 482 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_70_70;
#line 482 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_71_71;
#line 484 "parsing_utils.m"
        MR_ArrayPtr mercury__parsing_utils__conv5_V_33_33;
#line 254 "array.opt"
        MR_Word mercury__parsing_utils__TypeCtorInfo_13_84;
#line 103 "builtin.opt"
        MR_Word mercury__parsing_utils__TypeInfo_37_85;
#line 103 "builtin.opt"
        MR_Box mercury__parsing_utils__conv6_Y;

#line 381 "parsing_utils.m"
        {
#line 381 "parsing_utils.m"
          mercury__mutvar__get_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_34_42, mercury__parsing_utils__V_31_31, &mercury__parsing_utils__conv3_Info_22);
        }
#line 381 "parsing_utils.m"
        mercury__parsing_utils__Info_22 = ((MR_Word) mercury__parsing_utils__conv3_Info_22);
#line 382 "parsing_utils.m"
        mercury__parsing_utils__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 0)));
#line 382 "parsing_utils.m"
        mercury__parsing_utils__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 1)));
#line 382 "parsing_utils.m"
        mercury__parsing_utils__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 2)));
#line 382 "parsing_utils.m"
        mercury__parsing_utils__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 3)));
#line 382 "parsing_utils.m"
        mercury__parsing_utils__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 4)));
#line 9582 "parsing_utils.c"
        mercury__parsing_utils__TypeCtorInfo_35_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 382 "parsing_utils.m"
        {
#line 382 "parsing_utils.m"
          mercury__mutvar__get_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_35_43, mercury__parsing_utils__V_32_32, &mercury__parsing_utils__conv4_FurthestOffset_23);
        }
#line 382 "parsing_utils.m"
        mercury__parsing_utils__FurthestOffset_23 = ((MR_Integer) mercury__parsing_utils__conv4_FurthestOffset_23);
#line 383 "parsing_utils.m"
        mercury__parsing_utils__MessageOffset_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Info_22, (MR_Integer) 0)));
#line 383 "parsing_utils.m"
        mercury__parsing_utils__LastFailMsg_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Info_22, (MR_Integer) 1)));
#line 384 "parsing_utils.m"
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__MessageOffset_24 < mercury__parsing_utils__FurthestOffset_23);
#line 387 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 385 "parsing_utils.m"
          {
#line 385 "parsing_utils.m"
            mercury__parsing_utils__Msg_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 386 "parsing_utils.m"
            mercury__parsing_utils__Offset_27 = mercury__parsing_utils__FurthestOffset_23;
#line 385 "parsing_utils.m"
          }
#line 387 "parsing_utils.m"
        else
#line 388 "parsing_utils.m"
          {
#line 388 "parsing_utils.m"
            mercury__parsing_utils__Msg_26 = mercury__parsing_utils__LastFailMsg_25;
#line 389 "parsing_utils.m"
            mercury__parsing_utils__Offset_27 = mercury__parsing_utils__MessageOffset_24;
#line 388 "parsing_utils.m"
          }
#line 482 "parsing_utils.m"
        mercury__parsing_utils__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 0)));
#line 482 "parsing_utils.m"
        mercury__parsing_utils__Str_64 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 1)));
#line 482 "parsing_utils.m"
        mercury__parsing_utils__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 2)));
#line 482 "parsing_utils.m"
        mercury__parsing_utils__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 3)));
#line 482 "parsing_utils.m"
        mercury__parsing_utils__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_18, (MR_Integer) 4)));
#line 483 "parsing_utils.m"
        mercury__parsing_utils__V_67_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 483 "parsing_utils.m"
        {
#line 483 "parsing_utils.m"
          mercury__parsing_utils__src_to_line_numbers_2_4_p_0(mercury__parsing_utils__Str_64, (MR_Integer) 0, mercury__parsing_utils__V_67_67, &mercury__parsing_utils__RevLineNosList_65);
        }
#line 9634 "parsing_utils.c"
        mercury__parsing_utils__TypeCtorInfo_13_72 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 484 "parsing_utils.m"
        {
#line 484 "parsing_utils.m"
          mercury__parsing_utils__conv5_V_33_33 = mercury__array__from_reverse_list_1_f_0(mercury__parsing_utils__TypeCtorInfo_13_72, mercury__parsing_utils__RevLineNosList_65);
        }
#line 484 "parsing_utils.m"
        mercury__parsing_utils__V_33_33 = (MR_ArrayPtr) mercury__parsing_utils__conv5_V_33_33;
#line 254 "array.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__parse_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__parsing_utils__V_33_33 , Array);
		{
#line 254 "array.opt"

    Max = Array->size;

#line 9656 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__V_79_79  = Max;
#line 254 "array.opt"
}
#line 505 "parsing_utils.m"
        mercury__parsing_utils__Hi_78 = (mercury__parsing_utils__V_79_79 - (MR_Integer) 1);
#line 506 "parsing_utils.m"
        {
#line 506 "parsing_utils.m"
          mercury__parsing_utils__offset_to_line_number_and_position_2_6_p_0(mercury__parsing_utils__V_33_33, (MR_Integer) 0, mercury__parsing_utils__Hi_78, mercury__parsing_utils__Offset_27, &mercury__parsing_utils__Line_28, &mercury__parsing_utils__Col_29);
        }
#line 393 "parsing_utils.m"
        {
#line 393 "parsing_utils.m"
          mercury__parsing_utils__Result0_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 393 "parsing_utils.m"
          MR_hl_field(MR_mktag(1), mercury__parsing_utils__Result0_30, 0) = ((MR_Box) (mercury__parsing_utils__Msg_26));
#line 393 "parsing_utils.m"
          MR_hl_field(MR_mktag(1), mercury__parsing_utils__Result0_30, 1) = ((MR_Box) (mercury__parsing_utils__Line_28));
#line 393 "parsing_utils.m"
          MR_hl_field(MR_mktag(1), mercury__parsing_utils__Result0_30, 2) = ((MR_Box) (mercury__parsing_utils__Col_29));
#line 393 "parsing_utils.m"
        }
#line 103 "builtin.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__parse_3_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (mercury__parsing_utils__Result0_30)) ;
		{
#line 103 "builtin.opt"

    Y = X;

#line 9695 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__conv6_Y  = (MR_Box) Y;
#line 103 "builtin.opt"
        *mercury__parsing_utils__Result_6 = ((MR_Word) mercury__parsing_utils__conv6_Y);
#line 103 "builtin.opt"
}
#line 381 "parsing_utils.m"
      }
#line 376 "parsing_utils.m"
  }
#line 96 "parsing_utils.m"
}

#line 91 "parsing_utils.m"
void MR_CALL 
mercury__parsing_utils__parse_4_p_0(
#line 91 "parsing_utils.m"
  MR_Word mercury__parsing_utils__TypeInfo_for_T_33,
#line 91 "parsing_utils.m"
  MR_String mercury__parsing_utils__InputString_5,
#line 91 "parsing_utils.m"
  MR_Word mercury__parsing_utils__SkipWS_6,
#line 91 "parsing_utils.m"
  MR_Word mercury__parsing_utils__Parser_7,
#line 91 "parsing_utils.m"
  MR_Word * mercury__parsing_utils__Result_8)
#line 91 "parsing_utils.m"
{
#line 376 "parsing_utils.m"
  {
#line 376 "parsing_utils.m"
    MR_bool mercury__parsing_utils__succeeded;
#line 377 "parsing_utils.m"
    MR_Word mercury__parsing_utils__Src_9;
#line 377 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__PS0_10;
#line 380 "parsing_utils.m"
    MR_Box mercury__parsing_utils__Val_11;
#line 378 "parsing_utils.m"
    MR_Integer mercury__parsing_utils__V_12_12;
#line 378 "parsing_utils.m"
    MR_bool MR_CALL (* mercury__parsing_utils__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 378 "parsing_utils.m"
    MR_Box mercury__parsing_utils__conv1_V_12_12;

#line 377 "parsing_utils.m"
    {
#line 377 "parsing_utils.m"
      mercury__parsing_utils__new_src_and_ps_4_p_0(mercury__parsing_utils__InputString_5, mercury__parsing_utils__SkipWS_6, &mercury__parsing_utils__Src_9, &mercury__parsing_utils__PS0_10);
    }
#line 378 "parsing_utils.m"
    mercury__parsing_utils__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Parser_7, (MR_Integer) 1)));
#line 378 "parsing_utils.m"
    {
#line 378 "parsing_utils.m"
      mercury__parsing_utils__succeeded = mercury__parsing_utils__func_0(((MR_Box) mercury__parsing_utils__Parser_7), ((MR_Box) (mercury__parsing_utils__Src_9)), &mercury__parsing_utils__Val_11, ((MR_Box) (mercury__parsing_utils__PS0_10)), &mercury__parsing_utils__conv1_V_12_12);
    }
#line 378 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 378 "parsing_utils.m"
      {
#line 378 "parsing_utils.m"
        mercury__parsing_utils__V_12_12 = ((MR_Integer) mercury__parsing_utils__conv1_V_12_12);
#line 378 "parsing_utils.m"
        mercury__parsing_utils__succeeded = MR_TRUE;
#line 378 "parsing_utils.m"
      }
#line 380 "parsing_utils.m"
    if (mercury__parsing_utils__succeeded)
#line 379 "parsing_utils.m"
      {
#line 379 "parsing_utils.m"
        MR_Word base;
#line 379 "parsing_utils.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 379 "parsing_utils.m"
        *mercury__parsing_utils__Result_8 = base;
#line 379 "parsing_utils.m"
        MR_hl_field(MR_mktag(0), base, 0) = mercury__parsing_utils__Val_11;
#line 379 "parsing_utils.m"
      }
#line 380 "parsing_utils.m"
    else
#line 381 "parsing_utils.m"
      {
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__TypeCtorInfo_34_34 = (MR_Word) &mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0;
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__TypeCtorInfo_35_35;
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__TypeCtorInfo_13_48;
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__Info_13;
#line 381 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__FurthestOffset_14;
#line 381 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__MessageOffset_15;
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__LastFailMsg_16;
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__Msg_17;
#line 381 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__Offset_18;
#line 381 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__Line_19;
#line 381 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__Col_20;
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__Result0_21;
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 4)));
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_23_23;
#line 381 "parsing_utils.m"
        MR_ArrayPtr mercury__parsing_utils__V_24_24;
#line 381 "parsing_utils.m"
        MR_String mercury__parsing_utils__Str_40;
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__RevLineNosList_41;
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_43_43;
#line 381 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__Hi_54;
#line 381 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__V_55_55;
#line 381 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 0)));
#line 381 "parsing_utils.m"
        MR_String mercury__parsing_utils__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 1)));
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 2)));
#line 381 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 3)));
#line 381 "parsing_utils.m"
        MR_Box mercury__parsing_utils__conv2_Info_13;
#line 382 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__V_29_29;
#line 382 "parsing_utils.m"
        MR_String mercury__parsing_utils__V_30_30;
#line 382 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_31_31;
#line 382 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_32_32;
#line 382 "parsing_utils.m"
        MR_Box mercury__parsing_utils__conv3_FurthestOffset_14;
#line 482 "parsing_utils.m"
        MR_Integer mercury__parsing_utils__V_44_44;
#line 482 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_45_45;
#line 482 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_46_46;
#line 482 "parsing_utils.m"
        MR_Word mercury__parsing_utils__V_47_47;
#line 484 "parsing_utils.m"
        MR_ArrayPtr mercury__parsing_utils__conv4_V_24_24;
#line 254 "array.opt"
        MR_Word mercury__parsing_utils__TypeCtorInfo_13_60;
#line 103 "builtin.opt"
        MR_Word mercury__parsing_utils__TypeInfo_37_61;
#line 103 "builtin.opt"
        MR_Box mercury__parsing_utils__conv5_Y;

#line 381 "parsing_utils.m"
        {
#line 381 "parsing_utils.m"
          mercury__mutvar__get_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_34_34, mercury__parsing_utils__V_22_22, &mercury__parsing_utils__conv2_Info_13);
        }
#line 381 "parsing_utils.m"
        mercury__parsing_utils__Info_13 = ((MR_Word) mercury__parsing_utils__conv2_Info_13);
#line 382 "parsing_utils.m"
        mercury__parsing_utils__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 0)));
#line 382 "parsing_utils.m"
        mercury__parsing_utils__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 1)));
#line 382 "parsing_utils.m"
        mercury__parsing_utils__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 2)));
#line 382 "parsing_utils.m"
        mercury__parsing_utils__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 3)));
#line 382 "parsing_utils.m"
        mercury__parsing_utils__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 4)));
#line 9877 "parsing_utils.c"
        mercury__parsing_utils__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 382 "parsing_utils.m"
        {
#line 382 "parsing_utils.m"
          mercury__mutvar__get_mutvar_2_p_0(mercury__parsing_utils__TypeCtorInfo_35_35, mercury__parsing_utils__V_23_23, &mercury__parsing_utils__conv3_FurthestOffset_14);
        }
#line 382 "parsing_utils.m"
        mercury__parsing_utils__FurthestOffset_14 = ((MR_Integer) mercury__parsing_utils__conv3_FurthestOffset_14);
#line 383 "parsing_utils.m"
        mercury__parsing_utils__MessageOffset_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Info_13, (MR_Integer) 0)));
#line 383 "parsing_utils.m"
        mercury__parsing_utils__LastFailMsg_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Info_13, (MR_Integer) 1)));
#line 384 "parsing_utils.m"
        mercury__parsing_utils__succeeded = (mercury__parsing_utils__MessageOffset_15 < mercury__parsing_utils__FurthestOffset_14);
#line 387 "parsing_utils.m"
        if (mercury__parsing_utils__succeeded)
#line 385 "parsing_utils.m"
          {
#line 385 "parsing_utils.m"
            mercury__parsing_utils__Msg_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 386 "parsing_utils.m"
            mercury__parsing_utils__Offset_18 = mercury__parsing_utils__FurthestOffset_14;
#line 385 "parsing_utils.m"
          }
#line 387 "parsing_utils.m"
        else
#line 388 "parsing_utils.m"
          {
#line 388 "parsing_utils.m"
            mercury__parsing_utils__Msg_17 = mercury__parsing_utils__LastFailMsg_16;
#line 389 "parsing_utils.m"
            mercury__parsing_utils__Offset_18 = mercury__parsing_utils__MessageOffset_15;
#line 388 "parsing_utils.m"
          }
#line 482 "parsing_utils.m"
        mercury__parsing_utils__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 0)));
#line 482 "parsing_utils.m"
        mercury__parsing_utils__Str_40 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 1)));
#line 482 "parsing_utils.m"
        mercury__parsing_utils__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 2)));
#line 482 "parsing_utils.m"
        mercury__parsing_utils__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 3)));
#line 482 "parsing_utils.m"
        mercury__parsing_utils__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__parsing_utils__Src_9, (MR_Integer) 4)));
#line 483 "parsing_utils.m"
        mercury__parsing_utils__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 483 "parsing_utils.m"
        {
#line 483 "parsing_utils.m"
          mercury__parsing_utils__src_to_line_numbers_2_4_p_0(mercury__parsing_utils__Str_40, (MR_Integer) 0, mercury__parsing_utils__V_43_43, &mercury__parsing_utils__RevLineNosList_41);
        }
#line 9929 "parsing_utils.c"
        mercury__parsing_utils__TypeCtorInfo_13_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 484 "parsing_utils.m"
        {
#line 484 "parsing_utils.m"
          mercury__parsing_utils__conv4_V_24_24 = mercury__array__from_reverse_list_1_f_0(mercury__parsing_utils__TypeCtorInfo_13_48, mercury__parsing_utils__RevLineNosList_41);
        }
#line 484 "parsing_utils.m"
        mercury__parsing_utils__V_24_24 = (MR_ArrayPtr) mercury__parsing_utils__conv4_V_24_24;
#line 254 "array.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__parse_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__parsing_utils__V_24_24 , Array);
		{
#line 254 "array.opt"

    Max = Array->size;

#line 9951 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__V_55_55  = Max;
#line 254 "array.opt"
}
#line 505 "parsing_utils.m"
        mercury__parsing_utils__Hi_54 = (mercury__parsing_utils__V_55_55 - (MR_Integer) 1);
#line 506 "parsing_utils.m"
        {
#line 506 "parsing_utils.m"
          mercury__parsing_utils__offset_to_line_number_and_position_2_6_p_0(mercury__parsing_utils__V_24_24, (MR_Integer) 0, mercury__parsing_utils__Hi_54, mercury__parsing_utils__Offset_18, &mercury__parsing_utils__Line_19, &mercury__parsing_utils__Col_20);
        }
#line 393 "parsing_utils.m"
        {
#line 393 "parsing_utils.m"
          mercury__parsing_utils__Result0_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 393 "parsing_utils.m"
          MR_hl_field(MR_mktag(1), mercury__parsing_utils__Result0_21, 0) = ((MR_Box) (mercury__parsing_utils__Msg_17));
#line 393 "parsing_utils.m"
          MR_hl_field(MR_mktag(1), mercury__parsing_utils__Result0_21, 1) = ((MR_Box) (mercury__parsing_utils__Line_19));
#line 393 "parsing_utils.m"
          MR_hl_field(MR_mktag(1), mercury__parsing_utils__Result0_21, 2) = ((MR_Box) (mercury__parsing_utils__Col_20));
#line 393 "parsing_utils.m"
        }
#line 103 "builtin.opt"
{
#define MR_PROC_LABEL mercury__parsing_utils__parse_4_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (mercury__parsing_utils__Result0_21)) ;
		{
#line 103 "builtin.opt"

    Y = X;

#line 9990 "parsing_utils.c"

		;}
#undef MR_PROC_LABEL
	 mercury__parsing_utils__conv5_Y  = (MR_Box) Y;
#line 103 "builtin.opt"
        *mercury__parsing_utils__Result_8 = ((MR_Word) mercury__parsing_utils__conv5_Y);
#line 103 "builtin.opt"
}
#line 381 "parsing_utils.m"
      }
#line 376 "parsing_utils.m"
  }
#line 91 "parsing_utils.m"
}

void mercury__parsing_utils__init(void)
{
}

void mercury__parsing_utils__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__parsing_utils__parsing_utils__type_ctor_info_fail_message_info_0);
	MR_register_type_ctor_info(&mercury__parsing_utils__parsing_utils__type_ctor_info_line_numbers_0);
	MR_register_type_ctor_info(&mercury__parsing_utils__parsing_utils__type_ctor_info_parse_result_1);
	MR_register_type_ctor_info(&mercury__parsing_utils__parsing_utils__type_ctor_info_parser_1);
	MR_register_type_ctor_info(&mercury__parsing_utils__parsing_utils__type_ctor_info_parser_with_state_2);
	MR_register_type_ctor_info(&mercury__parsing_utils__parsing_utils__type_ctor_info_ps_0);
	MR_register_type_ctor_info(&mercury__parsing_utils__parsing_utils__type_ctor_info_skip_whitespace_pred_0);
	MR_register_type_ctor_info(&mercury__parsing_utils__parsing_utils__type_ctor_info_src_0);
}

void mercury__parsing_utils__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parsing_utils. */
