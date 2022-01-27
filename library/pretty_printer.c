/*
** Automatically generated from `pretty_printer.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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


/* :- module pretty_printer. */
/* :- implementation. */

/*
INIT mercury__pretty_printer__init
REQUIRED_INIT mercury__pretty_printer__required_init
ENDINIT
*/

#include "pretty_printer.mih"
#include "pretty_printer.mh"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
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





#line 94 "pretty_printer.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__pretty_printer__list__pti_list_1__plain_type_desc__type_ctor_info_type_desc_0;

#line 97 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_0[1];

#line 100 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_0;

#line 103 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_1;

#line 106 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_2;

#line 109 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1pretty_printer__type_ctor_info_doc_0;

#line 112 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_3[1];

#line 115 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_3;

#line 118 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_4[1];

#line 121 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_4;

#line 124 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1univ__type_ctor_info_univ_0;

#line 127 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_5[2];

#line 130 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_5;

#line 133 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_6[2];

#line 136 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_6;

#line 139 "pretty_printer.c"
static const MR_VA_TypeInfo_Struct1 mercury__pretty_printer____vti_func_1pretty_printer__type_ctor_info_doc_0;

#line 142 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_7[1];

#line 145 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_7;

#line 148 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_8[1];

#line 151 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_8;

#line 154 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_0[2];

#line 157 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_1[1];

#line 160 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_2[1];

#line 163 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_3[5];

#line 166 "pretty_printer.c"
static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_doc_0[4];

#line 169 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_doc_0[9];

#line 172 "pretty_printer.c"
static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_doc_0[9];

#line 175 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1type_desc__type_ctor_info_type_desc_0;

#line 178 "pretty_printer.c"
static const MR_VA_TypeInfo_Struct3 mercury__pretty_printer____vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0;

#line 181 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0;

#line 184 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0;

#line 187 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0;

#line 190 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_formatting_limit_0_0[1];

#line 193 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_formatting_limit_0_0;

#line 196 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_formatting_limit_0_1[1];

#line 199 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_formatting_limit_0_1;

#line 202 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_formatting_limit_0_0[1];

#line 205 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_formatting_limit_0_1[1];

#line 208 "pretty_printer.c"
static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_formatting_limit_0[2];

#line 211 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_formatting_limit_0[2];

#line 214 "pretty_printer.c"
static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_formatting_limit_0[2];

#line 217 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1builtin__type_ctor_info_string_0;

#line 220 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_0;

#line 223 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_1;

#line 226 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_2[1];

#line 229 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_2;

#line 232 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_3;

#line 235 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_4[1];

#line 238 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_4;

#line 241 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_5[1];

#line 244 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_5;

#line 247 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_0[3];

#line 250 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_1[1];

#line 253 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_2[1];

#line 256 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_3[1];

#line 259 "pretty_printer.c"
static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_internal_0[4];

#line 262 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_pp_internal_0[6];

#line 265 "pretty_printer.c"
static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_pp_internal_0[6];

#line 268 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_params_0_0[3];

#line 271 "pretty_printer.c"
static const MR_ConstString mercury__pretty_printer__pretty_printer__field_names_pp_params_0_0[3];

#line 274 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_params_0_0;

#line 277 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_params_0_0[1];

#line 280 "pretty_printer.c"
static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_params_0[1];

#line 283 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_pp_params_0[1];

#line 286 "pretty_printer.c"
static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_pp_params_0[1];

#line 289 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____doc_0_0_10001(
#line 292 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 294 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 297 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____doc_0_0_10001(
#line 300 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 302 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 304 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3);

#line 307 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____docs_0_0_10001(
#line 310 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 312 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 315 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____docs_0_0_10001(
#line 318 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 320 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 322 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3);

#line 325 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_0_0_10001(
#line 328 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 330 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 333 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____formatter_0_0_10001(
#line 336 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 338 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 340 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3);

#line 343 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_map_0_0_10001(
#line 346 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 348 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 351 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____formatter_map_0_0_10001(
#line 354 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 356 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 358 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3);

#line 361 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatting_limit_0_0_10001(
#line 364 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 366 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 369 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____formatting_limit_0_0_10001(
#line 372 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 374 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 376 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3);

#line 379 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____indents_0_0_10001(
#line 382 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 384 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 387 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____indents_0_0_10001(
#line 390 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 392 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 394 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3);

#line 397 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_internal_0_0_10001(
#line 400 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 402 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 405 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____pp_internal_0_0_10001(
#line 408 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 410 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 412 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3);

#line 415 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_params_0_0_10001(
#line 418 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 420 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 423 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____pp_params_0_0_10001(
#line 426 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 428 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 430 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 1123 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_f_0(
#line 1123 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4);

#line 1116 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_f_0(
#line 1116 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4);

#line 1109 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0(
#line 1109 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4);

#line 1102 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_f_0(
#line 1102 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4);

#line 133 "list.int"
static void MR_CALL 
mercury__pretty_printer__foldl__ho20_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 133 "list.int"
  MR_Integer mercury__pretty_printer__HeadVar__3_3,
#line 133 "list.int"
  MR_Integer * mercury__pretty_printer__HeadVar__4_4);

#line 133 "list.int"
static void MR_CALL 
mercury__pretty_printer__foldl__ho19_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 133 "list.int"
  MR_Integer mercury__pretty_printer__HeadVar__3_3,
#line 133 "list.int"
  MR_Integer * mercury__pretty_printer__HeadVar__4_4);

#line 144 "list.int"
static MR_Integer MR_CALL 
mercury__pretty_printer__foldl__ho15_3_f_in__list_0(
#line 144 "list.int"
  MR_Word mercury__pretty_printer__Xs_6_6,
#line 144 "list.int"
  MR_Integer mercury__pretty_printer__A_7_7);

#line 144 "list.int"
static MR_Integer MR_CALL 
mercury__pretty_printer__foldl__ho14_3_f_in__list_0(
#line 144 "list.int"
  MR_Word mercury__pretty_printer__Xs_6_6,
#line 144 "list.int"
  MR_Integer mercury__pretty_printer__A_7_7);

#line 497 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho9_6_p_0_1(
#line 500 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 502 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 504 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 1094 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho9_6_p_0(
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1094 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1094 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1094 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12);

#line 521 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho8_6_p_0_1(
#line 524 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 526 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 528 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 1094 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho8_6_p_0(
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1094 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1094 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1094 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12);

#line 545 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho7_6_p_0_1(
#line 548 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 550 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 552 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 1094 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho7_6_p_0(
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1094 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1094 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1094 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12);

#line 569 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho6_6_p_0_1(
#line 572 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 574 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 576 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 1094 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho6_6_p_0(
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1094 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1094 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1094 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12);

#line 593 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho5_6_p_0_1(
#line 596 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 598 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 600 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 1094 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho5_6_p_0(
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1094 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1094 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1094 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12);

#line 617 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho4_6_p_0_1(
#line 620 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 622 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 624 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 1094 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho4_6_p_0(
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1094 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1094 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1094 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12);

#line 641 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho3_6_p_0_1(
#line 644 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 646 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 648 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 1094 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho3_6_p_0(
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1094 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1094 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1094 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12);

#line 665 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho2_6_p_0_1(
#line 668 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 670 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 672 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 1094 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho2_6_p_0(
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1094 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1094 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1094 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12);

#line 391 "pretty_printer.m"
static MR_Integer MR_CALL 
mercury__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__2_2_f_0(
#line 391 "pretty_printer.m"
  MR_String mercury__pretty_printer__HeadVar__1_109,
#line 391 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__2_110);

#line 391 "pretty_printer.m"
static MR_Integer MR_CALL 
mercury__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__1_2_f_0(
#line 391 "pretty_printer.m"
  MR_String mercury__pretty_printer__HeadVar__1_109,
#line 391 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__2_110);

#line 1178 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_tree234_2_f_0(
#line 1178 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1178 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5);

#line 1162 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_list_2_f_0(
#line 1162 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1162 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5);

#line 1146 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_version_array_2_f_0(
#line 1146 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1146 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5);

#line 1130 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_array_2_f_0(
#line 1130 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1130 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5);

#line 1123 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_string_2_f_0(
#line 1123 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1123 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5);

#line 1116 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_int_2_f_0(
#line 1116 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1116 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5);

#line 1109 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_float_2_f_0(
#line 1109 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1109 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5);

#line 1102 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_char_2_f_0(
#line 1102 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1102 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5);

#line 878 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__pre_initialise_mutable_io_pp_params_0_p_0(void);

#line 878 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0(void);

#line 862 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__decrement_limit_2_p_0(
#line 862 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 862 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__2_2);

#line 842 "pretty_printer.m"
static MR_Integer MR_CALL 
mercury__pretty_printer__adjust_priority_2_f_0(
#line 842 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Priority_4,
#line 842 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Assoc_5);

#line 831 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__add_parens_if_needed_3_f_0(
#line 831 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__OpPriority_5,
#line 831 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__EnclosingPriority_6,
#line 831 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Doc_7);

#line 820 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__set_formatting_limit_correctly_2_f_0(
#line 820 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 820 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2);

#line 753 "pretty_printer.m"
static MR_bool MR_CALL 
mercury__pretty_printer__expand_format_op_4_p_0(
#line 753 "pretty_printer.m"
  MR_String mercury__pretty_printer__Op_1,
#line 753 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 753 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_3,
#line 753 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Docs_4);

#line 737 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_format_susp_4_p_0(
#line 737 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Susp_5,
#line 737 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_6,
#line 737 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_8,
#line 737 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_9);

#line 710 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_format_term_6_p_0(
#line 710 "pretty_printer.m"
  MR_String mercury__pretty_printer__Name_7,
#line 710 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Args_8,
#line 710 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_9,
#line 710 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_14,
#line 710 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_15,
#line 710 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_11);

#line 684 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_format_list_5_p_0(
#line 684 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 684 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 684 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__3_3,
#line 684 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_4,
#line 684 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_5);

#line 656 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_pp_7_p_1(
#line 656 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Canonicalize_8,
#line 656 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap_9,
#line 656 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_10,
#line 656 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_11,
#line 656 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_24,
#line 656 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_25,
#line 656 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_13);

#line 654 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_pp_7_p_0(
#line 654 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Canonicalize_8,
#line 654 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap_9,
#line 654 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_10,
#line 654 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_11,
#line 654 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_24,
#line 654 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_25,
#line 654 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_13);

#line 637 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__output_indentation_6_p_0(
#line 637 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_28,
#line 637 "pretty_printer.m"
  MR_Box mercury__pretty_printer__HeadVar__1_1,
#line 637 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 637 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_3,
#line 637 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_4,
#line 637 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_5,
#line 637 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_6);

#line 627 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__format_nl_8_p_0(
#line 627 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_24,
#line 627 "pretty_printer.m"
  MR_Box mercury__pretty_printer__Stream_9,
#line 627 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__LineWidth_10,
#line 627 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Indents_11,
#line 627 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__RemainingWidth_12,
#line 627 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_15,
#line 627 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_16,
#line 627 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_17,
#line 627 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_18);

#line 528 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_docs_11_p_1(
#line 528 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 528 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 528 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 528 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__4_4,
#line 528 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__5_5,
#line 528 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_6,
#line 528 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_7,
#line 528 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_8,
#line 528 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_9,
#line 528 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10,
#line 528 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);

#line 526 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_docs_11_p_0(
#line 526 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 526 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 526 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 526 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__4_4,
#line 526 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__5_5,
#line 526 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_6,
#line 526 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_7,
#line 526 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_8,
#line 526 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_9,
#line 526 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10,
#line 526 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);

#line 474 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__output_current_group_12_p_0(
#line 474 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_71,
#line 474 "pretty_printer.m"
  MR_Box mercury__pretty_printer__HeadVar__1_1,
#line 474 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__2_2,
#line 474 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 474 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__4_4,
#line 474 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__5_5,
#line 474 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__6_6,
#line 474 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7,
#line 474 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_8,
#line 474 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9,
#line 474 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_10,
#line 474 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_11,
#line 474 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_12);


static /* final */ const MR_Box mercury__pretty_printer_scalar_common_1[15][2];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_2[3][5];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_3[13][3];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_4[1][4];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_5[19][1];

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_6[1][6];




static /* final */ const MR_Box mercury__pretty_printer_scalar_common_1[15][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[0])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_2[3][5] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_func_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_1[1])),
    ((MR_Box) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_4[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_4[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_3[13][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_2[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_3[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_3[1]))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 78)),
    ((MR_Box) ((MR_Integer) 100)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[9])))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter_sv__ho2_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter_sv__ho3_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter_sv__ho4_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter_sv__ho5_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter_sv__ho6_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter_sv__ho7_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter_sv__ho8_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__pretty_printer_scalar_common_6[0])),
    ((MR_Box) (mercury__pretty_printer__set_formatter_sv__ho9_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_4[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pretty_printer_scalar_common_3[2])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_5[19][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "  "))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "..."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "{"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) ", "))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "}"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "("))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) " "))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 100))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "\?array\?"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "\?version_array\?"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "\?list\?"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "\?tree234\?"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "\?char\?"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "\?float\?"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "\?int\?"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "\""))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "\?string\?"))
  },
};

static /* final */ const MR_Box mercury__pretty_printer_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__pretty_printer__list__pti_list_1__plain_type_desc__type_ctor_info_type_desc_0)),
    ((MR_Box) (&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0))
  },
};



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
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#line 895 "pretty_printer.m"

    MR_Bool ML_pretty_printer_is_initialised = MR_NO;
    MR_Word ML_pretty_printer_default_formatter_map = 0;

#line 878 "pretty_printer.m"
MR_Word mercury__pretty_printer__mutable_variable_io_pp_params;
#ifdef MR_THREAD_SAFE
    MercuryLock mercury__pretty_printer__mutable_variable_io_pp_params_lock;
#endif

#line 878 "pretty_printer.m"
void 
mercury__pretty_printer__user_init_pred_0(void)
#line 878 "pretty_printer.m"
{
#line 878 "pretty_printer.m"
	mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0();
}


#line 1642 "pretty_printer.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__pretty_printer__list__pti_list_1__plain_type_desc__type_ctor_info_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0
  }
};

#line 1650 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1655 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_0 = {
  (MR_String) "str",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__pretty_printer__pretty_printer__field_types_doc_0_0,
  NULL,
  NULL,
  NULL
};

#line 1670 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_1 = {
  (MR_String) "nl",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1685 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_2 = {
  (MR_String) "hard_nl",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1700 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1pretty_printer__type_ctor_info_doc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0
  }
};

#line 1708 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer__list__ti_list_1pretty_printer__type_ctor_info_doc_0
};

#line 1713 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_3 = {
  (MR_String) "docs",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mercury__pretty_printer__pretty_printer__field_types_doc_0_3,
  NULL,
  NULL,
  NULL
};

#line 1728 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

#line 1733 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_4 = {
  (MR_String) "format_univ",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 4,
  mercury__pretty_printer__pretty_printer__field_types_doc_0_4,
  NULL,
  NULL,
  NULL
};

#line 1748 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

#line 1756 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_5[2] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer__list__ti_list_1univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0
};

#line 1762 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_5 = {
  (MR_String) "format_list",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 5,
  mercury__pretty_printer__pretty_printer__field_types_doc_0_5,
  NULL,
  NULL,
  NULL
};

#line 1777 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_6[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__pretty_printer__list__ti_list_1univ__type_ctor_info_univ_0
};

#line 1783 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_6 = {
  (MR_String) "format_term",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 6,
  mercury__pretty_printer__pretty_printer__field_types_doc_0_6,
  NULL,
  NULL,
  NULL
};

#line 1798 "pretty_printer.c"
static const MR_VA_TypeInfo_Struct1 mercury__pretty_printer____vti_func_1pretty_printer__type_ctor_info_doc_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 1,
  {
    (MR_TypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0
  }
};

#line 1807 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer____vti_func_1pretty_printer__type_ctor_info_doc_0
};

#line 1812 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_7 = {
  (MR_String) "format_susp",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__pretty_printer__pretty_printer__field_types_doc_0_7,
  NULL,
  NULL,
  NULL
};

#line 1827 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_pp_internal_0
};

#line 1832 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_8 = {
  (MR_String) "pp_internal",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 8,
  mercury__pretty_printer__pretty_printer__field_types_doc_0_8,
  NULL,
  NULL,
  NULL
};

#line 1847 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_0[2] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_1,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_2
};

#line 1853 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_1[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_0
};

#line 1858 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_2[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_3
};

#line 1863 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_3[5] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_4,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_5,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_6,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_7,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_8
};

#line 1872 "pretty_printer.c"
static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_doc_0[4] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_2
  },
  {
    (MR_Integer) 5,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_3
  }
};

#line 1896 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_doc_0[9] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_3,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_5,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_7,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_6,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_4,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_2,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_1,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_8,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_0
};

#line 1909 "pretty_printer.c"
static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_doc_0[9] = {
  (MR_Integer) 8,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 7
};

#line 1922 "pretty_printer.c"
const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____doc_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____doc_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "doc",
  {
    mercury__pretty_printer__pretty_printer__du_name_ordered_doc_0
  },
  {
    mercury__pretty_printer__pretty_printer__du_ptag_ordered_doc_0
  },
  (MR_Integer) 9,
  (MR_Integer) 4,
  mercury__pretty_printer__pretty_printer__functor_number_map_doc_0
};

#line 1943 "pretty_printer.c"
const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_docs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pretty_printer____Unify____docs_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____docs_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "docs",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__pretty_printer__list__ti_list_1pretty_printer__type_ctor_info_doc_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1964 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1type_desc__type_ctor_info_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0
  }
};

#line 1972 "pretty_printer.c"
static const MR_VA_TypeInfo_Struct3 mercury__pretty_printer____vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0,
    (MR_TypeInfo) &mercury__pretty_printer__list__ti_list_1type_desc__type_ctor_info_type_desc_0,
    (MR_TypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0
  }
};

#line 1983 "pretty_printer.c"
const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_formatter_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pretty_printer____Unify____formatter_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____formatter_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "formatter",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__pretty_printer____vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2004 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__pretty_printer____vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0
  }
};

#line 2013 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0
  }
};

#line 2022 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0
  }
};

#line 2031 "pretty_printer.c"
const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_formatter_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pretty_printer____Unify____formatter_map_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____formatter_map_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "formatter_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2052 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_formatting_limit_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2057 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_formatting_limit_0_0 = {
  (MR_String) "linear",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__pretty_printer__pretty_printer__field_types_formatting_limit_0_0,
  NULL,
  NULL,
  NULL
};

#line 2072 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_formatting_limit_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2077 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_formatting_limit_0_1 = {
  (MR_String) "triangular",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__pretty_printer__pretty_printer__field_types_formatting_limit_0_1,
  NULL,
  NULL,
  NULL
};

#line 2092 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_formatting_limit_0_0[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_formatting_limit_0_0
};

#line 2097 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_formatting_limit_0_1[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_formatting_limit_0_1
};

#line 2102 "pretty_printer.c"
static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_formatting_limit_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_formatting_limit_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_formatting_limit_0_1
  }
};

#line 2116 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_formatting_limit_0[2] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_formatting_limit_0_0,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_formatting_limit_0_1
};

#line 2122 "pretty_printer.c"
static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_formatting_limit_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2128 "pretty_printer.c"
const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_formatting_limit_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____formatting_limit_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____formatting_limit_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "formatting_limit",
  {
    mercury__pretty_printer__pretty_printer__du_name_ordered_formatting_limit_0
  },
  {
    mercury__pretty_printer__pretty_printer__du_ptag_ordered_formatting_limit_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__pretty_printer__pretty_printer__functor_number_map_formatting_limit_0
};

#line 2149 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2157 "pretty_printer.c"
const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_indents_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pretty_printer____Unify____indents_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____indents_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "indents",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__pretty_printer__list__ti_list_1builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2178 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_0 = {
  (MR_String) "open_group",
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

#line 2193 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_1 = {
  (MR_String) "close_group",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2208 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2213 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_2 = {
  (MR_String) "indent",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_2,
  NULL,
  NULL,
  NULL
};

#line 2228 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_3 = {
  (MR_String) "outdent",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2243 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2248 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_4 = {
  (MR_String) "set_op_priority",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 4,
  mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_4,
  NULL,
  NULL,
  NULL
};

#line 2263 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_formatting_limit_0
};

#line 2268 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_5 = {
  (MR_String) "set_limit",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 5,
  mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_5,
  NULL,
  NULL,
  NULL
};

#line 2283 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_0[3] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_0,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_1,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_3
};

#line 2290 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_1[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_2
};

#line 2295 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_2[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_4
};

#line 2300 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_3[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_5
};

#line 2305 "pretty_printer.c"
static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_internal_0[4] = {
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_3
  }
};

#line 2329 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_pp_internal_0[6] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_1,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_2,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_0,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_3,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_5,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_4
};

#line 2339 "pretty_printer.c"
static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_pp_internal_0[6] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 4
};

#line 2349 "pretty_printer.c"
const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_pp_internal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____pp_internal_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____pp_internal_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "pp_internal",
  {
    mercury__pretty_printer__pretty_printer__du_name_ordered_pp_internal_0
  },
  {
    mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_internal_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mercury__pretty_printer__pretty_printer__functor_number_map_pp_internal_0
};

#line 2370 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_params_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_formatting_limit_0
};

#line 2377 "pretty_printer.c"
static const MR_ConstString mercury__pretty_printer__pretty_printer__field_names_pp_params_0_0[3] = {
  (MR_String) "pp_line_width",
  (MR_String) "pp_max_lines",
  (MR_String) "pp_limit"
};

#line 2384 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_params_0_0 = {
  (MR_String) "pp_params",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__pretty_printer__pretty_printer__field_types_pp_params_0_0,
  mercury__pretty_printer__pretty_printer__field_names_pp_params_0_0,
  NULL,
  NULL
};

#line 2399 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_params_0_0[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_params_0_0
};

#line 2404 "pretty_printer.c"
static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_params_0_0
  }
};

#line 2413 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_pp_params_0[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_params_0_0
};

#line 2418 "pretty_printer.c"
static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_pp_params_0[1] = {
  (MR_Integer) 0
};

#line 2423 "pretty_printer.c"
const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_pp_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____pp_params_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____pp_params_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "pp_params",
  {
    mercury__pretty_printer__pretty_printer__du_name_ordered_pp_params_0
  },
  {
    mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_params_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__pretty_printer__pretty_printer__functor_number_map_pp_params_0
};

#line 2444 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____doc_0_0_10001(
#line 2447 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2449 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2451 "pretty_printer.c"
{
#line 2453 "pretty_printer.c"
  {
#line 2455 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2458 "pretty_printer.c"
    {
#line 2460 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____doc_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2463 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2465 "pretty_printer.c"
  }
#line 2467 "pretty_printer.c"
}

#line 2470 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____doc_0_0_10001(
#line 2473 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2475 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2477 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2479 "pretty_printer.c"
{
#line 2481 "pretty_printer.c"
  {
#line 2483 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2486 "pretty_printer.c"
    {
#line 2488 "pretty_printer.c"
      mercury__pretty_printer____Compare____doc_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2491 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2493 "pretty_printer.c"
  }
#line 2495 "pretty_printer.c"
}

#line 2498 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____docs_0_0_10001(
#line 2501 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2503 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2505 "pretty_printer.c"
{
#line 2507 "pretty_printer.c"
  {
#line 2509 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2512 "pretty_printer.c"
    {
#line 2514 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____docs_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2517 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2519 "pretty_printer.c"
  }
#line 2521 "pretty_printer.c"
}

#line 2524 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____docs_0_0_10001(
#line 2527 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2529 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2531 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2533 "pretty_printer.c"
{
#line 2535 "pretty_printer.c"
  {
#line 2537 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2540 "pretty_printer.c"
    {
#line 2542 "pretty_printer.c"
      mercury__pretty_printer____Compare____docs_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2545 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2547 "pretty_printer.c"
  }
#line 2549 "pretty_printer.c"
}

#line 2552 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_0_0_10001(
#line 2555 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2557 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2559 "pretty_printer.c"
{
#line 2561 "pretty_printer.c"
  {
#line 2563 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2566 "pretty_printer.c"
    {
#line 2568 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____formatter_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2571 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2573 "pretty_printer.c"
  }
#line 2575 "pretty_printer.c"
}

#line 2578 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____formatter_0_0_10001(
#line 2581 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2583 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2585 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2587 "pretty_printer.c"
{
#line 2589 "pretty_printer.c"
  {
#line 2591 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2594 "pretty_printer.c"
    {
#line 2596 "pretty_printer.c"
      mercury__pretty_printer____Compare____formatter_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2599 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2601 "pretty_printer.c"
  }
#line 2603 "pretty_printer.c"
}

#line 2606 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_map_0_0_10001(
#line 2609 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2611 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2613 "pretty_printer.c"
{
#line 2615 "pretty_printer.c"
  {
#line 2617 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2620 "pretty_printer.c"
    {
#line 2622 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____formatter_map_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2625 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2627 "pretty_printer.c"
  }
#line 2629 "pretty_printer.c"
}

#line 2632 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____formatter_map_0_0_10001(
#line 2635 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2637 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2639 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2641 "pretty_printer.c"
{
#line 2643 "pretty_printer.c"
  {
#line 2645 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2648 "pretty_printer.c"
    {
#line 2650 "pretty_printer.c"
      mercury__pretty_printer____Compare____formatter_map_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2653 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2655 "pretty_printer.c"
  }
#line 2657 "pretty_printer.c"
}

#line 2660 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatting_limit_0_0_10001(
#line 2663 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2665 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2667 "pretty_printer.c"
{
#line 2669 "pretty_printer.c"
  {
#line 2671 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2674 "pretty_printer.c"
    {
#line 2676 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____formatting_limit_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2679 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2681 "pretty_printer.c"
  }
#line 2683 "pretty_printer.c"
}

#line 2686 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____formatting_limit_0_0_10001(
#line 2689 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2691 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2693 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2695 "pretty_printer.c"
{
#line 2697 "pretty_printer.c"
  {
#line 2699 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2702 "pretty_printer.c"
    {
#line 2704 "pretty_printer.c"
      mercury__pretty_printer____Compare____formatting_limit_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2707 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2709 "pretty_printer.c"
  }
#line 2711 "pretty_printer.c"
}

#line 2714 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____indents_0_0_10001(
#line 2717 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2719 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2721 "pretty_printer.c"
{
#line 2723 "pretty_printer.c"
  {
#line 2725 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2728 "pretty_printer.c"
    {
#line 2730 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____indents_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2733 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2735 "pretty_printer.c"
  }
#line 2737 "pretty_printer.c"
}

#line 2740 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____indents_0_0_10001(
#line 2743 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2745 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2747 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2749 "pretty_printer.c"
{
#line 2751 "pretty_printer.c"
  {
#line 2753 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2756 "pretty_printer.c"
    {
#line 2758 "pretty_printer.c"
      mercury__pretty_printer____Compare____indents_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2761 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2763 "pretty_printer.c"
  }
#line 2765 "pretty_printer.c"
}

#line 2768 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_internal_0_0_10001(
#line 2771 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2773 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2775 "pretty_printer.c"
{
#line 2777 "pretty_printer.c"
  {
#line 2779 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2782 "pretty_printer.c"
    {
#line 2784 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____pp_internal_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2787 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2789 "pretty_printer.c"
  }
#line 2791 "pretty_printer.c"
}

#line 2794 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____pp_internal_0_0_10001(
#line 2797 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2799 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2801 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2803 "pretty_printer.c"
{
#line 2805 "pretty_printer.c"
  {
#line 2807 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2810 "pretty_printer.c"
    {
#line 2812 "pretty_printer.c"
      mercury__pretty_printer____Compare____pp_internal_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2815 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2817 "pretty_printer.c"
  }
#line 2819 "pretty_printer.c"
}

#line 2822 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_params_0_0_10001(
#line 2825 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2827 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2829 "pretty_printer.c"
{
#line 2831 "pretty_printer.c"
  {
#line 2833 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2836 "pretty_printer.c"
    {
#line 2838 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____pp_params_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2841 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2843 "pretty_printer.c"
  }
#line 2845 "pretty_printer.c"
}

#line 2848 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____pp_params_0_0_10001(
#line 2851 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2853 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2855 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2857 "pretty_printer.c"
{
#line 2859 "pretty_printer.c"
  {
#line 2861 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2864 "pretty_printer.c"
    {
#line 2866 "pretty_printer.c"
      mercury__pretty_printer____Compare____pp_params_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2869 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2871 "pretty_printer.c"
  }
#line 2873 "pretty_printer.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__pretty_printer__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 1123 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_f_0(
#line 1123 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4)
#line 1123 "pretty_printer.m"
{
#line 1125 "pretty_printer.m"
  {
#line 1125 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1125 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1125 "pretty_printer.m"
    MR_String mercury__pretty_printer__X_6;
#line 1126 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8 "univ.opt"
    MR_Box mercury__pretty_printer__conv0_X_6;

#line 8 "univ.opt"
    {
#line 8 "univ.opt"
      mercury__pretty_printer__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__pretty_printer__TypeCtorInfo_8_8, &mercury__pretty_printer__conv0_X_6, mercury__pretty_printer__Univ_4);
    }
#line 8 "univ.opt"
    if (mercury__pretty_printer__succeeded)
#line 8 "univ.opt"
      {
#line 8 "univ.opt"
        mercury__pretty_printer__X_6 = ((MR_String) mercury__pretty_printer__conv0_X_6);
#line 8 "univ.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 8 "univ.opt"
      }
#line 1125 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 666 "string.opt"
      {
#line 666 "string.opt"
        MR_Word mercury__pretty_printer__V_4_12;
#line 666 "string.opt"
        MR_Word mercury__pretty_printer__V_7_14;
#line 666 "string.opt"
        MR_Word mercury__pretty_printer__V_8_16;
#line 666 "string.opt"
        MR_Word mercury__pretty_printer__V_9_17;
#line 666 "string.opt"
        MR_Word mercury__pretty_printer__V_10_18 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[17]);
#line 666 "string.opt"
        MR_Word mercury__pretty_printer__V_12_19;

#line 671 "string.opt"
        {
#line 671 "string.opt"
          mercury__pretty_printer__V_8_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 671 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_8_16, 0) = ((MR_Box) (mercury__pretty_printer__X_6));
#line 671 "string.opt"
        }
#line 675 "string.opt"
        mercury__pretty_printer__V_12_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 672 "string.opt"
        mercury__pretty_printer__V_9_17 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[14]);
#line 670 "string.opt"
        {
#line 670 "string.opt"
          mercury__pretty_printer__V_7_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_14, 0) = ((MR_Box) (mercury__pretty_printer__V_8_16));
#line 670 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_14, 1) = ((MR_Box) (mercury__pretty_printer__V_9_17));
#line 670 "string.opt"
        }
#line 667 "string.opt"
        {
#line 667 "string.opt"
          mercury__pretty_printer__V_4_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_12, 0) = ((MR_Box) (mercury__pretty_printer__V_10_18));
#line 667 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_12, 1) = ((MR_Box) (mercury__pretty_printer__V_7_14));
#line 667 "string.opt"
        }
#line 666 "string.opt"
        {
#line 666 "string.opt"
          mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 666 "string.opt"
          MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_4_12));
#line 666 "string.opt"
        }
#line 666 "string.opt"
      }
#line 1125 "pretty_printer.m"
    else
#line 1126 "pretty_printer.m"
      {
#line 1126 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[18]);
#line 1126 "pretty_printer.m"
      }
#line 1125 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1125 "pretty_printer.m"
  }
#line 1123 "pretty_printer.m"
}

#line 1116 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_f_0(
#line 1116 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4)
#line 1116 "pretty_printer.m"
{
#line 1118 "pretty_printer.m"
  {
#line 1118 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1118 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1118 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__X_6;
#line 1119 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 8 "univ.opt"
    MR_Box mercury__pretty_printer__conv0_X_6;

#line 8 "univ.opt"
    {
#line 8 "univ.opt"
      mercury__pretty_printer__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__pretty_printer__TypeCtorInfo_8_8, &mercury__pretty_printer__conv0_X_6, mercury__pretty_printer__Univ_4);
    }
#line 8 "univ.opt"
    if (mercury__pretty_printer__succeeded)
#line 8 "univ.opt"
      {
#line 8 "univ.opt"
        mercury__pretty_printer__X_6 = ((MR_Integer) mercury__pretty_printer__conv0_X_6);
#line 8 "univ.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 8 "univ.opt"
      }
#line 1118 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 268 "int.opt"
      {
#line 268 "int.opt"
        MR_String mercury__pretty_printer__V_4_12;

#line 705 "string.opt"
        {
#line 705 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__pretty_printer__X_6, (MR_Integer) 10, &mercury__pretty_printer__V_4_12);
        }
#line 268 "int.opt"
        {
#line 268 "int.opt"
          mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 268 "int.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_4_12));
#line 268 "int.opt"
        }
#line 268 "int.opt"
      }
#line 1118 "pretty_printer.m"
    else
#line 1119 "pretty_printer.m"
      {
#line 1119 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[16]);
#line 1119 "pretty_printer.m"
      }
#line 1118 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1118 "pretty_printer.m"
  }
#line 1116 "pretty_printer.m"
}

#line 1109 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0(
#line 1109 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4)
#line 1109 "pretty_printer.m"
{
#line 1111 "pretty_printer.m"
  {
#line 1111 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1111 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1111 "pretty_printer.m"
    MR_Float mercury__pretty_printer__X_6;
#line 1112 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 8 "univ.opt"
    MR_Box mercury__pretty_printer__conv0_X_6;

#line 8 "univ.opt"
    {
#line 8 "univ.opt"
      mercury__pretty_printer__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__pretty_printer__TypeCtorInfo_8_8, &mercury__pretty_printer__conv0_X_6, mercury__pretty_printer__Univ_4);
    }
#line 8 "univ.opt"
    if (mercury__pretty_printer__succeeded)
#line 8 "univ.opt"
      {
#line 8 "univ.opt"
        mercury__pretty_printer__X_6 = MR_unbox_float(mercury__pretty_printer__conv0_X_6);
#line 8 "univ.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 8 "univ.opt"
      }
#line 1111 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 169 "float.opt"
      {
#line 169 "float.opt"
        MR_String mercury__pretty_printer__V_4_12;

#line 717 "string.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__pretty_printer__X_6 ;
		{
#line 717 "string.opt"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 3133 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_4_12  = Str;
#line 717 "string.opt"
}
#line 169 "float.opt"
        {
#line 169 "float.opt"
          mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 169 "float.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_4_12));
#line 169 "float.opt"
        }
#line 169 "float.opt"
      }
#line 1111 "pretty_printer.m"
    else
#line 1112 "pretty_printer.m"
      {
#line 1112 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[15]);
#line 1112 "pretty_printer.m"
      }
#line 1111 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1111 "pretty_printer.m"
  }
#line 1109 "pretty_printer.m"
}

#line 1102 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_f_0(
#line 1102 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4)
#line 1102 "pretty_printer.m"
{
#line 1104 "pretty_printer.m"
  {
#line 1104 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1104 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1104 "pretty_printer.m"
    MR_Char mercury__pretty_printer__X_6;
#line 1105 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 8 "univ.opt"
    MR_Box mercury__pretty_printer__conv0_X_6;

#line 8 "univ.opt"
    {
#line 8 "univ.opt"
      mercury__pretty_printer__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__pretty_printer__TypeCtorInfo_8_8, &mercury__pretty_printer__conv0_X_6, mercury__pretty_printer__Univ_4);
    }
#line 8 "univ.opt"
    if (mercury__pretty_printer__succeeded)
#line 8 "univ.opt"
      {
#line 8 "univ.opt"
        mercury__pretty_printer__X_6 = ((MR_Char) (MR_Word) mercury__pretty_printer__conv0_X_6);
#line 8 "univ.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 8 "univ.opt"
      }
#line 1104 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 127 "char.opt"
      {
#line 127 "char.opt"
        MR_String mercury__pretty_printer__V_4_12;

#line 128 "char.opt"
        {
#line 128 "char.opt"
          mercury__pretty_printer__V_4_12 = mercury__term_io__quoted_char_1_f_0(mercury__pretty_printer__X_6);
        }
#line 127 "char.opt"
        {
#line 127 "char.opt"
          mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 127 "char.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_4_12));
#line 127 "char.opt"
        }
#line 127 "char.opt"
      }
#line 1104 "pretty_printer.m"
    else
#line 1105 "pretty_printer.m"
      {
#line 1105 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[14]);
#line 1105 "pretty_printer.m"
      }
#line 1104 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1104 "pretty_printer.m"
  }
#line 1102 "pretty_printer.m"
}

#line 133 "list.int"
static void MR_CALL 
mercury__pretty_printer__foldl__ho20_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 133 "list.int"
  MR_Integer mercury__pretty_printer__HeadVar__3_3,
#line 133 "list.int"
  MR_Integer * mercury__pretty_printer__HeadVar__4_4)
#line 133 "list.int"
{
#line 380 "list.opt"
  while (MR_TRUE)
#line 380 "list.opt"
    {
#line 380 "list.opt"
      /* tailcall optimized into a loop */
#line 380 "list.opt"
      {
#line 380 "list.opt"
        MR_bool mercury__pretty_printer__succeeded;

#line 380 "list.opt"
        if ((mercury__pretty_printer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_String mercury__pretty_printer__H_10_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__pretty_printer__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Integer mercury__pretty_printer__STATE_VARIABLE_A_15_15_13;

#line 390 "list.opt"
            {
#line 390 "list.opt"
              mercury__pretty_printer__STATE_VARIABLE_A_15_15_13 = mercury__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__2_2_f_0(mercury__pretty_printer__H_10_9, mercury__pretty_printer__HeadVar__3_3);
            }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__pretty_printer__HeadVar__2__tmp_copy_2 = mercury__pretty_printer__T_11_10;
#line 384 "list.opt"
              MR_Integer mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__pretty_printer__HeadVar__2_2 = mercury__pretty_printer__HeadVar__2__tmp_copy_2;
#line 384 "list.opt"
            }
#line 384 "list.opt"
            continue;
#line 382 "list.opt"
          }
#line 380 "list.opt"
      }
#line 380 "list.opt"
      break;
#line 380 "list.opt"
    }
#line 133 "list.int"
}

#line 133 "list.int"
static void MR_CALL 
mercury__pretty_printer__foldl__ho19_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 133 "list.int"
  MR_Integer mercury__pretty_printer__HeadVar__3_3,
#line 133 "list.int"
  MR_Integer * mercury__pretty_printer__HeadVar__4_4)
#line 133 "list.int"
{
#line 380 "list.opt"
  while (MR_TRUE)
#line 380 "list.opt"
    {
#line 380 "list.opt"
      /* tailcall optimized into a loop */
#line 380 "list.opt"
      {
#line 380 "list.opt"
        MR_bool mercury__pretty_printer__succeeded;

#line 380 "list.opt"
        if ((mercury__pretty_printer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_String mercury__pretty_printer__H_10_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__pretty_printer__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Integer mercury__pretty_printer__STATE_VARIABLE_A_15_15_13;

#line 390 "list.opt"
            {
#line 390 "list.opt"
              mercury__pretty_printer__STATE_VARIABLE_A_15_15_13 = mercury__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__1_2_f_0(mercury__pretty_printer__H_10_9, mercury__pretty_printer__HeadVar__3_3);
            }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__pretty_printer__HeadVar__2__tmp_copy_2 = mercury__pretty_printer__T_11_10;
#line 384 "list.opt"
              MR_Integer mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__pretty_printer__HeadVar__2_2 = mercury__pretty_printer__HeadVar__2__tmp_copy_2;
#line 384 "list.opt"
            }
#line 384 "list.opt"
            continue;
#line 382 "list.opt"
          }
#line 380 "list.opt"
      }
#line 380 "list.opt"
      break;
#line 380 "list.opt"
    }
#line 133 "list.int"
}

#line 144 "list.int"
static MR_Integer MR_CALL 
mercury__pretty_printer__foldl__ho15_3_f_in__list_0(
#line 144 "list.int"
  MR_Word mercury__pretty_printer__Xs_6_6,
#line 144 "list.int"
  MR_Integer mercury__pretty_printer__A_7_7)
#line 144 "list.int"
{
#line 395 "list.opt"
  {
#line 395 "list.opt"
    MR_bool mercury__pretty_printer__succeeded;
#line 395 "list.opt"
    MR_Integer mercury__pretty_printer__B_8_8;

#line 395 "list.opt"
    {
#line 395 "list.opt"
      mercury__pretty_printer__foldl__ho19_4_p_in__list_0(mercury__pretty_printer__Xs_6_6, mercury__pretty_printer__A_7_7, &mercury__pretty_printer__B_8_8);
    }
#line 395 "list.opt"
    return mercury__pretty_printer__B_8_8;
#line 395 "list.opt"
  }
#line 144 "list.int"
}

#line 144 "list.int"
static MR_Integer MR_CALL 
mercury__pretty_printer__foldl__ho14_3_f_in__list_0(
#line 144 "list.int"
  MR_Word mercury__pretty_printer__Xs_6_6,
#line 144 "list.int"
  MR_Integer mercury__pretty_printer__A_7_7)
#line 144 "list.int"
{
#line 395 "list.opt"
  {
#line 395 "list.opt"
    MR_bool mercury__pretty_printer__succeeded;
#line 395 "list.opt"
    MR_Integer mercury__pretty_printer__B_8_8;

#line 395 "list.opt"
    {
#line 395 "list.opt"
      mercury__pretty_printer__foldl__ho20_4_p_in__list_0(mercury__pretty_printer__Xs_6_6, mercury__pretty_printer__A_7_7, &mercury__pretty_printer__B_8_8);
    }
#line 395 "list.opt"
    return mercury__pretty_printer__B_8_8;
#line 395 "list.opt"
  }
#line 144 "list.int"
}

#line 3433 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho9_6_p_0_1(
#line 3436 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 3438 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 3440 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 3442 "pretty_printer.c"
{
#line 3444 "pretty_printer.c"
  {
#line 3446 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 3448 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 3450 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 3453 "pretty_printer.c"
    {
#line 3455 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_char_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 3458 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 3460 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 3462 "pretty_printer.c"
  }
#line 3464 "pretty_printer.c"
}

#line 1094 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho9_6_p_0(
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1094 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1094 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1094 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1094 "pretty_printer.m"
{
#line 1098 "pretty_printer.m"
  {
#line 1098 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1098 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[12];
#line 298 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 290 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 290 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_23_30 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 41 "map.opt"
    MR_Box mercury__pretty_printer__conv1_FMap0_Type_Arity_20;

#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_22_29, mercury__pretty_printer__TypeInfo_23_30, mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
    }
#line 41 "map.opt"
    if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__pretty_printer__FMap0_Type_Arity_20 = ((MR_Word) mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
#line 41 "map.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 298 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 295 "pretty_printer.m"
      {
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_25_32 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 41 "map.opt"
        MR_Box mercury__pretty_printer__conv2_FMap0_Arity_21;

#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_24_31, mercury__pretty_printer__TypeInfo_25_32, mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMap0_Arity_21);
        }
#line 41 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
          {
#line 41 "map.opt"
            mercury__pretty_printer__FMap0_Arity_21 = ((MR_Word) mercury__pretty_printer__conv2_FMap0_Arity_21);
#line 41 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
          }
#line 293 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 292 "pretty_printer.m"
          {
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 292 "pretty_printer.m"
          }
#line 293 "pretty_printer.m"
        else
#line 294 "pretty_printer.m"
          {
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 294 "pretty_printer.m"
          }
#line 3584 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3586 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 296 "pretty_printer.m"
        {
#line 296 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 3593 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 295 "pretty_printer.m"
      }
#line 298 "pretty_printer.m"
    else
#line 299 "pretty_printer.m"
      {
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 299 "pretty_printer.m"
        {
#line 299 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 3628 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3630 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 48 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "pretty_printer.m"
        {
#line 300 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 3639 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 301 "pretty_printer.m"
        {
#line 301 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 299 "pretty_printer.m"
      }
#line 1098 "pretty_printer.m"
  }
#line 1094 "pretty_printer.m"
}

#line 3653 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho8_6_p_0_1(
#line 3656 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 3658 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 3660 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 3662 "pretty_printer.c"
{
#line 3664 "pretty_printer.c"
  {
#line 3666 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 3668 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 3670 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 3673 "pretty_printer.c"
    {
#line 3675 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_float_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 3678 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 3680 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 3682 "pretty_printer.c"
  }
#line 3684 "pretty_printer.c"
}

#line 1094 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho8_6_p_0(
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1094 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1094 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1094 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1094 "pretty_printer.m"
{
#line 1098 "pretty_printer.m"
  {
#line 1098 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1098 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[11];
#line 298 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 290 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 290 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_23_30 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 41 "map.opt"
    MR_Box mercury__pretty_printer__conv1_FMap0_Type_Arity_20;

#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_22_29, mercury__pretty_printer__TypeInfo_23_30, mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
    }
#line 41 "map.opt"
    if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__pretty_printer__FMap0_Type_Arity_20 = ((MR_Word) mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
#line 41 "map.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 298 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 295 "pretty_printer.m"
      {
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_25_32 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 41 "map.opt"
        MR_Box mercury__pretty_printer__conv2_FMap0_Arity_21;

#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_24_31, mercury__pretty_printer__TypeInfo_25_32, mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMap0_Arity_21);
        }
#line 41 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
          {
#line 41 "map.opt"
            mercury__pretty_printer__FMap0_Arity_21 = ((MR_Word) mercury__pretty_printer__conv2_FMap0_Arity_21);
#line 41 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
          }
#line 293 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 292 "pretty_printer.m"
          {
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 292 "pretty_printer.m"
          }
#line 293 "pretty_printer.m"
        else
#line 294 "pretty_printer.m"
          {
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 294 "pretty_printer.m"
          }
#line 3804 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3806 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 296 "pretty_printer.m"
        {
#line 296 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 3813 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 295 "pretty_printer.m"
      }
#line 298 "pretty_printer.m"
    else
#line 299 "pretty_printer.m"
      {
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 299 "pretty_printer.m"
        {
#line 299 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 3848 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3850 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 48 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "pretty_printer.m"
        {
#line 300 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 3859 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 301 "pretty_printer.m"
        {
#line 301 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 299 "pretty_printer.m"
      }
#line 1098 "pretty_printer.m"
  }
#line 1094 "pretty_printer.m"
}

#line 3873 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho7_6_p_0_1(
#line 3876 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 3878 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 3880 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 3882 "pretty_printer.c"
{
#line 3884 "pretty_printer.c"
  {
#line 3886 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 3888 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 3890 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 3893 "pretty_printer.c"
    {
#line 3895 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_int_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 3898 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 3900 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 3902 "pretty_printer.c"
  }
#line 3904 "pretty_printer.c"
}

#line 1094 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho7_6_p_0(
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1094 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1094 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1094 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1094 "pretty_printer.m"
{
#line 1098 "pretty_printer.m"
  {
#line 1098 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1098 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[10];
#line 298 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 290 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 290 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_23_30 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 41 "map.opt"
    MR_Box mercury__pretty_printer__conv1_FMap0_Type_Arity_20;

#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_22_29, mercury__pretty_printer__TypeInfo_23_30, mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
    }
#line 41 "map.opt"
    if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__pretty_printer__FMap0_Type_Arity_20 = ((MR_Word) mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
#line 41 "map.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 298 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 295 "pretty_printer.m"
      {
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_25_32 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 41 "map.opt"
        MR_Box mercury__pretty_printer__conv2_FMap0_Arity_21;

#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_24_31, mercury__pretty_printer__TypeInfo_25_32, mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMap0_Arity_21);
        }
#line 41 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
          {
#line 41 "map.opt"
            mercury__pretty_printer__FMap0_Arity_21 = ((MR_Word) mercury__pretty_printer__conv2_FMap0_Arity_21);
#line 41 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
          }
#line 293 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 292 "pretty_printer.m"
          {
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 292 "pretty_printer.m"
          }
#line 293 "pretty_printer.m"
        else
#line 294 "pretty_printer.m"
          {
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 294 "pretty_printer.m"
          }
#line 4024 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4026 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 296 "pretty_printer.m"
        {
#line 296 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 4033 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 295 "pretty_printer.m"
      }
#line 298 "pretty_printer.m"
    else
#line 299 "pretty_printer.m"
      {
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 299 "pretty_printer.m"
        {
#line 299 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 4068 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4070 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 48 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "pretty_printer.m"
        {
#line 300 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 4079 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 301 "pretty_printer.m"
        {
#line 301 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 299 "pretty_printer.m"
      }
#line 1098 "pretty_printer.m"
  }
#line 1094 "pretty_printer.m"
}

#line 4093 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho6_6_p_0_1(
#line 4096 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 4098 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 4100 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 4102 "pretty_printer.c"
{
#line 4104 "pretty_printer.c"
  {
#line 4106 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 4108 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 4110 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 4113 "pretty_printer.c"
    {
#line 4115 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_string_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 4118 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 4120 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 4122 "pretty_printer.c"
  }
#line 4124 "pretty_printer.c"
}

#line 1094 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho6_6_p_0(
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1094 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1094 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1094 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1094 "pretty_printer.m"
{
#line 1098 "pretty_printer.m"
  {
#line 1098 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1098 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[9];
#line 298 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 290 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 290 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_23_30 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 41 "map.opt"
    MR_Box mercury__pretty_printer__conv1_FMap0_Type_Arity_20;

#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_22_29, mercury__pretty_printer__TypeInfo_23_30, mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
    }
#line 41 "map.opt"
    if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__pretty_printer__FMap0_Type_Arity_20 = ((MR_Word) mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
#line 41 "map.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 298 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 295 "pretty_printer.m"
      {
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_25_32 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 41 "map.opt"
        MR_Box mercury__pretty_printer__conv2_FMap0_Arity_21;

#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_24_31, mercury__pretty_printer__TypeInfo_25_32, mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMap0_Arity_21);
        }
#line 41 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
          {
#line 41 "map.opt"
            mercury__pretty_printer__FMap0_Arity_21 = ((MR_Word) mercury__pretty_printer__conv2_FMap0_Arity_21);
#line 41 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
          }
#line 293 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 292 "pretty_printer.m"
          {
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 292 "pretty_printer.m"
          }
#line 293 "pretty_printer.m"
        else
#line 294 "pretty_printer.m"
          {
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 294 "pretty_printer.m"
          }
#line 4244 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4246 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 296 "pretty_printer.m"
        {
#line 296 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 4253 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 295 "pretty_printer.m"
      }
#line 298 "pretty_printer.m"
    else
#line 299 "pretty_printer.m"
      {
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 299 "pretty_printer.m"
        {
#line 299 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 4288 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4290 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 48 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "pretty_printer.m"
        {
#line 300 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 4299 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 301 "pretty_printer.m"
        {
#line 301 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 299 "pretty_printer.m"
      }
#line 1098 "pretty_printer.m"
  }
#line 1094 "pretty_printer.m"
}

#line 4313 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho5_6_p_0_1(
#line 4316 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 4318 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 4320 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 4322 "pretty_printer.c"
{
#line 4324 "pretty_printer.c"
  {
#line 4326 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 4328 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 4330 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 4333 "pretty_printer.c"
    {
#line 4335 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_array_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 4338 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 4340 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 4342 "pretty_printer.c"
  }
#line 4344 "pretty_printer.c"
}

#line 1094 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho5_6_p_0(
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1094 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1094 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1094 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1094 "pretty_printer.m"
{
#line 1098 "pretty_printer.m"
  {
#line 1098 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1098 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[8];
#line 298 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 290 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 290 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_23_30 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 41 "map.opt"
    MR_Box mercury__pretty_printer__conv1_FMap0_Type_Arity_20;

#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_22_29, mercury__pretty_printer__TypeInfo_23_30, mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
    }
#line 41 "map.opt"
    if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__pretty_printer__FMap0_Type_Arity_20 = ((MR_Word) mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
#line 41 "map.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 298 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 295 "pretty_printer.m"
      {
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_25_32 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 41 "map.opt"
        MR_Box mercury__pretty_printer__conv2_FMap0_Arity_21;

#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_24_31, mercury__pretty_printer__TypeInfo_25_32, mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMap0_Arity_21);
        }
#line 41 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
          {
#line 41 "map.opt"
            mercury__pretty_printer__FMap0_Arity_21 = ((MR_Word) mercury__pretty_printer__conv2_FMap0_Arity_21);
#line 41 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
          }
#line 293 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 292 "pretty_printer.m"
          {
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 292 "pretty_printer.m"
          }
#line 293 "pretty_printer.m"
        else
#line 294 "pretty_printer.m"
          {
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 294 "pretty_printer.m"
          }
#line 4464 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4466 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 296 "pretty_printer.m"
        {
#line 296 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 4473 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 295 "pretty_printer.m"
      }
#line 298 "pretty_printer.m"
    else
#line 299 "pretty_printer.m"
      {
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 299 "pretty_printer.m"
        {
#line 299 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 4508 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4510 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 48 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "pretty_printer.m"
        {
#line 300 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 4519 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 301 "pretty_printer.m"
        {
#line 301 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 299 "pretty_printer.m"
      }
#line 1098 "pretty_printer.m"
  }
#line 1094 "pretty_printer.m"
}

#line 4533 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho4_6_p_0_1(
#line 4536 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 4538 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 4540 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 4542 "pretty_printer.c"
{
#line 4544 "pretty_printer.c"
  {
#line 4546 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 4548 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 4550 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 4553 "pretty_printer.c"
    {
#line 4555 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_list_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 4558 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 4560 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 4562 "pretty_printer.c"
  }
#line 4564 "pretty_printer.c"
}

#line 1094 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho4_6_p_0(
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1094 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1094 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1094 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1094 "pretty_printer.m"
{
#line 1098 "pretty_printer.m"
  {
#line 1098 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1098 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[7];
#line 298 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 290 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 290 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_23_30 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 41 "map.opt"
    MR_Box mercury__pretty_printer__conv1_FMap0_Type_Arity_20;

#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_22_29, mercury__pretty_printer__TypeInfo_23_30, mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
    }
#line 41 "map.opt"
    if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__pretty_printer__FMap0_Type_Arity_20 = ((MR_Word) mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
#line 41 "map.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 298 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 295 "pretty_printer.m"
      {
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_25_32 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 41 "map.opt"
        MR_Box mercury__pretty_printer__conv2_FMap0_Arity_21;

#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_24_31, mercury__pretty_printer__TypeInfo_25_32, mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMap0_Arity_21);
        }
#line 41 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
          {
#line 41 "map.opt"
            mercury__pretty_printer__FMap0_Arity_21 = ((MR_Word) mercury__pretty_printer__conv2_FMap0_Arity_21);
#line 41 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
          }
#line 293 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 292 "pretty_printer.m"
          {
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 292 "pretty_printer.m"
          }
#line 293 "pretty_printer.m"
        else
#line 294 "pretty_printer.m"
          {
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 294 "pretty_printer.m"
          }
#line 4684 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4686 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 296 "pretty_printer.m"
        {
#line 296 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 4693 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 295 "pretty_printer.m"
      }
#line 298 "pretty_printer.m"
    else
#line 299 "pretty_printer.m"
      {
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 299 "pretty_printer.m"
        {
#line 299 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 4728 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4730 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 48 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "pretty_printer.m"
        {
#line 300 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 4739 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 301 "pretty_printer.m"
        {
#line 301 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 299 "pretty_printer.m"
      }
#line 1098 "pretty_printer.m"
  }
#line 1094 "pretty_printer.m"
}

#line 4753 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho3_6_p_0_1(
#line 4756 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 4758 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 4760 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 4762 "pretty_printer.c"
{
#line 4764 "pretty_printer.c"
  {
#line 4766 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 4768 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 4770 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 4773 "pretty_printer.c"
    {
#line 4775 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_tree234_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 4778 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 4780 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 4782 "pretty_printer.c"
  }
#line 4784 "pretty_printer.c"
}

#line 1094 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho3_6_p_0(
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1094 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1094 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1094 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1094 "pretty_printer.m"
{
#line 1098 "pretty_printer.m"
  {
#line 1098 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1098 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[6];
#line 298 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 290 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 290 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_23_30 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 41 "map.opt"
    MR_Box mercury__pretty_printer__conv1_FMap0_Type_Arity_20;

#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_22_29, mercury__pretty_printer__TypeInfo_23_30, mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
    }
#line 41 "map.opt"
    if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__pretty_printer__FMap0_Type_Arity_20 = ((MR_Word) mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
#line 41 "map.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 298 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 295 "pretty_printer.m"
      {
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_25_32 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 41 "map.opt"
        MR_Box mercury__pretty_printer__conv2_FMap0_Arity_21;

#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_24_31, mercury__pretty_printer__TypeInfo_25_32, mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMap0_Arity_21);
        }
#line 41 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
          {
#line 41 "map.opt"
            mercury__pretty_printer__FMap0_Arity_21 = ((MR_Word) mercury__pretty_printer__conv2_FMap0_Arity_21);
#line 41 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
          }
#line 293 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 292 "pretty_printer.m"
          {
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 292 "pretty_printer.m"
          }
#line 293 "pretty_printer.m"
        else
#line 294 "pretty_printer.m"
          {
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 294 "pretty_printer.m"
          }
#line 4904 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4906 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 296 "pretty_printer.m"
        {
#line 296 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 4913 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 295 "pretty_printer.m"
      }
#line 298 "pretty_printer.m"
    else
#line 299 "pretty_printer.m"
      {
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 299 "pretty_printer.m"
        {
#line 299 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 4948 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4950 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 48 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "pretty_printer.m"
        {
#line 300 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 4959 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 301 "pretty_printer.m"
        {
#line 301 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 299 "pretty_printer.m"
      }
#line 1098 "pretty_printer.m"
  }
#line 1094 "pretty_printer.m"
}

#line 4973 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho2_6_p_0_1(
#line 4976 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 4978 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 4980 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 4982 "pretty_printer.c"
{
#line 4984 "pretty_printer.c"
  {
#line 4986 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 4988 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 4990 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 4993 "pretty_printer.c"
    {
#line 4995 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_version_array_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 4998 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 5000 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 5002 "pretty_printer.c"
  }
#line 5004 "pretty_printer.c"
}

#line 1094 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho2_6_p_0(
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1094 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1094 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1094 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1094 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1094 "pretty_printer.m"
{
#line 1098 "pretty_printer.m"
  {
#line 1098 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1098 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[5];
#line 298 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 290 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 290 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_23_30 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 41 "map.opt"
    MR_Box mercury__pretty_printer__conv1_FMap0_Type_Arity_20;

#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_22_29, mercury__pretty_printer__TypeInfo_23_30, mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
    }
#line 41 "map.opt"
    if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__pretty_printer__FMap0_Type_Arity_20 = ((MR_Word) mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
#line 41 "map.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 298 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 295 "pretty_printer.m"
      {
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_25_32 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 41 "map.opt"
        MR_Box mercury__pretty_printer__conv2_FMap0_Arity_21;

#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_24_31, mercury__pretty_printer__TypeInfo_25_32, mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMap0_Arity_21);
        }
#line 41 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
          {
#line 41 "map.opt"
            mercury__pretty_printer__FMap0_Arity_21 = ((MR_Word) mercury__pretty_printer__conv2_FMap0_Arity_21);
#line 41 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
          }
#line 293 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 292 "pretty_printer.m"
          {
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 292 "pretty_printer.m"
          }
#line 293 "pretty_printer.m"
        else
#line 294 "pretty_printer.m"
          {
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 294 "pretty_printer.m"
          }
#line 5124 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 5126 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 296 "pretty_printer.m"
        {
#line 296 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 5133 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 295 "pretty_printer.m"
      }
#line 298 "pretty_printer.m"
    else
#line 299 "pretty_printer.m"
      {
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 299 "pretty_printer.m"
        {
#line 299 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 5168 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 5170 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 48 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "pretty_printer.m"
        {
#line 300 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 5179 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 301 "pretty_printer.m"
        {
#line 301 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 299 "pretty_printer.m"
      }
#line 1098 "pretty_printer.m"
  }
#line 1094 "pretty_printer.m"
}

#line 391 "pretty_printer.m"
static MR_Integer MR_CALL 
mercury__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__2_2_f_0(
#line 391 "pretty_printer.m"
  MR_String mercury__pretty_printer__HeadVar__1_109,
#line 391 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__2_110)
#line 391 "pretty_printer.m"
{
#line 391 "pretty_printer.m"
  {
#line 391 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 391 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__HeadVar__3_111;
#line 391 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_112_112;

#line 391 "pretty_printer.m"
    {
#line 391 "pretty_printer.m"
      mercury__pretty_printer__V_112_112 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__HeadVar__1_109);
    }
#line 391 "pretty_printer.m"
    mercury__pretty_printer__HeadVar__3_111 = (mercury__pretty_printer__V_112_112 + mercury__pretty_printer__HeadVar__2_110);
#line 391 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_111;
#line 391 "pretty_printer.m"
  }
#line 391 "pretty_printer.m"
}

#line 391 "pretty_printer.m"
static MR_Integer MR_CALL 
mercury__pretty_printer__IntroducedFrom__func__write_doc_to_stream__391__1_2_f_0(
#line 391 "pretty_printer.m"
  MR_String mercury__pretty_printer__HeadVar__1_109,
#line 391 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__2_110)
#line 391 "pretty_printer.m"
{
#line 391 "pretty_printer.m"
  {
#line 391 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 391 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__HeadVar__3_111;
#line 391 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_112_112;

#line 391 "pretty_printer.m"
    {
#line 391 "pretty_printer.m"
      mercury__pretty_printer__V_112_112 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__HeadVar__1_109);
    }
#line 391 "pretty_printer.m"
    mercury__pretty_printer__HeadVar__3_111 = (mercury__pretty_printer__V_112_112 + mercury__pretty_printer__HeadVar__2_110);
#line 391 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_111;
#line 391 "pretty_printer.m"
  }
#line 391 "pretty_printer.m"
}

#line 200 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer____Compare____pp_params_0_0(
#line 200 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
#line 200 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 200 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3)
#line 200 "pretty_printer.m"
{
#line 200 "pretty_printer.m"
  {
#line 200 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 200 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastX_12 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;
#line 200 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastY_13 = (MR_Integer) mercury__pretty_printer__HeadVar__3_3;

#line 200 "pretty_printer.m"
    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_12 == mercury__pretty_printer__CastY_13);
#line 200 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 5281 "pretty_printer.c"
      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 200 "pretty_printer.m"
    else
#line 200 "pretty_printer.m"
      {
#line 200 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 200 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 200 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 2)));
#line 200 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));
#line 200 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));
#line 200 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 2)));
#line 200 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_10_10;

#line 66 "private_builtin.opt"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_4_4 < mercury__pretty_printer__V_7_7);
#line 69 "private_builtin.opt"
        if (mercury__pretty_printer__succeeded)
#line 68 "private_builtin.opt"
          mercury__pretty_printer__V_10_10 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_4_4 == mercury__pretty_printer__V_7_7);
#line 74 "private_builtin.opt"
            if (mercury__pretty_printer__succeeded)
#line 73 "private_builtin.opt"
              mercury__pretty_printer__V_10_10 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__pretty_printer__V_10_10 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 5324 "pretty_printer.c"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_10_10 == (MR_Integer) 0);
#line 200 "pretty_printer.m"
        mercury__pretty_printer__succeeded = !(mercury__pretty_printer__succeeded);
#line 200 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 200 "pretty_printer.m"
          *mercury__pretty_printer__HeadVar__1_1 = mercury__pretty_printer__V_10_10;
#line 200 "pretty_printer.m"
        else
#line 200 "pretty_printer.m"
          {
#line 200 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_11_11;

#line 66 "private_builtin.opt"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_5_5 < mercury__pretty_printer__V_8_8);
#line 69 "private_builtin.opt"
            if (mercury__pretty_printer__succeeded)
#line 68 "private_builtin.opt"
              mercury__pretty_printer__V_11_11 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_5_5 == mercury__pretty_printer__V_8_8);
#line 74 "private_builtin.opt"
                if (mercury__pretty_printer__succeeded)
#line 73 "private_builtin.opt"
                  mercury__pretty_printer__V_11_11 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__pretty_printer__V_11_11 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 5361 "pretty_printer.c"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_11_11 == (MR_Integer) 0);
#line 200 "pretty_printer.m"
            mercury__pretty_printer__succeeded = !(mercury__pretty_printer__succeeded);
#line 200 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 200 "pretty_printer.m"
              *mercury__pretty_printer__HeadVar__1_1 = mercury__pretty_printer__V_11_11;
#line 200 "pretty_printer.m"
            else
#line 200 "pretty_printer.m"
              {
#line 200 "pretty_printer.m"
                mercury__pretty_printer____Compare____formatting_limit_0_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__V_6_6, mercury__pretty_printer__V_9_9);
#line 200 "pretty_printer.m"
                return;
              }
#line 200 "pretty_printer.m"
          }
#line 200 "pretty_printer.m"
      }
#line 200 "pretty_printer.m"
  }
#line 200 "pretty_printer.m"
}

#line 200 "pretty_printer.m"
MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_params_0_0(
#line 200 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 200 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 200 "pretty_printer.m"
{
#line 200 "pretty_printer.m"
  {
#line 200 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 200 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastX_9 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 200 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastY_10 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 200 "pretty_printer.m"
    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_9 == mercury__pretty_printer__CastY_10);
#line 200 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 200 "pretty_printer.m"
      mercury__pretty_printer__succeeded = MR_TRUE;
#line 200 "pretty_printer.m"
    else
#line 200 "pretty_printer.m"
      {
#line 200 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 200 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
#line 200 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 2)));
#line 200 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 200 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 200 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 2)));

#line 5428 "pretty_printer.c"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_3_3 == mercury__pretty_printer__V_6_6);
#line 200 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 200 "pretty_printer.m"
          {
#line 5434 "pretty_printer.c"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_4_4 == mercury__pretty_printer__V_7_7);
#line 200 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 5438 "pretty_printer.c"
              {
#line 5440 "pretty_printer.c"
                return mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____formatting_limit_0_0(mercury__pretty_printer__V_5_5, mercury__pretty_printer__V_8_8);
              }
#line 200 "pretty_printer.m"
          }
#line 200 "pretty_printer.m"
      }
#line 200 "pretty_printer.m"
    return mercury__pretty_printer__succeeded;
#line 200 "pretty_printer.m"
  }
#line 200 "pretty_printer.m"
}

#line 263 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer____Compare____pp_internal_0_0(
#line 263 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
#line 263 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 263 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3)
#line 263 "pretty_printer.m"
{
#line 263 "pretty_printer.m"
  {
#line 263 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 263 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastX_40 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;
#line 263 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastY_41 = (MR_Integer) mercury__pretty_printer__HeadVar__3_3;

#line 263 "pretty_printer.m"
    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_40 == mercury__pretty_printer__CastY_41);
#line 263 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 5478 "pretty_printer.c"
      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 263 "pretty_printer.m"
    else
#line 263 "pretty_printer.m"
      if ((mercury__pretty_printer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 263 "pretty_printer.m"
        if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 263 "pretty_printer.m"
          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 263 "pretty_printer.m"
        else
#line 263 "pretty_printer.m"
          if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 263 "pretty_printer.m"
            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "pretty_printer.m"
          else
#line 263 "pretty_printer.m"
            if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 263 "pretty_printer.m"
              *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "pretty_printer.m"
            else
#line 263 "pretty_printer.m"
              if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5504 "pretty_printer.c"
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "pretty_printer.m"
              else
#line 263 "pretty_printer.m"
                if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5510 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "pretty_printer.m"
                else
#line 5514 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "pretty_printer.m"
      else
#line 263 "pretty_printer.m"
        if ((mercury__pretty_printer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 263 "pretty_printer.m"
          if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 263 "pretty_printer.m"
            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "pretty_printer.m"
          else
#line 263 "pretty_printer.m"
            if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 263 "pretty_printer.m"
              *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 263 "pretty_printer.m"
            else
#line 263 "pretty_printer.m"
              if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 263 "pretty_printer.m"
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "pretty_printer.m"
              else
#line 263 "pretty_printer.m"
                if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5540 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "pretty_printer.m"
                else
#line 263 "pretty_printer.m"
                  if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5546 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "pretty_printer.m"
                  else
#line 5550 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "pretty_printer.m"
        else
#line 263 "pretty_printer.m"
          if ((mercury__pretty_printer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 263 "pretty_printer.m"
            if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 263 "pretty_printer.m"
              *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "pretty_printer.m"
            else
#line 263 "pretty_printer.m"
              if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 263 "pretty_printer.m"
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "pretty_printer.m"
              else
#line 263 "pretty_printer.m"
                if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 263 "pretty_printer.m"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 263 "pretty_printer.m"
                else
#line 263 "pretty_printer.m"
                  if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5576 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "pretty_printer.m"
                  else
#line 263 "pretty_printer.m"
                    if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5582 "pretty_printer.c"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "pretty_printer.m"
                    else
#line 5586 "pretty_printer.c"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "pretty_printer.m"
          else
#line 263 "pretty_printer.m"
            if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 263 "pretty_printer.m"
              {
#line 263 "pretty_printer.m"
                MR_String mercury__pretty_printer__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

#line 263 "pretty_printer.m"
                if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5599 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "pretty_printer.m"
                else
#line 263 "pretty_printer.m"
                  if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5605 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "pretty_printer.m"
                  else
#line 263 "pretty_printer.m"
                    if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 5611 "pretty_printer.c"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "pretty_printer.m"
                    else
#line 263 "pretty_printer.m"
                      if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 263 "pretty_printer.m"
                        {
#line 263 "pretty_printer.m"
                          MR_String mercury__pretty_printer__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));
#line 263 "pretty_printer.m"
                          MR_Integer mercury__pretty_printer__Res_7_51;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer____Compare____pp_internal_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__pretty_printer__V_45_45 ;
	S2 =  mercury__pretty_printer__V_13_13 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 5639 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__Res_7_51  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                          mercury__pretty_printer__succeeded = (mercury__pretty_printer__Res_7_51 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                          if (mercury__pretty_printer__succeeded)
#line 104 "private_builtin.opt"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                          else
#line 110 "private_builtin.opt"
                            {
#line 107 "private_builtin.opt"
                              mercury__pretty_printer__succeeded = (mercury__pretty_printer__Res_7_51 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                              if (mercury__pretty_printer__succeeded)
#line 109 "private_builtin.opt"
                                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                              else
#line 111 "private_builtin.opt"
                                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                            }
#line 263 "pretty_printer.m"
                        }
#line 263 "pretty_printer.m"
                      else
#line 263 "pretty_printer.m"
                        if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5674 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "pretty_printer.m"
                        else
#line 5678 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "pretty_printer.m"
              }
#line 263 "pretty_printer.m"
            else
#line 263 "pretty_printer.m"
              if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 263 "pretty_printer.m"
                {
#line 263 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

#line 263 "pretty_printer.m"
                  if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5693 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "pretty_printer.m"
                  else
#line 263 "pretty_printer.m"
                    if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5699 "pretty_printer.c"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "pretty_printer.m"
                    else
#line 263 "pretty_printer.m"
                      if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 5705 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "pretty_printer.m"
                      else
#line 263 "pretty_printer.m"
                        if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5711 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "pretty_printer.m"
                        else
#line 263 "pretty_printer.m"
                          if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 263 "pretty_printer.m"
                            {
#line 263 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));

#line 263 "pretty_printer.m"
                              {
#line 263 "pretty_printer.m"
                                mercury__pretty_printer____Compare____formatting_limit_0_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__V_46_46, mercury__pretty_printer__V_39_39);
#line 263 "pretty_printer.m"
                                return;
                              }
#line 263 "pretty_printer.m"
                            }
#line 263 "pretty_printer.m"
                          else
#line 5733 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "pretty_printer.m"
                }
#line 263 "pretty_printer.m"
              else
#line 263 "pretty_printer.m"
                {
#line 263 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

#line 263 "pretty_printer.m"
                  if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5746 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "pretty_printer.m"
                  else
#line 263 "pretty_printer.m"
                    if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5752 "pretty_printer.c"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "pretty_printer.m"
                    else
#line 263 "pretty_printer.m"
                      if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 5758 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "pretty_printer.m"
                      else
#line 263 "pretty_printer.m"
                        if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5764 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 263 "pretty_printer.m"
                        else
#line 263 "pretty_printer.m"
                          if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5770 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 263 "pretty_printer.m"
                          else
#line 263 "pretty_printer.m"
                            {
#line 263 "pretty_printer.m"
                              MR_Integer mercury__pretty_printer__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));

#line 66 "private_builtin.opt"
                              mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_47_47 < mercury__pretty_printer__V_28_28);
#line 69 "private_builtin.opt"
                              if (mercury__pretty_printer__succeeded)
#line 68 "private_builtin.opt"
                                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                              else
#line 74 "private_builtin.opt"
                                {
#line 71 "private_builtin.opt"
                                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_47_47 == mercury__pretty_printer__V_28_28);
#line 74 "private_builtin.opt"
                                  if (mercury__pretty_printer__succeeded)
#line 73 "private_builtin.opt"
                                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                  else
#line 75 "private_builtin.opt"
                                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                }
#line 263 "pretty_printer.m"
                            }
#line 263 "pretty_printer.m"
                }
#line 263 "pretty_printer.m"
  }
#line 263 "pretty_printer.m"
}

#line 263 "pretty_printer.m"
MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_internal_0_0(
#line 263 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 263 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 263 "pretty_printer.m"
{
#line 263 "pretty_printer.m"
  {
#line 263 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 263 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastX_15 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 263 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastY_16 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 263 "pretty_printer.m"
    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_15 == mercury__pretty_printer__CastY_16);
#line 263 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 263 "pretty_printer.m"
      mercury__pretty_printer__succeeded = MR_TRUE;
#line 263 "pretty_printer.m"
    else
#line 263 "pretty_printer.m"
      if ((mercury__pretty_printer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 263 "pretty_printer.m"
        {
#line 263 "pretty_printer.m"
          MR_Integer mercury__pretty_printer__CastX_5 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 263 "pretty_printer.m"
          MR_Integer mercury__pretty_printer__CastY_6 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 263 "pretty_printer.m"
          mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastY_6 == mercury__pretty_printer__CastX_5);
#line 263 "pretty_printer.m"
        }
#line 263 "pretty_printer.m"
      else
#line 263 "pretty_printer.m"
        if ((mercury__pretty_printer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 263 "pretty_printer.m"
          {
#line 263 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__CastX_3 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 263 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__CastY_4 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 263 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastY_4 == mercury__pretty_printer__CastX_3);
#line 263 "pretty_printer.m"
          }
#line 263 "pretty_printer.m"
        else
#line 263 "pretty_printer.m"
          if ((mercury__pretty_printer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 263 "pretty_printer.m"
            {
#line 263 "pretty_printer.m"
              MR_Integer mercury__pretty_printer__CastX_9 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 263 "pretty_printer.m"
              MR_Integer mercury__pretty_printer__CastY_10 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 263 "pretty_printer.m"
              mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastY_10 == mercury__pretty_printer__CastX_9);
#line 263 "pretty_printer.m"
            }
#line 263 "pretty_printer.m"
          else
#line 263 "pretty_printer.m"
            if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 263 "pretty_printer.m"
              {
#line 263 "pretty_printer.m"
                MR_String mercury__pretty_printer__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 263 "pretty_printer.m"
                MR_String mercury__pretty_printer__V_8_8;

#line 263 "pretty_printer.m"
                mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 263 "pretty_printer.m"
                if (mercury__pretty_printer__succeeded)
#line 263 "pretty_printer.m"
                  {
#line 263 "pretty_printer.m"
                    mercury__pretty_printer__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 5898 "pretty_printer.c"
                    mercury__pretty_printer__succeeded = (strcmp(mercury__pretty_printer__V_7_7, mercury__pretty_printer__V_8_8) == 0);
#line 263 "pretty_printer.m"
                  }
#line 263 "pretty_printer.m"
              }
#line 263 "pretty_printer.m"
            else
#line 263 "pretty_printer.m"
              if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 263 "pretty_printer.m"
                {
#line 263 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 263 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__V_14_14;

#line 263 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 263 "pretty_printer.m"
                  if (mercury__pretty_printer__succeeded)
#line 263 "pretty_printer.m"
                    {
#line 263 "pretty_printer.m"
                      mercury__pretty_printer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 5923 "pretty_printer.c"
                      {
#line 5925 "pretty_printer.c"
                        return mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____formatting_limit_0_0(mercury__pretty_printer__V_13_13, mercury__pretty_printer__V_14_14);
                      }
#line 263 "pretty_printer.m"
                    }
#line 263 "pretty_printer.m"
                }
#line 263 "pretty_printer.m"
              else
#line 263 "pretty_printer.m"
                {
#line 263 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 263 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__V_12_12;

#line 263 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 263 "pretty_printer.m"
                  if (mercury__pretty_printer__succeeded)
#line 263 "pretty_printer.m"
                    {
#line 263 "pretty_printer.m"
                      mercury__pretty_printer__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 5949 "pretty_printer.c"
                      mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_11_11 == mercury__pretty_printer__V_12_12);
#line 263 "pretty_printer.m"
                    }
#line 263 "pretty_printer.m"
                }
#line 263 "pretty_printer.m"
    return mercury__pretty_printer__succeeded;
#line 263 "pretty_printer.m"
  }
#line 263 "pretty_printer.m"
}

#line 261 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer____Compare____indents_0_0(
#line 261 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
#line 261 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 261 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3)
#line 261 "pretty_printer.m"
{
#line 261 "pretty_printer.m"
  {
#line 261 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 261 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_6_6 = (MR_Word) &mercury__pretty_printer_scalar_common_1[4];
#line 261 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar1_4 = mercury__pretty_printer__HeadVar__2_2;
#line 261 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar2_5 = mercury__pretty_printer__HeadVar__3_3;

#line 261 "pretty_printer.m"
    {
#line 261 "pretty_printer.m"
      mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_6_6, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_4)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_5)));
#line 261 "pretty_printer.m"
      return;
    }
#line 261 "pretty_printer.m"
  }
#line 261 "pretty_printer.m"
}

#line 261 "pretty_printer.m"
MR_bool MR_CALL 
mercury__pretty_printer____Unify____indents_0_0(
#line 261 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 261 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 261 "pretty_printer.m"
{
#line 261 "pretty_printer.m"
  {
#line 261 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 261 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_5_5 = (MR_Word) &mercury__pretty_printer_scalar_common_1[4];
#line 261 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar1_3 = mercury__pretty_printer__HeadVar__1_1;
#line 261 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar2_4 = mercury__pretty_printer__HeadVar__2_2;

#line 261 "pretty_printer.m"
    {
#line 261 "pretty_printer.m"
      return mercury__pretty_printer__succeeded = mercury__builtin__unify_2_p_0(mercury__pretty_printer__TypeInfo_5_5, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_3)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_4)));
    }
#line 261 "pretty_printer.m"
    return mercury__pretty_printer__succeeded;
#line 261 "pretty_printer.m"
  }
#line 261 "pretty_printer.m"
}

#line 151 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer____Compare____formatting_limit_0_0(
#line 151 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
#line 151 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 151 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3)
#line 151 "pretty_printer.m"
{
#line 151 "pretty_printer.m"
  {
#line 151 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 151 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastX_12 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;
#line 151 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastY_13 = (MR_Integer) mercury__pretty_printer__HeadVar__3_3;

#line 151 "pretty_printer.m"
    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_12 == mercury__pretty_printer__CastY_13);
#line 151 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 6052 "pretty_printer.c"
      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 151 "pretty_printer.m"
    else
#line 151 "pretty_printer.m"
      if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 151 "pretty_printer.m"
        {
#line 151 "pretty_printer.m"
          MR_Integer mercury__pretty_printer__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

#line 151 "pretty_printer.m"
          if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 151 "pretty_printer.m"
            {
#line 151 "pretty_printer.m"
              MR_Integer mercury__pretty_printer__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));

#line 66 "private_builtin.opt"
              mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_16_16 < mercury__pretty_printer__V_5_5);
#line 69 "private_builtin.opt"
              if (mercury__pretty_printer__succeeded)
#line 68 "private_builtin.opt"
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
              else
#line 74 "private_builtin.opt"
                {
#line 71 "private_builtin.opt"
                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_16_16 == mercury__pretty_printer__V_5_5);
#line 74 "private_builtin.opt"
                  if (mercury__pretty_printer__succeeded)
#line 73 "private_builtin.opt"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                  else
#line 75 "private_builtin.opt"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                }
#line 151 "pretty_printer.m"
            }
#line 151 "pretty_printer.m"
          else
#line 6096 "pretty_printer.c"
            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "pretty_printer.m"
        }
#line 151 "pretty_printer.m"
      else
#line 151 "pretty_printer.m"
        {
#line 151 "pretty_printer.m"
          MR_Integer mercury__pretty_printer__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

#line 151 "pretty_printer.m"
          if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6109 "pretty_printer.c"
            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "pretty_printer.m"
          else
#line 151 "pretty_printer.m"
            {
#line 151 "pretty_printer.m"
              MR_Integer mercury__pretty_printer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));

#line 66 "private_builtin.opt"
              mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_17_17 < mercury__pretty_printer__V_11_11);
#line 69 "private_builtin.opt"
              if (mercury__pretty_printer__succeeded)
#line 68 "private_builtin.opt"
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
              else
#line 74 "private_builtin.opt"
                {
#line 71 "private_builtin.opt"
                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_17_17 == mercury__pretty_printer__V_11_11);
#line 74 "private_builtin.opt"
                  if (mercury__pretty_printer__succeeded)
#line 73 "private_builtin.opt"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                  else
#line 75 "private_builtin.opt"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                }
#line 151 "pretty_printer.m"
            }
#line 151 "pretty_printer.m"
        }
#line 151 "pretty_printer.m"
  }
#line 151 "pretty_printer.m"
}

#line 151 "pretty_printer.m"
MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatting_limit_0_0(
#line 151 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 151 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 151 "pretty_printer.m"
{
#line 151 "pretty_printer.m"
  {
#line 151 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 151 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastX_7 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 151 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastY_8 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 151 "pretty_printer.m"
    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_7 == mercury__pretty_printer__CastY_8);
#line 151 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 151 "pretty_printer.m"
      mercury__pretty_printer__succeeded = MR_TRUE;
#line 151 "pretty_printer.m"
    else
#line 151 "pretty_printer.m"
      if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 151 "pretty_printer.m"
        {
#line 151 "pretty_printer.m"
          MR_Integer mercury__pretty_printer__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 151 "pretty_printer.m"
          MR_Integer mercury__pretty_printer__V_4_4;

#line 151 "pretty_printer.m"
          mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 151 "pretty_printer.m"
          if (mercury__pretty_printer__succeeded)
#line 151 "pretty_printer.m"
            {
#line 151 "pretty_printer.m"
              mercury__pretty_printer__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 6192 "pretty_printer.c"
              mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_3_3 == mercury__pretty_printer__V_4_4);
#line 151 "pretty_printer.m"
            }
#line 151 "pretty_printer.m"
        }
#line 151 "pretty_printer.m"
      else
#line 151 "pretty_printer.m"
        {
#line 151 "pretty_printer.m"
          MR_Integer mercury__pretty_printer__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 151 "pretty_printer.m"
          MR_Integer mercury__pretty_printer__V_6_6;

#line 151 "pretty_printer.m"
          mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 151 "pretty_printer.m"
          if (mercury__pretty_printer__succeeded)
#line 151 "pretty_printer.m"
            {
#line 151 "pretty_printer.m"
              mercury__pretty_printer__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 6215 "pretty_printer.c"
              mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_5_5 == mercury__pretty_printer__V_6_6);
#line 151 "pretty_printer.m"
            }
#line 151 "pretty_printer.m"
        }
#line 151 "pretty_printer.m"
    return mercury__pretty_printer__succeeded;
#line 151 "pretty_printer.m"
  }
#line 151 "pretty_printer.m"
}

#line 259 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer____Compare____formatter_map_0_0(
#line 259 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
#line 259 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 259 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3)
#line 259 "pretty_printer.m"
{
#line 259 "pretty_printer.m"
  {
#line 259 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 259 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_6_6 = (MR_Word) &mercury__pretty_printer_scalar_common_3[3];
#line 259 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar1_4 = mercury__pretty_printer__HeadVar__2_2;
#line 259 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar2_5 = mercury__pretty_printer__HeadVar__3_3;

#line 259 "pretty_printer.m"
    {
#line 259 "pretty_printer.m"
      mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_6_6, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_4)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_5)));
#line 259 "pretty_printer.m"
      return;
    }
#line 259 "pretty_printer.m"
  }
#line 259 "pretty_printer.m"
}

#line 259 "pretty_printer.m"
MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_map_0_0(
#line 259 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 259 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 259 "pretty_printer.m"
{
#line 259 "pretty_printer.m"
  {
#line 259 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 259 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_5_5 = (MR_Word) &mercury__pretty_printer_scalar_common_3[3];
#line 259 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar1_3 = mercury__pretty_printer__HeadVar__1_1;
#line 259 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar2_4 = mercury__pretty_printer__HeadVar__2_2;

#line 259 "pretty_printer.m"
    {
#line 259 "pretty_printer.m"
      return mercury__pretty_printer__succeeded = mercury__builtin__unify_2_p_0(mercury__pretty_printer__TypeInfo_5_5, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_3)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_4)));
    }
#line 259 "pretty_printer.m"
    return mercury__pretty_printer__succeeded;
#line 259 "pretty_printer.m"
  }
#line 259 "pretty_printer.m"
}

#line 161 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer____Compare____formatter_0_0(
#line 161 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
#line 161 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 161 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3)
#line 161 "pretty_printer.m"
{
#line 161 "pretty_printer.m"
  {
#line 161 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 161 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_6_6 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 161 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar1_4 = mercury__pretty_printer__HeadVar__2_2;
#line 161 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar2_5 = mercury__pretty_printer__HeadVar__3_3;

#line 161 "pretty_printer.m"
    {
#line 161 "pretty_printer.m"
      mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_6_6, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_4)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_5)));
#line 161 "pretty_printer.m"
      return;
    }
#line 161 "pretty_printer.m"
  }
#line 161 "pretty_printer.m"
}

#line 161 "pretty_printer.m"
MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_0_0(
#line 161 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 161 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 161 "pretty_printer.m"
{
#line 161 "pretty_printer.m"
  {
#line 161 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 161 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar1_3 = mercury__pretty_printer__HeadVar__1_1;
#line 161 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar2_4 = mercury__pretty_printer__HeadVar__2_2;

#line 161 "pretty_printer.m"
    {
#line 161 "pretty_printer.m"
      return mercury__pretty_printer__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__pretty_printer__Cast_HeadVar1_3, (MR_Word) mercury__pretty_printer__Cast_HeadVar2_4);
    }
#line 161 "pretty_printer.m"
    return mercury__pretty_printer__succeeded;
#line 161 "pretty_printer.m"
  }
#line 161 "pretty_printer.m"
}

#line 98 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer____Compare____docs_0_0(
#line 98 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
#line 98 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 98 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3)
#line 98 "pretty_printer.m"
{
#line 98 "pretty_printer.m"
  {
#line 98 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 98 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_6_6 = (MR_Word) &mercury__pretty_printer_scalar_common_1[3];
#line 98 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar1_4 = mercury__pretty_printer__HeadVar__2_2;
#line 98 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar2_5 = mercury__pretty_printer__HeadVar__3_3;

#line 98 "pretty_printer.m"
    {
#line 98 "pretty_printer.m"
      mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_6_6, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_4)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_5)));
#line 98 "pretty_printer.m"
      return;
    }
#line 98 "pretty_printer.m"
  }
#line 98 "pretty_printer.m"
}

#line 98 "pretty_printer.m"
MR_bool MR_CALL 
mercury__pretty_printer____Unify____docs_0_0(
#line 98 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 98 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 98 "pretty_printer.m"
{
#line 98 "pretty_printer.m"
  {
#line 98 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 98 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_5_5 = (MR_Word) &mercury__pretty_printer_scalar_common_1[3];
#line 98 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar1_3 = mercury__pretty_printer__HeadVar__1_1;
#line 98 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar2_4 = mercury__pretty_printer__HeadVar__2_2;

#line 98 "pretty_printer.m"
    {
#line 98 "pretty_printer.m"
      return mercury__pretty_printer__succeeded = mercury__builtin__unify_2_p_0(mercury__pretty_printer__TypeInfo_5_5, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_3)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_4)));
    }
#line 98 "pretty_printer.m"
    return mercury__pretty_printer__succeeded;
#line 98 "pretty_printer.m"
  }
#line 98 "pretty_printer.m"
}

#line 56 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer____Compare____doc_0_0(
#line 56 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
#line 56 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 56 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3)
#line 56 "pretty_printer.m"
{
#line 56 "pretty_printer.m"
  while (MR_TRUE)
#line 56 "pretty_printer.m"
    {
#line 56 "pretty_printer.m"
      /* tailcall optimized into a loop */
#line 56 "pretty_printer.m"
      {
#line 56 "pretty_printer.m"
        MR_bool mercury__pretty_printer__succeeded;
#line 56 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__CastX_168 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;
#line 56 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__CastY_169 = (MR_Integer) mercury__pretty_printer__HeadVar__3_3;

#line 56 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_168 == mercury__pretty_printer__CastY_169);
#line 56 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 6454 "pretty_printer.c"
          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 56 "pretty_printer.m"
        else
#line 56 "pretty_printer.m"
          if ((mercury__pretty_printer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 56 "pretty_printer.m"
            if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 56 "pretty_printer.m"
              *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 56 "pretty_printer.m"
            else
#line 56 "pretty_printer.m"
              if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 56 "pretty_printer.m"
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
              else
#line 56 "pretty_printer.m"
                if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6474 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                else
#line 56 "pretty_printer.m"
                  if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6480 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                  else
#line 56 "pretty_printer.m"
                    if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6486 "pretty_printer.c"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                    else
#line 56 "pretty_printer.m"
                      if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6492 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                      else
#line 56 "pretty_printer.m"
                        if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6498 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                        else
#line 56 "pretty_printer.m"
                          if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6504 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                          else
#line 6508 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
          else
#line 56 "pretty_printer.m"
            if ((mercury__pretty_printer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 56 "pretty_printer.m"
              if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 56 "pretty_printer.m"
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
              else
#line 56 "pretty_printer.m"
                if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 56 "pretty_printer.m"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 56 "pretty_printer.m"
                else
#line 56 "pretty_printer.m"
                  if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6528 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                  else
#line 56 "pretty_printer.m"
                    if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6534 "pretty_printer.c"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                    else
#line 56 "pretty_printer.m"
                      if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6540 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                      else
#line 56 "pretty_printer.m"
                        if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6546 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                        else
#line 56 "pretty_printer.m"
                          if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6552 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                          else
#line 56 "pretty_printer.m"
                            if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6558 "pretty_printer.c"
                              *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                            else
#line 6562 "pretty_printer.c"
                              *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
            else
#line 56 "pretty_printer.m"
              if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 56 "pretty_printer.m"
                {
#line 56 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

#line 56 "pretty_printer.m"
                  if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6575 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                  else
#line 56 "pretty_printer.m"
                    if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6581 "pretty_printer.c"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                    else
#line 56 "pretty_printer.m"
                      if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 56 "pretty_printer.m"
                        {
#line 56 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__TypeInfo_177_177 = (MR_Word) &mercury__pretty_printer_scalar_common_1[3];
#line 56 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));

#line 56 "pretty_printer.m"
                          {
#line 56 "pretty_printer.m"
                            mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_177_177, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__V_179_179)), ((MR_Box) (mercury__pretty_printer__V_45_45)));
#line 56 "pretty_printer.m"
                            return;
                          }
#line 56 "pretty_printer.m"
                        }
#line 56 "pretty_printer.m"
                      else
#line 56 "pretty_printer.m"
                        if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6607 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                        else
#line 56 "pretty_printer.m"
                          if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6613 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                          else
#line 56 "pretty_printer.m"
                            if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6619 "pretty_printer.c"
                              *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                            else
#line 56 "pretty_printer.m"
                              if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6625 "pretty_printer.c"
                                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                              else
#line 56 "pretty_printer.m"
                                if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6631 "pretty_printer.c"
                                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                                else
#line 6635 "pretty_printer.c"
                                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                }
#line 56 "pretty_printer.m"
              else
#line 56 "pretty_printer.m"
                if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 56 "pretty_printer.m"
                  {
#line 56 "pretty_printer.m"
                    MR_String mercury__pretty_printer__V_187_187 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

#line 56 "pretty_printer.m"
                    if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6650 "pretty_printer.c"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                    else
#line 56 "pretty_printer.m"
                      if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6656 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                      else
#line 56 "pretty_printer.m"
                        if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6662 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                        else
#line 56 "pretty_printer.m"
                          if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 56 "pretty_printer.m"
                            {
#line 56 "pretty_printer.m"
                              MR_String mercury__pretty_printer__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));
#line 56 "pretty_printer.m"
                              MR_Integer mercury__pretty_printer__Res_7_196;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer____Compare____doc_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__pretty_printer__V_187_187 ;
	S2 =  mercury__pretty_printer__V_5_5 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6690 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__Res_7_196  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                              mercury__pretty_printer__succeeded = (mercury__pretty_printer__Res_7_196 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                              if (mercury__pretty_printer__succeeded)
#line 104 "private_builtin.opt"
                                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                              else
#line 110 "private_builtin.opt"
                                {
#line 107 "private_builtin.opt"
                                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__Res_7_196 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                  if (mercury__pretty_printer__succeeded)
#line 109 "private_builtin.opt"
                                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                  else
#line 111 "private_builtin.opt"
                                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                                }
#line 56 "pretty_printer.m"
                            }
#line 56 "pretty_printer.m"
                          else
#line 56 "pretty_printer.m"
                            if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6725 "pretty_printer.c"
                              *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                            else
#line 56 "pretty_printer.m"
                              if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6731 "pretty_printer.c"
                                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                              else
#line 56 "pretty_printer.m"
                                if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6737 "pretty_printer.c"
                                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                                else
#line 56 "pretty_printer.m"
                                  if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6743 "pretty_printer.c"
                                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                                  else
#line 6747 "pretty_printer.c"
                                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                  }
#line 56 "pretty_printer.m"
                else
#line 56 "pretty_printer.m"
                  if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 56 "pretty_printer.m"
                    {
#line 56 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 2)));
#line 56 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));

#line 56 "pretty_printer.m"
                      if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6764 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                      else
#line 56 "pretty_printer.m"
                        if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6770 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                        else
#line 56 "pretty_printer.m"
                          if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6776 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                          else
#line 56 "pretty_printer.m"
                            if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6782 "pretty_printer.c"
                              *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                            else
#line 56 "pretty_printer.m"
                              if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 56 "pretty_printer.m"
                                {
#line 56 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));
#line 56 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 2)));
#line 56 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__V_93_93;
#line 56 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__TypeInfo_174_174 = (MR_Word) &mercury__pretty_printer_scalar_common_1[2];

#line 56 "pretty_printer.m"
                                  {
#line 56 "pretty_printer.m"
                                    mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_174_174, &mercury__pretty_printer__V_93_93, ((MR_Box) (mercury__pretty_printer__V_181_181)), ((MR_Box) (mercury__pretty_printer__V_91_91)));
                                  }
#line 6804 "pretty_printer.c"
                                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_93_93 == (MR_Integer) 0);
#line 56 "pretty_printer.m"
                                  mercury__pretty_printer__succeeded = !(mercury__pretty_printer__succeeded);
#line 56 "pretty_printer.m"
                                  if (mercury__pretty_printer__succeeded)
#line 56 "pretty_printer.m"
                                    *mercury__pretty_printer__HeadVar__1_1 = mercury__pretty_printer__V_93_93;
#line 56 "pretty_printer.m"
                                  else
#line 56 "pretty_printer.m"
                                    {
#line 56 "pretty_printer.m"
                                      /* direct tailcall eliminated */
#line 56 "pretty_printer.m"
                                      {
#line 56 "pretty_printer.m"
                                        MR_Word mercury__pretty_printer__HeadVar__2__tmp_copy_2 = mercury__pretty_printer__V_180_180;
#line 56 "pretty_printer.m"
                                        MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_92_92;

#line 56 "pretty_printer.m"
                                        mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 56 "pretty_printer.m"
                                        mercury__pretty_printer__HeadVar__2_2 = mercury__pretty_printer__HeadVar__2__tmp_copy_2;
#line 56 "pretty_printer.m"
                                      }
#line 56 "pretty_printer.m"
                                      continue;
#line 56 "pretty_printer.m"
                                    }
#line 56 "pretty_printer.m"
                                }
#line 56 "pretty_printer.m"
                              else
#line 56 "pretty_printer.m"
                                if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6841 "pretty_printer.c"
                                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                                else
#line 56 "pretty_printer.m"
                                  if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6847 "pretty_printer.c"
                                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                                  else
#line 56 "pretty_printer.m"
                                    if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6853 "pretty_printer.c"
                                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                                    else
#line 6857 "pretty_printer.c"
                                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                    }
#line 56 "pretty_printer.m"
                  else
#line 56 "pretty_printer.m"
                    if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 56 "pretty_printer.m"
                      {
#line 56 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));

#line 56 "pretty_printer.m"
                        if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6872 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                        else
#line 56 "pretty_printer.m"
                          if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6878 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                          else
#line 56 "pretty_printer.m"
                            if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6884 "pretty_printer.c"
                              *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                            else
#line 56 "pretty_printer.m"
                              if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6890 "pretty_printer.c"
                                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                              else
#line 56 "pretty_printer.m"
                                if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6896 "pretty_printer.c"
                                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                                else
#line 56 "pretty_printer.m"
                                  if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 56 "pretty_printer.m"
                                    {
#line 56 "pretty_printer.m"
                                      MR_Word mercury__pretty_printer__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));

#line 56 "pretty_printer.m"
                                      {
#line 56 "pretty_printer.m"
                                        mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__pretty_printer__HeadVar__1_1, (MR_Word) mercury__pretty_printer__V_182_182, (MR_Word) mercury__pretty_printer__V_147_147);
#line 56 "pretty_printer.m"
                                        return;
                                      }
#line 56 "pretty_printer.m"
                                    }
#line 56 "pretty_printer.m"
                                  else
#line 56 "pretty_printer.m"
                                    if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6920 "pretty_printer.c"
                                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                                    else
#line 56 "pretty_printer.m"
                                      if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6926 "pretty_printer.c"
                                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                                      else
#line 6930 "pretty_printer.c"
                                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                      }
#line 56 "pretty_printer.m"
                    else
#line 56 "pretty_printer.m"
                      if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 56 "pretty_printer.m"
                        {
#line 56 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 2)));
#line 56 "pretty_printer.m"
                          MR_String mercury__pretty_printer__V_184_184 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));

#line 56 "pretty_printer.m"
                          if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6947 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                          else
#line 56 "pretty_printer.m"
                            if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6953 "pretty_printer.c"
                              *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                            else
#line 56 "pretty_printer.m"
                              if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6959 "pretty_printer.c"
                                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                              else
#line 56 "pretty_printer.m"
                                if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6965 "pretty_printer.c"
                                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                                else
#line 56 "pretty_printer.m"
                                  if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6971 "pretty_printer.c"
                                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                                  else
#line 56 "pretty_printer.m"
                                    if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6977 "pretty_printer.c"
                                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                                    else
#line 56 "pretty_printer.m"
                                      if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 56 "pretty_printer.m"
                                        {
#line 56 "pretty_printer.m"
                                          MR_String mercury__pretty_printer__V_123_123 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));
#line 56 "pretty_printer.m"
                                          MR_Word mercury__pretty_printer__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 2)));
#line 56 "pretty_printer.m"
                                          MR_Word mercury__pretty_printer__V_125_125;
#line 56 "pretty_printer.m"
                                          MR_Integer mercury__pretty_printer__Res_7_191;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer____Compare____doc_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__pretty_printer__V_184_184 ;
	S2 =  mercury__pretty_printer__V_123_123 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7009 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__Res_7_191  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                                          mercury__pretty_printer__succeeded = (mercury__pretty_printer__Res_7_191 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                                          if (mercury__pretty_printer__succeeded)
#line 104 "private_builtin.opt"
                                            mercury__pretty_printer__V_125_125 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                                          else
#line 110 "private_builtin.opt"
                                            {
#line 107 "private_builtin.opt"
                                              mercury__pretty_printer__succeeded = (mercury__pretty_printer__Res_7_191 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                              if (mercury__pretty_printer__succeeded)
#line 109 "private_builtin.opt"
                                                mercury__pretty_printer__V_125_125 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                              else
#line 111 "private_builtin.opt"
                                                mercury__pretty_printer__V_125_125 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                                            }
#line 7038 "pretty_printer.c"
                                          mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_125_125 == (MR_Integer) 0);
#line 56 "pretty_printer.m"
                                          mercury__pretty_printer__succeeded = !(mercury__pretty_printer__succeeded);
#line 56 "pretty_printer.m"
                                          if (mercury__pretty_printer__succeeded)
#line 56 "pretty_printer.m"
                                            *mercury__pretty_printer__HeadVar__1_1 = mercury__pretty_printer__V_125_125;
#line 56 "pretty_printer.m"
                                          else
#line 56 "pretty_printer.m"
                                            {
#line 56 "pretty_printer.m"
                                              MR_Word mercury__pretty_printer__TypeInfo_173_173 = (MR_Word) &mercury__pretty_printer_scalar_common_1[2];

#line 56 "pretty_printer.m"
                                              {
#line 56 "pretty_printer.m"
                                                mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_173_173, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__V_183_183)), ((MR_Box) (mercury__pretty_printer__V_124_124)));
#line 56 "pretty_printer.m"
                                                return;
                                              }
#line 56 "pretty_printer.m"
                                            }
#line 56 "pretty_printer.m"
                                        }
#line 56 "pretty_printer.m"
                                      else
#line 56 "pretty_printer.m"
                                        if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7068 "pretty_printer.c"
                                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                                        else
#line 7072 "pretty_printer.c"
                                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                        }
#line 56 "pretty_printer.m"
                      else
#line 56 "pretty_printer.m"
                        if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 56 "pretty_printer.m"
                          {
#line 56 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));

#line 56 "pretty_printer.m"
                            if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7087 "pretty_printer.c"
                              *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                            else
#line 56 "pretty_printer.m"
                              if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7093 "pretty_printer.c"
                                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                              else
#line 56 "pretty_printer.m"
                                if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7099 "pretty_printer.c"
                                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                                else
#line 56 "pretty_printer.m"
                                  if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7105 "pretty_printer.c"
                                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                                  else
#line 56 "pretty_printer.m"
                                    if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7111 "pretty_printer.c"
                                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                                    else
#line 56 "pretty_printer.m"
                                      if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7117 "pretty_printer.c"
                                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                                      else
#line 56 "pretty_printer.m"
                                        if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7123 "pretty_printer.c"
                                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                                        else
#line 56 "pretty_printer.m"
                                          if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 56 "pretty_printer.m"
                                            {
#line 56 "pretty_printer.m"
                                              MR_Word mercury__pretty_printer__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));

#line 56 "pretty_printer.m"
                                              {
#line 56 "pretty_printer.m"
                                                mercury__univ____Compare____univ_0_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__V_185_185, mercury__pretty_printer__V_65_65);
#line 56 "pretty_printer.m"
                                                return;
                                              }
#line 56 "pretty_printer.m"
                                            }
#line 56 "pretty_printer.m"
                                          else
#line 7145 "pretty_printer.c"
                                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "pretty_printer.m"
                          }
#line 56 "pretty_printer.m"
                        else
#line 56 "pretty_printer.m"
                          {
#line 56 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));

#line 56 "pretty_printer.m"
                            if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7158 "pretty_printer.c"
                              *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                            else
#line 56 "pretty_printer.m"
                              if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7164 "pretty_printer.c"
                                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                              else
#line 56 "pretty_printer.m"
                                if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7170 "pretty_printer.c"
                                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                                else
#line 56 "pretty_printer.m"
                                  if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7176 "pretty_printer.c"
                                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                                  else
#line 56 "pretty_printer.m"
                                    if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7182 "pretty_printer.c"
                                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                                    else
#line 56 "pretty_printer.m"
                                      if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7188 "pretty_printer.c"
                                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                                      else
#line 56 "pretty_printer.m"
                                        if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7194 "pretty_printer.c"
                                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                                        else
#line 56 "pretty_printer.m"
                                          if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7200 "pretty_printer.c"
                                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "pretty_printer.m"
                                          else
#line 56 "pretty_printer.m"
                                            {
#line 56 "pretty_printer.m"
                                              MR_Word mercury__pretty_printer__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));

#line 56 "pretty_printer.m"
                                              {
#line 56 "pretty_printer.m"
                                                mercury__pretty_printer____Compare____pp_internal_0_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__V_186_186, mercury__pretty_printer__V_167_167);
#line 56 "pretty_printer.m"
                                                return;
                                              }
#line 56 "pretty_printer.m"
                                            }
#line 56 "pretty_printer.m"
                          }
#line 56 "pretty_printer.m"
      }
#line 56 "pretty_printer.m"
      break;
#line 56 "pretty_printer.m"
    }
#line 56 "pretty_printer.m"
}

#line 56 "pretty_printer.m"
MR_bool MR_CALL 
mercury__pretty_printer____Unify____doc_0_0(
#line 56 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 56 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 56 "pretty_printer.m"
{
#line 56 "pretty_printer.m"
  while (MR_TRUE)
#line 56 "pretty_printer.m"
    {
#line 56 "pretty_printer.m"
      /* tailcall optimized into a loop */
#line 56 "pretty_printer.m"
      {
#line 56 "pretty_printer.m"
        MR_bool mercury__pretty_printer__succeeded;
#line 56 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__CastX_25 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 56 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__CastY_26 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 56 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_25 == mercury__pretty_printer__CastY_26);
#line 56 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 56 "pretty_printer.m"
          mercury__pretty_printer__succeeded = MR_TRUE;
#line 56 "pretty_printer.m"
        else
#line 56 "pretty_printer.m"
          if ((mercury__pretty_printer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 56 "pretty_printer.m"
            {
#line 56 "pretty_printer.m"
              MR_Integer mercury__pretty_printer__CastX_7 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 56 "pretty_printer.m"
              MR_Integer mercury__pretty_printer__CastY_8 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 56 "pretty_printer.m"
              mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastY_8 == mercury__pretty_printer__CastX_7);
#line 56 "pretty_printer.m"
            }
#line 56 "pretty_printer.m"
          else
#line 56 "pretty_printer.m"
            if ((mercury__pretty_printer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 56 "pretty_printer.m"
              {
#line 56 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__CastX_5 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 56 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__CastY_6 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 56 "pretty_printer.m"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastY_6 == mercury__pretty_printer__CastX_5);
#line 56 "pretty_printer.m"
              }
#line 56 "pretty_printer.m"
            else
#line 56 "pretty_printer.m"
              if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 56 "pretty_printer.m"
                {
#line 56 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__TypeInfo_27_27;
#line 56 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 56 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__V_10_10;

#line 56 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 56 "pretty_printer.m"
                  if (mercury__pretty_printer__succeeded)
#line 56 "pretty_printer.m"
                    {
#line 56 "pretty_printer.m"
                      mercury__pretty_printer__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 7310 "pretty_printer.c"
                      mercury__pretty_printer__TypeInfo_27_27 = (MR_Word) &mercury__pretty_printer_scalar_common_1[3];
#line 7312 "pretty_printer.c"
                      {
#line 7314 "pretty_printer.c"
                        return mercury__pretty_printer__succeeded = mercury__builtin__unify_2_p_0(mercury__pretty_printer__TypeInfo_27_27, ((MR_Box) (mercury__pretty_printer__V_9_9)), ((MR_Box) (mercury__pretty_printer__V_10_10)));
                      }
#line 56 "pretty_printer.m"
                    }
#line 56 "pretty_printer.m"
                }
#line 56 "pretty_printer.m"
              else
#line 56 "pretty_printer.m"
                if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 56 "pretty_printer.m"
                  {
#line 56 "pretty_printer.m"
                    MR_String mercury__pretty_printer__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 56 "pretty_printer.m"
                    MR_String mercury__pretty_printer__V_4_4;

#line 56 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 56 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 56 "pretty_printer.m"
                      {
#line 56 "pretty_printer.m"
                        mercury__pretty_printer__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 7340 "pretty_printer.c"
                        mercury__pretty_printer__succeeded = (strcmp(mercury__pretty_printer__V_3_3, mercury__pretty_printer__V_4_4) == 0);
#line 56 "pretty_printer.m"
                      }
#line 56 "pretty_printer.m"
                  }
#line 56 "pretty_printer.m"
                else
#line 56 "pretty_printer.m"
                  if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 56 "pretty_printer.m"
                    {
#line 56 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__TypeInfo_28_28;
#line 56 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
#line 56 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 2)));
#line 56 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__V_15_15;
#line 56 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__V_16_16;

#line 56 "pretty_printer.m"
                      mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 56 "pretty_printer.m"
                      if (mercury__pretty_printer__succeeded)
#line 56 "pretty_printer.m"
                        {
#line 56 "pretty_printer.m"
                          mercury__pretty_printer__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 56 "pretty_printer.m"
                          mercury__pretty_printer__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 2)));
#line 7373 "pretty_printer.c"
                          mercury__pretty_printer__TypeInfo_28_28 = (MR_Word) &mercury__pretty_printer_scalar_common_1[2];
#line 7375 "pretty_printer.c"
                          {
#line 7377 "pretty_printer.c"
                            mercury__pretty_printer__succeeded = mercury__builtin__unify_2_p_0(mercury__pretty_printer__TypeInfo_28_28, ((MR_Box) (mercury__pretty_printer__V_13_13)), ((MR_Box) (mercury__pretty_printer__V_15_15)));
                          }
#line 56 "pretty_printer.m"
                          if (mercury__pretty_printer__succeeded)
#line 7382 "pretty_printer.c"
                            {
#line 7384 "pretty_printer.c"
                              /* direct tailcall eliminated */
#line 7386 "pretty_printer.c"
                              {
#line 7388 "pretty_printer.c"
                                MR_Word mercury__pretty_printer__HeadVar__1__tmp_copy_1 = mercury__pretty_printer__V_14_14;
#line 7390 "pretty_printer.c"
                                MR_Word mercury__pretty_printer__HeadVar__2__tmp_copy_2 = mercury__pretty_printer__V_16_16;

#line 7393 "pretty_printer.c"
                                mercury__pretty_printer__HeadVar__2_2 = mercury__pretty_printer__HeadVar__2__tmp_copy_2;
#line 7395 "pretty_printer.c"
                                mercury__pretty_printer__HeadVar__1_1 = mercury__pretty_printer__HeadVar__1__tmp_copy_1;
#line 7397 "pretty_printer.c"
                              }
#line 7399 "pretty_printer.c"
                              continue;
#line 7401 "pretty_printer.c"
                            }
#line 56 "pretty_printer.m"
                        }
#line 56 "pretty_printer.m"
                    }
#line 56 "pretty_printer.m"
                  else
#line 56 "pretty_printer.m"
                    if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 56 "pretty_printer.m"
                      {
#line 56 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
#line 56 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_22_22;

#line 56 "pretty_printer.m"
                        mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 56 "pretty_printer.m"
                        if (mercury__pretty_printer__succeeded)
#line 56 "pretty_printer.m"
                          {
#line 56 "pretty_printer.m"
                            mercury__pretty_printer__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 7426 "pretty_printer.c"
                            {
#line 7428 "pretty_printer.c"
                              return mercury__pretty_printer__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__pretty_printer__V_21_21, (MR_Word) mercury__pretty_printer__V_22_22);
                            }
#line 56 "pretty_printer.m"
                          }
#line 56 "pretty_printer.m"
                      }
#line 56 "pretty_printer.m"
                    else
#line 56 "pretty_printer.m"
                      if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 56 "pretty_printer.m"
                        {
#line 56 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__TypeInfo_29_29;
#line 56 "pretty_printer.m"
                          MR_String mercury__pretty_printer__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
#line 56 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 2)));
#line 56 "pretty_printer.m"
                          MR_String mercury__pretty_printer__V_19_19;
#line 56 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__V_20_20;

#line 56 "pretty_printer.m"
                          mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 56 "pretty_printer.m"
                          if (mercury__pretty_printer__succeeded)
#line 56 "pretty_printer.m"
                            {
#line 56 "pretty_printer.m"
                              mercury__pretty_printer__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 56 "pretty_printer.m"
                              mercury__pretty_printer__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 2)));
#line 7462 "pretty_printer.c"
                              mercury__pretty_printer__succeeded = (strcmp(mercury__pretty_printer__V_17_17, mercury__pretty_printer__V_19_19) == 0);
#line 56 "pretty_printer.m"
                              if (mercury__pretty_printer__succeeded)
#line 56 "pretty_printer.m"
                                {
#line 7468 "pretty_printer.c"
                                  mercury__pretty_printer__TypeInfo_29_29 = (MR_Word) &mercury__pretty_printer_scalar_common_1[2];
#line 7470 "pretty_printer.c"
                                  {
#line 7472 "pretty_printer.c"
                                    return mercury__pretty_printer__succeeded = mercury__builtin__unify_2_p_0(mercury__pretty_printer__TypeInfo_29_29, ((MR_Box) (mercury__pretty_printer__V_18_18)), ((MR_Box) (mercury__pretty_printer__V_20_20)));
                                  }
#line 56 "pretty_printer.m"
                                }
#line 56 "pretty_printer.m"
                            }
#line 56 "pretty_printer.m"
                        }
#line 56 "pretty_printer.m"
                      else
#line 56 "pretty_printer.m"
                        if (((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 56 "pretty_printer.m"
                          {
#line 56 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
#line 56 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__V_12_12;

#line 56 "pretty_printer.m"
                            mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 56 "pretty_printer.m"
                            if (mercury__pretty_printer__succeeded)
#line 56 "pretty_printer.m"
                              {
#line 56 "pretty_printer.m"
                                mercury__pretty_printer__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 7500 "pretty_printer.c"
                                {
#line 7502 "pretty_printer.c"
                                  return mercury__pretty_printer__succeeded = mercury__univ____Unify____univ_0_0(mercury__pretty_printer__V_11_11, mercury__pretty_printer__V_12_12);
                                }
#line 56 "pretty_printer.m"
                              }
#line 56 "pretty_printer.m"
                          }
#line 56 "pretty_printer.m"
                        else
#line 56 "pretty_printer.m"
                          {
#line 56 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
#line 56 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__V_24_24;

#line 56 "pretty_printer.m"
                            mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 56 "pretty_printer.m"
                            if (mercury__pretty_printer__succeeded)
#line 56 "pretty_printer.m"
                              {
#line 56 "pretty_printer.m"
                                mercury__pretty_printer__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 7526 "pretty_printer.c"
                                {
#line 7528 "pretty_printer.c"
                                  return mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____pp_internal_0_0(mercury__pretty_printer__V_23_23, mercury__pretty_printer__V_24_24);
                                }
#line 56 "pretty_printer.m"
                              }
#line 56 "pretty_printer.m"
                          }
#line 56 "pretty_printer.m"
        return mercury__pretty_printer__succeeded;
#line 56 "pretty_printer.m"
      }
#line 56 "pretty_printer.m"
      break;
#line 56 "pretty_printer.m"
    }
#line 56 "pretty_printer.m"
}

#line 1178 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_tree234_2_f_0(
#line 1178 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1178 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5)
#line 1178 "pretty_printer.m"
{
#line 1180 "pretty_printer.m"
  {
#line 1180 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__ArgDescs_5)) == (MR_mktag((MR_Integer) 1)));
#line 1180 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1180 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_20_20;
#line 1180 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_21_21;
#line 1180 "pretty_printer.m"
    MR_Word mercury__pretty_printer__X_13;
#line 1182 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_22_22;
#line 1182 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_23_23;
#line 1182 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_24_24;
#line 1182 "pretty_printer.m"
    MR_Word mercury__pretty_printer__ArgDescA_6;
#line 1182 "pretty_printer.m"
    MR_Word mercury__pretty_printer__ArgDescB_7;
#line 1182 "pretty_printer.m"
    MR_Box mercury__pretty_printer__Value_12;
#line 1182 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_14_14;
#line 1182 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_15_15;
#line 74 "type_desc.opt"
    MR_Box mercury__pretty_printer__V_16_16;
#line 74 "type_desc.opt"
    MR_Box mercury__pretty_printer__V_17_17;
#line 107 "builtin.opt"
    MR_Box mercury__pretty_printer__conv0_X_13;

#line 1182 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1182 "pretty_printer.m"
      {
#line 1182 "pretty_printer.m"
        mercury__pretty_printer__ArgDescA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 0)));
#line 1182 "pretty_printer.m"
        mercury__pretty_printer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 1)));
#line 1182 "pretty_printer.m"
        mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 1182 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 1182 "pretty_printer.m"
          {
#line 1182 "pretty_printer.m"
            mercury__pretty_printer__ArgDescB_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_14_14, (MR_Integer) 0)));
#line 1182 "pretty_printer.m"
            mercury__pretty_printer__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_14_14, (MR_Integer) 1)));
#line 1182 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1182 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 1182 "pretty_printer.m"
              {
#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_tree234_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pretty_printer__ArgDescA_6 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 7627 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeInfo_20_20  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_tree234_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pretty_printer__ArgDescB_7 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 7647 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeInfo_21_21  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 12 "univ.opt"
                mercury__pretty_printer__TypeInfo_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 0)));
#line 12 "univ.opt"
                mercury__pretty_printer__Value_12 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 1));
#line 7658 "pretty_printer.c"
                mercury__pretty_printer__TypeCtorInfo_23_23 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 7660 "pretty_printer.c"
                {
#line 7662 "pretty_printer.c"
                  mercury__pretty_printer__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7664 "pretty_printer.c"
                  MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_24_24, 0) = ((MR_Box) (mercury__pretty_printer__TypeCtorInfo_23_23));
#line 7666 "pretty_printer.c"
                  MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_24_24, 1) = ((MR_Box) (mercury__pretty_printer__TypeInfo_20_20));
#line 7668 "pretty_printer.c"
                  MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_24_24, 2) = ((MR_Box) (mercury__pretty_printer__TypeInfo_21_21));
#line 7670 "pretty_printer.c"
                }
#line 107 "builtin.opt"
                {
#line 107 "builtin.opt"
                  mercury__pretty_printer__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pretty_printer__TypeInfo_22_22, mercury__pretty_printer__TypeInfo_24_24, mercury__pretty_printer__Value_12, &mercury__pretty_printer__conv0_X_13);
                }
#line 107 "builtin.opt"
                if (mercury__pretty_printer__succeeded)
#line 107 "builtin.opt"
                  {
#line 107 "builtin.opt"
                    mercury__pretty_printer__X_13 = ((MR_Word) mercury__pretty_printer__conv0_X_13);
#line 107 "builtin.opt"
                    mercury__pretty_printer__succeeded = MR_TRUE;
#line 107 "builtin.opt"
                  }
#line 1182 "pretty_printer.m"
              }
#line 1182 "pretty_printer.m"
          }
#line 1182 "pretty_printer.m"
      }
#line 1180 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1188 "pretty_printer.m"
      {
#line 1188 "pretty_printer.m"
        return mercury__pretty_printer__HeadVar__3_3 = mercury__tree234__tree234_to_doc_1_f_0(mercury__pretty_printer__TypeInfo_20_20, mercury__pretty_printer__TypeInfo_21_21, mercury__pretty_printer__X_13);
      }
#line 1180 "pretty_printer.m"
    else
#line 1190 "pretty_printer.m"
      {
#line 1190 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[13]);
#line 1190 "pretty_printer.m"
      }
#line 1180 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1180 "pretty_printer.m"
  }
#line 1178 "pretty_printer.m"
}

#line 1162 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_list_2_f_0(
#line 1162 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1162 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5)
#line 1162 "pretty_printer.m"
{
#line 1164 "pretty_printer.m"
  {
#line 1164 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__ArgDescs_5)) == (MR_mktag((MR_Integer) 1)));
#line 1164 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1164 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_15_15;
#line 1164 "pretty_printer.m"
    MR_Word mercury__pretty_printer__X_10;
#line 1166 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_16_16;
#line 1166 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_17_17;
#line 1166 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_18_18;
#line 1166 "pretty_printer.m"
    MR_Word mercury__pretty_printer__ArgDesc_6;
#line 1166 "pretty_printer.m"
    MR_Box mercury__pretty_printer__Value_9;
#line 1166 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_11_11;
#line 74 "type_desc.opt"
    MR_Box mercury__pretty_printer__V_12_12;
#line 107 "builtin.opt"
    MR_Box mercury__pretty_printer__conv0_X_10;

#line 1166 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1166 "pretty_printer.m"
      {
#line 1166 "pretty_printer.m"
        mercury__pretty_printer__ArgDesc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 0)));
#line 1166 "pretty_printer.m"
        mercury__pretty_printer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 1)));
#line 1166 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1166 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 1166 "pretty_printer.m"
          {
#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_list_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pretty_printer__ArgDesc_6 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 7778 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeInfo_15_15  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 12 "univ.opt"
            mercury__pretty_printer__TypeInfo_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 0)));
#line 12 "univ.opt"
            mercury__pretty_printer__Value_9 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 1));
#line 7789 "pretty_printer.c"
            mercury__pretty_printer__TypeCtorInfo_17_17 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 7791 "pretty_printer.c"
            {
#line 7793 "pretty_printer.c"
              mercury__pretty_printer__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7795 "pretty_printer.c"
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 0) = ((MR_Box) (mercury__pretty_printer__TypeCtorInfo_17_17));
#line 7797 "pretty_printer.c"
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 1) = ((MR_Box) (mercury__pretty_printer__TypeInfo_15_15));
#line 7799 "pretty_printer.c"
            }
#line 107 "builtin.opt"
            {
#line 107 "builtin.opt"
              mercury__pretty_printer__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pretty_printer__TypeInfo_16_16, mercury__pretty_printer__TypeInfo_18_18, mercury__pretty_printer__Value_9, &mercury__pretty_printer__conv0_X_10);
            }
#line 107 "builtin.opt"
            if (mercury__pretty_printer__succeeded)
#line 107 "builtin.opt"
              {
#line 107 "builtin.opt"
                mercury__pretty_printer__X_10 = ((MR_Word) mercury__pretty_printer__conv0_X_10);
#line 107 "builtin.opt"
                mercury__pretty_printer__succeeded = MR_TRUE;
#line 107 "builtin.opt"
              }
#line 1166 "pretty_printer.m"
          }
#line 1166 "pretty_printer.m"
      }
#line 1164 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1171 "pretty_printer.m"
      {
#line 1171 "pretty_printer.m"
        return mercury__pretty_printer__HeadVar__3_3 = mercury__list__list_to_doc_1_f_0(mercury__pretty_printer__TypeInfo_15_15, mercury__pretty_printer__X_10);
      }
#line 1164 "pretty_printer.m"
    else
#line 1173 "pretty_printer.m"
      {
#line 1173 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[12]);
#line 1173 "pretty_printer.m"
      }
#line 1164 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1164 "pretty_printer.m"
  }
#line 1162 "pretty_printer.m"
}

#line 1146 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_version_array_2_f_0(
#line 1146 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1146 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5)
#line 1146 "pretty_printer.m"
{
#line 1148 "pretty_printer.m"
  {
#line 1148 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__ArgDescs_5)) == (MR_mktag((MR_Integer) 1)));
#line 1148 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1148 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_15_15;
#line 1148 "pretty_printer.m"
    MR_Box mercury__pretty_printer__X_10;
#line 1150 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_16_16;
#line 1150 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_17_17;
#line 1150 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_18_18;
#line 1150 "pretty_printer.m"
    MR_Word mercury__pretty_printer__ArgDesc_6;
#line 1150 "pretty_printer.m"
    MR_Box mercury__pretty_printer__Value_9;
#line 1150 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_11_11;
#line 74 "type_desc.opt"
    MR_Box mercury__pretty_printer__V_12_12;
#line 107 "builtin.opt"
    MR_Box mercury__pretty_printer__conv0_X_10;

#line 1150 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1150 "pretty_printer.m"
      {
#line 1150 "pretty_printer.m"
        mercury__pretty_printer__ArgDesc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 0)));
#line 1150 "pretty_printer.m"
        mercury__pretty_printer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 1)));
#line 1150 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1150 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 1150 "pretty_printer.m"
          {
#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_version_array_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pretty_printer__ArgDesc_6 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 7905 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeInfo_15_15  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 12 "univ.opt"
            mercury__pretty_printer__TypeInfo_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 0)));
#line 12 "univ.opt"
            mercury__pretty_printer__Value_9 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 1));
#line 7916 "pretty_printer.c"
            mercury__pretty_printer__TypeCtorInfo_17_17 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 7918 "pretty_printer.c"
            {
#line 7920 "pretty_printer.c"
              mercury__pretty_printer__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7922 "pretty_printer.c"
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 0) = ((MR_Box) (mercury__pretty_printer__TypeCtorInfo_17_17));
#line 7924 "pretty_printer.c"
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 1) = ((MR_Box) (mercury__pretty_printer__TypeInfo_15_15));
#line 7926 "pretty_printer.c"
            }
#line 107 "builtin.opt"
            {
#line 107 "builtin.opt"
              mercury__pretty_printer__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pretty_printer__TypeInfo_16_16, mercury__pretty_printer__TypeInfo_18_18, mercury__pretty_printer__Value_9, &mercury__pretty_printer__conv0_X_10);
            }
#line 107 "builtin.opt"
            if (mercury__pretty_printer__succeeded)
#line 107 "builtin.opt"
              {
#line 107 "builtin.opt"
                mercury__pretty_printer__X_10 = ((MR_Box) mercury__pretty_printer__conv0_X_10);
#line 107 "builtin.opt"
                mercury__pretty_printer__succeeded = MR_TRUE;
#line 107 "builtin.opt"
              }
#line 1150 "pretty_printer.m"
          }
#line 1150 "pretty_printer.m"
      }
#line 1148 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1155 "pretty_printer.m"
      {
#line 1155 "pretty_printer.m"
        return mercury__pretty_printer__HeadVar__3_3 = mercury__version_array__version_array_to_doc_1_f_0(mercury__pretty_printer__TypeInfo_15_15, mercury__pretty_printer__X_10);
      }
#line 1148 "pretty_printer.m"
    else
#line 1157 "pretty_printer.m"
      {
#line 1157 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[11]);
#line 1157 "pretty_printer.m"
      }
#line 1148 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1148 "pretty_printer.m"
  }
#line 1146 "pretty_printer.m"
}

#line 1130 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_array_2_f_0(
#line 1130 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1130 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5)
#line 1130 "pretty_printer.m"
{
#line 1132 "pretty_printer.m"
  {
#line 1132 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__ArgDescs_5)) == (MR_mktag((MR_Integer) 1)));
#line 1132 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1132 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_15_15;
#line 1132 "pretty_printer.m"
    MR_ArrayPtr mercury__pretty_printer__X_10;
#line 1134 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_16_16;
#line 1134 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_17_17;
#line 1134 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_18_18;
#line 1134 "pretty_printer.m"
    MR_Word mercury__pretty_printer__ArgDesc_6;
#line 1134 "pretty_printer.m"
    MR_Box mercury__pretty_printer__Value_9;
#line 1134 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_11_11;
#line 74 "type_desc.opt"
    MR_Box mercury__pretty_printer__V_12_12;
#line 107 "builtin.opt"
    MR_Box mercury__pretty_printer__conv0_X_10;

#line 1134 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1134 "pretty_printer.m"
      {
#line 1134 "pretty_printer.m"
        mercury__pretty_printer__ArgDesc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 0)));
#line 1134 "pretty_printer.m"
        mercury__pretty_printer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 1)));
#line 1134 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1134 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 1134 "pretty_printer.m"
          {
#line 74 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_array_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pretty_printer__ArgDesc_6 ;
		{
#line 74 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 8032 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeInfo_15_15  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 12 "univ.opt"
            mercury__pretty_printer__TypeInfo_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 0)));
#line 12 "univ.opt"
            mercury__pretty_printer__Value_9 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 1));
#line 8043 "pretty_printer.c"
            mercury__pretty_printer__TypeCtorInfo_17_17 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 8045 "pretty_printer.c"
            {
#line 8047 "pretty_printer.c"
              mercury__pretty_printer__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8049 "pretty_printer.c"
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 0) = ((MR_Box) (mercury__pretty_printer__TypeCtorInfo_17_17));
#line 8051 "pretty_printer.c"
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 1) = ((MR_Box) (mercury__pretty_printer__TypeInfo_15_15));
#line 8053 "pretty_printer.c"
            }
#line 107 "builtin.opt"
            {
#line 107 "builtin.opt"
              mercury__pretty_printer__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pretty_printer__TypeInfo_16_16, mercury__pretty_printer__TypeInfo_18_18, mercury__pretty_printer__Value_9, &mercury__pretty_printer__conv0_X_10);
            }
#line 107 "builtin.opt"
            if (mercury__pretty_printer__succeeded)
#line 107 "builtin.opt"
              {
#line 107 "builtin.opt"
                mercury__pretty_printer__X_10 = ((MR_ArrayPtr) mercury__pretty_printer__conv0_X_10);
#line 107 "builtin.opt"
                mercury__pretty_printer__succeeded = MR_TRUE;
#line 107 "builtin.opt"
              }
#line 1134 "pretty_printer.m"
          }
#line 1134 "pretty_printer.m"
      }
#line 1132 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1139 "pretty_printer.m"
      {
#line 1139 "pretty_printer.m"
        return mercury__pretty_printer__HeadVar__3_3 = mercury__array__array_to_doc_1_f_0(mercury__pretty_printer__TypeInfo_15_15, (MR_ArrayPtr) mercury__pretty_printer__X_10);
      }
#line 1132 "pretty_printer.m"
    else
#line 1141 "pretty_printer.m"
      {
#line 1141 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[10]);
#line 1141 "pretty_printer.m"
      }
#line 1132 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1132 "pretty_printer.m"
  }
#line 1130 "pretty_printer.m"
}

#line 1123 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_string_2_f_0(
#line 1123 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1123 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5)
#line 1123 "pretty_printer.m"
{
#line 1125 "pretty_printer.m"
  {
#line 1125 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1125 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;

#line 1125 "pretty_printer.m"
    {
#line 1125 "pretty_printer.m"
      return mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_f_0(mercury__pretty_printer__Univ_4);
    }
#line 1125 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1125 "pretty_printer.m"
  }
#line 1123 "pretty_printer.m"
}

#line 1116 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_int_2_f_0(
#line 1116 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1116 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5)
#line 1116 "pretty_printer.m"
{
#line 1118 "pretty_printer.m"
  {
#line 1118 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1118 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;

#line 1118 "pretty_printer.m"
    {
#line 1118 "pretty_printer.m"
      return mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_f_0(mercury__pretty_printer__Univ_4);
    }
#line 1118 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1118 "pretty_printer.m"
  }
#line 1116 "pretty_printer.m"
}

#line 1109 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_float_2_f_0(
#line 1109 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1109 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5)
#line 1109 "pretty_printer.m"
{
#line 1111 "pretty_printer.m"
  {
#line 1111 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1111 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;

#line 1111 "pretty_printer.m"
    {
#line 1111 "pretty_printer.m"
      return mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0(mercury__pretty_printer__Univ_4);
    }
#line 1111 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1111 "pretty_printer.m"
  }
#line 1109 "pretty_printer.m"
}

#line 1102 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_char_2_f_0(
#line 1102 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1102 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5)
#line 1102 "pretty_printer.m"
{
#line 1104 "pretty_printer.m"
  {
#line 1104 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1104 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;

#line 1104 "pretty_printer.m"
    {
#line 1104 "pretty_printer.m"
      return mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_f_0(mercury__pretty_printer__Univ_4);
    }
#line 1104 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1104 "pretty_printer.m"
  }
#line 1102 "pretty_printer.m"
}

#line 1078 "pretty_printer.m"
MR_Word MR_CALL 
mercury__pretty_printer__initial_formatter_map_0_f_0(void)
#line 1078 "pretty_printer.m"
{
#line 1080 "pretty_printer.m"
  {
#line 1080 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1080 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_3;
#line 1080 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1080 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_9_9;
#line 1080 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_14_14;
#line 1080 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_19_19;
#line 1080 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_24_24;
#line 1080 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_29_29;
#line 1080 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_34_34;
#line 1080 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_39_39;

#line 1082 "pretty_printer.m"
    {
#line 1082 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho9_6_p_0((MR_String) "builtin", (MR_String) "character", (MR_Integer) 0, mercury__pretty_printer__STATE_VARIABLE_Formatters_4_4, &mercury__pretty_printer__STATE_VARIABLE_Formatters_9_9);
    }
#line 1083 "pretty_printer.m"
    {
#line 1083 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho8_6_p_0((MR_String) "builtin", (MR_String) "float", (MR_Integer) 0, mercury__pretty_printer__STATE_VARIABLE_Formatters_9_9, &mercury__pretty_printer__STATE_VARIABLE_Formatters_14_14);
    }
#line 1084 "pretty_printer.m"
    {
#line 1084 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho7_6_p_0((MR_String) "builtin", (MR_String) "int", (MR_Integer) 0, mercury__pretty_printer__STATE_VARIABLE_Formatters_14_14, &mercury__pretty_printer__STATE_VARIABLE_Formatters_19_19);
    }
#line 1085 "pretty_printer.m"
    {
#line 1085 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho6_6_p_0((MR_String) "builtin", (MR_String) "string", (MR_Integer) 0, mercury__pretty_printer__STATE_VARIABLE_Formatters_19_19, &mercury__pretty_printer__STATE_VARIABLE_Formatters_24_24);
    }
#line 1086 "pretty_printer.m"
    {
#line 1086 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho5_6_p_0((MR_String) "array", (MR_String) "array", (MR_Integer) 1, mercury__pretty_printer__STATE_VARIABLE_Formatters_24_24, &mercury__pretty_printer__STATE_VARIABLE_Formatters_29_29);
    }
#line 1087 "pretty_printer.m"
    {
#line 1087 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho4_6_p_0((MR_String) "list", (MR_String) "list", (MR_Integer) 1, mercury__pretty_printer__STATE_VARIABLE_Formatters_29_29, &mercury__pretty_printer__STATE_VARIABLE_Formatters_34_34);
    }
#line 1088 "pretty_printer.m"
    {
#line 1088 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho3_6_p_0((MR_String) "tree234", (MR_String) "tree234", (MR_Integer) 2, mercury__pretty_printer__STATE_VARIABLE_Formatters_34_34, &mercury__pretty_printer__STATE_VARIABLE_Formatters_39_39);
    }
#line 1089 "pretty_printer.m"
    {
#line 1089 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho2_6_p_0((MR_String) "version_array", (MR_String) "version_array", (MR_Integer) 1, mercury__pretty_printer__STATE_VARIABLE_Formatters_39_39, &mercury__pretty_printer__STATE_VARIABLE_Formatters_3);
    }
#line 1080 "pretty_printer.m"
    return mercury__pretty_printer__STATE_VARIABLE_Formatters_3;
#line 1080 "pretty_printer.m"
  }
#line 1078 "pretty_printer.m"
}

#line 960 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__unsafe_get_default_formatter_map_3_p_0(
#line 960 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_1)
#line 960 "pretty_printer.m"
{
#line 963 "pretty_printer.m"
  {
#line 963 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 966 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__unsafe_get_default_formatter_map_3_p_0

	MR_Word FMap;

		{
#line 966 "pretty_printer.m"

    FMap = ML_pretty_printer_default_formatter_map;

#line 8306 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__FMap_1  = FMap;
#line 966 "pretty_printer.m"
}
#line 963 "pretty_printer.m"
  }
#line 960 "pretty_printer.m"
}

#line 918 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__pretty_printer_is_initialised_3_p_0(
#line 918 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Okay_1)
#line 918 "pretty_printer.m"
{
#line 921 "pretty_printer.m"
  {
#line 921 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 924 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__pretty_printer_is_initialised_3_p_0

	MR_Word Okay;

		{
#line 924 "pretty_printer.m"

    Okay = ML_pretty_printer_is_initialised;

#line 8341 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__Okay_1  = Okay;
#line 924 "pretty_printer.m"
}
#line 921 "pretty_printer.m"
  }
#line 918 "pretty_printer.m"
}

#line 878 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__set_io_pp_params_3_p_0(
#line 878 "pretty_printer.m"
  MR_Word mercury__pretty_printer__X_4)
#line 878 "pretty_printer.m"
{
#line 878 "pretty_printer.m"
  {
#line 878 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_io_pp_params_3_p_0


		{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 8377 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_io_pp_params_3_p_0

	MR_Word X;

	X =  mercury__pretty_printer__X_4 ;
		{
#line 878 "pretty_printer.m"
mercury__pretty_printer__mutable_variable_io_pp_params = X;

#line 8394 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_io_pp_params_3_p_0


		{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 8412 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
  }
#line 878 "pretty_printer.m"
}

#line 878 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__get_io_pp_params_3_p_0(
#line 878 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__X_4)
#line 878 "pretty_printer.m"
{
#line 878 "pretty_printer.m"
  {
#line 878 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_io_pp_params_3_p_0


		{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 8447 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_io_pp_params_3_p_0

	MR_Word X;

		{
#line 878 "pretty_printer.m"
X = mercury__pretty_printer__mutable_variable_io_pp_params;

#line 8463 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__X_4  = X;
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_io_pp_params_3_p_0


		{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 8482 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
  }
#line 878 "pretty_printer.m"
}

#line 878 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__unsafe_set_io_pp_params_1_p_0(
#line 878 "pretty_printer.m"
  MR_Word mercury__pretty_printer__X_1)
#line 878 "pretty_printer.m"
{
#line 878 "pretty_printer.m"
  {
#line 878 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__unsafe_set_io_pp_params_1_p_0

	MR_Word X;

	X =  mercury__pretty_printer__X_1 ;
		{
#line 878 "pretty_printer.m"
mercury__pretty_printer__mutable_variable_io_pp_params = X;

#line 8516 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
  }
#line 878 "pretty_printer.m"
}

#line 878 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__unsafe_get_io_pp_params_1_p_0(
#line 878 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__X_1)
#line 878 "pretty_printer.m"
{
#line 878 "pretty_printer.m"
  {
#line 878 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__unsafe_get_io_pp_params_1_p_0

	MR_Word X;

		{
#line 878 "pretty_printer.m"
X = mercury__pretty_printer__mutable_variable_io_pp_params;

#line 8549 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__X_1  = X;
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
  }
#line 878 "pretty_printer.m"
}

#line 878 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__unlock_io_pp_params_0_p_0(void)
#line 878 "pretty_printer.m"
{
#line 878 "pretty_printer.m"
  {
#line 878 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__unlock_io_pp_params_0_p_0


		{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 8583 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
  }
#line 878 "pretty_printer.m"
}

#line 878 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__lock_io_pp_params_0_p_0(void)
#line 878 "pretty_printer.m"
{
#line 878 "pretty_printer.m"
  {
#line 878 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__lock_io_pp_params_0_p_0


		{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 8616 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
  }
#line 878 "pretty_printer.m"
}

#line 878 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__pre_initialise_mutable_io_pp_params_0_p_0(void)
#line 878 "pretty_printer.m"
{
#line 878 "pretty_printer.m"
  {
#line 878 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__pre_initialise_mutable_io_pp_params_0_p_0


		{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, MR_MUTEX_ATTR);
#endif

#line 8648 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
  }
#line 878 "pretty_printer.m"
}

#line 878 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0(void)
#line 878 "pretty_printer.m"
{
#line 878 "pretty_printer.m"
  {
#line 878 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 878 "pretty_printer.m"
    MR_Word mercury__pretty_printer__X_1;
#line 878 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_4_4;

#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0


		{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, MR_MUTEX_ATTR);
#endif

#line 8684 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
    mercury__pretty_printer__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[9]);
#line 878 "pretty_printer.m"
    mercury__pretty_printer__X_1 = (MR_Word) &mercury__pretty_printer_scalar_common_3[4];
#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0


		{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 8706 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0

	MR_Word X;

	X =  mercury__pretty_printer__X_1 ;
		{
#line 878 "pretty_printer.m"
mercury__pretty_printer__mutable_variable_io_pp_params = X;

#line 8723 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0


		{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 8741 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
  }
#line 878 "pretty_printer.m"
}

#line 862 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__decrement_limit_2_p_0(
#line 862 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 862 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__2_2)
#line 862 "pretty_printer.m"
{
#line 864 "pretty_printer.m"
  {
#line 864 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 864 "pretty_printer.m"
    if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 864 "pretty_printer.m"
      {
#line 864 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 864 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_4_4 = (mercury__pretty_printer__N_3 - (MR_Integer) 1);

#line 864 "pretty_printer.m"
        {
#line 864 "pretty_printer.m"
          MR_Word base;
#line 864 "pretty_printer.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 864 "pretty_printer.m"
          *mercury__pretty_printer__HeadVar__2_2 = base;
#line 864 "pretty_printer.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__pretty_printer__V_4_4));
#line 864 "pretty_printer.m"
        }
#line 864 "pretty_printer.m"
      }
#line 864 "pretty_printer.m"
    else
#line 865 "pretty_printer.m"
      {
#line 865 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 865 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_7_7 = (mercury__pretty_printer__N_6 - (MR_Integer) 1);

#line 865 "pretty_printer.m"
        {
#line 865 "pretty_printer.m"
          MR_Word base;
#line 865 "pretty_printer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 865 "pretty_printer.m"
          *mercury__pretty_printer__HeadVar__2_2 = base;
#line 865 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__V_7_7));
#line 865 "pretty_printer.m"
        }
#line 865 "pretty_printer.m"
      }
#line 864 "pretty_printer.m"
  }
#line 862 "pretty_printer.m"
}

#line 842 "pretty_printer.m"
static MR_Integer MR_CALL 
mercury__pretty_printer__adjust_priority_2_f_0(
#line 842 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Priority_4,
#line 842 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Assoc_5)
#line 842 "pretty_printer.m"
{
#line 34 "ops.opt"
  {
#line 34 "ops.opt"
    MR_bool mercury__pretty_printer__succeeded;
#line 34 "ops.opt"
    MR_Integer mercury__pretty_printer__AdjustedPriority_6;

#line 34 "ops.opt"
    if ((mercury__pretty_printer__Assoc_5 == (MR_Integer) 0))
#line 35 "ops.opt"
      {
#line 36 "ops.opt"
        mercury__pretty_printer__AdjustedPriority_6 = (mercury__pretty_printer__Priority_4 - (MR_Integer) 1);
#line 35 "ops.opt"
      }
#line 34 "ops.opt"
    else
#line 34 "ops.opt"
      mercury__pretty_printer__AdjustedPriority_6 = mercury__pretty_printer__Priority_4;
#line 34 "ops.opt"
    return mercury__pretty_printer__AdjustedPriority_6;
#line 34 "ops.opt"
  }
#line 842 "pretty_printer.m"
}

#line 831 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__add_parens_if_needed_3_f_0(
#line 831 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__OpPriority_5,
#line 831 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__EnclosingPriority_6,
#line 831 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Doc_7)
#line 831 "pretty_printer.m"
{
#line 833 "pretty_printer.m"
  {
#line 833 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded = (mercury__pretty_printer__OpPriority_5 > mercury__pretty_printer__EnclosingPriority_6);
#line 833 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__4_4;

#line 833 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 835 "pretty_printer.m"
      {
#line 835 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_8_8;
#line 835 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[6]);
#line 835 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_11_11;
#line 835 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[12]);
#line 835 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[7]);
#line 835 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 835 "pretty_printer.m"
        {
#line 835 "pretty_printer.m"
          mercury__pretty_printer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 835 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_11_11, 0) = ((MR_Box) (mercury__pretty_printer__Doc_7));
#line 835 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_11_11, 1) = ((MR_Box) (mercury__pretty_printer__V_12_12));
#line 835 "pretty_printer.m"
        }
#line 835 "pretty_printer.m"
        {
#line 835 "pretty_printer.m"
          mercury__pretty_printer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 835 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_8_8, 0) = ((MR_Box) (mercury__pretty_printer__V_9_9));
#line 835 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_8_8, 1) = ((MR_Box) (mercury__pretty_printer__V_11_11));
#line 835 "pretty_printer.m"
        }
#line 835 "pretty_printer.m"
        {
#line 835 "pretty_printer.m"
          mercury__pretty_printer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 835 "pretty_printer.m"
          MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__4_4, 0) = ((MR_Box) (mercury__pretty_printer__V_8_8));
#line 835 "pretty_printer.m"
        }
#line 835 "pretty_printer.m"
      }
#line 833 "pretty_printer.m"
    else
#line 833 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__Doc_7;
#line 833 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__4_4;
#line 833 "pretty_printer.m"
  }
#line 831 "pretty_printer.m"
}

#line 820 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__set_formatting_limit_correctly_2_f_0(
#line 820 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 820 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 820 "pretty_printer.m"
{
#line 822 "pretty_printer.m"
  {
#line 822 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 822 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;

#line 822 "pretty_printer.m"
    if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 823 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__2_2;
#line 822 "pretty_printer.m"
    else
#line 824 "pretty_printer.m"
      {
#line 824 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_9_9;
#line 824 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_10_10;
#line 824 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_11_11;
#line 824 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_12_12;
#line 824 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_13_13;

#line 825 "pretty_printer.m"
        {
#line 825 "pretty_printer.m"
          mercury__pretty_printer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 825 "pretty_printer.m"
          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_12_12, 0) = ((MR_Box) (mercury__pretty_printer__HeadVar__1_1));
#line 825 "pretty_printer.m"
        }
#line 825 "pretty_printer.m"
        {
#line 825 "pretty_printer.m"
          mercury__pretty_printer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "pretty_printer.m"
          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 825 "pretty_printer.m"
          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_11_11, 1) = ((MR_Box) (mercury__pretty_printer__V_12_12));
#line 825 "pretty_printer.m"
        }
#line 825 "pretty_printer.m"
        mercury__pretty_printer__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 825 "pretty_printer.m"
        {
#line 825 "pretty_printer.m"
          mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_10_10, 0) = ((MR_Box) (mercury__pretty_printer__V_11_11));
#line 825 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_10_10, 1) = ((MR_Box) (mercury__pretty_printer__V_13_13));
#line 825 "pretty_printer.m"
        }
#line 825 "pretty_printer.m"
        {
#line 825 "pretty_printer.m"
          mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 0) = ((MR_Box) (mercury__pretty_printer__HeadVar__2_2));
#line 825 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 1) = ((MR_Box) (mercury__pretty_printer__V_10_10));
#line 825 "pretty_printer.m"
        }
#line 825 "pretty_printer.m"
        {
#line 825 "pretty_printer.m"
          mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 825 "pretty_printer.m"
          MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_9_9));
#line 825 "pretty_printer.m"
        }
#line 824 "pretty_printer.m"
      }
#line 822 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 822 "pretty_printer.m"
  }
#line 820 "pretty_printer.m"
}

#line 753 "pretty_printer.m"
static MR_bool MR_CALL 
mercury__pretty_printer__expand_format_op_4_p_0(
#line 753 "pretty_printer.m"
  MR_String mercury__pretty_printer__Op_1,
#line 753 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 753 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_3,
#line 753 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Docs_4)
#line 753 "pretty_printer.m"
{
#line 756 "pretty_printer.m"
  {
#line 756 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 756 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_110_110;
#line 756 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_111_111;

#line 756 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 756 "pretty_printer.m"
      {
#line 756 "pretty_printer.m"
        mercury__pretty_printer__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 756 "pretty_printer.m"
        mercury__pretty_printer__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 756 "pretty_printer.m"
        if ((mercury__pretty_printer__V_110_110 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 765 "pretty_printer.m"
          {
#line 765 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__OpPri_9;
#line 765 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Assoc_10;
#line 757 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_106;

#line 757 "pretty_printer.m"
            {
#line 757 "pretty_printer.m"
              mercury__ops__init_mercury_op_table_0_f_0();
            }
#line 9066 "pretty_printer.c"
            mercury__pretty_printer__TypeClassInfo_for_op_table_106 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 757 "pretty_printer.m"
            {
#line 757 "pretty_printer.m"
              mercury__pretty_printer__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__pretty_printer__TypeClassInfo_for_op_table_106, ((MR_Box) ((MR_Integer) 0)), mercury__pretty_printer__Op_1, &mercury__pretty_printer__OpPri_9, &mercury__pretty_printer__Assoc_10);
            }
#line 765 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 763 "pretty_printer.m"
              {
#line 763 "pretty_printer.m"
                MR_Word mercury__pretty_printer__Doc_11;
#line 763 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_14_14;
#line 763 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_15_15;
#line 763 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_16_16;
#line 763 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_17_17;
#line 763 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_18_18;
#line 763 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__V_19_19;
#line 763 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_20_20;
#line 763 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_21_21;
#line 763 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_22_22;

#line 760 "pretty_printer.m"
                {
#line 760 "pretty_printer.m"
                  mercury__pretty_printer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 760 "pretty_printer.m"
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_15_15, 0) = ((MR_Box) (mercury__pretty_printer__Op_1));
#line 760 "pretty_printer.m"
                }
#line 761 "pretty_printer.m"
                {
#line 761 "pretty_printer.m"
                  mercury__pretty_printer__V_19_19 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_9, mercury__pretty_printer__Assoc_10);
                }
#line 761 "pretty_printer.m"
                {
#line 761 "pretty_printer.m"
                  mercury__pretty_printer__V_18_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 761 "pretty_printer.m"
                  MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_18_18, 0) = ((MR_Box) (mercury__pretty_printer__V_19_19));
#line 761 "pretty_printer.m"
                }
#line 761 "pretty_printer.m"
                {
#line 761 "pretty_printer.m"
                  mercury__pretty_printer__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "pretty_printer.m"
                  MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 761 "pretty_printer.m"
                  MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_17_17, 1) = ((MR_Box) (mercury__pretty_printer__V_18_18));
#line 761 "pretty_printer.m"
                }
#line 762 "pretty_printer.m"
                {
#line 762 "pretty_printer.m"
                  mercury__pretty_printer__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "pretty_printer.m"
                  MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 762 "pretty_printer.m"
                  MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_21_21, 1) = ((MR_Box) (mercury__pretty_printer__V_111_111));
#line 762 "pretty_printer.m"
                }
#line 763 "pretty_printer.m"
                mercury__pretty_printer__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 763 "pretty_printer.m"
                {
#line 763 "pretty_printer.m"
                  mercury__pretty_printer__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 763 "pretty_printer.m"
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_20_20, 0) = ((MR_Box) (mercury__pretty_printer__V_21_21));
#line 763 "pretty_printer.m"
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_20_20, 1) = ((MR_Box) (mercury__pretty_printer__V_22_22));
#line 763 "pretty_printer.m"
                }
#line 761 "pretty_printer.m"
                {
#line 761 "pretty_printer.m"
                  mercury__pretty_printer__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "pretty_printer.m"
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_16_16, 0) = ((MR_Box) (mercury__pretty_printer__V_17_17));
#line 761 "pretty_printer.m"
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_16_16, 1) = ((MR_Box) (mercury__pretty_printer__V_20_20));
#line 761 "pretty_printer.m"
                }
#line 760 "pretty_printer.m"
                {
#line 760 "pretty_printer.m"
                  mercury__pretty_printer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "pretty_printer.m"
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_14_14, 0) = ((MR_Box) (mercury__pretty_printer__V_15_15));
#line 760 "pretty_printer.m"
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_14_14, 1) = ((MR_Box) (mercury__pretty_printer__V_16_16));
#line 760 "pretty_printer.m"
                }
#line 759 "pretty_printer.m"
                {
#line 759 "pretty_printer.m"
                  mercury__pretty_printer__Doc_11 = mercury__pretty_printer__group_1_f_0(mercury__pretty_printer__V_14_14);
                }
#line 764 "pretty_printer.m"
                {
#line 764 "pretty_printer.m"
                  *mercury__pretty_printer__Docs_4 = mercury__pretty_printer__add_parens_if_needed_3_f_0(mercury__pretty_printer__OpPri_9, mercury__pretty_printer__CurrentPri_3, mercury__pretty_printer__Doc_11);
                }
#line 763 "pretty_printer.m"
                mercury__pretty_printer__succeeded = MR_TRUE;
#line 763 "pretty_printer.m"
              }
#line 765 "pretty_printer.m"
            else
#line 766 "pretty_printer.m"
              {
#line 766 "pretty_printer.m"
                MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_107;
#line 766 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_24_24;
#line 766 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_25_25;
#line 766 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_26_26;
#line 766 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__V_27_27;
#line 766 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_28_28;
#line 766 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_29_29;
#line 766 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_30_30;
#line 766 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_31_31;
#line 766 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_32_32;
#line 766 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__OpPri_33;
#line 766 "pretty_printer.m"
                MR_Word mercury__pretty_printer__Assoc_34;
#line 766 "pretty_printer.m"
                MR_Word mercury__pretty_printer__Doc_35;

#line 766 "pretty_printer.m"
                {
#line 766 "pretty_printer.m"
                  mercury__ops__init_mercury_op_table_0_f_0();
                }
#line 9221 "pretty_printer.c"
                mercury__pretty_printer__TypeClassInfo_for_op_table_107 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 766 "pretty_printer.m"
                {
#line 766 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__pretty_printer__TypeClassInfo_for_op_table_107, ((MR_Box) ((MR_Integer) 0)), mercury__pretty_printer__Op_1, &mercury__pretty_printer__OpPri_33, &mercury__pretty_printer__Assoc_34);
                }
#line 766 "pretty_printer.m"
                if (mercury__pretty_printer__succeeded)
#line 766 "pretty_printer.m"
                  {
#line 769 "pretty_printer.m"
                    {
#line 769 "pretty_printer.m"
                      mercury__pretty_printer__V_27_27 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_33, mercury__pretty_printer__Assoc_34);
                    }
#line 772 "pretty_printer.m"
                    mercury__pretty_printer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 769 "pretty_printer.m"
                    {
#line 769 "pretty_printer.m"
                      mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 769 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_26_26, 0) = ((MR_Box) (mercury__pretty_printer__V_27_27));
#line 769 "pretty_printer.m"
                    }
#line 769 "pretty_printer.m"
                    {
#line 769 "pretty_printer.m"
                      mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 769 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_25_25, 1) = ((MR_Box) (mercury__pretty_printer__V_26_26));
#line 769 "pretty_printer.m"
                    }
#line 770 "pretty_printer.m"
                    {
#line 770 "pretty_printer.m"
                      mercury__pretty_printer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 770 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_29_29, 1) = ((MR_Box) (mercury__pretty_printer__V_111_111));
#line 770 "pretty_printer.m"
                    }
#line 771 "pretty_printer.m"
                    {
#line 771 "pretty_printer.m"
                      mercury__pretty_printer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 771 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_31_31, 0) = ((MR_Box) (mercury__pretty_printer__Op_1));
#line 771 "pretty_printer.m"
                    }
#line 772 "pretty_printer.m"
                    {
#line 772 "pretty_printer.m"
                      mercury__pretty_printer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_30_30, 0) = ((MR_Box) (mercury__pretty_printer__V_31_31));
#line 772 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_30_30, 1) = ((MR_Box) (mercury__pretty_printer__V_32_32));
#line 772 "pretty_printer.m"
                    }
#line 770 "pretty_printer.m"
                    {
#line 770 "pretty_printer.m"
                      mercury__pretty_printer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_28_28, 0) = ((MR_Box) (mercury__pretty_printer__V_29_29));
#line 770 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_28_28, 1) = ((MR_Box) (mercury__pretty_printer__V_30_30));
#line 770 "pretty_printer.m"
                    }
#line 769 "pretty_printer.m"
                    {
#line 769 "pretty_printer.m"
                      mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_24_24, 0) = ((MR_Box) (mercury__pretty_printer__V_25_25));
#line 769 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_24_24, 1) = ((MR_Box) (mercury__pretty_printer__V_28_28));
#line 769 "pretty_printer.m"
                    }
#line 768 "pretty_printer.m"
                    {
#line 768 "pretty_printer.m"
                      mercury__pretty_printer__Doc_35 = mercury__pretty_printer__group_1_f_0(mercury__pretty_printer__V_24_24);
                    }
#line 773 "pretty_printer.m"
                    {
#line 773 "pretty_printer.m"
                      *mercury__pretty_printer__Docs_4 = mercury__pretty_printer__add_parens_if_needed_3_f_0(mercury__pretty_printer__OpPri_33, mercury__pretty_printer__CurrentPri_3, mercury__pretty_printer__Doc_35);
                    }
#line 773 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = MR_TRUE;
#line 766 "pretty_printer.m"
                  }
#line 766 "pretty_printer.m"
              }
#line 765 "pretty_printer.m"
          }
#line 756 "pretty_printer.m"
        else
#line 776 "pretty_printer.m"
          {
#line 776 "pretty_printer.m"
            MR_Word mercury__pretty_printer__ArgB_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_110_110, (MR_Integer) 0)));
#line 776 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_110_110, (MR_Integer) 1)));
#line 798 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__OpPri_41;
#line 798 "pretty_printer.m"
            MR_Word mercury__pretty_printer__AssocA_42;
#line 798 "pretty_printer.m"
            MR_Word mercury__pretty_printer__AssocB_43;
#line 778 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_108;

#line 776 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 776 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 776 "pretty_printer.m"
              {
#line 778 "pretty_printer.m"
                {
#line 778 "pretty_printer.m"
                  mercury__ops__init_mercury_op_table_0_f_0();
                }
#line 9351 "pretty_printer.c"
                mercury__pretty_printer__TypeClassInfo_for_op_table_108 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 778 "pretty_printer.m"
                {
#line 778 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__pretty_printer__TypeClassInfo_for_op_table_108, ((MR_Box) ((MR_Integer) 0)), mercury__pretty_printer__Op_1, &mercury__pretty_printer__OpPri_41, &mercury__pretty_printer__AssocA_42, &mercury__pretty_printer__AssocB_43);
                }
#line 798 "pretty_printer.m"
                if (mercury__pretty_printer__succeeded)
#line 796 "pretty_printer.m"
                  {
#line 796 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__Doc_44;
#line 796 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_48_48;
#line 796 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_49_49;
#line 796 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_50_50;
#line 796 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__V_51_51;
#line 796 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_52_52;
#line 796 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_53_53;
#line 796 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_54_54;
#line 796 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_55_55;
#line 796 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_65_65;
#line 796 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_66_66;
#line 796 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_67_67;
#line 796 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_68_68;
#line 796 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_69_69;
#line 796 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_70_70;
#line 796 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_71_71;
#line 796 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__V_72_72;
#line 796 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_73_73;
#line 796 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_74_74;
#line 796 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_75_75;
#line 796 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_76_76;

#line 783 "pretty_printer.m"
                    {
#line 783 "pretty_printer.m"
                      mercury__pretty_printer__V_51_51 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_41, mercury__pretty_printer__AssocA_42);
                    }
#line 783 "pretty_printer.m"
                    {
#line 783 "pretty_printer.m"
                      mercury__pretty_printer__V_50_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 783 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_50_50, 0) = ((MR_Box) (mercury__pretty_printer__V_51_51));
#line 783 "pretty_printer.m"
                    }
#line 783 "pretty_printer.m"
                    {
#line 783 "pretty_printer.m"
                      mercury__pretty_printer__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 783 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_49_49, 1) = ((MR_Box) (mercury__pretty_printer__V_50_50));
#line 783 "pretty_printer.m"
                    }
#line 784 "pretty_printer.m"
                    {
#line 784 "pretty_printer.m"
                      mercury__pretty_printer__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 784 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_53_53, 1) = ((MR_Box) (mercury__pretty_printer__V_111_111));
#line 784 "pretty_printer.m"
                    }
#line 785 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = (strcmp(mercury__pretty_printer__Op_1, (MR_String) ".") == 0);
#line 789 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 786 "pretty_printer.m"
                      {
#line 786 "pretty_printer.m"
                        mercury__pretty_printer__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 786 "pretty_printer.m"
                        MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_55_55, 0) = ((MR_Box) (mercury__pretty_printer__Op_1));
#line 786 "pretty_printer.m"
                      }
#line 789 "pretty_printer.m"
                    else
#line 788 "pretty_printer.m"
                      {
#line 788 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_56_56;
#line 788 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[8]);
#line 788 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_59_59;
#line 788 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_60_60;
#line 788 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_61_61;
#line 788 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_64_64;

#line 788 "pretty_printer.m"
                        {
#line 788 "pretty_printer.m"
                          mercury__pretty_printer__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 788 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_60_60, 0) = ((MR_Box) (mercury__pretty_printer__Op_1));
#line 788 "pretty_printer.m"
                        }
#line 788 "pretty_printer.m"
                        mercury__pretty_printer__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 788 "pretty_printer.m"
                        mercury__pretty_printer__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[13]);
#line 788 "pretty_printer.m"
                        {
#line 788 "pretty_printer.m"
                          mercury__pretty_printer__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_59_59, 0) = ((MR_Box) (mercury__pretty_printer__V_60_60));
#line 788 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_59_59, 1) = ((MR_Box) (mercury__pretty_printer__V_61_61));
#line 788 "pretty_printer.m"
                        }
#line 788 "pretty_printer.m"
                        {
#line 788 "pretty_printer.m"
                          mercury__pretty_printer__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_56_56, 0) = ((MR_Box) (mercury__pretty_printer__V_57_57));
#line 788 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_56_56, 1) = ((MR_Box) (mercury__pretty_printer__V_59_59));
#line 788 "pretty_printer.m"
                        }
#line 788 "pretty_printer.m"
                        {
#line 788 "pretty_printer.m"
                          mercury__pretty_printer__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 788 "pretty_printer.m"
                          MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_55_55, 0) = ((MR_Box) (mercury__pretty_printer__V_56_56));
#line 788 "pretty_printer.m"
                        }
#line 788 "pretty_printer.m"
                      }
#line 791 "pretty_printer.m"
                    mercury__pretty_printer__V_68_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 792 "pretty_printer.m"
                    {
#line 792 "pretty_printer.m"
                      mercury__pretty_printer__V_72_72 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_41, mercury__pretty_printer__AssocB_43);
                    }
#line 792 "pretty_printer.m"
                    {
#line 792 "pretty_printer.m"
                      mercury__pretty_printer__V_71_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 792 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_71_71, 0) = ((MR_Box) (mercury__pretty_printer__V_72_72));
#line 792 "pretty_printer.m"
                    }
#line 792 "pretty_printer.m"
                    {
#line 792 "pretty_printer.m"
                      mercury__pretty_printer__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 792 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_70_70, 1) = ((MR_Box) (mercury__pretty_printer__V_71_71));
#line 792 "pretty_printer.m"
                    }
#line 794 "pretty_printer.m"
                    {
#line 794 "pretty_printer.m"
                      mercury__pretty_printer__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 794 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_74_74, 1) = ((MR_Box) (mercury__pretty_printer__ArgB_38));
#line 794 "pretty_printer.m"
                    }
#line 795 "pretty_printer.m"
                    mercury__pretty_printer__V_75_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 795 "pretty_printer.m"
                    {
#line 795 "pretty_printer.m"
                      mercury__pretty_printer__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_73_73, 0) = ((MR_Box) (mercury__pretty_printer__V_74_74));
#line 795 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_73_73, 1) = ((MR_Box) (mercury__pretty_printer__V_75_75));
#line 795 "pretty_printer.m"
                    }
#line 793 "pretty_printer.m"
                    {
#line 793 "pretty_printer.m"
                      mercury__pretty_printer__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_69_69, 0) = ((MR_Box) (mercury__pretty_printer__V_70_70));
#line 793 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_69_69, 1) = ((MR_Box) (mercury__pretty_printer__V_73_73));
#line 793 "pretty_printer.m"
                    }
#line 791 "pretty_printer.m"
                    {
#line 791 "pretty_printer.m"
                      mercury__pretty_printer__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_67_67, 0) = ((MR_Box) (mercury__pretty_printer__V_68_68));
#line 791 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_67_67, 1) = ((MR_Box) (mercury__pretty_printer__V_69_69));
#line 791 "pretty_printer.m"
                    }
#line 790 "pretty_printer.m"
                    {
#line 790 "pretty_printer.m"
                      mercury__pretty_printer__V_66_66 = mercury__pretty_printer__indent_1_f_0(mercury__pretty_printer__V_67_67);
                    }
#line 796 "pretty_printer.m"
                    mercury__pretty_printer__V_76_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 796 "pretty_printer.m"
                    {
#line 796 "pretty_printer.m"
                      mercury__pretty_printer__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_65_65, 0) = ((MR_Box) (mercury__pretty_printer__V_66_66));
#line 796 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_65_65, 1) = ((MR_Box) (mercury__pretty_printer__V_76_76));
#line 796 "pretty_printer.m"
                    }
#line 789 "pretty_printer.m"
                    {
#line 789 "pretty_printer.m"
                      mercury__pretty_printer__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_54_54, 0) = ((MR_Box) (mercury__pretty_printer__V_55_55));
#line 789 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_54_54, 1) = ((MR_Box) (mercury__pretty_printer__V_65_65));
#line 789 "pretty_printer.m"
                    }
#line 784 "pretty_printer.m"
                    {
#line 784 "pretty_printer.m"
                      mercury__pretty_printer__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_52_52, 0) = ((MR_Box) (mercury__pretty_printer__V_53_53));
#line 784 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_52_52, 1) = ((MR_Box) (mercury__pretty_printer__V_54_54));
#line 784 "pretty_printer.m"
                    }
#line 783 "pretty_printer.m"
                    {
#line 783 "pretty_printer.m"
                      mercury__pretty_printer__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_48_48, 0) = ((MR_Box) (mercury__pretty_printer__V_49_49));
#line 783 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_48_48, 1) = ((MR_Box) (mercury__pretty_printer__V_52_52));
#line 783 "pretty_printer.m"
                    }
#line 782 "pretty_printer.m"
                    {
#line 782 "pretty_printer.m"
                      mercury__pretty_printer__Doc_44 = mercury__pretty_printer__group_1_f_0(mercury__pretty_printer__V_48_48);
                    }
#line 797 "pretty_printer.m"
                    {
#line 797 "pretty_printer.m"
                      *mercury__pretty_printer__Docs_4 = mercury__pretty_printer__add_parens_if_needed_3_f_0(mercury__pretty_printer__OpPri_41, mercury__pretty_printer__CurrentPri_3, mercury__pretty_printer__Doc_44);
                    }
#line 796 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = MR_TRUE;
#line 796 "pretty_printer.m"
                  }
#line 798 "pretty_printer.m"
                else
#line 800 "pretty_printer.m"
                  {
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_109;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_78_78;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_79_79;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_80_80;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_81_81;
#line 800 "pretty_printer.m"
                    MR_String mercury__pretty_printer__V_82_82;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_83_83;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_84_84;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_85_85;
#line 800 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__V_86_86;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_87_87;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_88_88;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_89_89;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_92_92;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_93_93;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_94_94;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_95_95;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_96_96;
#line 800 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__V_97_97;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_98_98;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_99_99;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_100_100;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_101_101;
#line 800 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__OpPri_102;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__AssocA_103;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__AssocB_104;
#line 800 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__Doc_105;

#line 799 "pretty_printer.m"
                    {
#line 799 "pretty_printer.m"
                      mercury__ops__init_mercury_op_table_0_f_0();
                    }
#line 9701 "pretty_printer.c"
                    mercury__pretty_printer__TypeClassInfo_for_op_table_109 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 799 "pretty_printer.m"
                    {
#line 799 "pretty_printer.m"
                      mercury__pretty_printer__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__pretty_printer__TypeClassInfo_for_op_table_109, ((MR_Box) ((MR_Integer) 0)), mercury__pretty_printer__Op_1, &mercury__pretty_printer__OpPri_102, &mercury__pretty_printer__AssocA_103, &mercury__pretty_printer__AssocB_104);
                    }
#line 800 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 800 "pretty_printer.m"
                      {
#line 803 "pretty_printer.m"
                        mercury__pretty_printer__V_82_82 = (MR_String) " ";
#line 803 "pretty_printer.m"
                        {
#line 803 "pretty_printer.m"
                          mercury__pretty_printer__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 803 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_79_79, 0) = ((MR_Box) (mercury__pretty_printer__Op_1));
#line 803 "pretty_printer.m"
                        }
#line 803 "pretty_printer.m"
                        mercury__pretty_printer__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[8]);
#line 804 "pretty_printer.m"
                        {
#line 804 "pretty_printer.m"
                          mercury__pretty_printer__V_86_86 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_102, mercury__pretty_printer__AssocA_103);
                        }
#line 804 "pretty_printer.m"
                        {
#line 804 "pretty_printer.m"
                          mercury__pretty_printer__V_85_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 804 "pretty_printer.m"
                          MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_85_85, 0) = ((MR_Box) (mercury__pretty_printer__V_86_86));
#line 804 "pretty_printer.m"
                        }
#line 804 "pretty_printer.m"
                        {
#line 804 "pretty_printer.m"
                          mercury__pretty_printer__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 804 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_84_84, 1) = ((MR_Box) (mercury__pretty_printer__V_85_85));
#line 804 "pretty_printer.m"
                        }
#line 805 "pretty_printer.m"
                        {
#line 805 "pretty_printer.m"
                          mercury__pretty_printer__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 805 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_88_88, 1) = ((MR_Box) (mercury__pretty_printer__V_111_111));
#line 805 "pretty_printer.m"
                        }
#line 808 "pretty_printer.m"
                        {
#line 808 "pretty_printer.m"
                          mercury__pretty_printer__V_97_97 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_102, mercury__pretty_printer__AssocB_104);
                        }
#line 811 "pretty_printer.m"
                        mercury__pretty_printer__V_100_100 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 808 "pretty_printer.m"
                        {
#line 808 "pretty_printer.m"
                          mercury__pretty_printer__V_96_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 808 "pretty_printer.m"
                          MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_96_96, 0) = ((MR_Box) (mercury__pretty_printer__V_97_97));
#line 808 "pretty_printer.m"
                        }
#line 808 "pretty_printer.m"
                        {
#line 808 "pretty_printer.m"
                          mercury__pretty_printer__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 808 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_95_95, 1) = ((MR_Box) (mercury__pretty_printer__V_96_96));
#line 808 "pretty_printer.m"
                        }
#line 810 "pretty_printer.m"
                        {
#line 810 "pretty_printer.m"
                          mercury__pretty_printer__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 810 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_99_99, 1) = ((MR_Box) (mercury__pretty_printer__ArgB_38));
#line 810 "pretty_printer.m"
                        }
#line 811 "pretty_printer.m"
                        {
#line 811 "pretty_printer.m"
                          mercury__pretty_printer__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_98_98, 0) = ((MR_Box) (mercury__pretty_printer__V_99_99));
#line 811 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_98_98, 1) = ((MR_Box) (mercury__pretty_printer__V_100_100));
#line 811 "pretty_printer.m"
                        }
#line 809 "pretty_printer.m"
                        {
#line 809 "pretty_printer.m"
                          mercury__pretty_printer__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 0) = ((MR_Box) (mercury__pretty_printer__V_95_95));
#line 809 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 1) = ((MR_Box) (mercury__pretty_printer__V_98_98));
#line 809 "pretty_printer.m"
                        }
#line 807 "pretty_printer.m"
                        {
#line 807 "pretty_printer.m"
                          mercury__pretty_printer__V_93_93 = mercury__pretty_printer__indent_1_f_0(mercury__pretty_printer__V_94_94);
                        }
#line 812 "pretty_printer.m"
                        mercury__pretty_printer__V_101_101 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 812 "pretty_printer.m"
                        {
#line 812 "pretty_printer.m"
                          mercury__pretty_printer__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_92_92, 0) = ((MR_Box) (mercury__pretty_printer__V_93_93));
#line 812 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_92_92, 1) = ((MR_Box) (mercury__pretty_printer__V_101_101));
#line 812 "pretty_printer.m"
                        }
#line 806 "pretty_printer.m"
                        {
#line 806 "pretty_printer.m"
                          mercury__pretty_printer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 0) = ((MR_Box) (mercury__pretty_printer__V_81_81));
#line 806 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 1) = ((MR_Box) (mercury__pretty_printer__V_92_92));
#line 806 "pretty_printer.m"
                        }
#line 805 "pretty_printer.m"
                        {
#line 805 "pretty_printer.m"
                          mercury__pretty_printer__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_87_87, 0) = ((MR_Box) (mercury__pretty_printer__V_88_88));
#line 805 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_87_87, 1) = ((MR_Box) (mercury__pretty_printer__V_89_89));
#line 805 "pretty_printer.m"
                        }
#line 804 "pretty_printer.m"
                        {
#line 804 "pretty_printer.m"
                          mercury__pretty_printer__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_83_83, 0) = ((MR_Box) (mercury__pretty_printer__V_84_84));
#line 804 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_83_83, 1) = ((MR_Box) (mercury__pretty_printer__V_87_87));
#line 804 "pretty_printer.m"
                        }
#line 803 "pretty_printer.m"
                        {
#line 803 "pretty_printer.m"
                          mercury__pretty_printer__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_80_80, 0) = ((MR_Box) (mercury__pretty_printer__V_81_81));
#line 803 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_80_80, 1) = ((MR_Box) (mercury__pretty_printer__V_83_83));
#line 803 "pretty_printer.m"
                        }
#line 803 "pretty_printer.m"
                        {
#line 803 "pretty_printer.m"
                          mercury__pretty_printer__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_78_78, 0) = ((MR_Box) (mercury__pretty_printer__V_79_79));
#line 803 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_78_78, 1) = ((MR_Box) (mercury__pretty_printer__V_80_80));
#line 803 "pretty_printer.m"
                        }
#line 802 "pretty_printer.m"
                        {
#line 802 "pretty_printer.m"
                          mercury__pretty_printer__Doc_105 = mercury__pretty_printer__group_1_f_0(mercury__pretty_printer__V_78_78);
                        }
#line 813 "pretty_printer.m"
                        {
#line 813 "pretty_printer.m"
                          *mercury__pretty_printer__Docs_4 = mercury__pretty_printer__add_parens_if_needed_3_f_0(mercury__pretty_printer__OpPri_102, mercury__pretty_printer__CurrentPri_3, mercury__pretty_printer__Doc_105);
                        }
#line 813 "pretty_printer.m"
                        mercury__pretty_printer__succeeded = MR_TRUE;
#line 800 "pretty_printer.m"
                      }
#line 800 "pretty_printer.m"
                  }
#line 776 "pretty_printer.m"
              }
#line 776 "pretty_printer.m"
          }
#line 756 "pretty_printer.m"
      }
#line 756 "pretty_printer.m"
    return mercury__pretty_printer__succeeded;
#line 756 "pretty_printer.m"
  }
#line 753 "pretty_printer.m"
}

#line 737 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_format_susp_4_p_0(
#line 737 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Susp_5,
#line 737 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_6,
#line 737 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_8,
#line 737 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_9)
#line 737 "pretty_printer.m"
{
#line 743 "pretty_printer.m"
  {
#line 743 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 853 "pretty_printer.m"
    if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_8)) == (MR_mktag((MR_Integer) 0))))
#line 853 "pretty_printer.m"
      {
#line 853 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_8, (MR_Integer) 0)));

#line 854 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_12 <= (MR_Integer) 0);
#line 853 "pretty_printer.m"
      }
#line 853 "pretty_printer.m"
    else
#line 855 "pretty_printer.m"
      {
#line 855 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_8, (MR_Integer) 0)));

#line 856 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_14 <= (MR_Integer) 0);
#line 855 "pretty_printer.m"
      }
#line 743 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 742 "pretty_printer.m"
      {
#line 1197 "pretty_printer.m"
        *mercury__pretty_printer__Doc_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1]);
#line 742 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_Limit_9 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_8;
#line 742 "pretty_printer.m"
      }
#line 743 "pretty_printer.m"
    else
#line 744 "pretty_printer.m"
      {
#line 744 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_11_11;
#line 745 "pretty_printer.m"
        MR_Box MR_CALL (* mercury__pretty_printer__func_0)(MR_Box);
#line 745 "pretty_printer.m"
        MR_Box mercury__pretty_printer__conv1_V_11_11;

#line 864 "pretty_printer.m"
        if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_8)) == (MR_mktag((MR_Integer) 0))))
#line 864 "pretty_printer.m"
          {
#line 864 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__N_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_8, (MR_Integer) 0)));
#line 864 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__V_18_18 = (mercury__pretty_printer__N_17 - (MR_Integer) 1);

#line 864 "pretty_printer.m"
            {
#line 864 "pretty_printer.m"
              MR_Word base;
#line 864 "pretty_printer.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 864 "pretty_printer.m"
              *mercury__pretty_printer__STATE_VARIABLE_Limit_9 = base;
#line 864 "pretty_printer.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__pretty_printer__V_18_18));
#line 864 "pretty_printer.m"
            }
#line 864 "pretty_printer.m"
          }
#line 864 "pretty_printer.m"
        else
#line 865 "pretty_printer.m"
          {
#line 865 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__N_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_8, (MR_Integer) 0)));
#line 865 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__V_21_21 = (mercury__pretty_printer__N_20 - (MR_Integer) 1);

#line 865 "pretty_printer.m"
            {
#line 865 "pretty_printer.m"
              MR_Word base;
#line 865 "pretty_printer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 865 "pretty_printer.m"
              *mercury__pretty_printer__STATE_VARIABLE_Limit_9 = base;
#line 865 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__V_21_21));
#line 865 "pretty_printer.m"
            }
#line 865 "pretty_printer.m"
          }
#line 745 "pretty_printer.m"
        mercury__pretty_printer__func_0 = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Susp_5, (MR_Integer) 1)));
#line 745 "pretty_printer.m"
        {
#line 745 "pretty_printer.m"
          mercury__pretty_printer__conv1_V_11_11 = mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__Susp_5));
        }
#line 745 "pretty_printer.m"
        mercury__pretty_printer__V_11_11 = ((MR_Word) mercury__pretty_printer__conv1_V_11_11);
#line 822 "pretty_printer.m"
        if (((MR_tag((MR_Word) *mercury__pretty_printer__STATE_VARIABLE_Limit_9)) == (MR_mktag((MR_Integer) 0))))
#line 823 "pretty_printer.m"
          *mercury__pretty_printer__Doc_6 = mercury__pretty_printer__V_11_11;
#line 822 "pretty_printer.m"
        else
#line 824 "pretty_printer.m"
          {
#line 824 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_28_28;
#line 824 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_29_29;
#line 824 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_30_30;
#line 824 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_31_31;
#line 824 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_32_32;

#line 825 "pretty_printer.m"
            {
#line 825 "pretty_printer.m"
              mercury__pretty_printer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 825 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_31_31, 0) = ((MR_Box) (*mercury__pretty_printer__STATE_VARIABLE_Limit_9));
#line 825 "pretty_printer.m"
            }
#line 825 "pretty_printer.m"
            {
#line 825 "pretty_printer.m"
              mercury__pretty_printer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 825 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_30_30, 1) = ((MR_Box) (mercury__pretty_printer__V_31_31));
#line 825 "pretty_printer.m"
            }
#line 825 "pretty_printer.m"
            mercury__pretty_printer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 825 "pretty_printer.m"
            {
#line 825 "pretty_printer.m"
              mercury__pretty_printer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 0) = ((MR_Box) (mercury__pretty_printer__V_30_30));
#line 825 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 1) = ((MR_Box) (mercury__pretty_printer__V_32_32));
#line 825 "pretty_printer.m"
            }
#line 825 "pretty_printer.m"
            {
#line 825 "pretty_printer.m"
              mercury__pretty_printer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_28_28, 0) = ((MR_Box) (mercury__pretty_printer__V_11_11));
#line 825 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_28_28, 1) = ((MR_Box) (mercury__pretty_printer__V_29_29));
#line 825 "pretty_printer.m"
            }
#line 825 "pretty_printer.m"
            {
#line 825 "pretty_printer.m"
              MR_Word base;
#line 825 "pretty_printer.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 825 "pretty_printer.m"
              *mercury__pretty_printer__Doc_6 = base;
#line 825 "pretty_printer.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__pretty_printer__V_28_28));
#line 825 "pretty_printer.m"
            }
#line 824 "pretty_printer.m"
          }
#line 744 "pretty_printer.m"
      }
#line 743 "pretty_printer.m"
  }
#line 737 "pretty_printer.m"
}

#line 710 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_format_term_6_p_0(
#line 710 "pretty_printer.m"
  MR_String mercury__pretty_printer__Name_7,
#line 710 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Args_8,
#line 710 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_9,
#line 710 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_14,
#line 710 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_15,
#line 710 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_11)
#line 710 "pretty_printer.m"
{
#line 714 "pretty_printer.m"
  {
#line 714 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded = (mercury__pretty_printer__Args_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 714 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Doc0_12;

#line 717 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 716 "pretty_printer.m"
      {
#line 716 "pretty_printer.m"
        MR_String mercury__pretty_printer__V_16_16;

#line 55 "term_io.opt"
        {
#line 55 "term_io.opt"
          mercury__pretty_printer__V_16_16 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__pretty_printer__Name_7, (MR_Integer) 1);
        }
#line 716 "pretty_printer.m"
        {
#line 716 "pretty_printer.m"
          mercury__pretty_printer__Doc0_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 716 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc0_12, 0) = ((MR_Box) (mercury__pretty_printer__V_16_16));
#line 716 "pretty_printer.m"
        }
#line 716 "pretty_printer.m"
      }
#line 717 "pretty_printer.m"
    else
#line 719 "pretty_printer.m"
      {
#line 853 "pretty_printer.m"
        if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_14)) == (MR_mktag((MR_Integer) 0))))
#line 853 "pretty_printer.m"
          {
#line 853 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__N_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_14, (MR_Integer) 0)));

#line 854 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_54 <= (MR_Integer) 0);
#line 853 "pretty_printer.m"
          }
#line 853 "pretty_printer.m"
        else
#line 855 "pretty_printer.m"
          {
#line 855 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__N_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_14, (MR_Integer) 0)));

#line 856 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_56 <= (MR_Integer) 0);
#line 855 "pretty_printer.m"
          }
#line 719 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 1197 "pretty_printer.m"
          {
#line 1197 "pretty_printer.m"
            mercury__pretty_printer__Doc0_12 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1]);
#line 1197 "pretty_printer.m"
          }
#line 719 "pretty_printer.m"
        else
#line 721 "pretty_printer.m"
          {
#line 721 "pretty_printer.m"
            MR_Word mercury__pretty_printer__OpDoc_13;

#line 719 "pretty_printer.m"
            {
#line 719 "pretty_printer.m"
              mercury__pretty_printer__succeeded = mercury__pretty_printer__expand_format_op_4_p_0(mercury__pretty_printer__Name_7, mercury__pretty_printer__Args_8, mercury__pretty_printer__CurrentPri_11, &mercury__pretty_printer__OpDoc_13);
            }
#line 721 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 720 "pretty_printer.m"
              mercury__pretty_printer__Doc0_12 = mercury__pretty_printer__OpDoc_13;
#line 721 "pretty_printer.m"
            else
#line 725 "pretty_printer.m"
              {
#line 721 "pretty_printer.m"
                mercury__pretty_printer__succeeded = (strcmp(mercury__pretty_printer__Name_7, (MR_String) "{}") == 0);
#line 725 "pretty_printer.m"
                if (mercury__pretty_printer__succeeded)
#line 722 "pretty_printer.m"
                  {
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_17_17;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[3]);
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_20_20;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_21_21;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_22_22;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_23_23;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[4]);
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_26_26;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_27_27;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_28_28;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_30_30;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_63_63;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_64_64;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_65_65;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_66_66;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_67_67;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_68_68;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_69_69;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_70_70;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_71_71;

#line 723 "pretty_printer.m"
                    {
#line 723 "pretty_printer.m"
                      mercury__pretty_printer__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 723 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 723 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_23_23, 1) = ((MR_Box) (mercury__pretty_printer__Args_8));
#line 723 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_23_23, 2) = ((MR_Box) (mercury__pretty_printer__V_24_24));
#line 723 "pretty_printer.m"
                    }
#line 723 "pretty_printer.m"
                    mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 723 "pretty_printer.m"
                    {
#line 723 "pretty_printer.m"
                      mercury__pretty_printer__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_22_22, 0) = ((MR_Box) (mercury__pretty_printer__V_23_23));
#line 723 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_22_22, 1) = ((MR_Box) (mercury__pretty_printer__V_26_26));
#line 723 "pretty_printer.m"
                    }
#line 315 "pretty_printer.m"
                    mercury__pretty_printer__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[0]);
#line 315 "pretty_printer.m"
                    mercury__pretty_printer__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[7]);
#line 315 "pretty_printer.m"
                    {
#line 315 "pretty_printer.m"
                      mercury__pretty_printer__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 315 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_67_67, 0) = ((MR_Box) (mercury__pretty_printer__V_22_22));
#line 315 "pretty_printer.m"
                    }
#line 315 "pretty_printer.m"
                    mercury__pretty_printer__V_70_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 315 "pretty_printer.m"
                    mercury__pretty_printer__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[5]);
#line 315 "pretty_printer.m"
                    mercury__pretty_printer__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 315 "pretty_printer.m"
                    mercury__pretty_printer__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[6]);
#line 315 "pretty_printer.m"
                    {
#line 315 "pretty_printer.m"
                      mercury__pretty_printer__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_66_66, 0) = ((MR_Box) (mercury__pretty_printer__V_67_67));
#line 315 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_66_66, 1) = ((MR_Box) (mercury__pretty_printer__V_68_68));
#line 315 "pretty_printer.m"
                    }
#line 315 "pretty_printer.m"
                    {
#line 315 "pretty_printer.m"
                      mercury__pretty_printer__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_63_63, 0) = ((MR_Box) (mercury__pretty_printer__V_64_64));
#line 315 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_63_63, 1) = ((MR_Box) (mercury__pretty_printer__V_66_66));
#line 315 "pretty_printer.m"
                    }
#line 315 "pretty_printer.m"
                    {
#line 315 "pretty_printer.m"
                      mercury__pretty_printer__V_21_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 315 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_21_21, 0) = ((MR_Box) (mercury__pretty_printer__V_63_63));
#line 315 "pretty_printer.m"
                    }
#line 723 "pretty_printer.m"
                    mercury__pretty_printer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[5]);
#line 724 "pretty_printer.m"
                    mercury__pretty_printer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 724 "pretty_printer.m"
                    mercury__pretty_printer__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[11]);
#line 723 "pretty_printer.m"
                    {
#line 723 "pretty_printer.m"
                      mercury__pretty_printer__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_20_20, 0) = ((MR_Box) (mercury__pretty_printer__V_21_21));
#line 723 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_20_20, 1) = ((MR_Box) (mercury__pretty_printer__V_27_27));
#line 723 "pretty_printer.m"
                    }
#line 723 "pretty_printer.m"
                    {
#line 723 "pretty_printer.m"
                      mercury__pretty_printer__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_17_17, 0) = ((MR_Box) (mercury__pretty_printer__V_18_18));
#line 723 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_17_17, 1) = ((MR_Box) (mercury__pretty_printer__V_20_20));
#line 723 "pretty_printer.m"
                    }
#line 722 "pretty_printer.m"
                    {
#line 722 "pretty_printer.m"
                      mercury__pretty_printer__Doc0_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 722 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc0_12, 0) = ((MR_Box) (mercury__pretty_printer__V_17_17));
#line 722 "pretty_printer.m"
                    }
#line 722 "pretty_printer.m"
                  }
#line 725 "pretty_printer.m"
                else
#line 726 "pretty_printer.m"
                  {
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_31_31;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_33_33;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_34_34;
#line 726 "pretty_printer.m"
                    MR_String mercury__pretty_printer__V_35_35;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_36_36;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_37_37;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_39_39;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_40_40;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_41_41;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_42_42;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_43_43;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_45_45;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_46_46;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_47_47;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_49_49;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_79_79;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_80_80;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_81_81;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_82_82;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_83_83;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_84_84;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_85_85;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_86_86;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_87_87;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_89_89;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_90_90;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_91_91;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_92_92;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_93_93;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_94_94;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_95_95;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_96_96;
#line 726 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_97_97;

#line 55 "term_io.opt"
                    {
#line 55 "term_io.opt"
                      mercury__pretty_printer__V_35_35 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__pretty_printer__Name_7, (MR_Integer) 1);
                    }
#line 728 "pretty_printer.m"
                    {
#line 728 "pretty_printer.m"
                      mercury__pretty_printer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 728 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_34_34, 0) = ((MR_Box) (mercury__pretty_printer__V_35_35));
#line 728 "pretty_printer.m"
                    }
#line 729 "pretty_printer.m"
                    mercury__pretty_printer__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[6]);
#line 729 "pretty_printer.m"
                    mercury__pretty_printer__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[4]);
#line 729 "pretty_printer.m"
                    {
#line 729 "pretty_printer.m"
                      mercury__pretty_printer__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 729 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 729 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_42_42, 1) = ((MR_Box) (mercury__pretty_printer__Args_8));
#line 729 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_42_42, 2) = ((MR_Box) (mercury__pretty_printer__V_43_43));
#line 729 "pretty_printer.m"
                    }
#line 729 "pretty_printer.m"
                    mercury__pretty_printer__V_45_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 729 "pretty_printer.m"
                    {
#line 729 "pretty_printer.m"
                      mercury__pretty_printer__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_41_41, 0) = ((MR_Box) (mercury__pretty_printer__V_42_42));
#line 729 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_41_41, 1) = ((MR_Box) (mercury__pretty_printer__V_45_45));
#line 729 "pretty_printer.m"
                    }
#line 315 "pretty_printer.m"
                    mercury__pretty_printer__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[0]);
#line 315 "pretty_printer.m"
                    mercury__pretty_printer__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[7]);
#line 315 "pretty_printer.m"
                    {
#line 315 "pretty_printer.m"
                      mercury__pretty_printer__V_83_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 315 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_83_83, 0) = ((MR_Box) (mercury__pretty_printer__V_41_41));
#line 315 "pretty_printer.m"
                    }
#line 315 "pretty_printer.m"
                    mercury__pretty_printer__V_86_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 315 "pretty_printer.m"
                    mercury__pretty_printer__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[5]);
#line 315 "pretty_printer.m"
                    mercury__pretty_printer__V_87_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 315 "pretty_printer.m"
                    mercury__pretty_printer__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[6]);
#line 315 "pretty_printer.m"
                    {
#line 315 "pretty_printer.m"
                      mercury__pretty_printer__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_82_82, 0) = ((MR_Box) (mercury__pretty_printer__V_83_83));
#line 315 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_82_82, 1) = ((MR_Box) (mercury__pretty_printer__V_84_84));
#line 315 "pretty_printer.m"
                    }
#line 315 "pretty_printer.m"
                    {
#line 315 "pretty_printer.m"
                      mercury__pretty_printer__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_79_79, 0) = ((MR_Box) (mercury__pretty_printer__V_80_80));
#line 315 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_79_79, 1) = ((MR_Box) (mercury__pretty_printer__V_82_82));
#line 315 "pretty_printer.m"
                    }
#line 315 "pretty_printer.m"
                    {
#line 315 "pretty_printer.m"
                      mercury__pretty_printer__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 315 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_40_40, 0) = ((MR_Box) (mercury__pretty_printer__V_79_79));
#line 315 "pretty_printer.m"
                    }
#line 729 "pretty_printer.m"
                    mercury__pretty_printer__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[7]);
#line 730 "pretty_printer.m"
                    mercury__pretty_printer__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 730 "pretty_printer.m"
                    mercury__pretty_printer__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[12]);
#line 729 "pretty_printer.m"
                    {
#line 729 "pretty_printer.m"
                      mercury__pretty_printer__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_39_39, 0) = ((MR_Box) (mercury__pretty_printer__V_40_40));
#line 729 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_39_39, 1) = ((MR_Box) (mercury__pretty_printer__V_46_46));
#line 729 "pretty_printer.m"
                    }
#line 729 "pretty_printer.m"
                    {
#line 729 "pretty_printer.m"
                      mercury__pretty_printer__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_36_36, 0) = ((MR_Box) (mercury__pretty_printer__V_37_37));
#line 729 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_36_36, 1) = ((MR_Box) (mercury__pretty_printer__V_39_39));
#line 729 "pretty_printer.m"
                    }
#line 728 "pretty_printer.m"
                    {
#line 728 "pretty_printer.m"
                      mercury__pretty_printer__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_33_33, 0) = ((MR_Box) (mercury__pretty_printer__V_34_34));
#line 728 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_33_33, 1) = ((MR_Box) (mercury__pretty_printer__V_36_36));
#line 728 "pretty_printer.m"
                    }
#line 727 "pretty_printer.m"
                    {
#line 727 "pretty_printer.m"
                      mercury__pretty_printer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_31_31, 0) = ((MR_Box) (mercury__pretty_printer__V_32_32));
#line 727 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_31_31, 1) = ((MR_Box) (mercury__pretty_printer__V_33_33));
#line 727 "pretty_printer.m"
                    }
#line 325 "pretty_printer.m"
                    mercury__pretty_printer__V_91_91 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 325 "pretty_printer.m"
                    mercury__pretty_printer__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[8]);
#line 325 "pretty_printer.m"
                    {
#line 325 "pretty_printer.m"
                      mercury__pretty_printer__V_93_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 325 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_93_93, 0) = ((MR_Box) (mercury__pretty_printer__V_31_31));
#line 325 "pretty_printer.m"
                    }
#line 325 "pretty_printer.m"
                    mercury__pretty_printer__V_96_96 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 325 "pretty_printer.m"
                    mercury__pretty_printer__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[9]);
#line 325 "pretty_printer.m"
                    mercury__pretty_printer__V_97_97 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 325 "pretty_printer.m"
                    mercury__pretty_printer__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[10]);
#line 325 "pretty_printer.m"
                    {
#line 325 "pretty_printer.m"
                      mercury__pretty_printer__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_92_92, 0) = ((MR_Box) (mercury__pretty_printer__V_93_93));
#line 325 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_92_92, 1) = ((MR_Box) (mercury__pretty_printer__V_94_94));
#line 325 "pretty_printer.m"
                    }
#line 325 "pretty_printer.m"
                    {
#line 325 "pretty_printer.m"
                      mercury__pretty_printer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 0) = ((MR_Box) (mercury__pretty_printer__V_90_90));
#line 325 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 1) = ((MR_Box) (mercury__pretty_printer__V_92_92));
#line 325 "pretty_printer.m"
                    }
#line 325 "pretty_printer.m"
                    {
#line 325 "pretty_printer.m"
                      mercury__pretty_printer__Doc0_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 325 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc0_12, 0) = ((MR_Box) (mercury__pretty_printer__V_89_89));
#line 325 "pretty_printer.m"
                    }
#line 726 "pretty_printer.m"
                  }
#line 725 "pretty_printer.m"
              }
#line 721 "pretty_printer.m"
          }
#line 719 "pretty_printer.m"
      }
#line 732 "pretty_printer.m"
    {
#line 732 "pretty_printer.m"
      mercury__pretty_printer__decrement_limit_2_p_0(mercury__pretty_printer__STATE_VARIABLE_Limit_0_14, mercury__pretty_printer__STATE_VARIABLE_Limit_15);
    }
#line 733 "pretty_printer.m"
    {
#line 733 "pretty_printer.m"
      *mercury__pretty_printer__Doc_9 = mercury__pretty_printer__set_formatting_limit_correctly_2_f_0(*mercury__pretty_printer__STATE_VARIABLE_Limit_15, mercury__pretty_printer__Doc0_12);
    }
#line 714 "pretty_printer.m"
  }
#line 710 "pretty_printer.m"
}

#line 684 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_format_list_5_p_0(
#line 684 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 684 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 684 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__3_3,
#line 684 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_4,
#line 684 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_5)
#line 684 "pretty_printer.m"
{
#line 687 "pretty_printer.m"
  {
#line 687 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 687 "pretty_printer.m"
    if ((mercury__pretty_printer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 687 "pretty_printer.m"
      {
#line 687 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 687 "pretty_printer.m"
        *mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__pretty_printer_scalar_common_5[2]);
#line 687 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_Limit_5 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_4;
#line 687 "pretty_printer.m"
      }
#line 687 "pretty_printer.m"
    else
#line 689 "pretty_printer.m"
      {
#line 689 "pretty_printer.m"
        MR_Word mercury__pretty_printer__Univ_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 689 "pretty_printer.m"
        MR_Word mercury__pretty_printer__Univs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));

#line 853 "pretty_printer.m"
        if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_4)) == (MR_mktag((MR_Integer) 0))))
#line 853 "pretty_printer.m"
          {
#line 853 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__N_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_4, (MR_Integer) 0)));

#line 854 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_38 <= (MR_Integer) 0);
#line 853 "pretty_printer.m"
          }
#line 853 "pretty_printer.m"
        else
#line 855 "pretty_printer.m"
          {
#line 855 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__N_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_4, (MR_Integer) 0)));

#line 856 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_40 <= (MR_Integer) 0);
#line 855 "pretty_printer.m"
          }
#line 692 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 1197 "pretty_printer.m"
          {
#line 1197 "pretty_printer.m"
            *mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1]);
#line 1197 "pretty_printer.m"
          }
#line 692 "pretty_printer.m"
        else
#line 696 "pretty_printer.m"
          if ((mercury__pretty_printer__Univs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 694 "pretty_printer.m"
            {
#line 694 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_32_32;
#line 694 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_33_33;
#line 694 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 694 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_35_35;
#line 694 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_36_36;
#line 694 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_37_37;
#line 694 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_44_44;
#line 694 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_45_45;
#line 694 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_46_46;
#line 694 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_47_47;
#line 694 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_48_48;
#line 694 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_49_49;
#line 694 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_50_50;
#line 694 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_51_51;
#line 694 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_52_52;

#line 695 "pretty_printer.m"
              {
#line 695 "pretty_printer.m"
                mercury__pretty_printer__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "pretty_printer.m"
                MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 695 "pretty_printer.m"
                MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_36_36, 1) = ((MR_Box) (mercury__pretty_printer__Univ_11));
#line 695 "pretty_printer.m"
              }
#line 695 "pretty_printer.m"
              mercury__pretty_printer__V_37_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 695 "pretty_printer.m"
              {
#line 695 "pretty_printer.m"
                mercury__pretty_printer__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_35_35, 0) = ((MR_Box) (mercury__pretty_printer__V_36_36));
#line 695 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_35_35, 1) = ((MR_Box) (mercury__pretty_printer__V_37_37));
#line 695 "pretty_printer.m"
              }
#line 695 "pretty_printer.m"
              {
#line 695 "pretty_printer.m"
                mercury__pretty_printer__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_33_33, 0) = ((MR_Box) (mercury__pretty_printer__V_34_34));
#line 695 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_33_33, 1) = ((MR_Box) (mercury__pretty_printer__V_35_35));
#line 695 "pretty_printer.m"
              }
#line 325 "pretty_printer.m"
              mercury__pretty_printer__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 325 "pretty_printer.m"
              mercury__pretty_printer__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[8]);
#line 325 "pretty_printer.m"
              {
#line 325 "pretty_printer.m"
                mercury__pretty_printer__V_48_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 325 "pretty_printer.m"
                MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_48_48, 0) = ((MR_Box) (mercury__pretty_printer__V_33_33));
#line 325 "pretty_printer.m"
              }
#line 325 "pretty_printer.m"
              mercury__pretty_printer__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 325 "pretty_printer.m"
              mercury__pretty_printer__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[9]);
#line 325 "pretty_printer.m"
              mercury__pretty_printer__V_52_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 325 "pretty_printer.m"
              mercury__pretty_printer__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[10]);
#line 325 "pretty_printer.m"
              {
#line 325 "pretty_printer.m"
                mercury__pretty_printer__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_47_47, 0) = ((MR_Box) (mercury__pretty_printer__V_48_48));
#line 325 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_47_47, 1) = ((MR_Box) (mercury__pretty_printer__V_49_49));
#line 325 "pretty_printer.m"
              }
#line 325 "pretty_printer.m"
              {
#line 325 "pretty_printer.m"
                mercury__pretty_printer__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_44_44, 0) = ((MR_Box) (mercury__pretty_printer__V_45_45));
#line 325 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_44_44, 1) = ((MR_Box) (mercury__pretty_printer__V_47_47));
#line 325 "pretty_printer.m"
              }
#line 325 "pretty_printer.m"
              {
#line 325 "pretty_printer.m"
                mercury__pretty_printer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 325 "pretty_printer.m"
                MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_32_32, 0) = ((MR_Box) (mercury__pretty_printer__V_44_44));
#line 325 "pretty_printer.m"
              }
#line 695 "pretty_printer.m"
              {
#line 695 "pretty_printer.m"
                *mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__format_arg_1_f_0(mercury__pretty_printer__V_32_32);
              }
#line 694 "pretty_printer.m"
            }
#line 696 "pretty_printer.m"
          else
#line 697 "pretty_printer.m"
            {
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_20_20;
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_21_21;
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_22_22;
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_23_23;
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_25_25;
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_26_26;
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_27_27;
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_28_28;
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_29_29;
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_30_30;
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_31_31;
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_54_54;
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_55_55;
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_56_56;
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_57_57;
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_58_58;
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_59_59;
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_60_60;
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_61_61;
#line 697 "pretty_printer.m"
              MR_Word mercury__pretty_printer__V_62_62;

#line 699 "pretty_printer.m"
              {
#line 699 "pretty_printer.m"
                mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "pretty_printer.m"
                MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 699 "pretty_printer.m"
                MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_26_26, 1) = ((MR_Box) (mercury__pretty_printer__Univ_11));
#line 699 "pretty_printer.m"
              }
#line 699 "pretty_printer.m"
              mercury__pretty_printer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 699 "pretty_printer.m"
              {
#line 699 "pretty_printer.m"
                mercury__pretty_printer__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_27_27, 0) = ((MR_Box) (mercury__pretty_printer__HeadVar__2_2));
#line 699 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_27_27, 1) = ((MR_Box) (mercury__pretty_printer__V_28_28));
#line 699 "pretty_printer.m"
              }
#line 699 "pretty_printer.m"
              {
#line 699 "pretty_printer.m"
                mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_25_25, 0) = ((MR_Box) (mercury__pretty_printer__V_26_26));
#line 699 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_25_25, 1) = ((MR_Box) (mercury__pretty_printer__V_27_27));
#line 699 "pretty_printer.m"
              }
#line 699 "pretty_printer.m"
              {
#line 699 "pretty_printer.m"
                mercury__pretty_printer__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_23_23, 0) = ((MR_Box) (mercury__pretty_printer__V_24_24));
#line 699 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_23_23, 1) = ((MR_Box) (mercury__pretty_printer__V_25_25));
#line 699 "pretty_printer.m"
              }
#line 325 "pretty_printer.m"
              mercury__pretty_printer__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 325 "pretty_printer.m"
              mercury__pretty_printer__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[8]);
#line 325 "pretty_printer.m"
              {
#line 325 "pretty_printer.m"
                mercury__pretty_printer__V_58_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 325 "pretty_printer.m"
                MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_58_58, 0) = ((MR_Box) (mercury__pretty_printer__V_23_23));
#line 325 "pretty_printer.m"
              }
#line 325 "pretty_printer.m"
              mercury__pretty_printer__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 325 "pretty_printer.m"
              mercury__pretty_printer__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[9]);
#line 325 "pretty_printer.m"
              mercury__pretty_printer__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 325 "pretty_printer.m"
              mercury__pretty_printer__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[10]);
#line 325 "pretty_printer.m"
              {
#line 325 "pretty_printer.m"
                mercury__pretty_printer__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_57_57, 0) = ((MR_Box) (mercury__pretty_printer__V_58_58));
#line 325 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_57_57, 1) = ((MR_Box) (mercury__pretty_printer__V_59_59));
#line 325 "pretty_printer.m"
              }
#line 325 "pretty_printer.m"
              {
#line 325 "pretty_printer.m"
                mercury__pretty_printer__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_54_54, 0) = ((MR_Box) (mercury__pretty_printer__V_55_55));
#line 325 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_54_54, 1) = ((MR_Box) (mercury__pretty_printer__V_57_57));
#line 325 "pretty_printer.m"
              }
#line 325 "pretty_printer.m"
              {
#line 325 "pretty_printer.m"
                mercury__pretty_printer__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 325 "pretty_printer.m"
                MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_22_22, 0) = ((MR_Box) (mercury__pretty_printer__V_54_54));
#line 325 "pretty_printer.m"
              }
#line 699 "pretty_printer.m"
              {
#line 699 "pretty_printer.m"
                mercury__pretty_printer__V_21_21 = mercury__pretty_printer__format_arg_1_f_0(mercury__pretty_printer__V_22_22);
              }
#line 700 "pretty_printer.m"
              {
#line 700 "pretty_printer.m"
                mercury__pretty_printer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 700 "pretty_printer.m"
                MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 700 "pretty_printer.m"
                MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_30_30, 1) = ((MR_Box) (mercury__pretty_printer__Univs_12));
#line 700 "pretty_printer.m"
                MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_30_30, 2) = ((MR_Box) (mercury__pretty_printer__HeadVar__2_2));
#line 700 "pretty_printer.m"
              }
#line 701 "pretty_printer.m"
              mercury__pretty_printer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 701 "pretty_printer.m"
              {
#line 701 "pretty_printer.m"
                mercury__pretty_printer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 0) = ((MR_Box) (mercury__pretty_printer__V_30_30));
#line 701 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 1) = ((MR_Box) (mercury__pretty_printer__V_31_31));
#line 701 "pretty_printer.m"
              }
#line 699 "pretty_printer.m"
              {
#line 699 "pretty_printer.m"
                mercury__pretty_printer__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_20_20, 0) = ((MR_Box) (mercury__pretty_printer__V_21_21));
#line 699 "pretty_printer.m"
                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_20_20, 1) = ((MR_Box) (mercury__pretty_printer__V_29_29));
#line 699 "pretty_printer.m"
              }
#line 698 "pretty_printer.m"
              {
#line 698 "pretty_printer.m"
                MR_Word base;
#line 698 "pretty_printer.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 698 "pretty_printer.m"
                *mercury__pretty_printer__HeadVar__3_3 = base;
#line 698 "pretty_printer.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__pretty_printer__V_20_20));
#line 698 "pretty_printer.m"
              }
#line 697 "pretty_printer.m"
            }
#line 689 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_Limit_5 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_4;
#line 689 "pretty_printer.m"
      }
#line 687 "pretty_printer.m"
  }
#line 684 "pretty_printer.m"
}

#line 656 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_pp_7_p_1(
#line 656 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Canonicalize_8,
#line 656 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap_9,
#line 656 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_10,
#line 656 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_11,
#line 656 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_24,
#line 656 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_25,
#line 656 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_13)
#line 656 "pretty_printer.m"
{
#line 664 "pretty_printer.m"
  {
#line 664 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 853 "pretty_printer.m"
    if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_24)) == (MR_mktag((MR_Integer) 0))))
#line 853 "pretty_printer.m"
      {
#line 853 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, (MR_Integer) 0)));

#line 854 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_35 <= (MR_Integer) 0);
#line 853 "pretty_printer.m"
      }
#line 853 "pretty_printer.m"
    else
#line 855 "pretty_printer.m"
      {
#line 855 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, (MR_Integer) 0)));

#line 856 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_37 <= (MR_Integer) 0);
#line 855 "pretty_printer.m"
      }
#line 664 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 663 "pretty_printer.m"
      {
#line 1197 "pretty_printer.m"
        *mercury__pretty_printer__Doc_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1]);
#line 663 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_Limit_25 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_24;
#line 663 "pretty_printer.m"
      }
#line 664 "pretty_printer.m"
    else
#line 675 "pretty_printer.m"
      {
#line 675 "pretty_printer.m"
        MR_Word mercury__pretty_printer__ArgTypeDescs_16;
#line 675 "pretty_printer.m"
        MR_Word mercury__pretty_printer__Formatter_20;
#line 665 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 0)));
#line 665 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_32_32;
#line 665 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_13_61;
#line 665 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_14_62;
#line 665 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_15_63;
#line 665 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_17_65;
#line 665 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorDesc_15;
#line 665 "pretty_printer.m"
        MR_String mercury__pretty_printer__ModuleName_17;
#line 665 "pretty_printer.m"
        MR_String mercury__pretty_printer__TypeName_18;
#line 665 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__Arity_19;
#line 665 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 665 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_59_59;
#line 665 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_60_60;
#line 12 "univ.opt"
        MR_Box mercury__pretty_printer__Value_14 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 1));
#line 58 "type_desc.opt"
        MR_Box mercury__pretty_printer__V_34_34;
#line 144 "type_desc.opt"
        MR_String mercury__pretty_printer___Name_5_43;
#line 144 "type_desc.opt"
        MR_Integer mercury__pretty_printer___Arity_6_44;
#line 144 "type_desc.opt"
        MR_String mercury__pretty_printer___ModuleName_5_47;
#line 144 "type_desc.opt"
        MR_Integer mercury__pretty_printer___Arity_6_48;
#line 41 "map.opt"
        MR_Box mercury__pretty_printer__conv0_V_59_59;
#line 41 "map.opt"
        MR_Box mercury__pretty_printer__conv1_V_60_60;
#line 41 "map.opt"
        MR_Box mercury__pretty_printer__conv2_Formatter_20;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pretty_printer__TypeInfo_31_31 ;
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
#line 11168 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_26_26  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_1

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pretty_printer__V_26_26 ;
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
#line 11198 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeCtorDesc_15  = TypeCtorDesc;
	 mercury__pretty_printer__ArgTypeDescs_16  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 144 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_1

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__pretty_printer__TypeCtorDesc_15 ;
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
#line 11247 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__ModuleName_17  = TypeCtorModuleName;
	 mercury__pretty_printer___Name_5_43  = TypeCtorName;
	 mercury__pretty_printer___Arity_6_44  = TypeCtorArity;
#line 144 "type_desc.opt"
}
#line 144 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_1

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__pretty_printer__TypeCtorDesc_15 ;
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
#line 11297 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer___ModuleName_5_47  = TypeCtorModuleName;
	 mercury__pretty_printer__TypeName_18  = TypeCtorName;
	 mercury__pretty_printer___Arity_6_48  = TypeCtorArity;
#line 144 "type_desc.opt"
}
#line 11306 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_32_32 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 78 "list.opt"
        {
#line 78 "list.opt"
          mercury__list__length_2_3_p_0(mercury__pretty_printer__TypeCtorInfo_32_32, mercury__pretty_printer__ArgTypeDescs_16, (MR_Integer) 0, &mercury__pretty_printer__Arity_19);
        }
#line 11313 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_13_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 11315 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_14_62 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_13_61, mercury__pretty_printer__TypeInfo_14_62, mercury__pretty_printer__FMap_9, ((MR_Box) (mercury__pretty_printer__ModuleName_17)), &mercury__pretty_printer__conv0_V_59_59);
        }
#line 41 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
          {
#line 41 "map.opt"
            mercury__pretty_printer__V_59_59 = ((MR_Word) mercury__pretty_printer__conv0_V_59_59);
#line 41 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
          }
#line 665 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 665 "pretty_printer.m"
          {
#line 11336 "pretty_printer.c"
            mercury__pretty_printer__TypeInfo_15_63 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 41 "map.opt"
            {
#line 41 "map.opt"
              mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_13_61, mercury__pretty_printer__TypeInfo_15_63, mercury__pretty_printer__V_59_59, ((MR_Box) (mercury__pretty_printer__TypeName_18)), &mercury__pretty_printer__conv1_V_60_60);
            }
#line 41 "map.opt"
            if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
              {
#line 41 "map.opt"
                mercury__pretty_printer__V_60_60 = ((MR_Word) mercury__pretty_printer__conv1_V_60_60);
#line 41 "map.opt"
                mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
              }
#line 665 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 665 "pretty_printer.m"
              {
#line 11357 "pretty_printer.c"
                mercury__pretty_printer__TypeInfo_17_65 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 41 "map.opt"
                {
#line 41 "map.opt"
                  mercury__pretty_printer__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__pretty_printer__TypeInfo_17_65, mercury__pretty_printer__V_60_60, mercury__pretty_printer__Arity_19, &mercury__pretty_printer__conv2_Formatter_20);
                }
#line 41 "map.opt"
                if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
                  {
#line 41 "map.opt"
                    mercury__pretty_printer__Formatter_20 = ((MR_Word) mercury__pretty_printer__conv2_Formatter_20);
#line 41 "map.opt"
                    mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
                  }
#line 665 "pretty_printer.m"
              }
#line 665 "pretty_printer.m"
          }
#line 675 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 672 "pretty_printer.m"
          {
#line 672 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_28_28;
#line 674 "pretty_printer.m"
            MR_Box MR_CALL (* mercury__pretty_printer__func_3)(MR_Box, MR_Box, MR_Box);
#line 674 "pretty_printer.m"
            MR_Box mercury__pretty_printer__conv4_V_28_28;

#line 672 "pretty_printer.m"
            {
#line 672 "pretty_printer.m"
              mercury__pretty_printer__decrement_limit_2_p_0(mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, mercury__pretty_printer__STATE_VARIABLE_Limit_25);
            }
#line 674 "pretty_printer.m"
            mercury__pretty_printer__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Formatter_20, (MR_Integer) 1)));
#line 674 "pretty_printer.m"
            {
#line 674 "pretty_printer.m"
              mercury__pretty_printer__conv4_V_28_28 = mercury__pretty_printer__func_3(((MR_Box) mercury__pretty_printer__Formatter_20), ((MR_Box) (mercury__pretty_printer__Univ_10)), ((MR_Box) (mercury__pretty_printer__ArgTypeDescs_16)));
            }
#line 674 "pretty_printer.m"
            mercury__pretty_printer__V_28_28 = ((MR_Word) mercury__pretty_printer__conv4_V_28_28);
#line 673 "pretty_printer.m"
            {
#line 673 "pretty_printer.m"
              *mercury__pretty_printer__Doc_11 = mercury__pretty_printer__set_formatting_limit_correctly_2_f_0(*mercury__pretty_printer__STATE_VARIABLE_Limit_25, mercury__pretty_printer__V_28_28);
            }
#line 672 "pretty_printer.m"
          }
#line 675 "pretty_printer.m"
        else
#line 676 "pretty_printer.m"
          {
#line 676 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 0)));
#line 676 "pretty_printer.m"
            MR_String mercury__pretty_printer__Name_21;
#line 676 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Args_23;
#line 676 "pretty_printer.m"
            MR_Box mercury__pretty_printer__V_29_29 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 1));
#line 676 "pretty_printer.m"
            MR_Integer mercury__pretty_printer___Arity_22;

#line 676 "pretty_printer.m"
            {
#line 676 "pretty_printer.m"
              mercury__deconstruct__deconstruct_5_p_2(mercury__pretty_printer__TypeInfo_33_33, mercury__pretty_printer__V_29_29, mercury__pretty_printer__Canonicalize_8, &mercury__pretty_printer__Name_21, &mercury__pretty_printer___Arity_22, &mercury__pretty_printer__Args_23);
            }
#line 677 "pretty_printer.m"
            {
#line 677 "pretty_printer.m"
              mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_21, mercury__pretty_printer__Args_23, mercury__pretty_printer__Doc_11, mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, mercury__pretty_printer__STATE_VARIABLE_Limit_25, mercury__pretty_printer__CurrentPri_13);
#line 677 "pretty_printer.m"
              return;
            }
#line 676 "pretty_printer.m"
          }
#line 675 "pretty_printer.m"
      }
#line 664 "pretty_printer.m"
  }
#line 656 "pretty_printer.m"
}

#line 654 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_pp_7_p_0(
#line 654 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Canonicalize_8,
#line 654 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap_9,
#line 654 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_10,
#line 654 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_11,
#line 654 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_24,
#line 654 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_25,
#line 654 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_13)
#line 654 "pretty_printer.m"
{
#line 664 "pretty_printer.m"
  {
#line 664 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 853 "pretty_printer.m"
    if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_24)) == (MR_mktag((MR_Integer) 0))))
#line 853 "pretty_printer.m"
      {
#line 853 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, (MR_Integer) 0)));

#line 854 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_35 <= (MR_Integer) 0);
#line 853 "pretty_printer.m"
      }
#line 853 "pretty_printer.m"
    else
#line 855 "pretty_printer.m"
      {
#line 855 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, (MR_Integer) 0)));

#line 856 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_37 <= (MR_Integer) 0);
#line 855 "pretty_printer.m"
      }
#line 664 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 663 "pretty_printer.m"
      {
#line 1197 "pretty_printer.m"
        *mercury__pretty_printer__Doc_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1]);
#line 663 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_Limit_25 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_24;
#line 663 "pretty_printer.m"
      }
#line 664 "pretty_printer.m"
    else
#line 675 "pretty_printer.m"
      {
#line 675 "pretty_printer.m"
        MR_Word mercury__pretty_printer__ArgTypeDescs_16;
#line 675 "pretty_printer.m"
        MR_Word mercury__pretty_printer__Formatter_20;
#line 665 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 0)));
#line 665 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_32_32;
#line 665 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_13_61;
#line 665 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_14_62;
#line 665 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_15_63;
#line 665 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_17_65;
#line 665 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorDesc_15;
#line 665 "pretty_printer.m"
        MR_String mercury__pretty_printer__ModuleName_17;
#line 665 "pretty_printer.m"
        MR_String mercury__pretty_printer__TypeName_18;
#line 665 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__Arity_19;
#line 665 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 665 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_59_59;
#line 665 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_60_60;
#line 12 "univ.opt"
        MR_Box mercury__pretty_printer__Value_14 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 1));
#line 58 "type_desc.opt"
        MR_Box mercury__pretty_printer__V_34_34;
#line 144 "type_desc.opt"
        MR_String mercury__pretty_printer___Name_5_43;
#line 144 "type_desc.opt"
        MR_Integer mercury__pretty_printer___Arity_6_44;
#line 144 "type_desc.opt"
        MR_String mercury__pretty_printer___ModuleName_5_47;
#line 144 "type_desc.opt"
        MR_Integer mercury__pretty_printer___Arity_6_48;
#line 41 "map.opt"
        MR_Box mercury__pretty_printer__conv0_V_59_59;
#line 41 "map.opt"
        MR_Box mercury__pretty_printer__conv1_V_60_60;
#line 41 "map.opt"
        MR_Box mercury__pretty_printer__conv2_Formatter_20;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pretty_printer__TypeInfo_31_31 ;
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
#line 11581 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_26_26  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pretty_printer__V_26_26 ;
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
#line 11611 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeCtorDesc_15  = TypeCtorDesc;
	 mercury__pretty_printer__ArgTypeDescs_16  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 144 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__pretty_printer__TypeCtorDesc_15 ;
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
#line 11660 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__ModuleName_17  = TypeCtorModuleName;
	 mercury__pretty_printer___Name_5_43  = TypeCtorName;
	 mercury__pretty_printer___Arity_6_44  = TypeCtorArity;
#line 144 "type_desc.opt"
}
#line 144 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__pretty_printer__TypeCtorDesc_15 ;
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
#line 11710 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer___ModuleName_5_47  = TypeCtorModuleName;
	 mercury__pretty_printer__TypeName_18  = TypeCtorName;
	 mercury__pretty_printer___Arity_6_48  = TypeCtorArity;
#line 144 "type_desc.opt"
}
#line 11719 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_32_32 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 78 "list.opt"
        {
#line 78 "list.opt"
          mercury__list__length_2_3_p_0(mercury__pretty_printer__TypeCtorInfo_32_32, mercury__pretty_printer__ArgTypeDescs_16, (MR_Integer) 0, &mercury__pretty_printer__Arity_19);
        }
#line 11726 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_13_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 11728 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_14_62 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_13_61, mercury__pretty_printer__TypeInfo_14_62, mercury__pretty_printer__FMap_9, ((MR_Box) (mercury__pretty_printer__ModuleName_17)), &mercury__pretty_printer__conv0_V_59_59);
        }
#line 41 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
          {
#line 41 "map.opt"
            mercury__pretty_printer__V_59_59 = ((MR_Word) mercury__pretty_printer__conv0_V_59_59);
#line 41 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
          }
#line 665 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 665 "pretty_printer.m"
          {
#line 11749 "pretty_printer.c"
            mercury__pretty_printer__TypeInfo_15_63 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 41 "map.opt"
            {
#line 41 "map.opt"
              mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_13_61, mercury__pretty_printer__TypeInfo_15_63, mercury__pretty_printer__V_59_59, ((MR_Box) (mercury__pretty_printer__TypeName_18)), &mercury__pretty_printer__conv1_V_60_60);
            }
#line 41 "map.opt"
            if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
              {
#line 41 "map.opt"
                mercury__pretty_printer__V_60_60 = ((MR_Word) mercury__pretty_printer__conv1_V_60_60);
#line 41 "map.opt"
                mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
              }
#line 665 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 665 "pretty_printer.m"
              {
#line 11770 "pretty_printer.c"
                mercury__pretty_printer__TypeInfo_17_65 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 41 "map.opt"
                {
#line 41 "map.opt"
                  mercury__pretty_printer__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__pretty_printer__TypeInfo_17_65, mercury__pretty_printer__V_60_60, mercury__pretty_printer__Arity_19, &mercury__pretty_printer__conv2_Formatter_20);
                }
#line 41 "map.opt"
                if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
                  {
#line 41 "map.opt"
                    mercury__pretty_printer__Formatter_20 = ((MR_Word) mercury__pretty_printer__conv2_Formatter_20);
#line 41 "map.opt"
                    mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
                  }
#line 665 "pretty_printer.m"
              }
#line 665 "pretty_printer.m"
          }
#line 675 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 672 "pretty_printer.m"
          {
#line 672 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_28_28;
#line 674 "pretty_printer.m"
            MR_Box MR_CALL (* mercury__pretty_printer__func_3)(MR_Box, MR_Box, MR_Box);
#line 674 "pretty_printer.m"
            MR_Box mercury__pretty_printer__conv4_V_28_28;

#line 672 "pretty_printer.m"
            {
#line 672 "pretty_printer.m"
              mercury__pretty_printer__decrement_limit_2_p_0(mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, mercury__pretty_printer__STATE_VARIABLE_Limit_25);
            }
#line 674 "pretty_printer.m"
            mercury__pretty_printer__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Formatter_20, (MR_Integer) 1)));
#line 674 "pretty_printer.m"
            {
#line 674 "pretty_printer.m"
              mercury__pretty_printer__conv4_V_28_28 = mercury__pretty_printer__func_3(((MR_Box) mercury__pretty_printer__Formatter_20), ((MR_Box) (mercury__pretty_printer__Univ_10)), ((MR_Box) (mercury__pretty_printer__ArgTypeDescs_16)));
            }
#line 674 "pretty_printer.m"
            mercury__pretty_printer__V_28_28 = ((MR_Word) mercury__pretty_printer__conv4_V_28_28);
#line 673 "pretty_printer.m"
            {
#line 673 "pretty_printer.m"
              *mercury__pretty_printer__Doc_11 = mercury__pretty_printer__set_formatting_limit_correctly_2_f_0(*mercury__pretty_printer__STATE_VARIABLE_Limit_25, mercury__pretty_printer__V_28_28);
            }
#line 672 "pretty_printer.m"
          }
#line 675 "pretty_printer.m"
        else
#line 676 "pretty_printer.m"
          {
#line 676 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 0)));
#line 676 "pretty_printer.m"
            MR_String mercury__pretty_printer__Name_21;
#line 676 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Args_23;
#line 676 "pretty_printer.m"
            MR_Box mercury__pretty_printer__V_29_29 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 1));
#line 676 "pretty_printer.m"
            MR_Integer mercury__pretty_printer___Arity_22;

#line 676 "pretty_printer.m"
            {
#line 676 "pretty_printer.m"
              mercury__deconstruct__deconstruct_5_p_1(mercury__pretty_printer__TypeInfo_33_33, mercury__pretty_printer__V_29_29, mercury__pretty_printer__Canonicalize_8, &mercury__pretty_printer__Name_21, &mercury__pretty_printer___Arity_22, &mercury__pretty_printer__Args_23);
            }
#line 677 "pretty_printer.m"
            {
#line 677 "pretty_printer.m"
              mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_21, mercury__pretty_printer__Args_23, mercury__pretty_printer__Doc_11, mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, mercury__pretty_printer__STATE_VARIABLE_Limit_25, mercury__pretty_printer__CurrentPri_13);
#line 677 "pretty_printer.m"
              return;
            }
#line 676 "pretty_printer.m"
          }
#line 675 "pretty_printer.m"
      }
#line 664 "pretty_printer.m"
  }
#line 654 "pretty_printer.m"
}

#line 637 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__output_indentation_6_p_0(
#line 637 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_28,
#line 637 "pretty_printer.m"
  MR_Box mercury__pretty_printer__HeadVar__1_1,
#line 637 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 637 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_3,
#line 637 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_4,
#line 637 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_5,
#line 637 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_6)
#line 637 "pretty_printer.m"
{
#line 640 "pretty_printer.m"
  {
#line 640 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 640 "pretty_printer.m"
    if ((mercury__pretty_printer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 640 "pretty_printer.m"
      {
#line 640 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_IO_6 = mercury__pretty_printer__STATE_VARIABLE_IO_0_5;
#line 640 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_4 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_3;
#line 640 "pretty_printer.m"
      }
#line 640 "pretty_printer.m"
    else
#line 641 "pretty_printer.m"
      {
#line 641 "pretty_printer.m"
        MR_String mercury__pretty_printer__Indent_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 641 "pretty_printer.m"
        MR_Word mercury__pretty_printer__Indents_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 641 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_23_23;
#line 641 "pretty_printer.m"
        MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_24_24;
#line 641 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_27_27;
#line 11907 "pretty_printer.c"
        void MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 642 "pretty_printer.m"
        {
#line 642 "pretty_printer.m"
          mercury__pretty_printer__output_indentation_6_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_28, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__Indents_16, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_3, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_23_23, mercury__pretty_printer__STATE_VARIABLE_IO_0_5, &mercury__pretty_printer__STATE_VARIABLE_IO_24_24);
        }
#line 11915 "pretty_printer.c"
        mercury__pretty_printer__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_writer_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11917 "pretty_printer.c"
        {
#line 11919 "pretty_printer.c"
          mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_writer_28), mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__Indent_15)), mercury__pretty_printer__STATE_VARIABLE_IO_24_24, mercury__pretty_printer__STATE_VARIABLE_IO_6);
        }
#line 250 "string.opt"
        {
#line 250 "string.opt"
          mercury__string__count_codepoints_2_p_0(mercury__pretty_printer__Indent_15, &mercury__pretty_printer__V_27_27);
        }
#line 644 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_4 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_23_23 - mercury__pretty_printer__V_27_27);
#line 641 "pretty_printer.m"
      }
#line 640 "pretty_printer.m"
  }
#line 637 "pretty_printer.m"
}

#line 627 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__format_nl_8_p_0(
#line 627 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_24,
#line 627 "pretty_printer.m"
  MR_Box mercury__pretty_printer__Stream_9,
#line 627 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__LineWidth_10,
#line 627 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Indents_11,
#line 627 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__RemainingWidth_12,
#line 627 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_15,
#line 627 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_16,
#line 627 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_17,
#line 627 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_18)
#line 627 "pretty_printer.m"
{
#line 631 "pretty_printer.m"
  {
#line 631 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 631 "pretty_printer.m"
    MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_20_20;
#line 11965 "pretty_printer.c"
    void MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_writer_24, (MR_Integer) 0)), (MR_Integer) 5)));

#line 11968 "pretty_printer.c"
    {
#line 11970 "pretty_printer.c"
      mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_writer_24), mercury__pretty_printer__Stream_9, ((MR_Box) ((MR_String) "\n")), mercury__pretty_printer__STATE_VARIABLE_IO_0_17, &mercury__pretty_printer__STATE_VARIABLE_IO_20_20);
    }
#line 633 "pretty_printer.m"
    {
#line 633 "pretty_printer.m"
      mercury__pretty_printer__output_indentation_6_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_24, mercury__pretty_printer__Stream_9, mercury__pretty_printer__Indents_11, mercury__pretty_printer__LineWidth_10, mercury__pretty_printer__RemainingWidth_12, mercury__pretty_printer__STATE_VARIABLE_IO_20_20, mercury__pretty_printer__STATE_VARIABLE_IO_18);
    }
#line 634 "pretty_printer.m"
    *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_16 = (mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_15 - (MR_Integer) 1);
#line 631 "pretty_printer.m"
  }
#line 627 "pretty_printer.m"
}

#line 528 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_docs_11_p_1(
#line 528 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 528 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 528 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 528 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__4_4,
#line 528 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__5_5,
#line 528 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_6,
#line 528 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_7,
#line 528 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_8,
#line 528 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_9,
#line 528 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10,
#line 528 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11)
#line 528 "pretty_printer.m"
{
#line 531 "pretty_printer.m"
  while (MR_TRUE)
#line 531 "pretty_printer.m"
    {
#line 531 "pretty_printer.m"
      /* tailcall optimized into a loop */
#line 531 "pretty_printer.m"
      {
#line 531 "pretty_printer.m"
        MR_bool mercury__pretty_printer__succeeded;

#line 531 "pretty_printer.m"
        if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 531 "pretty_printer.m"
          {
#line 531 "pretty_printer.m"
            *mercury__pretty_printer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 532 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
#line 532 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
#line 532 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
#line 531 "pretty_printer.m"
          }
#line 531 "pretty_printer.m"
        else
#line 534 "pretty_printer.m"
          {
#line 534 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Doc_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));
#line 534 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Docs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));

#line 537 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 <= (MR_Integer) 0);
#line 537 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 537 "pretty_printer.m"
              {
#line 537 "pretty_printer.m"
                if ((mercury__pretty_printer__Doc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 537 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = MR_TRUE;
#line 537 "pretty_printer.m"
                else
#line 537 "pretty_printer.m"
                  if ((mercury__pretty_printer__Doc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 537 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = MR_TRUE;
#line 537 "pretty_printer.m"
                  else
#line 537 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = MR_FALSE;
#line 537 "pretty_printer.m"
              }
#line 540 "pretty_printer.m"
            if (!(mercury__pretty_printer__succeeded))
#line 541 "pretty_printer.m"
              {
#line 541 "pretty_printer.m"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10 < (MR_Integer) 0);
#line 541 "pretty_printer.m"
              }
#line 547 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 546 "pretty_printer.m"
              {
#line 546 "pretty_printer.m"
                *mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__3_3;
#line 546 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
#line 546 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
#line 546 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
#line 546 "pretty_printer.m"
              }
#line 547 "pretty_printer.m"
            else
#line 555 "pretty_printer.m"
              if (((MR_tag((MR_Word) mercury__pretty_printer__Doc_26)) == (MR_mktag((MR_Integer) 2))))
#line 565 "pretty_printer.m"
                {
#line 565 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__TypeCtorInfo_129_129 = (MR_Word) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0;
#line 565 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__V_103_103;
#line 565 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__Docs1_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc_26, (MR_Integer) 0)));

#line 566 "pretty_printer.m"
                  {
#line 566 "pretty_printer.m"
                    mercury__pretty_printer__V_103_103 = mercury__list__f_43_43_2_f_0(mercury__pretty_printer__TypeCtorInfo_129_129, mercury__pretty_printer__Docs1_119, mercury__pretty_printer__Docs0_27);
                  }
#line 566 "pretty_printer.m"
                  /* direct tailcall eliminated */
#line 566 "pretty_printer.m"
                  {
#line 566 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_103_103;

#line 566 "pretty_printer.m"
                    mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 566 "pretty_printer.m"
                  }
#line 566 "pretty_printer.m"
                  continue;
#line 565 "pretty_printer.m"
                }
#line 555 "pretty_printer.m"
              else
#line 555 "pretty_printer.m"
                if ((((mercury__pretty_printer__Doc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))) || ((mercury__pretty_printer__Doc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))))
#line 556 "pretty_printer.m"
                  {
#line 557 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 <= (MR_Integer) 0);
#line 556 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 558 "pretty_printer.m"
                      {
#line 558 "pretty_printer.m"
                        *mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__3_3;
#line 558 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
#line 558 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
#line 558 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
#line 558 "pretty_printer.m"
                      }
#line 556 "pretty_printer.m"
                    else
#line 560 "pretty_printer.m"
                      {
#line 560 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Docs1_116;

#line 561 "pretty_printer.m"
                        {
#line 561 "pretty_printer.m"
                          mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_116, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                        }
#line 560 "pretty_printer.m"
                        {
#line 560 "pretty_printer.m"
                          MR_Word base;
#line 560 "pretty_printer.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "pretty_printer.m"
                          *mercury__pretty_printer__HeadVar__4_4 = base;
#line 560 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 560 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_116));
#line 560 "pretty_printer.m"
                        }
#line 560 "pretty_printer.m"
                      }
#line 556 "pretty_printer.m"
                  }
#line 555 "pretty_printer.m"
                else
#line 555 "pretty_printer.m"
                  if (((MR_tag((MR_Word) mercury__pretty_printer__Doc_26)) == (MR_mktag((MR_Integer) 1))))
#line 549 "pretty_printer.m"
                    {
#line 549 "pretty_printer.m"
                      MR_String mercury__pretty_printer__String_33 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc_26, (MR_Integer) 0)));
#line 549 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__Docs1_34;
#line 549 "pretty_printer.m"
                      MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111;
#line 549 "pretty_printer.m"
                      MR_Integer mercury__pretty_printer__V_112_112;

#line 551 "pretty_printer.m"
                      {
#line 551 "pretty_printer.m"
                        mercury__pretty_printer__V_112_112 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__String_33);
                      }
#line 550 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10 - mercury__pretty_printer__V_112_112);
#line 553 "pretty_printer.m"
                      {
#line 553 "pretty_printer.m"
                        mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_34, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                      }
#line 552 "pretty_printer.m"
                      {
#line 552 "pretty_printer.m"
                        MR_Word base;
#line 552 "pretty_printer.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "pretty_printer.m"
                        *mercury__pretty_printer__HeadVar__4_4 = base;
#line 552 "pretty_printer.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 552 "pretty_printer.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_34));
#line 552 "pretty_printer.m"
                      }
#line 549 "pretty_printer.m"
                    }
#line 555 "pretty_printer.m"
                  else
#line 555 "pretty_printer.m"
                    if (((((MR_tag((MR_Word) mercury__pretty_printer__Doc_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 574 "pretty_printer.m"
                      {
#line 574 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Univs_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 574 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Sep_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 2)));
#line 574 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_93_93;
#line 574 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_94_94;
#line 574 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Doc1_120;

#line 575 "pretty_printer.m"
                        {
#line 575 "pretty_printer.m"
                          mercury__pretty_printer__expand_format_list_5_p_0(mercury__pretty_printer__Univs_37, mercury__pretty_printer__Sep_38, &mercury__pretty_printer__Doc1_120, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_93_93);
                        }
#line 576 "pretty_printer.m"
                        {
#line 576 "pretty_printer.m"
                          mercury__pretty_printer__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_120));
#line 576 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 576 "pretty_printer.m"
                        }
#line 576 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 576 "pretty_printer.m"
                        {
#line 576 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_94_94;
#line 576 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_93_93;

#line 576 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 576 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 576 "pretty_printer.m"
                        }
#line 576 "pretty_printer.m"
                        continue;
#line 574 "pretty_printer.m"
                      }
#line 555 "pretty_printer.m"
                    else
#line 555 "pretty_printer.m"
                      if (((((MR_tag((MR_Word) mercury__pretty_printer__Doc_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 584 "pretty_printer.m"
                        {
#line 584 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Susp_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 584 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_83_83;
#line 584 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__V_84_84;
#line 584 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Doc1_123;

#line 585 "pretty_printer.m"
                          {
#line 585 "pretty_printer.m"
                            mercury__pretty_printer__expand_format_susp_4_p_0(mercury__pretty_printer__Susp_40, &mercury__pretty_printer__Doc1_123, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_83_83);
                          }
#line 586 "pretty_printer.m"
                          {
#line 586 "pretty_printer.m"
                            mercury__pretty_printer__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_84_84, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_123));
#line 586 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_84_84, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 586 "pretty_printer.m"
                          }
#line 586 "pretty_printer.m"
                          /* direct tailcall eliminated */
#line 586 "pretty_printer.m"
                          {
#line 586 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_84_84;
#line 586 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_83_83;

#line 586 "pretty_printer.m"
                            mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 586 "pretty_printer.m"
                            mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 586 "pretty_printer.m"
                          }
#line 586 "pretty_printer.m"
                          continue;
#line 584 "pretty_printer.m"
                        }
#line 555 "pretty_printer.m"
                      else
#line 555 "pretty_printer.m"
                        if (((((MR_tag((MR_Word) mercury__pretty_printer__Doc_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 579 "pretty_printer.m"
                          {
#line 579 "pretty_printer.m"
                            MR_String mercury__pretty_printer__Name_39 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 579 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_88_88;
#line 579 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__V_89_89;
#line 579 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__Doc1_121;
#line 579 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__Univs_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 2)));

#line 580 "pretty_printer.m"
                            {
#line 580 "pretty_printer.m"
                              mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_39, mercury__pretty_printer__Univs_122, &mercury__pretty_printer__Doc1_121, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_88_88, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8);
                            }
#line 581 "pretty_printer.m"
                            {
#line 581 "pretty_printer.m"
                              mercury__pretty_printer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "pretty_printer.m"
                              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_121));
#line 581 "pretty_printer.m"
                              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 581 "pretty_printer.m"
                            }
#line 581 "pretty_printer.m"
                            /* direct tailcall eliminated */
#line 581 "pretty_printer.m"
                            {
#line 581 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_89_89;
#line 581 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_88_88;

#line 581 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 581 "pretty_printer.m"
                              mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 581 "pretty_printer.m"
                            }
#line 581 "pretty_printer.m"
                            continue;
#line 579 "pretty_printer.m"
                          }
#line 555 "pretty_printer.m"
                        else
#line 555 "pretty_printer.m"
                          if (((((MR_tag((MR_Word) mercury__pretty_printer__Doc_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 569 "pretty_printer.m"
                            {
#line 569 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__Univ_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 569 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__Doc1_36;
#line 569 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_98_98;
#line 569 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__V_99_99;

#line 570 "pretty_printer.m"
                              {
#line 570 "pretty_printer.m"
                                mercury__pretty_printer__expand_pp_7_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Univ_35, &mercury__pretty_printer__Doc1_36, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_98_98, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8);
                              }
#line 571 "pretty_printer.m"
                              {
#line 571 "pretty_printer.m"
                                mercury__pretty_printer__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "pretty_printer.m"
                                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_99_99, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_36));
#line 571 "pretty_printer.m"
                                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_99_99, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 571 "pretty_printer.m"
                              }
#line 571 "pretty_printer.m"
                              /* direct tailcall eliminated */
#line 571 "pretty_printer.m"
                              {
#line 571 "pretty_printer.m"
                                MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_99_99;
#line 571 "pretty_printer.m"
                                MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_98_98;

#line 571 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 571 "pretty_printer.m"
                                mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 571 "pretty_printer.m"
                              }
#line 571 "pretty_printer.m"
                              continue;
#line 569 "pretty_printer.m"
                            }
#line 555 "pretty_printer.m"
                          else
#line 555 "pretty_printer.m"
                            {
#line 555 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));

#line 555 "pretty_printer.m"
                              if ((mercury__pretty_printer__V_130_130 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 605 "pretty_printer.m"
                                {
#line 605 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__V_64_64;
#line 605 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__Docs1_127;
#line 605 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__OpenGroups1_128;

#line 607 "pretty_printer.m"
                                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 > (MR_Integer) 0);
#line 607 "pretty_printer.m"
                                  if (mercury__pretty_printer__succeeded)
#line 607 "pretty_printer.m"
                                    mercury__pretty_printer__V_64_64 = (MR_Integer) 1;
#line 607 "pretty_printer.m"
                                  else
#line 607 "pretty_printer.m"
                                    mercury__pretty_printer__V_64_64 = (MR_Integer) 0;
#line 607 "pretty_printer.m"
                                  mercury__pretty_printer__OpenGroups1_128 = (mercury__pretty_printer__HeadVar__5_5 - mercury__pretty_printer__V_64_64);
#line 608 "pretty_printer.m"
                                  {
#line 608 "pretty_printer.m"
                                    mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_127, mercury__pretty_printer__OpenGroups1_128, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                  }
#line 606 "pretty_printer.m"
                                  {
#line 606 "pretty_printer.m"
                                    MR_Word base;
#line 606 "pretty_printer.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "pretty_printer.m"
                                    *mercury__pretty_printer__HeadVar__4_4 = base;
#line 606 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 606 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_127));
#line 606 "pretty_printer.m"
                                  }
#line 605 "pretty_printer.m"
                                }
#line 555 "pretty_printer.m"
                              else
#line 555 "pretty_printer.m"
                                if ((mercury__pretty_printer__V_130_130 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 599 "pretty_printer.m"
                                  {
#line 599 "pretty_printer.m"
                                    MR_Integer mercury__pretty_printer__OpenGroups1_42;
#line 599 "pretty_printer.m"
                                    MR_Integer mercury__pretty_printer__V_70_70;
#line 599 "pretty_printer.m"
                                    MR_Word mercury__pretty_printer__Docs1_126;

#line 601 "pretty_printer.m"
                                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 > (MR_Integer) 0);
#line 601 "pretty_printer.m"
                                    if (mercury__pretty_printer__succeeded)
#line 601 "pretty_printer.m"
                                      mercury__pretty_printer__V_70_70 = (MR_Integer) 1;
#line 601 "pretty_printer.m"
                                    else
#line 601 "pretty_printer.m"
                                      mercury__pretty_printer__V_70_70 = (MR_Integer) 0;
#line 601 "pretty_printer.m"
                                    mercury__pretty_printer__OpenGroups1_42 = (mercury__pretty_printer__HeadVar__5_5 + mercury__pretty_printer__V_70_70);
#line 602 "pretty_printer.m"
                                    {
#line 602 "pretty_printer.m"
                                      mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_126, mercury__pretty_printer__OpenGroups1_42, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                    }
#line 600 "pretty_printer.m"
                                    {
#line 600 "pretty_printer.m"
                                      MR_Word base;
#line 600 "pretty_printer.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "pretty_printer.m"
                                      *mercury__pretty_printer__HeadVar__4_4 = base;
#line 600 "pretty_printer.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 600 "pretty_printer.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_126));
#line 600 "pretty_printer.m"
                                    }
#line 599 "pretty_printer.m"
                                  }
#line 555 "pretty_printer.m"
                                else
#line 555 "pretty_printer.m"
                                  if ((mercury__pretty_printer__V_130_130 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 594 "pretty_printer.m"
                                    {
#line 594 "pretty_printer.m"
                                      MR_Word mercury__pretty_printer__Docs1_125;

#line 596 "pretty_printer.m"
                                      {
#line 596 "pretty_printer.m"
                                        mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_125, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                      }
#line 595 "pretty_printer.m"
                                      {
#line 595 "pretty_printer.m"
                                        MR_Word base;
#line 595 "pretty_printer.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "pretty_printer.m"
                                        *mercury__pretty_printer__HeadVar__4_4 = base;
#line 595 "pretty_printer.m"
                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 595 "pretty_printer.m"
                                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_125));
#line 595 "pretty_printer.m"
                                      }
#line 594 "pretty_printer.m"
                                    }
#line 555 "pretty_printer.m"
                                  else
#line 555 "pretty_printer.m"
                                    if (((MR_tag((MR_Word) mercury__pretty_printer__V_130_130)) == (MR_mktag((MR_Integer) 1))))
#line 589 "pretty_printer.m"
                                      {
#line 589 "pretty_printer.m"
                                        MR_Word mercury__pretty_printer__Docs1_124;

#line 591 "pretty_printer.m"
                                        {
#line 591 "pretty_printer.m"
                                          mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_124, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                        }
#line 590 "pretty_printer.m"
                                        {
#line 590 "pretty_printer.m"
                                          MR_Word base;
#line 590 "pretty_printer.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "pretty_printer.m"
                                          *mercury__pretty_printer__HeadVar__4_4 = base;
#line 590 "pretty_printer.m"
                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 590 "pretty_printer.m"
                                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_124));
#line 590 "pretty_printer.m"
                                        }
#line 589 "pretty_printer.m"
                                      }
#line 555 "pretty_printer.m"
                                    else
#line 555 "pretty_printer.m"
                                      if (((MR_tag((MR_Word) mercury__pretty_printer__V_130_130)) == (MR_mktag((MR_Integer) 3))))
#line 611 "pretty_printer.m"
                                        {
#line 611 "pretty_printer.m"
                                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_130_130, (MR_Integer) 0)));

#line 613 "pretty_printer.m"
                                          /* direct tailcall eliminated */
#line 613 "pretty_printer.m"
                                          {
#line 613 "pretty_printer.m"
                                            MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__Docs0_27;
#line 613 "pretty_printer.m"
                                            MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_59_59;

#line 613 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 613 "pretty_printer.m"
                                            mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 613 "pretty_printer.m"
                                          }
#line 613 "pretty_printer.m"
                                          continue;
#line 611 "pretty_printer.m"
                                        }
#line 555 "pretty_printer.m"
                                      else
#line 616 "pretty_printer.m"
                                        {
#line 616 "pretty_printer.m"
                                          MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_130_130, (MR_Integer) 0)));

#line 618 "pretty_printer.m"
                                          /* direct tailcall eliminated */
#line 618 "pretty_printer.m"
                                          {
#line 618 "pretty_printer.m"
                                            MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__Docs0_27;
#line 618 "pretty_printer.m"
                                            MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_8 = mercury__pretty_printer__STATE_VARIABLE_Pri_54_54;

#line 618 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_Pri_0_8 = mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_8;
#line 618 "pretty_printer.m"
                                            mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 618 "pretty_printer.m"
                                          }
#line 618 "pretty_printer.m"
                                          continue;
#line 616 "pretty_printer.m"
                                        }
#line 555 "pretty_printer.m"
                            }
#line 534 "pretty_printer.m"
          }
#line 531 "pretty_printer.m"
      }
#line 531 "pretty_printer.m"
      break;
#line 531 "pretty_printer.m"
    }
#line 528 "pretty_printer.m"
}

#line 526 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_docs_11_p_0(
#line 526 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 526 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 526 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 526 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__4_4,
#line 526 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__5_5,
#line 526 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_6,
#line 526 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_7,
#line 526 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_8,
#line 526 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_9,
#line 526 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10,
#line 526 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11)
#line 526 "pretty_printer.m"
{
#line 531 "pretty_printer.m"
  while (MR_TRUE)
#line 531 "pretty_printer.m"
    {
#line 531 "pretty_printer.m"
      /* tailcall optimized into a loop */
#line 531 "pretty_printer.m"
      {
#line 531 "pretty_printer.m"
        MR_bool mercury__pretty_printer__succeeded;

#line 531 "pretty_printer.m"
        if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 531 "pretty_printer.m"
          {
#line 531 "pretty_printer.m"
            *mercury__pretty_printer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 532 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
#line 532 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
#line 532 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
#line 531 "pretty_printer.m"
          }
#line 531 "pretty_printer.m"
        else
#line 534 "pretty_printer.m"
          {
#line 534 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Doc_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));
#line 534 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Docs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));

#line 537 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 <= (MR_Integer) 0);
#line 537 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 537 "pretty_printer.m"
              {
#line 537 "pretty_printer.m"
                if ((mercury__pretty_printer__Doc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 537 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = MR_TRUE;
#line 537 "pretty_printer.m"
                else
#line 537 "pretty_printer.m"
                  if ((mercury__pretty_printer__Doc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 537 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = MR_TRUE;
#line 537 "pretty_printer.m"
                  else
#line 537 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = MR_FALSE;
#line 537 "pretty_printer.m"
              }
#line 540 "pretty_printer.m"
            if (!(mercury__pretty_printer__succeeded))
#line 541 "pretty_printer.m"
              {
#line 541 "pretty_printer.m"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10 < (MR_Integer) 0);
#line 541 "pretty_printer.m"
              }
#line 547 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 546 "pretty_printer.m"
              {
#line 546 "pretty_printer.m"
                *mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__3_3;
#line 546 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
#line 546 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
#line 546 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
#line 546 "pretty_printer.m"
              }
#line 547 "pretty_printer.m"
            else
#line 555 "pretty_printer.m"
              if (((MR_tag((MR_Word) mercury__pretty_printer__Doc_26)) == (MR_mktag((MR_Integer) 2))))
#line 565 "pretty_printer.m"
                {
#line 565 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__TypeCtorInfo_129_129 = (MR_Word) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0;
#line 565 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__V_103_103;
#line 565 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__Docs1_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc_26, (MR_Integer) 0)));

#line 566 "pretty_printer.m"
                  {
#line 566 "pretty_printer.m"
                    mercury__pretty_printer__V_103_103 = mercury__list__f_43_43_2_f_0(mercury__pretty_printer__TypeCtorInfo_129_129, mercury__pretty_printer__Docs1_119, mercury__pretty_printer__Docs0_27);
                  }
#line 566 "pretty_printer.m"
                  /* direct tailcall eliminated */
#line 566 "pretty_printer.m"
                  {
#line 566 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_103_103;

#line 566 "pretty_printer.m"
                    mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 566 "pretty_printer.m"
                  }
#line 566 "pretty_printer.m"
                  continue;
#line 565 "pretty_printer.m"
                }
#line 555 "pretty_printer.m"
              else
#line 555 "pretty_printer.m"
                if ((((mercury__pretty_printer__Doc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))) || ((mercury__pretty_printer__Doc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))))
#line 556 "pretty_printer.m"
                  {
#line 557 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 <= (MR_Integer) 0);
#line 556 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 558 "pretty_printer.m"
                      {
#line 558 "pretty_printer.m"
                        *mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__3_3;
#line 558 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
#line 558 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
#line 558 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
#line 558 "pretty_printer.m"
                      }
#line 556 "pretty_printer.m"
                    else
#line 560 "pretty_printer.m"
                      {
#line 560 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Docs1_116;

#line 561 "pretty_printer.m"
                        {
#line 561 "pretty_printer.m"
                          mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_116, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                        }
#line 560 "pretty_printer.m"
                        {
#line 560 "pretty_printer.m"
                          MR_Word base;
#line 560 "pretty_printer.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "pretty_printer.m"
                          *mercury__pretty_printer__HeadVar__4_4 = base;
#line 560 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 560 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_116));
#line 560 "pretty_printer.m"
                        }
#line 560 "pretty_printer.m"
                      }
#line 556 "pretty_printer.m"
                  }
#line 555 "pretty_printer.m"
                else
#line 555 "pretty_printer.m"
                  if (((MR_tag((MR_Word) mercury__pretty_printer__Doc_26)) == (MR_mktag((MR_Integer) 1))))
#line 549 "pretty_printer.m"
                    {
#line 549 "pretty_printer.m"
                      MR_String mercury__pretty_printer__String_33 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc_26, (MR_Integer) 0)));
#line 549 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__Docs1_34;
#line 549 "pretty_printer.m"
                      MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111;
#line 549 "pretty_printer.m"
                      MR_Integer mercury__pretty_printer__V_112_112;

#line 551 "pretty_printer.m"
                      {
#line 551 "pretty_printer.m"
                        mercury__pretty_printer__V_112_112 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__String_33);
                      }
#line 550 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10 - mercury__pretty_printer__V_112_112);
#line 553 "pretty_printer.m"
                      {
#line 553 "pretty_printer.m"
                        mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_34, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                      }
#line 552 "pretty_printer.m"
                      {
#line 552 "pretty_printer.m"
                        MR_Word base;
#line 552 "pretty_printer.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "pretty_printer.m"
                        *mercury__pretty_printer__HeadVar__4_4 = base;
#line 552 "pretty_printer.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 552 "pretty_printer.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_34));
#line 552 "pretty_printer.m"
                      }
#line 549 "pretty_printer.m"
                    }
#line 555 "pretty_printer.m"
                  else
#line 555 "pretty_printer.m"
                    if (((((MR_tag((MR_Word) mercury__pretty_printer__Doc_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 574 "pretty_printer.m"
                      {
#line 574 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Univs_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 574 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Sep_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 2)));
#line 574 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_93_93;
#line 574 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_94_94;
#line 574 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Doc1_120;

#line 575 "pretty_printer.m"
                        {
#line 575 "pretty_printer.m"
                          mercury__pretty_printer__expand_format_list_5_p_0(mercury__pretty_printer__Univs_37, mercury__pretty_printer__Sep_38, &mercury__pretty_printer__Doc1_120, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_93_93);
                        }
#line 576 "pretty_printer.m"
                        {
#line 576 "pretty_printer.m"
                          mercury__pretty_printer__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_120));
#line 576 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 576 "pretty_printer.m"
                        }
#line 576 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 576 "pretty_printer.m"
                        {
#line 576 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_94_94;
#line 576 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_93_93;

#line 576 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 576 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 576 "pretty_printer.m"
                        }
#line 576 "pretty_printer.m"
                        continue;
#line 574 "pretty_printer.m"
                      }
#line 555 "pretty_printer.m"
                    else
#line 555 "pretty_printer.m"
                      if (((((MR_tag((MR_Word) mercury__pretty_printer__Doc_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 584 "pretty_printer.m"
                        {
#line 584 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Susp_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 584 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_83_83;
#line 584 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__V_84_84;
#line 584 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Doc1_123;

#line 585 "pretty_printer.m"
                          {
#line 585 "pretty_printer.m"
                            mercury__pretty_printer__expand_format_susp_4_p_0(mercury__pretty_printer__Susp_40, &mercury__pretty_printer__Doc1_123, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_83_83);
                          }
#line 586 "pretty_printer.m"
                          {
#line 586 "pretty_printer.m"
                            mercury__pretty_printer__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_84_84, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_123));
#line 586 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_84_84, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 586 "pretty_printer.m"
                          }
#line 586 "pretty_printer.m"
                          /* direct tailcall eliminated */
#line 586 "pretty_printer.m"
                          {
#line 586 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_84_84;
#line 586 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_83_83;

#line 586 "pretty_printer.m"
                            mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 586 "pretty_printer.m"
                            mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 586 "pretty_printer.m"
                          }
#line 586 "pretty_printer.m"
                          continue;
#line 584 "pretty_printer.m"
                        }
#line 555 "pretty_printer.m"
                      else
#line 555 "pretty_printer.m"
                        if (((((MR_tag((MR_Word) mercury__pretty_printer__Doc_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 579 "pretty_printer.m"
                          {
#line 579 "pretty_printer.m"
                            MR_String mercury__pretty_printer__Name_39 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 579 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_88_88;
#line 579 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__V_89_89;
#line 579 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__Doc1_121;
#line 579 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__Univs_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 2)));

#line 580 "pretty_printer.m"
                            {
#line 580 "pretty_printer.m"
                              mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_39, mercury__pretty_printer__Univs_122, &mercury__pretty_printer__Doc1_121, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_88_88, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8);
                            }
#line 581 "pretty_printer.m"
                            {
#line 581 "pretty_printer.m"
                              mercury__pretty_printer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "pretty_printer.m"
                              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_121));
#line 581 "pretty_printer.m"
                              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 581 "pretty_printer.m"
                            }
#line 581 "pretty_printer.m"
                            /* direct tailcall eliminated */
#line 581 "pretty_printer.m"
                            {
#line 581 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_89_89;
#line 581 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_88_88;

#line 581 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 581 "pretty_printer.m"
                              mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 581 "pretty_printer.m"
                            }
#line 581 "pretty_printer.m"
                            continue;
#line 579 "pretty_printer.m"
                          }
#line 555 "pretty_printer.m"
                        else
#line 555 "pretty_printer.m"
                          if (((((MR_tag((MR_Word) mercury__pretty_printer__Doc_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 569 "pretty_printer.m"
                            {
#line 569 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__Univ_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 569 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__Doc1_36;
#line 569 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_98_98;
#line 569 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__V_99_99;

#line 570 "pretty_printer.m"
                              {
#line 570 "pretty_printer.m"
                                mercury__pretty_printer__expand_pp_7_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Univ_35, &mercury__pretty_printer__Doc1_36, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_98_98, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8);
                              }
#line 571 "pretty_printer.m"
                              {
#line 571 "pretty_printer.m"
                                mercury__pretty_printer__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "pretty_printer.m"
                                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_99_99, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_36));
#line 571 "pretty_printer.m"
                                MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_99_99, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 571 "pretty_printer.m"
                              }
#line 571 "pretty_printer.m"
                              /* direct tailcall eliminated */
#line 571 "pretty_printer.m"
                              {
#line 571 "pretty_printer.m"
                                MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_99_99;
#line 571 "pretty_printer.m"
                                MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_98_98;

#line 571 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 571 "pretty_printer.m"
                                mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 571 "pretty_printer.m"
                              }
#line 571 "pretty_printer.m"
                              continue;
#line 569 "pretty_printer.m"
                            }
#line 555 "pretty_printer.m"
                          else
#line 555 "pretty_printer.m"
                            {
#line 555 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));

#line 555 "pretty_printer.m"
                              if ((mercury__pretty_printer__V_130_130 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 605 "pretty_printer.m"
                                {
#line 605 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__V_64_64;
#line 605 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__Docs1_127;
#line 605 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__OpenGroups1_128;

#line 607 "pretty_printer.m"
                                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 > (MR_Integer) 0);
#line 607 "pretty_printer.m"
                                  if (mercury__pretty_printer__succeeded)
#line 607 "pretty_printer.m"
                                    mercury__pretty_printer__V_64_64 = (MR_Integer) 1;
#line 607 "pretty_printer.m"
                                  else
#line 607 "pretty_printer.m"
                                    mercury__pretty_printer__V_64_64 = (MR_Integer) 0;
#line 607 "pretty_printer.m"
                                  mercury__pretty_printer__OpenGroups1_128 = (mercury__pretty_printer__HeadVar__5_5 - mercury__pretty_printer__V_64_64);
#line 608 "pretty_printer.m"
                                  {
#line 608 "pretty_printer.m"
                                    mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_127, mercury__pretty_printer__OpenGroups1_128, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                  }
#line 606 "pretty_printer.m"
                                  {
#line 606 "pretty_printer.m"
                                    MR_Word base;
#line 606 "pretty_printer.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "pretty_printer.m"
                                    *mercury__pretty_printer__HeadVar__4_4 = base;
#line 606 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 606 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_127));
#line 606 "pretty_printer.m"
                                  }
#line 605 "pretty_printer.m"
                                }
#line 555 "pretty_printer.m"
                              else
#line 555 "pretty_printer.m"
                                if ((mercury__pretty_printer__V_130_130 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 599 "pretty_printer.m"
                                  {
#line 599 "pretty_printer.m"
                                    MR_Integer mercury__pretty_printer__OpenGroups1_42;
#line 599 "pretty_printer.m"
                                    MR_Integer mercury__pretty_printer__V_70_70;
#line 599 "pretty_printer.m"
                                    MR_Word mercury__pretty_printer__Docs1_126;

#line 601 "pretty_printer.m"
                                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 > (MR_Integer) 0);
#line 601 "pretty_printer.m"
                                    if (mercury__pretty_printer__succeeded)
#line 601 "pretty_printer.m"
                                      mercury__pretty_printer__V_70_70 = (MR_Integer) 1;
#line 601 "pretty_printer.m"
                                    else
#line 601 "pretty_printer.m"
                                      mercury__pretty_printer__V_70_70 = (MR_Integer) 0;
#line 601 "pretty_printer.m"
                                    mercury__pretty_printer__OpenGroups1_42 = (mercury__pretty_printer__HeadVar__5_5 + mercury__pretty_printer__V_70_70);
#line 602 "pretty_printer.m"
                                    {
#line 602 "pretty_printer.m"
                                      mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_126, mercury__pretty_printer__OpenGroups1_42, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                    }
#line 600 "pretty_printer.m"
                                    {
#line 600 "pretty_printer.m"
                                      MR_Word base;
#line 600 "pretty_printer.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "pretty_printer.m"
                                      *mercury__pretty_printer__HeadVar__4_4 = base;
#line 600 "pretty_printer.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 600 "pretty_printer.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_126));
#line 600 "pretty_printer.m"
                                    }
#line 599 "pretty_printer.m"
                                  }
#line 555 "pretty_printer.m"
                                else
#line 555 "pretty_printer.m"
                                  if ((mercury__pretty_printer__V_130_130 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 594 "pretty_printer.m"
                                    {
#line 594 "pretty_printer.m"
                                      MR_Word mercury__pretty_printer__Docs1_125;

#line 596 "pretty_printer.m"
                                      {
#line 596 "pretty_printer.m"
                                        mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_125, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                      }
#line 595 "pretty_printer.m"
                                      {
#line 595 "pretty_printer.m"
                                        MR_Word base;
#line 595 "pretty_printer.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "pretty_printer.m"
                                        *mercury__pretty_printer__HeadVar__4_4 = base;
#line 595 "pretty_printer.m"
                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 595 "pretty_printer.m"
                                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_125));
#line 595 "pretty_printer.m"
                                      }
#line 594 "pretty_printer.m"
                                    }
#line 555 "pretty_printer.m"
                                  else
#line 555 "pretty_printer.m"
                                    if (((MR_tag((MR_Word) mercury__pretty_printer__V_130_130)) == (MR_mktag((MR_Integer) 1))))
#line 589 "pretty_printer.m"
                                      {
#line 589 "pretty_printer.m"
                                        MR_Word mercury__pretty_printer__Docs1_124;

#line 591 "pretty_printer.m"
                                        {
#line 591 "pretty_printer.m"
                                          mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_124, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                        }
#line 590 "pretty_printer.m"
                                        {
#line 590 "pretty_printer.m"
                                          MR_Word base;
#line 590 "pretty_printer.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "pretty_printer.m"
                                          *mercury__pretty_printer__HeadVar__4_4 = base;
#line 590 "pretty_printer.m"
                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 590 "pretty_printer.m"
                                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_124));
#line 590 "pretty_printer.m"
                                        }
#line 589 "pretty_printer.m"
                                      }
#line 555 "pretty_printer.m"
                                    else
#line 555 "pretty_printer.m"
                                      if (((MR_tag((MR_Word) mercury__pretty_printer__V_130_130)) == (MR_mktag((MR_Integer) 3))))
#line 611 "pretty_printer.m"
                                        {
#line 611 "pretty_printer.m"
                                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_130_130, (MR_Integer) 0)));

#line 613 "pretty_printer.m"
                                          /* direct tailcall eliminated */
#line 613 "pretty_printer.m"
                                          {
#line 613 "pretty_printer.m"
                                            MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__Docs0_27;
#line 613 "pretty_printer.m"
                                            MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_59_59;

#line 613 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 613 "pretty_printer.m"
                                            mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 613 "pretty_printer.m"
                                          }
#line 613 "pretty_printer.m"
                                          continue;
#line 611 "pretty_printer.m"
                                        }
#line 555 "pretty_printer.m"
                                      else
#line 616 "pretty_printer.m"
                                        {
#line 616 "pretty_printer.m"
                                          MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_130_130, (MR_Integer) 0)));

#line 618 "pretty_printer.m"
                                          /* direct tailcall eliminated */
#line 618 "pretty_printer.m"
                                          {
#line 618 "pretty_printer.m"
                                            MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__Docs0_27;
#line 618 "pretty_printer.m"
                                            MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_8 = mercury__pretty_printer__STATE_VARIABLE_Pri_54_54;

#line 618 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_Pri_0_8 = mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_8;
#line 618 "pretty_printer.m"
                                            mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 618 "pretty_printer.m"
                                          }
#line 618 "pretty_printer.m"
                                          continue;
#line 616 "pretty_printer.m"
                                        }
#line 555 "pretty_printer.m"
                            }
#line 534 "pretty_printer.m"
          }
#line 531 "pretty_printer.m"
      }
#line 531 "pretty_printer.m"
      break;
#line 531 "pretty_printer.m"
    }
#line 526 "pretty_printer.m"
}

#line 474 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__output_current_group_12_p_0(
#line 474 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_71,
#line 474 "pretty_printer.m"
  MR_Box mercury__pretty_printer__HeadVar__1_1,
#line 474 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__2_2,
#line 474 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 474 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__4_4,
#line 474 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__5_5,
#line 474 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__6_6,
#line 474 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7,
#line 474 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_8,
#line 474 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9,
#line 474 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_10,
#line 474 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_11,
#line 474 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_12)
#line 474 "pretty_printer.m"
{
#line 478 "pretty_printer.m"
  while (MR_TRUE)
#line 478 "pretty_printer.m"
    {
#line 478 "pretty_printer.m"
      /* tailcall optimized into a loop */
#line 478 "pretty_printer.m"
      {
#line 478 "pretty_printer.m"
        MR_bool mercury__pretty_printer__succeeded;

#line 478 "pretty_printer.m"
        if ((mercury__pretty_printer__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 478 "pretty_printer.m"
          {
#line 479 "pretty_printer.m"
            *mercury__pretty_printer__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 479 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_IO_12 = mercury__pretty_printer__STATE_VARIABLE_IO_0_11;
#line 479 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9;
#line 479 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_8 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7;
#line 478 "pretty_printer.m"
          }
#line 478 "pretty_printer.m"
        else
#line 481 "pretty_printer.m"
          {
#line 481 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Doc_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 0)));
#line 481 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Docs0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 1)));
#line 487 "pretty_printer.m"
            MR_String mercury__pretty_printer__String_36;

#line 482 "pretty_printer.m"
            mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__Doc_30)) == (MR_mktag((MR_Integer) 1)));
#line 482 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 482 "pretty_printer.m"
              {
#line 482 "pretty_printer.m"
                mercury__pretty_printer__String_36 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc_30, (MR_Integer) 0)));
#line 483 "pretty_printer.m"
                {
#line 483 "pretty_printer.m"
                  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_43_43;
#line 483 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_44_44;
#line 483 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__V_45_45;
#line 13382 "pretty_printer.c"
                  void MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_writer_71, (MR_Integer) 0)), (MR_Integer) 5)));

#line 13385 "pretty_printer.c"
                  {
#line 13387 "pretty_printer.c"
                    mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_writer_71), mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__String_36)), mercury__pretty_printer__STATE_VARIABLE_IO_0_11, &mercury__pretty_printer__STATE_VARIABLE_IO_43_43);
                  }
#line 250 "string.opt"
                  {
#line 250 "string.opt"
                    mercury__string__count_codepoints_2_p_0(mercury__pretty_printer__String_36, &mercury__pretty_printer__V_45_45);
                  }
#line 484 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_44_44 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7 - mercury__pretty_printer__V_45_45);
#line 485 "pretty_printer.m"
                  /* direct tailcall eliminated */
#line 485 "pretty_printer.m"
                  {
#line 485 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs0_31;
#line 485 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_44_44;
#line 485 "pretty_printer.m"
                    MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_11 = mercury__pretty_printer__STATE_VARIABLE_IO_43_43;

#line 485 "pretty_printer.m"
                    mercury__pretty_printer__STATE_VARIABLE_IO_0_11 = mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_11;
#line 485 "pretty_printer.m"
                    mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_7;
#line 485 "pretty_printer.m"
                    mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 485 "pretty_printer.m"
                  }
#line 485 "pretty_printer.m"
                  continue;
#line 483 "pretty_printer.m"
                }
#line 482 "pretty_printer.m"
              }
#line 482 "pretty_printer.m"
            else
#line 496 "pretty_printer.m"
              {
#line 487 "pretty_printer.m"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__Doc_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 496 "pretty_printer.m"
                if (mercury__pretty_printer__succeeded)
#line 489 "pretty_printer.m"
                  {
#line 489 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_49_49;
#line 489 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_50_50;
#line 489 "pretty_printer.m"
                    MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_51_51;
#line 489 "pretty_printer.m"
                    MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_20_85;
#line 13440 "pretty_printer.c"
                    void MR_CALL (* mercury__pretty_printer__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_writer_71, (MR_Integer) 0)), (MR_Integer) 5)));

#line 13443 "pretty_printer.c"
                    {
#line 13445 "pretty_printer.c"
                      mercury__pretty_printer__func_1(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_writer_71), mercury__pretty_printer__HeadVar__1_1, ((MR_Box) ((MR_String) "\n")), mercury__pretty_printer__STATE_VARIABLE_IO_0_11, &mercury__pretty_printer__STATE_VARIABLE_IO_20_85);
                    }
#line 633 "pretty_printer.m"
                    {
#line 633 "pretty_printer.m"
                      mercury__pretty_printer__output_indentation_6_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_71, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__3_3, mercury__pretty_printer__HeadVar__2_2, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_49_49, mercury__pretty_printer__STATE_VARIABLE_IO_20_85, &mercury__pretty_printer__STATE_VARIABLE_IO_51_51);
                    }
#line 634 "pretty_printer.m"
                    mercury__pretty_printer__STATE_VARIABLE_RemainingLines_50_50 = (mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9 - (MR_Integer) 1);
#line 490 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingLines_50_50 <= (MR_Integer) 0);
#line 492 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 491 "pretty_printer.m"
                      {
#line 491 "pretty_printer.m"
                        *mercury__pretty_printer__HeadVar__6_6 = mercury__pretty_printer__Docs0_31;
#line 491 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_IO_12 = mercury__pretty_printer__STATE_VARIABLE_IO_51_51;
#line 491 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_50_50;
#line 491 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_8 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_49_49;
#line 491 "pretty_printer.m"
                      }
#line 492 "pretty_printer.m"
                    else
#line 493 "pretty_printer.m"
                      {
#line 493 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 493 "pretty_printer.m"
                        {
#line 493 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs0_31;
#line 493 "pretty_printer.m"
                          MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_49_49;
#line 493 "pretty_printer.m"
                          MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_9 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_50_50;
#line 493 "pretty_printer.m"
                          MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_11 = mercury__pretty_printer__STATE_VARIABLE_IO_51_51;

#line 493 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_IO_0_11 = mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_11;
#line 493 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_9;
#line 493 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_7;
#line 493 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 493 "pretty_printer.m"
                        }
#line 493 "pretty_printer.m"
                        continue;
#line 493 "pretty_printer.m"
                      }
#line 489 "pretty_printer.m"
                  }
#line 496 "pretty_printer.m"
                else
#line 499 "pretty_printer.m"
                  {
#line 496 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_56_56;

#line 496 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__Doc_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_30, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 496 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 496 "pretty_printer.m"
                      {
#line 496 "pretty_printer.m"
                        mercury__pretty_printer__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_30, (MR_Integer) 1)));
#line 496 "pretty_printer.m"
                        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 496 "pretty_printer.m"
                      }
#line 499 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 497 "pretty_printer.m"
                      {
#line 497 "pretty_printer.m"
                        MR_Integer mercury__pretty_printer__V_57_57 = (mercury__pretty_printer__HeadVar__4_4 + (MR_Integer) 1);

#line 497 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 497 "pretty_printer.m"
                        {
#line 497 "pretty_printer.m"
                          MR_Integer mercury__pretty_printer__HeadVar__4__tmp_copy_4 = mercury__pretty_printer__V_57_57;
#line 497 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs0_31;

#line 497 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 497 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__4__tmp_copy_4;
#line 497 "pretty_printer.m"
                        }
#line 497 "pretty_printer.m"
                        continue;
#line 497 "pretty_printer.m"
                      }
#line 499 "pretty_printer.m"
                    else
#line 506 "pretty_printer.m"
                      {
#line 499 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_62_62;

#line 499 "pretty_printer.m"
                        mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__Doc_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_30, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 499 "pretty_printer.m"
                        if (mercury__pretty_printer__succeeded)
#line 499 "pretty_printer.m"
                          {
#line 499 "pretty_printer.m"
                            mercury__pretty_printer__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_30, (MR_Integer) 1)));
#line 499 "pretty_printer.m"
                            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 499 "pretty_printer.m"
                          }
#line 506 "pretty_printer.m"
                        if (mercury__pretty_printer__succeeded)
#line 502 "pretty_printer.m"
                          {
#line 500 "pretty_printer.m"
                            mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__4_4 == (MR_Integer) 1);
#line 502 "pretty_printer.m"
                            if (mercury__pretty_printer__succeeded)
#line 501 "pretty_printer.m"
                              {
#line 501 "pretty_printer.m"
                                *mercury__pretty_printer__HeadVar__6_6 = mercury__pretty_printer__Docs0_31;
#line 501 "pretty_printer.m"
                                *mercury__pretty_printer__STATE_VARIABLE_IO_12 = mercury__pretty_printer__STATE_VARIABLE_IO_0_11;
#line 501 "pretty_printer.m"
                                *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9;
#line 501 "pretty_printer.m"
                                *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_8 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7;
#line 501 "pretty_printer.m"
                              }
#line 502 "pretty_printer.m"
                            else
#line 503 "pretty_printer.m"
                              {
#line 503 "pretty_printer.m"
                                MR_Integer mercury__pretty_printer__V_63_63 = (mercury__pretty_printer__HeadVar__4_4 - (MR_Integer) 1);

#line 503 "pretty_printer.m"
                                /* direct tailcall eliminated */
#line 503 "pretty_printer.m"
                                {
#line 503 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__HeadVar__4__tmp_copy_4 = mercury__pretty_printer__V_63_63;
#line 503 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs0_31;

#line 503 "pretty_printer.m"
                                  mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 503 "pretty_printer.m"
                                  mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__4__tmp_copy_4;
#line 503 "pretty_printer.m"
                                }
#line 503 "pretty_printer.m"
                                continue;
#line 503 "pretty_printer.m"
                              }
#line 502 "pretty_printer.m"
                          }
#line 506 "pretty_printer.m"
                        else
#line 507 "pretty_printer.m"
                          {
#line 507 "pretty_printer.m"
                            /* direct tailcall eliminated */
#line 507 "pretty_printer.m"
                            {
#line 507 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs0_31;

#line 507 "pretty_printer.m"
                              mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 507 "pretty_printer.m"
                            }
#line 507 "pretty_printer.m"
                            continue;
#line 507 "pretty_printer.m"
                          }
#line 506 "pretty_printer.m"
                      }
#line 499 "pretty_printer.m"
                  }
#line 496 "pretty_printer.m"
              }
#line 481 "pretty_printer.m"
          }
#line 478 "pretty_printer.m"
      }
#line 478 "pretty_printer.m"
      break;
#line 478 "pretty_printer.m"
    }
#line 474 "pretty_printer.m"
}

#line 370 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__write_doc_to_stream_17_p_1(
#line 370 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_134,
#line 370 "pretty_printer.m"
  MR_Box mercury__pretty_printer__HeadVar__1_1,
#line 370 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 370 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 370 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__4_4,
#line 370 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__5_5,
#line 370 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6,
#line 370 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7,
#line 370 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_0_8,
#line 370 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Indents_9,
#line 370 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10,
#line 370 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11,
#line 370 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_12,
#line 370 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_13,
#line 370 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_14,
#line 370 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_15,
#line 370 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_16,
#line 370 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_17)
#line 370 "pretty_printer.m"
{
#line 373 "pretty_printer.m"
  while (MR_TRUE)
#line 373 "pretty_printer.m"
    {
#line 373 "pretty_printer.m"
      /* tailcall optimized into a loop */
#line 373 "pretty_printer.m"
      {
#line 373 "pretty_printer.m"
        MR_bool mercury__pretty_printer__succeeded;

#line 373 "pretty_printer.m"
        if ((mercury__pretty_printer__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 373 "pretty_printer.m"
          {
#line 374 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_IO_17 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 374 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Pri_15 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 374 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Limit_13 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 374 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 374 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Indents_9 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 374 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 373 "pretty_printer.m"
          }
#line 373 "pretty_printer.m"
        else
#line 376 "pretty_printer.m"
          {
#line 376 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Doc_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 0)));
#line 376 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Docs0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 1)));

#line 377 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10 <= (MR_Integer) 0);
#line 379 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 378 "pretty_printer.m"
              {
#line 378 "pretty_printer.m"
                {
#line 378 "pretty_printer.m"
                  mercury__stream__put_4_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) ((MR_String) "...")), mercury__pretty_printer__STATE_VARIABLE_IO_0_16, mercury__pretty_printer__STATE_VARIABLE_IO_17);
                }
#line 378 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Pri_15 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 378 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Limit_13 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 378 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 378 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Indents_9 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 378 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 378 "pretty_printer.m"
              }
#line 379 "pretty_printer.m"
            else
#line 467 "pretty_printer.m"
              {
#line 467 "pretty_printer.m"
                MR_Word mercury__pretty_printer__Docs_53;
#line 467 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_93_93;
#line 467 "pretty_printer.m"
                MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_101_101;
#line 467 "pretty_printer.m"
                MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_105_105;
#line 467 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116;
#line 467 "pretty_printer.m"
                MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_118_118;
#line 467 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119;

#line 388 "pretty_printer.m"
                if ((mercury__pretty_printer__Doc_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 402 "pretty_printer.m"
                  {
#line 403 "pretty_printer.m"
                    {
#line 403 "pretty_printer.m"
                      mercury__pretty_printer__format_nl_8_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                    }
#line 405 "pretty_printer.m"
                    mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 405 "pretty_printer.m"
                    mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 405 "pretty_printer.m"
                    mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 405 "pretty_printer.m"
                    mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 402 "pretty_printer.m"
                  }
#line 388 "pretty_printer.m"
                else
#line 388 "pretty_printer.m"
                  if ((mercury__pretty_printer__Doc_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 389 "pretty_printer.m"
                    {
#line 391 "pretty_printer.m"
                      MR_Integer mercury__pretty_printer__IndentWidth_57;
#line 391 "pretty_printer.m"
                      MR_Integer mercury__pretty_printer__V_114_114;

#line 392 "pretty_printer.m"
                      {
#line 392 "pretty_printer.m"
                        mercury__pretty_printer__IndentWidth_57 = mercury__pretty_printer__foldl__ho14_3_f_in__list_0(mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, (MR_Integer) 0);
                      }
#line 393 "pretty_printer.m"
                      mercury__pretty_printer__V_114_114 = (mercury__pretty_printer__HeadVar__4_4 - mercury__pretty_printer__IndentWidth_57);
#line 393 "pretty_printer.m"
                      mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 < mercury__pretty_printer__V_114_114);
#line 397 "pretty_printer.m"
                      if (mercury__pretty_printer__succeeded)
#line 395 "pretty_printer.m"
                        {
#line 395 "pretty_printer.m"
                          mercury__pretty_printer__format_nl_8_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                        }
#line 397 "pretty_printer.m"
                      else
#line 398 "pretty_printer.m"
                        {
#line 398 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 398 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 398 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 398 "pretty_printer.m"
                        }
#line 400 "pretty_printer.m"
                      mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 400 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 400 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 400 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 389 "pretty_printer.m"
                    }
#line 388 "pretty_printer.m"
                  else
#line 388 "pretty_printer.m"
                    if (((MR_tag((MR_Word) mercury__pretty_printer__Doc_44)) == (MR_mktag((MR_Integer) 2))))
#line 407 "pretty_printer.m"
                      {
#line 407 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__TypeCtorInfo_137_137 = (MR_Word) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0;
#line 407 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Docs1_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc_44, (MR_Integer) 0)));

#line 408 "pretty_printer.m"
                        {
#line 408 "pretty_printer.m"
                          mercury__pretty_printer__Docs_53 = mercury__list__f_43_43_2_f_0(mercury__pretty_printer__TypeCtorInfo_137_137, mercury__pretty_printer__Docs1_58, mercury__pretty_printer__Docs0_45);
                        }
#line 408 "pretty_printer.m"
                        mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 408 "pretty_printer.m"
                        mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 408 "pretty_printer.m"
                        mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 408 "pretty_printer.m"
                        mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 408 "pretty_printer.m"
                        mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 408 "pretty_printer.m"
                        mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 407 "pretty_printer.m"
                      }
#line 388 "pretty_printer.m"
                    else
#line 388 "pretty_printer.m"
                      if (((MR_tag((MR_Word) mercury__pretty_printer__Doc_44)) == (MR_mktag((MR_Integer) 1))))
#line 383 "pretty_printer.m"
                        {
#line 383 "pretty_printer.m"
                          MR_String mercury__pretty_printer__String_52 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc_44, (MR_Integer) 0)));
#line 383 "pretty_printer.m"
                          MR_Integer mercury__pretty_printer__V_120_120;

#line 384 "pretty_printer.m"
                          {
#line 384 "pretty_printer.m"
                            mercury__stream__put_4_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__String_52)), mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                          }
#line 386 "pretty_printer.m"
                          {
#line 386 "pretty_printer.m"
                            mercury__pretty_printer__V_120_120 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__String_52);
                          }
#line 385 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 - mercury__pretty_printer__V_120_120);
#line 387 "pretty_printer.m"
                          mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 387 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 387 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 387 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 387 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 383 "pretty_printer.m"
                        }
#line 388 "pretty_printer.m"
                      else
#line 388 "pretty_printer.m"
                        if (((((MR_tag((MR_Word) mercury__pretty_printer__Doc_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 414 "pretty_printer.m"
                          {
#line 414 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__Univs_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 414 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__Sep_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 2)));
#line 414 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__Doc1_129;

#line 415 "pretty_printer.m"
                            {
#line 415 "pretty_printer.m"
                              mercury__pretty_printer__expand_format_list_5_p_0(mercury__pretty_printer__Univs_61, mercury__pretty_printer__Sep_62, &mercury__pretty_printer__Doc1_129, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105);
                            }
#line 416 "pretty_printer.m"
                            {
#line 416 "pretty_printer.m"
                              mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "pretty_printer.m"
                              MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_129));
#line 416 "pretty_printer.m"
                              MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 416 "pretty_printer.m"
                            }
#line 416 "pretty_printer.m"
                            mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 416 "pretty_printer.m"
                            mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 416 "pretty_printer.m"
                            mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 416 "pretty_printer.m"
                            mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 416 "pretty_printer.m"
                            mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 414 "pretty_printer.m"
                          }
#line 388 "pretty_printer.m"
                        else
#line 388 "pretty_printer.m"
                          if (((((MR_tag((MR_Word) mercury__pretty_printer__Doc_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 422 "pretty_printer.m"
                            {
#line 422 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__Susp_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 422 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__Doc1_132;

#line 423 "pretty_printer.m"
                              {
#line 423 "pretty_printer.m"
                                mercury__pretty_printer__expand_format_susp_4_p_0(mercury__pretty_printer__Susp_64, &mercury__pretty_printer__Doc1_132, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105);
                              }
#line 424 "pretty_printer.m"
                              {
#line 424 "pretty_printer.m"
                                mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "pretty_printer.m"
                                MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_132));
#line 424 "pretty_printer.m"
                                MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 424 "pretty_printer.m"
                              }
#line 424 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 424 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 424 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 424 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 424 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 422 "pretty_printer.m"
                            }
#line 388 "pretty_printer.m"
                          else
#line 388 "pretty_printer.m"
                            if (((((MR_tag((MR_Word) mercury__pretty_printer__Doc_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 418 "pretty_printer.m"
                              {
#line 418 "pretty_printer.m"
                                MR_String mercury__pretty_printer__Name_63 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 418 "pretty_printer.m"
                                MR_Word mercury__pretty_printer__Doc1_130;
#line 418 "pretty_printer.m"
                                MR_Word mercury__pretty_printer__Univs_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 2)));

#line 419 "pretty_printer.m"
                                {
#line 419 "pretty_printer.m"
                                  mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_63, mercury__pretty_printer__Univs_131, &mercury__pretty_printer__Doc1_130, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14);
                                }
#line 420 "pretty_printer.m"
                                {
#line 420 "pretty_printer.m"
                                  mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "pretty_printer.m"
                                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_130));
#line 420 "pretty_printer.m"
                                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 420 "pretty_printer.m"
                                }
#line 420 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 420 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 420 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 420 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 420 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 418 "pretty_printer.m"
                              }
#line 388 "pretty_printer.m"
                            else
#line 388 "pretty_printer.m"
                              if (((((MR_tag((MR_Word) mercury__pretty_printer__Doc_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 410 "pretty_printer.m"
                                {
#line 410 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__Univ_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 410 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__Doc1_60;

#line 411 "pretty_printer.m"
                                  {
#line 411 "pretty_printer.m"
                                    mercury__pretty_printer__expand_pp_7_p_1(mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__HeadVar__3_3, mercury__pretty_printer__Univ_59, &mercury__pretty_printer__Doc1_60, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14);
                                  }
#line 412 "pretty_printer.m"
                                  {
#line 412 "pretty_printer.m"
                                    mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_60));
#line 412 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 412 "pretty_printer.m"
                                  }
#line 412 "pretty_printer.m"
                                  mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 412 "pretty_printer.m"
                                  mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 412 "pretty_printer.m"
                                  mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 412 "pretty_printer.m"
                                  mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 412 "pretty_printer.m"
                                  mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 410 "pretty_printer.m"
                                }
#line 388 "pretty_printer.m"
                              else
#line 388 "pretty_printer.m"
                                {
#line 388 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));

#line 388 "pretty_printer.m"
                                  if ((mercury__pretty_printer__V_139_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 457 "pretty_printer.m"
                                    {
#line 458 "pretty_printer.m"
                                      mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 458 "pretty_printer.m"
                                      mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 458 "pretty_printer.m"
                                      mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 458 "pretty_printer.m"
                                      mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 458 "pretty_printer.m"
                                      mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 458 "pretty_printer.m"
                                      mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 458 "pretty_printer.m"
                                      mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 457 "pretty_printer.m"
                                    }
#line 388 "pretty_printer.m"
                                  else
#line 388 "pretty_printer.m"
                                    if ((mercury__pretty_printer__V_139_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 443 "pretty_printer.m"
                                      {
#line 443 "pretty_printer.m"
                                        MR_Integer mercury__pretty_printer__RemainingWidthAfterGroup_68;
#line 443 "pretty_printer.m"
                                        MR_Word mercury__pretty_printer__Docs1_133;

#line 446 "pretty_printer.m"
                                        {
#line 446 "pretty_printer.m"
                                          mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__HeadVar__3_3, mercury__pretty_printer__Docs0_45, &mercury__pretty_printer__Docs1_133, (MR_Integer) 1, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14, &mercury__pretty_printer__STATE_VARIABLE_Pri_93_93, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6, &mercury__pretty_printer__RemainingWidthAfterGroup_68);
                                        }
#line 448 "pretty_printer.m"
                                        mercury__pretty_printer__succeeded = (mercury__pretty_printer__RemainingWidthAfterGroup_68 >= (MR_Integer) 0);
#line 451 "pretty_printer.m"
                                        if (mercury__pretty_printer__succeeded)
#line 449 "pretty_printer.m"
                                          {
#line 449 "pretty_printer.m"
                                            mercury__pretty_printer__output_current_group_12_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, (MR_Integer) 1, mercury__pretty_printer__Docs1_133, &mercury__pretty_printer__Docs_53, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                                          }
#line 451 "pretty_printer.m"
                                        else
#line 452 "pretty_printer.m"
                                          {
#line 452 "pretty_printer.m"
                                            mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs1_133;
#line 452 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 452 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 452 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 452 "pretty_printer.m"
                                          }
#line 452 "pretty_printer.m"
                                        mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 443 "pretty_printer.m"
                                      }
#line 388 "pretty_printer.m"
                                    else
#line 388 "pretty_printer.m"
                                      if ((mercury__pretty_printer__V_139_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 434 "pretty_printer.m"
                                        {
#line 434 "pretty_printer.m"
                                          MR_Word mercury__pretty_printer__TypeCtorInfo_138_138 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 435 "pretty_printer.m"
                                          {
#line 435 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__list__det_tail_1_f_0(mercury__pretty_printer__TypeCtorInfo_138_138, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8);
                                          }
#line 436 "pretty_printer.m"
                                          mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 436 "pretty_printer.m"
                                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 436 "pretty_printer.m"
                                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 436 "pretty_printer.m"
                                          mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 436 "pretty_printer.m"
                                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 436 "pretty_printer.m"
                                          mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 434 "pretty_printer.m"
                                        }
#line 388 "pretty_printer.m"
                                      else
#line 388 "pretty_printer.m"
                                        if (((MR_tag((MR_Word) mercury__pretty_printer__V_139_139)) == (MR_mktag((MR_Integer) 1))))
#line 428 "pretty_printer.m"
                                          {
#line 428 "pretty_printer.m"
                                            MR_String mercury__pretty_printer__Indent_65 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_139_139, (MR_Integer) 0)));

#line 429 "pretty_printer.m"
                                            {
#line 429 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "pretty_printer.m"
                                              MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Indents_101_101, 0) = ((MR_Box) (mercury__pretty_printer__Indent_65));
#line 429 "pretty_printer.m"
                                              MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Indents_101_101, 1) = ((MR_Box) (mercury__pretty_printer__STATE_VARIABLE_Indents_0_8));
#line 429 "pretty_printer.m"
                                            }
#line 430 "pretty_printer.m"
                                            mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 430 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 430 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 430 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 430 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 430 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 428 "pretty_printer.m"
                                          }
#line 388 "pretty_printer.m"
                                        else
#line 388 "pretty_printer.m"
                                          if (((MR_tag((MR_Word) mercury__pretty_printer__V_139_139)) == (MR_mktag((MR_Integer) 3))))
#line 460 "pretty_printer.m"
                                            {
#line 460 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_139_139, (MR_Integer) 0)));
#line 462 "pretty_printer.m"
                                              mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 462 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 462 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 462 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 462 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 462 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 460 "pretty_printer.m"
                                            }
#line 388 "pretty_printer.m"
                                          else
#line 464 "pretty_printer.m"
                                            {
#line 464 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_139_139, (MR_Integer) 0)));
#line 466 "pretty_printer.m"
                                              mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 466 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 466 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 466 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 466 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 466 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 464 "pretty_printer.m"
                                            }
#line 388 "pretty_printer.m"
                                }
#line 468 "pretty_printer.m"
                /* direct tailcall eliminated */
#line 468 "pretty_printer.m"
                {
#line 468 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs_53;
#line 468 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119;
#line 468 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_0__tmp_copy_8 = mercury__pretty_printer__STATE_VARIABLE_Indents_101_101;
#line 468 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116;
#line 468 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_12 = mercury__pretty_printer__STATE_VARIABLE_Limit_105_105;
#line 468 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_14 = mercury__pretty_printer__STATE_VARIABLE_Pri_93_93;
#line 468 "pretty_printer.m"
                  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_16 = mercury__pretty_printer__STATE_VARIABLE_IO_118_118;

#line 468 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_IO_0_16 = mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_16;
#line 468 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_Pri_0_14 = mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_14;
#line 468 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_Limit_0_12 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_12;
#line 468 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_10;
#line 468 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_Indents_0_8 = mercury__pretty_printer__STATE_VARIABLE_Indents_0__tmp_copy_8;
#line 468 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_6;
#line 468 "pretty_printer.m"
                  mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 468 "pretty_printer.m"
                }
#line 468 "pretty_printer.m"
                continue;
#line 467 "pretty_printer.m"
              }
#line 376 "pretty_printer.m"
          }
#line 373 "pretty_printer.m"
      }
#line 373 "pretty_printer.m"
      break;
#line 373 "pretty_printer.m"
    }
#line 370 "pretty_printer.m"
}

#line 368 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__write_doc_to_stream_17_p_0(
#line 368 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_134,
#line 368 "pretty_printer.m"
  MR_Box mercury__pretty_printer__HeadVar__1_1,
#line 368 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 368 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 368 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__4_4,
#line 368 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__5_5,
#line 368 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6,
#line 368 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7,
#line 368 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_0_8,
#line 368 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Indents_9,
#line 368 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10,
#line 368 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11,
#line 368 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_12,
#line 368 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_13,
#line 368 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_14,
#line 368 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_15,
#line 368 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_16,
#line 368 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_17)
#line 368 "pretty_printer.m"
{
#line 373 "pretty_printer.m"
  while (MR_TRUE)
#line 373 "pretty_printer.m"
    {
#line 373 "pretty_printer.m"
      /* tailcall optimized into a loop */
#line 373 "pretty_printer.m"
      {
#line 373 "pretty_printer.m"
        MR_bool mercury__pretty_printer__succeeded;

#line 373 "pretty_printer.m"
        if ((mercury__pretty_printer__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 373 "pretty_printer.m"
          {
#line 374 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_IO_17 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 374 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Pri_15 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 374 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Limit_13 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 374 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 374 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Indents_9 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 374 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 373 "pretty_printer.m"
          }
#line 373 "pretty_printer.m"
        else
#line 376 "pretty_printer.m"
          {
#line 376 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Doc_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 0)));
#line 376 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Docs0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 1)));

#line 377 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10 <= (MR_Integer) 0);
#line 379 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 378 "pretty_printer.m"
              {
#line 378 "pretty_printer.m"
                {
#line 378 "pretty_printer.m"
                  mercury__stream__put_4_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) ((MR_String) "...")), mercury__pretty_printer__STATE_VARIABLE_IO_0_16, mercury__pretty_printer__STATE_VARIABLE_IO_17);
                }
#line 378 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Pri_15 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 378 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Limit_13 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 378 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 378 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Indents_9 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 378 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 378 "pretty_printer.m"
              }
#line 379 "pretty_printer.m"
            else
#line 467 "pretty_printer.m"
              {
#line 467 "pretty_printer.m"
                MR_Word mercury__pretty_printer__Docs_53;
#line 467 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_93_93;
#line 467 "pretty_printer.m"
                MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_101_101;
#line 467 "pretty_printer.m"
                MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_105_105;
#line 467 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116;
#line 467 "pretty_printer.m"
                MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_118_118;
#line 467 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119;

#line 388 "pretty_printer.m"
                if ((mercury__pretty_printer__Doc_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 402 "pretty_printer.m"
                  {
#line 403 "pretty_printer.m"
                    {
#line 403 "pretty_printer.m"
                      mercury__pretty_printer__format_nl_8_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                    }
#line 405 "pretty_printer.m"
                    mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 405 "pretty_printer.m"
                    mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 405 "pretty_printer.m"
                    mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 405 "pretty_printer.m"
                    mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 402 "pretty_printer.m"
                  }
#line 388 "pretty_printer.m"
                else
#line 388 "pretty_printer.m"
                  if ((mercury__pretty_printer__Doc_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 389 "pretty_printer.m"
                    {
#line 391 "pretty_printer.m"
                      MR_Integer mercury__pretty_printer__IndentWidth_57;
#line 391 "pretty_printer.m"
                      MR_Integer mercury__pretty_printer__V_114_114;

#line 392 "pretty_printer.m"
                      {
#line 392 "pretty_printer.m"
                        mercury__pretty_printer__IndentWidth_57 = mercury__pretty_printer__foldl__ho15_3_f_in__list_0(mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, (MR_Integer) 0);
                      }
#line 393 "pretty_printer.m"
                      mercury__pretty_printer__V_114_114 = (mercury__pretty_printer__HeadVar__4_4 - mercury__pretty_printer__IndentWidth_57);
#line 393 "pretty_printer.m"
                      mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 < mercury__pretty_printer__V_114_114);
#line 397 "pretty_printer.m"
                      if (mercury__pretty_printer__succeeded)
#line 395 "pretty_printer.m"
                        {
#line 395 "pretty_printer.m"
                          mercury__pretty_printer__format_nl_8_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                        }
#line 397 "pretty_printer.m"
                      else
#line 398 "pretty_printer.m"
                        {
#line 398 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 398 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 398 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 398 "pretty_printer.m"
                        }
#line 400 "pretty_printer.m"
                      mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 400 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 400 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 400 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 389 "pretty_printer.m"
                    }
#line 388 "pretty_printer.m"
                  else
#line 388 "pretty_printer.m"
                    if (((MR_tag((MR_Word) mercury__pretty_printer__Doc_44)) == (MR_mktag((MR_Integer) 2))))
#line 407 "pretty_printer.m"
                      {
#line 407 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__TypeCtorInfo_137_137 = (MR_Word) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0;
#line 407 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Docs1_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc_44, (MR_Integer) 0)));

#line 408 "pretty_printer.m"
                        {
#line 408 "pretty_printer.m"
                          mercury__pretty_printer__Docs_53 = mercury__list__f_43_43_2_f_0(mercury__pretty_printer__TypeCtorInfo_137_137, mercury__pretty_printer__Docs1_58, mercury__pretty_printer__Docs0_45);
                        }
#line 408 "pretty_printer.m"
                        mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 408 "pretty_printer.m"
                        mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 408 "pretty_printer.m"
                        mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 408 "pretty_printer.m"
                        mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 408 "pretty_printer.m"
                        mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 408 "pretty_printer.m"
                        mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 407 "pretty_printer.m"
                      }
#line 388 "pretty_printer.m"
                    else
#line 388 "pretty_printer.m"
                      if (((MR_tag((MR_Word) mercury__pretty_printer__Doc_44)) == (MR_mktag((MR_Integer) 1))))
#line 383 "pretty_printer.m"
                        {
#line 383 "pretty_printer.m"
                          MR_String mercury__pretty_printer__String_52 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc_44, (MR_Integer) 0)));
#line 383 "pretty_printer.m"
                          MR_Integer mercury__pretty_printer__V_120_120;

#line 384 "pretty_printer.m"
                          {
#line 384 "pretty_printer.m"
                            mercury__stream__put_4_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__String_52)), mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                          }
#line 386 "pretty_printer.m"
                          {
#line 386 "pretty_printer.m"
                            mercury__pretty_printer__V_120_120 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__String_52);
                          }
#line 385 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 - mercury__pretty_printer__V_120_120);
#line 387 "pretty_printer.m"
                          mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 387 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 387 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 387 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 387 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 383 "pretty_printer.m"
                        }
#line 388 "pretty_printer.m"
                      else
#line 388 "pretty_printer.m"
                        if (((((MR_tag((MR_Word) mercury__pretty_printer__Doc_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 414 "pretty_printer.m"
                          {
#line 414 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__Univs_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 414 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__Sep_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 2)));
#line 414 "pretty_printer.m"
                            MR_Word mercury__pretty_printer__Doc1_129;

#line 415 "pretty_printer.m"
                            {
#line 415 "pretty_printer.m"
                              mercury__pretty_printer__expand_format_list_5_p_0(mercury__pretty_printer__Univs_61, mercury__pretty_printer__Sep_62, &mercury__pretty_printer__Doc1_129, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105);
                            }
#line 416 "pretty_printer.m"
                            {
#line 416 "pretty_printer.m"
                              mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "pretty_printer.m"
                              MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_129));
#line 416 "pretty_printer.m"
                              MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 416 "pretty_printer.m"
                            }
#line 416 "pretty_printer.m"
                            mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 416 "pretty_printer.m"
                            mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 416 "pretty_printer.m"
                            mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 416 "pretty_printer.m"
                            mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 416 "pretty_printer.m"
                            mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 414 "pretty_printer.m"
                          }
#line 388 "pretty_printer.m"
                        else
#line 388 "pretty_printer.m"
                          if (((((MR_tag((MR_Word) mercury__pretty_printer__Doc_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 422 "pretty_printer.m"
                            {
#line 422 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__Susp_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 422 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__Doc1_132;

#line 423 "pretty_printer.m"
                              {
#line 423 "pretty_printer.m"
                                mercury__pretty_printer__expand_format_susp_4_p_0(mercury__pretty_printer__Susp_64, &mercury__pretty_printer__Doc1_132, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105);
                              }
#line 424 "pretty_printer.m"
                              {
#line 424 "pretty_printer.m"
                                mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "pretty_printer.m"
                                MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_132));
#line 424 "pretty_printer.m"
                                MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 424 "pretty_printer.m"
                              }
#line 424 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 424 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 424 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 424 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 424 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 422 "pretty_printer.m"
                            }
#line 388 "pretty_printer.m"
                          else
#line 388 "pretty_printer.m"
                            if (((((MR_tag((MR_Word) mercury__pretty_printer__Doc_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 418 "pretty_printer.m"
                              {
#line 418 "pretty_printer.m"
                                MR_String mercury__pretty_printer__Name_63 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 418 "pretty_printer.m"
                                MR_Word mercury__pretty_printer__Doc1_130;
#line 418 "pretty_printer.m"
                                MR_Word mercury__pretty_printer__Univs_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 2)));

#line 419 "pretty_printer.m"
                                {
#line 419 "pretty_printer.m"
                                  mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_63, mercury__pretty_printer__Univs_131, &mercury__pretty_printer__Doc1_130, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14);
                                }
#line 420 "pretty_printer.m"
                                {
#line 420 "pretty_printer.m"
                                  mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "pretty_printer.m"
                                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_130));
#line 420 "pretty_printer.m"
                                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 420 "pretty_printer.m"
                                }
#line 420 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 420 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 420 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 420 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 420 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 418 "pretty_printer.m"
                              }
#line 388 "pretty_printer.m"
                            else
#line 388 "pretty_printer.m"
                              if (((((MR_tag((MR_Word) mercury__pretty_printer__Doc_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 410 "pretty_printer.m"
                                {
#line 410 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__Univ_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 410 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__Doc1_60;

#line 411 "pretty_printer.m"
                                  {
#line 411 "pretty_printer.m"
                                    mercury__pretty_printer__expand_pp_7_p_0(mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__HeadVar__3_3, mercury__pretty_printer__Univ_59, &mercury__pretty_printer__Doc1_60, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14);
                                  }
#line 412 "pretty_printer.m"
                                  {
#line 412 "pretty_printer.m"
                                    mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_60));
#line 412 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 412 "pretty_printer.m"
                                  }
#line 412 "pretty_printer.m"
                                  mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 412 "pretty_printer.m"
                                  mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 412 "pretty_printer.m"
                                  mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 412 "pretty_printer.m"
                                  mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 412 "pretty_printer.m"
                                  mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 410 "pretty_printer.m"
                                }
#line 388 "pretty_printer.m"
                              else
#line 388 "pretty_printer.m"
                                {
#line 388 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));

#line 388 "pretty_printer.m"
                                  if ((mercury__pretty_printer__V_139_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 457 "pretty_printer.m"
                                    {
#line 458 "pretty_printer.m"
                                      mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 458 "pretty_printer.m"
                                      mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 458 "pretty_printer.m"
                                      mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 458 "pretty_printer.m"
                                      mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 458 "pretty_printer.m"
                                      mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 458 "pretty_printer.m"
                                      mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 458 "pretty_printer.m"
                                      mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 457 "pretty_printer.m"
                                    }
#line 388 "pretty_printer.m"
                                  else
#line 388 "pretty_printer.m"
                                    if ((mercury__pretty_printer__V_139_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 443 "pretty_printer.m"
                                      {
#line 443 "pretty_printer.m"
                                        MR_Integer mercury__pretty_printer__RemainingWidthAfterGroup_68;
#line 443 "pretty_printer.m"
                                        MR_Word mercury__pretty_printer__Docs1_133;

#line 446 "pretty_printer.m"
                                        {
#line 446 "pretty_printer.m"
                                          mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__HeadVar__3_3, mercury__pretty_printer__Docs0_45, &mercury__pretty_printer__Docs1_133, (MR_Integer) 1, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14, &mercury__pretty_printer__STATE_VARIABLE_Pri_93_93, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6, &mercury__pretty_printer__RemainingWidthAfterGroup_68);
                                        }
#line 448 "pretty_printer.m"
                                        mercury__pretty_printer__succeeded = (mercury__pretty_printer__RemainingWidthAfterGroup_68 >= (MR_Integer) 0);
#line 451 "pretty_printer.m"
                                        if (mercury__pretty_printer__succeeded)
#line 449 "pretty_printer.m"
                                          {
#line 449 "pretty_printer.m"
                                            mercury__pretty_printer__output_current_group_12_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, (MR_Integer) 1, mercury__pretty_printer__Docs1_133, &mercury__pretty_printer__Docs_53, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                                          }
#line 451 "pretty_printer.m"
                                        else
#line 452 "pretty_printer.m"
                                          {
#line 452 "pretty_printer.m"
                                            mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs1_133;
#line 452 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 452 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 452 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 452 "pretty_printer.m"
                                          }
#line 452 "pretty_printer.m"
                                        mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 443 "pretty_printer.m"
                                      }
#line 388 "pretty_printer.m"
                                    else
#line 388 "pretty_printer.m"
                                      if ((mercury__pretty_printer__V_139_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 434 "pretty_printer.m"
                                        {
#line 434 "pretty_printer.m"
                                          MR_Word mercury__pretty_printer__TypeCtorInfo_138_138 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 435 "pretty_printer.m"
                                          {
#line 435 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__list__det_tail_1_f_0(mercury__pretty_printer__TypeCtorInfo_138_138, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8);
                                          }
#line 436 "pretty_printer.m"
                                          mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 436 "pretty_printer.m"
                                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 436 "pretty_printer.m"
                                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 436 "pretty_printer.m"
                                          mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 436 "pretty_printer.m"
                                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 436 "pretty_printer.m"
                                          mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 434 "pretty_printer.m"
                                        }
#line 388 "pretty_printer.m"
                                      else
#line 388 "pretty_printer.m"
                                        if (((MR_tag((MR_Word) mercury__pretty_printer__V_139_139)) == (MR_mktag((MR_Integer) 1))))
#line 428 "pretty_printer.m"
                                          {
#line 428 "pretty_printer.m"
                                            MR_String mercury__pretty_printer__Indent_65 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_139_139, (MR_Integer) 0)));

#line 429 "pretty_printer.m"
                                            {
#line 429 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "pretty_printer.m"
                                              MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Indents_101_101, 0) = ((MR_Box) (mercury__pretty_printer__Indent_65));
#line 429 "pretty_printer.m"
                                              MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Indents_101_101, 1) = ((MR_Box) (mercury__pretty_printer__STATE_VARIABLE_Indents_0_8));
#line 429 "pretty_printer.m"
                                            }
#line 430 "pretty_printer.m"
                                            mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 430 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 430 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 430 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 430 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 430 "pretty_printer.m"
                                            mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 428 "pretty_printer.m"
                                          }
#line 388 "pretty_printer.m"
                                        else
#line 388 "pretty_printer.m"
                                          if (((MR_tag((MR_Word) mercury__pretty_printer__V_139_139)) == (MR_mktag((MR_Integer) 3))))
#line 460 "pretty_printer.m"
                                            {
#line 460 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_139_139, (MR_Integer) 0)));
#line 462 "pretty_printer.m"
                                              mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 462 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 462 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 462 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 462 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 462 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 460 "pretty_printer.m"
                                            }
#line 388 "pretty_printer.m"
                                          else
#line 464 "pretty_printer.m"
                                            {
#line 464 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_139_139, (MR_Integer) 0)));
#line 466 "pretty_printer.m"
                                              mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 466 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 466 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 466 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 466 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 466 "pretty_printer.m"
                                              mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 464 "pretty_printer.m"
                                            }
#line 388 "pretty_printer.m"
                                }
#line 468 "pretty_printer.m"
                /* direct tailcall eliminated */
#line 468 "pretty_printer.m"
                {
#line 468 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs_53;
#line 468 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119;
#line 468 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_0__tmp_copy_8 = mercury__pretty_printer__STATE_VARIABLE_Indents_101_101;
#line 468 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116;
#line 468 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_12 = mercury__pretty_printer__STATE_VARIABLE_Limit_105_105;
#line 468 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_14 = mercury__pretty_printer__STATE_VARIABLE_Pri_93_93;
#line 468 "pretty_printer.m"
                  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_16 = mercury__pretty_printer__STATE_VARIABLE_IO_118_118;

#line 468 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_IO_0_16 = mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_16;
#line 468 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_Pri_0_14 = mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_14;
#line 468 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_Limit_0_12 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_12;
#line 468 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_10;
#line 468 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_Indents_0_8 = mercury__pretty_printer__STATE_VARIABLE_Indents_0__tmp_copy_8;
#line 468 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_6;
#line 468 "pretty_printer.m"
                  mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 468 "pretty_printer.m"
                }
#line 468 "pretty_printer.m"
                continue;
#line 467 "pretty_printer.m"
              }
#line 376 "pretty_printer.m"
          }
#line 373 "pretty_printer.m"
      }
#line 373 "pretty_printer.m"
      break;
#line 373 "pretty_printer.m"
    }
#line 368 "pretty_printer.m"
}

#line 237 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__write_doc_4_p_0(
#line 237 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Stream_5,
#line 237 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Doc_6)
#line 237 "pretty_printer.m"
{
#line 1064 "pretty_printer.m"
  {
#line 1064 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1064 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatters_8;
#line 1064 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__LineWidth_9;
#line 1064 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__MaxLines_10;
#line 1064 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Limit_11;
#line 1064 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_15_15;
#line 1064 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Okay_24;
#line 1068 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_19;
#line 1068 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_57;
#line 1068 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__Pri_45;
#line 1068 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Indents_47;
#line 1068 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_54_54;
#line 1068 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_56_56;
#line 14959 "pretty_printer.c"
    MR_Box MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box);
#line 14961 "pretty_printer.c"
    MR_Box mercury__pretty_printer__conv1_Pri_45;
#line 347 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_48_48;
#line 347 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_49_49;
#line 347 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_50_50;
#line 347 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_51_51;
#line 347 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_52_52;
#line 347 "pretty_printer.m"
    MR_Box mercury__pretty_printer__conv2_STATE_VARIABLE_IO_13;

#line 924 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0

	MR_Word Okay;

		{
#line 924 "pretty_printer.m"

    Okay = ML_pretty_printer_is_initialised;

#line 14987 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__Okay_24  = Okay;
#line 924 "pretty_printer.m"
}
#line 1003 "pretty_printer.m"
    if ((mercury__pretty_printer__Okay_24 == (MR_Integer) 0))
#line 1000 "pretty_printer.m"
      {
#line 1001 "pretty_printer.m"
        {
#line 1001 "pretty_printer.m"
          mercury__pretty_printer__Formatters_8 = mercury__pretty_printer__initial_formatter_map_0_f_0();
        }
#line 1013 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0

	MR_Word FMap;

	FMap =  mercury__pretty_printer__Formatters_8 ;
		{
#line 1013 "pretty_printer.m"

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;

#line 15016 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 1013 "pretty_printer.m"
}
#line 1000 "pretty_printer.m"
      }
#line 1003 "pretty_printer.m"
    else
#line 963 "pretty_printer.m"
      {
#line 966 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0

	MR_Word FMap;

		{
#line 966 "pretty_printer.m"

    FMap = ML_pretty_printer_default_formatter_map;

#line 15039 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__Formatters_8  = FMap;
#line 966 "pretty_printer.m"
}
#line 963 "pretty_printer.m"
      }
#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0


		{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 15060 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0

	MR_Word X;

		{
#line 878 "pretty_printer.m"
X = mercury__pretty_printer__mutable_variable_io_pp_params;

#line 15076 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_15_15  = X;
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0


		{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 15095 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 878 "pretty_printer.m"
}
#line 1066 "pretty_printer.m"
    mercury__pretty_printer__LineWidth_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__V_15_15, (MR_Integer) 0)));
#line 1066 "pretty_printer.m"
    mercury__pretty_printer__MaxLines_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__V_15_15, (MR_Integer) 1)));
#line 1066 "pretty_printer.m"
    mercury__pretty_printer__Limit_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__V_15_15, (MR_Integer) 2)));
#line 15107 "pretty_printer.c"
    mercury__pretty_printer__TypeClassInfo_for_writer_19 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
#line 15109 "pretty_printer.c"
    mercury__pretty_printer__TypeClassInfo_for_op_table_57 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 15113 "pretty_printer.c"
    mercury__pretty_printer__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_op_table_57, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15115 "pretty_printer.c"
    {
#line 15117 "pretty_printer.c"
      mercury__pretty_printer__conv1_Pri_45 = mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_op_table_57), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15120 "pretty_printer.c"
    mercury__pretty_printer__Pri_45 = ((MR_Integer) mercury__pretty_printer__conv1_Pri_45);
#line 346 "pretty_printer.m"
    mercury__pretty_printer__Indents_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "pretty_printer.m"
    mercury__pretty_printer__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "pretty_printer.m"
    {
#line 347 "pretty_printer.m"
      mercury__pretty_printer__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_54_54, 0) = ((MR_Box) (mercury__pretty_printer__Doc_6));
#line 347 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_54_54, 1) = ((MR_Box) (mercury__pretty_printer__V_56_56));
#line 347 "pretty_printer.m"
    }
#line 347 "pretty_printer.m"
    {
#line 347 "pretty_printer.m"
      mercury__pretty_printer__write_doc_to_stream_17_p_1(mercury__pretty_printer__TypeClassInfo_for_writer_19, ((MR_Box) (mercury__pretty_printer__Stream_5)), (MR_Integer) 2, mercury__pretty_printer__Formatters_8, mercury__pretty_printer__LineWidth_9, mercury__pretty_printer__V_54_54, mercury__pretty_printer__LineWidth_9, &mercury__pretty_printer__V_48_48, mercury__pretty_printer__Indents_47, &mercury__pretty_printer__V_49_49, mercury__pretty_printer__MaxLines_10, &mercury__pretty_printer__V_50_50, mercury__pretty_printer__Limit_11, &mercury__pretty_printer__V_51_51, mercury__pretty_printer__Pri_45, &mercury__pretty_printer__V_52_52, ((MR_Box) ((MR_Integer) 0)), &mercury__pretty_printer__conv2_STATE_VARIABLE_IO_13);
    }
#line 1064 "pretty_printer.m"
  }
#line 237 "pretty_printer.m"
}

#line 236 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__write_doc_3_p_0(
#line 236 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Doc_4)
#line 236 "pretty_printer.m"
{
#line 1061 "pretty_printer.m"
  {
#line 1061 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1061 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_8_8;
#line 1061 "pretty_printer.m"
    MR_Box mercury__pretty_printer__V_2_10;

#line 1331 "io.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_3_p_0

	MercuryFilePtr Stream;

		{
#line 1331 "io.opt"

    Stream = &mercury_stdout;

#line 15173 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_2_10  = (MR_Box) Stream;
#line 1331 "io.opt"
}
#line 669 "io.opt"
    mercury__pretty_printer__V_8_8 = (MR_Word) mercury__pretty_printer__V_2_10;
#line 1062 "pretty_printer.m"
    {
#line 1062 "pretty_printer.m"
      mercury__pretty_printer__write_doc_4_p_0(mercury__pretty_printer__V_8_8, mercury__pretty_printer__Doc_4);
#line 1062 "pretty_printer.m"
      return;
    }
#line 1061 "pretty_printer.m"
  }
#line 236 "pretty_printer.m"
}

#line 227 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__set_default_params_3_p_0(
#line 227 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Params_4)
#line 227 "pretty_printer.m"
{
#line 878 "pretty_printer.m"
  {
#line 878 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_params_3_p_0


		{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 15218 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_params_3_p_0

	MR_Word X;

	X =  mercury__pretty_printer__Params_4 ;
		{
#line 878 "pretty_printer.m"
mercury__pretty_printer__mutable_variable_io_pp_params = X;

#line 15235 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_params_3_p_0


		{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 15253 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
  }
#line 227 "pretty_printer.m"
}

#line 226 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__get_default_params_3_p_0(
#line 226 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Params_4)
#line 226 "pretty_printer.m"
{
#line 878 "pretty_printer.m"
  {
#line 878 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_params_3_p_0


		{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 15288 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_params_3_p_0

	MR_Word X;

		{
#line 878 "pretty_printer.m"
X = mercury__pretty_printer__mutable_variable_io_pp_params;

#line 15304 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__Params_4  = X;
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_params_3_p_0


		{
#line 878 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 15323 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 878 "pretty_printer.m"
}
#line 878 "pretty_printer.m"
  }
#line 226 "pretty_printer.m"
}

#line 219 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__set_default_formatter_6_p_0(
#line 219 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 219 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 219 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 219 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Formatter_10)
#line 219 "pretty_printer.m"
{
#line 1046 "pretty_printer.m"
  {
#line 1046 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1046 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_12;
#line 1046 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap_13;
#line 1046 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Okay_22;

#line 924 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_6_p_0

	MR_Word Okay;

		{
#line 924 "pretty_printer.m"

    Okay = ML_pretty_printer_is_initialised;

#line 15369 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__Okay_22  = Okay;
#line 924 "pretty_printer.m"
}
#line 1003 "pretty_printer.m"
    if ((mercury__pretty_printer__Okay_22 == (MR_Integer) 0))
#line 1000 "pretty_printer.m"
      {
#line 1001 "pretty_printer.m"
        {
#line 1001 "pretty_printer.m"
          mercury__pretty_printer__FMap0_12 = mercury__pretty_printer__initial_formatter_map_0_f_0();
        }
#line 1013 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_6_p_0

	MR_Word FMap;

	FMap =  mercury__pretty_printer__FMap0_12 ;
		{
#line 1013 "pretty_printer.m"

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;

#line 15398 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 1013 "pretty_printer.m"
}
#line 1000 "pretty_printer.m"
      }
#line 1003 "pretty_printer.m"
    else
#line 963 "pretty_printer.m"
      {
#line 966 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_6_p_0

	MR_Word FMap;

		{
#line 966 "pretty_printer.m"

    FMap = ML_pretty_printer_default_formatter_map;

#line 15421 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__FMap0_12  = FMap;
#line 966 "pretty_printer.m"
}
#line 963 "pretty_printer.m"
      }
#line 1048 "pretty_printer.m"
    {
#line 1048 "pretty_printer.m"
      mercury__pretty_printer__FMap_13 = mercury__pretty_printer__set_formatter_5_f_0(mercury__pretty_printer__ModuleName_7, mercury__pretty_printer__TypeName_8, mercury__pretty_printer__Arity_9, mercury__pretty_printer__Formatter_10, mercury__pretty_printer__FMap0_12);
    }
#line 1013 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_6_p_0

	MR_Word FMap;

	FMap =  mercury__pretty_printer__FMap_13 ;
		{
#line 1013 "pretty_printer.m"

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;

#line 15448 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 1013 "pretty_printer.m"
}
#line 1046 "pretty_printer.m"
  }
#line 219 "pretty_printer.m"
}

#line 218 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__set_default_formatter_map_3_p_0(
#line 218 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap_1)
#line 218 "pretty_printer.m"
{
#line 1010 "pretty_printer.m"
  {
#line 1010 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 1013 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_map_3_p_0

	MR_Word FMap;

	FMap =  mercury__pretty_printer__FMap_1 ;
		{
#line 1013 "pretty_printer.m"

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;

#line 15484 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 1013 "pretty_printer.m"
}
#line 1010 "pretty_printer.m"
  }
#line 218 "pretty_printer.m"
}

#line 217 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__get_default_formatter_map_3_p_0(
#line 217 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_4)
#line 217 "pretty_printer.m"
{
#line 997 "pretty_printer.m"
  {
#line 997 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 997 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Okay_6;

#line 924 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_formatter_map_3_p_0

	MR_Word Okay;

		{
#line 924 "pretty_printer.m"

    Okay = ML_pretty_printer_is_initialised;

#line 15520 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__Okay_6  = Okay;
#line 924 "pretty_printer.m"
}
#line 1003 "pretty_printer.m"
    if ((mercury__pretty_printer__Okay_6 == (MR_Integer) 0))
#line 1000 "pretty_printer.m"
      {
#line 1001 "pretty_printer.m"
        {
#line 1001 "pretty_printer.m"
          *mercury__pretty_printer__FMap_4 = mercury__pretty_printer__initial_formatter_map_0_f_0();
        }
#line 1013 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_formatter_map_3_p_0

	MR_Word FMap;

	FMap =  *mercury__pretty_printer__FMap_4 ;
		{
#line 1013 "pretty_printer.m"

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;

#line 15549 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 1013 "pretty_printer.m"
}
#line 1000 "pretty_printer.m"
      }
#line 1003 "pretty_printer.m"
    else
#line 963 "pretty_printer.m"
      {
#line 966 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_formatter_map_3_p_0

	MR_Word FMap;

		{
#line 966 "pretty_printer.m"

    FMap = ML_pretty_printer_default_formatter_map;

#line 15572 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__FMap_4  = FMap;
#line 966 "pretty_printer.m"
}
#line 963 "pretty_printer.m"
      }
#line 997 "pretty_printer.m"
  }
#line 217 "pretty_printer.m"
}

#line 193 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__write_doc_to_stream_9_p_1(
#line 193 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_32,
#line 193 "pretty_printer.m"
  MR_Box mercury__pretty_printer__Stream_10,
#line 193 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Canonicalize_11,
#line 193 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap_12,
#line 193 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__LineWidth_13,
#line 193 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__MaxLines_14,
#line 193 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Limit_15,
#line 193 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Doc_16,
#line 193 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_26,
#line 193 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_27)
#line 193 "pretty_printer.m"
{
#line 343 "pretty_printer.m"
  {
#line 343 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 343 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_33 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 343 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__Pri_18;
#line 343 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Indents_20;
#line 343 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_29_29;
#line 343 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_31_31;
#line 15625 "pretty_printer.c"
    MR_Box MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box);
#line 15627 "pretty_printer.c"
    MR_Box mercury__pretty_printer__conv1_Pri_18;
#line 347 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_21_21;
#line 347 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_22_22;
#line 347 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_23_23;
#line 347 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_24_24;
#line 347 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_25_25;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 15642 "pretty_printer.c"
    mercury__pretty_printer__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_op_table_33, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15644 "pretty_printer.c"
    {
#line 15646 "pretty_printer.c"
      mercury__pretty_printer__conv1_Pri_18 = mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_op_table_33), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15649 "pretty_printer.c"
    mercury__pretty_printer__Pri_18 = ((MR_Integer) mercury__pretty_printer__conv1_Pri_18);
#line 346 "pretty_printer.m"
    mercury__pretty_printer__Indents_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "pretty_printer.m"
    mercury__pretty_printer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "pretty_printer.m"
    {
#line 347 "pretty_printer.m"
      mercury__pretty_printer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 0) = ((MR_Box) (mercury__pretty_printer__Doc_16));
#line 347 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 1) = ((MR_Box) (mercury__pretty_printer__V_31_31));
#line 347 "pretty_printer.m"
    }
#line 347 "pretty_printer.m"
    {
#line 347 "pretty_printer.m"
      mercury__pretty_printer__write_doc_to_stream_17_p_1(mercury__pretty_printer__TypeClassInfo_for_writer_32, mercury__pretty_printer__Stream_10, mercury__pretty_printer__Canonicalize_11, mercury__pretty_printer__FMap_12, mercury__pretty_printer__LineWidth_13, mercury__pretty_printer__V_29_29, mercury__pretty_printer__LineWidth_13, &mercury__pretty_printer__V_21_21, mercury__pretty_printer__Indents_20, &mercury__pretty_printer__V_22_22, mercury__pretty_printer__MaxLines_14, &mercury__pretty_printer__V_23_23, mercury__pretty_printer__Limit_15, &mercury__pretty_printer__V_24_24, mercury__pretty_printer__Pri_18, &mercury__pretty_printer__V_25_25, mercury__pretty_printer__STATE_VARIABLE_IO_0_26, mercury__pretty_printer__STATE_VARIABLE_IO_27);
    }
#line 343 "pretty_printer.m"
  }
#line 193 "pretty_printer.m"
}

#line 191 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__write_doc_to_stream_9_p_0(
#line 191 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_32,
#line 191 "pretty_printer.m"
  MR_Box mercury__pretty_printer__Stream_10,
#line 191 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Canonicalize_11,
#line 191 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap_12,
#line 191 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__LineWidth_13,
#line 191 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__MaxLines_14,
#line 191 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Limit_15,
#line 191 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Doc_16,
#line 191 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_26,
#line 191 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_27)
#line 191 "pretty_printer.m"
{
#line 343 "pretty_printer.m"
  {
#line 343 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 343 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_33 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 343 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__Pri_18;
#line 343 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Indents_20;
#line 343 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_29_29;
#line 343 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_31_31;
#line 15714 "pretty_printer.c"
    MR_Box MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box);
#line 15716 "pretty_printer.c"
    MR_Box mercury__pretty_printer__conv1_Pri_18;
#line 347 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_21_21;
#line 347 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_22_22;
#line 347 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_23_23;
#line 347 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_24_24;
#line 347 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_25_25;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 15731 "pretty_printer.c"
    mercury__pretty_printer__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_op_table_33, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15733 "pretty_printer.c"
    {
#line 15735 "pretty_printer.c"
      mercury__pretty_printer__conv1_Pri_18 = mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_op_table_33), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15738 "pretty_printer.c"
    mercury__pretty_printer__Pri_18 = ((MR_Integer) mercury__pretty_printer__conv1_Pri_18);
#line 346 "pretty_printer.m"
    mercury__pretty_printer__Indents_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "pretty_printer.m"
    mercury__pretty_printer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "pretty_printer.m"
    {
#line 347 "pretty_printer.m"
      mercury__pretty_printer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 0) = ((MR_Box) (mercury__pretty_printer__Doc_16));
#line 347 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 1) = ((MR_Box) (mercury__pretty_printer__V_31_31));
#line 347 "pretty_printer.m"
    }
#line 347 "pretty_printer.m"
    {
#line 347 "pretty_printer.m"
      mercury__pretty_printer__write_doc_to_stream_17_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_32, mercury__pretty_printer__Stream_10, mercury__pretty_printer__Canonicalize_11, mercury__pretty_printer__FMap_12, mercury__pretty_printer__LineWidth_13, mercury__pretty_printer__V_29_29, mercury__pretty_printer__LineWidth_13, &mercury__pretty_printer__V_21_21, mercury__pretty_printer__Indents_20, &mercury__pretty_printer__V_22_22, mercury__pretty_printer__MaxLines_14, &mercury__pretty_printer__V_23_23, mercury__pretty_printer__Limit_15, &mercury__pretty_printer__V_24_24, mercury__pretty_printer__Pri_18, &mercury__pretty_printer__V_25_25, mercury__pretty_printer__STATE_VARIABLE_IO_0_26, mercury__pretty_printer__STATE_VARIABLE_IO_27);
    }
#line 343 "pretty_printer.m"
  }
#line 191 "pretty_printer.m"
}

#line 177 "pretty_printer.m"
MR_Word MR_CALL 
mercury__pretty_printer__set_formatter_5_f_0(
#line 177 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 177 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 177 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 177 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Formatter_10,
#line 177 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11)
#line 177 "pretty_printer.m"
{
#line 298 "pretty_printer.m"
  {
#line 298 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 298 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap_12;
#line 298 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_13;
#line 290 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 290 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_23_23 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 41 "map.opt"
    MR_Box mercury__pretty_printer__conv0_FMap0_Type_Arity_13;

#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_22_22, mercury__pretty_printer__TypeInfo_23_23, mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv0_FMap0_Type_Arity_13);
    }
#line 41 "map.opt"
    if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__pretty_printer__FMap0_Type_Arity_13 = ((MR_Word) mercury__pretty_printer__conv0_FMap0_Type_Arity_13);
#line 41 "map.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 298 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 295 "pretty_printer.m"
      {
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_30;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_31;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_32;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_15;
#line 295 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_16;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_14;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_25_25 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 41 "map.opt"
        MR_Box mercury__pretty_printer__conv1_FMap0_Arity_14;

#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_24_24, mercury__pretty_printer__TypeInfo_25_25, mercury__pretty_printer__FMap0_Type_Arity_13, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv1_FMap0_Arity_14);
        }
#line 41 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 41 "map.opt"
          {
#line 41 "map.opt"
            mercury__pretty_printer__FMap0_Arity_14 = ((MR_Word) mercury__pretty_printer__conv1_FMap0_Arity_14);
#line 41 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 41 "map.opt"
          }
#line 293 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 292 "pretty_printer.m"
          {
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_27 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_60, mercury__pretty_printer__TypeInfo_27_27, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_10)), mercury__pretty_printer__FMap0_Arity_14, &mercury__pretty_printer__FMap_Arity_15);
            }
#line 292 "pretty_printer.m"
          }
#line 293 "pretty_printer.m"
        else
#line 294 "pretty_printer.m"
          {
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_29 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 294 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_75, mercury__pretty_printer__TypeInfo_29_29, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_10)), mercury__pretty_printer__V_17_17, &mercury__pretty_printer__FMap_Arity_15);
            }
#line 294 "pretty_printer.m"
          }
#line 15881 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 15883 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_31 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 296 "pretty_printer.m"
        {
#line 296 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_16 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_30, mercury__pretty_printer__TypeInfo_31_31, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_13, ((MR_Box) (mercury__pretty_printer__FMap_Arity_15)));
        }
#line 15890 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_32 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_30, mercury__pretty_printer__TypeInfo_32_32, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_16)));
        }
#line 295 "pretty_printer.m"
      }
#line 298 "pretty_printer.m"
    else
#line 299 "pretty_printer.m"
      {
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_35;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_36;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_37;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_19_19;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_20;
#line 299 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_21;

#line 299 "pretty_printer.m"
        {
#line 299 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_20 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_34, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_18_18, ((MR_Box) (mercury__pretty_printer__Formatter_10)));
        }
#line 15925 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 15927 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_36 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 48 "tree234.opt"
        mercury__pretty_printer__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "pretty_printer.m"
        {
#line 300 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_21 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_35, mercury__pretty_printer__TypeInfo_36_36, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_19_19, ((MR_Box) (mercury__pretty_printer__FMap_Arity_20)));
        }
#line 15936 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_37 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 301 "pretty_printer.m"
        {
#line 301 "pretty_printer.m"
          mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_35, mercury__pretty_printer__TypeInfo_37_37, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_21)));
        }
#line 299 "pretty_printer.m"
      }
#line 298 "pretty_printer.m"
    return mercury__pretty_printer__FMap_12;
#line 298 "pretty_printer.m"
  }
#line 177 "pretty_printer.m"
}

#line 170 "pretty_printer.m"
MR_Word MR_CALL 
mercury__pretty_printer__new_formatter_map_0_f_0(void)
#line 170 "pretty_printer.m"
{
#line 48 "tree234.opt"
  {
#line 48 "tree234.opt"
    MR_bool mercury__pretty_printer__succeeded;
#line 48 "tree234.opt"
    MR_Word mercury__pretty_printer__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 48 "tree234.opt"
    return mercury__pretty_printer__HeadVar__1_1;
#line 48 "tree234.opt"
  }
#line 170 "pretty_printer.m"
}

#line 135 "pretty_printer.m"
MR_Word MR_CALL 
mercury__pretty_printer__format_arg_1_f_0(
#line 135 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Doc_3)
#line 135 "pretty_printer.m"
{
#line 333 "pretty_printer.m"
  {
#line 333 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 333 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__2_2;
#line 333 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_11 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 333 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_4_4;
#line 333 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_5_5;
#line 333 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_6_6;
#line 333 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_7_7;
#line 333 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_9_9;
#line 333 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_10_10;
#line 15998 "pretty_printer.c"
    MR_Box MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box);
#line 16000 "pretty_printer.c"
    MR_Box mercury__pretty_printer__conv1_V_7_7;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 16005 "pretty_printer.c"
    mercury__pretty_printer__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_op_table_11, (MR_Integer) 0)), (MR_Integer) 13)));
#line 16007 "pretty_printer.c"
    {
#line 16009 "pretty_printer.c"
      mercury__pretty_printer__conv1_V_7_7 = mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_op_table_11), ((MR_Box) ((MR_Integer) 0)));
    }
#line 16012 "pretty_printer.c"
    mercury__pretty_printer__V_7_7 = ((MR_Integer) mercury__pretty_printer__conv1_V_7_7);
#line 336 "pretty_printer.m"
    {
#line 336 "pretty_printer.m"
      mercury__pretty_printer__V_6_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 336 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_6_6, 0) = ((MR_Box) (mercury__pretty_printer__V_7_7));
#line 336 "pretty_printer.m"
    }
#line 335 "pretty_printer.m"
    {
#line 335 "pretty_printer.m"
      mercury__pretty_printer__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "pretty_printer.m"
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 335 "pretty_printer.m"
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_5_5, 1) = ((MR_Box) (mercury__pretty_printer__V_6_6));
#line 335 "pretty_printer.m"
    }
#line 338 "pretty_printer.m"
    mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 338 "pretty_printer.m"
    {
#line 338 "pretty_printer.m"
      mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 0) = ((MR_Box) (mercury__pretty_printer__Doc_3));
#line 338 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 1) = ((MR_Box) (mercury__pretty_printer__V_10_10));
#line 338 "pretty_printer.m"
    }
#line 336 "pretty_printer.m"
    {
#line 336 "pretty_printer.m"
      mercury__pretty_printer__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_4, 0) = ((MR_Box) (mercury__pretty_printer__V_5_5));
#line 336 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_4, 1) = ((MR_Box) (mercury__pretty_printer__V_9_9));
#line 336 "pretty_printer.m"
    }
#line 334 "pretty_printer.m"
    {
#line 334 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 334 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, 0) = ((MR_Box) (mercury__pretty_printer__V_4_4));
#line 334 "pretty_printer.m"
    }
#line 333 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__2_2;
#line 333 "pretty_printer.m"
  }
#line 135 "pretty_printer.m"
}

#line 129 "pretty_printer.m"
MR_Word MR_CALL 
mercury__pretty_printer__format_1_f_0(
#line 129 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeInfo_for_T_5,
#line 129 "pretty_printer.m"
  MR_Box mercury__pretty_printer__X_3)
#line 129 "pretty_printer.m"
{
#line 329 "pretty_printer.m"
  {
#line 329 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 329 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__2_2;
#line 329 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_4_4;

#line 8 "univ.opt"
    {
#line 8 "univ.opt"
      mercury__univ__type_to_univ_2_p_1(mercury__pretty_printer__TypeInfo_for_T_5, mercury__pretty_printer__X_3, &mercury__pretty_printer__V_4_4);
    }
#line 329 "pretty_printer.m"
    {
#line 329 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "pretty_printer.m"
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 329 "pretty_printer.m"
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, 1) = ((MR_Box) (mercury__pretty_printer__V_4_4));
#line 329 "pretty_printer.m"
    }
#line 329 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__2_2;
#line 329 "pretty_printer.m"
  }
#line 129 "pretty_printer.m"
}

#line 124 "pretty_printer.m"
MR_Word MR_CALL 
mercury__pretty_printer__group_1_f_0(
#line 124 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Docs_3)
#line 124 "pretty_printer.m"
{
#line 324 "pretty_printer.m"
  {
#line 324 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 324 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__2_2;
#line 324 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_4_4;
#line 324 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[8]);
#line 324 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 324 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_7_7;
#line 324 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_8_8;
#line 324 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_9_9;
#line 324 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_10_10;
#line 324 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_11_11;
#line 324 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_12_12;

#line 325 "pretty_printer.m"
    {
#line 325 "pretty_printer.m"
      mercury__pretty_printer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 325 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_8_8, 0) = ((MR_Box) (mercury__pretty_printer__Docs_3));
#line 325 "pretty_printer.m"
    }
#line 325 "pretty_printer.m"
    mercury__pretty_printer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 325 "pretty_printer.m"
    mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[9]);
#line 325 "pretty_printer.m"
    mercury__pretty_printer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 325 "pretty_printer.m"
    mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[10]);
#line 325 "pretty_printer.m"
    {
#line 325 "pretty_printer.m"
      mercury__pretty_printer__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_7, 0) = ((MR_Box) (mercury__pretty_printer__V_8_8));
#line 325 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_7, 1) = ((MR_Box) (mercury__pretty_printer__V_9_9));
#line 325 "pretty_printer.m"
    }
#line 325 "pretty_printer.m"
    {
#line 325 "pretty_printer.m"
      mercury__pretty_printer__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_4, 0) = ((MR_Box) (mercury__pretty_printer__V_5_5));
#line 325 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_4, 1) = ((MR_Box) (mercury__pretty_printer__V_7_7));
#line 325 "pretty_printer.m"
    }
#line 325 "pretty_printer.m"
    {
#line 325 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 325 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, 0) = ((MR_Box) (mercury__pretty_printer__V_4_4));
#line 325 "pretty_printer.m"
    }
#line 324 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__2_2;
#line 324 "pretty_printer.m"
  }
#line 124 "pretty_printer.m"
}

#line 115 "pretty_printer.m"
MR_Word MR_CALL 
mercury__pretty_printer__indent_1_f_0(
#line 115 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Docs_3)
#line 115 "pretty_printer.m"
{
#line 319 "pretty_printer.m"
  {
#line 319 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 319 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__2_2;
#line 319 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_7_7;
#line 319 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[7]);
#line 319 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[0]);
#line 319 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_10_10;
#line 319 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_11_11;
#line 319 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_12_12;
#line 319 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_13_13;
#line 319 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_14_14;
#line 319 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_15_15;

#line 315 "pretty_printer.m"
    {
#line 315 "pretty_printer.m"
      mercury__pretty_printer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 315 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_11_11, 0) = ((MR_Box) (mercury__pretty_printer__Docs_3));
#line 315 "pretty_printer.m"
    }
#line 315 "pretty_printer.m"
    mercury__pretty_printer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 315 "pretty_printer.m"
    mercury__pretty_printer__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[5]);
#line 315 "pretty_printer.m"
    mercury__pretty_printer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 315 "pretty_printer.m"
    mercury__pretty_printer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[6]);
#line 315 "pretty_printer.m"
    {
#line 315 "pretty_printer.m"
      mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_10_10, 0) = ((MR_Box) (mercury__pretty_printer__V_11_11));
#line 315 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_10_10, 1) = ((MR_Box) (mercury__pretty_printer__V_12_12));
#line 315 "pretty_printer.m"
    }
#line 315 "pretty_printer.m"
    {
#line 315 "pretty_printer.m"
      mercury__pretty_printer__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_7, 0) = ((MR_Box) (mercury__pretty_printer__V_8_8));
#line 315 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_7, 1) = ((MR_Box) (mercury__pretty_printer__V_10_10));
#line 315 "pretty_printer.m"
    }
#line 315 "pretty_printer.m"
    {
#line 315 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 315 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, 0) = ((MR_Box) (mercury__pretty_printer__V_7_7));
#line 315 "pretty_printer.m"
    }
#line 319 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__2_2;
#line 319 "pretty_printer.m"
  }
#line 115 "pretty_printer.m"
}

#line 110 "pretty_printer.m"
MR_Word MR_CALL 
mercury__pretty_printer__indent_2_f_0(
#line 110 "pretty_printer.m"
  MR_String mercury__pretty_printer__Indent_4,
#line 110 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Docs_5)
#line 110 "pretty_printer.m"
{
#line 314 "pretty_printer.m"
  {
#line 314 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 314 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 314 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_6_6;
#line 314 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_7_7;
#line 314 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_8_8;
#line 314 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_9_9;
#line 314 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_10_10;
#line 314 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_11_11;
#line 314 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_12_12;
#line 314 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_13_13;
#line 314 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_14_14;

#line 315 "pretty_printer.m"
    {
#line 315 "pretty_printer.m"
      mercury__pretty_printer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 315 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_8_8, 0) = ((MR_Box) (mercury__pretty_printer__Indent_4));
#line 315 "pretty_printer.m"
    }
#line 315 "pretty_printer.m"
    {
#line 315 "pretty_printer.m"
      mercury__pretty_printer__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "pretty_printer.m"
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 315 "pretty_printer.m"
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_7_7, 1) = ((MR_Box) (mercury__pretty_printer__V_8_8));
#line 315 "pretty_printer.m"
    }
#line 315 "pretty_printer.m"
    {
#line 315 "pretty_printer.m"
      mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 315 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_10_10, 0) = ((MR_Box) (mercury__pretty_printer__Docs_5));
#line 315 "pretty_printer.m"
    }
#line 315 "pretty_printer.m"
    mercury__pretty_printer__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 315 "pretty_printer.m"
    mercury__pretty_printer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[5]);
#line 315 "pretty_printer.m"
    mercury__pretty_printer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 315 "pretty_printer.m"
    mercury__pretty_printer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[6]);
#line 315 "pretty_printer.m"
    {
#line 315 "pretty_printer.m"
      mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 0) = ((MR_Box) (mercury__pretty_printer__V_10_10));
#line 315 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 1) = ((MR_Box) (mercury__pretty_printer__V_11_11));
#line 315 "pretty_printer.m"
    }
#line 315 "pretty_printer.m"
    {
#line 315 "pretty_printer.m"
      mercury__pretty_printer__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_6_6, 0) = ((MR_Box) (mercury__pretty_printer__V_7_7));
#line 315 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_6_6, 1) = ((MR_Box) (mercury__pretty_printer__V_9_9));
#line 315 "pretty_printer.m"
    }
#line 315 "pretty_printer.m"
    {
#line 315 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 315 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_6_6));
#line 315 "pretty_printer.m"
    }
#line 314 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 314 "pretty_printer.m"
  }
#line 110 "pretty_printer.m"
}

void mercury__pretty_printer__init(void)
{
}

void mercury__pretty_printer__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0);
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_docs_0);
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_formatter_0);
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_formatter_map_0);
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_formatting_limit_0);
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_indents_0);
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_pp_internal_0);
	MR_register_type_ctor_info(&mercury__pretty_printer__pretty_printer__type_ctor_info_pp_params_0);
}

void mercury__pretty_printer__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__pretty_printer__required_init(void)
{
	mercury__pretty_printer__user_init_pred_0();
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module pretty_printer. */
