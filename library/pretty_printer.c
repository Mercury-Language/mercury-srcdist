/*
** Automatically generated from `pretty_printer.m'
** by the Mercury compiler,
** version rotd-2015-06-22
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
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"





#line 96 "pretty_printer.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__pretty_printer__list__pti_list_1__plain_type_desc__type_ctor_info_type_desc_0;

#line 99 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_0[1];

#line 102 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_0;

#line 105 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_1;

#line 108 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_2;

#line 111 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1pretty_printer__type_ctor_info_doc_0;

#line 114 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_3[1];

#line 117 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_3;

#line 120 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_4[1];

#line 123 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_4;

#line 126 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1univ__type_ctor_info_univ_0;

#line 129 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_5[2];

#line 132 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_5;

#line 135 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_6[2];

#line 138 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_6;

#line 141 "pretty_printer.c"
static const MR_VA_TypeInfo_Struct1 mercury__pretty_printer____vti_func_1pretty_printer__type_ctor_info_doc_0;

#line 144 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_7[1];

#line 147 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_7;

#line 150 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_8[1];

#line 153 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_8;

#line 156 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_0[2];

#line 159 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_1[1];

#line 162 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_2[1];

#line 165 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_3[5];

#line 168 "pretty_printer.c"
static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_doc_0[4];

#line 171 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_doc_0[9];

#line 174 "pretty_printer.c"
static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_doc_0[9];

#line 177 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1type_desc__type_ctor_info_type_desc_0;

#line 180 "pretty_printer.c"
static const MR_VA_TypeInfo_Struct3 mercury__pretty_printer____vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0;

#line 183 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0;

#line 186 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0;

#line 189 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0;

#line 192 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_formatting_limit_0_0[1];

#line 195 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_formatting_limit_0_0;

#line 198 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_formatting_limit_0_1[1];

#line 201 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_formatting_limit_0_1;

#line 204 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_formatting_limit_0_0[1];

#line 207 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_formatting_limit_0_1[1];

#line 210 "pretty_printer.c"
static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_formatting_limit_0[2];

#line 213 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_formatting_limit_0[2];

#line 216 "pretty_printer.c"
static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_formatting_limit_0[2];

#line 219 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1builtin__type_ctor_info_string_0;

#line 222 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_0;

#line 225 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_1;

#line 228 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_2[1];

#line 231 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_2;

#line 234 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_3;

#line 237 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_4[1];

#line 240 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_4;

#line 243 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_5[1];

#line 246 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_5;

#line 249 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_0[3];

#line 252 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_1[1];

#line 255 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_2[1];

#line 258 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_3[1];

#line 261 "pretty_printer.c"
static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_internal_0[4];

#line 264 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_pp_internal_0[6];

#line 267 "pretty_printer.c"
static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_pp_internal_0[6];

#line 270 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_params_0_0[3];

#line 273 "pretty_printer.c"
static const MR_ConstString mercury__pretty_printer__pretty_printer__field_names_pp_params_0_0[3];

#line 276 "pretty_printer.c"
static const MR_DuFunctorDesc mercury__pretty_printer__pretty_printer__du_functor_desc_pp_params_0_0;

#line 279 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_params_0_0[1];

#line 282 "pretty_printer.c"
static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_params_0[1];

#line 285 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_pp_params_0[1];

#line 288 "pretty_printer.c"
static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_pp_params_0[1];

#line 291 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____doc_0_0_10001(
#line 294 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 296 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 299 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____doc_0_0_10001(
#line 302 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 304 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 306 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3);

#line 309 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____docs_0_0_10001(
#line 312 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 314 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 317 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____docs_0_0_10001(
#line 320 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 322 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 324 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3);

#line 327 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_0_0_10001(
#line 330 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 332 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 335 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____formatter_0_0_10001(
#line 338 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 340 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 342 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3);

#line 345 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_map_0_0_10001(
#line 348 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 350 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 353 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____formatter_map_0_0_10001(
#line 356 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 358 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 360 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3);

#line 363 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatting_limit_0_0_10001(
#line 366 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 368 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 371 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____formatting_limit_0_0_10001(
#line 374 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 376 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 378 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3);

#line 381 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____indents_0_0_10001(
#line 384 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 386 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 389 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____indents_0_0_10001(
#line 392 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 394 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 396 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3);

#line 399 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_internal_0_0_10001(
#line 402 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 404 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 407 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____pp_internal_0_0_10001(
#line 410 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 412 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 414 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3);

#line 417 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_params_0_0_10001(
#line 420 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 422 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 425 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____pp_params_0_0_10001(
#line 428 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 430 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 432 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 1121 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_f_0(
#line 1121 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4);

#line 1114 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_f_0(
#line 1114 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4);

#line 1107 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0(
#line 1107 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4);

#line 1100 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_f_0(
#line 1100 "pretty_printer.m"
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

#line 499 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho9_6_p_0_1(
#line 502 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 504 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 506 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 1092 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho9_6_p_0(
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1092 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1092 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1092 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12);

#line 523 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho8_6_p_0_1(
#line 526 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 528 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 530 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 1092 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho8_6_p_0(
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1092 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1092 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1092 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12);

#line 547 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho7_6_p_0_1(
#line 550 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 552 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 554 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 1092 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho7_6_p_0(
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1092 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1092 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1092 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12);

#line 571 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho6_6_p_0_1(
#line 574 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 576 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 578 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 1092 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho6_6_p_0(
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1092 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1092 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1092 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12);

#line 595 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho5_6_p_0_1(
#line 598 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 600 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 602 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 1092 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho5_6_p_0(
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1092 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1092 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1092 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12);

#line 619 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho4_6_p_0_1(
#line 622 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 624 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 626 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 1092 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho4_6_p_0(
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1092 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1092 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1092 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12);

#line 643 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho3_6_p_0_1(
#line 646 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 648 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 650 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 1092 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho3_6_p_0(
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1092 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1092 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1092 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12);

#line 667 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho2_6_p_0_1(
#line 670 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 672 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 674 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 1092 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho2_6_p_0(
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1092 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1092 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1092 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12);

#line 392 "pretty_printer.m"
static MR_Integer MR_CALL 
mercury__pretty_printer__IntroducedFrom__func__write_doc_to_stream__392__2_2_f_0(
#line 392 "pretty_printer.m"
  MR_String mercury__pretty_printer__HeadVar__1_109,
#line 392 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__2_110);

#line 392 "pretty_printer.m"
static MR_Integer MR_CALL 
mercury__pretty_printer__IntroducedFrom__func__write_doc_to_stream__392__1_2_f_0(
#line 392 "pretty_printer.m"
  MR_String mercury__pretty_printer__HeadVar__1_109,
#line 392 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__2_110);

#line 1176 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_tree234_2_f_0(
#line 1176 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1176 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5);

#line 1160 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_list_2_f_0(
#line 1160 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1160 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5);

#line 1144 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_version_array_2_f_0(
#line 1144 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1144 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5);

#line 1128 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_array_2_f_0(
#line 1128 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1128 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5);

#line 1121 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_string_2_f_0(
#line 1121 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1121 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5);

#line 1114 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_int_2_f_0(
#line 1114 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1114 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5);

#line 1107 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_float_2_f_0(
#line 1107 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1107 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5);

#line 1100 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_char_2_f_0(
#line 1100 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1100 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5);

#line 877 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0(void);

#line 877 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__pre_initialise_mutable_io_pp_params_0_p_0(void);

#line 861 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__decrement_limit_2_p_0(
#line 861 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 861 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__2_2);

#line 841 "pretty_printer.m"
static MR_Integer MR_CALL 
mercury__pretty_printer__adjust_priority_2_f_0(
#line 841 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Priority_4,
#line 841 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Assoc_5);

#line 830 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__add_parens_if_needed_3_f_0(
#line 830 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__OpPriority_5,
#line 830 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__EnclosingPriority_6,
#line 830 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Doc_7);

#line 819 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__set_formatting_limit_correctly_2_f_0(
#line 819 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 819 "pretty_printer.m"
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

#line 711 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_format_term_6_p_0(
#line 711 "pretty_printer.m"
  MR_String mercury__pretty_printer__Name_7,
#line 711 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Args_8,
#line 711 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_9,
#line 711 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_14,
#line 711 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_15,
#line 711 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_11);

#line 685 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_format_list_5_p_0(
#line 685 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 685 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 685 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__3_3,
#line 685 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_4,
#line 685 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_5);

#line 657 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_pp_7_p_1(
#line 657 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Canonicalize_8,
#line 657 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap_9,
#line 657 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_10,
#line 657 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_11,
#line 657 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_24,
#line 657 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_25,
#line 657 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_13);

#line 655 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_pp_7_p_0(
#line 655 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Canonicalize_8,
#line 655 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap_9,
#line 655 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_10,
#line 655 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_11,
#line 655 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_24,
#line 655 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_25,
#line 655 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_13);

#line 638 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__output_indentation_6_p_0(
#line 638 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_28,
#line 638 "pretty_printer.m"
  MR_Box mercury__pretty_printer__HeadVar__1_1,
#line 638 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 638 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_3,
#line 638 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_4,
#line 638 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_5,
#line 638 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_6);

#line 628 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__format_nl_8_p_0(
#line 628 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_24,
#line 628 "pretty_printer.m"
  MR_Box mercury__pretty_printer__Stream_9,
#line 628 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__LineWidth_10,
#line 628 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Indents_11,
#line 628 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__RemainingWidth_12,
#line 628 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_15,
#line 628 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_16,
#line 628 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_17,
#line 628 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_18);

#line 529 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_docs_11_p_1(
#line 529 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 529 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 529 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 529 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__4_4,
#line 529 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__5_5,
#line 529 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_6,
#line 529 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_7,
#line 529 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_8,
#line 529 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_9,
#line 529 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10,
#line 529 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);

#line 527 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_docs_11_p_0(
#line 527 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 527 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 527 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 527 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__4_4,
#line 527 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__5_5,
#line 527 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_6,
#line 527 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_7,
#line 527 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_8,
#line 527 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_9,
#line 527 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10,
#line 527 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);

#line 475 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__output_current_group_12_p_0(
#line 475 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_71,
#line 475 "pretty_printer.m"
  MR_Box mercury__pretty_printer__HeadVar__1_1,
#line 475 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__2_2,
#line 475 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 475 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__4_4,
#line 475 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__5_5,
#line 475 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__6_6,
#line 475 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7,
#line 475 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_8,
#line 475 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9,
#line 475 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_10,
#line 475 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_11,
#line 475 "pretty_printer.m"
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
#line 894 "pretty_printer.m"

    MR_Bool ML_pretty_printer_is_initialised = MR_NO;
    MR_Word ML_pretty_printer_default_formatter_map = 0;

#line 877 "pretty_printer.m"
MR_Word mercury__pretty_printer__mutable_variable_io_pp_params;
#ifdef MR_THREAD_SAFE
    MercuryLock mercury__pretty_printer__mutable_variable_io_pp_params_lock;
#endif

#line 877 "pretty_printer.m"
void 
mercury__pretty_printer__user_init_pred_0(void)
#line 877 "pretty_printer.m"
{
#line 877 "pretty_printer.m"
	mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0();
}


#line 1644 "pretty_printer.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__pretty_printer__list__pti_list_1__plain_type_desc__type_ctor_info_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0
  }
};

#line 1652 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1657 "pretty_printer.c"
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

#line 1672 "pretty_printer.c"
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

#line 1687 "pretty_printer.c"
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

#line 1702 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1pretty_printer__type_ctor_info_doc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0
  }
};

#line 1710 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer__list__ti_list_1pretty_printer__type_ctor_info_doc_0
};

#line 1715 "pretty_printer.c"
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

#line 1730 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

#line 1735 "pretty_printer.c"
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

#line 1750 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

#line 1758 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_5[2] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer__list__ti_list_1univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0
};

#line 1764 "pretty_printer.c"
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

#line 1779 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_6[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__pretty_printer__list__ti_list_1univ__type_ctor_info_univ_0
};

#line 1785 "pretty_printer.c"
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

#line 1800 "pretty_printer.c"
static const MR_VA_TypeInfo_Struct1 mercury__pretty_printer____vti_func_1pretty_printer__type_ctor_info_doc_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 1,
  {
    (MR_TypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0
  }
};

#line 1809 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer____vti_func_1pretty_printer__type_ctor_info_doc_0
};

#line 1814 "pretty_printer.c"
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

#line 1829 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_pp_internal_0
};

#line 1834 "pretty_printer.c"
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

#line 1849 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_0[2] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_1,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_2
};

#line 1855 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_1[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_0
};

#line 1860 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_2[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_3
};

#line 1865 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_3[5] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_4,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_5,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_6,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_7,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_8
};

#line 1874 "pretty_printer.c"
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

#line 1898 "pretty_printer.c"
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

#line 1911 "pretty_printer.c"
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

#line 1924 "pretty_printer.c"
const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____doc_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____doc_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "doc",
  {     mercury__pretty_printer__pretty_printer__du_name_ordered_doc_0 },
  {     mercury__pretty_printer__pretty_printer__du_ptag_ordered_doc_0 },
  (MR_Integer) 9,
  (MR_Integer) 4,
  mercury__pretty_printer__pretty_printer__functor_number_map_doc_0
};

#line 1941 "pretty_printer.c"
const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_docs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pretty_printer____Unify____docs_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____docs_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "docs",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__pretty_printer__list__ti_list_1pretty_printer__type_ctor_info_doc_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1958 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1type_desc__type_ctor_info_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0
  }
};

#line 1966 "pretty_printer.c"
static const MR_VA_TypeInfo_Struct3 mercury__pretty_printer____vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0,
    (MR_TypeInfo) &mercury__pretty_printer__list__ti_list_1type_desc__type_ctor_info_type_desc_0,
    (MR_TypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0
  }
};

#line 1977 "pretty_printer.c"
const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_formatter_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pretty_printer____Unify____formatter_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____formatter_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "formatter",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__pretty_printer____vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1994 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__pretty_printer____vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0
  }
};

#line 2003 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0
  }
};

#line 2012 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0
  }
};

#line 2021 "pretty_printer.c"
const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_formatter_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pretty_printer____Unify____formatter_map_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____formatter_map_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "formatter_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2038 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_formatting_limit_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2043 "pretty_printer.c"
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

#line 2058 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_formatting_limit_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2063 "pretty_printer.c"
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

#line 2078 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_formatting_limit_0_0[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_formatting_limit_0_0
};

#line 2083 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_formatting_limit_0_1[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_formatting_limit_0_1
};

#line 2088 "pretty_printer.c"
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

#line 2102 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_formatting_limit_0[2] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_formatting_limit_0_0,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_formatting_limit_0_1
};

#line 2108 "pretty_printer.c"
static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_formatting_limit_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2114 "pretty_printer.c"
const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_formatting_limit_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____formatting_limit_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____formatting_limit_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "formatting_limit",
  {     mercury__pretty_printer__pretty_printer__du_name_ordered_formatting_limit_0 },
  {     mercury__pretty_printer__pretty_printer__du_ptag_ordered_formatting_limit_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__pretty_printer__pretty_printer__functor_number_map_formatting_limit_0
};

#line 2131 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2139 "pretty_printer.c"
const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_indents_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pretty_printer____Unify____indents_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____indents_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "indents",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__pretty_printer__list__ti_list_1builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2156 "pretty_printer.c"
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

#line 2171 "pretty_printer.c"
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

#line 2186 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2191 "pretty_printer.c"
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

#line 2206 "pretty_printer.c"
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

#line 2221 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2226 "pretty_printer.c"
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

#line 2241 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_formatting_limit_0
};

#line 2246 "pretty_printer.c"
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

#line 2261 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_0[3] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_0,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_1,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_3
};

#line 2268 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_1[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_2
};

#line 2273 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_2[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_4
};

#line 2278 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_3[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_5
};

#line 2283 "pretty_printer.c"
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

#line 2307 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_pp_internal_0[6] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_1,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_2,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_0,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_3,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_5,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_4
};

#line 2317 "pretty_printer.c"
static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_pp_internal_0[6] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 4
};

#line 2327 "pretty_printer.c"
const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_pp_internal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____pp_internal_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____pp_internal_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "pp_internal",
  {     mercury__pretty_printer__pretty_printer__du_name_ordered_pp_internal_0 },
  {     mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_internal_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mercury__pretty_printer__pretty_printer__functor_number_map_pp_internal_0
};

#line 2344 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_params_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_formatting_limit_0
};

#line 2351 "pretty_printer.c"
static const MR_ConstString mercury__pretty_printer__pretty_printer__field_names_pp_params_0_0[3] = {
  (MR_String) "pp_line_width",
  (MR_String) "pp_max_lines",
  (MR_String) "pp_limit"
};

#line 2358 "pretty_printer.c"
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

#line 2373 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_params_0_0[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_params_0_0
};

#line 2378 "pretty_printer.c"
static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_params_0_0
  }
};

#line 2387 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_pp_params_0[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_params_0_0
};

#line 2392 "pretty_printer.c"
static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_pp_params_0[1] = {
  (MR_Integer) 0
};

#line 2397 "pretty_printer.c"
const MR_TypeCtorInfo_Struct mercury__pretty_printer__pretty_printer__type_ctor_info_pp_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pretty_printer____Unify____pp_params_0_0_10001)),
  ((MR_Box) (mercury__pretty_printer____Compare____pp_params_0_0_10001)),
  (MR_String) "pretty_printer",
  (MR_String) "pp_params",
  {     mercury__pretty_printer__pretty_printer__du_name_ordered_pp_params_0 },
  {     mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__pretty_printer__pretty_printer__functor_number_map_pp_params_0
};

#line 2414 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____doc_0_0_10001(
#line 2417 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2419 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2421 "pretty_printer.c"
{
#line 2423 "pretty_printer.c"
  {
#line 2425 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2428 "pretty_printer.c"
    {
#line 2430 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____doc_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2433 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2435 "pretty_printer.c"
  }
#line 2437 "pretty_printer.c"
}

#line 2440 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____doc_0_0_10001(
#line 2443 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2445 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2447 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2449 "pretty_printer.c"
{
#line 2451 "pretty_printer.c"
  {
#line 2453 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2456 "pretty_printer.c"
    {
#line 2458 "pretty_printer.c"
      mercury__pretty_printer____Compare____doc_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2461 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2463 "pretty_printer.c"
  }
#line 2465 "pretty_printer.c"
}

#line 2468 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____docs_0_0_10001(
#line 2471 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2473 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2475 "pretty_printer.c"
{
#line 2477 "pretty_printer.c"
  {
#line 2479 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2482 "pretty_printer.c"
    {
#line 2484 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____docs_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2487 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2489 "pretty_printer.c"
  }
#line 2491 "pretty_printer.c"
}

#line 2494 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____docs_0_0_10001(
#line 2497 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2499 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2501 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2503 "pretty_printer.c"
{
#line 2505 "pretty_printer.c"
  {
#line 2507 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2510 "pretty_printer.c"
    {
#line 2512 "pretty_printer.c"
      mercury__pretty_printer____Compare____docs_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2515 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2517 "pretty_printer.c"
  }
#line 2519 "pretty_printer.c"
}

#line 2522 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_0_0_10001(
#line 2525 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2527 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2529 "pretty_printer.c"
{
#line 2531 "pretty_printer.c"
  {
#line 2533 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2536 "pretty_printer.c"
    {
#line 2538 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____formatter_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2541 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2543 "pretty_printer.c"
  }
#line 2545 "pretty_printer.c"
}

#line 2548 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____formatter_0_0_10001(
#line 2551 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2553 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2555 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2557 "pretty_printer.c"
{
#line 2559 "pretty_printer.c"
  {
#line 2561 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2564 "pretty_printer.c"
    {
#line 2566 "pretty_printer.c"
      mercury__pretty_printer____Compare____formatter_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2569 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2571 "pretty_printer.c"
  }
#line 2573 "pretty_printer.c"
}

#line 2576 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_map_0_0_10001(
#line 2579 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2581 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2583 "pretty_printer.c"
{
#line 2585 "pretty_printer.c"
  {
#line 2587 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2590 "pretty_printer.c"
    {
#line 2592 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____formatter_map_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2595 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2597 "pretty_printer.c"
  }
#line 2599 "pretty_printer.c"
}

#line 2602 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____formatter_map_0_0_10001(
#line 2605 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2607 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2609 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2611 "pretty_printer.c"
{
#line 2613 "pretty_printer.c"
  {
#line 2615 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2618 "pretty_printer.c"
    {
#line 2620 "pretty_printer.c"
      mercury__pretty_printer____Compare____formatter_map_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2623 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2625 "pretty_printer.c"
  }
#line 2627 "pretty_printer.c"
}

#line 2630 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatting_limit_0_0_10001(
#line 2633 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2635 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2637 "pretty_printer.c"
{
#line 2639 "pretty_printer.c"
  {
#line 2641 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2644 "pretty_printer.c"
    {
#line 2646 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____formatting_limit_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2649 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2651 "pretty_printer.c"
  }
#line 2653 "pretty_printer.c"
}

#line 2656 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____formatting_limit_0_0_10001(
#line 2659 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2661 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2663 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2665 "pretty_printer.c"
{
#line 2667 "pretty_printer.c"
  {
#line 2669 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2672 "pretty_printer.c"
    {
#line 2674 "pretty_printer.c"
      mercury__pretty_printer____Compare____formatting_limit_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2677 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2679 "pretty_printer.c"
  }
#line 2681 "pretty_printer.c"
}

#line 2684 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____indents_0_0_10001(
#line 2687 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2689 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2691 "pretty_printer.c"
{
#line 2693 "pretty_printer.c"
  {
#line 2695 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2698 "pretty_printer.c"
    {
#line 2700 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____indents_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2703 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2705 "pretty_printer.c"
  }
#line 2707 "pretty_printer.c"
}

#line 2710 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____indents_0_0_10001(
#line 2713 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2715 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2717 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2719 "pretty_printer.c"
{
#line 2721 "pretty_printer.c"
  {
#line 2723 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2726 "pretty_printer.c"
    {
#line 2728 "pretty_printer.c"
      mercury__pretty_printer____Compare____indents_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2731 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2733 "pretty_printer.c"
  }
#line 2735 "pretty_printer.c"
}

#line 2738 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_internal_0_0_10001(
#line 2741 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2743 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2745 "pretty_printer.c"
{
#line 2747 "pretty_printer.c"
  {
#line 2749 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2752 "pretty_printer.c"
    {
#line 2754 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____pp_internal_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2757 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2759 "pretty_printer.c"
  }
#line 2761 "pretty_printer.c"
}

#line 2764 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____pp_internal_0_0_10001(
#line 2767 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2769 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2771 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2773 "pretty_printer.c"
{
#line 2775 "pretty_printer.c"
  {
#line 2777 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2780 "pretty_printer.c"
    {
#line 2782 "pretty_printer.c"
      mercury__pretty_printer____Compare____pp_internal_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2785 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2787 "pretty_printer.c"
  }
#line 2789 "pretty_printer.c"
}

#line 2792 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_params_0_0_10001(
#line 2795 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2797 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2799 "pretty_printer.c"
{
#line 2801 "pretty_printer.c"
  {
#line 2803 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2806 "pretty_printer.c"
    {
#line 2808 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____pp_params_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2811 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2813 "pretty_printer.c"
  }
#line 2815 "pretty_printer.c"
}

#line 2818 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____pp_params_0_0_10001(
#line 2821 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2823 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2825 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2827 "pretty_printer.c"
{
#line 2829 "pretty_printer.c"
  {
#line 2831 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2834 "pretty_printer.c"
    {
#line 2836 "pretty_printer.c"
      mercury__pretty_printer____Compare____pp_params_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2839 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2841 "pretty_printer.c"
  }
#line 2843 "pretty_printer.c"
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

#line 1121 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_f_0(
#line 1121 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4)
#line 1121 "pretty_printer.m"
{
#line 1123 "pretty_printer.m"
  {
#line 1123 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1123 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1123 "pretty_printer.m"
    MR_String mercury__pretty_printer__X_6;
#line 1124 "pretty_printer.m"
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
#line 1123 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 675 "string.opt"
      {
#line 675 "string.opt"
        MR_Word mercury__pretty_printer__V_4_12;
#line 675 "string.opt"
        MR_Word mercury__pretty_printer__V_7_14;
#line 675 "string.opt"
        MR_Word mercury__pretty_printer__V_8_16;
#line 675 "string.opt"
        MR_Word mercury__pretty_printer__V_9_17;
#line 675 "string.opt"
        MR_Word mercury__pretty_printer__V_10_18 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[17]);
#line 675 "string.opt"
        MR_Word mercury__pretty_printer__V_12_19;

#line 680 "string.opt"
        {
#line 680 "string.opt"
          mercury__pretty_printer__V_8_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 680 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_8_16, 0) = ((MR_Box) (mercury__pretty_printer__X_6));
#line 680 "string.opt"
        }
#line 684 "string.opt"
        mercury__pretty_printer__V_12_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 681 "string.opt"
        mercury__pretty_printer__V_9_17 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[14]);
#line 679 "string.opt"
        {
#line 679 "string.opt"
          mercury__pretty_printer__V_7_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 679 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_14, 0) = ((MR_Box) (mercury__pretty_printer__V_8_16));
#line 679 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_14, 1) = ((MR_Box) (mercury__pretty_printer__V_9_17));
#line 679 "string.opt"
        }
#line 676 "string.opt"
        {
#line 676 "string.opt"
          mercury__pretty_printer__V_4_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 676 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_12, 0) = ((MR_Box) (mercury__pretty_printer__V_10_18));
#line 676 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_12, 1) = ((MR_Box) (mercury__pretty_printer__V_7_14));
#line 676 "string.opt"
        }
#line 675 "string.opt"
        {
#line 675 "string.opt"
          mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 675 "string.opt"
          MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_4_12));
#line 675 "string.opt"
        }
#line 675 "string.opt"
      }
#line 1123 "pretty_printer.m"
    else
#line 1124 "pretty_printer.m"
      {
#line 1124 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[18]);
#line 1124 "pretty_printer.m"
      }
#line 1123 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1123 "pretty_printer.m"
  }
#line 1121 "pretty_printer.m"
}

#line 1114 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_f_0(
#line 1114 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4)
#line 1114 "pretty_printer.m"
{
#line 1116 "pretty_printer.m"
  {
#line 1116 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1116 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1116 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__X_6;
#line 1117 "pretty_printer.m"
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
#line 1116 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 279 "int.opt"
      {
#line 279 "int.opt"
        MR_String mercury__pretty_printer__V_4_12;

#line 714 "string.opt"
        {
#line 714 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__pretty_printer__X_6, (MR_Integer) 10, &mercury__pretty_printer__V_4_12);
        }
#line 279 "int.opt"
        {
#line 279 "int.opt"
          mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 279 "int.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_4_12));
#line 279 "int.opt"
        }
#line 279 "int.opt"
      }
#line 1116 "pretty_printer.m"
    else
#line 1117 "pretty_printer.m"
      {
#line 1117 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[16]);
#line 1117 "pretty_printer.m"
      }
#line 1116 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1116 "pretty_printer.m"
  }
#line 1114 "pretty_printer.m"
}

#line 1107 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0(
#line 1107 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4)
#line 1107 "pretty_printer.m"
{
#line 1109 "pretty_printer.m"
  {
#line 1109 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1109 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1109 "pretty_printer.m"
    MR_Float mercury__pretty_printer__X_6;
#line 1110 "pretty_printer.m"
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
#line 1109 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 169 "float.opt"
      {
#line 169 "float.opt"
        MR_String mercury__pretty_printer__V_4_12;

#line 726 "string.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__pretty_printer__X_6 ;
		{
#line 726 "string.opt"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 3103 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_4_12  = Str;
#line 726 "string.opt"
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
#line 1109 "pretty_printer.m"
    else
#line 1110 "pretty_printer.m"
      {
#line 1110 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[15]);
#line 1110 "pretty_printer.m"
      }
#line 1109 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1109 "pretty_printer.m"
  }
#line 1107 "pretty_printer.m"
}

#line 1100 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_f_0(
#line 1100 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4)
#line 1100 "pretty_printer.m"
{
#line 1102 "pretty_printer.m"
  {
#line 1102 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1102 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1102 "pretty_printer.m"
    MR_Char mercury__pretty_printer__X_6;
#line 1103 "pretty_printer.m"
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
#line 1102 "pretty_printer.m"
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
#line 1102 "pretty_printer.m"
    else
#line 1103 "pretty_printer.m"
      {
#line 1103 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[14]);
#line 1103 "pretty_printer.m"
      }
#line 1102 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1102 "pretty_printer.m"
  }
#line 1100 "pretty_printer.m"
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
              mercury__pretty_printer__STATE_VARIABLE_A_15_15_13 = mercury__pretty_printer__IntroducedFrom__func__write_doc_to_stream__392__2_2_f_0(mercury__pretty_printer__H_10_9, mercury__pretty_printer__HeadVar__3_3);
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
              mercury__pretty_printer__STATE_VARIABLE_A_15_15_13 = mercury__pretty_printer__IntroducedFrom__func__write_doc_to_stream__392__1_2_f_0(mercury__pretty_printer__H_10_9, mercury__pretty_printer__HeadVar__3_3);
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

#line 3403 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho9_6_p_0_1(
#line 3406 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 3408 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 3410 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 3412 "pretty_printer.c"
{
#line 3414 "pretty_printer.c"
  {
#line 3416 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 3418 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 3420 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 3423 "pretty_printer.c"
    {
#line 3425 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_char_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 3428 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 3430 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 3432 "pretty_printer.c"
  }
#line 3434 "pretty_printer.c"
}

#line 1092 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho9_6_p_0(
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1092 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1092 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1092 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1092 "pretty_printer.m"
{
#line 1096 "pretty_printer.m"
  {
#line 1096 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1096 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[12];
#line 299 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 291 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 291 "pretty_printer.m"
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
#line 299 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 296 "pretty_printer.m"
      {
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 294 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 292 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 292 "pretty_printer.m"
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
#line 294 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 293 "pretty_printer.m"
          {
#line 293 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 293 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 293 "pretty_printer.m"
          }
#line 294 "pretty_printer.m"
        else
#line 295 "pretty_printer.m"
          {
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 295 "pretty_printer.m"
          }
#line 3554 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3556 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 3563 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 298 "pretty_printer.m"
        {
#line 298 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 296 "pretty_printer.m"
      }
#line 299 "pretty_printer.m"
    else
#line 300 "pretty_printer.m"
      {
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 300 "pretty_printer.m"
        {
#line 300 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 3598 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3600 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 48 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 301 "pretty_printer.m"
        {
#line 301 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 3609 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 302 "pretty_printer.m"
        {
#line 302 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 300 "pretty_printer.m"
      }
#line 1096 "pretty_printer.m"
  }
#line 1092 "pretty_printer.m"
}

#line 3623 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho8_6_p_0_1(
#line 3626 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 3628 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 3630 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 3632 "pretty_printer.c"
{
#line 3634 "pretty_printer.c"
  {
#line 3636 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 3638 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 3640 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 3643 "pretty_printer.c"
    {
#line 3645 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_float_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 3648 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 3650 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 3652 "pretty_printer.c"
  }
#line 3654 "pretty_printer.c"
}

#line 1092 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho8_6_p_0(
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1092 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1092 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1092 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1092 "pretty_printer.m"
{
#line 1096 "pretty_printer.m"
  {
#line 1096 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1096 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[11];
#line 299 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 291 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 291 "pretty_printer.m"
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
#line 299 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 296 "pretty_printer.m"
      {
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 294 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 292 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 292 "pretty_printer.m"
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
#line 294 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 293 "pretty_printer.m"
          {
#line 293 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 293 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 293 "pretty_printer.m"
          }
#line 294 "pretty_printer.m"
        else
#line 295 "pretty_printer.m"
          {
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 295 "pretty_printer.m"
          }
#line 3774 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3776 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 3783 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 298 "pretty_printer.m"
        {
#line 298 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 296 "pretty_printer.m"
      }
#line 299 "pretty_printer.m"
    else
#line 300 "pretty_printer.m"
      {
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 300 "pretty_printer.m"
        {
#line 300 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 3818 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3820 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 48 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 301 "pretty_printer.m"
        {
#line 301 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 3829 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 302 "pretty_printer.m"
        {
#line 302 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 300 "pretty_printer.m"
      }
#line 1096 "pretty_printer.m"
  }
#line 1092 "pretty_printer.m"
}

#line 3843 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho7_6_p_0_1(
#line 3846 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 3848 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 3850 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 3852 "pretty_printer.c"
{
#line 3854 "pretty_printer.c"
  {
#line 3856 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 3858 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 3860 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 3863 "pretty_printer.c"
    {
#line 3865 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_int_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 3868 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 3870 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 3872 "pretty_printer.c"
  }
#line 3874 "pretty_printer.c"
}

#line 1092 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho7_6_p_0(
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1092 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1092 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1092 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1092 "pretty_printer.m"
{
#line 1096 "pretty_printer.m"
  {
#line 1096 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1096 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[10];
#line 299 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 291 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 291 "pretty_printer.m"
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
#line 299 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 296 "pretty_printer.m"
      {
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 294 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 292 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 292 "pretty_printer.m"
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
#line 294 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 293 "pretty_printer.m"
          {
#line 293 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 293 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 293 "pretty_printer.m"
          }
#line 294 "pretty_printer.m"
        else
#line 295 "pretty_printer.m"
          {
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 295 "pretty_printer.m"
          }
#line 3994 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3996 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 4003 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 298 "pretty_printer.m"
        {
#line 298 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 296 "pretty_printer.m"
      }
#line 299 "pretty_printer.m"
    else
#line 300 "pretty_printer.m"
      {
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 300 "pretty_printer.m"
        {
#line 300 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 4038 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4040 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 48 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 301 "pretty_printer.m"
        {
#line 301 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 4049 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 302 "pretty_printer.m"
        {
#line 302 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 300 "pretty_printer.m"
      }
#line 1096 "pretty_printer.m"
  }
#line 1092 "pretty_printer.m"
}

#line 4063 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho6_6_p_0_1(
#line 4066 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 4068 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 4070 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 4072 "pretty_printer.c"
{
#line 4074 "pretty_printer.c"
  {
#line 4076 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 4078 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 4080 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 4083 "pretty_printer.c"
    {
#line 4085 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_string_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 4088 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 4090 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 4092 "pretty_printer.c"
  }
#line 4094 "pretty_printer.c"
}

#line 1092 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho6_6_p_0(
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1092 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1092 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1092 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1092 "pretty_printer.m"
{
#line 1096 "pretty_printer.m"
  {
#line 1096 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1096 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[9];
#line 299 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 291 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 291 "pretty_printer.m"
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
#line 299 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 296 "pretty_printer.m"
      {
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 294 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 292 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 292 "pretty_printer.m"
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
#line 294 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 293 "pretty_printer.m"
          {
#line 293 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 293 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 293 "pretty_printer.m"
          }
#line 294 "pretty_printer.m"
        else
#line 295 "pretty_printer.m"
          {
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 295 "pretty_printer.m"
          }
#line 4214 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4216 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 4223 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 298 "pretty_printer.m"
        {
#line 298 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 296 "pretty_printer.m"
      }
#line 299 "pretty_printer.m"
    else
#line 300 "pretty_printer.m"
      {
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 300 "pretty_printer.m"
        {
#line 300 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 4258 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4260 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 48 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 301 "pretty_printer.m"
        {
#line 301 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 4269 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 302 "pretty_printer.m"
        {
#line 302 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 300 "pretty_printer.m"
      }
#line 1096 "pretty_printer.m"
  }
#line 1092 "pretty_printer.m"
}

#line 4283 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho5_6_p_0_1(
#line 4286 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 4288 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 4290 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 4292 "pretty_printer.c"
{
#line 4294 "pretty_printer.c"
  {
#line 4296 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 4298 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 4300 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 4303 "pretty_printer.c"
    {
#line 4305 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_array_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 4308 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 4310 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 4312 "pretty_printer.c"
  }
#line 4314 "pretty_printer.c"
}

#line 1092 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho5_6_p_0(
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1092 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1092 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1092 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1092 "pretty_printer.m"
{
#line 1096 "pretty_printer.m"
  {
#line 1096 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1096 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[8];
#line 299 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 291 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 291 "pretty_printer.m"
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
#line 299 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 296 "pretty_printer.m"
      {
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 294 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 292 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 292 "pretty_printer.m"
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
#line 294 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 293 "pretty_printer.m"
          {
#line 293 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 293 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 293 "pretty_printer.m"
          }
#line 294 "pretty_printer.m"
        else
#line 295 "pretty_printer.m"
          {
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 295 "pretty_printer.m"
          }
#line 4434 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4436 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 4443 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 298 "pretty_printer.m"
        {
#line 298 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 296 "pretty_printer.m"
      }
#line 299 "pretty_printer.m"
    else
#line 300 "pretty_printer.m"
      {
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 300 "pretty_printer.m"
        {
#line 300 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 4478 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4480 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 48 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 301 "pretty_printer.m"
        {
#line 301 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 4489 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 302 "pretty_printer.m"
        {
#line 302 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 300 "pretty_printer.m"
      }
#line 1096 "pretty_printer.m"
  }
#line 1092 "pretty_printer.m"
}

#line 4503 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho4_6_p_0_1(
#line 4506 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 4508 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 4510 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 4512 "pretty_printer.c"
{
#line 4514 "pretty_printer.c"
  {
#line 4516 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 4518 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 4520 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 4523 "pretty_printer.c"
    {
#line 4525 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_list_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 4528 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 4530 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 4532 "pretty_printer.c"
  }
#line 4534 "pretty_printer.c"
}

#line 1092 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho4_6_p_0(
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1092 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1092 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1092 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1092 "pretty_printer.m"
{
#line 1096 "pretty_printer.m"
  {
#line 1096 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1096 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[7];
#line 299 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 291 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 291 "pretty_printer.m"
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
#line 299 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 296 "pretty_printer.m"
      {
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 294 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 292 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 292 "pretty_printer.m"
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
#line 294 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 293 "pretty_printer.m"
          {
#line 293 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 293 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 293 "pretty_printer.m"
          }
#line 294 "pretty_printer.m"
        else
#line 295 "pretty_printer.m"
          {
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 295 "pretty_printer.m"
          }
#line 4654 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4656 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 4663 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 298 "pretty_printer.m"
        {
#line 298 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 296 "pretty_printer.m"
      }
#line 299 "pretty_printer.m"
    else
#line 300 "pretty_printer.m"
      {
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 300 "pretty_printer.m"
        {
#line 300 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 4698 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4700 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 48 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 301 "pretty_printer.m"
        {
#line 301 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 4709 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 302 "pretty_printer.m"
        {
#line 302 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 300 "pretty_printer.m"
      }
#line 1096 "pretty_printer.m"
  }
#line 1092 "pretty_printer.m"
}

#line 4723 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho3_6_p_0_1(
#line 4726 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 4728 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 4730 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 4732 "pretty_printer.c"
{
#line 4734 "pretty_printer.c"
  {
#line 4736 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 4738 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 4740 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 4743 "pretty_printer.c"
    {
#line 4745 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_tree234_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 4748 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 4750 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 4752 "pretty_printer.c"
  }
#line 4754 "pretty_printer.c"
}

#line 1092 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho3_6_p_0(
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1092 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1092 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1092 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1092 "pretty_printer.m"
{
#line 1096 "pretty_printer.m"
  {
#line 1096 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1096 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[6];
#line 299 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 291 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 291 "pretty_printer.m"
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
#line 299 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 296 "pretty_printer.m"
      {
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 294 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 292 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 292 "pretty_printer.m"
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
#line 294 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 293 "pretty_printer.m"
          {
#line 293 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 293 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 293 "pretty_printer.m"
          }
#line 294 "pretty_printer.m"
        else
#line 295 "pretty_printer.m"
          {
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 295 "pretty_printer.m"
          }
#line 4874 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4876 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 4883 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 298 "pretty_printer.m"
        {
#line 298 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 296 "pretty_printer.m"
      }
#line 299 "pretty_printer.m"
    else
#line 300 "pretty_printer.m"
      {
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 300 "pretty_printer.m"
        {
#line 300 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 4918 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4920 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 48 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 301 "pretty_printer.m"
        {
#line 301 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 4929 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 302 "pretty_printer.m"
        {
#line 302 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 300 "pretty_printer.m"
      }
#line 1096 "pretty_printer.m"
  }
#line 1092 "pretty_printer.m"
}

#line 4943 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho2_6_p_0_1(
#line 4946 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 4948 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 4950 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 4952 "pretty_printer.c"
{
#line 4954 "pretty_printer.c"
  {
#line 4956 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 4958 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 4960 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 4963 "pretty_printer.c"
    {
#line 4965 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_version_array_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 4968 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 4970 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 4972 "pretty_printer.c"
  }
#line 4974 "pretty_printer.c"
}

#line 1092 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho2_6_p_0(
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1092 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1092 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1092 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1092 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1092 "pretty_printer.m"
{
#line 1096 "pretty_printer.m"
  {
#line 1096 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1096 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[5];
#line 299 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 291 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 291 "pretty_printer.m"
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
#line 299 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 296 "pretty_printer.m"
      {
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 294 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 292 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 292 "pretty_printer.m"
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
#line 294 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 293 "pretty_printer.m"
          {
#line 293 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 293 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 293 "pretty_printer.m"
          }
#line 294 "pretty_printer.m"
        else
#line 295 "pretty_printer.m"
          {
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 295 "pretty_printer.m"
          }
#line 5094 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 5096 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 5103 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 298 "pretty_printer.m"
        {
#line 298 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 296 "pretty_printer.m"
      }
#line 299 "pretty_printer.m"
    else
#line 300 "pretty_printer.m"
      {
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 300 "pretty_printer.m"
        {
#line 300 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 5138 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 5140 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 48 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 301 "pretty_printer.m"
        {
#line 301 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 5149 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 302 "pretty_printer.m"
        {
#line 302 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 300 "pretty_printer.m"
      }
#line 1096 "pretty_printer.m"
  }
#line 1092 "pretty_printer.m"
}

#line 392 "pretty_printer.m"
static MR_Integer MR_CALL 
mercury__pretty_printer__IntroducedFrom__func__write_doc_to_stream__392__2_2_f_0(
#line 392 "pretty_printer.m"
  MR_String mercury__pretty_printer__HeadVar__1_109,
#line 392 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__2_110)
#line 392 "pretty_printer.m"
{
#line 392 "pretty_printer.m"
  {
#line 392 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 392 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__HeadVar__3_111;
#line 392 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_112_112;

#line 392 "pretty_printer.m"
    {
#line 392 "pretty_printer.m"
      mercury__pretty_printer__V_112_112 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__HeadVar__1_109);
    }
#line 392 "pretty_printer.m"
    mercury__pretty_printer__HeadVar__3_111 = (mercury__pretty_printer__V_112_112 + mercury__pretty_printer__HeadVar__2_110);
#line 392 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_111;
#line 392 "pretty_printer.m"
  }
#line 392 "pretty_printer.m"
}

#line 392 "pretty_printer.m"
static MR_Integer MR_CALL 
mercury__pretty_printer__IntroducedFrom__func__write_doc_to_stream__392__1_2_f_0(
#line 392 "pretty_printer.m"
  MR_String mercury__pretty_printer__HeadVar__1_109,
#line 392 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__2_110)
#line 392 "pretty_printer.m"
{
#line 392 "pretty_printer.m"
  {
#line 392 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 392 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__HeadVar__3_111;
#line 392 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_112_112;

#line 392 "pretty_printer.m"
    {
#line 392 "pretty_printer.m"
      mercury__pretty_printer__V_112_112 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__HeadVar__1_109);
    }
#line 392 "pretty_printer.m"
    mercury__pretty_printer__HeadVar__3_111 = (mercury__pretty_printer__V_112_112 + mercury__pretty_printer__HeadVar__2_110);
#line 392 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_111;
#line 392 "pretty_printer.m"
  }
#line 392 "pretty_printer.m"
}

#line 201 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer____Compare____pp_params_0_0(
#line 201 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
#line 201 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 201 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3)
#line 201 "pretty_printer.m"
{
#line 201 "pretty_printer.m"
  {
#line 201 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 201 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastX_12 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;
#line 201 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastY_13 = (MR_Integer) mercury__pretty_printer__HeadVar__3_3;

#line 201 "pretty_printer.m"
    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_12 == mercury__pretty_printer__CastY_13);
#line 201 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 5251 "pretty_printer.c"
      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 201 "pretty_printer.m"
    else
#line 201 "pretty_printer.m"
      {
#line 201 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 201 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 201 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 2)));
#line 201 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));
#line 201 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));
#line 201 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 2)));
#line 201 "pretty_printer.m"
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
#line 5294 "pretty_printer.c"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_10_10 == (MR_Integer) 0);
#line 201 "pretty_printer.m"
        mercury__pretty_printer__succeeded = !(mercury__pretty_printer__succeeded);
#line 201 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 201 "pretty_printer.m"
          *mercury__pretty_printer__HeadVar__1_1 = mercury__pretty_printer__V_10_10;
#line 201 "pretty_printer.m"
        else
#line 201 "pretty_printer.m"
          {
#line 201 "pretty_printer.m"
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
#line 5331 "pretty_printer.c"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_11_11 == (MR_Integer) 0);
#line 201 "pretty_printer.m"
            mercury__pretty_printer__succeeded = !(mercury__pretty_printer__succeeded);
#line 201 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 201 "pretty_printer.m"
              *mercury__pretty_printer__HeadVar__1_1 = mercury__pretty_printer__V_11_11;
#line 201 "pretty_printer.m"
            else
#line 201 "pretty_printer.m"
              {
#line 201 "pretty_printer.m"
                mercury__pretty_printer____Compare____formatting_limit_0_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__V_6_6, mercury__pretty_printer__V_9_9);
#line 201 "pretty_printer.m"
                return;
              }
#line 201 "pretty_printer.m"
          }
#line 201 "pretty_printer.m"
      }
#line 201 "pretty_printer.m"
  }
#line 201 "pretty_printer.m"
}

#line 201 "pretty_printer.m"
MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_params_0_0(
#line 201 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 201 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 201 "pretty_printer.m"
{
#line 201 "pretty_printer.m"
  {
#line 201 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 201 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastX_9 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 201 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastY_10 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 201 "pretty_printer.m"
    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_9 == mercury__pretty_printer__CastY_10);
#line 201 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 201 "pretty_printer.m"
      mercury__pretty_printer__succeeded = MR_TRUE;
#line 201 "pretty_printer.m"
    else
#line 201 "pretty_printer.m"
      {
#line 201 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 201 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
#line 201 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 2)));
#line 201 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 201 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 201 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 2)));

#line 5398 "pretty_printer.c"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_3_3 == mercury__pretty_printer__V_6_6);
#line 201 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 201 "pretty_printer.m"
          {
#line 5404 "pretty_printer.c"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_4_4 == mercury__pretty_printer__V_7_7);
#line 201 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 5408 "pretty_printer.c"
              {
#line 5410 "pretty_printer.c"
                return mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____formatting_limit_0_0(mercury__pretty_printer__V_5_5, mercury__pretty_printer__V_8_8);
              }
#line 201 "pretty_printer.m"
          }
#line 201 "pretty_printer.m"
      }
#line 201 "pretty_printer.m"
    return mercury__pretty_printer__succeeded;
#line 201 "pretty_printer.m"
  }
#line 201 "pretty_printer.m"
}

#line 264 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer____Compare____pp_internal_0_0(
#line 264 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
#line 264 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 264 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3)
#line 264 "pretty_printer.m"
{
#line 264 "pretty_printer.m"
  {
#line 264 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 264 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastX_40 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;
#line 264 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastY_41 = (MR_Integer) mercury__pretty_printer__HeadVar__3_3;

#line 264 "pretty_printer.m"
    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_40 == mercury__pretty_printer__CastY_41);
#line 264 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 5448 "pretty_printer.c"
      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 264 "pretty_printer.m"
    else
#line 264 "pretty_printer.m"
#line 264 "pretty_printer.m"
      switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) {
#line 264 "pretty_printer.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 264 "pretty_printer.m"
        case (MR_Integer) 0:
#line 264 "pretty_printer.m"
#line 264 "pretty_printer.m"
          switch (MR_unmkbody(mercury__pretty_printer__HeadVar__2_2)) {
#line 264 "pretty_printer.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 264 "pretty_printer.m"
            case (MR_Integer) 0:
#line 264 "pretty_printer.m"
#line 264 "pretty_printer.m"
              switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 264 "pretty_printer.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 264 "pretty_printer.m"
                case (MR_Integer) 0:
#line 264 "pretty_printer.m"
#line 264 "pretty_printer.m"
                  switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 264 "pretty_printer.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 264 "pretty_printer.m"
                    case (MR_Integer) 0:
#line 264 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 264 "pretty_printer.m"
                      break;
#line 264 "pretty_printer.m"
                    case (MR_Integer) 1:
#line 264 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "pretty_printer.m"
                      break;
#line 264 "pretty_printer.m"
                    case (MR_Integer) 2:
#line 264 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "pretty_printer.m"
                      break;
#line 264 "pretty_printer.m"
                  }
#line 264 "pretty_printer.m"
                  break;
#line 264 "pretty_printer.m"
                case (MR_Integer) 1:
#line 5502 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "pretty_printer.m"
                  break;
#line 264 "pretty_printer.m"
                case (MR_Integer) 2:
#line 5508 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "pretty_printer.m"
                  break;
#line 264 "pretty_printer.m"
                case (MR_Integer) 3:
#line 5514 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "pretty_printer.m"
                  break;
#line 264 "pretty_printer.m"
              }
#line 264 "pretty_printer.m"
              break;
#line 264 "pretty_printer.m"
            case (MR_Integer) 1:
#line 264 "pretty_printer.m"
#line 264 "pretty_printer.m"
              switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 264 "pretty_printer.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 264 "pretty_printer.m"
                case (MR_Integer) 0:
#line 264 "pretty_printer.m"
#line 264 "pretty_printer.m"
                  switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 264 "pretty_printer.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 264 "pretty_printer.m"
                    case (MR_Integer) 0:
#line 264 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "pretty_printer.m"
                      break;
#line 264 "pretty_printer.m"
                    case (MR_Integer) 1:
#line 264 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 264 "pretty_printer.m"
                      break;
#line 264 "pretty_printer.m"
                    case (MR_Integer) 2:
#line 264 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "pretty_printer.m"
                      break;
#line 264 "pretty_printer.m"
                  }
#line 264 "pretty_printer.m"
                  break;
#line 264 "pretty_printer.m"
                case (MR_Integer) 1:
#line 5560 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "pretty_printer.m"
                  break;
#line 264 "pretty_printer.m"
                case (MR_Integer) 2:
#line 5566 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "pretty_printer.m"
                  break;
#line 264 "pretty_printer.m"
                case (MR_Integer) 3:
#line 5572 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "pretty_printer.m"
                  break;
#line 264 "pretty_printer.m"
              }
#line 264 "pretty_printer.m"
              break;
#line 264 "pretty_printer.m"
            case (MR_Integer) 2:
#line 264 "pretty_printer.m"
#line 264 "pretty_printer.m"
              switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 264 "pretty_printer.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 264 "pretty_printer.m"
                case (MR_Integer) 0:
#line 264 "pretty_printer.m"
#line 264 "pretty_printer.m"
                  switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 264 "pretty_printer.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 264 "pretty_printer.m"
                    case (MR_Integer) 0:
#line 264 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "pretty_printer.m"
                      break;
#line 264 "pretty_printer.m"
                    case (MR_Integer) 1:
#line 264 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "pretty_printer.m"
                      break;
#line 264 "pretty_printer.m"
                    case (MR_Integer) 2:
#line 264 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 264 "pretty_printer.m"
                      break;
#line 264 "pretty_printer.m"
                  }
#line 264 "pretty_printer.m"
                  break;
#line 264 "pretty_printer.m"
                case (MR_Integer) 1:
#line 5618 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "pretty_printer.m"
                  break;
#line 264 "pretty_printer.m"
                case (MR_Integer) 2:
#line 5624 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "pretty_printer.m"
                  break;
#line 264 "pretty_printer.m"
                case (MR_Integer) 3:
#line 5630 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "pretty_printer.m"
                  break;
#line 264 "pretty_printer.m"
              }
#line 264 "pretty_printer.m"
              break;
#line 264 "pretty_printer.m"
          }
#line 264 "pretty_printer.m"
          break;
#line 264 "pretty_printer.m"
        case (MR_Integer) 1:
#line 264 "pretty_printer.m"
          {
#line 264 "pretty_printer.m"
            MR_String mercury__pretty_printer__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

#line 264 "pretty_printer.m"
#line 264 "pretty_printer.m"
            switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 264 "pretty_printer.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 264 "pretty_printer.m"
              case (MR_Integer) 0:
#line 264 "pretty_printer.m"
#line 264 "pretty_printer.m"
                switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 264 "pretty_printer.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 264 "pretty_printer.m"
                  case (MR_Integer) 0:
#line 5663 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "pretty_printer.m"
                    break;
#line 264 "pretty_printer.m"
                  case (MR_Integer) 1:
#line 5669 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "pretty_printer.m"
                    break;
#line 264 "pretty_printer.m"
                  case (MR_Integer) 2:
#line 5675 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "pretty_printer.m"
                    break;
#line 264 "pretty_printer.m"
                }
#line 264 "pretty_printer.m"
                break;
#line 264 "pretty_printer.m"
              case (MR_Integer) 1:
#line 264 "pretty_printer.m"
                {
#line 264 "pretty_printer.m"
                  MR_String mercury__pretty_printer__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));
#line 264 "pretty_printer.m"
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

#line 5707 "pretty_printer.c"

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
#line 264 "pretty_printer.m"
                }
#line 264 "pretty_printer.m"
                break;
#line 264 "pretty_printer.m"
              case (MR_Integer) 2:
#line 5742 "pretty_printer.c"
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "pretty_printer.m"
                break;
#line 264 "pretty_printer.m"
              case (MR_Integer) 3:
#line 5748 "pretty_printer.c"
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "pretty_printer.m"
                break;
#line 264 "pretty_printer.m"
            }
#line 264 "pretty_printer.m"
          }
#line 264 "pretty_printer.m"
          break;
#line 264 "pretty_printer.m"
        case (MR_Integer) 2:
#line 264 "pretty_printer.m"
          {
#line 264 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

#line 264 "pretty_printer.m"
#line 264 "pretty_printer.m"
            switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 264 "pretty_printer.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 264 "pretty_printer.m"
              case (MR_Integer) 0:
#line 264 "pretty_printer.m"
#line 264 "pretty_printer.m"
                switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 264 "pretty_printer.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 264 "pretty_printer.m"
                  case (MR_Integer) 0:
#line 5779 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "pretty_printer.m"
                    break;
#line 264 "pretty_printer.m"
                  case (MR_Integer) 1:
#line 5785 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "pretty_printer.m"
                    break;
#line 264 "pretty_printer.m"
                  case (MR_Integer) 2:
#line 5791 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "pretty_printer.m"
                    break;
#line 264 "pretty_printer.m"
                }
#line 264 "pretty_printer.m"
                break;
#line 264 "pretty_printer.m"
              case (MR_Integer) 1:
#line 5801 "pretty_printer.c"
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "pretty_printer.m"
                break;
#line 264 "pretty_printer.m"
              case (MR_Integer) 2:
#line 264 "pretty_printer.m"
                {
#line 264 "pretty_printer.m"
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
#line 264 "pretty_printer.m"
                }
#line 264 "pretty_printer.m"
                break;
#line 264 "pretty_printer.m"
              case (MR_Integer) 3:
#line 5840 "pretty_printer.c"
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "pretty_printer.m"
                break;
#line 264 "pretty_printer.m"
            }
#line 264 "pretty_printer.m"
          }
#line 264 "pretty_printer.m"
          break;
#line 264 "pretty_printer.m"
        case (MR_Integer) 3:
#line 264 "pretty_printer.m"
          {
#line 264 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

#line 264 "pretty_printer.m"
#line 264 "pretty_printer.m"
            switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 264 "pretty_printer.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 264 "pretty_printer.m"
              case (MR_Integer) 0:
#line 264 "pretty_printer.m"
#line 264 "pretty_printer.m"
                switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 264 "pretty_printer.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 264 "pretty_printer.m"
                  case (MR_Integer) 0:
#line 5871 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "pretty_printer.m"
                    break;
#line 264 "pretty_printer.m"
                  case (MR_Integer) 1:
#line 5877 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "pretty_printer.m"
                    break;
#line 264 "pretty_printer.m"
                  case (MR_Integer) 2:
#line 5883 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "pretty_printer.m"
                    break;
#line 264 "pretty_printer.m"
                }
#line 264 "pretty_printer.m"
                break;
#line 264 "pretty_printer.m"
              case (MR_Integer) 1:
#line 5893 "pretty_printer.c"
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "pretty_printer.m"
                break;
#line 264 "pretty_printer.m"
              case (MR_Integer) 2:
#line 5899 "pretty_printer.c"
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "pretty_printer.m"
                break;
#line 264 "pretty_printer.m"
              case (MR_Integer) 3:
#line 264 "pretty_printer.m"
                {
#line 264 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));

#line 264 "pretty_printer.m"
                  {
#line 264 "pretty_printer.m"
                    mercury__pretty_printer____Compare____formatting_limit_0_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__V_46_46, mercury__pretty_printer__V_39_39);
#line 264 "pretty_printer.m"
                    return;
                  }
#line 264 "pretty_printer.m"
                }
#line 264 "pretty_printer.m"
                break;
#line 264 "pretty_printer.m"
            }
#line 264 "pretty_printer.m"
          }
#line 264 "pretty_printer.m"
          break;
#line 264 "pretty_printer.m"
      }
#line 264 "pretty_printer.m"
  }
#line 264 "pretty_printer.m"
}

#line 264 "pretty_printer.m"
MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_internal_0_0(
#line 264 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 264 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 264 "pretty_printer.m"
{
#line 264 "pretty_printer.m"
  {
#line 264 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 264 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastX_15 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 264 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastY_16 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 264 "pretty_printer.m"
    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_15 == mercury__pretty_printer__CastY_16);
#line 264 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 264 "pretty_printer.m"
      mercury__pretty_printer__succeeded = MR_TRUE;
#line 264 "pretty_printer.m"
    else
#line 264 "pretty_printer.m"
#line 264 "pretty_printer.m"
      switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) {
#line 264 "pretty_printer.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 264 "pretty_printer.m"
        case (MR_Integer) 0:
#line 264 "pretty_printer.m"
#line 264 "pretty_printer.m"
          switch (MR_unmkbody(mercury__pretty_printer__HeadVar__1_1)) {
#line 264 "pretty_printer.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 264 "pretty_printer.m"
            case (MR_Integer) 0:
#line 264 "pretty_printer.m"
              {
#line 264 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__CastX_3 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 264 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__CastY_4 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 264 "pretty_printer.m"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastY_4 == mercury__pretty_printer__CastX_3);
#line 264 "pretty_printer.m"
              }
#line 264 "pretty_printer.m"
              break;
#line 264 "pretty_printer.m"
            case (MR_Integer) 1:
#line 264 "pretty_printer.m"
              {
#line 264 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__CastX_5 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 264 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__CastY_6 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 264 "pretty_printer.m"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastY_6 == mercury__pretty_printer__CastX_5);
#line 264 "pretty_printer.m"
              }
#line 264 "pretty_printer.m"
              break;
#line 264 "pretty_printer.m"
            case (MR_Integer) 2:
#line 264 "pretty_printer.m"
              {
#line 264 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__CastX_9 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 264 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__CastY_10 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 264 "pretty_printer.m"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastY_10 == mercury__pretty_printer__CastX_9);
#line 264 "pretty_printer.m"
              }
#line 264 "pretty_printer.m"
              break;
#line 264 "pretty_printer.m"
          }
#line 264 "pretty_printer.m"
          break;
#line 264 "pretty_printer.m"
        case (MR_Integer) 1:
#line 264 "pretty_printer.m"
          {
#line 264 "pretty_printer.m"
            MR_String mercury__pretty_printer__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 264 "pretty_printer.m"
            MR_String mercury__pretty_printer__V_8_8;

#line 264 "pretty_printer.m"
            mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 264 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 264 "pretty_printer.m"
              {
#line 264 "pretty_printer.m"
                mercury__pretty_printer__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 6038 "pretty_printer.c"
                mercury__pretty_printer__succeeded = (strcmp(mercury__pretty_printer__V_7_7, mercury__pretty_printer__V_8_8) == 0);
#line 264 "pretty_printer.m"
              }
#line 264 "pretty_printer.m"
          }
#line 264 "pretty_printer.m"
          break;
#line 264 "pretty_printer.m"
        case (MR_Integer) 2:
#line 264 "pretty_printer.m"
          {
#line 264 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 264 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__V_12_12;

#line 264 "pretty_printer.m"
            mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 264 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 264 "pretty_printer.m"
              {
#line 264 "pretty_printer.m"
                mercury__pretty_printer__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 6063 "pretty_printer.c"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_11_11 == mercury__pretty_printer__V_12_12);
#line 264 "pretty_printer.m"
              }
#line 264 "pretty_printer.m"
          }
#line 264 "pretty_printer.m"
          break;
#line 264 "pretty_printer.m"
        case (MR_Integer) 3:
#line 264 "pretty_printer.m"
          {
#line 264 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 264 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_14_14;

#line 264 "pretty_printer.m"
            mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 264 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 264 "pretty_printer.m"
              {
#line 264 "pretty_printer.m"
                mercury__pretty_printer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 6088 "pretty_printer.c"
                {
#line 6090 "pretty_printer.c"
                  return mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____formatting_limit_0_0(mercury__pretty_printer__V_13_13, mercury__pretty_printer__V_14_14);
                }
#line 264 "pretty_printer.m"
              }
#line 264 "pretty_printer.m"
          }
#line 264 "pretty_printer.m"
          break;
#line 264 "pretty_printer.m"
      }
#line 264 "pretty_printer.m"
    return mercury__pretty_printer__succeeded;
#line 264 "pretty_printer.m"
  }
#line 264 "pretty_printer.m"
}

#line 262 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer____Compare____indents_0_0(
#line 262 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
#line 262 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 262 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3)
#line 262 "pretty_printer.m"
{
#line 262 "pretty_printer.m"
  {
#line 262 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 262 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_6_6 = (MR_Word) &mercury__pretty_printer_scalar_common_1[4];
#line 262 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar1_4 = mercury__pretty_printer__HeadVar__2_2;
#line 262 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar2_5 = mercury__pretty_printer__HeadVar__3_3;

#line 262 "pretty_printer.m"
    {
#line 262 "pretty_printer.m"
      mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_6_6, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_4)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_5)));
#line 262 "pretty_printer.m"
      return;
    }
#line 262 "pretty_printer.m"
  }
#line 262 "pretty_printer.m"
}

#line 262 "pretty_printer.m"
MR_bool MR_CALL 
mercury__pretty_printer____Unify____indents_0_0(
#line 262 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 262 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 262 "pretty_printer.m"
{
#line 262 "pretty_printer.m"
  {
#line 262 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 262 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_5_5 = (MR_Word) &mercury__pretty_printer_scalar_common_1[4];
#line 262 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar1_3 = mercury__pretty_printer__HeadVar__1_1;
#line 262 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar2_4 = mercury__pretty_printer__HeadVar__2_2;

#line 262 "pretty_printer.m"
    {
#line 262 "pretty_printer.m"
      return mercury__pretty_printer__succeeded = mercury__builtin__unify_2_p_0(mercury__pretty_printer__TypeInfo_5_5, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_3)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_4)));
    }
#line 262 "pretty_printer.m"
    return mercury__pretty_printer__succeeded;
#line 262 "pretty_printer.m"
  }
#line 262 "pretty_printer.m"
}

#line 152 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer____Compare____formatting_limit_0_0(
#line 152 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
#line 152 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 152 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3)
#line 152 "pretty_printer.m"
{
#line 152 "pretty_printer.m"
  {
#line 152 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 152 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastX_12 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;
#line 152 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastY_13 = (MR_Integer) mercury__pretty_printer__HeadVar__3_3;

#line 152 "pretty_printer.m"
    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_12 == mercury__pretty_printer__CastY_13);
#line 152 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 6198 "pretty_printer.c"
      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 152 "pretty_printer.m"
    else
#line 152 "pretty_printer.m"
    if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 152 "pretty_printer.m"
      {
#line 152 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

#line 152 "pretty_printer.m"
        if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 152 "pretty_printer.m"
          {
#line 152 "pretty_printer.m"
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
#line 152 "pretty_printer.m"
          }
#line 152 "pretty_printer.m"
        else
#line 6242 "pretty_printer.c"
          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 152 "pretty_printer.m"
      }
#line 152 "pretty_printer.m"
    else
#line 152 "pretty_printer.m"
      {
#line 152 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

#line 152 "pretty_printer.m"
        if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6255 "pretty_printer.c"
          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 152 "pretty_printer.m"
        else
#line 152 "pretty_printer.m"
          {
#line 152 "pretty_printer.m"
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
#line 152 "pretty_printer.m"
          }
#line 152 "pretty_printer.m"
      }
#line 152 "pretty_printer.m"
  }
#line 152 "pretty_printer.m"
}

#line 152 "pretty_printer.m"
MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatting_limit_0_0(
#line 152 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 152 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 152 "pretty_printer.m"
{
#line 152 "pretty_printer.m"
  {
#line 152 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 152 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastX_7 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 152 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastY_8 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 152 "pretty_printer.m"
    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_7 == mercury__pretty_printer__CastY_8);
#line 152 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 152 "pretty_printer.m"
      mercury__pretty_printer__succeeded = MR_TRUE;
#line 152 "pretty_printer.m"
    else
#line 152 "pretty_printer.m"
    if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 152 "pretty_printer.m"
      {
#line 152 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 152 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_4_4;

#line 152 "pretty_printer.m"
        mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 152 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 152 "pretty_printer.m"
          {
#line 152 "pretty_printer.m"
            mercury__pretty_printer__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 6338 "pretty_printer.c"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_3_3 == mercury__pretty_printer__V_4_4);
#line 152 "pretty_printer.m"
          }
#line 152 "pretty_printer.m"
      }
#line 152 "pretty_printer.m"
    else
#line 152 "pretty_printer.m"
      {
#line 152 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 152 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_6_6;

#line 152 "pretty_printer.m"
        mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 152 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 152 "pretty_printer.m"
          {
#line 152 "pretty_printer.m"
            mercury__pretty_printer__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 6361 "pretty_printer.c"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_5_5 == mercury__pretty_printer__V_6_6);
#line 152 "pretty_printer.m"
          }
#line 152 "pretty_printer.m"
      }
#line 152 "pretty_printer.m"
    return mercury__pretty_printer__succeeded;
#line 152 "pretty_printer.m"
  }
#line 152 "pretty_printer.m"
}

#line 260 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer____Compare____formatter_map_0_0(
#line 260 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
#line 260 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 260 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3)
#line 260 "pretty_printer.m"
{
#line 260 "pretty_printer.m"
  {
#line 260 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 260 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_6_6 = (MR_Word) &mercury__pretty_printer_scalar_common_3[3];
#line 260 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar1_4 = mercury__pretty_printer__HeadVar__2_2;
#line 260 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar2_5 = mercury__pretty_printer__HeadVar__3_3;

#line 260 "pretty_printer.m"
    {
#line 260 "pretty_printer.m"
      mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_6_6, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_4)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_5)));
#line 260 "pretty_printer.m"
      return;
    }
#line 260 "pretty_printer.m"
  }
#line 260 "pretty_printer.m"
}

#line 260 "pretty_printer.m"
MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_map_0_0(
#line 260 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 260 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 260 "pretty_printer.m"
{
#line 260 "pretty_printer.m"
  {
#line 260 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 260 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_5_5 = (MR_Word) &mercury__pretty_printer_scalar_common_3[3];
#line 260 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar1_3 = mercury__pretty_printer__HeadVar__1_1;
#line 260 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar2_4 = mercury__pretty_printer__HeadVar__2_2;

#line 260 "pretty_printer.m"
    {
#line 260 "pretty_printer.m"
      return mercury__pretty_printer__succeeded = mercury__builtin__unify_2_p_0(mercury__pretty_printer__TypeInfo_5_5, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_3)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_4)));
    }
#line 260 "pretty_printer.m"
    return mercury__pretty_printer__succeeded;
#line 260 "pretty_printer.m"
  }
#line 260 "pretty_printer.m"
}

#line 162 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer____Compare____formatter_0_0(
#line 162 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
#line 162 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 162 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3)
#line 162 "pretty_printer.m"
{
#line 162 "pretty_printer.m"
  {
#line 162 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 162 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_6_6 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 162 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar1_4 = mercury__pretty_printer__HeadVar__2_2;
#line 162 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar2_5 = mercury__pretty_printer__HeadVar__3_3;

#line 162 "pretty_printer.m"
    {
#line 162 "pretty_printer.m"
      mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_6_6, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_4)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_5)));
#line 162 "pretty_printer.m"
      return;
    }
#line 162 "pretty_printer.m"
  }
#line 162 "pretty_printer.m"
}

#line 162 "pretty_printer.m"
MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_0_0(
#line 162 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 162 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 162 "pretty_printer.m"
{
#line 162 "pretty_printer.m"
  {
#line 162 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 162 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar1_3 = mercury__pretty_printer__HeadVar__1_1;
#line 162 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar2_4 = mercury__pretty_printer__HeadVar__2_2;

#line 162 "pretty_printer.m"
    {
#line 162 "pretty_printer.m"
      return mercury__pretty_printer__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__pretty_printer__Cast_HeadVar1_3, (MR_Word) mercury__pretty_printer__Cast_HeadVar2_4);
    }
#line 162 "pretty_printer.m"
    return mercury__pretty_printer__succeeded;
#line 162 "pretty_printer.m"
  }
#line 162 "pretty_printer.m"
}

#line 99 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer____Compare____docs_0_0(
#line 99 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
#line 99 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 99 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3)
#line 99 "pretty_printer.m"
{
#line 99 "pretty_printer.m"
  {
#line 99 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 99 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_6_6 = (MR_Word) &mercury__pretty_printer_scalar_common_1[3];
#line 99 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar1_4 = mercury__pretty_printer__HeadVar__2_2;
#line 99 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar2_5 = mercury__pretty_printer__HeadVar__3_3;

#line 99 "pretty_printer.m"
    {
#line 99 "pretty_printer.m"
      mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_6_6, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_4)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_5)));
#line 99 "pretty_printer.m"
      return;
    }
#line 99 "pretty_printer.m"
  }
#line 99 "pretty_printer.m"
}

#line 99 "pretty_printer.m"
MR_bool MR_CALL 
mercury__pretty_printer____Unify____docs_0_0(
#line 99 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 99 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 99 "pretty_printer.m"
{
#line 99 "pretty_printer.m"
  {
#line 99 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 99 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_5_5 = (MR_Word) &mercury__pretty_printer_scalar_common_1[3];
#line 99 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar1_3 = mercury__pretty_printer__HeadVar__1_1;
#line 99 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar2_4 = mercury__pretty_printer__HeadVar__2_2;

#line 99 "pretty_printer.m"
    {
#line 99 "pretty_printer.m"
      return mercury__pretty_printer__succeeded = mercury__builtin__unify_2_p_0(mercury__pretty_printer__TypeInfo_5_5, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_3)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_4)));
    }
#line 99 "pretty_printer.m"
    return mercury__pretty_printer__succeeded;
#line 99 "pretty_printer.m"
  }
#line 99 "pretty_printer.m"
}

#line 57 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer____Compare____doc_0_0(
#line 57 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
#line 57 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 57 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3)
#line 57 "pretty_printer.m"
{
#line 57 "pretty_printer.m"
  while (MR_TRUE)
#line 57 "pretty_printer.m"
    {
#line 57 "pretty_printer.m"
      /* tailcall optimized into a loop */
#line 57 "pretty_printer.m"
      {
#line 57 "pretty_printer.m"
        MR_bool mercury__pretty_printer__succeeded;
#line 57 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__CastX_168 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;
#line 57 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__CastY_169 = (MR_Integer) mercury__pretty_printer__HeadVar__3_3;

#line 57 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_168 == mercury__pretty_printer__CastY_169);
#line 57 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 6600 "pretty_printer.c"
          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 57 "pretty_printer.m"
        else
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
          switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) {
#line 57 "pretty_printer.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
            case (MR_Integer) 0:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
              switch (MR_unmkbody(mercury__pretty_printer__HeadVar__2_2)) {
#line 57 "pretty_printer.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                case (MR_Integer) 0:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                  switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 57 "pretty_printer.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                    case (MR_Integer) 0:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                      switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 57 "pretty_printer.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                        case (MR_Integer) 0:
#line 57 "pretty_printer.m"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                        case (MR_Integer) 1:
#line 57 "pretty_printer.m"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                      }
#line 57 "pretty_printer.m"
                      break;
#line 57 "pretty_printer.m"
                    case (MR_Integer) 1:
#line 6648 "pretty_printer.c"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                      break;
#line 57 "pretty_printer.m"
                    case (MR_Integer) 2:
#line 6654 "pretty_printer.c"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                      break;
#line 57 "pretty_printer.m"
                    case (MR_Integer) 3:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) {
#line 57 "pretty_printer.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                        case (MR_Integer) 0:
#line 6667 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                        case (MR_Integer) 1:
#line 6673 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                        case (MR_Integer) 2:
#line 6679 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                        case (MR_Integer) 3:
#line 6685 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                        case (MR_Integer) 4:
#line 6691 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                      }
#line 57 "pretty_printer.m"
                      break;
#line 57 "pretty_printer.m"
                  }
#line 57 "pretty_printer.m"
                  break;
#line 57 "pretty_printer.m"
                case (MR_Integer) 1:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                  switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 57 "pretty_printer.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                    case (MR_Integer) 0:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                      switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 57 "pretty_printer.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                        case (MR_Integer) 0:
#line 57 "pretty_printer.m"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                        case (MR_Integer) 1:
#line 57 "pretty_printer.m"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                      }
#line 57 "pretty_printer.m"
                      break;
#line 57 "pretty_printer.m"
                    case (MR_Integer) 1:
#line 6735 "pretty_printer.c"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                      break;
#line 57 "pretty_printer.m"
                    case (MR_Integer) 2:
#line 6741 "pretty_printer.c"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                      break;
#line 57 "pretty_printer.m"
                    case (MR_Integer) 3:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) {
#line 57 "pretty_printer.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                        case (MR_Integer) 0:
#line 6754 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                        case (MR_Integer) 1:
#line 6760 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                        case (MR_Integer) 2:
#line 6766 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                        case (MR_Integer) 3:
#line 6772 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                        case (MR_Integer) 4:
#line 6778 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                      }
#line 57 "pretty_printer.m"
                      break;
#line 57 "pretty_printer.m"
                  }
#line 57 "pretty_printer.m"
                  break;
#line 57 "pretty_printer.m"
              }
#line 57 "pretty_printer.m"
              break;
#line 57 "pretty_printer.m"
            case (MR_Integer) 1:
#line 57 "pretty_printer.m"
              {
#line 57 "pretty_printer.m"
                MR_String mercury__pretty_printer__V_187_187 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 57 "pretty_printer.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                  case (MR_Integer) 0:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                    switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 57 "pretty_printer.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                      case (MR_Integer) 0:
#line 6815 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 6821 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                    }
#line 57 "pretty_printer.m"
                    break;
#line 57 "pretty_printer.m"
                  case (MR_Integer) 1:
#line 57 "pretty_printer.m"
                    {
#line 57 "pretty_printer.m"
                      MR_String mercury__pretty_printer__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));
#line 57 "pretty_printer.m"
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

#line 6853 "pretty_printer.c"

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
#line 57 "pretty_printer.m"
                    }
#line 57 "pretty_printer.m"
                    break;
#line 57 "pretty_printer.m"
                  case (MR_Integer) 2:
#line 6888 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                    break;
#line 57 "pretty_printer.m"
                  case (MR_Integer) 3:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) {
#line 57 "pretty_printer.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                      case (MR_Integer) 0:
#line 6901 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 6907 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 2:
#line 6913 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 3:
#line 6919 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 4:
#line 6925 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                    }
#line 57 "pretty_printer.m"
                    break;
#line 57 "pretty_printer.m"
                }
#line 57 "pretty_printer.m"
              }
#line 57 "pretty_printer.m"
              break;
#line 57 "pretty_printer.m"
            case (MR_Integer) 2:
#line 57 "pretty_printer.m"
              {
#line 57 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 57 "pretty_printer.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                  case (MR_Integer) 0:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                    switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 57 "pretty_printer.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                      case (MR_Integer) 0:
#line 6960 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 6966 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                    }
#line 57 "pretty_printer.m"
                    break;
#line 57 "pretty_printer.m"
                  case (MR_Integer) 1:
#line 6976 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                    break;
#line 57 "pretty_printer.m"
                  case (MR_Integer) 2:
#line 57 "pretty_printer.m"
                    {
#line 57 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__TypeInfo_177_177 = (MR_Word) &mercury__pretty_printer_scalar_common_1[3];
#line 57 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));

#line 57 "pretty_printer.m"
                      {
#line 57 "pretty_printer.m"
                        mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_177_177, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__V_179_179)), ((MR_Box) (mercury__pretty_printer__V_45_45)));
#line 57 "pretty_printer.m"
                        return;
                      }
#line 57 "pretty_printer.m"
                    }
#line 57 "pretty_printer.m"
                    break;
#line 57 "pretty_printer.m"
                  case (MR_Integer) 3:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) {
#line 57 "pretty_printer.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                      case (MR_Integer) 0:
#line 7009 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 7015 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 2:
#line 7021 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 3:
#line 7027 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 4:
#line 7033 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                    }
#line 57 "pretty_printer.m"
                    break;
#line 57 "pretty_printer.m"
                }
#line 57 "pretty_printer.m"
              }
#line 57 "pretty_printer.m"
              break;
#line 57 "pretty_printer.m"
            case (MR_Integer) 3:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) {
#line 57 "pretty_printer.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                case (MR_Integer) 0:
#line 57 "pretty_printer.m"
                  {
#line 57 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));

#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                    switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 57 "pretty_printer.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                      case (MR_Integer) 0:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                        switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 57 "pretty_printer.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                          case (MR_Integer) 0:
#line 7075 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 7081 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                        }
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 7091 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 2:
#line 7097 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 3:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) {
#line 57 "pretty_printer.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                          case (MR_Integer) 0:
#line 57 "pretty_printer.m"
                            {
#line 57 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));

#line 57 "pretty_printer.m"
                              {
#line 57 "pretty_printer.m"
                                mercury__univ____Compare____univ_0_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__V_185_185, mercury__pretty_printer__V_65_65);
#line 57 "pretty_printer.m"
                                return;
                              }
#line 57 "pretty_printer.m"
                            }
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 7128 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 2:
#line 7134 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 3:
#line 7140 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 4:
#line 7146 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                        }
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                    }
#line 57 "pretty_printer.m"
                  }
#line 57 "pretty_printer.m"
                  break;
#line 57 "pretty_printer.m"
                case (MR_Integer) 1:
#line 57 "pretty_printer.m"
                  {
#line 57 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 2)));
#line 57 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));

#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                    switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 57 "pretty_printer.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                      case (MR_Integer) 0:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                        switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 57 "pretty_printer.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                          case (MR_Integer) 0:
#line 7183 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 7189 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                        }
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 7199 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 2:
#line 7205 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 3:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) {
#line 57 "pretty_printer.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                          case (MR_Integer) 0:
#line 7218 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 57 "pretty_printer.m"
                            {
#line 57 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));
#line 57 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 2)));
#line 57 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__V_93_93;
#line 57 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__TypeInfo_174_174 = (MR_Word) &mercury__pretty_printer_scalar_common_1[2];

#line 57 "pretty_printer.m"
                              {
#line 57 "pretty_printer.m"
                                mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_174_174, &mercury__pretty_printer__V_93_93, ((MR_Box) (mercury__pretty_printer__V_181_181)), ((MR_Box) (mercury__pretty_printer__V_91_91)));
                              }
#line 7240 "pretty_printer.c"
                              mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_93_93 == (MR_Integer) 0);
#line 57 "pretty_printer.m"
                              mercury__pretty_printer__succeeded = !(mercury__pretty_printer__succeeded);
#line 57 "pretty_printer.m"
                              if (mercury__pretty_printer__succeeded)
#line 57 "pretty_printer.m"
                                *mercury__pretty_printer__HeadVar__1_1 = mercury__pretty_printer__V_93_93;
#line 57 "pretty_printer.m"
                              else
#line 57 "pretty_printer.m"
                                {
#line 57 "pretty_printer.m"
                                  /* direct tailcall eliminated */
#line 57 "pretty_printer.m"
                                  {
#line 57 "pretty_printer.m"
                                    MR_Word mercury__pretty_printer__HeadVar__2__tmp_copy_2 = mercury__pretty_printer__V_180_180;
#line 57 "pretty_printer.m"
                                    MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_92_92;

#line 57 "pretty_printer.m"
                                    mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 57 "pretty_printer.m"
                                    mercury__pretty_printer__HeadVar__2_2 = mercury__pretty_printer__HeadVar__2__tmp_copy_2;
#line 57 "pretty_printer.m"
                                  }
#line 57 "pretty_printer.m"
                                  continue;
#line 57 "pretty_printer.m"
                                }
#line 57 "pretty_printer.m"
                            }
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 2:
#line 7277 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 3:
#line 7283 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 4:
#line 7289 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                        }
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                    }
#line 57 "pretty_printer.m"
                  }
#line 57 "pretty_printer.m"
                  break;
#line 57 "pretty_printer.m"
                case (MR_Integer) 2:
#line 57 "pretty_printer.m"
                  {
#line 57 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 2)));
#line 57 "pretty_printer.m"
                    MR_String mercury__pretty_printer__V_184_184 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));

#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                    switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 57 "pretty_printer.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                      case (MR_Integer) 0:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                        switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 57 "pretty_printer.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                          case (MR_Integer) 0:
#line 7326 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 7332 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                        }
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 7342 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 2:
#line 7348 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 3:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) {
#line 57 "pretty_printer.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                          case (MR_Integer) 0:
#line 7361 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 7367 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 2:
#line 57 "pretty_printer.m"
                            {
#line 57 "pretty_printer.m"
                              MR_String mercury__pretty_printer__V_123_123 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));
#line 57 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 2)));
#line 57 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__V_125_125;
#line 57 "pretty_printer.m"
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

#line 7399 "pretty_printer.c"

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
#line 7428 "pretty_printer.c"
                              mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_125_125 == (MR_Integer) 0);
#line 57 "pretty_printer.m"
                              mercury__pretty_printer__succeeded = !(mercury__pretty_printer__succeeded);
#line 57 "pretty_printer.m"
                              if (mercury__pretty_printer__succeeded)
#line 57 "pretty_printer.m"
                                *mercury__pretty_printer__HeadVar__1_1 = mercury__pretty_printer__V_125_125;
#line 57 "pretty_printer.m"
                              else
#line 57 "pretty_printer.m"
                                {
#line 57 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__TypeInfo_173_173 = (MR_Word) &mercury__pretty_printer_scalar_common_1[2];

#line 57 "pretty_printer.m"
                                  {
#line 57 "pretty_printer.m"
                                    mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_173_173, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__V_183_183)), ((MR_Box) (mercury__pretty_printer__V_124_124)));
#line 57 "pretty_printer.m"
                                    return;
                                  }
#line 57 "pretty_printer.m"
                                }
#line 57 "pretty_printer.m"
                            }
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 3:
#line 7458 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 4:
#line 7464 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                        }
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                    }
#line 57 "pretty_printer.m"
                  }
#line 57 "pretty_printer.m"
                  break;
#line 57 "pretty_printer.m"
                case (MR_Integer) 3:
#line 57 "pretty_printer.m"
                  {
#line 57 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));

#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                    switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 57 "pretty_printer.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                      case (MR_Integer) 0:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                        switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 57 "pretty_printer.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                          case (MR_Integer) 0:
#line 7499 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 7505 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                        }
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 7515 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 2:
#line 7521 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 3:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) {
#line 57 "pretty_printer.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                          case (MR_Integer) 0:
#line 7534 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 7540 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 2:
#line 7546 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 3:
#line 57 "pretty_printer.m"
                            {
#line 57 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));

#line 57 "pretty_printer.m"
                              {
#line 57 "pretty_printer.m"
                                mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__pretty_printer__HeadVar__1_1, (MR_Word) mercury__pretty_printer__V_182_182, (MR_Word) mercury__pretty_printer__V_147_147);
#line 57 "pretty_printer.m"
                                return;
                              }
#line 57 "pretty_printer.m"
                            }
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 4:
#line 7570 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                        }
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                    }
#line 57 "pretty_printer.m"
                  }
#line 57 "pretty_printer.m"
                  break;
#line 57 "pretty_printer.m"
                case (MR_Integer) 4:
#line 57 "pretty_printer.m"
                  {
#line 57 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));

#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                    switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 57 "pretty_printer.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                      case (MR_Integer) 0:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                        switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 57 "pretty_printer.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                          case (MR_Integer) 0:
#line 7605 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 7611 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                        }
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 7621 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 2:
#line 7627 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 3:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)))) {
#line 57 "pretty_printer.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                          case (MR_Integer) 0:
#line 7640 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 7646 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 2:
#line 7652 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 3:
#line 7658 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 4:
#line 57 "pretty_printer.m"
                            {
#line 57 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));

#line 57 "pretty_printer.m"
                              {
#line 57 "pretty_printer.m"
                                mercury__pretty_printer____Compare____pp_internal_0_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__V_186_186, mercury__pretty_printer__V_167_167);
#line 57 "pretty_printer.m"
                                return;
                              }
#line 57 "pretty_printer.m"
                            }
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                        }
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                    }
#line 57 "pretty_printer.m"
                  }
#line 57 "pretty_printer.m"
                  break;
#line 57 "pretty_printer.m"
              }
#line 57 "pretty_printer.m"
              break;
#line 57 "pretty_printer.m"
          }
#line 57 "pretty_printer.m"
      }
#line 57 "pretty_printer.m"
      break;
#line 57 "pretty_printer.m"
    }
#line 57 "pretty_printer.m"
}

#line 57 "pretty_printer.m"
MR_bool MR_CALL 
mercury__pretty_printer____Unify____doc_0_0(
#line 57 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 57 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 57 "pretty_printer.m"
{
#line 57 "pretty_printer.m"
  while (MR_TRUE)
#line 57 "pretty_printer.m"
    {
#line 57 "pretty_printer.m"
      /* tailcall optimized into a loop */
#line 57 "pretty_printer.m"
      {
#line 57 "pretty_printer.m"
        MR_bool mercury__pretty_printer__succeeded;
#line 57 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__CastX_25 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 57 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__CastY_26 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 57 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_25 == mercury__pretty_printer__CastY_26);
#line 57 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 57 "pretty_printer.m"
          mercury__pretty_printer__succeeded = MR_TRUE;
#line 57 "pretty_printer.m"
        else
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
          switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) {
#line 57 "pretty_printer.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
            case (MR_Integer) 0:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
              switch (MR_unmkbody(mercury__pretty_printer__HeadVar__1_1)) {
#line 57 "pretty_printer.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                case (MR_Integer) 0:
#line 57 "pretty_printer.m"
                  {
#line 57 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__CastX_5 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 57 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__CastY_6 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 57 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastY_6 == mercury__pretty_printer__CastX_5);
#line 57 "pretty_printer.m"
                  }
#line 57 "pretty_printer.m"
                  break;
#line 57 "pretty_printer.m"
                case (MR_Integer) 1:
#line 57 "pretty_printer.m"
                  {
#line 57 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__CastX_7 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 57 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__CastY_8 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 57 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastY_8 == mercury__pretty_printer__CastX_7);
#line 57 "pretty_printer.m"
                  }
#line 57 "pretty_printer.m"
                  break;
#line 57 "pretty_printer.m"
              }
#line 57 "pretty_printer.m"
              break;
#line 57 "pretty_printer.m"
            case (MR_Integer) 1:
#line 57 "pretty_printer.m"
              {
#line 57 "pretty_printer.m"
                MR_String mercury__pretty_printer__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 57 "pretty_printer.m"
                MR_String mercury__pretty_printer__V_4_4;

#line 57 "pretty_printer.m"
                mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 57 "pretty_printer.m"
                if (mercury__pretty_printer__succeeded)
#line 57 "pretty_printer.m"
                  {
#line 57 "pretty_printer.m"
                    mercury__pretty_printer__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 7800 "pretty_printer.c"
                    mercury__pretty_printer__succeeded = (strcmp(mercury__pretty_printer__V_3_3, mercury__pretty_printer__V_4_4) == 0);
#line 57 "pretty_printer.m"
                  }
#line 57 "pretty_printer.m"
              }
#line 57 "pretty_printer.m"
              break;
#line 57 "pretty_printer.m"
            case (MR_Integer) 2:
#line 57 "pretty_printer.m"
              {
#line 57 "pretty_printer.m"
                MR_Word mercury__pretty_printer__TypeInfo_27_27;
#line 57 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 57 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_10_10;

#line 57 "pretty_printer.m"
                mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 57 "pretty_printer.m"
                if (mercury__pretty_printer__succeeded)
#line 57 "pretty_printer.m"
                  {
#line 57 "pretty_printer.m"
                    mercury__pretty_printer__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 7827 "pretty_printer.c"
                    mercury__pretty_printer__TypeInfo_27_27 = (MR_Word) &mercury__pretty_printer_scalar_common_1[3];
#line 7829 "pretty_printer.c"
                    {
#line 7831 "pretty_printer.c"
                      return mercury__pretty_printer__succeeded = mercury__builtin__unify_2_p_0(mercury__pretty_printer__TypeInfo_27_27, ((MR_Box) (mercury__pretty_printer__V_9_9)), ((MR_Box) (mercury__pretty_printer__V_10_10)));
                    }
#line 57 "pretty_printer.m"
                  }
#line 57 "pretty_printer.m"
              }
#line 57 "pretty_printer.m"
              break;
#line 57 "pretty_printer.m"
            case (MR_Integer) 3:
#line 57 "pretty_printer.m"
#line 57 "pretty_printer.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)))) {
#line 57 "pretty_printer.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 57 "pretty_printer.m"
                case (MR_Integer) 0:
#line 57 "pretty_printer.m"
                  {
#line 57 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
#line 57 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_12_12;

#line 57 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 57 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 57 "pretty_printer.m"
                      {
#line 57 "pretty_printer.m"
                        mercury__pretty_printer__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 7864 "pretty_printer.c"
                        {
#line 7866 "pretty_printer.c"
                          return mercury__pretty_printer__succeeded = mercury__univ____Unify____univ_0_0(mercury__pretty_printer__V_11_11, mercury__pretty_printer__V_12_12);
                        }
#line 57 "pretty_printer.m"
                      }
#line 57 "pretty_printer.m"
                  }
#line 57 "pretty_printer.m"
                  break;
#line 57 "pretty_printer.m"
                case (MR_Integer) 1:
#line 57 "pretty_printer.m"
                  {
#line 57 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__TypeInfo_28_28;
#line 57 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
#line 57 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 2)));
#line 57 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_15_15;
#line 57 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_16_16;

#line 57 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 57 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 57 "pretty_printer.m"
                      {
#line 57 "pretty_printer.m"
                        mercury__pretty_printer__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 57 "pretty_printer.m"
                        mercury__pretty_printer__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 2)));
#line 7900 "pretty_printer.c"
                        mercury__pretty_printer__TypeInfo_28_28 = (MR_Word) &mercury__pretty_printer_scalar_common_1[2];
#line 7902 "pretty_printer.c"
                        {
#line 7904 "pretty_printer.c"
                          mercury__pretty_printer__succeeded = mercury__builtin__unify_2_p_0(mercury__pretty_printer__TypeInfo_28_28, ((MR_Box) (mercury__pretty_printer__V_13_13)), ((MR_Box) (mercury__pretty_printer__V_15_15)));
                        }
#line 57 "pretty_printer.m"
                        if (mercury__pretty_printer__succeeded)
#line 7909 "pretty_printer.c"
                          {
#line 7911 "pretty_printer.c"
                            /* direct tailcall eliminated */
#line 7913 "pretty_printer.c"
                            {
#line 7915 "pretty_printer.c"
                              MR_Word mercury__pretty_printer__HeadVar__1__tmp_copy_1 = mercury__pretty_printer__V_14_14;
#line 7917 "pretty_printer.c"
                              MR_Word mercury__pretty_printer__HeadVar__2__tmp_copy_2 = mercury__pretty_printer__V_16_16;

#line 7920 "pretty_printer.c"
                              mercury__pretty_printer__HeadVar__2_2 = mercury__pretty_printer__HeadVar__2__tmp_copy_2;
#line 7922 "pretty_printer.c"
                              mercury__pretty_printer__HeadVar__1_1 = mercury__pretty_printer__HeadVar__1__tmp_copy_1;
#line 7924 "pretty_printer.c"
                            }
#line 7926 "pretty_printer.c"
                            continue;
#line 7928 "pretty_printer.c"
                          }
#line 57 "pretty_printer.m"
                      }
#line 57 "pretty_printer.m"
                  }
#line 57 "pretty_printer.m"
                  break;
#line 57 "pretty_printer.m"
                case (MR_Integer) 2:
#line 57 "pretty_printer.m"
                  {
#line 57 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__TypeInfo_29_29;
#line 57 "pretty_printer.m"
                    MR_String mercury__pretty_printer__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
#line 57 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 2)));
#line 57 "pretty_printer.m"
                    MR_String mercury__pretty_printer__V_19_19;
#line 57 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_20_20;

#line 57 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 57 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 57 "pretty_printer.m"
                      {
#line 57 "pretty_printer.m"
                        mercury__pretty_printer__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 57 "pretty_printer.m"
                        mercury__pretty_printer__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 2)));
#line 7961 "pretty_printer.c"
                        mercury__pretty_printer__succeeded = (strcmp(mercury__pretty_printer__V_17_17, mercury__pretty_printer__V_19_19) == 0);
#line 57 "pretty_printer.m"
                        if (mercury__pretty_printer__succeeded)
#line 57 "pretty_printer.m"
                          {
#line 7967 "pretty_printer.c"
                            mercury__pretty_printer__TypeInfo_29_29 = (MR_Word) &mercury__pretty_printer_scalar_common_1[2];
#line 7969 "pretty_printer.c"
                            {
#line 7971 "pretty_printer.c"
                              return mercury__pretty_printer__succeeded = mercury__builtin__unify_2_p_0(mercury__pretty_printer__TypeInfo_29_29, ((MR_Box) (mercury__pretty_printer__V_18_18)), ((MR_Box) (mercury__pretty_printer__V_20_20)));
                            }
#line 57 "pretty_printer.m"
                          }
#line 57 "pretty_printer.m"
                      }
#line 57 "pretty_printer.m"
                  }
#line 57 "pretty_printer.m"
                  break;
#line 57 "pretty_printer.m"
                case (MR_Integer) 3:
#line 57 "pretty_printer.m"
                  {
#line 57 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
#line 57 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_22_22;

#line 57 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 57 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 57 "pretty_printer.m"
                      {
#line 57 "pretty_printer.m"
                        mercury__pretty_printer__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 7999 "pretty_printer.c"
                        {
#line 8001 "pretty_printer.c"
                          return mercury__pretty_printer__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__pretty_printer__V_21_21, (MR_Word) mercury__pretty_printer__V_22_22);
                        }
#line 57 "pretty_printer.m"
                      }
#line 57 "pretty_printer.m"
                  }
#line 57 "pretty_printer.m"
                  break;
#line 57 "pretty_printer.m"
                case (MR_Integer) 4:
#line 57 "pretty_printer.m"
                  {
#line 57 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
#line 57 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_24_24;

#line 57 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 57 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 57 "pretty_printer.m"
                      {
#line 57 "pretty_printer.m"
                        mercury__pretty_printer__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 8027 "pretty_printer.c"
                        {
#line 8029 "pretty_printer.c"
                          return mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____pp_internal_0_0(mercury__pretty_printer__V_23_23, mercury__pretty_printer__V_24_24);
                        }
#line 57 "pretty_printer.m"
                      }
#line 57 "pretty_printer.m"
                  }
#line 57 "pretty_printer.m"
                  break;
#line 57 "pretty_printer.m"
              }
#line 57 "pretty_printer.m"
              break;
#line 57 "pretty_printer.m"
          }
#line 57 "pretty_printer.m"
        return mercury__pretty_printer__succeeded;
#line 57 "pretty_printer.m"
      }
#line 57 "pretty_printer.m"
      break;
#line 57 "pretty_printer.m"
    }
#line 57 "pretty_printer.m"
}

#line 1176 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_tree234_2_f_0(
#line 1176 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1176 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5)
#line 1176 "pretty_printer.m"
{
#line 1178 "pretty_printer.m"
  {
#line 1178 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__ArgDescs_5)) == (MR_mktag((MR_Integer) 1)));
#line 1178 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1178 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_20_20;
#line 1178 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_21_21;
#line 1178 "pretty_printer.m"
    MR_Word mercury__pretty_printer__X_13;
#line 1180 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_22_22;
#line 1180 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_23_23;
#line 1180 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_24_24;
#line 1180 "pretty_printer.m"
    MR_Word mercury__pretty_printer__ArgDescA_6;
#line 1180 "pretty_printer.m"
    MR_Word mercury__pretty_printer__ArgDescB_7;
#line 1180 "pretty_printer.m"
    MR_Box mercury__pretty_printer__Value_12;
#line 1180 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_14_14;
#line 1180 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_15_15;
#line 74 "type_desc.opt"
    MR_Box mercury__pretty_printer__V_16_16;
#line 74 "type_desc.opt"
    MR_Box mercury__pretty_printer__V_17_17;
#line 107 "builtin.opt"
    MR_Box mercury__pretty_printer__conv0_X_13;

#line 1180 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1180 "pretty_printer.m"
      {
#line 1180 "pretty_printer.m"
        mercury__pretty_printer__ArgDescA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 0)));
#line 1180 "pretty_printer.m"
        mercury__pretty_printer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 1)));
#line 1180 "pretty_printer.m"
        mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 1180 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 1180 "pretty_printer.m"
          {
#line 1180 "pretty_printer.m"
            mercury__pretty_printer__ArgDescB_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_14_14, (MR_Integer) 0)));
#line 1180 "pretty_printer.m"
            mercury__pretty_printer__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_14_14, (MR_Integer) 1)));
#line 1180 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1180 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 1180 "pretty_printer.m"
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

#line 8136 "pretty_printer.c"

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

#line 8156 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeInfo_21_21  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 12 "univ.opt"
                mercury__pretty_printer__TypeInfo_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 0)));
#line 12 "univ.opt"
                mercury__pretty_printer__Value_12 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 1));
#line 8167 "pretty_printer.c"
                mercury__pretty_printer__TypeCtorInfo_23_23 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 8169 "pretty_printer.c"
                {
#line 8171 "pretty_printer.c"
                  mercury__pretty_printer__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8173 "pretty_printer.c"
                  MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_24_24, 0) = ((MR_Box) (mercury__pretty_printer__TypeCtorInfo_23_23));
#line 8175 "pretty_printer.c"
                  MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_24_24, 1) = ((MR_Box) (mercury__pretty_printer__TypeInfo_20_20));
#line 8177 "pretty_printer.c"
                  MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_24_24, 2) = ((MR_Box) (mercury__pretty_printer__TypeInfo_21_21));
#line 8179 "pretty_printer.c"
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
#line 1180 "pretty_printer.m"
              }
#line 1180 "pretty_printer.m"
          }
#line 1180 "pretty_printer.m"
      }
#line 1178 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1186 "pretty_printer.m"
      {
#line 1186 "pretty_printer.m"
        return mercury__pretty_printer__HeadVar__3_3 = mercury__tree234__tree234_to_doc_1_f_0(mercury__pretty_printer__TypeInfo_20_20, mercury__pretty_printer__TypeInfo_21_21, mercury__pretty_printer__X_13);
      }
#line 1178 "pretty_printer.m"
    else
#line 1188 "pretty_printer.m"
      {
#line 1188 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[13]);
#line 1188 "pretty_printer.m"
      }
#line 1178 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1178 "pretty_printer.m"
  }
#line 1176 "pretty_printer.m"
}

#line 1160 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_list_2_f_0(
#line 1160 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1160 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5)
#line 1160 "pretty_printer.m"
{
#line 1162 "pretty_printer.m"
  {
#line 1162 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__ArgDescs_5)) == (MR_mktag((MR_Integer) 1)));
#line 1162 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1162 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_15_15;
#line 1162 "pretty_printer.m"
    MR_Word mercury__pretty_printer__X_10;
#line 1164 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_16_16;
#line 1164 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_17_17;
#line 1164 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_18_18;
#line 1164 "pretty_printer.m"
    MR_Word mercury__pretty_printer__ArgDesc_6;
#line 1164 "pretty_printer.m"
    MR_Box mercury__pretty_printer__Value_9;
#line 1164 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_11_11;
#line 74 "type_desc.opt"
    MR_Box mercury__pretty_printer__V_12_12;
#line 107 "builtin.opt"
    MR_Box mercury__pretty_printer__conv0_X_10;

#line 1164 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1164 "pretty_printer.m"
      {
#line 1164 "pretty_printer.m"
        mercury__pretty_printer__ArgDesc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 0)));
#line 1164 "pretty_printer.m"
        mercury__pretty_printer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 1)));
#line 1164 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1164 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 1164 "pretty_printer.m"
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

#line 8287 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeInfo_15_15  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 12 "univ.opt"
            mercury__pretty_printer__TypeInfo_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 0)));
#line 12 "univ.opt"
            mercury__pretty_printer__Value_9 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 1));
#line 8298 "pretty_printer.c"
            mercury__pretty_printer__TypeCtorInfo_17_17 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 8300 "pretty_printer.c"
            {
#line 8302 "pretty_printer.c"
              mercury__pretty_printer__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8304 "pretty_printer.c"
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 0) = ((MR_Box) (mercury__pretty_printer__TypeCtorInfo_17_17));
#line 8306 "pretty_printer.c"
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 1) = ((MR_Box) (mercury__pretty_printer__TypeInfo_15_15));
#line 8308 "pretty_printer.c"
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
#line 1164 "pretty_printer.m"
          }
#line 1164 "pretty_printer.m"
      }
#line 1162 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1169 "pretty_printer.m"
      {
#line 1169 "pretty_printer.m"
        return mercury__pretty_printer__HeadVar__3_3 = mercury__list__list_to_doc_1_f_0(mercury__pretty_printer__TypeInfo_15_15, mercury__pretty_printer__X_10);
      }
#line 1162 "pretty_printer.m"
    else
#line 1171 "pretty_printer.m"
      {
#line 1171 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[12]);
#line 1171 "pretty_printer.m"
      }
#line 1162 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1162 "pretty_printer.m"
  }
#line 1160 "pretty_printer.m"
}

#line 1144 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_version_array_2_f_0(
#line 1144 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1144 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5)
#line 1144 "pretty_printer.m"
{
#line 1146 "pretty_printer.m"
  {
#line 1146 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__ArgDescs_5)) == (MR_mktag((MR_Integer) 1)));
#line 1146 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1146 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_15_15;
#line 1146 "pretty_printer.m"
    MR_Box mercury__pretty_printer__X_10;
#line 1148 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_16_16;
#line 1148 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_17_17;
#line 1148 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_18_18;
#line 1148 "pretty_printer.m"
    MR_Word mercury__pretty_printer__ArgDesc_6;
#line 1148 "pretty_printer.m"
    MR_Box mercury__pretty_printer__Value_9;
#line 1148 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_11_11;
#line 74 "type_desc.opt"
    MR_Box mercury__pretty_printer__V_12_12;
#line 107 "builtin.opt"
    MR_Box mercury__pretty_printer__conv0_X_10;

#line 1148 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1148 "pretty_printer.m"
      {
#line 1148 "pretty_printer.m"
        mercury__pretty_printer__ArgDesc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 0)));
#line 1148 "pretty_printer.m"
        mercury__pretty_printer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 1)));
#line 1148 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1148 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 1148 "pretty_printer.m"
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

#line 8414 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeInfo_15_15  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 12 "univ.opt"
            mercury__pretty_printer__TypeInfo_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 0)));
#line 12 "univ.opt"
            mercury__pretty_printer__Value_9 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 1));
#line 8425 "pretty_printer.c"
            mercury__pretty_printer__TypeCtorInfo_17_17 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 8427 "pretty_printer.c"
            {
#line 8429 "pretty_printer.c"
              mercury__pretty_printer__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8431 "pretty_printer.c"
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 0) = ((MR_Box) (mercury__pretty_printer__TypeCtorInfo_17_17));
#line 8433 "pretty_printer.c"
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 1) = ((MR_Box) (mercury__pretty_printer__TypeInfo_15_15));
#line 8435 "pretty_printer.c"
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
#line 1148 "pretty_printer.m"
          }
#line 1148 "pretty_printer.m"
      }
#line 1146 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1153 "pretty_printer.m"
      {
#line 1153 "pretty_printer.m"
        return mercury__pretty_printer__HeadVar__3_3 = mercury__version_array__version_array_to_doc_1_f_0(mercury__pretty_printer__TypeInfo_15_15, mercury__pretty_printer__X_10);
      }
#line 1146 "pretty_printer.m"
    else
#line 1155 "pretty_printer.m"
      {
#line 1155 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[11]);
#line 1155 "pretty_printer.m"
      }
#line 1146 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1146 "pretty_printer.m"
  }
#line 1144 "pretty_printer.m"
}

#line 1128 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_array_2_f_0(
#line 1128 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1128 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5)
#line 1128 "pretty_printer.m"
{
#line 1130 "pretty_printer.m"
  {
#line 1130 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__ArgDescs_5)) == (MR_mktag((MR_Integer) 1)));
#line 1130 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1130 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_15_15;
#line 1130 "pretty_printer.m"
    MR_ArrayPtr mercury__pretty_printer__X_10;
#line 1132 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_16_16;
#line 1132 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_17_17;
#line 1132 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_18_18;
#line 1132 "pretty_printer.m"
    MR_Word mercury__pretty_printer__ArgDesc_6;
#line 1132 "pretty_printer.m"
    MR_Box mercury__pretty_printer__Value_9;
#line 1132 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_11_11;
#line 74 "type_desc.opt"
    MR_Box mercury__pretty_printer__V_12_12;
#line 107 "builtin.opt"
    MR_Box mercury__pretty_printer__conv0_X_10;

#line 1132 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1132 "pretty_printer.m"
      {
#line 1132 "pretty_printer.m"
        mercury__pretty_printer__ArgDesc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 0)));
#line 1132 "pretty_printer.m"
        mercury__pretty_printer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 1)));
#line 1132 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1132 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 1132 "pretty_printer.m"
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

#line 8541 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeInfo_15_15  = TypeInfo_for_T;
#line 74 "type_desc.opt"
}
#line 12 "univ.opt"
            mercury__pretty_printer__TypeInfo_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 0)));
#line 12 "univ.opt"
            mercury__pretty_printer__Value_9 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 1));
#line 8552 "pretty_printer.c"
            mercury__pretty_printer__TypeCtorInfo_17_17 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 8554 "pretty_printer.c"
            {
#line 8556 "pretty_printer.c"
              mercury__pretty_printer__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8558 "pretty_printer.c"
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 0) = ((MR_Box) (mercury__pretty_printer__TypeCtorInfo_17_17));
#line 8560 "pretty_printer.c"
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 1) = ((MR_Box) (mercury__pretty_printer__TypeInfo_15_15));
#line 8562 "pretty_printer.c"
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
#line 1132 "pretty_printer.m"
          }
#line 1132 "pretty_printer.m"
      }
#line 1130 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1137 "pretty_printer.m"
      {
#line 1137 "pretty_printer.m"
        return mercury__pretty_printer__HeadVar__3_3 = mercury__array__array_to_doc_1_f_0(mercury__pretty_printer__TypeInfo_15_15, (MR_ArrayPtr) mercury__pretty_printer__X_10);
      }
#line 1130 "pretty_printer.m"
    else
#line 1139 "pretty_printer.m"
      {
#line 1139 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[10]);
#line 1139 "pretty_printer.m"
      }
#line 1130 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1130 "pretty_printer.m"
  }
#line 1128 "pretty_printer.m"
}

#line 1121 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_string_2_f_0(
#line 1121 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1121 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5)
#line 1121 "pretty_printer.m"
{
#line 1123 "pretty_printer.m"
  {
#line 1123 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1123 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;

#line 1123 "pretty_printer.m"
    {
#line 1123 "pretty_printer.m"
      return mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_f_0(mercury__pretty_printer__Univ_4);
    }
#line 1123 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1123 "pretty_printer.m"
  }
#line 1121 "pretty_printer.m"
}

#line 1114 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_int_2_f_0(
#line 1114 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1114 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5)
#line 1114 "pretty_printer.m"
{
#line 1116 "pretty_printer.m"
  {
#line 1116 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1116 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;

#line 1116 "pretty_printer.m"
    {
#line 1116 "pretty_printer.m"
      return mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_f_0(mercury__pretty_printer__Univ_4);
    }
#line 1116 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1116 "pretty_printer.m"
  }
#line 1114 "pretty_printer.m"
}

#line 1107 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_float_2_f_0(
#line 1107 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1107 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5)
#line 1107 "pretty_printer.m"
{
#line 1109 "pretty_printer.m"
  {
#line 1109 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1109 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;

#line 1109 "pretty_printer.m"
    {
#line 1109 "pretty_printer.m"
      return mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0(mercury__pretty_printer__Univ_4);
    }
#line 1109 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1109 "pretty_printer.m"
  }
#line 1107 "pretty_printer.m"
}

#line 1100 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_char_2_f_0(
#line 1100 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1100 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5)
#line 1100 "pretty_printer.m"
{
#line 1102 "pretty_printer.m"
  {
#line 1102 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1102 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;

#line 1102 "pretty_printer.m"
    {
#line 1102 "pretty_printer.m"
      return mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_f_0(mercury__pretty_printer__Univ_4);
    }
#line 1102 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1102 "pretty_printer.m"
  }
#line 1100 "pretty_printer.m"
}

#line 1076 "pretty_printer.m"
MR_Word MR_CALL 
mercury__pretty_printer__initial_formatter_map_0_f_0(void)
#line 1076 "pretty_printer.m"
{
#line 1078 "pretty_printer.m"
  {
#line 1078 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1078 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_3;
#line 1078 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1078 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_9_9;
#line 1078 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_14_14;
#line 1078 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_19_19;
#line 1078 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_24_24;
#line 1078 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_29_29;
#line 1078 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_34_34;
#line 1078 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_39_39;

#line 1080 "pretty_printer.m"
    {
#line 1080 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho9_6_p_0((MR_String) "builtin", (MR_String) "character", (MR_Integer) 0, mercury__pretty_printer__STATE_VARIABLE_Formatters_4_4, &mercury__pretty_printer__STATE_VARIABLE_Formatters_9_9);
    }
#line 1081 "pretty_printer.m"
    {
#line 1081 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho8_6_p_0((MR_String) "builtin", (MR_String) "float", (MR_Integer) 0, mercury__pretty_printer__STATE_VARIABLE_Formatters_9_9, &mercury__pretty_printer__STATE_VARIABLE_Formatters_14_14);
    }
#line 1082 "pretty_printer.m"
    {
#line 1082 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho7_6_p_0((MR_String) "builtin", (MR_String) "int", (MR_Integer) 0, mercury__pretty_printer__STATE_VARIABLE_Formatters_14_14, &mercury__pretty_printer__STATE_VARIABLE_Formatters_19_19);
    }
#line 1083 "pretty_printer.m"
    {
#line 1083 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho6_6_p_0((MR_String) "builtin", (MR_String) "string", (MR_Integer) 0, mercury__pretty_printer__STATE_VARIABLE_Formatters_19_19, &mercury__pretty_printer__STATE_VARIABLE_Formatters_24_24);
    }
#line 1084 "pretty_printer.m"
    {
#line 1084 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho5_6_p_0((MR_String) "array", (MR_String) "array", (MR_Integer) 1, mercury__pretty_printer__STATE_VARIABLE_Formatters_24_24, &mercury__pretty_printer__STATE_VARIABLE_Formatters_29_29);
    }
#line 1085 "pretty_printer.m"
    {
#line 1085 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho4_6_p_0((MR_String) "list", (MR_String) "list", (MR_Integer) 1, mercury__pretty_printer__STATE_VARIABLE_Formatters_29_29, &mercury__pretty_printer__STATE_VARIABLE_Formatters_34_34);
    }
#line 1086 "pretty_printer.m"
    {
#line 1086 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho3_6_p_0((MR_String) "tree234", (MR_String) "tree234", (MR_Integer) 2, mercury__pretty_printer__STATE_VARIABLE_Formatters_34_34, &mercury__pretty_printer__STATE_VARIABLE_Formatters_39_39);
    }
#line 1087 "pretty_printer.m"
    {
#line 1087 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho2_6_p_0((MR_String) "version_array", (MR_String) "version_array", (MR_Integer) 1, mercury__pretty_printer__STATE_VARIABLE_Formatters_39_39, &mercury__pretty_printer__STATE_VARIABLE_Formatters_3);
    }
#line 1078 "pretty_printer.m"
    return mercury__pretty_printer__STATE_VARIABLE_Formatters_3;
#line 1078 "pretty_printer.m"
  }
#line 1076 "pretty_printer.m"
}

#line 958 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__unsafe_get_default_formatter_map_3_p_0(
#line 958 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_1)
#line 958 "pretty_printer.m"
{
#line 961 "pretty_printer.m"
  {
#line 961 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 964 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__unsafe_get_default_formatter_map_3_p_0

	MR_Word FMap;

		{
#line 964 "pretty_printer.m"

    FMap = ML_pretty_printer_default_formatter_map;

#line 8815 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__FMap_1  = FMap;
#line 964 "pretty_printer.m"
}
#line 961 "pretty_printer.m"
  }
#line 958 "pretty_printer.m"
}

#line 917 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__pretty_printer_is_initialised_3_p_0(
#line 917 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Okay_1)
#line 917 "pretty_printer.m"
{
#line 919 "pretty_printer.m"
  {
#line 919 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 922 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__pretty_printer_is_initialised_3_p_0

	MR_Word Okay;

		{
#line 922 "pretty_printer.m"

    Okay = ML_pretty_printer_is_initialised;

#line 8850 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__Okay_1  = Okay;
#line 922 "pretty_printer.m"
}
#line 919 "pretty_printer.m"
  }
#line 917 "pretty_printer.m"
}

#line 877 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__set_io_pp_params_3_p_0(
#line 877 "pretty_printer.m"
  MR_Word mercury__pretty_printer__X_4)
#line 877 "pretty_printer.m"
{
#line 877 "pretty_printer.m"
  {
#line 877 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_io_pp_params_3_p_0


		{
#line 877 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 8886 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_io_pp_params_3_p_0

	MR_Word X;

	X =  mercury__pretty_printer__X_4 ;
		{
#line 877 "pretty_printer.m"
mercury__pretty_printer__mutable_variable_io_pp_params = X;

#line 8903 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_io_pp_params_3_p_0


		{
#line 877 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 8921 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
  }
#line 877 "pretty_printer.m"
}

#line 877 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__get_io_pp_params_3_p_0(
#line 877 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__X_4)
#line 877 "pretty_printer.m"
{
#line 877 "pretty_printer.m"
  {
#line 877 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_io_pp_params_3_p_0


		{
#line 877 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 8956 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_io_pp_params_3_p_0

	MR_Word X;

		{
#line 877 "pretty_printer.m"
X = mercury__pretty_printer__mutable_variable_io_pp_params;

#line 8972 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__X_4  = X;
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_io_pp_params_3_p_0


		{
#line 877 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 8991 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
  }
#line 877 "pretty_printer.m"
}

#line 877 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__unsafe_set_io_pp_params_1_p_0(
#line 877 "pretty_printer.m"
  MR_Word mercury__pretty_printer__X_1)
#line 877 "pretty_printer.m"
{
#line 877 "pretty_printer.m"
  {
#line 877 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__unsafe_set_io_pp_params_1_p_0

	MR_Word X;

	X =  mercury__pretty_printer__X_1 ;
		{
#line 877 "pretty_printer.m"
mercury__pretty_printer__mutable_variable_io_pp_params = X;

#line 9025 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
  }
#line 877 "pretty_printer.m"
}

#line 877 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__unsafe_get_io_pp_params_1_p_0(
#line 877 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__X_1)
#line 877 "pretty_printer.m"
{
#line 877 "pretty_printer.m"
  {
#line 877 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__unsafe_get_io_pp_params_1_p_0

	MR_Word X;

		{
#line 877 "pretty_printer.m"
X = mercury__pretty_printer__mutable_variable_io_pp_params;

#line 9058 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__X_1  = X;
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
  }
#line 877 "pretty_printer.m"
}

#line 877 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__unlock_io_pp_params_0_p_0(void)
#line 877 "pretty_printer.m"
{
#line 877 "pretty_printer.m"
  {
#line 877 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__unlock_io_pp_params_0_p_0


		{
#line 877 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 9092 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
  }
#line 877 "pretty_printer.m"
}

#line 877 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__lock_io_pp_params_0_p_0(void)
#line 877 "pretty_printer.m"
{
#line 877 "pretty_printer.m"
  {
#line 877 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__lock_io_pp_params_0_p_0


		{
#line 877 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 9125 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
  }
#line 877 "pretty_printer.m"
}

#line 877 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0(void)
#line 877 "pretty_printer.m"
{
#line 877 "pretty_printer.m"
  {
#line 877 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 877 "pretty_printer.m"
    MR_Word mercury__pretty_printer__X_1;
#line 877 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_4_4;

#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0


		{
#line 877 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, MR_MUTEX_ATTR);
#endif

#line 9161 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
    mercury__pretty_printer__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[9]);
#line 877 "pretty_printer.m"
    mercury__pretty_printer__X_1 = (MR_Word) &mercury__pretty_printer_scalar_common_3[4];
#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0


		{
#line 877 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 9183 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0

	MR_Word X;

	X =  mercury__pretty_printer__X_1 ;
		{
#line 877 "pretty_printer.m"
mercury__pretty_printer__mutable_variable_io_pp_params = X;

#line 9200 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0


		{
#line 877 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 9218 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
  }
#line 877 "pretty_printer.m"
}

#line 877 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__pre_initialise_mutable_io_pp_params_0_p_0(void)
#line 877 "pretty_printer.m"
{
#line 877 "pretty_printer.m"
  {
#line 877 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__pre_initialise_mutable_io_pp_params_0_p_0


		{
#line 877 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, MR_MUTEX_ATTR);
#endif

#line 9250 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
  }
#line 877 "pretty_printer.m"
}

#line 861 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__decrement_limit_2_p_0(
#line 861 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 861 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__2_2)
#line 861 "pretty_printer.m"
{
#line 863 "pretty_printer.m"
  {
#line 863 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 863 "pretty_printer.m"
    if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 863 "pretty_printer.m"
      {
#line 863 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 863 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_4_4 = (mercury__pretty_printer__N_3 - (MR_Integer) 1);

#line 863 "pretty_printer.m"
        {
#line 863 "pretty_printer.m"
          MR_Word base;
#line 863 "pretty_printer.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 863 "pretty_printer.m"
          *mercury__pretty_printer__HeadVar__2_2 = base;
#line 863 "pretty_printer.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__pretty_printer__V_4_4));
#line 863 "pretty_printer.m"
        }
#line 863 "pretty_printer.m"
      }
#line 863 "pretty_printer.m"
    else
#line 864 "pretty_printer.m"
      {
#line 864 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 864 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_7_7 = (mercury__pretty_printer__N_6 - (MR_Integer) 1);

#line 864 "pretty_printer.m"
        {
#line 864 "pretty_printer.m"
          MR_Word base;
#line 864 "pretty_printer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 864 "pretty_printer.m"
          *mercury__pretty_printer__HeadVar__2_2 = base;
#line 864 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__V_7_7));
#line 864 "pretty_printer.m"
        }
#line 864 "pretty_printer.m"
      }
#line 863 "pretty_printer.m"
  }
#line 861 "pretty_printer.m"
}

#line 841 "pretty_printer.m"
static MR_Integer MR_CALL 
mercury__pretty_printer__adjust_priority_2_f_0(
#line 841 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Priority_4,
#line 841 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Assoc_5)
#line 841 "pretty_printer.m"
{
#line 34 "ops.opt"
  {
#line 34 "ops.opt"
    MR_bool mercury__pretty_printer__succeeded;
#line 34 "ops.opt"
    MR_Integer mercury__pretty_printer__AdjustedPriority_6;

#line 34 "ops.opt"
#line 34 "ops.opt"
    switch (mercury__pretty_printer__Assoc_5) {
#line 34 "ops.opt"
      default: /*NOTREACHED*/ MR_assert(0);
#line 34 "ops.opt"
      case (MR_Integer) 0:
#line 35 "ops.opt"
        {
#line 36 "ops.opt"
          mercury__pretty_printer__AdjustedPriority_6 = (mercury__pretty_printer__Priority_4 - (MR_Integer) 1);
#line 35 "ops.opt"
        }
#line 34 "ops.opt"
        break;
#line 34 "ops.opt"
      case (MR_Integer) 1:
#line 34 "ops.opt"
        mercury__pretty_printer__AdjustedPriority_6 = mercury__pretty_printer__Priority_4;
#line 34 "ops.opt"
        break;
#line 34 "ops.opt"
    }
#line 34 "ops.opt"
    return mercury__pretty_printer__AdjustedPriority_6;
#line 34 "ops.opt"
  }
#line 841 "pretty_printer.m"
}

#line 830 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__add_parens_if_needed_3_f_0(
#line 830 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__OpPriority_5,
#line 830 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__EnclosingPriority_6,
#line 830 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Doc_7)
#line 830 "pretty_printer.m"
{
#line 832 "pretty_printer.m"
  {
#line 832 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded = (mercury__pretty_printer__OpPriority_5 > mercury__pretty_printer__EnclosingPriority_6);
#line 832 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__4_4;

#line 832 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 834 "pretty_printer.m"
      {
#line 834 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_8_8;
#line 834 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[6]);
#line 834 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_11_11;
#line 834 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[12]);
#line 834 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[7]);
#line 834 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 834 "pretty_printer.m"
        {
#line 834 "pretty_printer.m"
          mercury__pretty_printer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_11_11, 0) = ((MR_Box) (mercury__pretty_printer__Doc_7));
#line 834 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_11_11, 1) = ((MR_Box) (mercury__pretty_printer__V_12_12));
#line 834 "pretty_printer.m"
        }
#line 834 "pretty_printer.m"
        {
#line 834 "pretty_printer.m"
          mercury__pretty_printer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_8_8, 0) = ((MR_Box) (mercury__pretty_printer__V_9_9));
#line 834 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_8_8, 1) = ((MR_Box) (mercury__pretty_printer__V_11_11));
#line 834 "pretty_printer.m"
        }
#line 834 "pretty_printer.m"
        {
#line 834 "pretty_printer.m"
          mercury__pretty_printer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 834 "pretty_printer.m"
          MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__4_4, 0) = ((MR_Box) (mercury__pretty_printer__V_8_8));
#line 834 "pretty_printer.m"
        }
#line 834 "pretty_printer.m"
      }
#line 832 "pretty_printer.m"
    else
#line 836 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__Doc_7;
#line 832 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__4_4;
#line 832 "pretty_printer.m"
  }
#line 830 "pretty_printer.m"
}

#line 819 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__set_formatting_limit_correctly_2_f_0(
#line 819 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 819 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 819 "pretty_printer.m"
{
#line 821 "pretty_printer.m"
  {
#line 821 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 821 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;

#line 821 "pretty_printer.m"
    if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 822 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__2_2;
#line 821 "pretty_printer.m"
    else
#line 823 "pretty_printer.m"
      {
#line 823 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_9_9;
#line 823 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_10_10;
#line 823 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_11_11;
#line 823 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_12_12;
#line 823 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_13_13;

#line 824 "pretty_printer.m"
        {
#line 824 "pretty_printer.m"
          mercury__pretty_printer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 824 "pretty_printer.m"
          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_12_12, 0) = ((MR_Box) (mercury__pretty_printer__HeadVar__1_1));
#line 824 "pretty_printer.m"
        }
#line 824 "pretty_printer.m"
        {
#line 824 "pretty_printer.m"
          mercury__pretty_printer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "pretty_printer.m"
          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 824 "pretty_printer.m"
          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_11_11, 1) = ((MR_Box) (mercury__pretty_printer__V_12_12));
#line 824 "pretty_printer.m"
        }
#line 824 "pretty_printer.m"
        mercury__pretty_printer__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 824 "pretty_printer.m"
        {
#line 824 "pretty_printer.m"
          mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_10_10, 0) = ((MR_Box) (mercury__pretty_printer__V_11_11));
#line 824 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_10_10, 1) = ((MR_Box) (mercury__pretty_printer__V_13_13));
#line 824 "pretty_printer.m"
        }
#line 824 "pretty_printer.m"
        {
#line 824 "pretty_printer.m"
          mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 0) = ((MR_Box) (mercury__pretty_printer__HeadVar__2_2));
#line 824 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 1) = ((MR_Box) (mercury__pretty_printer__V_10_10));
#line 824 "pretty_printer.m"
        }
#line 824 "pretty_printer.m"
        {
#line 824 "pretty_printer.m"
          mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 824 "pretty_printer.m"
          MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_9_9));
#line 824 "pretty_printer.m"
        }
#line 823 "pretty_printer.m"
      }
#line 821 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 821 "pretty_printer.m"
  }
#line 819 "pretty_printer.m"
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
#line 9586 "pretty_printer.c"
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
#line 9741 "pretty_printer.c"
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
#line 775 "pretty_printer.m"
          {
#line 775 "pretty_printer.m"
            MR_Word mercury__pretty_printer__ArgB_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_110_110, (MR_Integer) 0)));
#line 775 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_110_110, (MR_Integer) 1)));
#line 797 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__OpPri_41;
#line 797 "pretty_printer.m"
            MR_Word mercury__pretty_printer__AssocA_42;
#line 797 "pretty_printer.m"
            MR_Word mercury__pretty_printer__AssocB_43;
#line 777 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_108;

#line 775 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 775 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 775 "pretty_printer.m"
              {
#line 777 "pretty_printer.m"
                {
#line 777 "pretty_printer.m"
                  mercury__ops__init_mercury_op_table_0_f_0();
                }
#line 9871 "pretty_printer.c"
                mercury__pretty_printer__TypeClassInfo_for_op_table_108 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 777 "pretty_printer.m"
                {
#line 777 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__pretty_printer__TypeClassInfo_for_op_table_108, ((MR_Box) ((MR_Integer) 0)), mercury__pretty_printer__Op_1, &mercury__pretty_printer__OpPri_41, &mercury__pretty_printer__AssocA_42, &mercury__pretty_printer__AssocB_43);
                }
#line 797 "pretty_printer.m"
                if (mercury__pretty_printer__succeeded)
#line 795 "pretty_printer.m"
                  {
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__Doc_44;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_48_48;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_49_49;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_50_50;
#line 795 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__V_51_51;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_52_52;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_53_53;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_54_54;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_55_55;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_65_65;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_66_66;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_67_67;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_68_68;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_69_69;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_70_70;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_71_71;
#line 795 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__V_72_72;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_73_73;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_74_74;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_75_75;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_76_76;

#line 782 "pretty_printer.m"
                    {
#line 782 "pretty_printer.m"
                      mercury__pretty_printer__V_51_51 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_41, mercury__pretty_printer__AssocA_42);
                    }
#line 782 "pretty_printer.m"
                    {
#line 782 "pretty_printer.m"
                      mercury__pretty_printer__V_50_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 782 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_50_50, 0) = ((MR_Box) (mercury__pretty_printer__V_51_51));
#line 782 "pretty_printer.m"
                    }
#line 782 "pretty_printer.m"
                    {
#line 782 "pretty_printer.m"
                      mercury__pretty_printer__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 782 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 782 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_49_49, 1) = ((MR_Box) (mercury__pretty_printer__V_50_50));
#line 782 "pretty_printer.m"
                    }
#line 783 "pretty_printer.m"
                    {
#line 783 "pretty_printer.m"
                      mercury__pretty_printer__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 783 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_53_53, 1) = ((MR_Box) (mercury__pretty_printer__V_111_111));
#line 783 "pretty_printer.m"
                    }
#line 784 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = (strcmp(mercury__pretty_printer__Op_1, (MR_String) ".") == 0);
#line 788 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 785 "pretty_printer.m"
                      {
#line 785 "pretty_printer.m"
                        mercury__pretty_printer__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 785 "pretty_printer.m"
                        MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_55_55, 0) = ((MR_Box) (mercury__pretty_printer__Op_1));
#line 785 "pretty_printer.m"
                      }
#line 788 "pretty_printer.m"
                    else
#line 787 "pretty_printer.m"
                      {
#line 787 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_56_56;
#line 787 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[8]);
#line 787 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_59_59;
#line 787 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_60_60;
#line 787 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_61_61;
#line 787 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_64_64;

#line 787 "pretty_printer.m"
                        {
#line 787 "pretty_printer.m"
                          mercury__pretty_printer__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 787 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_60_60, 0) = ((MR_Box) (mercury__pretty_printer__Op_1));
#line 787 "pretty_printer.m"
                        }
#line 787 "pretty_printer.m"
                        mercury__pretty_printer__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 787 "pretty_printer.m"
                        mercury__pretty_printer__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[13]);
#line 787 "pretty_printer.m"
                        {
#line 787 "pretty_printer.m"
                          mercury__pretty_printer__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_59_59, 0) = ((MR_Box) (mercury__pretty_printer__V_60_60));
#line 787 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_59_59, 1) = ((MR_Box) (mercury__pretty_printer__V_61_61));
#line 787 "pretty_printer.m"
                        }
#line 787 "pretty_printer.m"
                        {
#line 787 "pretty_printer.m"
                          mercury__pretty_printer__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_56_56, 0) = ((MR_Box) (mercury__pretty_printer__V_57_57));
#line 787 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_56_56, 1) = ((MR_Box) (mercury__pretty_printer__V_59_59));
#line 787 "pretty_printer.m"
                        }
#line 787 "pretty_printer.m"
                        {
#line 787 "pretty_printer.m"
                          mercury__pretty_printer__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 787 "pretty_printer.m"
                          MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_55_55, 0) = ((MR_Box) (mercury__pretty_printer__V_56_56));
#line 787 "pretty_printer.m"
                        }
#line 787 "pretty_printer.m"
                      }
#line 790 "pretty_printer.m"
                    mercury__pretty_printer__V_68_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 791 "pretty_printer.m"
                    {
#line 791 "pretty_printer.m"
                      mercury__pretty_printer__V_72_72 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_41, mercury__pretty_printer__AssocB_43);
                    }
#line 791 "pretty_printer.m"
                    {
#line 791 "pretty_printer.m"
                      mercury__pretty_printer__V_71_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 791 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_71_71, 0) = ((MR_Box) (mercury__pretty_printer__V_72_72));
#line 791 "pretty_printer.m"
                    }
#line 791 "pretty_printer.m"
                    {
#line 791 "pretty_printer.m"
                      mercury__pretty_printer__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 791 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_70_70, 1) = ((MR_Box) (mercury__pretty_printer__V_71_71));
#line 791 "pretty_printer.m"
                    }
#line 793 "pretty_printer.m"
                    {
#line 793 "pretty_printer.m"
                      mercury__pretty_printer__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 793 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_74_74, 1) = ((MR_Box) (mercury__pretty_printer__ArgB_38));
#line 793 "pretty_printer.m"
                    }
#line 794 "pretty_printer.m"
                    mercury__pretty_printer__V_75_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 794 "pretty_printer.m"
                    {
#line 794 "pretty_printer.m"
                      mercury__pretty_printer__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_73_73, 0) = ((MR_Box) (mercury__pretty_printer__V_74_74));
#line 794 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_73_73, 1) = ((MR_Box) (mercury__pretty_printer__V_75_75));
#line 794 "pretty_printer.m"
                    }
#line 792 "pretty_printer.m"
                    {
#line 792 "pretty_printer.m"
                      mercury__pretty_printer__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_69_69, 0) = ((MR_Box) (mercury__pretty_printer__V_70_70));
#line 792 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_69_69, 1) = ((MR_Box) (mercury__pretty_printer__V_73_73));
#line 792 "pretty_printer.m"
                    }
#line 790 "pretty_printer.m"
                    {
#line 790 "pretty_printer.m"
                      mercury__pretty_printer__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_67_67, 0) = ((MR_Box) (mercury__pretty_printer__V_68_68));
#line 790 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_67_67, 1) = ((MR_Box) (mercury__pretty_printer__V_69_69));
#line 790 "pretty_printer.m"
                    }
#line 789 "pretty_printer.m"
                    {
#line 789 "pretty_printer.m"
                      mercury__pretty_printer__V_66_66 = mercury__pretty_printer__indent_1_f_0(mercury__pretty_printer__V_67_67);
                    }
#line 795 "pretty_printer.m"
                    mercury__pretty_printer__V_76_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 795 "pretty_printer.m"
                    {
#line 795 "pretty_printer.m"
                      mercury__pretty_printer__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_65_65, 0) = ((MR_Box) (mercury__pretty_printer__V_66_66));
#line 795 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_65_65, 1) = ((MR_Box) (mercury__pretty_printer__V_76_76));
#line 795 "pretty_printer.m"
                    }
#line 788 "pretty_printer.m"
                    {
#line 788 "pretty_printer.m"
                      mercury__pretty_printer__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_54_54, 0) = ((MR_Box) (mercury__pretty_printer__V_55_55));
#line 788 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_54_54, 1) = ((MR_Box) (mercury__pretty_printer__V_65_65));
#line 788 "pretty_printer.m"
                    }
#line 783 "pretty_printer.m"
                    {
#line 783 "pretty_printer.m"
                      mercury__pretty_printer__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_52_52, 0) = ((MR_Box) (mercury__pretty_printer__V_53_53));
#line 783 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_52_52, 1) = ((MR_Box) (mercury__pretty_printer__V_54_54));
#line 783 "pretty_printer.m"
                    }
#line 782 "pretty_printer.m"
                    {
#line 782 "pretty_printer.m"
                      mercury__pretty_printer__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 782 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_48_48, 0) = ((MR_Box) (mercury__pretty_printer__V_49_49));
#line 782 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_48_48, 1) = ((MR_Box) (mercury__pretty_printer__V_52_52));
#line 782 "pretty_printer.m"
                    }
#line 781 "pretty_printer.m"
                    {
#line 781 "pretty_printer.m"
                      mercury__pretty_printer__Doc_44 = mercury__pretty_printer__group_1_f_0(mercury__pretty_printer__V_48_48);
                    }
#line 796 "pretty_printer.m"
                    {
#line 796 "pretty_printer.m"
                      *mercury__pretty_printer__Docs_4 = mercury__pretty_printer__add_parens_if_needed_3_f_0(mercury__pretty_printer__OpPri_41, mercury__pretty_printer__CurrentPri_3, mercury__pretty_printer__Doc_44);
                    }
#line 795 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = MR_TRUE;
#line 795 "pretty_printer.m"
                  }
#line 797 "pretty_printer.m"
                else
#line 799 "pretty_printer.m"
                  {
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_109;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_78_78;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_79_79;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_80_80;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_81_81;
#line 799 "pretty_printer.m"
                    MR_String mercury__pretty_printer__V_82_82;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_83_83;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_84_84;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_85_85;
#line 799 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__V_86_86;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_87_87;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_88_88;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_89_89;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_92_92;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_93_93;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_94_94;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_95_95;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_96_96;
#line 799 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__V_97_97;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_98_98;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_99_99;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_100_100;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_101_101;
#line 799 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__OpPri_102;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__AssocA_103;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__AssocB_104;
#line 799 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__Doc_105;

#line 798 "pretty_printer.m"
                    {
#line 798 "pretty_printer.m"
                      mercury__ops__init_mercury_op_table_0_f_0();
                    }
#line 10221 "pretty_printer.c"
                    mercury__pretty_printer__TypeClassInfo_for_op_table_109 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 798 "pretty_printer.m"
                    {
#line 798 "pretty_printer.m"
                      mercury__pretty_printer__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__pretty_printer__TypeClassInfo_for_op_table_109, ((MR_Box) ((MR_Integer) 0)), mercury__pretty_printer__Op_1, &mercury__pretty_printer__OpPri_102, &mercury__pretty_printer__AssocA_103, &mercury__pretty_printer__AssocB_104);
                    }
#line 799 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 799 "pretty_printer.m"
                      {
#line 802 "pretty_printer.m"
                        mercury__pretty_printer__V_82_82 = (MR_String) " ";
#line 802 "pretty_printer.m"
                        {
#line 802 "pretty_printer.m"
                          mercury__pretty_printer__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 802 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_79_79, 0) = ((MR_Box) (mercury__pretty_printer__Op_1));
#line 802 "pretty_printer.m"
                        }
#line 802 "pretty_printer.m"
                        mercury__pretty_printer__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[8]);
#line 803 "pretty_printer.m"
                        {
#line 803 "pretty_printer.m"
                          mercury__pretty_printer__V_86_86 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_102, mercury__pretty_printer__AssocA_103);
                        }
#line 803 "pretty_printer.m"
                        {
#line 803 "pretty_printer.m"
                          mercury__pretty_printer__V_85_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 803 "pretty_printer.m"
                          MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_85_85, 0) = ((MR_Box) (mercury__pretty_printer__V_86_86));
#line 803 "pretty_printer.m"
                        }
#line 803 "pretty_printer.m"
                        {
#line 803 "pretty_printer.m"
                          mercury__pretty_printer__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 803 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_84_84, 1) = ((MR_Box) (mercury__pretty_printer__V_85_85));
#line 803 "pretty_printer.m"
                        }
#line 804 "pretty_printer.m"
                        {
#line 804 "pretty_printer.m"
                          mercury__pretty_printer__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 804 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_88_88, 1) = ((MR_Box) (mercury__pretty_printer__V_111_111));
#line 804 "pretty_printer.m"
                        }
#line 807 "pretty_printer.m"
                        {
#line 807 "pretty_printer.m"
                          mercury__pretty_printer__V_97_97 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_102, mercury__pretty_printer__AssocB_104);
                        }
#line 810 "pretty_printer.m"
                        mercury__pretty_printer__V_100_100 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 807 "pretty_printer.m"
                        {
#line 807 "pretty_printer.m"
                          mercury__pretty_printer__V_96_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 807 "pretty_printer.m"
                          MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_96_96, 0) = ((MR_Box) (mercury__pretty_printer__V_97_97));
#line 807 "pretty_printer.m"
                        }
#line 807 "pretty_printer.m"
                        {
#line 807 "pretty_printer.m"
                          mercury__pretty_printer__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 807 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_95_95, 1) = ((MR_Box) (mercury__pretty_printer__V_96_96));
#line 807 "pretty_printer.m"
                        }
#line 809 "pretty_printer.m"
                        {
#line 809 "pretty_printer.m"
                          mercury__pretty_printer__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 809 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_99_99, 1) = ((MR_Box) (mercury__pretty_printer__ArgB_38));
#line 809 "pretty_printer.m"
                        }
#line 810 "pretty_printer.m"
                        {
#line 810 "pretty_printer.m"
                          mercury__pretty_printer__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_98_98, 0) = ((MR_Box) (mercury__pretty_printer__V_99_99));
#line 810 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_98_98, 1) = ((MR_Box) (mercury__pretty_printer__V_100_100));
#line 810 "pretty_printer.m"
                        }
#line 808 "pretty_printer.m"
                        {
#line 808 "pretty_printer.m"
                          mercury__pretty_printer__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 0) = ((MR_Box) (mercury__pretty_printer__V_95_95));
#line 808 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 1) = ((MR_Box) (mercury__pretty_printer__V_98_98));
#line 808 "pretty_printer.m"
                        }
#line 806 "pretty_printer.m"
                        {
#line 806 "pretty_printer.m"
                          mercury__pretty_printer__V_93_93 = mercury__pretty_printer__indent_1_f_0(mercury__pretty_printer__V_94_94);
                        }
#line 811 "pretty_printer.m"
                        mercury__pretty_printer__V_101_101 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 811 "pretty_printer.m"
                        {
#line 811 "pretty_printer.m"
                          mercury__pretty_printer__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_92_92, 0) = ((MR_Box) (mercury__pretty_printer__V_93_93));
#line 811 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_92_92, 1) = ((MR_Box) (mercury__pretty_printer__V_101_101));
#line 811 "pretty_printer.m"
                        }
#line 805 "pretty_printer.m"
                        {
#line 805 "pretty_printer.m"
                          mercury__pretty_printer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 0) = ((MR_Box) (mercury__pretty_printer__V_81_81));
#line 805 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 1) = ((MR_Box) (mercury__pretty_printer__V_92_92));
#line 805 "pretty_printer.m"
                        }
#line 804 "pretty_printer.m"
                        {
#line 804 "pretty_printer.m"
                          mercury__pretty_printer__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_87_87, 0) = ((MR_Box) (mercury__pretty_printer__V_88_88));
#line 804 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_87_87, 1) = ((MR_Box) (mercury__pretty_printer__V_89_89));
#line 804 "pretty_printer.m"
                        }
#line 803 "pretty_printer.m"
                        {
#line 803 "pretty_printer.m"
                          mercury__pretty_printer__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_83_83, 0) = ((MR_Box) (mercury__pretty_printer__V_84_84));
#line 803 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_83_83, 1) = ((MR_Box) (mercury__pretty_printer__V_87_87));
#line 803 "pretty_printer.m"
                        }
#line 802 "pretty_printer.m"
                        {
#line 802 "pretty_printer.m"
                          mercury__pretty_printer__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_80_80, 0) = ((MR_Box) (mercury__pretty_printer__V_81_81));
#line 802 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_80_80, 1) = ((MR_Box) (mercury__pretty_printer__V_83_83));
#line 802 "pretty_printer.m"
                        }
#line 802 "pretty_printer.m"
                        {
#line 802 "pretty_printer.m"
                          mercury__pretty_printer__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_78_78, 0) = ((MR_Box) (mercury__pretty_printer__V_79_79));
#line 802 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_78_78, 1) = ((MR_Box) (mercury__pretty_printer__V_80_80));
#line 802 "pretty_printer.m"
                        }
#line 801 "pretty_printer.m"
                        {
#line 801 "pretty_printer.m"
                          mercury__pretty_printer__Doc_105 = mercury__pretty_printer__group_1_f_0(mercury__pretty_printer__V_78_78);
                        }
#line 812 "pretty_printer.m"
                        {
#line 812 "pretty_printer.m"
                          *mercury__pretty_printer__Docs_4 = mercury__pretty_printer__add_parens_if_needed_3_f_0(mercury__pretty_printer__OpPri_102, mercury__pretty_printer__CurrentPri_3, mercury__pretty_printer__Doc_105);
                        }
#line 812 "pretty_printer.m"
                        mercury__pretty_printer__succeeded = MR_TRUE;
#line 799 "pretty_printer.m"
                      }
#line 799 "pretty_printer.m"
                  }
#line 775 "pretty_printer.m"
              }
#line 775 "pretty_printer.m"
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

#line 852 "pretty_printer.m"
    if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_8)) == (MR_mktag((MR_Integer) 0))))
#line 852 "pretty_printer.m"
      {
#line 852 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_8, (MR_Integer) 0)));

#line 853 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_12 <= (MR_Integer) 0);
#line 852 "pretty_printer.m"
      }
#line 852 "pretty_printer.m"
    else
#line 854 "pretty_printer.m"
      {
#line 854 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_8, (MR_Integer) 0)));

#line 855 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_14 <= (MR_Integer) 0);
#line 854 "pretty_printer.m"
      }
#line 743 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 742 "pretty_printer.m"
      {
#line 1195 "pretty_printer.m"
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

#line 863 "pretty_printer.m"
        if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_8)) == (MR_mktag((MR_Integer) 0))))
#line 863 "pretty_printer.m"
          {
#line 863 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__N_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_8, (MR_Integer) 0)));
#line 863 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__V_18_18 = (mercury__pretty_printer__N_17 - (MR_Integer) 1);

#line 863 "pretty_printer.m"
            {
#line 863 "pretty_printer.m"
              MR_Word base;
#line 863 "pretty_printer.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 863 "pretty_printer.m"
              *mercury__pretty_printer__STATE_VARIABLE_Limit_9 = base;
#line 863 "pretty_printer.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__pretty_printer__V_18_18));
#line 863 "pretty_printer.m"
            }
#line 863 "pretty_printer.m"
          }
#line 863 "pretty_printer.m"
        else
#line 864 "pretty_printer.m"
          {
#line 864 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__N_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_8, (MR_Integer) 0)));
#line 864 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__V_21_21 = (mercury__pretty_printer__N_20 - (MR_Integer) 1);

#line 864 "pretty_printer.m"
            {
#line 864 "pretty_printer.m"
              MR_Word base;
#line 864 "pretty_printer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 864 "pretty_printer.m"
              *mercury__pretty_printer__STATE_VARIABLE_Limit_9 = base;
#line 864 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__V_21_21));
#line 864 "pretty_printer.m"
            }
#line 864 "pretty_printer.m"
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
#line 821 "pretty_printer.m"
        if (((MR_tag((MR_Word) *mercury__pretty_printer__STATE_VARIABLE_Limit_9)) == (MR_mktag((MR_Integer) 0))))
#line 822 "pretty_printer.m"
          *mercury__pretty_printer__Doc_6 = mercury__pretty_printer__V_11_11;
#line 821 "pretty_printer.m"
        else
#line 823 "pretty_printer.m"
          {
#line 823 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_28_28;
#line 823 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_29_29;
#line 823 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_30_30;
#line 823 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_31_31;
#line 823 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_32_32;

#line 824 "pretty_printer.m"
            {
#line 824 "pretty_printer.m"
              mercury__pretty_printer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 824 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_31_31, 0) = ((MR_Box) (*mercury__pretty_printer__STATE_VARIABLE_Limit_9));
#line 824 "pretty_printer.m"
            }
#line 824 "pretty_printer.m"
            {
#line 824 "pretty_printer.m"
              mercury__pretty_printer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 824 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_30_30, 1) = ((MR_Box) (mercury__pretty_printer__V_31_31));
#line 824 "pretty_printer.m"
            }
#line 824 "pretty_printer.m"
            mercury__pretty_printer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 824 "pretty_printer.m"
            {
#line 824 "pretty_printer.m"
              mercury__pretty_printer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 0) = ((MR_Box) (mercury__pretty_printer__V_30_30));
#line 824 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 1) = ((MR_Box) (mercury__pretty_printer__V_32_32));
#line 824 "pretty_printer.m"
            }
#line 824 "pretty_printer.m"
            {
#line 824 "pretty_printer.m"
              mercury__pretty_printer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_28_28, 0) = ((MR_Box) (mercury__pretty_printer__V_11_11));
#line 824 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_28_28, 1) = ((MR_Box) (mercury__pretty_printer__V_29_29));
#line 824 "pretty_printer.m"
            }
#line 824 "pretty_printer.m"
            {
#line 824 "pretty_printer.m"
              MR_Word base;
#line 824 "pretty_printer.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 824 "pretty_printer.m"
              *mercury__pretty_printer__Doc_6 = base;
#line 824 "pretty_printer.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__pretty_printer__V_28_28));
#line 824 "pretty_printer.m"
            }
#line 823 "pretty_printer.m"
          }
#line 744 "pretty_printer.m"
      }
#line 743 "pretty_printer.m"
  }
#line 737 "pretty_printer.m"
}

#line 711 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_format_term_6_p_0(
#line 711 "pretty_printer.m"
  MR_String mercury__pretty_printer__Name_7,
#line 711 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Args_8,
#line 711 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_9,
#line 711 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_14,
#line 711 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_15,
#line 711 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_11)
#line 711 "pretty_printer.m"
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
#line 852 "pretty_printer.m"
        if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_14)) == (MR_mktag((MR_Integer) 0))))
#line 852 "pretty_printer.m"
          {
#line 852 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__N_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_14, (MR_Integer) 0)));

#line 853 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_54 <= (MR_Integer) 0);
#line 852 "pretty_printer.m"
          }
#line 852 "pretty_printer.m"
        else
#line 854 "pretty_printer.m"
          {
#line 854 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__N_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_14, (MR_Integer) 0)));

#line 855 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_56 <= (MR_Integer) 0);
#line 854 "pretty_printer.m"
          }
#line 719 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 1195 "pretty_printer.m"
          {
#line 1195 "pretty_printer.m"
            mercury__pretty_printer__Doc0_12 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1]);
#line 1195 "pretty_printer.m"
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
#line 316 "pretty_printer.m"
                    mercury__pretty_printer__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[0]);
#line 316 "pretty_printer.m"
                    mercury__pretty_printer__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[7]);
#line 316 "pretty_printer.m"
                    {
#line 316 "pretty_printer.m"
                      mercury__pretty_printer__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 316 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_67_67, 0) = ((MR_Box) (mercury__pretty_printer__V_22_22));
#line 316 "pretty_printer.m"
                    }
#line 316 "pretty_printer.m"
                    mercury__pretty_printer__V_70_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 316 "pretty_printer.m"
                    mercury__pretty_printer__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[5]);
#line 316 "pretty_printer.m"
                    mercury__pretty_printer__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 316 "pretty_printer.m"
                    mercury__pretty_printer__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[6]);
#line 316 "pretty_printer.m"
                    {
#line 316 "pretty_printer.m"
                      mercury__pretty_printer__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_66_66, 0) = ((MR_Box) (mercury__pretty_printer__V_67_67));
#line 316 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_66_66, 1) = ((MR_Box) (mercury__pretty_printer__V_68_68));
#line 316 "pretty_printer.m"
                    }
#line 316 "pretty_printer.m"
                    {
#line 316 "pretty_printer.m"
                      mercury__pretty_printer__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_63_63, 0) = ((MR_Box) (mercury__pretty_printer__V_64_64));
#line 316 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_63_63, 1) = ((MR_Box) (mercury__pretty_printer__V_66_66));
#line 316 "pretty_printer.m"
                    }
#line 316 "pretty_printer.m"
                    {
#line 316 "pretty_printer.m"
                      mercury__pretty_printer__V_21_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 316 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_21_21, 0) = ((MR_Box) (mercury__pretty_printer__V_63_63));
#line 316 "pretty_printer.m"
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
#line 316 "pretty_printer.m"
                    mercury__pretty_printer__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[0]);
#line 316 "pretty_printer.m"
                    mercury__pretty_printer__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[7]);
#line 316 "pretty_printer.m"
                    {
#line 316 "pretty_printer.m"
                      mercury__pretty_printer__V_83_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 316 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_83_83, 0) = ((MR_Box) (mercury__pretty_printer__V_41_41));
#line 316 "pretty_printer.m"
                    }
#line 316 "pretty_printer.m"
                    mercury__pretty_printer__V_86_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 316 "pretty_printer.m"
                    mercury__pretty_printer__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[5]);
#line 316 "pretty_printer.m"
                    mercury__pretty_printer__V_87_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 316 "pretty_printer.m"
                    mercury__pretty_printer__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[6]);
#line 316 "pretty_printer.m"
                    {
#line 316 "pretty_printer.m"
                      mercury__pretty_printer__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_82_82, 0) = ((MR_Box) (mercury__pretty_printer__V_83_83));
#line 316 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_82_82, 1) = ((MR_Box) (mercury__pretty_printer__V_84_84));
#line 316 "pretty_printer.m"
                    }
#line 316 "pretty_printer.m"
                    {
#line 316 "pretty_printer.m"
                      mercury__pretty_printer__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_79_79, 0) = ((MR_Box) (mercury__pretty_printer__V_80_80));
#line 316 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_79_79, 1) = ((MR_Box) (mercury__pretty_printer__V_82_82));
#line 316 "pretty_printer.m"
                    }
#line 316 "pretty_printer.m"
                    {
#line 316 "pretty_printer.m"
                      mercury__pretty_printer__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 316 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_40_40, 0) = ((MR_Box) (mercury__pretty_printer__V_79_79));
#line 316 "pretty_printer.m"
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
#line 326 "pretty_printer.m"
                    mercury__pretty_printer__V_91_91 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 326 "pretty_printer.m"
                    mercury__pretty_printer__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[8]);
#line 326 "pretty_printer.m"
                    {
#line 326 "pretty_printer.m"
                      mercury__pretty_printer__V_93_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 326 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_93_93, 0) = ((MR_Box) (mercury__pretty_printer__V_31_31));
#line 326 "pretty_printer.m"
                    }
#line 326 "pretty_printer.m"
                    mercury__pretty_printer__V_96_96 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 326 "pretty_printer.m"
                    mercury__pretty_printer__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[9]);
#line 326 "pretty_printer.m"
                    mercury__pretty_printer__V_97_97 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 326 "pretty_printer.m"
                    mercury__pretty_printer__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[10]);
#line 326 "pretty_printer.m"
                    {
#line 326 "pretty_printer.m"
                      mercury__pretty_printer__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_92_92, 0) = ((MR_Box) (mercury__pretty_printer__V_93_93));
#line 326 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_92_92, 1) = ((MR_Box) (mercury__pretty_printer__V_94_94));
#line 326 "pretty_printer.m"
                    }
#line 326 "pretty_printer.m"
                    {
#line 326 "pretty_printer.m"
                      mercury__pretty_printer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 0) = ((MR_Box) (mercury__pretty_printer__V_90_90));
#line 326 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 1) = ((MR_Box) (mercury__pretty_printer__V_92_92));
#line 326 "pretty_printer.m"
                    }
#line 326 "pretty_printer.m"
                    {
#line 326 "pretty_printer.m"
                      mercury__pretty_printer__Doc0_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 326 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc0_12, 0) = ((MR_Box) (mercury__pretty_printer__V_89_89));
#line 326 "pretty_printer.m"
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
#line 711 "pretty_printer.m"
}

#line 685 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_format_list_5_p_0(
#line 685 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 685 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 685 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__3_3,
#line 685 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_4,
#line 685 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_5)
#line 685 "pretty_printer.m"
{
#line 688 "pretty_printer.m"
  {
#line 688 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 688 "pretty_printer.m"
    if ((mercury__pretty_printer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 688 "pretty_printer.m"
      {
#line 688 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 688 "pretty_printer.m"
        *mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__pretty_printer_scalar_common_5[2]);
#line 688 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_Limit_5 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_4;
#line 688 "pretty_printer.m"
      }
#line 688 "pretty_printer.m"
    else
#line 690 "pretty_printer.m"
      {
#line 690 "pretty_printer.m"
        MR_Word mercury__pretty_printer__Univ_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 690 "pretty_printer.m"
        MR_Word mercury__pretty_printer__Univs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));

#line 852 "pretty_printer.m"
        if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_4)) == (MR_mktag((MR_Integer) 0))))
#line 852 "pretty_printer.m"
          {
#line 852 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__N_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_4, (MR_Integer) 0)));

#line 853 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_38 <= (MR_Integer) 0);
#line 852 "pretty_printer.m"
          }
#line 852 "pretty_printer.m"
        else
#line 854 "pretty_printer.m"
          {
#line 854 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__N_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_4, (MR_Integer) 0)));

#line 855 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_40 <= (MR_Integer) 0);
#line 854 "pretty_printer.m"
          }
#line 693 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 1195 "pretty_printer.m"
          {
#line 1195 "pretty_printer.m"
            *mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1]);
#line 1195 "pretty_printer.m"
          }
#line 693 "pretty_printer.m"
        else
#line 697 "pretty_printer.m"
        if ((mercury__pretty_printer__Univs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 695 "pretty_printer.m"
          {
#line 695 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_32_32;
#line 695 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_33_33;
#line 695 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 695 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_35_35;
#line 695 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_36_36;
#line 695 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_37_37;
#line 695 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_44_44;
#line 695 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_45_45;
#line 695 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_46_46;
#line 695 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_47_47;
#line 695 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_48_48;
#line 695 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_49_49;
#line 695 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_50_50;
#line 695 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_51_51;
#line 695 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_52_52;

#line 696 "pretty_printer.m"
            {
#line 696 "pretty_printer.m"
              mercury__pretty_printer__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 696 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_36_36, 1) = ((MR_Box) (mercury__pretty_printer__Univ_11));
#line 696 "pretty_printer.m"
            }
#line 696 "pretty_printer.m"
            mercury__pretty_printer__V_37_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "pretty_printer.m"
            {
#line 696 "pretty_printer.m"
              mercury__pretty_printer__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_35_35, 0) = ((MR_Box) (mercury__pretty_printer__V_36_36));
#line 696 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_35_35, 1) = ((MR_Box) (mercury__pretty_printer__V_37_37));
#line 696 "pretty_printer.m"
            }
#line 696 "pretty_printer.m"
            {
#line 696 "pretty_printer.m"
              mercury__pretty_printer__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_33_33, 0) = ((MR_Box) (mercury__pretty_printer__V_34_34));
#line 696 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_33_33, 1) = ((MR_Box) (mercury__pretty_printer__V_35_35));
#line 696 "pretty_printer.m"
            }
#line 326 "pretty_printer.m"
            mercury__pretty_printer__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 326 "pretty_printer.m"
            mercury__pretty_printer__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[8]);
#line 326 "pretty_printer.m"
            {
#line 326 "pretty_printer.m"
              mercury__pretty_printer__V_48_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 326 "pretty_printer.m"
              MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_48_48, 0) = ((MR_Box) (mercury__pretty_printer__V_33_33));
#line 326 "pretty_printer.m"
            }
#line 326 "pretty_printer.m"
            mercury__pretty_printer__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 326 "pretty_printer.m"
            mercury__pretty_printer__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[9]);
#line 326 "pretty_printer.m"
            mercury__pretty_printer__V_52_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 326 "pretty_printer.m"
            mercury__pretty_printer__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[10]);
#line 326 "pretty_printer.m"
            {
#line 326 "pretty_printer.m"
              mercury__pretty_printer__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_47_47, 0) = ((MR_Box) (mercury__pretty_printer__V_48_48));
#line 326 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_47_47, 1) = ((MR_Box) (mercury__pretty_printer__V_49_49));
#line 326 "pretty_printer.m"
            }
#line 326 "pretty_printer.m"
            {
#line 326 "pretty_printer.m"
              mercury__pretty_printer__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_44_44, 0) = ((MR_Box) (mercury__pretty_printer__V_45_45));
#line 326 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_44_44, 1) = ((MR_Box) (mercury__pretty_printer__V_47_47));
#line 326 "pretty_printer.m"
            }
#line 326 "pretty_printer.m"
            {
#line 326 "pretty_printer.m"
              mercury__pretty_printer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 326 "pretty_printer.m"
              MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_32_32, 0) = ((MR_Box) (mercury__pretty_printer__V_44_44));
#line 326 "pretty_printer.m"
            }
#line 696 "pretty_printer.m"
            {
#line 696 "pretty_printer.m"
              *mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__format_arg_1_f_0(mercury__pretty_printer__V_32_32);
            }
#line 695 "pretty_printer.m"
          }
#line 697 "pretty_printer.m"
        else
#line 698 "pretty_printer.m"
          {
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_20_20;
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_21_21;
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_22_22;
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_23_23;
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_25_25;
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_26_26;
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_27_27;
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_28_28;
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_29_29;
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_30_30;
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_31_31;
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_54_54;
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_55_55;
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_56_56;
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_57_57;
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_58_58;
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_59_59;
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_60_60;
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_61_61;
#line 698 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_62_62;

#line 700 "pretty_printer.m"
            {
#line 700 "pretty_printer.m"
              mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 700 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_26_26, 1) = ((MR_Box) (mercury__pretty_printer__Univ_11));
#line 700 "pretty_printer.m"
            }
#line 700 "pretty_printer.m"
            mercury__pretty_printer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 700 "pretty_printer.m"
            {
#line 700 "pretty_printer.m"
              mercury__pretty_printer__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_27_27, 0) = ((MR_Box) (mercury__pretty_printer__HeadVar__2_2));
#line 700 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_27_27, 1) = ((MR_Box) (mercury__pretty_printer__V_28_28));
#line 700 "pretty_printer.m"
            }
#line 700 "pretty_printer.m"
            {
#line 700 "pretty_printer.m"
              mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_25_25, 0) = ((MR_Box) (mercury__pretty_printer__V_26_26));
#line 700 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_25_25, 1) = ((MR_Box) (mercury__pretty_printer__V_27_27));
#line 700 "pretty_printer.m"
            }
#line 700 "pretty_printer.m"
            {
#line 700 "pretty_printer.m"
              mercury__pretty_printer__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_23_23, 0) = ((MR_Box) (mercury__pretty_printer__V_24_24));
#line 700 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_23_23, 1) = ((MR_Box) (mercury__pretty_printer__V_25_25));
#line 700 "pretty_printer.m"
            }
#line 326 "pretty_printer.m"
            mercury__pretty_printer__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 326 "pretty_printer.m"
            mercury__pretty_printer__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[8]);
#line 326 "pretty_printer.m"
            {
#line 326 "pretty_printer.m"
              mercury__pretty_printer__V_58_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 326 "pretty_printer.m"
              MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_58_58, 0) = ((MR_Box) (mercury__pretty_printer__V_23_23));
#line 326 "pretty_printer.m"
            }
#line 326 "pretty_printer.m"
            mercury__pretty_printer__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 326 "pretty_printer.m"
            mercury__pretty_printer__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[9]);
#line 326 "pretty_printer.m"
            mercury__pretty_printer__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 326 "pretty_printer.m"
            mercury__pretty_printer__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[10]);
#line 326 "pretty_printer.m"
            {
#line 326 "pretty_printer.m"
              mercury__pretty_printer__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_57_57, 0) = ((MR_Box) (mercury__pretty_printer__V_58_58));
#line 326 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_57_57, 1) = ((MR_Box) (mercury__pretty_printer__V_59_59));
#line 326 "pretty_printer.m"
            }
#line 326 "pretty_printer.m"
            {
#line 326 "pretty_printer.m"
              mercury__pretty_printer__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_54_54, 0) = ((MR_Box) (mercury__pretty_printer__V_55_55));
#line 326 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_54_54, 1) = ((MR_Box) (mercury__pretty_printer__V_57_57));
#line 326 "pretty_printer.m"
            }
#line 326 "pretty_printer.m"
            {
#line 326 "pretty_printer.m"
              mercury__pretty_printer__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 326 "pretty_printer.m"
              MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_22_22, 0) = ((MR_Box) (mercury__pretty_printer__V_54_54));
#line 326 "pretty_printer.m"
            }
#line 700 "pretty_printer.m"
            {
#line 700 "pretty_printer.m"
              mercury__pretty_printer__V_21_21 = mercury__pretty_printer__format_arg_1_f_0(mercury__pretty_printer__V_22_22);
            }
#line 701 "pretty_printer.m"
            {
#line 701 "pretty_printer.m"
              mercury__pretty_printer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 701 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 701 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_30_30, 1) = ((MR_Box) (mercury__pretty_printer__Univs_12));
#line 701 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_30_30, 2) = ((MR_Box) (mercury__pretty_printer__HeadVar__2_2));
#line 701 "pretty_printer.m"
            }
#line 702 "pretty_printer.m"
            mercury__pretty_printer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 702 "pretty_printer.m"
            {
#line 702 "pretty_printer.m"
              mercury__pretty_printer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 0) = ((MR_Box) (mercury__pretty_printer__V_30_30));
#line 702 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 1) = ((MR_Box) (mercury__pretty_printer__V_31_31));
#line 702 "pretty_printer.m"
            }
#line 700 "pretty_printer.m"
            {
#line 700 "pretty_printer.m"
              mercury__pretty_printer__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_20_20, 0) = ((MR_Box) (mercury__pretty_printer__V_21_21));
#line 700 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_20_20, 1) = ((MR_Box) (mercury__pretty_printer__V_29_29));
#line 700 "pretty_printer.m"
            }
#line 699 "pretty_printer.m"
            {
#line 699 "pretty_printer.m"
              MR_Word base;
#line 699 "pretty_printer.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 699 "pretty_printer.m"
              *mercury__pretty_printer__HeadVar__3_3 = base;
#line 699 "pretty_printer.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__pretty_printer__V_20_20));
#line 699 "pretty_printer.m"
            }
#line 698 "pretty_printer.m"
          }
#line 690 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_Limit_5 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_4;
#line 690 "pretty_printer.m"
      }
#line 688 "pretty_printer.m"
  }
#line 685 "pretty_printer.m"
}

#line 657 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_pp_7_p_1(
#line 657 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Canonicalize_8,
#line 657 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap_9,
#line 657 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_10,
#line 657 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_11,
#line 657 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_24,
#line 657 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_25,
#line 657 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_13)
#line 657 "pretty_printer.m"
{
#line 665 "pretty_printer.m"
  {
#line 665 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 852 "pretty_printer.m"
    if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_24)) == (MR_mktag((MR_Integer) 0))))
#line 852 "pretty_printer.m"
      {
#line 852 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, (MR_Integer) 0)));

#line 853 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_35 <= (MR_Integer) 0);
#line 852 "pretty_printer.m"
      }
#line 852 "pretty_printer.m"
    else
#line 854 "pretty_printer.m"
      {
#line 854 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, (MR_Integer) 0)));

#line 855 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_37 <= (MR_Integer) 0);
#line 854 "pretty_printer.m"
      }
#line 665 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 664 "pretty_printer.m"
      {
#line 1195 "pretty_printer.m"
        *mercury__pretty_printer__Doc_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1]);
#line 664 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_Limit_25 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_24;
#line 664 "pretty_printer.m"
      }
#line 665 "pretty_printer.m"
    else
#line 676 "pretty_printer.m"
      {
#line 676 "pretty_printer.m"
        MR_Word mercury__pretty_printer__ArgTypeDescs_16;
#line 676 "pretty_printer.m"
        MR_Word mercury__pretty_printer__Formatter_20;
#line 666 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 0)));
#line 666 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_32_32;
#line 666 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_13_61;
#line 666 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_14_62;
#line 666 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_15_63;
#line 666 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_17_65;
#line 666 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorDesc_15;
#line 666 "pretty_printer.m"
        MR_String mercury__pretty_printer__ModuleName_17;
#line 666 "pretty_printer.m"
        MR_String mercury__pretty_printer__TypeName_18;
#line 666 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__Arity_19;
#line 666 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 666 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_59_59;
#line 666 "pretty_printer.m"
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
#line 11688 "pretty_printer.c"

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
#line 11718 "pretty_printer.c"

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
#line 11767 "pretty_printer.c"

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
#line 11817 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer___ModuleName_5_47  = TypeCtorModuleName;
	 mercury__pretty_printer__TypeName_18  = TypeCtorName;
	 mercury__pretty_printer___Arity_6_48  = TypeCtorArity;
#line 144 "type_desc.opt"
}
#line 11826 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_32_32 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 78 "list.opt"
        {
#line 78 "list.opt"
          mercury__list__length_2_3_p_0(mercury__pretty_printer__TypeCtorInfo_32_32, mercury__pretty_printer__ArgTypeDescs_16, (MR_Integer) 0, &mercury__pretty_printer__Arity_19);
        }
#line 11833 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_13_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 11835 "pretty_printer.c"
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
#line 666 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 666 "pretty_printer.m"
          {
#line 11856 "pretty_printer.c"
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
#line 666 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 666 "pretty_printer.m"
              {
#line 11877 "pretty_printer.c"
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
#line 666 "pretty_printer.m"
              }
#line 666 "pretty_printer.m"
          }
#line 676 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 673 "pretty_printer.m"
          {
#line 673 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_28_28;
#line 675 "pretty_printer.m"
            MR_Box MR_CALL (* mercury__pretty_printer__func_3)(MR_Box, MR_Box, MR_Box);
#line 675 "pretty_printer.m"
            MR_Box mercury__pretty_printer__conv4_V_28_28;

#line 673 "pretty_printer.m"
            {
#line 673 "pretty_printer.m"
              mercury__pretty_printer__decrement_limit_2_p_0(mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, mercury__pretty_printer__STATE_VARIABLE_Limit_25);
            }
#line 675 "pretty_printer.m"
            mercury__pretty_printer__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Formatter_20, (MR_Integer) 1)));
#line 675 "pretty_printer.m"
            {
#line 675 "pretty_printer.m"
              mercury__pretty_printer__conv4_V_28_28 = mercury__pretty_printer__func_3(((MR_Box) mercury__pretty_printer__Formatter_20), ((MR_Box) (mercury__pretty_printer__Univ_10)), ((MR_Box) (mercury__pretty_printer__ArgTypeDescs_16)));
            }
#line 675 "pretty_printer.m"
            mercury__pretty_printer__V_28_28 = ((MR_Word) mercury__pretty_printer__conv4_V_28_28);
#line 674 "pretty_printer.m"
            {
#line 674 "pretty_printer.m"
              *mercury__pretty_printer__Doc_11 = mercury__pretty_printer__set_formatting_limit_correctly_2_f_0(*mercury__pretty_printer__STATE_VARIABLE_Limit_25, mercury__pretty_printer__V_28_28);
            }
#line 673 "pretty_printer.m"
          }
#line 676 "pretty_printer.m"
        else
#line 677 "pretty_printer.m"
          {
#line 677 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 0)));
#line 677 "pretty_printer.m"
            MR_String mercury__pretty_printer__Name_21;
#line 677 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Args_23;
#line 677 "pretty_printer.m"
            MR_Box mercury__pretty_printer__V_29_29 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 1));
#line 677 "pretty_printer.m"
            MR_Integer mercury__pretty_printer___Arity_22;

#line 677 "pretty_printer.m"
            {
#line 677 "pretty_printer.m"
              mercury__deconstruct__deconstruct_5_p_2(mercury__pretty_printer__TypeInfo_33_33, mercury__pretty_printer__V_29_29, mercury__pretty_printer__Canonicalize_8, &mercury__pretty_printer__Name_21, &mercury__pretty_printer___Arity_22, &mercury__pretty_printer__Args_23);
            }
#line 678 "pretty_printer.m"
            {
#line 678 "pretty_printer.m"
              mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_21, mercury__pretty_printer__Args_23, mercury__pretty_printer__Doc_11, mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, mercury__pretty_printer__STATE_VARIABLE_Limit_25, mercury__pretty_printer__CurrentPri_13);
#line 678 "pretty_printer.m"
              return;
            }
#line 677 "pretty_printer.m"
          }
#line 676 "pretty_printer.m"
      }
#line 665 "pretty_printer.m"
  }
#line 657 "pretty_printer.m"
}

#line 655 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_pp_7_p_0(
#line 655 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Canonicalize_8,
#line 655 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap_9,
#line 655 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_10,
#line 655 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_11,
#line 655 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_24,
#line 655 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_25,
#line 655 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_13)
#line 655 "pretty_printer.m"
{
#line 665 "pretty_printer.m"
  {
#line 665 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 852 "pretty_printer.m"
    if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_24)) == (MR_mktag((MR_Integer) 0))))
#line 852 "pretty_printer.m"
      {
#line 852 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, (MR_Integer) 0)));

#line 853 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_35 <= (MR_Integer) 0);
#line 852 "pretty_printer.m"
      }
#line 852 "pretty_printer.m"
    else
#line 854 "pretty_printer.m"
      {
#line 854 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, (MR_Integer) 0)));

#line 855 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_37 <= (MR_Integer) 0);
#line 854 "pretty_printer.m"
      }
#line 665 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 664 "pretty_printer.m"
      {
#line 1195 "pretty_printer.m"
        *mercury__pretty_printer__Doc_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1]);
#line 664 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_Limit_25 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_24;
#line 664 "pretty_printer.m"
      }
#line 665 "pretty_printer.m"
    else
#line 676 "pretty_printer.m"
      {
#line 676 "pretty_printer.m"
        MR_Word mercury__pretty_printer__ArgTypeDescs_16;
#line 676 "pretty_printer.m"
        MR_Word mercury__pretty_printer__Formatter_20;
#line 666 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 0)));
#line 666 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_32_32;
#line 666 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_13_61;
#line 666 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_14_62;
#line 666 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_15_63;
#line 666 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_17_65;
#line 666 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorDesc_15;
#line 666 "pretty_printer.m"
        MR_String mercury__pretty_printer__ModuleName_17;
#line 666 "pretty_printer.m"
        MR_String mercury__pretty_printer__TypeName_18;
#line 666 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__Arity_19;
#line 666 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 666 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_59_59;
#line 666 "pretty_printer.m"
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
#line 12101 "pretty_printer.c"

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
#line 12131 "pretty_printer.c"

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
#line 12180 "pretty_printer.c"

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
#line 12230 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer___ModuleName_5_47  = TypeCtorModuleName;
	 mercury__pretty_printer__TypeName_18  = TypeCtorName;
	 mercury__pretty_printer___Arity_6_48  = TypeCtorArity;
#line 144 "type_desc.opt"
}
#line 12239 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_32_32 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 78 "list.opt"
        {
#line 78 "list.opt"
          mercury__list__length_2_3_p_0(mercury__pretty_printer__TypeCtorInfo_32_32, mercury__pretty_printer__ArgTypeDescs_16, (MR_Integer) 0, &mercury__pretty_printer__Arity_19);
        }
#line 12246 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_13_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 12248 "pretty_printer.c"
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
#line 666 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 666 "pretty_printer.m"
          {
#line 12269 "pretty_printer.c"
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
#line 666 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 666 "pretty_printer.m"
              {
#line 12290 "pretty_printer.c"
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
#line 666 "pretty_printer.m"
              }
#line 666 "pretty_printer.m"
          }
#line 676 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 673 "pretty_printer.m"
          {
#line 673 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_28_28;
#line 675 "pretty_printer.m"
            MR_Box MR_CALL (* mercury__pretty_printer__func_3)(MR_Box, MR_Box, MR_Box);
#line 675 "pretty_printer.m"
            MR_Box mercury__pretty_printer__conv4_V_28_28;

#line 673 "pretty_printer.m"
            {
#line 673 "pretty_printer.m"
              mercury__pretty_printer__decrement_limit_2_p_0(mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, mercury__pretty_printer__STATE_VARIABLE_Limit_25);
            }
#line 675 "pretty_printer.m"
            mercury__pretty_printer__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Formatter_20, (MR_Integer) 1)));
#line 675 "pretty_printer.m"
            {
#line 675 "pretty_printer.m"
              mercury__pretty_printer__conv4_V_28_28 = mercury__pretty_printer__func_3(((MR_Box) mercury__pretty_printer__Formatter_20), ((MR_Box) (mercury__pretty_printer__Univ_10)), ((MR_Box) (mercury__pretty_printer__ArgTypeDescs_16)));
            }
#line 675 "pretty_printer.m"
            mercury__pretty_printer__V_28_28 = ((MR_Word) mercury__pretty_printer__conv4_V_28_28);
#line 674 "pretty_printer.m"
            {
#line 674 "pretty_printer.m"
              *mercury__pretty_printer__Doc_11 = mercury__pretty_printer__set_formatting_limit_correctly_2_f_0(*mercury__pretty_printer__STATE_VARIABLE_Limit_25, mercury__pretty_printer__V_28_28);
            }
#line 673 "pretty_printer.m"
          }
#line 676 "pretty_printer.m"
        else
#line 677 "pretty_printer.m"
          {
#line 677 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 0)));
#line 677 "pretty_printer.m"
            MR_String mercury__pretty_printer__Name_21;
#line 677 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Args_23;
#line 677 "pretty_printer.m"
            MR_Box mercury__pretty_printer__V_29_29 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 1));
#line 677 "pretty_printer.m"
            MR_Integer mercury__pretty_printer___Arity_22;

#line 677 "pretty_printer.m"
            {
#line 677 "pretty_printer.m"
              mercury__deconstruct__deconstruct_5_p_1(mercury__pretty_printer__TypeInfo_33_33, mercury__pretty_printer__V_29_29, mercury__pretty_printer__Canonicalize_8, &mercury__pretty_printer__Name_21, &mercury__pretty_printer___Arity_22, &mercury__pretty_printer__Args_23);
            }
#line 678 "pretty_printer.m"
            {
#line 678 "pretty_printer.m"
              mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_21, mercury__pretty_printer__Args_23, mercury__pretty_printer__Doc_11, mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, mercury__pretty_printer__STATE_VARIABLE_Limit_25, mercury__pretty_printer__CurrentPri_13);
#line 678 "pretty_printer.m"
              return;
            }
#line 677 "pretty_printer.m"
          }
#line 676 "pretty_printer.m"
      }
#line 665 "pretty_printer.m"
  }
#line 655 "pretty_printer.m"
}

#line 638 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__output_indentation_6_p_0(
#line 638 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_28,
#line 638 "pretty_printer.m"
  MR_Box mercury__pretty_printer__HeadVar__1_1,
#line 638 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 638 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_3,
#line 638 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_4,
#line 638 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_5,
#line 638 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_6)
#line 638 "pretty_printer.m"
{
#line 641 "pretty_printer.m"
  {
#line 641 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 641 "pretty_printer.m"
    if ((mercury__pretty_printer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 641 "pretty_printer.m"
      {
#line 641 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_IO_6 = mercury__pretty_printer__STATE_VARIABLE_IO_0_5;
#line 641 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_4 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_3;
#line 641 "pretty_printer.m"
      }
#line 641 "pretty_printer.m"
    else
#line 642 "pretty_printer.m"
      {
#line 642 "pretty_printer.m"
        MR_String mercury__pretty_printer__Indent_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 642 "pretty_printer.m"
        MR_Word mercury__pretty_printer__Indents_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 642 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_23_23;
#line 642 "pretty_printer.m"
        MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_24_24;
#line 642 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_27_27;
#line 12427 "pretty_printer.c"
        void MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 643 "pretty_printer.m"
        {
#line 643 "pretty_printer.m"
          mercury__pretty_printer__output_indentation_6_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_28, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__Indents_16, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_3, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_23_23, mercury__pretty_printer__STATE_VARIABLE_IO_0_5, &mercury__pretty_printer__STATE_VARIABLE_IO_24_24);
        }
#line 12435 "pretty_printer.c"
        mercury__pretty_printer__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_writer_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12437 "pretty_printer.c"
        {
#line 12439 "pretty_printer.c"
          mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_writer_28), mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__Indent_15)), mercury__pretty_printer__STATE_VARIABLE_IO_24_24, mercury__pretty_printer__STATE_VARIABLE_IO_6);
        }
#line 258 "string.opt"
        {
#line 258 "string.opt"
          mercury__string__count_codepoints_2_p_0(mercury__pretty_printer__Indent_15, &mercury__pretty_printer__V_27_27);
        }
#line 645 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_4 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_23_23 - mercury__pretty_printer__V_27_27);
#line 642 "pretty_printer.m"
      }
#line 641 "pretty_printer.m"
  }
#line 638 "pretty_printer.m"
}

#line 628 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__format_nl_8_p_0(
#line 628 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_24,
#line 628 "pretty_printer.m"
  MR_Box mercury__pretty_printer__Stream_9,
#line 628 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__LineWidth_10,
#line 628 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Indents_11,
#line 628 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__RemainingWidth_12,
#line 628 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_15,
#line 628 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_16,
#line 628 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_17,
#line 628 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_18)
#line 628 "pretty_printer.m"
{
#line 632 "pretty_printer.m"
  {
#line 632 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 632 "pretty_printer.m"
    MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_20_20;
#line 12485 "pretty_printer.c"
    void MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_writer_24, (MR_Integer) 0)), (MR_Integer) 5)));

#line 12488 "pretty_printer.c"
    {
#line 12490 "pretty_printer.c"
      mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_writer_24), mercury__pretty_printer__Stream_9, ((MR_Box) ((MR_String) "\n")), mercury__pretty_printer__STATE_VARIABLE_IO_0_17, &mercury__pretty_printer__STATE_VARIABLE_IO_20_20);
    }
#line 634 "pretty_printer.m"
    {
#line 634 "pretty_printer.m"
      mercury__pretty_printer__output_indentation_6_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_24, mercury__pretty_printer__Stream_9, mercury__pretty_printer__Indents_11, mercury__pretty_printer__LineWidth_10, mercury__pretty_printer__RemainingWidth_12, mercury__pretty_printer__STATE_VARIABLE_IO_20_20, mercury__pretty_printer__STATE_VARIABLE_IO_18);
    }
#line 635 "pretty_printer.m"
    *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_16 = (mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_15 - (MR_Integer) 1);
#line 632 "pretty_printer.m"
  }
#line 628 "pretty_printer.m"
}

#line 529 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_docs_11_p_1(
#line 529 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 529 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 529 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 529 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__4_4,
#line 529 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__5_5,
#line 529 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_6,
#line 529 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_7,
#line 529 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_8,
#line 529 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_9,
#line 529 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10,
#line 529 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11)
#line 529 "pretty_printer.m"
{
#line 532 "pretty_printer.m"
  while (MR_TRUE)
#line 532 "pretty_printer.m"
    {
#line 532 "pretty_printer.m"
      /* tailcall optimized into a loop */
#line 532 "pretty_printer.m"
      {
#line 532 "pretty_printer.m"
        MR_bool mercury__pretty_printer__succeeded;

#line 532 "pretty_printer.m"
        if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "pretty_printer.m"
          {
#line 532 "pretty_printer.m"
            *mercury__pretty_printer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 533 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
#line 533 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
#line 533 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
#line 532 "pretty_printer.m"
          }
#line 532 "pretty_printer.m"
        else
#line 535 "pretty_printer.m"
          {
#line 535 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Doc_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));
#line 535 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Docs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));

#line 538 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 <= (MR_Integer) 0);
#line 538 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 538 "pretty_printer.m"
              {
#line 538 "pretty_printer.m"
                if ((mercury__pretty_printer__Doc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 538 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = MR_TRUE;
#line 538 "pretty_printer.m"
                else
#line 538 "pretty_printer.m"
                if ((mercury__pretty_printer__Doc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 538 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = MR_TRUE;
#line 538 "pretty_printer.m"
                else
#line 538 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = MR_FALSE;
#line 538 "pretty_printer.m"
              }
#line 541 "pretty_printer.m"
            if (!(mercury__pretty_printer__succeeded))
#line 542 "pretty_printer.m"
              {
#line 542 "pretty_printer.m"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10 < (MR_Integer) 0);
#line 542 "pretty_printer.m"
              }
#line 548 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 547 "pretty_printer.m"
              {
#line 547 "pretty_printer.m"
                *mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__3_3;
#line 547 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
#line 547 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
#line 547 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
#line 547 "pretty_printer.m"
              }
#line 548 "pretty_printer.m"
            else
#line 556 "pretty_printer.m"
#line 556 "pretty_printer.m"
              switch (MR_tag((MR_Word) mercury__pretty_printer__Doc_26)) {
#line 556 "pretty_printer.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 556 "pretty_printer.m"
                case (MR_Integer) 0:
#line 557 "pretty_printer.m"
                  {
#line 558 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 <= (MR_Integer) 0);
#line 557 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 559 "pretty_printer.m"
                      {
#line 559 "pretty_printer.m"
                        *mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__3_3;
#line 559 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
#line 559 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
#line 559 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
#line 559 "pretty_printer.m"
                      }
#line 557 "pretty_printer.m"
                    else
#line 561 "pretty_printer.m"
                      {
#line 561 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Docs1_116;

#line 562 "pretty_printer.m"
                        {
#line 562 "pretty_printer.m"
                          mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_116, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                        }
#line 561 "pretty_printer.m"
                        {
#line 561 "pretty_printer.m"
                          MR_Word base;
#line 561 "pretty_printer.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 561 "pretty_printer.m"
                          *mercury__pretty_printer__HeadVar__4_4 = base;
#line 561 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 561 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_116));
#line 561 "pretty_printer.m"
                        }
#line 561 "pretty_printer.m"
                      }
#line 557 "pretty_printer.m"
                  }
#line 556 "pretty_printer.m"
                  break;
#line 556 "pretty_printer.m"
                case (MR_Integer) 1:
#line 550 "pretty_printer.m"
                  {
#line 550 "pretty_printer.m"
                    MR_String mercury__pretty_printer__String_33 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc_26, (MR_Integer) 0)));
#line 550 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__Docs1_34;
#line 550 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111;
#line 550 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__V_112_112;

#line 552 "pretty_printer.m"
                    {
#line 552 "pretty_printer.m"
                      mercury__pretty_printer__V_112_112 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__String_33);
                    }
#line 551 "pretty_printer.m"
                    mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10 - mercury__pretty_printer__V_112_112);
#line 554 "pretty_printer.m"
                    {
#line 554 "pretty_printer.m"
                      mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_34, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                    }
#line 553 "pretty_printer.m"
                    {
#line 553 "pretty_printer.m"
                      MR_Word base;
#line 553 "pretty_printer.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__4_4 = base;
#line 553 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 553 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_34));
#line 553 "pretty_printer.m"
                    }
#line 550 "pretty_printer.m"
                  }
#line 556 "pretty_printer.m"
                  break;
#line 556 "pretty_printer.m"
                case (MR_Integer) 2:
#line 566 "pretty_printer.m"
                  {
#line 566 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__TypeCtorInfo_129_129 = (MR_Word) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0;
#line 566 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_103_103;
#line 566 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__Docs1_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc_26, (MR_Integer) 0)));

#line 567 "pretty_printer.m"
                    {
#line 567 "pretty_printer.m"
                      mercury__pretty_printer__V_103_103 = mercury__list__f_43_43_2_f_0(mercury__pretty_printer__TypeCtorInfo_129_129, mercury__pretty_printer__Docs1_119, mercury__pretty_printer__Docs0_27);
                    }
#line 567 "pretty_printer.m"
                    /* direct tailcall eliminated */
#line 567 "pretty_printer.m"
                    {
#line 567 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_103_103;

#line 567 "pretty_printer.m"
                      mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 567 "pretty_printer.m"
                    }
#line 567 "pretty_printer.m"
                    continue;
#line 566 "pretty_printer.m"
                  }
#line 556 "pretty_printer.m"
                  break;
#line 556 "pretty_printer.m"
                case (MR_Integer) 3:
#line 556 "pretty_printer.m"
#line 556 "pretty_printer.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 0)))) {
#line 556 "pretty_printer.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 556 "pretty_printer.m"
                    case (MR_Integer) 0:
#line 570 "pretty_printer.m"
                      {
#line 570 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Univ_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 570 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Doc1_36;
#line 570 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_98_98;
#line 570 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_99_99;

#line 571 "pretty_printer.m"
                        {
#line 571 "pretty_printer.m"
                          mercury__pretty_printer__expand_pp_7_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Univ_35, &mercury__pretty_printer__Doc1_36, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_98_98, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8);
                        }
#line 572 "pretty_printer.m"
                        {
#line 572 "pretty_printer.m"
                          mercury__pretty_printer__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_99_99, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_36));
#line 572 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_99_99, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 572 "pretty_printer.m"
                        }
#line 572 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 572 "pretty_printer.m"
                        {
#line 572 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_99_99;
#line 572 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_98_98;

#line 572 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 572 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 572 "pretty_printer.m"
                        }
#line 572 "pretty_printer.m"
                        continue;
#line 570 "pretty_printer.m"
                      }
#line 556 "pretty_printer.m"
                      break;
#line 556 "pretty_printer.m"
                    case (MR_Integer) 1:
#line 575 "pretty_printer.m"
                      {
#line 575 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Univs_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 575 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Sep_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 2)));
#line 575 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_93_93;
#line 575 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_94_94;
#line 575 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Doc1_120;

#line 576 "pretty_printer.m"
                        {
#line 576 "pretty_printer.m"
                          mercury__pretty_printer__expand_format_list_5_p_0(mercury__pretty_printer__Univs_37, mercury__pretty_printer__Sep_38, &mercury__pretty_printer__Doc1_120, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_93_93);
                        }
#line 577 "pretty_printer.m"
                        {
#line 577 "pretty_printer.m"
                          mercury__pretty_printer__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_120));
#line 577 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 577 "pretty_printer.m"
                        }
#line 577 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 577 "pretty_printer.m"
                        {
#line 577 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_94_94;
#line 577 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_93_93;

#line 577 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 577 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 577 "pretty_printer.m"
                        }
#line 577 "pretty_printer.m"
                        continue;
#line 575 "pretty_printer.m"
                      }
#line 556 "pretty_printer.m"
                      break;
#line 556 "pretty_printer.m"
                    case (MR_Integer) 2:
#line 580 "pretty_printer.m"
                      {
#line 580 "pretty_printer.m"
                        MR_String mercury__pretty_printer__Name_39 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 580 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_88_88;
#line 580 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_89_89;
#line 580 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Doc1_121;
#line 580 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Univs_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 2)));

#line 581 "pretty_printer.m"
                        {
#line 581 "pretty_printer.m"
                          mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_39, mercury__pretty_printer__Univs_122, &mercury__pretty_printer__Doc1_121, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_88_88, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8);
                        }
#line 582 "pretty_printer.m"
                        {
#line 582 "pretty_printer.m"
                          mercury__pretty_printer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_121));
#line 582 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 582 "pretty_printer.m"
                        }
#line 582 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 582 "pretty_printer.m"
                        {
#line 582 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_89_89;
#line 582 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_88_88;

#line 582 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 582 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 582 "pretty_printer.m"
                        }
#line 582 "pretty_printer.m"
                        continue;
#line 580 "pretty_printer.m"
                      }
#line 556 "pretty_printer.m"
                      break;
#line 556 "pretty_printer.m"
                    case (MR_Integer) 3:
#line 585 "pretty_printer.m"
                      {
#line 585 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Susp_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 585 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_83_83;
#line 585 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_84_84;
#line 585 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Doc1_123;

#line 586 "pretty_printer.m"
                        {
#line 586 "pretty_printer.m"
                          mercury__pretty_printer__expand_format_susp_4_p_0(mercury__pretty_printer__Susp_40, &mercury__pretty_printer__Doc1_123, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_83_83);
                        }
#line 587 "pretty_printer.m"
                        {
#line 587 "pretty_printer.m"
                          mercury__pretty_printer__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_84_84, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_123));
#line 587 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_84_84, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 587 "pretty_printer.m"
                        }
#line 587 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 587 "pretty_printer.m"
                        {
#line 587 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_84_84;
#line 587 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_83_83;

#line 587 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 587 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 587 "pretty_printer.m"
                        }
#line 587 "pretty_printer.m"
                        continue;
#line 585 "pretty_printer.m"
                      }
#line 556 "pretty_printer.m"
                      break;
#line 556 "pretty_printer.m"
                    case (MR_Integer) 4:
#line 556 "pretty_printer.m"
                      {
#line 556 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));

#line 556 "pretty_printer.m"
#line 556 "pretty_printer.m"
                        switch (MR_tag((MR_Word) mercury__pretty_printer__V_130_130)) {
#line 556 "pretty_printer.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 556 "pretty_printer.m"
                          case (MR_Integer) 0:
#line 556 "pretty_printer.m"
#line 556 "pretty_printer.m"
                            switch (MR_unmkbody(mercury__pretty_printer__V_130_130)) {
#line 556 "pretty_printer.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 556 "pretty_printer.m"
                              case (MR_Integer) 0:
#line 600 "pretty_printer.m"
                                {
#line 600 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__OpenGroups1_42;
#line 600 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__V_70_70;
#line 600 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__Docs1_126;

#line 602 "pretty_printer.m"
                                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 > (MR_Integer) 0);
#line 602 "pretty_printer.m"
                                  if (mercury__pretty_printer__succeeded)
#line 602 "pretty_printer.m"
                                    mercury__pretty_printer__V_70_70 = (MR_Integer) 1;
#line 602 "pretty_printer.m"
                                  else
#line 602 "pretty_printer.m"
                                    mercury__pretty_printer__V_70_70 = (MR_Integer) 0;
#line 602 "pretty_printer.m"
                                  mercury__pretty_printer__OpenGroups1_42 = (mercury__pretty_printer__HeadVar__5_5 + mercury__pretty_printer__V_70_70);
#line 603 "pretty_printer.m"
                                  {
#line 603 "pretty_printer.m"
                                    mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_126, mercury__pretty_printer__OpenGroups1_42, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                  }
#line 601 "pretty_printer.m"
                                  {
#line 601 "pretty_printer.m"
                                    MR_Word base;
#line 601 "pretty_printer.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 601 "pretty_printer.m"
                                    *mercury__pretty_printer__HeadVar__4_4 = base;
#line 601 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 601 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_126));
#line 601 "pretty_printer.m"
                                  }
#line 600 "pretty_printer.m"
                                }
#line 556 "pretty_printer.m"
                                break;
#line 556 "pretty_printer.m"
                              case (MR_Integer) 1:
#line 606 "pretty_printer.m"
                                {
#line 606 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__V_64_64;
#line 606 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__Docs1_127;
#line 606 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__OpenGroups1_128;

#line 608 "pretty_printer.m"
                                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 > (MR_Integer) 0);
#line 608 "pretty_printer.m"
                                  if (mercury__pretty_printer__succeeded)
#line 608 "pretty_printer.m"
                                    mercury__pretty_printer__V_64_64 = (MR_Integer) 1;
#line 608 "pretty_printer.m"
                                  else
#line 608 "pretty_printer.m"
                                    mercury__pretty_printer__V_64_64 = (MR_Integer) 0;
#line 608 "pretty_printer.m"
                                  mercury__pretty_printer__OpenGroups1_128 = (mercury__pretty_printer__HeadVar__5_5 - mercury__pretty_printer__V_64_64);
#line 609 "pretty_printer.m"
                                  {
#line 609 "pretty_printer.m"
                                    mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_127, mercury__pretty_printer__OpenGroups1_128, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                  }
#line 607 "pretty_printer.m"
                                  {
#line 607 "pretty_printer.m"
                                    MR_Word base;
#line 607 "pretty_printer.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "pretty_printer.m"
                                    *mercury__pretty_printer__HeadVar__4_4 = base;
#line 607 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 607 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_127));
#line 607 "pretty_printer.m"
                                  }
#line 606 "pretty_printer.m"
                                }
#line 556 "pretty_printer.m"
                                break;
#line 556 "pretty_printer.m"
                              case (MR_Integer) 2:
#line 595 "pretty_printer.m"
                                {
#line 595 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__Docs1_125;

#line 597 "pretty_printer.m"
                                  {
#line 597 "pretty_printer.m"
                                    mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_125, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                  }
#line 596 "pretty_printer.m"
                                  {
#line 596 "pretty_printer.m"
                                    MR_Word base;
#line 596 "pretty_printer.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "pretty_printer.m"
                                    *mercury__pretty_printer__HeadVar__4_4 = base;
#line 596 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 596 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_125));
#line 596 "pretty_printer.m"
                                  }
#line 595 "pretty_printer.m"
                                }
#line 556 "pretty_printer.m"
                                break;
#line 556 "pretty_printer.m"
                            }
#line 556 "pretty_printer.m"
                            break;
#line 556 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 590 "pretty_printer.m"
                            {
#line 590 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__Docs1_124;

#line 592 "pretty_printer.m"
                              {
#line 592 "pretty_printer.m"
                                mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_124, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                              }
#line 591 "pretty_printer.m"
                              {
#line 591 "pretty_printer.m"
                                MR_Word base;
#line 591 "pretty_printer.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "pretty_printer.m"
                                *mercury__pretty_printer__HeadVar__4_4 = base;
#line 591 "pretty_printer.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 591 "pretty_printer.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_124));
#line 591 "pretty_printer.m"
                              }
#line 590 "pretty_printer.m"
                            }
#line 556 "pretty_printer.m"
                            break;
#line 556 "pretty_printer.m"
                          case (MR_Integer) 2:
#line 617 "pretty_printer.m"
                            {
#line 617 "pretty_printer.m"
                              MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_130_130, (MR_Integer) 0)));

#line 619 "pretty_printer.m"
                              /* direct tailcall eliminated */
#line 619 "pretty_printer.m"
                              {
#line 619 "pretty_printer.m"
                                MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__Docs0_27;
#line 619 "pretty_printer.m"
                                MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_8 = mercury__pretty_printer__STATE_VARIABLE_Pri_54_54;

#line 619 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Pri_0_8 = mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_8;
#line 619 "pretty_printer.m"
                                mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 619 "pretty_printer.m"
                              }
#line 619 "pretty_printer.m"
                              continue;
#line 617 "pretty_printer.m"
                            }
#line 556 "pretty_printer.m"
                            break;
#line 556 "pretty_printer.m"
                          case (MR_Integer) 3:
#line 612 "pretty_printer.m"
                            {
#line 612 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_130_130, (MR_Integer) 0)));

#line 614 "pretty_printer.m"
                              /* direct tailcall eliminated */
#line 614 "pretty_printer.m"
                              {
#line 614 "pretty_printer.m"
                                MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__Docs0_27;
#line 614 "pretty_printer.m"
                                MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_59_59;

#line 614 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 614 "pretty_printer.m"
                                mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 614 "pretty_printer.m"
                              }
#line 614 "pretty_printer.m"
                              continue;
#line 612 "pretty_printer.m"
                            }
#line 556 "pretty_printer.m"
                            break;
#line 556 "pretty_printer.m"
                        }
#line 556 "pretty_printer.m"
                      }
#line 556 "pretty_printer.m"
                      break;
#line 556 "pretty_printer.m"
                  }
#line 556 "pretty_printer.m"
                  break;
#line 556 "pretty_printer.m"
              }
#line 535 "pretty_printer.m"
          }
#line 532 "pretty_printer.m"
      }
#line 532 "pretty_printer.m"
      break;
#line 532 "pretty_printer.m"
    }
#line 529 "pretty_printer.m"
}

#line 527 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_docs_11_p_0(
#line 527 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 527 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 527 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 527 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__4_4,
#line 527 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__5_5,
#line 527 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_6,
#line 527 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_7,
#line 527 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_8,
#line 527 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_9,
#line 527 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10,
#line 527 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11)
#line 527 "pretty_printer.m"
{
#line 532 "pretty_printer.m"
  while (MR_TRUE)
#line 532 "pretty_printer.m"
    {
#line 532 "pretty_printer.m"
      /* tailcall optimized into a loop */
#line 532 "pretty_printer.m"
      {
#line 532 "pretty_printer.m"
        MR_bool mercury__pretty_printer__succeeded;

#line 532 "pretty_printer.m"
        if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "pretty_printer.m"
          {
#line 532 "pretty_printer.m"
            *mercury__pretty_printer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 533 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
#line 533 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
#line 533 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
#line 532 "pretty_printer.m"
          }
#line 532 "pretty_printer.m"
        else
#line 535 "pretty_printer.m"
          {
#line 535 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Doc_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));
#line 535 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Docs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));

#line 538 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 <= (MR_Integer) 0);
#line 538 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 538 "pretty_printer.m"
              {
#line 538 "pretty_printer.m"
                if ((mercury__pretty_printer__Doc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 538 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = MR_TRUE;
#line 538 "pretty_printer.m"
                else
#line 538 "pretty_printer.m"
                if ((mercury__pretty_printer__Doc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 538 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = MR_TRUE;
#line 538 "pretty_printer.m"
                else
#line 538 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = MR_FALSE;
#line 538 "pretty_printer.m"
              }
#line 541 "pretty_printer.m"
            if (!(mercury__pretty_printer__succeeded))
#line 542 "pretty_printer.m"
              {
#line 542 "pretty_printer.m"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10 < (MR_Integer) 0);
#line 542 "pretty_printer.m"
              }
#line 548 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 547 "pretty_printer.m"
              {
#line 547 "pretty_printer.m"
                *mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__3_3;
#line 547 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
#line 547 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
#line 547 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
#line 547 "pretty_printer.m"
              }
#line 548 "pretty_printer.m"
            else
#line 556 "pretty_printer.m"
#line 556 "pretty_printer.m"
              switch (MR_tag((MR_Word) mercury__pretty_printer__Doc_26)) {
#line 556 "pretty_printer.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 556 "pretty_printer.m"
                case (MR_Integer) 0:
#line 557 "pretty_printer.m"
                  {
#line 558 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 <= (MR_Integer) 0);
#line 557 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 559 "pretty_printer.m"
                      {
#line 559 "pretty_printer.m"
                        *mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__3_3;
#line 559 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
#line 559 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
#line 559 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
#line 559 "pretty_printer.m"
                      }
#line 557 "pretty_printer.m"
                    else
#line 561 "pretty_printer.m"
                      {
#line 561 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Docs1_116;

#line 562 "pretty_printer.m"
                        {
#line 562 "pretty_printer.m"
                          mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_116, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                        }
#line 561 "pretty_printer.m"
                        {
#line 561 "pretty_printer.m"
                          MR_Word base;
#line 561 "pretty_printer.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 561 "pretty_printer.m"
                          *mercury__pretty_printer__HeadVar__4_4 = base;
#line 561 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 561 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_116));
#line 561 "pretty_printer.m"
                        }
#line 561 "pretty_printer.m"
                      }
#line 557 "pretty_printer.m"
                  }
#line 556 "pretty_printer.m"
                  break;
#line 556 "pretty_printer.m"
                case (MR_Integer) 1:
#line 550 "pretty_printer.m"
                  {
#line 550 "pretty_printer.m"
                    MR_String mercury__pretty_printer__String_33 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc_26, (MR_Integer) 0)));
#line 550 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__Docs1_34;
#line 550 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111;
#line 550 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__V_112_112;

#line 552 "pretty_printer.m"
                    {
#line 552 "pretty_printer.m"
                      mercury__pretty_printer__V_112_112 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__String_33);
                    }
#line 551 "pretty_printer.m"
                    mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10 - mercury__pretty_printer__V_112_112);
#line 554 "pretty_printer.m"
                    {
#line 554 "pretty_printer.m"
                      mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_34, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                    }
#line 553 "pretty_printer.m"
                    {
#line 553 "pretty_printer.m"
                      MR_Word base;
#line 553 "pretty_printer.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__4_4 = base;
#line 553 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 553 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_34));
#line 553 "pretty_printer.m"
                    }
#line 550 "pretty_printer.m"
                  }
#line 556 "pretty_printer.m"
                  break;
#line 556 "pretty_printer.m"
                case (MR_Integer) 2:
#line 566 "pretty_printer.m"
                  {
#line 566 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__TypeCtorInfo_129_129 = (MR_Word) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0;
#line 566 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_103_103;
#line 566 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__Docs1_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc_26, (MR_Integer) 0)));

#line 567 "pretty_printer.m"
                    {
#line 567 "pretty_printer.m"
                      mercury__pretty_printer__V_103_103 = mercury__list__f_43_43_2_f_0(mercury__pretty_printer__TypeCtorInfo_129_129, mercury__pretty_printer__Docs1_119, mercury__pretty_printer__Docs0_27);
                    }
#line 567 "pretty_printer.m"
                    /* direct tailcall eliminated */
#line 567 "pretty_printer.m"
                    {
#line 567 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_103_103;

#line 567 "pretty_printer.m"
                      mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 567 "pretty_printer.m"
                    }
#line 567 "pretty_printer.m"
                    continue;
#line 566 "pretty_printer.m"
                  }
#line 556 "pretty_printer.m"
                  break;
#line 556 "pretty_printer.m"
                case (MR_Integer) 3:
#line 556 "pretty_printer.m"
#line 556 "pretty_printer.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 0)))) {
#line 556 "pretty_printer.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 556 "pretty_printer.m"
                    case (MR_Integer) 0:
#line 570 "pretty_printer.m"
                      {
#line 570 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Univ_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 570 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Doc1_36;
#line 570 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_98_98;
#line 570 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_99_99;

#line 571 "pretty_printer.m"
                        {
#line 571 "pretty_printer.m"
                          mercury__pretty_printer__expand_pp_7_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Univ_35, &mercury__pretty_printer__Doc1_36, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_98_98, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8);
                        }
#line 572 "pretty_printer.m"
                        {
#line 572 "pretty_printer.m"
                          mercury__pretty_printer__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_99_99, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_36));
#line 572 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_99_99, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 572 "pretty_printer.m"
                        }
#line 572 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 572 "pretty_printer.m"
                        {
#line 572 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_99_99;
#line 572 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_98_98;

#line 572 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 572 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 572 "pretty_printer.m"
                        }
#line 572 "pretty_printer.m"
                        continue;
#line 570 "pretty_printer.m"
                      }
#line 556 "pretty_printer.m"
                      break;
#line 556 "pretty_printer.m"
                    case (MR_Integer) 1:
#line 575 "pretty_printer.m"
                      {
#line 575 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Univs_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 575 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Sep_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 2)));
#line 575 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_93_93;
#line 575 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_94_94;
#line 575 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Doc1_120;

#line 576 "pretty_printer.m"
                        {
#line 576 "pretty_printer.m"
                          mercury__pretty_printer__expand_format_list_5_p_0(mercury__pretty_printer__Univs_37, mercury__pretty_printer__Sep_38, &mercury__pretty_printer__Doc1_120, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_93_93);
                        }
#line 577 "pretty_printer.m"
                        {
#line 577 "pretty_printer.m"
                          mercury__pretty_printer__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_120));
#line 577 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 577 "pretty_printer.m"
                        }
#line 577 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 577 "pretty_printer.m"
                        {
#line 577 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_94_94;
#line 577 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_93_93;

#line 577 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 577 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 577 "pretty_printer.m"
                        }
#line 577 "pretty_printer.m"
                        continue;
#line 575 "pretty_printer.m"
                      }
#line 556 "pretty_printer.m"
                      break;
#line 556 "pretty_printer.m"
                    case (MR_Integer) 2:
#line 580 "pretty_printer.m"
                      {
#line 580 "pretty_printer.m"
                        MR_String mercury__pretty_printer__Name_39 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 580 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_88_88;
#line 580 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_89_89;
#line 580 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Doc1_121;
#line 580 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Univs_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 2)));

#line 581 "pretty_printer.m"
                        {
#line 581 "pretty_printer.m"
                          mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_39, mercury__pretty_printer__Univs_122, &mercury__pretty_printer__Doc1_121, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_88_88, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8);
                        }
#line 582 "pretty_printer.m"
                        {
#line 582 "pretty_printer.m"
                          mercury__pretty_printer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_121));
#line 582 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 582 "pretty_printer.m"
                        }
#line 582 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 582 "pretty_printer.m"
                        {
#line 582 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_89_89;
#line 582 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_88_88;

#line 582 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 582 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 582 "pretty_printer.m"
                        }
#line 582 "pretty_printer.m"
                        continue;
#line 580 "pretty_printer.m"
                      }
#line 556 "pretty_printer.m"
                      break;
#line 556 "pretty_printer.m"
                    case (MR_Integer) 3:
#line 585 "pretty_printer.m"
                      {
#line 585 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Susp_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 585 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_83_83;
#line 585 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_84_84;
#line 585 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Doc1_123;

#line 586 "pretty_printer.m"
                        {
#line 586 "pretty_printer.m"
                          mercury__pretty_printer__expand_format_susp_4_p_0(mercury__pretty_printer__Susp_40, &mercury__pretty_printer__Doc1_123, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_83_83);
                        }
#line 587 "pretty_printer.m"
                        {
#line 587 "pretty_printer.m"
                          mercury__pretty_printer__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_84_84, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_123));
#line 587 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_84_84, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 587 "pretty_printer.m"
                        }
#line 587 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 587 "pretty_printer.m"
                        {
#line 587 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_84_84;
#line 587 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_83_83;

#line 587 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 587 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 587 "pretty_printer.m"
                        }
#line 587 "pretty_printer.m"
                        continue;
#line 585 "pretty_printer.m"
                      }
#line 556 "pretty_printer.m"
                      break;
#line 556 "pretty_printer.m"
                    case (MR_Integer) 4:
#line 556 "pretty_printer.m"
                      {
#line 556 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));

#line 556 "pretty_printer.m"
#line 556 "pretty_printer.m"
                        switch (MR_tag((MR_Word) mercury__pretty_printer__V_130_130)) {
#line 556 "pretty_printer.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 556 "pretty_printer.m"
                          case (MR_Integer) 0:
#line 556 "pretty_printer.m"
#line 556 "pretty_printer.m"
                            switch (MR_unmkbody(mercury__pretty_printer__V_130_130)) {
#line 556 "pretty_printer.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 556 "pretty_printer.m"
                              case (MR_Integer) 0:
#line 600 "pretty_printer.m"
                                {
#line 600 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__OpenGroups1_42;
#line 600 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__V_70_70;
#line 600 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__Docs1_126;

#line 602 "pretty_printer.m"
                                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 > (MR_Integer) 0);
#line 602 "pretty_printer.m"
                                  if (mercury__pretty_printer__succeeded)
#line 602 "pretty_printer.m"
                                    mercury__pretty_printer__V_70_70 = (MR_Integer) 1;
#line 602 "pretty_printer.m"
                                  else
#line 602 "pretty_printer.m"
                                    mercury__pretty_printer__V_70_70 = (MR_Integer) 0;
#line 602 "pretty_printer.m"
                                  mercury__pretty_printer__OpenGroups1_42 = (mercury__pretty_printer__HeadVar__5_5 + mercury__pretty_printer__V_70_70);
#line 603 "pretty_printer.m"
                                  {
#line 603 "pretty_printer.m"
                                    mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_126, mercury__pretty_printer__OpenGroups1_42, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                  }
#line 601 "pretty_printer.m"
                                  {
#line 601 "pretty_printer.m"
                                    MR_Word base;
#line 601 "pretty_printer.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 601 "pretty_printer.m"
                                    *mercury__pretty_printer__HeadVar__4_4 = base;
#line 601 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 601 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_126));
#line 601 "pretty_printer.m"
                                  }
#line 600 "pretty_printer.m"
                                }
#line 556 "pretty_printer.m"
                                break;
#line 556 "pretty_printer.m"
                              case (MR_Integer) 1:
#line 606 "pretty_printer.m"
                                {
#line 606 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__V_64_64;
#line 606 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__Docs1_127;
#line 606 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__OpenGroups1_128;

#line 608 "pretty_printer.m"
                                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 > (MR_Integer) 0);
#line 608 "pretty_printer.m"
                                  if (mercury__pretty_printer__succeeded)
#line 608 "pretty_printer.m"
                                    mercury__pretty_printer__V_64_64 = (MR_Integer) 1;
#line 608 "pretty_printer.m"
                                  else
#line 608 "pretty_printer.m"
                                    mercury__pretty_printer__V_64_64 = (MR_Integer) 0;
#line 608 "pretty_printer.m"
                                  mercury__pretty_printer__OpenGroups1_128 = (mercury__pretty_printer__HeadVar__5_5 - mercury__pretty_printer__V_64_64);
#line 609 "pretty_printer.m"
                                  {
#line 609 "pretty_printer.m"
                                    mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_127, mercury__pretty_printer__OpenGroups1_128, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                  }
#line 607 "pretty_printer.m"
                                  {
#line 607 "pretty_printer.m"
                                    MR_Word base;
#line 607 "pretty_printer.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "pretty_printer.m"
                                    *mercury__pretty_printer__HeadVar__4_4 = base;
#line 607 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 607 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_127));
#line 607 "pretty_printer.m"
                                  }
#line 606 "pretty_printer.m"
                                }
#line 556 "pretty_printer.m"
                                break;
#line 556 "pretty_printer.m"
                              case (MR_Integer) 2:
#line 595 "pretty_printer.m"
                                {
#line 595 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__Docs1_125;

#line 597 "pretty_printer.m"
                                  {
#line 597 "pretty_printer.m"
                                    mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_125, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                  }
#line 596 "pretty_printer.m"
                                  {
#line 596 "pretty_printer.m"
                                    MR_Word base;
#line 596 "pretty_printer.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "pretty_printer.m"
                                    *mercury__pretty_printer__HeadVar__4_4 = base;
#line 596 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 596 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_125));
#line 596 "pretty_printer.m"
                                  }
#line 595 "pretty_printer.m"
                                }
#line 556 "pretty_printer.m"
                                break;
#line 556 "pretty_printer.m"
                            }
#line 556 "pretty_printer.m"
                            break;
#line 556 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 590 "pretty_printer.m"
                            {
#line 590 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__Docs1_124;

#line 592 "pretty_printer.m"
                              {
#line 592 "pretty_printer.m"
                                mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_124, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                              }
#line 591 "pretty_printer.m"
                              {
#line 591 "pretty_printer.m"
                                MR_Word base;
#line 591 "pretty_printer.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "pretty_printer.m"
                                *mercury__pretty_printer__HeadVar__4_4 = base;
#line 591 "pretty_printer.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 591 "pretty_printer.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_124));
#line 591 "pretty_printer.m"
                              }
#line 590 "pretty_printer.m"
                            }
#line 556 "pretty_printer.m"
                            break;
#line 556 "pretty_printer.m"
                          case (MR_Integer) 2:
#line 617 "pretty_printer.m"
                            {
#line 617 "pretty_printer.m"
                              MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_130_130, (MR_Integer) 0)));

#line 619 "pretty_printer.m"
                              /* direct tailcall eliminated */
#line 619 "pretty_printer.m"
                              {
#line 619 "pretty_printer.m"
                                MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__Docs0_27;
#line 619 "pretty_printer.m"
                                MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_8 = mercury__pretty_printer__STATE_VARIABLE_Pri_54_54;

#line 619 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Pri_0_8 = mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_8;
#line 619 "pretty_printer.m"
                                mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 619 "pretty_printer.m"
                              }
#line 619 "pretty_printer.m"
                              continue;
#line 617 "pretty_printer.m"
                            }
#line 556 "pretty_printer.m"
                            break;
#line 556 "pretty_printer.m"
                          case (MR_Integer) 3:
#line 612 "pretty_printer.m"
                            {
#line 612 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_130_130, (MR_Integer) 0)));

#line 614 "pretty_printer.m"
                              /* direct tailcall eliminated */
#line 614 "pretty_printer.m"
                              {
#line 614 "pretty_printer.m"
                                MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__Docs0_27;
#line 614 "pretty_printer.m"
                                MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_59_59;

#line 614 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 614 "pretty_printer.m"
                                mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 614 "pretty_printer.m"
                              }
#line 614 "pretty_printer.m"
                              continue;
#line 612 "pretty_printer.m"
                            }
#line 556 "pretty_printer.m"
                            break;
#line 556 "pretty_printer.m"
                        }
#line 556 "pretty_printer.m"
                      }
#line 556 "pretty_printer.m"
                      break;
#line 556 "pretty_printer.m"
                  }
#line 556 "pretty_printer.m"
                  break;
#line 556 "pretty_printer.m"
              }
#line 535 "pretty_printer.m"
          }
#line 532 "pretty_printer.m"
      }
#line 532 "pretty_printer.m"
      break;
#line 532 "pretty_printer.m"
    }
#line 527 "pretty_printer.m"
}

#line 475 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__output_current_group_12_p_0(
#line 475 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_71,
#line 475 "pretty_printer.m"
  MR_Box mercury__pretty_printer__HeadVar__1_1,
#line 475 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__2_2,
#line 475 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 475 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__4_4,
#line 475 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__5_5,
#line 475 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__6_6,
#line 475 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7,
#line 475 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_8,
#line 475 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9,
#line 475 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_10,
#line 475 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_11,
#line 475 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_12)
#line 475 "pretty_printer.m"
{
#line 479 "pretty_printer.m"
  while (MR_TRUE)
#line 479 "pretty_printer.m"
    {
#line 479 "pretty_printer.m"
      /* tailcall optimized into a loop */
#line 479 "pretty_printer.m"
      {
#line 479 "pretty_printer.m"
        MR_bool mercury__pretty_printer__succeeded;

#line 479 "pretty_printer.m"
        if ((mercury__pretty_printer__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 479 "pretty_printer.m"
          {
#line 480 "pretty_printer.m"
            *mercury__pretty_printer__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 480 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_IO_12 = mercury__pretty_printer__STATE_VARIABLE_IO_0_11;
#line 480 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9;
#line 480 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_8 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7;
#line 479 "pretty_printer.m"
          }
#line 479 "pretty_printer.m"
        else
#line 482 "pretty_printer.m"
          {
#line 482 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Doc_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 0)));
#line 482 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Docs0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 1)));
#line 488 "pretty_printer.m"
            MR_String mercury__pretty_printer__String_36;

#line 483 "pretty_printer.m"
            mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__Doc_30)) == (MR_mktag((MR_Integer) 1)));
#line 483 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 483 "pretty_printer.m"
              {
#line 483 "pretty_printer.m"
                mercury__pretty_printer__String_36 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc_30, (MR_Integer) 0)));
#line 484 "pretty_printer.m"
                {
#line 484 "pretty_printer.m"
                  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_43_43;
#line 484 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_44_44;
#line 484 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__V_45_45;
#line 13990 "pretty_printer.c"
                  void MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_writer_71, (MR_Integer) 0)), (MR_Integer) 5)));

#line 13993 "pretty_printer.c"
                  {
#line 13995 "pretty_printer.c"
                    mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_writer_71), mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__String_36)), mercury__pretty_printer__STATE_VARIABLE_IO_0_11, &mercury__pretty_printer__STATE_VARIABLE_IO_43_43);
                  }
#line 258 "string.opt"
                  {
#line 258 "string.opt"
                    mercury__string__count_codepoints_2_p_0(mercury__pretty_printer__String_36, &mercury__pretty_printer__V_45_45);
                  }
#line 485 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_44_44 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7 - mercury__pretty_printer__V_45_45);
#line 486 "pretty_printer.m"
                  /* direct tailcall eliminated */
#line 486 "pretty_printer.m"
                  {
#line 486 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs0_31;
#line 486 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_44_44;
#line 486 "pretty_printer.m"
                    MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_11 = mercury__pretty_printer__STATE_VARIABLE_IO_43_43;

#line 486 "pretty_printer.m"
                    mercury__pretty_printer__STATE_VARIABLE_IO_0_11 = mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_11;
#line 486 "pretty_printer.m"
                    mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_7;
#line 486 "pretty_printer.m"
                    mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 486 "pretty_printer.m"
                  }
#line 486 "pretty_printer.m"
                  continue;
#line 484 "pretty_printer.m"
                }
#line 483 "pretty_printer.m"
              }
#line 483 "pretty_printer.m"
            else
#line 497 "pretty_printer.m"
              {
#line 488 "pretty_printer.m"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__Doc_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 497 "pretty_printer.m"
                if (mercury__pretty_printer__succeeded)
#line 490 "pretty_printer.m"
                  {
#line 490 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_49_49;
#line 490 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_50_50;
#line 490 "pretty_printer.m"
                    MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_51_51;
#line 490 "pretty_printer.m"
                    MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_20_85;
#line 14048 "pretty_printer.c"
                    void MR_CALL (* mercury__pretty_printer__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_writer_71, (MR_Integer) 0)), (MR_Integer) 5)));

#line 14051 "pretty_printer.c"
                    {
#line 14053 "pretty_printer.c"
                      mercury__pretty_printer__func_1(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_writer_71), mercury__pretty_printer__HeadVar__1_1, ((MR_Box) ((MR_String) "\n")), mercury__pretty_printer__STATE_VARIABLE_IO_0_11, &mercury__pretty_printer__STATE_VARIABLE_IO_20_85);
                    }
#line 634 "pretty_printer.m"
                    {
#line 634 "pretty_printer.m"
                      mercury__pretty_printer__output_indentation_6_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_71, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__3_3, mercury__pretty_printer__HeadVar__2_2, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_49_49, mercury__pretty_printer__STATE_VARIABLE_IO_20_85, &mercury__pretty_printer__STATE_VARIABLE_IO_51_51);
                    }
#line 635 "pretty_printer.m"
                    mercury__pretty_printer__STATE_VARIABLE_RemainingLines_50_50 = (mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9 - (MR_Integer) 1);
#line 491 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingLines_50_50 <= (MR_Integer) 0);
#line 493 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 492 "pretty_printer.m"
                      {
#line 492 "pretty_printer.m"
                        *mercury__pretty_printer__HeadVar__6_6 = mercury__pretty_printer__Docs0_31;
#line 492 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_IO_12 = mercury__pretty_printer__STATE_VARIABLE_IO_51_51;
#line 492 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_50_50;
#line 492 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_8 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_49_49;
#line 492 "pretty_printer.m"
                      }
#line 493 "pretty_printer.m"
                    else
#line 494 "pretty_printer.m"
                      {
#line 494 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 494 "pretty_printer.m"
                        {
#line 494 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs0_31;
#line 494 "pretty_printer.m"
                          MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_49_49;
#line 494 "pretty_printer.m"
                          MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_9 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_50_50;
#line 494 "pretty_printer.m"
                          MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_11 = mercury__pretty_printer__STATE_VARIABLE_IO_51_51;

#line 494 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_IO_0_11 = mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_11;
#line 494 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_9;
#line 494 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_7;
#line 494 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 494 "pretty_printer.m"
                        }
#line 494 "pretty_printer.m"
                        continue;
#line 494 "pretty_printer.m"
                      }
#line 490 "pretty_printer.m"
                  }
#line 497 "pretty_printer.m"
                else
#line 500 "pretty_printer.m"
                  {
#line 497 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_56_56;

#line 497 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__Doc_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_30, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 497 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 497 "pretty_printer.m"
                      {
#line 497 "pretty_printer.m"
                        mercury__pretty_printer__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_30, (MR_Integer) 1)));
#line 497 "pretty_printer.m"
                        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 497 "pretty_printer.m"
                      }
#line 500 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 498 "pretty_printer.m"
                      {
#line 498 "pretty_printer.m"
                        MR_Integer mercury__pretty_printer__V_57_57 = (mercury__pretty_printer__HeadVar__4_4 + (MR_Integer) 1);

#line 498 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 498 "pretty_printer.m"
                        {
#line 498 "pretty_printer.m"
                          MR_Integer mercury__pretty_printer__HeadVar__4__tmp_copy_4 = mercury__pretty_printer__V_57_57;
#line 498 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs0_31;

#line 498 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 498 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__4__tmp_copy_4;
#line 498 "pretty_printer.m"
                        }
#line 498 "pretty_printer.m"
                        continue;
#line 498 "pretty_printer.m"
                      }
#line 500 "pretty_printer.m"
                    else
#line 507 "pretty_printer.m"
                      {
#line 500 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_62_62;

#line 500 "pretty_printer.m"
                        mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__Doc_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_30, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 500 "pretty_printer.m"
                        if (mercury__pretty_printer__succeeded)
#line 500 "pretty_printer.m"
                          {
#line 500 "pretty_printer.m"
                            mercury__pretty_printer__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_30, (MR_Integer) 1)));
#line 500 "pretty_printer.m"
                            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 500 "pretty_printer.m"
                          }
#line 507 "pretty_printer.m"
                        if (mercury__pretty_printer__succeeded)
#line 503 "pretty_printer.m"
                          {
#line 501 "pretty_printer.m"
                            mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__4_4 == (MR_Integer) 1);
#line 503 "pretty_printer.m"
                            if (mercury__pretty_printer__succeeded)
#line 502 "pretty_printer.m"
                              {
#line 502 "pretty_printer.m"
                                *mercury__pretty_printer__HeadVar__6_6 = mercury__pretty_printer__Docs0_31;
#line 502 "pretty_printer.m"
                                *mercury__pretty_printer__STATE_VARIABLE_IO_12 = mercury__pretty_printer__STATE_VARIABLE_IO_0_11;
#line 502 "pretty_printer.m"
                                *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9;
#line 502 "pretty_printer.m"
                                *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_8 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7;
#line 502 "pretty_printer.m"
                              }
#line 503 "pretty_printer.m"
                            else
#line 504 "pretty_printer.m"
                              {
#line 504 "pretty_printer.m"
                                MR_Integer mercury__pretty_printer__V_63_63 = (mercury__pretty_printer__HeadVar__4_4 - (MR_Integer) 1);

#line 504 "pretty_printer.m"
                                /* direct tailcall eliminated */
#line 504 "pretty_printer.m"
                                {
#line 504 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__HeadVar__4__tmp_copy_4 = mercury__pretty_printer__V_63_63;
#line 504 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs0_31;

#line 504 "pretty_printer.m"
                                  mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 504 "pretty_printer.m"
                                  mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__4__tmp_copy_4;
#line 504 "pretty_printer.m"
                                }
#line 504 "pretty_printer.m"
                                continue;
#line 504 "pretty_printer.m"
                              }
#line 503 "pretty_printer.m"
                          }
#line 507 "pretty_printer.m"
                        else
#line 508 "pretty_printer.m"
                          {
#line 508 "pretty_printer.m"
                            /* direct tailcall eliminated */
#line 508 "pretty_printer.m"
                            {
#line 508 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs0_31;

#line 508 "pretty_printer.m"
                              mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 508 "pretty_printer.m"
                            }
#line 508 "pretty_printer.m"
                            continue;
#line 508 "pretty_printer.m"
                          }
#line 507 "pretty_printer.m"
                      }
#line 500 "pretty_printer.m"
                  }
#line 497 "pretty_printer.m"
              }
#line 482 "pretty_printer.m"
          }
#line 479 "pretty_printer.m"
      }
#line 479 "pretty_printer.m"
      break;
#line 479 "pretty_printer.m"
    }
#line 475 "pretty_printer.m"
}

#line 371 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__write_doc_to_stream_17_p_1(
#line 371 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_134,
#line 371 "pretty_printer.m"
  MR_Box mercury__pretty_printer__HeadVar__1_1,
#line 371 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 371 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 371 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__4_4,
#line 371 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__5_5,
#line 371 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6,
#line 371 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7,
#line 371 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_0_8,
#line 371 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Indents_9,
#line 371 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10,
#line 371 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11,
#line 371 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_12,
#line 371 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_13,
#line 371 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_14,
#line 371 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_15,
#line 371 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_16,
#line 371 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_17)
#line 371 "pretty_printer.m"
{
#line 374 "pretty_printer.m"
  while (MR_TRUE)
#line 374 "pretty_printer.m"
    {
#line 374 "pretty_printer.m"
      /* tailcall optimized into a loop */
#line 374 "pretty_printer.m"
      {
#line 374 "pretty_printer.m"
        MR_bool mercury__pretty_printer__succeeded;

#line 374 "pretty_printer.m"
        if ((mercury__pretty_printer__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 374 "pretty_printer.m"
          {
#line 375 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_IO_17 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 375 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Pri_15 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 375 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Limit_13 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 375 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 375 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Indents_9 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 375 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 374 "pretty_printer.m"
          }
#line 374 "pretty_printer.m"
        else
#line 377 "pretty_printer.m"
          {
#line 377 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Doc_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 0)));
#line 377 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Docs0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 1)));

#line 378 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10 <= (MR_Integer) 0);
#line 380 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 379 "pretty_printer.m"
              {
#line 379 "pretty_printer.m"
                {
#line 379 "pretty_printer.m"
                  mercury__stream__put_4_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) ((MR_String) "...")), mercury__pretty_printer__STATE_VARIABLE_IO_0_16, mercury__pretty_printer__STATE_VARIABLE_IO_17);
                }
#line 379 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Pri_15 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 379 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Limit_13 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 379 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 379 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Indents_9 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 379 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 379 "pretty_printer.m"
              }
#line 380 "pretty_printer.m"
            else
#line 468 "pretty_printer.m"
              {
#line 468 "pretty_printer.m"
                MR_Word mercury__pretty_printer__Docs_53;
#line 468 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_93_93;
#line 468 "pretty_printer.m"
                MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_101_101;
#line 468 "pretty_printer.m"
                MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_105_105;
#line 468 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116;
#line 468 "pretty_printer.m"
                MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_118_118;
#line 468 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119;

#line 389 "pretty_printer.m"
#line 389 "pretty_printer.m"
                switch (MR_tag((MR_Word) mercury__pretty_printer__Doc_44)) {
#line 389 "pretty_printer.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 389 "pretty_printer.m"
                  case (MR_Integer) 0:
#line 389 "pretty_printer.m"
#line 389 "pretty_printer.m"
                    switch (MR_unmkbody(mercury__pretty_printer__Doc_44)) {
#line 389 "pretty_printer.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 389 "pretty_printer.m"
                      case (MR_Integer) 0:
#line 390 "pretty_printer.m"
                        {
#line 392 "pretty_printer.m"
                          MR_Integer mercury__pretty_printer__IndentWidth_57;
#line 392 "pretty_printer.m"
                          MR_Integer mercury__pretty_printer__V_114_114;

#line 393 "pretty_printer.m"
                          {
#line 393 "pretty_printer.m"
                            mercury__pretty_printer__IndentWidth_57 = mercury__pretty_printer__foldl__ho14_3_f_in__list_0(mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, (MR_Integer) 0);
                          }
#line 394 "pretty_printer.m"
                          mercury__pretty_printer__V_114_114 = (mercury__pretty_printer__HeadVar__4_4 - mercury__pretty_printer__IndentWidth_57);
#line 394 "pretty_printer.m"
                          mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 < mercury__pretty_printer__V_114_114);
#line 398 "pretty_printer.m"
                          if (mercury__pretty_printer__succeeded)
#line 396 "pretty_printer.m"
                            {
#line 396 "pretty_printer.m"
                              mercury__pretty_printer__format_nl_8_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                            }
#line 398 "pretty_printer.m"
                          else
#line 399 "pretty_printer.m"
                            {
#line 399 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 399 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 399 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 399 "pretty_printer.m"
                            }
#line 401 "pretty_printer.m"
                          mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 390 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 390 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 390 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 390 "pretty_printer.m"
                        }
#line 389 "pretty_printer.m"
                        break;
#line 389 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 403 "pretty_printer.m"
                        {
#line 404 "pretty_printer.m"
                          {
#line 404 "pretty_printer.m"
                            mercury__pretty_printer__format_nl_8_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                          }
#line 406 "pretty_printer.m"
                          mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 403 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 403 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 403 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 403 "pretty_printer.m"
                        }
#line 389 "pretty_printer.m"
                        break;
#line 389 "pretty_printer.m"
                    }
#line 389 "pretty_printer.m"
                    break;
#line 389 "pretty_printer.m"
                  case (MR_Integer) 1:
#line 384 "pretty_printer.m"
                    {
#line 384 "pretty_printer.m"
                      MR_String mercury__pretty_printer__String_52 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc_44, (MR_Integer) 0)));
#line 384 "pretty_printer.m"
                      MR_Integer mercury__pretty_printer__V_120_120;

#line 385 "pretty_printer.m"
                      {
#line 385 "pretty_printer.m"
                        mercury__stream__put_4_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__String_52)), mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                      }
#line 387 "pretty_printer.m"
                      {
#line 387 "pretty_printer.m"
                        mercury__pretty_printer__V_120_120 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__String_52);
                      }
#line 386 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 - mercury__pretty_printer__V_120_120);
#line 388 "pretty_printer.m"
                      mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 384 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 384 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 384 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 384 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 384 "pretty_printer.m"
                    }
#line 389 "pretty_printer.m"
                    break;
#line 389 "pretty_printer.m"
                  case (MR_Integer) 2:
#line 408 "pretty_printer.m"
                    {
#line 408 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__TypeCtorInfo_137_137 = (MR_Word) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0;
#line 408 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__Docs1_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc_44, (MR_Integer) 0)));

#line 409 "pretty_printer.m"
                      {
#line 409 "pretty_printer.m"
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
#line 408 "pretty_printer.m"
                    }
#line 389 "pretty_printer.m"
                    break;
#line 389 "pretty_printer.m"
                  case (MR_Integer) 3:
#line 389 "pretty_printer.m"
#line 389 "pretty_printer.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 0)))) {
#line 389 "pretty_printer.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 389 "pretty_printer.m"
                      case (MR_Integer) 0:
#line 411 "pretty_printer.m"
                        {
#line 411 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Univ_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 411 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Doc1_60;

#line 412 "pretty_printer.m"
                          {
#line 412 "pretty_printer.m"
                            mercury__pretty_printer__expand_pp_7_p_1(mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__HeadVar__3_3, mercury__pretty_printer__Univ_59, &mercury__pretty_printer__Doc1_60, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14);
                          }
#line 413 "pretty_printer.m"
                          {
#line 413 "pretty_printer.m"
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_60));
#line 413 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 413 "pretty_printer.m"
                          }
#line 411 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 411 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 411 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 411 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 411 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 411 "pretty_printer.m"
                        }
#line 389 "pretty_printer.m"
                        break;
#line 389 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 415 "pretty_printer.m"
                        {
#line 415 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Univs_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 415 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Sep_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 2)));
#line 415 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Doc1_129;

#line 416 "pretty_printer.m"
                          {
#line 416 "pretty_printer.m"
                            mercury__pretty_printer__expand_format_list_5_p_0(mercury__pretty_printer__Univs_61, mercury__pretty_printer__Sep_62, &mercury__pretty_printer__Doc1_129, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105);
                          }
#line 417 "pretty_printer.m"
                          {
#line 417 "pretty_printer.m"
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_129));
#line 417 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 417 "pretty_printer.m"
                          }
#line 415 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 415 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 415 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 415 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 415 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 415 "pretty_printer.m"
                        }
#line 389 "pretty_printer.m"
                        break;
#line 389 "pretty_printer.m"
                      case (MR_Integer) 2:
#line 419 "pretty_printer.m"
                        {
#line 419 "pretty_printer.m"
                          MR_String mercury__pretty_printer__Name_63 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 419 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Doc1_130;
#line 419 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Univs_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 2)));

#line 420 "pretty_printer.m"
                          {
#line 420 "pretty_printer.m"
                            mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_63, mercury__pretty_printer__Univs_131, &mercury__pretty_printer__Doc1_130, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14);
                          }
#line 421 "pretty_printer.m"
                          {
#line 421 "pretty_printer.m"
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_130));
#line 421 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 421 "pretty_printer.m"
                          }
#line 419 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 419 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 419 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 419 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 419 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 419 "pretty_printer.m"
                        }
#line 389 "pretty_printer.m"
                        break;
#line 389 "pretty_printer.m"
                      case (MR_Integer) 3:
#line 423 "pretty_printer.m"
                        {
#line 423 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Susp_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 423 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Doc1_132;

#line 424 "pretty_printer.m"
                          {
#line 424 "pretty_printer.m"
                            mercury__pretty_printer__expand_format_susp_4_p_0(mercury__pretty_printer__Susp_64, &mercury__pretty_printer__Doc1_132, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105);
                          }
#line 425 "pretty_printer.m"
                          {
#line 425 "pretty_printer.m"
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_132));
#line 425 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 425 "pretty_printer.m"
                          }
#line 423 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 423 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 423 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 423 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 423 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 423 "pretty_printer.m"
                        }
#line 389 "pretty_printer.m"
                        break;
#line 389 "pretty_printer.m"
                      case (MR_Integer) 4:
#line 389 "pretty_printer.m"
                        {
#line 389 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));

#line 389 "pretty_printer.m"
#line 389 "pretty_printer.m"
                          switch (MR_tag((MR_Word) mercury__pretty_printer__V_139_139)) {
#line 389 "pretty_printer.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 389 "pretty_printer.m"
                            case (MR_Integer) 0:
#line 389 "pretty_printer.m"
#line 389 "pretty_printer.m"
                              switch (MR_unmkbody(mercury__pretty_printer__V_139_139)) {
#line 389 "pretty_printer.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 389 "pretty_printer.m"
                                case (MR_Integer) 0:
#line 444 "pretty_printer.m"
                                  {
#line 444 "pretty_printer.m"
                                    MR_Integer mercury__pretty_printer__RemainingWidthAfterGroup_68;
#line 444 "pretty_printer.m"
                                    MR_Word mercury__pretty_printer__Docs1_133;

#line 447 "pretty_printer.m"
                                    {
#line 447 "pretty_printer.m"
                                      mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__HeadVar__3_3, mercury__pretty_printer__Docs0_45, &mercury__pretty_printer__Docs1_133, (MR_Integer) 1, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14, &mercury__pretty_printer__STATE_VARIABLE_Pri_93_93, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6, &mercury__pretty_printer__RemainingWidthAfterGroup_68);
                                    }
#line 449 "pretty_printer.m"
                                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__RemainingWidthAfterGroup_68 >= (MR_Integer) 0);
#line 452 "pretty_printer.m"
                                    if (mercury__pretty_printer__succeeded)
#line 450 "pretty_printer.m"
                                      {
#line 450 "pretty_printer.m"
                                        mercury__pretty_printer__output_current_group_12_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, (MR_Integer) 1, mercury__pretty_printer__Docs1_133, &mercury__pretty_printer__Docs_53, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                                      }
#line 452 "pretty_printer.m"
                                    else
#line 453 "pretty_printer.m"
                                      {
#line 453 "pretty_printer.m"
                                        mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs1_133;
#line 453 "pretty_printer.m"
                                        mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 453 "pretty_printer.m"
                                        mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 453 "pretty_printer.m"
                                        mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 453 "pretty_printer.m"
                                      }
#line 444 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 444 "pretty_printer.m"
                                  }
#line 389 "pretty_printer.m"
                                  break;
#line 389 "pretty_printer.m"
                                case (MR_Integer) 1:
#line 458 "pretty_printer.m"
                                  {
#line 459 "pretty_printer.m"
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
#line 458 "pretty_printer.m"
                                  }
#line 389 "pretty_printer.m"
                                  break;
#line 389 "pretty_printer.m"
                                case (MR_Integer) 2:
#line 435 "pretty_printer.m"
                                  {
#line 435 "pretty_printer.m"
                                    MR_Word mercury__pretty_printer__TypeCtorInfo_138_138 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 436 "pretty_printer.m"
                                    {
#line 436 "pretty_printer.m"
                                      mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__list__det_tail_1_f_0(mercury__pretty_printer__TypeCtorInfo_138_138, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8);
                                    }
#line 437 "pretty_printer.m"
                                    mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 435 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 435 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 435 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 435 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 435 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 435 "pretty_printer.m"
                                  }
#line 389 "pretty_printer.m"
                                  break;
#line 389 "pretty_printer.m"
                              }
#line 389 "pretty_printer.m"
                              break;
#line 389 "pretty_printer.m"
                            case (MR_Integer) 1:
#line 429 "pretty_printer.m"
                              {
#line 429 "pretty_printer.m"
                                MR_String mercury__pretty_printer__Indent_65 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_139_139, (MR_Integer) 0)));

#line 430 "pretty_printer.m"
                                {
#line 430 "pretty_printer.m"
                                  mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "pretty_printer.m"
                                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Indents_101_101, 0) = ((MR_Box) (mercury__pretty_printer__Indent_65));
#line 430 "pretty_printer.m"
                                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Indents_101_101, 1) = ((MR_Box) (mercury__pretty_printer__STATE_VARIABLE_Indents_0_8));
#line 430 "pretty_printer.m"
                                }
#line 431 "pretty_printer.m"
                                mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 429 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 429 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 429 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 429 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 429 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 429 "pretty_printer.m"
                              }
#line 389 "pretty_printer.m"
                              break;
#line 389 "pretty_printer.m"
                            case (MR_Integer) 2:
#line 465 "pretty_printer.m"
                              {
#line 465 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_139_139, (MR_Integer) 0)));
#line 467 "pretty_printer.m"
                                mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 465 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 465 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 465 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 465 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 465 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 465 "pretty_printer.m"
                              }
#line 389 "pretty_printer.m"
                              break;
#line 389 "pretty_printer.m"
                            case (MR_Integer) 3:
#line 461 "pretty_printer.m"
                              {
#line 461 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_139_139, (MR_Integer) 0)));
#line 463 "pretty_printer.m"
                                mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 461 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 461 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 461 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 461 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 461 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 461 "pretty_printer.m"
                              }
#line 389 "pretty_printer.m"
                              break;
#line 389 "pretty_printer.m"
                          }
#line 389 "pretty_printer.m"
                        }
#line 389 "pretty_printer.m"
                        break;
#line 389 "pretty_printer.m"
                    }
#line 389 "pretty_printer.m"
                    break;
#line 389 "pretty_printer.m"
                }
#line 469 "pretty_printer.m"
                /* direct tailcall eliminated */
#line 469 "pretty_printer.m"
                {
#line 469 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs_53;
#line 469 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119;
#line 469 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_0__tmp_copy_8 = mercury__pretty_printer__STATE_VARIABLE_Indents_101_101;
#line 469 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116;
#line 469 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_12 = mercury__pretty_printer__STATE_VARIABLE_Limit_105_105;
#line 469 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_14 = mercury__pretty_printer__STATE_VARIABLE_Pri_93_93;
#line 469 "pretty_printer.m"
                  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_16 = mercury__pretty_printer__STATE_VARIABLE_IO_118_118;

#line 469 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_IO_0_16 = mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_16;
#line 469 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_Pri_0_14 = mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_14;
#line 469 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_Limit_0_12 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_12;
#line 469 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_10;
#line 469 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_Indents_0_8 = mercury__pretty_printer__STATE_VARIABLE_Indents_0__tmp_copy_8;
#line 469 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_6;
#line 469 "pretty_printer.m"
                  mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 469 "pretty_printer.m"
                }
#line 469 "pretty_printer.m"
                continue;
#line 468 "pretty_printer.m"
              }
#line 377 "pretty_printer.m"
          }
#line 374 "pretty_printer.m"
      }
#line 374 "pretty_printer.m"
      break;
#line 374 "pretty_printer.m"
    }
#line 371 "pretty_printer.m"
}

#line 369 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__write_doc_to_stream_17_p_0(
#line 369 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_134,
#line 369 "pretty_printer.m"
  MR_Box mercury__pretty_printer__HeadVar__1_1,
#line 369 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 369 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 369 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__4_4,
#line 369 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__5_5,
#line 369 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6,
#line 369 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7,
#line 369 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_0_8,
#line 369 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Indents_9,
#line 369 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10,
#line 369 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11,
#line 369 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_12,
#line 369 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_13,
#line 369 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_14,
#line 369 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_15,
#line 369 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_16,
#line 369 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_17)
#line 369 "pretty_printer.m"
{
#line 374 "pretty_printer.m"
  while (MR_TRUE)
#line 374 "pretty_printer.m"
    {
#line 374 "pretty_printer.m"
      /* tailcall optimized into a loop */
#line 374 "pretty_printer.m"
      {
#line 374 "pretty_printer.m"
        MR_bool mercury__pretty_printer__succeeded;

#line 374 "pretty_printer.m"
        if ((mercury__pretty_printer__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 374 "pretty_printer.m"
          {
#line 375 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_IO_17 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 375 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Pri_15 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 375 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Limit_13 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 375 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 375 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Indents_9 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 375 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 374 "pretty_printer.m"
          }
#line 374 "pretty_printer.m"
        else
#line 377 "pretty_printer.m"
          {
#line 377 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Doc_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 0)));
#line 377 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Docs0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 1)));

#line 378 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10 <= (MR_Integer) 0);
#line 380 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 379 "pretty_printer.m"
              {
#line 379 "pretty_printer.m"
                {
#line 379 "pretty_printer.m"
                  mercury__stream__put_4_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) ((MR_String) "...")), mercury__pretty_printer__STATE_VARIABLE_IO_0_16, mercury__pretty_printer__STATE_VARIABLE_IO_17);
                }
#line 379 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Pri_15 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 379 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Limit_13 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 379 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 379 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Indents_9 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 379 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 379 "pretty_printer.m"
              }
#line 380 "pretty_printer.m"
            else
#line 468 "pretty_printer.m"
              {
#line 468 "pretty_printer.m"
                MR_Word mercury__pretty_printer__Docs_53;
#line 468 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_93_93;
#line 468 "pretty_printer.m"
                MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_101_101;
#line 468 "pretty_printer.m"
                MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_105_105;
#line 468 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116;
#line 468 "pretty_printer.m"
                MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_118_118;
#line 468 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119;

#line 389 "pretty_printer.m"
#line 389 "pretty_printer.m"
                switch (MR_tag((MR_Word) mercury__pretty_printer__Doc_44)) {
#line 389 "pretty_printer.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 389 "pretty_printer.m"
                  case (MR_Integer) 0:
#line 389 "pretty_printer.m"
#line 389 "pretty_printer.m"
                    switch (MR_unmkbody(mercury__pretty_printer__Doc_44)) {
#line 389 "pretty_printer.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 389 "pretty_printer.m"
                      case (MR_Integer) 0:
#line 390 "pretty_printer.m"
                        {
#line 392 "pretty_printer.m"
                          MR_Integer mercury__pretty_printer__IndentWidth_57;
#line 392 "pretty_printer.m"
                          MR_Integer mercury__pretty_printer__V_114_114;

#line 393 "pretty_printer.m"
                          {
#line 393 "pretty_printer.m"
                            mercury__pretty_printer__IndentWidth_57 = mercury__pretty_printer__foldl__ho15_3_f_in__list_0(mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, (MR_Integer) 0);
                          }
#line 394 "pretty_printer.m"
                          mercury__pretty_printer__V_114_114 = (mercury__pretty_printer__HeadVar__4_4 - mercury__pretty_printer__IndentWidth_57);
#line 394 "pretty_printer.m"
                          mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 < mercury__pretty_printer__V_114_114);
#line 398 "pretty_printer.m"
                          if (mercury__pretty_printer__succeeded)
#line 396 "pretty_printer.m"
                            {
#line 396 "pretty_printer.m"
                              mercury__pretty_printer__format_nl_8_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                            }
#line 398 "pretty_printer.m"
                          else
#line 399 "pretty_printer.m"
                            {
#line 399 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 399 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 399 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 399 "pretty_printer.m"
                            }
#line 401 "pretty_printer.m"
                          mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 390 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 390 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 390 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 390 "pretty_printer.m"
                        }
#line 389 "pretty_printer.m"
                        break;
#line 389 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 403 "pretty_printer.m"
                        {
#line 404 "pretty_printer.m"
                          {
#line 404 "pretty_printer.m"
                            mercury__pretty_printer__format_nl_8_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                          }
#line 406 "pretty_printer.m"
                          mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 403 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 403 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 403 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 403 "pretty_printer.m"
                        }
#line 389 "pretty_printer.m"
                        break;
#line 389 "pretty_printer.m"
                    }
#line 389 "pretty_printer.m"
                    break;
#line 389 "pretty_printer.m"
                  case (MR_Integer) 1:
#line 384 "pretty_printer.m"
                    {
#line 384 "pretty_printer.m"
                      MR_String mercury__pretty_printer__String_52 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc_44, (MR_Integer) 0)));
#line 384 "pretty_printer.m"
                      MR_Integer mercury__pretty_printer__V_120_120;

#line 385 "pretty_printer.m"
                      {
#line 385 "pretty_printer.m"
                        mercury__stream__put_4_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__String_52)), mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                      }
#line 387 "pretty_printer.m"
                      {
#line 387 "pretty_printer.m"
                        mercury__pretty_printer__V_120_120 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__String_52);
                      }
#line 386 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 - mercury__pretty_printer__V_120_120);
#line 388 "pretty_printer.m"
                      mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 384 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 384 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 384 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 384 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 384 "pretty_printer.m"
                    }
#line 389 "pretty_printer.m"
                    break;
#line 389 "pretty_printer.m"
                  case (MR_Integer) 2:
#line 408 "pretty_printer.m"
                    {
#line 408 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__TypeCtorInfo_137_137 = (MR_Word) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0;
#line 408 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__Docs1_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc_44, (MR_Integer) 0)));

#line 409 "pretty_printer.m"
                      {
#line 409 "pretty_printer.m"
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
#line 408 "pretty_printer.m"
                    }
#line 389 "pretty_printer.m"
                    break;
#line 389 "pretty_printer.m"
                  case (MR_Integer) 3:
#line 389 "pretty_printer.m"
#line 389 "pretty_printer.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 0)))) {
#line 389 "pretty_printer.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 389 "pretty_printer.m"
                      case (MR_Integer) 0:
#line 411 "pretty_printer.m"
                        {
#line 411 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Univ_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 411 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Doc1_60;

#line 412 "pretty_printer.m"
                          {
#line 412 "pretty_printer.m"
                            mercury__pretty_printer__expand_pp_7_p_0(mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__HeadVar__3_3, mercury__pretty_printer__Univ_59, &mercury__pretty_printer__Doc1_60, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14);
                          }
#line 413 "pretty_printer.m"
                          {
#line 413 "pretty_printer.m"
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_60));
#line 413 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 413 "pretty_printer.m"
                          }
#line 411 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 411 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 411 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 411 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 411 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 411 "pretty_printer.m"
                        }
#line 389 "pretty_printer.m"
                        break;
#line 389 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 415 "pretty_printer.m"
                        {
#line 415 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Univs_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 415 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Sep_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 2)));
#line 415 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Doc1_129;

#line 416 "pretty_printer.m"
                          {
#line 416 "pretty_printer.m"
                            mercury__pretty_printer__expand_format_list_5_p_0(mercury__pretty_printer__Univs_61, mercury__pretty_printer__Sep_62, &mercury__pretty_printer__Doc1_129, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105);
                          }
#line 417 "pretty_printer.m"
                          {
#line 417 "pretty_printer.m"
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_129));
#line 417 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 417 "pretty_printer.m"
                          }
#line 415 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 415 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 415 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 415 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 415 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 415 "pretty_printer.m"
                        }
#line 389 "pretty_printer.m"
                        break;
#line 389 "pretty_printer.m"
                      case (MR_Integer) 2:
#line 419 "pretty_printer.m"
                        {
#line 419 "pretty_printer.m"
                          MR_String mercury__pretty_printer__Name_63 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 419 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Doc1_130;
#line 419 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Univs_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 2)));

#line 420 "pretty_printer.m"
                          {
#line 420 "pretty_printer.m"
                            mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_63, mercury__pretty_printer__Univs_131, &mercury__pretty_printer__Doc1_130, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14);
                          }
#line 421 "pretty_printer.m"
                          {
#line 421 "pretty_printer.m"
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_130));
#line 421 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 421 "pretty_printer.m"
                          }
#line 419 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 419 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 419 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 419 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 419 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 419 "pretty_printer.m"
                        }
#line 389 "pretty_printer.m"
                        break;
#line 389 "pretty_printer.m"
                      case (MR_Integer) 3:
#line 423 "pretty_printer.m"
                        {
#line 423 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Susp_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 423 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Doc1_132;

#line 424 "pretty_printer.m"
                          {
#line 424 "pretty_printer.m"
                            mercury__pretty_printer__expand_format_susp_4_p_0(mercury__pretty_printer__Susp_64, &mercury__pretty_printer__Doc1_132, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105);
                          }
#line 425 "pretty_printer.m"
                          {
#line 425 "pretty_printer.m"
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_132));
#line 425 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 425 "pretty_printer.m"
                          }
#line 423 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 423 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 423 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 423 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 423 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 423 "pretty_printer.m"
                        }
#line 389 "pretty_printer.m"
                        break;
#line 389 "pretty_printer.m"
                      case (MR_Integer) 4:
#line 389 "pretty_printer.m"
                        {
#line 389 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));

#line 389 "pretty_printer.m"
#line 389 "pretty_printer.m"
                          switch (MR_tag((MR_Word) mercury__pretty_printer__V_139_139)) {
#line 389 "pretty_printer.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 389 "pretty_printer.m"
                            case (MR_Integer) 0:
#line 389 "pretty_printer.m"
#line 389 "pretty_printer.m"
                              switch (MR_unmkbody(mercury__pretty_printer__V_139_139)) {
#line 389 "pretty_printer.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 389 "pretty_printer.m"
                                case (MR_Integer) 0:
#line 444 "pretty_printer.m"
                                  {
#line 444 "pretty_printer.m"
                                    MR_Integer mercury__pretty_printer__RemainingWidthAfterGroup_68;
#line 444 "pretty_printer.m"
                                    MR_Word mercury__pretty_printer__Docs1_133;

#line 447 "pretty_printer.m"
                                    {
#line 447 "pretty_printer.m"
                                      mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__HeadVar__3_3, mercury__pretty_printer__Docs0_45, &mercury__pretty_printer__Docs1_133, (MR_Integer) 1, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14, &mercury__pretty_printer__STATE_VARIABLE_Pri_93_93, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6, &mercury__pretty_printer__RemainingWidthAfterGroup_68);
                                    }
#line 449 "pretty_printer.m"
                                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__RemainingWidthAfterGroup_68 >= (MR_Integer) 0);
#line 452 "pretty_printer.m"
                                    if (mercury__pretty_printer__succeeded)
#line 450 "pretty_printer.m"
                                      {
#line 450 "pretty_printer.m"
                                        mercury__pretty_printer__output_current_group_12_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, (MR_Integer) 1, mercury__pretty_printer__Docs1_133, &mercury__pretty_printer__Docs_53, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                                      }
#line 452 "pretty_printer.m"
                                    else
#line 453 "pretty_printer.m"
                                      {
#line 453 "pretty_printer.m"
                                        mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs1_133;
#line 453 "pretty_printer.m"
                                        mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 453 "pretty_printer.m"
                                        mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 453 "pretty_printer.m"
                                        mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 453 "pretty_printer.m"
                                      }
#line 444 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 444 "pretty_printer.m"
                                  }
#line 389 "pretty_printer.m"
                                  break;
#line 389 "pretty_printer.m"
                                case (MR_Integer) 1:
#line 458 "pretty_printer.m"
                                  {
#line 459 "pretty_printer.m"
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
#line 458 "pretty_printer.m"
                                  }
#line 389 "pretty_printer.m"
                                  break;
#line 389 "pretty_printer.m"
                                case (MR_Integer) 2:
#line 435 "pretty_printer.m"
                                  {
#line 435 "pretty_printer.m"
                                    MR_Word mercury__pretty_printer__TypeCtorInfo_138_138 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 436 "pretty_printer.m"
                                    {
#line 436 "pretty_printer.m"
                                      mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__list__det_tail_1_f_0(mercury__pretty_printer__TypeCtorInfo_138_138, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8);
                                    }
#line 437 "pretty_printer.m"
                                    mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 435 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 435 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 435 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 435 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 435 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 435 "pretty_printer.m"
                                  }
#line 389 "pretty_printer.m"
                                  break;
#line 389 "pretty_printer.m"
                              }
#line 389 "pretty_printer.m"
                              break;
#line 389 "pretty_printer.m"
                            case (MR_Integer) 1:
#line 429 "pretty_printer.m"
                              {
#line 429 "pretty_printer.m"
                                MR_String mercury__pretty_printer__Indent_65 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_139_139, (MR_Integer) 0)));

#line 430 "pretty_printer.m"
                                {
#line 430 "pretty_printer.m"
                                  mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "pretty_printer.m"
                                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Indents_101_101, 0) = ((MR_Box) (mercury__pretty_printer__Indent_65));
#line 430 "pretty_printer.m"
                                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Indents_101_101, 1) = ((MR_Box) (mercury__pretty_printer__STATE_VARIABLE_Indents_0_8));
#line 430 "pretty_printer.m"
                                }
#line 431 "pretty_printer.m"
                                mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 429 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 429 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 429 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 429 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 429 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 429 "pretty_printer.m"
                              }
#line 389 "pretty_printer.m"
                              break;
#line 389 "pretty_printer.m"
                            case (MR_Integer) 2:
#line 465 "pretty_printer.m"
                              {
#line 465 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_139_139, (MR_Integer) 0)));
#line 467 "pretty_printer.m"
                                mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 465 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 465 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 465 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 465 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 465 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 465 "pretty_printer.m"
                              }
#line 389 "pretty_printer.m"
                              break;
#line 389 "pretty_printer.m"
                            case (MR_Integer) 3:
#line 461 "pretty_printer.m"
                              {
#line 461 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_139_139, (MR_Integer) 0)));
#line 463 "pretty_printer.m"
                                mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 461 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 461 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 461 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 461 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 461 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 461 "pretty_printer.m"
                              }
#line 389 "pretty_printer.m"
                              break;
#line 389 "pretty_printer.m"
                          }
#line 389 "pretty_printer.m"
                        }
#line 389 "pretty_printer.m"
                        break;
#line 389 "pretty_printer.m"
                    }
#line 389 "pretty_printer.m"
                    break;
#line 389 "pretty_printer.m"
                }
#line 469 "pretty_printer.m"
                /* direct tailcall eliminated */
#line 469 "pretty_printer.m"
                {
#line 469 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs_53;
#line 469 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119;
#line 469 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_0__tmp_copy_8 = mercury__pretty_printer__STATE_VARIABLE_Indents_101_101;
#line 469 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116;
#line 469 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_12 = mercury__pretty_printer__STATE_VARIABLE_Limit_105_105;
#line 469 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_14 = mercury__pretty_printer__STATE_VARIABLE_Pri_93_93;
#line 469 "pretty_printer.m"
                  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_16 = mercury__pretty_printer__STATE_VARIABLE_IO_118_118;

#line 469 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_IO_0_16 = mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_16;
#line 469 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_Pri_0_14 = mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_14;
#line 469 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_Limit_0_12 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_12;
#line 469 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_10;
#line 469 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_Indents_0_8 = mercury__pretty_printer__STATE_VARIABLE_Indents_0__tmp_copy_8;
#line 469 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_6;
#line 469 "pretty_printer.m"
                  mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 469 "pretty_printer.m"
                }
#line 469 "pretty_printer.m"
                continue;
#line 468 "pretty_printer.m"
              }
#line 377 "pretty_printer.m"
          }
#line 374 "pretty_printer.m"
      }
#line 374 "pretty_printer.m"
      break;
#line 374 "pretty_printer.m"
    }
#line 369 "pretty_printer.m"
}

#line 238 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__write_doc_4_p_0(
#line 238 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Stream_5,
#line 238 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Doc_6)
#line 238 "pretty_printer.m"
{
#line 1062 "pretty_printer.m"
  {
#line 1062 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1062 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatters_8;
#line 1062 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__LineWidth_9;
#line 1062 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__MaxLines_10;
#line 1062 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Limit_11;
#line 1062 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_15_15;
#line 1062 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Okay_24;
#line 1066 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_19;
#line 1066 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_58;
#line 1066 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__Pri_46;
#line 1066 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Indents_48;
#line 1066 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_55_55;
#line 1066 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_57_57;
#line 15677 "pretty_printer.c"
    MR_Box MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box);
#line 15679 "pretty_printer.c"
    MR_Box mercury__pretty_printer__conv1_Pri_46;
#line 348 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_49_49;
#line 348 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_50_50;
#line 348 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_51_51;
#line 348 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_52_52;
#line 348 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_53_53;
#line 348 "pretty_printer.m"
    MR_Box mercury__pretty_printer__conv2_STATE_VARIABLE_IO_13;

#line 922 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0

	MR_Word Okay;

		{
#line 922 "pretty_printer.m"

    Okay = ML_pretty_printer_is_initialised;

#line 15705 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__Okay_24  = Okay;
#line 922 "pretty_printer.m"
}
#line 1001 "pretty_printer.m"
#line 1001 "pretty_printer.m"
    switch (mercury__pretty_printer__Okay_24) {
#line 1001 "pretty_printer.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1001 "pretty_printer.m"
      case (MR_Integer) 0:
#line 998 "pretty_printer.m"
        {
#line 999 "pretty_printer.m"
          {
#line 999 "pretty_printer.m"
            mercury__pretty_printer__Formatters_8 = mercury__pretty_printer__initial_formatter_map_0_f_0();
          }
#line 1011 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0

	MR_Word FMap;

	FMap =  mercury__pretty_printer__Formatters_8 ;
		{
#line 1011 "pretty_printer.m"

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;

#line 15739 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 1011 "pretty_printer.m"
}
#line 998 "pretty_printer.m"
        }
#line 1001 "pretty_printer.m"
        break;
#line 1001 "pretty_printer.m"
      case (MR_Integer) 1:
#line 961 "pretty_printer.m"
        {
#line 964 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0

	MR_Word FMap;

		{
#line 964 "pretty_printer.m"

    FMap = ML_pretty_printer_default_formatter_map;

#line 15764 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__Formatters_8  = FMap;
#line 964 "pretty_printer.m"
}
#line 961 "pretty_printer.m"
        }
#line 1001 "pretty_printer.m"
        break;
#line 1001 "pretty_printer.m"
    }
#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0


		{
#line 877 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 15789 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0

	MR_Word X;

		{
#line 877 "pretty_printer.m"
X = mercury__pretty_printer__mutable_variable_io_pp_params;

#line 15805 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_15_15  = X;
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0


		{
#line 877 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 15824 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 877 "pretty_printer.m"
}
#line 1064 "pretty_printer.m"
    mercury__pretty_printer__LineWidth_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__V_15_15, (MR_Integer) 0)));
#line 1064 "pretty_printer.m"
    mercury__pretty_printer__MaxLines_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__V_15_15, (MR_Integer) 1)));
#line 1064 "pretty_printer.m"
    mercury__pretty_printer__Limit_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__V_15_15, (MR_Integer) 2)));
#line 15836 "pretty_printer.c"
    mercury__pretty_printer__TypeClassInfo_for_writer_19 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
#line 15838 "pretty_printer.c"
    mercury__pretty_printer__TypeClassInfo_for_op_table_58 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 15842 "pretty_printer.c"
    mercury__pretty_printer__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_op_table_58, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15844 "pretty_printer.c"
    {
#line 15846 "pretty_printer.c"
      mercury__pretty_printer__conv1_Pri_46 = mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_op_table_58), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15849 "pretty_printer.c"
    mercury__pretty_printer__Pri_46 = ((MR_Integer) mercury__pretty_printer__conv1_Pri_46);
#line 347 "pretty_printer.m"
    mercury__pretty_printer__Indents_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 348 "pretty_printer.m"
    mercury__pretty_printer__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 348 "pretty_printer.m"
    {
#line 348 "pretty_printer.m"
      mercury__pretty_printer__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_55_55, 0) = ((MR_Box) (mercury__pretty_printer__Doc_6));
#line 348 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_55_55, 1) = ((MR_Box) (mercury__pretty_printer__V_57_57));
#line 348 "pretty_printer.m"
    }
#line 348 "pretty_printer.m"
    {
#line 348 "pretty_printer.m"
      mercury__pretty_printer__write_doc_to_stream_17_p_1(mercury__pretty_printer__TypeClassInfo_for_writer_19, ((MR_Box) (mercury__pretty_printer__Stream_5)), (MR_Integer) 2, mercury__pretty_printer__Formatters_8, mercury__pretty_printer__LineWidth_9, mercury__pretty_printer__V_55_55, mercury__pretty_printer__LineWidth_9, &mercury__pretty_printer__V_49_49, mercury__pretty_printer__Indents_48, &mercury__pretty_printer__V_50_50, mercury__pretty_printer__MaxLines_10, &mercury__pretty_printer__V_51_51, mercury__pretty_printer__Limit_11, &mercury__pretty_printer__V_52_52, mercury__pretty_printer__Pri_46, &mercury__pretty_printer__V_53_53, ((MR_Box) ((MR_Integer) 0)), &mercury__pretty_printer__conv2_STATE_VARIABLE_IO_13);
    }
#line 1062 "pretty_printer.m"
  }
#line 238 "pretty_printer.m"
}

#line 237 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__write_doc_3_p_0(
#line 237 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Doc_4)
#line 237 "pretty_printer.m"
{
#line 1059 "pretty_printer.m"
  {
#line 1059 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1059 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_8_8;
#line 1059 "pretty_printer.m"
    MR_Box mercury__pretty_printer__V_2_10;

#line 1331 "io.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_3_p_0

	MercuryFilePtr Stream;

		{
#line 1331 "io.opt"

    Stream = &mercury_stdout;

#line 15902 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_2_10  = (MR_Box) Stream;
#line 1331 "io.opt"
}
#line 669 "io.opt"
    mercury__pretty_printer__V_8_8 = (MR_Word) mercury__pretty_printer__V_2_10;
#line 1060 "pretty_printer.m"
    {
#line 1060 "pretty_printer.m"
      mercury__pretty_printer__write_doc_4_p_0(mercury__pretty_printer__V_8_8, mercury__pretty_printer__Doc_4);
#line 1060 "pretty_printer.m"
      return;
    }
#line 1059 "pretty_printer.m"
  }
#line 237 "pretty_printer.m"
}

#line 228 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__set_default_params_3_p_0(
#line 228 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Params_4)
#line 228 "pretty_printer.m"
{
#line 877 "pretty_printer.m"
  {
#line 877 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_params_3_p_0


		{
#line 877 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 15947 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_params_3_p_0

	MR_Word X;

	X =  mercury__pretty_printer__Params_4 ;
		{
#line 877 "pretty_printer.m"
mercury__pretty_printer__mutable_variable_io_pp_params = X;

#line 15964 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_params_3_p_0


		{
#line 877 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 15982 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
  }
#line 228 "pretty_printer.m"
}

#line 227 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__get_default_params_3_p_0(
#line 227 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Params_4)
#line 227 "pretty_printer.m"
{
#line 877 "pretty_printer.m"
  {
#line 877 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_params_3_p_0


		{
#line 877 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 16017 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_params_3_p_0

	MR_Word X;

		{
#line 877 "pretty_printer.m"
X = mercury__pretty_printer__mutable_variable_io_pp_params;

#line 16033 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__Params_4  = X;
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_params_3_p_0


		{
#line 877 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 16052 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 877 "pretty_printer.m"
}
#line 877 "pretty_printer.m"
  }
#line 227 "pretty_printer.m"
}

#line 220 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__set_default_formatter_6_p_0(
#line 220 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 220 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 220 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 220 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Formatter_10)
#line 220 "pretty_printer.m"
{
#line 1044 "pretty_printer.m"
  {
#line 1044 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1044 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_12;
#line 1044 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap_13;
#line 1044 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Okay_22;

#line 922 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_6_p_0

	MR_Word Okay;

		{
#line 922 "pretty_printer.m"

    Okay = ML_pretty_printer_is_initialised;

#line 16098 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__Okay_22  = Okay;
#line 922 "pretty_printer.m"
}
#line 1001 "pretty_printer.m"
#line 1001 "pretty_printer.m"
    switch (mercury__pretty_printer__Okay_22) {
#line 1001 "pretty_printer.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1001 "pretty_printer.m"
      case (MR_Integer) 0:
#line 998 "pretty_printer.m"
        {
#line 999 "pretty_printer.m"
          {
#line 999 "pretty_printer.m"
            mercury__pretty_printer__FMap0_12 = mercury__pretty_printer__initial_formatter_map_0_f_0();
          }
#line 1011 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_6_p_0

	MR_Word FMap;

	FMap =  mercury__pretty_printer__FMap0_12 ;
		{
#line 1011 "pretty_printer.m"

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;

#line 16132 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 1011 "pretty_printer.m"
}
#line 998 "pretty_printer.m"
        }
#line 1001 "pretty_printer.m"
        break;
#line 1001 "pretty_printer.m"
      case (MR_Integer) 1:
#line 961 "pretty_printer.m"
        {
#line 964 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_6_p_0

	MR_Word FMap;

		{
#line 964 "pretty_printer.m"

    FMap = ML_pretty_printer_default_formatter_map;

#line 16157 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__FMap0_12  = FMap;
#line 964 "pretty_printer.m"
}
#line 961 "pretty_printer.m"
        }
#line 1001 "pretty_printer.m"
        break;
#line 1001 "pretty_printer.m"
    }
#line 1046 "pretty_printer.m"
    {
#line 1046 "pretty_printer.m"
      mercury__pretty_printer__FMap_13 = mercury__pretty_printer__set_formatter_5_f_0(mercury__pretty_printer__ModuleName_7, mercury__pretty_printer__TypeName_8, mercury__pretty_printer__Arity_9, mercury__pretty_printer__Formatter_10, mercury__pretty_printer__FMap0_12);
    }
#line 1011 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_6_p_0

	MR_Word FMap;

	FMap =  mercury__pretty_printer__FMap_13 ;
		{
#line 1011 "pretty_printer.m"

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;

#line 16188 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 1011 "pretty_printer.m"
}
#line 1044 "pretty_printer.m"
  }
#line 220 "pretty_printer.m"
}

#line 219 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__set_default_formatter_map_3_p_0(
#line 219 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap_1)
#line 219 "pretty_printer.m"
{
#line 1008 "pretty_printer.m"
  {
#line 1008 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 1011 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_map_3_p_0

	MR_Word FMap;

	FMap =  mercury__pretty_printer__FMap_1 ;
		{
#line 1011 "pretty_printer.m"

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;

#line 16224 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 1011 "pretty_printer.m"
}
#line 1008 "pretty_printer.m"
  }
#line 219 "pretty_printer.m"
}

#line 218 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__get_default_formatter_map_3_p_0(
#line 218 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_4)
#line 218 "pretty_printer.m"
{
#line 995 "pretty_printer.m"
  {
#line 995 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 995 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Okay_6;

#line 922 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_formatter_map_3_p_0

	MR_Word Okay;

		{
#line 922 "pretty_printer.m"

    Okay = ML_pretty_printer_is_initialised;

#line 16260 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__Okay_6  = Okay;
#line 922 "pretty_printer.m"
}
#line 1001 "pretty_printer.m"
#line 1001 "pretty_printer.m"
    switch (mercury__pretty_printer__Okay_6) {
#line 1001 "pretty_printer.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1001 "pretty_printer.m"
      case (MR_Integer) 0:
#line 998 "pretty_printer.m"
        {
#line 999 "pretty_printer.m"
          {
#line 999 "pretty_printer.m"
            *mercury__pretty_printer__FMap_4 = mercury__pretty_printer__initial_formatter_map_0_f_0();
          }
#line 1011 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_formatter_map_3_p_0

	MR_Word FMap;

	FMap =  *mercury__pretty_printer__FMap_4 ;
		{
#line 1011 "pretty_printer.m"

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;

#line 16294 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 1011 "pretty_printer.m"
}
#line 998 "pretty_printer.m"
        }
#line 1001 "pretty_printer.m"
        break;
#line 1001 "pretty_printer.m"
      case (MR_Integer) 1:
#line 961 "pretty_printer.m"
        {
#line 964 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_formatter_map_3_p_0

	MR_Word FMap;

		{
#line 964 "pretty_printer.m"

    FMap = ML_pretty_printer_default_formatter_map;

#line 16319 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__FMap_4  = FMap;
#line 964 "pretty_printer.m"
}
#line 961 "pretty_printer.m"
        }
#line 1001 "pretty_printer.m"
        break;
#line 1001 "pretty_printer.m"
    }
#line 995 "pretty_printer.m"
  }
#line 218 "pretty_printer.m"
}

#line 194 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__write_doc_to_stream_9_p_1(
#line 194 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_32,
#line 194 "pretty_printer.m"
  MR_Box mercury__pretty_printer__Stream_10,
#line 194 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Canonicalize_11,
#line 194 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap_12,
#line 194 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__LineWidth_13,
#line 194 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__MaxLines_14,
#line 194 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Limit_15,
#line 194 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Doc_16,
#line 194 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_26,
#line 194 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_27)
#line 194 "pretty_printer.m"
{
#line 344 "pretty_printer.m"
  {
#line 344 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 344 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_33 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 344 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__Pri_18;
#line 344 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Indents_20;
#line 344 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_29_29;
#line 344 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_31_31;
#line 16376 "pretty_printer.c"
    MR_Box MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box);
#line 16378 "pretty_printer.c"
    MR_Box mercury__pretty_printer__conv1_Pri_18;
#line 348 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_21_21;
#line 348 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_22_22;
#line 348 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_23_23;
#line 348 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_24_24;
#line 348 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_25_25;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 16393 "pretty_printer.c"
    mercury__pretty_printer__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_op_table_33, (MR_Integer) 0)), (MR_Integer) 12)));
#line 16395 "pretty_printer.c"
    {
#line 16397 "pretty_printer.c"
      mercury__pretty_printer__conv1_Pri_18 = mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_op_table_33), ((MR_Box) ((MR_Integer) 0)));
    }
#line 16400 "pretty_printer.c"
    mercury__pretty_printer__Pri_18 = ((MR_Integer) mercury__pretty_printer__conv1_Pri_18);
#line 347 "pretty_printer.m"
    mercury__pretty_printer__Indents_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 348 "pretty_printer.m"
    mercury__pretty_printer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 348 "pretty_printer.m"
    {
#line 348 "pretty_printer.m"
      mercury__pretty_printer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 0) = ((MR_Box) (mercury__pretty_printer__Doc_16));
#line 348 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 1) = ((MR_Box) (mercury__pretty_printer__V_31_31));
#line 348 "pretty_printer.m"
    }
#line 348 "pretty_printer.m"
    {
#line 348 "pretty_printer.m"
      mercury__pretty_printer__write_doc_to_stream_17_p_1(mercury__pretty_printer__TypeClassInfo_for_writer_32, mercury__pretty_printer__Stream_10, mercury__pretty_printer__Canonicalize_11, mercury__pretty_printer__FMap_12, mercury__pretty_printer__LineWidth_13, mercury__pretty_printer__V_29_29, mercury__pretty_printer__LineWidth_13, &mercury__pretty_printer__V_21_21, mercury__pretty_printer__Indents_20, &mercury__pretty_printer__V_22_22, mercury__pretty_printer__MaxLines_14, &mercury__pretty_printer__V_23_23, mercury__pretty_printer__Limit_15, &mercury__pretty_printer__V_24_24, mercury__pretty_printer__Pri_18, &mercury__pretty_printer__V_25_25, mercury__pretty_printer__STATE_VARIABLE_IO_0_26, mercury__pretty_printer__STATE_VARIABLE_IO_27);
    }
#line 344 "pretty_printer.m"
  }
#line 194 "pretty_printer.m"
}

#line 192 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__write_doc_to_stream_9_p_0(
#line 192 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_32,
#line 192 "pretty_printer.m"
  MR_Box mercury__pretty_printer__Stream_10,
#line 192 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Canonicalize_11,
#line 192 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap_12,
#line 192 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__LineWidth_13,
#line 192 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__MaxLines_14,
#line 192 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Limit_15,
#line 192 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Doc_16,
#line 192 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_26,
#line 192 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_27)
#line 192 "pretty_printer.m"
{
#line 344 "pretty_printer.m"
  {
#line 344 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 344 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_33 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 344 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__Pri_18;
#line 344 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Indents_20;
#line 344 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_29_29;
#line 344 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_31_31;
#line 16465 "pretty_printer.c"
    MR_Box MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box);
#line 16467 "pretty_printer.c"
    MR_Box mercury__pretty_printer__conv1_Pri_18;
#line 348 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_21_21;
#line 348 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_22_22;
#line 348 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_23_23;
#line 348 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_24_24;
#line 348 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_25_25;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 16482 "pretty_printer.c"
    mercury__pretty_printer__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_op_table_33, (MR_Integer) 0)), (MR_Integer) 12)));
#line 16484 "pretty_printer.c"
    {
#line 16486 "pretty_printer.c"
      mercury__pretty_printer__conv1_Pri_18 = mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_op_table_33), ((MR_Box) ((MR_Integer) 0)));
    }
#line 16489 "pretty_printer.c"
    mercury__pretty_printer__Pri_18 = ((MR_Integer) mercury__pretty_printer__conv1_Pri_18);
#line 347 "pretty_printer.m"
    mercury__pretty_printer__Indents_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 348 "pretty_printer.m"
    mercury__pretty_printer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 348 "pretty_printer.m"
    {
#line 348 "pretty_printer.m"
      mercury__pretty_printer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 0) = ((MR_Box) (mercury__pretty_printer__Doc_16));
#line 348 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 1) = ((MR_Box) (mercury__pretty_printer__V_31_31));
#line 348 "pretty_printer.m"
    }
#line 348 "pretty_printer.m"
    {
#line 348 "pretty_printer.m"
      mercury__pretty_printer__write_doc_to_stream_17_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_32, mercury__pretty_printer__Stream_10, mercury__pretty_printer__Canonicalize_11, mercury__pretty_printer__FMap_12, mercury__pretty_printer__LineWidth_13, mercury__pretty_printer__V_29_29, mercury__pretty_printer__LineWidth_13, &mercury__pretty_printer__V_21_21, mercury__pretty_printer__Indents_20, &mercury__pretty_printer__V_22_22, mercury__pretty_printer__MaxLines_14, &mercury__pretty_printer__V_23_23, mercury__pretty_printer__Limit_15, &mercury__pretty_printer__V_24_24, mercury__pretty_printer__Pri_18, &mercury__pretty_printer__V_25_25, mercury__pretty_printer__STATE_VARIABLE_IO_0_26, mercury__pretty_printer__STATE_VARIABLE_IO_27);
    }
#line 344 "pretty_printer.m"
  }
#line 192 "pretty_printer.m"
}

#line 178 "pretty_printer.m"
MR_Word MR_CALL 
mercury__pretty_printer__set_formatter_5_f_0(
#line 178 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 178 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 178 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 178 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Formatter_10,
#line 178 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11)
#line 178 "pretty_printer.m"
{
#line 299 "pretty_printer.m"
  {
#line 299 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 299 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap_12;
#line 299 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_13;
#line 291 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 291 "pretty_printer.m"
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
#line 299 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 296 "pretty_printer.m"
      {
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_30;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_31;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_32;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_15;
#line 296 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_16;
#line 294 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_14;
#line 292 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 292 "pretty_printer.m"
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
#line 294 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 293 "pretty_printer.m"
          {
#line 293 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_27 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 293 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_60, mercury__pretty_printer__TypeInfo_27_27, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_10)), mercury__pretty_printer__FMap0_Arity_14, &mercury__pretty_printer__FMap_Arity_15);
            }
#line 293 "pretty_printer.m"
          }
#line 294 "pretty_printer.m"
        else
#line 295 "pretty_printer.m"
          {
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_29 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 295 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 119 "map.opt"
            {
#line 119 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_75, mercury__pretty_printer__TypeInfo_29_29, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_10)), mercury__pretty_printer__V_17_17, &mercury__pretty_printer__FMap_Arity_15);
            }
#line 295 "pretty_printer.m"
          }
#line 16632 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 16634 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_31 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_16 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_30, mercury__pretty_printer__TypeInfo_31_31, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_13, ((MR_Box) (mercury__pretty_printer__FMap_Arity_15)));
        }
#line 16641 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_32 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 298 "pretty_printer.m"
        {
#line 298 "pretty_printer.m"
          mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_30, mercury__pretty_printer__TypeInfo_32_32, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_16)));
        }
#line 296 "pretty_printer.m"
      }
#line 299 "pretty_printer.m"
    else
#line 300 "pretty_printer.m"
      {
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_35;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_36;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_37;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_19_19;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_20;
#line 300 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_21;

#line 300 "pretty_printer.m"
        {
#line 300 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_20 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_34, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_18_18, ((MR_Box) (mercury__pretty_printer__Formatter_10)));
        }
#line 16676 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 16678 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_36 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 48 "tree234.opt"
        mercury__pretty_printer__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 301 "pretty_printer.m"
        {
#line 301 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_21 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_35, mercury__pretty_printer__TypeInfo_36_36, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_19_19, ((MR_Box) (mercury__pretty_printer__FMap_Arity_20)));
        }
#line 16687 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_37 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 302 "pretty_printer.m"
        {
#line 302 "pretty_printer.m"
          mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_35, mercury__pretty_printer__TypeInfo_37_37, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_21)));
        }
#line 300 "pretty_printer.m"
      }
#line 299 "pretty_printer.m"
    return mercury__pretty_printer__FMap_12;
#line 299 "pretty_printer.m"
  }
#line 178 "pretty_printer.m"
}

#line 171 "pretty_printer.m"
MR_Word MR_CALL 
mercury__pretty_printer__new_formatter_map_0_f_0(void)
#line 171 "pretty_printer.m"
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
#line 171 "pretty_printer.m"
}

#line 136 "pretty_printer.m"
MR_Word MR_CALL 
mercury__pretty_printer__format_arg_1_f_0(
#line 136 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Doc_3)
#line 136 "pretty_printer.m"
{
#line 334 "pretty_printer.m"
  {
#line 334 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 334 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__2_2;
#line 334 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_11 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 334 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_4_4;
#line 334 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_5_5;
#line 334 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_6_6;
#line 334 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_7_7;
#line 334 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_9_9;
#line 334 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_10_10;
#line 16749 "pretty_printer.c"
    MR_Box MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box);
#line 16751 "pretty_printer.c"
    MR_Box mercury__pretty_printer__conv1_V_7_7;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 16756 "pretty_printer.c"
    mercury__pretty_printer__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_op_table_11, (MR_Integer) 0)), (MR_Integer) 13)));
#line 16758 "pretty_printer.c"
    {
#line 16760 "pretty_printer.c"
      mercury__pretty_printer__conv1_V_7_7 = mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_op_table_11), ((MR_Box) ((MR_Integer) 0)));
    }
#line 16763 "pretty_printer.c"
    mercury__pretty_printer__V_7_7 = ((MR_Integer) mercury__pretty_printer__conv1_V_7_7);
#line 337 "pretty_printer.m"
    {
#line 337 "pretty_printer.m"
      mercury__pretty_printer__V_6_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 337 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_6_6, 0) = ((MR_Box) (mercury__pretty_printer__V_7_7));
#line 337 "pretty_printer.m"
    }
#line 336 "pretty_printer.m"
    {
#line 336 "pretty_printer.m"
      mercury__pretty_printer__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "pretty_printer.m"
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 336 "pretty_printer.m"
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_5_5, 1) = ((MR_Box) (mercury__pretty_printer__V_6_6));
#line 336 "pretty_printer.m"
    }
#line 339 "pretty_printer.m"
    mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 339 "pretty_printer.m"
    {
#line 339 "pretty_printer.m"
      mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 0) = ((MR_Box) (mercury__pretty_printer__Doc_3));
#line 339 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 1) = ((MR_Box) (mercury__pretty_printer__V_10_10));
#line 339 "pretty_printer.m"
    }
#line 337 "pretty_printer.m"
    {
#line 337 "pretty_printer.m"
      mercury__pretty_printer__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_4, 0) = ((MR_Box) (mercury__pretty_printer__V_5_5));
#line 337 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_4, 1) = ((MR_Box) (mercury__pretty_printer__V_9_9));
#line 337 "pretty_printer.m"
    }
#line 335 "pretty_printer.m"
    {
#line 335 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 335 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, 0) = ((MR_Box) (mercury__pretty_printer__V_4_4));
#line 335 "pretty_printer.m"
    }
#line 334 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__2_2;
#line 334 "pretty_printer.m"
  }
#line 136 "pretty_printer.m"
}

#line 130 "pretty_printer.m"
MR_Word MR_CALL 
mercury__pretty_printer__format_1_f_0(
#line 130 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeInfo_for_T_5,
#line 130 "pretty_printer.m"
  MR_Box mercury__pretty_printer__X_3)
#line 130 "pretty_printer.m"
{
#line 330 "pretty_printer.m"
  {
#line 330 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 330 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__2_2;
#line 330 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_4_4;

#line 8 "univ.opt"
    {
#line 8 "univ.opt"
      mercury__univ__type_to_univ_2_p_1(mercury__pretty_printer__TypeInfo_for_T_5, mercury__pretty_printer__X_3, &mercury__pretty_printer__V_4_4);
    }
#line 330 "pretty_printer.m"
    {
#line 330 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "pretty_printer.m"
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 330 "pretty_printer.m"
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, 1) = ((MR_Box) (mercury__pretty_printer__V_4_4));
#line 330 "pretty_printer.m"
    }
#line 330 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__2_2;
#line 330 "pretty_printer.m"
  }
#line 130 "pretty_printer.m"
}

#line 125 "pretty_printer.m"
MR_Word MR_CALL 
mercury__pretty_printer__group_1_f_0(
#line 125 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Docs_3)
#line 125 "pretty_printer.m"
{
#line 325 "pretty_printer.m"
  {
#line 325 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 325 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__2_2;
#line 325 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_4_4;
#line 325 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[8]);
#line 325 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 325 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_7_7;
#line 325 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_8_8;
#line 325 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_9_9;
#line 325 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_10_10;
#line 325 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_11_11;
#line 325 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_12_12;

#line 326 "pretty_printer.m"
    {
#line 326 "pretty_printer.m"
      mercury__pretty_printer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 326 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_8_8, 0) = ((MR_Box) (mercury__pretty_printer__Docs_3));
#line 326 "pretty_printer.m"
    }
#line 326 "pretty_printer.m"
    mercury__pretty_printer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 326 "pretty_printer.m"
    mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[9]);
#line 326 "pretty_printer.m"
    mercury__pretty_printer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 326 "pretty_printer.m"
    mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[10]);
#line 326 "pretty_printer.m"
    {
#line 326 "pretty_printer.m"
      mercury__pretty_printer__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_7, 0) = ((MR_Box) (mercury__pretty_printer__V_8_8));
#line 326 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_7, 1) = ((MR_Box) (mercury__pretty_printer__V_9_9));
#line 326 "pretty_printer.m"
    }
#line 326 "pretty_printer.m"
    {
#line 326 "pretty_printer.m"
      mercury__pretty_printer__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_4, 0) = ((MR_Box) (mercury__pretty_printer__V_5_5));
#line 326 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_4, 1) = ((MR_Box) (mercury__pretty_printer__V_7_7));
#line 326 "pretty_printer.m"
    }
#line 326 "pretty_printer.m"
    {
#line 326 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 326 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, 0) = ((MR_Box) (mercury__pretty_printer__V_4_4));
#line 326 "pretty_printer.m"
    }
#line 325 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__2_2;
#line 325 "pretty_printer.m"
  }
#line 125 "pretty_printer.m"
}

#line 116 "pretty_printer.m"
MR_Word MR_CALL 
mercury__pretty_printer__indent_1_f_0(
#line 116 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Docs_3)
#line 116 "pretty_printer.m"
{
#line 320 "pretty_printer.m"
  {
#line 320 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 320 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__2_2;
#line 320 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_7_7;
#line 320 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[7]);
#line 320 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[0]);
#line 320 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_10_10;
#line 320 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_11_11;
#line 320 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_12_12;
#line 320 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_13_13;
#line 320 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_14_14;
#line 320 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_15_15;

#line 316 "pretty_printer.m"
    {
#line 316 "pretty_printer.m"
      mercury__pretty_printer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 316 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_11_11, 0) = ((MR_Box) (mercury__pretty_printer__Docs_3));
#line 316 "pretty_printer.m"
    }
#line 316 "pretty_printer.m"
    mercury__pretty_printer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 316 "pretty_printer.m"
    mercury__pretty_printer__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[5]);
#line 316 "pretty_printer.m"
    mercury__pretty_printer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 316 "pretty_printer.m"
    mercury__pretty_printer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[6]);
#line 316 "pretty_printer.m"
    {
#line 316 "pretty_printer.m"
      mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_10_10, 0) = ((MR_Box) (mercury__pretty_printer__V_11_11));
#line 316 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_10_10, 1) = ((MR_Box) (mercury__pretty_printer__V_12_12));
#line 316 "pretty_printer.m"
    }
#line 316 "pretty_printer.m"
    {
#line 316 "pretty_printer.m"
      mercury__pretty_printer__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_7, 0) = ((MR_Box) (mercury__pretty_printer__V_8_8));
#line 316 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_7, 1) = ((MR_Box) (mercury__pretty_printer__V_10_10));
#line 316 "pretty_printer.m"
    }
#line 316 "pretty_printer.m"
    {
#line 316 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 316 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, 0) = ((MR_Box) (mercury__pretty_printer__V_7_7));
#line 316 "pretty_printer.m"
    }
#line 320 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__2_2;
#line 320 "pretty_printer.m"
  }
#line 116 "pretty_printer.m"
}

#line 111 "pretty_printer.m"
MR_Word MR_CALL 
mercury__pretty_printer__indent_2_f_0(
#line 111 "pretty_printer.m"
  MR_String mercury__pretty_printer__Indent_4,
#line 111 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Docs_5)
#line 111 "pretty_printer.m"
{
#line 315 "pretty_printer.m"
  {
#line 315 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 315 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 315 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_6_6;
#line 315 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_7_7;
#line 315 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_8_8;
#line 315 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_9_9;
#line 315 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_10_10;
#line 315 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_11_11;
#line 315 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_12_12;
#line 315 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_13_13;
#line 315 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_14_14;

#line 316 "pretty_printer.m"
    {
#line 316 "pretty_printer.m"
      mercury__pretty_printer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 316 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_8_8, 0) = ((MR_Box) (mercury__pretty_printer__Indent_4));
#line 316 "pretty_printer.m"
    }
#line 316 "pretty_printer.m"
    {
#line 316 "pretty_printer.m"
      mercury__pretty_printer__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "pretty_printer.m"
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 316 "pretty_printer.m"
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_7_7, 1) = ((MR_Box) (mercury__pretty_printer__V_8_8));
#line 316 "pretty_printer.m"
    }
#line 316 "pretty_printer.m"
    {
#line 316 "pretty_printer.m"
      mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 316 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_10_10, 0) = ((MR_Box) (mercury__pretty_printer__Docs_5));
#line 316 "pretty_printer.m"
    }
#line 316 "pretty_printer.m"
    mercury__pretty_printer__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 316 "pretty_printer.m"
    mercury__pretty_printer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[5]);
#line 316 "pretty_printer.m"
    mercury__pretty_printer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 316 "pretty_printer.m"
    mercury__pretty_printer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[6]);
#line 316 "pretty_printer.m"
    {
#line 316 "pretty_printer.m"
      mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 0) = ((MR_Box) (mercury__pretty_printer__V_10_10));
#line 316 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 1) = ((MR_Box) (mercury__pretty_printer__V_11_11));
#line 316 "pretty_printer.m"
    }
#line 316 "pretty_printer.m"
    {
#line 316 "pretty_printer.m"
      mercury__pretty_printer__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_6_6, 0) = ((MR_Box) (mercury__pretty_printer__V_7_7));
#line 316 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_6_6, 1) = ((MR_Box) (mercury__pretty_printer__V_9_9));
#line 316 "pretty_printer.m"
    }
#line 316 "pretty_printer.m"
    {
#line 316 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 316 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_6_6));
#line 316 "pretty_printer.m"
    }
#line 315 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 315 "pretty_printer.m"
  }
#line 111 "pretty_printer.m"
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
