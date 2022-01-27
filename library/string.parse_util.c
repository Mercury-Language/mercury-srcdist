/*
** Automatically generated from `string.parse_util.m'
** by the Mercury compiler,
** version DEV
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

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 277 "string.parse_util.m"
static MR_String MR_CALL 
mercury__string__parse_util__specifier_char_1_f_0(
#line 277 "string.parse_util.m"
  MR_Char mercury__string__parse_util__SpecChar_3);

#line 250 "string.parse_util.m"
static MR_String MR_CALL 
mercury__string__parse_util__nth_1_f_0(
#line 250 "string.parse_util.m"
  MR_Integer mercury__string__parse_util__N_3);

#line 245 "string.parse_util.m"
static MR_String MR_CALL 
mercury__string__parse_util__nth_specifier_1_f_0(
#line 245 "string.parse_util.m"
  MR_Integer mercury__string__parse_util__SpecNum_3);


static /* final */ const MR_Box mercury__string__parse_util_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__string__parse_util_scalar_common_4[2][5];


#line 284 "string.parse_util.m"
/* sealed */ struct mercury__string__parse_util__vector_common_type_5_0_s {
#line 284 "string.parse_util.m"
  const MR_String mercury__string__parse_util__vector_common_type_5_0__vct_5_f_0;
#line 284 "string.parse_util.m"
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



#line 779 "string.parse_util.c"
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

#line 794 "string.parse_util.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__parse_util__list__ti_list_1builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

#line 802 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_gather_ended_by_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__list__ti_list_1builtin__type_ctor_info_character_0
};

#line 807 "string.parse_util.c"
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

#line 822 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_0
};

#line 827 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_1[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_1
};

#line 832 "string.parse_util.c"
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

#line 846 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_gather_ended_by_0[2] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_0,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_1
};

#line 852 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_gather_ended_by_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 858 "string.parse_util.c"
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

#line 875 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0 = {
  (MR_String) "poly_kind_char",
  (MR_Integer) 0
};

#line 881 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1 = {
  (MR_String) "poly_kind_str",
  (MR_Integer) 1
};

#line 887 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2 = {
  (MR_String) "poly_kind_int",
  (MR_Integer) 2
};

#line 893 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3 = {
  (MR_String) "poly_kind_float",
  (MR_Integer) 3
};

#line 899 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_poly_kind_0[4] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3
};

#line 907 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_poly_kind_0[4] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1
};

#line 915 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_poly_kind_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 923 "string.parse_util.c"
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

#line 940 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 946 "string.parse_util.c"
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

#line 961 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 967 "string.parse_util.c"
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

#line 982 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_2[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0
};

#line 989 "string.parse_util.c"
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

#line 1004 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 1010 "string.parse_util.c"
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

#line 1025 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_4[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0
};

#line 1031 "string.parse_util.c"
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

#line 1046 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1051 "string.parse_util.c"
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

#line 1066 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_6[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0
};

#line 1072 "string.parse_util.c"
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

#line 1087 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1092 "string.parse_util.c"
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

#line 1107 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_8[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1113 "string.parse_util.c"
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

#line 1128 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_0
};

#line 1133 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_1[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_1
};

#line 1138 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_2[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_2
};

#line 1143 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_3[6] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_3,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_4,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_5,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_6,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_7,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_8
};

#line 1153 "string.parse_util.c"
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

#line 1177 "string.parse_util.c"
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

#line 1190 "string.parse_util.c"
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

#line 1203 "string.parse_util.c"
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

#line 1220 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_0 = {
  (MR_String) "flag_hash_clear",
  (MR_Integer) 0
};

#line 1226 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_1 = {
  (MR_String) "flag_hash_set",
  (MR_Integer) 1
};

#line 1232 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_hash_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_1
};

#line 1238 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_hash_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_1
};

#line 1244 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_hash_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1250 "string.parse_util.c"
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

#line 1267 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_0 = {
  (MR_String) "flag_minus_clear",
  (MR_Integer) 0
};

#line 1273 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_1 = {
  (MR_String) "flag_minus_set",
  (MR_Integer) 1
};

#line 1279 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_minus_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_1
};

#line 1285 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_minus_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_1
};

#line 1291 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_minus_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1297 "string.parse_util.c"
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

#line 1314 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_0 = {
  (MR_String) "flag_plus_clear",
  (MR_Integer) 0
};

#line 1320 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_1 = {
  (MR_String) "flag_plus_set",
  (MR_Integer) 1
};

#line 1326 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_plus_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_1
};

#line 1332 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_plus_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_1
};

#line 1338 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_plus_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1344 "string.parse_util.c"
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

#line 1361 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_0 = {
  (MR_String) "flag_space_clear",
  (MR_Integer) 0
};

#line 1367 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_1 = {
  (MR_String) "flag_space_set",
  (MR_Integer) 1
};

#line 1373 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_space_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_1
};

#line 1379 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_space_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_1
};

#line 1385 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_space_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1391 "string.parse_util.c"
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

#line 1408 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_0 = {
  (MR_String) "flag_zero_clear",
  (MR_Integer) 0
};

#line 1414 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_1 = {
  (MR_String) "flag_zero_set",
  (MR_Integer) 1
};

#line 1420 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_zero_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_1
};

#line 1426 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_zero_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_1
};

#line 1432 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_zero_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1438 "string.parse_util.c"
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

#line 1455 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_flags_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_hash_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_space_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_zero_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_minus_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_plus_0
};

#line 1464 "string.parse_util.c"
static const MR_ConstString mercury__string__parse_util__string__parse_util__field_names_string_format_flags_0_0[5] = {
  (MR_String) "flag_hash",
  (MR_String) "flag_space",
  (MR_String) "flag_zero",
  (MR_String) "flag_minus",
  (MR_String) "flag_plus"
};

#line 1473 "string.parse_util.c"
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

#line 1502 "string.parse_util.c"
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

#line 1517 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_flags_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_flags_0_0
};

#line 1522 "string.parse_util.c"
static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_flags_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_flags_0_0
  }
};

#line 1531 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_flags_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_flags_0_0
};

#line 1536 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flags_0[1] = {
  (MR_Integer) 0
};

#line 1541 "string.parse_util.c"
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

#line 1558 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_0 = {
  (MR_String) "kind_e_scientific_lc",
  (MR_Integer) 0
};

#line 1564 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_1 = {
  (MR_String) "kind_e_scientific_uc",
  (MR_Integer) 1
};

#line 1570 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_2 = {
  (MR_String) "kind_f_plain_lc",
  (MR_Integer) 2
};

#line 1576 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_3 = {
  (MR_String) "kind_f_plain_uc",
  (MR_Integer) 3
};

#line 1582 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_4 = {
  (MR_String) "kind_g_flexible_lc",
  (MR_Integer) 4
};

#line 1588 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_5 = {
  (MR_String) "kind_g_flexible_uc",
  (MR_Integer) 5
};

#line 1594 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_float_kind_0[6] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_4,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_5
};

#line 1604 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_float_kind_0[6] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_4,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_5
};

#line 1614 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_float_kind_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5
};

#line 1624 "string.parse_util.c"
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

#line 1641 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_0 = {
  (MR_String) "base_octal",
  (MR_Integer) 0
};

#line 1647 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_1 = {
  (MR_String) "base_decimal",
  (MR_Integer) 1
};

#line 1653 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_2 = {
  (MR_String) "base_hex_lc",
  (MR_Integer) 2
};

#line 1659 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_3 = {
  (MR_String) "base_hex_uc",
  (MR_Integer) 3
};

#line 1665 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_4 = {
  (MR_String) "base_hex_p",
  (MR_Integer) 4
};

#line 1671 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_int_base_0[5] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_4
};

#line 1680 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_int_base_0[5] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_4,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_0
};

#line 1689 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_int_base_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 1698 "string.parse_util.c"
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

#line 1715 "string.parse_util.c"
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

#line 1730 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_prec_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1735 "string.parse_util.c"
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

#line 1750 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_0
};

#line 1755 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_1[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_1
};

#line 1760 "string.parse_util.c"
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

#line 1774 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_prec_0[2] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_0,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_1
};

#line 1780 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_prec_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1786 "string.parse_util.c"
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

#line 1803 "string.parse_util.c"
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

#line 1818 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_width_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1823 "string.parse_util.c"
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

#line 1838 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_0
};

#line 1843 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_1[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_1
};

#line 1848 "string.parse_util.c"
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

#line 1862 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_width_0[2] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_0,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_1
};

#line 1868 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_width_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1874 "string.parse_util.c"
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

#line 1891 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____gather_ended_by_0_0_10001(
#line 1894 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 1896 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 1898 "string.parse_util.c"
{
#line 1900 "string.parse_util.c"
  {
#line 1902 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 1905 "string.parse_util.c"
    {
#line 1907 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____gather_ended_by_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 1910 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 1912 "string.parse_util.c"
  }
#line 1914 "string.parse_util.c"
}

#line 1917 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____gather_ended_by_0_0_10001(
#line 1920 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 1922 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 1924 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 1926 "string.parse_util.c"
{
#line 1928 "string.parse_util.c"
  {
#line 1930 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 1933 "string.parse_util.c"
    {
#line 1935 "string.parse_util.c"
      mercury__string__parse_util____Compare____gather_ended_by_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 1938 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 1940 "string.parse_util.c"
  }
#line 1942 "string.parse_util.c"
}

#line 1945 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____poly_kind_0_0_10001(
#line 1948 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 1950 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 1952 "string.parse_util.c"
{
#line 1954 "string.parse_util.c"
  {
#line 1956 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 1959 "string.parse_util.c"
    {
#line 1961 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____poly_kind_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 1964 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 1966 "string.parse_util.c"
  }
#line 1968 "string.parse_util.c"
}

#line 1971 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____poly_kind_0_0_10001(
#line 1974 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 1976 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 1978 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 1980 "string.parse_util.c"
{
#line 1982 "string.parse_util.c"
  {
#line 1984 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 1987 "string.parse_util.c"
    {
#line 1989 "string.parse_util.c"
      mercury__string__parse_util____Compare____poly_kind_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 1992 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 1994 "string.parse_util.c"
  }
#line 1996 "string.parse_util.c"
}

#line 1999 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_error_0_0_10001(
#line 2002 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2004 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2006 "string.parse_util.c"
{
#line 2008 "string.parse_util.c"
  {
#line 2010 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2013 "string.parse_util.c"
    {
#line 2015 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_error_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2018 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2020 "string.parse_util.c"
  }
#line 2022 "string.parse_util.c"
}

#line 2025 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_error_0_0_10001(
#line 2028 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2030 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2032 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2034 "string.parse_util.c"
{
#line 2036 "string.parse_util.c"
  {
#line 2038 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2041 "string.parse_util.c"
    {
#line 2043 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_error_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2046 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2048 "string.parse_util.c"
  }
#line 2050 "string.parse_util.c"
}

#line 2053 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_hash_0_0_10001(
#line 2056 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2058 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2060 "string.parse_util.c"
{
#line 2062 "string.parse_util.c"
  {
#line 2064 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2067 "string.parse_util.c"
    {
#line 2069 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_hash_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2072 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2074 "string.parse_util.c"
  }
#line 2076 "string.parse_util.c"
}

#line 2079 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_hash_0_0_10001(
#line 2082 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2084 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2086 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2088 "string.parse_util.c"
{
#line 2090 "string.parse_util.c"
  {
#line 2092 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2095 "string.parse_util.c"
    {
#line 2097 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flag_hash_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2100 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2102 "string.parse_util.c"
  }
#line 2104 "string.parse_util.c"
}

#line 2107 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_minus_0_0_10001(
#line 2110 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2112 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2114 "string.parse_util.c"
{
#line 2116 "string.parse_util.c"
  {
#line 2118 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2121 "string.parse_util.c"
    {
#line 2123 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_minus_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2126 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2128 "string.parse_util.c"
  }
#line 2130 "string.parse_util.c"
}

#line 2133 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_minus_0_0_10001(
#line 2136 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2138 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2140 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2142 "string.parse_util.c"
{
#line 2144 "string.parse_util.c"
  {
#line 2146 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2149 "string.parse_util.c"
    {
#line 2151 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flag_minus_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2154 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2156 "string.parse_util.c"
  }
#line 2158 "string.parse_util.c"
}

#line 2161 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_plus_0_0_10001(
#line 2164 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2166 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2168 "string.parse_util.c"
{
#line 2170 "string.parse_util.c"
  {
#line 2172 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2175 "string.parse_util.c"
    {
#line 2177 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_plus_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2180 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2182 "string.parse_util.c"
  }
#line 2184 "string.parse_util.c"
}

#line 2187 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_plus_0_0_10001(
#line 2190 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2192 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2194 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2196 "string.parse_util.c"
{
#line 2198 "string.parse_util.c"
  {
#line 2200 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2203 "string.parse_util.c"
    {
#line 2205 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flag_plus_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2208 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2210 "string.parse_util.c"
  }
#line 2212 "string.parse_util.c"
}

#line 2215 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_space_0_0_10001(
#line 2218 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2220 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2222 "string.parse_util.c"
{
#line 2224 "string.parse_util.c"
  {
#line 2226 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2229 "string.parse_util.c"
    {
#line 2231 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_space_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2234 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2236 "string.parse_util.c"
  }
#line 2238 "string.parse_util.c"
}

#line 2241 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_space_0_0_10001(
#line 2244 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2246 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2248 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2250 "string.parse_util.c"
{
#line 2252 "string.parse_util.c"
  {
#line 2254 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2257 "string.parse_util.c"
    {
#line 2259 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flag_space_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2262 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2264 "string.parse_util.c"
  }
#line 2266 "string.parse_util.c"
}

#line 2269 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_zero_0_0_10001(
#line 2272 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2274 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2276 "string.parse_util.c"
{
#line 2278 "string.parse_util.c"
  {
#line 2280 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2283 "string.parse_util.c"
    {
#line 2285 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_zero_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2288 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2290 "string.parse_util.c"
  }
#line 2292 "string.parse_util.c"
}

#line 2295 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_zero_0_0_10001(
#line 2298 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2300 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2302 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2304 "string.parse_util.c"
{
#line 2306 "string.parse_util.c"
  {
#line 2308 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2311 "string.parse_util.c"
    {
#line 2313 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flag_zero_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2316 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2318 "string.parse_util.c"
  }
#line 2320 "string.parse_util.c"
}

#line 2323 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flags_0_0_10001(
#line 2326 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2328 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2330 "string.parse_util.c"
{
#line 2332 "string.parse_util.c"
  {
#line 2334 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2337 "string.parse_util.c"
    {
#line 2339 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2342 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2344 "string.parse_util.c"
  }
#line 2346 "string.parse_util.c"
}

#line 2349 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flags_0_0_10001(
#line 2352 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2354 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2356 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2358 "string.parse_util.c"
{
#line 2360 "string.parse_util.c"
  {
#line 2362 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2365 "string.parse_util.c"
    {
#line 2367 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flags_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2370 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2372 "string.parse_util.c"
  }
#line 2374 "string.parse_util.c"
}

#line 2377 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_float_kind_0_0_10001(
#line 2380 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2382 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2384 "string.parse_util.c"
{
#line 2386 "string.parse_util.c"
  {
#line 2388 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2391 "string.parse_util.c"
    {
#line 2393 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_float_kind_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2396 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2398 "string.parse_util.c"
  }
#line 2400 "string.parse_util.c"
}

#line 2403 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_float_kind_0_0_10001(
#line 2406 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2408 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2410 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2412 "string.parse_util.c"
{
#line 2414 "string.parse_util.c"
  {
#line 2416 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2419 "string.parse_util.c"
    {
#line 2421 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_float_kind_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2424 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2426 "string.parse_util.c"
  }
#line 2428 "string.parse_util.c"
}

#line 2431 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_int_base_0_0_10001(
#line 2434 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2436 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2438 "string.parse_util.c"
{
#line 2440 "string.parse_util.c"
  {
#line 2442 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2445 "string.parse_util.c"
    {
#line 2447 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_int_base_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2450 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2452 "string.parse_util.c"
  }
#line 2454 "string.parse_util.c"
}

#line 2457 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_int_base_0_0_10001(
#line 2460 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2462 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2464 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2466 "string.parse_util.c"
{
#line 2468 "string.parse_util.c"
  {
#line 2470 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2473 "string.parse_util.c"
    {
#line 2475 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_int_base_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2478 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2480 "string.parse_util.c"
  }
#line 2482 "string.parse_util.c"
}

#line 2485 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_prec_0_0_10001(
#line 2488 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2490 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2492 "string.parse_util.c"
{
#line 2494 "string.parse_util.c"
  {
#line 2496 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2499 "string.parse_util.c"
    {
#line 2501 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2504 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2506 "string.parse_util.c"
  }
#line 2508 "string.parse_util.c"
}

#line 2511 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_prec_0_0_10001(
#line 2514 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2516 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2518 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2520 "string.parse_util.c"
{
#line 2522 "string.parse_util.c"
  {
#line 2524 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2527 "string.parse_util.c"
    {
#line 2529 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2532 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2534 "string.parse_util.c"
  }
#line 2536 "string.parse_util.c"
}

#line 2539 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_width_0_0_10001(
#line 2542 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2544 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2546 "string.parse_util.c"
{
#line 2548 "string.parse_util.c"
  {
#line 2550 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2553 "string.parse_util.c"
    {
#line 2555 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2558 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2560 "string.parse_util.c"
  }
#line 2562 "string.parse_util.c"
}

#line 2565 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_width_0_0_10001(
#line 2568 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2570 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2572 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2574 "string.parse_util.c"
{
#line 2576 "string.parse_util.c"
  {
#line 2578 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2581 "string.parse_util.c"
    {
#line 2583 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2586 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2588 "string.parse_util.c"
  }
#line 2590 "string.parse_util.c"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__string__parse_util__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
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
#line 2634 "string.parse_util.c"
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
#line 2646 "string.parse_util.c"
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 55 "string.parse_util.m"
    else
#line 55 "string.parse_util.m"
      {
#line 55 "string.parse_util.m"
        MR_Integer mercury__string__parse_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

#line 55 "string.parse_util.m"
        if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2657 "string.parse_util.c"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 55 "string.parse_util.m"
        else
#line 55 "string.parse_util.m"
          {
#line 55 "string.parse_util.m"
            MR_Integer mercury__string__parse_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)));

#line 69 "private_builtin.opt"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_11_11 < mercury__string__parse_util__V_7_7);
#line 72 "private_builtin.opt"
            if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
            else
#line 77 "private_builtin.opt"
              {
#line 74 "private_builtin.opt"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_11_11 == mercury__string__parse_util__V_7_7);
#line 77 "private_builtin.opt"
                if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
                  *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                else
#line 78 "private_builtin.opt"
                  *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
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
#line 2753 "string.parse_util.c"
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
#line 2790 "string.parse_util.c"
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
#line 2802 "string.parse_util.c"
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 59 "string.parse_util.m"
    else
#line 59 "string.parse_util.m"
      {
#line 59 "string.parse_util.m"
        MR_Integer mercury__string__parse_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

#line 59 "string.parse_util.m"
        if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2813 "string.parse_util.c"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 59 "string.parse_util.m"
        else
#line 59 "string.parse_util.m"
          {
#line 59 "string.parse_util.m"
            MR_Integer mercury__string__parse_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)));

#line 69 "private_builtin.opt"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_11_11 < mercury__string__parse_util__V_7_7);
#line 72 "private_builtin.opt"
            if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
            else
#line 77 "private_builtin.opt"
              {
#line 74 "private_builtin.opt"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_11_11 == mercury__string__parse_util__V_7_7);
#line 77 "private_builtin.opt"
                if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
                  *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                else
#line 78 "private_builtin.opt"
                  *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
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
#line 2909 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
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
#line 2978 "string.parse_util.c"
  {
#line 2980 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 2983 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2985 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
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
#line 3046 "string.parse_util.c"
  {
#line 3048 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3051 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3053 "string.parse_util.c"
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
#line 3082 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_25_25 < mercury__string__parse_util__V_26_26);
#line 72 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
          mercury__string__parse_util__V_14_14 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
        else
#line 77 "private_builtin.opt"
          {
#line 74 "private_builtin.opt"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_25_25 == mercury__string__parse_util__V_26_26);
#line 77 "private_builtin.opt"
            if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
              mercury__string__parse_util__V_14_14 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
            else
#line 78 "private_builtin.opt"
              mercury__string__parse_util__V_14_14 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
          }
#line 3137 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_27_27 < mercury__string__parse_util__V_28_28);
#line 72 "private_builtin.opt"
            if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
              mercury__string__parse_util__V_15_15 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
            else
#line 77 "private_builtin.opt"
              {
#line 74 "private_builtin.opt"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_27_27 == mercury__string__parse_util__V_28_28);
#line 77 "private_builtin.opt"
                if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
                  mercury__string__parse_util__V_15_15 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                else
#line 78 "private_builtin.opt"
                  mercury__string__parse_util__V_15_15 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
              }
#line 3178 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_29_29 < mercury__string__parse_util__V_30_30);
#line 72 "private_builtin.opt"
                if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
                  mercury__string__parse_util__V_16_16 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                else
#line 77 "private_builtin.opt"
                  {
#line 74 "private_builtin.opt"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_29_29 == mercury__string__parse_util__V_30_30);
#line 77 "private_builtin.opt"
                    if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
                      mercury__string__parse_util__V_16_16 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                    else
#line 78 "private_builtin.opt"
                      mercury__string__parse_util__V_16_16 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
                  }
#line 3219 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_31_31 < mercury__string__parse_util__V_32_32);
#line 72 "private_builtin.opt"
                    if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
                      mercury__string__parse_util__V_17_17 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                    else
#line 77 "private_builtin.opt"
                      {
#line 74 "private_builtin.opt"
                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_31_31 == mercury__string__parse_util__V_32_32);
#line 77 "private_builtin.opt"
                        if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
                          mercury__string__parse_util__V_17_17 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                        else
#line 78 "private_builtin.opt"
                          mercury__string__parse_util__V_17_17 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
                      }
#line 3260 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_33_33 < mercury__string__parse_util__V_34_34);
#line 72 "private_builtin.opt"
                        if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
                          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                        else
#line 77 "private_builtin.opt"
                          {
#line 74 "private_builtin.opt"
                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_33_33 == mercury__string__parse_util__V_34_34);
#line 77 "private_builtin.opt"
                            if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                            else
#line 78 "private_builtin.opt"
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
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

#line 3363 "string.parse_util.c"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_3_3 == mercury__string__parse_util__V_8_8);
#line 46 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 46 "string.parse_util.m"
          {
#line 3369 "string.parse_util.c"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_4_4 == mercury__string__parse_util__V_9_9);
#line 46 "string.parse_util.m"
            if (mercury__string__parse_util__succeeded)
#line 46 "string.parse_util.m"
              {
#line 3375 "string.parse_util.c"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_5_5 == mercury__string__parse_util__V_10_10);
#line 46 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 46 "string.parse_util.m"
                  {
#line 3381 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_6_6 == mercury__string__parse_util__V_11_11);
#line 46 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 3385 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
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
#line 3458 "string.parse_util.c"
  {
#line 3460 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3463 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3465 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
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
#line 3526 "string.parse_util.c"
  {
#line 3528 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3531 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3533 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
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
#line 3594 "string.parse_util.c"
  {
#line 3596 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3599 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3601 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
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
#line 3662 "string.parse_util.c"
  {
#line 3664 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3667 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3669 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
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
#line 3730 "string.parse_util.c"
  {
#line 3732 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3735 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3737 "string.parse_util.c"
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
#line 3766 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_344_344 < mercury__string__parse_util__V_6_6);
#line 72 "private_builtin.opt"
                  if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
                    mercury__string__parse_util__V_8_8 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                  else
#line 77 "private_builtin.opt"
                    {
#line 74 "private_builtin.opt"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_344_344 == mercury__string__parse_util__V_6_6);
#line 77 "private_builtin.opt"
                      if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
                        mercury__string__parse_util__V_8_8 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                      else
#line 78 "private_builtin.opt"
                        mercury__string__parse_util__V_8_8 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
                    }
#line 3822 "string.parse_util.c"
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_8_8 == (MR_Integer) 0);
#line 84 "string.parse_util.m"
                  mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
#line 84 "string.parse_util.m"
                  if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                    *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__V_8_8;
#line 84 "string.parse_util.m"
                  else
#line 72 "private_builtin.opt"
                    {
#line 69 "private_builtin.opt"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_343_343 < mercury__string__parse_util__V_7_7);
#line 72 "private_builtin.opt"
                      if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                      else
#line 77 "private_builtin.opt"
                        {
#line 74 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_343_343 == mercury__string__parse_util__V_7_7);
#line 77 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                          else
#line 78 "private_builtin.opt"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
                        }
#line 72 "private_builtin.opt"
                    }
#line 84 "string.parse_util.m"
                }
#line 84 "string.parse_util.m"
                break;
#line 84 "string.parse_util.m"
              case (MR_Integer) 1:
#line 3864 "string.parse_util.c"
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                break;
#line 84 "string.parse_util.m"
              case (MR_Integer) 2:
#line 3870 "string.parse_util.c"
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
#line 3883 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 3889 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 3895 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 3:
#line 3901 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 4:
#line 3907 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 5:
#line 3913 "string.parse_util.c"
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
#line 3943 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_350_350 < mercury__string__parse_util__V_46_46);
#line 72 "private_builtin.opt"
                  if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
                    mercury__string__parse_util__V_48_48 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                  else
#line 77 "private_builtin.opt"
                    {
#line 74 "private_builtin.opt"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_350_350 == mercury__string__parse_util__V_46_46);
#line 77 "private_builtin.opt"
                      if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
                        mercury__string__parse_util__V_48_48 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                      else
#line 78 "private_builtin.opt"
                        mercury__string__parse_util__V_48_48 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
                    }
#line 3980 "string.parse_util.c"
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
                      MR_Integer mercury__string__parse_util__V_7_404;
#line 84 "string.parse_util.m"
                      MR_Integer mercury__string__parse_util__V_8_405;

#line 110 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__V_349_349 ;
		{
#line 110 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4010 "string.parse_util.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__V_7_404  = Int;
#line 110 "char.opt"
}
#line 110 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__V_47_47 ;
		{
#line 110 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4030 "string.parse_util.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__V_8_405  = Int;
#line 110 "char.opt"
}
#line 37 "private_builtin.opt"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_7_404 < mercury__string__parse_util__V_8_405);
#line 40 "private_builtin.opt"
                      if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 40 "private_builtin.opt"
                      else
#line 45 "private_builtin.opt"
                        {
#line 42 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_7_404 == mercury__string__parse_util__V_8_405);
#line 45 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 44 "private_builtin.opt"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "private_builtin.opt"
                          else
#line 46 "private_builtin.opt"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "private_builtin.opt"
                        }
#line 84 "string.parse_util.m"
                    }
#line 84 "string.parse_util.m"
                }
#line 84 "string.parse_util.m"
                break;
#line 84 "string.parse_util.m"
              case (MR_Integer) 2:
#line 4067 "string.parse_util.c"
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
#line 4080 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 4086 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 4092 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 3:
#line 4098 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 4:
#line 4104 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 5:
#line 4110 "string.parse_util.c"
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
#line 4142 "string.parse_util.c"
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                break;
#line 84 "string.parse_util.m"
              case (MR_Integer) 1:
#line 4148 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_353_353 < mercury__string__parse_util__V_89_89);
#line 72 "private_builtin.opt"
                  if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
                    mercury__string__parse_util__V_92_92 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                  else
#line 77 "private_builtin.opt"
                    {
#line 74 "private_builtin.opt"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_353_353 == mercury__string__parse_util__V_89_89);
#line 77 "private_builtin.opt"
                      if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
                        mercury__string__parse_util__V_92_92 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                      else
#line 78 "private_builtin.opt"
                        mercury__string__parse_util__V_92_92 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
                    }
#line 4187 "string.parse_util.c"
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
                      MR_Integer mercury__string__parse_util__V_7_412;
#line 84 "string.parse_util.m"
                      MR_Integer mercury__string__parse_util__V_8_413;

#line 110 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__V_352_352 ;
		{
#line 110 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4219 "string.parse_util.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__V_7_412  = Int;
#line 110 "char.opt"
}
#line 110 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__V_90_90 ;
		{
#line 110 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4239 "string.parse_util.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__V_8_413  = Int;
#line 110 "char.opt"
}
#line 37 "private_builtin.opt"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_7_412 < mercury__string__parse_util__V_8_413);
#line 40 "private_builtin.opt"
                      if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                        mercury__string__parse_util__V_93_93 = (MR_Integer) 1;
#line 40 "private_builtin.opt"
                      else
#line 45 "private_builtin.opt"
                        {
#line 42 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_7_412 == mercury__string__parse_util__V_8_413);
#line 45 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 44 "private_builtin.opt"
                            mercury__string__parse_util__V_93_93 = (MR_Integer) 0;
#line 45 "private_builtin.opt"
                          else
#line 46 "private_builtin.opt"
                            mercury__string__parse_util__V_93_93 = (MR_Integer) 2;
#line 45 "private_builtin.opt"
                        }
#line 4268 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_358_358 < mercury__string__parse_util__V_359_359);
#line 72 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                          else
#line 77 "private_builtin.opt"
                            {
#line 74 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_358_358 == mercury__string__parse_util__V_359_359);
#line 77 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                              else
#line 78 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
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
#line 4324 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 4330 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 4336 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 3:
#line 4342 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 4:
#line 4348 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 5:
#line 4354 "string.parse_util.c"
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
#line 4391 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 4397 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 4403 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_342_342 < mercury__string__parse_util__V_137_137);
#line 72 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
                            mercury__string__parse_util__V_139_139 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                          else
#line 77 "private_builtin.opt"
                            {
#line 74 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_342_342 == mercury__string__parse_util__V_137_137);
#line 77 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
                                mercury__string__parse_util__V_139_139 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                              else
#line 78 "private_builtin.opt"
                                mercury__string__parse_util__V_139_139 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
                            }
#line 4447 "string.parse_util.c"
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
                              MR_Integer mercury__string__parse_util__V_7_378;
#line 84 "string.parse_util.m"
                              MR_Integer mercury__string__parse_util__V_8_379;

#line 110 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__V_341_341 ;
		{
#line 110 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4477 "string.parse_util.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__V_7_378  = Int;
#line 110 "char.opt"
}
#line 110 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__V_138_138 ;
		{
#line 110 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4497 "string.parse_util.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__V_8_379  = Int;
#line 110 "char.opt"
}
#line 37 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_7_378 < mercury__string__parse_util__V_8_379);
#line 40 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 40 "private_builtin.opt"
                              else
#line 45 "private_builtin.opt"
                                {
#line 42 "private_builtin.opt"
                                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_7_378 == mercury__string__parse_util__V_8_379);
#line 45 "private_builtin.opt"
                                  if (mercury__string__parse_util__succeeded)
#line 44 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "private_builtin.opt"
                                  else
#line 46 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "private_builtin.opt"
                                }
#line 84 "string.parse_util.m"
                            }
#line 84 "string.parse_util.m"
                        }
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 1:
#line 4534 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 2:
#line 4540 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 3:
#line 4546 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 4:
#line 4552 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 5:
#line 4558 "string.parse_util.c"
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
#line 4588 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 4594 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 4600 "string.parse_util.c"
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
#line 4613 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_348_348 < mercury__string__parse_util__V_177_177);
#line 72 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
                            mercury__string__parse_util__V_179_179 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                          else
#line 77 "private_builtin.opt"
                            {
#line 74 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_348_348 == mercury__string__parse_util__V_177_177);
#line 77 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
                                mercury__string__parse_util__V_179_179 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                              else
#line 78 "private_builtin.opt"
                                mercury__string__parse_util__V_179_179 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
                            }
#line 4650 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_356_356 < mercury__string__parse_util__V_357_357);
#line 72 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                              else
#line 77 "private_builtin.opt"
                                {
#line 74 "private_builtin.opt"
                                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_356_356 == mercury__string__parse_util__V_357_357);
#line 77 "private_builtin.opt"
                                  if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                                  else
#line 78 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
                                }
#line 84 "string.parse_util.m"
                            }
#line 84 "string.parse_util.m"
                        }
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 2:
#line 4697 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 3:
#line 4703 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 4:
#line 4709 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 5:
#line 4715 "string.parse_util.c"
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
#line 4743 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 4749 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 4755 "string.parse_util.c"
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
#line 4768 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 1:
#line 4774 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 2:
#line 84 "string.parse_util.m"
                        {
#line 84 "string.parse_util.m"
                          MR_Integer mercury__string__parse_util__V_211_211 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));

#line 69 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_340_340 < mercury__string__parse_util__V_211_211);
#line 72 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                          else
#line 77 "private_builtin.opt"
                            {
#line 74 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_340_340 == mercury__string__parse_util__V_211_211);
#line 77 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                              else
#line 78 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
                            }
#line 84 "string.parse_util.m"
                        }
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 3:
#line 4813 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 4:
#line 4819 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 5:
#line 4825 "string.parse_util.c"
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
#line 4855 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 4861 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 4867 "string.parse_util.c"
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
#line 4880 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 1:
#line 4886 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 2:
#line 4892 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_346_346 < mercury__string__parse_util__V_246_246);
#line 72 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
                            mercury__string__parse_util__V_248_248 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                          else
#line 77 "private_builtin.opt"
                            {
#line 74 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_346_346 == mercury__string__parse_util__V_246_246);
#line 77 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
                                mercury__string__parse_util__V_248_248 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                              else
#line 78 "private_builtin.opt"
                                mercury__string__parse_util__V_248_248 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
                            }
#line 4929 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_354_354 < mercury__string__parse_util__V_355_355);
#line 72 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                              else
#line 77 "private_builtin.opt"
                                {
#line 74 "private_builtin.opt"
                                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_354_354 == mercury__string__parse_util__V_355_355);
#line 77 "private_builtin.opt"
                                  if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                                  else
#line 78 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
                                }
#line 84 "string.parse_util.m"
                            }
#line 84 "string.parse_util.m"
                        }
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 4:
#line 4976 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 5:
#line 4982 "string.parse_util.c"
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
#line 5010 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 5016 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 5022 "string.parse_util.c"
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
#line 5035 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 1:
#line 5041 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 2:
#line 5047 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 3:
#line 5053 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 4:
#line 84 "string.parse_util.m"
                        {
#line 84 "string.parse_util.m"
                          MR_Integer mercury__string__parse_util__V_278_278 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));

#line 69 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_339_339 < mercury__string__parse_util__V_278_278);
#line 72 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                          else
#line 77 "private_builtin.opt"
                            {
#line 74 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_339_339 == mercury__string__parse_util__V_278_278);
#line 77 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                              else
#line 78 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
                            }
#line 84 "string.parse_util.m"
                        }
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 5:
#line 5092 "string.parse_util.c"
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
#line 5122 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 5128 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 5134 "string.parse_util.c"
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
#line 5147 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 1:
#line 5153 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 2:
#line 5159 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 3:
#line 5165 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 4:
#line 5171 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_338_338 < mercury__string__parse_util__V_315_315);
#line 72 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
                            mercury__string__parse_util__V_317_317 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                          else
#line 77 "private_builtin.opt"
                            {
#line 74 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_338_338 == mercury__string__parse_util__V_315_315);
#line 77 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
                                mercury__string__parse_util__V_317_317 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                              else
#line 78 "private_builtin.opt"
                                mercury__string__parse_util__V_317_317 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
                            }
#line 5208 "string.parse_util.c"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_317_317 == (MR_Integer) 0);
#line 84 "string.parse_util.m"
                          mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
#line 84 "string.parse_util.m"
                          if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                            *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__V_317_317;
#line 84 "string.parse_util.m"
                          else
#line 72 "private_builtin.opt"
                            {
#line 69 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_337_337 < mercury__string__parse_util__V_316_316);
#line 72 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                              else
#line 77 "private_builtin.opt"
                                {
#line 74 "private_builtin.opt"
                                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_337_337 == mercury__string__parse_util__V_316_316);
#line 77 "private_builtin.opt"
                                  if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                                  else
#line 78 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
                                }
#line 72 "private_builtin.opt"
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
#line 5323 "string.parse_util.c"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_3_3 == mercury__string__parse_util__V_5_5);
#line 84 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 5327 "string.parse_util.c"
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
#line 5358 "string.parse_util.c"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_7_7 == mercury__string__parse_util__V_9_9);
#line 84 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 5362 "string.parse_util.c"
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
#line 5399 "string.parse_util.c"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_11_11 == mercury__string__parse_util__V_14_14);
#line 84 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                  {
#line 5405 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_12_12 == mercury__string__parse_util__V_15_15);
#line 84 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 5409 "string.parse_util.c"
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
#line 5449 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_17_17 == mercury__string__parse_util__V_19_19);
#line 84 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 5453 "string.parse_util.c"
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
#line 5484 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_21_21 == mercury__string__parse_util__V_23_23);
#line 84 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 5488 "string.parse_util.c"
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
#line 5513 "string.parse_util.c"
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
#line 5544 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_27_27 == mercury__string__parse_util__V_29_29);
#line 84 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 5548 "string.parse_util.c"
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
#line 5573 "string.parse_util.c"
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
#line 5604 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_33_33 == mercury__string__parse_util__V_35_35);
#line 84 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 5608 "string.parse_util.c"
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

#line 69 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 71 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 76 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
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
#line 5685 "string.parse_util.c"
  {
#line 5687 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 5690 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 5692 "string.parse_util.c"
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
#line 5721 "string.parse_util.c"
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
#line 5733 "string.parse_util.c"
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 126 "string.parse_util.m"
    else
#line 126 "string.parse_util.m"
      {
#line 126 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

#line 126 "string.parse_util.m"
        if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5744 "string.parse_util.c"
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
#line 5827 "string.parse_util.c"
            mercury__string__parse_util__TypeInfo_9_9 = (MR_Word) &mercury__string__parse_util_scalar_common_1[0];
#line 5829 "string.parse_util.c"
            {
#line 5831 "string.parse_util.c"
              mercury__string__parse_util__succeeded = mercury__builtin__unify_2_p_0(mercury__string__parse_util__TypeInfo_9_9, ((MR_Box) (mercury__string__parse_util__V_5_5)), ((MR_Box) (mercury__string__parse_util__V_6_6)));
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

#line 335 "string.parse_util.m"
void MR_CALL 
mercury__string__parse_util__get_number_prefix_loop_4_p_0(
#line 335 "string.parse_util.m"
  MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_0_11,
#line 335 "string.parse_util.m"
  MR_Word * mercury__string__parse_util__STATE_VARIABLE_Chars_12,
#line 335 "string.parse_util.m"
  MR_Integer mercury__string__parse_util__N0_6,
#line 335 "string.parse_util.m"
  MR_Integer * mercury__string__parse_util__N_7)
#line 335 "string.parse_util.m"
{
#line 345 "string.parse_util.m"
  while (MR_TRUE)
#line 345 "string.parse_util.m"
    {
#line 345 "string.parse_util.m"
      /* tailcall optimized into a loop */
#line 345 "string.parse_util.m"
      {
#line 345 "string.parse_util.m"
        MR_bool mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__STATE_VARIABLE_Chars_0_11)) == (MR_mktag((MR_Integer) 1)));
#line 345 "string.parse_util.m"
        MR_Integer mercury__string__parse_util__CharValue_9;
#line 345 "string.parse_util.m"
        MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_13_13;
#line 340 "string.parse_util.m"
        MR_Char mercury__string__parse_util__Char_8;

#line 340 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 340 "string.parse_util.m"
          {
#line 340 "string.parse_util.m"
            mercury__string__parse_util__Char_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_11, (MR_Integer) 0)));
#line 340 "string.parse_util.m"
            mercury__string__parse_util__STATE_VARIABLE_Chars_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_11, (MR_Integer) 1)));
#line 341 "string.parse_util.m"
            {
#line 341 "string.parse_util.m"
              mercury__string__parse_util__succeeded = mercury__char__decimal_digit_to_int_2_p_0(mercury__string__parse_util__Char_8, &mercury__string__parse_util__CharValue_9);
            }
#line 340 "string.parse_util.m"
          }
#line 345 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 343 "string.parse_util.m"
          {
#line 343 "string.parse_util.m"
            MR_Integer mercury__string__parse_util__N1_10;
#line 343 "string.parse_util.m"
            MR_Integer mercury__string__parse_util__V_14_14 = (mercury__string__parse_util__N0_6 * (MR_Integer) 10);

#line 343 "string.parse_util.m"
            mercury__string__parse_util__N1_10 = (mercury__string__parse_util__V_14_14 + mercury__string__parse_util__CharValue_9);
#line 344 "string.parse_util.m"
            /* direct tailcall eliminated */
#line 344 "string.parse_util.m"
            {
#line 344 "string.parse_util.m"
              MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_0__tmp_copy_11 = mercury__string__parse_util__STATE_VARIABLE_Chars_13_13;
#line 344 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__N0__tmp_copy_6 = mercury__string__parse_util__N1_10;

#line 344 "string.parse_util.m"
              mercury__string__parse_util__N0_6 = mercury__string__parse_util__N0__tmp_copy_6;
#line 344 "string.parse_util.m"
              mercury__string__parse_util__STATE_VARIABLE_Chars_0_11 = mercury__string__parse_util__STATE_VARIABLE_Chars_0__tmp_copy_11;
#line 344 "string.parse_util.m"
            }
#line 344 "string.parse_util.m"
            continue;
#line 343 "string.parse_util.m"
          }
#line 345 "string.parse_util.m"
        else
#line 346 "string.parse_util.m"
          {
#line 346 "string.parse_util.m"
            *mercury__string__parse_util__N_7 = mercury__string__parse_util__N0_6;
#line 346 "string.parse_util.m"
            *mercury__string__parse_util__STATE_VARIABLE_Chars_12 = mercury__string__parse_util__STATE_VARIABLE_Chars_0_11;
#line 346 "string.parse_util.m"
          }
#line 345 "string.parse_util.m"
      }
#line 345 "string.parse_util.m"
      break;
#line 345 "string.parse_util.m"
    }
#line 335 "string.parse_util.m"
}

#line 277 "string.parse_util.m"
static MR_String MR_CALL 
mercury__string__parse_util__specifier_char_1_f_0(
#line 277 "string.parse_util.m"
  MR_Char mercury__string__parse_util__SpecChar_3)
#line 277 "string.parse_util.m"
{
#line 279 "string.parse_util.m"
  {
#line 279 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 279 "string.parse_util.m"
    MR_String mercury__string__parse_util__HeadVar__2_2;
#line 279 "string.parse_util.m"
    MR_String mercury__string__parse_util__V_5_5;
#line 279 "string.parse_util.m"
    MR_String mercury__string__parse_util__V_6_6;
#line 279 "string.parse_util.m"
    MR_Word mercury__string__parse_util__V_5_12;
#line 279 "string.parse_util.m"
    MR_Word mercury__string__parse_util__V_6_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 215 "string.opt"
    {
#line 215 "string.opt"
      mercury__string__parse_util__V_5_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "string.opt"
      MR_hl_field(MR_mktag(1), mercury__string__parse_util__V_5_12, 0) = ((MR_Box) (MR_Word) (mercury__string__parse_util__SpecChar_3));
#line 215 "string.opt"
      MR_hl_field(MR_mktag(1), mercury__string__parse_util__V_5_12, 1) = ((MR_Box) (mercury__string__parse_util__V_6_13));
#line 215 "string.opt"
    }
#line 217 "string.opt"
    {
#line 217 "string.opt"
      mercury__string__to_char_list_2_p_1(&mercury__string__parse_util__V_6_6, mercury__string__parse_util__V_5_12);
    }
#line 157 "string.opt"
    {
#line 157 "string.opt"
      mercury__string__append_3_p_2(mercury__string__parse_util__V_6_6, (MR_String) "\'", &mercury__string__parse_util__V_5_5);
    }
#line 157 "string.opt"
    {
#line 157 "string.opt"
      mercury__string__append_3_p_2((MR_String) "specifier character \140", mercury__string__parse_util__V_5_5, &mercury__string__parse_util__HeadVar__2_2);
    }
#line 279 "string.parse_util.m"
    return mercury__string__parse_util__HeadVar__2_2;
#line 279 "string.parse_util.m"
  }
#line 277 "string.parse_util.m"
}

#line 250 "string.parse_util.m"
static MR_String MR_CALL 
mercury__string__parse_util__nth_1_f_0(
#line 250 "string.parse_util.m"
  MR_Integer mercury__string__parse_util__N_3)
#line 250 "string.parse_util.m"
{
#line 255 "string.parse_util.m"
  {
#line 255 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 1);
#line 255 "string.parse_util.m"
    MR_String mercury__string__parse_util__NStr_4;

#line 255 "string.parse_util.m"
    if (mercury__string__parse_util__succeeded)
#line 254 "string.parse_util.m"
      mercury__string__parse_util__NStr_4 = (MR_String) "first";
#line 255 "string.parse_util.m"
    else
#line 257 "string.parse_util.m"
      {
#line 255 "string.parse_util.m"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 2);
#line 257 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 256 "string.parse_util.m"
          mercury__string__parse_util__NStr_4 = (MR_String) "second";
#line 257 "string.parse_util.m"
        else
#line 259 "string.parse_util.m"
          {
#line 257 "string.parse_util.m"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 3);
#line 259 "string.parse_util.m"
            if (mercury__string__parse_util__succeeded)
#line 258 "string.parse_util.m"
              mercury__string__parse_util__NStr_4 = (MR_String) "third";
#line 259 "string.parse_util.m"
            else
#line 261 "string.parse_util.m"
              {
#line 259 "string.parse_util.m"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 4);
#line 261 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 260 "string.parse_util.m"
                  mercury__string__parse_util__NStr_4 = (MR_String) "fourth";
#line 261 "string.parse_util.m"
                else
#line 263 "string.parse_util.m"
                  {
#line 261 "string.parse_util.m"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 5);
#line 263 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 262 "string.parse_util.m"
                      mercury__string__parse_util__NStr_4 = (MR_String) "fifth";
#line 263 "string.parse_util.m"
                    else
#line 265 "string.parse_util.m"
                      {
#line 263 "string.parse_util.m"
                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 6);
#line 265 "string.parse_util.m"
                        if (mercury__string__parse_util__succeeded)
#line 264 "string.parse_util.m"
                          mercury__string__parse_util__NStr_4 = (MR_String) "sixth";
#line 265 "string.parse_util.m"
                        else
#line 267 "string.parse_util.m"
                          {
#line 265 "string.parse_util.m"
                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 7);
#line 267 "string.parse_util.m"
                            if (mercury__string__parse_util__succeeded)
#line 266 "string.parse_util.m"
                              mercury__string__parse_util__NStr_4 = (MR_String) "seventh";
#line 267 "string.parse_util.m"
                            else
#line 269 "string.parse_util.m"
                              {
#line 267 "string.parse_util.m"
                                mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 8);
#line 269 "string.parse_util.m"
                                if (mercury__string__parse_util__succeeded)
#line 268 "string.parse_util.m"
                                  mercury__string__parse_util__NStr_4 = (MR_String) "eighth";
#line 269 "string.parse_util.m"
                                else
#line 271 "string.parse_util.m"
                                  {
#line 269 "string.parse_util.m"
                                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 9);
#line 271 "string.parse_util.m"
                                    if (mercury__string__parse_util__succeeded)
#line 270 "string.parse_util.m"
                                      mercury__string__parse_util__NStr_4 = (MR_String) "ninth";
#line 271 "string.parse_util.m"
                                    else
#line 273 "string.parse_util.m"
                                      {
#line 271 "string.parse_util.m"
                                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__N_3 == (MR_Integer) 10);
#line 273 "string.parse_util.m"
                                        if (mercury__string__parse_util__succeeded)
#line 272 "string.parse_util.m"
                                          mercury__string__parse_util__NStr_4 = (MR_String) "tenth";
#line 273 "string.parse_util.m"
                                        else
#line 274 "string.parse_util.m"
                                          {
#line 274 "string.parse_util.m"
                                            MR_String mercury__string__parse_util__V_5_5;

#line 552 "string.opt"
                                            {
#line 552 "string.opt"
                                              mercury__string__int_to_base_string_3_p_0(mercury__string__parse_util__N_3, (MR_Integer) 10, &mercury__string__parse_util__V_5_5);
                                            }
#line 157 "string.opt"
                                            {
#line 157 "string.opt"
                                              mercury__string__append_3_p_2(mercury__string__parse_util__V_5_5, (MR_String) "th", &mercury__string__parse_util__NStr_4);
                                            }
#line 274 "string.parse_util.m"
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
      }
#line 255 "string.parse_util.m"
    return mercury__string__parse_util__NStr_4;
#line 255 "string.parse_util.m"
  }
#line 250 "string.parse_util.m"
}

#line 245 "string.parse_util.m"
static MR_String MR_CALL 
mercury__string__parse_util__nth_specifier_1_f_0(
#line 245 "string.parse_util.m"
  MR_Integer mercury__string__parse_util__SpecNum_3)
#line 245 "string.parse_util.m"
{
#line 247 "string.parse_util.m"
  {
#line 247 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 1);
#line 247 "string.parse_util.m"
    MR_String mercury__string__parse_util__HeadVar__2_2;
#line 247 "string.parse_util.m"
    MR_String mercury__string__parse_util__V_5_5;
#line 247 "string.parse_util.m"
    MR_String mercury__string__parse_util__V_6_6;

#line 255 "string.parse_util.m"
    if (mercury__string__parse_util__succeeded)
#line 254 "string.parse_util.m"
      mercury__string__parse_util__V_6_6 = (MR_String) "first";
#line 255 "string.parse_util.m"
    else
#line 257 "string.parse_util.m"
      {
#line 255 "string.parse_util.m"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 2);
#line 257 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 256 "string.parse_util.m"
          mercury__string__parse_util__V_6_6 = (MR_String) "second";
#line 257 "string.parse_util.m"
        else
#line 259 "string.parse_util.m"
          {
#line 257 "string.parse_util.m"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 3);
#line 259 "string.parse_util.m"
            if (mercury__string__parse_util__succeeded)
#line 258 "string.parse_util.m"
              mercury__string__parse_util__V_6_6 = (MR_String) "third";
#line 259 "string.parse_util.m"
            else
#line 261 "string.parse_util.m"
              {
#line 259 "string.parse_util.m"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 4);
#line 261 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 260 "string.parse_util.m"
                  mercury__string__parse_util__V_6_6 = (MR_String) "fourth";
#line 261 "string.parse_util.m"
                else
#line 263 "string.parse_util.m"
                  {
#line 261 "string.parse_util.m"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 5);
#line 263 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 262 "string.parse_util.m"
                      mercury__string__parse_util__V_6_6 = (MR_String) "fifth";
#line 263 "string.parse_util.m"
                    else
#line 265 "string.parse_util.m"
                      {
#line 263 "string.parse_util.m"
                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 6);
#line 265 "string.parse_util.m"
                        if (mercury__string__parse_util__succeeded)
#line 264 "string.parse_util.m"
                          mercury__string__parse_util__V_6_6 = (MR_String) "sixth";
#line 265 "string.parse_util.m"
                        else
#line 267 "string.parse_util.m"
                          {
#line 265 "string.parse_util.m"
                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 7);
#line 267 "string.parse_util.m"
                            if (mercury__string__parse_util__succeeded)
#line 266 "string.parse_util.m"
                              mercury__string__parse_util__V_6_6 = (MR_String) "seventh";
#line 267 "string.parse_util.m"
                            else
#line 269 "string.parse_util.m"
                              {
#line 267 "string.parse_util.m"
                                mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 8);
#line 269 "string.parse_util.m"
                                if (mercury__string__parse_util__succeeded)
#line 268 "string.parse_util.m"
                                  mercury__string__parse_util__V_6_6 = (MR_String) "eighth";
#line 269 "string.parse_util.m"
                                else
#line 271 "string.parse_util.m"
                                  {
#line 269 "string.parse_util.m"
                                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 9);
#line 271 "string.parse_util.m"
                                    if (mercury__string__parse_util__succeeded)
#line 270 "string.parse_util.m"
                                      mercury__string__parse_util__V_6_6 = (MR_String) "ninth";
#line 271 "string.parse_util.m"
                                    else
#line 273 "string.parse_util.m"
                                      {
#line 271 "string.parse_util.m"
                                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_3 == (MR_Integer) 10);
#line 273 "string.parse_util.m"
                                        if (mercury__string__parse_util__succeeded)
#line 272 "string.parse_util.m"
                                          mercury__string__parse_util__V_6_6 = (MR_String) "tenth";
#line 273 "string.parse_util.m"
                                        else
#line 274 "string.parse_util.m"
                                          {
#line 274 "string.parse_util.m"
                                            MR_String mercury__string__parse_util__V_10_10;

#line 552 "string.opt"
                                            {
#line 552 "string.opt"
                                              mercury__string__int_to_base_string_3_p_0(mercury__string__parse_util__SpecNum_3, (MR_Integer) 10, &mercury__string__parse_util__V_10_10);
                                            }
#line 157 "string.opt"
                                            {
#line 157 "string.opt"
                                              mercury__string__append_3_p_2(mercury__string__parse_util__V_10_10, (MR_String) "th", &mercury__string__parse_util__V_6_6);
                                            }
#line 274 "string.parse_util.m"
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
      }
#line 157 "string.opt"
    {
#line 157 "string.opt"
      mercury__string__append_3_p_2(mercury__string__parse_util__V_6_6, (MR_String) " conversion specifier", &mercury__string__parse_util__V_5_5);
    }
#line 157 "string.opt"
    {
#line 157 "string.opt"
      mercury__string__append_3_p_2((MR_String) "The ", mercury__string__parse_util__V_5_5, &mercury__string__parse_util__HeadVar__2_2);
    }
#line 247 "string.parse_util.m"
    return mercury__string__parse_util__HeadVar__2_2;
#line 247 "string.parse_util.m"
  }
#line 245 "string.parse_util.m"
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
#line 329 "string.parse_util.m"
  {
#line 329 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__STATE_VARIABLE_Chars_0_8)) == (MR_mktag((MR_Integer) 1)));
#line 329 "string.parse_util.m"
    MR_Char mercury__string__parse_util__Char_6;
#line 329 "string.parse_util.m"
    MR_Integer mercury__string__parse_util__CharValue_7;
#line 329 "string.parse_util.m"
    MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_10_10;

#line 330 "string.parse_util.m"
    if (mercury__string__parse_util__succeeded)
#line 330 "string.parse_util.m"
      {
#line 330 "string.parse_util.m"
        mercury__string__parse_util__Char_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_8, (MR_Integer) 0)));
#line 330 "string.parse_util.m"
        mercury__string__parse_util__STATE_VARIABLE_Chars_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_8, (MR_Integer) 1)));
#line 331 "string.parse_util.m"
        {
#line 331 "string.parse_util.m"
          mercury__string__parse_util__succeeded = mercury__char__decimal_digit_to_int_2_p_0(mercury__string__parse_util__Char_6, &mercury__string__parse_util__CharValue_7);
        }
#line 329 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 329 "string.parse_util.m"
          {
#line 332 "string.parse_util.m"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__Char_6 == (MR_Char) 48);
#line 332 "string.parse_util.m"
            mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
#line 329 "string.parse_util.m"
            if (mercury__string__parse_util__succeeded)
#line 329 "string.parse_util.m"
              {
#line 333 "string.parse_util.m"
                {
#line 333 "string.parse_util.m"
                  mercury__string__parse_util__get_number_prefix_loop_4_p_0(mercury__string__parse_util__STATE_VARIABLE_Chars_10_10, mercury__string__parse_util__STATE_VARIABLE_Chars_9, mercury__string__parse_util__CharValue_7, mercury__string__parse_util__N_5);
                }
#line 333 "string.parse_util.m"
                mercury__string__parse_util__succeeded = MR_TRUE;
#line 329 "string.parse_util.m"
              }
#line 329 "string.parse_util.m"
          }
#line 330 "string.parse_util.m"
      }
#line 329 "string.parse_util.m"
    return mercury__string__parse_util__succeeded;
#line 329 "string.parse_util.m"
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
#line 326 "string.parse_util.m"
  {
#line 326 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;

#line 327 "string.parse_util.m"
    {
#line 327 "string.parse_util.m"
      mercury__string__parse_util__get_number_prefix_loop_4_p_0(mercury__string__parse_util__STATE_VARIABLE_Chars_0_6, mercury__string__parse_util__STATE_VARIABLE_Chars_7, (MR_Integer) 0, mercury__string__parse_util__N_5);
    }
#line 326 "string.parse_util.m"
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
#line 322 "string.parse_util.m"
  while (MR_TRUE)
#line 322 "string.parse_util.m"
    {
#line 322 "string.parse_util.m"
      /* tailcall optimized into a loop */
#line 322 "string.parse_util.m"
      {
#line 322 "string.parse_util.m"
        MR_bool mercury__string__parse_util__succeeded = ((MR_tag((MR_Word) mercury__string__parse_util__STATE_VARIABLE_Chars_0_8)) == (MR_mktag((MR_Integer) 1)));
#line 322 "string.parse_util.m"
        MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_12_12;
#line 322 "string.parse_util.m"
        MR_Word mercury__string__parse_util__STATE_VARIABLE_Flags_21_21;
#line 313 "string.parse_util.m"
        MR_Char mercury__string__parse_util__Char_7;
#line 313 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_50_50;
#line 313 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_51_51;
#line 313 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_52_52;
#line 313 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_53_53;
#line 313 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_54_54;

#line 313 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 313 "string.parse_util.m"
          {
#line 313 "string.parse_util.m"
            mercury__string__parse_util__Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_8, (MR_Integer) 0)));
#line 313 "string.parse_util.m"
            mercury__string__parse_util__STATE_VARIABLE_Chars_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__STATE_VARIABLE_Chars_0_8, (MR_Integer) 1)));
#line 315 "string.parse_util.m"
            mercury__string__parse_util__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 315 "string.parse_util.m"
            mercury__string__parse_util__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 315 "string.parse_util.m"
            mercury__string__parse_util__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 315 "string.parse_util.m"
            mercury__string__parse_util__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 315 "string.parse_util.m"
            mercury__string__parse_util__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 315 "string.parse_util.m"
#line 315 "string.parse_util.m"
            switch (mercury__string__parse_util__Char_7) {
#line 315 "string.parse_util.m"
              default:
#line 315 "string.parse_util.m"
                mercury__string__parse_util__succeeded = MR_FALSE;
#line 315 "string.parse_util.m"
                break;
#line 315 "string.parse_util.m"
              case (MR_Char) 32:
#line 315 "string.parse_util.m"
                {
#line 315 "string.parse_util.m"
                  {
#line 315 "string.parse_util.m"
                    mercury__string__parse_util__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 315 "string.parse_util.m"
                    MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) ((mercury__string__parse_util__V_54_54 | (((((MR_Integer) 1 << (MR_Integer) 1)) | ((((mercury__string__parse_util__V_52_52 << (MR_Integer) 2)) | ((((mercury__string__parse_util__V_51_51 << (MR_Integer) 3)) | ((mercury__string__parse_util__V_50_50 << (MR_Integer) 4)))))))))));
#line 315 "string.parse_util.m"
                  }
#line 315 "string.parse_util.m"
                  mercury__string__parse_util__succeeded = MR_TRUE;
#line 315 "string.parse_util.m"
                }
#line 315 "string.parse_util.m"
                break;
#line 315 "string.parse_util.m"
              case (MR_Char) 35:
#line 314 "string.parse_util.m"
                {
#line 314 "string.parse_util.m"
                  {
#line 314 "string.parse_util.m"
                    mercury__string__parse_util__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 314 "string.parse_util.m"
                    MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) (((MR_Integer) 1 | ((((mercury__string__parse_util__V_53_53 << (MR_Integer) 1)) | ((((mercury__string__parse_util__V_52_52 << (MR_Integer) 2)) | ((((mercury__string__parse_util__V_51_51 << (MR_Integer) 3)) | ((mercury__string__parse_util__V_50_50 << (MR_Integer) 4)))))))))));
#line 314 "string.parse_util.m"
                  }
#line 314 "string.parse_util.m"
                  mercury__string__parse_util__succeeded = MR_TRUE;
#line 314 "string.parse_util.m"
                }
#line 315 "string.parse_util.m"
                break;
#line 315 "string.parse_util.m"
              case (MR_Char) 43:
#line 318 "string.parse_util.m"
                {
#line 318 "string.parse_util.m"
                  {
#line 318 "string.parse_util.m"
                    mercury__string__parse_util__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 318 "string.parse_util.m"
                    MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) ((mercury__string__parse_util__V_54_54 | ((((mercury__string__parse_util__V_53_53 << (MR_Integer) 1)) | ((((mercury__string__parse_util__V_52_52 << (MR_Integer) 2)) | ((((mercury__string__parse_util__V_51_51 << (MR_Integer) 3)) | (((MR_Integer) 1 << (MR_Integer) 4)))))))))));
#line 318 "string.parse_util.m"
                  }
#line 318 "string.parse_util.m"
                  mercury__string__parse_util__succeeded = MR_TRUE;
#line 318 "string.parse_util.m"
                }
#line 315 "string.parse_util.m"
                break;
#line 315 "string.parse_util.m"
              case (MR_Char) 45:
#line 317 "string.parse_util.m"
                {
#line 317 "string.parse_util.m"
                  {
#line 317 "string.parse_util.m"
                    mercury__string__parse_util__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 317 "string.parse_util.m"
                    MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) ((mercury__string__parse_util__V_54_54 | ((((mercury__string__parse_util__V_53_53 << (MR_Integer) 1)) | ((((mercury__string__parse_util__V_52_52 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | ((mercury__string__parse_util__V_50_50 << (MR_Integer) 4)))))))))));
#line 317 "string.parse_util.m"
                  }
#line 317 "string.parse_util.m"
                  mercury__string__parse_util__succeeded = MR_TRUE;
#line 317 "string.parse_util.m"
                }
#line 315 "string.parse_util.m"
                break;
#line 315 "string.parse_util.m"
              case (MR_Char) 48:
#line 316 "string.parse_util.m"
                {
#line 316 "string.parse_util.m"
                  {
#line 316 "string.parse_util.m"
                    mercury__string__parse_util__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 316 "string.parse_util.m"
                    MR_hl_field(MR_mktag(0), mercury__string__parse_util__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) ((mercury__string__parse_util__V_54_54 | ((((mercury__string__parse_util__V_53_53 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | ((((mercury__string__parse_util__V_51_51 << (MR_Integer) 3)) | ((mercury__string__parse_util__V_50_50 << (MR_Integer) 4)))))))))));
#line 316 "string.parse_util.m"
                  }
#line 316 "string.parse_util.m"
                  mercury__string__parse_util__succeeded = MR_TRUE;
#line 316 "string.parse_util.m"
                }
#line 315 "string.parse_util.m"
                break;
#line 315 "string.parse_util.m"
            }
#line 313 "string.parse_util.m"
          }
#line 322 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 321 "string.parse_util.m"
          {
#line 321 "string.parse_util.m"
            /* direct tailcall eliminated */
#line 321 "string.parse_util.m"
            {
#line 321 "string.parse_util.m"
              MR_Word mercury__string__parse_util__STATE_VARIABLE_Chars_0__tmp_copy_8 = mercury__string__parse_util__STATE_VARIABLE_Chars_12_12;
#line 321 "string.parse_util.m"
              MR_Word mercury__string__parse_util__STATE_VARIABLE_Flags_0__tmp_copy_10 = mercury__string__parse_util__STATE_VARIABLE_Flags_21_21;

#line 321 "string.parse_util.m"
              mercury__string__parse_util__STATE_VARIABLE_Flags_0_10 = mercury__string__parse_util__STATE_VARIABLE_Flags_0__tmp_copy_10;
#line 321 "string.parse_util.m"
              mercury__string__parse_util__STATE_VARIABLE_Chars_0_8 = mercury__string__parse_util__STATE_VARIABLE_Chars_0__tmp_copy_8;
#line 321 "string.parse_util.m"
            }
#line 321 "string.parse_util.m"
            continue;
#line 321 "string.parse_util.m"
          }
#line 322 "string.parse_util.m"
        else
#line 323 "string.parse_util.m"
          {
#line 323 "string.parse_util.m"
            *mercury__string__parse_util__STATE_VARIABLE_Flags_11 = mercury__string__parse_util__STATE_VARIABLE_Flags_0_10;
#line 323 "string.parse_util.m"
            *mercury__string__parse_util__STATE_VARIABLE_Chars_9 = mercury__string__parse_util__STATE_VARIABLE_Chars_0_8;
#line 323 "string.parse_util.m"
          }
#line 322 "string.parse_util.m"
      }
#line 322 "string.parse_util.m"
      break;
#line 322 "string.parse_util.m"
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
#line 293 "string.parse_util.m"
  {
#line 293 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;

#line 293 "string.parse_util.m"
    if ((mercury__string__parse_util__Chars_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "string.parse_util.m"
      {
#line 305 "string.parse_util.m"
        *mercury__string__parse_util__NonConversionSpecChars_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 306 "string.parse_util.m"
        *mercury__string__parse_util__GatherEndedBy_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 304 "string.parse_util.m"
      }
#line 293 "string.parse_util.m"
    else
#line 293 "string.parse_util.m"
      {
#line 293 "string.parse_util.m"
        MR_Char mercury__string__parse_util__HeadChar_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__Chars_4, (MR_Integer) 0)));
#line 293 "string.parse_util.m"
        MR_Word mercury__string__parse_util__TailChars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__Chars_4, (MR_Integer) 1)));

#line 294 "string.parse_util.m"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadChar_7 == (MR_Char) 37);
#line 298 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 295 "string.parse_util.m"
          {
#line 295 "string.parse_util.m"
            *mercury__string__parse_util__NonConversionSpecChars_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 297 "string.parse_util.m"
            {
#line 297 "string.parse_util.m"
              MR_Word base;
#line 297 "string.parse_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 297 "string.parse_util.m"
              *mercury__string__parse_util__GatherEndedBy_6 = base;
#line 297 "string.parse_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__parse_util__TailChars_8));
#line 297 "string.parse_util.m"
            }
#line 295 "string.parse_util.m"
          }
#line 298 "string.parse_util.m"
        else
#line 300 "string.parse_util.m"
          {
#line 300 "string.parse_util.m"
            MR_Word mercury__string__parse_util__TailNonConversionSpecChars_9;

#line 299 "string.parse_util.m"
            {
#line 299 "string.parse_util.m"
              mercury__string__parse_util__gather_non_percent_chars_3_p_0(mercury__string__parse_util__TailChars_8, &mercury__string__parse_util__TailNonConversionSpecChars_9, mercury__string__parse_util__GatherEndedBy_6);
            }
#line 301 "string.parse_util.m"
            {
#line 301 "string.parse_util.m"
              MR_Word base;
#line 301 "string.parse_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "string.parse_util.m"
              *mercury__string__parse_util__NonConversionSpecChars_5 = base;
#line 301 "string.parse_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__parse_util__HeadChar_7));
#line 301 "string.parse_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__parse_util__TailNonConversionSpecChars_9));
#line 301 "string.parse_util.m"
            }
#line 300 "string.parse_util.m"
          }
#line 293 "string.parse_util.m"
      }
#line 293 "string.parse_util.m"
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
#line 179 "string.parse_util.m"
  {
#line 179 "string.parse_util.m"
    MR_bool mercury__string__parse_util__succeeded;
#line 179 "string.parse_util.m"
    MR_String mercury__string__parse_util__Msg_4;

#line 179 "string.parse_util.m"
#line 179 "string.parse_util.m"
    switch (MR_tag((MR_Word) mercury__string__parse_util__Error_3)) {
#line 179 "string.parse_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 179 "string.parse_util.m"
      case (MR_Integer) 0:
#line 179 "string.parse_util.m"
        {
#line 179 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__SpecNum_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__Error_3, (MR_Integer) 0)));
#line 179 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__NumExtraPolyTypes_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
#line 179 "string.parse_util.m"
          MR_String mercury__string__parse_util__Msg0_7;
#line 179 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_73_73;

#line 180 "string.parse_util.m"
          {
#line 180 "string.parse_util.m"
            mercury__string__parse_util__V_73_73 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_5);
          }
#line 180 "string.parse_util.m"
          {
#line 180 "string.parse_util.m"
            mercury__string__parse_util__Msg0_7 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_73_73, (MR_String) " is missing");
          }
#line 181 "string.parse_util.m"
          mercury__string__parse_util__succeeded = (mercury__string__parse_util__NumExtraPolyTypes_6 == (MR_Integer) 0);
#line 183 "string.parse_util.m"
          if (mercury__string__parse_util__succeeded)
#line 182 "string.parse_util.m"
            {
#line 182 "string.parse_util.m"
              {
#line 182 "string.parse_util.m"
                mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Msg0_7, (MR_String) ", along with its input.");
              }
#line 182 "string.parse_util.m"
            }
#line 183 "string.parse_util.m"
          else
#line 185 "string.parse_util.m"
            {
#line 183 "string.parse_util.m"
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__NumExtraPolyTypes_6 == (MR_Integer) 1);
#line 185 "string.parse_util.m"
              if (mercury__string__parse_util__succeeded)
#line 184 "string.parse_util.m"
                {
#line 184 "string.parse_util.m"
                  {
#line 184 "string.parse_util.m"
                    mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Msg0_7, (MR_String) ".");
                  }
#line 184 "string.parse_util.m"
                }
#line 185 "string.parse_util.m"
              else
#line 186 "string.parse_util.m"
                {
#line 186 "string.parse_util.m"
                  MR_String mercury__string__parse_util__V_77_77;
#line 186 "string.parse_util.m"
                  MR_String mercury__string__parse_util__V_79_79;
#line 186 "string.parse_util.m"
                  MR_String mercury__string__parse_util__V_80_80;
#line 186 "string.parse_util.m"
                  MR_Integer mercury__string__parse_util__V_81_81 = (mercury__string__parse_util__NumExtraPolyTypes_6 - (MR_Integer) 1);

#line 187 "string.parse_util.m"
                  {
#line 187 "string.parse_util.m"
                    mercury__string__parse_util__V_80_80 = mercury__string__int_to_string_1_f_0(mercury__string__parse_util__V_81_81);
                  }
#line 188 "string.parse_util.m"
                  {
#line 188 "string.parse_util.m"
                    mercury__string__parse_util__V_79_79 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_80_80, (MR_String) " extra inputs.");
                  }
#line 187 "string.parse_util.m"
                  {
#line 187 "string.parse_util.m"
                    mercury__string__parse_util__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) ", and there are ", mercury__string__parse_util__V_79_79);
                  }
#line 186 "string.parse_util.m"
                  {
#line 186 "string.parse_util.m"
                    mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Msg0_7, mercury__string__parse_util__V_77_77);
                  }
#line 186 "string.parse_util.m"
                }
#line 185 "string.parse_util.m"
            }
#line 179 "string.parse_util.m"
        }
#line 179 "string.parse_util.m"
        break;
#line 179 "string.parse_util.m"
      case (MR_Integer) 1:
#line 191 "string.parse_util.m"
        {
#line 191 "string.parse_util.m"
          MR_Char mercury__string__parse_util__SpecChar_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
#line 191 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_67_67;
#line 191 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_68_68;
#line 191 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_70_70;
#line 191 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_71_71;
#line 191 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__SpecNum_84 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__Error_3, (MR_Integer) 0)));

#line 192 "string.parse_util.m"
          {
#line 192 "string.parse_util.m"
            mercury__string__parse_util__V_67_67 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_84);
          }
#line 193 "string.parse_util.m"
          {
#line 193 "string.parse_util.m"
            mercury__string__parse_util__V_71_71 = mercury__string__parse_util__specifier_char_1_f_0(mercury__string__parse_util__SpecChar_8);
          }
#line 193 "string.parse_util.m"
          {
#line 193 "string.parse_util.m"
            mercury__string__parse_util__V_70_70 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_71_71, (MR_String) ".");
          }
#line 193 "string.parse_util.m"
          {
#line 193 "string.parse_util.m"
            mercury__string__parse_util__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) " uses the unknown ", mercury__string__parse_util__V_70_70);
          }
#line 192 "string.parse_util.m"
          {
#line 192 "string.parse_util.m"
            mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_67_67, mercury__string__parse_util__V_68_68);
          }
#line 191 "string.parse_util.m"
        }
#line 179 "string.parse_util.m"
        break;
#line 179 "string.parse_util.m"
      case (MR_Integer) 2:
#line 195 "string.parse_util.m"
        {
#line 195 "string.parse_util.m"
          MR_Word mercury__string__parse_util__PolyKind_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__Error_3, (MR_Integer) 2)));
#line 195 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_57_57;
#line 195 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_58_58;
#line 195 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_60_60;
#line 195 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_61_61;
#line 195 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_62_62;
#line 195 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_64_64;
#line 195 "string.parse_util.m"
          MR_String mercury__string__parse_util__V_65_65;
#line 195 "string.parse_util.m"
          MR_Integer mercury__string__parse_util__SpecNum_85 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__Error_3, (MR_Integer) 0)));
#line 195 "string.parse_util.m"
          MR_Char mercury__string__parse_util__SpecChar_86 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__parse_util__Error_3, (MR_Integer) 1)));

#line 196 "string.parse_util.m"
          {
#line 196 "string.parse_util.m"
            mercury__string__parse_util__V_57_57 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_85);
          }
#line 197 "string.parse_util.m"
          {
#line 197 "string.parse_util.m"
            mercury__string__parse_util__V_61_61 = mercury__string__parse_util__specifier_char_1_f_0(mercury__string__parse_util__SpecChar_86);
          }
#line 284 "string.parse_util.m"
          mercury__string__parse_util__V_65_65 = ((&mercury__string__parse_util_vector_common_5[8 + mercury__string__parse_util__PolyKind_9]))->mercury__string__parse_util__vector_common_type_5_0__vct_5_f_0;
#line 199 "string.parse_util.m"
          {
#line 199 "string.parse_util.m"
            mercury__string__parse_util__V_64_64 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_65_65, (MR_String) ".");
          }
#line 199 "string.parse_util.m"
          {
#line 199 "string.parse_util.m"
            mercury__string__parse_util__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) ", but the corresponding input is ", mercury__string__parse_util__V_64_64);
          }
#line 198 "string.parse_util.m"
          {
#line 198 "string.parse_util.m"
            mercury__string__parse_util__V_60_60 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_61_61, mercury__string__parse_util__V_62_62);
          }
#line 197 "string.parse_util.m"
          {
#line 197 "string.parse_util.m"
            mercury__string__parse_util__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) " uses the ", mercury__string__parse_util__V_60_60);
          }
#line 196 "string.parse_util.m"
          {
#line 196 "string.parse_util.m"
            mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_57_57, mercury__string__parse_util__V_58_58);
          }
#line 195 "string.parse_util.m"
        }
#line 179 "string.parse_util.m"
        break;
#line 179 "string.parse_util.m"
      case (MR_Integer) 3:
#line 179 "string.parse_util.m"
#line 179 "string.parse_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 0)))) {
#line 179 "string.parse_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 179 "string.parse_util.m"
          case (MR_Integer) 0:
#line 201 "string.parse_util.m"
            {
#line 201 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_51_51;
#line 201 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_52_52;
#line 201 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_54_54;
#line 201 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_55_55;
#line 201 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__SpecNum_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
#line 201 "string.parse_util.m"
              MR_Char mercury__string__parse_util__SpecChar_88 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 2)));

#line 202 "string.parse_util.m"
              {
#line 202 "string.parse_util.m"
                mercury__string__parse_util__V_51_51 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_87);
              }
#line 203 "string.parse_util.m"
              {
#line 203 "string.parse_util.m"
                mercury__string__parse_util__V_55_55 = mercury__string__parse_util__specifier_char_1_f_0(mercury__string__parse_util__SpecChar_88);
              }
#line 204 "string.parse_util.m"
              {
#line 204 "string.parse_util.m"
                mercury__string__parse_util__V_54_54 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_55_55, (MR_String) ", is missing its input.");
              }
#line 203 "string.parse_util.m"
              {
#line 203 "string.parse_util.m"
                mercury__string__parse_util__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) ", which uses ", mercury__string__parse_util__V_54_54);
              }
#line 203 "string.parse_util.m"
              {
#line 203 "string.parse_util.m"
                mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_51_51, mercury__string__parse_util__V_52_52);
              }
#line 201 "string.parse_util.m"
            }
#line 179 "string.parse_util.m"
            break;
#line 179 "string.parse_util.m"
          case (MR_Integer) 1:
#line 206 "string.parse_util.m"
            {
#line 206 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_43_43;
#line 206 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_44_44;
#line 206 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_46_46;
#line 206 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_48_48;
#line 206 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_49_49;
#line 206 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__SpecNum_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
#line 206 "string.parse_util.m"
              MR_Word mercury__string__parse_util__PolyKind_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 2)));

#line 207 "string.parse_util.m"
              {
#line 207 "string.parse_util.m"
                mercury__string__parse_util__V_43_43 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_89);
              }
#line 284 "string.parse_util.m"
              mercury__string__parse_util__V_49_49 = ((&mercury__string__parse_util_vector_common_5[4 + mercury__string__parse_util__PolyKind_90]))->mercury__string__parse_util__vector_common_type_5_0__vct_5_f_0;
#line 210 "string.parse_util.m"
              {
#line 210 "string.parse_util.m"
                mercury__string__parse_util__V_48_48 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_49_49, (MR_String) ", not an integer.");
              }
#line 209 "string.parse_util.m"
              {
#line 209 "string.parse_util.m"
                mercury__string__parse_util__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) " but the next input is ", mercury__string__parse_util__V_48_48);
              }
#line 209 "string.parse_util.m"
              {
#line 209 "string.parse_util.m"
                mercury__string__parse_util__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) " says the width is a runtime input,", mercury__string__parse_util__V_46_46);
              }
#line 208 "string.parse_util.m"
              {
#line 208 "string.parse_util.m"
                mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_43_43, mercury__string__parse_util__V_44_44);
              }
#line 206 "string.parse_util.m"
            }
#line 179 "string.parse_util.m"
            break;
#line 179 "string.parse_util.m"
          case (MR_Integer) 2:
#line 212 "string.parse_util.m"
            {
#line 212 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_39_39;
#line 212 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__SpecNum_91 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));

#line 213 "string.parse_util.m"
              {
#line 213 "string.parse_util.m"
                mercury__string__parse_util__V_39_39 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_91);
              }
#line 214 "string.parse_util.m"
              {
#line 214 "string.parse_util.m"
                mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_39_39, (MR_String) " says the width is a runtime input, but there is no next input.");
              }
#line 212 "string.parse_util.m"
            }
#line 179 "string.parse_util.m"
            break;
#line 179 "string.parse_util.m"
          case (MR_Integer) 3:
#line 217 "string.parse_util.m"
            {
#line 217 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_31_31;
#line 217 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_32_32;
#line 217 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_34_34;
#line 217 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_36_36;
#line 217 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_37_37;
#line 217 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__SpecNum_92 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
#line 217 "string.parse_util.m"
              MR_Word mercury__string__parse_util__PolyKind_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 2)));

#line 218 "string.parse_util.m"
              {
#line 218 "string.parse_util.m"
                mercury__string__parse_util__V_31_31 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_92);
              }
#line 284 "string.parse_util.m"
              mercury__string__parse_util__V_37_37 = ((&mercury__string__parse_util_vector_common_5[0 + mercury__string__parse_util__PolyKind_93]))->mercury__string__parse_util__vector_common_type_5_0__vct_5_f_0;
#line 221 "string.parse_util.m"
              {
#line 221 "string.parse_util.m"
                mercury__string__parse_util__V_36_36 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_37_37, (MR_String) ", not an integer.");
              }
#line 220 "string.parse_util.m"
              {
#line 220 "string.parse_util.m"
                mercury__string__parse_util__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) " but the next input is ", mercury__string__parse_util__V_36_36);
              }
#line 220 "string.parse_util.m"
              {
#line 220 "string.parse_util.m"
                mercury__string__parse_util__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) " says the precision is a runtime input,", mercury__string__parse_util__V_34_34);
              }
#line 219 "string.parse_util.m"
              {
#line 219 "string.parse_util.m"
                mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_31_31, mercury__string__parse_util__V_32_32);
              }
#line 217 "string.parse_util.m"
            }
#line 179 "string.parse_util.m"
            break;
#line 179 "string.parse_util.m"
          case (MR_Integer) 4:
#line 223 "string.parse_util.m"
            {
#line 223 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_27_27;
#line 223 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__SpecNum_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));

#line 224 "string.parse_util.m"
              {
#line 224 "string.parse_util.m"
                mercury__string__parse_util__V_27_27 = mercury__string__parse_util__nth_specifier_1_f_0(mercury__string__parse_util__SpecNum_94);
              }
#line 225 "string.parse_util.m"
              {
#line 225 "string.parse_util.m"
                mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_27_27, (MR_String) " says the precision is a runtime input, but there is no next input.");
              }
#line 223 "string.parse_util.m"
            }
#line 179 "string.parse_util.m"
            break;
#line 179 "string.parse_util.m"
          case (MR_Integer) 5:
#line 228 "string.parse_util.m"
            {
#line 228 "string.parse_util.m"
              MR_String mercury__string__parse_util__Extra_10;
#line 228 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_12_12;
#line 228 "string.parse_util.m"
              MR_String mercury__string__parse_util__V_13_13;
#line 228 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__SpecNum_95 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 1)));
#line 228 "string.parse_util.m"
              MR_Integer mercury__string__parse_util__NumExtraPolyTypes_96 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__Error_3, (MR_Integer) 2)));
#line 228 "string.parse_util.m"
              MR_String mercury__string__parse_util__Msg0_97;

#line 229 "string.parse_util.m"
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__SpecNum_95 == (MR_Integer) 1);
#line 232 "string.parse_util.m"
              if (mercury__string__parse_util__succeeded)
#line 231 "string.parse_util.m"
                mercury__string__parse_util__Extra_10 = (MR_String) "";
#line 232 "string.parse_util.m"
              else
#line 233 "string.parse_util.m"
                mercury__string__parse_util__Extra_10 = (MR_String) "extra ";
#line 235 "string.parse_util.m"
              {
#line 235 "string.parse_util.m"
                mercury__string__parse_util__V_13_13 = mercury__string__parse_util__nth_1_f_0(mercury__string__parse_util__SpecNum_95);
              }
#line 235 "string.parse_util.m"
              {
#line 235 "string.parse_util.m"
                mercury__string__parse_util__V_12_12 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_13_13, (MR_String) " conversion specifier,");
              }
#line 235 "string.parse_util.m"
              {
#line 235 "string.parse_util.m"
                mercury__string__parse_util__Msg0_97 = mercury__string__f_43_43_2_f_0((MR_String) "There is no ", mercury__string__parse_util__V_12_12);
              }
#line 236 "string.parse_util.m"
              mercury__string__parse_util__succeeded = (mercury__string__parse_util__NumExtraPolyTypes_96 == (MR_Integer) 1);
#line 238 "string.parse_util.m"
              if (mercury__string__parse_util__succeeded)
#line 237 "string.parse_util.m"
                {
#line 237 "string.parse_util.m"
                  MR_String mercury__string__parse_util__V_15_15;
#line 237 "string.parse_util.m"
                  MR_String mercury__string__parse_util__V_17_17;

#line 237 "string.parse_util.m"
                  {
#line 237 "string.parse_util.m"
                    mercury__string__parse_util__V_17_17 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Extra_10, (MR_String) "input.");
                  }
#line 237 "string.parse_util.m"
                  {
#line 237 "string.parse_util.m"
                    mercury__string__parse_util__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) " but there is an ", mercury__string__parse_util__V_17_17);
                  }
#line 237 "string.parse_util.m"
                  {
#line 237 "string.parse_util.m"
                    mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Msg0_97, mercury__string__parse_util__V_15_15);
                  }
#line 237 "string.parse_util.m"
                }
#line 238 "string.parse_util.m"
              else
#line 239 "string.parse_util.m"
                {
#line 239 "string.parse_util.m"
                  MR_String mercury__string__parse_util__V_19_19;
#line 239 "string.parse_util.m"
                  MR_String mercury__string__parse_util__V_21_21;
#line 239 "string.parse_util.m"
                  MR_String mercury__string__parse_util__V_22_22;
#line 239 "string.parse_util.m"
                  MR_String mercury__string__parse_util__V_23_23;
#line 239 "string.parse_util.m"
                  MR_String mercury__string__parse_util__V_25_25;

#line 240 "string.parse_util.m"
                  {
#line 240 "string.parse_util.m"
                    mercury__string__parse_util__V_22_22 = mercury__string__int_to_string_1_f_0(mercury__string__parse_util__NumExtraPolyTypes_96);
                  }
#line 241 "string.parse_util.m"
                  {
#line 241 "string.parse_util.m"
                    mercury__string__parse_util__V_25_25 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Extra_10, (MR_String) "inputs.");
                  }
#line 241 "string.parse_util.m"
                  {
#line 241 "string.parse_util.m"
                    mercury__string__parse_util__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) " ", mercury__string__parse_util__V_25_25);
                  }
#line 240 "string.parse_util.m"
                  {
#line 240 "string.parse_util.m"
                    mercury__string__parse_util__V_21_21 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__V_22_22, mercury__string__parse_util__V_23_23);
                  }
#line 239 "string.parse_util.m"
                  {
#line 239 "string.parse_util.m"
                    mercury__string__parse_util__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) " but there are ", mercury__string__parse_util__V_21_21);
                  }
#line 239 "string.parse_util.m"
                  {
#line 239 "string.parse_util.m"
                    mercury__string__parse_util__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__parse_util__Msg0_97, mercury__string__parse_util__V_19_19);
                  }
#line 239 "string.parse_util.m"
                }
#line 228 "string.parse_util.m"
            }
#line 179 "string.parse_util.m"
            break;
#line 179 "string.parse_util.m"
        }
#line 179 "string.parse_util.m"
        break;
#line 179 "string.parse_util.m"
    }
#line 179 "string.parse_util.m"
    return mercury__string__parse_util__Msg_4;
#line 179 "string.parse_util.m"
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
