/*
** Automatically generated from `string.parse_util.m'
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




#line 93 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_0;

#line 96 "string.parse_util.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__parse_util__list__ti_list_1builtin__type_ctor_info_character_0;

#line 99 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_gather_ended_by_0_1[1];

#line 102 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_1;

#line 105 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_0[1];

#line 108 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_1[1];

#line 111 "string.parse_util.c"
static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_gather_ended_by_0[2];

#line 114 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_gather_ended_by_0[2];

#line 117 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_gather_ended_by_0[2];

#line 120 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0;

#line 123 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1;

#line 126 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2;

#line 129 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3;

#line 132 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_poly_kind_0[4];

#line 135 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_poly_kind_0[4];

#line 138 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_poly_kind_0[4];

#line 141 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_0[2];

#line 144 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_0;

#line 147 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_1[2];

#line 150 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_1;

#line 153 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_2[3];

#line 156 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_2;

#line 159 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_3[2];

#line 162 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_3;

#line 165 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_4[2];

#line 168 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_4;

#line 171 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_5[1];

#line 174 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_5;

#line 177 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_6[2];

#line 180 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_6;

#line 183 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_7[1];

#line 186 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_7;

#line 189 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_8[2];

#line 192 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_8;

#line 195 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_0[1];

#line 198 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_1[1];

#line 201 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_2[1];

#line 204 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_3[6];

#line 207 "string.parse_util.c"
static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_error_0[4];

#line 210 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_error_0[9];

#line 213 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_error_0[9];

#line 216 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_0;

#line 219 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_1;

#line 222 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_hash_0[2];

#line 225 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_hash_0[2];

#line 228 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_hash_0[2];

#line 231 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_0;

#line 234 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_1;

#line 237 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_minus_0[2];

#line 240 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_minus_0[2];

#line 243 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_minus_0[2];

#line 246 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_0;

#line 249 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_1;

#line 252 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_plus_0[2];

#line 255 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_plus_0[2];

#line 258 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_plus_0[2];

#line 261 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_0;

#line 264 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_1;

#line 267 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_space_0[2];

#line 270 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_space_0[2];

#line 273 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_space_0[2];

#line 276 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_0;

#line 279 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_1;

#line 282 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_zero_0[2];

#line 285 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_zero_0[2];

#line 288 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_zero_0[2];

#line 291 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_flags_0_0[5];

#line 294 "string.parse_util.c"
static const MR_ConstString mercury__string__parse_util__string__parse_util__field_names_string_format_flags_0_0[5];

#line 297 "string.parse_util.c"
static const MR_DuArgLocn mercury__string__parse_util__string__parse_util__field_locns_string_format_flags_0_0[5];

#line 300 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_flags_0_0;

#line 303 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_flags_0_0[1];

#line 306 "string.parse_util.c"
static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_flags_0[1];

#line 309 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_flags_0[1];

#line 312 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flags_0[1];

#line 315 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_0;

#line 318 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_1;

#line 321 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_2;

#line 324 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_3;

#line 327 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_4;

#line 330 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_5;

#line 333 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_float_kind_0[6];

#line 336 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_float_kind_0[6];

#line 339 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_float_kind_0[6];

#line 342 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_0;

#line 345 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_1;

#line 348 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_2;

#line 351 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_3;

#line 354 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_4;

#line 357 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_int_base_0[5];

#line 360 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_int_base_0[5];

#line 363 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_int_base_0[5];

#line 366 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_0;

#line 369 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_prec_0_1[1];

#line 372 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_1;

#line 375 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_0[1];

#line 378 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_1[1];

#line 381 "string.parse_util.c"
static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_maybe_prec_0[2];

#line 384 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_prec_0[2];

#line 387 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_prec_0[2];

#line 390 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_0;

#line 393 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_width_0_1[1];

#line 396 "string.parse_util.c"
static const MR_DuFunctorDesc mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_1;

#line 399 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_0[1];

#line 402 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_1[1];

#line 405 "string.parse_util.c"
static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_maybe_width_0[2];

#line 408 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_width_0[2];

#line 411 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_width_0[2];

#line 414 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____gather_ended_by_0_0_10001(
#line 417 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 419 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 422 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____gather_ended_by_0_0_10001(
#line 425 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 427 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 429 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 432 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____poly_kind_0_0_10001(
#line 435 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 437 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 440 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____poly_kind_0_0_10001(
#line 443 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 445 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 447 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 450 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_error_0_0_10001(
#line 453 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 455 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 458 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_error_0_0_10001(
#line 461 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 463 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 465 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 468 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_hash_0_0_10001(
#line 471 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 473 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 476 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_hash_0_0_10001(
#line 479 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 481 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 483 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 486 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_minus_0_0_10001(
#line 489 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 491 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 494 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_minus_0_0_10001(
#line 497 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 499 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 501 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 504 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_plus_0_0_10001(
#line 507 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 509 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 512 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_plus_0_0_10001(
#line 515 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 517 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 519 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 522 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_space_0_0_10001(
#line 525 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 527 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 530 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_space_0_0_10001(
#line 533 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 535 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 537 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 540 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_zero_0_0_10001(
#line 543 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 545 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 548 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_zero_0_0_10001(
#line 551 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 553 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 555 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 558 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flags_0_0_10001(
#line 561 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 563 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 566 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flags_0_0_10001(
#line 569 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 571 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 573 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 576 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_float_kind_0_0_10001(
#line 579 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 581 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 584 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_float_kind_0_0_10001(
#line 587 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 589 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 591 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 594 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_int_base_0_0_10001(
#line 597 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 599 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 602 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_int_base_0_0_10001(
#line 605 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 607 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 609 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 612 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_prec_0_0_10001(
#line 615 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 617 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 620 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_prec_0_0_10001(
#line 623 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 625 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 627 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 630 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_width_0_0_10001(
#line 633 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 635 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2);

#line 638 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_width_0_0_10001(
#line 641 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 643 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 645 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 280 "string.parse_util.m"
static MR_String MR_CALL 
mercury__string__parse_util__specifier_char_1_f_0(
#line 280 "string.parse_util.m"
  MR_Char mercury__string__parse_util__SpecChar_3);

#line 253 "string.parse_util.m"
static MR_String MR_CALL 
mercury__string__parse_util__nth_1_f_0(
#line 253 "string.parse_util.m"
  MR_Integer mercury__string__parse_util__N_3);

#line 248 "string.parse_util.m"
static MR_String MR_CALL 
mercury__string__parse_util__nth_specifier_1_f_0(
#line 248 "string.parse_util.m"
  MR_Integer mercury__string__parse_util__SpecNum_3);


static /* final */ const MR_Box mercury__string__parse_util_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_4[2][5];


#line 287 "string.parse_util.m"
/* sealed */ struct mercury__string__parse_util__vector_common_type_5_0_s {
#line 287 "string.parse_util.m"
  const MR_String mercury__string__parse_util__vector_common_type_5_0__vct_5_f_0;
#line 287 "string.parse_util.m"
};

static /* final */ const struct mercury__string__parse_util__vector_common_type_5_0_s mercury__string__parse_util_vector_common_5[12];



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


static /* final */ const struct mercury__string__parse_util__vector_common_type_5_0_s mercury__string__parse_util_vector_common_5[12] = {
  /* row 0 */   {     (MR_String) "a character" },
  /* row 1 */   {     (MR_String) "a string" },
  /* row 2 */   {     (MR_String) "an integer" },
  /* row 3 */   {     (MR_String) "a float" },
  /* row 4 */   {     (MR_String) "a character" },
  /* row 5 */   {     (MR_String) "a string" },
  /* row 6 */   {     (MR_String) "an integer" },
  /* row 7 */   {     (MR_String) "a float" },
  /* row 8 */   {     (MR_String) "a character" },
  /* row 9 */   {     (MR_String) "a string" },
  /* row 10 */   {     (MR_String) "an integer" },
  /* row 11 */   {     (MR_String) "a float" },
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



#line 1065 "string.parse_util.c"
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

#line 1080 "string.parse_util.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__parse_util__list__ti_list_1builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

#line 1088 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_gather_ended_by_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__list__ti_list_1builtin__type_ctor_info_character_0
};

#line 1093 "string.parse_util.c"
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

#line 1108 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_0
};

#line 1113 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_1[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_1
};

#line 1118 "string.parse_util.c"
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

#line 1132 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_gather_ended_by_0[2] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_0,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_1
};

#line 1138 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_gather_ended_by_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1144 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_gather_ended_by_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_util____Unify____gather_ended_by_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____gather_ended_by_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "gather_ended_by",
  {     mercury__string__parse_util__string__parse_util__du_name_ordered_gather_ended_by_0 },
  {     mercury__string__parse_util__string__parse_util__du_ptag_ordered_gather_ended_by_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_gather_ended_by_0
};

#line 1161 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0 = {
  (MR_String) "poly_kind_char",
  (MR_Integer) 0
};

#line 1167 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1 = {
  (MR_String) "poly_kind_str",
  (MR_Integer) 1
};

#line 1173 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2 = {
  (MR_String) "poly_kind_int",
  (MR_Integer) 2
};

#line 1179 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3 = {
  (MR_String) "poly_kind_float",
  (MR_Integer) 3
};

#line 1185 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_poly_kind_0[4] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3
};

#line 1193 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_poly_kind_0[4] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1
};

#line 1201 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_poly_kind_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1209 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____poly_kind_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____poly_kind_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "poly_kind",
  {     mercury__string__parse_util__string__parse_util__enum_name_ordered_poly_kind_0 },
  {     mercury__string__parse_util__string__parse_util__enum_value_ordered_poly_kind_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_poly_kind_0
};

#line 1226 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1232 "string.parse_util.c"
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

#line 1247 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 1253 "string.parse_util.c"
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

#line 1268 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_2[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0
};

#line 1275 "string.parse_util.c"
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

#line 1290 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 1296 "string.parse_util.c"
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

#line 1311 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_4[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0
};

#line 1317 "string.parse_util.c"
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

#line 1332 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1337 "string.parse_util.c"
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

#line 1352 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_6[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0
};

#line 1358 "string.parse_util.c"
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

#line 1373 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1378 "string.parse_util.c"
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

#line 1393 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_8[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1399 "string.parse_util.c"
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

#line 1414 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_0
};

#line 1419 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_1[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_1
};

#line 1424 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_2[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_2
};

#line 1429 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_3[6] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_3,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_4,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_5,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_6,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_7,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_8
};

#line 1439 "string.parse_util.c"
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

#line 1463 "string.parse_util.c"
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

#line 1476 "string.parse_util.c"
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

#line 1489 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_error_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_error_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_error",
  {     mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_error_0 },
  {     mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_error_0 },
  (MR_Integer) 9,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_error_0
};

#line 1506 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_0 = {
  (MR_String) "flag_hash_clear",
  (MR_Integer) 0
};

#line 1512 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_1 = {
  (MR_String) "flag_hash_set",
  (MR_Integer) 1
};

#line 1518 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_hash_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_1
};

#line 1524 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_hash_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_1
};

#line 1530 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_hash_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1536 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_hash_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flag_hash_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flag_hash_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flag_hash",
  {     mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_hash_0 },
  {     mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_hash_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_hash_0
};

#line 1553 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_0 = {
  (MR_String) "flag_minus_clear",
  (MR_Integer) 0
};

#line 1559 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_1 = {
  (MR_String) "flag_minus_set",
  (MR_Integer) 1
};

#line 1565 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_minus_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_1
};

#line 1571 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_minus_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_1
};

#line 1577 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_minus_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1583 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_minus_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flag_minus_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flag_minus_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flag_minus",
  {     mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_minus_0 },
  {     mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_minus_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_minus_0
};

#line 1600 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_0 = {
  (MR_String) "flag_plus_clear",
  (MR_Integer) 0
};

#line 1606 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_1 = {
  (MR_String) "flag_plus_set",
  (MR_Integer) 1
};

#line 1612 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_plus_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_1
};

#line 1618 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_plus_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_1
};

#line 1624 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_plus_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1630 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_plus_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flag_plus_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flag_plus_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flag_plus",
  {     mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_plus_0 },
  {     mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_plus_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_plus_0
};

#line 1647 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_0 = {
  (MR_String) "flag_space_clear",
  (MR_Integer) 0
};

#line 1653 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_1 = {
  (MR_String) "flag_space_set",
  (MR_Integer) 1
};

#line 1659 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_space_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_1
};

#line 1665 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_space_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_1
};

#line 1671 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_space_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1677 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_space_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flag_space_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flag_space_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flag_space",
  {     mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_space_0 },
  {     mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_space_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_space_0
};

#line 1694 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_0 = {
  (MR_String) "flag_zero_clear",
  (MR_Integer) 0
};

#line 1700 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_1 = {
  (MR_String) "flag_zero_set",
  (MR_Integer) 1
};

#line 1706 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_zero_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_1
};

#line 1712 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_zero_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_1
};

#line 1718 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_zero_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1724 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_zero_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flag_zero_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flag_zero_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flag_zero",
  {     mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_zero_0 },
  {     mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_zero_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_zero_0
};

#line 1741 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_flags_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_hash_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_space_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_zero_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_minus_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_plus_0
};

#line 1750 "string.parse_util.c"
static const MR_ConstString mercury__string__parse_util__string__parse_util__field_names_string_format_flags_0_0[5] = {
  (MR_String) "flag_hash",
  (MR_String) "flag_space",
  (MR_String) "flag_zero",
  (MR_String) "flag_minus",
  (MR_String) "flag_plus"
};

#line 1759 "string.parse_util.c"
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

#line 1788 "string.parse_util.c"
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

#line 1803 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_flags_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_flags_0_0
};

#line 1808 "string.parse_util.c"
static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_flags_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_flags_0_0
  }
};

#line 1817 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_flags_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_flags_0_0
};

#line 1822 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flags_0[1] = {
  (MR_Integer) 0
};

#line 1827 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_flags_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_flags_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_flags",
  {     mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_flags_0 },
  {     mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_flags_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flags_0
};

#line 1844 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_0 = {
  (MR_String) "kind_e_scientific_lc",
  (MR_Integer) 0
};

#line 1850 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_1 = {
  (MR_String) "kind_e_scientific_uc",
  (MR_Integer) 1
};

#line 1856 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_2 = {
  (MR_String) "kind_f_plain_lc",
  (MR_Integer) 2
};

#line 1862 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_3 = {
  (MR_String) "kind_f_plain_uc",
  (MR_Integer) 3
};

#line 1868 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_4 = {
  (MR_String) "kind_g_flexible_lc",
  (MR_Integer) 4
};

#line 1874 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_5 = {
  (MR_String) "kind_g_flexible_uc",
  (MR_Integer) 5
};

#line 1880 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_float_kind_0[6] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_4,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_5
};

#line 1890 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_float_kind_0[6] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_4,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_5
};

#line 1900 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_float_kind_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5
};

#line 1910 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_float_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_float_kind_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_float_kind_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_float_kind",
  {     mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_float_kind_0 },
  {     mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_float_kind_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_float_kind_0
};

#line 1927 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_0 = {
  (MR_String) "base_octal",
  (MR_Integer) 0
};

#line 1933 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_1 = {
  (MR_String) "base_decimal",
  (MR_Integer) 1
};

#line 1939 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_2 = {
  (MR_String) "base_hex_lc",
  (MR_Integer) 2
};

#line 1945 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_3 = {
  (MR_String) "base_hex_uc",
  (MR_Integer) 3
};

#line 1951 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_4 = {
  (MR_String) "base_hex_p",
  (MR_Integer) 4
};

#line 1957 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_int_base_0[5] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_4
};

#line 1966 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_int_base_0[5] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_4,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_0
};

#line 1975 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_int_base_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 1984 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_int_base_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_int_base_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_int_base_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_int_base",
  {     mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_int_base_0 },
  {     mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_int_base_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_int_base_0
};

#line 2001 "string.parse_util.c"
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

#line 2016 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_prec_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2021 "string.parse_util.c"
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

#line 2036 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_0
};

#line 2041 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_1[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_1
};

#line 2046 "string.parse_util.c"
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

#line 2060 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_prec_0[2] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_0,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_1
};

#line 2066 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_prec_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2072 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_prec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_maybe_prec_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_maybe_prec_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_maybe_prec",
  {     mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_prec_0 },
  {     mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_maybe_prec_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_prec_0
};

#line 2089 "string.parse_util.c"
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

#line 2104 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_width_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2109 "string.parse_util.c"
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

#line 2124 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_0
};

#line 2129 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_1[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_1
};

#line 2134 "string.parse_util.c"
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

#line 2148 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_width_0[2] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_0,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_1
};

#line 2154 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_width_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2160 "string.parse_util.c"
const MR_TypeCtorInfo_Struct mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_maybe_width_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__parse_util____Unify____string_format_maybe_width_0_0_10001)),
  ((MR_Box) (mercury__string__parse_util____Compare____string_format_maybe_width_0_0_10001)),
  (MR_String) "string.parse_util",
  (MR_String) "string_format_maybe_width",
  {     mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_width_0 },
  {     mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_maybe_width_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_width_0
};

#line 2177 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____gather_ended_by_0_0_10001(
#line 2180 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2182 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2184 "string.parse_util.c"
{
#line 2186 "string.parse_util.c"
  {
#line 2188 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2191 "string.parse_util.c"
    {
#line 2193 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____gather_ended_by_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2196 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2198 "string.parse_util.c"
  }
#line 2200 "string.parse_util.c"
}

#line 2203 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____gather_ended_by_0_0_10001(
#line 2206 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2208 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2210 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2212 "string.parse_util.c"
{
#line 2214 "string.parse_util.c"
  {
#line 2216 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2219 "string.parse_util.c"
    {
#line 2221 "string.parse_util.c"
      mercury__string__parse_util____Compare____gather_ended_by_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2224 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2226 "string.parse_util.c"
  }
#line 2228 "string.parse_util.c"
}

#line 2231 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____poly_kind_0_0_10001(
#line 2234 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2236 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2238 "string.parse_util.c"
{
#line 2240 "string.parse_util.c"
  {
#line 2242 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2245 "string.parse_util.c"
    {
#line 2247 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____poly_kind_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2250 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2252 "string.parse_util.c"
  }
#line 2254 "string.parse_util.c"
}

#line 2257 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____poly_kind_0_0_10001(
#line 2260 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2262 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2264 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2266 "string.parse_util.c"
{
#line 2268 "string.parse_util.c"
  {
#line 2270 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2273 "string.parse_util.c"
    {
#line 2275 "string.parse_util.c"
      mercury__string__parse_util____Compare____poly_kind_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2278 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2280 "string.parse_util.c"
  }
#line 2282 "string.parse_util.c"
}

#line 2285 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_error_0_0_10001(
#line 2288 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2290 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2292 "string.parse_util.c"
{
#line 2294 "string.parse_util.c"
  {
#line 2296 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2299 "string.parse_util.c"
    {
#line 2301 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_error_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2304 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2306 "string.parse_util.c"
  }
#line 2308 "string.parse_util.c"
}

#line 2311 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_error_0_0_10001(
#line 2314 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2316 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2318 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2320 "string.parse_util.c"
{
#line 2322 "string.parse_util.c"
  {
#line 2324 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2327 "string.parse_util.c"
    {
#line 2329 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_error_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2332 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2334 "string.parse_util.c"
  }
#line 2336 "string.parse_util.c"
}

#line 2339 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_hash_0_0_10001(
#line 2342 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2344 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2346 "string.parse_util.c"
{
#line 2348 "string.parse_util.c"
  {
#line 2350 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2353 "string.parse_util.c"
    {
#line 2355 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_hash_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2358 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2360 "string.parse_util.c"
  }
#line 2362 "string.parse_util.c"
}

#line 2365 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_hash_0_0_10001(
#line 2368 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2370 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2372 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2374 "string.parse_util.c"
{
#line 2376 "string.parse_util.c"
  {
#line 2378 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2381 "string.parse_util.c"
    {
#line 2383 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flag_hash_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2386 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2388 "string.parse_util.c"
  }
#line 2390 "string.parse_util.c"
}

#line 2393 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_minus_0_0_10001(
#line 2396 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2398 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2400 "string.parse_util.c"
{
#line 2402 "string.parse_util.c"
  {
#line 2404 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2407 "string.parse_util.c"
    {
#line 2409 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_minus_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2412 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2414 "string.parse_util.c"
  }
#line 2416 "string.parse_util.c"
}

#line 2419 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_minus_0_0_10001(
#line 2422 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2424 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2426 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2428 "string.parse_util.c"
{
#line 2430 "string.parse_util.c"
  {
#line 2432 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2435 "string.parse_util.c"
    {
#line 2437 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flag_minus_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2440 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2442 "string.parse_util.c"
  }
#line 2444 "string.parse_util.c"
}

#line 2447 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_plus_0_0_10001(
#line 2450 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2452 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2454 "string.parse_util.c"
{
#line 2456 "string.parse_util.c"
  {
#line 2458 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2461 "string.parse_util.c"
    {
#line 2463 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_plus_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2466 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2468 "string.parse_util.c"
  }
#line 2470 "string.parse_util.c"
}

#line 2473 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_plus_0_0_10001(
#line 2476 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2478 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2480 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2482 "string.parse_util.c"
{
#line 2484 "string.parse_util.c"
  {
#line 2486 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2489 "string.parse_util.c"
    {
#line 2491 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flag_plus_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2494 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2496 "string.parse_util.c"
  }
#line 2498 "string.parse_util.c"
}

#line 2501 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_space_0_0_10001(
#line 2504 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2506 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2508 "string.parse_util.c"
{
#line 2510 "string.parse_util.c"
  {
#line 2512 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2515 "string.parse_util.c"
    {
#line 2517 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_space_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2520 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2522 "string.parse_util.c"
  }
#line 2524 "string.parse_util.c"
}

#line 2527 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_space_0_0_10001(
#line 2530 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2532 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2534 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2536 "string.parse_util.c"
{
#line 2538 "string.parse_util.c"
  {
#line 2540 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2543 "string.parse_util.c"
    {
#line 2545 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flag_space_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2548 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2550 "string.parse_util.c"
  }
#line 2552 "string.parse_util.c"
}

#line 2555 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_zero_0_0_10001(
#line 2558 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2560 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2562 "string.parse_util.c"
{
#line 2564 "string.parse_util.c"
  {
#line 2566 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2569 "string.parse_util.c"
    {
#line 2571 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_zero_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2574 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2576 "string.parse_util.c"
  }
#line 2578 "string.parse_util.c"
}

#line 2581 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_zero_0_0_10001(
#line 2584 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2586 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2588 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2590 "string.parse_util.c"
{
#line 2592 "string.parse_util.c"
  {
#line 2594 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2597 "string.parse_util.c"
    {
#line 2599 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flag_zero_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2602 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2604 "string.parse_util.c"
  }
#line 2606 "string.parse_util.c"
}

#line 2609 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flags_0_0_10001(
#line 2612 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2614 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2616 "string.parse_util.c"
{
#line 2618 "string.parse_util.c"
  {
#line 2620 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2623 "string.parse_util.c"
    {
#line 2625 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2628 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2630 "string.parse_util.c"
  }
#line 2632 "string.parse_util.c"
}

#line 2635 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flags_0_0_10001(
#line 2638 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2640 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2642 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2644 "string.parse_util.c"
{
#line 2646 "string.parse_util.c"
  {
#line 2648 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2651 "string.parse_util.c"
    {
#line 2653 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flags_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2656 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2658 "string.parse_util.c"
  }
#line 2660 "string.parse_util.c"
}

#line 2663 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_float_kind_0_0_10001(
#line 2666 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2668 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2670 "string.parse_util.c"
{
#line 2672 "string.parse_util.c"
  {
#line 2674 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2677 "string.parse_util.c"
    {
#line 2679 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_float_kind_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2682 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2684 "string.parse_util.c"
  }
#line 2686 "string.parse_util.c"
}

#line 2689 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_float_kind_0_0_10001(
#line 2692 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2694 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2696 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2698 "string.parse_util.c"
{
#line 2700 "string.parse_util.c"
  {
#line 2702 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2705 "string.parse_util.c"
    {
#line 2707 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_float_kind_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2710 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2712 "string.parse_util.c"
  }
#line 2714 "string.parse_util.c"
}

#line 2717 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_int_base_0_0_10001(
#line 2720 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2722 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2724 "string.parse_util.c"
{
#line 2726 "string.parse_util.c"
  {
#line 2728 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2731 "string.parse_util.c"
    {
#line 2733 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_int_base_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2736 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2738 "string.parse_util.c"
  }
#line 2740 "string.parse_util.c"
}

#line 2743 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_int_base_0_0_10001(
#line 2746 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2748 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2750 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2752 "string.parse_util.c"
{
#line 2754 "string.parse_util.c"
  {
#line 2756 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2759 "string.parse_util.c"
    {
#line 2761 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_int_base_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2764 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2766 "string.parse_util.c"
  }
#line 2768 "string.parse_util.c"
}

#line 2771 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_prec_0_0_10001(
#line 2774 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2776 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2778 "string.parse_util.c"
{
#line 2780 "string.parse_util.c"
  {
#line 2782 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2785 "string.parse_util.c"
    {
#line 2787 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2790 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2792 "string.parse_util.c"
  }
#line 2794 "string.parse_util.c"
}

#line 2797 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_prec_0_0_10001(
#line 2800 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2802 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2804 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2806 "string.parse_util.c"
{
#line 2808 "string.parse_util.c"
  {
#line 2810 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2813 "string.parse_util.c"
    {
#line 2815 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2818 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2820 "string.parse_util.c"
  }
#line 2822 "string.parse_util.c"
}

#line 2825 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_width_0_0_10001(
#line 2828 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2830 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2832 "string.parse_util.c"
{
#line 2834 "string.parse_util.c"
  {
#line 2836 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2839 "string.parse_util.c"
    {
#line 2841 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2844 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2846 "string.parse_util.c"
  }
#line 2848 "string.parse_util.c"
}

#line 2851 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_width_0_0_10001(
#line 2854 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2856 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2858 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2860 "string.parse_util.c"
{
#line 2862 "string.parse_util.c"
  {
#line 2864 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2867 "string.parse_util.c"
    {
#line 2869 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2872 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2874 "string.parse_util.c"
  }
#line 2876 "string.parse_util.c"
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
#line 2920 "string.parse_util.c"
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
#line 2932 "string.parse_util.c"
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 55 "string.parse_util.m"
    else
#line 55 "string.parse_util.m"
      {
#line 55 "string.parse_util.m"
        MR_Integer mercury__string__parse_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

#line 55 "string.parse_util.m"
        if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2943 "string.parse_util.c"
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
#line 3039 "string.parse_util.c"
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
#line 3076 "string.parse_util.c"
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
#line 3088 "string.parse_util.c"
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 59 "string.parse_util.m"
    else
#line 59 "string.parse_util.m"
      {
#line 59 "string.parse_util.m"
        MR_Integer mercury__string__parse_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

#line 59 "string.parse_util.m"
        if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3099 "string.parse_util.c"
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
#line 3195 "string.parse_util.c"
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
#line 3264 "string.parse_util.c"
  {
#line 3266 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3269 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3271 "string.parse_util.c"
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
#line 3332 "string.parse_util.c"
  {
#line 3334 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3337 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3339 "string.parse_util.c"
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
#line 3368 "string.parse_util.c"
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
#line 3423 "string.parse_util.c"
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
#line 3464 "string.parse_util.c"
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
#line 3505 "string.parse_util.c"
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
#line 3546 "string.parse_util.c"
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

#line 3649 "string.parse_util.c"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_3_3 == mercury__string__parse_util__V_8_8);
#line 46 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 46 "string.parse_util.m"
          {
#line 3655 "string.parse_util.c"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_4_4 == mercury__string__parse_util__V_9_9);
#line 46 "string.parse_util.m"
            if (mercury__string__parse_util__succeeded)
#line 46 "string.parse_util.m"
              {
#line 3661 "string.parse_util.c"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_5_5 == mercury__string__parse_util__V_10_10);
#line 46 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 46 "string.parse_util.m"
                  {
#line 3667 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_6_6 == mercury__string__parse_util__V_11_11);
#line 46 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 3671 "string.parse_util.c"
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
#line 3744 "string.parse_util.c"
  {
#line 3746 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3749 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3751 "string.parse_util.c"
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
#line 3812 "string.parse_util.c"
  {
#line 3814 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3817 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3819 "string.parse_util.c"
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
#line 3880 "string.parse_util.c"
  {
#line 3882 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3885 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3887 "string.parse_util.c"
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
#line 3948 "string.parse_util.c"
  {
#line 3950 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3953 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3955 "string.parse_util.c"
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
#line 4016 "string.parse_util.c"
  {
#line 4018 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 4021 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 4023 "string.parse_util.c"
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
#line 4052 "string.parse_util.c"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 84 "string.parse_util.m"
    else
#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
      switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__2_2)) {
#line 84 "string.parse_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
        case (MR_Integer) 0:
#line 84 "string.parse_util.m"
          {
#line 84 "string.parse_util.m"
            MR_Integer mercury__string__parse_util__V_343_343 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
            MR_Integer mercury__string__parse_util__V_344_344 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
            switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) {
#line 84 "string.parse_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
              case (MR_Integer) 0:
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
#line 4108 "string.parse_util.c"
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
                break;
#line 84 "string.parse_util.m"
              case (MR_Integer) 1:
#line 4150 "string.parse_util.c"
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                break;
#line 84 "string.parse_util.m"
              case (MR_Integer) 2:
#line 4156 "string.parse_util.c"
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                break;
#line 84 "string.parse_util.m"
              case (MR_Integer) 3:
#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 84 "string.parse_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
                  case (MR_Integer) 0:
#line 4169 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 4175 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 4181 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 3:
#line 4187 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 4:
#line 4193 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 5:
#line 4199 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                }
#line 84 "string.parse_util.m"
                break;
#line 84 "string.parse_util.m"
            }
#line 84 "string.parse_util.m"
          }
#line 84 "string.parse_util.m"
          break;
#line 84 "string.parse_util.m"
        case (MR_Integer) 1:
#line 84 "string.parse_util.m"
          {
#line 84 "string.parse_util.m"
            MR_Char mercury__string__parse_util__V_349_349 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
            MR_Integer mercury__string__parse_util__V_350_350 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
            switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) {
#line 84 "string.parse_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
              case (MR_Integer) 0:
#line 4229 "string.parse_util.c"
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                break;
#line 84 "string.parse_util.m"
              case (MR_Integer) 1:
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
#line 4266 "string.parse_util.c"
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

#line 4296 "string.parse_util.c"

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

#line 4316 "string.parse_util.c"

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
                break;
#line 84 "string.parse_util.m"
              case (MR_Integer) 2:
#line 4353 "string.parse_util.c"
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                break;
#line 84 "string.parse_util.m"
              case (MR_Integer) 3:
#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 84 "string.parse_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
                  case (MR_Integer) 0:
#line 4366 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 4372 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 4378 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 3:
#line 4384 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 4:
#line 4390 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 5:
#line 4396 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                }
#line 84 "string.parse_util.m"
                break;
#line 84 "string.parse_util.m"
            }
#line 84 "string.parse_util.m"
          }
#line 84 "string.parse_util.m"
          break;
#line 84 "string.parse_util.m"
        case (MR_Integer) 2:
#line 84 "string.parse_util.m"
          {
#line 84 "string.parse_util.m"
            MR_Word mercury__string__parse_util__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
#line 84 "string.parse_util.m"
            MR_Char mercury__string__parse_util__V_352_352 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));
#line 84 "string.parse_util.m"
            MR_Integer mercury__string__parse_util__V_353_353 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
            switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) {
#line 84 "string.parse_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
              case (MR_Integer) 0:
#line 4428 "string.parse_util.c"
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                break;
#line 84 "string.parse_util.m"
              case (MR_Integer) 1:
#line 4434 "string.parse_util.c"
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                break;
#line 84 "string.parse_util.m"
              case (MR_Integer) 2:
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
#line 4473 "string.parse_util.c"
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

#line 4505 "string.parse_util.c"

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

#line 4525 "string.parse_util.c"

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
#line 4554 "string.parse_util.c"
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
                break;
#line 84 "string.parse_util.m"
              case (MR_Integer) 3:
#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 84 "string.parse_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
                  case (MR_Integer) 0:
#line 4610 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 4616 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 4622 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 3:
#line 4628 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 4:
#line 4634 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 5:
#line 4640 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                }
#line 84 "string.parse_util.m"
                break;
#line 84 "string.parse_util.m"
            }
#line 84 "string.parse_util.m"
          }
#line 84 "string.parse_util.m"
          break;
#line 84 "string.parse_util.m"
        case (MR_Integer) 3:
#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)))) {
#line 84 "string.parse_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
            case (MR_Integer) 0:
#line 84 "string.parse_util.m"
              {
#line 84 "string.parse_util.m"
                MR_Char mercury__string__parse_util__V_341_341 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
#line 84 "string.parse_util.m"
                MR_Integer mercury__string__parse_util__V_342_342 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));

#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
                switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) {
#line 84 "string.parse_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
                  case (MR_Integer) 0:
#line 4677 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 4683 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 4689 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 3:
#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 84 "string.parse_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
                      case (MR_Integer) 0:
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
#line 4733 "string.parse_util.c"
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

#line 4763 "string.parse_util.c"

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

#line 4783 "string.parse_util.c"

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
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 1:
#line 4820 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 2:
#line 4826 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 3:
#line 4832 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 4:
#line 4838 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 5:
#line 4844 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                    }
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                }
#line 84 "string.parse_util.m"
              }
#line 84 "string.parse_util.m"
              break;
#line 84 "string.parse_util.m"
            case (MR_Integer) 1:
#line 84 "string.parse_util.m"
              {
#line 84 "string.parse_util.m"
                MR_Word mercury__string__parse_util__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
#line 84 "string.parse_util.m"
                MR_Integer mercury__string__parse_util__V_348_348 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));

#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
                switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) {
#line 84 "string.parse_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
                  case (MR_Integer) 0:
#line 4874 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 4880 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 4886 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 3:
#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 84 "string.parse_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
                      case (MR_Integer) 0:
#line 4899 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 1:
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
#line 4936 "string.parse_util.c"
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
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 2:
#line 4983 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 3:
#line 4989 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 4:
#line 4995 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 5:
#line 5001 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                    }
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                }
#line 84 "string.parse_util.m"
              }
#line 84 "string.parse_util.m"
              break;
#line 84 "string.parse_util.m"
            case (MR_Integer) 2:
#line 84 "string.parse_util.m"
              {
#line 84 "string.parse_util.m"
                MR_Integer mercury__string__parse_util__V_340_340 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));

#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
                switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) {
#line 84 "string.parse_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
                  case (MR_Integer) 0:
#line 5029 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 5035 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 5041 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 3:
#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 84 "string.parse_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
                      case (MR_Integer) 0:
#line 5054 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 1:
#line 5060 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 2:
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
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 3:
#line 5099 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 4:
#line 5105 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 5:
#line 5111 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                    }
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                }
#line 84 "string.parse_util.m"
              }
#line 84 "string.parse_util.m"
              break;
#line 84 "string.parse_util.m"
            case (MR_Integer) 3:
#line 84 "string.parse_util.m"
              {
#line 84 "string.parse_util.m"
                MR_Word mercury__string__parse_util__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
#line 84 "string.parse_util.m"
                MR_Integer mercury__string__parse_util__V_346_346 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));

#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
                switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) {
#line 84 "string.parse_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
                  case (MR_Integer) 0:
#line 5141 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 5147 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 5153 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 3:
#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 84 "string.parse_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
                      case (MR_Integer) 0:
#line 5166 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 1:
#line 5172 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 2:
#line 5178 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 3:
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
#line 5215 "string.parse_util.c"
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
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 4:
#line 5262 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 5:
#line 5268 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                    }
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                }
#line 84 "string.parse_util.m"
              }
#line 84 "string.parse_util.m"
              break;
#line 84 "string.parse_util.m"
            case (MR_Integer) 4:
#line 84 "string.parse_util.m"
              {
#line 84 "string.parse_util.m"
                MR_Integer mercury__string__parse_util__V_339_339 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));

#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
                switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) {
#line 84 "string.parse_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
                  case (MR_Integer) 0:
#line 5296 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 5302 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 5308 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 3:
#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 84 "string.parse_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
                      case (MR_Integer) 0:
#line 5321 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 1:
#line 5327 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 2:
#line 5333 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 3:
#line 5339 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 4:
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
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 5:
#line 5378 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                    }
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                }
#line 84 "string.parse_util.m"
              }
#line 84 "string.parse_util.m"
              break;
#line 84 "string.parse_util.m"
            case (MR_Integer) 5:
#line 84 "string.parse_util.m"
              {
#line 84 "string.parse_util.m"
                MR_Integer mercury__string__parse_util__V_337_337 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 2)));
#line 84 "string.parse_util.m"
                MR_Integer mercury__string__parse_util__V_338_338 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 1)));

#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
                switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__3_3)) {
#line 84 "string.parse_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
                  case (MR_Integer) 0:
#line 5408 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 5414 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 5420 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 3:
#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 84 "string.parse_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
                      case (MR_Integer) 0:
#line 5433 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 1:
#line 5439 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 2:
#line 5445 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 3:
#line 5451 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 4:
#line 5457 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 5:
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
#line 5494 "string.parse_util.c"
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
                        break;
#line 84 "string.parse_util.m"
                    }
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                }
#line 84 "string.parse_util.m"
              }
#line 84 "string.parse_util.m"
              break;
#line 84 "string.parse_util.m"
          }
#line 84 "string.parse_util.m"
          break;
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
#line 84 "string.parse_util.m"
      switch (MR_tag((MR_Word) mercury__string__parse_util__HeadVar__1_1)) {
#line 84 "string.parse_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
        case (MR_Integer) 0:
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
#line 5609 "string.parse_util.c"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_3_3 == mercury__string__parse_util__V_5_5);
#line 84 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 5613 "string.parse_util.c"
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_4_4 == mercury__string__parse_util__V_6_6);
#line 84 "string.parse_util.m"
              }
#line 84 "string.parse_util.m"
          }
#line 84 "string.parse_util.m"
          break;
#line 84 "string.parse_util.m"
        case (MR_Integer) 1:
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
#line 5644 "string.parse_util.c"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_7_7 == mercury__string__parse_util__V_9_9);
#line 84 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 5648 "string.parse_util.c"
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_8_8 == mercury__string__parse_util__V_10_10);
#line 84 "string.parse_util.m"
              }
#line 84 "string.parse_util.m"
          }
#line 84 "string.parse_util.m"
          break;
#line 84 "string.parse_util.m"
        case (MR_Integer) 2:
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
#line 5685 "string.parse_util.c"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_11_11 == mercury__string__parse_util__V_14_14);
#line 84 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                  {
#line 5691 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_12_12 == mercury__string__parse_util__V_15_15);
#line 84 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 5695 "string.parse_util.c"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_13_13 == mercury__string__parse_util__V_16_16);
#line 84 "string.parse_util.m"
                  }
#line 84 "string.parse_util.m"
              }
#line 84 "string.parse_util.m"
          }
#line 84 "string.parse_util.m"
          break;
#line 84 "string.parse_util.m"
        case (MR_Integer) 3:
#line 84 "string.parse_util.m"
#line 84 "string.parse_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 84 "string.parse_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 84 "string.parse_util.m"
            case (MR_Integer) 0:
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
#line 5735 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_17_17 == mercury__string__parse_util__V_19_19);
#line 84 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 5739 "string.parse_util.c"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_18_18 == mercury__string__parse_util__V_20_20);
#line 84 "string.parse_util.m"
                  }
#line 84 "string.parse_util.m"
              }
#line 84 "string.parse_util.m"
              break;
#line 84 "string.parse_util.m"
            case (MR_Integer) 1:
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
#line 5770 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_21_21 == mercury__string__parse_util__V_23_23);
#line 84 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 5774 "string.parse_util.c"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_22_22 == mercury__string__parse_util__V_24_24);
#line 84 "string.parse_util.m"
                  }
#line 84 "string.parse_util.m"
              }
#line 84 "string.parse_util.m"
              break;
#line 84 "string.parse_util.m"
            case (MR_Integer) 2:
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
#line 5799 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_25_25 == mercury__string__parse_util__V_26_26);
#line 84 "string.parse_util.m"
                  }
#line 84 "string.parse_util.m"
              }
#line 84 "string.parse_util.m"
              break;
#line 84 "string.parse_util.m"
            case (MR_Integer) 3:
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
#line 5830 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_27_27 == mercury__string__parse_util__V_29_29);
#line 84 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 5834 "string.parse_util.c"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_28_28 == mercury__string__parse_util__V_30_30);
#line 84 "string.parse_util.m"
                  }
#line 84 "string.parse_util.m"
              }
#line 84 "string.parse_util.m"
              break;
#line 84 "string.parse_util.m"
            case (MR_Integer) 4:
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
#line 5859 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_31_31 == mercury__string__parse_util__V_32_32);
#line 84 "string.parse_util.m"
                  }
#line 84 "string.parse_util.m"
              }
#line 84 "string.parse_util.m"
              break;
#line 84 "string.parse_util.m"
            case (MR_Integer) 5:
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
#line 5890 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_33_33 == mercury__string__parse_util__V_35_35);
#line 84 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 5894 "string.parse_util.c"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_34_34 == mercury__string__parse_util__V_36_36);
#line 84 "string.parse_util.m"
                  }
#line 84 "string.parse_util.m"
              }
#line 84 "string.parse_util.m"
              break;
#line 84 "string.parse_util.m"
          }
#line 84 "string.parse_util.m"
          break;
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
#line 5971 "string.parse_util.c"
  {
#line 5973 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 5976 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 5978 "string.parse_util.c"
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
#line 6007 "string.parse_util.c"
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
#line 6019 "string.parse_util.c"
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 126 "string.parse_util.m"
    else
#line 126 "string.parse_util.m"
      {
#line 126 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

#line 126 "string.parse_util.m"
        if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6030 "string.parse_util.c"
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
#line 6115 "string.parse_util.c"
            mercury__string__parse_util__TypeInfo_9_9 = (MR_Word) &mercury__string__parse_util_scalar_common_1[0];
#line 6117 "string.parse_util.c"
            {
#line 6119 "string.parse_util.c"
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

#line 338 "string.parse_util.m"
void MR_CALL 
mercury__string__parse_util__get_number_prefix_loop_4_p_0(
#line 338 "string.parse_util.m"
  MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_0_11,
#line 338 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__STATE_VARIABLE_Chars_12,
#line 338 "string.parse_util.m"
  MR_Integer mercury__string__parse_util__N0_6,
#line 338 "string.parse_util.m"
  MR_Integer * mercury__string__parse_util__N_7)
#line 338 "string.parse_util.m"
{
#line 348 "string.parse_util.m"
  while (MR_TRUE)
#line 348 "string.parse_util.m"
    {
#line 348 "string.parse_util.m"
      /* tailcall optimized into a loop */
#line 348 "string.parse_util.m"
      {
#line 348 "string.parse_util.m"
        MR_bool mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__STATE_VARIABLE_Chars_0_11)) == (MR_mktag((MR_Integer) 1)));
#line 348 "string.parse_util.m"
        MR_Integer mercury__string__parse_util__CharValue_9;
#line 348 "string.parse_util.m"
        MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_13_13;
#line 343 "string.parse_util.m"
        MR_Char mercury__string__parse_util__Char_8;

#line 343 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 343 "string.parse_util.m"
          {
#line 343 "string.parse_util.m"
            mercury__string__parse_util__Char_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_11, (MR_Integer) 0)));
#line 343 "string.parse_util.m"
            mercury__string__parse_util__STATE_VARIABLE_Chars_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_11, (MR_Integer) 1)));
#line 344 "string.parse_util.m"
            {
#line 344 "string.parse_util.m"
              mercury__string__parse_util__succeeded = mercury__char__decimal_digit_to_int_2_p_0(mercury__string__parse_util__Char_8, &mercury__string__parse_util__CharValue_9);
            }
#line 343 "string.parse_util.m"
          }
#line 348 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 346 "string.parse_util.m"
          {
#line 346 "string.parse_util.m"
            MR_Integer mercury__string__parse_util__N1_10;
#line 346 "string.parse_util.m"
            MR_Integer mercury__string__parse_util__V_14_14 = (mercury__string__parse_util__N0_6 * (MR_Integer) 10);

#line 346 "string.parse_util.m"
            mercury__string__parse_util__N1_10 = (mercury__string__parse_util__V_14_14 + mercury__string__parse_util__CharValue_9);
#line 347 "string.parse_util.m"
            /* direct tailcall eliminated */
#line 347 "string.parse_util.m"
            {
#line 347 "string.parse_util.m"
              MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_0__tmp_copy_11 = mercury__string__parse_util__STATE_VARIABLE_Chars_13_13;
#line 347 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__N0__tmp_copy_6 = mercury__string__parse_util__N1_10;

#line 347 "string.parse_util.m"
              mercury__string__parse_util__N0_6 = mercury__string__parse_util__N0__tmp_copy_6;
#line 347 "string.parse_util.m"
              mercury__string__parse_util__STATE_VARIABLE_Chars_0_11 = mercury__string__parse_util__STATE_VARIABLE_Chars_0__tmp_copy_11;
#line 347 "string.parse_util.m"
            }
#line 347 "string.parse_util.m"
            continue;
#line 346 "string.parse_util.m"
          }
#line 348 "string.parse_util.m"
        else
#line 349 "string.parse_util.m"
          {
#line 349 "string.parse_util.m"
            *mercury__string__parse_util__N_7 = mercury__string__parse_util__N0_6;
#line 349 "string.parse_util.m"
            *mercury__string__parse_util__STATE_VARIABLE_Chars_12 = mercury__string__parse_util__STATE_VARIABLE_Chars_0_11;
#line 349 "string.parse_util.m"
          }
#line 348 "string.parse_util.m"
      }
#line 348 "string.parse_util.m"
      break;
#line 348 "string.parse_util.m"
    }
#line 338 "string.parse_util.m"
}

#line 280 "string.parse_util.m"
static MR_String MR_CALL 
mercury__string__parse_util__specifier_char_1_f_0(
#line 280 "string.parse_util.m"
  MR_Char mercury__string__parse_util__SpecChar_3)
#line 280 "string.parse_util.m"
{
#line 282 "string.parse_util.m"
  {
#line 282 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 282 "string.parse_util.m"
    MR_String mercury__string__parse_util__HeadVar__2_2;
#line 282 "string.parse_util.m"
    MR_String mercury__string__parse_util__V_5_5;
#line 282 "string.parse_util.m"
    MR_String mercury__string__parse_util__V_6_6;
#line 282 "string.parse_util.m"
    MR_Word mercury__string__parse_util__V_5_12;
#line 282 "string.parse_util.m"
    MR_Word mercury__string__parse_util__V_6_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 705 "string.opt"
    {
#line 705 "string.opt"
      mercury__string__parse_util__V_5_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "string.opt"
      MR_hl_field(MR_mktag(1), mercury__string__parse_util__V_5_12, 0) = ((MR_Box) (MR_Word) (mercury__string__parse_util__SpecChar_3));
#line 705 "string.opt"
      MR_hl_field(MR_mktag(1), mercury__string__parse_util__V_5_12, 1) = ((MR_Box) (mercury__string__parse_util__V_6_13));
#line 705 "string.opt"
    }
#line 707 "string.opt"
    {
#line 707 "string.opt"
      mercury__string__to_char_list_2_p_1(&mercury__string__parse_util__V_6_6, mercury__string__parse_util__V_5_12);
    }
#line 415 "string.opt"
    {
#line 415 "string.opt"
      mercury__string__append_3_p_2(mercury__string__parse_util__V_6_6, (MR_String) "\'", &mercury__string__parse_util__V_5_5);
    }
#line 415 "string.opt"
    {
#line 415 "string.opt"
      mercury__string__append_3_p_2((MR_String) "specifier character \140", mercury__string__parse_util__V_5_5, &mercury__string__parse_util__HeadVar__2_2);
    }
#line 282 "string.parse_util.m"
    return mercury__string__parse_util__HeadVar__2_2;
#line 282 "string.parse_util.m"
  }
#line 280 "string.parse_util.m"
}

#line 253 "string.parse_util.m"
static MR_String MR_CALL 
mercury__string__parse_util__nth_1_f_0(
#line 253 "string.parse_util.m"
  MR_Integer mercury__string__parse_util__N_3)
#line 253 "string.parse_util.m"
{
#line 258 "string.parse_util.m"
  {
#line 258 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 1);
#line 258 "string.parse_util.m"
    MR_String mercury__string__parse_util__NStr_4;

#line 258 "string.parse_util.m"
    if (mercury__string__parse_util__succeeded)
#line 257 "string.parse_util.m"
      mercury__string__parse_util__NStr_4 = (MR_String) "first";
#line 258 "string.parse_util.m"
    else
#line 260 "string.parse_util.m"
      {
#line 258 "string.parse_util.m"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 2);
#line 260 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 259 "string.parse_util.m"
          mercury__string__parse_util__NStr_4 = (MR_String) "second";
#line 260 "string.parse_util.m"
        else
#line 262 "string.parse_util.m"
          {
#line 260 "string.parse_util.m"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 3);
#line 262 "string.parse_util.m"
            if (mercury__string__parse_util__succeeded)
#line 261 "string.parse_util.m"
              mercury__string__parse_util__NStr_4 = (MR_String) "third";
#line 262 "string.parse_util.m"
            else
#line 264 "string.parse_util.m"
              {
#line 262 "string.parse_util.m"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 4);
#line 264 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 263 "string.parse_util.m"
                  mercury__string__parse_util__NStr_4 = (MR_String) "fourth";
#line 264 "string.parse_util.m"
                else
#line 266 "string.parse_util.m"
                  {
#line 264 "string.parse_util.m"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 5);
#line 266 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 265 "string.parse_util.m"
                      mercury__string__parse_util__NStr_4 = (MR_String) "fifth";
#line 266 "string.parse_util.m"
                    else
#line 268 "string.parse_util.m"
                      {
#line 266 "string.parse_util.m"
                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 6);
#line 268 "string.parse_util.m"
                        if (mercury__string__parse_util__succeeded)
#line 267 "string.parse_util.m"
                          mercury__string__parse_util__NStr_4 = (MR_String) "sixth";
#line 268 "string.parse_util.m"
                        else
#line 270 "string.parse_util.m"
                          {
#line 268 "string.parse_util.m"
                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 7);
#line 270 "string.parse_util.m"
                            if (mercury__string__parse_util__succeeded)
#line 269 "string.parse_util.m"
                              mercury__string__parse_util__NStr_4 = (MR_String) "seventh";
#line 270 "string.parse_util.m"
                            else
#line 272 "string.parse_util.m"
                              {
#line 270 "string.parse_util.m"
                                mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 8);
#line 272 "string.parse_util.m"
                                if (mercury__string__parse_util__succeeded)
#line 271 "string.parse_util.m"
                                  mercury__string__parse_util__NStr_4 = (MR_String) "eighth";
#line 272 "string.parse_util.m"
                                else
#line 274 "string.parse_util.m"
                                  {
#line 272 "string.parse_util.m"
                                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 9);
#line 274 "string.parse_util.m"
                                    if (mercury__string__parse_util__succeeded)
#line 273 "string.parse_util.m"
                                      mercury__string__parse_util__NStr_4 = (MR_String) "ninth";
#line 274 "string.parse_util.m"
                                    else
#line 276 "string.parse_util.m"
                                      {
#line 274 "string.parse_util.m"
                                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 10);
#line 276 "string.parse_util.m"
                                        if (mercury__string__parse_util__succeeded)
#line 275 "string.parse_util.m"
                                          mercury__string__parse_util__NStr_4 = (MR_String) "tenth";
#line 276 "string.parse_util.m"
                                        else
#line 277 "string.parse_util.m"
                                          {
#line 277 "string.parse_util.m"
                                            MR_String mercury__string__parse_util__V_5_5;

#line 714 "string.opt"
                                            {
#line 714 "string.opt"
                                              mercury__string__int_to_base_string_3_p_0(mercury__string__parse_util__N_3, (MR_Integer) 10, &mercury__string__parse_util__V_5_5);
                                            }
#line 415 "string.opt"
                                            {
#line 415 "string.opt"
                                              mercury__string__append_3_p_2(mercury__string__parse_util__V_5_5, (MR_String) "th", &mercury__string__parse_util__NStr_4);
                                            }
#line 277 "string.parse_util.m"
                                          }
#line 276 "string.parse_util.m"
                                      }
#line 274 "string.parse_util.m"
                                  }
#line 272 "string.parse_util.m"
                              }
#line 270 "string.parse_util.m"
                          }
#line 268 "string.parse_util.m"
                      }
#line 266 "string.parse_util.m"
                  }
#line 264 "string.parse_util.m"
              }
#line 262 "string.parse_util.m"
          }
#line 260 "string.parse_util.m"
      }
#line 258 "string.parse_util.m"
    return mercury__string__parse_util__NStr_4;
#line 258 "string.parse_util.m"
  }
#line 253 "string.parse_util.m"
}

#line 248 "string.parse_util.m"
static MR_String MR_CALL 
mercury__string__parse_util__nth_specifier_1_f_0(
#line 248 "string.parse_util.m"
  MR_Integer mercury__string__parse_util__SpecNum_3)
#line 248 "string.parse_util.m"
{
#line 250 "string.parse_util.m"
  {
#line 250 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 1);
#line 250 "string.parse_util.m"
    MR_String mercury__string__parse_util__HeadVar__2_2;
#line 250 "string.parse_util.m"
    MR_String mercury__string__parse_util__V_5_5;
#line 250 "string.parse_util.m"
    MR_String mercury__string__parse_util__V_6_6;

#line 258 "string.parse_util.m"
    if (mercury__string__parse_util__succeeded)
#line 257 "string.parse_util.m"
      mercury__string__parse_util__V_6_6 = (MR_String) "first";
#line 258 "string.parse_util.m"
    else
#line 260 "string.parse_util.m"
      {
#line 258 "string.parse_util.m"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 2);
#line 260 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 259 "string.parse_util.m"
          mercury__string__parse_util__V_6_6 = (MR_String) "second";
#line 260 "string.parse_util.m"
        else
#line 262 "string.parse_util.m"
          {
#line 260 "string.parse_util.m"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 3);
#line 262 "string.parse_util.m"
            if (mercury__string__parse_util__succeeded)
#line 261 "string.parse_util.m"
              mercury__string__parse_util__V_6_6 = (MR_String) "third";
#line 262 "string.parse_util.m"
            else
#line 264 "string.parse_util.m"
              {
#line 262 "string.parse_util.m"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 4);
#line 264 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 263 "string.parse_util.m"
                  mercury__string__parse_util__V_6_6 = (MR_String) "fourth";
#line 264 "string.parse_util.m"
                else
#line 266 "string.parse_util.m"
                  {
#line 264 "string.parse_util.m"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 5);
#line 266 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 265 "string.parse_util.m"
                      mercury__string__parse_util__V_6_6 = (MR_String) "fifth";
#line 266 "string.parse_util.m"
                    else
#line 268 "string.parse_util.m"
                      {
#line 266 "string.parse_util.m"
                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 6);
#line 268 "string.parse_util.m"
                        if (mercury__string__parse_util__succeeded)
#line 267 "string.parse_util.m"
                          mercury__string__parse_util__V_6_6 = (MR_String) "sixth";
#line 268 "string.parse_util.m"
                        else
#line 270 "string.parse_util.m"
                          {
#line 268 "string.parse_util.m"
                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 7);
#line 270 "string.parse_util.m"
                            if (mercury__string__parse_util__succeeded)
#line 269 "string.parse_util.m"
                              mercury__string__parse_util__V_6_6 = (MR_String) "seventh";
#line 270 "string.parse_util.m"
                            else
#line 272 "string.parse_util.m"
                              {
#line 270 "string.parse_util.m"
                                mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 8);
#line 272 "string.parse_util.m"
                                if (mercury__string__parse_util__succeeded)
#line 271 "string.parse_util.m"
                                  mercury__string__parse_util__V_6_6 = (MR_String) "eighth";
#line 272 "string.parse_util.m"
                                else
#line 274 "string.parse_util.m"
                                  {
#line 272 "string.parse_util.m"
                                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 9);
#line 274 "string.parse_util.m"
                                    if (mercury__string__parse_util__succeeded)
#line 273 "string.parse_util.m"
                                      mercury__string__parse_util__V_6_6 = (MR_String) "ninth";
#line 274 "string.parse_util.m"
                                    else
#line 276 "string.parse_util.m"
                                      {
#line 274 "string.parse_util.m"
                                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 10);
#line 276 "string.parse_util.m"
                                        if (mercury__string__parse_util__succeeded)
#line 275 "string.parse_util.m"
                                          mercury__string__parse_util__V_6_6 = (MR_String) "tenth";
#line 276 "string.parse_util.m"
                                        else
#line 277 "string.parse_util.m"
                                          {
#line 277 "string.parse_util.m"
                                            MR_String mercury__string__parse_util__V_10_10;

#line 714 "string.opt"
                                            {
#line 714 "string.opt"
                                              mercury__string__int_to_base_string_3_p_0(mercury__string__parse_util__SpecNum_3, (MR_Integer) 10, &mercury__string__parse_util__V_10_10);
                                            }
#line 415 "string.opt"
                                            {
#line 415 "string.opt"
                                              mercury__string__append_3_p_2(mercury__string__parse_util__V_10_10, (MR_String) "th", &mercury__string__parse_util__V_6_6);
                                            }
#line 277 "string.parse_util.m"
                                          }
#line 276 "string.parse_util.m"
                                      }
#line 274 "string.parse_util.m"
                                  }
#line 272 "string.parse_util.m"
                              }
#line 270 "string.parse_util.m"
                          }
#line 268 "string.parse_util.m"
                      }
#line 266 "string.parse_util.m"
                  }
#line 264 "string.parse_util.m"
              }
#line 262 "string.parse_util.m"
          }
#line 260 "string.parse_util.m"
      }
#line 415 "string.opt"
    {
#line 415 "string.opt"
      mercury__string__append_3_p_2(mercury__string__parse_util__V_6_6, (MR_String) " conversion specifier", &mercury__string__parse_util__V_5_5);
    }
#line 415 "string.opt"
    {
#line 415 "string.opt"
      mercury__string__append_3_p_2((MR_String) "The ", mercury__string__parse_util__V_5_5, &mercury__string__parse_util__HeadVar__2_2);
    }
#line 250 "string.parse_util.m"
    return mercury__string__parse_util__HeadVar__2_2;
#line 250 "string.parse_util.m"
  }
#line 248 "string.parse_util.m"
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
#line 332 "string.parse_util.m"
  {
#line 332 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__STATE_VARIABLE_Chars_0_8)) == (MR_mktag((MR_Integer) 1)));
#line 332 "string.parse_util.m"
    MR_Char mercury__string__parse_util__Char_6;
#line 332 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CharValue_7;
#line 332 "string.parse_util.m"
    MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_10_10;

#line 333 "string.parse_util.m"
    if (mercury__string__parse_util__succeeded)
#line 333 "string.parse_util.m"
      {
#line 333 "string.parse_util.m"
        mercury__string__parse_util__Char_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_8, (MR_Integer) 0)));
#line 333 "string.parse_util.m"
        mercury__string__parse_util__STATE_VARIABLE_Chars_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_8, (MR_Integer) 1)));
#line 334 "string.parse_util.m"
        {
#line 334 "string.parse_util.m"
          mercury__string__parse_util__succeeded = mercury__char__decimal_digit_to_int_2_p_0(mercury__string__parse_util__Char_6, &mercury__string__parse_util__CharValue_7);
        }
#line 332 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 332 "string.parse_util.m"
          {
#line 335 "string.parse_util.m"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__Char_6 == (MR_Char) 48);
#line 335 "string.parse_util.m"
            mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
#line 332 "string.parse_util.m"
            if (mercury__string__parse_util__succeeded)
#line 332 "string.parse_util.m"
              {
#line 336 "string.parse_util.m"
                {
#line 336 "string.parse_util.m"
                  mercury__string__parse_util__get_number_prefix_loop_4_p_0(mercury__string__parse_util__STATE_VARIABLE_Chars_10_10, mercury__string__parse_util__STATE_VARIABLE_Chars_9, mercury__string__parse_util__CharValue_7, mercury__string__parse_util__N_5);
                }
#line 336 "string.parse_util.m"
                mercury__string__parse_util__succeeded = MR_TRUE;
#line 332 "string.parse_util.m"
              }
#line 332 "string.parse_util.m"
          }
#line 333 "string.parse_util.m"
      }
#line 332 "string.parse_util.m"
    return mercury__string__parse_util__succeeded;
#line 332 "string.parse_util.m"
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
#line 329 "string.parse_util.m"
  {
#line 329 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;

#line 330 "string.parse_util.m"
    {
#line 330 "string.parse_util.m"
      mercury__string__parse_util__get_number_prefix_loop_4_p_0(mercury__string__parse_util__STATE_VARIABLE_Chars_0_6, mercury__string__parse_util__STATE_VARIABLE_Chars_7, (MR_Integer) 0, mercury__string__parse_util__N_5);
#line 330 "string.parse_util.m"
      return;
    }
#line 329 "string.parse_util.m"
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
#line 325 "string.parse_util.m"
  while (MR_TRUE)
#line 325 "string.parse_util.m"
    {
#line 325 "string.parse_util.m"
      /* tailcall optimized into a loop */
#line 325 "string.parse_util.m"
      {
#line 325 "string.parse_util.m"
        MR_bool mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__STATE_VARIABLE_Chars_0_8)) == (MR_mktag((MR_Integer) 1)));
#line 325 "string.parse_util.m"
        MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_12_12;
#line 325 "string.parse_util.m"
        MR_Word mercury__string__parse_util__STATE_VARIABLE_Flags_21_21;
#line 316 "string.parse_util.m"
        MR_Char mercury__string__parse_util__Char_7;
#line 316 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_50_50;
#line 316 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_51_51;
#line 316 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_52_52;
#line 316 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_53_53;
#line 316 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_54_54;

#line 316 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 316 "string.parse_util.m"
          {
#line 316 "string.parse_util.m"
            mercury__string__parse_util__Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_8, (MR_Integer) 0)));
#line 316 "string.parse_util.m"
            mercury__string__parse_util__STATE_VARIABLE_Chars_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_8, (MR_Integer) 1)));
#line 318 "string.parse_util.m"
            mercury__string__parse_util__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 318 "string.parse_util.m"
            mercury__string__parse_util__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 318 "string.parse_util.m"
            mercury__string__parse_util__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 318 "string.parse_util.m"
            mercury__string__parse_util__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 318 "string.parse_util.m"
            mercury__string__parse_util__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 318 "string.parse_util.m"
#line 318 "string.parse_util.m"
            switch (mercury__string__parse_util__Char_7) {
#line 318 "string.parse_util.m"
              default:
#line 318 "string.parse_util.m"
                mercury__string__parse_util__succeeded = MR_FALSE;
#line 318 "string.parse_util.m"
                break;
#line 318 "string.parse_util.m"
              case (MR_Char) 32:
#line 318 "string.parse_util.m"
                {
#line 318 "string.parse_util.m"
                  {
#line 318 "string.parse_util.m"
                    mercury__string__parse_util__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 318 "string.parse_util.m"
                    MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) ((mercury__string__parse_util__V_54_54 | (((((MR_Integer) 1 << (MR_Integer) 1)) | ((((mercury__string__parse_util__V_52_52 << (MR_Integer) 2)) | ((((mercury__string__parse_util__V_51_51 << (MR_Integer) 3)) | ((mercury__string__parse_util__V_50_50 << (MR_Integer) 4)))))))))));
#line 318 "string.parse_util.m"
                  }
#line 318 "string.parse_util.m"
                  mercury__string__parse_util__succeeded = MR_TRUE;
#line 318 "string.parse_util.m"
                }
#line 318 "string.parse_util.m"
                break;
#line 318 "string.parse_util.m"
              case (MR_Char) 35:
#line 317 "string.parse_util.m"
                {
#line 317 "string.parse_util.m"
                  {
#line 317 "string.parse_util.m"
                    mercury__string__parse_util__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 317 "string.parse_util.m"
                    MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) (((MR_Integer) 1 | ((((mercury__string__parse_util__V_53_53 << (MR_Integer) 1)) | ((((mercury__string__parse_util__V_52_52 << (MR_Integer) 2)) | ((((mercury__string__parse_util__V_51_51 << (MR_Integer) 3)) | ((mercury__string__parse_util__V_50_50 << (MR_Integer) 4)))))))))));
#line 317 "string.parse_util.m"
                  }
#line 317 "string.parse_util.m"
                  mercury__string__parse_util__succeeded = MR_TRUE;
#line 317 "string.parse_util.m"
                }
#line 318 "string.parse_util.m"
                break;
#line 318 "string.parse_util.m"
              case (MR_Char) 43:
#line 321 "string.parse_util.m"
                {
#line 321 "string.parse_util.m"
                  {
#line 321 "string.parse_util.m"
                    mercury__string__parse_util__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 321 "string.parse_util.m"
                    MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) ((mercury__string__parse_util__V_54_54 | ((((mercury__string__parse_util__V_53_53 << (MR_Integer) 1)) | ((((mercury__string__parse_util__V_52_52 << (MR_Integer) 2)) | ((((mercury__string__parse_util__V_51_51 << (MR_Integer) 3)) | (((MR_Integer) 1 << (MR_Integer) 4)))))))))));
#line 321 "string.parse_util.m"
                  }
#line 321 "string.parse_util.m"
                  mercury__string__parse_util__succeeded = MR_TRUE;
#line 321 "string.parse_util.m"
                }
#line 318 "string.parse_util.m"
                break;
#line 318 "string.parse_util.m"
              case (MR_Char) 45:
#line 320 "string.parse_util.m"
                {
#line 320 "string.parse_util.m"
                  {
#line 320 "string.parse_util.m"
                    mercury__string__parse_util__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 320 "string.parse_util.m"
                    MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) ((mercury__string__parse_util__V_54_54 | ((((mercury__string__parse_util__V_53_53 << (MR_Integer) 1)) | ((((mercury__string__parse_util__V_52_52 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | ((mercury__string__parse_util__V_50_50 << (MR_Integer) 4)))))))))));
#line 320 "string.parse_util.m"
                  }
#line 320 "string.parse_util.m"
                  mercury__string__parse_util__succeeded = MR_TRUE;
#line 320 "string.parse_util.m"
                }
#line 318 "string.parse_util.m"
                break;
#line 318 "string.parse_util.m"
              case (MR_Char) 48:
#line 319 "string.parse_util.m"
                {
#line 319 "string.parse_util.m"
                  {
#line 319 "string.parse_util.m"
                    mercury__string__parse_util__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 319 "string.parse_util.m"
                    MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) ((mercury__string__parse_util__V_54_54 | ((((mercury__string__parse_util__V_53_53 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | ((((mercury__string__parse_util__V_51_51 << (MR_Integer) 3)) | ((mercury__string__parse_util__V_50_50 << (MR_Integer) 4)))))))))));
#line 319 "string.parse_util.m"
                  }
#line 319 "string.parse_util.m"
                  mercury__string__parse_util__succeeded = MR_TRUE;
#line 319 "string.parse_util.m"
                }
#line 318 "string.parse_util.m"
                break;
#line 318 "string.parse_util.m"
            }
#line 316 "string.parse_util.m"
          }
#line 325 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 324 "string.parse_util.m"
          {
#line 324 "string.parse_util.m"
            /* direct tailcall eliminated */
#line 324 "string.parse_util.m"
            {
#line 324 "string.parse_util.m"
              MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_0__tmp_copy_8 = mercury__string__parse_util__STATE_VARIABLE_Chars_12_12;
#line 324 "string.parse_util.m"
              MR_Word mercury__string__parse_util__STATE_VARIABLE_Flags_0__tmp_copy_10 = mercury__string__parse_util__STATE_VARIABLE_Flags_21_21;

#line 324 "string.parse_util.m"
              mercury__string__parse_util__STATE_VARIABLE_Flags_0_10 = mercury__string__parse_util__STATE_VARIABLE_Flags_0__tmp_copy_10;
#line 324 "string.parse_util.m"
              mercury__string__parse_util__STATE_VARIABLE_Chars_0_8 = mercury__string__parse_util__STATE_VARIABLE_Chars_0__tmp_copy_8;
#line 324 "string.parse_util.m"
            }
#line 324 "string.parse_util.m"
            continue;
#line 324 "string.parse_util.m"
          }
#line 325 "string.parse_util.m"
        else
#line 326 "string.parse_util.m"
          {
#line 326 "string.parse_util.m"
            *mercury__string__parse_util__STATE_VARIABLE_Flags_11 = mercury__string__parse_util__STATE_VARIABLE_Flags_0_10;
#line 326 "string.parse_util.m"
            *mercury__string__parse_util__STATE_VARIABLE_Chars_9 = mercury__string__parse_util__STATE_VARIABLE_Chars_0_8;
#line 326 "string.parse_util.m"
          }
#line 325 "string.parse_util.m"
      }
#line 325 "string.parse_util.m"
      break;
#line 325 "string.parse_util.m"
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
#line 296 "string.parse_util.m"
  {
#line 296 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;

#line 296 "string.parse_util.m"
    if ((mercury__string__parse_util__Chars_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 307 "string.parse_util.m"
      {
#line 308 "string.parse_util.m"
        *mercury__string__parse_util__NonConversionSpecChars_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 309 "string.parse_util.m"
        *mercury__string__parse_util__GatherEndedBy_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 307 "string.parse_util.m"
      }
#line 296 "string.parse_util.m"
    else
#line 296 "string.parse_util.m"
      {
#line 296 "string.parse_util.m"
        MR_Char mercury__string__parse_util__HeadChar_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__Chars_4, (MR_Integer) 0)));
#line 296 "string.parse_util.m"
        MR_Word mercury__string__parse_util__TailChars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__Chars_4, (MR_Integer) 1)));

#line 297 "string.parse_util.m"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadChar_7 == (MR_Char) 37);
#line 301 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 298 "string.parse_util.m"
          {
#line 298 "string.parse_util.m"
            *mercury__string__parse_util__NonConversionSpecChars_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "string.parse_util.m"
            {
#line 300 "string.parse_util.m"
              MR_Word base;
#line 300 "string.parse_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 300 "string.parse_util.m"
              *mercury__string__parse_util__GatherEndedBy_6 = base;
#line 300 "string.parse_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_util__TailChars_8));
#line 300 "string.parse_util.m"
            }
#line 298 "string.parse_util.m"
          }
#line 301 "string.parse_util.m"
        else
#line 303 "string.parse_util.m"
          {
#line 303 "string.parse_util.m"
            MR_Word mercury__string__parse_util__TailNonConversionSpecChars_9;

#line 302 "string.parse_util.m"
            {
#line 302 "string.parse_util.m"
              mercury__string__parse_util__gather_non_percent_chars_3_p_0(mercury__string__parse_util__TailChars_8, &mercury__string__parse_util__TailNonConversionSpecChars_9, mercury__string__parse_util__GatherEndedBy_6);
            }
#line 304 "string.parse_util.m"
            {
#line 304 "string.parse_util.m"
              MR_Word base;
#line 304 "string.parse_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "string.parse_util.m"
              *mercury__string__parse_util__NonConversionSpecChars_5 = base;
#line 304 "string.parse_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__parse_util__HeadChar_7));
#line 304 "string.parse_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_util__TailNonConversionSpecChars_9));
#line 304 "string.parse_util.m"
            }
#line 303 "string.parse_util.m"
          }
#line 296 "string.parse_util.m"
      }
#line 296 "string.parse_util.m"
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
#line 182 "string.parse_util.m"
    switch (MR_tag((MR_Word) mercury__string__parse_util__Error_3)) {
#line 182 "string.parse_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 182 "string.parse_util.m"
      case (MR_Integer) 0:
#line 182 "string.parse_util.m"
        {
#line 182 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__SpecNum_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__Error_3, (MR_Integer) 0)));
#line 182 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__NumExtraPolyTypes_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
#line 182 "string.parse_util.m"
          MR_String mercury__string__parse_util__Msg0_7;
#line 182 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_73_73;

#line 183 "string.parse_util.m"
          {
#line 183 "string.parse_util.m"
            mercury__string__parse_util__V_73_73 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_5);
          }
#line 183 "string.parse_util.m"
          {
#line 183 "string.parse_util.m"
            mercury__string__parse_util__Msg0_7 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_73_73, (MR_String) " is missing");
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
                  MR_String mercury__string__parse_util__V_77_77;
#line 189 "string.parse_util.m"
                  MR_String mercury__string__parse_util__V_79_79;
#line 189 "string.parse_util.m"
                  MR_String mercury__string__parse_util__V_80_80;
#line 189 "string.parse_util.m"
                  MR_Integer mercury__string__parse_util__V_81_81 = (mercury__string__parse_util__NumExtraPolyTypes_6 - (MR_Integer) 1);

#line 190 "string.parse_util.m"
                  {
#line 190 "string.parse_util.m"
                    mercury__string__parse_util__V_80_80 = mercury__string__int_to_string_1_f_0(mercury__string__parse_util__V_81_81);
                  }
#line 191 "string.parse_util.m"
                  {
#line 191 "string.parse_util.m"
                    mercury__string__parse_util__V_79_79 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_80_80, (MR_String) " extra inputs.");
                  }
#line 190 "string.parse_util.m"
                  {
#line 190 "string.parse_util.m"
                    mercury__string__parse_util__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) ", and there are ", mercury__string__parse_util__V_79_79);
                  }
#line 189 "string.parse_util.m"
                  {
#line 189 "string.parse_util.m"
                    return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Msg0_7, mercury__string__parse_util__V_77_77);
                  }
#line 189 "string.parse_util.m"
                }
#line 188 "string.parse_util.m"
            }
#line 182 "string.parse_util.m"
        }
#line 182 "string.parse_util.m"
        break;
#line 182 "string.parse_util.m"
      case (MR_Integer) 1:
#line 194 "string.parse_util.m"
        {
#line 194 "string.parse_util.m"
          MR_Char mercury__string__parse_util__SpecChar_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
#line 194 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_67_67;
#line 194 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_68_68;
#line 194 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_70_70;
#line 194 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_71_71;
#line 194 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__SpecNum_84 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__Error_3, (MR_Integer) 0)));

#line 195 "string.parse_util.m"
          {
#line 195 "string.parse_util.m"
            mercury__string__parse_util__V_67_67 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_84);
          }
#line 196 "string.parse_util.m"
          {
#line 196 "string.parse_util.m"
            mercury__string__parse_util__V_71_71 = mercury__string__parse_util__specifier_char_1_f_0(mercury__string__parse_util__SpecChar_8);
          }
#line 196 "string.parse_util.m"
          {
#line 196 "string.parse_util.m"
            mercury__string__parse_util__V_70_70 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_71_71, (MR_String) ".");
          }
#line 196 "string.parse_util.m"
          {
#line 196 "string.parse_util.m"
            mercury__string__parse_util__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) " uses the unknown ", mercury__string__parse_util__V_70_70);
          }
#line 195 "string.parse_util.m"
          {
#line 195 "string.parse_util.m"
            return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_67_67, mercury__string__parse_util__V_68_68);
          }
#line 194 "string.parse_util.m"
        }
#line 182 "string.parse_util.m"
        break;
#line 182 "string.parse_util.m"
      case (MR_Integer) 2:
#line 198 "string.parse_util.m"
        {
#line 198 "string.parse_util.m"
          MR_Word mercury__string__parse_util__PolyKind_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__Error_3, (MR_Integer) 2)));
#line 198 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_57_57;
#line 198 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_58_58;
#line 198 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_60_60;
#line 198 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_61_61;
#line 198 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_62_62;
#line 198 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_64_64;
#line 198 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_65_65;
#line 198 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__SpecNum_85 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__Error_3, (MR_Integer) 0)));
#line 198 "string.parse_util.m"
          MR_Char mercury__string__parse_util__SpecChar_86 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__Error_3, (MR_Integer) 1)));

#line 199 "string.parse_util.m"
          {
#line 199 "string.parse_util.m"
            mercury__string__parse_util__V_57_57 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_85);
          }
#line 200 "string.parse_util.m"
          {
#line 200 "string.parse_util.m"
            mercury__string__parse_util__V_61_61 = mercury__string__parse_util__specifier_char_1_f_0(mercury__string__parse_util__SpecChar_86);
          }
#line 287 "string.parse_util.m"
          mercury__string__parse_util__V_65_65 = ((&mercury__string__parse_util_vector_common_5[8 + mercury__string__parse_util__PolyKind_9]))->mercury__string__parse_util__vector_common_type_5_0__vct_5_f_0;
#line 202 "string.parse_util.m"
          {
#line 202 "string.parse_util.m"
            mercury__string__parse_util__V_64_64 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_65_65, (MR_String) ".");
          }
#line 202 "string.parse_util.m"
          {
#line 202 "string.parse_util.m"
            mercury__string__parse_util__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) ", but the corresponding input is ", mercury__string__parse_util__V_64_64);
          }
#line 201 "string.parse_util.m"
          {
#line 201 "string.parse_util.m"
            mercury__string__parse_util__V_60_60 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_61_61, mercury__string__parse_util__V_62_62);
          }
#line 200 "string.parse_util.m"
          {
#line 200 "string.parse_util.m"
            mercury__string__parse_util__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) " uses the ", mercury__string__parse_util__V_60_60);
          }
#line 199 "string.parse_util.m"
          {
#line 199 "string.parse_util.m"
            return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_57_57, mercury__string__parse_util__V_58_58);
          }
#line 198 "string.parse_util.m"
        }
#line 182 "string.parse_util.m"
        break;
#line 182 "string.parse_util.m"
      case (MR_Integer) 3:
#line 182 "string.parse_util.m"
#line 182 "string.parse_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 0)))) {
#line 182 "string.parse_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 182 "string.parse_util.m"
          case (MR_Integer) 0:
#line 204 "string.parse_util.m"
            {
#line 204 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_51_51;
#line 204 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_52_52;
#line 204 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_54_54;
#line 204 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_55_55;
#line 204 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__SpecNum_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
#line 204 "string.parse_util.m"
              MR_Char mercury__string__parse_util__SpecChar_88 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 2)));

#line 205 "string.parse_util.m"
              {
#line 205 "string.parse_util.m"
                mercury__string__parse_util__V_51_51 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_87);
              }
#line 206 "string.parse_util.m"
              {
#line 206 "string.parse_util.m"
                mercury__string__parse_util__V_55_55 = mercury__string__parse_util__specifier_char_1_f_0(mercury__string__parse_util__SpecChar_88);
              }
#line 207 "string.parse_util.m"
              {
#line 207 "string.parse_util.m"
                mercury__string__parse_util__V_54_54 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_55_55, (MR_String) ", is missing its input.");
              }
#line 206 "string.parse_util.m"
              {
#line 206 "string.parse_util.m"
                mercury__string__parse_util__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) ", which uses ", mercury__string__parse_util__V_54_54);
              }
#line 206 "string.parse_util.m"
              {
#line 206 "string.parse_util.m"
                return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_51_51, mercury__string__parse_util__V_52_52);
              }
#line 204 "string.parse_util.m"
            }
#line 182 "string.parse_util.m"
            break;
#line 182 "string.parse_util.m"
          case (MR_Integer) 1:
#line 209 "string.parse_util.m"
            {
#line 209 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_43_43;
#line 209 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_44_44;
#line 209 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_46_46;
#line 209 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_48_48;
#line 209 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_49_49;
#line 209 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__SpecNum_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
#line 209 "string.parse_util.m"
              MR_Word mercury__string__parse_util__PolyKind_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 2)));

#line 210 "string.parse_util.m"
              {
#line 210 "string.parse_util.m"
                mercury__string__parse_util__V_43_43 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_89);
              }
#line 287 "string.parse_util.m"
              mercury__string__parse_util__V_49_49 = ((&mercury__string__parse_util_vector_common_5[4 + mercury__string__parse_util__PolyKind_90]))->mercury__string__parse_util__vector_common_type_5_0__vct_5_f_0;
#line 213 "string.parse_util.m"
              {
#line 213 "string.parse_util.m"
                mercury__string__parse_util__V_48_48 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_49_49, (MR_String) ", not an integer.");
              }
#line 212 "string.parse_util.m"
              {
#line 212 "string.parse_util.m"
                mercury__string__parse_util__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) " but the next input is ", mercury__string__parse_util__V_48_48);
              }
#line 212 "string.parse_util.m"
              {
#line 212 "string.parse_util.m"
                mercury__string__parse_util__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) " says the width is a runtime input,", mercury__string__parse_util__V_46_46);
              }
#line 211 "string.parse_util.m"
              {
#line 211 "string.parse_util.m"
                return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_43_43, mercury__string__parse_util__V_44_44);
              }
#line 209 "string.parse_util.m"
            }
#line 182 "string.parse_util.m"
            break;
#line 182 "string.parse_util.m"
          case (MR_Integer) 2:
#line 215 "string.parse_util.m"
            {
#line 215 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_39_39;
#line 215 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__SpecNum_91 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));

#line 216 "string.parse_util.m"
              {
#line 216 "string.parse_util.m"
                mercury__string__parse_util__V_39_39 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_91);
              }
#line 217 "string.parse_util.m"
              {
#line 217 "string.parse_util.m"
                return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_39_39, (MR_String) " says the width is a runtime input, but there is no next input.");
              }
#line 215 "string.parse_util.m"
            }
#line 182 "string.parse_util.m"
            break;
#line 182 "string.parse_util.m"
          case (MR_Integer) 3:
#line 220 "string.parse_util.m"
            {
#line 220 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_31_31;
#line 220 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_32_32;
#line 220 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_34_34;
#line 220 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_36_36;
#line 220 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_37_37;
#line 220 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__SpecNum_92 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
#line 220 "string.parse_util.m"
              MR_Word mercury__string__parse_util__PolyKind_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 2)));

#line 221 "string.parse_util.m"
              {
#line 221 "string.parse_util.m"
                mercury__string__parse_util__V_31_31 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_92);
              }
#line 287 "string.parse_util.m"
              mercury__string__parse_util__V_37_37 = ((&mercury__string__parse_util_vector_common_5[0 + mercury__string__parse_util__PolyKind_93]))->mercury__string__parse_util__vector_common_type_5_0__vct_5_f_0;
#line 224 "string.parse_util.m"
              {
#line 224 "string.parse_util.m"
                mercury__string__parse_util__V_36_36 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_37_37, (MR_String) ", not an integer.");
              }
#line 223 "string.parse_util.m"
              {
#line 223 "string.parse_util.m"
                mercury__string__parse_util__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) " but the next input is ", mercury__string__parse_util__V_36_36);
              }
#line 223 "string.parse_util.m"
              {
#line 223 "string.parse_util.m"
                mercury__string__parse_util__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) " says the precision is a runtime input,", mercury__string__parse_util__V_34_34);
              }
#line 222 "string.parse_util.m"
              {
#line 222 "string.parse_util.m"
                return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_31_31, mercury__string__parse_util__V_32_32);
              }
#line 220 "string.parse_util.m"
            }
#line 182 "string.parse_util.m"
            break;
#line 182 "string.parse_util.m"
          case (MR_Integer) 4:
#line 226 "string.parse_util.m"
            {
#line 226 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_27_27;
#line 226 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__SpecNum_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));

#line 227 "string.parse_util.m"
              {
#line 227 "string.parse_util.m"
                mercury__string__parse_util__V_27_27 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_94);
              }
#line 228 "string.parse_util.m"
              {
#line 228 "string.parse_util.m"
                return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_27_27, (MR_String) " says the precision is a runtime input, but there is no next input.");
              }
#line 226 "string.parse_util.m"
            }
#line 182 "string.parse_util.m"
            break;
#line 182 "string.parse_util.m"
          case (MR_Integer) 5:
#line 231 "string.parse_util.m"
            {
#line 231 "string.parse_util.m"
              MR_String mercury__string__parse_util__Extra_10;
#line 231 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_12_12;
#line 231 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_13_13;
#line 231 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__SpecNum_95 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
#line 231 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__NumExtraPolyTypes_96 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 2)));
#line 231 "string.parse_util.m"
              MR_String mercury__string__parse_util__Msg0_97;

#line 232 "string.parse_util.m"
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_95 == (MR_Integer) 1);
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
                mercury__string__parse_util__V_13_13 = mercury__string__parse_util__nth_1_f_0(mercury__string__parse_util__SpecNum_95);
              }
#line 238 "string.parse_util.m"
              {
#line 238 "string.parse_util.m"
                mercury__string__parse_util__V_12_12 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_13_13, (MR_String) " conversion specifier,");
              }
#line 238 "string.parse_util.m"
              {
#line 238 "string.parse_util.m"
                mercury__string__parse_util__Msg0_97 = mercury__string__f_43_43_2_f_0((MR_String) "There is no ", mercury__string__parse_util__V_12_12);
              }
#line 239 "string.parse_util.m"
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__NumExtraPolyTypes_96 == (MR_Integer) 1);
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
                    return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Msg0_97, mercury__string__parse_util__V_15_15);
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
#line 242 "string.parse_util.m"
                  MR_String mercury__string__parse_util__V_25_25;

#line 243 "string.parse_util.m"
                  {
#line 243 "string.parse_util.m"
                    mercury__string__parse_util__V_22_22 = mercury__string__int_to_string_1_f_0(mercury__string__parse_util__NumExtraPolyTypes_96);
                  }
#line 244 "string.parse_util.m"
                  {
#line 244 "string.parse_util.m"
                    mercury__string__parse_util__V_25_25 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Extra_10, (MR_String) "inputs.");
                  }
#line 244 "string.parse_util.m"
                  {
#line 244 "string.parse_util.m"
                    mercury__string__parse_util__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) " ", mercury__string__parse_util__V_25_25);
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
                    return mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Msg0_97, mercury__string__parse_util__V_19_19);
                  }
#line 242 "string.parse_util.m"
                }
#line 231 "string.parse_util.m"
            }
#line 182 "string.parse_util.m"
            break;
#line 182 "string.parse_util.m"
        }
#line 182 "string.parse_util.m"
        break;
#line 182 "string.parse_util.m"
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
