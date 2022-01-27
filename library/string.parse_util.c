/*
** Automatically generated from `string.parse_util.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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


/* :- module string.parse_util. */
/* :- implementation. */

/*
INIT mercury__string__parse_util__init
ENDINIT
*/

#include "string.parse_util.mih"


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
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.to_string.mih"




#line 90 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_0;

#line 93 "string.parse_util.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__parse_util__list__ti_list_1builtin__type_ctor_info_character_0;

#line 96 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_gather_ended_by_0_1[1];

#line 99 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_1;

#line 102 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_0[1];

#line 105 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_1[1];

#line 108 "string.parse_util.c"
static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_gather_ended_by_0[2];

#line 111 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_gather_ended_by_0[2];

#line 114 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_gather_ended_by_0[2];

#line 117 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0;

#line 120 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1;

#line 123 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2;

#line 126 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3;

#line 129 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_poly_kind_0[4];

#line 132 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_poly_kind_0[4];

#line 135 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_poly_kind_0[4];

#line 138 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_0[2];

#line 141 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_0;

#line 144 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_1[2];

#line 147 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_1;

#line 150 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_2[3];

#line 153 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_2;

#line 156 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_3[2];

#line 159 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_3;

#line 162 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_4[2];

#line 165 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_4;

#line 168 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_5[1];

#line 171 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_5;

#line 174 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_6[2];

#line 177 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_6;

#line 180 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_7[1];

#line 183 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_7;

#line 186 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_8[2];

#line 189 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_8;

#line 192 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_0[1];

#line 195 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_1[1];

#line 198 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_2[1];

#line 201 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_3[6];

#line 204 "string.parse_util.c"
static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_error_0[4];

#line 207 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_error_0[9];

#line 210 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_error_0[9];

#line 213 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_0;

#line 216 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_1;

#line 219 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_hash_0[2];

#line 222 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_hash_0[2];

#line 225 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_hash_0[2];

#line 228 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_0;

#line 231 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_1;

#line 234 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_minus_0[2];

#line 237 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_minus_0[2];

#line 240 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_minus_0[2];

#line 243 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_0;

#line 246 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_1;

#line 249 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_plus_0[2];

#line 252 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_plus_0[2];

#line 255 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_plus_0[2];

#line 258 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_0;

#line 261 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_1;

#line 264 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_space_0[2];

#line 267 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_space_0[2];

#line 270 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_space_0[2];

#line 273 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_0;

#line 276 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_1;

#line 279 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_zero_0[2];

#line 282 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_zero_0[2];

#line 285 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_zero_0[2];

#line 288 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_flags_0_0[5];

#line 291 "string.parse_util.c"
static const MR_ConstString mercury__string__parse_util__string__parse_util__field_names_string_format_flags_0_0[5];

#line 294 "string.parse_util.c"
static const MR_DuArgLocn mercury__string__parse_util__string__parse_util__field_locns_string_format_flags_0_0[5];

#line 297 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_flags_0_0;

#line 300 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_flags_0_0[1];

#line 303 "string.parse_util.c"
static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_flags_0[1];

#line 306 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_flags_0[1];

#line 309 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flags_0[1];

#line 312 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_0;

#line 315 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_1;

#line 318 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_2;

#line 321 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_3;

#line 324 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_4;

#line 327 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_5;

#line 330 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_float_kind_0[6];

#line 333 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_float_kind_0[6];

#line 336 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_float_kind_0[6];

#line 339 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_0;

#line 342 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_1;

#line 345 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_2;

#line 348 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_3;

#line 351 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_4;

#line 354 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_int_base_0[5];

#line 357 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_int_base_0[5];

#line 360 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_int_base_0[5];

#line 363 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_0;

#line 366 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_prec_0_1[1];

#line 369 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_1;

#line 372 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_0[1];

#line 375 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_1[1];

#line 378 "string.parse_util.c"
static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_maybe_prec_0[2];

#line 381 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_prec_0[2];

#line 384 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_prec_0[2];

#line 387 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_0;

#line 390 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_width_0_1[1];

#line 393 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_1;

#line 396 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_0[1];

#line 399 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_1[1];

#line 402 "string.parse_util.c"
static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_maybe_width_0[2];

#line 405 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_width_0[2];

#line 408 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_width_0[2];

#line 411 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____gather_ended_by_0_0_10001(
#line 414 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 416 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 419 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____gather_ended_by_0_0_10001(
#line 422 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 424 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 426 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 429 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____poly_kind_0_0_10001(
#line 432 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 434 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 437 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____poly_kind_0_0_10001(
#line 440 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 442 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 444 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 447 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_error_0_0_10001(
#line 450 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 452 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 455 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_error_0_0_10001(
#line 458 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 460 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 462 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 465 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_hash_0_0_10001(
#line 468 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 470 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 473 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_hash_0_0_10001(
#line 476 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 478 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 480 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 483 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_minus_0_0_10001(
#line 486 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 488 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 491 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_minus_0_0_10001(
#line 494 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 496 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 498 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 501 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_plus_0_0_10001(
#line 504 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 506 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 509 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_plus_0_0_10001(
#line 512 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 514 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 516 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 519 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_space_0_0_10001(
#line 522 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 524 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 527 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_space_0_0_10001(
#line 530 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 532 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 534 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 537 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_zero_0_0_10001(
#line 540 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 542 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 545 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_zero_0_0_10001(
#line 548 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 550 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 552 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 555 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flags_0_0_10001(
#line 558 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 560 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 563 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flags_0_0_10001(
#line 566 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 568 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 570 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 573 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_float_kind_0_0_10001(
#line 576 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 578 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 581 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_float_kind_0_0_10001(
#line 584 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 586 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 588 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 591 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_int_base_0_0_10001(
#line 594 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 596 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 599 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_int_base_0_0_10001(
#line 602 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 604 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 606 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 609 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_prec_0_0_10001(
#line 612 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 614 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 617 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_prec_0_0_10001(
#line 620 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 622 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 624 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 627 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_width_0_0_10001(
#line 630 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 632 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 635 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_width_0_0_10001(
#line 638 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 640 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 642 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 279 "string.parse_util.m"
static MR_String MR_CALL 
mercury__string__parse_util__specifier_char_1_f_0(
#line 279 "string.parse_util.m"
  MR_Char mercury__string__parse_util__SpecChar_3);

#line 252 "string.parse_util.m"
static MR_String MR_CALL 
mercury__string__parse_util__nth_1_f_0(
#line 252 "string.parse_util.m"
  MR_Integer mercury__string__parse_util__N_3);

#line 247 "string.parse_util.m"
static MR_String MR_CALL 
mercury__string__parse_util__nth_specifier_1_f_0(
#line 247 "string.parse_util.m"
  MR_Integer mercury__string__parse_util__SpecNum_3);


static /* final */ const MR_Box mercury__string__parse_util_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__string__parse_util_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__parse_util_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__parse_util_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__parse_util_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "string.mh"
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



#line 1038 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_0 = {
  (MR_String) "found_end_of_string",
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

#line 1053 "string.parse_util.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__parse_util__list__ti_list_1builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

#line 1061 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_gather_ended_by_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__list__ti_list_1builtin__type_ctor_info_character_0
};

#line 1066 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_1 = {
  (MR_String) "found_percent",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__string__parse_util__string__parse_util__field_types_gather_ended_by_0_1,
  NULL,
  NULL,
  NULL
};

#line 1081 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_0
};

#line 1086 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_1[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_1
};

#line 1091 "string.parse_util.c"
static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_gather_ended_by_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_1
  }
};

#line 1105 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_gather_ended_by_0[2] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_0,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_1
};

#line 1111 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_gather_ended_by_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1117 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_gather_ended_by_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_util____Unify____gather_ended_by_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____gather_ended_by_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "gather_ended_by",
  {
    mercury__string__parse_util__string__parse_util__du_name_ordered_gather_ended_by_0
  },
  {
    mercury__string__parse_util__string__parse_util__du_ptag_ordered_gather_ended_by_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_gather_ended_by_0
};

#line 1138 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0 = {
  (MR_String) "poly_kind_char",
  (MR_Integer) 0
};

#line 1144 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1 = {
  (MR_String) "poly_kind_str",
  (MR_Integer) 1
};

#line 1150 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2 = {
  (MR_String) "poly_kind_int",
  (MR_Integer) 2
};

#line 1156 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3 = {
  (MR_String) "poly_kind_float",
  (MR_Integer) 3
};

#line 1162 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_poly_kind_0[4] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3
};

#line 1170 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_poly_kind_0[4] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1
};

#line 1178 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_poly_kind_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1186 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____poly_kind_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____poly_kind_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "poly_kind",
  {
    mercury__string__parse_util__string__parse_util__enum_name_ordered_poly_kind_0
  },
  {
    mercury__string__parse_util__string__parse_util__enum_value_ordered_poly_kind_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_poly_kind_0
};

#line 1207 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1213 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_0 = {
  (MR_String) "error_no_specifier",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_0,
  NULL,
  NULL,
  NULL
};

#line 1228 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 1234 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_1 = {
  (MR_String) "error_unknown_specifier",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_1,
  NULL,
  NULL,
  NULL
};

#line 1249 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_2[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0
};

#line 1256 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_2 = {
  (MR_String) "error_wrong_polytype",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_2,
  NULL,
  NULL,
  NULL
};

#line 1271 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 1277 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_3 = {
  (MR_String) "error_no_polytype",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_3,
  NULL,
  NULL,
  NULL
};

#line 1292 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_4[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0
};

#line 1298 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_4 = {
  (MR_String) "error_nonint_star_width",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_4,
  NULL,
  NULL,
  NULL
};

#line 1313 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1318 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_5 = {
  (MR_String) "error_missing_star_width",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_5,
  NULL,
  NULL,
  NULL
};

#line 1333 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_6[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0
};

#line 1339 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_6 = {
  (MR_String) "error_nonint_star_prec",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_6,
  NULL,
  NULL,
  NULL
};

#line 1354 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1359 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_7 = {
  (MR_String) "error_missing_star_prec",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_7,
  NULL,
  NULL,
  NULL
};

#line 1374 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_8[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1380 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_8 = {
  (MR_String) "error_extra_polytypes",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 8,
  mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_8,
  NULL,
  NULL,
  NULL
};

#line 1395 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_0
};

#line 1400 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_1[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_1
};

#line 1405 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_2[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_2
};

#line 1410 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_3[6] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_3,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_4,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_5,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_6,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_7,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_8
};

#line 1420 "string.parse_util.c"
static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_error_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_2
  },
  {
    (MR_Integer) 6,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_3
  }
};

#line 1444 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_error_0[9] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_8,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_7,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_5,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_3,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_0,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_6,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_4,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_1,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_2
};

#line 1457 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_error_0[9] = {
  (MR_Integer) 4,
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1470 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_error_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_error_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_error",
  {
    mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_error_0
  },
  {
    mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_error_0
  },
  (MR_Integer) 9,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_error_0
};

#line 1491 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_0 = {
  (MR_String) "flag_hash_clear",
  (MR_Integer) 0
};

#line 1497 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_1 = {
  (MR_String) "flag_hash_set",
  (MR_Integer) 1
};

#line 1503 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_hash_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_1
};

#line 1509 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_hash_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_1
};

#line 1515 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_hash_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1521 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_hash_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flag_hash_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flag_hash_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flag_hash",
  {
    mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_hash_0
  },
  {
    mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_hash_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_hash_0
};

#line 1542 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_0 = {
  (MR_String) "flag_minus_clear",
  (MR_Integer) 0
};

#line 1548 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_1 = {
  (MR_String) "flag_minus_set",
  (MR_Integer) 1
};

#line 1554 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_minus_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_1
};

#line 1560 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_minus_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_1
};

#line 1566 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_minus_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1572 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_minus_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flag_minus_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flag_minus_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flag_minus",
  {
    mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_minus_0
  },
  {
    mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_minus_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_minus_0
};

#line 1593 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_0 = {
  (MR_String) "flag_plus_clear",
  (MR_Integer) 0
};

#line 1599 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_1 = {
  (MR_String) "flag_plus_set",
  (MR_Integer) 1
};

#line 1605 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_plus_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_1
};

#line 1611 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_plus_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_1
};

#line 1617 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_plus_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1623 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_plus_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flag_plus_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flag_plus_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flag_plus",
  {
    mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_plus_0
  },
  {
    mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_plus_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_plus_0
};

#line 1644 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_0 = {
  (MR_String) "flag_space_clear",
  (MR_Integer) 0
};

#line 1650 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_1 = {
  (MR_String) "flag_space_set",
  (MR_Integer) 1
};

#line 1656 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_space_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_1
};

#line 1662 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_space_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_1
};

#line 1668 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_space_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1674 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_space_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flag_space_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flag_space_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flag_space",
  {
    mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_space_0
  },
  {
    mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_space_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_space_0
};

#line 1695 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_0 = {
  (MR_String) "flag_zero_clear",
  (MR_Integer) 0
};

#line 1701 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_1 = {
  (MR_String) "flag_zero_set",
  (MR_Integer) 1
};

#line 1707 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_zero_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_1
};

#line 1713 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_zero_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_1
};

#line 1719 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_zero_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1725 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_zero_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flag_zero_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flag_zero_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flag_zero",
  {
    mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_zero_0
  },
  {
    mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_zero_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_zero_0
};

#line 1746 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_flags_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_hash_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_space_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_zero_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_minus_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_plus_0
};

#line 1755 "string.parse_util.c"
static const MR_ConstString mercury__string__parse_util__string__parse_util__field_names_string_format_flags_0_0[5] = {
  (MR_String) "flag_hash",
  (MR_String) "flag_space",
  (MR_String) "flag_zero",
  (MR_String) "flag_minus",
  (MR_String) "flag_plus"
};

#line 1764 "string.parse_util.c"
static const MR_DuArgLocn mercury__string__parse_util__string__parse_util__field_locns_string_format_flags_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  }
};

#line 1793 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_flags_0_0 = {
  (MR_String) "string_format_flags",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__string__parse_util__string__parse_util__field_types_string_format_flags_0_0,
  mercury__string__parse_util__string__parse_util__field_names_string_format_flags_0_0,
  mercury__string__parse_util__string__parse_util__field_locns_string_format_flags_0_0,
  NULL
};

#line 1808 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_flags_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_flags_0_0
};

#line 1813 "string.parse_util.c"
static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_flags_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_flags_0_0
  }
};

#line 1822 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_flags_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_flags_0_0
};

#line 1827 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flags_0[1] = {
  (MR_Integer) 0
};

#line 1832 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flags_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flags_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flags",
  {
    mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_flags_0
  },
  {
    mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_flags_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flags_0
};

#line 1853 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_0 = {
  (MR_String) "kind_e_scientific_lc",
  (MR_Integer) 0
};

#line 1859 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_1 = {
  (MR_String) "kind_e_scientific_uc",
  (MR_Integer) 1
};

#line 1865 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_2 = {
  (MR_String) "kind_f_plain_lc",
  (MR_Integer) 2
};

#line 1871 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_3 = {
  (MR_String) "kind_f_plain_uc",
  (MR_Integer) 3
};

#line 1877 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_4 = {
  (MR_String) "kind_g_flexible_lc",
  (MR_Integer) 4
};

#line 1883 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_5 = {
  (MR_String) "kind_g_flexible_uc",
  (MR_Integer) 5
};

#line 1889 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_float_kind_0[6] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_4,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_5
};

#line 1899 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_float_kind_0[6] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_4,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_5
};

#line 1909 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_float_kind_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5
};

#line 1919 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_float_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_float_kind_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_float_kind_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_float_kind",
  {
    mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_float_kind_0
  },
  {
    mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_float_kind_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_float_kind_0
};

#line 1940 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_0 = {
  (MR_String) "base_octal",
  (MR_Integer) 0
};

#line 1946 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_1 = {
  (MR_String) "base_decimal",
  (MR_Integer) 1
};

#line 1952 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_2 = {
  (MR_String) "base_hex_lc",
  (MR_Integer) 2
};

#line 1958 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_3 = {
  (MR_String) "base_hex_uc",
  (MR_Integer) 3
};

#line 1964 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_4 = {
  (MR_String) "base_hex_p",
  (MR_Integer) 4
};

#line 1970 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_int_base_0[5] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_4
};

#line 1979 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_int_base_0[5] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_4,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_0
};

#line 1988 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_int_base_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 1997 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_int_base_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_int_base_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_int_base_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_int_base",
  {
    mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_int_base_0
  },
  {
    mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_int_base_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_int_base_0
};

#line 2018 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_0 = {
  (MR_String) "no_specified_prec",
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

#line 2033 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_prec_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2038 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_1 = {
  (MR_String) "specified_prec",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_prec_0_1,
  NULL,
  NULL,
  NULL
};

#line 2053 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_0
};

#line 2058 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_1[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_1
};

#line 2063 "string.parse_util.c"
static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_maybe_prec_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_1
  }
};

#line 2077 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_prec_0[2] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_0,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_1
};

#line 2083 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_prec_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2089 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_maybe_prec_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_maybe_prec_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_maybe_prec",
  {
    mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_prec_0
  },
  {
    mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_maybe_prec_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_prec_0
};

#line 2110 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_0 = {
  (MR_String) "no_specified_width",
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

#line 2125 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_width_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2130 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_1 = {
  (MR_String) "specified_width",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_width_0_1,
  NULL,
  NULL,
  NULL
};

#line 2145 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_0
};

#line 2150 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_1[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_1
};

#line 2155 "string.parse_util.c"
static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_maybe_width_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_1
  }
};

#line 2169 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_width_0[2] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_0,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_1
};

#line 2175 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_width_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2181 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_maybe_width_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_maybe_width_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_maybe_width",
  {
    mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_width_0
  },
  {
    mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_maybe_width_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_width_0
};

#line 2202 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____gather_ended_by_0_0_10001(
#line 2205 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2207 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2209 "string.parse_util.c"
{
#line 2211 "string.parse_util.c"
  {
#line 2213 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2216 "string.parse_util.c"
    {
#line 2218 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____gather_ended_by_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2221 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2223 "string.parse_util.c"
  }
#line 2225 "string.parse_util.c"
}

#line 2228 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____gather_ended_by_0_0_10001(
#line 2231 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2233 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2235 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2237 "string.parse_util.c"
{
#line 2239 "string.parse_util.c"
  {
#line 2241 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2244 "string.parse_util.c"
    {
#line 2246 "string.parse_util.c"
      mercury__string__parse_util____Compare____gather_ended_by_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2249 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2251 "string.parse_util.c"
  }
#line 2253 "string.parse_util.c"
}

#line 2256 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____poly_kind_0_0_10001(
#line 2259 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2261 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2263 "string.parse_util.c"
{
#line 2265 "string.parse_util.c"
  {
#line 2267 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2270 "string.parse_util.c"
    {
#line 2272 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____poly_kind_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2275 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2277 "string.parse_util.c"
  }
#line 2279 "string.parse_util.c"
}

#line 2282 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____poly_kind_0_0_10001(
#line 2285 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2287 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2289 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2291 "string.parse_util.c"
{
#line 2293 "string.parse_util.c"
  {
#line 2295 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2298 "string.parse_util.c"
    {
#line 2300 "string.parse_util.c"
      mercury__string__parse_util____Compare____poly_kind_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2303 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2305 "string.parse_util.c"
  }
#line 2307 "string.parse_util.c"
}

#line 2310 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_error_0_0_10001(
#line 2313 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2315 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2317 "string.parse_util.c"
{
#line 2319 "string.parse_util.c"
  {
#line 2321 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2324 "string.parse_util.c"
    {
#line 2326 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_error_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2329 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2331 "string.parse_util.c"
  }
#line 2333 "string.parse_util.c"
}

#line 2336 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_error_0_0_10001(
#line 2339 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2341 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2343 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2345 "string.parse_util.c"
{
#line 2347 "string.parse_util.c"
  {
#line 2349 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2352 "string.parse_util.c"
    {
#line 2354 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_error_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2357 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2359 "string.parse_util.c"
  }
#line 2361 "string.parse_util.c"
}

#line 2364 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_hash_0_0_10001(
#line 2367 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2369 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2371 "string.parse_util.c"
{
#line 2373 "string.parse_util.c"
  {
#line 2375 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2378 "string.parse_util.c"
    {
#line 2380 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_hash_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2383 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2385 "string.parse_util.c"
  }
#line 2387 "string.parse_util.c"
}

#line 2390 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_hash_0_0_10001(
#line 2393 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2395 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2397 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2399 "string.parse_util.c"
{
#line 2401 "string.parse_util.c"
  {
#line 2403 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2406 "string.parse_util.c"
    {
#line 2408 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flag_hash_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2411 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2413 "string.parse_util.c"
  }
#line 2415 "string.parse_util.c"
}

#line 2418 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_minus_0_0_10001(
#line 2421 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2423 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2425 "string.parse_util.c"
{
#line 2427 "string.parse_util.c"
  {
#line 2429 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2432 "string.parse_util.c"
    {
#line 2434 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_minus_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2437 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2439 "string.parse_util.c"
  }
#line 2441 "string.parse_util.c"
}

#line 2444 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_minus_0_0_10001(
#line 2447 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2449 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2451 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2453 "string.parse_util.c"
{
#line 2455 "string.parse_util.c"
  {
#line 2457 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2460 "string.parse_util.c"
    {
#line 2462 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flag_minus_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2465 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2467 "string.parse_util.c"
  }
#line 2469 "string.parse_util.c"
}

#line 2472 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_plus_0_0_10001(
#line 2475 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2477 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2479 "string.parse_util.c"
{
#line 2481 "string.parse_util.c"
  {
#line 2483 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2486 "string.parse_util.c"
    {
#line 2488 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_plus_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2491 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2493 "string.parse_util.c"
  }
#line 2495 "string.parse_util.c"
}

#line 2498 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_plus_0_0_10001(
#line 2501 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2503 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2505 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2507 "string.parse_util.c"
{
#line 2509 "string.parse_util.c"
  {
#line 2511 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2514 "string.parse_util.c"
    {
#line 2516 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flag_plus_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2519 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2521 "string.parse_util.c"
  }
#line 2523 "string.parse_util.c"
}

#line 2526 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_space_0_0_10001(
#line 2529 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2531 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2533 "string.parse_util.c"
{
#line 2535 "string.parse_util.c"
  {
#line 2537 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2540 "string.parse_util.c"
    {
#line 2542 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_space_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2545 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2547 "string.parse_util.c"
  }
#line 2549 "string.parse_util.c"
}

#line 2552 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_space_0_0_10001(
#line 2555 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2557 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2559 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2561 "string.parse_util.c"
{
#line 2563 "string.parse_util.c"
  {
#line 2565 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2568 "string.parse_util.c"
    {
#line 2570 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flag_space_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2573 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2575 "string.parse_util.c"
  }
#line 2577 "string.parse_util.c"
}

#line 2580 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_zero_0_0_10001(
#line 2583 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2585 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2587 "string.parse_util.c"
{
#line 2589 "string.parse_util.c"
  {
#line 2591 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2594 "string.parse_util.c"
    {
#line 2596 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_zero_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2599 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2601 "string.parse_util.c"
  }
#line 2603 "string.parse_util.c"
}

#line 2606 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_zero_0_0_10001(
#line 2609 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2611 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2613 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2615 "string.parse_util.c"
{
#line 2617 "string.parse_util.c"
  {
#line 2619 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2622 "string.parse_util.c"
    {
#line 2624 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flag_zero_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2627 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2629 "string.parse_util.c"
  }
#line 2631 "string.parse_util.c"
}

#line 2634 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flags_0_0_10001(
#line 2637 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2639 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2641 "string.parse_util.c"
{
#line 2643 "string.parse_util.c"
  {
#line 2645 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2648 "string.parse_util.c"
    {
#line 2650 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2653 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2655 "string.parse_util.c"
  }
#line 2657 "string.parse_util.c"
}

#line 2660 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flags_0_0_10001(
#line 2663 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2665 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2667 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2669 "string.parse_util.c"
{
#line 2671 "string.parse_util.c"
  {
#line 2673 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2676 "string.parse_util.c"
    {
#line 2678 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flags_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2681 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2683 "string.parse_util.c"
  }
#line 2685 "string.parse_util.c"
}

#line 2688 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_float_kind_0_0_10001(
#line 2691 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2693 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2695 "string.parse_util.c"
{
#line 2697 "string.parse_util.c"
  {
#line 2699 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2702 "string.parse_util.c"
    {
#line 2704 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_float_kind_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2707 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2709 "string.parse_util.c"
  }
#line 2711 "string.parse_util.c"
}

#line 2714 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_float_kind_0_0_10001(
#line 2717 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2719 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2721 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2723 "string.parse_util.c"
{
#line 2725 "string.parse_util.c"
  {
#line 2727 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2730 "string.parse_util.c"
    {
#line 2732 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_float_kind_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2735 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2737 "string.parse_util.c"
  }
#line 2739 "string.parse_util.c"
}

#line 2742 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_int_base_0_0_10001(
#line 2745 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2747 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2749 "string.parse_util.c"
{
#line 2751 "string.parse_util.c"
  {
#line 2753 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2756 "string.parse_util.c"
    {
#line 2758 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_int_base_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2761 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2763 "string.parse_util.c"
  }
#line 2765 "string.parse_util.c"
}

#line 2768 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_int_base_0_0_10001(
#line 2771 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2773 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2775 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2777 "string.parse_util.c"
{
#line 2779 "string.parse_util.c"
  {
#line 2781 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2784 "string.parse_util.c"
    {
#line 2786 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_int_base_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2789 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2791 "string.parse_util.c"
  }
#line 2793 "string.parse_util.c"
}

#line 2796 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_prec_0_0_10001(
#line 2799 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2801 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2803 "string.parse_util.c"
{
#line 2805 "string.parse_util.c"
  {
#line 2807 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2810 "string.parse_util.c"
    {
#line 2812 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2815 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2817 "string.parse_util.c"
  }
#line 2819 "string.parse_util.c"
}

#line 2822 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_prec_0_0_10001(
#line 2825 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2827 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2829 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2831 "string.parse_util.c"
{
#line 2833 "string.parse_util.c"
  {
#line 2835 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2838 "string.parse_util.c"
    {
#line 2840 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2843 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2845 "string.parse_util.c"
  }
#line 2847 "string.parse_util.c"
}

#line 2850 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_width_0_0_10001(
#line 2853 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2855 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2857 "string.parse_util.c"
{
#line 2859 "string.parse_util.c"
  {
#line 2861 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2864 "string.parse_util.c"
    {
#line 2866 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2869 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2871 "string.parse_util.c"
  }
#line 2873 "string.parse_util.c"
}

#line 2876 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_width_0_0_10001(
#line 2879 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2881 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2883 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2885 "string.parse_util.c"
{
#line 2887 "string.parse_util.c"
  {
#line 2889 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2892 "string.parse_util.c"
    {
#line 2894 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2897 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2899 "string.parse_util.c"
  }
#line 2901 "string.parse_util.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__string__parse_util__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 55 "string.parse_util.m"
void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_width_0_0(
#line 55 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
#line 55 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2,
#line 55 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__3_3)
#line 55 "string.parse_util.m"
{
#line 55 "string.parse_util.m"
  {
#line 55 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 55 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CastX_8 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
#line 55 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CastY_9 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

#line 55 "string.parse_util.m"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastX_8 == mercury__string__parse_util__CastY_9);
#line 55 "string.parse_util.m"
    if (mercury__string__parse_util__succeeded)
#line 2945 "string.parse_util.c"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 55 "string.parse_util.m"
    else
#line 55 "string.parse_util.m"
      if ((mercury__string__parse_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 55 "string.parse_util.m"
        if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 55 "string.parse_util.m"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 55 "string.parse_util.m"
        else
#line 2957 "string.parse_util.c"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 55 "string.parse_util.m"
      else
#line 55 "string.parse_util.m"
        {
#line 55 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

#line 55 "string.parse_util.m"
          if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2968 "string.parse_util.c"
            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 55 "string.parse_util.m"
          else
#line 55 "string.parse_util.m"
            {
#line 55 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)));

#line 66 "private_builtin.opt"
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_11_11 < mercury__string__parse_util__V_7_7);
#line 69 "private_builtin.opt"
              if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
              else
#line 74 "private_builtin.opt"
                {
#line 71 "private_builtin.opt"
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_11_11 == mercury__string__parse_util__V_7_7);
#line 74 "private_builtin.opt"
                  if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                  else
#line 75 "private_builtin.opt"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                }
#line 55 "string.parse_util.m"
            }
#line 55 "string.parse_util.m"
        }
#line 55 "string.parse_util.m"
  }
#line 55 "string.parse_util.m"
}

#line 55 "string.parse_util.m"
MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_width_0_0(
#line 55 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__1_1,
#line 55 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2)
#line 55 "string.parse_util.m"
{
#line 55 "string.parse_util.m"
  {
#line 55 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 55 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CastX_7 = (MR_Integer) mercury__string__parse_util__HeadVar__1_1;
#line 55 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CastY_8 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;

#line 55 "string.parse_util.m"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastX_7 == mercury__string__parse_util__CastY_8);
#line 55 "string.parse_util.m"
    if (mercury__string__parse_util__succeeded)
#line 55 "string.parse_util.m"
      mercury__string__parse_util__succeeded = MR_TRUE;
#line 55 "string.parse_util.m"
    else
#line 55 "string.parse_util.m"
      if ((mercury__string__parse_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 55 "string.parse_util.m"
        {
#line 55 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__CastX_3 = (MR_Integer) mercury__string__parse_util__HeadVar__1_1;
#line 55 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__CastY_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;

#line 55 "string.parse_util.m"
          mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastY_4 == mercury__string__parse_util__CastX_3);
#line 55 "string.parse_util.m"
        }
#line 55 "string.parse_util.m"
      else
#line 55 "string.parse_util.m"
        {
#line 55 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)));
#line 55 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__V_6_6;

#line 55 "string.parse_util.m"
          mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 55 "string.parse_util.m"
          if (mercury__string__parse_util__succeeded)
#line 55 "string.parse_util.m"
            {
#line 55 "string.parse_util.m"
              mercury__string__parse_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));
#line 3064 "string.parse_util.c"
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_5_5 == mercury__string__parse_util__V_6_6);
#line 55 "string.parse_util.m"
            }
#line 55 "string.parse_util.m"
        }
#line 55 "string.parse_util.m"
    return mercury__string__parse_util__succeeded;
#line 55 "string.parse_util.m"
  }
#line 55 "string.parse_util.m"
}

#line 59 "string.parse_util.m"
void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(
#line 59 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
#line 59 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2,
#line 59 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__3_3)
#line 59 "string.parse_util.m"
{
#line 59 "string.parse_util.m"
  {
#line 59 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 59 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CastX_8 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
#line 59 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CastY_9 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

#line 59 "string.parse_util.m"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastX_8 == mercury__string__parse_util__CastY_9);
#line 59 "string.parse_util.m"
    if (mercury__string__parse_util__succeeded)
#line 3101 "string.parse_util.c"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 59 "string.parse_util.m"
    else
#line 59 "string.parse_util.m"
      if ((mercury__string__parse_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 59 "string.parse_util.m"
        if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 59 "string.parse_util.m"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 59 "string.parse_util.m"
        else
#line 3113 "string.parse_util.c"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 59 "string.parse_util.m"
      else
#line 59 "string.parse_util.m"
        {
#line 59 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

#line 59 "string.parse_util.m"
          if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3124 "string.parse_util.c"
            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 59 "string.parse_util.m"
          else
#line 59 "string.parse_util.m"
            {
#line 59 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)));

#line 66 "private_builtin.opt"
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_11_11 < mercury__string__parse_util__V_7_7);
#line 69 "private_builtin.opt"
              if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
              else
#line 74 "private_builtin.opt"
                {
#line 71 "private_builtin.opt"
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_11_11 == mercury__string__parse_util__V_7_7);
#line 74 "private_builtin.opt"
                  if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                  else
#line 75 "private_builtin.opt"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                }
#line 59 "string.parse_util.m"
            }
#line 59 "string.parse_util.m"
        }
#line 59 "string.parse_util.m"
  }
#line 59 "string.parse_util.m"
}

#line 59 "string.parse_util.m"
MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(
#line 59 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__1_1,
#line 59 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2)
#line 59 "string.parse_util.m"
{
#line 59 "string.parse_util.m"
  {
#line 59 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 59 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CastX_7 = (MR_Integer) mercury__string__parse_util__HeadVar__1_1;
#line 59 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CastY_8 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;

#line 59 "string.parse_util.m"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastX_7 == mercury__string__parse_util__CastY_8);
#line 59 "string.parse_util.m"
    if (mercury__string__parse_util__succeeded)
#line 59 "string.parse_util.m"
      mercury__string__parse_util__succeeded = MR_TRUE;
#line 59 "string.parse_util.m"
    else
#line 59 "string.parse_util.m"
      if ((mercury__string__parse_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 59 "string.parse_util.m"
        {
#line 59 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__CastX_3 = (MR_Integer) mercury__string__parse_util__HeadVar__1_1;
#line 59 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__CastY_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;

#line 59 "string.parse_util.m"
          mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastY_4 == mercury__string__parse_util__CastX_3);
#line 59 "string.parse_util.m"
        }
#line 59 "string.parse_util.m"
      else
#line 59 "string.parse_util.m"
        {
#line 59 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)));
#line 59 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__V_6_6;

#line 59 "string.parse_util.m"
          mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 59 "string.parse_util.m"
          if (mercury__string__parse_util__succeeded)
#line 59 "string.parse_util.m"
            {
#line 59 "string.parse_util.m"
              mercury__string__parse_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));
#line 3220 "string.parse_util.c"
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_5_5 == mercury__string__parse_util__V_6_6);
#line 59 "string.parse_util.m"
            }
#line 59 "string.parse_util.m"
        }
#line 59 "string.parse_util.m"
    return mercury__string__parse_util__succeeded;
#line 59 "string.parse_util.m"
  }
#line 59 "string.parse_util.m"
}

#line 63 "string.parse_util.m"
void MR_CALL 
mercury__string__parse_util____Compare____string_format_int_base_0_0(
#line 63 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
#line 63 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2,
#line 63 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__3_3)
#line 63 "string.parse_util.m"
{
#line 63 "string.parse_util.m"
  {
#line 63 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 63 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__Cast_HeadVar1_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
#line 63 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__Cast_HeadVar2_5 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 63 "string.parse_util.m"
  }
#line 63 "string.parse_util.m"
}

#line 63 "string.parse_util.m"
MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_int_base_0_0(
#line 63 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_1,
#line 63 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2)
#line 63 "string.parse_util.m"
{
#line 3289 "string.parse_util.c"
  {
#line 3291 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3294 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3296 "string.parse_util.c"
  }
#line 63 "string.parse_util.m"
}

#line 70 "string.parse_util.m"
void MR_CALL 
mercury__string__parse_util____Compare____string_format_float_kind_0_0(
#line 70 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
#line 70 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2,
#line 70 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__3_3)
#line 70 "string.parse_util.m"
{
#line 70 "string.parse_util.m"
  {
#line 70 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 70 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__Cast_HeadVar1_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
#line 70 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__Cast_HeadVar2_5 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 70 "string.parse_util.m"
  }
#line 70 "string.parse_util.m"
}

#line 70 "string.parse_util.m"
MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_float_kind_0_0(
#line 70 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_1,
#line 70 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2)
#line 70 "string.parse_util.m"
{
#line 3357 "string.parse_util.c"
  {
#line 3359 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3362 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3364 "string.parse_util.c"
  }
#line 70 "string.parse_util.m"
}

#line 46 "string.parse_util.m"
void MR_CALL 
mercury__string__parse_util____Compare____string_format_flags_0_0(
#line 46 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
#line 46 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2,
#line 46 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__3_3)
#line 46 "string.parse_util.m"
{
#line 46 "string.parse_util.m"
  {
#line 46 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 46 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CastX_18 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
#line 46 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CastY_19 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

#line 46 "string.parse_util.m"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastX_18 == mercury__string__parse_util__CastY_19);
#line 46 "string.parse_util.m"
    if (mercury__string__parse_util__succeeded)
#line 3393 "string.parse_util.c"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 46 "string.parse_util.m"
    else
#line 46 "string.parse_util.m"
      {
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_14_14;
#line 46 "string.parse_util.m"
        MR_Integer mercury__string__parse_util__V_25_25 = (MR_Integer) mercury__string__parse_util__V_4_4;
#line 46 "string.parse_util.m"
        MR_Integer mercury__string__parse_util__V_26_26 = (MR_Integer) mercury__string__parse_util__V_9_9;

#line 66 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_25_25 < mercury__string__parse_util__V_26_26);
#line 69 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
          mercury__string__parse_util__V_14_14 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_25_25 == mercury__string__parse_util__V_26_26);
#line 74 "private_builtin.opt"
            if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
              mercury__string__parse_util__V_14_14 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__string__parse_util__V_14_14 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 3448 "string.parse_util.c"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_14_14 == (MR_Integer) 0);
#line 46 "string.parse_util.m"
        mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
#line 46 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 46 "string.parse_util.m"
          *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__V_14_14;
#line 46 "string.parse_util.m"
        else
#line 46 "string.parse_util.m"
          {
#line 46 "string.parse_util.m"
            MR_Word mercury__string__parse_util__V_15_15;
#line 46 "string.parse_util.m"
            MR_Integer mercury__string__parse_util__V_27_27 = (MR_Integer) mercury__string__parse_util__V_5_5;
#line 46 "string.parse_util.m"
            MR_Integer mercury__string__parse_util__V_28_28 = (MR_Integer) mercury__string__parse_util__V_10_10;

#line 66 "private_builtin.opt"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_27_27 < mercury__string__parse_util__V_28_28);
#line 69 "private_builtin.opt"
            if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
              mercury__string__parse_util__V_15_15 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_27_27 == mercury__string__parse_util__V_28_28);
#line 74 "private_builtin.opt"
                if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
                  mercury__string__parse_util__V_15_15 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__string__parse_util__V_15_15 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 3489 "string.parse_util.c"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_15_15 == (MR_Integer) 0);
#line 46 "string.parse_util.m"
            mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
#line 46 "string.parse_util.m"
            if (mercury__string__parse_util__succeeded)
#line 46 "string.parse_util.m"
              *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__V_15_15;
#line 46 "string.parse_util.m"
            else
#line 46 "string.parse_util.m"
              {
#line 46 "string.parse_util.m"
                MR_Word mercury__string__parse_util__V_16_16;
#line 46 "string.parse_util.m"
                MR_Integer mercury__string__parse_util__V_29_29 = (MR_Integer) mercury__string__parse_util__V_6_6;
#line 46 "string.parse_util.m"
                MR_Integer mercury__string__parse_util__V_30_30 = (MR_Integer) mercury__string__parse_util__V_11_11;

#line 66 "private_builtin.opt"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_29_29 < mercury__string__parse_util__V_30_30);
#line 69 "private_builtin.opt"
                if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
                  mercury__string__parse_util__V_16_16 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                else
#line 74 "private_builtin.opt"
                  {
#line 71 "private_builtin.opt"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_29_29 == mercury__string__parse_util__V_30_30);
#line 74 "private_builtin.opt"
                    if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
                      mercury__string__parse_util__V_16_16 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                    else
#line 75 "private_builtin.opt"
                      mercury__string__parse_util__V_16_16 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                  }
#line 3530 "string.parse_util.c"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_16_16 == (MR_Integer) 0);
#line 46 "string.parse_util.m"
                mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
#line 46 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 46 "string.parse_util.m"
                  *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__V_16_16;
#line 46 "string.parse_util.m"
                else
#line 46 "string.parse_util.m"
                  {
#line 46 "string.parse_util.m"
                    MR_Word mercury__string__parse_util__V_17_17;
#line 46 "string.parse_util.m"
                    MR_Integer mercury__string__parse_util__V_31_31 = (MR_Integer) mercury__string__parse_util__V_7_7;
#line 46 "string.parse_util.m"
                    MR_Integer mercury__string__parse_util__V_32_32 = (MR_Integer) mercury__string__parse_util__V_12_12;

#line 66 "private_builtin.opt"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_31_31 < mercury__string__parse_util__V_32_32);
#line 69 "private_builtin.opt"
                    if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
                      mercury__string__parse_util__V_17_17 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                    else
#line 74 "private_builtin.opt"
                      {
#line 71 "private_builtin.opt"
                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_31_31 == mercury__string__parse_util__V_32_32);
#line 74 "private_builtin.opt"
                        if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
                          mercury__string__parse_util__V_17_17 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                        else
#line 75 "private_builtin.opt"
                          mercury__string__parse_util__V_17_17 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                      }
#line 3571 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_17_17 == (MR_Integer) 0);
#line 46 "string.parse_util.m"
                    mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
#line 46 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 46 "string.parse_util.m"
                      *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__V_17_17;
#line 46 "string.parse_util.m"
                    else
#line 46 "string.parse_util.m"
                      {
#line 46 "string.parse_util.m"
                        MR_Integer mercury__string__parse_util__V_33_33 = (MR_Integer) mercury__string__parse_util__V_8_8;
#line 46 "string.parse_util.m"
                        MR_Integer mercury__string__parse_util__V_34_34 = (MR_Integer) mercury__string__parse_util__V_13_13;

#line 66 "private_builtin.opt"
                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_33_33 < mercury__string__parse_util__V_34_34);
#line 69 "private_builtin.opt"
                        if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
                          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                        else
#line 74 "private_builtin.opt"
                          {
#line 71 "private_builtin.opt"
                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_33_33 == mercury__string__parse_util__V_34_34);
#line 74 "private_builtin.opt"
                            if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                            else
#line 75 "private_builtin.opt"
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                          }
#line 46 "string.parse_util.m"
                      }
#line 46 "string.parse_util.m"
                  }
#line 46 "string.parse_util.m"
              }
#line 46 "string.parse_util.m"
          }
#line 46 "string.parse_util.m"
      }
#line 46 "string.parse_util.m"
  }
#line 46 "string.parse_util.m"
}

#line 46 "string.parse_util.m"
MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flags_0_0(
#line 46 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__1_1,
#line 46 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2)
#line 46 "string.parse_util.m"
{
#line 46 "string.parse_util.m"
  {
#line 46 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 46 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CastX_13 = (MR_Integer) mercury__string__parse_util__HeadVar__1_1;
#line 46 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CastY_14 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;

#line 46 "string.parse_util.m"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastX_13 == mercury__string__parse_util__CastY_14);
#line 46 "string.parse_util.m"
    if (mercury__string__parse_util__succeeded)
#line 46 "string.parse_util.m"
      mercury__string__parse_util__succeeded = MR_TRUE;
#line 46 "string.parse_util.m"
    else
#line 46 "string.parse_util.m"
      {
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 46 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 3674 "string.parse_util.c"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_3_3 == mercury__string__parse_util__V_8_8);
#line 46 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 46 "string.parse_util.m"
          {
#line 3680 "string.parse_util.c"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_4_4 == mercury__string__parse_util__V_9_9);
#line 46 "string.parse_util.m"
            if (mercury__string__parse_util__succeeded)
#line 46 "string.parse_util.m"
              {
#line 3686 "string.parse_util.c"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_5_5 == mercury__string__parse_util__V_10_10);
#line 46 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 46 "string.parse_util.m"
                  {
#line 3692 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_6_6 == mercury__string__parse_util__V_11_11);
#line 46 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 3696 "string.parse_util.c"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_7_7 == mercury__string__parse_util__V_12_12);
#line 46 "string.parse_util.m"
                  }
#line 46 "string.parse_util.m"
              }
#line 46 "string.parse_util.m"
          }
#line 46 "string.parse_util.m"
      }
#line 46 "string.parse_util.m"
    return mercury__string__parse_util__succeeded;
#line 46 "string.parse_util.m"
  }
#line 46 "string.parse_util.m"
}

#line 34 "string.parse_util.m"
void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_zero_0_0(
#line 34 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
#line 34 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2,
#line 34 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__3_3)
#line 34 "string.parse_util.m"
{
#line 34 "string.parse_util.m"
  {
#line 34 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 34 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__Cast_HeadVar1_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
#line 34 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__Cast_HeadVar2_5 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 34 "string.parse_util.m"
  }
#line 34 "string.parse_util.m"
}

#line 34 "string.parse_util.m"
MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_zero_0_0(
#line 34 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_1,
#line 34 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2)
#line 34 "string.parse_util.m"
{
#line 3769 "string.parse_util.c"
  {
#line 3771 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3774 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3776 "string.parse_util.c"
  }
#line 34 "string.parse_util.m"
}

#line 30 "string.parse_util.m"
void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_space_0_0(
#line 30 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
#line 30 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2,
#line 30 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__3_3)
#line 30 "string.parse_util.m"
{
#line 30 "string.parse_util.m"
  {
#line 30 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 30 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__Cast_HeadVar1_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
#line 30 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__Cast_HeadVar2_5 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 30 "string.parse_util.m"
  }
#line 30 "string.parse_util.m"
}

#line 30 "string.parse_util.m"
MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_space_0_0(
#line 30 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_1,
#line 30 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2)
#line 30 "string.parse_util.m"
{
#line 3837 "string.parse_util.c"
  {
#line 3839 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3842 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3844 "string.parse_util.c"
  }
#line 30 "string.parse_util.m"
}

#line 42 "string.parse_util.m"
void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_plus_0_0(
#line 42 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
#line 42 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2,
#line 42 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__3_3)
#line 42 "string.parse_util.m"
{
#line 42 "string.parse_util.m"
  {
#line 42 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 42 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__Cast_HeadVar1_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
#line 42 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__Cast_HeadVar2_5 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 42 "string.parse_util.m"
  }
#line 42 "string.parse_util.m"
}

#line 42 "string.parse_util.m"
MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_plus_0_0(
#line 42 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_1,
#line 42 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2)
#line 42 "string.parse_util.m"
{
#line 3905 "string.parse_util.c"
  {
#line 3907 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3910 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3912 "string.parse_util.c"
  }
#line 42 "string.parse_util.m"
}

#line 38 "string.parse_util.m"
void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_minus_0_0(
#line 38 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
#line 38 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2,
#line 38 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__3_3)
#line 38 "string.parse_util.m"
{
#line 38 "string.parse_util.m"
  {
#line 38 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 38 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__Cast_HeadVar1_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
#line 38 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__Cast_HeadVar2_5 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 38 "string.parse_util.m"
  }
#line 38 "string.parse_util.m"
}

#line 38 "string.parse_util.m"
MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_minus_0_0(
#line 38 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_1,
#line 38 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2)
#line 38 "string.parse_util.m"
{
#line 3973 "string.parse_util.c"
  {
#line 3975 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3978 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3980 "string.parse_util.c"
  }
#line 38 "string.parse_util.m"
}

#line 26 "string.parse_util.m"
void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_hash_0_0(
#line 26 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
#line 26 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2,
#line 26 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__3_3)
#line 26 "string.parse_util.m"
{
#line 26 "string.parse_util.m"
  {
#line 26 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 26 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__Cast_HeadVar1_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
#line 26 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__Cast_HeadVar2_5 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 26 "string.parse_util.m"
  }
#line 26 "string.parse_util.m"
}

#line 26 "string.parse_util.m"
MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_hash_0_0(
#line 26 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_1,
#line 26 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2)
#line 26 "string.parse_util.m"
{
#line 4041 "string.parse_util.c"
  {
#line 4043 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 4046 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 4048 "string.parse_util.c"
  }
#line 26 "string.parse_util.m"
}

#line 84 "string.parse_util.m"
void MR_CALL 
mercury__string__parse_util____Compare____string_format_error_0_0(
#line 84 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
#line 84 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2,
#line 84 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__3_3)
#line 84 "string.parse_util.m"
{
#line 84 "string.parse_util.m"
  {
#line 84 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 84 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CastX_318 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
#line 84 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CastY_319 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

#line 84 "string.parse_util.m"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastX_318 == mercury__string__parse_util__CastY_319);
#line 84 "string.parse_util.m"
    if (mercury__string__parse_util__succeeded)
#line 4077 "string.parse_util.c"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 84 "string.parse_util.m"
    else
#line 84 "string.parse_util.m"
      if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 84 "string.parse_util.m"
        {
#line 84 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__V_343_343 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__V_344_344 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

#line 84 "string.parse_util.m"
          if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 84 "string.parse_util.m"
            {
#line 84 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)));
#line 84 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
              MR_Word mercury__string__parse_util__V_8_8;

#line 66 "private_builtin.opt"
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_344_344 < mercury__string__parse_util__V_6_6);
#line 69 "private_builtin.opt"
              if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
                mercury__string__parse_util__V_8_8 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
              else
#line 74 "private_builtin.opt"
                {
#line 71 "private_builtin.opt"
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_344_344 == mercury__string__parse_util__V_6_6);
#line 74 "private_builtin.opt"
                  if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
                    mercury__string__parse_util__V_8_8 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                  else
#line 75 "private_builtin.opt"
                    mercury__string__parse_util__V_8_8 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                }
#line 4123 "string.parse_util.c"
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_8_8 == (MR_Integer) 0);
#line 84 "string.parse_util.m"
              mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
#line 84 "string.parse_util.m"
              if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__V_8_8;
#line 84 "string.parse_util.m"
              else
#line 69 "private_builtin.opt"
                {
#line 66 "private_builtin.opt"
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_343_343 < mercury__string__parse_util__V_7_7);
#line 69 "private_builtin.opt"
                  if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                  else
#line 74 "private_builtin.opt"
                    {
#line 71 "private_builtin.opt"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_343_343 == mercury__string__parse_util__V_7_7);
#line 74 "private_builtin.opt"
                      if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                      else
#line 75 "private_builtin.opt"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                    }
#line 69 "private_builtin.opt"
                }
#line 84 "string.parse_util.m"
            }
#line 84 "string.parse_util.m"
          else
#line 84 "string.parse_util.m"
            if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4165 "string.parse_util.c"
              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
            else
#line 84 "string.parse_util.m"
              if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4171 "string.parse_util.c"
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
              else
#line 84 "string.parse_util.m"
                if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4177 "string.parse_util.c"
                  *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                else
#line 84 "string.parse_util.m"
                  if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4183 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                  else
#line 84 "string.parse_util.m"
                    if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4189 "string.parse_util.c"
                      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    else
#line 84 "string.parse_util.m"
                      if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4195 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                      else
#line 84 "string.parse_util.m"
                        if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4201 "string.parse_util.c"
                          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        else
#line 4205 "string.parse_util.c"
                          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
        }
#line 84 "string.parse_util.m"
      else
#line 84 "string.parse_util.m"
        if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 84 "string.parse_util.m"
          {
#line 84 "string.parse_util.m"
            MR_Char mercury__string__parse_util__V_349_349 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
            MR_Integer mercury__string__parse_util__V_350_350 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

#line 84 "string.parse_util.m"
            if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4222 "string.parse_util.c"
              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
            else
#line 84 "string.parse_util.m"
              if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 84 "string.parse_util.m"
                {
#line 84 "string.parse_util.m"
                  MR_Integer mercury__string__parse_util__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)));
#line 84 "string.parse_util.m"
                  MR_Char mercury__string__parse_util__V_47_47 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
                  MR_Word mercury__string__parse_util__V_48_48;

#line 66 "private_builtin.opt"
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_350_350 < mercury__string__parse_util__V_46_46);
#line 69 "private_builtin.opt"
                  if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
                    mercury__string__parse_util__V_48_48 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                  else
#line 74 "private_builtin.opt"
                    {
#line 71 "private_builtin.opt"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_350_350 == mercury__string__parse_util__V_46_46);
#line 74 "private_builtin.opt"
                      if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
                        mercury__string__parse_util__V_48_48 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                      else
#line 75 "private_builtin.opt"
                        mercury__string__parse_util__V_48_48 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                    }
#line 4259 "string.parse_util.c"
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_48_48 == (MR_Integer) 0);
#line 84 "string.parse_util.m"
                  mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
#line 84 "string.parse_util.m"
                  if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                    *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__V_48_48;
#line 84 "string.parse_util.m"
                  else
#line 84 "string.parse_util.m"
                    {
#line 84 "string.parse_util.m"
                      MR_Integer mercury__string__parse_util__XI_7_404;
#line 84 "string.parse_util.m"
                      MR_Integer mercury__string__parse_util__YI_8_405;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__V_349_349 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4289 "string.parse_util.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__XI_7_404  = Int;
#line 66 "char.opt"
}
#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__V_47_47 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4309 "string.parse_util.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__YI_8_405  = Int;
#line 66 "char.opt"
}
#line 84 "private_builtin.opt"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__XI_7_404 < mercury__string__parse_util__YI_8_405);
#line 87 "private_builtin.opt"
                      if (mercury__string__parse_util__succeeded)
#line 86 "private_builtin.opt"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 87 "private_builtin.opt"
                      else
#line 92 "private_builtin.opt"
                        {
#line 89 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__XI_7_404 == mercury__string__parse_util__YI_8_405);
#line 92 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 91 "private_builtin.opt"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 92 "private_builtin.opt"
                          else
#line 93 "private_builtin.opt"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 92 "private_builtin.opt"
                        }
#line 84 "string.parse_util.m"
                    }
#line 84 "string.parse_util.m"
                }
#line 84 "string.parse_util.m"
              else
#line 84 "string.parse_util.m"
                if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4346 "string.parse_util.c"
                  *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                else
#line 84 "string.parse_util.m"
                  if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4352 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                  else
#line 84 "string.parse_util.m"
                    if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4358 "string.parse_util.c"
                      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    else
#line 84 "string.parse_util.m"
                      if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4364 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                      else
#line 84 "string.parse_util.m"
                        if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4370 "string.parse_util.c"
                          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        else
#line 84 "string.parse_util.m"
                          if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4376 "string.parse_util.c"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                          else
#line 4380 "string.parse_util.c"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
          }
#line 84 "string.parse_util.m"
        else
#line 84 "string.parse_util.m"
          if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 84 "string.parse_util.m"
            {
#line 84 "string.parse_util.m"
              MR_Word mercury__string__parse_util__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
#line 84 "string.parse_util.m"
              MR_Char mercury__string__parse_util__V_352_352 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__V_353_353 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

#line 84 "string.parse_util.m"
              if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4399 "string.parse_util.c"
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
              else
#line 84 "string.parse_util.m"
                if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4405 "string.parse_util.c"
                  *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                else
#line 84 "string.parse_util.m"
                  if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 84 "string.parse_util.m"
                    {
#line 84 "string.parse_util.m"
                      MR_Integer mercury__string__parse_util__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)));
#line 84 "string.parse_util.m"
                      MR_Char mercury__string__parse_util__V_90_90 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
                      MR_Word mercury__string__parse_util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 2)));
#line 84 "string.parse_util.m"
                      MR_Word mercury__string__parse_util__V_92_92;

#line 66 "private_builtin.opt"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_353_353 < mercury__string__parse_util__V_89_89);
#line 69 "private_builtin.opt"
                      if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
                        mercury__string__parse_util__V_92_92 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                      else
#line 74 "private_builtin.opt"
                        {
#line 71 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_353_353 == mercury__string__parse_util__V_89_89);
#line 74 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
                            mercury__string__parse_util__V_92_92 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                          else
#line 75 "private_builtin.opt"
                            mercury__string__parse_util__V_92_92 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                        }
#line 4444 "string.parse_util.c"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_92_92 == (MR_Integer) 0);
#line 84 "string.parse_util.m"
                      mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
#line 84 "string.parse_util.m"
                      if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                        *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__V_92_92;
#line 84 "string.parse_util.m"
                      else
#line 84 "string.parse_util.m"
                        {
#line 84 "string.parse_util.m"
                          MR_Word mercury__string__parse_util__V_93_93;
#line 84 "string.parse_util.m"
                          MR_Integer mercury__string__parse_util__XI_7_412;
#line 84 "string.parse_util.m"
                          MR_Integer mercury__string__parse_util__YI_8_413;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__V_352_352 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4476 "string.parse_util.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__XI_7_412  = Int;
#line 66 "char.opt"
}
#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__V_90_90 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4496 "string.parse_util.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__YI_8_413  = Int;
#line 66 "char.opt"
}
#line 84 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__XI_7_412 < mercury__string__parse_util__YI_8_413);
#line 87 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 86 "private_builtin.opt"
                            mercury__string__parse_util__V_93_93 = (MR_Integer) 1;
#line 87 "private_builtin.opt"
                          else
#line 92 "private_builtin.opt"
                            {
#line 89 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__XI_7_412 == mercury__string__parse_util__YI_8_413);
#line 92 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 91 "private_builtin.opt"
                                mercury__string__parse_util__V_93_93 = (MR_Integer) 0;
#line 92 "private_builtin.opt"
                              else
#line 93 "private_builtin.opt"
                                mercury__string__parse_util__V_93_93 = (MR_Integer) 2;
#line 92 "private_builtin.opt"
                            }
#line 4525 "string.parse_util.c"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_93_93 == (MR_Integer) 0);
#line 84 "string.parse_util.m"
                          mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
#line 84 "string.parse_util.m"
                          if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                            *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__V_93_93;
#line 84 "string.parse_util.m"
                          else
#line 84 "string.parse_util.m"
                            {
#line 84 "string.parse_util.m"
                              MR_Integer mercury__string__parse_util__V_358_358 = (MR_Integer) mercury__string__parse_util__V_351_351;
#line 84 "string.parse_util.m"
                              MR_Integer mercury__string__parse_util__V_359_359 = (MR_Integer) mercury__string__parse_util__V_91_91;

#line 66 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_358_358 < mercury__string__parse_util__V_359_359);
#line 69 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                              else
#line 74 "private_builtin.opt"
                                {
#line 71 "private_builtin.opt"
                                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_358_358 == mercury__string__parse_util__V_359_359);
#line 74 "private_builtin.opt"
                                  if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                  else
#line 75 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                }
#line 84 "string.parse_util.m"
                            }
#line 84 "string.parse_util.m"
                        }
#line 84 "string.parse_util.m"
                    }
#line 84 "string.parse_util.m"
                  else
#line 84 "string.parse_util.m"
                    if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4574 "string.parse_util.c"
                      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    else
#line 84 "string.parse_util.m"
                      if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4580 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                      else
#line 84 "string.parse_util.m"
                        if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4586 "string.parse_util.c"
                          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        else
#line 84 "string.parse_util.m"
                          if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4592 "string.parse_util.c"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                          else
#line 84 "string.parse_util.m"
                            if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4598 "string.parse_util.c"
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                            else
#line 4602 "string.parse_util.c"
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
            }
#line 84 "string.parse_util.m"
          else
#line 84 "string.parse_util.m"
            if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 84 "string.parse_util.m"
              {
#line 84 "string.parse_util.m"
                MR_Integer mercury__string__parse_util__V_337_337 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
#line 84 "string.parse_util.m"
                MR_Integer mercury__string__parse_util__V_338_338 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));

#line 84 "string.parse_util.m"
                if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4619 "string.parse_util.c"
                  *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                else
#line 84 "string.parse_util.m"
                  if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4625 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                  else
#line 84 "string.parse_util.m"
                    if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4631 "string.parse_util.c"
                      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    else
#line 84 "string.parse_util.m"
                      if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 84 "string.parse_util.m"
                        {
#line 84 "string.parse_util.m"
                          MR_Integer mercury__string__parse_util__V_315_315 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
                          MR_Integer mercury__string__parse_util__V_316_316 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 2)));
#line 84 "string.parse_util.m"
                          MR_Word mercury__string__parse_util__V_317_317;

#line 66 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_338_338 < mercury__string__parse_util__V_315_315);
#line 69 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
                            mercury__string__parse_util__V_317_317 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                          else
#line 74 "private_builtin.opt"
                            {
#line 71 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_338_338 == mercury__string__parse_util__V_315_315);
#line 74 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
                                mercury__string__parse_util__V_317_317 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                              else
#line 75 "private_builtin.opt"
                                mercury__string__parse_util__V_317_317 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                            }
#line 4668 "string.parse_util.c"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_317_317 == (MR_Integer) 0);
#line 84 "string.parse_util.m"
                          mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
#line 84 "string.parse_util.m"
                          if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                            *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__V_317_317;
#line 84 "string.parse_util.m"
                          else
#line 69 "private_builtin.opt"
                            {
#line 66 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_337_337 < mercury__string__parse_util__V_316_316);
#line 69 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                              else
#line 74 "private_builtin.opt"
                                {
#line 71 "private_builtin.opt"
                                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_337_337 == mercury__string__parse_util__V_316_316);
#line 74 "private_builtin.opt"
                                  if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                  else
#line 75 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                }
#line 69 "private_builtin.opt"
                            }
#line 84 "string.parse_util.m"
                        }
#line 84 "string.parse_util.m"
                      else
#line 84 "string.parse_util.m"
                        if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4710 "string.parse_util.c"
                          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        else
#line 84 "string.parse_util.m"
                          if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4716 "string.parse_util.c"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                          else
#line 84 "string.parse_util.m"
                            if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4722 "string.parse_util.c"
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                            else
#line 84 "string.parse_util.m"
                              if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4728 "string.parse_util.c"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                              else
#line 4732 "string.parse_util.c"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
              }
#line 84 "string.parse_util.m"
            else
#line 84 "string.parse_util.m"
              if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 84 "string.parse_util.m"
                {
#line 84 "string.parse_util.m"
                  MR_Integer mercury__string__parse_util__V_339_339 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));

#line 84 "string.parse_util.m"
                  if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4747 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                  else
#line 84 "string.parse_util.m"
                    if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4753 "string.parse_util.c"
                      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    else
#line 84 "string.parse_util.m"
                      if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4759 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                      else
#line 84 "string.parse_util.m"
                        if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4765 "string.parse_util.c"
                          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        else
#line 84 "string.parse_util.m"
                          if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 84 "string.parse_util.m"
                            {
#line 84 "string.parse_util.m"
                              MR_Integer mercury__string__parse_util__V_278_278 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));

#line 66 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_339_339 < mercury__string__parse_util__V_278_278);
#line 69 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                              else
#line 74 "private_builtin.opt"
                                {
#line 71 "private_builtin.opt"
                                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_339_339 == mercury__string__parse_util__V_278_278);
#line 74 "private_builtin.opt"
                                  if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                  else
#line 75 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                }
#line 84 "string.parse_util.m"
                            }
#line 84 "string.parse_util.m"
                          else
#line 84 "string.parse_util.m"
                            if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4804 "string.parse_util.c"
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                            else
#line 84 "string.parse_util.m"
                              if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4810 "string.parse_util.c"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                              else
#line 84 "string.parse_util.m"
                                if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4816 "string.parse_util.c"
                                  *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                                else
#line 4820 "string.parse_util.c"
                                  *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                }
#line 84 "string.parse_util.m"
              else
#line 84 "string.parse_util.m"
                if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 84 "string.parse_util.m"
                  {
#line 84 "string.parse_util.m"
                    MR_Integer mercury__string__parse_util__V_340_340 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));

#line 84 "string.parse_util.m"
                    if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4835 "string.parse_util.c"
                      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    else
#line 84 "string.parse_util.m"
                      if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4841 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                      else
#line 84 "string.parse_util.m"
                        if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4847 "string.parse_util.c"
                          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        else
#line 84 "string.parse_util.m"
                          if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4853 "string.parse_util.c"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                          else
#line 84 "string.parse_util.m"
                            if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4859 "string.parse_util.c"
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                            else
#line 84 "string.parse_util.m"
                              if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 84 "string.parse_util.m"
                                {
#line 84 "string.parse_util.m"
                                  MR_Integer mercury__string__parse_util__V_211_211 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));

#line 66 "private_builtin.opt"
                                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_340_340 < mercury__string__parse_util__V_211_211);
#line 69 "private_builtin.opt"
                                  if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                  else
#line 74 "private_builtin.opt"
                                    {
#line 71 "private_builtin.opt"
                                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_340_340 == mercury__string__parse_util__V_211_211);
#line 74 "private_builtin.opt"
                                      if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
                                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                      else
#line 75 "private_builtin.opt"
                                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                    }
#line 84 "string.parse_util.m"
                                }
#line 84 "string.parse_util.m"
                              else
#line 84 "string.parse_util.m"
                                if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4898 "string.parse_util.c"
                                  *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                                else
#line 84 "string.parse_util.m"
                                  if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4904 "string.parse_util.c"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                                  else
#line 4908 "string.parse_util.c"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                  }
#line 84 "string.parse_util.m"
                else
#line 84 "string.parse_util.m"
                  if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 84 "string.parse_util.m"
                    {
#line 84 "string.parse_util.m"
                      MR_Char mercury__string__parse_util__V_341_341 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
#line 84 "string.parse_util.m"
                      MR_Integer mercury__string__parse_util__V_342_342 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));

#line 84 "string.parse_util.m"
                      if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4925 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                      else
#line 84 "string.parse_util.m"
                        if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4931 "string.parse_util.c"
                          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        else
#line 84 "string.parse_util.m"
                          if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4937 "string.parse_util.c"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                          else
#line 84 "string.parse_util.m"
                            if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4943 "string.parse_util.c"
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                            else
#line 84 "string.parse_util.m"
                              if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4949 "string.parse_util.c"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                              else
#line 84 "string.parse_util.m"
                                if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4955 "string.parse_util.c"
                                  *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                                else
#line 84 "string.parse_util.m"
                                  if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 84 "string.parse_util.m"
                                    {
#line 84 "string.parse_util.m"
                                      MR_Integer mercury__string__parse_util__V_137_137 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
                                      MR_Char mercury__string__parse_util__V_138_138 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 2)));
#line 84 "string.parse_util.m"
                                      MR_Word mercury__string__parse_util__V_139_139;

#line 66 "private_builtin.opt"
                                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_342_342 < mercury__string__parse_util__V_137_137);
#line 69 "private_builtin.opt"
                                      if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
                                        mercury__string__parse_util__V_139_139 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                      else
#line 74 "private_builtin.opt"
                                        {
#line 71 "private_builtin.opt"
                                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_342_342 == mercury__string__parse_util__V_137_137);
#line 74 "private_builtin.opt"
                                          if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
                                            mercury__string__parse_util__V_139_139 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                          else
#line 75 "private_builtin.opt"
                                            mercury__string__parse_util__V_139_139 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                        }
#line 4992 "string.parse_util.c"
                                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_139_139 == (MR_Integer) 0);
#line 84 "string.parse_util.m"
                                      mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
#line 84 "string.parse_util.m"
                                      if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                                        *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__V_139_139;
#line 84 "string.parse_util.m"
                                      else
#line 84 "string.parse_util.m"
                                        {
#line 84 "string.parse_util.m"
                                          MR_Integer mercury__string__parse_util__XI_7_378;
#line 84 "string.parse_util.m"
                                          MR_Integer mercury__string__parse_util__YI_8_379;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__V_341_341 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 5022 "string.parse_util.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__XI_7_378  = Int;
#line 66 "char.opt"
}
#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__V_138_138 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 5042 "string.parse_util.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__YI_8_379  = Int;
#line 66 "char.opt"
}
#line 84 "private_builtin.opt"
                                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__XI_7_378 < mercury__string__parse_util__YI_8_379);
#line 87 "private_builtin.opt"
                                          if (mercury__string__parse_util__succeeded)
#line 86 "private_builtin.opt"
                                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 87 "private_builtin.opt"
                                          else
#line 92 "private_builtin.opt"
                                            {
#line 89 "private_builtin.opt"
                                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__XI_7_378 == mercury__string__parse_util__YI_8_379);
#line 92 "private_builtin.opt"
                                              if (mercury__string__parse_util__succeeded)
#line 91 "private_builtin.opt"
                                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 92 "private_builtin.opt"
                                              else
#line 93 "private_builtin.opt"
                                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 92 "private_builtin.opt"
                                            }
#line 84 "string.parse_util.m"
                                        }
#line 84 "string.parse_util.m"
                                    }
#line 84 "string.parse_util.m"
                                  else
#line 84 "string.parse_util.m"
                                    if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5079 "string.parse_util.c"
                                      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                                    else
#line 5083 "string.parse_util.c"
                                      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    }
#line 84 "string.parse_util.m"
                  else
#line 84 "string.parse_util.m"
                    if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 84 "string.parse_util.m"
                      {
#line 84 "string.parse_util.m"
                        MR_Word mercury__string__parse_util__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
#line 84 "string.parse_util.m"
                        MR_Integer mercury__string__parse_util__V_346_346 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));

#line 84 "string.parse_util.m"
                        if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5100 "string.parse_util.c"
                          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        else
#line 84 "string.parse_util.m"
                          if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5106 "string.parse_util.c"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                          else
#line 84 "string.parse_util.m"
                            if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5112 "string.parse_util.c"
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                            else
#line 84 "string.parse_util.m"
                              if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 5118 "string.parse_util.c"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                              else
#line 84 "string.parse_util.m"
                                if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 5124 "string.parse_util.c"
                                  *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                                else
#line 84 "string.parse_util.m"
                                  if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5130 "string.parse_util.c"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                                  else
#line 84 "string.parse_util.m"
                                    if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5136 "string.parse_util.c"
                                      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                                    else
#line 84 "string.parse_util.m"
                                      if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 84 "string.parse_util.m"
                                        {
#line 84 "string.parse_util.m"
                                          MR_Integer mercury__string__parse_util__V_246_246 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
                                          MR_Word mercury__string__parse_util__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 2)));
#line 84 "string.parse_util.m"
                                          MR_Word mercury__string__parse_util__V_248_248;

#line 66 "private_builtin.opt"
                                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_346_346 < mercury__string__parse_util__V_246_246);
#line 69 "private_builtin.opt"
                                          if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
                                            mercury__string__parse_util__V_248_248 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                          else
#line 74 "private_builtin.opt"
                                            {
#line 71 "private_builtin.opt"
                                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_346_346 == mercury__string__parse_util__V_246_246);
#line 74 "private_builtin.opt"
                                              if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
                                                mercury__string__parse_util__V_248_248 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                              else
#line 75 "private_builtin.opt"
                                                mercury__string__parse_util__V_248_248 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                            }
#line 5173 "string.parse_util.c"
                                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_248_248 == (MR_Integer) 0);
#line 84 "string.parse_util.m"
                                          mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
#line 84 "string.parse_util.m"
                                          if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                                            *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__V_248_248;
#line 84 "string.parse_util.m"
                                          else
#line 84 "string.parse_util.m"
                                            {
#line 84 "string.parse_util.m"
                                              MR_Integer mercury__string__parse_util__V_354_354 = (MR_Integer) mercury__string__parse_util__V_345_345;
#line 84 "string.parse_util.m"
                                              MR_Integer mercury__string__parse_util__V_355_355 = (MR_Integer) mercury__string__parse_util__V_247_247;

#line 66 "private_builtin.opt"
                                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_354_354 < mercury__string__parse_util__V_355_355);
#line 69 "private_builtin.opt"
                                              if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
                                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                              else
#line 74 "private_builtin.opt"
                                                {
#line 71 "private_builtin.opt"
                                                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_354_354 == mercury__string__parse_util__V_355_355);
#line 74 "private_builtin.opt"
                                                  if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
                                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                  else
#line 75 "private_builtin.opt"
                                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                }
#line 84 "string.parse_util.m"
                                            }
#line 84 "string.parse_util.m"
                                        }
#line 84 "string.parse_util.m"
                                      else
#line 5218 "string.parse_util.c"
                                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                      }
#line 84 "string.parse_util.m"
                    else
#line 84 "string.parse_util.m"
                      {
#line 84 "string.parse_util.m"
                        MR_Word mercury__string__parse_util__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
#line 84 "string.parse_util.m"
                        MR_Integer mercury__string__parse_util__V_348_348 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));

#line 84 "string.parse_util.m"
                        if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5233 "string.parse_util.c"
                          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        else
#line 84 "string.parse_util.m"
                          if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5239 "string.parse_util.c"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                          else
#line 84 "string.parse_util.m"
                            if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5245 "string.parse_util.c"
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                            else
#line 84 "string.parse_util.m"
                              if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 5251 "string.parse_util.c"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                              else
#line 84 "string.parse_util.m"
                                if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 5257 "string.parse_util.c"
                                  *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                                else
#line 84 "string.parse_util.m"
                                  if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5263 "string.parse_util.c"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                                  else
#line 84 "string.parse_util.m"
                                    if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5269 "string.parse_util.c"
                                      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                                    else
#line 84 "string.parse_util.m"
                                      if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5275 "string.parse_util.c"
                                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                                      else
#line 84 "string.parse_util.m"
                                        {
#line 84 "string.parse_util.m"
                                          MR_Integer mercury__string__parse_util__V_177_177 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
                                          MR_Word mercury__string__parse_util__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 2)));
#line 84 "string.parse_util.m"
                                          MR_Word mercury__string__parse_util__V_179_179;

#line 66 "private_builtin.opt"
                                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_348_348 < mercury__string__parse_util__V_177_177);
#line 69 "private_builtin.opt"
                                          if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
                                            mercury__string__parse_util__V_179_179 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                          else
#line 74 "private_builtin.opt"
                                            {
#line 71 "private_builtin.opt"
                                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_348_348 == mercury__string__parse_util__V_177_177);
#line 74 "private_builtin.opt"
                                              if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
                                                mercury__string__parse_util__V_179_179 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                              else
#line 75 "private_builtin.opt"
                                                mercury__string__parse_util__V_179_179 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                            }
#line 5310 "string.parse_util.c"
                                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_179_179 == (MR_Integer) 0);
#line 84 "string.parse_util.m"
                                          mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
#line 84 "string.parse_util.m"
                                          if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                                            *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__V_179_179;
#line 84 "string.parse_util.m"
                                          else
#line 84 "string.parse_util.m"
                                            {
#line 84 "string.parse_util.m"
                                              MR_Integer mercury__string__parse_util__V_356_356 = (MR_Integer) mercury__string__parse_util__V_347_347;
#line 84 "string.parse_util.m"
                                              MR_Integer mercury__string__parse_util__V_357_357 = (MR_Integer) mercury__string__parse_util__V_178_178;

#line 66 "private_builtin.opt"
                                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_356_356 < mercury__string__parse_util__V_357_357);
#line 69 "private_builtin.opt"
                                              if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
                                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                              else
#line 74 "private_builtin.opt"
                                                {
#line 71 "private_builtin.opt"
                                                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_356_356 == mercury__string__parse_util__V_357_357);
#line 74 "private_builtin.opt"
                                                  if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
                                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                  else
#line 75 "private_builtin.opt"
                                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                }
#line 84 "string.parse_util.m"
                                            }
#line 84 "string.parse_util.m"
                                        }
#line 84 "string.parse_util.m"
                      }
#line 84 "string.parse_util.m"
  }
#line 84 "string.parse_util.m"
}

#line 84 "string.parse_util.m"
MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_error_0_0(
#line 84 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__1_1,
#line 84 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2)
#line 84 "string.parse_util.m"
{
#line 84 "string.parse_util.m"
  {
#line 84 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 84 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CastX_37 = (MR_Integer) mercury__string__parse_util__HeadVar__1_1;
#line 84 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CastY_38 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;

#line 84 "string.parse_util.m"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastX_37 == mercury__string__parse_util__CastY_38);
#line 84 "string.parse_util.m"
    if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
      mercury__string__parse_util__succeeded = MR_TRUE;
#line 84 "string.parse_util.m"
    else
#line 84 "string.parse_util.m"
      if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 84 "string.parse_util.m"
        {
#line 84 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)));
#line 84 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__V_5_5;
#line 84 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__V_6_6;

#line 84 "string.parse_util.m"
          mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 84 "string.parse_util.m"
          if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
            {
#line 84 "string.parse_util.m"
              mercury__string__parse_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));
#line 84 "string.parse_util.m"
              mercury__string__parse_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
#line 5409 "string.parse_util.c"
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_3_3 == mercury__string__parse_util__V_5_5);
#line 84 "string.parse_util.m"
              if (mercury__string__parse_util__succeeded)
#line 5413 "string.parse_util.c"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_4_4 == mercury__string__parse_util__V_6_6);
#line 84 "string.parse_util.m"
            }
#line 84 "string.parse_util.m"
        }
#line 84 "string.parse_util.m"
      else
#line 84 "string.parse_util.m"
        if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 84 "string.parse_util.m"
          {
#line 84 "string.parse_util.m"
            MR_Integer mercury__string__parse_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)));
#line 84 "string.parse_util.m"
            MR_Char mercury__string__parse_util__V_8_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
            MR_Integer mercury__string__parse_util__V_9_9;
#line 84 "string.parse_util.m"
            MR_Char mercury__string__parse_util__V_10_10;

#line 84 "string.parse_util.m"
            mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 84 "string.parse_util.m"
            if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
              {
#line 84 "string.parse_util.m"
                mercury__string__parse_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));
#line 84 "string.parse_util.m"
                mercury__string__parse_util__V_10_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
#line 5444 "string.parse_util.c"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_7_7 == mercury__string__parse_util__V_9_9);
#line 84 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 5448 "string.parse_util.c"
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_8_8 == mercury__string__parse_util__V_10_10);
#line 84 "string.parse_util.m"
              }
#line 84 "string.parse_util.m"
          }
#line 84 "string.parse_util.m"
        else
#line 84 "string.parse_util.m"
          if (((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 84 "string.parse_util.m"
            {
#line 84 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)));
#line 84 "string.parse_util.m"
              MR_Char mercury__string__parse_util__V_12_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
              MR_Word mercury__string__parse_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 2)));
#line 84 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__V_14_14;
#line 84 "string.parse_util.m"
              MR_Char mercury__string__parse_util__V_15_15;
#line 84 "string.parse_util.m"
              MR_Word mercury__string__parse_util__V_16_16;

#line 84 "string.parse_util.m"
              mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 84 "string.parse_util.m"
              if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                {
#line 84 "string.parse_util.m"
                  mercury__string__parse_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));
#line 84 "string.parse_util.m"
                  mercury__string__parse_util__V_15_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
                  mercury__string__parse_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
#line 5485 "string.parse_util.c"
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_11_11 == mercury__string__parse_util__V_14_14);
#line 84 "string.parse_util.m"
                  if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                    {
#line 5491 "string.parse_util.c"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_12_12 == mercury__string__parse_util__V_15_15);
#line 84 "string.parse_util.m"
                      if (mercury__string__parse_util__succeeded)
#line 5495 "string.parse_util.c"
                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_13_13 == mercury__string__parse_util__V_16_16);
#line 84 "string.parse_util.m"
                    }
#line 84 "string.parse_util.m"
                }
#line 84 "string.parse_util.m"
            }
#line 84 "string.parse_util.m"
          else
#line 84 "string.parse_util.m"
            if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 84 "string.parse_util.m"
              {
#line 84 "string.parse_util.m"
                MR_Integer mercury__string__parse_util__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
                MR_Integer mercury__string__parse_util__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 2)));
#line 84 "string.parse_util.m"
                MR_Integer mercury__string__parse_util__V_35_35;
#line 84 "string.parse_util.m"
                MR_Integer mercury__string__parse_util__V_36_36;

#line 84 "string.parse_util.m"
                mercury__string__parse_util__succeeded = ((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 84 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                  {
#line 84 "string.parse_util.m"
                    mercury__string__parse_util__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
                    mercury__string__parse_util__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
#line 5528 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_33_33 == mercury__string__parse_util__V_35_35);
#line 84 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 5532 "string.parse_util.c"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_34_34 == mercury__string__parse_util__V_36_36);
#line 84 "string.parse_util.m"
                  }
#line 84 "string.parse_util.m"
              }
#line 84 "string.parse_util.m"
            else
#line 84 "string.parse_util.m"
              if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 84 "string.parse_util.m"
                {
#line 84 "string.parse_util.m"
                  MR_Integer mercury__string__parse_util__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
                  MR_Integer mercury__string__parse_util__V_32_32;

#line 84 "string.parse_util.m"
                  mercury__string__parse_util__succeeded = ((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 84 "string.parse_util.m"
                  if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                    {
#line 84 "string.parse_util.m"
                      mercury__string__parse_util__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
#line 5557 "string.parse_util.c"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_31_31 == mercury__string__parse_util__V_32_32);
#line 84 "string.parse_util.m"
                    }
#line 84 "string.parse_util.m"
                }
#line 84 "string.parse_util.m"
              else
#line 84 "string.parse_util.m"
                if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 84 "string.parse_util.m"
                  {
#line 84 "string.parse_util.m"
                    MR_Integer mercury__string__parse_util__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
                    MR_Integer mercury__string__parse_util__V_26_26;

#line 84 "string.parse_util.m"
                    mercury__string__parse_util__succeeded = ((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 84 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                      {
#line 84 "string.parse_util.m"
                        mercury__string__parse_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
#line 5582 "string.parse_util.c"
                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_25_25 == mercury__string__parse_util__V_26_26);
#line 84 "string.parse_util.m"
                      }
#line 84 "string.parse_util.m"
                  }
#line 84 "string.parse_util.m"
                else
#line 84 "string.parse_util.m"
                  if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 84 "string.parse_util.m"
                    {
#line 84 "string.parse_util.m"
                      MR_Integer mercury__string__parse_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
                      MR_Char mercury__string__parse_util__V_18_18 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 2)));
#line 84 "string.parse_util.m"
                      MR_Integer mercury__string__parse_util__V_19_19;
#line 84 "string.parse_util.m"
                      MR_Char mercury__string__parse_util__V_20_20;

#line 84 "string.parse_util.m"
                      mercury__string__parse_util__succeeded = ((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 84 "string.parse_util.m"
                      if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                        {
#line 84 "string.parse_util.m"
                          mercury__string__parse_util__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
                          mercury__string__parse_util__V_20_20 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
#line 5613 "string.parse_util.c"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_17_17 == mercury__string__parse_util__V_19_19);
#line 84 "string.parse_util.m"
                          if (mercury__string__parse_util__succeeded)
#line 5617 "string.parse_util.c"
                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_18_18 == mercury__string__parse_util__V_20_20);
#line 84 "string.parse_util.m"
                        }
#line 84 "string.parse_util.m"
                    }
#line 84 "string.parse_util.m"
                  else
#line 84 "string.parse_util.m"
                    if (((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 84 "string.parse_util.m"
                      {
#line 84 "string.parse_util.m"
                        MR_Integer mercury__string__parse_util__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
                        MR_Word mercury__string__parse_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 2)));
#line 84 "string.parse_util.m"
                        MR_Integer mercury__string__parse_util__V_29_29;
#line 84 "string.parse_util.m"
                        MR_Word mercury__string__parse_util__V_30_30;

#line 84 "string.parse_util.m"
                        mercury__string__parse_util__succeeded = ((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 84 "string.parse_util.m"
                        if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                          {
#line 84 "string.parse_util.m"
                            mercury__string__parse_util__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
                            mercury__string__parse_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
#line 5648 "string.parse_util.c"
                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_27_27 == mercury__string__parse_util__V_29_29);
#line 84 "string.parse_util.m"
                            if (mercury__string__parse_util__succeeded)
#line 5652 "string.parse_util.c"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_28_28 == mercury__string__parse_util__V_30_30);
#line 84 "string.parse_util.m"
                          }
#line 84 "string.parse_util.m"
                      }
#line 84 "string.parse_util.m"
                    else
#line 84 "string.parse_util.m"
                      {
#line 84 "string.parse_util.m"
                        MR_Integer mercury__string__parse_util__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
                        MR_Word mercury__string__parse_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 2)));
#line 84 "string.parse_util.m"
                        MR_Integer mercury__string__parse_util__V_23_23;
#line 84 "string.parse_util.m"
                        MR_Word mercury__string__parse_util__V_24_24;

#line 84 "string.parse_util.m"
                        mercury__string__parse_util__succeeded = ((((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 84 "string.parse_util.m"
                        if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                          {
#line 84 "string.parse_util.m"
                            mercury__string__parse_util__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
                            mercury__string__parse_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
#line 5681 "string.parse_util.c"
                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_21_21 == mercury__string__parse_util__V_23_23);
#line 84 "string.parse_util.m"
                            if (mercury__string__parse_util__succeeded)
#line 5685 "string.parse_util.c"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_22_22 == mercury__string__parse_util__V_24_24);
#line 84 "string.parse_util.m"
                          }
#line 84 "string.parse_util.m"
                      }
#line 84 "string.parse_util.m"
    return mercury__string__parse_util__succeeded;
#line 84 "string.parse_util.m"
  }
#line 84 "string.parse_util.m"
}

#line 78 "string.parse_util.m"
void MR_CALL 
mercury__string__parse_util____Compare____poly_kind_0_0(
#line 78 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
#line 78 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2,
#line 78 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__3_3)
#line 78 "string.parse_util.m"
{
#line 78 "string.parse_util.m"
  {
#line 78 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 78 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__Cast_HeadVar1_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
#line 78 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__Cast_HeadVar2_5 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 68 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 73 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 78 "string.parse_util.m"
  }
#line 78 "string.parse_util.m"
}

#line 78 "string.parse_util.m"
MR_bool MR_CALL 
mercury__string__parse_util____Unify____poly_kind_0_0(
#line 78 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_1,
#line 78 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2)
#line 78 "string.parse_util.m"
{
#line 5754 "string.parse_util.c"
  {
#line 5756 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 5759 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 5761 "string.parse_util.c"
  }
#line 78 "string.parse_util.m"
}

#line 126 "string.parse_util.m"
void MR_CALL 
mercury__string__parse_util____Compare____gather_ended_by_0_0(
#line 126 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__HeadVar__1_1,
#line 126 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2,
#line 126 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__3_3)
#line 126 "string.parse_util.m"
{
#line 126 "string.parse_util.m"
  {
#line 126 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 126 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CastX_8 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;
#line 126 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CastY_9 = (MR_Integer) mercury__string__parse_util__HeadVar__3_3;

#line 126 "string.parse_util.m"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastX_8 == mercury__string__parse_util__CastY_9);
#line 126 "string.parse_util.m"
    if (mercury__string__parse_util__succeeded)
#line 5790 "string.parse_util.c"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 126 "string.parse_util.m"
    else
#line 126 "string.parse_util.m"
      if ((mercury__string__parse_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 126 "string.parse_util.m"
        if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 126 "string.parse_util.m"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 126 "string.parse_util.m"
        else
#line 5802 "string.parse_util.c"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 126 "string.parse_util.m"
      else
#line 126 "string.parse_util.m"
        {
#line 126 "string.parse_util.m"
          MR_Word mercury__string__parse_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

#line 126 "string.parse_util.m"
          if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5813 "string.parse_util.c"
            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 126 "string.parse_util.m"
          else
#line 126 "string.parse_util.m"
            {
#line 126 "string.parse_util.m"
              MR_Word mercury__string__parse_util__TypeInfo_10_10 = (MR_Word) &mercury__string__parse_util_scalar_common_1[0];
#line 126 "string.parse_util.m"
              MR_Word mercury__string__parse_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)));

#line 126 "string.parse_util.m"
              {
#line 126 "string.parse_util.m"
                mercury__builtin__compare_3_p_0(mercury__string__parse_util__TypeInfo_10_10, mercury__string__parse_util__HeadVar__1_1, ((MR_Box) (mercury__string__parse_util__V_11_11)), ((MR_Box) (mercury__string__parse_util__V_7_7)));
#line 126 "string.parse_util.m"
                return;
              }
#line 126 "string.parse_util.m"
            }
#line 126 "string.parse_util.m"
        }
#line 126 "string.parse_util.m"
  }
#line 126 "string.parse_util.m"
}

#line 126 "string.parse_util.m"
MR_bool MR_CALL 
mercury__string__parse_util____Unify____gather_ended_by_0_0(
#line 126 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__1_1,
#line 126 "string.parse_util.m"
  MR_Word mercury__string__parse_util__HeadVar__2_2)
#line 126 "string.parse_util.m"
{
#line 126 "string.parse_util.m"
  {
#line 126 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 126 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CastX_7 = (MR_Integer) mercury__string__parse_util__HeadVar__1_1;
#line 126 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CastY_8 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;

#line 126 "string.parse_util.m"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastX_7 == mercury__string__parse_util__CastY_8);
#line 126 "string.parse_util.m"
    if (mercury__string__parse_util__succeeded)
#line 126 "string.parse_util.m"
      mercury__string__parse_util__succeeded = MR_TRUE;
#line 126 "string.parse_util.m"
    else
#line 126 "string.parse_util.m"
      if ((mercury__string__parse_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 126 "string.parse_util.m"
        {
#line 126 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__CastX_3 = (MR_Integer) mercury__string__parse_util__HeadVar__1_1;
#line 126 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__CastY_4 = (MR_Integer) mercury__string__parse_util__HeadVar__2_2;

#line 126 "string.parse_util.m"
          mercury__string__parse_util__succeeded = (mercury__string__parse_util__CastY_4 == mercury__string__parse_util__CastX_3);
#line 126 "string.parse_util.m"
        }
#line 126 "string.parse_util.m"
      else
#line 126 "string.parse_util.m"
        {
#line 126 "string.parse_util.m"
          MR_Word mercury__string__parse_util__TypeInfo_9_9;
#line 126 "string.parse_util.m"
          MR_Word mercury__string__parse_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)));
#line 126 "string.parse_util.m"
          MR_Word mercury__string__parse_util__V_6_6;

#line 126 "string.parse_util.m"
          mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 126 "string.parse_util.m"
          if (mercury__string__parse_util__succeeded)
#line 126 "string.parse_util.m"
            {
#line 126 "string.parse_util.m"
              mercury__string__parse_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5898 "string.parse_util.c"
              mercury__string__parse_util__TypeInfo_9_9 = (MR_Word) &mercury__string__parse_util_scalar_common_1[0];
#line 5900 "string.parse_util.c"
              {
#line 5902 "string.parse_util.c"
                return mercury__string__parse_util__succeeded = mercury__builtin__unify_2_p_0(mercury__string__parse_util__TypeInfo_9_9, ((MR_Box) (mercury__string__parse_util__V_5_5)), ((MR_Box) (mercury__string__parse_util__V_6_6)));
              }
#line 126 "string.parse_util.m"
            }
#line 126 "string.parse_util.m"
        }
#line 126 "string.parse_util.m"
    return mercury__string__parse_util__succeeded;
#line 126 "string.parse_util.m"
  }
#line 126 "string.parse_util.m"
}

#line 337 "string.parse_util.m"
void MR_CALL 
mercury__string__parse_util__get_number_prefix_loop_4_p_0(
#line 337 "string.parse_util.m"
  MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_0_11,
#line 337 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__STATE_VARIABLE_Chars_12,
#line 337 "string.parse_util.m"
  MR_Integer mercury__string__parse_util__N0_6,
#line 337 "string.parse_util.m"
  MR_Integer * mercury__string__parse_util__N_7)
#line 337 "string.parse_util.m"
{
#line 347 "string.parse_util.m"
  while (MR_TRUE)
#line 347 "string.parse_util.m"
    {
#line 347 "string.parse_util.m"
      /* tailcall optimized into a loop */
#line 347 "string.parse_util.m"
      {
#line 347 "string.parse_util.m"
        MR_bool mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__STATE_VARIABLE_Chars_0_11)) == (MR_mktag((MR_Integer) 1)));
#line 347 "string.parse_util.m"
        MR_Integer mercury__string__parse_util__CharValue_9;
#line 347 "string.parse_util.m"
        MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_13_13;
#line 342 "string.parse_util.m"
        MR_Char mercury__string__parse_util__Char_8;

#line 342 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 342 "string.parse_util.m"
          {
#line 342 "string.parse_util.m"
            mercury__string__parse_util__Char_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_11, (MR_Integer) 0)));
#line 342 "string.parse_util.m"
            mercury__string__parse_util__STATE_VARIABLE_Chars_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_11, (MR_Integer) 1)));
#line 343 "string.parse_util.m"
            {
#line 343 "string.parse_util.m"
              mercury__string__parse_util__succeeded = mercury__char__decimal_digit_to_int_2_p_0(mercury__string__parse_util__Char_8, &mercury__string__parse_util__CharValue_9);
            }
#line 342 "string.parse_util.m"
          }
#line 347 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 345 "string.parse_util.m"
          {
#line 345 "string.parse_util.m"
            MR_Integer mercury__string__parse_util__N1_10;
#line 345 "string.parse_util.m"
            MR_Integer mercury__string__parse_util__V_14_14 = (mercury__string__parse_util__N0_6 * (MR_Integer) 10);

#line 345 "string.parse_util.m"
            mercury__string__parse_util__N1_10 = (mercury__string__parse_util__V_14_14 + mercury__string__parse_util__CharValue_9);
#line 346 "string.parse_util.m"
            /* direct tailcall eliminated */
#line 346 "string.parse_util.m"
            {
#line 346 "string.parse_util.m"
              MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_0__tmp_copy_11 = mercury__string__parse_util__STATE_VARIABLE_Chars_13_13;
#line 346 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__N0__tmp_copy_6 = mercury__string__parse_util__N1_10;

#line 346 "string.parse_util.m"
              mercury__string__parse_util__N0_6 = mercury__string__parse_util__N0__tmp_copy_6;
#line 346 "string.parse_util.m"
              mercury__string__parse_util__STATE_VARIABLE_Chars_0_11 = mercury__string__parse_util__STATE_VARIABLE_Chars_0__tmp_copy_11;
#line 346 "string.parse_util.m"
            }
#line 346 "string.parse_util.m"
            continue;
#line 345 "string.parse_util.m"
          }
#line 347 "string.parse_util.m"
        else
#line 348 "string.parse_util.m"
          {
#line 348 "string.parse_util.m"
            *mercury__string__parse_util__N_7 = mercury__string__parse_util__N0_6;
#line 348 "string.parse_util.m"
            *mercury__string__parse_util__STATE_VARIABLE_Chars_12 = mercury__string__parse_util__STATE_VARIABLE_Chars_0_11;
#line 348 "string.parse_util.m"
          }
#line 347 "string.parse_util.m"
      }
#line 347 "string.parse_util.m"
      break;
#line 347 "string.parse_util.m"
    }
#line 337 "string.parse_util.m"
}

#line 279 "string.parse_util.m"
static MR_String MR_CALL 
mercury__string__parse_util__specifier_char_1_f_0(
#line 279 "string.parse_util.m"
  MR_Char mercury__string__parse_util__SpecChar_3)
#line 279 "string.parse_util.m"
{
#line 281 "string.parse_util.m"
  {
#line 281 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 281 "string.parse_util.m"
    MR_String mercury__string__parse_util__HeadVar__2_2;
#line 281 "string.parse_util.m"
    MR_String mercury__string__parse_util__V_5_5;
#line 281 "string.parse_util.m"
    MR_String mercury__string__parse_util__V_6_6;
#line 281 "string.parse_util.m"
    MR_Word mercury__string__parse_util__V_5_12;
#line 281 "string.parse_util.m"
    MR_Word mercury__string__parse_util__V_6_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 696 "string.opt"
    {
#line 696 "string.opt"
      mercury__string__parse_util__V_5_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "string.opt"
      MR_hl_field(MR_mktag(1), mercury__string__parse_util__V_5_12, 0) = ((MR_Box) (MR_Word) (mercury__string__parse_util__SpecChar_3));
#line 696 "string.opt"
      MR_hl_field(MR_mktag(1), mercury__string__parse_util__V_5_12, 1) = ((MR_Box) (mercury__string__parse_util__V_6_13));
#line 696 "string.opt"
    }
#line 698 "string.opt"
    {
#line 698 "string.opt"
      mercury__string__to_char_list_2_p_1(&mercury__string__parse_util__V_6_6, mercury__string__parse_util__V_5_12);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2(mercury__string__parse_util__V_6_6, (MR_String) "\'", &mercury__string__parse_util__V_5_5);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2((MR_String) "specifier character \140", mercury__string__parse_util__V_5_5, &mercury__string__parse_util__HeadVar__2_2);
    }
#line 281 "string.parse_util.m"
    return mercury__string__parse_util__HeadVar__2_2;
#line 281 "string.parse_util.m"
  }
#line 279 "string.parse_util.m"
}

#line 252 "string.parse_util.m"
static MR_String MR_CALL 
mercury__string__parse_util__nth_1_f_0(
#line 252 "string.parse_util.m"
  MR_Integer mercury__string__parse_util__N_3)
#line 252 "string.parse_util.m"
{
#line 257 "string.parse_util.m"
  {
#line 257 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 1);
#line 257 "string.parse_util.m"
    MR_String mercury__string__parse_util__NStr_4;

#line 257 "string.parse_util.m"
    if (mercury__string__parse_util__succeeded)
#line 256 "string.parse_util.m"
      mercury__string__parse_util__NStr_4 = (MR_String) "first";
#line 257 "string.parse_util.m"
    else
#line 259 "string.parse_util.m"
      {
#line 257 "string.parse_util.m"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 2);
#line 259 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 258 "string.parse_util.m"
          mercury__string__parse_util__NStr_4 = (MR_String) "second";
#line 259 "string.parse_util.m"
        else
#line 261 "string.parse_util.m"
          {
#line 259 "string.parse_util.m"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 3);
#line 261 "string.parse_util.m"
            if (mercury__string__parse_util__succeeded)
#line 260 "string.parse_util.m"
              mercury__string__parse_util__NStr_4 = (MR_String) "third";
#line 261 "string.parse_util.m"
            else
#line 263 "string.parse_util.m"
              {
#line 261 "string.parse_util.m"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 4);
#line 263 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 262 "string.parse_util.m"
                  mercury__string__parse_util__NStr_4 = (MR_String) "fourth";
#line 263 "string.parse_util.m"
                else
#line 265 "string.parse_util.m"
                  {
#line 263 "string.parse_util.m"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 5);
#line 265 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 264 "string.parse_util.m"
                      mercury__string__parse_util__NStr_4 = (MR_String) "fifth";
#line 265 "string.parse_util.m"
                    else
#line 267 "string.parse_util.m"
                      {
#line 265 "string.parse_util.m"
                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 6);
#line 267 "string.parse_util.m"
                        if (mercury__string__parse_util__succeeded)
#line 266 "string.parse_util.m"
                          mercury__string__parse_util__NStr_4 = (MR_String) "sixth";
#line 267 "string.parse_util.m"
                        else
#line 269 "string.parse_util.m"
                          {
#line 267 "string.parse_util.m"
                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 7);
#line 269 "string.parse_util.m"
                            if (mercury__string__parse_util__succeeded)
#line 268 "string.parse_util.m"
                              mercury__string__parse_util__NStr_4 = (MR_String) "seventh";
#line 269 "string.parse_util.m"
                            else
#line 271 "string.parse_util.m"
                              {
#line 269 "string.parse_util.m"
                                mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 8);
#line 271 "string.parse_util.m"
                                if (mercury__string__parse_util__succeeded)
#line 270 "string.parse_util.m"
                                  mercury__string__parse_util__NStr_4 = (MR_String) "eighth";
#line 271 "string.parse_util.m"
                                else
#line 273 "string.parse_util.m"
                                  {
#line 271 "string.parse_util.m"
                                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 9);
#line 273 "string.parse_util.m"
                                    if (mercury__string__parse_util__succeeded)
#line 272 "string.parse_util.m"
                                      mercury__string__parse_util__NStr_4 = (MR_String) "ninth";
#line 273 "string.parse_util.m"
                                    else
#line 275 "string.parse_util.m"
                                      {
#line 273 "string.parse_util.m"
                                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 10);
#line 275 "string.parse_util.m"
                                        if (mercury__string__parse_util__succeeded)
#line 274 "string.parse_util.m"
                                          mercury__string__parse_util__NStr_4 = (MR_String) "tenth";
#line 275 "string.parse_util.m"
                                        else
#line 276 "string.parse_util.m"
                                          {
#line 276 "string.parse_util.m"
                                            MR_String mercury__string__parse_util__V_5_5;

#line 705 "string.opt"
                                            {
#line 705 "string.opt"
                                              mercury__string__int_to_base_string_3_p_0(mercury__string__parse_util__N_3, (MR_Integer) 10, &mercury__string__parse_util__V_5_5);
                                            }
#line 406 "string.opt"
                                            {
#line 406 "string.opt"
                                              mercury__string__append_3_p_2(mercury__string__parse_util__V_5_5, (MR_String) "th", &mercury__string__parse_util__NStr_4);
                                            }
#line 276 "string.parse_util.m"
                                          }
#line 275 "string.parse_util.m"
                                      }
#line 273 "string.parse_util.m"
                                  }
#line 271 "string.parse_util.m"
                              }
#line 269 "string.parse_util.m"
                          }
#line 267 "string.parse_util.m"
                      }
#line 265 "string.parse_util.m"
                  }
#line 263 "string.parse_util.m"
              }
#line 261 "string.parse_util.m"
          }
#line 259 "string.parse_util.m"
      }
#line 257 "string.parse_util.m"
    return mercury__string__parse_util__NStr_4;
#line 257 "string.parse_util.m"
  }
#line 252 "string.parse_util.m"
}

#line 247 "string.parse_util.m"
static MR_String MR_CALL 
mercury__string__parse_util__nth_specifier_1_f_0(
#line 247 "string.parse_util.m"
  MR_Integer mercury__string__parse_util__SpecNum_3)
#line 247 "string.parse_util.m"
{
#line 249 "string.parse_util.m"
  {
#line 249 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 1);
#line 249 "string.parse_util.m"
    MR_String mercury__string__parse_util__HeadVar__2_2;
#line 249 "string.parse_util.m"
    MR_String mercury__string__parse_util__V_5_5;
#line 249 "string.parse_util.m"
    MR_String mercury__string__parse_util__V_6_6;

#line 257 "string.parse_util.m"
    if (mercury__string__parse_util__succeeded)
#line 256 "string.parse_util.m"
      mercury__string__parse_util__V_6_6 = (MR_String) "first";
#line 257 "string.parse_util.m"
    else
#line 259 "string.parse_util.m"
      {
#line 257 "string.parse_util.m"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 2);
#line 259 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 258 "string.parse_util.m"
          mercury__string__parse_util__V_6_6 = (MR_String) "second";
#line 259 "string.parse_util.m"
        else
#line 261 "string.parse_util.m"
          {
#line 259 "string.parse_util.m"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 3);
#line 261 "string.parse_util.m"
            if (mercury__string__parse_util__succeeded)
#line 260 "string.parse_util.m"
              mercury__string__parse_util__V_6_6 = (MR_String) "third";
#line 261 "string.parse_util.m"
            else
#line 263 "string.parse_util.m"
              {
#line 261 "string.parse_util.m"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 4);
#line 263 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 262 "string.parse_util.m"
                  mercury__string__parse_util__V_6_6 = (MR_String) "fourth";
#line 263 "string.parse_util.m"
                else
#line 265 "string.parse_util.m"
                  {
#line 263 "string.parse_util.m"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 5);
#line 265 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 264 "string.parse_util.m"
                      mercury__string__parse_util__V_6_6 = (MR_String) "fifth";
#line 265 "string.parse_util.m"
                    else
#line 267 "string.parse_util.m"
                      {
#line 265 "string.parse_util.m"
                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 6);
#line 267 "string.parse_util.m"
                        if (mercury__string__parse_util__succeeded)
#line 266 "string.parse_util.m"
                          mercury__string__parse_util__V_6_6 = (MR_String) "sixth";
#line 267 "string.parse_util.m"
                        else
#line 269 "string.parse_util.m"
                          {
#line 267 "string.parse_util.m"
                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 7);
#line 269 "string.parse_util.m"
                            if (mercury__string__parse_util__succeeded)
#line 268 "string.parse_util.m"
                              mercury__string__parse_util__V_6_6 = (MR_String) "seventh";
#line 269 "string.parse_util.m"
                            else
#line 271 "string.parse_util.m"
                              {
#line 269 "string.parse_util.m"
                                mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 8);
#line 271 "string.parse_util.m"
                                if (mercury__string__parse_util__succeeded)
#line 270 "string.parse_util.m"
                                  mercury__string__parse_util__V_6_6 = (MR_String) "eighth";
#line 271 "string.parse_util.m"
                                else
#line 273 "string.parse_util.m"
                                  {
#line 271 "string.parse_util.m"
                                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 9);
#line 273 "string.parse_util.m"
                                    if (mercury__string__parse_util__succeeded)
#line 272 "string.parse_util.m"
                                      mercury__string__parse_util__V_6_6 = (MR_String) "ninth";
#line 273 "string.parse_util.m"
                                    else
#line 275 "string.parse_util.m"
                                      {
#line 273 "string.parse_util.m"
                                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 10);
#line 275 "string.parse_util.m"
                                        if (mercury__string__parse_util__succeeded)
#line 274 "string.parse_util.m"
                                          mercury__string__parse_util__V_6_6 = (MR_String) "tenth";
#line 275 "string.parse_util.m"
                                        else
#line 276 "string.parse_util.m"
                                          {
#line 276 "string.parse_util.m"
                                            MR_String mercury__string__parse_util__V_10_10;

#line 705 "string.opt"
                                            {
#line 705 "string.opt"
                                              mercury__string__int_to_base_string_3_p_0(mercury__string__parse_util__SpecNum_3, (MR_Integer) 10, &mercury__string__parse_util__V_10_10);
                                            }
#line 406 "string.opt"
                                            {
#line 406 "string.opt"
                                              mercury__string__append_3_p_2(mercury__string__parse_util__V_10_10, (MR_String) "th", &mercury__string__parse_util__V_6_6);
                                            }
#line 276 "string.parse_util.m"
                                          }
#line 275 "string.parse_util.m"
                                      }
#line 273 "string.parse_util.m"
                                  }
#line 271 "string.parse_util.m"
                              }
#line 269 "string.parse_util.m"
                          }
#line 267 "string.parse_util.m"
                      }
#line 265 "string.parse_util.m"
                  }
#line 263 "string.parse_util.m"
              }
#line 261 "string.parse_util.m"
          }
#line 259 "string.parse_util.m"
      }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2(mercury__string__parse_util__V_6_6, (MR_String) " conversion specifier", &mercury__string__parse_util__V_5_5);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2((MR_String) "The ", mercury__string__parse_util__V_5_5, &mercury__string__parse_util__HeadVar__2_2);
    }
#line 249 "string.parse_util.m"
    return mercury__string__parse_util__HeadVar__2_2;
#line 249 "string.parse_util.m"
  }
#line 247 "string.parse_util.m"
}

#line 163 "string.parse_util.m"
MR_bool MR_CALL 
mercury__string__parse_util__get_nonzero_number_prefix_3_p_0(
#line 163 "string.parse_util.m"
  MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_0_8,
#line 163 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__STATE_VARIABLE_Chars_9,
#line 163 "string.parse_util.m"
  MR_Integer * mercury__string__parse_util__N_5)
#line 163 "string.parse_util.m"
{
#line 331 "string.parse_util.m"
  {
#line 331 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__STATE_VARIABLE_Chars_0_8)) == (MR_mktag((MR_Integer) 1)));
#line 331 "string.parse_util.m"
    MR_Char mercury__string__parse_util__Char_6;
#line 331 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CharValue_7;
#line 331 "string.parse_util.m"
    MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_10_10;

#line 332 "string.parse_util.m"
    if (mercury__string__parse_util__succeeded)
#line 332 "string.parse_util.m"
      {
#line 332 "string.parse_util.m"
        mercury__string__parse_util__Char_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_8, (MR_Integer) 0)));
#line 332 "string.parse_util.m"
        mercury__string__parse_util__STATE_VARIABLE_Chars_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_8, (MR_Integer) 1)));
#line 333 "string.parse_util.m"
        {
#line 333 "string.parse_util.m"
          mercury__string__parse_util__succeeded = mercury__char__decimal_digit_to_int_2_p_0(mercury__string__parse_util__Char_6, &mercury__string__parse_util__CharValue_7);
        }
#line 331 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 331 "string.parse_util.m"
          {
#line 334 "string.parse_util.m"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__Char_6 == (MR_Char) 48);
#line 334 "string.parse_util.m"
            mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
#line 331 "string.parse_util.m"
            if (mercury__string__parse_util__succeeded)
#line 331 "string.parse_util.m"
              {
#line 335 "string.parse_util.m"
                {
#line 335 "string.parse_util.m"
                  mercury__string__parse_util__get_number_prefix_loop_4_p_0(mercury__string__parse_util__STATE_VARIABLE_Chars_10_10, mercury__string__parse_util__STATE_VARIABLE_Chars_9, mercury__string__parse_util__CharValue_7, mercury__string__parse_util__N_5);
                }
#line 335 "string.parse_util.m"
                mercury__string__parse_util__succeeded = MR_TRUE;
#line 331 "string.parse_util.m"
              }
#line 331 "string.parse_util.m"
          }
#line 332 "string.parse_util.m"
      }
#line 331 "string.parse_util.m"
    return mercury__string__parse_util__succeeded;
#line 331 "string.parse_util.m"
  }
#line 163 "string.parse_util.m"
}

#line 153 "string.parse_util.m"
void MR_CALL 
mercury__string__parse_util__get_number_prefix_3_p_0(
#line 153 "string.parse_util.m"
  MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_0_6,
#line 153 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__STATE_VARIABLE_Chars_7,
#line 153 "string.parse_util.m"
  MR_Integer * mercury__string__parse_util__N_5)
#line 153 "string.parse_util.m"
{
#line 328 "string.parse_util.m"
  {
#line 328 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;

#line 329 "string.parse_util.m"
    {
#line 329 "string.parse_util.m"
      mercury__string__parse_util__get_number_prefix_loop_4_p_0(mercury__string__parse_util__STATE_VARIABLE_Chars_0_6, mercury__string__parse_util__STATE_VARIABLE_Chars_7, (MR_Integer) 0, mercury__string__parse_util__N_5);
#line 329 "string.parse_util.m"
      return;
    }
#line 328 "string.parse_util.m"
  }
#line 153 "string.parse_util.m"
}

#line 143 "string.parse_util.m"
void MR_CALL 
mercury__string__parse_util__gather_flag_chars_4_p_0(
#line 143 "string.parse_util.m"
  MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_0_8,
#line 143 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__STATE_VARIABLE_Chars_9,
#line 143 "string.parse_util.m"
  MR_Word mercury__string__parse_util__STATE_VARIABLE_Flags_0_10,
#line 143 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__STATE_VARIABLE_Flags_11)
#line 143 "string.parse_util.m"
{
#line 324 "string.parse_util.m"
  while (MR_TRUE)
#line 324 "string.parse_util.m"
    {
#line 324 "string.parse_util.m"
      /* tailcall optimized into a loop */
#line 324 "string.parse_util.m"
      {
#line 324 "string.parse_util.m"
        MR_bool mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__STATE_VARIABLE_Chars_0_8)) == (MR_mktag((MR_Integer) 1)));
#line 324 "string.parse_util.m"
        MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_12_12;
#line 324 "string.parse_util.m"
        MR_Word mercury__string__parse_util__STATE_VARIABLE_Flags_21_21;
#line 315 "string.parse_util.m"
        MR_Char mercury__string__parse_util__Char_7;
#line 315 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_50_50;
#line 315 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_51_51;
#line 315 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_52_52;
#line 315 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_53_53;
#line 315 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_54_54;

#line 315 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 315 "string.parse_util.m"
          {
#line 315 "string.parse_util.m"
            mercury__string__parse_util__Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_8, (MR_Integer) 0)));
#line 315 "string.parse_util.m"
            mercury__string__parse_util__STATE_VARIABLE_Chars_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_8, (MR_Integer) 1)));
#line 317 "string.parse_util.m"
            mercury__string__parse_util__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 317 "string.parse_util.m"
            mercury__string__parse_util__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 317 "string.parse_util.m"
            mercury__string__parse_util__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 317 "string.parse_util.m"
            mercury__string__parse_util__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 317 "string.parse_util.m"
            mercury__string__parse_util__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 317 "string.parse_util.m"
            if ((mercury__string__parse_util__Char_7 == (MR_Char) 32))
#line 317 "string.parse_util.m"
              {
#line 317 "string.parse_util.m"
                {
#line 317 "string.parse_util.m"
                  mercury__string__parse_util__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 317 "string.parse_util.m"
                  MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) ((mercury__string__parse_util__V_54_54 | (((((MR_Integer) 1 << (MR_Integer) 1)) | ((((mercury__string__parse_util__V_52_52 << (MR_Integer) 2)) | ((((mercury__string__parse_util__V_51_51 << (MR_Integer) 3)) | ((mercury__string__parse_util__V_50_50 << (MR_Integer) 4)))))))))));
#line 317 "string.parse_util.m"
                }
#line 317 "string.parse_util.m"
                mercury__string__parse_util__succeeded = MR_TRUE;
#line 317 "string.parse_util.m"
              }
#line 317 "string.parse_util.m"
            else
#line 317 "string.parse_util.m"
              if ((mercury__string__parse_util__Char_7 == (MR_Char) 35))
#line 316 "string.parse_util.m"
                {
#line 316 "string.parse_util.m"
                  {
#line 316 "string.parse_util.m"
                    mercury__string__parse_util__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 316 "string.parse_util.m"
                    MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) (((MR_Integer) 1 | ((((mercury__string__parse_util__V_53_53 << (MR_Integer) 1)) | ((((mercury__string__parse_util__V_52_52 << (MR_Integer) 2)) | ((((mercury__string__parse_util__V_51_51 << (MR_Integer) 3)) | ((mercury__string__parse_util__V_50_50 << (MR_Integer) 4)))))))))));
#line 316 "string.parse_util.m"
                  }
#line 316 "string.parse_util.m"
                  mercury__string__parse_util__succeeded = MR_TRUE;
#line 316 "string.parse_util.m"
                }
#line 317 "string.parse_util.m"
              else
#line 317 "string.parse_util.m"
                if ((mercury__string__parse_util__Char_7 == (MR_Char) 43))
#line 320 "string.parse_util.m"
                  {
#line 320 "string.parse_util.m"
                    {
#line 320 "string.parse_util.m"
                      mercury__string__parse_util__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 320 "string.parse_util.m"
                      MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) ((mercury__string__parse_util__V_54_54 | ((((mercury__string__parse_util__V_53_53 << (MR_Integer) 1)) | ((((mercury__string__parse_util__V_52_52 << (MR_Integer) 2)) | ((((mercury__string__parse_util__V_51_51 << (MR_Integer) 3)) | (((MR_Integer) 1 << (MR_Integer) 4)))))))))));
#line 320 "string.parse_util.m"
                    }
#line 320 "string.parse_util.m"
                    mercury__string__parse_util__succeeded = MR_TRUE;
#line 320 "string.parse_util.m"
                  }
#line 317 "string.parse_util.m"
                else
#line 317 "string.parse_util.m"
                  if ((mercury__string__parse_util__Char_7 == (MR_Char) 45))
#line 319 "string.parse_util.m"
                    {
#line 319 "string.parse_util.m"
                      {
#line 319 "string.parse_util.m"
                        mercury__string__parse_util__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 319 "string.parse_util.m"
                        MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) ((mercury__string__parse_util__V_54_54 | ((((mercury__string__parse_util__V_53_53 << (MR_Integer) 1)) | ((((mercury__string__parse_util__V_52_52 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | ((mercury__string__parse_util__V_50_50 << (MR_Integer) 4)))))))))));
#line 319 "string.parse_util.m"
                      }
#line 319 "string.parse_util.m"
                      mercury__string__parse_util__succeeded = MR_TRUE;
#line 319 "string.parse_util.m"
                    }
#line 317 "string.parse_util.m"
                  else
#line 317 "string.parse_util.m"
                    if ((mercury__string__parse_util__Char_7 == (MR_Char) 48))
#line 318 "string.parse_util.m"
                      {
#line 318 "string.parse_util.m"
                        {
#line 318 "string.parse_util.m"
                          mercury__string__parse_util__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 318 "string.parse_util.m"
                          MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) ((mercury__string__parse_util__V_54_54 | ((((mercury__string__parse_util__V_53_53 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | ((((mercury__string__parse_util__V_51_51 << (MR_Integer) 3)) | ((mercury__string__parse_util__V_50_50 << (MR_Integer) 4)))))))))));
#line 318 "string.parse_util.m"
                        }
#line 318 "string.parse_util.m"
                        mercury__string__parse_util__succeeded = MR_TRUE;
#line 318 "string.parse_util.m"
                      }
#line 317 "string.parse_util.m"
                    else
#line 317 "string.parse_util.m"
                      mercury__string__parse_util__succeeded = MR_FALSE;
#line 315 "string.parse_util.m"
          }
#line 324 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 323 "string.parse_util.m"
          {
#line 323 "string.parse_util.m"
            /* direct tailcall eliminated */
#line 323 "string.parse_util.m"
            {
#line 323 "string.parse_util.m"
              MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_0__tmp_copy_8 = mercury__string__parse_util__STATE_VARIABLE_Chars_12_12;
#line 323 "string.parse_util.m"
              MR_Word mercury__string__parse_util__STATE_VARIABLE_Flags_0__tmp_copy_10 = mercury__string__parse_util__STATE_VARIABLE_Flags_21_21;

#line 323 "string.parse_util.m"
              mercury__string__parse_util__STATE_VARIABLE_Flags_0_10 = mercury__string__parse_util__STATE_VARIABLE_Flags_0__tmp_copy_10;
#line 323 "string.parse_util.m"
              mercury__string__parse_util__STATE_VARIABLE_Chars_0_8 = mercury__string__parse_util__STATE_VARIABLE_Chars_0__tmp_copy_8;
#line 323 "string.parse_util.m"
            }
#line 323 "string.parse_util.m"
            continue;
#line 323 "string.parse_util.m"
          }
#line 324 "string.parse_util.m"
        else
#line 325 "string.parse_util.m"
          {
#line 325 "string.parse_util.m"
            *mercury__string__parse_util__STATE_VARIABLE_Flags_11 = mercury__string__parse_util__STATE_VARIABLE_Flags_0_10;
#line 325 "string.parse_util.m"
            *mercury__string__parse_util__STATE_VARIABLE_Chars_9 = mercury__string__parse_util__STATE_VARIABLE_Chars_0_8;
#line 325 "string.parse_util.m"
          }
#line 324 "string.parse_util.m"
      }
#line 324 "string.parse_util.m"
      break;
#line 324 "string.parse_util.m"
    }
#line 143 "string.parse_util.m"
}

#line 138 "string.parse_util.m"
void MR_CALL 
mercury__string__parse_util__gather_non_percent_chars_3_p_0(
#line 138 "string.parse_util.m"
  MR_Word mercury__string__parse_util__Chars_4,
#line 138 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__NonConversionSpecChars_5,
#line 138 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__GatherEndedBy_6)
#line 138 "string.parse_util.m"
{
#line 295 "string.parse_util.m"
  {
#line 295 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;

#line 295 "string.parse_util.m"
    if ((mercury__string__parse_util__Chars_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "string.parse_util.m"
      {
#line 307 "string.parse_util.m"
        *mercury__string__parse_util__NonConversionSpecChars_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 308 "string.parse_util.m"
        *mercury__string__parse_util__GatherEndedBy_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 306 "string.parse_util.m"
      }
#line 295 "string.parse_util.m"
    else
#line 295 "string.parse_util.m"
      {
#line 295 "string.parse_util.m"
        MR_Char mercury__string__parse_util__HeadChar_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__Chars_4, (MR_Integer) 0)));
#line 295 "string.parse_util.m"
        MR_Word mercury__string__parse_util__TailChars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__Chars_4, (MR_Integer) 1)));

#line 296 "string.parse_util.m"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadChar_7 == (MR_Char) 37);
#line 300 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 297 "string.parse_util.m"
          {
#line 297 "string.parse_util.m"
            *mercury__string__parse_util__NonConversionSpecChars_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "string.parse_util.m"
            {
#line 299 "string.parse_util.m"
              MR_Word base;
#line 299 "string.parse_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 299 "string.parse_util.m"
              *mercury__string__parse_util__GatherEndedBy_6 = base;
#line 299 "string.parse_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_util__TailChars_8));
#line 299 "string.parse_util.m"
            }
#line 297 "string.parse_util.m"
          }
#line 300 "string.parse_util.m"
        else
#line 302 "string.parse_util.m"
          {
#line 302 "string.parse_util.m"
            MR_Word mercury__string__parse_util__TailNonConversionSpecChars_9;

#line 301 "string.parse_util.m"
            {
#line 301 "string.parse_util.m"
              mercury__string__parse_util__gather_non_percent_chars_3_p_0(mercury__string__parse_util__TailChars_8, &mercury__string__parse_util__TailNonConversionSpecChars_9, mercury__string__parse_util__GatherEndedBy_6);
            }
#line 303 "string.parse_util.m"
            {
#line 303 "string.parse_util.m"
              MR_Word base;
#line 303 "string.parse_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "string.parse_util.m"
              *mercury__string__parse_util__NonConversionSpecChars_5 = base;
#line 303 "string.parse_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__parse_util__HeadChar_7));
#line 303 "string.parse_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_util__TailNonConversionSpecChars_9));
#line 303 "string.parse_util.m"
            }
#line 302 "string.parse_util.m"
          }
#line 295 "string.parse_util.m"
      }
#line 295 "string.parse_util.m"
  }
#line 138 "string.parse_util.m"
}

#line 124 "string.parse_util.m"
MR_String MR_CALL 
mercury__string__parse_util__string_format_error_to_msg_1_f_0(
#line 124 "string.parse_util.m"
  MR_Word mercury__string__parse_util__Error_3)
#line 124 "string.parse_util.m"
{
#line 182 "string.parse_util.m"
  {
#line 182 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 182 "string.parse_util.m"
    MR_String mercury__string__parse_util__Msg_4;

#line 182 "string.parse_util.m"
    if (((MR_tag((MR_Word) mercury__string__parse_util__Error_3)) == (MR_mktag((MR_Integer) 0))))
#line 182 "string.parse_util.m"
      {
#line 182 "string.parse_util.m"
        MR_Integer mercury__string__parse_util__SpecNum_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__Error_3, (MR_Integer) 0)));
#line 182 "string.parse_util.m"
        MR_Integer mercury__string__parse_util__NumExtraPolyTypes_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
#line 182 "string.parse_util.m"
        MR_String mercury__string__parse_util__Msg0_7;
#line 182 "string.parse_util.m"
        MR_String mercury__string__parse_util__V_71_71;

#line 183 "string.parse_util.m"
        {
#line 183 "string.parse_util.m"
          mercury__string__parse_util__V_71_71 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_5);
        }
#line 183 "string.parse_util.m"
        {
#line 183 "string.parse_util.m"
          mercury__string__parse_util__Msg0_7 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_71_71, (MR_String) " is missing");
        }
#line 184 "string.parse_util.m"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__NumExtraPolyTypes_6 == (MR_Integer) 0);
#line 186 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 185 "string.parse_util.m"
          {
#line 185 "string.parse_util.m"
            {
#line 185 "string.parse_util.m"
              return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Msg0_7, (MR_String) ", along with its input.");
            }
#line 185 "string.parse_util.m"
          }
#line 186 "string.parse_util.m"
        else
#line 188 "string.parse_util.m"
          {
#line 186 "string.parse_util.m"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__NumExtraPolyTypes_6 == (MR_Integer) 1);
#line 188 "string.parse_util.m"
            if (mercury__string__parse_util__succeeded)
#line 187 "string.parse_util.m"
              {
#line 187 "string.parse_util.m"
                {
#line 187 "string.parse_util.m"
                  return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Msg0_7, (MR_String) ".");
                }
#line 187 "string.parse_util.m"
              }
#line 188 "string.parse_util.m"
            else
#line 189 "string.parse_util.m"
              {
#line 189 "string.parse_util.m"
                MR_String mercury__string__parse_util__V_75_75;
#line 189 "string.parse_util.m"
                MR_String mercury__string__parse_util__V_77_77;
#line 189 "string.parse_util.m"
                MR_String mercury__string__parse_util__V_78_78;
#line 189 "string.parse_util.m"
                MR_Integer mercury__string__parse_util__V_79_79 = (mercury__string__parse_util__NumExtraPolyTypes_6 - (MR_Integer) 1);

#line 190 "string.parse_util.m"
                {
#line 190 "string.parse_util.m"
                  mercury__string__parse_util__V_78_78 = mercury__string__int_to_string_1_f_0(mercury__string__parse_util__V_79_79);
                }
#line 191 "string.parse_util.m"
                {
#line 191 "string.parse_util.m"
                  mercury__string__parse_util__V_77_77 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_78_78, (MR_String) " extra inputs.");
                }
#line 190 "string.parse_util.m"
                {
#line 190 "string.parse_util.m"
                  mercury__string__parse_util__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) ", and there are ", mercury__string__parse_util__V_77_77);
                }
#line 189 "string.parse_util.m"
                {
#line 189 "string.parse_util.m"
                  return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Msg0_7, mercury__string__parse_util__V_75_75);
                }
#line 189 "string.parse_util.m"
              }
#line 188 "string.parse_util.m"
          }
#line 182 "string.parse_util.m"
      }
#line 182 "string.parse_util.m"
    else
#line 182 "string.parse_util.m"
      if (((MR_tag((MR_Word) mercury__string__parse_util__Error_3)) == (MR_mktag((MR_Integer) 1))))
#line 194 "string.parse_util.m"
        {
#line 194 "string.parse_util.m"
          MR_Char mercury__string__parse_util__SpecChar_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
#line 194 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_65_65;
#line 194 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_66_66;
#line 194 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_68_68;
#line 194 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_69_69;
#line 194 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__SpecNum_82 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__Error_3, (MR_Integer) 0)));

#line 195 "string.parse_util.m"
          {
#line 195 "string.parse_util.m"
            mercury__string__parse_util__V_65_65 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_82);
          }
#line 196 "string.parse_util.m"
          {
#line 196 "string.parse_util.m"
            mercury__string__parse_util__V_69_69 = mercury__string__parse_util__specifier_char_1_f_0(mercury__string__parse_util__SpecChar_8);
          }
#line 196 "string.parse_util.m"
          {
#line 196 "string.parse_util.m"
            mercury__string__parse_util__V_68_68 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_69_69, (MR_String) ".");
          }
#line 196 "string.parse_util.m"
          {
#line 196 "string.parse_util.m"
            mercury__string__parse_util__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) " uses the unknown ", mercury__string__parse_util__V_68_68);
          }
#line 195 "string.parse_util.m"
          {
#line 195 "string.parse_util.m"
            return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_65_65, mercury__string__parse_util__V_66_66);
          }
#line 194 "string.parse_util.m"
        }
#line 182 "string.parse_util.m"
      else
#line 182 "string.parse_util.m"
        if (((MR_tag((MR_Word) mercury__string__parse_util__Error_3)) == (MR_mktag((MR_Integer) 2))))
#line 198 "string.parse_util.m"
          {
#line 198 "string.parse_util.m"
            MR_Word mercury__string__parse_util__PolyKind_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__Error_3, (MR_Integer) 2)));
#line 198 "string.parse_util.m"
            MR_String mercury__string__parse_util__V_55_55;
#line 198 "string.parse_util.m"
            MR_String mercury__string__parse_util__V_56_56;
#line 198 "string.parse_util.m"
            MR_String mercury__string__parse_util__V_58_58;
#line 198 "string.parse_util.m"
            MR_String mercury__string__parse_util__V_59_59;
#line 198 "string.parse_util.m"
            MR_String mercury__string__parse_util__V_60_60;
#line 198 "string.parse_util.m"
            MR_String mercury__string__parse_util__V_62_62;
#line 198 "string.parse_util.m"
            MR_String mercury__string__parse_util__V_63_63;
#line 198 "string.parse_util.m"
            MR_Integer mercury__string__parse_util__SpecNum_83 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__Error_3, (MR_Integer) 0)));
#line 198 "string.parse_util.m"
            MR_Char mercury__string__parse_util__SpecChar_84 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__Error_3, (MR_Integer) 1)));

#line 199 "string.parse_util.m"
            {
#line 199 "string.parse_util.m"
              mercury__string__parse_util__V_55_55 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_83);
            }
#line 200 "string.parse_util.m"
            {
#line 200 "string.parse_util.m"
              mercury__string__parse_util__V_59_59 = mercury__string__parse_util__specifier_char_1_f_0(mercury__string__parse_util__SpecChar_84);
            }
#line 286 "string.parse_util.m"
            if ((mercury__string__parse_util__PolyKind_9 == (MR_Integer) 0))
#line 286 "string.parse_util.m"
              mercury__string__parse_util__V_63_63 = (MR_String) "a character";
#line 286 "string.parse_util.m"
            else
#line 286 "string.parse_util.m"
              if ((mercury__string__parse_util__PolyKind_9 == (MR_Integer) 3))
#line 289 "string.parse_util.m"
                mercury__string__parse_util__V_63_63 = (MR_String) "a float";
#line 286 "string.parse_util.m"
              else
#line 286 "string.parse_util.m"
                if ((mercury__string__parse_util__PolyKind_9 == (MR_Integer) 2))
#line 288 "string.parse_util.m"
                  mercury__string__parse_util__V_63_63 = (MR_String) "an integer";
#line 286 "string.parse_util.m"
                else
#line 287 "string.parse_util.m"
                  mercury__string__parse_util__V_63_63 = (MR_String) "a string";
#line 202 "string.parse_util.m"
            {
#line 202 "string.parse_util.m"
              mercury__string__parse_util__V_62_62 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_63_63, (MR_String) ".");
            }
#line 202 "string.parse_util.m"
            {
#line 202 "string.parse_util.m"
              mercury__string__parse_util__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) ", but the corresponding input is ", mercury__string__parse_util__V_62_62);
            }
#line 201 "string.parse_util.m"
            {
#line 201 "string.parse_util.m"
              mercury__string__parse_util__V_58_58 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_59_59, mercury__string__parse_util__V_60_60);
            }
#line 200 "string.parse_util.m"
            {
#line 200 "string.parse_util.m"
              mercury__string__parse_util__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) " uses the ", mercury__string__parse_util__V_58_58);
            }
#line 199 "string.parse_util.m"
            {
#line 199 "string.parse_util.m"
              return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_55_55, mercury__string__parse_util__V_56_56);
            }
#line 198 "string.parse_util.m"
          }
#line 182 "string.parse_util.m"
        else
#line 182 "string.parse_util.m"
          if (((((MR_tag((MR_Word) mercury__string__parse_util__Error_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 231 "string.parse_util.m"
            {
#line 231 "string.parse_util.m"
              MR_String mercury__string__parse_util__Extra_10;
#line 231 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_12_12;
#line 231 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_13_13;
#line 231 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__SpecNum_93 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
#line 231 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__NumExtraPolyTypes_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 2)));
#line 231 "string.parse_util.m"
              MR_String mercury__string__parse_util__Msg0_95;

#line 232 "string.parse_util.m"
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_93 == (MR_Integer) 1);
#line 235 "string.parse_util.m"
              if (mercury__string__parse_util__succeeded)
#line 234 "string.parse_util.m"
                mercury__string__parse_util__Extra_10 = (MR_String) "";
#line 235 "string.parse_util.m"
              else
#line 236 "string.parse_util.m"
                mercury__string__parse_util__Extra_10 = (MR_String) "extra ";
#line 238 "string.parse_util.m"
              {
#line 238 "string.parse_util.m"
                mercury__string__parse_util__V_13_13 = mercury__string__parse_util__nth_1_f_0(mercury__string__parse_util__SpecNum_93);
              }
#line 238 "string.parse_util.m"
              {
#line 238 "string.parse_util.m"
                mercury__string__parse_util__V_12_12 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_13_13, (MR_String) " conversion specifier,");
              }
#line 238 "string.parse_util.m"
              {
#line 238 "string.parse_util.m"
                mercury__string__parse_util__Msg0_95 = mercury__string__f_43_43_2_f_0((MR_String) "There is no ", mercury__string__parse_util__V_12_12);
              }
#line 239 "string.parse_util.m"
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__NumExtraPolyTypes_94 == (MR_Integer) 1);
#line 241 "string.parse_util.m"
              if (mercury__string__parse_util__succeeded)
#line 240 "string.parse_util.m"
                {
#line 240 "string.parse_util.m"
                  MR_String mercury__string__parse_util__V_15_15;
#line 240 "string.parse_util.m"
                  MR_String mercury__string__parse_util__V_17_17;

#line 240 "string.parse_util.m"
                  {
#line 240 "string.parse_util.m"
                    mercury__string__parse_util__V_17_17 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Extra_10, (MR_String) "input.");
                  }
#line 240 "string.parse_util.m"
                  {
#line 240 "string.parse_util.m"
                    mercury__string__parse_util__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) " but there is an ", mercury__string__parse_util__V_17_17);
                  }
#line 240 "string.parse_util.m"
                  {
#line 240 "string.parse_util.m"
                    return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Msg0_95, mercury__string__parse_util__V_15_15);
                  }
#line 240 "string.parse_util.m"
                }
#line 241 "string.parse_util.m"
              else
#line 242 "string.parse_util.m"
                {
#line 242 "string.parse_util.m"
                  MR_String mercury__string__parse_util__V_19_19;
#line 242 "string.parse_util.m"
                  MR_String mercury__string__parse_util__V_21_21;
#line 242 "string.parse_util.m"
                  MR_String mercury__string__parse_util__V_22_22;
#line 242 "string.parse_util.m"
                  MR_String mercury__string__parse_util__V_23_23;

#line 243 "string.parse_util.m"
                  {
#line 243 "string.parse_util.m"
                    mercury__string__parse_util__V_22_22 = mercury__string__int_to_string_1_f_0(mercury__string__parse_util__NumExtraPolyTypes_94);
                  }
#line 243 "string.parse_util.m"
                  {
#line 243 "string.parse_util.m"
                    mercury__string__parse_util__V_23_23 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Extra_10, (MR_String) "inputs.");
                  }
#line 243 "string.parse_util.m"
                  {
#line 243 "string.parse_util.m"
                    mercury__string__parse_util__V_21_21 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_22_22, mercury__string__parse_util__V_23_23);
                  }
#line 242 "string.parse_util.m"
                  {
#line 242 "string.parse_util.m"
                    mercury__string__parse_util__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) " but there are ", mercury__string__parse_util__V_21_21);
                  }
#line 242 "string.parse_util.m"
                  {
#line 242 "string.parse_util.m"
                    return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Msg0_95, mercury__string__parse_util__V_19_19);
                  }
#line 242 "string.parse_util.m"
                }
#line 231 "string.parse_util.m"
            }
#line 182 "string.parse_util.m"
          else
#line 182 "string.parse_util.m"
            if (((((MR_tag((MR_Word) mercury__string__parse_util__Error_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 226 "string.parse_util.m"
              {
#line 226 "string.parse_util.m"
                MR_String mercury__string__parse_util__V_25_25;
#line 226 "string.parse_util.m"
                MR_Integer mercury__string__parse_util__SpecNum_92 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));

#line 227 "string.parse_util.m"
                {
#line 227 "string.parse_util.m"
                  mercury__string__parse_util__V_25_25 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_92);
                }
#line 228 "string.parse_util.m"
                {
#line 228 "string.parse_util.m"
                  return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_25_25, (MR_String) " says the precision is a runtime input, but there is no next input.");
                }
#line 226 "string.parse_util.m"
              }
#line 182 "string.parse_util.m"
            else
#line 182 "string.parse_util.m"
              if (((((MR_tag((MR_Word) mercury__string__parse_util__Error_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 215 "string.parse_util.m"
                {
#line 215 "string.parse_util.m"
                  MR_String mercury__string__parse_util__V_37_37;
#line 215 "string.parse_util.m"
                  MR_Integer mercury__string__parse_util__SpecNum_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));

#line 216 "string.parse_util.m"
                  {
#line 216 "string.parse_util.m"
                    mercury__string__parse_util__V_37_37 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_89);
                  }
#line 217 "string.parse_util.m"
                  {
#line 217 "string.parse_util.m"
                    return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_37_37, (MR_String) " says the width is a runtime input, but there is no next input.");
                  }
#line 215 "string.parse_util.m"
                }
#line 182 "string.parse_util.m"
              else
#line 182 "string.parse_util.m"
                if (((((MR_tag((MR_Word) mercury__string__parse_util__Error_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 204 "string.parse_util.m"
                  {
#line 204 "string.parse_util.m"
                    MR_String mercury__string__parse_util__V_49_49;
#line 204 "string.parse_util.m"
                    MR_String mercury__string__parse_util__V_50_50;
#line 204 "string.parse_util.m"
                    MR_String mercury__string__parse_util__V_52_52;
#line 204 "string.parse_util.m"
                    MR_String mercury__string__parse_util__V_53_53;
#line 204 "string.parse_util.m"
                    MR_Integer mercury__string__parse_util__SpecNum_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
#line 204 "string.parse_util.m"
                    MR_Char mercury__string__parse_util__SpecChar_86 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 2)));

#line 205 "string.parse_util.m"
                    {
#line 205 "string.parse_util.m"
                      mercury__string__parse_util__V_49_49 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_85);
                    }
#line 206 "string.parse_util.m"
                    {
#line 206 "string.parse_util.m"
                      mercury__string__parse_util__V_53_53 = mercury__string__parse_util__specifier_char_1_f_0(mercury__string__parse_util__SpecChar_86);
                    }
#line 207 "string.parse_util.m"
                    {
#line 207 "string.parse_util.m"
                      mercury__string__parse_util__V_52_52 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_53_53, (MR_String) ", is missing its input.");
                    }
#line 206 "string.parse_util.m"
                    {
#line 206 "string.parse_util.m"
                      mercury__string__parse_util__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) ", which uses ", mercury__string__parse_util__V_52_52);
                    }
#line 206 "string.parse_util.m"
                    {
#line 206 "string.parse_util.m"
                      return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_49_49, mercury__string__parse_util__V_50_50);
                    }
#line 204 "string.parse_util.m"
                  }
#line 182 "string.parse_util.m"
                else
#line 182 "string.parse_util.m"
                  if (((((MR_tag((MR_Word) mercury__string__parse_util__Error_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 220 "string.parse_util.m"
                    {
#line 220 "string.parse_util.m"
                      MR_String mercury__string__parse_util__V_29_29;
#line 220 "string.parse_util.m"
                      MR_String mercury__string__parse_util__V_30_30;
#line 220 "string.parse_util.m"
                      MR_String mercury__string__parse_util__V_32_32;
#line 220 "string.parse_util.m"
                      MR_String mercury__string__parse_util__V_34_34;
#line 220 "string.parse_util.m"
                      MR_String mercury__string__parse_util__V_35_35;
#line 220 "string.parse_util.m"
                      MR_Integer mercury__string__parse_util__SpecNum_90 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
#line 220 "string.parse_util.m"
                      MR_Word mercury__string__parse_util__PolyKind_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 2)));

#line 221 "string.parse_util.m"
                      {
#line 221 "string.parse_util.m"
                        mercury__string__parse_util__V_29_29 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_90);
                      }
#line 286 "string.parse_util.m"
                      if ((mercury__string__parse_util__PolyKind_91 == (MR_Integer) 0))
#line 286 "string.parse_util.m"
                        mercury__string__parse_util__V_35_35 = (MR_String) "a character";
#line 286 "string.parse_util.m"
                      else
#line 286 "string.parse_util.m"
                        if ((mercury__string__parse_util__PolyKind_91 == (MR_Integer) 3))
#line 289 "string.parse_util.m"
                          mercury__string__parse_util__V_35_35 = (MR_String) "a float";
#line 286 "string.parse_util.m"
                        else
#line 286 "string.parse_util.m"
                          if ((mercury__string__parse_util__PolyKind_91 == (MR_Integer) 2))
#line 288 "string.parse_util.m"
                            mercury__string__parse_util__V_35_35 = (MR_String) "an integer";
#line 286 "string.parse_util.m"
                          else
#line 287 "string.parse_util.m"
                            mercury__string__parse_util__V_35_35 = (MR_String) "a string";
#line 224 "string.parse_util.m"
                      {
#line 224 "string.parse_util.m"
                        mercury__string__parse_util__V_34_34 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_35_35, (MR_String) ", not an integer.");
                      }
#line 223 "string.parse_util.m"
                      {
#line 223 "string.parse_util.m"
                        mercury__string__parse_util__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) " but the next input is ", mercury__string__parse_util__V_34_34);
                      }
#line 223 "string.parse_util.m"
                      {
#line 223 "string.parse_util.m"
                        mercury__string__parse_util__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) " says the precision is a runtime input,", mercury__string__parse_util__V_32_32);
                      }
#line 222 "string.parse_util.m"
                      {
#line 222 "string.parse_util.m"
                        return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_29_29, mercury__string__parse_util__V_30_30);
                      }
#line 220 "string.parse_util.m"
                    }
#line 182 "string.parse_util.m"
                  else
#line 209 "string.parse_util.m"
                    {
#line 209 "string.parse_util.m"
                      MR_String mercury__string__parse_util__V_41_41;
#line 209 "string.parse_util.m"
                      MR_String mercury__string__parse_util__V_42_42;
#line 209 "string.parse_util.m"
                      MR_String mercury__string__parse_util__V_44_44;
#line 209 "string.parse_util.m"
                      MR_String mercury__string__parse_util__V_46_46;
#line 209 "string.parse_util.m"
                      MR_String mercury__string__parse_util__V_47_47;
#line 209 "string.parse_util.m"
                      MR_Integer mercury__string__parse_util__SpecNum_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
#line 209 "string.parse_util.m"
                      MR_Word mercury__string__parse_util__PolyKind_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 2)));

#line 210 "string.parse_util.m"
                      {
#line 210 "string.parse_util.m"
                        mercury__string__parse_util__V_41_41 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_87);
                      }
#line 286 "string.parse_util.m"
                      if ((mercury__string__parse_util__PolyKind_88 == (MR_Integer) 0))
#line 286 "string.parse_util.m"
                        mercury__string__parse_util__V_47_47 = (MR_String) "a character";
#line 286 "string.parse_util.m"
                      else
#line 286 "string.parse_util.m"
                        if ((mercury__string__parse_util__PolyKind_88 == (MR_Integer) 3))
#line 289 "string.parse_util.m"
                          mercury__string__parse_util__V_47_47 = (MR_String) "a float";
#line 286 "string.parse_util.m"
                        else
#line 286 "string.parse_util.m"
                          if ((mercury__string__parse_util__PolyKind_88 == (MR_Integer) 2))
#line 288 "string.parse_util.m"
                            mercury__string__parse_util__V_47_47 = (MR_String) "an integer";
#line 286 "string.parse_util.m"
                          else
#line 287 "string.parse_util.m"
                            mercury__string__parse_util__V_47_47 = (MR_String) "a string";
#line 213 "string.parse_util.m"
                      {
#line 213 "string.parse_util.m"
                        mercury__string__parse_util__V_46_46 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_47_47, (MR_String) ", not an integer.");
                      }
#line 212 "string.parse_util.m"
                      {
#line 212 "string.parse_util.m"
                        mercury__string__parse_util__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) " but the next input is ", mercury__string__parse_util__V_46_46);
                      }
#line 212 "string.parse_util.m"
                      {
#line 212 "string.parse_util.m"
                        mercury__string__parse_util__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) " says the width is a runtime input,", mercury__string__parse_util__V_44_44);
                      }
#line 211 "string.parse_util.m"
                      {
#line 211 "string.parse_util.m"
                        return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_41_41, mercury__string__parse_util__V_42_42);
                      }
#line 209 "string.parse_util.m"
                    }
#line 182 "string.parse_util.m"
    return mercury__string__parse_util__Msg_4;
#line 182 "string.parse_util.m"
  }
#line 124 "string.parse_util.m"
}

void mercury__string__parse_util__init(void)
{
}

void mercury__string__parse_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_gather_ended_by_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_hash_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_minus_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_plus_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_space_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_zero_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_float_kind_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_int_base_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0);
	MR_register_type_ctor_info(&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0);
}

void mercury__string__parse_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module string.parse_util. */
