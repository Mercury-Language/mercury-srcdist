/*
** Automatically generated from `pretty_printer.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 1117 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_f_0(
#line 1117 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4);

#line 1110 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_f_0(
#line 1110 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4);

#line 1103 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0(
#line 1103 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4);

#line 1096 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_f_0(
#line 1096 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4);

#line 127 "list.int"
static void MR_CALL 
mercury__pretty_printer__foldl__ho20_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 127 "list.int"
  MR_Integer mercury__pretty_printer__HeadVar__3_3,
#line 127 "list.int"
  MR_Integer * mercury__pretty_printer__HeadVar__4_4);

#line 127 "list.int"
static void MR_CALL 
mercury__pretty_printer__foldl__ho19_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 127 "list.int"
  MR_Integer mercury__pretty_printer__HeadVar__3_3,
#line 127 "list.int"
  MR_Integer * mercury__pretty_printer__HeadVar__4_4);

#line 126 "list.int"
static MR_Integer MR_CALL 
mercury__pretty_printer__foldl__ho15_3_f_in__list_0(
#line 126 "list.int"
  MR_Word mercury__pretty_printer__V_6_6,
#line 126 "list.int"
  MR_Integer mercury__pretty_printer__V_7_7);

#line 126 "list.int"
static MR_Integer MR_CALL 
mercury__pretty_printer__foldl__ho14_3_f_in__list_0(
#line 126 "list.int"
  MR_Word mercury__pretty_printer__V_6_6,
#line 126 "list.int"
  MR_Integer mercury__pretty_printer__V_7_7);

#line 499 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho9_6_p_0_1(
#line 502 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 504 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 506 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2);

#line 1088 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho9_6_p_0(
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1088 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1088 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1088 "pretty_printer.m"
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

#line 1088 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho8_6_p_0(
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1088 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1088 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1088 "pretty_printer.m"
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

#line 1088 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho7_6_p_0(
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1088 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1088 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1088 "pretty_printer.m"
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

#line 1088 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho6_6_p_0(
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1088 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1088 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1088 "pretty_printer.m"
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

#line 1088 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho5_6_p_0(
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1088 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1088 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1088 "pretty_printer.m"
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

#line 1088 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho4_6_p_0(
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1088 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1088 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1088 "pretty_printer.m"
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

#line 1088 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho3_6_p_0(
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1088 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1088 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1088 "pretty_printer.m"
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

#line 1088 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho2_6_p_0(
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1088 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1088 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1088 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12);

#line 389 "pretty_printer.m"
static MR_Integer MR_CALL 
mercury__pretty_printer__IntroducedFrom__func__write_doc_to_stream__389__2_2_f_0(
#line 389 "pretty_printer.m"
  MR_String mercury__pretty_printer__HeadVar__1_109,
#line 389 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__2_110);

#line 389 "pretty_printer.m"
static MR_Integer MR_CALL 
mercury__pretty_printer__IntroducedFrom__func__write_doc_to_stream__389__1_2_f_0(
#line 389 "pretty_printer.m"
  MR_String mercury__pretty_printer__HeadVar__1_109,
#line 389 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__2_110);

#line 1172 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_tree234_2_f_0(
#line 1172 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1172 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5);

#line 1156 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_list_2_f_0(
#line 1156 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1156 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5);

#line 1140 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_version_array_2_f_0(
#line 1140 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1140 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5);

#line 1124 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_array_2_f_0(
#line 1124 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1124 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5);

#line 1117 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_string_2_f_0(
#line 1117 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1117 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5);

#line 1110 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_int_2_f_0(
#line 1110 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1110 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5);

#line 1103 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_float_2_f_0(
#line 1103 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1103 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5);

#line 1096 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_char_2_f_0(
#line 1096 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1096 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5);

#line 873 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0(void);

#line 873 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__pre_initialise_mutable_io_pp_params_0_p_0(void);

#line 857 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__decrement_limit_2_p_0(
#line 857 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 857 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__2_2);

#line 837 "pretty_printer.m"
static MR_Integer MR_CALL 
mercury__pretty_printer__adjust_priority_2_f_0(
#line 837 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Priority_4,
#line 837 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Assoc_5);

#line 826 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__add_parens_if_needed_3_f_0(
#line 826 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__OpPriority_5,
#line 826 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__EnclosingPriority_6,
#line 826 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Doc_7);

#line 815 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__set_formatting_limit_correctly_2_f_0(
#line 815 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 815 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2);

#line 749 "pretty_printer.m"
static MR_bool MR_CALL 
mercury__pretty_printer__expand_format_op_4_p_0(
#line 749 "pretty_printer.m"
  MR_String mercury__pretty_printer__Op_1,
#line 749 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 749 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_3,
#line 749 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Docs_4);

#line 733 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_format_susp_4_p_0(
#line 733 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Susp_5,
#line 733 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_6,
#line 733 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_8,
#line 733 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_9);

#line 707 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_format_term_6_p_0(
#line 707 "pretty_printer.m"
  MR_String mercury__pretty_printer__Name_7,
#line 707 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Args_8,
#line 707 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_9,
#line 707 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_14,
#line 707 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_15,
#line 707 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_11);

#line 681 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_format_list_5_p_0(
#line 681 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 681 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 681 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__3_3,
#line 681 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_4,
#line 681 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_5);

#line 653 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_pp_7_p_1(
#line 653 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Canonicalize_8,
#line 653 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap_9,
#line 653 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_10,
#line 653 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_11,
#line 653 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_24,
#line 653 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_25,
#line 653 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_13);

#line 651 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_pp_7_p_0(
#line 651 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Canonicalize_8,
#line 651 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap_9,
#line 651 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_10,
#line 651 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_11,
#line 651 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_24,
#line 651 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_25,
#line 651 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_13);

#line 634 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__output_indentation_6_p_0(
#line 634 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_28,
#line 634 "pretty_printer.m"
  MR_Box mercury__pretty_printer__HeadVar__1_1,
#line 634 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 634 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_3,
#line 634 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_4,
#line 634 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_5,
#line 634 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_6);

#line 625 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__format_nl_8_p_0(
#line 625 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_24,
#line 625 "pretty_printer.m"
  MR_Box mercury__pretty_printer__Stream_9,
#line 625 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__LineWidth_10,
#line 625 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Indents_11,
#line 625 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__RemainingWidth_12,
#line 625 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_15,
#line 625 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_16,
#line 625 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_17,
#line 625 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_18);

#line 526 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_docs_11_p_1(
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

#line 524 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_docs_11_p_0(
#line 524 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 524 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 524 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 524 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__4_4,
#line 524 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__5_5,
#line 524 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_6,
#line 524 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_7,
#line 524 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_8,
#line 524 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_9,
#line 524 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10,
#line 524 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);

#line 472 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__output_current_group_12_p_0(
#line 472 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_71,
#line 472 "pretty_printer.m"
  MR_Box mercury__pretty_printer__HeadVar__1_1,
#line 472 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__2_2,
#line 472 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 472 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__4_4,
#line 472 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__5_5,
#line 472 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__6_6,
#line 472 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7,
#line 472 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_8,
#line 472 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9,
#line 472 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_10,
#line 472 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_11,
#line 472 "pretty_printer.m"
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
#line 890 "pretty_printer.m"

    MR_Bool ML_pretty_printer_is_initialised = MR_NO;
    MR_Word ML_pretty_printer_default_formatter_map = 0;

#line 873 "pretty_printer.m"
MR_Word mercury__pretty_printer__mutable_variable_io_pp_params;
#ifdef MR_THREAD_SAFE
    MercuryLock mercury__pretty_printer__mutable_variable_io_pp_params_lock;
#endif

#line 873 "pretty_printer.m"
void 
mercury__pretty_printer__user_init_pred_0(void)
#line 873 "pretty_printer.m"
{
#line 873 "pretty_printer.m"
	mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0();
}


#line 1373 "pretty_printer.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__pretty_printer__list__pti_list_1__plain_type_desc__type_ctor_info_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0
  }
};

#line 1381 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1386 "pretty_printer.c"
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

#line 1401 "pretty_printer.c"
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

#line 1416 "pretty_printer.c"
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

#line 1431 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1pretty_printer__type_ctor_info_doc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0
  }
};

#line 1439 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer__list__ti_list_1pretty_printer__type_ctor_info_doc_0
};

#line 1444 "pretty_printer.c"
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

#line 1459 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

#line 1464 "pretty_printer.c"
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

#line 1479 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

#line 1487 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_5[2] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer__list__ti_list_1univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0
};

#line 1493 "pretty_printer.c"
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

#line 1508 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_6[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__pretty_printer__list__ti_list_1univ__type_ctor_info_univ_0
};

#line 1514 "pretty_printer.c"
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

#line 1529 "pretty_printer.c"
static const MR_VA_TypeInfo_Struct1 mercury__pretty_printer____vti_func_1pretty_printer__type_ctor_info_doc_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 1,
  {
    (MR_TypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0
  }
};

#line 1538 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer____vti_func_1pretty_printer__type_ctor_info_doc_0
};

#line 1543 "pretty_printer.c"
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

#line 1558 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_doc_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_pp_internal_0
};

#line 1563 "pretty_printer.c"
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

#line 1578 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_0[2] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_1,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_2
};

#line 1584 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_1[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_0
};

#line 1589 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_2[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_3
};

#line 1594 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_doc_0_3[5] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_4,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_5,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_6,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_7,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_doc_0_8
};

#line 1603 "pretty_printer.c"
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

#line 1627 "pretty_printer.c"
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

#line 1640 "pretty_printer.c"
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

#line 1653 "pretty_printer.c"
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

#line 1670 "pretty_printer.c"
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

#line 1687 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1type_desc__type_ctor_info_type_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0
  }
};

#line 1695 "pretty_printer.c"
static const MR_VA_TypeInfo_Struct3 mercury__pretty_printer____vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0,
    (MR_TypeInfo) &mercury__pretty_printer__list__ti_list_1type_desc__type_ctor_info_type_desc_0,
    (MR_TypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0
  }
};

#line 1706 "pretty_printer.c"
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

#line 1723 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__pretty_printer____vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0
  }
};

#line 1732 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0
  }
};

#line 1741 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct2 mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__pretty_printer__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0__vti_func_3univ__type_ctor_info_univ_0list__ti_list_1type_desc__type_ctor_info_type_desc_0pretty_printer__type_ctor_info_doc_0
  }
};

#line 1750 "pretty_printer.c"
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

#line 1767 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_formatting_limit_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1772 "pretty_printer.c"
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

#line 1787 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_formatting_limit_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1792 "pretty_printer.c"
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

#line 1807 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_formatting_limit_0_0[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_formatting_limit_0_0
};

#line 1812 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_formatting_limit_0_1[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_formatting_limit_0_1
};

#line 1817 "pretty_printer.c"
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

#line 1831 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_formatting_limit_0[2] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_formatting_limit_0_0,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_formatting_limit_0_1
};

#line 1837 "pretty_printer.c"
static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_formatting_limit_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1843 "pretty_printer.c"
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

#line 1860 "pretty_printer.c"
static const MR_FA_TypeInfo_Struct1 mercury__pretty_printer__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1868 "pretty_printer.c"
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

#line 1885 "pretty_printer.c"
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

#line 1900 "pretty_printer.c"
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

#line 1915 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1920 "pretty_printer.c"
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

#line 1935 "pretty_printer.c"
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

#line 1950 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1955 "pretty_printer.c"
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

#line 1970 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_internal_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_formatting_limit_0
};

#line 1975 "pretty_printer.c"
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

#line 1990 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_0[3] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_0,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_1,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_3
};

#line 1997 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_1[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_2
};

#line 2002 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_2[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_4
};

#line 2007 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_internal_0_3[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_5
};

#line 2012 "pretty_printer.c"
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

#line 2036 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_pp_internal_0[6] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_1,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_2,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_0,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_3,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_5,
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_internal_0_4
};

#line 2046 "pretty_printer.c"
static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_pp_internal_0[6] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 4
};

#line 2056 "pretty_printer.c"
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

#line 2073 "pretty_printer.c"
static const MR_PseudoTypeInfo mercury__pretty_printer__pretty_printer__field_types_pp_params_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__pretty_printer__pretty_printer__type_ctor_info_formatting_limit_0
};

#line 2080 "pretty_printer.c"
static const MR_ConstString mercury__pretty_printer__pretty_printer__field_names_pp_params_0_0[3] = {
  (MR_String) "pp_line_width",
  (MR_String) "pp_max_lines",
  (MR_String) "pp_limit"
};

#line 2087 "pretty_printer.c"
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

#line 2102 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_params_0_0[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_params_0_0
};

#line 2107 "pretty_printer.c"
static const MR_DuPtagLayout mercury__pretty_printer__pretty_printer__du_ptag_ordered_pp_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pretty_printer__pretty_printer__du_stag_ordered_pp_params_0_0
  }
};

#line 2116 "pretty_printer.c"
static const MR_DuFunctorDescPtr mercury__pretty_printer__pretty_printer__du_name_ordered_pp_params_0[1] = {
  &mercury__pretty_printer__pretty_printer__du_functor_desc_pp_params_0_0
};

#line 2121 "pretty_printer.c"
static const MR_Integer mercury__pretty_printer__pretty_printer__functor_number_map_pp_params_0[1] = {
  (MR_Integer) 0
};

#line 2126 "pretty_printer.c"
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

#line 2143 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____doc_0_0_10001(
#line 2146 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2148 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2150 "pretty_printer.c"
{
#line 2152 "pretty_printer.c"
  {
#line 2154 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2157 "pretty_printer.c"
    {
#line 2159 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____doc_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2162 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2164 "pretty_printer.c"
  }
#line 2166 "pretty_printer.c"
}

#line 2169 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____doc_0_0_10001(
#line 2172 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2174 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2176 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2178 "pretty_printer.c"
{
#line 2180 "pretty_printer.c"
  {
#line 2182 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2185 "pretty_printer.c"
    {
#line 2187 "pretty_printer.c"
      mercury__pretty_printer____Compare____doc_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2190 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2192 "pretty_printer.c"
  }
#line 2194 "pretty_printer.c"
}

#line 2197 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____docs_0_0_10001(
#line 2200 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2202 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2204 "pretty_printer.c"
{
#line 2206 "pretty_printer.c"
  {
#line 2208 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2211 "pretty_printer.c"
    {
#line 2213 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____docs_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2216 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2218 "pretty_printer.c"
  }
#line 2220 "pretty_printer.c"
}

#line 2223 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____docs_0_0_10001(
#line 2226 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2228 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2230 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2232 "pretty_printer.c"
{
#line 2234 "pretty_printer.c"
  {
#line 2236 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2239 "pretty_printer.c"
    {
#line 2241 "pretty_printer.c"
      mercury__pretty_printer____Compare____docs_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2244 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2246 "pretty_printer.c"
  }
#line 2248 "pretty_printer.c"
}

#line 2251 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_0_0_10001(
#line 2254 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2256 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2258 "pretty_printer.c"
{
#line 2260 "pretty_printer.c"
  {
#line 2262 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2265 "pretty_printer.c"
    {
#line 2267 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____formatter_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2270 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2272 "pretty_printer.c"
  }
#line 2274 "pretty_printer.c"
}

#line 2277 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____formatter_0_0_10001(
#line 2280 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2282 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2284 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2286 "pretty_printer.c"
{
#line 2288 "pretty_printer.c"
  {
#line 2290 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2293 "pretty_printer.c"
    {
#line 2295 "pretty_printer.c"
      mercury__pretty_printer____Compare____formatter_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2298 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2300 "pretty_printer.c"
  }
#line 2302 "pretty_printer.c"
}

#line 2305 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_map_0_0_10001(
#line 2308 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2310 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2312 "pretty_printer.c"
{
#line 2314 "pretty_printer.c"
  {
#line 2316 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2319 "pretty_printer.c"
    {
#line 2321 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____formatter_map_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2324 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2326 "pretty_printer.c"
  }
#line 2328 "pretty_printer.c"
}

#line 2331 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____formatter_map_0_0_10001(
#line 2334 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2336 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2338 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2340 "pretty_printer.c"
{
#line 2342 "pretty_printer.c"
  {
#line 2344 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2347 "pretty_printer.c"
    {
#line 2349 "pretty_printer.c"
      mercury__pretty_printer____Compare____formatter_map_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2352 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2354 "pretty_printer.c"
  }
#line 2356 "pretty_printer.c"
}

#line 2359 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatting_limit_0_0_10001(
#line 2362 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2364 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2366 "pretty_printer.c"
{
#line 2368 "pretty_printer.c"
  {
#line 2370 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2373 "pretty_printer.c"
    {
#line 2375 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____formatting_limit_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2378 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2380 "pretty_printer.c"
  }
#line 2382 "pretty_printer.c"
}

#line 2385 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____formatting_limit_0_0_10001(
#line 2388 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2390 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2392 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2394 "pretty_printer.c"
{
#line 2396 "pretty_printer.c"
  {
#line 2398 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2401 "pretty_printer.c"
    {
#line 2403 "pretty_printer.c"
      mercury__pretty_printer____Compare____formatting_limit_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2406 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2408 "pretty_printer.c"
  }
#line 2410 "pretty_printer.c"
}

#line 2413 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____indents_0_0_10001(
#line 2416 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2418 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2420 "pretty_printer.c"
{
#line 2422 "pretty_printer.c"
  {
#line 2424 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2427 "pretty_printer.c"
    {
#line 2429 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____indents_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2432 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2434 "pretty_printer.c"
  }
#line 2436 "pretty_printer.c"
}

#line 2439 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____indents_0_0_10001(
#line 2442 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2444 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2446 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2448 "pretty_printer.c"
{
#line 2450 "pretty_printer.c"
  {
#line 2452 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2455 "pretty_printer.c"
    {
#line 2457 "pretty_printer.c"
      mercury__pretty_printer____Compare____indents_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2460 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2462 "pretty_printer.c"
  }
#line 2464 "pretty_printer.c"
}

#line 2467 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_internal_0_0_10001(
#line 2470 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2472 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2474 "pretty_printer.c"
{
#line 2476 "pretty_printer.c"
  {
#line 2478 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2481 "pretty_printer.c"
    {
#line 2483 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____pp_internal_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2486 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2488 "pretty_printer.c"
  }
#line 2490 "pretty_printer.c"
}

#line 2493 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____pp_internal_0_0_10001(
#line 2496 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2498 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2500 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2502 "pretty_printer.c"
{
#line 2504 "pretty_printer.c"
  {
#line 2506 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2509 "pretty_printer.c"
    {
#line 2511 "pretty_printer.c"
      mercury__pretty_printer____Compare____pp_internal_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2514 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2516 "pretty_printer.c"
  }
#line 2518 "pretty_printer.c"
}

#line 2521 "pretty_printer.c"
static MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_params_0_0_10001(
#line 2524 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 2526 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 2528 "pretty_printer.c"
{
#line 2530 "pretty_printer.c"
  {
#line 2532 "pretty_printer.c"
    MR_bool mercury__pretty_printer__succeeded;

#line 2535 "pretty_printer.c"
    {
#line 2537 "pretty_printer.c"
      mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____pp_params_0_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 2540 "pretty_printer.c"
    return mercury__pretty_printer__succeeded;
#line 2542 "pretty_printer.c"
  }
#line 2544 "pretty_printer.c"
}

#line 2547 "pretty_printer.c"
static void MR_CALL 
mercury__pretty_printer____Compare____pp_params_0_0_10001(
#line 2550 "pretty_printer.c"
  MR_Box * mercury__pretty_printer__wrapper_arg_1,
#line 2552 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2,
#line 2554 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_3)
#line 2556 "pretty_printer.c"
{
#line 2558 "pretty_printer.c"
  {
#line 2560 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__1_1;

#line 2563 "pretty_printer.c"
    {
#line 2565 "pretty_printer.c"
      mercury__pretty_printer____Compare____pp_params_0_0(&mercury__pretty_printer__conv0_HeadVar__1_1, ((MR_Word) mercury__pretty_printer__wrapper_arg_2), ((MR_Word) mercury__pretty_printer__wrapper_arg_3));
    }
#line 2568 "pretty_printer.c"
    *mercury__pretty_printer__wrapper_arg_1 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__1_1));
#line 2570 "pretty_printer.c"
  }
#line 2572 "pretty_printer.c"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__pretty_printer__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 1117 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_f_0(
#line 1117 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4)
#line 1117 "pretty_printer.m"
{
#line 1119 "pretty_printer.m"
  {
#line 1119 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1119 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1119 "pretty_printer.m"
    MR_String mercury__pretty_printer__X_6;
#line 1120 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 13 "univ.opt"
    MR_Box mercury__pretty_printer__conv0_X_6;

#line 13 "univ.opt"
    {
#line 13 "univ.opt"
      mercury__pretty_printer__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__pretty_printer__TypeCtorInfo_8_8, &mercury__pretty_printer__conv0_X_6, mercury__pretty_printer__Univ_4);
    }
#line 13 "univ.opt"
    if (mercury__pretty_printer__succeeded)
#line 13 "univ.opt"
      {
#line 13 "univ.opt"
        mercury__pretty_printer__X_6 = ((MR_String) mercury__pretty_printer__conv0_X_6);
#line 13 "univ.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 13 "univ.opt"
      }
#line 1119 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 895 "string.opt"
      {
#line 895 "string.opt"
        MR_Word mercury__pretty_printer__V_4_12;
#line 895 "string.opt"
        MR_Word mercury__pretty_printer__V_7_14;
#line 895 "string.opt"
        MR_Word mercury__pretty_printer__V_8_16;
#line 895 "string.opt"
        MR_Word mercury__pretty_printer__V_9_17;
#line 895 "string.opt"
        MR_Word mercury__pretty_printer__V_10_18 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[17]);
#line 895 "string.opt"
        MR_Word mercury__pretty_printer__V_12_19;

#line 900 "string.opt"
        {
#line 900 "string.opt"
          mercury__pretty_printer__V_8_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 900 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_8_16, 0) = ((MR_Box) (mercury__pretty_printer__X_6));
#line 900 "string.opt"
        }
#line 904 "string.opt"
        mercury__pretty_printer__V_12_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 901 "string.opt"
        mercury__pretty_printer__V_9_17 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[14]);
#line 899 "string.opt"
        {
#line 899 "string.opt"
          mercury__pretty_printer__V_7_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 899 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_14, 0) = ((MR_Box) (mercury__pretty_printer__V_8_16));
#line 899 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_14, 1) = ((MR_Box) (mercury__pretty_printer__V_9_17));
#line 899 "string.opt"
        }
#line 896 "string.opt"
        {
#line 896 "string.opt"
          mercury__pretty_printer__V_4_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_12, 0) = ((MR_Box) (mercury__pretty_printer__V_10_18));
#line 896 "string.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_12, 1) = ((MR_Box) (mercury__pretty_printer__V_7_14));
#line 896 "string.opt"
        }
#line 895 "string.opt"
        {
#line 895 "string.opt"
          mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 895 "string.opt"
          MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_4_12));
#line 895 "string.opt"
        }
#line 895 "string.opt"
      }
#line 1119 "pretty_printer.m"
    else
#line 1120 "pretty_printer.m"
      {
#line 1120 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[18]);
#line 1120 "pretty_printer.m"
      }
#line 1119 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1119 "pretty_printer.m"
  }
#line 1117 "pretty_printer.m"
}

#line 1110 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_f_0(
#line 1110 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4)
#line 1110 "pretty_printer.m"
{
#line 1112 "pretty_printer.m"
  {
#line 1112 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1112 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1112 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__X_6;
#line 1113 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 13 "univ.opt"
    MR_Box mercury__pretty_printer__conv0_X_6;

#line 13 "univ.opt"
    {
#line 13 "univ.opt"
      mercury__pretty_printer__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__pretty_printer__TypeCtorInfo_8_8, &mercury__pretty_printer__conv0_X_6, mercury__pretty_printer__Univ_4);
    }
#line 13 "univ.opt"
    if (mercury__pretty_printer__succeeded)
#line 13 "univ.opt"
      {
#line 13 "univ.opt"
        mercury__pretty_printer__X_6 = ((MR_Integer) mercury__pretty_printer__conv0_X_6);
#line 13 "univ.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 13 "univ.opt"
      }
#line 1112 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 201 "int.opt"
      {
#line 201 "int.opt"
        MR_String mercury__pretty_printer__V_4_12;

#line 552 "string.opt"
        {
#line 552 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__pretty_printer__X_6, (MR_Integer) 10, &mercury__pretty_printer__V_4_12);
        }
#line 201 "int.opt"
        {
#line 201 "int.opt"
          mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 201 "int.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_4_12));
#line 201 "int.opt"
        }
#line 201 "int.opt"
      }
#line 1112 "pretty_printer.m"
    else
#line 1113 "pretty_printer.m"
      {
#line 1113 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[16]);
#line 1113 "pretty_printer.m"
      }
#line 1112 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1112 "pretty_printer.m"
  }
#line 1110 "pretty_printer.m"
}

#line 1103 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0(
#line 1103 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4)
#line 1103 "pretty_printer.m"
{
#line 1105 "pretty_printer.m"
  {
#line 1105 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1105 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1105 "pretty_printer.m"
    MR_Float mercury__pretty_printer__X_6;
#line 1106 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 13 "univ.opt"
    MR_Box mercury__pretty_printer__conv0_X_6;

#line 13 "univ.opt"
    {
#line 13 "univ.opt"
      mercury__pretty_printer__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__pretty_printer__TypeCtorInfo_8_8, &mercury__pretty_printer__conv0_X_6, mercury__pretty_printer__Univ_4);
    }
#line 13 "univ.opt"
    if (mercury__pretty_printer__succeeded)
#line 13 "univ.opt"
      {
#line 13 "univ.opt"
        mercury__pretty_printer__X_6 = MR_unbox_float(mercury__pretty_printer__conv0_X_6);
#line 13 "univ.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 13 "univ.opt"
      }
#line 1105 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 101 "float.opt"
      {
#line 101 "float.opt"
        MR_String mercury__pretty_printer__V_4_12;

#line 335 "string.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__pretty_printer__X_6 ;
		{
#line 335 "string.opt"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 2832 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_4_12  = Str;
#line 335 "string.opt"
}
#line 101 "float.opt"
        {
#line 101 "float.opt"
          mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 101 "float.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_4_12));
#line 101 "float.opt"
        }
#line 101 "float.opt"
      }
#line 1105 "pretty_printer.m"
    else
#line 1106 "pretty_printer.m"
      {
#line 1106 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[15]);
#line 1106 "pretty_printer.m"
      }
#line 1105 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1105 "pretty_printer.m"
  }
#line 1103 "pretty_printer.m"
}

#line 1096 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_f_0(
#line 1096 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4)
#line 1096 "pretty_printer.m"
{
#line 1098 "pretty_printer.m"
  {
#line 1098 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1098 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1098 "pretty_printer.m"
    MR_Char mercury__pretty_printer__X_6;
#line 1099 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 13 "univ.opt"
    MR_Box mercury__pretty_printer__conv0_X_6;

#line 13 "univ.opt"
    {
#line 13 "univ.opt"
      mercury__pretty_printer__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__pretty_printer__TypeCtorInfo_8_8, &mercury__pretty_printer__conv0_X_6, mercury__pretty_printer__Univ_4);
    }
#line 13 "univ.opt"
    if (mercury__pretty_printer__succeeded)
#line 13 "univ.opt"
      {
#line 13 "univ.opt"
        mercury__pretty_printer__X_6 = ((MR_Char) (MR_Word) mercury__pretty_printer__conv0_X_6);
#line 13 "univ.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 13 "univ.opt"
      }
#line 1098 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 31 "char.opt"
      {
#line 31 "char.opt"
        MR_String mercury__pretty_printer__V_4_12;

#line 32 "char.opt"
        {
#line 32 "char.opt"
          mercury__pretty_printer__V_4_12 = mercury__term_io__quoted_char_1_f_0(mercury__pretty_printer__X_6);
        }
#line 31 "char.opt"
        {
#line 31 "char.opt"
          mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 31 "char.opt"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_4_12));
#line 31 "char.opt"
        }
#line 31 "char.opt"
      }
#line 1098 "pretty_printer.m"
    else
#line 1099 "pretty_printer.m"
      {
#line 1099 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[14]);
#line 1099 "pretty_printer.m"
      }
#line 1098 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1098 "pretty_printer.m"
  }
#line 1096 "pretty_printer.m"
}

#line 127 "list.int"
static void MR_CALL 
mercury__pretty_printer__foldl__ho20_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 127 "list.int"
  MR_Integer mercury__pretty_printer__HeadVar__3_3,
#line 127 "list.int"
  MR_Integer * mercury__pretty_printer__HeadVar__4_4)
#line 127 "list.int"
{
#line 391 "list.opt"
  while (MR_TRUE)
#line 391 "list.opt"
    {
#line 391 "list.opt"
      /* tailcall optimized into a loop */
#line 391 "list.opt"
      {
#line 391 "list.opt"
        MR_bool mercury__pretty_printer__succeeded;

#line 391 "list.opt"
        if ((mercury__pretty_printer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "list.opt"
          *mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__3_3;
#line 391 "list.opt"
        else
#line 393 "list.opt"
          {
#line 393 "list.opt"
            MR_String mercury__pretty_printer__V_10_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 393 "list.opt"
            MR_Word mercury__pretty_printer__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 393 "list.opt"
            MR_Integer mercury__pretty_printer__V_15_13;

#line 402 "list.opt"
            {
#line 402 "list.opt"
              mercury__pretty_printer__V_15_13 = mercury__pretty_printer__IntroducedFrom__func__write_doc_to_stream__389__2_2_f_0(mercury__pretty_printer__V_10_9, mercury__pretty_printer__HeadVar__3_3);
            }
#line 395 "list.opt"
            /* direct tailcall eliminated */
#line 395 "list.opt"
            {
#line 395 "list.opt"
              MR_Word mercury__pretty_printer__HeadVar__2__tmp_copy_2 = mercury__pretty_printer__V_11_10;
#line 395 "list.opt"
              MR_Integer mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_15_13;

#line 395 "list.opt"
              mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 395 "list.opt"
              mercury__pretty_printer__HeadVar__2_2 = mercury__pretty_printer__HeadVar__2__tmp_copy_2;
#line 395 "list.opt"
            }
#line 395 "list.opt"
            continue;
#line 393 "list.opt"
          }
#line 391 "list.opt"
      }
#line 391 "list.opt"
      break;
#line 391 "list.opt"
    }
#line 127 "list.int"
}

#line 127 "list.int"
static void MR_CALL 
mercury__pretty_printer__foldl__ho19_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 127 "list.int"
  MR_Integer mercury__pretty_printer__HeadVar__3_3,
#line 127 "list.int"
  MR_Integer * mercury__pretty_printer__HeadVar__4_4)
#line 127 "list.int"
{
#line 391 "list.opt"
  while (MR_TRUE)
#line 391 "list.opt"
    {
#line 391 "list.opt"
      /* tailcall optimized into a loop */
#line 391 "list.opt"
      {
#line 391 "list.opt"
        MR_bool mercury__pretty_printer__succeeded;

#line 391 "list.opt"
        if ((mercury__pretty_printer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "list.opt"
          *mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__3_3;
#line 391 "list.opt"
        else
#line 393 "list.opt"
          {
#line 393 "list.opt"
            MR_String mercury__pretty_printer__V_10_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 393 "list.opt"
            MR_Word mercury__pretty_printer__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 393 "list.opt"
            MR_Integer mercury__pretty_printer__V_15_13;

#line 402 "list.opt"
            {
#line 402 "list.opt"
              mercury__pretty_printer__V_15_13 = mercury__pretty_printer__IntroducedFrom__func__write_doc_to_stream__389__1_2_f_0(mercury__pretty_printer__V_10_9, mercury__pretty_printer__HeadVar__3_3);
            }
#line 395 "list.opt"
            /* direct tailcall eliminated */
#line 395 "list.opt"
            {
#line 395 "list.opt"
              MR_Word mercury__pretty_printer__HeadVar__2__tmp_copy_2 = mercury__pretty_printer__V_11_10;
#line 395 "list.opt"
              MR_Integer mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_15_13;

#line 395 "list.opt"
              mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 395 "list.opt"
              mercury__pretty_printer__HeadVar__2_2 = mercury__pretty_printer__HeadVar__2__tmp_copy_2;
#line 395 "list.opt"
            }
#line 395 "list.opt"
            continue;
#line 393 "list.opt"
          }
#line 391 "list.opt"
      }
#line 391 "list.opt"
      break;
#line 391 "list.opt"
    }
#line 127 "list.int"
}

#line 126 "list.int"
static MR_Integer MR_CALL 
mercury__pretty_printer__foldl__ho15_3_f_in__list_0(
#line 126 "list.int"
  MR_Word mercury__pretty_printer__V_6_6,
#line 126 "list.int"
  MR_Integer mercury__pretty_printer__V_7_7)
#line 126 "list.int"
{
#line 407 "list.opt"
  {
#line 407 "list.opt"
    MR_bool mercury__pretty_printer__succeeded;
#line 407 "list.opt"
    MR_Integer mercury__pretty_printer__V_8_8;

#line 407 "list.opt"
    {
#line 407 "list.opt"
      mercury__pretty_printer__foldl__ho19_4_p_in__list_0(mercury__pretty_printer__V_6_6, mercury__pretty_printer__V_7_7, &mercury__pretty_printer__V_8_8);
    }
#line 407 "list.opt"
    return mercury__pretty_printer__V_8_8;
#line 407 "list.opt"
  }
#line 126 "list.int"
}

#line 126 "list.int"
static MR_Integer MR_CALL 
mercury__pretty_printer__foldl__ho14_3_f_in__list_0(
#line 126 "list.int"
  MR_Word mercury__pretty_printer__V_6_6,
#line 126 "list.int"
  MR_Integer mercury__pretty_printer__V_7_7)
#line 126 "list.int"
{
#line 407 "list.opt"
  {
#line 407 "list.opt"
    MR_bool mercury__pretty_printer__succeeded;
#line 407 "list.opt"
    MR_Integer mercury__pretty_printer__V_8_8;

#line 407 "list.opt"
    {
#line 407 "list.opt"
      mercury__pretty_printer__foldl__ho20_4_p_in__list_0(mercury__pretty_printer__V_6_6, mercury__pretty_printer__V_7_7, &mercury__pretty_printer__V_8_8);
    }
#line 407 "list.opt"
    return mercury__pretty_printer__V_8_8;
#line 407 "list.opt"
  }
#line 126 "list.int"
}

#line 3132 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho9_6_p_0_1(
#line 3135 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 3137 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 3139 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 3141 "pretty_printer.c"
{
#line 3143 "pretty_printer.c"
  {
#line 3145 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 3147 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 3149 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 3152 "pretty_printer.c"
    {
#line 3154 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_char_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 3157 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 3159 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 3161 "pretty_printer.c"
  }
#line 3163 "pretty_printer.c"
}

#line 1088 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho9_6_p_0(
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1088 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1088 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1088 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1088 "pretty_printer.m"
{
#line 1092 "pretty_printer.m"
  {
#line 1092 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1092 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[12];
#line 296 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 288 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 288 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_23_30 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 452 "map.opt"
    MR_Box mercury__pretty_printer__conv1_FMap0_Type_Arity_20;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_22_29, mercury__pretty_printer__TypeInfo_23_30, mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
    }
#line 452 "map.opt"
    if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__pretty_printer__FMap0_Type_Arity_20 = ((MR_Word) mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
#line 452 "map.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 296 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 293 "pretty_printer.m"
      {
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 289 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 289 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_25_32 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 452 "map.opt"
        MR_Box mercury__pretty_printer__conv2_FMap0_Arity_21;

#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_24_31, mercury__pretty_printer__TypeInfo_25_32, mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMap0_Arity_21);
        }
#line 452 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__pretty_printer__FMap0_Arity_21 = ((MR_Word) mercury__pretty_printer__conv2_FMap0_Arity_21);
#line 452 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 291 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 290 "pretty_printer.m"
          {
#line 290 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 290 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 290 "pretty_printer.m"
          }
#line 291 "pretty_printer.m"
        else
#line 292 "pretty_printer.m"
          {
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 292 "pretty_printer.m"
          }
#line 3283 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3285 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 294 "pretty_printer.m"
        {
#line 294 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 3292 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 295 "pretty_printer.m"
        {
#line 295 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 293 "pretty_printer.m"
      }
#line 296 "pretty_printer.m"
    else
#line 297 "pretty_printer.m"
      {
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 3327 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3329 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 243 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 298 "pretty_printer.m"
        {
#line 298 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 3338 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 299 "pretty_printer.m"
        {
#line 299 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 297 "pretty_printer.m"
      }
#line 1092 "pretty_printer.m"
  }
#line 1088 "pretty_printer.m"
}

#line 3352 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho8_6_p_0_1(
#line 3355 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 3357 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 3359 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 3361 "pretty_printer.c"
{
#line 3363 "pretty_printer.c"
  {
#line 3365 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 3367 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 3369 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 3372 "pretty_printer.c"
    {
#line 3374 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_float_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 3377 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 3379 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 3381 "pretty_printer.c"
  }
#line 3383 "pretty_printer.c"
}

#line 1088 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho8_6_p_0(
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1088 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1088 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1088 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1088 "pretty_printer.m"
{
#line 1092 "pretty_printer.m"
  {
#line 1092 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1092 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[11];
#line 296 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 288 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 288 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_23_30 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 452 "map.opt"
    MR_Box mercury__pretty_printer__conv1_FMap0_Type_Arity_20;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_22_29, mercury__pretty_printer__TypeInfo_23_30, mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
    }
#line 452 "map.opt"
    if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__pretty_printer__FMap0_Type_Arity_20 = ((MR_Word) mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
#line 452 "map.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 296 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 293 "pretty_printer.m"
      {
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 289 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 289 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_25_32 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 452 "map.opt"
        MR_Box mercury__pretty_printer__conv2_FMap0_Arity_21;

#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_24_31, mercury__pretty_printer__TypeInfo_25_32, mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMap0_Arity_21);
        }
#line 452 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__pretty_printer__FMap0_Arity_21 = ((MR_Word) mercury__pretty_printer__conv2_FMap0_Arity_21);
#line 452 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 291 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 290 "pretty_printer.m"
          {
#line 290 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 290 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 290 "pretty_printer.m"
          }
#line 291 "pretty_printer.m"
        else
#line 292 "pretty_printer.m"
          {
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 292 "pretty_printer.m"
          }
#line 3503 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3505 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 294 "pretty_printer.m"
        {
#line 294 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 3512 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 295 "pretty_printer.m"
        {
#line 295 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 293 "pretty_printer.m"
      }
#line 296 "pretty_printer.m"
    else
#line 297 "pretty_printer.m"
      {
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 3547 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3549 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 243 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 298 "pretty_printer.m"
        {
#line 298 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 3558 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 299 "pretty_printer.m"
        {
#line 299 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 297 "pretty_printer.m"
      }
#line 1092 "pretty_printer.m"
  }
#line 1088 "pretty_printer.m"
}

#line 3572 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho7_6_p_0_1(
#line 3575 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 3577 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 3579 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 3581 "pretty_printer.c"
{
#line 3583 "pretty_printer.c"
  {
#line 3585 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 3587 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 3589 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 3592 "pretty_printer.c"
    {
#line 3594 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_int_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 3597 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 3599 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 3601 "pretty_printer.c"
  }
#line 3603 "pretty_printer.c"
}

#line 1088 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho7_6_p_0(
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1088 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1088 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1088 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1088 "pretty_printer.m"
{
#line 1092 "pretty_printer.m"
  {
#line 1092 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1092 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[10];
#line 296 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 288 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 288 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_23_30 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 452 "map.opt"
    MR_Box mercury__pretty_printer__conv1_FMap0_Type_Arity_20;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_22_29, mercury__pretty_printer__TypeInfo_23_30, mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
    }
#line 452 "map.opt"
    if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__pretty_printer__FMap0_Type_Arity_20 = ((MR_Word) mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
#line 452 "map.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 296 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 293 "pretty_printer.m"
      {
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 289 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 289 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_25_32 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 452 "map.opt"
        MR_Box mercury__pretty_printer__conv2_FMap0_Arity_21;

#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_24_31, mercury__pretty_printer__TypeInfo_25_32, mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMap0_Arity_21);
        }
#line 452 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__pretty_printer__FMap0_Arity_21 = ((MR_Word) mercury__pretty_printer__conv2_FMap0_Arity_21);
#line 452 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 291 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 290 "pretty_printer.m"
          {
#line 290 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 290 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 290 "pretty_printer.m"
          }
#line 291 "pretty_printer.m"
        else
#line 292 "pretty_printer.m"
          {
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 292 "pretty_printer.m"
          }
#line 3723 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3725 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 294 "pretty_printer.m"
        {
#line 294 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 3732 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 295 "pretty_printer.m"
        {
#line 295 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 293 "pretty_printer.m"
      }
#line 296 "pretty_printer.m"
    else
#line 297 "pretty_printer.m"
      {
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 3767 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3769 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 243 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 298 "pretty_printer.m"
        {
#line 298 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 3778 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 299 "pretty_printer.m"
        {
#line 299 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 297 "pretty_printer.m"
      }
#line 1092 "pretty_printer.m"
  }
#line 1088 "pretty_printer.m"
}

#line 3792 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho6_6_p_0_1(
#line 3795 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 3797 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 3799 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 3801 "pretty_printer.c"
{
#line 3803 "pretty_printer.c"
  {
#line 3805 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 3807 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 3809 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 3812 "pretty_printer.c"
    {
#line 3814 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_string_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 3817 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 3819 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 3821 "pretty_printer.c"
  }
#line 3823 "pretty_printer.c"
}

#line 1088 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho6_6_p_0(
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1088 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1088 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1088 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1088 "pretty_printer.m"
{
#line 1092 "pretty_printer.m"
  {
#line 1092 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1092 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[9];
#line 296 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 288 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 288 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_23_30 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 452 "map.opt"
    MR_Box mercury__pretty_printer__conv1_FMap0_Type_Arity_20;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_22_29, mercury__pretty_printer__TypeInfo_23_30, mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
    }
#line 452 "map.opt"
    if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__pretty_printer__FMap0_Type_Arity_20 = ((MR_Word) mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
#line 452 "map.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 296 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 293 "pretty_printer.m"
      {
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 289 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 289 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_25_32 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 452 "map.opt"
        MR_Box mercury__pretty_printer__conv2_FMap0_Arity_21;

#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_24_31, mercury__pretty_printer__TypeInfo_25_32, mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMap0_Arity_21);
        }
#line 452 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__pretty_printer__FMap0_Arity_21 = ((MR_Word) mercury__pretty_printer__conv2_FMap0_Arity_21);
#line 452 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 291 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 290 "pretty_printer.m"
          {
#line 290 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 290 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 290 "pretty_printer.m"
          }
#line 291 "pretty_printer.m"
        else
#line 292 "pretty_printer.m"
          {
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 292 "pretty_printer.m"
          }
#line 3943 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3945 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 294 "pretty_printer.m"
        {
#line 294 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 3952 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 295 "pretty_printer.m"
        {
#line 295 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 293 "pretty_printer.m"
      }
#line 296 "pretty_printer.m"
    else
#line 297 "pretty_printer.m"
      {
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 3987 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3989 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 243 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 298 "pretty_printer.m"
        {
#line 298 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 3998 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 299 "pretty_printer.m"
        {
#line 299 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 297 "pretty_printer.m"
      }
#line 1092 "pretty_printer.m"
  }
#line 1088 "pretty_printer.m"
}

#line 4012 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho5_6_p_0_1(
#line 4015 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 4017 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 4019 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 4021 "pretty_printer.c"
{
#line 4023 "pretty_printer.c"
  {
#line 4025 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 4027 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 4029 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 4032 "pretty_printer.c"
    {
#line 4034 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_array_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 4037 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 4039 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 4041 "pretty_printer.c"
  }
#line 4043 "pretty_printer.c"
}

#line 1088 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho5_6_p_0(
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1088 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1088 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1088 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1088 "pretty_printer.m"
{
#line 1092 "pretty_printer.m"
  {
#line 1092 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1092 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[8];
#line 296 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 288 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 288 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_23_30 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 452 "map.opt"
    MR_Box mercury__pretty_printer__conv1_FMap0_Type_Arity_20;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_22_29, mercury__pretty_printer__TypeInfo_23_30, mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
    }
#line 452 "map.opt"
    if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__pretty_printer__FMap0_Type_Arity_20 = ((MR_Word) mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
#line 452 "map.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 296 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 293 "pretty_printer.m"
      {
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 289 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 289 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_25_32 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 452 "map.opt"
        MR_Box mercury__pretty_printer__conv2_FMap0_Arity_21;

#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_24_31, mercury__pretty_printer__TypeInfo_25_32, mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMap0_Arity_21);
        }
#line 452 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__pretty_printer__FMap0_Arity_21 = ((MR_Word) mercury__pretty_printer__conv2_FMap0_Arity_21);
#line 452 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 291 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 290 "pretty_printer.m"
          {
#line 290 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 290 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 290 "pretty_printer.m"
          }
#line 291 "pretty_printer.m"
        else
#line 292 "pretty_printer.m"
          {
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 292 "pretty_printer.m"
          }
#line 4163 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4165 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 294 "pretty_printer.m"
        {
#line 294 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 4172 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 295 "pretty_printer.m"
        {
#line 295 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 293 "pretty_printer.m"
      }
#line 296 "pretty_printer.m"
    else
#line 297 "pretty_printer.m"
      {
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 4207 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4209 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 243 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 298 "pretty_printer.m"
        {
#line 298 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 4218 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 299 "pretty_printer.m"
        {
#line 299 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 297 "pretty_printer.m"
      }
#line 1092 "pretty_printer.m"
  }
#line 1088 "pretty_printer.m"
}

#line 4232 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho4_6_p_0_1(
#line 4235 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 4237 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 4239 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 4241 "pretty_printer.c"
{
#line 4243 "pretty_printer.c"
  {
#line 4245 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 4247 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 4249 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 4252 "pretty_printer.c"
    {
#line 4254 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_list_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 4257 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 4259 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 4261 "pretty_printer.c"
  }
#line 4263 "pretty_printer.c"
}

#line 1088 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho4_6_p_0(
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1088 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1088 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1088 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1088 "pretty_printer.m"
{
#line 1092 "pretty_printer.m"
  {
#line 1092 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1092 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[7];
#line 296 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 288 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 288 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_23_30 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 452 "map.opt"
    MR_Box mercury__pretty_printer__conv1_FMap0_Type_Arity_20;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_22_29, mercury__pretty_printer__TypeInfo_23_30, mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
    }
#line 452 "map.opt"
    if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__pretty_printer__FMap0_Type_Arity_20 = ((MR_Word) mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
#line 452 "map.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 296 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 293 "pretty_printer.m"
      {
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 289 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 289 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_25_32 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 452 "map.opt"
        MR_Box mercury__pretty_printer__conv2_FMap0_Arity_21;

#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_24_31, mercury__pretty_printer__TypeInfo_25_32, mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMap0_Arity_21);
        }
#line 452 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__pretty_printer__FMap0_Arity_21 = ((MR_Word) mercury__pretty_printer__conv2_FMap0_Arity_21);
#line 452 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 291 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 290 "pretty_printer.m"
          {
#line 290 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 290 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 290 "pretty_printer.m"
          }
#line 291 "pretty_printer.m"
        else
#line 292 "pretty_printer.m"
          {
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 292 "pretty_printer.m"
          }
#line 4383 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4385 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 294 "pretty_printer.m"
        {
#line 294 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 4392 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 295 "pretty_printer.m"
        {
#line 295 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 293 "pretty_printer.m"
      }
#line 296 "pretty_printer.m"
    else
#line 297 "pretty_printer.m"
      {
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 4427 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4429 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 243 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 298 "pretty_printer.m"
        {
#line 298 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 4438 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 299 "pretty_printer.m"
        {
#line 299 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 297 "pretty_printer.m"
      }
#line 1092 "pretty_printer.m"
  }
#line 1088 "pretty_printer.m"
}

#line 4452 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho3_6_p_0_1(
#line 4455 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 4457 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 4459 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 4461 "pretty_printer.c"
{
#line 4463 "pretty_printer.c"
  {
#line 4465 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 4467 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 4469 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 4472 "pretty_printer.c"
    {
#line 4474 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_tree234_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 4477 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 4479 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 4481 "pretty_printer.c"
  }
#line 4483 "pretty_printer.c"
}

#line 1088 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho3_6_p_0(
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1088 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1088 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1088 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1088 "pretty_printer.m"
{
#line 1092 "pretty_printer.m"
  {
#line 1092 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1092 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[6];
#line 296 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 288 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 288 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_23_30 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 452 "map.opt"
    MR_Box mercury__pretty_printer__conv1_FMap0_Type_Arity_20;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_22_29, mercury__pretty_printer__TypeInfo_23_30, mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
    }
#line 452 "map.opt"
    if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__pretty_printer__FMap0_Type_Arity_20 = ((MR_Word) mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
#line 452 "map.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 296 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 293 "pretty_printer.m"
      {
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 289 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 289 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_25_32 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 452 "map.opt"
        MR_Box mercury__pretty_printer__conv2_FMap0_Arity_21;

#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_24_31, mercury__pretty_printer__TypeInfo_25_32, mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMap0_Arity_21);
        }
#line 452 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__pretty_printer__FMap0_Arity_21 = ((MR_Word) mercury__pretty_printer__conv2_FMap0_Arity_21);
#line 452 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 291 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 290 "pretty_printer.m"
          {
#line 290 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 290 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 290 "pretty_printer.m"
          }
#line 291 "pretty_printer.m"
        else
#line 292 "pretty_printer.m"
          {
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 292 "pretty_printer.m"
          }
#line 4603 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4605 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 294 "pretty_printer.m"
        {
#line 294 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 4612 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 295 "pretty_printer.m"
        {
#line 295 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 293 "pretty_printer.m"
      }
#line 296 "pretty_printer.m"
    else
#line 297 "pretty_printer.m"
      {
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 4647 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4649 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 243 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 298 "pretty_printer.m"
        {
#line 298 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 4658 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 299 "pretty_printer.m"
        {
#line 299 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 297 "pretty_printer.m"
      }
#line 1092 "pretty_printer.m"
  }
#line 1088 "pretty_printer.m"
}

#line 4672 "pretty_printer.c"
static MR_Box MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho2_6_p_0_1(
#line 4675 "pretty_printer.c"
  MR_Box mercury__pretty_printer__closure_arg,
#line 4677 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_1,
#line 4679 "pretty_printer.c"
  MR_Box mercury__pretty_printer__wrapper_arg_2)
#line 4681 "pretty_printer.c"
{
#line 4683 "pretty_printer.c"
  {
#line 4685 "pretty_printer.c"
    MR_Box mercury__pretty_printer__wrapper_arg_3;
#line 4687 "pretty_printer.c"
    MR_Box mercury__pretty_printer__closure = mercury__pretty_printer__closure_arg;
#line 4689 "pretty_printer.c"
    MR_Word mercury__pretty_printer__conv0_HeadVar__3_3;

#line 4692 "pretty_printer.c"
    {
#line 4694 "pretty_printer.c"
      mercury__pretty_printer__conv0_HeadVar__3_3 = mercury__pretty_printer__fmt_version_array_2_f_0(((MR_Word) mercury__pretty_printer__wrapper_arg_1), ((MR_Word) mercury__pretty_printer__wrapper_arg_2));
    }
#line 4697 "pretty_printer.c"
    mercury__pretty_printer__wrapper_arg_3 = ((MR_Box) (mercury__pretty_printer__conv0_HeadVar__3_3));
#line 4699 "pretty_printer.c"
    return mercury__pretty_printer__wrapper_arg_3;
#line 4701 "pretty_printer.c"
  }
#line 4703 "pretty_printer.c"
}

#line 1088 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__set_formatter_sv__ho2_6_p_0(
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 1088 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 1088 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 1088 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap0_11,
#line 1088 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_12)
#line 1088 "pretty_printer.m"
{
#line 1092 "pretty_printer.m"
  {
#line 1092 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1092 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatter_19 = (MR_Word) &mercury__pretty_printer_scalar_common_3[5];
#line 296 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_20;
#line 288 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 288 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_23_30 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 452 "map.opt"
    MR_Box mercury__pretty_printer__conv1_FMap0_Type_Arity_20;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_22_29, mercury__pretty_printer__TypeInfo_23_30, mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
    }
#line 452 "map.opt"
    if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__pretty_printer__FMap0_Type_Arity_20 = ((MR_Word) mercury__pretty_printer__conv1_FMap0_Type_Arity_20);
#line 452 "map.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 296 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 293 "pretty_printer.m"
      {
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_37;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_38;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_39;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_22;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_23;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_21;
#line 289 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 289 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_25_32 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 452 "map.opt"
        MR_Box mercury__pretty_printer__conv2_FMap0_Arity_21;

#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_24_31, mercury__pretty_printer__TypeInfo_25_32, mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv2_FMap0_Arity_21);
        }
#line 452 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__pretty_printer__FMap0_Arity_21 = ((MR_Word) mercury__pretty_printer__conv2_FMap0_Arity_21);
#line 452 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 291 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 290 "pretty_printer.m"
          {
#line 290 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 290 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_67, mercury__pretty_printer__TypeInfo_27_34, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__FMap0_Arity_21, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 290 "pretty_printer.m"
          }
#line 291 "pretty_printer.m"
        else
#line 292 "pretty_printer.m"
          {
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_36 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_82, mercury__pretty_printer__TypeInfo_29_36, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_19)), mercury__pretty_printer__V_24_24, &mercury__pretty_printer__FMap_Arity_22);
            }
#line 292 "pretty_printer.m"
          }
#line 4823 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4825 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_38 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 294 "pretty_printer.m"
        {
#line 294 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_31_38, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_20, ((MR_Box) (mercury__pretty_printer__FMap_Arity_22)));
        }
#line 4832 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_39 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 295 "pretty_printer.m"
        {
#line 295 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_37, mercury__pretty_printer__TypeInfo_32_39, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_23)));
        }
#line 293 "pretty_printer.m"
      }
#line 296 "pretty_printer.m"
    else
#line 297 "pretty_printer.m"
      {
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_41 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_42;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_43;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_44;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_27;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_28;

#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_27 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_41, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_25_25, ((MR_Box) (mercury__pretty_printer__Formatter_19)));
        }
#line 4867 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4869 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_43 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 243 "tree234.opt"
        mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 298 "pretty_printer.m"
        {
#line 298 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_36_43, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_26_26, ((MR_Box) (mercury__pretty_printer__FMap_Arity_27)));
        }
#line 4878 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_44 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 299 "pretty_printer.m"
        {
#line 299 "pretty_printer.m"
          *mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_42, mercury__pretty_printer__TypeInfo_37_44, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_28)));
        }
#line 297 "pretty_printer.m"
      }
#line 1092 "pretty_printer.m"
  }
#line 1088 "pretty_printer.m"
}

#line 389 "pretty_printer.m"
static MR_Integer MR_CALL 
mercury__pretty_printer__IntroducedFrom__func__write_doc_to_stream__389__2_2_f_0(
#line 389 "pretty_printer.m"
  MR_String mercury__pretty_printer__HeadVar__1_109,
#line 389 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__2_110)
#line 389 "pretty_printer.m"
{
#line 389 "pretty_printer.m"
  {
#line 389 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 389 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__HeadVar__3_111;
#line 389 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_112_112;

#line 389 "pretty_printer.m"
    {
#line 389 "pretty_printer.m"
      mercury__pretty_printer__V_112_112 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__HeadVar__1_109);
    }
#line 389 "pretty_printer.m"
    mercury__pretty_printer__HeadVar__3_111 = (mercury__pretty_printer__V_112_112 + mercury__pretty_printer__HeadVar__2_110);
#line 389 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_111;
#line 389 "pretty_printer.m"
  }
#line 389 "pretty_printer.m"
}

#line 389 "pretty_printer.m"
static MR_Integer MR_CALL 
mercury__pretty_printer__IntroducedFrom__func__write_doc_to_stream__389__1_2_f_0(
#line 389 "pretty_printer.m"
  MR_String mercury__pretty_printer__HeadVar__1_109,
#line 389 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__2_110)
#line 389 "pretty_printer.m"
{
#line 389 "pretty_printer.m"
  {
#line 389 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 389 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__HeadVar__3_111;
#line 389 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_112_112;

#line 389 "pretty_printer.m"
    {
#line 389 "pretty_printer.m"
      mercury__pretty_printer__V_112_112 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__HeadVar__1_109);
    }
#line 389 "pretty_printer.m"
    mercury__pretty_printer__HeadVar__3_111 = (mercury__pretty_printer__V_112_112 + mercury__pretty_printer__HeadVar__2_110);
#line 389 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_111;
#line 389 "pretty_printer.m"
  }
#line 389 "pretty_printer.m"
}

#line 199 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer____Compare____pp_params_0_0(
#line 199 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
#line 199 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 199 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3)
#line 199 "pretty_printer.m"
{
#line 199 "pretty_printer.m"
  {
#line 199 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 199 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastX_12 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;
#line 199 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastY_13 = (MR_Integer) mercury__pretty_printer__HeadVar__3_3;

#line 199 "pretty_printer.m"
    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_12 == mercury__pretty_printer__CastY_13);
#line 199 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 4980 "pretty_printer.c"
      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 199 "pretty_printer.m"
    else
#line 199 "pretty_printer.m"
      {
#line 199 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 199 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 199 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 2)));
#line 199 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));
#line 199 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));
#line 199 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 2)));
#line 199 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_10_10;

#line 69 "private_builtin.opt"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_4_4 < mercury__pretty_printer__V_7_7);
#line 72 "private_builtin.opt"
        if (mercury__pretty_printer__succeeded)
#line 71 "private_builtin.opt"
          mercury__pretty_printer__V_10_10 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
        else
#line 77 "private_builtin.opt"
          {
#line 74 "private_builtin.opt"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_4_4 == mercury__pretty_printer__V_7_7);
#line 77 "private_builtin.opt"
            if (mercury__pretty_printer__succeeded)
#line 76 "private_builtin.opt"
              mercury__pretty_printer__V_10_10 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
            else
#line 78 "private_builtin.opt"
              mercury__pretty_printer__V_10_10 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
          }
#line 5023 "pretty_printer.c"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_10_10 == (MR_Integer) 0);
#line 199 "pretty_printer.m"
        mercury__pretty_printer__succeeded = !(mercury__pretty_printer__succeeded);
#line 199 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 199 "pretty_printer.m"
          *mercury__pretty_printer__HeadVar__1_1 = mercury__pretty_printer__V_10_10;
#line 199 "pretty_printer.m"
        else
#line 199 "pretty_printer.m"
          {
#line 199 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_11_11;

#line 69 "private_builtin.opt"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_5_5 < mercury__pretty_printer__V_8_8);
#line 72 "private_builtin.opt"
            if (mercury__pretty_printer__succeeded)
#line 71 "private_builtin.opt"
              mercury__pretty_printer__V_11_11 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
            else
#line 77 "private_builtin.opt"
              {
#line 74 "private_builtin.opt"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_5_5 == mercury__pretty_printer__V_8_8);
#line 77 "private_builtin.opt"
                if (mercury__pretty_printer__succeeded)
#line 76 "private_builtin.opt"
                  mercury__pretty_printer__V_11_11 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                else
#line 78 "private_builtin.opt"
                  mercury__pretty_printer__V_11_11 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
              }
#line 5060 "pretty_printer.c"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_11_11 == (MR_Integer) 0);
#line 199 "pretty_printer.m"
            mercury__pretty_printer__succeeded = !(mercury__pretty_printer__succeeded);
#line 199 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 199 "pretty_printer.m"
              *mercury__pretty_printer__HeadVar__1_1 = mercury__pretty_printer__V_11_11;
#line 199 "pretty_printer.m"
            else
#line 199 "pretty_printer.m"
              {
#line 199 "pretty_printer.m"
                mercury__pretty_printer____Compare____formatting_limit_0_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__V_6_6, mercury__pretty_printer__V_9_9);
#line 199 "pretty_printer.m"
                return;
              }
#line 199 "pretty_printer.m"
          }
#line 199 "pretty_printer.m"
      }
#line 199 "pretty_printer.m"
  }
#line 199 "pretty_printer.m"
}

#line 199 "pretty_printer.m"
MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_params_0_0(
#line 199 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 199 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 199 "pretty_printer.m"
{
#line 199 "pretty_printer.m"
  {
#line 199 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 199 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastX_9 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 199 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastY_10 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 199 "pretty_printer.m"
    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_9 == mercury__pretty_printer__CastY_10);
#line 199 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 199 "pretty_printer.m"
      mercury__pretty_printer__succeeded = MR_TRUE;
#line 199 "pretty_printer.m"
    else
#line 199 "pretty_printer.m"
      {
#line 199 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 199 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));
#line 199 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 2)));
#line 199 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 199 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 199 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 2)));

#line 5127 "pretty_printer.c"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_3_3 == mercury__pretty_printer__V_6_6);
#line 199 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 199 "pretty_printer.m"
          {
#line 5133 "pretty_printer.c"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_4_4 == mercury__pretty_printer__V_7_7);
#line 199 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 5137 "pretty_printer.c"
              {
#line 5139 "pretty_printer.c"
                return mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____formatting_limit_0_0(mercury__pretty_printer__V_5_5, mercury__pretty_printer__V_8_8);
              }
#line 199 "pretty_printer.m"
          }
#line 199 "pretty_printer.m"
      }
#line 199 "pretty_printer.m"
    return mercury__pretty_printer__succeeded;
#line 199 "pretty_printer.m"
  }
#line 199 "pretty_printer.m"
}

#line 261 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer____Compare____pp_internal_0_0(
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
    MR_Integer mercury__pretty_printer__CastX_40 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;
#line 261 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastY_41 = (MR_Integer) mercury__pretty_printer__HeadVar__3_3;

#line 261 "pretty_printer.m"
    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_40 == mercury__pretty_printer__CastY_41);
#line 261 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 5177 "pretty_printer.c"
      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "pretty_printer.m"
    else
#line 261 "pretty_printer.m"
#line 261 "pretty_printer.m"
      switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) {
#line 261 "pretty_printer.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 261 "pretty_printer.m"
        case (MR_Integer) 0:
#line 261 "pretty_printer.m"
#line 261 "pretty_printer.m"
          switch (MR_unmkbody(mercury__pretty_printer__HeadVar__2_2)) {
#line 261 "pretty_printer.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 261 "pretty_printer.m"
            case (MR_Integer) 0:
#line 261 "pretty_printer.m"
#line 261 "pretty_printer.m"
              switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 261 "pretty_printer.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 261 "pretty_printer.m"
                case (MR_Integer) 0:
#line 261 "pretty_printer.m"
#line 261 "pretty_printer.m"
                  switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 261 "pretty_printer.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 261 "pretty_printer.m"
                    case (MR_Integer) 0:
#line 261 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "pretty_printer.m"
                      break;
#line 261 "pretty_printer.m"
                    case (MR_Integer) 1:
#line 261 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "pretty_printer.m"
                      break;
#line 261 "pretty_printer.m"
                    case (MR_Integer) 2:
#line 261 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "pretty_printer.m"
                      break;
#line 261 "pretty_printer.m"
                  }
#line 261 "pretty_printer.m"
                  break;
#line 261 "pretty_printer.m"
                case (MR_Integer) 1:
#line 5231 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "pretty_printer.m"
                  break;
#line 261 "pretty_printer.m"
                case (MR_Integer) 2:
#line 5237 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "pretty_printer.m"
                  break;
#line 261 "pretty_printer.m"
                case (MR_Integer) 3:
#line 5243 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "pretty_printer.m"
                  break;
#line 261 "pretty_printer.m"
              }
#line 261 "pretty_printer.m"
              break;
#line 261 "pretty_printer.m"
            case (MR_Integer) 1:
#line 261 "pretty_printer.m"
#line 261 "pretty_printer.m"
              switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 261 "pretty_printer.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 261 "pretty_printer.m"
                case (MR_Integer) 0:
#line 261 "pretty_printer.m"
#line 261 "pretty_printer.m"
                  switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 261 "pretty_printer.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 261 "pretty_printer.m"
                    case (MR_Integer) 0:
#line 261 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "pretty_printer.m"
                      break;
#line 261 "pretty_printer.m"
                    case (MR_Integer) 1:
#line 261 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "pretty_printer.m"
                      break;
#line 261 "pretty_printer.m"
                    case (MR_Integer) 2:
#line 261 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "pretty_printer.m"
                      break;
#line 261 "pretty_printer.m"
                  }
#line 261 "pretty_printer.m"
                  break;
#line 261 "pretty_printer.m"
                case (MR_Integer) 1:
#line 5289 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "pretty_printer.m"
                  break;
#line 261 "pretty_printer.m"
                case (MR_Integer) 2:
#line 5295 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "pretty_printer.m"
                  break;
#line 261 "pretty_printer.m"
                case (MR_Integer) 3:
#line 5301 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "pretty_printer.m"
                  break;
#line 261 "pretty_printer.m"
              }
#line 261 "pretty_printer.m"
              break;
#line 261 "pretty_printer.m"
            case (MR_Integer) 2:
#line 261 "pretty_printer.m"
#line 261 "pretty_printer.m"
              switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 261 "pretty_printer.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 261 "pretty_printer.m"
                case (MR_Integer) 0:
#line 261 "pretty_printer.m"
#line 261 "pretty_printer.m"
                  switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 261 "pretty_printer.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 261 "pretty_printer.m"
                    case (MR_Integer) 0:
#line 261 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "pretty_printer.m"
                      break;
#line 261 "pretty_printer.m"
                    case (MR_Integer) 1:
#line 261 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "pretty_printer.m"
                      break;
#line 261 "pretty_printer.m"
                    case (MR_Integer) 2:
#line 261 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "pretty_printer.m"
                      break;
#line 261 "pretty_printer.m"
                  }
#line 261 "pretty_printer.m"
                  break;
#line 261 "pretty_printer.m"
                case (MR_Integer) 1:
#line 5347 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "pretty_printer.m"
                  break;
#line 261 "pretty_printer.m"
                case (MR_Integer) 2:
#line 5353 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "pretty_printer.m"
                  break;
#line 261 "pretty_printer.m"
                case (MR_Integer) 3:
#line 5359 "pretty_printer.c"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "pretty_printer.m"
                  break;
#line 261 "pretty_printer.m"
              }
#line 261 "pretty_printer.m"
              break;
#line 261 "pretty_printer.m"
          }
#line 261 "pretty_printer.m"
          break;
#line 261 "pretty_printer.m"
        case (MR_Integer) 1:
#line 261 "pretty_printer.m"
          {
#line 261 "pretty_printer.m"
            MR_String mercury__pretty_printer__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

#line 261 "pretty_printer.m"
#line 261 "pretty_printer.m"
            switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 261 "pretty_printer.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 261 "pretty_printer.m"
              case (MR_Integer) 0:
#line 261 "pretty_printer.m"
#line 261 "pretty_printer.m"
                switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 261 "pretty_printer.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 261 "pretty_printer.m"
                  case (MR_Integer) 0:
#line 5392 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "pretty_printer.m"
                    break;
#line 261 "pretty_printer.m"
                  case (MR_Integer) 1:
#line 5398 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "pretty_printer.m"
                    break;
#line 261 "pretty_printer.m"
                  case (MR_Integer) 2:
#line 5404 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "pretty_printer.m"
                    break;
#line 261 "pretty_printer.m"
                }
#line 261 "pretty_printer.m"
                break;
#line 261 "pretty_printer.m"
              case (MR_Integer) 1:
#line 261 "pretty_printer.m"
                {
#line 261 "pretty_printer.m"
                  MR_String mercury__pretty_printer__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));
#line 261 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__V_7_51;

#line 100 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer____Compare____pp_internal_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__pretty_printer__V_45_45 ;
	S2 =  mercury__pretty_printer__V_13_13 ;
		{
#line 100 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 5436 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_7_51  = Res;
#line 100 "private_builtin.opt"
}
#line 87 "private_builtin.opt"
                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_7_51 < (MR_Integer) 0);
#line 90 "private_builtin.opt"
                  if (mercury__pretty_printer__succeeded)
#line 89 "private_builtin.opt"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 90 "private_builtin.opt"
                  else
#line 95 "private_builtin.opt"
                    {
#line 92 "private_builtin.opt"
                      mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_7_51 == (MR_Integer) 0);
#line 95 "private_builtin.opt"
                      if (mercury__pretty_printer__succeeded)
#line 94 "private_builtin.opt"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 95 "private_builtin.opt"
                      else
#line 96 "private_builtin.opt"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 95 "private_builtin.opt"
                    }
#line 261 "pretty_printer.m"
                }
#line 261 "pretty_printer.m"
                break;
#line 261 "pretty_printer.m"
              case (MR_Integer) 2:
#line 5471 "pretty_printer.c"
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "pretty_printer.m"
                break;
#line 261 "pretty_printer.m"
              case (MR_Integer) 3:
#line 5477 "pretty_printer.c"
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "pretty_printer.m"
                break;
#line 261 "pretty_printer.m"
            }
#line 261 "pretty_printer.m"
          }
#line 261 "pretty_printer.m"
          break;
#line 261 "pretty_printer.m"
        case (MR_Integer) 2:
#line 261 "pretty_printer.m"
          {
#line 261 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

#line 261 "pretty_printer.m"
#line 261 "pretty_printer.m"
            switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 261 "pretty_printer.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 261 "pretty_printer.m"
              case (MR_Integer) 0:
#line 261 "pretty_printer.m"
#line 261 "pretty_printer.m"
                switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 261 "pretty_printer.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 261 "pretty_printer.m"
                  case (MR_Integer) 0:
#line 5508 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "pretty_printer.m"
                    break;
#line 261 "pretty_printer.m"
                  case (MR_Integer) 1:
#line 5514 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "pretty_printer.m"
                    break;
#line 261 "pretty_printer.m"
                  case (MR_Integer) 2:
#line 5520 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "pretty_printer.m"
                    break;
#line 261 "pretty_printer.m"
                }
#line 261 "pretty_printer.m"
                break;
#line 261 "pretty_printer.m"
              case (MR_Integer) 1:
#line 5530 "pretty_printer.c"
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "pretty_printer.m"
                break;
#line 261 "pretty_printer.m"
              case (MR_Integer) 2:
#line 261 "pretty_printer.m"
                {
#line 261 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));

#line 69 "private_builtin.opt"
                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_47_47 < mercury__pretty_printer__V_28_28);
#line 72 "private_builtin.opt"
                  if (mercury__pretty_printer__succeeded)
#line 71 "private_builtin.opt"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                  else
#line 77 "private_builtin.opt"
                    {
#line 74 "private_builtin.opt"
                      mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_47_47 == mercury__pretty_printer__V_28_28);
#line 77 "private_builtin.opt"
                      if (mercury__pretty_printer__succeeded)
#line 76 "private_builtin.opt"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                      else
#line 78 "private_builtin.opt"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
                    }
#line 261 "pretty_printer.m"
                }
#line 261 "pretty_printer.m"
                break;
#line 261 "pretty_printer.m"
              case (MR_Integer) 3:
#line 5569 "pretty_printer.c"
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 261 "pretty_printer.m"
                break;
#line 261 "pretty_printer.m"
            }
#line 261 "pretty_printer.m"
          }
#line 261 "pretty_printer.m"
          break;
#line 261 "pretty_printer.m"
        case (MR_Integer) 3:
#line 261 "pretty_printer.m"
          {
#line 261 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));

#line 261 "pretty_printer.m"
#line 261 "pretty_printer.m"
            switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__3_3)) {
#line 261 "pretty_printer.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 261 "pretty_printer.m"
              case (MR_Integer) 0:
#line 261 "pretty_printer.m"
#line 261 "pretty_printer.m"
                switch (MR_unmkbody(mercury__pretty_printer__HeadVar__3_3)) {
#line 261 "pretty_printer.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 261 "pretty_printer.m"
                  case (MR_Integer) 0:
#line 5600 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "pretty_printer.m"
                    break;
#line 261 "pretty_printer.m"
                  case (MR_Integer) 1:
#line 5606 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "pretty_printer.m"
                    break;
#line 261 "pretty_printer.m"
                  case (MR_Integer) 2:
#line 5612 "pretty_printer.c"
                    *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "pretty_printer.m"
                    break;
#line 261 "pretty_printer.m"
                }
#line 261 "pretty_printer.m"
                break;
#line 261 "pretty_printer.m"
              case (MR_Integer) 1:
#line 5622 "pretty_printer.c"
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "pretty_printer.m"
                break;
#line 261 "pretty_printer.m"
              case (MR_Integer) 2:
#line 5628 "pretty_printer.c"
                *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 261 "pretty_printer.m"
                break;
#line 261 "pretty_printer.m"
              case (MR_Integer) 3:
#line 261 "pretty_printer.m"
                {
#line 261 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));

#line 261 "pretty_printer.m"
                  {
#line 261 "pretty_printer.m"
                    mercury__pretty_printer____Compare____formatting_limit_0_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__V_46_46, mercury__pretty_printer__V_39_39);
#line 261 "pretty_printer.m"
                    return;
                  }
#line 261 "pretty_printer.m"
                }
#line 261 "pretty_printer.m"
                break;
#line 261 "pretty_printer.m"
            }
#line 261 "pretty_printer.m"
          }
#line 261 "pretty_printer.m"
          break;
#line 261 "pretty_printer.m"
      }
#line 261 "pretty_printer.m"
  }
#line 261 "pretty_printer.m"
}

#line 261 "pretty_printer.m"
MR_bool MR_CALL 
mercury__pretty_printer____Unify____pp_internal_0_0(
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
    MR_Integer mercury__pretty_printer__CastX_15 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 261 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__CastY_16 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 261 "pretty_printer.m"
    mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastX_15 == mercury__pretty_printer__CastY_16);
#line 261 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 261 "pretty_printer.m"
      mercury__pretty_printer__succeeded = MR_TRUE;
#line 261 "pretty_printer.m"
    else
#line 261 "pretty_printer.m"
#line 261 "pretty_printer.m"
      switch (MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) {
#line 261 "pretty_printer.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 261 "pretty_printer.m"
        case (MR_Integer) 0:
#line 261 "pretty_printer.m"
#line 261 "pretty_printer.m"
          switch (MR_unmkbody(mercury__pretty_printer__HeadVar__1_1)) {
#line 261 "pretty_printer.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 261 "pretty_printer.m"
            case (MR_Integer) 0:
#line 261 "pretty_printer.m"
              {
#line 261 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__CastX_3 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 261 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__CastY_4 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 261 "pretty_printer.m"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastY_4 == mercury__pretty_printer__CastX_3);
#line 261 "pretty_printer.m"
              }
#line 261 "pretty_printer.m"
              break;
#line 261 "pretty_printer.m"
            case (MR_Integer) 1:
#line 261 "pretty_printer.m"
              {
#line 261 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__CastX_5 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 261 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__CastY_6 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 261 "pretty_printer.m"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastY_6 == mercury__pretty_printer__CastX_5);
#line 261 "pretty_printer.m"
              }
#line 261 "pretty_printer.m"
              break;
#line 261 "pretty_printer.m"
            case (MR_Integer) 2:
#line 261 "pretty_printer.m"
              {
#line 261 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__CastX_9 = (MR_Integer) mercury__pretty_printer__HeadVar__1_1;
#line 261 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__CastY_10 = (MR_Integer) mercury__pretty_printer__HeadVar__2_2;

#line 261 "pretty_printer.m"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__CastY_10 == mercury__pretty_printer__CastX_9);
#line 261 "pretty_printer.m"
              }
#line 261 "pretty_printer.m"
              break;
#line 261 "pretty_printer.m"
          }
#line 261 "pretty_printer.m"
          break;
#line 261 "pretty_printer.m"
        case (MR_Integer) 1:
#line 261 "pretty_printer.m"
          {
#line 261 "pretty_printer.m"
            MR_String mercury__pretty_printer__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 261 "pretty_printer.m"
            MR_String mercury__pretty_printer__V_8_8;

#line 261 "pretty_printer.m"
            mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 261 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 261 "pretty_printer.m"
              {
#line 261 "pretty_printer.m"
                mercury__pretty_printer__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 5767 "pretty_printer.c"
                mercury__pretty_printer__succeeded = (strcmp(mercury__pretty_printer__V_7_7, mercury__pretty_printer__V_8_8) == 0);
#line 261 "pretty_printer.m"
              }
#line 261 "pretty_printer.m"
          }
#line 261 "pretty_printer.m"
          break;
#line 261 "pretty_printer.m"
        case (MR_Integer) 2:
#line 261 "pretty_printer.m"
          {
#line 261 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 261 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__V_12_12;

#line 261 "pretty_printer.m"
            mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 261 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 261 "pretty_printer.m"
              {
#line 261 "pretty_printer.m"
                mercury__pretty_printer__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 5792 "pretty_printer.c"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_11_11 == mercury__pretty_printer__V_12_12);
#line 261 "pretty_printer.m"
              }
#line 261 "pretty_printer.m"
          }
#line 261 "pretty_printer.m"
          break;
#line 261 "pretty_printer.m"
        case (MR_Integer) 3:
#line 261 "pretty_printer.m"
          {
#line 261 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 261 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_14_14;

#line 261 "pretty_printer.m"
            mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 261 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 261 "pretty_printer.m"
              {
#line 261 "pretty_printer.m"
                mercury__pretty_printer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 5817 "pretty_printer.c"
                {
#line 5819 "pretty_printer.c"
                  return mercury__pretty_printer__succeeded = mercury__pretty_printer____Unify____formatting_limit_0_0(mercury__pretty_printer__V_13_13, mercury__pretty_printer__V_14_14);
                }
#line 261 "pretty_printer.m"
              }
#line 261 "pretty_printer.m"
          }
#line 261 "pretty_printer.m"
          break;
#line 261 "pretty_printer.m"
      }
#line 261 "pretty_printer.m"
    return mercury__pretty_printer__succeeded;
#line 261 "pretty_printer.m"
  }
#line 261 "pretty_printer.m"
}

#line 259 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer____Compare____indents_0_0(
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
    MR_Word mercury__pretty_printer__TypeInfo_6_6 = (MR_Word) &mercury__pretty_printer_scalar_common_1[4];
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
mercury__pretty_printer____Unify____indents_0_0(
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
    MR_Word mercury__pretty_printer__TypeInfo_5_5 = (MR_Word) &mercury__pretty_printer_scalar_common_1[4];
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
#line 5927 "pretty_printer.c"
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

#line 69 "private_builtin.opt"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_16_16 < mercury__pretty_printer__V_5_5);
#line 72 "private_builtin.opt"
            if (mercury__pretty_printer__succeeded)
#line 71 "private_builtin.opt"
              *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
            else
#line 77 "private_builtin.opt"
              {
#line 74 "private_builtin.opt"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_16_16 == mercury__pretty_printer__V_5_5);
#line 77 "private_builtin.opt"
                if (mercury__pretty_printer__succeeded)
#line 76 "private_builtin.opt"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                else
#line 78 "private_builtin.opt"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
              }
#line 152 "pretty_printer.m"
          }
#line 152 "pretty_printer.m"
        else
#line 5971 "pretty_printer.c"
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
#line 5984 "pretty_printer.c"
          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 152 "pretty_printer.m"
        else
#line 152 "pretty_printer.m"
          {
#line 152 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));

#line 69 "private_builtin.opt"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_17_17 < mercury__pretty_printer__V_11_11);
#line 72 "private_builtin.opt"
            if (mercury__pretty_printer__succeeded)
#line 71 "private_builtin.opt"
              *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
            else
#line 77 "private_builtin.opt"
              {
#line 74 "private_builtin.opt"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_17_17 == mercury__pretty_printer__V_11_11);
#line 77 "private_builtin.opt"
                if (mercury__pretty_printer__succeeded)
#line 76 "private_builtin.opt"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                else
#line 78 "private_builtin.opt"
                  *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
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
#line 6067 "pretty_printer.c"
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
#line 6090 "pretty_printer.c"
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

#line 257 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer____Compare____formatter_map_0_0(
#line 257 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__1_1,
#line 257 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 257 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3)
#line 257 "pretty_printer.m"
{
#line 257 "pretty_printer.m"
  {
#line 257 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 257 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_6_6 = (MR_Word) &mercury__pretty_printer_scalar_common_3[3];
#line 257 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar1_4 = mercury__pretty_printer__HeadVar__2_2;
#line 257 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar2_5 = mercury__pretty_printer__HeadVar__3_3;

#line 257 "pretty_printer.m"
    {
#line 257 "pretty_printer.m"
      mercury__builtin__compare_3_p_0(mercury__pretty_printer__TypeInfo_6_6, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_4)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_5)));
#line 257 "pretty_printer.m"
      return;
    }
#line 257 "pretty_printer.m"
  }
#line 257 "pretty_printer.m"
}

#line 257 "pretty_printer.m"
MR_bool MR_CALL 
mercury__pretty_printer____Unify____formatter_map_0_0(
#line 257 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 257 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 257 "pretty_printer.m"
{
#line 257 "pretty_printer.m"
  {
#line 257 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 257 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_5_5 = (MR_Word) &mercury__pretty_printer_scalar_common_3[3];
#line 257 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar1_3 = mercury__pretty_printer__HeadVar__1_1;
#line 257 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Cast_HeadVar2_4 = mercury__pretty_printer__HeadVar__2_2;

#line 257 "pretty_printer.m"
    {
#line 257 "pretty_printer.m"
      return mercury__pretty_printer__succeeded = mercury__builtin__unify_2_p_0(mercury__pretty_printer__TypeInfo_5_5, ((MR_Box) (mercury__pretty_printer__Cast_HeadVar1_3)), ((MR_Box) (mercury__pretty_printer__Cast_HeadVar2_4)));
    }
#line 257 "pretty_printer.m"
    return mercury__pretty_printer__succeeded;
#line 257 "pretty_printer.m"
  }
#line 257 "pretty_printer.m"
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
#line 6329 "pretty_printer.c"
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
#line 6377 "pretty_printer.c"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                      break;
#line 57 "pretty_printer.m"
                    case (MR_Integer) 2:
#line 6383 "pretty_printer.c"
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
#line 6396 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                        case (MR_Integer) 1:
#line 6402 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                        case (MR_Integer) 2:
#line 6408 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                        case (MR_Integer) 3:
#line 6414 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                        case (MR_Integer) 4:
#line 6420 "pretty_printer.c"
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
#line 6464 "pretty_printer.c"
                      *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                      break;
#line 57 "pretty_printer.m"
                    case (MR_Integer) 2:
#line 6470 "pretty_printer.c"
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
#line 6483 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                        case (MR_Integer) 1:
#line 6489 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                        case (MR_Integer) 2:
#line 6495 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                        case (MR_Integer) 3:
#line 6501 "pretty_printer.c"
                          *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                          break;
#line 57 "pretty_printer.m"
                        case (MR_Integer) 4:
#line 6507 "pretty_printer.c"
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
#line 6544 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 6550 "pretty_printer.c"
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
                      MR_Integer mercury__pretty_printer__V_7_196;

#line 100 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer____Compare____doc_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__pretty_printer__V_187_187 ;
	S2 =  mercury__pretty_printer__V_5_5 ;
		{
#line 100 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6582 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_7_196  = Res;
#line 100 "private_builtin.opt"
}
#line 87 "private_builtin.opt"
                      mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_7_196 < (MR_Integer) 0);
#line 90 "private_builtin.opt"
                      if (mercury__pretty_printer__succeeded)
#line 89 "private_builtin.opt"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 90 "private_builtin.opt"
                      else
#line 95 "private_builtin.opt"
                        {
#line 92 "private_builtin.opt"
                          mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_7_196 == (MR_Integer) 0);
#line 95 "private_builtin.opt"
                          if (mercury__pretty_printer__succeeded)
#line 94 "private_builtin.opt"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 0;
#line 95 "private_builtin.opt"
                          else
#line 96 "private_builtin.opt"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 95 "private_builtin.opt"
                        }
#line 57 "pretty_printer.m"
                    }
#line 57 "pretty_printer.m"
                    break;
#line 57 "pretty_printer.m"
                  case (MR_Integer) 2:
#line 6617 "pretty_printer.c"
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
#line 6630 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 6636 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 2:
#line 6642 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 3:
#line 6648 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 4:
#line 6654 "pretty_printer.c"
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
#line 6689 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 6695 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                    }
#line 57 "pretty_printer.m"
                    break;
#line 57 "pretty_printer.m"
                  case (MR_Integer) 1:
#line 6705 "pretty_printer.c"
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
#line 6738 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 6744 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 2:
#line 6750 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 3:
#line 6756 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 4:
#line 6762 "pretty_printer.c"
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
#line 6804 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 6810 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                        }
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 6820 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 2:
#line 6826 "pretty_printer.c"
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
#line 6857 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 2:
#line 6863 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 3:
#line 6869 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 4:
#line 6875 "pretty_printer.c"
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
#line 6912 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 6918 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                        }
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 6928 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 2:
#line 6934 "pretty_printer.c"
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
#line 6947 "pretty_printer.c"
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
#line 6969 "pretty_printer.c"
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
#line 7006 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 3:
#line 7012 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 4:
#line 7018 "pretty_printer.c"
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
#line 7055 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 7061 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                        }
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 7071 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 2:
#line 7077 "pretty_printer.c"
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
#line 7090 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 7096 "pretty_printer.c"
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
                              MR_Integer mercury__pretty_printer__V_7_191;

#line 100 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer____Compare____doc_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__pretty_printer__V_184_184 ;
	S2 =  mercury__pretty_printer__V_123_123 ;
		{
#line 100 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7128 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_7_191  = Res;
#line 100 "private_builtin.opt"
}
#line 87 "private_builtin.opt"
                              mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_7_191 < (MR_Integer) 0);
#line 90 "private_builtin.opt"
                              if (mercury__pretty_printer__succeeded)
#line 89 "private_builtin.opt"
                                mercury__pretty_printer__V_125_125 = (MR_Integer) 1;
#line 90 "private_builtin.opt"
                              else
#line 95 "private_builtin.opt"
                                {
#line 92 "private_builtin.opt"
                                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_7_191 == (MR_Integer) 0);
#line 95 "private_builtin.opt"
                                  if (mercury__pretty_printer__succeeded)
#line 94 "private_builtin.opt"
                                    mercury__pretty_printer__V_125_125 = (MR_Integer) 0;
#line 95 "private_builtin.opt"
                                  else
#line 96 "private_builtin.opt"
                                    mercury__pretty_printer__V_125_125 = (MR_Integer) 2;
#line 95 "private_builtin.opt"
                                }
#line 7157 "pretty_printer.c"
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
#line 7187 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 4:
#line 7193 "pretty_printer.c"
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
#line 7228 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 7234 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                        }
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 7244 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 2:
#line 7250 "pretty_printer.c"
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
#line 7263 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 7269 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 2:
#line 7275 "pretty_printer.c"
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
#line 7299 "pretty_printer.c"
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
#line 7334 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 7340 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                        }
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 7350 "pretty_printer.c"
                        *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                        break;
#line 57 "pretty_printer.m"
                      case (MR_Integer) 2:
#line 7356 "pretty_printer.c"
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
#line 7369 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 7375 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 2:
#line 7381 "pretty_printer.c"
                            *mercury__pretty_printer__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "pretty_printer.m"
                            break;
#line 57 "pretty_printer.m"
                          case (MR_Integer) 3:
#line 7387 "pretty_printer.c"
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
#line 7529 "pretty_printer.c"
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
#line 7556 "pretty_printer.c"
                    mercury__pretty_printer__TypeInfo_27_27 = (MR_Word) &mercury__pretty_printer_scalar_common_1[3];
#line 7558 "pretty_printer.c"
                    {
#line 7560 "pretty_printer.c"
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
#line 7593 "pretty_printer.c"
                        {
#line 7595 "pretty_printer.c"
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
#line 7629 "pretty_printer.c"
                        mercury__pretty_printer__TypeInfo_28_28 = (MR_Word) &mercury__pretty_printer_scalar_common_1[2];
#line 7631 "pretty_printer.c"
                        {
#line 7633 "pretty_printer.c"
                          mercury__pretty_printer__succeeded = mercury__builtin__unify_2_p_0(mercury__pretty_printer__TypeInfo_28_28, ((MR_Box) (mercury__pretty_printer__V_13_13)), ((MR_Box) (mercury__pretty_printer__V_15_15)));
                        }
#line 57 "pretty_printer.m"
                        if (mercury__pretty_printer__succeeded)
#line 7638 "pretty_printer.c"
                          {
#line 7640 "pretty_printer.c"
                            /* direct tailcall eliminated */
#line 7642 "pretty_printer.c"
                            {
#line 7644 "pretty_printer.c"
                              MR_Word mercury__pretty_printer__HeadVar__1__tmp_copy_1 = mercury__pretty_printer__V_14_14;
#line 7646 "pretty_printer.c"
                              MR_Word mercury__pretty_printer__HeadVar__2__tmp_copy_2 = mercury__pretty_printer__V_16_16;

#line 7649 "pretty_printer.c"
                              mercury__pretty_printer__HeadVar__2_2 = mercury__pretty_printer__HeadVar__2__tmp_copy_2;
#line 7651 "pretty_printer.c"
                              mercury__pretty_printer__HeadVar__1_1 = mercury__pretty_printer__HeadVar__1__tmp_copy_1;
#line 7653 "pretty_printer.c"
                            }
#line 7655 "pretty_printer.c"
                            continue;
#line 7657 "pretty_printer.c"
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
#line 7690 "pretty_printer.c"
                        mercury__pretty_printer__succeeded = (strcmp(mercury__pretty_printer__V_17_17, mercury__pretty_printer__V_19_19) == 0);
#line 57 "pretty_printer.m"
                        if (mercury__pretty_printer__succeeded)
#line 57 "pretty_printer.m"
                          {
#line 7696 "pretty_printer.c"
                            mercury__pretty_printer__TypeInfo_29_29 = (MR_Word) &mercury__pretty_printer_scalar_common_1[2];
#line 7698 "pretty_printer.c"
                            {
#line 7700 "pretty_printer.c"
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
#line 7728 "pretty_printer.c"
                        {
#line 7730 "pretty_printer.c"
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
#line 7756 "pretty_printer.c"
                        {
#line 7758 "pretty_printer.c"
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

#line 1172 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_tree234_2_f_0(
#line 1172 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1172 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5)
#line 1172 "pretty_printer.m"
{
#line 1174 "pretty_printer.m"
  {
#line 1174 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__ArgDescs_5)) == (MR_mktag((MR_Integer) 1)));
#line 1174 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1174 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_20_20;
#line 1174 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_21_21;
#line 1174 "pretty_printer.m"
    MR_Word mercury__pretty_printer__X_13;
#line 1176 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_22_22;
#line 1176 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_23_23;
#line 1176 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_24_24;
#line 1176 "pretty_printer.m"
    MR_Word mercury__pretty_printer__ArgDescA_6;
#line 1176 "pretty_printer.m"
    MR_Word mercury__pretty_printer__ArgDescB_7;
#line 1176 "pretty_printer.m"
    MR_Box mercury__pretty_printer__Value_12;
#line 1176 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_14_14;
#line 1176 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_15_15;
#line 32 "type_desc.opt"
    MR_Box mercury__pretty_printer__V_16_16;
#line 32 "type_desc.opt"
    MR_Box mercury__pretty_printer__V_17_17;
#line 59 "builtin.opt"
    MR_Box mercury__pretty_printer__conv0_X_13;

#line 1176 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1176 "pretty_printer.m"
      {
#line 1176 "pretty_printer.m"
        mercury__pretty_printer__ArgDescA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 0)));
#line 1176 "pretty_printer.m"
        mercury__pretty_printer__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 1)));
#line 1176 "pretty_printer.m"
        mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 1176 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 1176 "pretty_printer.m"
          {
#line 1176 "pretty_printer.m"
            mercury__pretty_printer__ArgDescB_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_14_14, (MR_Integer) 0)));
#line 1176 "pretty_printer.m"
            mercury__pretty_printer__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_14_14, (MR_Integer) 1)));
#line 1176 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1176 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 1176 "pretty_printer.m"
              {
#line 32 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_tree234_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pretty_printer__ArgDescA_6 ;
		{
#line 32 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 7865 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeInfo_20_20  = TypeInfo_for_T;
#line 32 "type_desc.opt"
}
#line 32 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_tree234_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pretty_printer__ArgDescB_7 ;
		{
#line 32 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 7885 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeInfo_21_21  = TypeInfo_for_T;
#line 32 "type_desc.opt"
}
#line 22 "univ.opt"
                mercury__pretty_printer__TypeInfo_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 0)));
#line 22 "univ.opt"
                mercury__pretty_printer__Value_12 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 1));
#line 7896 "pretty_printer.c"
                mercury__pretty_printer__TypeCtorInfo_23_23 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 7898 "pretty_printer.c"
                {
#line 7900 "pretty_printer.c"
                  mercury__pretty_printer__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7902 "pretty_printer.c"
                  MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_24_24, 0) = ((MR_Box) (mercury__pretty_printer__TypeCtorInfo_23_23));
#line 7904 "pretty_printer.c"
                  MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_24_24, 1) = ((MR_Box) (mercury__pretty_printer__TypeInfo_20_20));
#line 7906 "pretty_printer.c"
                  MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_24_24, 2) = ((MR_Box) (mercury__pretty_printer__TypeInfo_21_21));
#line 7908 "pretty_printer.c"
                }
#line 59 "builtin.opt"
                {
#line 59 "builtin.opt"
                  mercury__pretty_printer__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pretty_printer__TypeInfo_22_22, mercury__pretty_printer__TypeInfo_24_24, mercury__pretty_printer__Value_12, &mercury__pretty_printer__conv0_X_13);
                }
#line 59 "builtin.opt"
                if (mercury__pretty_printer__succeeded)
#line 59 "builtin.opt"
                  {
#line 59 "builtin.opt"
                    mercury__pretty_printer__X_13 = ((MR_Word) mercury__pretty_printer__conv0_X_13);
#line 59 "builtin.opt"
                    mercury__pretty_printer__succeeded = MR_TRUE;
#line 59 "builtin.opt"
                  }
#line 1176 "pretty_printer.m"
              }
#line 1176 "pretty_printer.m"
          }
#line 1176 "pretty_printer.m"
      }
#line 1174 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1182 "pretty_printer.m"
      {
#line 1182 "pretty_printer.m"
        return mercury__pretty_printer__HeadVar__3_3 = mercury__tree234__tree234_to_doc_1_f_0(mercury__pretty_printer__TypeInfo_20_20, mercury__pretty_printer__TypeInfo_21_21, mercury__pretty_printer__X_13);
      }
#line 1174 "pretty_printer.m"
    else
#line 1184 "pretty_printer.m"
      {
#line 1184 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[13]);
#line 1184 "pretty_printer.m"
      }
#line 1174 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1174 "pretty_printer.m"
  }
#line 1172 "pretty_printer.m"
}

#line 1156 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_list_2_f_0(
#line 1156 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1156 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5)
#line 1156 "pretty_printer.m"
{
#line 1158 "pretty_printer.m"
  {
#line 1158 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__ArgDescs_5)) == (MR_mktag((MR_Integer) 1)));
#line 1158 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1158 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_15_15;
#line 1158 "pretty_printer.m"
    MR_Word mercury__pretty_printer__X_10;
#line 1160 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_16_16;
#line 1160 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_17_17;
#line 1160 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_18_18;
#line 1160 "pretty_printer.m"
    MR_Word mercury__pretty_printer__ArgDesc_6;
#line 1160 "pretty_printer.m"
    MR_Box mercury__pretty_printer__Value_9;
#line 1160 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_11_11;
#line 32 "type_desc.opt"
    MR_Box mercury__pretty_printer__V_12_12;
#line 59 "builtin.opt"
    MR_Box mercury__pretty_printer__conv0_X_10;

#line 1160 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1160 "pretty_printer.m"
      {
#line 1160 "pretty_printer.m"
        mercury__pretty_printer__ArgDesc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 0)));
#line 1160 "pretty_printer.m"
        mercury__pretty_printer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 1)));
#line 1160 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1160 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 1160 "pretty_printer.m"
          {
#line 32 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_list_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pretty_printer__ArgDesc_6 ;
		{
#line 32 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 8016 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeInfo_15_15  = TypeInfo_for_T;
#line 32 "type_desc.opt"
}
#line 22 "univ.opt"
            mercury__pretty_printer__TypeInfo_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 0)));
#line 22 "univ.opt"
            mercury__pretty_printer__Value_9 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 1));
#line 8027 "pretty_printer.c"
            mercury__pretty_printer__TypeCtorInfo_17_17 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 8029 "pretty_printer.c"
            {
#line 8031 "pretty_printer.c"
              mercury__pretty_printer__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8033 "pretty_printer.c"
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 0) = ((MR_Box) (mercury__pretty_printer__TypeCtorInfo_17_17));
#line 8035 "pretty_printer.c"
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 1) = ((MR_Box) (mercury__pretty_printer__TypeInfo_15_15));
#line 8037 "pretty_printer.c"
            }
#line 59 "builtin.opt"
            {
#line 59 "builtin.opt"
              mercury__pretty_printer__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pretty_printer__TypeInfo_16_16, mercury__pretty_printer__TypeInfo_18_18, mercury__pretty_printer__Value_9, &mercury__pretty_printer__conv0_X_10);
            }
#line 59 "builtin.opt"
            if (mercury__pretty_printer__succeeded)
#line 59 "builtin.opt"
              {
#line 59 "builtin.opt"
                mercury__pretty_printer__X_10 = ((MR_Word) mercury__pretty_printer__conv0_X_10);
#line 59 "builtin.opt"
                mercury__pretty_printer__succeeded = MR_TRUE;
#line 59 "builtin.opt"
              }
#line 1160 "pretty_printer.m"
          }
#line 1160 "pretty_printer.m"
      }
#line 1158 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1165 "pretty_printer.m"
      {
#line 1165 "pretty_printer.m"
        return mercury__pretty_printer__HeadVar__3_3 = mercury__list__list_to_doc_1_f_0(mercury__pretty_printer__TypeInfo_15_15, mercury__pretty_printer__X_10);
      }
#line 1158 "pretty_printer.m"
    else
#line 1167 "pretty_printer.m"
      {
#line 1167 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[12]);
#line 1167 "pretty_printer.m"
      }
#line 1158 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1158 "pretty_printer.m"
  }
#line 1156 "pretty_printer.m"
}

#line 1140 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_version_array_2_f_0(
#line 1140 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1140 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5)
#line 1140 "pretty_printer.m"
{
#line 1142 "pretty_printer.m"
  {
#line 1142 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__ArgDescs_5)) == (MR_mktag((MR_Integer) 1)));
#line 1142 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1142 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_15_15;
#line 1142 "pretty_printer.m"
    MR_Box mercury__pretty_printer__X_10;
#line 1144 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_16_16;
#line 1144 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_17_17;
#line 1144 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_18_18;
#line 1144 "pretty_printer.m"
    MR_Word mercury__pretty_printer__ArgDesc_6;
#line 1144 "pretty_printer.m"
    MR_Box mercury__pretty_printer__Value_9;
#line 1144 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_11_11;
#line 32 "type_desc.opt"
    MR_Box mercury__pretty_printer__V_12_12;
#line 59 "builtin.opt"
    MR_Box mercury__pretty_printer__conv0_X_10;

#line 1144 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1144 "pretty_printer.m"
      {
#line 1144 "pretty_printer.m"
        mercury__pretty_printer__ArgDesc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 0)));
#line 1144 "pretty_printer.m"
        mercury__pretty_printer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 1)));
#line 1144 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1144 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 1144 "pretty_printer.m"
          {
#line 32 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_version_array_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pretty_printer__ArgDesc_6 ;
		{
#line 32 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 8143 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeInfo_15_15  = TypeInfo_for_T;
#line 32 "type_desc.opt"
}
#line 22 "univ.opt"
            mercury__pretty_printer__TypeInfo_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 0)));
#line 22 "univ.opt"
            mercury__pretty_printer__Value_9 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 1));
#line 8154 "pretty_printer.c"
            mercury__pretty_printer__TypeCtorInfo_17_17 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 8156 "pretty_printer.c"
            {
#line 8158 "pretty_printer.c"
              mercury__pretty_printer__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8160 "pretty_printer.c"
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 0) = ((MR_Box) (mercury__pretty_printer__TypeCtorInfo_17_17));
#line 8162 "pretty_printer.c"
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 1) = ((MR_Box) (mercury__pretty_printer__TypeInfo_15_15));
#line 8164 "pretty_printer.c"
            }
#line 59 "builtin.opt"
            {
#line 59 "builtin.opt"
              mercury__pretty_printer__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pretty_printer__TypeInfo_16_16, mercury__pretty_printer__TypeInfo_18_18, mercury__pretty_printer__Value_9, &mercury__pretty_printer__conv0_X_10);
            }
#line 59 "builtin.opt"
            if (mercury__pretty_printer__succeeded)
#line 59 "builtin.opt"
              {
#line 59 "builtin.opt"
                mercury__pretty_printer__X_10 = ((MR_Box) mercury__pretty_printer__conv0_X_10);
#line 59 "builtin.opt"
                mercury__pretty_printer__succeeded = MR_TRUE;
#line 59 "builtin.opt"
              }
#line 1144 "pretty_printer.m"
          }
#line 1144 "pretty_printer.m"
      }
#line 1142 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1149 "pretty_printer.m"
      {
#line 1149 "pretty_printer.m"
        return mercury__pretty_printer__HeadVar__3_3 = mercury__version_array__version_array_to_doc_1_f_0(mercury__pretty_printer__TypeInfo_15_15, mercury__pretty_printer__X_10);
      }
#line 1142 "pretty_printer.m"
    else
#line 1151 "pretty_printer.m"
      {
#line 1151 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[11]);
#line 1151 "pretty_printer.m"
      }
#line 1142 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1142 "pretty_printer.m"
  }
#line 1140 "pretty_printer.m"
}

#line 1124 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_array_2_f_0(
#line 1124 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1124 "pretty_printer.m"
  MR_Word mercury__pretty_printer__ArgDescs_5)
#line 1124 "pretty_printer.m"
{
#line 1126 "pretty_printer.m"
  {
#line 1126 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__ArgDescs_5)) == (MR_mktag((MR_Integer) 1)));
#line 1126 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 1126 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_15_15;
#line 1126 "pretty_printer.m"
    MR_ArrayPtr mercury__pretty_printer__X_10;
#line 1128 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_16_16;
#line 1128 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_17_17;
#line 1128 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_18_18;
#line 1128 "pretty_printer.m"
    MR_Word mercury__pretty_printer__ArgDesc_6;
#line 1128 "pretty_printer.m"
    MR_Box mercury__pretty_printer__Value_9;
#line 1128 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_11_11;
#line 32 "type_desc.opt"
    MR_Box mercury__pretty_printer__V_12_12;
#line 59 "builtin.opt"
    MR_Box mercury__pretty_printer__conv0_X_10;

#line 1128 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1128 "pretty_printer.m"
      {
#line 1128 "pretty_printer.m"
        mercury__pretty_printer__ArgDesc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 0)));
#line 1128 "pretty_printer.m"
        mercury__pretty_printer__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__ArgDescs_5, (MR_Integer) 1)));
#line 1128 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1128 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 1128 "pretty_printer.m"
          {
#line 32 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__fmt_array_2_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pretty_printer__ArgDesc_6 ;
		{
#line 32 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;

#line 8270 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeInfo_15_15  = TypeInfo_for_T;
#line 32 "type_desc.opt"
}
#line 22 "univ.opt"
            mercury__pretty_printer__TypeInfo_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 0)));
#line 22 "univ.opt"
            mercury__pretty_printer__Value_9 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_4, (MR_Integer) 1));
#line 8281 "pretty_printer.c"
            mercury__pretty_printer__TypeCtorInfo_17_17 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 8283 "pretty_printer.c"
            {
#line 8285 "pretty_printer.c"
              mercury__pretty_printer__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8287 "pretty_printer.c"
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 0) = ((MR_Box) (mercury__pretty_printer__TypeCtorInfo_17_17));
#line 8289 "pretty_printer.c"
              MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeInfo_18_18, 1) = ((MR_Box) (mercury__pretty_printer__TypeInfo_15_15));
#line 8291 "pretty_printer.c"
            }
#line 59 "builtin.opt"
            {
#line 59 "builtin.opt"
              mercury__pretty_printer__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pretty_printer__TypeInfo_16_16, mercury__pretty_printer__TypeInfo_18_18, mercury__pretty_printer__Value_9, &mercury__pretty_printer__conv0_X_10);
            }
#line 59 "builtin.opt"
            if (mercury__pretty_printer__succeeded)
#line 59 "builtin.opt"
              {
#line 59 "builtin.opt"
                mercury__pretty_printer__X_10 = ((MR_ArrayPtr) mercury__pretty_printer__conv0_X_10);
#line 59 "builtin.opt"
                mercury__pretty_printer__succeeded = MR_TRUE;
#line 59 "builtin.opt"
              }
#line 1128 "pretty_printer.m"
          }
#line 1128 "pretty_printer.m"
      }
#line 1126 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 1133 "pretty_printer.m"
      {
#line 1133 "pretty_printer.m"
        return mercury__pretty_printer__HeadVar__3_3 = mercury__array__array_to_doc_1_f_0(mercury__pretty_printer__TypeInfo_15_15, (MR_ArrayPtr) mercury__pretty_printer__X_10);
      }
#line 1126 "pretty_printer.m"
    else
#line 1135 "pretty_printer.m"
      {
#line 1135 "pretty_printer.m"
        mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[10]);
#line 1135 "pretty_printer.m"
      }
#line 1126 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1126 "pretty_printer.m"
  }
#line 1124 "pretty_printer.m"
}

#line 1117 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_string_2_f_0(
#line 1117 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1117 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5)
#line 1117 "pretty_printer.m"
{
#line 1119 "pretty_printer.m"
  {
#line 1119 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1119 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;

#line 1119 "pretty_printer.m"
    {
#line 1119 "pretty_printer.m"
      return mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_115_116_114_105_110_103_95_95_91_50_93_95_48_2_f_0(mercury__pretty_printer__Univ_4);
    }
#line 1119 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1119 "pretty_printer.m"
  }
#line 1117 "pretty_printer.m"
}

#line 1110 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_int_2_f_0(
#line 1110 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1110 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5)
#line 1110 "pretty_printer.m"
{
#line 1112 "pretty_printer.m"
  {
#line 1112 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1112 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;

#line 1112 "pretty_printer.m"
    {
#line 1112 "pretty_printer.m"
      return mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_105_110_116_95_95_91_50_93_95_48_2_f_0(mercury__pretty_printer__Univ_4);
    }
#line 1112 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1112 "pretty_printer.m"
  }
#line 1110 "pretty_printer.m"
}

#line 1103 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_float_2_f_0(
#line 1103 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1103 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5)
#line 1103 "pretty_printer.m"
{
#line 1105 "pretty_printer.m"
  {
#line 1105 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1105 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;

#line 1105 "pretty_printer.m"
    {
#line 1105 "pretty_printer.m"
      return mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_102_108_111_97_116_95_95_91_50_93_95_48_2_f_0(mercury__pretty_printer__Univ_4);
    }
#line 1105 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1105 "pretty_printer.m"
  }
#line 1103 "pretty_printer.m"
}

#line 1096 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__fmt_char_2_f_0(
#line 1096 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_4,
#line 1096 "pretty_printer.m"
  MR_Word mercury__pretty_printer___ArgDescs_5)
#line 1096 "pretty_printer.m"
{
#line 1098 "pretty_printer.m"
  {
#line 1098 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1098 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;

#line 1098 "pretty_printer.m"
    {
#line 1098 "pretty_printer.m"
      return mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_109_116_95_99_104_97_114_95_95_91_50_93_95_48_2_f_0(mercury__pretty_printer__Univ_4);
    }
#line 1098 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 1098 "pretty_printer.m"
  }
#line 1096 "pretty_printer.m"
}

#line 1072 "pretty_printer.m"
MR_Word MR_CALL 
mercury__pretty_printer__initial_formatter_map_0_f_0(void)
#line 1072 "pretty_printer.m"
{
#line 1074 "pretty_printer.m"
  {
#line 1074 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1074 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_3;
#line 1074 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1074 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_9_9;
#line 1074 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_14_14;
#line 1074 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_19_19;
#line 1074 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_24_24;
#line 1074 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_29_29;
#line 1074 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_34_34;
#line 1074 "pretty_printer.m"
    MR_Word mercury__pretty_printer__STATE_VARIABLE_Formatters_39_39;

#line 1076 "pretty_printer.m"
    {
#line 1076 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho9_6_p_0((MR_String) "builtin", (MR_String) "character", (MR_Integer) 0, mercury__pretty_printer__STATE_VARIABLE_Formatters_4_4, &mercury__pretty_printer__STATE_VARIABLE_Formatters_9_9);
    }
#line 1077 "pretty_printer.m"
    {
#line 1077 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho8_6_p_0((MR_String) "builtin", (MR_String) "float", (MR_Integer) 0, mercury__pretty_printer__STATE_VARIABLE_Formatters_9_9, &mercury__pretty_printer__STATE_VARIABLE_Formatters_14_14);
    }
#line 1078 "pretty_printer.m"
    {
#line 1078 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho7_6_p_0((MR_String) "builtin", (MR_String) "int", (MR_Integer) 0, mercury__pretty_printer__STATE_VARIABLE_Formatters_14_14, &mercury__pretty_printer__STATE_VARIABLE_Formatters_19_19);
    }
#line 1079 "pretty_printer.m"
    {
#line 1079 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho6_6_p_0((MR_String) "builtin", (MR_String) "string", (MR_Integer) 0, mercury__pretty_printer__STATE_VARIABLE_Formatters_19_19, &mercury__pretty_printer__STATE_VARIABLE_Formatters_24_24);
    }
#line 1080 "pretty_printer.m"
    {
#line 1080 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho5_6_p_0((MR_String) "array", (MR_String) "array", (MR_Integer) 1, mercury__pretty_printer__STATE_VARIABLE_Formatters_24_24, &mercury__pretty_printer__STATE_VARIABLE_Formatters_29_29);
    }
#line 1081 "pretty_printer.m"
    {
#line 1081 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho4_6_p_0((MR_String) "list", (MR_String) "list", (MR_Integer) 1, mercury__pretty_printer__STATE_VARIABLE_Formatters_29_29, &mercury__pretty_printer__STATE_VARIABLE_Formatters_34_34);
    }
#line 1082 "pretty_printer.m"
    {
#line 1082 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho3_6_p_0((MR_String) "tree234", (MR_String) "tree234", (MR_Integer) 2, mercury__pretty_printer__STATE_VARIABLE_Formatters_34_34, &mercury__pretty_printer__STATE_VARIABLE_Formatters_39_39);
    }
#line 1083 "pretty_printer.m"
    {
#line 1083 "pretty_printer.m"
      mercury__pretty_printer__set_formatter_sv__ho2_6_p_0((MR_String) "version_array", (MR_String) "version_array", (MR_Integer) 1, mercury__pretty_printer__STATE_VARIABLE_Formatters_39_39, &mercury__pretty_printer__STATE_VARIABLE_Formatters_3);
    }
#line 1074 "pretty_printer.m"
    return mercury__pretty_printer__STATE_VARIABLE_Formatters_3;
#line 1074 "pretty_printer.m"
  }
#line 1072 "pretty_printer.m"
}

#line 954 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__unsafe_get_default_formatter_map_3_p_0(
#line 954 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_1)
#line 954 "pretty_printer.m"
{
#line 957 "pretty_printer.m"
  {
#line 957 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 960 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__unsafe_get_default_formatter_map_3_p_0

	MR_Word FMap;

		{
#line 960 "pretty_printer.m"

    FMap = ML_pretty_printer_default_formatter_map;

#line 8544 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__FMap_1  = FMap;
#line 960 "pretty_printer.m"
}
#line 957 "pretty_printer.m"
  }
#line 954 "pretty_printer.m"
}

#line 913 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__pretty_printer_is_initialised_3_p_0(
#line 913 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Okay_1)
#line 913 "pretty_printer.m"
{
#line 915 "pretty_printer.m"
  {
#line 915 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 918 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__pretty_printer_is_initialised_3_p_0

	MR_Word Okay;

		{
#line 918 "pretty_printer.m"

    Okay = ML_pretty_printer_is_initialised;

#line 8579 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__Okay_1  = Okay;
#line 918 "pretty_printer.m"
}
#line 915 "pretty_printer.m"
  }
#line 913 "pretty_printer.m"
}

#line 873 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__set_io_pp_params_3_p_0(
#line 873 "pretty_printer.m"
  MR_Word mercury__pretty_printer__X_4)
#line 873 "pretty_printer.m"
{
#line 873 "pretty_printer.m"
  {
#line 873 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_io_pp_params_3_p_0


		{
#line 873 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 8615 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_io_pp_params_3_p_0

	MR_Word X;

	X =  mercury__pretty_printer__X_4 ;
		{
#line 873 "pretty_printer.m"
mercury__pretty_printer__mutable_variable_io_pp_params = X;

#line 8632 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_io_pp_params_3_p_0


		{
#line 873 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 8650 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
  }
#line 873 "pretty_printer.m"
}

#line 873 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__get_io_pp_params_3_p_0(
#line 873 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__X_4)
#line 873 "pretty_printer.m"
{
#line 873 "pretty_printer.m"
  {
#line 873 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_io_pp_params_3_p_0


		{
#line 873 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 8685 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_io_pp_params_3_p_0

	MR_Word X;

		{
#line 873 "pretty_printer.m"
X = mercury__pretty_printer__mutable_variable_io_pp_params;

#line 8701 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__X_4  = X;
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_io_pp_params_3_p_0


		{
#line 873 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 8720 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
  }
#line 873 "pretty_printer.m"
}

#line 873 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__unsafe_set_io_pp_params_1_p_0(
#line 873 "pretty_printer.m"
  MR_Word mercury__pretty_printer__X_1)
#line 873 "pretty_printer.m"
{
#line 873 "pretty_printer.m"
  {
#line 873 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__unsafe_set_io_pp_params_1_p_0

	MR_Word X;

	X =  mercury__pretty_printer__X_1 ;
		{
#line 873 "pretty_printer.m"
mercury__pretty_printer__mutable_variable_io_pp_params = X;

#line 8754 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
  }
#line 873 "pretty_printer.m"
}

#line 873 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__unsafe_get_io_pp_params_1_p_0(
#line 873 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__X_1)
#line 873 "pretty_printer.m"
{
#line 873 "pretty_printer.m"
  {
#line 873 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__unsafe_get_io_pp_params_1_p_0

	MR_Word X;

		{
#line 873 "pretty_printer.m"
X = mercury__pretty_printer__mutable_variable_io_pp_params;

#line 8787 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__X_1  = X;
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
  }
#line 873 "pretty_printer.m"
}

#line 873 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__unlock_io_pp_params_0_p_0(void)
#line 873 "pretty_printer.m"
{
#line 873 "pretty_printer.m"
  {
#line 873 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__unlock_io_pp_params_0_p_0


		{
#line 873 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 8821 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
  }
#line 873 "pretty_printer.m"
}

#line 873 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__lock_io_pp_params_0_p_0(void)
#line 873 "pretty_printer.m"
{
#line 873 "pretty_printer.m"
  {
#line 873 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__lock_io_pp_params_0_p_0


		{
#line 873 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 8854 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
  }
#line 873 "pretty_printer.m"
}

#line 873 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0(void)
#line 873 "pretty_printer.m"
{
#line 873 "pretty_printer.m"
  {
#line 873 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 873 "pretty_printer.m"
    MR_Word mercury__pretty_printer__X_1;
#line 873 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_4_4;

#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0


		{
#line 873 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, MR_MUTEX_ATTR);
#endif

#line 8890 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
    mercury__pretty_printer__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[9]);
#line 873 "pretty_printer.m"
    mercury__pretty_printer__X_1 = (MR_Word) &mercury__pretty_printer_scalar_common_3[4];
#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0


		{
#line 873 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 8912 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0

	MR_Word X;

	X =  mercury__pretty_printer__X_1 ;
		{
#line 873 "pretty_printer.m"
mercury__pretty_printer__mutable_variable_io_pp_params = X;

#line 8929 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__initialise_mutable_io_pp_params_0_p_0


		{
#line 873 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 8947 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
  }
#line 873 "pretty_printer.m"
}

#line 873 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__pre_initialise_mutable_io_pp_params_0_p_0(void)
#line 873 "pretty_printer.m"
{
#line 873 "pretty_printer.m"
  {
#line 873 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__pre_initialise_mutable_io_pp_params_0_p_0


		{
#line 873 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&mercury__pretty_printer__mutable_variable_io_pp_params_lock, MR_MUTEX_ATTR);
#endif

#line 8979 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
  }
#line 873 "pretty_printer.m"
}

#line 857 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__decrement_limit_2_p_0(
#line 857 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 857 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__2_2)
#line 857 "pretty_printer.m"
{
#line 859 "pretty_printer.m"
  {
#line 859 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 859 "pretty_printer.m"
    if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 859 "pretty_printer.m"
      {
#line 859 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 859 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_4_4 = (mercury__pretty_printer__N_3 - (MR_Integer) 1);

#line 859 "pretty_printer.m"
        {
#line 859 "pretty_printer.m"
          MR_Word base;
#line 859 "pretty_printer.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 859 "pretty_printer.m"
          *mercury__pretty_printer__HeadVar__2_2 = base;
#line 859 "pretty_printer.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__pretty_printer__V_4_4));
#line 859 "pretty_printer.m"
        }
#line 859 "pretty_printer.m"
      }
#line 859 "pretty_printer.m"
    else
#line 860 "pretty_printer.m"
      {
#line 860 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 860 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_7_7 = (mercury__pretty_printer__N_6 - (MR_Integer) 1);

#line 860 "pretty_printer.m"
        {
#line 860 "pretty_printer.m"
          MR_Word base;
#line 860 "pretty_printer.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 860 "pretty_printer.m"
          *mercury__pretty_printer__HeadVar__2_2 = base;
#line 860 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__V_7_7));
#line 860 "pretty_printer.m"
        }
#line 860 "pretty_printer.m"
      }
#line 859 "pretty_printer.m"
  }
#line 857 "pretty_printer.m"
}

#line 837 "pretty_printer.m"
static MR_Integer MR_CALL 
mercury__pretty_printer__adjust_priority_2_f_0(
#line 837 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Priority_4,
#line 837 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Assoc_5)
#line 837 "pretty_printer.m"
{
#line 40 "ops.opt"
  {
#line 40 "ops.opt"
    MR_bool mercury__pretty_printer__succeeded;
#line 40 "ops.opt"
    MR_Integer mercury__pretty_printer__AdjustedPriority_6;

#line 40 "ops.opt"
#line 40 "ops.opt"
    switch (mercury__pretty_printer__Assoc_5) {
#line 40 "ops.opt"
      default: /*NOTREACHED*/ MR_assert(0);
#line 40 "ops.opt"
      case (MR_Integer) 0:
#line 41 "ops.opt"
        {
#line 42 "ops.opt"
          mercury__pretty_printer__AdjustedPriority_6 = (mercury__pretty_printer__Priority_4 - (MR_Integer) 1);
#line 41 "ops.opt"
        }
#line 40 "ops.opt"
        break;
#line 40 "ops.opt"
      case (MR_Integer) 1:
#line 40 "ops.opt"
        mercury__pretty_printer__AdjustedPriority_6 = mercury__pretty_printer__Priority_4;
#line 40 "ops.opt"
        break;
#line 40 "ops.opt"
    }
#line 40 "ops.opt"
    return mercury__pretty_printer__AdjustedPriority_6;
#line 40 "ops.opt"
  }
#line 837 "pretty_printer.m"
}

#line 826 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__add_parens_if_needed_3_f_0(
#line 826 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__OpPriority_5,
#line 826 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__EnclosingPriority_6,
#line 826 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Doc_7)
#line 826 "pretty_printer.m"
{
#line 828 "pretty_printer.m"
  {
#line 828 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded = (mercury__pretty_printer__OpPriority_5 > mercury__pretty_printer__EnclosingPriority_6);
#line 828 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__4_4;

#line 828 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 830 "pretty_printer.m"
      {
#line 830 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_8_8;
#line 830 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[6]);
#line 830 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_11_11;
#line 830 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[12]);
#line 830 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[7]);
#line 830 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 830 "pretty_printer.m"
        {
#line 830 "pretty_printer.m"
          mercury__pretty_printer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_11_11, 0) = ((MR_Box) (mercury__pretty_printer__Doc_7));
#line 830 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_11_11, 1) = ((MR_Box) (mercury__pretty_printer__V_12_12));
#line 830 "pretty_printer.m"
        }
#line 830 "pretty_printer.m"
        {
#line 830 "pretty_printer.m"
          mercury__pretty_printer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_8_8, 0) = ((MR_Box) (mercury__pretty_printer__V_9_9));
#line 830 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_8_8, 1) = ((MR_Box) (mercury__pretty_printer__V_11_11));
#line 830 "pretty_printer.m"
        }
#line 830 "pretty_printer.m"
        {
#line 830 "pretty_printer.m"
          mercury__pretty_printer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 830 "pretty_printer.m"
          MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__4_4, 0) = ((MR_Box) (mercury__pretty_printer__V_8_8));
#line 830 "pretty_printer.m"
        }
#line 830 "pretty_printer.m"
      }
#line 828 "pretty_printer.m"
    else
#line 832 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__Doc_7;
#line 828 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__4_4;
#line 828 "pretty_printer.m"
  }
#line 826 "pretty_printer.m"
}

#line 815 "pretty_printer.m"
static MR_Word MR_CALL 
mercury__pretty_printer__set_formatting_limit_correctly_2_f_0(
#line 815 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 815 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2)
#line 815 "pretty_printer.m"
{
#line 817 "pretty_printer.m"
  {
#line 817 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 817 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;

#line 817 "pretty_printer.m"
    if (((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 818 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__2_2;
#line 817 "pretty_printer.m"
    else
#line 819 "pretty_printer.m"
      {
#line 819 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_9_9;
#line 819 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_10_10;
#line 819 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_11_11;
#line 819 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_12_12;
#line 819 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_13_13;

#line 820 "pretty_printer.m"
        {
#line 820 "pretty_printer.m"
          mercury__pretty_printer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 820 "pretty_printer.m"
          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_12_12, 0) = ((MR_Box) (mercury__pretty_printer__HeadVar__1_1));
#line 820 "pretty_printer.m"
        }
#line 820 "pretty_printer.m"
        {
#line 820 "pretty_printer.m"
          mercury__pretty_printer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "pretty_printer.m"
          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 820 "pretty_printer.m"
          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_11_11, 1) = ((MR_Box) (mercury__pretty_printer__V_12_12));
#line 820 "pretty_printer.m"
        }
#line 820 "pretty_printer.m"
        mercury__pretty_printer__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 820 "pretty_printer.m"
        {
#line 820 "pretty_printer.m"
          mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_10_10, 0) = ((MR_Box) (mercury__pretty_printer__V_11_11));
#line 820 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_10_10, 1) = ((MR_Box) (mercury__pretty_printer__V_13_13));
#line 820 "pretty_printer.m"
        }
#line 820 "pretty_printer.m"
        {
#line 820 "pretty_printer.m"
          mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 0) = ((MR_Box) (mercury__pretty_printer__HeadVar__2_2));
#line 820 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 1) = ((MR_Box) (mercury__pretty_printer__V_10_10));
#line 820 "pretty_printer.m"
        }
#line 820 "pretty_printer.m"
        {
#line 820 "pretty_printer.m"
          mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 820 "pretty_printer.m"
          MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_9_9));
#line 820 "pretty_printer.m"
        }
#line 819 "pretty_printer.m"
      }
#line 817 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 817 "pretty_printer.m"
  }
#line 815 "pretty_printer.m"
}

#line 749 "pretty_printer.m"
static MR_bool MR_CALL 
mercury__pretty_printer__expand_format_op_4_p_0(
#line 749 "pretty_printer.m"
  MR_String mercury__pretty_printer__Op_1,
#line 749 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 749 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_3,
#line 749 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Docs_4)
#line 749 "pretty_printer.m"
{
#line 752 "pretty_printer.m"
  {
#line 752 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 752 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_110_110;
#line 752 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_111_111;

#line 752 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 752 "pretty_printer.m"
      {
#line 752 "pretty_printer.m"
        mercury__pretty_printer__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 752 "pretty_printer.m"
        mercury__pretty_printer__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 752 "pretty_printer.m"
        if ((mercury__pretty_printer__V_110_110 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 761 "pretty_printer.m"
          {
#line 761 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__OpPri_9;
#line 761 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Assoc_10;
#line 753 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_106;

#line 753 "pretty_printer.m"
            {
#line 753 "pretty_printer.m"
              mercury__ops__init_mercury_op_table_0_f_0();
            }
#line 9315 "pretty_printer.c"
            mercury__pretty_printer__TypeClassInfo_for_op_table_106 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 753 "pretty_printer.m"
            {
#line 753 "pretty_printer.m"
              mercury__pretty_printer__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__pretty_printer__TypeClassInfo_for_op_table_106, ((MR_Box) ((MR_Integer) 0)), mercury__pretty_printer__Op_1, &mercury__pretty_printer__OpPri_9, &mercury__pretty_printer__Assoc_10);
            }
#line 761 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 759 "pretty_printer.m"
              {
#line 759 "pretty_printer.m"
                MR_Word mercury__pretty_printer__Doc_11;
#line 759 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_14_14;
#line 759 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_15_15;
#line 759 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_16_16;
#line 759 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_17_17;
#line 759 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_18_18;
#line 759 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__V_19_19;
#line 759 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_20_20;
#line 759 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_21_21;
#line 759 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_22_22;

#line 756 "pretty_printer.m"
                {
#line 756 "pretty_printer.m"
                  mercury__pretty_printer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 756 "pretty_printer.m"
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_15_15, 0) = ((MR_Box) (mercury__pretty_printer__Op_1));
#line 756 "pretty_printer.m"
                }
#line 757 "pretty_printer.m"
                {
#line 757 "pretty_printer.m"
                  mercury__pretty_printer__V_19_19 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_9, mercury__pretty_printer__Assoc_10);
                }
#line 757 "pretty_printer.m"
                {
#line 757 "pretty_printer.m"
                  mercury__pretty_printer__V_18_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 757 "pretty_printer.m"
                  MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_18_18, 0) = ((MR_Box) (mercury__pretty_printer__V_19_19));
#line 757 "pretty_printer.m"
                }
#line 757 "pretty_printer.m"
                {
#line 757 "pretty_printer.m"
                  mercury__pretty_printer__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 757 "pretty_printer.m"
                  MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 757 "pretty_printer.m"
                  MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_17_17, 1) = ((MR_Box) (mercury__pretty_printer__V_18_18));
#line 757 "pretty_printer.m"
                }
#line 758 "pretty_printer.m"
                {
#line 758 "pretty_printer.m"
                  mercury__pretty_printer__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "pretty_printer.m"
                  MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 758 "pretty_printer.m"
                  MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_21_21, 1) = ((MR_Box) (mercury__pretty_printer__V_111_111));
#line 758 "pretty_printer.m"
                }
#line 759 "pretty_printer.m"
                mercury__pretty_printer__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 759 "pretty_printer.m"
                {
#line 759 "pretty_printer.m"
                  mercury__pretty_printer__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "pretty_printer.m"
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_20_20, 0) = ((MR_Box) (mercury__pretty_printer__V_21_21));
#line 759 "pretty_printer.m"
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_20_20, 1) = ((MR_Box) (mercury__pretty_printer__V_22_22));
#line 759 "pretty_printer.m"
                }
#line 757 "pretty_printer.m"
                {
#line 757 "pretty_printer.m"
                  mercury__pretty_printer__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 757 "pretty_printer.m"
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_16_16, 0) = ((MR_Box) (mercury__pretty_printer__V_17_17));
#line 757 "pretty_printer.m"
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_16_16, 1) = ((MR_Box) (mercury__pretty_printer__V_20_20));
#line 757 "pretty_printer.m"
                }
#line 756 "pretty_printer.m"
                {
#line 756 "pretty_printer.m"
                  mercury__pretty_printer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 756 "pretty_printer.m"
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_14_14, 0) = ((MR_Box) (mercury__pretty_printer__V_15_15));
#line 756 "pretty_printer.m"
                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_14_14, 1) = ((MR_Box) (mercury__pretty_printer__V_16_16));
#line 756 "pretty_printer.m"
                }
#line 755 "pretty_printer.m"
                {
#line 755 "pretty_printer.m"
                  mercury__pretty_printer__Doc_11 = mercury__pretty_printer__group_1_f_0(mercury__pretty_printer__V_14_14);
                }
#line 760 "pretty_printer.m"
                {
#line 760 "pretty_printer.m"
                  *mercury__pretty_printer__Docs_4 = mercury__pretty_printer__add_parens_if_needed_3_f_0(mercury__pretty_printer__OpPri_9, mercury__pretty_printer__CurrentPri_3, mercury__pretty_printer__Doc_11);
                }
#line 759 "pretty_printer.m"
                mercury__pretty_printer__succeeded = MR_TRUE;
#line 759 "pretty_printer.m"
              }
#line 761 "pretty_printer.m"
            else
#line 762 "pretty_printer.m"
              {
#line 762 "pretty_printer.m"
                MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_107;
#line 762 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_24_24;
#line 762 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_25_25;
#line 762 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_26_26;
#line 762 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__V_27_27;
#line 762 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_28_28;
#line 762 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_29_29;
#line 762 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_30_30;
#line 762 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_31_31;
#line 762 "pretty_printer.m"
                MR_Word mercury__pretty_printer__V_32_32;
#line 762 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__OpPri_33;
#line 762 "pretty_printer.m"
                MR_Word mercury__pretty_printer__Assoc_34;
#line 762 "pretty_printer.m"
                MR_Word mercury__pretty_printer__Doc_35;

#line 762 "pretty_printer.m"
                {
#line 762 "pretty_printer.m"
                  mercury__ops__init_mercury_op_table_0_f_0();
                }
#line 9470 "pretty_printer.c"
                mercury__pretty_printer__TypeClassInfo_for_op_table_107 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 762 "pretty_printer.m"
                {
#line 762 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__pretty_printer__TypeClassInfo_for_op_table_107, ((MR_Box) ((MR_Integer) 0)), mercury__pretty_printer__Op_1, &mercury__pretty_printer__OpPri_33, &mercury__pretty_printer__Assoc_34);
                }
#line 762 "pretty_printer.m"
                if (mercury__pretty_printer__succeeded)
#line 762 "pretty_printer.m"
                  {
#line 765 "pretty_printer.m"
                    {
#line 765 "pretty_printer.m"
                      mercury__pretty_printer__V_27_27 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_33, mercury__pretty_printer__Assoc_34);
                    }
#line 768 "pretty_printer.m"
                    mercury__pretty_printer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 765 "pretty_printer.m"
                    {
#line 765 "pretty_printer.m"
                      mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 765 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_26_26, 0) = ((MR_Box) (mercury__pretty_printer__V_27_27));
#line 765 "pretty_printer.m"
                    }
#line 765 "pretty_printer.m"
                    {
#line 765 "pretty_printer.m"
                      mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 765 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_25_25, 1) = ((MR_Box) (mercury__pretty_printer__V_26_26));
#line 765 "pretty_printer.m"
                    }
#line 766 "pretty_printer.m"
                    {
#line 766 "pretty_printer.m"
                      mercury__pretty_printer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 766 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_29_29, 1) = ((MR_Box) (mercury__pretty_printer__V_111_111));
#line 766 "pretty_printer.m"
                    }
#line 767 "pretty_printer.m"
                    {
#line 767 "pretty_printer.m"
                      mercury__pretty_printer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 767 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_31_31, 0) = ((MR_Box) (mercury__pretty_printer__Op_1));
#line 767 "pretty_printer.m"
                    }
#line 768 "pretty_printer.m"
                    {
#line 768 "pretty_printer.m"
                      mercury__pretty_printer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_30_30, 0) = ((MR_Box) (mercury__pretty_printer__V_31_31));
#line 768 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_30_30, 1) = ((MR_Box) (mercury__pretty_printer__V_32_32));
#line 768 "pretty_printer.m"
                    }
#line 766 "pretty_printer.m"
                    {
#line 766 "pretty_printer.m"
                      mercury__pretty_printer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_28_28, 0) = ((MR_Box) (mercury__pretty_printer__V_29_29));
#line 766 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_28_28, 1) = ((MR_Box) (mercury__pretty_printer__V_30_30));
#line 766 "pretty_printer.m"
                    }
#line 765 "pretty_printer.m"
                    {
#line 765 "pretty_printer.m"
                      mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_24_24, 0) = ((MR_Box) (mercury__pretty_printer__V_25_25));
#line 765 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_24_24, 1) = ((MR_Box) (mercury__pretty_printer__V_28_28));
#line 765 "pretty_printer.m"
                    }
#line 764 "pretty_printer.m"
                    {
#line 764 "pretty_printer.m"
                      mercury__pretty_printer__Doc_35 = mercury__pretty_printer__group_1_f_0(mercury__pretty_printer__V_24_24);
                    }
#line 769 "pretty_printer.m"
                    {
#line 769 "pretty_printer.m"
                      *mercury__pretty_printer__Docs_4 = mercury__pretty_printer__add_parens_if_needed_3_f_0(mercury__pretty_printer__OpPri_33, mercury__pretty_printer__CurrentPri_3, mercury__pretty_printer__Doc_35);
                    }
#line 769 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = MR_TRUE;
#line 762 "pretty_printer.m"
                  }
#line 762 "pretty_printer.m"
              }
#line 761 "pretty_printer.m"
          }
#line 752 "pretty_printer.m"
        else
#line 771 "pretty_printer.m"
          {
#line 771 "pretty_printer.m"
            MR_Word mercury__pretty_printer__ArgB_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_110_110, (MR_Integer) 0)));
#line 771 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_110_110, (MR_Integer) 1)));
#line 793 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__OpPri_41;
#line 793 "pretty_printer.m"
            MR_Word mercury__pretty_printer__AssocA_42;
#line 793 "pretty_printer.m"
            MR_Word mercury__pretty_printer__AssocB_43;
#line 773 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_108;

#line 771 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 771 "pretty_printer.m"
              {
#line 773 "pretty_printer.m"
                {
#line 773 "pretty_printer.m"
                  mercury__ops__init_mercury_op_table_0_f_0();
                }
#line 9600 "pretty_printer.c"
                mercury__pretty_printer__TypeClassInfo_for_op_table_108 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 773 "pretty_printer.m"
                {
#line 773 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__pretty_printer__TypeClassInfo_for_op_table_108, ((MR_Box) ((MR_Integer) 0)), mercury__pretty_printer__Op_1, &mercury__pretty_printer__OpPri_41, &mercury__pretty_printer__AssocA_42, &mercury__pretty_printer__AssocB_43);
                }
#line 793 "pretty_printer.m"
                if (mercury__pretty_printer__succeeded)
#line 791 "pretty_printer.m"
                  {
#line 791 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__Doc_44;
#line 791 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_48_48;
#line 791 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_49_49;
#line 791 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_50_50;
#line 791 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__V_51_51;
#line 791 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_52_52;
#line 791 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_53_53;
#line 791 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_54_54;
#line 791 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_55_55;
#line 791 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_65_65;
#line 791 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_66_66;
#line 791 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_67_67;
#line 791 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_68_68;
#line 791 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_69_69;
#line 791 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_70_70;
#line 791 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_71_71;
#line 791 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__V_72_72;
#line 791 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_73_73;
#line 791 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_74_74;
#line 791 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_75_75;
#line 791 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_76_76;

#line 778 "pretty_printer.m"
                    {
#line 778 "pretty_printer.m"
                      mercury__pretty_printer__V_51_51 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_41, mercury__pretty_printer__AssocA_42);
                    }
#line 778 "pretty_printer.m"
                    {
#line 778 "pretty_printer.m"
                      mercury__pretty_printer__V_50_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 778 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_50_50, 0) = ((MR_Box) (mercury__pretty_printer__V_51_51));
#line 778 "pretty_printer.m"
                    }
#line 778 "pretty_printer.m"
                    {
#line 778 "pretty_printer.m"
                      mercury__pretty_printer__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 778 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_49_49, 1) = ((MR_Box) (mercury__pretty_printer__V_50_50));
#line 778 "pretty_printer.m"
                    }
#line 779 "pretty_printer.m"
                    {
#line 779 "pretty_printer.m"
                      mercury__pretty_printer__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 779 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_53_53, 1) = ((MR_Box) (mercury__pretty_printer__V_111_111));
#line 779 "pretty_printer.m"
                    }
#line 780 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = (strcmp(mercury__pretty_printer__Op_1, (MR_String) ".") == 0);
#line 784 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 781 "pretty_printer.m"
                      {
#line 781 "pretty_printer.m"
                        mercury__pretty_printer__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 781 "pretty_printer.m"
                        MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_55_55, 0) = ((MR_Box) (mercury__pretty_printer__Op_1));
#line 781 "pretty_printer.m"
                      }
#line 784 "pretty_printer.m"
                    else
#line 783 "pretty_printer.m"
                      {
#line 783 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_56_56;
#line 783 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[8]);
#line 783 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_59_59;
#line 783 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_60_60;
#line 783 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_61_61;
#line 783 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_64_64;

#line 783 "pretty_printer.m"
                        {
#line 783 "pretty_printer.m"
                          mercury__pretty_printer__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 783 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_60_60, 0) = ((MR_Box) (mercury__pretty_printer__Op_1));
#line 783 "pretty_printer.m"
                        }
#line 783 "pretty_printer.m"
                        mercury__pretty_printer__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 783 "pretty_printer.m"
                        mercury__pretty_printer__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[13]);
#line 783 "pretty_printer.m"
                        {
#line 783 "pretty_printer.m"
                          mercury__pretty_printer__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_59_59, 0) = ((MR_Box) (mercury__pretty_printer__V_60_60));
#line 783 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_59_59, 1) = ((MR_Box) (mercury__pretty_printer__V_61_61));
#line 783 "pretty_printer.m"
                        }
#line 783 "pretty_printer.m"
                        {
#line 783 "pretty_printer.m"
                          mercury__pretty_printer__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_56_56, 0) = ((MR_Box) (mercury__pretty_printer__V_57_57));
#line 783 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_56_56, 1) = ((MR_Box) (mercury__pretty_printer__V_59_59));
#line 783 "pretty_printer.m"
                        }
#line 783 "pretty_printer.m"
                        {
#line 783 "pretty_printer.m"
                          mercury__pretty_printer__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 783 "pretty_printer.m"
                          MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_55_55, 0) = ((MR_Box) (mercury__pretty_printer__V_56_56));
#line 783 "pretty_printer.m"
                        }
#line 783 "pretty_printer.m"
                      }
#line 786 "pretty_printer.m"
                    mercury__pretty_printer__V_68_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 787 "pretty_printer.m"
                    {
#line 787 "pretty_printer.m"
                      mercury__pretty_printer__V_72_72 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_41, mercury__pretty_printer__AssocB_43);
                    }
#line 787 "pretty_printer.m"
                    {
#line 787 "pretty_printer.m"
                      mercury__pretty_printer__V_71_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 787 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_71_71, 0) = ((MR_Box) (mercury__pretty_printer__V_72_72));
#line 787 "pretty_printer.m"
                    }
#line 787 "pretty_printer.m"
                    {
#line 787 "pretty_printer.m"
                      mercury__pretty_printer__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 787 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_70_70, 1) = ((MR_Box) (mercury__pretty_printer__V_71_71));
#line 787 "pretty_printer.m"
                    }
#line 789 "pretty_printer.m"
                    {
#line 789 "pretty_printer.m"
                      mercury__pretty_printer__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 789 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_74_74, 1) = ((MR_Box) (mercury__pretty_printer__ArgB_38));
#line 789 "pretty_printer.m"
                    }
#line 790 "pretty_printer.m"
                    mercury__pretty_printer__V_75_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 790 "pretty_printer.m"
                    {
#line 790 "pretty_printer.m"
                      mercury__pretty_printer__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_73_73, 0) = ((MR_Box) (mercury__pretty_printer__V_74_74));
#line 790 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_73_73, 1) = ((MR_Box) (mercury__pretty_printer__V_75_75));
#line 790 "pretty_printer.m"
                    }
#line 788 "pretty_printer.m"
                    {
#line 788 "pretty_printer.m"
                      mercury__pretty_printer__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_69_69, 0) = ((MR_Box) (mercury__pretty_printer__V_70_70));
#line 788 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_69_69, 1) = ((MR_Box) (mercury__pretty_printer__V_73_73));
#line 788 "pretty_printer.m"
                    }
#line 786 "pretty_printer.m"
                    {
#line 786 "pretty_printer.m"
                      mercury__pretty_printer__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_67_67, 0) = ((MR_Box) (mercury__pretty_printer__V_68_68));
#line 786 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_67_67, 1) = ((MR_Box) (mercury__pretty_printer__V_69_69));
#line 786 "pretty_printer.m"
                    }
#line 785 "pretty_printer.m"
                    {
#line 785 "pretty_printer.m"
                      mercury__pretty_printer__V_66_66 = mercury__pretty_printer__indent_1_f_0(mercury__pretty_printer__V_67_67);
                    }
#line 791 "pretty_printer.m"
                    mercury__pretty_printer__V_76_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 791 "pretty_printer.m"
                    {
#line 791 "pretty_printer.m"
                      mercury__pretty_printer__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_65_65, 0) = ((MR_Box) (mercury__pretty_printer__V_66_66));
#line 791 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_65_65, 1) = ((MR_Box) (mercury__pretty_printer__V_76_76));
#line 791 "pretty_printer.m"
                    }
#line 784 "pretty_printer.m"
                    {
#line 784 "pretty_printer.m"
                      mercury__pretty_printer__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_54_54, 0) = ((MR_Box) (mercury__pretty_printer__V_55_55));
#line 784 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_54_54, 1) = ((MR_Box) (mercury__pretty_printer__V_65_65));
#line 784 "pretty_printer.m"
                    }
#line 779 "pretty_printer.m"
                    {
#line 779 "pretty_printer.m"
                      mercury__pretty_printer__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_52_52, 0) = ((MR_Box) (mercury__pretty_printer__V_53_53));
#line 779 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_52_52, 1) = ((MR_Box) (mercury__pretty_printer__V_54_54));
#line 779 "pretty_printer.m"
                    }
#line 778 "pretty_printer.m"
                    {
#line 778 "pretty_printer.m"
                      mercury__pretty_printer__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_48_48, 0) = ((MR_Box) (mercury__pretty_printer__V_49_49));
#line 778 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_48_48, 1) = ((MR_Box) (mercury__pretty_printer__V_52_52));
#line 778 "pretty_printer.m"
                    }
#line 777 "pretty_printer.m"
                    {
#line 777 "pretty_printer.m"
                      mercury__pretty_printer__Doc_44 = mercury__pretty_printer__group_1_f_0(mercury__pretty_printer__V_48_48);
                    }
#line 792 "pretty_printer.m"
                    {
#line 792 "pretty_printer.m"
                      *mercury__pretty_printer__Docs_4 = mercury__pretty_printer__add_parens_if_needed_3_f_0(mercury__pretty_printer__OpPri_41, mercury__pretty_printer__CurrentPri_3, mercury__pretty_printer__Doc_44);
                    }
#line 791 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = MR_TRUE;
#line 791 "pretty_printer.m"
                  }
#line 793 "pretty_printer.m"
                else
#line 795 "pretty_printer.m"
                  {
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_109;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_78_78;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_79_79;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_80_80;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_81_81;
#line 795 "pretty_printer.m"
                    MR_String mercury__pretty_printer__V_82_82;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_83_83;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_84_84;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_85_85;
#line 795 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__V_86_86;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_87_87;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_88_88;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_89_89;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_92_92;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_93_93;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_94_94;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_95_95;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_96_96;
#line 795 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__V_97_97;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_98_98;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_99_99;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_100_100;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_101_101;
#line 795 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__OpPri_102;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__AssocA_103;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__AssocB_104;
#line 795 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__Doc_105;

#line 794 "pretty_printer.m"
                    {
#line 794 "pretty_printer.m"
                      mercury__ops__init_mercury_op_table_0_f_0();
                    }
#line 9950 "pretty_printer.c"
                    mercury__pretty_printer__TypeClassInfo_for_op_table_109 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 794 "pretty_printer.m"
                    {
#line 794 "pretty_printer.m"
                      mercury__pretty_printer__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__pretty_printer__TypeClassInfo_for_op_table_109, ((MR_Box) ((MR_Integer) 0)), mercury__pretty_printer__Op_1, &mercury__pretty_printer__OpPri_102, &mercury__pretty_printer__AssocA_103, &mercury__pretty_printer__AssocB_104);
                    }
#line 795 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 795 "pretty_printer.m"
                      {
#line 798 "pretty_printer.m"
                        mercury__pretty_printer__V_82_82 = (MR_String) " ";
#line 798 "pretty_printer.m"
                        {
#line 798 "pretty_printer.m"
                          mercury__pretty_printer__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 798 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_79_79, 0) = ((MR_Box) (mercury__pretty_printer__Op_1));
#line 798 "pretty_printer.m"
                        }
#line 798 "pretty_printer.m"
                        mercury__pretty_printer__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[8]);
#line 799 "pretty_printer.m"
                        {
#line 799 "pretty_printer.m"
                          mercury__pretty_printer__V_86_86 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_102, mercury__pretty_printer__AssocA_103);
                        }
#line 799 "pretty_printer.m"
                        {
#line 799 "pretty_printer.m"
                          mercury__pretty_printer__V_85_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 799 "pretty_printer.m"
                          MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_85_85, 0) = ((MR_Box) (mercury__pretty_printer__V_86_86));
#line 799 "pretty_printer.m"
                        }
#line 799 "pretty_printer.m"
                        {
#line 799 "pretty_printer.m"
                          mercury__pretty_printer__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 799 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_84_84, 1) = ((MR_Box) (mercury__pretty_printer__V_85_85));
#line 799 "pretty_printer.m"
                        }
#line 800 "pretty_printer.m"
                        {
#line 800 "pretty_printer.m"
                          mercury__pretty_printer__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 800 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_88_88, 1) = ((MR_Box) (mercury__pretty_printer__V_111_111));
#line 800 "pretty_printer.m"
                        }
#line 803 "pretty_printer.m"
                        {
#line 803 "pretty_printer.m"
                          mercury__pretty_printer__V_97_97 = mercury__pretty_printer__adjust_priority_2_f_0(mercury__pretty_printer__OpPri_102, mercury__pretty_printer__AssocB_104);
                        }
#line 806 "pretty_printer.m"
                        mercury__pretty_printer__V_100_100 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 803 "pretty_printer.m"
                        {
#line 803 "pretty_printer.m"
                          mercury__pretty_printer__V_96_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 803 "pretty_printer.m"
                          MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_96_96, 0) = ((MR_Box) (mercury__pretty_printer__V_97_97));
#line 803 "pretty_printer.m"
                        }
#line 803 "pretty_printer.m"
                        {
#line 803 "pretty_printer.m"
                          mercury__pretty_printer__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 803 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_95_95, 1) = ((MR_Box) (mercury__pretty_printer__V_96_96));
#line 803 "pretty_printer.m"
                        }
#line 805 "pretty_printer.m"
                        {
#line 805 "pretty_printer.m"
                          mercury__pretty_printer__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 805 "pretty_printer.m"
                          MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_99_99, 1) = ((MR_Box) (mercury__pretty_printer__ArgB_38));
#line 805 "pretty_printer.m"
                        }
#line 806 "pretty_printer.m"
                        {
#line 806 "pretty_printer.m"
                          mercury__pretty_printer__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_98_98, 0) = ((MR_Box) (mercury__pretty_printer__V_99_99));
#line 806 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_98_98, 1) = ((MR_Box) (mercury__pretty_printer__V_100_100));
#line 806 "pretty_printer.m"
                        }
#line 804 "pretty_printer.m"
                        {
#line 804 "pretty_printer.m"
                          mercury__pretty_printer__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 0) = ((MR_Box) (mercury__pretty_printer__V_95_95));
#line 804 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 1) = ((MR_Box) (mercury__pretty_printer__V_98_98));
#line 804 "pretty_printer.m"
                        }
#line 802 "pretty_printer.m"
                        {
#line 802 "pretty_printer.m"
                          mercury__pretty_printer__V_93_93 = mercury__pretty_printer__indent_1_f_0(mercury__pretty_printer__V_94_94);
                        }
#line 807 "pretty_printer.m"
                        mercury__pretty_printer__V_101_101 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 807 "pretty_printer.m"
                        {
#line 807 "pretty_printer.m"
                          mercury__pretty_printer__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_92_92, 0) = ((MR_Box) (mercury__pretty_printer__V_93_93));
#line 807 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_92_92, 1) = ((MR_Box) (mercury__pretty_printer__V_101_101));
#line 807 "pretty_printer.m"
                        }
#line 801 "pretty_printer.m"
                        {
#line 801 "pretty_printer.m"
                          mercury__pretty_printer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 0) = ((MR_Box) (mercury__pretty_printer__V_81_81));
#line 801 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 1) = ((MR_Box) (mercury__pretty_printer__V_92_92));
#line 801 "pretty_printer.m"
                        }
#line 800 "pretty_printer.m"
                        {
#line 800 "pretty_printer.m"
                          mercury__pretty_printer__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_87_87, 0) = ((MR_Box) (mercury__pretty_printer__V_88_88));
#line 800 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_87_87, 1) = ((MR_Box) (mercury__pretty_printer__V_89_89));
#line 800 "pretty_printer.m"
                        }
#line 799 "pretty_printer.m"
                        {
#line 799 "pretty_printer.m"
                          mercury__pretty_printer__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_83_83, 0) = ((MR_Box) (mercury__pretty_printer__V_84_84));
#line 799 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_83_83, 1) = ((MR_Box) (mercury__pretty_printer__V_87_87));
#line 799 "pretty_printer.m"
                        }
#line 798 "pretty_printer.m"
                        {
#line 798 "pretty_printer.m"
                          mercury__pretty_printer__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_80_80, 0) = ((MR_Box) (mercury__pretty_printer__V_81_81));
#line 798 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_80_80, 1) = ((MR_Box) (mercury__pretty_printer__V_83_83));
#line 798 "pretty_printer.m"
                        }
#line 798 "pretty_printer.m"
                        {
#line 798 "pretty_printer.m"
                          mercury__pretty_printer__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_78_78, 0) = ((MR_Box) (mercury__pretty_printer__V_79_79));
#line 798 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_78_78, 1) = ((MR_Box) (mercury__pretty_printer__V_80_80));
#line 798 "pretty_printer.m"
                        }
#line 797 "pretty_printer.m"
                        {
#line 797 "pretty_printer.m"
                          mercury__pretty_printer__Doc_105 = mercury__pretty_printer__group_1_f_0(mercury__pretty_printer__V_78_78);
                        }
#line 808 "pretty_printer.m"
                        {
#line 808 "pretty_printer.m"
                          *mercury__pretty_printer__Docs_4 = mercury__pretty_printer__add_parens_if_needed_3_f_0(mercury__pretty_printer__OpPri_102, mercury__pretty_printer__CurrentPri_3, mercury__pretty_printer__Doc_105);
                        }
#line 808 "pretty_printer.m"
                        mercury__pretty_printer__succeeded = MR_TRUE;
#line 795 "pretty_printer.m"
                      }
#line 795 "pretty_printer.m"
                  }
#line 771 "pretty_printer.m"
              }
#line 771 "pretty_printer.m"
          }
#line 752 "pretty_printer.m"
      }
#line 752 "pretty_printer.m"
    return mercury__pretty_printer__succeeded;
#line 752 "pretty_printer.m"
  }
#line 749 "pretty_printer.m"
}

#line 733 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_format_susp_4_p_0(
#line 733 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Susp_5,
#line 733 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_6,
#line 733 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_8,
#line 733 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_9)
#line 733 "pretty_printer.m"
{
#line 739 "pretty_printer.m"
  {
#line 739 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 848 "pretty_printer.m"
    if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_8)) == (MR_mktag((MR_Integer) 0))))
#line 848 "pretty_printer.m"
      {
#line 848 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_8, (MR_Integer) 0)));

#line 849 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_12 <= (MR_Integer) 0);
#line 848 "pretty_printer.m"
      }
#line 848 "pretty_printer.m"
    else
#line 850 "pretty_printer.m"
      {
#line 850 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_8, (MR_Integer) 0)));

#line 851 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_14 <= (MR_Integer) 0);
#line 850 "pretty_printer.m"
      }
#line 739 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 738 "pretty_printer.m"
      {
#line 1191 "pretty_printer.m"
        *mercury__pretty_printer__Doc_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1]);
#line 738 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_Limit_9 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_8;
#line 738 "pretty_printer.m"
      }
#line 739 "pretty_printer.m"
    else
#line 740 "pretty_printer.m"
      {
#line 740 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_11_11;
#line 741 "pretty_printer.m"
        MR_Box MR_CALL (* mercury__pretty_printer__func_0)(MR_Box);
#line 741 "pretty_printer.m"
        MR_Box mercury__pretty_printer__conv1_V_11_11;

#line 859 "pretty_printer.m"
        if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_8)) == (MR_mktag((MR_Integer) 0))))
#line 859 "pretty_printer.m"
          {
#line 859 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__N_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_8, (MR_Integer) 0)));
#line 859 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__V_18_18 = (mercury__pretty_printer__N_17 - (MR_Integer) 1);

#line 859 "pretty_printer.m"
            {
#line 859 "pretty_printer.m"
              MR_Word base;
#line 859 "pretty_printer.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 859 "pretty_printer.m"
              *mercury__pretty_printer__STATE_VARIABLE_Limit_9 = base;
#line 859 "pretty_printer.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__pretty_printer__V_18_18));
#line 859 "pretty_printer.m"
            }
#line 859 "pretty_printer.m"
          }
#line 859 "pretty_printer.m"
        else
#line 860 "pretty_printer.m"
          {
#line 860 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__N_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_8, (MR_Integer) 0)));
#line 860 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__V_21_21 = (mercury__pretty_printer__N_20 - (MR_Integer) 1);

#line 860 "pretty_printer.m"
            {
#line 860 "pretty_printer.m"
              MR_Word base;
#line 860 "pretty_printer.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 860 "pretty_printer.m"
              *mercury__pretty_printer__STATE_VARIABLE_Limit_9 = base;
#line 860 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__V_21_21));
#line 860 "pretty_printer.m"
            }
#line 860 "pretty_printer.m"
          }
#line 741 "pretty_printer.m"
        mercury__pretty_printer__func_0 = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Susp_5, (MR_Integer) 1)));
#line 741 "pretty_printer.m"
        {
#line 741 "pretty_printer.m"
          mercury__pretty_printer__conv1_V_11_11 = mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__Susp_5));
        }
#line 741 "pretty_printer.m"
        mercury__pretty_printer__V_11_11 = ((MR_Word) mercury__pretty_printer__conv1_V_11_11);
#line 817 "pretty_printer.m"
        if (((MR_tag((MR_Word) *mercury__pretty_printer__STATE_VARIABLE_Limit_9)) == (MR_mktag((MR_Integer) 0))))
#line 818 "pretty_printer.m"
          *mercury__pretty_printer__Doc_6 = mercury__pretty_printer__V_11_11;
#line 817 "pretty_printer.m"
        else
#line 819 "pretty_printer.m"
          {
#line 819 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_28_28;
#line 819 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_29_29;
#line 819 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_30_30;
#line 819 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_31_31;
#line 819 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_32_32;

#line 820 "pretty_printer.m"
            {
#line 820 "pretty_printer.m"
              mercury__pretty_printer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 820 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_31_31, 0) = ((MR_Box) (*mercury__pretty_printer__STATE_VARIABLE_Limit_9));
#line 820 "pretty_printer.m"
            }
#line 820 "pretty_printer.m"
            {
#line 820 "pretty_printer.m"
              mercury__pretty_printer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 820 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_30_30, 1) = ((MR_Box) (mercury__pretty_printer__V_31_31));
#line 820 "pretty_printer.m"
            }
#line 820 "pretty_printer.m"
            mercury__pretty_printer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 820 "pretty_printer.m"
            {
#line 820 "pretty_printer.m"
              mercury__pretty_printer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 0) = ((MR_Box) (mercury__pretty_printer__V_30_30));
#line 820 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 1) = ((MR_Box) (mercury__pretty_printer__V_32_32));
#line 820 "pretty_printer.m"
            }
#line 820 "pretty_printer.m"
            {
#line 820 "pretty_printer.m"
              mercury__pretty_printer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_28_28, 0) = ((MR_Box) (mercury__pretty_printer__V_11_11));
#line 820 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_28_28, 1) = ((MR_Box) (mercury__pretty_printer__V_29_29));
#line 820 "pretty_printer.m"
            }
#line 820 "pretty_printer.m"
            {
#line 820 "pretty_printer.m"
              MR_Word base;
#line 820 "pretty_printer.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 820 "pretty_printer.m"
              *mercury__pretty_printer__Doc_6 = base;
#line 820 "pretty_printer.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__pretty_printer__V_28_28));
#line 820 "pretty_printer.m"
            }
#line 819 "pretty_printer.m"
          }
#line 740 "pretty_printer.m"
      }
#line 739 "pretty_printer.m"
  }
#line 733 "pretty_printer.m"
}

#line 707 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_format_term_6_p_0(
#line 707 "pretty_printer.m"
  MR_String mercury__pretty_printer__Name_7,
#line 707 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Args_8,
#line 707 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_9,
#line 707 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_14,
#line 707 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_15,
#line 707 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_11)
#line 707 "pretty_printer.m"
{
#line 710 "pretty_printer.m"
  {
#line 710 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded = (mercury__pretty_printer__Args_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 710 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Doc0_12;

#line 713 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 712 "pretty_printer.m"
      {
#line 712 "pretty_printer.m"
        MR_String mercury__pretty_printer__V_16_16;

#line 73 "term_io.opt"
        {
#line 73 "term_io.opt"
          mercury__pretty_printer__V_16_16 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__pretty_printer__Name_7, (MR_Integer) 1);
        }
#line 712 "pretty_printer.m"
        {
#line 712 "pretty_printer.m"
          mercury__pretty_printer__Doc0_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 712 "pretty_printer.m"
          MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc0_12, 0) = ((MR_Box) (mercury__pretty_printer__V_16_16));
#line 712 "pretty_printer.m"
        }
#line 712 "pretty_printer.m"
      }
#line 713 "pretty_printer.m"
    else
#line 715 "pretty_printer.m"
      {
#line 848 "pretty_printer.m"
        if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_14)) == (MR_mktag((MR_Integer) 0))))
#line 848 "pretty_printer.m"
          {
#line 848 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__N_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_14, (MR_Integer) 0)));

#line 849 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_54 <= (MR_Integer) 0);
#line 848 "pretty_printer.m"
          }
#line 848 "pretty_printer.m"
        else
#line 850 "pretty_printer.m"
          {
#line 850 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__N_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_14, (MR_Integer) 0)));

#line 851 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_56 <= (MR_Integer) 0);
#line 850 "pretty_printer.m"
          }
#line 715 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 1191 "pretty_printer.m"
          {
#line 1191 "pretty_printer.m"
            mercury__pretty_printer__Doc0_12 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1]);
#line 1191 "pretty_printer.m"
          }
#line 715 "pretty_printer.m"
        else
#line 717 "pretty_printer.m"
          {
#line 717 "pretty_printer.m"
            MR_Word mercury__pretty_printer__OpDoc_13;

#line 715 "pretty_printer.m"
            {
#line 715 "pretty_printer.m"
              mercury__pretty_printer__succeeded = mercury__pretty_printer__expand_format_op_4_p_0(mercury__pretty_printer__Name_7, mercury__pretty_printer__Args_8, mercury__pretty_printer__CurrentPri_11, &mercury__pretty_printer__OpDoc_13);
            }
#line 717 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 716 "pretty_printer.m"
              mercury__pretty_printer__Doc0_12 = mercury__pretty_printer__OpDoc_13;
#line 717 "pretty_printer.m"
            else
#line 721 "pretty_printer.m"
              {
#line 717 "pretty_printer.m"
                mercury__pretty_printer__succeeded = (strcmp(mercury__pretty_printer__Name_7, (MR_String) "{}") == 0);
#line 721 "pretty_printer.m"
                if (mercury__pretty_printer__succeeded)
#line 718 "pretty_printer.m"
                  {
#line 718 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_17_17;
#line 718 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[3]);
#line 718 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_20_20;
#line 718 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_21_21;
#line 718 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_22_22;
#line 718 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_23_23;
#line 718 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[4]);
#line 718 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_26_26;
#line 718 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_27_27;
#line 718 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_28_28;
#line 718 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_30_30;
#line 718 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_63_63;
#line 718 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_64_64;
#line 718 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_65_65;
#line 718 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_66_66;
#line 718 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_67_67;
#line 718 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_68_68;
#line 718 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_69_69;
#line 718 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_70_70;
#line 718 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_71_71;

#line 719 "pretty_printer.m"
                    {
#line 719 "pretty_printer.m"
                      mercury__pretty_printer__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 719 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 719 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_23_23, 1) = ((MR_Box) (mercury__pretty_printer__Args_8));
#line 719 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_23_23, 2) = ((MR_Box) (mercury__pretty_printer__V_24_24));
#line 719 "pretty_printer.m"
                    }
#line 719 "pretty_printer.m"
                    mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 719 "pretty_printer.m"
                    {
#line 719 "pretty_printer.m"
                      mercury__pretty_printer__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_22_22, 0) = ((MR_Box) (mercury__pretty_printer__V_23_23));
#line 719 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_22_22, 1) = ((MR_Box) (mercury__pretty_printer__V_26_26));
#line 719 "pretty_printer.m"
                    }
#line 313 "pretty_printer.m"
                    mercury__pretty_printer__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[0]);
#line 313 "pretty_printer.m"
                    mercury__pretty_printer__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[7]);
#line 313 "pretty_printer.m"
                    {
#line 313 "pretty_printer.m"
                      mercury__pretty_printer__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 313 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_67_67, 0) = ((MR_Box) (mercury__pretty_printer__V_22_22));
#line 313 "pretty_printer.m"
                    }
#line 313 "pretty_printer.m"
                    mercury__pretty_printer__V_70_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 313 "pretty_printer.m"
                    mercury__pretty_printer__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[5]);
#line 313 "pretty_printer.m"
                    mercury__pretty_printer__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 313 "pretty_printer.m"
                    mercury__pretty_printer__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[6]);
#line 313 "pretty_printer.m"
                    {
#line 313 "pretty_printer.m"
                      mercury__pretty_printer__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_66_66, 0) = ((MR_Box) (mercury__pretty_printer__V_67_67));
#line 313 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_66_66, 1) = ((MR_Box) (mercury__pretty_printer__V_68_68));
#line 313 "pretty_printer.m"
                    }
#line 313 "pretty_printer.m"
                    {
#line 313 "pretty_printer.m"
                      mercury__pretty_printer__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_63_63, 0) = ((MR_Box) (mercury__pretty_printer__V_64_64));
#line 313 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_63_63, 1) = ((MR_Box) (mercury__pretty_printer__V_66_66));
#line 313 "pretty_printer.m"
                    }
#line 313 "pretty_printer.m"
                    {
#line 313 "pretty_printer.m"
                      mercury__pretty_printer__V_21_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 313 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_21_21, 0) = ((MR_Box) (mercury__pretty_printer__V_63_63));
#line 313 "pretty_printer.m"
                    }
#line 719 "pretty_printer.m"
                    mercury__pretty_printer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[5]);
#line 720 "pretty_printer.m"
                    mercury__pretty_printer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 720 "pretty_printer.m"
                    mercury__pretty_printer__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[11]);
#line 719 "pretty_printer.m"
                    {
#line 719 "pretty_printer.m"
                      mercury__pretty_printer__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_20_20, 0) = ((MR_Box) (mercury__pretty_printer__V_21_21));
#line 719 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_20_20, 1) = ((MR_Box) (mercury__pretty_printer__V_27_27));
#line 719 "pretty_printer.m"
                    }
#line 719 "pretty_printer.m"
                    {
#line 719 "pretty_printer.m"
                      mercury__pretty_printer__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_17_17, 0) = ((MR_Box) (mercury__pretty_printer__V_18_18));
#line 719 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_17_17, 1) = ((MR_Box) (mercury__pretty_printer__V_20_20));
#line 719 "pretty_printer.m"
                    }
#line 718 "pretty_printer.m"
                    {
#line 718 "pretty_printer.m"
                      mercury__pretty_printer__Doc0_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 718 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc0_12, 0) = ((MR_Box) (mercury__pretty_printer__V_17_17));
#line 718 "pretty_printer.m"
                    }
#line 718 "pretty_printer.m"
                  }
#line 721 "pretty_printer.m"
                else
#line 722 "pretty_printer.m"
                  {
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_31_31;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_33_33;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_34_34;
#line 722 "pretty_printer.m"
                    MR_String mercury__pretty_printer__V_35_35;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_36_36;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_37_37;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_39_39;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_40_40;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_41_41;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_42_42;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_43_43;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_45_45;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_46_46;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_47_47;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_49_49;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_79_79;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_80_80;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_81_81;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_82_82;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_83_83;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_84_84;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_85_85;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_86_86;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_87_87;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_89_89;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_90_90;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_91_91;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_92_92;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_93_93;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_94_94;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_95_95;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_96_96;
#line 722 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_97_97;

#line 73 "term_io.opt"
                    {
#line 73 "term_io.opt"
                      mercury__pretty_printer__V_35_35 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__pretty_printer__Name_7, (MR_Integer) 1);
                    }
#line 724 "pretty_printer.m"
                    {
#line 724 "pretty_printer.m"
                      mercury__pretty_printer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 724 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_34_34, 0) = ((MR_Box) (mercury__pretty_printer__V_35_35));
#line 724 "pretty_printer.m"
                    }
#line 725 "pretty_printer.m"
                    mercury__pretty_printer__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[6]);
#line 725 "pretty_printer.m"
                    mercury__pretty_printer__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[4]);
#line 725 "pretty_printer.m"
                    {
#line 725 "pretty_printer.m"
                      mercury__pretty_printer__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 725 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 725 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_42_42, 1) = ((MR_Box) (mercury__pretty_printer__Args_8));
#line 725 "pretty_printer.m"
                      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_42_42, 2) = ((MR_Box) (mercury__pretty_printer__V_43_43));
#line 725 "pretty_printer.m"
                    }
#line 725 "pretty_printer.m"
                    mercury__pretty_printer__V_45_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 725 "pretty_printer.m"
                    {
#line 725 "pretty_printer.m"
                      mercury__pretty_printer__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_41_41, 0) = ((MR_Box) (mercury__pretty_printer__V_42_42));
#line 725 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_41_41, 1) = ((MR_Box) (mercury__pretty_printer__V_45_45));
#line 725 "pretty_printer.m"
                    }
#line 313 "pretty_printer.m"
                    mercury__pretty_printer__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[0]);
#line 313 "pretty_printer.m"
                    mercury__pretty_printer__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[7]);
#line 313 "pretty_printer.m"
                    {
#line 313 "pretty_printer.m"
                      mercury__pretty_printer__V_83_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 313 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_83_83, 0) = ((MR_Box) (mercury__pretty_printer__V_41_41));
#line 313 "pretty_printer.m"
                    }
#line 313 "pretty_printer.m"
                    mercury__pretty_printer__V_86_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 313 "pretty_printer.m"
                    mercury__pretty_printer__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[5]);
#line 313 "pretty_printer.m"
                    mercury__pretty_printer__V_87_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 313 "pretty_printer.m"
                    mercury__pretty_printer__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[6]);
#line 313 "pretty_printer.m"
                    {
#line 313 "pretty_printer.m"
                      mercury__pretty_printer__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_82_82, 0) = ((MR_Box) (mercury__pretty_printer__V_83_83));
#line 313 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_82_82, 1) = ((MR_Box) (mercury__pretty_printer__V_84_84));
#line 313 "pretty_printer.m"
                    }
#line 313 "pretty_printer.m"
                    {
#line 313 "pretty_printer.m"
                      mercury__pretty_printer__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_79_79, 0) = ((MR_Box) (mercury__pretty_printer__V_80_80));
#line 313 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_79_79, 1) = ((MR_Box) (mercury__pretty_printer__V_82_82));
#line 313 "pretty_printer.m"
                    }
#line 313 "pretty_printer.m"
                    {
#line 313 "pretty_printer.m"
                      mercury__pretty_printer__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 313 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_40_40, 0) = ((MR_Box) (mercury__pretty_printer__V_79_79));
#line 313 "pretty_printer.m"
                    }
#line 725 "pretty_printer.m"
                    mercury__pretty_printer__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[7]);
#line 726 "pretty_printer.m"
                    mercury__pretty_printer__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 726 "pretty_printer.m"
                    mercury__pretty_printer__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[12]);
#line 725 "pretty_printer.m"
                    {
#line 725 "pretty_printer.m"
                      mercury__pretty_printer__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_39_39, 0) = ((MR_Box) (mercury__pretty_printer__V_40_40));
#line 725 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_39_39, 1) = ((MR_Box) (mercury__pretty_printer__V_46_46));
#line 725 "pretty_printer.m"
                    }
#line 725 "pretty_printer.m"
                    {
#line 725 "pretty_printer.m"
                      mercury__pretty_printer__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_36_36, 0) = ((MR_Box) (mercury__pretty_printer__V_37_37));
#line 725 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_36_36, 1) = ((MR_Box) (mercury__pretty_printer__V_39_39));
#line 725 "pretty_printer.m"
                    }
#line 724 "pretty_printer.m"
                    {
#line 724 "pretty_printer.m"
                      mercury__pretty_printer__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_33_33, 0) = ((MR_Box) (mercury__pretty_printer__V_34_34));
#line 724 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_33_33, 1) = ((MR_Box) (mercury__pretty_printer__V_36_36));
#line 724 "pretty_printer.m"
                    }
#line 723 "pretty_printer.m"
                    {
#line 723 "pretty_printer.m"
                      mercury__pretty_printer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_31_31, 0) = ((MR_Box) (mercury__pretty_printer__V_32_32));
#line 723 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_31_31, 1) = ((MR_Box) (mercury__pretty_printer__V_33_33));
#line 723 "pretty_printer.m"
                    }
#line 323 "pretty_printer.m"
                    mercury__pretty_printer__V_91_91 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 323 "pretty_printer.m"
                    mercury__pretty_printer__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[8]);
#line 323 "pretty_printer.m"
                    {
#line 323 "pretty_printer.m"
                      mercury__pretty_printer__V_93_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 323 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_93_93, 0) = ((MR_Box) (mercury__pretty_printer__V_31_31));
#line 323 "pretty_printer.m"
                    }
#line 323 "pretty_printer.m"
                    mercury__pretty_printer__V_96_96 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 323 "pretty_printer.m"
                    mercury__pretty_printer__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[9]);
#line 323 "pretty_printer.m"
                    mercury__pretty_printer__V_97_97 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 323 "pretty_printer.m"
                    mercury__pretty_printer__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[10]);
#line 323 "pretty_printer.m"
                    {
#line 323 "pretty_printer.m"
                      mercury__pretty_printer__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_92_92, 0) = ((MR_Box) (mercury__pretty_printer__V_93_93));
#line 323 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_92_92, 1) = ((MR_Box) (mercury__pretty_printer__V_94_94));
#line 323 "pretty_printer.m"
                    }
#line 323 "pretty_printer.m"
                    {
#line 323 "pretty_printer.m"
                      mercury__pretty_printer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 0) = ((MR_Box) (mercury__pretty_printer__V_90_90));
#line 323 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 1) = ((MR_Box) (mercury__pretty_printer__V_92_92));
#line 323 "pretty_printer.m"
                    }
#line 323 "pretty_printer.m"
                    {
#line 323 "pretty_printer.m"
                      mercury__pretty_printer__Doc0_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 323 "pretty_printer.m"
                      MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc0_12, 0) = ((MR_Box) (mercury__pretty_printer__V_89_89));
#line 323 "pretty_printer.m"
                    }
#line 722 "pretty_printer.m"
                  }
#line 721 "pretty_printer.m"
              }
#line 717 "pretty_printer.m"
          }
#line 715 "pretty_printer.m"
      }
#line 728 "pretty_printer.m"
    {
#line 728 "pretty_printer.m"
      mercury__pretty_printer__decrement_limit_2_p_0(mercury__pretty_printer__STATE_VARIABLE_Limit_0_14, mercury__pretty_printer__STATE_VARIABLE_Limit_15);
    }
#line 729 "pretty_printer.m"
    {
#line 729 "pretty_printer.m"
      *mercury__pretty_printer__Doc_9 = mercury__pretty_printer__set_formatting_limit_correctly_2_f_0(*mercury__pretty_printer__STATE_VARIABLE_Limit_15, mercury__pretty_printer__Doc0_12);
    }
#line 710 "pretty_printer.m"
  }
#line 707 "pretty_printer.m"
}

#line 681 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_format_list_5_p_0(
#line 681 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 681 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 681 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__3_3,
#line 681 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_4,
#line 681 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_5)
#line 681 "pretty_printer.m"
{
#line 684 "pretty_printer.m"
  {
#line 684 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 684 "pretty_printer.m"
    if ((mercury__pretty_printer__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 684 "pretty_printer.m"
      {
#line 684 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 684 "pretty_printer.m"
        *mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), &mercury__pretty_printer_scalar_common_5[2]);
#line 684 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_Limit_5 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_4;
#line 684 "pretty_printer.m"
      }
#line 684 "pretty_printer.m"
    else
#line 686 "pretty_printer.m"
      {
#line 686 "pretty_printer.m"
        MR_Word mercury__pretty_printer__Univ_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 0)));
#line 686 "pretty_printer.m"
        MR_Word mercury__pretty_printer__Univs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__1_1, (MR_Integer) 1)));

#line 848 "pretty_printer.m"
        if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_4)) == (MR_mktag((MR_Integer) 0))))
#line 848 "pretty_printer.m"
          {
#line 848 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__N_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_4, (MR_Integer) 0)));

#line 849 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_38 <= (MR_Integer) 0);
#line 848 "pretty_printer.m"
          }
#line 848 "pretty_printer.m"
        else
#line 850 "pretty_printer.m"
          {
#line 850 "pretty_printer.m"
            MR_Integer mercury__pretty_printer__N_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_4, (MR_Integer) 0)));

#line 851 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_40 <= (MR_Integer) 0);
#line 850 "pretty_printer.m"
          }
#line 689 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 1191 "pretty_printer.m"
          {
#line 1191 "pretty_printer.m"
            *mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1]);
#line 1191 "pretty_printer.m"
          }
#line 689 "pretty_printer.m"
        else
#line 693 "pretty_printer.m"
        if ((mercury__pretty_printer__Univs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 691 "pretty_printer.m"
          {
#line 691 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_32_32;
#line 691 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_33_33;
#line 691 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 691 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_35_35;
#line 691 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_36_36;
#line 691 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_37_37;
#line 691 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_44_44;
#line 691 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_45_45;
#line 691 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_46_46;
#line 691 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_47_47;
#line 691 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_48_48;
#line 691 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_49_49;
#line 691 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_50_50;
#line 691 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_51_51;
#line 691 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_52_52;

#line 692 "pretty_printer.m"
            {
#line 692 "pretty_printer.m"
              mercury__pretty_printer__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 692 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_36_36, 1) = ((MR_Box) (mercury__pretty_printer__Univ_11));
#line 692 "pretty_printer.m"
            }
#line 692 "pretty_printer.m"
            mercury__pretty_printer__V_37_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 692 "pretty_printer.m"
            {
#line 692 "pretty_printer.m"
              mercury__pretty_printer__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_35_35, 0) = ((MR_Box) (mercury__pretty_printer__V_36_36));
#line 692 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_35_35, 1) = ((MR_Box) (mercury__pretty_printer__V_37_37));
#line 692 "pretty_printer.m"
            }
#line 692 "pretty_printer.m"
            {
#line 692 "pretty_printer.m"
              mercury__pretty_printer__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_33_33, 0) = ((MR_Box) (mercury__pretty_printer__V_34_34));
#line 692 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_33_33, 1) = ((MR_Box) (mercury__pretty_printer__V_35_35));
#line 692 "pretty_printer.m"
            }
#line 323 "pretty_printer.m"
            mercury__pretty_printer__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 323 "pretty_printer.m"
            mercury__pretty_printer__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[8]);
#line 323 "pretty_printer.m"
            {
#line 323 "pretty_printer.m"
              mercury__pretty_printer__V_48_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 323 "pretty_printer.m"
              MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_48_48, 0) = ((MR_Box) (mercury__pretty_printer__V_33_33));
#line 323 "pretty_printer.m"
            }
#line 323 "pretty_printer.m"
            mercury__pretty_printer__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 323 "pretty_printer.m"
            mercury__pretty_printer__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[9]);
#line 323 "pretty_printer.m"
            mercury__pretty_printer__V_52_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 323 "pretty_printer.m"
            mercury__pretty_printer__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[10]);
#line 323 "pretty_printer.m"
            {
#line 323 "pretty_printer.m"
              mercury__pretty_printer__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_47_47, 0) = ((MR_Box) (mercury__pretty_printer__V_48_48));
#line 323 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_47_47, 1) = ((MR_Box) (mercury__pretty_printer__V_49_49));
#line 323 "pretty_printer.m"
            }
#line 323 "pretty_printer.m"
            {
#line 323 "pretty_printer.m"
              mercury__pretty_printer__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_44_44, 0) = ((MR_Box) (mercury__pretty_printer__V_45_45));
#line 323 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_44_44, 1) = ((MR_Box) (mercury__pretty_printer__V_47_47));
#line 323 "pretty_printer.m"
            }
#line 323 "pretty_printer.m"
            {
#line 323 "pretty_printer.m"
              mercury__pretty_printer__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 323 "pretty_printer.m"
              MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_32_32, 0) = ((MR_Box) (mercury__pretty_printer__V_44_44));
#line 323 "pretty_printer.m"
            }
#line 692 "pretty_printer.m"
            {
#line 692 "pretty_printer.m"
              *mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__format_arg_1_f_0(mercury__pretty_printer__V_32_32);
            }
#line 691 "pretty_printer.m"
          }
#line 693 "pretty_printer.m"
        else
#line 694 "pretty_printer.m"
          {
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_20_20;
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_21_21;
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_22_22;
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_23_23;
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_25_25;
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_26_26;
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_27_27;
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_28_28;
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_29_29;
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_30_30;
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_31_31;
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_54_54;
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_55_55;
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_56_56;
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_57_57;
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_58_58;
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_59_59;
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_60_60;
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_61_61;
#line 694 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_62_62;

#line 696 "pretty_printer.m"
            {
#line 696 "pretty_printer.m"
              mercury__pretty_printer__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 696 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_26_26, 1) = ((MR_Box) (mercury__pretty_printer__Univ_11));
#line 696 "pretty_printer.m"
            }
#line 696 "pretty_printer.m"
            mercury__pretty_printer__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "pretty_printer.m"
            {
#line 696 "pretty_printer.m"
              mercury__pretty_printer__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_27_27, 0) = ((MR_Box) (mercury__pretty_printer__HeadVar__2_2));
#line 696 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_27_27, 1) = ((MR_Box) (mercury__pretty_printer__V_28_28));
#line 696 "pretty_printer.m"
            }
#line 696 "pretty_printer.m"
            {
#line 696 "pretty_printer.m"
              mercury__pretty_printer__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_25_25, 0) = ((MR_Box) (mercury__pretty_printer__V_26_26));
#line 696 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_25_25, 1) = ((MR_Box) (mercury__pretty_printer__V_27_27));
#line 696 "pretty_printer.m"
            }
#line 696 "pretty_printer.m"
            {
#line 696 "pretty_printer.m"
              mercury__pretty_printer__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_23_23, 0) = ((MR_Box) (mercury__pretty_printer__V_24_24));
#line 696 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_23_23, 1) = ((MR_Box) (mercury__pretty_printer__V_25_25));
#line 696 "pretty_printer.m"
            }
#line 323 "pretty_printer.m"
            mercury__pretty_printer__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 323 "pretty_printer.m"
            mercury__pretty_printer__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[8]);
#line 323 "pretty_printer.m"
            {
#line 323 "pretty_printer.m"
              mercury__pretty_printer__V_58_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 323 "pretty_printer.m"
              MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_58_58, 0) = ((MR_Box) (mercury__pretty_printer__V_23_23));
#line 323 "pretty_printer.m"
            }
#line 323 "pretty_printer.m"
            mercury__pretty_printer__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 323 "pretty_printer.m"
            mercury__pretty_printer__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[9]);
#line 323 "pretty_printer.m"
            mercury__pretty_printer__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 323 "pretty_printer.m"
            mercury__pretty_printer__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[10]);
#line 323 "pretty_printer.m"
            {
#line 323 "pretty_printer.m"
              mercury__pretty_printer__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_57_57, 0) = ((MR_Box) (mercury__pretty_printer__V_58_58));
#line 323 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_57_57, 1) = ((MR_Box) (mercury__pretty_printer__V_59_59));
#line 323 "pretty_printer.m"
            }
#line 323 "pretty_printer.m"
            {
#line 323 "pretty_printer.m"
              mercury__pretty_printer__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_54_54, 0) = ((MR_Box) (mercury__pretty_printer__V_55_55));
#line 323 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_54_54, 1) = ((MR_Box) (mercury__pretty_printer__V_57_57));
#line 323 "pretty_printer.m"
            }
#line 323 "pretty_printer.m"
            {
#line 323 "pretty_printer.m"
              mercury__pretty_printer__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 323 "pretty_printer.m"
              MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_22_22, 0) = ((MR_Box) (mercury__pretty_printer__V_54_54));
#line 323 "pretty_printer.m"
            }
#line 696 "pretty_printer.m"
            {
#line 696 "pretty_printer.m"
              mercury__pretty_printer__V_21_21 = mercury__pretty_printer__format_arg_1_f_0(mercury__pretty_printer__V_22_22);
            }
#line 697 "pretty_printer.m"
            {
#line 697 "pretty_printer.m"
              mercury__pretty_printer__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 697 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 697 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_30_30, 1) = ((MR_Box) (mercury__pretty_printer__Univs_12));
#line 697 "pretty_printer.m"
              MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_30_30, 2) = ((MR_Box) (mercury__pretty_printer__HeadVar__2_2));
#line 697 "pretty_printer.m"
            }
#line 698 "pretty_printer.m"
            mercury__pretty_printer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 698 "pretty_printer.m"
            {
#line 698 "pretty_printer.m"
              mercury__pretty_printer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 0) = ((MR_Box) (mercury__pretty_printer__V_30_30));
#line 698 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 1) = ((MR_Box) (mercury__pretty_printer__V_31_31));
#line 698 "pretty_printer.m"
            }
#line 696 "pretty_printer.m"
            {
#line 696 "pretty_printer.m"
              mercury__pretty_printer__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_20_20, 0) = ((MR_Box) (mercury__pretty_printer__V_21_21));
#line 696 "pretty_printer.m"
              MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_20_20, 1) = ((MR_Box) (mercury__pretty_printer__V_29_29));
#line 696 "pretty_printer.m"
            }
#line 695 "pretty_printer.m"
            {
#line 695 "pretty_printer.m"
              MR_Word base;
#line 695 "pretty_printer.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 695 "pretty_printer.m"
              *mercury__pretty_printer__HeadVar__3_3 = base;
#line 695 "pretty_printer.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__pretty_printer__V_20_20));
#line 695 "pretty_printer.m"
            }
#line 694 "pretty_printer.m"
          }
#line 686 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_Limit_5 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_4;
#line 686 "pretty_printer.m"
      }
#line 684 "pretty_printer.m"
  }
#line 681 "pretty_printer.m"
}

#line 653 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_pp_7_p_1(
#line 653 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Canonicalize_8,
#line 653 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap_9,
#line 653 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_10,
#line 653 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_11,
#line 653 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_24,
#line 653 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_25,
#line 653 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_13)
#line 653 "pretty_printer.m"
{
#line 661 "pretty_printer.m"
  {
#line 661 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 848 "pretty_printer.m"
    if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_24)) == (MR_mktag((MR_Integer) 0))))
#line 848 "pretty_printer.m"
      {
#line 848 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, (MR_Integer) 0)));

#line 849 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_35 <= (MR_Integer) 0);
#line 848 "pretty_printer.m"
      }
#line 848 "pretty_printer.m"
    else
#line 850 "pretty_printer.m"
      {
#line 850 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, (MR_Integer) 0)));

#line 851 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_37 <= (MR_Integer) 0);
#line 850 "pretty_printer.m"
      }
#line 661 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 660 "pretty_printer.m"
      {
#line 1191 "pretty_printer.m"
        *mercury__pretty_printer__Doc_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1]);
#line 660 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_Limit_25 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_24;
#line 660 "pretty_printer.m"
      }
#line 661 "pretty_printer.m"
    else
#line 672 "pretty_printer.m"
      {
#line 672 "pretty_printer.m"
        MR_Word mercury__pretty_printer__ArgTypeDescs_16;
#line 672 "pretty_printer.m"
        MR_Word mercury__pretty_printer__Formatter_20;
#line 662 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 0)));
#line 662 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_32_32;
#line 662 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_13_61;
#line 662 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_14_62;
#line 662 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_15_63;
#line 662 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_17_65;
#line 662 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorDesc_15;
#line 662 "pretty_printer.m"
        MR_String mercury__pretty_printer__ModuleName_17;
#line 662 "pretty_printer.m"
        MR_String mercury__pretty_printer__TypeName_18;
#line 662 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__Arity_19;
#line 662 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 662 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_59_59;
#line 662 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_60_60;
#line 22 "univ.opt"
        MR_Box mercury__pretty_printer__Value_14 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 1));
#line 197 "type_desc.opt"
        MR_Box mercury__pretty_printer__V_34_34;
#line 163 "type_desc.opt"
        MR_String mercury__pretty_printer__V_5_43;
#line 163 "type_desc.opt"
        MR_Integer mercury__pretty_printer__V_6_44;
#line 163 "type_desc.opt"
        MR_String mercury__pretty_printer__V_5_47;
#line 163 "type_desc.opt"
        MR_Integer mercury__pretty_printer__V_6_48;
#line 452 "map.opt"
        MR_Box mercury__pretty_printer__conv0_V_59_59;
#line 452 "map.opt"
        MR_Box mercury__pretty_printer__conv1_V_60_60;
#line 452 "map.opt"
        MR_Box mercury__pretty_printer__conv2_Formatter_20;

#line 197 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pretty_printer__TypeInfo_31_31 ;
		{
#line 197 "type_desc.opt"
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
#line 11417 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_26_26  = TypeInfo;
#line 197 "type_desc.opt"
}
#line 141 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_1

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pretty_printer__V_26_26 ;
		{
#line 141 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 11447 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeCtorDesc_15  = TypeCtorDesc;
	 mercury__pretty_printer__ArgTypeDescs_16  = ArgTypes;
#line 141 "type_desc.opt"
}
#line 163 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_1

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__pretty_printer__TypeCtorDesc_15 ;
		{
#line 163 "type_desc.opt"
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
#line 11496 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__ModuleName_17  = TypeCtorModuleName;
	 mercury__pretty_printer__V_5_43  = TypeCtorName;
	 mercury__pretty_printer__V_6_44  = TypeCtorArity;
#line 163 "type_desc.opt"
}
#line 163 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_1

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__pretty_printer__TypeCtorDesc_15 ;
		{
#line 163 "type_desc.opt"
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
#line 11546 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_5_47  = TypeCtorModuleName;
	 mercury__pretty_printer__TypeName_18  = TypeCtorName;
	 mercury__pretty_printer__V_6_48  = TypeCtorArity;
#line 163 "type_desc.opt"
}
#line 11555 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_32_32 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 600 "list.opt"
        {
#line 600 "list.opt"
          mercury__list__length_acc_3_p_0(mercury__pretty_printer__TypeCtorInfo_32_32, mercury__pretty_printer__ArgTypeDescs_16, (MR_Integer) 0, &mercury__pretty_printer__Arity_19);
        }
#line 11562 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_13_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 11564 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_14_62 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_13_61, mercury__pretty_printer__TypeInfo_14_62, mercury__pretty_printer__FMap_9, ((MR_Box) (mercury__pretty_printer__ModuleName_17)), &mercury__pretty_printer__conv0_V_59_59);
        }
#line 452 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__pretty_printer__V_59_59 = ((MR_Word) mercury__pretty_printer__conv0_V_59_59);
#line 452 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 662 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 662 "pretty_printer.m"
          {
#line 11585 "pretty_printer.c"
            mercury__pretty_printer__TypeInfo_15_63 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 452 "map.opt"
            {
#line 452 "map.opt"
              mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_13_61, mercury__pretty_printer__TypeInfo_15_63, mercury__pretty_printer__V_59_59, ((MR_Box) (mercury__pretty_printer__TypeName_18)), &mercury__pretty_printer__conv1_V_60_60);
            }
#line 452 "map.opt"
            if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
              {
#line 452 "map.opt"
                mercury__pretty_printer__V_60_60 = ((MR_Word) mercury__pretty_printer__conv1_V_60_60);
#line 452 "map.opt"
                mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
              }
#line 662 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 662 "pretty_printer.m"
              {
#line 11606 "pretty_printer.c"
                mercury__pretty_printer__TypeInfo_17_65 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 452 "map.opt"
                {
#line 452 "map.opt"
                  mercury__pretty_printer__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__pretty_printer__TypeInfo_17_65, mercury__pretty_printer__V_60_60, mercury__pretty_printer__Arity_19, &mercury__pretty_printer__conv2_Formatter_20);
                }
#line 452 "map.opt"
                if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
                  {
#line 452 "map.opt"
                    mercury__pretty_printer__Formatter_20 = ((MR_Word) mercury__pretty_printer__conv2_Formatter_20);
#line 452 "map.opt"
                    mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
                  }
#line 662 "pretty_printer.m"
              }
#line 662 "pretty_printer.m"
          }
#line 672 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 669 "pretty_printer.m"
          {
#line 669 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_28_28;
#line 671 "pretty_printer.m"
            MR_Box MR_CALL (* mercury__pretty_printer__func_3)(MR_Box, MR_Box, MR_Box);
#line 671 "pretty_printer.m"
            MR_Box mercury__pretty_printer__conv4_V_28_28;

#line 669 "pretty_printer.m"
            {
#line 669 "pretty_printer.m"
              mercury__pretty_printer__decrement_limit_2_p_0(mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, mercury__pretty_printer__STATE_VARIABLE_Limit_25);
            }
#line 671 "pretty_printer.m"
            mercury__pretty_printer__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Formatter_20, (MR_Integer) 1)));
#line 671 "pretty_printer.m"
            {
#line 671 "pretty_printer.m"
              mercury__pretty_printer__conv4_V_28_28 = mercury__pretty_printer__func_3(((MR_Box) mercury__pretty_printer__Formatter_20), ((MR_Box) (mercury__pretty_printer__Univ_10)), ((MR_Box) (mercury__pretty_printer__ArgTypeDescs_16)));
            }
#line 671 "pretty_printer.m"
            mercury__pretty_printer__V_28_28 = ((MR_Word) mercury__pretty_printer__conv4_V_28_28);
#line 670 "pretty_printer.m"
            {
#line 670 "pretty_printer.m"
              *mercury__pretty_printer__Doc_11 = mercury__pretty_printer__set_formatting_limit_correctly_2_f_0(*mercury__pretty_printer__STATE_VARIABLE_Limit_25, mercury__pretty_printer__V_28_28);
            }
#line 669 "pretty_printer.m"
          }
#line 672 "pretty_printer.m"
        else
#line 673 "pretty_printer.m"
          {
#line 673 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 0)));
#line 673 "pretty_printer.m"
            MR_String mercury__pretty_printer__Name_21;
#line 673 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Args_23;
#line 673 "pretty_printer.m"
            MR_Box mercury__pretty_printer__V_29_29 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 1));
#line 673 "pretty_printer.m"
            MR_Integer mercury__pretty_printer___Arity_22;

#line 673 "pretty_printer.m"
            {
#line 673 "pretty_printer.m"
              mercury__deconstruct__deconstruct_5_p_2(mercury__pretty_printer__TypeInfo_33_33, mercury__pretty_printer__V_29_29, mercury__pretty_printer__Canonicalize_8, &mercury__pretty_printer__Name_21, &mercury__pretty_printer___Arity_22, &mercury__pretty_printer__Args_23);
            }
#line 674 "pretty_printer.m"
            {
#line 674 "pretty_printer.m"
              mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_21, mercury__pretty_printer__Args_23, mercury__pretty_printer__Doc_11, mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, mercury__pretty_printer__STATE_VARIABLE_Limit_25, mercury__pretty_printer__CurrentPri_13);
#line 674 "pretty_printer.m"
              return;
            }
#line 673 "pretty_printer.m"
          }
#line 672 "pretty_printer.m"
      }
#line 661 "pretty_printer.m"
  }
#line 653 "pretty_printer.m"
}

#line 651 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_pp_7_p_0(
#line 651 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Canonicalize_8,
#line 651 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap_9,
#line 651 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Univ_10,
#line 651 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Doc_11,
#line 651 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_24,
#line 651 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_25,
#line 651 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__CurrentPri_13)
#line 651 "pretty_printer.m"
{
#line 661 "pretty_printer.m"
  {
#line 661 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 848 "pretty_printer.m"
    if (((MR_tag((MR_Word) mercury__pretty_printer__STATE_VARIABLE_Limit_0_24)) == (MR_mktag((MR_Integer) 0))))
#line 848 "pretty_printer.m"
      {
#line 848 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, (MR_Integer) 0)));

#line 849 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_35 <= (MR_Integer) 0);
#line 848 "pretty_printer.m"
      }
#line 848 "pretty_printer.m"
    else
#line 850 "pretty_printer.m"
      {
#line 850 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__N_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, (MR_Integer) 0)));

#line 851 "pretty_printer.m"
        mercury__pretty_printer__succeeded = (mercury__pretty_printer__N_37 <= (MR_Integer) 0);
#line 850 "pretty_printer.m"
      }
#line 661 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 660 "pretty_printer.m"
      {
#line 1191 "pretty_printer.m"
        *mercury__pretty_printer__Doc_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[1]);
#line 660 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_Limit_25 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_24;
#line 660 "pretty_printer.m"
      }
#line 661 "pretty_printer.m"
    else
#line 672 "pretty_printer.m"
      {
#line 672 "pretty_printer.m"
        MR_Word mercury__pretty_printer__ArgTypeDescs_16;
#line 672 "pretty_printer.m"
        MR_Word mercury__pretty_printer__Formatter_20;
#line 662 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 0)));
#line 662 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_32_32;
#line 662 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_13_61;
#line 662 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_14_62;
#line 662 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_15_63;
#line 662 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_17_65;
#line 662 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorDesc_15;
#line 662 "pretty_printer.m"
        MR_String mercury__pretty_printer__ModuleName_17;
#line 662 "pretty_printer.m"
        MR_String mercury__pretty_printer__TypeName_18;
#line 662 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__Arity_19;
#line 662 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_26_26;
#line 662 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_59_59;
#line 662 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_60_60;
#line 22 "univ.opt"
        MR_Box mercury__pretty_printer__Value_14 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 1));
#line 197 "type_desc.opt"
        MR_Box mercury__pretty_printer__V_34_34;
#line 163 "type_desc.opt"
        MR_String mercury__pretty_printer__V_5_43;
#line 163 "type_desc.opt"
        MR_Integer mercury__pretty_printer__V_6_44;
#line 163 "type_desc.opt"
        MR_String mercury__pretty_printer__V_5_47;
#line 163 "type_desc.opt"
        MR_Integer mercury__pretty_printer__V_6_48;
#line 452 "map.opt"
        MR_Box mercury__pretty_printer__conv0_V_59_59;
#line 452 "map.opt"
        MR_Box mercury__pretty_printer__conv1_V_60_60;
#line 452 "map.opt"
        MR_Box mercury__pretty_printer__conv2_Formatter_20;

#line 197 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pretty_printer__TypeInfo_31_31 ;
		{
#line 197 "type_desc.opt"
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
#line 11830 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_26_26  = TypeInfo;
#line 197 "type_desc.opt"
}
#line 141 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pretty_printer__V_26_26 ;
		{
#line 141 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 11860 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__TypeCtorDesc_15  = TypeCtorDesc;
	 mercury__pretty_printer__ArgTypeDescs_16  = ArgTypes;
#line 141 "type_desc.opt"
}
#line 163 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__pretty_printer__TypeCtorDesc_15 ;
		{
#line 163 "type_desc.opt"
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
#line 11909 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__ModuleName_17  = TypeCtorModuleName;
	 mercury__pretty_printer__V_5_43  = TypeCtorName;
	 mercury__pretty_printer__V_6_44  = TypeCtorArity;
#line 163 "type_desc.opt"
}
#line 163 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__expand_pp_7_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__pretty_printer__TypeCtorDesc_15 ;
		{
#line 163 "type_desc.opt"
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
#line 11959 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_5_47  = TypeCtorModuleName;
	 mercury__pretty_printer__TypeName_18  = TypeCtorName;
	 mercury__pretty_printer__V_6_48  = TypeCtorArity;
#line 163 "type_desc.opt"
}
#line 11968 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_32_32 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 600 "list.opt"
        {
#line 600 "list.opt"
          mercury__list__length_acc_3_p_0(mercury__pretty_printer__TypeCtorInfo_32_32, mercury__pretty_printer__ArgTypeDescs_16, (MR_Integer) 0, &mercury__pretty_printer__Arity_19);
        }
#line 11975 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_13_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 11977 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_14_62 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_13_61, mercury__pretty_printer__TypeInfo_14_62, mercury__pretty_printer__FMap_9, ((MR_Box) (mercury__pretty_printer__ModuleName_17)), &mercury__pretty_printer__conv0_V_59_59);
        }
#line 452 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__pretty_printer__V_59_59 = ((MR_Word) mercury__pretty_printer__conv0_V_59_59);
#line 452 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 662 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 662 "pretty_printer.m"
          {
#line 11998 "pretty_printer.c"
            mercury__pretty_printer__TypeInfo_15_63 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 452 "map.opt"
            {
#line 452 "map.opt"
              mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_13_61, mercury__pretty_printer__TypeInfo_15_63, mercury__pretty_printer__V_59_59, ((MR_Box) (mercury__pretty_printer__TypeName_18)), &mercury__pretty_printer__conv1_V_60_60);
            }
#line 452 "map.opt"
            if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
              {
#line 452 "map.opt"
                mercury__pretty_printer__V_60_60 = ((MR_Word) mercury__pretty_printer__conv1_V_60_60);
#line 452 "map.opt"
                mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
              }
#line 662 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 662 "pretty_printer.m"
              {
#line 12019 "pretty_printer.c"
                mercury__pretty_printer__TypeInfo_17_65 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 452 "map.opt"
                {
#line 452 "map.opt"
                  mercury__pretty_printer__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__pretty_printer__TypeInfo_17_65, mercury__pretty_printer__V_60_60, mercury__pretty_printer__Arity_19, &mercury__pretty_printer__conv2_Formatter_20);
                }
#line 452 "map.opt"
                if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
                  {
#line 452 "map.opt"
                    mercury__pretty_printer__Formatter_20 = ((MR_Word) mercury__pretty_printer__conv2_Formatter_20);
#line 452 "map.opt"
                    mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
                  }
#line 662 "pretty_printer.m"
              }
#line 662 "pretty_printer.m"
          }
#line 672 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 669 "pretty_printer.m"
          {
#line 669 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_28_28;
#line 671 "pretty_printer.m"
            MR_Box MR_CALL (* mercury__pretty_printer__func_3)(MR_Box, MR_Box, MR_Box);
#line 671 "pretty_printer.m"
            MR_Box mercury__pretty_printer__conv4_V_28_28;

#line 669 "pretty_printer.m"
            {
#line 669 "pretty_printer.m"
              mercury__pretty_printer__decrement_limit_2_p_0(mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, mercury__pretty_printer__STATE_VARIABLE_Limit_25);
            }
#line 671 "pretty_printer.m"
            mercury__pretty_printer__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Formatter_20, (MR_Integer) 1)));
#line 671 "pretty_printer.m"
            {
#line 671 "pretty_printer.m"
              mercury__pretty_printer__conv4_V_28_28 = mercury__pretty_printer__func_3(((MR_Box) mercury__pretty_printer__Formatter_20), ((MR_Box) (mercury__pretty_printer__Univ_10)), ((MR_Box) (mercury__pretty_printer__ArgTypeDescs_16)));
            }
#line 671 "pretty_printer.m"
            mercury__pretty_printer__V_28_28 = ((MR_Word) mercury__pretty_printer__conv4_V_28_28);
#line 670 "pretty_printer.m"
            {
#line 670 "pretty_printer.m"
              *mercury__pretty_printer__Doc_11 = mercury__pretty_printer__set_formatting_limit_correctly_2_f_0(*mercury__pretty_printer__STATE_VARIABLE_Limit_25, mercury__pretty_printer__V_28_28);
            }
#line 669 "pretty_printer.m"
          }
#line 672 "pretty_printer.m"
        else
#line 673 "pretty_printer.m"
          {
#line 673 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 0)));
#line 673 "pretty_printer.m"
            MR_String mercury__pretty_printer__Name_21;
#line 673 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Args_23;
#line 673 "pretty_printer.m"
            MR_Box mercury__pretty_printer__V_29_29 = (MR_hl_field(MR_mktag(0), mercury__pretty_printer__Univ_10, (MR_Integer) 1));
#line 673 "pretty_printer.m"
            MR_Integer mercury__pretty_printer___Arity_22;

#line 673 "pretty_printer.m"
            {
#line 673 "pretty_printer.m"
              mercury__deconstruct__deconstruct_5_p_1(mercury__pretty_printer__TypeInfo_33_33, mercury__pretty_printer__V_29_29, mercury__pretty_printer__Canonicalize_8, &mercury__pretty_printer__Name_21, &mercury__pretty_printer___Arity_22, &mercury__pretty_printer__Args_23);
            }
#line 674 "pretty_printer.m"
            {
#line 674 "pretty_printer.m"
              mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_21, mercury__pretty_printer__Args_23, mercury__pretty_printer__Doc_11, mercury__pretty_printer__STATE_VARIABLE_Limit_0_24, mercury__pretty_printer__STATE_VARIABLE_Limit_25, mercury__pretty_printer__CurrentPri_13);
#line 674 "pretty_printer.m"
              return;
            }
#line 673 "pretty_printer.m"
          }
#line 672 "pretty_printer.m"
      }
#line 661 "pretty_printer.m"
  }
#line 651 "pretty_printer.m"
}

#line 634 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__output_indentation_6_p_0(
#line 634 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_28,
#line 634 "pretty_printer.m"
  MR_Box mercury__pretty_printer__HeadVar__1_1,
#line 634 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 634 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_3,
#line 634 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_4,
#line 634 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_5,
#line 634 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_6)
#line 634 "pretty_printer.m"
{
#line 637 "pretty_printer.m"
  {
#line 637 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 637 "pretty_printer.m"
    if ((mercury__pretty_printer__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 637 "pretty_printer.m"
      {
#line 637 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_IO_6 = mercury__pretty_printer__STATE_VARIABLE_IO_0_5;
#line 637 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_4 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_3;
#line 637 "pretty_printer.m"
      }
#line 637 "pretty_printer.m"
    else
#line 638 "pretty_printer.m"
      {
#line 638 "pretty_printer.m"
        MR_String mercury__pretty_printer__Indent_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 0)));
#line 638 "pretty_printer.m"
        MR_Word mercury__pretty_printer__Indents_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__2_2, (MR_Integer) 1)));
#line 638 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_23_23;
#line 638 "pretty_printer.m"
        MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_24_24;
#line 638 "pretty_printer.m"
        MR_Integer mercury__pretty_printer__V_27_27;
#line 12156 "pretty_printer.c"
        void MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 639 "pretty_printer.m"
        {
#line 639 "pretty_printer.m"
          mercury__pretty_printer__output_indentation_6_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_28, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__Indents_16, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_3, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_23_23, mercury__pretty_printer__STATE_VARIABLE_IO_0_5, &mercury__pretty_printer__STATE_VARIABLE_IO_24_24);
        }
#line 12164 "pretty_printer.c"
        mercury__pretty_printer__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_writer_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12166 "pretty_printer.c"
        {
#line 12168 "pretty_printer.c"
          mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_writer_28), mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__Indent_15)), mercury__pretty_printer__STATE_VARIABLE_IO_24_24, mercury__pretty_printer__STATE_VARIABLE_IO_6);
        }
#line 246 "string.opt"
        {
#line 246 "string.opt"
          mercury__string__count_codepoints_2_p_0(mercury__pretty_printer__Indent_15, &mercury__pretty_printer__V_27_27);
        }
#line 641 "pretty_printer.m"
        *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_4 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_23_23 - mercury__pretty_printer__V_27_27);
#line 638 "pretty_printer.m"
      }
#line 637 "pretty_printer.m"
  }
#line 634 "pretty_printer.m"
}

#line 625 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__format_nl_8_p_0(
#line 625 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_24,
#line 625 "pretty_printer.m"
  MR_Box mercury__pretty_printer__Stream_9,
#line 625 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__LineWidth_10,
#line 625 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Indents_11,
#line 625 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__RemainingWidth_12,
#line 625 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_15,
#line 625 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_16,
#line 625 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_17,
#line 625 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_18)
#line 625 "pretty_printer.m"
{
#line 629 "pretty_printer.m"
  {
#line 629 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 629 "pretty_printer.m"
    MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_20_20;
#line 12214 "pretty_printer.c"
    void MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_writer_24, (MR_Integer) 0)), (MR_Integer) 5)));

#line 12217 "pretty_printer.c"
    {
#line 12219 "pretty_printer.c"
      mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_writer_24), mercury__pretty_printer__Stream_9, ((MR_Box) ((MR_String) "\n")), mercury__pretty_printer__STATE_VARIABLE_IO_0_17, &mercury__pretty_printer__STATE_VARIABLE_IO_20_20);
    }
#line 631 "pretty_printer.m"
    {
#line 631 "pretty_printer.m"
      mercury__pretty_printer__output_indentation_6_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_24, mercury__pretty_printer__Stream_9, mercury__pretty_printer__Indents_11, mercury__pretty_printer__LineWidth_10, mercury__pretty_printer__RemainingWidth_12, mercury__pretty_printer__STATE_VARIABLE_IO_20_20, mercury__pretty_printer__STATE_VARIABLE_IO_18);
    }
#line 632 "pretty_printer.m"
    *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_16 = (mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_15 - (MR_Integer) 1);
#line 629 "pretty_printer.m"
  }
#line 625 "pretty_printer.m"
}

#line 526 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_docs_11_p_1(
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
#line 529 "pretty_printer.m"
  while (MR_TRUE)
#line 529 "pretty_printer.m"
    {
#line 529 "pretty_printer.m"
      /* tailcall optimized into a loop */
#line 529 "pretty_printer.m"
      {
#line 529 "pretty_printer.m"
        MR_bool mercury__pretty_printer__succeeded;

#line 529 "pretty_printer.m"
        if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 529 "pretty_printer.m"
          {
#line 529 "pretty_printer.m"
            *mercury__pretty_printer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 530 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
#line 530 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
#line 530 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
#line 529 "pretty_printer.m"
          }
#line 529 "pretty_printer.m"
        else
#line 532 "pretty_printer.m"
          {
#line 532 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Doc_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));
#line 532 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Docs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));

#line 535 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 <= (MR_Integer) 0);
#line 535 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 535 "pretty_printer.m"
              {
#line 535 "pretty_printer.m"
                if ((mercury__pretty_printer__Doc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 535 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = MR_TRUE;
#line 535 "pretty_printer.m"
                else
#line 535 "pretty_printer.m"
                if ((mercury__pretty_printer__Doc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = MR_TRUE;
#line 535 "pretty_printer.m"
                else
#line 535 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = MR_FALSE;
#line 535 "pretty_printer.m"
              }
#line 538 "pretty_printer.m"
            if (!(mercury__pretty_printer__succeeded))
#line 539 "pretty_printer.m"
              {
#line 539 "pretty_printer.m"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10 < (MR_Integer) 0);
#line 539 "pretty_printer.m"
              }
#line 545 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 544 "pretty_printer.m"
              {
#line 544 "pretty_printer.m"
                *mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__3_3;
#line 544 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
#line 544 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
#line 544 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
#line 544 "pretty_printer.m"
              }
#line 545 "pretty_printer.m"
            else
#line 553 "pretty_printer.m"
#line 553 "pretty_printer.m"
              switch (MR_tag((MR_Word) mercury__pretty_printer__Doc_26)) {
#line 553 "pretty_printer.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 553 "pretty_printer.m"
                case (MR_Integer) 0:
#line 554 "pretty_printer.m"
                  {
#line 555 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 <= (MR_Integer) 0);
#line 554 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 556 "pretty_printer.m"
                      {
#line 556 "pretty_printer.m"
                        *mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__3_3;
#line 556 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
#line 556 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
#line 556 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
#line 556 "pretty_printer.m"
                      }
#line 554 "pretty_printer.m"
                    else
#line 558 "pretty_printer.m"
                      {
#line 558 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Docs1_116;

#line 559 "pretty_printer.m"
                        {
#line 559 "pretty_printer.m"
                          mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_116, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                        }
#line 558 "pretty_printer.m"
                        {
#line 558 "pretty_printer.m"
                          MR_Word base;
#line 558 "pretty_printer.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "pretty_printer.m"
                          *mercury__pretty_printer__HeadVar__4_4 = base;
#line 558 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 558 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_116));
#line 558 "pretty_printer.m"
                        }
#line 558 "pretty_printer.m"
                      }
#line 554 "pretty_printer.m"
                  }
#line 553 "pretty_printer.m"
                  break;
#line 553 "pretty_printer.m"
                case (MR_Integer) 1:
#line 547 "pretty_printer.m"
                  {
#line 547 "pretty_printer.m"
                    MR_String mercury__pretty_printer__String_33 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc_26, (MR_Integer) 0)));
#line 547 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__Docs1_34;
#line 547 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111;
#line 547 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__V_112_112;

#line 549 "pretty_printer.m"
                    {
#line 549 "pretty_printer.m"
                      mercury__pretty_printer__V_112_112 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__String_33);
                    }
#line 548 "pretty_printer.m"
                    mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10 - mercury__pretty_printer__V_112_112);
#line 551 "pretty_printer.m"
                    {
#line 551 "pretty_printer.m"
                      mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_34, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                    }
#line 550 "pretty_printer.m"
                    {
#line 550 "pretty_printer.m"
                      MR_Word base;
#line 550 "pretty_printer.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__4_4 = base;
#line 550 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 550 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_34));
#line 550 "pretty_printer.m"
                    }
#line 547 "pretty_printer.m"
                  }
#line 553 "pretty_printer.m"
                  break;
#line 553 "pretty_printer.m"
                case (MR_Integer) 2:
#line 563 "pretty_printer.m"
                  {
#line 563 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__TypeCtorInfo_129_129 = (MR_Word) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0;
#line 563 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_103_103;
#line 563 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__Docs1_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc_26, (MR_Integer) 0)));

#line 564 "pretty_printer.m"
                    {
#line 564 "pretty_printer.m"
                      mercury__pretty_printer__V_103_103 = mercury__list__f_43_43_2_f_0(mercury__pretty_printer__TypeCtorInfo_129_129, mercury__pretty_printer__Docs1_119, mercury__pretty_printer__Docs0_27);
                    }
#line 564 "pretty_printer.m"
                    /* direct tailcall eliminated */
#line 564 "pretty_printer.m"
                    {
#line 564 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_103_103;

#line 564 "pretty_printer.m"
                      mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 564 "pretty_printer.m"
                    }
#line 564 "pretty_printer.m"
                    continue;
#line 563 "pretty_printer.m"
                  }
#line 553 "pretty_printer.m"
                  break;
#line 553 "pretty_printer.m"
                case (MR_Integer) 3:
#line 553 "pretty_printer.m"
#line 553 "pretty_printer.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 0)))) {
#line 553 "pretty_printer.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 553 "pretty_printer.m"
                    case (MR_Integer) 0:
#line 567 "pretty_printer.m"
                      {
#line 567 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Univ_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 567 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Doc1_36;
#line 567 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_98_98;
#line 567 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_99_99;

#line 568 "pretty_printer.m"
                        {
#line 568 "pretty_printer.m"
                          mercury__pretty_printer__expand_pp_7_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Univ_35, &mercury__pretty_printer__Doc1_36, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_98_98, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8);
                        }
#line 569 "pretty_printer.m"
                        {
#line 569 "pretty_printer.m"
                          mercury__pretty_printer__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_99_99, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_36));
#line 569 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_99_99, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 569 "pretty_printer.m"
                        }
#line 569 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 569 "pretty_printer.m"
                        {
#line 569 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_99_99;
#line 569 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_98_98;

#line 569 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 569 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 569 "pretty_printer.m"
                        }
#line 569 "pretty_printer.m"
                        continue;
#line 567 "pretty_printer.m"
                      }
#line 553 "pretty_printer.m"
                      break;
#line 553 "pretty_printer.m"
                    case (MR_Integer) 1:
#line 572 "pretty_printer.m"
                      {
#line 572 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Univs_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 572 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Sep_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 2)));
#line 572 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_93_93;
#line 572 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_94_94;
#line 572 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Doc1_120;

#line 573 "pretty_printer.m"
                        {
#line 573 "pretty_printer.m"
                          mercury__pretty_printer__expand_format_list_5_p_0(mercury__pretty_printer__Univs_37, mercury__pretty_printer__Sep_38, &mercury__pretty_printer__Doc1_120, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_93_93);
                        }
#line 574 "pretty_printer.m"
                        {
#line 574 "pretty_printer.m"
                          mercury__pretty_printer__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_120));
#line 574 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 574 "pretty_printer.m"
                        }
#line 574 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 574 "pretty_printer.m"
                        {
#line 574 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_94_94;
#line 574 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_93_93;

#line 574 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 574 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 574 "pretty_printer.m"
                        }
#line 574 "pretty_printer.m"
                        continue;
#line 572 "pretty_printer.m"
                      }
#line 553 "pretty_printer.m"
                      break;
#line 553 "pretty_printer.m"
                    case (MR_Integer) 2:
#line 577 "pretty_printer.m"
                      {
#line 577 "pretty_printer.m"
                        MR_String mercury__pretty_printer__Name_39 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 577 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_88_88;
#line 577 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_89_89;
#line 577 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Doc1_121;
#line 577 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Univs_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 2)));

#line 578 "pretty_printer.m"
                        {
#line 578 "pretty_printer.m"
                          mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_39, mercury__pretty_printer__Univs_122, &mercury__pretty_printer__Doc1_121, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_88_88, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8);
                        }
#line 579 "pretty_printer.m"
                        {
#line 579 "pretty_printer.m"
                          mercury__pretty_printer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_121));
#line 579 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 579 "pretty_printer.m"
                        }
#line 579 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 579 "pretty_printer.m"
                        {
#line 579 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_89_89;
#line 579 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_88_88;

#line 579 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 579 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 579 "pretty_printer.m"
                        }
#line 579 "pretty_printer.m"
                        continue;
#line 577 "pretty_printer.m"
                      }
#line 553 "pretty_printer.m"
                      break;
#line 553 "pretty_printer.m"
                    case (MR_Integer) 3:
#line 582 "pretty_printer.m"
                      {
#line 582 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Susp_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 582 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_83_83;
#line 582 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_84_84;
#line 582 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Doc1_123;

#line 583 "pretty_printer.m"
                        {
#line 583 "pretty_printer.m"
                          mercury__pretty_printer__expand_format_susp_4_p_0(mercury__pretty_printer__Susp_40, &mercury__pretty_printer__Doc1_123, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_83_83);
                        }
#line 584 "pretty_printer.m"
                        {
#line 584 "pretty_printer.m"
                          mercury__pretty_printer__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_84_84, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_123));
#line 584 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_84_84, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 584 "pretty_printer.m"
                        }
#line 584 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 584 "pretty_printer.m"
                        {
#line 584 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_84_84;
#line 584 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_83_83;

#line 584 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 584 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 584 "pretty_printer.m"
                        }
#line 584 "pretty_printer.m"
                        continue;
#line 582 "pretty_printer.m"
                      }
#line 553 "pretty_printer.m"
                      break;
#line 553 "pretty_printer.m"
                    case (MR_Integer) 4:
#line 553 "pretty_printer.m"
                      {
#line 553 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));

#line 553 "pretty_printer.m"
#line 553 "pretty_printer.m"
                        switch (MR_tag((MR_Word) mercury__pretty_printer__V_130_130)) {
#line 553 "pretty_printer.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 553 "pretty_printer.m"
                          case (MR_Integer) 0:
#line 553 "pretty_printer.m"
#line 553 "pretty_printer.m"
                            switch (MR_unmkbody(mercury__pretty_printer__V_130_130)) {
#line 553 "pretty_printer.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 553 "pretty_printer.m"
                              case (MR_Integer) 0:
#line 597 "pretty_printer.m"
                                {
#line 597 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__OpenGroups1_42;
#line 597 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__V_70_70;
#line 597 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__Docs1_126;

#line 599 "pretty_printer.m"
                                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 > (MR_Integer) 0);
#line 599 "pretty_printer.m"
                                  if (mercury__pretty_printer__succeeded)
#line 599 "pretty_printer.m"
                                    mercury__pretty_printer__V_70_70 = (MR_Integer) 1;
#line 599 "pretty_printer.m"
                                  else
#line 599 "pretty_printer.m"
                                    mercury__pretty_printer__V_70_70 = (MR_Integer) 0;
#line 599 "pretty_printer.m"
                                  mercury__pretty_printer__OpenGroups1_42 = (mercury__pretty_printer__HeadVar__5_5 + mercury__pretty_printer__V_70_70);
#line 600 "pretty_printer.m"
                                  {
#line 600 "pretty_printer.m"
                                    mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_126, mercury__pretty_printer__OpenGroups1_42, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                  }
#line 598 "pretty_printer.m"
                                  {
#line 598 "pretty_printer.m"
                                    MR_Word base;
#line 598 "pretty_printer.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 598 "pretty_printer.m"
                                    *mercury__pretty_printer__HeadVar__4_4 = base;
#line 598 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 598 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_126));
#line 598 "pretty_printer.m"
                                  }
#line 597 "pretty_printer.m"
                                }
#line 553 "pretty_printer.m"
                                break;
#line 553 "pretty_printer.m"
                              case (MR_Integer) 1:
#line 603 "pretty_printer.m"
                                {
#line 603 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__V_64_64;
#line 603 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__Docs1_127;
#line 603 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__OpenGroups1_128;

#line 605 "pretty_printer.m"
                                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 > (MR_Integer) 0);
#line 605 "pretty_printer.m"
                                  if (mercury__pretty_printer__succeeded)
#line 605 "pretty_printer.m"
                                    mercury__pretty_printer__V_64_64 = (MR_Integer) 1;
#line 605 "pretty_printer.m"
                                  else
#line 605 "pretty_printer.m"
                                    mercury__pretty_printer__V_64_64 = (MR_Integer) 0;
#line 605 "pretty_printer.m"
                                  mercury__pretty_printer__OpenGroups1_128 = (mercury__pretty_printer__HeadVar__5_5 - mercury__pretty_printer__V_64_64);
#line 606 "pretty_printer.m"
                                  {
#line 606 "pretty_printer.m"
                                    mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_127, mercury__pretty_printer__OpenGroups1_128, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                  }
#line 604 "pretty_printer.m"
                                  {
#line 604 "pretty_printer.m"
                                    MR_Word base;
#line 604 "pretty_printer.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "pretty_printer.m"
                                    *mercury__pretty_printer__HeadVar__4_4 = base;
#line 604 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 604 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_127));
#line 604 "pretty_printer.m"
                                  }
#line 603 "pretty_printer.m"
                                }
#line 553 "pretty_printer.m"
                                break;
#line 553 "pretty_printer.m"
                              case (MR_Integer) 2:
#line 592 "pretty_printer.m"
                                {
#line 592 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__Docs1_125;

#line 594 "pretty_printer.m"
                                  {
#line 594 "pretty_printer.m"
                                    mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_125, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                  }
#line 593 "pretty_printer.m"
                                  {
#line 593 "pretty_printer.m"
                                    MR_Word base;
#line 593 "pretty_printer.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "pretty_printer.m"
                                    *mercury__pretty_printer__HeadVar__4_4 = base;
#line 593 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 593 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_125));
#line 593 "pretty_printer.m"
                                  }
#line 592 "pretty_printer.m"
                                }
#line 553 "pretty_printer.m"
                                break;
#line 553 "pretty_printer.m"
                            }
#line 553 "pretty_printer.m"
                            break;
#line 553 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 587 "pretty_printer.m"
                            {
#line 587 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__Docs1_124;

#line 589 "pretty_printer.m"
                              {
#line 589 "pretty_printer.m"
                                mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_124, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                              }
#line 588 "pretty_printer.m"
                              {
#line 588 "pretty_printer.m"
                                MR_Word base;
#line 588 "pretty_printer.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "pretty_printer.m"
                                *mercury__pretty_printer__HeadVar__4_4 = base;
#line 588 "pretty_printer.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 588 "pretty_printer.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_124));
#line 588 "pretty_printer.m"
                              }
#line 587 "pretty_printer.m"
                            }
#line 553 "pretty_printer.m"
                            break;
#line 553 "pretty_printer.m"
                          case (MR_Integer) 2:
#line 614 "pretty_printer.m"
                            {
#line 614 "pretty_printer.m"
                              MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_130_130, (MR_Integer) 0)));

#line 616 "pretty_printer.m"
                              /* direct tailcall eliminated */
#line 616 "pretty_printer.m"
                              {
#line 616 "pretty_printer.m"
                                MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__Docs0_27;
#line 616 "pretty_printer.m"
                                MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_8 = mercury__pretty_printer__STATE_VARIABLE_Pri_54_54;

#line 616 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Pri_0_8 = mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_8;
#line 616 "pretty_printer.m"
                                mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 616 "pretty_printer.m"
                              }
#line 616 "pretty_printer.m"
                              continue;
#line 614 "pretty_printer.m"
                            }
#line 553 "pretty_printer.m"
                            break;
#line 553 "pretty_printer.m"
                          case (MR_Integer) 3:
#line 609 "pretty_printer.m"
                            {
#line 609 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_130_130, (MR_Integer) 0)));

#line 611 "pretty_printer.m"
                              /* direct tailcall eliminated */
#line 611 "pretty_printer.m"
                              {
#line 611 "pretty_printer.m"
                                MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__Docs0_27;
#line 611 "pretty_printer.m"
                                MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_59_59;

#line 611 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 611 "pretty_printer.m"
                                mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 611 "pretty_printer.m"
                              }
#line 611 "pretty_printer.m"
                              continue;
#line 609 "pretty_printer.m"
                            }
#line 553 "pretty_printer.m"
                            break;
#line 553 "pretty_printer.m"
                        }
#line 553 "pretty_printer.m"
                      }
#line 553 "pretty_printer.m"
                      break;
#line 553 "pretty_printer.m"
                  }
#line 553 "pretty_printer.m"
                  break;
#line 553 "pretty_printer.m"
              }
#line 532 "pretty_printer.m"
          }
#line 529 "pretty_printer.m"
      }
#line 529 "pretty_printer.m"
      break;
#line 529 "pretty_printer.m"
    }
#line 526 "pretty_printer.m"
}

#line 524 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__expand_docs_11_p_0(
#line 524 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__1_1,
#line 524 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 524 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 524 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__4_4,
#line 524 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__5_5,
#line 524 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_6,
#line 524 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_7,
#line 524 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_8,
#line 524 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_9,
#line 524 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10,
#line 524 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11)
#line 524 "pretty_printer.m"
{
#line 529 "pretty_printer.m"
  while (MR_TRUE)
#line 529 "pretty_printer.m"
    {
#line 529 "pretty_printer.m"
      /* tailcall optimized into a loop */
#line 529 "pretty_printer.m"
      {
#line 529 "pretty_printer.m"
        MR_bool mercury__pretty_printer__succeeded;

#line 529 "pretty_printer.m"
        if ((mercury__pretty_printer__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 529 "pretty_printer.m"
          {
#line 529 "pretty_printer.m"
            *mercury__pretty_printer__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 530 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
#line 530 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
#line 530 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
#line 529 "pretty_printer.m"
          }
#line 529 "pretty_printer.m"
        else
#line 532 "pretty_printer.m"
          {
#line 532 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Doc_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 0)));
#line 532 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Docs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__3_3, (MR_Integer) 1)));

#line 535 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 <= (MR_Integer) 0);
#line 535 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 535 "pretty_printer.m"
              {
#line 535 "pretty_printer.m"
                if ((mercury__pretty_printer__Doc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 535 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = MR_TRUE;
#line 535 "pretty_printer.m"
                else
#line 535 "pretty_printer.m"
                if ((mercury__pretty_printer__Doc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = MR_TRUE;
#line 535 "pretty_printer.m"
                else
#line 535 "pretty_printer.m"
                  mercury__pretty_printer__succeeded = MR_FALSE;
#line 535 "pretty_printer.m"
              }
#line 538 "pretty_printer.m"
            if (!(mercury__pretty_printer__succeeded))
#line 539 "pretty_printer.m"
              {
#line 539 "pretty_printer.m"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10 < (MR_Integer) 0);
#line 539 "pretty_printer.m"
              }
#line 545 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 544 "pretty_printer.m"
              {
#line 544 "pretty_printer.m"
                *mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__3_3;
#line 544 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
#line 544 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
#line 544 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
#line 544 "pretty_printer.m"
              }
#line 545 "pretty_printer.m"
            else
#line 553 "pretty_printer.m"
#line 553 "pretty_printer.m"
              switch (MR_tag((MR_Word) mercury__pretty_printer__Doc_26)) {
#line 553 "pretty_printer.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 553 "pretty_printer.m"
                case (MR_Integer) 0:
#line 554 "pretty_printer.m"
                  {
#line 555 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 <= (MR_Integer) 0);
#line 554 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 556 "pretty_printer.m"
                      {
#line 556 "pretty_printer.m"
                        *mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__3_3;
#line 556 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10;
#line 556 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_Pri_9 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_8;
#line 556 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_Limit_7 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_6;
#line 556 "pretty_printer.m"
                      }
#line 554 "pretty_printer.m"
                    else
#line 558 "pretty_printer.m"
                      {
#line 558 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Docs1_116;

#line 559 "pretty_printer.m"
                        {
#line 559 "pretty_printer.m"
                          mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_116, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                        }
#line 558 "pretty_printer.m"
                        {
#line 558 "pretty_printer.m"
                          MR_Word base;
#line 558 "pretty_printer.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "pretty_printer.m"
                          *mercury__pretty_printer__HeadVar__4_4 = base;
#line 558 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 558 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_116));
#line 558 "pretty_printer.m"
                        }
#line 558 "pretty_printer.m"
                      }
#line 554 "pretty_printer.m"
                  }
#line 553 "pretty_printer.m"
                  break;
#line 553 "pretty_printer.m"
                case (MR_Integer) 1:
#line 547 "pretty_printer.m"
                  {
#line 547 "pretty_printer.m"
                    MR_String mercury__pretty_printer__String_33 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc_26, (MR_Integer) 0)));
#line 547 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__Docs1_34;
#line 547 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111;
#line 547 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__V_112_112;

#line 549 "pretty_printer.m"
                    {
#line 549 "pretty_printer.m"
                      mercury__pretty_printer__V_112_112 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__String_33);
                    }
#line 548 "pretty_printer.m"
                    mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10 - mercury__pretty_printer__V_112_112);
#line 551 "pretty_printer.m"
                    {
#line 551 "pretty_printer.m"
                      mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_34, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_111_111, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                    }
#line 550 "pretty_printer.m"
                    {
#line 550 "pretty_printer.m"
                      MR_Word base;
#line 550 "pretty_printer.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "pretty_printer.m"
                      *mercury__pretty_printer__HeadVar__4_4 = base;
#line 550 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 550 "pretty_printer.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_34));
#line 550 "pretty_printer.m"
                    }
#line 547 "pretty_printer.m"
                  }
#line 553 "pretty_printer.m"
                  break;
#line 553 "pretty_printer.m"
                case (MR_Integer) 2:
#line 563 "pretty_printer.m"
                  {
#line 563 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__TypeCtorInfo_129_129 = (MR_Word) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0;
#line 563 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_103_103;
#line 563 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__Docs1_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc_26, (MR_Integer) 0)));

#line 564 "pretty_printer.m"
                    {
#line 564 "pretty_printer.m"
                      mercury__pretty_printer__V_103_103 = mercury__list__f_43_43_2_f_0(mercury__pretty_printer__TypeCtorInfo_129_129, mercury__pretty_printer__Docs1_119, mercury__pretty_printer__Docs0_27);
                    }
#line 564 "pretty_printer.m"
                    /* direct tailcall eliminated */
#line 564 "pretty_printer.m"
                    {
#line 564 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_103_103;

#line 564 "pretty_printer.m"
                      mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 564 "pretty_printer.m"
                    }
#line 564 "pretty_printer.m"
                    continue;
#line 563 "pretty_printer.m"
                  }
#line 553 "pretty_printer.m"
                  break;
#line 553 "pretty_printer.m"
                case (MR_Integer) 3:
#line 553 "pretty_printer.m"
#line 553 "pretty_printer.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 0)))) {
#line 553 "pretty_printer.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 553 "pretty_printer.m"
                    case (MR_Integer) 0:
#line 567 "pretty_printer.m"
                      {
#line 567 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Univ_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 567 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Doc1_36;
#line 567 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_98_98;
#line 567 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_99_99;

#line 568 "pretty_printer.m"
                        {
#line 568 "pretty_printer.m"
                          mercury__pretty_printer__expand_pp_7_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Univ_35, &mercury__pretty_printer__Doc1_36, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_98_98, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8);
                        }
#line 569 "pretty_printer.m"
                        {
#line 569 "pretty_printer.m"
                          mercury__pretty_printer__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_99_99, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_36));
#line 569 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_99_99, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 569 "pretty_printer.m"
                        }
#line 569 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 569 "pretty_printer.m"
                        {
#line 569 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_99_99;
#line 569 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_98_98;

#line 569 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 569 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 569 "pretty_printer.m"
                        }
#line 569 "pretty_printer.m"
                        continue;
#line 567 "pretty_printer.m"
                      }
#line 553 "pretty_printer.m"
                      break;
#line 553 "pretty_printer.m"
                    case (MR_Integer) 1:
#line 572 "pretty_printer.m"
                      {
#line 572 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Univs_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 572 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Sep_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 2)));
#line 572 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_93_93;
#line 572 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_94_94;
#line 572 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Doc1_120;

#line 573 "pretty_printer.m"
                        {
#line 573 "pretty_printer.m"
                          mercury__pretty_printer__expand_format_list_5_p_0(mercury__pretty_printer__Univs_37, mercury__pretty_printer__Sep_38, &mercury__pretty_printer__Doc1_120, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_93_93);
                        }
#line 574 "pretty_printer.m"
                        {
#line 574 "pretty_printer.m"
                          mercury__pretty_printer__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_120));
#line 574 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_94_94, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 574 "pretty_printer.m"
                        }
#line 574 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 574 "pretty_printer.m"
                        {
#line 574 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_94_94;
#line 574 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_93_93;

#line 574 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 574 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 574 "pretty_printer.m"
                        }
#line 574 "pretty_printer.m"
                        continue;
#line 572 "pretty_printer.m"
                      }
#line 553 "pretty_printer.m"
                      break;
#line 553 "pretty_printer.m"
                    case (MR_Integer) 2:
#line 577 "pretty_printer.m"
                      {
#line 577 "pretty_printer.m"
                        MR_String mercury__pretty_printer__Name_39 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 577 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_88_88;
#line 577 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_89_89;
#line 577 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Doc1_121;
#line 577 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Univs_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 2)));

#line 578 "pretty_printer.m"
                        {
#line 578 "pretty_printer.m"
                          mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_39, mercury__pretty_printer__Univs_122, &mercury__pretty_printer__Doc1_121, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_88_88, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8);
                        }
#line 579 "pretty_printer.m"
                        {
#line 579 "pretty_printer.m"
                          mercury__pretty_printer__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_121));
#line 579 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_89_89, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 579 "pretty_printer.m"
                        }
#line 579 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 579 "pretty_printer.m"
                        {
#line 579 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_89_89;
#line 579 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_88_88;

#line 579 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 579 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 579 "pretty_printer.m"
                        }
#line 579 "pretty_printer.m"
                        continue;
#line 577 "pretty_printer.m"
                      }
#line 553 "pretty_printer.m"
                      break;
#line 553 "pretty_printer.m"
                    case (MR_Integer) 3:
#line 582 "pretty_printer.m"
                      {
#line 582 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Susp_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));
#line 582 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_83_83;
#line 582 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_84_84;
#line 582 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__Doc1_123;

#line 583 "pretty_printer.m"
                        {
#line 583 "pretty_printer.m"
                          mercury__pretty_printer__expand_format_susp_4_p_0(mercury__pretty_printer__Susp_40, &mercury__pretty_printer__Doc1_123, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, &mercury__pretty_printer__STATE_VARIABLE_Limit_83_83);
                        }
#line 584 "pretty_printer.m"
                        {
#line 584 "pretty_printer.m"
                          mercury__pretty_printer__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_84_84, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_123));
#line 584 "pretty_printer.m"
                          MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_84_84, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_27));
#line 584 "pretty_printer.m"
                        }
#line 584 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 584 "pretty_printer.m"
                        {
#line 584 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__V_84_84;
#line 584 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_83_83;

#line 584 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 584 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 584 "pretty_printer.m"
                        }
#line 584 "pretty_printer.m"
                        continue;
#line 582 "pretty_printer.m"
                      }
#line 553 "pretty_printer.m"
                      break;
#line 553 "pretty_printer.m"
                    case (MR_Integer) 4:
#line 553 "pretty_printer.m"
                      {
#line 553 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_26, (MR_Integer) 1)));

#line 553 "pretty_printer.m"
#line 553 "pretty_printer.m"
                        switch (MR_tag((MR_Word) mercury__pretty_printer__V_130_130)) {
#line 553 "pretty_printer.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 553 "pretty_printer.m"
                          case (MR_Integer) 0:
#line 553 "pretty_printer.m"
#line 553 "pretty_printer.m"
                            switch (MR_unmkbody(mercury__pretty_printer__V_130_130)) {
#line 553 "pretty_printer.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 553 "pretty_printer.m"
                              case (MR_Integer) 0:
#line 597 "pretty_printer.m"
                                {
#line 597 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__OpenGroups1_42;
#line 597 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__V_70_70;
#line 597 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__Docs1_126;

#line 599 "pretty_printer.m"
                                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 > (MR_Integer) 0);
#line 599 "pretty_printer.m"
                                  if (mercury__pretty_printer__succeeded)
#line 599 "pretty_printer.m"
                                    mercury__pretty_printer__V_70_70 = (MR_Integer) 1;
#line 599 "pretty_printer.m"
                                  else
#line 599 "pretty_printer.m"
                                    mercury__pretty_printer__V_70_70 = (MR_Integer) 0;
#line 599 "pretty_printer.m"
                                  mercury__pretty_printer__OpenGroups1_42 = (mercury__pretty_printer__HeadVar__5_5 + mercury__pretty_printer__V_70_70);
#line 600 "pretty_printer.m"
                                  {
#line 600 "pretty_printer.m"
                                    mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_126, mercury__pretty_printer__OpenGroups1_42, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                  }
#line 598 "pretty_printer.m"
                                  {
#line 598 "pretty_printer.m"
                                    MR_Word base;
#line 598 "pretty_printer.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 598 "pretty_printer.m"
                                    *mercury__pretty_printer__HeadVar__4_4 = base;
#line 598 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 598 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_126));
#line 598 "pretty_printer.m"
                                  }
#line 597 "pretty_printer.m"
                                }
#line 553 "pretty_printer.m"
                                break;
#line 553 "pretty_printer.m"
                              case (MR_Integer) 1:
#line 603 "pretty_printer.m"
                                {
#line 603 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__V_64_64;
#line 603 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__Docs1_127;
#line 603 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__OpenGroups1_128;

#line 605 "pretty_printer.m"
                                  mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__5_5 > (MR_Integer) 0);
#line 605 "pretty_printer.m"
                                  if (mercury__pretty_printer__succeeded)
#line 605 "pretty_printer.m"
                                    mercury__pretty_printer__V_64_64 = (MR_Integer) 1;
#line 605 "pretty_printer.m"
                                  else
#line 605 "pretty_printer.m"
                                    mercury__pretty_printer__V_64_64 = (MR_Integer) 0;
#line 605 "pretty_printer.m"
                                  mercury__pretty_printer__OpenGroups1_128 = (mercury__pretty_printer__HeadVar__5_5 - mercury__pretty_printer__V_64_64);
#line 606 "pretty_printer.m"
                                  {
#line 606 "pretty_printer.m"
                                    mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_127, mercury__pretty_printer__OpenGroups1_128, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                  }
#line 604 "pretty_printer.m"
                                  {
#line 604 "pretty_printer.m"
                                    MR_Word base;
#line 604 "pretty_printer.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "pretty_printer.m"
                                    *mercury__pretty_printer__HeadVar__4_4 = base;
#line 604 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 604 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_127));
#line 604 "pretty_printer.m"
                                  }
#line 603 "pretty_printer.m"
                                }
#line 553 "pretty_printer.m"
                                break;
#line 553 "pretty_printer.m"
                              case (MR_Integer) 2:
#line 592 "pretty_printer.m"
                                {
#line 592 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__Docs1_125;

#line 594 "pretty_printer.m"
                                  {
#line 594 "pretty_printer.m"
                                    mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_125, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                                  }
#line 593 "pretty_printer.m"
                                  {
#line 593 "pretty_printer.m"
                                    MR_Word base;
#line 593 "pretty_printer.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "pretty_printer.m"
                                    *mercury__pretty_printer__HeadVar__4_4 = base;
#line 593 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 593 "pretty_printer.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_125));
#line 593 "pretty_printer.m"
                                  }
#line 592 "pretty_printer.m"
                                }
#line 553 "pretty_printer.m"
                                break;
#line 553 "pretty_printer.m"
                            }
#line 553 "pretty_printer.m"
                            break;
#line 553 "pretty_printer.m"
                          case (MR_Integer) 1:
#line 587 "pretty_printer.m"
                            {
#line 587 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__Docs1_124;

#line 589 "pretty_printer.m"
                              {
#line 589 "pretty_printer.m"
                                mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__Docs0_27, &mercury__pretty_printer__Docs1_124, mercury__pretty_printer__HeadVar__5_5, mercury__pretty_printer__STATE_VARIABLE_Limit_0_6, mercury__pretty_printer__STATE_VARIABLE_Limit_7, mercury__pretty_printer__STATE_VARIABLE_Pri_0_8, mercury__pretty_printer__STATE_VARIABLE_Pri_9, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_10, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_11);
                              }
#line 588 "pretty_printer.m"
                              {
#line 588 "pretty_printer.m"
                                MR_Word base;
#line 588 "pretty_printer.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "pretty_printer.m"
                                *mercury__pretty_printer__HeadVar__4_4 = base;
#line 588 "pretty_printer.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pretty_printer__Doc_26));
#line 588 "pretty_printer.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pretty_printer__Docs1_124));
#line 588 "pretty_printer.m"
                              }
#line 587 "pretty_printer.m"
                            }
#line 553 "pretty_printer.m"
                            break;
#line 553 "pretty_printer.m"
                          case (MR_Integer) 2:
#line 614 "pretty_printer.m"
                            {
#line 614 "pretty_printer.m"
                              MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_130_130, (MR_Integer) 0)));

#line 616 "pretty_printer.m"
                              /* direct tailcall eliminated */
#line 616 "pretty_printer.m"
                              {
#line 616 "pretty_printer.m"
                                MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__Docs0_27;
#line 616 "pretty_printer.m"
                                MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_8 = mercury__pretty_printer__STATE_VARIABLE_Pri_54_54;

#line 616 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Pri_0_8 = mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_8;
#line 616 "pretty_printer.m"
                                mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 616 "pretty_printer.m"
                              }
#line 616 "pretty_printer.m"
                              continue;
#line 614 "pretty_printer.m"
                            }
#line 553 "pretty_printer.m"
                            break;
#line 553 "pretty_printer.m"
                          case (MR_Integer) 3:
#line 609 "pretty_printer.m"
                            {
#line 609 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_130_130, (MR_Integer) 0)));

#line 611 "pretty_printer.m"
                              /* direct tailcall eliminated */
#line 611 "pretty_printer.m"
                              {
#line 611 "pretty_printer.m"
                                MR_Word mercury__pretty_printer__HeadVar__3__tmp_copy_3 = mercury__pretty_printer__Docs0_27;
#line 611 "pretty_printer.m"
                                MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_59_59;

#line 611 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Limit_0_6 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_6;
#line 611 "pretty_printer.m"
                                mercury__pretty_printer__HeadVar__3_3 = mercury__pretty_printer__HeadVar__3__tmp_copy_3;
#line 611 "pretty_printer.m"
                              }
#line 611 "pretty_printer.m"
                              continue;
#line 609 "pretty_printer.m"
                            }
#line 553 "pretty_printer.m"
                            break;
#line 553 "pretty_printer.m"
                        }
#line 553 "pretty_printer.m"
                      }
#line 553 "pretty_printer.m"
                      break;
#line 553 "pretty_printer.m"
                  }
#line 553 "pretty_printer.m"
                  break;
#line 553 "pretty_printer.m"
              }
#line 532 "pretty_printer.m"
          }
#line 529 "pretty_printer.m"
      }
#line 529 "pretty_printer.m"
      break;
#line 529 "pretty_printer.m"
    }
#line 524 "pretty_printer.m"
}

#line 472 "pretty_printer.m"
static void MR_CALL 
mercury__pretty_printer__output_current_group_12_p_0(
#line 472 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_71,
#line 472 "pretty_printer.m"
  MR_Box mercury__pretty_printer__HeadVar__1_1,
#line 472 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__2_2,
#line 472 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 472 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__4_4,
#line 472 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__5_5,
#line 472 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__HeadVar__6_6,
#line 472 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7,
#line 472 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_8,
#line 472 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9,
#line 472 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_10,
#line 472 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_11,
#line 472 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_12)
#line 472 "pretty_printer.m"
{
#line 476 "pretty_printer.m"
  while (MR_TRUE)
#line 476 "pretty_printer.m"
    {
#line 476 "pretty_printer.m"
      /* tailcall optimized into a loop */
#line 476 "pretty_printer.m"
      {
#line 476 "pretty_printer.m"
        MR_bool mercury__pretty_printer__succeeded;

#line 476 "pretty_printer.m"
        if ((mercury__pretty_printer__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 476 "pretty_printer.m"
          {
#line 477 "pretty_printer.m"
            *mercury__pretty_printer__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 477 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_IO_12 = mercury__pretty_printer__STATE_VARIABLE_IO_0_11;
#line 477 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9;
#line 477 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_8 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7;
#line 476 "pretty_printer.m"
          }
#line 476 "pretty_printer.m"
        else
#line 479 "pretty_printer.m"
          {
#line 479 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Doc_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 0)));
#line 479 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Docs0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 1)));
#line 485 "pretty_printer.m"
            MR_String mercury__pretty_printer__String_36;

#line 480 "pretty_printer.m"
            mercury__pretty_printer__succeeded = ((MR_tag((MR_Word) mercury__pretty_printer__Doc_30)) == (MR_mktag((MR_Integer) 1)));
#line 480 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 480 "pretty_printer.m"
              {
#line 480 "pretty_printer.m"
                mercury__pretty_printer__String_36 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc_30, (MR_Integer) 0)));
#line 481 "pretty_printer.m"
                {
#line 481 "pretty_printer.m"
                  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_43_43;
#line 481 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_44_44;
#line 481 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__V_45_45;
#line 13719 "pretty_printer.c"
                  void MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_writer_71, (MR_Integer) 0)), (MR_Integer) 5)));

#line 13722 "pretty_printer.c"
                  {
#line 13724 "pretty_printer.c"
                    mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_writer_71), mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__String_36)), mercury__pretty_printer__STATE_VARIABLE_IO_0_11, &mercury__pretty_printer__STATE_VARIABLE_IO_43_43);
                  }
#line 246 "string.opt"
                  {
#line 246 "string.opt"
                    mercury__string__count_codepoints_2_p_0(mercury__pretty_printer__String_36, &mercury__pretty_printer__V_45_45);
                  }
#line 482 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_44_44 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7 - mercury__pretty_printer__V_45_45);
#line 483 "pretty_printer.m"
                  /* direct tailcall eliminated */
#line 483 "pretty_printer.m"
                  {
#line 483 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs0_31;
#line 483 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_44_44;
#line 483 "pretty_printer.m"
                    MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_11 = mercury__pretty_printer__STATE_VARIABLE_IO_43_43;

#line 483 "pretty_printer.m"
                    mercury__pretty_printer__STATE_VARIABLE_IO_0_11 = mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_11;
#line 483 "pretty_printer.m"
                    mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_7;
#line 483 "pretty_printer.m"
                    mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 483 "pretty_printer.m"
                  }
#line 483 "pretty_printer.m"
                  continue;
#line 481 "pretty_printer.m"
                }
#line 480 "pretty_printer.m"
              }
#line 480 "pretty_printer.m"
            else
#line 494 "pretty_printer.m"
              {
#line 485 "pretty_printer.m"
                mercury__pretty_printer__succeeded = (mercury__pretty_printer__Doc_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 494 "pretty_printer.m"
                if (mercury__pretty_printer__succeeded)
#line 487 "pretty_printer.m"
                  {
#line 487 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_49_49;
#line 487 "pretty_printer.m"
                    MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_50_50;
#line 487 "pretty_printer.m"
                    MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_51_51;
#line 487 "pretty_printer.m"
                    MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_20_85;
#line 13777 "pretty_printer.c"
                    void MR_CALL (* mercury__pretty_printer__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_writer_71, (MR_Integer) 0)), (MR_Integer) 5)));

#line 13780 "pretty_printer.c"
                    {
#line 13782 "pretty_printer.c"
                      mercury__pretty_printer__func_1(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_writer_71), mercury__pretty_printer__HeadVar__1_1, ((MR_Box) ((MR_String) "\n")), mercury__pretty_printer__STATE_VARIABLE_IO_0_11, &mercury__pretty_printer__STATE_VARIABLE_IO_20_85);
                    }
#line 631 "pretty_printer.m"
                    {
#line 631 "pretty_printer.m"
                      mercury__pretty_printer__output_indentation_6_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_71, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__3_3, mercury__pretty_printer__HeadVar__2_2, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_49_49, mercury__pretty_printer__STATE_VARIABLE_IO_20_85, &mercury__pretty_printer__STATE_VARIABLE_IO_51_51);
                    }
#line 632 "pretty_printer.m"
                    mercury__pretty_printer__STATE_VARIABLE_RemainingLines_50_50 = (mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9 - (MR_Integer) 1);
#line 488 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingLines_50_50 <= (MR_Integer) 0);
#line 490 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 489 "pretty_printer.m"
                      {
#line 489 "pretty_printer.m"
                        *mercury__pretty_printer__HeadVar__6_6 = mercury__pretty_printer__Docs0_31;
#line 489 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_IO_12 = mercury__pretty_printer__STATE_VARIABLE_IO_51_51;
#line 489 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_50_50;
#line 489 "pretty_printer.m"
                        *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_8 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_49_49;
#line 489 "pretty_printer.m"
                      }
#line 490 "pretty_printer.m"
                    else
#line 491 "pretty_printer.m"
                      {
#line 491 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 491 "pretty_printer.m"
                        {
#line 491 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs0_31;
#line 491 "pretty_printer.m"
                          MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_49_49;
#line 491 "pretty_printer.m"
                          MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_9 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_50_50;
#line 491 "pretty_printer.m"
                          MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_11 = mercury__pretty_printer__STATE_VARIABLE_IO_51_51;

#line 491 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_IO_0_11 = mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_11;
#line 491 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_9;
#line 491 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_7;
#line 491 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 491 "pretty_printer.m"
                        }
#line 491 "pretty_printer.m"
                        continue;
#line 491 "pretty_printer.m"
                      }
#line 487 "pretty_printer.m"
                  }
#line 494 "pretty_printer.m"
                else
#line 497 "pretty_printer.m"
                  {
#line 494 "pretty_printer.m"
                    MR_Word mercury__pretty_printer__V_56_56;

#line 494 "pretty_printer.m"
                    mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__Doc_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_30, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 494 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 494 "pretty_printer.m"
                      {
#line 494 "pretty_printer.m"
                        mercury__pretty_printer__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_30, (MR_Integer) 1)));
#line 494 "pretty_printer.m"
                        mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 494 "pretty_printer.m"
                      }
#line 497 "pretty_printer.m"
                    if (mercury__pretty_printer__succeeded)
#line 495 "pretty_printer.m"
                      {
#line 495 "pretty_printer.m"
                        MR_Integer mercury__pretty_printer__V_57_57 = (mercury__pretty_printer__HeadVar__4_4 + (MR_Integer) 1);

#line 495 "pretty_printer.m"
                        /* direct tailcall eliminated */
#line 495 "pretty_printer.m"
                        {
#line 495 "pretty_printer.m"
                          MR_Integer mercury__pretty_printer__HeadVar__4__tmp_copy_4 = mercury__pretty_printer__V_57_57;
#line 495 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs0_31;

#line 495 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 495 "pretty_printer.m"
                          mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__4__tmp_copy_4;
#line 495 "pretty_printer.m"
                        }
#line 495 "pretty_printer.m"
                        continue;
#line 495 "pretty_printer.m"
                      }
#line 497 "pretty_printer.m"
                    else
#line 504 "pretty_printer.m"
                      {
#line 497 "pretty_printer.m"
                        MR_Word mercury__pretty_printer__V_62_62;

#line 497 "pretty_printer.m"
                        mercury__pretty_printer__succeeded = ((((MR_tag((MR_Word) mercury__pretty_printer__Doc_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_30, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 497 "pretty_printer.m"
                        if (mercury__pretty_printer__succeeded)
#line 497 "pretty_printer.m"
                          {
#line 497 "pretty_printer.m"
                            mercury__pretty_printer__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_30, (MR_Integer) 1)));
#line 497 "pretty_printer.m"
                            mercury__pretty_printer__succeeded = (mercury__pretty_printer__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 497 "pretty_printer.m"
                          }
#line 504 "pretty_printer.m"
                        if (mercury__pretty_printer__succeeded)
#line 500 "pretty_printer.m"
                          {
#line 498 "pretty_printer.m"
                            mercury__pretty_printer__succeeded = (mercury__pretty_printer__HeadVar__4_4 == (MR_Integer) 1);
#line 500 "pretty_printer.m"
                            if (mercury__pretty_printer__succeeded)
#line 499 "pretty_printer.m"
                              {
#line 499 "pretty_printer.m"
                                *mercury__pretty_printer__HeadVar__6_6 = mercury__pretty_printer__Docs0_31;
#line 499 "pretty_printer.m"
                                *mercury__pretty_printer__STATE_VARIABLE_IO_12 = mercury__pretty_printer__STATE_VARIABLE_IO_0_11;
#line 499 "pretty_printer.m"
                                *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_9;
#line 499 "pretty_printer.m"
                                *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_8 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_7;
#line 499 "pretty_printer.m"
                              }
#line 500 "pretty_printer.m"
                            else
#line 501 "pretty_printer.m"
                              {
#line 501 "pretty_printer.m"
                                MR_Integer mercury__pretty_printer__V_63_63 = (mercury__pretty_printer__HeadVar__4_4 - (MR_Integer) 1);

#line 501 "pretty_printer.m"
                                /* direct tailcall eliminated */
#line 501 "pretty_printer.m"
                                {
#line 501 "pretty_printer.m"
                                  MR_Integer mercury__pretty_printer__HeadVar__4__tmp_copy_4 = mercury__pretty_printer__V_63_63;
#line 501 "pretty_printer.m"
                                  MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs0_31;

#line 501 "pretty_printer.m"
                                  mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 501 "pretty_printer.m"
                                  mercury__pretty_printer__HeadVar__4_4 = mercury__pretty_printer__HeadVar__4__tmp_copy_4;
#line 501 "pretty_printer.m"
                                }
#line 501 "pretty_printer.m"
                                continue;
#line 501 "pretty_printer.m"
                              }
#line 500 "pretty_printer.m"
                          }
#line 504 "pretty_printer.m"
                        else
#line 505 "pretty_printer.m"
                          {
#line 505 "pretty_printer.m"
                            /* direct tailcall eliminated */
#line 505 "pretty_printer.m"
                            {
#line 505 "pretty_printer.m"
                              MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs0_31;

#line 505 "pretty_printer.m"
                              mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 505 "pretty_printer.m"
                            }
#line 505 "pretty_printer.m"
                            continue;
#line 505 "pretty_printer.m"
                          }
#line 504 "pretty_printer.m"
                      }
#line 497 "pretty_printer.m"
                  }
#line 494 "pretty_printer.m"
              }
#line 479 "pretty_printer.m"
          }
#line 476 "pretty_printer.m"
      }
#line 476 "pretty_printer.m"
      break;
#line 476 "pretty_printer.m"
    }
#line 472 "pretty_printer.m"
}

#line 368 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__write_doc_to_stream_17_p_1(
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
#line 371 "pretty_printer.m"
  while (MR_TRUE)
#line 371 "pretty_printer.m"
    {
#line 371 "pretty_printer.m"
      /* tailcall optimized into a loop */
#line 371 "pretty_printer.m"
      {
#line 371 "pretty_printer.m"
        MR_bool mercury__pretty_printer__succeeded;

#line 371 "pretty_printer.m"
        if ((mercury__pretty_printer__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 371 "pretty_printer.m"
          {
#line 372 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_IO_17 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 372 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Pri_15 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 372 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Limit_13 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 372 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 372 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Indents_9 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 372 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 371 "pretty_printer.m"
          }
#line 371 "pretty_printer.m"
        else
#line 374 "pretty_printer.m"
          {
#line 374 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Doc_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 0)));
#line 374 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Docs0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 1)));

#line 375 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10 <= (MR_Integer) 0);
#line 377 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 376 "pretty_printer.m"
              {
#line 376 "pretty_printer.m"
                {
#line 376 "pretty_printer.m"
                  mercury__stream__put_4_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) ((MR_String) "...")), mercury__pretty_printer__STATE_VARIABLE_IO_0_16, mercury__pretty_printer__STATE_VARIABLE_IO_17);
                }
#line 376 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Pri_15 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 376 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Limit_13 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 376 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 376 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Indents_9 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 376 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 376 "pretty_printer.m"
              }
#line 377 "pretty_printer.m"
            else
#line 465 "pretty_printer.m"
              {
#line 465 "pretty_printer.m"
                MR_Word mercury__pretty_printer__Docs_53;
#line 465 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_93_93;
#line 465 "pretty_printer.m"
                MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_101_101;
#line 465 "pretty_printer.m"
                MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_105_105;
#line 465 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116;
#line 465 "pretty_printer.m"
                MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_118_118;
#line 465 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119;

#line 386 "pretty_printer.m"
#line 386 "pretty_printer.m"
                switch (MR_tag((MR_Word) mercury__pretty_printer__Doc_44)) {
#line 386 "pretty_printer.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 386 "pretty_printer.m"
                  case (MR_Integer) 0:
#line 386 "pretty_printer.m"
#line 386 "pretty_printer.m"
                    switch (MR_unmkbody(mercury__pretty_printer__Doc_44)) {
#line 386 "pretty_printer.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 386 "pretty_printer.m"
                      case (MR_Integer) 0:
#line 387 "pretty_printer.m"
                        {
#line 389 "pretty_printer.m"
                          MR_Integer mercury__pretty_printer__IndentWidth_57;
#line 389 "pretty_printer.m"
                          MR_Integer mercury__pretty_printer__V_114_114;

#line 390 "pretty_printer.m"
                          {
#line 390 "pretty_printer.m"
                            mercury__pretty_printer__IndentWidth_57 = mercury__pretty_printer__foldl__ho14_3_f_in__list_0(mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, (MR_Integer) 0);
                          }
#line 391 "pretty_printer.m"
                          mercury__pretty_printer__V_114_114 = (mercury__pretty_printer__HeadVar__4_4 - mercury__pretty_printer__IndentWidth_57);
#line 391 "pretty_printer.m"
                          mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 < mercury__pretty_printer__V_114_114);
#line 395 "pretty_printer.m"
                          if (mercury__pretty_printer__succeeded)
#line 393 "pretty_printer.m"
                            {
#line 393 "pretty_printer.m"
                              mercury__pretty_printer__format_nl_8_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                            }
#line 395 "pretty_printer.m"
                          else
#line 396 "pretty_printer.m"
                            {
#line 396 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 396 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 396 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 396 "pretty_printer.m"
                            }
#line 398 "pretty_printer.m"
                          mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 387 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 387 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 387 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 387 "pretty_printer.m"
                        }
#line 386 "pretty_printer.m"
                        break;
#line 386 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 400 "pretty_printer.m"
                        {
#line 401 "pretty_printer.m"
                          {
#line 401 "pretty_printer.m"
                            mercury__pretty_printer__format_nl_8_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                          }
#line 403 "pretty_printer.m"
                          mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 400 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 400 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 400 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 400 "pretty_printer.m"
                        }
#line 386 "pretty_printer.m"
                        break;
#line 386 "pretty_printer.m"
                    }
#line 386 "pretty_printer.m"
                    break;
#line 386 "pretty_printer.m"
                  case (MR_Integer) 1:
#line 381 "pretty_printer.m"
                    {
#line 381 "pretty_printer.m"
                      MR_String mercury__pretty_printer__String_52 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc_44, (MR_Integer) 0)));
#line 381 "pretty_printer.m"
                      MR_Integer mercury__pretty_printer__V_120_120;

#line 382 "pretty_printer.m"
                      {
#line 382 "pretty_printer.m"
                        mercury__stream__put_4_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__String_52)), mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                      }
#line 384 "pretty_printer.m"
                      {
#line 384 "pretty_printer.m"
                        mercury__pretty_printer__V_120_120 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__String_52);
                      }
#line 383 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 - mercury__pretty_printer__V_120_120);
#line 385 "pretty_printer.m"
                      mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 381 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 381 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 381 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 381 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 381 "pretty_printer.m"
                    }
#line 386 "pretty_printer.m"
                    break;
#line 386 "pretty_printer.m"
                  case (MR_Integer) 2:
#line 405 "pretty_printer.m"
                    {
#line 405 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__TypeCtorInfo_137_137 = (MR_Word) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0;
#line 405 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__Docs1_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc_44, (MR_Integer) 0)));

#line 406 "pretty_printer.m"
                      {
#line 406 "pretty_printer.m"
                        mercury__pretty_printer__Docs_53 = mercury__list__f_43_43_2_f_0(mercury__pretty_printer__TypeCtorInfo_137_137, mercury__pretty_printer__Docs1_58, mercury__pretty_printer__Docs0_45);
                      }
#line 405 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 405 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 405 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 405 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 405 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 405 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 405 "pretty_printer.m"
                    }
#line 386 "pretty_printer.m"
                    break;
#line 386 "pretty_printer.m"
                  case (MR_Integer) 3:
#line 386 "pretty_printer.m"
#line 386 "pretty_printer.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 0)))) {
#line 386 "pretty_printer.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 386 "pretty_printer.m"
                      case (MR_Integer) 0:
#line 408 "pretty_printer.m"
                        {
#line 408 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Univ_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 408 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Doc1_60;

#line 409 "pretty_printer.m"
                          {
#line 409 "pretty_printer.m"
                            mercury__pretty_printer__expand_pp_7_p_1(mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__HeadVar__3_3, mercury__pretty_printer__Univ_59, &mercury__pretty_printer__Doc1_60, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14);
                          }
#line 410 "pretty_printer.m"
                          {
#line 410 "pretty_printer.m"
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_60));
#line 410 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 410 "pretty_printer.m"
                          }
#line 408 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 408 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 408 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 408 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 408 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 408 "pretty_printer.m"
                        }
#line 386 "pretty_printer.m"
                        break;
#line 386 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 412 "pretty_printer.m"
                        {
#line 412 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Univs_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 412 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Sep_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 2)));
#line 412 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Doc1_129;

#line 413 "pretty_printer.m"
                          {
#line 413 "pretty_printer.m"
                            mercury__pretty_printer__expand_format_list_5_p_0(mercury__pretty_printer__Univs_61, mercury__pretty_printer__Sep_62, &mercury__pretty_printer__Doc1_129, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105);
                          }
#line 414 "pretty_printer.m"
                          {
#line 414 "pretty_printer.m"
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_129));
#line 414 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 414 "pretty_printer.m"
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
#line 412 "pretty_printer.m"
                        }
#line 386 "pretty_printer.m"
                        break;
#line 386 "pretty_printer.m"
                      case (MR_Integer) 2:
#line 416 "pretty_printer.m"
                        {
#line 416 "pretty_printer.m"
                          MR_String mercury__pretty_printer__Name_63 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 416 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Doc1_130;
#line 416 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Univs_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 2)));

#line 417 "pretty_printer.m"
                          {
#line 417 "pretty_printer.m"
                            mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_63, mercury__pretty_printer__Univs_131, &mercury__pretty_printer__Doc1_130, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14);
                          }
#line 418 "pretty_printer.m"
                          {
#line 418 "pretty_printer.m"
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_130));
#line 418 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 418 "pretty_printer.m"
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
#line 416 "pretty_printer.m"
                        }
#line 386 "pretty_printer.m"
                        break;
#line 386 "pretty_printer.m"
                      case (MR_Integer) 3:
#line 420 "pretty_printer.m"
                        {
#line 420 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Susp_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 420 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Doc1_132;

#line 421 "pretty_printer.m"
                          {
#line 421 "pretty_printer.m"
                            mercury__pretty_printer__expand_format_susp_4_p_0(mercury__pretty_printer__Susp_64, &mercury__pretty_printer__Doc1_132, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105);
                          }
#line 422 "pretty_printer.m"
                          {
#line 422 "pretty_printer.m"
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_132));
#line 422 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 422 "pretty_printer.m"
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
#line 420 "pretty_printer.m"
                        }
#line 386 "pretty_printer.m"
                        break;
#line 386 "pretty_printer.m"
                      case (MR_Integer) 4:
#line 386 "pretty_printer.m"
                        {
#line 386 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));

#line 386 "pretty_printer.m"
#line 386 "pretty_printer.m"
                          switch (MR_tag((MR_Word) mercury__pretty_printer__V_139_139)) {
#line 386 "pretty_printer.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 386 "pretty_printer.m"
                            case (MR_Integer) 0:
#line 386 "pretty_printer.m"
#line 386 "pretty_printer.m"
                              switch (MR_unmkbody(mercury__pretty_printer__V_139_139)) {
#line 386 "pretty_printer.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 386 "pretty_printer.m"
                                case (MR_Integer) 0:
#line 441 "pretty_printer.m"
                                  {
#line 441 "pretty_printer.m"
                                    MR_Integer mercury__pretty_printer__RemainingWidthAfterGroup_68;
#line 441 "pretty_printer.m"
                                    MR_Word mercury__pretty_printer__Docs1_133;

#line 444 "pretty_printer.m"
                                    {
#line 444 "pretty_printer.m"
                                      mercury__pretty_printer__expand_docs_11_p_1(mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__HeadVar__3_3, mercury__pretty_printer__Docs0_45, &mercury__pretty_printer__Docs1_133, (MR_Integer) 1, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14, &mercury__pretty_printer__STATE_VARIABLE_Pri_93_93, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6, &mercury__pretty_printer__RemainingWidthAfterGroup_68);
                                    }
#line 446 "pretty_printer.m"
                                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__RemainingWidthAfterGroup_68 >= (MR_Integer) 0);
#line 449 "pretty_printer.m"
                                    if (mercury__pretty_printer__succeeded)
#line 447 "pretty_printer.m"
                                      {
#line 447 "pretty_printer.m"
                                        mercury__pretty_printer__output_current_group_12_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, (MR_Integer) 1, mercury__pretty_printer__Docs1_133, &mercury__pretty_printer__Docs_53, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                                      }
#line 449 "pretty_printer.m"
                                    else
#line 450 "pretty_printer.m"
                                      {
#line 450 "pretty_printer.m"
                                        mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs1_133;
#line 450 "pretty_printer.m"
                                        mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 450 "pretty_printer.m"
                                        mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 450 "pretty_printer.m"
                                        mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 450 "pretty_printer.m"
                                      }
#line 441 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 441 "pretty_printer.m"
                                  }
#line 386 "pretty_printer.m"
                                  break;
#line 386 "pretty_printer.m"
                                case (MR_Integer) 1:
#line 455 "pretty_printer.m"
                                  {
#line 456 "pretty_printer.m"
                                    mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 455 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 455 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 455 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 455 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 455 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 455 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 455 "pretty_printer.m"
                                  }
#line 386 "pretty_printer.m"
                                  break;
#line 386 "pretty_printer.m"
                                case (MR_Integer) 2:
#line 432 "pretty_printer.m"
                                  {
#line 432 "pretty_printer.m"
                                    MR_Word mercury__pretty_printer__TypeCtorInfo_138_138 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 433 "pretty_printer.m"
                                    {
#line 433 "pretty_printer.m"
                                      mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__list__det_tail_1_f_0(mercury__pretty_printer__TypeCtorInfo_138_138, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8);
                                    }
#line 434 "pretty_printer.m"
                                    mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 432 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 432 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 432 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 432 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 432 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 432 "pretty_printer.m"
                                  }
#line 386 "pretty_printer.m"
                                  break;
#line 386 "pretty_printer.m"
                              }
#line 386 "pretty_printer.m"
                              break;
#line 386 "pretty_printer.m"
                            case (MR_Integer) 1:
#line 426 "pretty_printer.m"
                              {
#line 426 "pretty_printer.m"
                                MR_String mercury__pretty_printer__Indent_65 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_139_139, (MR_Integer) 0)));

#line 427 "pretty_printer.m"
                                {
#line 427 "pretty_printer.m"
                                  mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "pretty_printer.m"
                                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Indents_101_101, 0) = ((MR_Box) (mercury__pretty_printer__Indent_65));
#line 427 "pretty_printer.m"
                                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Indents_101_101, 1) = ((MR_Box) (mercury__pretty_printer__STATE_VARIABLE_Indents_0_8));
#line 427 "pretty_printer.m"
                                }
#line 428 "pretty_printer.m"
                                mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 426 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 426 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 426 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 426 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 426 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 426 "pretty_printer.m"
                              }
#line 386 "pretty_printer.m"
                              break;
#line 386 "pretty_printer.m"
                            case (MR_Integer) 2:
#line 462 "pretty_printer.m"
                              {
#line 462 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_139_139, (MR_Integer) 0)));
#line 464 "pretty_printer.m"
                                mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 462 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 462 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 462 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 462 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 462 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 462 "pretty_printer.m"
                              }
#line 386 "pretty_printer.m"
                              break;
#line 386 "pretty_printer.m"
                            case (MR_Integer) 3:
#line 458 "pretty_printer.m"
                              {
#line 458 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_139_139, (MR_Integer) 0)));
#line 460 "pretty_printer.m"
                                mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 458 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 458 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 458 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 458 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 458 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 458 "pretty_printer.m"
                              }
#line 386 "pretty_printer.m"
                              break;
#line 386 "pretty_printer.m"
                          }
#line 386 "pretty_printer.m"
                        }
#line 386 "pretty_printer.m"
                        break;
#line 386 "pretty_printer.m"
                    }
#line 386 "pretty_printer.m"
                    break;
#line 386 "pretty_printer.m"
                }
#line 466 "pretty_printer.m"
                /* direct tailcall eliminated */
#line 466 "pretty_printer.m"
                {
#line 466 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs_53;
#line 466 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119;
#line 466 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_0__tmp_copy_8 = mercury__pretty_printer__STATE_VARIABLE_Indents_101_101;
#line 466 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116;
#line 466 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_12 = mercury__pretty_printer__STATE_VARIABLE_Limit_105_105;
#line 466 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_14 = mercury__pretty_printer__STATE_VARIABLE_Pri_93_93;
#line 466 "pretty_printer.m"
                  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_16 = mercury__pretty_printer__STATE_VARIABLE_IO_118_118;

#line 466 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_IO_0_16 = mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_16;
#line 466 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_Pri_0_14 = mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_14;
#line 466 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_Limit_0_12 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_12;
#line 466 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_10;
#line 466 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_Indents_0_8 = mercury__pretty_printer__STATE_VARIABLE_Indents_0__tmp_copy_8;
#line 466 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_6;
#line 466 "pretty_printer.m"
                  mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 466 "pretty_printer.m"
                }
#line 466 "pretty_printer.m"
                continue;
#line 465 "pretty_printer.m"
              }
#line 374 "pretty_printer.m"
          }
#line 371 "pretty_printer.m"
      }
#line 371 "pretty_printer.m"
      break;
#line 371 "pretty_printer.m"
    }
#line 368 "pretty_printer.m"
}

#line 366 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__write_doc_to_stream_17_p_0(
#line 366 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_134,
#line 366 "pretty_printer.m"
  MR_Box mercury__pretty_printer__HeadVar__1_1,
#line 366 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__2_2,
#line 366 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__3_3,
#line 366 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__HeadVar__4_4,
#line 366 "pretty_printer.m"
  MR_Word mercury__pretty_printer__HeadVar__5_5,
#line 366 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6,
#line 366 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7,
#line 366 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_0_8,
#line 366 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Indents_9,
#line 366 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10,
#line 366 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11,
#line 366 "pretty_printer.m"
  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0_12,
#line 366 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__STATE_VARIABLE_Limit_13,
#line 366 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0_14,
#line 366 "pretty_printer.m"
  MR_Integer * mercury__pretty_printer__STATE_VARIABLE_Pri_15,
#line 366 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_16,
#line 366 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_17)
#line 366 "pretty_printer.m"
{
#line 371 "pretty_printer.m"
  while (MR_TRUE)
#line 371 "pretty_printer.m"
    {
#line 371 "pretty_printer.m"
      /* tailcall optimized into a loop */
#line 371 "pretty_printer.m"
      {
#line 371 "pretty_printer.m"
        MR_bool mercury__pretty_printer__succeeded;

#line 371 "pretty_printer.m"
        if ((mercury__pretty_printer__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 371 "pretty_printer.m"
          {
#line 372 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_IO_17 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 372 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Pri_15 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 372 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Limit_13 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 372 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 372 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_Indents_9 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 372 "pretty_printer.m"
            *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 371 "pretty_printer.m"
          }
#line 371 "pretty_printer.m"
        else
#line 374 "pretty_printer.m"
          {
#line 374 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Doc_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 0)));
#line 374 "pretty_printer.m"
            MR_Word mercury__pretty_printer__Docs0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__HeadVar__5_5, (MR_Integer) 1)));

#line 375 "pretty_printer.m"
            mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10 <= (MR_Integer) 0);
#line 377 "pretty_printer.m"
            if (mercury__pretty_printer__succeeded)
#line 376 "pretty_printer.m"
              {
#line 376 "pretty_printer.m"
                {
#line 376 "pretty_printer.m"
                  mercury__stream__put_4_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) ((MR_String) "...")), mercury__pretty_printer__STATE_VARIABLE_IO_0_16, mercury__pretty_printer__STATE_VARIABLE_IO_17);
                }
#line 376 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Pri_15 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 376 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Limit_13 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 376 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_RemainingLines_11 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 376 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_Indents_9 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 376 "pretty_printer.m"
                *mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_7 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 376 "pretty_printer.m"
              }
#line 377 "pretty_printer.m"
            else
#line 465 "pretty_printer.m"
              {
#line 465 "pretty_printer.m"
                MR_Word mercury__pretty_printer__Docs_53;
#line 465 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_93_93;
#line 465 "pretty_printer.m"
                MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_101_101;
#line 465 "pretty_printer.m"
                MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_105_105;
#line 465 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116;
#line 465 "pretty_printer.m"
                MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_118_118;
#line 465 "pretty_printer.m"
                MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119;

#line 386 "pretty_printer.m"
#line 386 "pretty_printer.m"
                switch (MR_tag((MR_Word) mercury__pretty_printer__Doc_44)) {
#line 386 "pretty_printer.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 386 "pretty_printer.m"
                  case (MR_Integer) 0:
#line 386 "pretty_printer.m"
#line 386 "pretty_printer.m"
                    switch (MR_unmkbody(mercury__pretty_printer__Doc_44)) {
#line 386 "pretty_printer.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 386 "pretty_printer.m"
                      case (MR_Integer) 0:
#line 387 "pretty_printer.m"
                        {
#line 389 "pretty_printer.m"
                          MR_Integer mercury__pretty_printer__IndentWidth_57;
#line 389 "pretty_printer.m"
                          MR_Integer mercury__pretty_printer__V_114_114;

#line 390 "pretty_printer.m"
                          {
#line 390 "pretty_printer.m"
                            mercury__pretty_printer__IndentWidth_57 = mercury__pretty_printer__foldl__ho15_3_f_in__list_0(mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, (MR_Integer) 0);
                          }
#line 391 "pretty_printer.m"
                          mercury__pretty_printer__V_114_114 = (mercury__pretty_printer__HeadVar__4_4 - mercury__pretty_printer__IndentWidth_57);
#line 391 "pretty_printer.m"
                          mercury__pretty_printer__succeeded = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 < mercury__pretty_printer__V_114_114);
#line 395 "pretty_printer.m"
                          if (mercury__pretty_printer__succeeded)
#line 393 "pretty_printer.m"
                            {
#line 393 "pretty_printer.m"
                              mercury__pretty_printer__format_nl_8_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                            }
#line 395 "pretty_printer.m"
                          else
#line 396 "pretty_printer.m"
                            {
#line 396 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 396 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 396 "pretty_printer.m"
                              mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 396 "pretty_printer.m"
                            }
#line 398 "pretty_printer.m"
                          mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 387 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 387 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 387 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 387 "pretty_printer.m"
                        }
#line 386 "pretty_printer.m"
                        break;
#line 386 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 400 "pretty_printer.m"
                        {
#line 401 "pretty_printer.m"
                          {
#line 401 "pretty_printer.m"
                            mercury__pretty_printer__format_nl_8_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                          }
#line 403 "pretty_printer.m"
                          mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 400 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 400 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 400 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 400 "pretty_printer.m"
                        }
#line 386 "pretty_printer.m"
                        break;
#line 386 "pretty_printer.m"
                    }
#line 386 "pretty_printer.m"
                    break;
#line 386 "pretty_printer.m"
                  case (MR_Integer) 1:
#line 381 "pretty_printer.m"
                    {
#line 381 "pretty_printer.m"
                      MR_String mercury__pretty_printer__String_52 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__Doc_44, (MR_Integer) 0)));
#line 381 "pretty_printer.m"
                      MR_Integer mercury__pretty_printer__V_120_120;

#line 382 "pretty_printer.m"
                      {
#line 382 "pretty_printer.m"
                        mercury__stream__put_4_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, ((MR_Box) (mercury__pretty_printer__String_52)), mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                      }
#line 384 "pretty_printer.m"
                      {
#line 384 "pretty_printer.m"
                        mercury__pretty_printer__V_120_120 = mercury__string__count_codepoints_1_f_0(mercury__pretty_printer__String_52);
                      }
#line 383 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = (mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 - mercury__pretty_printer__V_120_120);
#line 385 "pretty_printer.m"
                      mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 381 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 381 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 381 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 381 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 381 "pretty_printer.m"
                    }
#line 386 "pretty_printer.m"
                    break;
#line 386 "pretty_printer.m"
                  case (MR_Integer) 2:
#line 405 "pretty_printer.m"
                    {
#line 405 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__TypeCtorInfo_137_137 = (MR_Word) &mercury__pretty_printer__pretty_printer__type_ctor_info_doc_0;
#line 405 "pretty_printer.m"
                      MR_Word mercury__pretty_printer__Docs1_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__Doc_44, (MR_Integer) 0)));

#line 406 "pretty_printer.m"
                      {
#line 406 "pretty_printer.m"
                        mercury__pretty_printer__Docs_53 = mercury__list__f_43_43_2_f_0(mercury__pretty_printer__TypeCtorInfo_137_137, mercury__pretty_printer__Docs1_58, mercury__pretty_printer__Docs0_45);
                      }
#line 405 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 405 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 405 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 405 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 405 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 405 "pretty_printer.m"
                      mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 405 "pretty_printer.m"
                    }
#line 386 "pretty_printer.m"
                    break;
#line 386 "pretty_printer.m"
                  case (MR_Integer) 3:
#line 386 "pretty_printer.m"
#line 386 "pretty_printer.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 0)))) {
#line 386 "pretty_printer.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 386 "pretty_printer.m"
                      case (MR_Integer) 0:
#line 408 "pretty_printer.m"
                        {
#line 408 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Univ_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 408 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Doc1_60;

#line 409 "pretty_printer.m"
                          {
#line 409 "pretty_printer.m"
                            mercury__pretty_printer__expand_pp_7_p_0(mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__HeadVar__3_3, mercury__pretty_printer__Univ_59, &mercury__pretty_printer__Doc1_60, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14);
                          }
#line 410 "pretty_printer.m"
                          {
#line 410 "pretty_printer.m"
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_60));
#line 410 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 410 "pretty_printer.m"
                          }
#line 408 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 408 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 408 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 408 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 408 "pretty_printer.m"
                          mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 408 "pretty_printer.m"
                        }
#line 386 "pretty_printer.m"
                        break;
#line 386 "pretty_printer.m"
                      case (MR_Integer) 1:
#line 412 "pretty_printer.m"
                        {
#line 412 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Univs_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 412 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Sep_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 2)));
#line 412 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Doc1_129;

#line 413 "pretty_printer.m"
                          {
#line 413 "pretty_printer.m"
                            mercury__pretty_printer__expand_format_list_5_p_0(mercury__pretty_printer__Univs_61, mercury__pretty_printer__Sep_62, &mercury__pretty_printer__Doc1_129, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105);
                          }
#line 414 "pretty_printer.m"
                          {
#line 414 "pretty_printer.m"
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_129));
#line 414 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 414 "pretty_printer.m"
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
#line 412 "pretty_printer.m"
                        }
#line 386 "pretty_printer.m"
                        break;
#line 386 "pretty_printer.m"
                      case (MR_Integer) 2:
#line 416 "pretty_printer.m"
                        {
#line 416 "pretty_printer.m"
                          MR_String mercury__pretty_printer__Name_63 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 416 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Doc1_130;
#line 416 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Univs_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 2)));

#line 417 "pretty_printer.m"
                          {
#line 417 "pretty_printer.m"
                            mercury__pretty_printer__expand_format_term_6_p_0(mercury__pretty_printer__Name_63, mercury__pretty_printer__Univs_131, &mercury__pretty_printer__Doc1_130, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14);
                          }
#line 418 "pretty_printer.m"
                          {
#line 418 "pretty_printer.m"
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_130));
#line 418 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 418 "pretty_printer.m"
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
#line 416 "pretty_printer.m"
                        }
#line 386 "pretty_printer.m"
                        break;
#line 386 "pretty_printer.m"
                      case (MR_Integer) 3:
#line 420 "pretty_printer.m"
                        {
#line 420 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Susp_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));
#line 420 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__Doc1_132;

#line 421 "pretty_printer.m"
                          {
#line 421 "pretty_printer.m"
                            mercury__pretty_printer__expand_format_susp_4_p_0(mercury__pretty_printer__Susp_64, &mercury__pretty_printer__Doc1_132, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105);
                          }
#line 422 "pretty_printer.m"
                          {
#line 422 "pretty_printer.m"
                            mercury__pretty_printer__Docs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 0) = ((MR_Box) (mercury__pretty_printer__Doc1_132));
#line 422 "pretty_printer.m"
                            MR_hl_field(MR_mktag(1), mercury__pretty_printer__Docs_53, 1) = ((MR_Box) (mercury__pretty_printer__Docs0_45));
#line 422 "pretty_printer.m"
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
#line 420 "pretty_printer.m"
                        }
#line 386 "pretty_printer.m"
                        break;
#line 386 "pretty_printer.m"
                      case (MR_Integer) 4:
#line 386 "pretty_printer.m"
                        {
#line 386 "pretty_printer.m"
                          MR_Word mercury__pretty_printer__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__Doc_44, (MR_Integer) 1)));

#line 386 "pretty_printer.m"
#line 386 "pretty_printer.m"
                          switch (MR_tag((MR_Word) mercury__pretty_printer__V_139_139)) {
#line 386 "pretty_printer.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 386 "pretty_printer.m"
                            case (MR_Integer) 0:
#line 386 "pretty_printer.m"
#line 386 "pretty_printer.m"
                              switch (MR_unmkbody(mercury__pretty_printer__V_139_139)) {
#line 386 "pretty_printer.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 386 "pretty_printer.m"
                                case (MR_Integer) 0:
#line 441 "pretty_printer.m"
                                  {
#line 441 "pretty_printer.m"
                                    MR_Integer mercury__pretty_printer__RemainingWidthAfterGroup_68;
#line 441 "pretty_printer.m"
                                    MR_Word mercury__pretty_printer__Docs1_133;

#line 444 "pretty_printer.m"
                                    {
#line 444 "pretty_printer.m"
                                      mercury__pretty_printer__expand_docs_11_p_0(mercury__pretty_printer__HeadVar__2_2, mercury__pretty_printer__HeadVar__3_3, mercury__pretty_printer__Docs0_45, &mercury__pretty_printer__Docs1_133, (MR_Integer) 1, mercury__pretty_printer__STATE_VARIABLE_Limit_0_12, &mercury__pretty_printer__STATE_VARIABLE_Limit_105_105, mercury__pretty_printer__STATE_VARIABLE_Pri_0_14, &mercury__pretty_printer__STATE_VARIABLE_Pri_93_93, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6, &mercury__pretty_printer__RemainingWidthAfterGroup_68);
                                    }
#line 446 "pretty_printer.m"
                                    mercury__pretty_printer__succeeded = (mercury__pretty_printer__RemainingWidthAfterGroup_68 >= (MR_Integer) 0);
#line 449 "pretty_printer.m"
                                    if (mercury__pretty_printer__succeeded)
#line 447 "pretty_printer.m"
                                      {
#line 447 "pretty_printer.m"
                                        mercury__pretty_printer__output_current_group_12_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_134, mercury__pretty_printer__HeadVar__1_1, mercury__pretty_printer__HeadVar__4_4, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8, (MR_Integer) 1, mercury__pretty_printer__Docs1_133, &mercury__pretty_printer__Docs_53, mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6, &mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119, mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10, &mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116, mercury__pretty_printer__STATE_VARIABLE_IO_0_16, &mercury__pretty_printer__STATE_VARIABLE_IO_118_118);
                                      }
#line 449 "pretty_printer.m"
                                    else
#line 450 "pretty_printer.m"
                                      {
#line 450 "pretty_printer.m"
                                        mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs1_133;
#line 450 "pretty_printer.m"
                                        mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 450 "pretty_printer.m"
                                        mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 450 "pretty_printer.m"
                                        mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 450 "pretty_printer.m"
                                      }
#line 441 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 441 "pretty_printer.m"
                                  }
#line 386 "pretty_printer.m"
                                  break;
#line 386 "pretty_printer.m"
                                case (MR_Integer) 1:
#line 455 "pretty_printer.m"
                                  {
#line 456 "pretty_printer.m"
                                    mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 455 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 455 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 455 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 455 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 455 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 455 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 455 "pretty_printer.m"
                                  }
#line 386 "pretty_printer.m"
                                  break;
#line 386 "pretty_printer.m"
                                case (MR_Integer) 2:
#line 432 "pretty_printer.m"
                                  {
#line 432 "pretty_printer.m"
                                    MR_Word mercury__pretty_printer__TypeCtorInfo_138_138 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 433 "pretty_printer.m"
                                    {
#line 433 "pretty_printer.m"
                                      mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__list__det_tail_1_f_0(mercury__pretty_printer__TypeCtorInfo_138_138, mercury__pretty_printer__STATE_VARIABLE_Indents_0_8);
                                    }
#line 434 "pretty_printer.m"
                                    mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 432 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 432 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 432 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 432 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 432 "pretty_printer.m"
                                    mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 432 "pretty_printer.m"
                                  }
#line 386 "pretty_printer.m"
                                  break;
#line 386 "pretty_printer.m"
                              }
#line 386 "pretty_printer.m"
                              break;
#line 386 "pretty_printer.m"
                            case (MR_Integer) 1:
#line 426 "pretty_printer.m"
                              {
#line 426 "pretty_printer.m"
                                MR_String mercury__pretty_printer__Indent_65 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_139_139, (MR_Integer) 0)));

#line 427 "pretty_printer.m"
                                {
#line 427 "pretty_printer.m"
                                  mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "pretty_printer.m"
                                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Indents_101_101, 0) = ((MR_Box) (mercury__pretty_printer__Indent_65));
#line 427 "pretty_printer.m"
                                  MR_hl_field(MR_mktag(1), mercury__pretty_printer__STATE_VARIABLE_Indents_101_101, 1) = ((MR_Box) (mercury__pretty_printer__STATE_VARIABLE_Indents_0_8));
#line 427 "pretty_printer.m"
                                }
#line 428 "pretty_printer.m"
                                mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 426 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 426 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 426 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 426 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 426 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 426 "pretty_printer.m"
                              }
#line 386 "pretty_printer.m"
                              break;
#line 386 "pretty_printer.m"
                            case (MR_Integer) 2:
#line 462 "pretty_printer.m"
                              {
#line 462 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_139_139, (MR_Integer) 0)));
#line 464 "pretty_printer.m"
                                mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 462 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 462 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 462 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 462 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = mercury__pretty_printer__STATE_VARIABLE_Limit_0_12;
#line 462 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 462 "pretty_printer.m"
                              }
#line 386 "pretty_printer.m"
                              break;
#line 386 "pretty_printer.m"
                            case (MR_Integer) 3:
#line 458 "pretty_printer.m"
                              {
#line 458 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Limit_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_139_139, (MR_Integer) 0)));
#line 460 "pretty_printer.m"
                                mercury__pretty_printer__Docs_53 = mercury__pretty_printer__Docs0_45;
#line 458 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6;
#line 458 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Indents_101_101 = mercury__pretty_printer__STATE_VARIABLE_Indents_0_8;
#line 458 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10;
#line 458 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_Pri_93_93 = mercury__pretty_printer__STATE_VARIABLE_Pri_0_14;
#line 458 "pretty_printer.m"
                                mercury__pretty_printer__STATE_VARIABLE_IO_118_118 = mercury__pretty_printer__STATE_VARIABLE_IO_0_16;
#line 458 "pretty_printer.m"
                              }
#line 386 "pretty_printer.m"
                              break;
#line 386 "pretty_printer.m"
                          }
#line 386 "pretty_printer.m"
                        }
#line 386 "pretty_printer.m"
                        break;
#line 386 "pretty_printer.m"
                    }
#line 386 "pretty_printer.m"
                    break;
#line 386 "pretty_printer.m"
                }
#line 466 "pretty_printer.m"
                /* direct tailcall eliminated */
#line 466 "pretty_printer.m"
                {
#line 466 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__HeadVar__5__tmp_copy_5 = mercury__pretty_printer__Docs_53;
#line 466 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_6 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_119_119;
#line 466 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__STATE_VARIABLE_Indents_0__tmp_copy_8 = mercury__pretty_printer__STATE_VARIABLE_Indents_101_101;
#line 466 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_116_116;
#line 466 "pretty_printer.m"
                  MR_Word mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_12 = mercury__pretty_printer__STATE_VARIABLE_Limit_105_105;
#line 466 "pretty_printer.m"
                  MR_Integer mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_14 = mercury__pretty_printer__STATE_VARIABLE_Pri_93_93;
#line 466 "pretty_printer.m"
                  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_16 = mercury__pretty_printer__STATE_VARIABLE_IO_118_118;

#line 466 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_IO_0_16 = mercury__pretty_printer__STATE_VARIABLE_IO_0__tmp_copy_16;
#line 466 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_Pri_0_14 = mercury__pretty_printer__STATE_VARIABLE_Pri_0__tmp_copy_14;
#line 466 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_Limit_0_12 = mercury__pretty_printer__STATE_VARIABLE_Limit_0__tmp_copy_12;
#line 466 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0_10 = mercury__pretty_printer__STATE_VARIABLE_RemainingLines_0__tmp_copy_10;
#line 466 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_Indents_0_8 = mercury__pretty_printer__STATE_VARIABLE_Indents_0__tmp_copy_8;
#line 466 "pretty_printer.m"
                  mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0_6 = mercury__pretty_printer__STATE_VARIABLE_RemainingWidth_0__tmp_copy_6;
#line 466 "pretty_printer.m"
                  mercury__pretty_printer__HeadVar__5_5 = mercury__pretty_printer__HeadVar__5__tmp_copy_5;
#line 466 "pretty_printer.m"
                }
#line 466 "pretty_printer.m"
                continue;
#line 465 "pretty_printer.m"
              }
#line 374 "pretty_printer.m"
          }
#line 371 "pretty_printer.m"
      }
#line 371 "pretty_printer.m"
      break;
#line 371 "pretty_printer.m"
    }
#line 366 "pretty_printer.m"
}

#line 236 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__write_doc_4_p_0(
#line 236 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Stream_5,
#line 236 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Doc_6)
#line 236 "pretty_printer.m"
{
#line 1058 "pretty_printer.m"
  {
#line 1058 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1058 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Formatters_8;
#line 1058 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__LineWidth_9;
#line 1058 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__MaxLines_10;
#line 1058 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Limit_11;
#line 1058 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_15_15;
#line 1058 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Okay_24;
#line 1062 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_19;
#line 1062 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_58;
#line 1062 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__Pri_46;
#line 1062 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Indents_48;
#line 1062 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_55_55;
#line 1062 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_57_57;
#line 15406 "pretty_printer.c"
    MR_Box MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box);
#line 15408 "pretty_printer.c"
    MR_Box mercury__pretty_printer__conv1_Pri_46;
#line 345 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_49_49;
#line 345 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_50_50;
#line 345 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_51_51;
#line 345 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_52_52;
#line 345 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_53_53;
#line 345 "pretty_printer.m"
    MR_Box mercury__pretty_printer__conv2_STATE_VARIABLE_IO_13;

#line 918 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0

	MR_Word Okay;

		{
#line 918 "pretty_printer.m"

    Okay = ML_pretty_printer_is_initialised;

#line 15434 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__Okay_24  = Okay;
#line 918 "pretty_printer.m"
}
#line 997 "pretty_printer.m"
#line 997 "pretty_printer.m"
    switch (mercury__pretty_printer__Okay_24) {
#line 997 "pretty_printer.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 997 "pretty_printer.m"
      case (MR_Integer) 0:
#line 994 "pretty_printer.m"
        {
#line 995 "pretty_printer.m"
          {
#line 995 "pretty_printer.m"
            mercury__pretty_printer__Formatters_8 = mercury__pretty_printer__initial_formatter_map_0_f_0();
          }
#line 1007 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0

	MR_Word FMap;

	FMap =  mercury__pretty_printer__Formatters_8 ;
		{
#line 1007 "pretty_printer.m"

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;

#line 15468 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 1007 "pretty_printer.m"
}
#line 994 "pretty_printer.m"
        }
#line 997 "pretty_printer.m"
        break;
#line 997 "pretty_printer.m"
      case (MR_Integer) 1:
#line 957 "pretty_printer.m"
        {
#line 960 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0

	MR_Word FMap;

		{
#line 960 "pretty_printer.m"

    FMap = ML_pretty_printer_default_formatter_map;

#line 15493 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__Formatters_8  = FMap;
#line 960 "pretty_printer.m"
}
#line 957 "pretty_printer.m"
        }
#line 997 "pretty_printer.m"
        break;
#line 997 "pretty_printer.m"
    }
#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0


		{
#line 873 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 15518 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0

	MR_Word X;

		{
#line 873 "pretty_printer.m"
X = mercury__pretty_printer__mutable_variable_io_pp_params;

#line 15534 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_15_15  = X;
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_4_p_0


		{
#line 873 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 15553 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 873 "pretty_printer.m"
}
#line 1060 "pretty_printer.m"
    mercury__pretty_printer__LineWidth_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__V_15_15, (MR_Integer) 0)));
#line 1060 "pretty_printer.m"
    mercury__pretty_printer__MaxLines_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__V_15_15, (MR_Integer) 1)));
#line 1060 "pretty_printer.m"
    mercury__pretty_printer__Limit_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pretty_printer__V_15_15, (MR_Integer) 2)));
#line 15565 "pretty_printer.c"
    mercury__pretty_printer__TypeClassInfo_for_writer_19 = (MR_Word) &mercury__pretty_printer_scalar_common_2[1];
#line 15567 "pretty_printer.c"
    mercury__pretty_printer__TypeClassInfo_for_op_table_58 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 45 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 15571 "pretty_printer.c"
    mercury__pretty_printer__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_op_table_58, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15573 "pretty_printer.c"
    {
#line 15575 "pretty_printer.c"
      mercury__pretty_printer__conv1_Pri_46 = mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_op_table_58), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15578 "pretty_printer.c"
    mercury__pretty_printer__Pri_46 = ((MR_Integer) mercury__pretty_printer__conv1_Pri_46);
#line 344 "pretty_printer.m"
    mercury__pretty_printer__Indents_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 345 "pretty_printer.m"
    mercury__pretty_printer__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 345 "pretty_printer.m"
    {
#line 345 "pretty_printer.m"
      mercury__pretty_printer__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_55_55, 0) = ((MR_Box) (mercury__pretty_printer__Doc_6));
#line 345 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_55_55, 1) = ((MR_Box) (mercury__pretty_printer__V_57_57));
#line 345 "pretty_printer.m"
    }
#line 345 "pretty_printer.m"
    {
#line 345 "pretty_printer.m"
      mercury__pretty_printer__write_doc_to_stream_17_p_1(mercury__pretty_printer__TypeClassInfo_for_writer_19, ((MR_Box) (mercury__pretty_printer__Stream_5)), (MR_Integer) 2, mercury__pretty_printer__Formatters_8, mercury__pretty_printer__LineWidth_9, mercury__pretty_printer__V_55_55, mercury__pretty_printer__LineWidth_9, &mercury__pretty_printer__V_49_49, mercury__pretty_printer__Indents_48, &mercury__pretty_printer__V_50_50, mercury__pretty_printer__MaxLines_10, &mercury__pretty_printer__V_51_51, mercury__pretty_printer__Limit_11, &mercury__pretty_printer__V_52_52, mercury__pretty_printer__Pri_46, &mercury__pretty_printer__V_53_53, ((MR_Box) ((MR_Integer) 0)), &mercury__pretty_printer__conv2_STATE_VARIABLE_IO_13);
    }
#line 1058 "pretty_printer.m"
  }
#line 236 "pretty_printer.m"
}

#line 235 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__write_doc_3_p_0(
#line 235 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Doc_4)
#line 235 "pretty_printer.m"
{
#line 1055 "pretty_printer.m"
  {
#line 1055 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1055 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_8_8;
#line 1055 "pretty_printer.m"
    MR_Box mercury__pretty_printer__V_2_10;

#line 1371 "io.opt"
{
#define MR_PROC_LABEL mercury__pretty_printer__write_doc_3_p_0

	MercuryFilePtr Stream;

		{
#line 1371 "io.opt"

    Stream = &mercury_stdout;

#line 15631 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__V_2_10  = (MR_Box) Stream;
#line 1371 "io.opt"
}
#line 1365 "io.opt"
    mercury__pretty_printer__V_8_8 = (MR_Word) mercury__pretty_printer__V_2_10;
#line 1056 "pretty_printer.m"
    {
#line 1056 "pretty_printer.m"
      mercury__pretty_printer__write_doc_4_p_0(mercury__pretty_printer__V_8_8, mercury__pretty_printer__Doc_4);
#line 1056 "pretty_printer.m"
      return;
    }
#line 1055 "pretty_printer.m"
  }
#line 235 "pretty_printer.m"
}

#line 226 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__set_default_params_3_p_0(
#line 226 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Params_4)
#line 226 "pretty_printer.m"
{
#line 873 "pretty_printer.m"
  {
#line 873 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_params_3_p_0


		{
#line 873 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 15676 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_params_3_p_0

	MR_Word X;

	X =  mercury__pretty_printer__Params_4 ;
		{
#line 873 "pretty_printer.m"
mercury__pretty_printer__mutable_variable_io_pp_params = X;

#line 15693 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_params_3_p_0


		{
#line 873 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 15711 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
  }
#line 226 "pretty_printer.m"
}

#line 225 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__get_default_params_3_p_0(
#line 225 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__Params_4)
#line 225 "pretty_printer.m"
{
#line 873 "pretty_printer.m"
  {
#line 873 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_params_3_p_0


		{
#line 873 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 15746 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_params_3_p_0

	MR_Word X;

		{
#line 873 "pretty_printer.m"
X = mercury__pretty_printer__mutable_variable_io_pp_params;

#line 15762 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__Params_4  = X;
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_params_3_p_0


		{
#line 873 "pretty_printer.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&mercury__pretty_printer__mutable_variable_io_pp_params_lock,
                    "mercury__pretty_printer__mutable_variable_io_pp_params_lock");
#endif

#line 15781 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 873 "pretty_printer.m"
}
#line 873 "pretty_printer.m"
  }
#line 225 "pretty_printer.m"
}

#line 218 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__set_default_formatter_6_p_0(
#line 218 "pretty_printer.m"
  MR_String mercury__pretty_printer__ModuleName_7,
#line 218 "pretty_printer.m"
  MR_String mercury__pretty_printer__TypeName_8,
#line 218 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__Arity_9,
#line 218 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Formatter_10)
#line 218 "pretty_printer.m"
{
#line 1040 "pretty_printer.m"
  {
#line 1040 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 1040 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_12;
#line 1040 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap_13;
#line 1040 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Okay_22;

#line 918 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_6_p_0

	MR_Word Okay;

		{
#line 918 "pretty_printer.m"

    Okay = ML_pretty_printer_is_initialised;

#line 15827 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__Okay_22  = Okay;
#line 918 "pretty_printer.m"
}
#line 997 "pretty_printer.m"
#line 997 "pretty_printer.m"
    switch (mercury__pretty_printer__Okay_22) {
#line 997 "pretty_printer.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 997 "pretty_printer.m"
      case (MR_Integer) 0:
#line 994 "pretty_printer.m"
        {
#line 995 "pretty_printer.m"
          {
#line 995 "pretty_printer.m"
            mercury__pretty_printer__FMap0_12 = mercury__pretty_printer__initial_formatter_map_0_f_0();
          }
#line 1007 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_6_p_0

	MR_Word FMap;

	FMap =  mercury__pretty_printer__FMap0_12 ;
		{
#line 1007 "pretty_printer.m"

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;

#line 15861 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 1007 "pretty_printer.m"
}
#line 994 "pretty_printer.m"
        }
#line 997 "pretty_printer.m"
        break;
#line 997 "pretty_printer.m"
      case (MR_Integer) 1:
#line 957 "pretty_printer.m"
        {
#line 960 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_6_p_0

	MR_Word FMap;

		{
#line 960 "pretty_printer.m"

    FMap = ML_pretty_printer_default_formatter_map;

#line 15886 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__FMap0_12  = FMap;
#line 960 "pretty_printer.m"
}
#line 957 "pretty_printer.m"
        }
#line 997 "pretty_printer.m"
        break;
#line 997 "pretty_printer.m"
    }
#line 1042 "pretty_printer.m"
    {
#line 1042 "pretty_printer.m"
      mercury__pretty_printer__FMap_13 = mercury__pretty_printer__set_formatter_5_f_0(mercury__pretty_printer__ModuleName_7, mercury__pretty_printer__TypeName_8, mercury__pretty_printer__Arity_9, mercury__pretty_printer__Formatter_10, mercury__pretty_printer__FMap0_12);
    }
#line 1007 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_6_p_0

	MR_Word FMap;

	FMap =  mercury__pretty_printer__FMap_13 ;
		{
#line 1007 "pretty_printer.m"

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;

#line 15917 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 1007 "pretty_printer.m"
}
#line 1040 "pretty_printer.m"
  }
#line 218 "pretty_printer.m"
}

#line 217 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__set_default_formatter_map_3_p_0(
#line 217 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap_1)
#line 217 "pretty_printer.m"
{
#line 1004 "pretty_printer.m"
  {
#line 1004 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;

#line 1007 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__set_default_formatter_map_3_p_0

	MR_Word FMap;

	FMap =  mercury__pretty_printer__FMap_1 ;
		{
#line 1007 "pretty_printer.m"

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;

#line 15953 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 1007 "pretty_printer.m"
}
#line 1004 "pretty_printer.m"
  }
#line 217 "pretty_printer.m"
}

#line 216 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__get_default_formatter_map_3_p_0(
#line 216 "pretty_printer.m"
  MR_Word * mercury__pretty_printer__FMap_4)
#line 216 "pretty_printer.m"
{
#line 991 "pretty_printer.m"
  {
#line 991 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 991 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Okay_6;

#line 918 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_formatter_map_3_p_0

	MR_Word Okay;

		{
#line 918 "pretty_printer.m"

    Okay = ML_pretty_printer_is_initialised;

#line 15989 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__pretty_printer__Okay_6  = Okay;
#line 918 "pretty_printer.m"
}
#line 997 "pretty_printer.m"
#line 997 "pretty_printer.m"
    switch (mercury__pretty_printer__Okay_6) {
#line 997 "pretty_printer.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 997 "pretty_printer.m"
      case (MR_Integer) 0:
#line 994 "pretty_printer.m"
        {
#line 995 "pretty_printer.m"
          {
#line 995 "pretty_printer.m"
            *mercury__pretty_printer__FMap_4 = mercury__pretty_printer__initial_formatter_map_0_f_0();
          }
#line 1007 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_formatter_map_3_p_0

	MR_Word FMap;

	FMap =  *mercury__pretty_printer__FMap_4 ;
		{
#line 1007 "pretty_printer.m"

    ML_pretty_printer_default_formatter_map = FMap;
    ML_pretty_printer_is_initialised = MR_TRUE;

#line 16023 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
#line 1007 "pretty_printer.m"
}
#line 994 "pretty_printer.m"
        }
#line 997 "pretty_printer.m"
        break;
#line 997 "pretty_printer.m"
      case (MR_Integer) 1:
#line 957 "pretty_printer.m"
        {
#line 960 "pretty_printer.m"
{
#define MR_PROC_LABEL mercury__pretty_printer__get_default_formatter_map_3_p_0

	MR_Word FMap;

		{
#line 960 "pretty_printer.m"

    FMap = ML_pretty_printer_default_formatter_map;

#line 16048 "pretty_printer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__pretty_printer__FMap_4  = FMap;
#line 960 "pretty_printer.m"
}
#line 957 "pretty_printer.m"
        }
#line 997 "pretty_printer.m"
        break;
#line 997 "pretty_printer.m"
    }
#line 991 "pretty_printer.m"
  }
#line 216 "pretty_printer.m"
}

#line 192 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__write_doc_to_stream_9_p_1(
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
#line 341 "pretty_printer.m"
  {
#line 341 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 341 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_33 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 341 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__Pri_18;
#line 341 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Indents_20;
#line 341 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_29_29;
#line 341 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_31_31;
#line 16105 "pretty_printer.c"
    MR_Box MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box);
#line 16107 "pretty_printer.c"
    MR_Box mercury__pretty_printer__conv1_Pri_18;
#line 345 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_21_21;
#line 345 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_22_22;
#line 345 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_23_23;
#line 345 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_24_24;
#line 345 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_25_25;

#line 45 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 16122 "pretty_printer.c"
    mercury__pretty_printer__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_op_table_33, (MR_Integer) 0)), (MR_Integer) 12)));
#line 16124 "pretty_printer.c"
    {
#line 16126 "pretty_printer.c"
      mercury__pretty_printer__conv1_Pri_18 = mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_op_table_33), ((MR_Box) ((MR_Integer) 0)));
    }
#line 16129 "pretty_printer.c"
    mercury__pretty_printer__Pri_18 = ((MR_Integer) mercury__pretty_printer__conv1_Pri_18);
#line 344 "pretty_printer.m"
    mercury__pretty_printer__Indents_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 345 "pretty_printer.m"
    mercury__pretty_printer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 345 "pretty_printer.m"
    {
#line 345 "pretty_printer.m"
      mercury__pretty_printer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 0) = ((MR_Box) (mercury__pretty_printer__Doc_16));
#line 345 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 1) = ((MR_Box) (mercury__pretty_printer__V_31_31));
#line 345 "pretty_printer.m"
    }
#line 345 "pretty_printer.m"
    {
#line 345 "pretty_printer.m"
      mercury__pretty_printer__write_doc_to_stream_17_p_1(mercury__pretty_printer__TypeClassInfo_for_writer_32, mercury__pretty_printer__Stream_10, mercury__pretty_printer__Canonicalize_11, mercury__pretty_printer__FMap_12, mercury__pretty_printer__LineWidth_13, mercury__pretty_printer__V_29_29, mercury__pretty_printer__LineWidth_13, &mercury__pretty_printer__V_21_21, mercury__pretty_printer__Indents_20, &mercury__pretty_printer__V_22_22, mercury__pretty_printer__MaxLines_14, &mercury__pretty_printer__V_23_23, mercury__pretty_printer__Limit_15, &mercury__pretty_printer__V_24_24, mercury__pretty_printer__Pri_18, &mercury__pretty_printer__V_25_25, mercury__pretty_printer__STATE_VARIABLE_IO_0_26, mercury__pretty_printer__STATE_VARIABLE_IO_27);
    }
#line 341 "pretty_printer.m"
  }
#line 192 "pretty_printer.m"
}

#line 190 "pretty_printer.m"
void MR_CALL 
mercury__pretty_printer__write_doc_to_stream_9_p_0(
#line 190 "pretty_printer.m"
  MR_Word mercury__pretty_printer__TypeClassInfo_for_writer_32,
#line 190 "pretty_printer.m"
  MR_Box mercury__pretty_printer__Stream_10,
#line 190 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Canonicalize_11,
#line 190 "pretty_printer.m"
  MR_Word mercury__pretty_printer__FMap_12,
#line 190 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__LineWidth_13,
#line 190 "pretty_printer.m"
  MR_Integer mercury__pretty_printer__MaxLines_14,
#line 190 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Limit_15,
#line 190 "pretty_printer.m"
  MR_Word mercury__pretty_printer__Doc_16,
#line 190 "pretty_printer.m"
  MR_Box mercury__pretty_printer__STATE_VARIABLE_IO_0_26,
#line 190 "pretty_printer.m"
  MR_Box * mercury__pretty_printer__STATE_VARIABLE_IO_27)
#line 190 "pretty_printer.m"
{
#line 341 "pretty_printer.m"
  {
#line 341 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 341 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_33 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 341 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__Pri_18;
#line 341 "pretty_printer.m"
    MR_Word mercury__pretty_printer__Indents_20;
#line 341 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_29_29;
#line 341 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_31_31;
#line 16194 "pretty_printer.c"
    MR_Box MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box);
#line 16196 "pretty_printer.c"
    MR_Box mercury__pretty_printer__conv1_Pri_18;
#line 345 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_21_21;
#line 345 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_22_22;
#line 345 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_23_23;
#line 345 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_24_24;
#line 345 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_25_25;

#line 45 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 16211 "pretty_printer.c"
    mercury__pretty_printer__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_op_table_33, (MR_Integer) 0)), (MR_Integer) 12)));
#line 16213 "pretty_printer.c"
    {
#line 16215 "pretty_printer.c"
      mercury__pretty_printer__conv1_Pri_18 = mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_op_table_33), ((MR_Box) ((MR_Integer) 0)));
    }
#line 16218 "pretty_printer.c"
    mercury__pretty_printer__Pri_18 = ((MR_Integer) mercury__pretty_printer__conv1_Pri_18);
#line 344 "pretty_printer.m"
    mercury__pretty_printer__Indents_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 345 "pretty_printer.m"
    mercury__pretty_printer__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 345 "pretty_printer.m"
    {
#line 345 "pretty_printer.m"
      mercury__pretty_printer__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 0) = ((MR_Box) (mercury__pretty_printer__Doc_16));
#line 345 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_29_29, 1) = ((MR_Box) (mercury__pretty_printer__V_31_31));
#line 345 "pretty_printer.m"
    }
#line 345 "pretty_printer.m"
    {
#line 345 "pretty_printer.m"
      mercury__pretty_printer__write_doc_to_stream_17_p_0(mercury__pretty_printer__TypeClassInfo_for_writer_32, mercury__pretty_printer__Stream_10, mercury__pretty_printer__Canonicalize_11, mercury__pretty_printer__FMap_12, mercury__pretty_printer__LineWidth_13, mercury__pretty_printer__V_29_29, mercury__pretty_printer__LineWidth_13, &mercury__pretty_printer__V_21_21, mercury__pretty_printer__Indents_20, &mercury__pretty_printer__V_22_22, mercury__pretty_printer__MaxLines_14, &mercury__pretty_printer__V_23_23, mercury__pretty_printer__Limit_15, &mercury__pretty_printer__V_24_24, mercury__pretty_printer__Pri_18, &mercury__pretty_printer__V_25_25, mercury__pretty_printer__STATE_VARIABLE_IO_0_26, mercury__pretty_printer__STATE_VARIABLE_IO_27);
    }
#line 341 "pretty_printer.m"
  }
#line 190 "pretty_printer.m"
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
#line 296 "pretty_printer.m"
  {
#line 296 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 296 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap_12;
#line 296 "pretty_printer.m"
    MR_Word mercury__pretty_printer__FMap0_Type_Arity_13;
#line 288 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 288 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeInfo_23_23 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 452 "map.opt"
    MR_Box mercury__pretty_printer__conv0_FMap0_Type_Arity_13;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_22_22, mercury__pretty_printer__TypeInfo_23_23, mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), &mercury__pretty_printer__conv0_FMap0_Type_Arity_13);
    }
#line 452 "map.opt"
    if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__pretty_printer__FMap0_Type_Arity_13 = ((MR_Word) mercury__pretty_printer__conv0_FMap0_Type_Arity_13);
#line 452 "map.opt"
        mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 296 "pretty_printer.m"
    if (mercury__pretty_printer__succeeded)
#line 293 "pretty_printer.m"
      {
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_30_30;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_31_31;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_32_32;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_15;
#line 293 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_16;
#line 291 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap0_Arity_14;
#line 289 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 289 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_25_25 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 452 "map.opt"
        MR_Box mercury__pretty_printer__conv1_FMap0_Arity_14;

#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__pretty_printer__succeeded = mercury__tree234__search_3_p_0(mercury__pretty_printer__TypeCtorInfo_24_24, mercury__pretty_printer__TypeInfo_25_25, mercury__pretty_printer__FMap0_Type_Arity_13, ((MR_Box) (mercury__pretty_printer__TypeName_8)), &mercury__pretty_printer__conv1_FMap0_Arity_14);
        }
#line 452 "map.opt"
        if (mercury__pretty_printer__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__pretty_printer__FMap0_Arity_14 = ((MR_Word) mercury__pretty_printer__conv1_FMap0_Arity_14);
#line 452 "map.opt"
            mercury__pretty_printer__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 291 "pretty_printer.m"
        if (mercury__pretty_printer__succeeded)
#line 290 "pretty_printer.m"
          {
#line 290 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_27_27 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 290 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_60, mercury__pretty_printer__TypeInfo_27_27, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_10)), mercury__pretty_printer__FMap0_Arity_14, &mercury__pretty_printer__FMap_Arity_15);
            }
#line 290 "pretty_printer.m"
          }
#line 291 "pretty_printer.m"
        else
#line 292 "pretty_printer.m"
          {
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_29_29 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__TypeInfo_for_K_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 292 "pretty_printer.m"
            MR_Word mercury__pretty_printer__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__set_4_p_0(mercury__pretty_printer__TypeInfo_for_K_75, mercury__pretty_printer__TypeInfo_29_29, ((MR_Box) (mercury__pretty_printer__Arity_9)), ((MR_Box) (mercury__pretty_printer__Formatter_10)), mercury__pretty_printer__V_17_17, &mercury__pretty_printer__FMap_Arity_15);
            }
#line 292 "pretty_printer.m"
          }
#line 16361 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 16363 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_31_31 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 294 "pretty_printer.m"
        {
#line 294 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_16 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_30, mercury__pretty_printer__TypeInfo_31_31, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__FMap0_Type_Arity_13, ((MR_Box) (mercury__pretty_printer__FMap_Arity_15)));
        }
#line 16370 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_32_32 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 295 "pretty_printer.m"
        {
#line 295 "pretty_printer.m"
          mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_30_30, mercury__pretty_printer__TypeInfo_32_32, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_16)));
        }
#line 293 "pretty_printer.m"
      }
#line 296 "pretty_printer.m"
    else
#line 297 "pretty_printer.m"
      {
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_34_34 = (MR_Word) &mercury__pretty_printer_scalar_common_2[0];
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeCtorInfo_35_35;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_36_36;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__TypeInfo_37_37;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__V_19_19;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Arity_20;
#line 297 "pretty_printer.m"
        MR_Word mercury__pretty_printer__FMap_Type_Arity_21;

#line 297 "pretty_printer.m"
        {
#line 297 "pretty_printer.m"
          mercury__pretty_printer__FMap_Arity_20 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_f_0(mercury__pretty_printer__TypeInfo_34_34, mercury__pretty_printer__Arity_9, mercury__pretty_printer__V_18_18, ((MR_Box) (mercury__pretty_printer__Formatter_10)));
        }
#line 16405 "pretty_printer.c"
        mercury__pretty_printer__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 16407 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_36_36 = (MR_Word) &mercury__pretty_printer_scalar_common_3[0];
#line 243 "tree234.opt"
        mercury__pretty_printer__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 298 "pretty_printer.m"
        {
#line 298 "pretty_printer.m"
          mercury__pretty_printer__FMap_Type_Arity_21 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_35, mercury__pretty_printer__TypeInfo_36_36, ((MR_Box) (mercury__pretty_printer__TypeName_8)), mercury__pretty_printer__V_19_19, ((MR_Box) (mercury__pretty_printer__FMap_Arity_20)));
        }
#line 16416 "pretty_printer.c"
        mercury__pretty_printer__TypeInfo_37_37 = (MR_Word) &mercury__pretty_printer_scalar_common_3[1];
#line 299 "pretty_printer.m"
        {
#line 299 "pretty_printer.m"
          mercury__pretty_printer__FMap_12 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(mercury__pretty_printer__TypeCtorInfo_35_35, mercury__pretty_printer__TypeInfo_37_37, ((MR_Box) (mercury__pretty_printer__ModuleName_7)), mercury__pretty_printer__FMap0_11, ((MR_Box) (mercury__pretty_printer__FMap_Type_Arity_21)));
        }
#line 297 "pretty_printer.m"
      }
#line 296 "pretty_printer.m"
    return mercury__pretty_printer__FMap_12;
#line 296 "pretty_printer.m"
  }
#line 178 "pretty_printer.m"
}

#line 171 "pretty_printer.m"
MR_Word MR_CALL 
mercury__pretty_printer__new_formatter_map_0_f_0(void)
#line 171 "pretty_printer.m"
{
#line 243 "tree234.opt"
  {
#line 243 "tree234.opt"
    MR_bool mercury__pretty_printer__succeeded;
#line 243 "tree234.opt"
    MR_Word mercury__pretty_printer__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 243 "tree234.opt"
    return mercury__pretty_printer__HeadVar__1_1;
#line 243 "tree234.opt"
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
#line 331 "pretty_printer.m"
  {
#line 331 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 331 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__2_2;
#line 331 "pretty_printer.m"
    MR_Word mercury__pretty_printer__TypeClassInfo_for_op_table_11 = (MR_Word) &mercury__pretty_printer_scalar_common_1[0];
#line 331 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_4_4;
#line 331 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_5_5;
#line 331 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_6_6;
#line 331 "pretty_printer.m"
    MR_Integer mercury__pretty_printer__V_7_7;
#line 331 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_9_9;
#line 331 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_10_10;
#line 16478 "pretty_printer.c"
    MR_Box MR_CALL (* mercury__pretty_printer__func_0)(MR_Box, MR_Box);
#line 16480 "pretty_printer.c"
    MR_Box mercury__pretty_printer__conv1_V_7_7;

#line 45 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 16485 "pretty_printer.c"
    mercury__pretty_printer__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pretty_printer__TypeClassInfo_for_op_table_11, (MR_Integer) 0)), (MR_Integer) 13)));
#line 16487 "pretty_printer.c"
    {
#line 16489 "pretty_printer.c"
      mercury__pretty_printer__conv1_V_7_7 = mercury__pretty_printer__func_0(((MR_Box) mercury__pretty_printer__TypeClassInfo_for_op_table_11), ((MR_Box) ((MR_Integer) 0)));
    }
#line 16492 "pretty_printer.c"
    mercury__pretty_printer__V_7_7 = ((MR_Integer) mercury__pretty_printer__conv1_V_7_7);
#line 334 "pretty_printer.m"
    {
#line 334 "pretty_printer.m"
      mercury__pretty_printer__V_6_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 334 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_6_6, 0) = ((MR_Box) (mercury__pretty_printer__V_7_7));
#line 334 "pretty_printer.m"
    }
#line 333 "pretty_printer.m"
    {
#line 333 "pretty_printer.m"
      mercury__pretty_printer__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "pretty_printer.m"
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 333 "pretty_printer.m"
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_5_5, 1) = ((MR_Box) (mercury__pretty_printer__V_6_6));
#line 333 "pretty_printer.m"
    }
#line 336 "pretty_printer.m"
    mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 336 "pretty_printer.m"
    {
#line 336 "pretty_printer.m"
      mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 0) = ((MR_Box) (mercury__pretty_printer__Doc_3));
#line 336 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 1) = ((MR_Box) (mercury__pretty_printer__V_10_10));
#line 336 "pretty_printer.m"
    }
#line 334 "pretty_printer.m"
    {
#line 334 "pretty_printer.m"
      mercury__pretty_printer__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_4, 0) = ((MR_Box) (mercury__pretty_printer__V_5_5));
#line 334 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_4, 1) = ((MR_Box) (mercury__pretty_printer__V_9_9));
#line 334 "pretty_printer.m"
    }
#line 332 "pretty_printer.m"
    {
#line 332 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 332 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, 0) = ((MR_Box) (mercury__pretty_printer__V_4_4));
#line 332 "pretty_printer.m"
    }
#line 331 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__2_2;
#line 331 "pretty_printer.m"
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
#line 327 "pretty_printer.m"
  {
#line 327 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 327 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__2_2;
#line 327 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_4_4;

#line 13 "univ.opt"
    {
#line 13 "univ.opt"
      mercury__univ__type_to_univ_2_p_1(mercury__pretty_printer__TypeInfo_for_T_5, mercury__pretty_printer__X_3, &mercury__pretty_printer__V_4_4);
    }
#line 327 "pretty_printer.m"
    {
#line 327 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "pretty_printer.m"
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 327 "pretty_printer.m"
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__HeadVar__2_2, 1) = ((MR_Box) (mercury__pretty_printer__V_4_4));
#line 327 "pretty_printer.m"
    }
#line 327 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__2_2;
#line 327 "pretty_printer.m"
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
#line 322 "pretty_printer.m"
  {
#line 322 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 322 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__2_2;
#line 322 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_4_4;
#line 322 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[8]);
#line 322 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 322 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_7_7;
#line 322 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_8_8;
#line 322 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_9_9;
#line 322 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_10_10;
#line 322 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_11_11;
#line 322 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_12_12;

#line 323 "pretty_printer.m"
    {
#line 323 "pretty_printer.m"
      mercury__pretty_printer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 323 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_8_8, 0) = ((MR_Box) (mercury__pretty_printer__Docs_3));
#line 323 "pretty_printer.m"
    }
#line 323 "pretty_printer.m"
    mercury__pretty_printer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 323 "pretty_printer.m"
    mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[9]);
#line 323 "pretty_printer.m"
    mercury__pretty_printer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 323 "pretty_printer.m"
    mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[10]);
#line 323 "pretty_printer.m"
    {
#line 323 "pretty_printer.m"
      mercury__pretty_printer__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_7, 0) = ((MR_Box) (mercury__pretty_printer__V_8_8));
#line 323 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_7, 1) = ((MR_Box) (mercury__pretty_printer__V_9_9));
#line 323 "pretty_printer.m"
    }
#line 323 "pretty_printer.m"
    {
#line 323 "pretty_printer.m"
      mercury__pretty_printer__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_4, 0) = ((MR_Box) (mercury__pretty_printer__V_5_5));
#line 323 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_4_4, 1) = ((MR_Box) (mercury__pretty_printer__V_7_7));
#line 323 "pretty_printer.m"
    }
#line 323 "pretty_printer.m"
    {
#line 323 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 323 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, 0) = ((MR_Box) (mercury__pretty_printer__V_4_4));
#line 323 "pretty_printer.m"
    }
#line 322 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__2_2;
#line 322 "pretty_printer.m"
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
#line 317 "pretty_printer.m"
  {
#line 317 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 317 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__2_2;
#line 317 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_7_7;
#line 317 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[7]);
#line 317 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_5[0]);
#line 317 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_10_10;
#line 317 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_11_11;
#line 317 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_12_12;
#line 317 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_13_13;
#line 317 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_14_14;
#line 317 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_15_15;

#line 313 "pretty_printer.m"
    {
#line 313 "pretty_printer.m"
      mercury__pretty_printer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 313 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_11_11, 0) = ((MR_Box) (mercury__pretty_printer__Docs_3));
#line 313 "pretty_printer.m"
    }
#line 313 "pretty_printer.m"
    mercury__pretty_printer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 313 "pretty_printer.m"
    mercury__pretty_printer__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[5]);
#line 313 "pretty_printer.m"
    mercury__pretty_printer__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 313 "pretty_printer.m"
    mercury__pretty_printer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[6]);
#line 313 "pretty_printer.m"
    {
#line 313 "pretty_printer.m"
      mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_10_10, 0) = ((MR_Box) (mercury__pretty_printer__V_11_11));
#line 313 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_10_10, 1) = ((MR_Box) (mercury__pretty_printer__V_12_12));
#line 313 "pretty_printer.m"
    }
#line 313 "pretty_printer.m"
    {
#line 313 "pretty_printer.m"
      mercury__pretty_printer__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_7, 0) = ((MR_Box) (mercury__pretty_printer__V_8_8));
#line 313 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_7_7, 1) = ((MR_Box) (mercury__pretty_printer__V_10_10));
#line 313 "pretty_printer.m"
    }
#line 313 "pretty_printer.m"
    {
#line 313 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 313 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__2_2, 0) = ((MR_Box) (mercury__pretty_printer__V_7_7));
#line 313 "pretty_printer.m"
    }
#line 317 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__2_2;
#line 317 "pretty_printer.m"
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
#line 312 "pretty_printer.m"
  {
#line 312 "pretty_printer.m"
    MR_bool mercury__pretty_printer__succeeded;
#line 312 "pretty_printer.m"
    MR_Word mercury__pretty_printer__HeadVar__3_3;
#line 312 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_6_6;
#line 312 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_7_7;
#line 312 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_8_8;
#line 312 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_9_9;
#line 312 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_10_10;
#line 312 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_11_11;
#line 312 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_12_12;
#line 312 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_13_13;
#line 312 "pretty_printer.m"
    MR_Word mercury__pretty_printer__V_14_14;

#line 313 "pretty_printer.m"
    {
#line 313 "pretty_printer.m"
      mercury__pretty_printer__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 313 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_8_8, 0) = ((MR_Box) (mercury__pretty_printer__Indent_4));
#line 313 "pretty_printer.m"
    }
#line 313 "pretty_printer.m"
    {
#line 313 "pretty_printer.m"
      mercury__pretty_printer__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "pretty_printer.m"
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 313 "pretty_printer.m"
      MR_hl_field(MR_mktag(3), mercury__pretty_printer__V_7_7, 1) = ((MR_Box) (mercury__pretty_printer__V_8_8));
#line 313 "pretty_printer.m"
    }
#line 313 "pretty_printer.m"
    {
#line 313 "pretty_printer.m"
      mercury__pretty_printer__V_10_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 313 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__V_10_10, 0) = ((MR_Box) (mercury__pretty_printer__Docs_5));
#line 313 "pretty_printer.m"
    }
#line 313 "pretty_printer.m"
    mercury__pretty_printer__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 313 "pretty_printer.m"
    mercury__pretty_printer__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pretty_printer_scalar_common_1[5]);
#line 313 "pretty_printer.m"
    mercury__pretty_printer__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 313 "pretty_printer.m"
    mercury__pretty_printer__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__pretty_printer_scalar_common_1[6]);
#line 313 "pretty_printer.m"
    {
#line 313 "pretty_printer.m"
      mercury__pretty_printer__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 0) = ((MR_Box) (mercury__pretty_printer__V_10_10));
#line 313 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_9_9, 1) = ((MR_Box) (mercury__pretty_printer__V_11_11));
#line 313 "pretty_printer.m"
    }
#line 313 "pretty_printer.m"
    {
#line 313 "pretty_printer.m"
      mercury__pretty_printer__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_6_6, 0) = ((MR_Box) (mercury__pretty_printer__V_7_7));
#line 313 "pretty_printer.m"
      MR_hl_field(MR_mktag(1), mercury__pretty_printer__V_6_6, 1) = ((MR_Box) (mercury__pretty_printer__V_9_9));
#line 313 "pretty_printer.m"
    }
#line 313 "pretty_printer.m"
    {
#line 313 "pretty_printer.m"
      mercury__pretty_printer__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 313 "pretty_printer.m"
      MR_hl_field(MR_mktag(2), mercury__pretty_printer__HeadVar__3_3, 0) = ((MR_Box) (mercury__pretty_printer__V_6_6));
#line 313 "pretty_printer.m"
    }
#line 312 "pretty_printer.m"
    return mercury__pretty_printer__HeadVar__3_3;
#line 312 "pretty_printer.m"
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
