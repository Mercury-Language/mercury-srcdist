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
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
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
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
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
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"



#line 926 "string.parse_util.c"
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

#line 941 "string.parse_util.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__parse_util__list__ti_list_1builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

#line 949 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_gather_ended_by_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__list__ti_list_1builtin__type_ctor_info_character_0
};

#line 954 "string.parse_util.c"
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

#line 969 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_0
};

#line 974 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_gather_ended_by_0_1[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_1
};

#line 979 "string.parse_util.c"
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

#line 993 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_gather_ended_by_0[2] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_0,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_gather_ended_by_0_1
};

#line 999 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_gather_ended_by_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1005 "string.parse_util.c"
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

#line 1022 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0 = {
  (MR_String) "poly_kind_char",
  (MR_Integer) 0
};

#line 1028 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1 = {
  (MR_String) "poly_kind_str",
  (MR_Integer) 1
};

#line 1034 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2 = {
  (MR_String) "poly_kind_int",
  (MR_Integer) 2
};

#line 1040 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3 = {
  (MR_String) "poly_kind_float",
  (MR_Integer) 3
};

#line 1046 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_poly_kind_0[4] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3
};

#line 1054 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_poly_kind_0[4] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_poly_kind_0_1
};

#line 1062 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_poly_kind_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1070 "string.parse_util.c"
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

#line 1087 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1093 "string.parse_util.c"
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

#line 1108 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 1114 "string.parse_util.c"
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

#line 1129 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_2[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0
};

#line 1136 "string.parse_util.c"
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

#line 1151 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 1157 "string.parse_util.c"
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

#line 1172 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_4[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0
};

#line 1178 "string.parse_util.c"
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

#line 1193 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1198 "string.parse_util.c"
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

#line 1213 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_6[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_poly_kind_0
};

#line 1219 "string.parse_util.c"
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

#line 1234 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1239 "string.parse_util.c"
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

#line 1254 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_error_0_8[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1260 "string.parse_util.c"
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

#line 1275 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_0
};

#line 1280 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_1[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_1
};

#line 1285 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_2[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_2
};

#line 1290 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_error_0_3[6] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_3,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_4,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_5,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_6,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_7,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_error_0_8
};

#line 1300 "string.parse_util.c"
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

#line 1324 "string.parse_util.c"
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

#line 1337 "string.parse_util.c"
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

#line 1350 "string.parse_util.c"
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

#line 1367 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_0 = {
  (MR_String) "flag_hash_clear",
  (MR_Integer) 0
};

#line 1373 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_1 = {
  (MR_String) "flag_hash_set",
  (MR_Integer) 1
};

#line 1379 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_hash_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_1
};

#line 1385 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_hash_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_hash_0_1
};

#line 1391 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_hash_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1397 "string.parse_util.c"
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

#line 1414 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_0 = {
  (MR_String) "flag_minus_clear",
  (MR_Integer) 0
};

#line 1420 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_1 = {
  (MR_String) "flag_minus_set",
  (MR_Integer) 1
};

#line 1426 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_minus_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_1
};

#line 1432 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_minus_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_minus_0_1
};

#line 1438 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_minus_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1444 "string.parse_util.c"
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

#line 1461 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_0 = {
  (MR_String) "flag_plus_clear",
  (MR_Integer) 0
};

#line 1467 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_1 = {
  (MR_String) "flag_plus_set",
  (MR_Integer) 1
};

#line 1473 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_plus_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_1
};

#line 1479 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_plus_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_plus_0_1
};

#line 1485 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_plus_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1491 "string.parse_util.c"
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

#line 1508 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_0 = {
  (MR_String) "flag_space_clear",
  (MR_Integer) 0
};

#line 1514 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_1 = {
  (MR_String) "flag_space_set",
  (MR_Integer) 1
};

#line 1520 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_space_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_1
};

#line 1526 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_space_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_space_0_1
};

#line 1532 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_space_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1538 "string.parse_util.c"
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

#line 1555 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_0 = {
  (MR_String) "flag_zero_clear",
  (MR_Integer) 0
};

#line 1561 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_1 = {
  (MR_String) "flag_zero_set",
  (MR_Integer) 1
};

#line 1567 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_flag_zero_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_1
};

#line 1573 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_flag_zero_0[2] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_flag_zero_0_1
};

#line 1579 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flag_zero_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1585 "string.parse_util.c"
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

#line 1602 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_flags_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_hash_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_space_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_zero_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_minus_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flag_plus_0
};

#line 1611 "string.parse_util.c"
static const MR_ConstString mercury__string__parse_util__string__parse_util__field_names_string_format_flags_0_0[5] = {
  (MR_String) "flag_hash",
  (MR_String) "flag_space",
  (MR_String) "flag_zero",
  (MR_String) "flag_minus",
  (MR_String) "flag_plus"
};

#line 1620 "string.parse_util.c"
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

#line 1649 "string.parse_util.c"
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

#line 1664 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_flags_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_flags_0_0
};

#line 1669 "string.parse_util.c"
static const MR_DuPtagLayout mercury__string__parse_util__string__parse_util__du_ptag_ordered_string_format_flags_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_flags_0_0
  }
};

#line 1678 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_flags_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_flags_0_0
};

#line 1683 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_flags_0[1] = {
  (MR_Integer) 0
};

#line 1688 "string.parse_util.c"
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

#line 1705 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_0 = {
  (MR_String) "kind_e_scientific_lc",
  (MR_Integer) 0
};

#line 1711 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_1 = {
  (MR_String) "kind_e_scientific_uc",
  (MR_Integer) 1
};

#line 1717 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_2 = {
  (MR_String) "kind_f_plain_lc",
  (MR_Integer) 2
};

#line 1723 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_3 = {
  (MR_String) "kind_f_plain_uc",
  (MR_Integer) 3
};

#line 1729 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_4 = {
  (MR_String) "kind_g_flexible_lc",
  (MR_Integer) 4
};

#line 1735 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_5 = {
  (MR_String) "kind_g_flexible_uc",
  (MR_Integer) 5
};

#line 1741 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_float_kind_0[6] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_4,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_5
};

#line 1751 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_float_kind_0[6] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_4,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_float_kind_0_5
};

#line 1761 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_float_kind_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5
};

#line 1771 "string.parse_util.c"
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

#line 1788 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_0 = {
  (MR_String) "base_octal",
  (MR_Integer) 0
};

#line 1794 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_1 = {
  (MR_String) "base_decimal",
  (MR_Integer) 1
};

#line 1800 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_2 = {
  (MR_String) "base_hex_lc",
  (MR_Integer) 2
};

#line 1806 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_3 = {
  (MR_String) "base_hex_uc",
  (MR_Integer) 3
};

#line 1812 "string.parse_util.c"
static const MR_EnumFunctorDesc mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_4 = {
  (MR_String) "base_hex_p",
  (MR_Integer) 4
};

#line 1818 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_value_ordered_string_format_int_base_0[5] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_0,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_4
};

#line 1827 "string.parse_util.c"
static const MR_EnumFunctorDescPtr mercury__string__parse_util__string__parse_util__enum_name_ordered_string_format_int_base_0[5] = {
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_1,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_2,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_4,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_3,
  &mercury__string__parse_util__string__parse_util__enum_functor_desc_string_format_int_base_0_0
};

#line 1836 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_int_base_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 1845 "string.parse_util.c"
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

#line 1862 "string.parse_util.c"
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

#line 1877 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_prec_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1882 "string.parse_util.c"
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

#line 1897 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_0
};

#line 1902 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_prec_0_1[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_1
};

#line 1907 "string.parse_util.c"
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

#line 1921 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_prec_0[2] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_0,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_prec_0_1
};

#line 1927 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_prec_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1933 "string.parse_util.c"
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

#line 1950 "string.parse_util.c"
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

#line 1965 "string.parse_util.c"
static const MR_PseudoTypeInfo mercury__string__parse_util__string__parse_util__field_types_string_format_maybe_width_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1970 "string.parse_util.c"
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

#line 1985 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_0[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_0
};

#line 1990 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_stag_ordered_string_format_maybe_width_0_1[1] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_1
};

#line 1995 "string.parse_util.c"
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

#line 2009 "string.parse_util.c"
static const MR_DuFunctorDescPtr mercury__string__parse_util__string__parse_util__du_name_ordered_string_format_maybe_width_0[2] = {
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_0,
  &mercury__string__parse_util__string__parse_util__du_functor_desc_string_format_maybe_width_0_1
};

#line 2015 "string.parse_util.c"
static const MR_Integer mercury__string__parse_util__string__parse_util__functor_number_map_string_format_maybe_width_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2021 "string.parse_util.c"
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

#line 2038 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____gather_ended_by_0_0_10001(
#line 2041 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2043 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2045 "string.parse_util.c"
{
#line 2047 "string.parse_util.c"
  {
#line 2049 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2052 "string.parse_util.c"
    {
#line 2054 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____gather_ended_by_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2057 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2059 "string.parse_util.c"
  }
#line 2061 "string.parse_util.c"
}

#line 2064 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____gather_ended_by_0_0_10001(
#line 2067 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2069 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2071 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2073 "string.parse_util.c"
{
#line 2075 "string.parse_util.c"
  {
#line 2077 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2080 "string.parse_util.c"
    {
#line 2082 "string.parse_util.c"
      mercury__string__parse_util____Compare____gather_ended_by_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2085 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2087 "string.parse_util.c"
  }
#line 2089 "string.parse_util.c"
}

#line 2092 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____poly_kind_0_0_10001(
#line 2095 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2097 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2099 "string.parse_util.c"
{
#line 2101 "string.parse_util.c"
  {
#line 2103 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2106 "string.parse_util.c"
    {
#line 2108 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____poly_kind_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2111 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2113 "string.parse_util.c"
  }
#line 2115 "string.parse_util.c"
}

#line 2118 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____poly_kind_0_0_10001(
#line 2121 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2123 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2125 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2127 "string.parse_util.c"
{
#line 2129 "string.parse_util.c"
  {
#line 2131 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2134 "string.parse_util.c"
    {
#line 2136 "string.parse_util.c"
      mercury__string__parse_util____Compare____poly_kind_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2139 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2141 "string.parse_util.c"
  }
#line 2143 "string.parse_util.c"
}

#line 2146 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_error_0_0_10001(
#line 2149 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2151 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2153 "string.parse_util.c"
{
#line 2155 "string.parse_util.c"
  {
#line 2157 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2160 "string.parse_util.c"
    {
#line 2162 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_error_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2165 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2167 "string.parse_util.c"
  }
#line 2169 "string.parse_util.c"
}

#line 2172 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_error_0_0_10001(
#line 2175 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2177 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2179 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2181 "string.parse_util.c"
{
#line 2183 "string.parse_util.c"
  {
#line 2185 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2188 "string.parse_util.c"
    {
#line 2190 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_error_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2193 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2195 "string.parse_util.c"
  }
#line 2197 "string.parse_util.c"
}

#line 2200 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_hash_0_0_10001(
#line 2203 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2205 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2207 "string.parse_util.c"
{
#line 2209 "string.parse_util.c"
  {
#line 2211 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2214 "string.parse_util.c"
    {
#line 2216 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_hash_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2219 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2221 "string.parse_util.c"
  }
#line 2223 "string.parse_util.c"
}

#line 2226 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_hash_0_0_10001(
#line 2229 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2231 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2233 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2235 "string.parse_util.c"
{
#line 2237 "string.parse_util.c"
  {
#line 2239 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2242 "string.parse_util.c"
    {
#line 2244 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flag_hash_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2247 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2249 "string.parse_util.c"
  }
#line 2251 "string.parse_util.c"
}

#line 2254 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_minus_0_0_10001(
#line 2257 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2259 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2261 "string.parse_util.c"
{
#line 2263 "string.parse_util.c"
  {
#line 2265 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2268 "string.parse_util.c"
    {
#line 2270 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_minus_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2273 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2275 "string.parse_util.c"
  }
#line 2277 "string.parse_util.c"
}

#line 2280 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_minus_0_0_10001(
#line 2283 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2285 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2287 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2289 "string.parse_util.c"
{
#line 2291 "string.parse_util.c"
  {
#line 2293 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2296 "string.parse_util.c"
    {
#line 2298 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flag_minus_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2301 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2303 "string.parse_util.c"
  }
#line 2305 "string.parse_util.c"
}

#line 2308 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_plus_0_0_10001(
#line 2311 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2313 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2315 "string.parse_util.c"
{
#line 2317 "string.parse_util.c"
  {
#line 2319 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2322 "string.parse_util.c"
    {
#line 2324 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_plus_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2327 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2329 "string.parse_util.c"
  }
#line 2331 "string.parse_util.c"
}

#line 2334 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_plus_0_0_10001(
#line 2337 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2339 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2341 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2343 "string.parse_util.c"
{
#line 2345 "string.parse_util.c"
  {
#line 2347 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2350 "string.parse_util.c"
    {
#line 2352 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flag_plus_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2355 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2357 "string.parse_util.c"
  }
#line 2359 "string.parse_util.c"
}

#line 2362 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_space_0_0_10001(
#line 2365 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2367 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2369 "string.parse_util.c"
{
#line 2371 "string.parse_util.c"
  {
#line 2373 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2376 "string.parse_util.c"
    {
#line 2378 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_space_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2381 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2383 "string.parse_util.c"
  }
#line 2385 "string.parse_util.c"
}

#line 2388 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_space_0_0_10001(
#line 2391 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2393 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2395 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2397 "string.parse_util.c"
{
#line 2399 "string.parse_util.c"
  {
#line 2401 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2404 "string.parse_util.c"
    {
#line 2406 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flag_space_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2409 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2411 "string.parse_util.c"
  }
#line 2413 "string.parse_util.c"
}

#line 2416 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flag_zero_0_0_10001(
#line 2419 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2421 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2423 "string.parse_util.c"
{
#line 2425 "string.parse_util.c"
  {
#line 2427 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2430 "string.parse_util.c"
    {
#line 2432 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flag_zero_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2435 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2437 "string.parse_util.c"
  }
#line 2439 "string.parse_util.c"
}

#line 2442 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flag_zero_0_0_10001(
#line 2445 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2447 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2449 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2451 "string.parse_util.c"
{
#line 2453 "string.parse_util.c"
  {
#line 2455 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2458 "string.parse_util.c"
    {
#line 2460 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flag_zero_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2463 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2465 "string.parse_util.c"
  }
#line 2467 "string.parse_util.c"
}

#line 2470 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_flags_0_0_10001(
#line 2473 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2475 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2477 "string.parse_util.c"
{
#line 2479 "string.parse_util.c"
  {
#line 2481 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2484 "string.parse_util.c"
    {
#line 2486 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2489 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2491 "string.parse_util.c"
  }
#line 2493 "string.parse_util.c"
}

#line 2496 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_flags_0_0_10001(
#line 2499 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2501 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2503 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2505 "string.parse_util.c"
{
#line 2507 "string.parse_util.c"
  {
#line 2509 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2512 "string.parse_util.c"
    {
#line 2514 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_flags_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2517 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2519 "string.parse_util.c"
  }
#line 2521 "string.parse_util.c"
}

#line 2524 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_float_kind_0_0_10001(
#line 2527 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2529 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2531 "string.parse_util.c"
{
#line 2533 "string.parse_util.c"
  {
#line 2535 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2538 "string.parse_util.c"
    {
#line 2540 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_float_kind_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2543 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2545 "string.parse_util.c"
  }
#line 2547 "string.parse_util.c"
}

#line 2550 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_float_kind_0_0_10001(
#line 2553 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2555 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2557 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2559 "string.parse_util.c"
{
#line 2561 "string.parse_util.c"
  {
#line 2563 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2566 "string.parse_util.c"
    {
#line 2568 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_float_kind_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2571 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2573 "string.parse_util.c"
  }
#line 2575 "string.parse_util.c"
}

#line 2578 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_int_base_0_0_10001(
#line 2581 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2583 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2585 "string.parse_util.c"
{
#line 2587 "string.parse_util.c"
  {
#line 2589 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2592 "string.parse_util.c"
    {
#line 2594 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_int_base_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2597 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2599 "string.parse_util.c"
  }
#line 2601 "string.parse_util.c"
}

#line 2604 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_int_base_0_0_10001(
#line 2607 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2609 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2611 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2613 "string.parse_util.c"
{
#line 2615 "string.parse_util.c"
  {
#line 2617 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2620 "string.parse_util.c"
    {
#line 2622 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_int_base_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2625 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2627 "string.parse_util.c"
  }
#line 2629 "string.parse_util.c"
}

#line 2632 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_prec_0_0_10001(
#line 2635 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2637 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2639 "string.parse_util.c"
{
#line 2641 "string.parse_util.c"
  {
#line 2643 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2646 "string.parse_util.c"
    {
#line 2648 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_maybe_prec_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2651 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2653 "string.parse_util.c"
  }
#line 2655 "string.parse_util.c"
}

#line 2658 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_prec_0_0_10001(
#line 2661 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2663 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2665 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2667 "string.parse_util.c"
{
#line 2669 "string.parse_util.c"
  {
#line 2671 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2674 "string.parse_util.c"
    {
#line 2676 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_maybe_prec_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2679 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2681 "string.parse_util.c"
  }
#line 2683 "string.parse_util.c"
}

#line 2686 "string.parse_util.c"
static MR_bool MR_CALL 
mercury__string__parse_util____Unify____string_format_maybe_width_0_0_10001(
#line 2689 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_1,
#line 2691 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2)
#line 2693 "string.parse_util.c"
{
#line 2695 "string.parse_util.c"
  {
#line 2697 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded;

#line 2700 "string.parse_util.c"
    {
#line 2702 "string.parse_util.c"
      mercury__string__parse_util__succeeded = mercury__string__parse_util____Unify____string_format_maybe_width_0_0(((MR_Word) mercury__string__parse_util__wrapper_arg_1), ((MR_Word) mercury__string__parse_util__wrapper_arg_2));
    }
#line 2705 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 2707 "string.parse_util.c"
  }
#line 2709 "string.parse_util.c"
}

#line 2712 "string.parse_util.c"
static void MR_CALL 
mercury__string__parse_util____Compare____string_format_maybe_width_0_0_10001(
#line 2715 "string.parse_util.c"
  MR_Box * mercury__string__parse_util__wrapper_arg_1,
#line 2717 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_2,
#line 2719 "string.parse_util.c"
  MR_Box mercury__string__parse_util__wrapper_arg_3)
#line 2721 "string.parse_util.c"
{
#line 2723 "string.parse_util.c"
  {
#line 2725 "string.parse_util.c"
    MR_Word mercury__string__parse_util__conv0_HeadVar__1_1;

#line 2728 "string.parse_util.c"
    {
#line 2730 "string.parse_util.c"
      mercury__string__parse_util____Compare____string_format_maybe_width_0_0(&mercury__string__parse_util__conv0_HeadVar__1_1, ((MR_Word) mercury__string__parse_util__wrapper_arg_2), ((MR_Word) mercury__string__parse_util__wrapper_arg_3));
    }
#line 2733 "string.parse_util.c"
    *mercury__string__parse_util__wrapper_arg_1 = ((MR_Box) (mercury__string__parse_util__conv0_HeadVar__1_1));
#line 2735 "string.parse_util.c"
  }
#line 2737 "string.parse_util.c"
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
#line 2781 "string.parse_util.c"
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
#line 2793 "string.parse_util.c"
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 55 "string.parse_util.m"
    else
#line 55 "string.parse_util.m"
      {
#line 55 "string.parse_util.m"
        MR_Integer mercury__string__parse_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

#line 55 "string.parse_util.m"
        if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2804 "string.parse_util.c"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 55 "string.parse_util.m"
        else
#line 55 "string.parse_util.m"
          {
#line 55 "string.parse_util.m"
            MR_Integer mercury__string__parse_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)));

#line 32 "private_builtin.opt"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_11_11 < mercury__string__parse_util__V_7_7);
#line 35 "private_builtin.opt"
            if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
            else
#line 40 "private_builtin.opt"
              {
#line 37 "private_builtin.opt"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_11_11 == mercury__string__parse_util__V_7_7);
#line 40 "private_builtin.opt"
                if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                  *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                else
#line 41 "private_builtin.opt"
                  *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
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
#line 2900 "string.parse_util.c"
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
#line 2937 "string.parse_util.c"
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
#line 2949 "string.parse_util.c"
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 59 "string.parse_util.m"
    else
#line 59 "string.parse_util.m"
      {
#line 59 "string.parse_util.m"
        MR_Integer mercury__string__parse_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

#line 59 "string.parse_util.m"
        if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2960 "string.parse_util.c"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 59 "string.parse_util.m"
        else
#line 59 "string.parse_util.m"
          {
#line 59 "string.parse_util.m"
            MR_Integer mercury__string__parse_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 0)));

#line 32 "private_builtin.opt"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_11_11 < mercury__string__parse_util__V_7_7);
#line 35 "private_builtin.opt"
            if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
            else
#line 40 "private_builtin.opt"
              {
#line 37 "private_builtin.opt"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_11_11 == mercury__string__parse_util__V_7_7);
#line 40 "private_builtin.opt"
                if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                  *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                else
#line 41 "private_builtin.opt"
                  *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
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
#line 3056 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 35 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
    else
#line 40 "private_builtin.opt"
      {
#line 37 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 40 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
        else
#line 41 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
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
#line 3125 "string.parse_util.c"
  {
#line 3127 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3130 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3132 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 35 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
    else
#line 40 "private_builtin.opt"
      {
#line 37 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 40 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
        else
#line 41 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
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
#line 3193 "string.parse_util.c"
  {
#line 3195 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3198 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3200 "string.parse_util.c"
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
#line 3229 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_25_25 < mercury__string__parse_util__V_26_26);
#line 35 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
          mercury__string__parse_util__V_14_14 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
        else
#line 40 "private_builtin.opt"
          {
#line 37 "private_builtin.opt"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_25_25 == mercury__string__parse_util__V_26_26);
#line 40 "private_builtin.opt"
            if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
              mercury__string__parse_util__V_14_14 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
            else
#line 41 "private_builtin.opt"
              mercury__string__parse_util__V_14_14 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
          }
#line 3284 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_27_27 < mercury__string__parse_util__V_28_28);
#line 35 "private_builtin.opt"
            if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
              mercury__string__parse_util__V_15_15 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
            else
#line 40 "private_builtin.opt"
              {
#line 37 "private_builtin.opt"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_27_27 == mercury__string__parse_util__V_28_28);
#line 40 "private_builtin.opt"
                if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                  mercury__string__parse_util__V_15_15 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                else
#line 41 "private_builtin.opt"
                  mercury__string__parse_util__V_15_15 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
              }
#line 3325 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_29_29 < mercury__string__parse_util__V_30_30);
#line 35 "private_builtin.opt"
                if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
                  mercury__string__parse_util__V_16_16 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                else
#line 40 "private_builtin.opt"
                  {
#line 37 "private_builtin.opt"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_29_29 == mercury__string__parse_util__V_30_30);
#line 40 "private_builtin.opt"
                    if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                      mercury__string__parse_util__V_16_16 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                    else
#line 41 "private_builtin.opt"
                      mercury__string__parse_util__V_16_16 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                  }
#line 3366 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_31_31 < mercury__string__parse_util__V_32_32);
#line 35 "private_builtin.opt"
                    if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
                      mercury__string__parse_util__V_17_17 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                    else
#line 40 "private_builtin.opt"
                      {
#line 37 "private_builtin.opt"
                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_31_31 == mercury__string__parse_util__V_32_32);
#line 40 "private_builtin.opt"
                        if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                          mercury__string__parse_util__V_17_17 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                        else
#line 41 "private_builtin.opt"
                          mercury__string__parse_util__V_17_17 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                      }
#line 3407 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
                        mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_33_33 < mercury__string__parse_util__V_34_34);
#line 35 "private_builtin.opt"
                        if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
                          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                        else
#line 40 "private_builtin.opt"
                          {
#line 37 "private_builtin.opt"
                            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_33_33 == mercury__string__parse_util__V_34_34);
#line 40 "private_builtin.opt"
                            if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                            else
#line 41 "private_builtin.opt"
                              *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
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

#line 3510 "string.parse_util.c"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_3_3 == mercury__string__parse_util__V_8_8);
#line 46 "string.parse_util.m"
        if (mercury__string__parse_util__succeeded)
#line 46 "string.parse_util.m"
          {
#line 3516 "string.parse_util.c"
            mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_4_4 == mercury__string__parse_util__V_9_9);
#line 46 "string.parse_util.m"
            if (mercury__string__parse_util__succeeded)
#line 46 "string.parse_util.m"
              {
#line 3522 "string.parse_util.c"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_5_5 == mercury__string__parse_util__V_10_10);
#line 46 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 46 "string.parse_util.m"
                  {
#line 3528 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_6_6 == mercury__string__parse_util__V_11_11);
#line 46 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 3532 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 35 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
    else
#line 40 "private_builtin.opt"
      {
#line 37 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 40 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
        else
#line 41 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
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
#line 3605 "string.parse_util.c"
  {
#line 3607 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3610 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3612 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 35 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
    else
#line 40 "private_builtin.opt"
      {
#line 37 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 40 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
        else
#line 41 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
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
#line 3673 "string.parse_util.c"
  {
#line 3675 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3678 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3680 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 35 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
    else
#line 40 "private_builtin.opt"
      {
#line 37 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 40 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
        else
#line 41 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
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
#line 3741 "string.parse_util.c"
  {
#line 3743 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3746 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3748 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 35 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
    else
#line 40 "private_builtin.opt"
      {
#line 37 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 40 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
        else
#line 41 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
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
#line 3809 "string.parse_util.c"
  {
#line 3811 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3814 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3816 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 35 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
    else
#line 40 "private_builtin.opt"
      {
#line 37 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 40 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
        else
#line 41 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
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
#line 3877 "string.parse_util.c"
  {
#line 3879 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 3882 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 3884 "string.parse_util.c"
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
#line 3913 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_344_344 < mercury__string__parse_util__V_6_6);
#line 35 "private_builtin.opt"
                  if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
                    mercury__string__parse_util__V_8_8 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                  else
#line 40 "private_builtin.opt"
                    {
#line 37 "private_builtin.opt"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_344_344 == mercury__string__parse_util__V_6_6);
#line 40 "private_builtin.opt"
                      if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                        mercury__string__parse_util__V_8_8 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                      else
#line 41 "private_builtin.opt"
                        mercury__string__parse_util__V_8_8 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                    }
#line 3969 "string.parse_util.c"
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_8_8 == (MR_Integer) 0);
#line 84 "string.parse_util.m"
                  mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
#line 84 "string.parse_util.m"
                  if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                    *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__V_8_8;
#line 84 "string.parse_util.m"
                  else
#line 35 "private_builtin.opt"
                    {
#line 32 "private_builtin.opt"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_343_343 < mercury__string__parse_util__V_7_7);
#line 35 "private_builtin.opt"
                      if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                      else
#line 40 "private_builtin.opt"
                        {
#line 37 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_343_343 == mercury__string__parse_util__V_7_7);
#line 40 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                          else
#line 41 "private_builtin.opt"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                        }
#line 35 "private_builtin.opt"
                    }
#line 84 "string.parse_util.m"
                }
#line 84 "string.parse_util.m"
                break;
#line 84 "string.parse_util.m"
              case (MR_Integer) 1:
#line 4011 "string.parse_util.c"
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                break;
#line 84 "string.parse_util.m"
              case (MR_Integer) 2:
#line 4017 "string.parse_util.c"
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
#line 4030 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 4036 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 4042 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 3:
#line 4048 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 4:
#line 4054 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 5:
#line 4060 "string.parse_util.c"
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
#line 4090 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_350_350 < mercury__string__parse_util__V_46_46);
#line 35 "private_builtin.opt"
                  if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
                    mercury__string__parse_util__V_48_48 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                  else
#line 40 "private_builtin.opt"
                    {
#line 37 "private_builtin.opt"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_350_350 == mercury__string__parse_util__V_46_46);
#line 40 "private_builtin.opt"
                      if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                        mercury__string__parse_util__V_48_48 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                      else
#line 41 "private_builtin.opt"
                        mercury__string__parse_util__V_48_48 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                    }
#line 4127 "string.parse_util.c"
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

#line 32 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__V_349_349 ;
		{
#line 32 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4157 "string.parse_util.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__XI_7_404  = Int;
#line 32 "char.opt"
}
#line 32 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__V_47_47 ;
		{
#line 32 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4177 "string.parse_util.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__YI_8_405  = Int;
#line 32 "char.opt"
}
#line 50 "private_builtin.opt"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__XI_7_404 < mercury__string__parse_util__YI_8_405);
#line 53 "private_builtin.opt"
                      if (mercury__string__parse_util__succeeded)
#line 52 "private_builtin.opt"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 53 "private_builtin.opt"
                      else
#line 58 "private_builtin.opt"
                        {
#line 55 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__XI_7_404 == mercury__string__parse_util__YI_8_405);
#line 58 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 57 "private_builtin.opt"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 58 "private_builtin.opt"
                          else
#line 59 "private_builtin.opt"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 58 "private_builtin.opt"
                        }
#line 84 "string.parse_util.m"
                    }
#line 84 "string.parse_util.m"
                }
#line 84 "string.parse_util.m"
                break;
#line 84 "string.parse_util.m"
              case (MR_Integer) 2:
#line 4214 "string.parse_util.c"
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
#line 4227 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 4233 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 4239 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 3:
#line 4245 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 4:
#line 4251 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 5:
#line 4257 "string.parse_util.c"
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
#line 4289 "string.parse_util.c"
                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                break;
#line 84 "string.parse_util.m"
              case (MR_Integer) 1:
#line 4295 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_353_353 < mercury__string__parse_util__V_89_89);
#line 35 "private_builtin.opt"
                  if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
                    mercury__string__parse_util__V_92_92 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                  else
#line 40 "private_builtin.opt"
                    {
#line 37 "private_builtin.opt"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_353_353 == mercury__string__parse_util__V_89_89);
#line 40 "private_builtin.opt"
                      if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                        mercury__string__parse_util__V_92_92 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                      else
#line 41 "private_builtin.opt"
                        mercury__string__parse_util__V_92_92 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                    }
#line 4334 "string.parse_util.c"
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

#line 32 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__V_352_352 ;
		{
#line 32 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4366 "string.parse_util.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__XI_7_412  = Int;
#line 32 "char.opt"
}
#line 32 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__V_90_90 ;
		{
#line 32 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4386 "string.parse_util.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__YI_8_413  = Int;
#line 32 "char.opt"
}
#line 50 "private_builtin.opt"
                      mercury__string__parse_util__succeeded = (mercury__string__parse_util__XI_7_412 < mercury__string__parse_util__YI_8_413);
#line 53 "private_builtin.opt"
                      if (mercury__string__parse_util__succeeded)
#line 52 "private_builtin.opt"
                        mercury__string__parse_util__V_93_93 = (MR_Integer) 1;
#line 53 "private_builtin.opt"
                      else
#line 58 "private_builtin.opt"
                        {
#line 55 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__XI_7_412 == mercury__string__parse_util__YI_8_413);
#line 58 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 57 "private_builtin.opt"
                            mercury__string__parse_util__V_93_93 = (MR_Integer) 0;
#line 58 "private_builtin.opt"
                          else
#line 59 "private_builtin.opt"
                            mercury__string__parse_util__V_93_93 = (MR_Integer) 2;
#line 58 "private_builtin.opt"
                        }
#line 4415 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_358_358 < mercury__string__parse_util__V_359_359);
#line 35 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                          else
#line 40 "private_builtin.opt"
                            {
#line 37 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_358_358 == mercury__string__parse_util__V_359_359);
#line 40 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                              else
#line 41 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
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
#line 4471 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 4477 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 4483 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 3:
#line 4489 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 4:
#line 4495 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 5:
#line 4501 "string.parse_util.c"
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
#line 4538 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 4544 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 4550 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_342_342 < mercury__string__parse_util__V_137_137);
#line 35 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
                            mercury__string__parse_util__V_139_139 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                          else
#line 40 "private_builtin.opt"
                            {
#line 37 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_342_342 == mercury__string__parse_util__V_137_137);
#line 40 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                                mercury__string__parse_util__V_139_139 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                              else
#line 41 "private_builtin.opt"
                                mercury__string__parse_util__V_139_139 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                            }
#line 4594 "string.parse_util.c"
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

#line 32 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__V_341_341 ;
		{
#line 32 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4624 "string.parse_util.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__XI_7_378  = Int;
#line 32 "char.opt"
}
#line 32 "char.opt"
{
#define MR_PROC_LABEL mercury__string__parse_util____Compare____string_format_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__parse_util__V_138_138 ;
		{
#line 32 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 4644 "string.parse_util.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__parse_util__YI_8_379  = Int;
#line 32 "char.opt"
}
#line 50 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__XI_7_378 < mercury__string__parse_util__YI_8_379);
#line 53 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 52 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 53 "private_builtin.opt"
                              else
#line 58 "private_builtin.opt"
                                {
#line 55 "private_builtin.opt"
                                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__XI_7_378 == mercury__string__parse_util__YI_8_379);
#line 58 "private_builtin.opt"
                                  if (mercury__string__parse_util__succeeded)
#line 57 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 58 "private_builtin.opt"
                                  else
#line 59 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 58 "private_builtin.opt"
                                }
#line 84 "string.parse_util.m"
                            }
#line 84 "string.parse_util.m"
                        }
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 1:
#line 4681 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 2:
#line 4687 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 3:
#line 4693 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 4:
#line 4699 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 5:
#line 4705 "string.parse_util.c"
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
#line 4735 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 4741 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 4747 "string.parse_util.c"
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
#line 4760 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_348_348 < mercury__string__parse_util__V_177_177);
#line 35 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
                            mercury__string__parse_util__V_179_179 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                          else
#line 40 "private_builtin.opt"
                            {
#line 37 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_348_348 == mercury__string__parse_util__V_177_177);
#line 40 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                                mercury__string__parse_util__V_179_179 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                              else
#line 41 "private_builtin.opt"
                                mercury__string__parse_util__V_179_179 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                            }
#line 4797 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_356_356 < mercury__string__parse_util__V_357_357);
#line 35 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                              else
#line 40 "private_builtin.opt"
                                {
#line 37 "private_builtin.opt"
                                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_356_356 == mercury__string__parse_util__V_357_357);
#line 40 "private_builtin.opt"
                                  if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                                  else
#line 41 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                                }
#line 84 "string.parse_util.m"
                            }
#line 84 "string.parse_util.m"
                        }
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 2:
#line 4844 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 3:
#line 4850 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 4:
#line 4856 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 5:
#line 4862 "string.parse_util.c"
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
#line 4890 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 4896 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 4902 "string.parse_util.c"
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
#line 4915 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 1:
#line 4921 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 2:
#line 84 "string.parse_util.m"
                        {
#line 84 "string.parse_util.m"
                          MR_Integer mercury__string__parse_util__V_211_211 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));

#line 32 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_340_340 < mercury__string__parse_util__V_211_211);
#line 35 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                          else
#line 40 "private_builtin.opt"
                            {
#line 37 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_340_340 == mercury__string__parse_util__V_211_211);
#line 40 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                              else
#line 41 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                            }
#line 84 "string.parse_util.m"
                        }
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 3:
#line 4960 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 4:
#line 4966 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 5:
#line 4972 "string.parse_util.c"
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
#line 5002 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 5008 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 5014 "string.parse_util.c"
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
#line 5027 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 1:
#line 5033 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 2:
#line 5039 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_346_346 < mercury__string__parse_util__V_246_246);
#line 35 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
                            mercury__string__parse_util__V_248_248 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                          else
#line 40 "private_builtin.opt"
                            {
#line 37 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_346_346 == mercury__string__parse_util__V_246_246);
#line 40 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                                mercury__string__parse_util__V_248_248 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                              else
#line 41 "private_builtin.opt"
                                mercury__string__parse_util__V_248_248 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                            }
#line 5076 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_354_354 < mercury__string__parse_util__V_355_355);
#line 35 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                              else
#line 40 "private_builtin.opt"
                                {
#line 37 "private_builtin.opt"
                                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_354_354 == mercury__string__parse_util__V_355_355);
#line 40 "private_builtin.opt"
                                  if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                                  else
#line 41 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                                }
#line 84 "string.parse_util.m"
                            }
#line 84 "string.parse_util.m"
                        }
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 4:
#line 5123 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 5:
#line 5129 "string.parse_util.c"
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
#line 5157 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 5163 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 5169 "string.parse_util.c"
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
#line 5182 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 1:
#line 5188 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 2:
#line 5194 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 3:
#line 5200 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 4:
#line 84 "string.parse_util.m"
                        {
#line 84 "string.parse_util.m"
                          MR_Integer mercury__string__parse_util__V_278_278 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__parse_util__HeadVar__3_3, (MR_Integer) 1)));

#line 32 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_339_339 < mercury__string__parse_util__V_278_278);
#line 35 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
                            *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                          else
#line 40 "private_builtin.opt"
                            {
#line 37 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_339_339 == mercury__string__parse_util__V_278_278);
#line 40 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                              else
#line 41 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                            }
#line 84 "string.parse_util.m"
                        }
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 5:
#line 5239 "string.parse_util.c"
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
#line 5269 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 1:
#line 5275 "string.parse_util.c"
                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                    break;
#line 84 "string.parse_util.m"
                  case (MR_Integer) 2:
#line 5281 "string.parse_util.c"
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
#line 5294 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 1:
#line 5300 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 2:
#line 5306 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 3:
#line 5312 "string.parse_util.c"
                        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "string.parse_util.m"
                        break;
#line 84 "string.parse_util.m"
                      case (MR_Integer) 4:
#line 5318 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_338_338 < mercury__string__parse_util__V_315_315);
#line 35 "private_builtin.opt"
                          if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
                            mercury__string__parse_util__V_317_317 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                          else
#line 40 "private_builtin.opt"
                            {
#line 37 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_338_338 == mercury__string__parse_util__V_315_315);
#line 40 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                                mercury__string__parse_util__V_317_317 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                              else
#line 41 "private_builtin.opt"
                                mercury__string__parse_util__V_317_317 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                            }
#line 5355 "string.parse_util.c"
                          mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_317_317 == (MR_Integer) 0);
#line 84 "string.parse_util.m"
                          mercury__string__parse_util__succeeded = !(mercury__string__parse_util__succeeded);
#line 84 "string.parse_util.m"
                          if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                            *mercury__string__parse_util__HeadVar__1_1 = mercury__string__parse_util__V_317_317;
#line 84 "string.parse_util.m"
                          else
#line 35 "private_builtin.opt"
                            {
#line 32 "private_builtin.opt"
                              mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_337_337 < mercury__string__parse_util__V_316_316);
#line 35 "private_builtin.opt"
                              if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
                                *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                              else
#line 40 "private_builtin.opt"
                                {
#line 37 "private_builtin.opt"
                                  mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_337_337 == mercury__string__parse_util__V_316_316);
#line 40 "private_builtin.opt"
                                  if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                                  else
#line 41 "private_builtin.opt"
                                    *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                                }
#line 35 "private_builtin.opt"
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
#line 5470 "string.parse_util.c"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_3_3 == mercury__string__parse_util__V_5_5);
#line 84 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 5474 "string.parse_util.c"
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
#line 5505 "string.parse_util.c"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_7_7 == mercury__string__parse_util__V_9_9);
#line 84 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 5509 "string.parse_util.c"
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
#line 5546 "string.parse_util.c"
                mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_11_11 == mercury__string__parse_util__V_14_14);
#line 84 "string.parse_util.m"
                if (mercury__string__parse_util__succeeded)
#line 84 "string.parse_util.m"
                  {
#line 5552 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_12_12 == mercury__string__parse_util__V_15_15);
#line 84 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 5556 "string.parse_util.c"
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
#line 5596 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_17_17 == mercury__string__parse_util__V_19_19);
#line 84 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 5600 "string.parse_util.c"
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
#line 5631 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_21_21 == mercury__string__parse_util__V_23_23);
#line 84 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 5635 "string.parse_util.c"
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
#line 5660 "string.parse_util.c"
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
#line 5691 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_27_27 == mercury__string__parse_util__V_29_29);
#line 84 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 5695 "string.parse_util.c"
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
#line 5720 "string.parse_util.c"
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
#line 5751 "string.parse_util.c"
                    mercury__string__parse_util__succeeded = (mercury__string__parse_util__V_33_33 == mercury__string__parse_util__V_35_35);
#line 84 "string.parse_util.m"
                    if (mercury__string__parse_util__succeeded)
#line 5755 "string.parse_util.c"
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

#line 32 "private_builtin.opt"
    mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 < mercury__string__parse_util__Cast_HeadVar2_5);
#line 35 "private_builtin.opt"
    if (mercury__string__parse_util__succeeded)
#line 34 "private_builtin.opt"
      *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
    else
#line 40 "private_builtin.opt"
      {
#line 37 "private_builtin.opt"
        mercury__string__parse_util__succeeded = (mercury__string__parse_util__Cast_HeadVar1_4 == mercury__string__parse_util__Cast_HeadVar2_5);
#line 40 "private_builtin.opt"
        if (mercury__string__parse_util__succeeded)
#line 39 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
        else
#line 41 "private_builtin.opt"
          *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
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
#line 5832 "string.parse_util.c"
  {
#line 5834 "string.parse_util.c"
    MR_bool mercury__string__parse_util__succeeded = (mercury__string__parse_util__HeadVar__2_1 == mercury__string__parse_util__HeadVar__2_2);

#line 5837 "string.parse_util.c"
    return mercury__string__parse_util__succeeded;
#line 5839 "string.parse_util.c"
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
#line 5868 "string.parse_util.c"
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
#line 5880 "string.parse_util.c"
        *mercury__string__parse_util__HeadVar__1_1 = (MR_Integer) 1;
#line 126 "string.parse_util.m"
    else
#line 126 "string.parse_util.m"
      {
#line 126 "string.parse_util.m"
        MR_Word mercury__string__parse_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__parse_util__HeadVar__2_2, (MR_Integer) 0)));

#line 126 "string.parse_util.m"
        if ((mercury__string__parse_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5891 "string.parse_util.c"
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
#line 5976 "string.parse_util.c"
            mercury__string__parse_util__TypeInfo_9_9 = (MR_Word) &mercury__string__parse_util_scalar_common_1[0];
#line 5978 "string.parse_util.c"
            {
#line 5980 "string.parse_util.c"
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
