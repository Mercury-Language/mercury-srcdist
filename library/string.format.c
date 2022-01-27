/*
** Automatically generated from `string.format.m'
** by the Mercury compiler,
** version rotd-2014-11-20
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


/* :- module string.format. */
/* :- implementation. */

/*
INIT mercury__string__format__init
ENDINIT
*/

#include "string.format.mih"


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
#include "string.to_string.mih"




#line 88 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_flag_hash_0_0;

#line 91 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_flag_hash_0_1;

#line 94 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_value_ordered_flag_hash_0[2];

#line 97 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_name_ordered_flag_hash_0[2];

#line 100 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_flag_hash_0[2];

#line 103 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_flag_minus_0_0;

#line 106 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_flag_minus_0_1;

#line 109 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_value_ordered_flag_minus_0[2];

#line 112 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_name_ordered_flag_minus_0[2];

#line 115 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_flag_minus_0[2];

#line 118 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_flag_plus_0_0;

#line 121 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_flag_plus_0_1;

#line 124 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_value_ordered_flag_plus_0[2];

#line 127 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_name_ordered_flag_plus_0[2];

#line 130 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_flag_plus_0[2];

#line 133 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_flag_space_0_0;

#line 136 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_flag_space_0_1;

#line 139 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_value_ordered_flag_space_0[2];

#line 142 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_name_ordered_flag_space_0[2];

#line 145 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_flag_space_0[2];

#line 148 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_flag_zero_0_0;

#line 151 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_flag_zero_0_1;

#line 154 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_value_ordered_flag_zero_0[2];

#line 157 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_name_ordered_flag_zero_0[2];

#line 160 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_flag_zero_0[2];

#line 163 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_flags_0_0[5];

#line 166 "string.format.c"
static const MR_ConstString mercury__string__format__string__format__field_names_flags_0_0[5];

#line 169 "string.format.c"
static const MR_DuArgLocn mercury__string__format__string__format__field_locns_flags_0_0[5];

#line 172 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_flags_0_0;

#line 175 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_flags_0_0[1];

#line 178 "string.format.c"
static const MR_DuPtagLayout mercury__string__format__string__format__du_ptag_ordered_flags_0[1];

#line 181 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_name_ordered_flags_0[1];

#line 184 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_flags_0[1];

#line 187 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_float_kind_0_0;

#line 190 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_float_kind_0_1;

#line 193 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_float_kind_0_2;

#line 196 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_float_kind_0_3;

#line 199 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_float_kind_0_4;

#line 202 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_float_kind_0_5;

#line 205 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_value_ordered_float_kind_0[6];

#line 208 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_name_ordered_float_kind_0[6];

#line 211 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_float_kind_0[6];

#line 214 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_component_0_0[1];

#line 217 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_component_0_0;

#line 220 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_component_0_1[1];

#line 223 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_component_0_1;

#line 226 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_format_str_component_0_0[1];

#line 229 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_format_str_component_0_1[1];

#line 232 "string.format.c"
static const MR_DuPtagLayout mercury__string__format__string__format__du_ptag_ordered_format_str_component_0[2];

#line 235 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_name_ordered_format_str_component_0[2];

#line 238 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_format_str_component_0[2];

#line 241 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_error_0_0[2];

#line 244 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_error_0_0;

#line 247 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_error_0_1[2];

#line 250 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_error_0_1;

#line 253 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_error_0_2[3];

#line 256 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_error_0_2;

#line 259 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_error_0_3[2];

#line 262 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_error_0_3;

#line 265 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_error_0_4[2];

#line 268 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_error_0_4;

#line 271 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_error_0_5[1];

#line 274 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_error_0_5;

#line 277 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_error_0_6[2];

#line 280 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_error_0_6;

#line 283 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_error_0_7[1];

#line 286 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_error_0_7;

#line 289 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_error_0_8[2];

#line 292 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_error_0_8;

#line 295 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_format_str_error_0_0[1];

#line 298 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_format_str_error_0_1[1];

#line 301 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_format_str_error_0_2[1];

#line 304 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_format_str_error_0_3[6];

#line 307 "string.format.c"
static const MR_DuPtagLayout mercury__string__format__string__format__du_ptag_ordered_format_str_error_0[4];

#line 310 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_name_ordered_format_str_error_0[9];

#line 313 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_format_str_error_0[9];

#line 316 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_spec_0_0;

#line 319 "string.format.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__format__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 322 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_spec_0_1[4];

#line 325 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_spec_0_1;

#line 328 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_spec_0_2[5];

#line 331 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_spec_0_2;

#line 334 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_spec_0_3[5];

#line 337 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_spec_0_3;

#line 340 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_spec_0_4[3];

#line 343 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_spec_0_4;

#line 346 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_spec_0_5[4];

#line 349 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_spec_0_5;

#line 352 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_format_str_spec_0_0[1];

#line 355 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_format_str_spec_0_1[1];

#line 358 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_format_str_spec_0_2[1];

#line 361 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_format_str_spec_0_3[3];

#line 364 "string.format.c"
static const MR_DuPtagLayout mercury__string__format__string__format__du_ptag_ordered_format_str_spec_0[4];

#line 367 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_name_ordered_format_str_spec_0[6];

#line 370 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_format_str_spec_0[6];

#line 373 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_gather_ended_by_0_0;

#line 376 "string.format.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__format__list__ti_list_1builtin__type_ctor_info_character_0;

#line 379 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_gather_ended_by_0_1[1];

#line 382 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_gather_ended_by_0_1;

#line 385 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_gather_ended_by_0_0[1];

#line 388 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_gather_ended_by_0_1[1];

#line 391 "string.format.c"
static const MR_DuPtagLayout mercury__string__format__string__format__du_ptag_ordered_gather_ended_by_0[2];

#line 394 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_name_ordered_gather_ended_by_0[2];

#line 397 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_gather_ended_by_0[2];

#line 400 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_int_base_0_0;

#line 403 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_int_base_0_1;

#line 406 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_int_base_0_2;

#line 409 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_int_base_0_3;

#line 412 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_int_base_0_4;

#line 415 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_value_ordered_int_base_0[5];

#line 418 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_name_ordered_int_base_0[5];

#line 421 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_int_base_0[5];

#line 424 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_poly_kind_0_0;

#line 427 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_poly_kind_0_1;

#line 430 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_poly_kind_0_2;

#line 433 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_poly_kind_0_3;

#line 436 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_value_ordered_poly_kind_0[4];

#line 439 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_name_ordered_poly_kind_0[4];

#line 442 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_poly_kind_0[4];

#line 445 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____flag_hash_0_0_10001(
#line 448 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 450 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2);

#line 453 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____flag_hash_0_0_10001(
#line 456 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 458 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 460 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3);

#line 463 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____flag_minus_0_0_10001(
#line 466 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 468 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2);

#line 471 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____flag_minus_0_0_10001(
#line 474 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 476 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 478 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3);

#line 481 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____flag_plus_0_0_10001(
#line 484 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 486 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2);

#line 489 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____flag_plus_0_0_10001(
#line 492 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 494 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 496 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3);

#line 499 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____flag_space_0_0_10001(
#line 502 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 504 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2);

#line 507 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____flag_space_0_0_10001(
#line 510 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 512 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 514 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3);

#line 517 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____flag_zero_0_0_10001(
#line 520 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 522 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2);

#line 525 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____flag_zero_0_0_10001(
#line 528 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 530 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 532 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3);

#line 535 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____flags_0_0_10001(
#line 538 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 540 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2);

#line 543 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____flags_0_0_10001(
#line 546 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 548 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 550 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3);

#line 553 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____float_kind_0_0_10001(
#line 556 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 558 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2);

#line 561 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____float_kind_0_0_10001(
#line 564 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 566 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 568 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3);

#line 571 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____format_str_component_0_0_10001(
#line 574 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 576 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2);

#line 579 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____format_str_component_0_0_10001(
#line 582 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 584 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 586 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3);

#line 589 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____format_str_error_0_0_10001(
#line 592 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 594 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2);

#line 597 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____format_str_error_0_0_10001(
#line 600 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 602 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 604 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3);

#line 607 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____format_str_spec_0_0_10001(
#line 610 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 612 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2);

#line 615 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____format_str_spec_0_0_10001(
#line 618 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 620 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 622 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3);

#line 625 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____gather_ended_by_0_0_10001(
#line 628 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 630 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2);

#line 633 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____gather_ended_by_0_0_10001(
#line 636 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 638 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 640 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3);

#line 643 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____int_base_0_0_10001(
#line 646 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 648 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2);

#line 651 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____int_base_0_0_10001(
#line 654 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 656 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 658 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3);

#line 661 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____maybe_prec_0_0_10001(
#line 664 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 666 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2);

#line 669 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____maybe_prec_0_0_10001(
#line 672 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 674 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 676 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3);

#line 679 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____maybe_width_0_0_10001(
#line 682 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 684 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2);

#line 687 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____maybe_width_0_0_10001(
#line 690 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 692 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 694 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3);

#line 697 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____poly_kind_0_0_10001(
#line 700 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 702 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2);

#line 705 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____poly_kind_0_0_10001(
#line 708 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 710 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 712 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 491 "string.int0"
static void MR_CALL 
mercury__string__format__next_boundary__ho1__ho9_4_p_in__string_0(
#line 491 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 491 "string.int0"
  MR_Integer mercury__string__format__Cur_7_7,
#line 491 "string.int0"
  MR_Integer * mercury__string__format__NextWordStart_8_8);

#line 491 "string.int0"
static void MR_CALL 
mercury__string__format__next_boundary__ho1__ho8_4_p_in__string_0(
#line 491 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 491 "string.int0"
  MR_Integer mercury__string__format__Cur_7_7,
#line 491 "string.int0"
  MR_Integer * mercury__string__format__NextWordStart_8_8);

#line 491 "string.int0"
static void MR_CALL 
mercury__string__format__next_boundary__ho7_4_p_in__string_0(
#line 491 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 491 "string.int0"
  MR_Integer mercury__string__format__Cur_7_7,
#line 491 "string.int0"
  MR_Integer * mercury__string__format__NextWordStart_8_8);

#line 529 "string.int0"
static void MR_CALL 
mercury__string__format__words_loop__ho6_4_p_in__string_0(
#line 529 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 529 "string.int0"
  MR_Integer mercury__string__format__WordStart_7_7,
#line 529 "string.int0"
  MR_Word * mercury__string__format__Words_8_8);

#line 491 "string.int0"
static void MR_CALL 
mercury__string__format__next_boundary__ho5_4_p_in__string_0(
#line 491 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 491 "string.int0"
  MR_Integer mercury__string__format__Cur_7_7,
#line 491 "string.int0"
  MR_Integer * mercury__string__format__NextWordStart_8_8);

#line 529 "string.int0"
static void MR_CALL 
mercury__string__format__words_loop__ho4_4_p_in__string_0(
#line 529 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 529 "string.int0"
  MR_Integer mercury__string__format__WordStart_7_7,
#line 529 "string.int0"
  MR_Word * mercury__string__format__Words_8_8);

#line 2127 "string.format.m"
static void MR_CALL 
mercury__string__format__split_at_decimal_point_3_p_0(
#line 2127 "string.format.m"
  MR_String mercury__string__format__Str_4,
#line 2127 "string.format.m"
  MR_String * mercury__string__format__Mantissa_5,
#line 2127 "string.format.m"
  MR_String * mercury__string__format__Fraction_6);

#line 2120 "string.format.m"
static void MR_CALL 
mercury__string__format__split_at_exponent_3_p_0(
#line 2120 "string.format.m"
  MR_String mercury__string__format__Str_4,
#line 2120 "string.format.m"
  MR_String * mercury__string__format__Float_5,
#line 2120 "string.format.m"
  MR_String * mercury__string__format__Exponent_6);

#line 2073 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__change_precision_2_f_0(
#line 2073 "string.format.m"
  MR_String mercury__string__format__OldFloat_4,
#line 2073 "string.format.m"
  MR_Integer mercury__string__format__Prec_5);

#line 2040 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__calculate_base_unsafe_2_f_0(
#line 2040 "string.format.m"
  MR_String mercury__string__format__Float_4,
#line 2040 "string.format.m"
  MR_Integer mercury__string__format__Prec_5);

#line 2017 "string.format.m"
static MR_Integer MR_CALL 
mercury__string__format__find_non_zero_pos_2_f_0(
#line 2017 "string.format.m"
  MR_Word mercury__string__format__L_4,
#line 2017 "string.format.m"
  MR_Integer mercury__string__format__CurrentPos_5);

#line 1991 "string.format.m"
static MR_Word MR_CALL 
mercury__string__format__remove_zeros_1_f_0(
#line 1991 "string.format.m"
  MR_Word mercury__string__format__CharNum_3);

#line 1979 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__remove_trailing_zeros_1_f_0(
#line 1979 "string.format.m"
  MR_String mercury__string__format__Float_3);

#line 1920 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__change_to_e_notation_3_f_0(
#line 1920 "string.format.m"
  MR_String mercury__string__format__Float_5,
#line 1920 "string.format.m"
  MR_Integer mercury__string__format__Prec_6,
#line 1920 "string.format.m"
  MR_String mercury__string__format__E_7);

#line 1864 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__change_to_g_notation_4_f_0(
#line 1864 "string.format.m"
  MR_String mercury__string__format__Float_6,
#line 1864 "string.format.m"
  MR_Integer mercury__string__format__Prec_7,
#line 1864 "string.format.m"
  MR_String mercury__string__format__E_8,
#line 1864 "string.format.m"
  MR_Word mercury__string__format__Flags_9);

#line 1818 "string.format.m"
static void MR_CALL 
mercury__string__format__float_to_string_first_pass_2_p_0(
#line 1818 "string.format.m"
  MR_Float mercury__string__format__FloatVal_1,
#line 1818 "string.format.m"
  MR_String * mercury__string__format__FloatString_2);

#line 1755 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__convert_float_to_string_1_f_0(
#line 1755 "string.format.m"
  MR_Float mercury__string__format__Float_3);

#line 1615 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_int_to_hex_uc_1_f_0(
#line 1615 "string.format.m"
  MR_Integer mercury__string__format__Num_3);

#line 1614 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_int_to_hex_lc_1_f_0(
#line 1614 "string.format.m"
  MR_Integer mercury__string__format__Num_3);

#line 1613 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_integer_to_hex_uc_1_f_0(
#line 1613 "string.format.m"
  MR_Word mercury__string__format__Num_3);

#line 1612 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_integer_to_hex_lc_1_f_0(
#line 1612 "string.format.m"
  MR_Word mercury__string__format__Num_3);

#line 1588 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_int_to_decimal_1_f_0(
#line 1588 "string.format.m"
  MR_Integer mercury__string__format__Num_3);

#line 1587 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_integer_to_decimal_1_f_0(
#line 1587 "string.format.m"
  MR_Word mercury__string__format__Num_3);

#line 1564 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_int_to_octal_1_f_0(
#line 1564 "string.format.m"
  MR_Integer mercury__string__format__Num_3);

#line 1563 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_integer_to_octal_1_f_0(
#line 1563 "string.format.m"
  MR_Word mercury__string__format__Num_3);

#line 1528 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__justify_string_3_f_0(
#line 1528 "string.format.m"
  MR_Word mercury__string__format__Flags_5,
#line 1528 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_6,
#line 1528 "string.format.m"
  MR_String mercury__string__format__Str_7);

#line 1343 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__format_float_5_f_0(
#line 1343 "string.format.m"
  MR_Word mercury__string__format__Flags_7,
#line 1343 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_8,
#line 1343 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_9,
#line 1343 "string.format.m"
  MR_Word mercury__string__format__Kind_10,
#line 1343 "string.format.m"
  MR_Float mercury__string__format__Float_11);

#line 1201 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__format_unsigned_int_5_f_0(
#line 1201 "string.format.m"
  MR_Word mercury__string__format__Flags_7,
#line 1201 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_8,
#line 1201 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_9,
#line 1201 "string.format.m"
  MR_Word mercury__string__format__Base_10,
#line 1201 "string.format.m"
  MR_Integer mercury__string__format__Int_11);

#line 1134 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__format_signed_int_4_f_0(
#line 1134 "string.format.m"
  MR_Word mercury__string__format__Flags_6,
#line 1134 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_7,
#line 1134 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_8,
#line 1134 "string.format.m"
  MR_Integer mercury__string__format__Int_9);

#line 1094 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__native_format_char_2_f_0(
#line 1094 "string.format.m"
  MR_String mercury__string__format__FormatStr_1,
#line 1094 "string.format.m"
  MR_Char mercury__string__format__Val_2);

#line 1074 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__native_format_string_2_f_0(
#line 1074 "string.format.m"
  MR_String mercury__string__format__FormatStr_1,
#line 1074 "string.format.m"
  MR_String mercury__string__format__Val_2);

#line 1054 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__native_format_int_2_f_0(
#line 1054 "string.format.m"
  MR_String mercury__string__format__FormatStr_1,
#line 1054 "string.format.m"
  MR_Integer mercury__string__format__Val_2);

#line 1034 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__native_format_float_2_f_0(
#line 1034 "string.format.m"
  MR_String mercury__string__format__FormatStr_1,
#line 1034 "string.format.m"
  MR_Float mercury__string__format__Val_2);

#line 1015 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__int_length_modifer_0_f_0(void);

#line 904 "string.format.m"
static MR_bool MR_CALL 
mercury__string__format__using_sprintf_for_string_1_p_0(
#line 904 "string.format.m"
  MR_String mercury__string__format__Str_1);

#line 890 "string.format.m"
static MR_bool MR_CALL 
mercury__string__format__using_sprintf_for_char_1_p_0(
#line 890 "string.format.m"
  MR_Char mercury__string__format__Char_1);

#line 866 "string.format.m"
static MR_bool MR_CALL 
mercury__string__format__using_sprintf_0_p_0(void);

#line 847 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__make_format_5_f_0(
#line 847 "string.format.m"
  MR_Word mercury__string__format__Flags_7,
#line 847 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_8,
#line 847 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_9,
#line 847 "string.format.m"
  MR_String mercury__string__format__LengthMod_10,
#line 847 "string.format.m"
  MR_String mercury__string__format__Spec_11);

#line 800 "string.format.m"
static void MR_CALL 
mercury__string__format__format_unsigned_int_component_6_p_0(
#line 800 "string.format.m"
  MR_Word mercury__string__format__Flags_7,
#line 800 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_8,
#line 800 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_9,
#line 800 "string.format.m"
  MR_Word mercury__string__format__Base_10,
#line 800 "string.format.m"
  MR_Integer mercury__string__format__Int_11,
#line 800 "string.format.m"
  MR_String * mercury__string__format__String_12);

#line 766 "string.format.m"
static void MR_CALL 
mercury__string__format__format_string_component_5_p_0(
#line 766 "string.format.m"
  MR_Word mercury__string__format__Flags_6,
#line 766 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_7,
#line 766 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_8,
#line 766 "string.format.m"
  MR_String mercury__string__format__Str_9,
#line 766 "string.format.m"
  MR_String * mercury__string__format__String_10);

#line 711 "string.format.m"
static void MR_CALL 
mercury__string__format__components_to_strings_2_p_0(
#line 711 "string.format.m"
  MR_Word mercury__string__format__HeadVar__1_1,
#line 711 "string.format.m"
  MR_Word * mercury__string__format__HeadVar__2_2);

#line 540 "string.format.m"
static void MR_CALL 
mercury__string__format__get_first_spec_10_p_0(
#line 540 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_Chars_0_1,
#line 540 "string.format.m"
  MR_Word * mercury__string__format__STATE_VARIABLE_Chars_2,
#line 540 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_PolyTypes_0_3,
#line 540 "string.format.m"
  MR_Word * mercury__string__format__STATE_VARIABLE_PolyTypes_4,
#line 540 "string.format.m"
  MR_Word mercury__string__format__HeadVar__5_5,
#line 540 "string.format.m"
  MR_Word mercury__string__format__HeadVar__6_6,
#line 540 "string.format.m"
  MR_Word mercury__string__format__HeadVar__7_7,
#line 540 "string.format.m"
  MR_Integer mercury__string__format__SpecNum_8,
#line 540 "string.format.m"
  MR_Word * mercury__string__format__Spec_9,
#line 540 "string.format.m"
  MR_Word * mercury__string__format__Errors_10);

#line 510 "string.format.m"
static void MR_CALL 
mercury__string__format__get_number_prefix_4_p_0(
#line 510 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_Chars_0_11,
#line 510 "string.format.m"
  MR_Word * mercury__string__format__STATE_VARIABLE_Chars_12,
#line 510 "string.format.m"
  MR_Integer mercury__string__format__N0_6,
#line 510 "string.format.m"
  MR_Integer * mercury__string__format__N_7);

#line 468 "string.format.m"
static void MR_CALL 
mercury__string__format__get_optional_prec_7_p_0(
#line 468 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_Chars_0_16,
#line 468 "string.format.m"
  MR_Word * mercury__string__format__STATE_VARIABLE_Chars_17,
#line 468 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_PolyTypes_0_18,
#line 468 "string.format.m"
  MR_Word * mercury__string__format__STATE_VARIABLE_PolyTypes_19,
#line 468 "string.format.m"
  MR_Integer mercury__string__format__SpecNum_10,
#line 468 "string.format.m"
  MR_Word * mercury__string__format__MaybePrec_11,
#line 468 "string.format.m"
  MR_Word * mercury__string__format__Errors_12);

#line 415 "string.format.m"
static void MR_CALL 
mercury__string__format__gather_flag_chars_4_p_0(
#line 415 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_Chars_0_8,
#line 415 "string.format.m"
  MR_Word * mercury__string__format__STATE_VARIABLE_Chars_9,
#line 415 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_Flags_0_10,
#line 415 "string.format.m"
  MR_Word * mercury__string__format__STATE_VARIABLE_Flags_11);

#line 399 "string.format.m"
static void MR_CALL 
mercury__string__format__parse_conversion_specification_7_p_0(
#line 399 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_Chars_0_20,
#line 399 "string.format.m"
  MR_Word * mercury__string__format__STATE_VARIABLE_Chars_21,
#line 399 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_PolyTypes_0_22,
#line 399 "string.format.m"
  MR_Word * mercury__string__format__STATE_VARIABLE_PolyTypes_23,
#line 399 "string.format.m"
  MR_Integer mercury__string__format__SpecNum_10,
#line 399 "string.format.m"
  MR_Word * mercury__string__format__Spec_11,
#line 399 "string.format.m"
  MR_Word * mercury__string__format__Errors_12);

#line 373 "string.format.m"
static void MR_CALL 
mercury__string__format__gather_non_percent_chars_3_p_0(
#line 373 "string.format.m"
  MR_Word mercury__string__format__Chars_4,
#line 373 "string.format.m"
  MR_Word * mercury__string__format__NonConversionSpecChars_5,
#line 373 "string.format.m"
  MR_Word * mercury__string__format__GatherEndedBy_6);

#line 321 "string.format.m"
static void MR_CALL 
mercury__string__format__format_string_to_components_5_p_0(
#line 321 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_Chars_0_28,
#line 321 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_PolyTypes_0_29,
#line 321 "string.format.m"
  MR_Integer mercury__string__format__SpecNum_8,
#line 321 "string.format.m"
  MR_Word * mercury__string__format__Components_9,
#line 321 "string.format.m"
  MR_Word * mercury__string__format__Errors_10);

#line 299 "string.format.m"
static MR_Word MR_CALL 
mercury__string__format__poly_type_to_kind_1_f_0(
#line 299 "string.format.m"
  MR_Word mercury__string__format__HeadVar__1_1);

#line 287 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__specifier_char_1_f_0(
#line 287 "string.format.m"
  MR_Char mercury__string__format__SpecChar_3);

#line 260 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__nth_1_f_0(
#line 260 "string.format.m"
  MR_Integer mercury__string__format__N_3);

#line 255 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__nth_specifier_1_f_0(
#line 255 "string.format.m"
  MR_Integer mercury__string__format__SpecNum_3);

#line 186 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__format_str_error_to_msg_1_f_0(
#line 186 "string.format.m"
  MR_Word mercury__string__format__Error_3);


static /* final */ const MR_Box mercury__string__format_scalar_common_1[3][2];

static /* final */ const MR_Box mercury__string__format_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__string__format_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__string__format_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__string__format_scalar_common_5[1][1];




static /* final */ const MR_Box mercury__string__format_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "}")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__string__format_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__format_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__format_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__format_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__format_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__format_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__format_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "string.format.mh"
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



#line 1602 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_flag_hash_0_0 = {
  (MR_String) "flag_hash_clear",
  (MR_Integer) 0
};

#line 1608 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_flag_hash_0_1 = {
  (MR_String) "flag_hash_set",
  (MR_Integer) 1
};

#line 1614 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_value_ordered_flag_hash_0[2] = {
  &mercury__string__format__string__format__enum_functor_desc_flag_hash_0_0,
  &mercury__string__format__string__format__enum_functor_desc_flag_hash_0_1
};

#line 1620 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_name_ordered_flag_hash_0[2] = {
  &mercury__string__format__string__format__enum_functor_desc_flag_hash_0_0,
  &mercury__string__format__string__format__enum_functor_desc_flag_hash_0_1
};

#line 1626 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_flag_hash_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1632 "string.format.c"
const MR_TypeCtorInfo_Struct mercury__string__format__string__format__type_ctor_info_flag_hash_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__format____Unify____flag_hash_0_0_10001)),
  ((MR_Box) (mercury__string__format____Compare____flag_hash_0_0_10001)),
  (MR_String) "string.format",
  (MR_String) "flag_hash",
  {
    mercury__string__format__string__format__enum_name_ordered_flag_hash_0
  },
  {
    mercury__string__format__string__format__enum_value_ordered_flag_hash_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__format__string__format__functor_number_map_flag_hash_0
};

#line 1653 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_flag_minus_0_0 = {
  (MR_String) "flag_minus_clear",
  (MR_Integer) 0
};

#line 1659 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_flag_minus_0_1 = {
  (MR_String) "flag_minus_set",
  (MR_Integer) 1
};

#line 1665 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_value_ordered_flag_minus_0[2] = {
  &mercury__string__format__string__format__enum_functor_desc_flag_minus_0_0,
  &mercury__string__format__string__format__enum_functor_desc_flag_minus_0_1
};

#line 1671 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_name_ordered_flag_minus_0[2] = {
  &mercury__string__format__string__format__enum_functor_desc_flag_minus_0_0,
  &mercury__string__format__string__format__enum_functor_desc_flag_minus_0_1
};

#line 1677 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_flag_minus_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1683 "string.format.c"
const MR_TypeCtorInfo_Struct mercury__string__format__string__format__type_ctor_info_flag_minus_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__format____Unify____flag_minus_0_0_10001)),
  ((MR_Box) (mercury__string__format____Compare____flag_minus_0_0_10001)),
  (MR_String) "string.format",
  (MR_String) "flag_minus",
  {
    mercury__string__format__string__format__enum_name_ordered_flag_minus_0
  },
  {
    mercury__string__format__string__format__enum_value_ordered_flag_minus_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__format__string__format__functor_number_map_flag_minus_0
};

#line 1704 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_flag_plus_0_0 = {
  (MR_String) "flag_plus_clear",
  (MR_Integer) 0
};

#line 1710 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_flag_plus_0_1 = {
  (MR_String) "flag_plus_set",
  (MR_Integer) 1
};

#line 1716 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_value_ordered_flag_plus_0[2] = {
  &mercury__string__format__string__format__enum_functor_desc_flag_plus_0_0,
  &mercury__string__format__string__format__enum_functor_desc_flag_plus_0_1
};

#line 1722 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_name_ordered_flag_plus_0[2] = {
  &mercury__string__format__string__format__enum_functor_desc_flag_plus_0_0,
  &mercury__string__format__string__format__enum_functor_desc_flag_plus_0_1
};

#line 1728 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_flag_plus_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1734 "string.format.c"
const MR_TypeCtorInfo_Struct mercury__string__format__string__format__type_ctor_info_flag_plus_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__format____Unify____flag_plus_0_0_10001)),
  ((MR_Box) (mercury__string__format____Compare____flag_plus_0_0_10001)),
  (MR_String) "string.format",
  (MR_String) "flag_plus",
  {
    mercury__string__format__string__format__enum_name_ordered_flag_plus_0
  },
  {
    mercury__string__format__string__format__enum_value_ordered_flag_plus_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__format__string__format__functor_number_map_flag_plus_0
};

#line 1755 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_flag_space_0_0 = {
  (MR_String) "flag_space_clear",
  (MR_Integer) 0
};

#line 1761 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_flag_space_0_1 = {
  (MR_String) "flag_space_set",
  (MR_Integer) 1
};

#line 1767 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_value_ordered_flag_space_0[2] = {
  &mercury__string__format__string__format__enum_functor_desc_flag_space_0_0,
  &mercury__string__format__string__format__enum_functor_desc_flag_space_0_1
};

#line 1773 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_name_ordered_flag_space_0[2] = {
  &mercury__string__format__string__format__enum_functor_desc_flag_space_0_0,
  &mercury__string__format__string__format__enum_functor_desc_flag_space_0_1
};

#line 1779 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_flag_space_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1785 "string.format.c"
const MR_TypeCtorInfo_Struct mercury__string__format__string__format__type_ctor_info_flag_space_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__format____Unify____flag_space_0_0_10001)),
  ((MR_Box) (mercury__string__format____Compare____flag_space_0_0_10001)),
  (MR_String) "string.format",
  (MR_String) "flag_space",
  {
    mercury__string__format__string__format__enum_name_ordered_flag_space_0
  },
  {
    mercury__string__format__string__format__enum_value_ordered_flag_space_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__format__string__format__functor_number_map_flag_space_0
};

#line 1806 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_flag_zero_0_0 = {
  (MR_String) "flag_zero_clear",
  (MR_Integer) 0
};

#line 1812 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_flag_zero_0_1 = {
  (MR_String) "flag_zero_set",
  (MR_Integer) 1
};

#line 1818 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_value_ordered_flag_zero_0[2] = {
  &mercury__string__format__string__format__enum_functor_desc_flag_zero_0_0,
  &mercury__string__format__string__format__enum_functor_desc_flag_zero_0_1
};

#line 1824 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_name_ordered_flag_zero_0[2] = {
  &mercury__string__format__string__format__enum_functor_desc_flag_zero_0_0,
  &mercury__string__format__string__format__enum_functor_desc_flag_zero_0_1
};

#line 1830 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_flag_zero_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1836 "string.format.c"
const MR_TypeCtorInfo_Struct mercury__string__format__string__format__type_ctor_info_flag_zero_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__format____Unify____flag_zero_0_0_10001)),
  ((MR_Box) (mercury__string__format____Compare____flag_zero_0_0_10001)),
  (MR_String) "string.format",
  (MR_String) "flag_zero",
  {
    mercury__string__format__string__format__enum_name_ordered_flag_zero_0
  },
  {
    mercury__string__format__string__format__enum_value_ordered_flag_zero_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__format__string__format__functor_number_map_flag_zero_0
};

#line 1857 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_flags_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__string__format__string__format__type_ctor_info_flag_hash_0,
  (MR_PseudoTypeInfo) &mercury__string__format__string__format__type_ctor_info_flag_space_0,
  (MR_PseudoTypeInfo) &mercury__string__format__string__format__type_ctor_info_flag_zero_0,
  (MR_PseudoTypeInfo) &mercury__string__format__string__format__type_ctor_info_flag_minus_0,
  (MR_PseudoTypeInfo) &mercury__string__format__string__format__type_ctor_info_flag_plus_0
};

#line 1866 "string.format.c"
static const MR_ConstString mercury__string__format__string__format__field_names_flags_0_0[5] = {
  (MR_String) "flag_hash",
  (MR_String) "flag_space",
  (MR_String) "flag_zero",
  (MR_String) "flag_minus",
  (MR_String) "flag_plus"
};

#line 1875 "string.format.c"
static const MR_DuArgLocn mercury__string__format__string__format__field_locns_flags_0_0[5] = {
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

#line 1904 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_flags_0_0 = {
  (MR_String) "flags",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__string__format__string__format__field_types_flags_0_0,
  mercury__string__format__string__format__field_names_flags_0_0,
  mercury__string__format__string__format__field_locns_flags_0_0,
  NULL
};

#line 1919 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_flags_0_0[1] = {
  &mercury__string__format__string__format__du_functor_desc_flags_0_0
};

#line 1924 "string.format.c"
static const MR_DuPtagLayout mercury__string__format__string__format__du_ptag_ordered_flags_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__format__string__format__du_stag_ordered_flags_0_0
  }
};

#line 1933 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_name_ordered_flags_0[1] = {
  &mercury__string__format__string__format__du_functor_desc_flags_0_0
};

#line 1938 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_flags_0[1] = {
  (MR_Integer) 0
};

#line 1943 "string.format.c"
const MR_TypeCtorInfo_Struct mercury__string__format__string__format__type_ctor_info_flags_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__format____Unify____flags_0_0_10001)),
  ((MR_Box) (mercury__string__format____Compare____flags_0_0_10001)),
  (MR_String) "string.format",
  (MR_String) "flags",
  {
    mercury__string__format__string__format__du_name_ordered_flags_0
  },
  {
    mercury__string__format__string__format__du_ptag_ordered_flags_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__format__string__format__functor_number_map_flags_0
};

#line 1964 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_float_kind_0_0 = {
  (MR_String) "kind_e_scientific_lc",
  (MR_Integer) 0
};

#line 1970 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_float_kind_0_1 = {
  (MR_String) "kind_e_scientific_uc",
  (MR_Integer) 1
};

#line 1976 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_float_kind_0_2 = {
  (MR_String) "kind_f_plain_lc",
  (MR_Integer) 2
};

#line 1982 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_float_kind_0_3 = {
  (MR_String) "kind_f_plain_uc",
  (MR_Integer) 3
};

#line 1988 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_float_kind_0_4 = {
  (MR_String) "kind_g_flexible_lc",
  (MR_Integer) 4
};

#line 1994 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_float_kind_0_5 = {
  (MR_String) "kind_g_flexible_uc",
  (MR_Integer) 5
};

#line 2000 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_value_ordered_float_kind_0[6] = {
  &mercury__string__format__string__format__enum_functor_desc_float_kind_0_0,
  &mercury__string__format__string__format__enum_functor_desc_float_kind_0_1,
  &mercury__string__format__string__format__enum_functor_desc_float_kind_0_2,
  &mercury__string__format__string__format__enum_functor_desc_float_kind_0_3,
  &mercury__string__format__string__format__enum_functor_desc_float_kind_0_4,
  &mercury__string__format__string__format__enum_functor_desc_float_kind_0_5
};

#line 2010 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_name_ordered_float_kind_0[6] = {
  &mercury__string__format__string__format__enum_functor_desc_float_kind_0_0,
  &mercury__string__format__string__format__enum_functor_desc_float_kind_0_1,
  &mercury__string__format__string__format__enum_functor_desc_float_kind_0_2,
  &mercury__string__format__string__format__enum_functor_desc_float_kind_0_3,
  &mercury__string__format__string__format__enum_functor_desc_float_kind_0_4,
  &mercury__string__format__string__format__enum_functor_desc_float_kind_0_5
};

#line 2020 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_float_kind_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5
};

#line 2030 "string.format.c"
const MR_TypeCtorInfo_Struct mercury__string__format__string__format__type_ctor_info_float_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__format____Unify____float_kind_0_0_10001)),
  ((MR_Box) (mercury__string__format____Compare____float_kind_0_0_10001)),
  (MR_String) "string.format",
  (MR_String) "float_kind",
  {
    mercury__string__format__string__format__enum_name_ordered_float_kind_0
  },
  {
    mercury__string__format__string__format__enum_value_ordered_float_kind_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mercury__string__format__string__format__functor_number_map_float_kind_0
};

#line 2051 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_component_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2056 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_component_0_0 = {
  (MR_String) "comp_str",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__string__format__string__format__field_types_format_str_component_0_0,
  NULL,
  NULL,
  NULL
};

#line 2071 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_component_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__string__format__string__format__type_ctor_info_format_str_spec_0
};

#line 2076 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_component_0_1 = {
  (MR_String) "comp_conv_spec",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__string__format__string__format__field_types_format_str_component_0_1,
  NULL,
  NULL,
  NULL
};

#line 2091 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_format_str_component_0_0[1] = {
  &mercury__string__format__string__format__du_functor_desc_format_str_component_0_0
};

#line 2096 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_format_str_component_0_1[1] = {
  &mercury__string__format__string__format__du_functor_desc_format_str_component_0_1
};

#line 2101 "string.format.c"
static const MR_DuPtagLayout mercury__string__format__string__format__du_ptag_ordered_format_str_component_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__format__string__format__du_stag_ordered_format_str_component_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__format__string__format__du_stag_ordered_format_str_component_0_1
  }
};

#line 2115 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_name_ordered_format_str_component_0[2] = {
  &mercury__string__format__string__format__du_functor_desc_format_str_component_0_1,
  &mercury__string__format__string__format__du_functor_desc_format_str_component_0_0
};

#line 2121 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_format_str_component_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2127 "string.format.c"
const MR_TypeCtorInfo_Struct mercury__string__format__string__format__type_ctor_info_format_str_component_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__format____Unify____format_str_component_0_0_10001)),
  ((MR_Box) (mercury__string__format____Compare____format_str_component_0_0_10001)),
  (MR_String) "string.format",
  (MR_String) "format_str_component",
  {
    mercury__string__format__string__format__du_name_ordered_format_str_component_0
  },
  {
    mercury__string__format__string__format__du_ptag_ordered_format_str_component_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__format__string__format__functor_number_map_format_str_component_0
};

#line 2148 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_error_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2154 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_error_0_0 = {
  (MR_String) "error_no_specifier",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__string__format__string__format__field_types_format_str_error_0_0,
  NULL,
  NULL,
  NULL
};

#line 2169 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_error_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 2175 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_error_0_1 = {
  (MR_String) "error_unknown_specifier",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__string__format__string__format__field_types_format_str_error_0_1,
  NULL,
  NULL,
  NULL
};

#line 2190 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_error_0_2[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0,
  (MR_PseudoTypeInfo) &mercury__string__format__string__format__type_ctor_info_poly_kind_0
};

#line 2197 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_error_0_2 = {
  (MR_String) "error_wrong_polytype",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__string__format__string__format__field_types_format_str_error_0_2,
  NULL,
  NULL,
  NULL
};

#line 2212 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_error_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 2218 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_error_0_3 = {
  (MR_String) "error_no_polytype",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mercury__string__format__string__format__field_types_format_str_error_0_3,
  NULL,
  NULL,
  NULL
};

#line 2233 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_error_0_4[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__string__format__string__format__type_ctor_info_poly_kind_0
};

#line 2239 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_error_0_4 = {
  (MR_String) "error_nonint_star_width",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__format__string__format__field_types_format_str_error_0_4,
  NULL,
  NULL,
  NULL
};

#line 2254 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_error_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2259 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_error_0_5 = {
  (MR_String) "error_missing_star_width",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  mercury__string__format__string__format__field_types_format_str_error_0_5,
  NULL,
  NULL,
  NULL
};

#line 2274 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_error_0_6[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__string__format__string__format__type_ctor_info_poly_kind_0
};

#line 2280 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_error_0_6 = {
  (MR_String) "error_nonint_star_prec",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  mercury__string__format__string__format__field_types_format_str_error_0_6,
  NULL,
  NULL,
  NULL
};

#line 2295 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_error_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2300 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_error_0_7 = {
  (MR_String) "error_missing_star_prec",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  mercury__string__format__string__format__field_types_format_str_error_0_7,
  NULL,
  NULL,
  NULL
};

#line 2315 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_error_0_8[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2321 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_error_0_8 = {
  (MR_String) "error_extra_polytypes",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 8,
  mercury__string__format__string__format__field_types_format_str_error_0_8,
  NULL,
  NULL,
  NULL
};

#line 2336 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_format_str_error_0_0[1] = {
  &mercury__string__format__string__format__du_functor_desc_format_str_error_0_0
};

#line 2341 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_format_str_error_0_1[1] = {
  &mercury__string__format__string__format__du_functor_desc_format_str_error_0_1
};

#line 2346 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_format_str_error_0_2[1] = {
  &mercury__string__format__string__format__du_functor_desc_format_str_error_0_2
};

#line 2351 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_format_str_error_0_3[6] = {
  &mercury__string__format__string__format__du_functor_desc_format_str_error_0_3,
  &mercury__string__format__string__format__du_functor_desc_format_str_error_0_4,
  &mercury__string__format__string__format__du_functor_desc_format_str_error_0_5,
  &mercury__string__format__string__format__du_functor_desc_format_str_error_0_6,
  &mercury__string__format__string__format__du_functor_desc_format_str_error_0_7,
  &mercury__string__format__string__format__du_functor_desc_format_str_error_0_8
};

#line 2361 "string.format.c"
static const MR_DuPtagLayout mercury__string__format__string__format__du_ptag_ordered_format_str_error_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__format__string__format__du_stag_ordered_format_str_error_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__format__string__format__du_stag_ordered_format_str_error_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__format__string__format__du_stag_ordered_format_str_error_0_2
  },
  {
    (MR_Integer) 6,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mercury__string__format__string__format__du_stag_ordered_format_str_error_0_3
  }
};

#line 2385 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_name_ordered_format_str_error_0[9] = {
  &mercury__string__format__string__format__du_functor_desc_format_str_error_0_8,
  &mercury__string__format__string__format__du_functor_desc_format_str_error_0_7,
  &mercury__string__format__string__format__du_functor_desc_format_str_error_0_5,
  &mercury__string__format__string__format__du_functor_desc_format_str_error_0_3,
  &mercury__string__format__string__format__du_functor_desc_format_str_error_0_0,
  &mercury__string__format__string__format__du_functor_desc_format_str_error_0_6,
  &mercury__string__format__string__format__du_functor_desc_format_str_error_0_4,
  &mercury__string__format__string__format__du_functor_desc_format_str_error_0_1,
  &mercury__string__format__string__format__du_functor_desc_format_str_error_0_2
};

#line 2398 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_format_str_error_0[9] = {
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

#line 2411 "string.format.c"
const MR_TypeCtorInfo_Struct mercury__string__format__string__format__type_ctor_info_format_str_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__format____Unify____format_str_error_0_0_10001)),
  ((MR_Box) (mercury__string__format____Compare____format_str_error_0_0_10001)),
  (MR_String) "string.format",
  (MR_String) "format_str_error",
  {
    mercury__string__format__string__format__du_name_ordered_format_str_error_0
  },
  {
    mercury__string__format__string__format__du_ptag_ordered_format_str_error_0
  },
  (MR_Integer) 9,
  (MR_Integer) 4,
  mercury__string__format__string__format__functor_number_map_format_str_error_0
};

#line 2432 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_spec_0_0 = {
  (MR_String) "spec_percent",
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

#line 2447 "string.format.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__format__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2455 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_spec_0_1[4] = {
  (MR_PseudoTypeInfo) &mercury__string__format__string__format__type_ctor_info_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__format__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__string__format__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2463 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_spec_0_1 = {
  (MR_String) "spec_signed_int",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__string__format__string__format__field_types_format_str_spec_0_1,
  NULL,
  NULL,
  NULL
};

#line 2478 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_spec_0_2[5] = {
  (MR_PseudoTypeInfo) &mercury__string__format__string__format__type_ctor_info_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__format__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__string__format__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__string__format__string__format__type_ctor_info_int_base_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2487 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_spec_0_2 = {
  (MR_String) "spec_unsigned_int",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__string__format__string__format__field_types_format_str_spec_0_2,
  NULL,
  NULL,
  NULL
};

#line 2502 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_spec_0_3[5] = {
  (MR_PseudoTypeInfo) &mercury__string__format__string__format__type_ctor_info_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__format__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__string__format__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__string__format__string__format__type_ctor_info_float_kind_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 2511 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_spec_0_3 = {
  (MR_String) "spec_float",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mercury__string__format__string__format__field_types_format_str_spec_0_3,
  NULL,
  NULL,
  NULL
};

#line 2526 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_spec_0_4[3] = {
  (MR_PseudoTypeInfo) &mercury__string__format__string__format__type_ctor_info_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__format__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 2533 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_spec_0_4 = {
  (MR_String) "spec_char",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__format__string__format__field_types_format_str_spec_0_4,
  NULL,
  NULL,
  NULL
};

#line 2548 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_format_str_spec_0_5[4] = {
  (MR_PseudoTypeInfo) &mercury__string__format__string__format__type_ctor_info_flags_0,
  (MR_PseudoTypeInfo) &mercury__string__format__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__string__format__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2556 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_format_str_spec_0_5 = {
  (MR_String) "spec_string",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  mercury__string__format__string__format__field_types_format_str_spec_0_5,
  NULL,
  NULL,
  NULL
};

#line 2571 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_format_str_spec_0_0[1] = {
  &mercury__string__format__string__format__du_functor_desc_format_str_spec_0_0
};

#line 2576 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_format_str_spec_0_1[1] = {
  &mercury__string__format__string__format__du_functor_desc_format_str_spec_0_1
};

#line 2581 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_format_str_spec_0_2[1] = {
  &mercury__string__format__string__format__du_functor_desc_format_str_spec_0_2
};

#line 2586 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_format_str_spec_0_3[3] = {
  &mercury__string__format__string__format__du_functor_desc_format_str_spec_0_3,
  &mercury__string__format__string__format__du_functor_desc_format_str_spec_0_4,
  &mercury__string__format__string__format__du_functor_desc_format_str_spec_0_5
};

#line 2593 "string.format.c"
static const MR_DuPtagLayout mercury__string__format__string__format__du_ptag_ordered_format_str_spec_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__string__format__string__format__du_stag_ordered_format_str_spec_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__format__string__format__du_stag_ordered_format_str_spec_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__format__string__format__du_stag_ordered_format_str_spec_0_2
  },
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mercury__string__format__string__format__du_stag_ordered_format_str_spec_0_3
  }
};

#line 2617 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_name_ordered_format_str_spec_0[6] = {
  &mercury__string__format__string__format__du_functor_desc_format_str_spec_0_4,
  &mercury__string__format__string__format__du_functor_desc_format_str_spec_0_3,
  &mercury__string__format__string__format__du_functor_desc_format_str_spec_0_0,
  &mercury__string__format__string__format__du_functor_desc_format_str_spec_0_1,
  &mercury__string__format__string__format__du_functor_desc_format_str_spec_0_5,
  &mercury__string__format__string__format__du_functor_desc_format_str_spec_0_2
};

#line 2627 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_format_str_spec_0[6] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4
};

#line 2637 "string.format.c"
const MR_TypeCtorInfo_Struct mercury__string__format__string__format__type_ctor_info_format_str_spec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__format____Unify____format_str_spec_0_0_10001)),
  ((MR_Box) (mercury__string__format____Compare____format_str_spec_0_0_10001)),
  (MR_String) "string.format",
  (MR_String) "format_str_spec",
  {
    mercury__string__format__string__format__du_name_ordered_format_str_spec_0
  },
  {
    mercury__string__format__string__format__du_ptag_ordered_format_str_spec_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mercury__string__format__string__format__functor_number_map_format_str_spec_0
};

#line 2658 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_gather_ended_by_0_0 = {
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

#line 2673 "string.format.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__format__list__ti_list_1builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

#line 2681 "string.format.c"
static const MR_PseudoTypeInfo mercury__string__format__string__format__field_types_gather_ended_by_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__string__format__list__ti_list_1builtin__type_ctor_info_character_0
};

#line 2686 "string.format.c"
static const MR_DuFunctorDesc mercury__string__format__string__format__du_functor_desc_gather_ended_by_0_1 = {
  (MR_String) "found_percent",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__string__format__string__format__field_types_gather_ended_by_0_1,
  NULL,
  NULL,
  NULL
};

#line 2701 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_gather_ended_by_0_0[1] = {
  &mercury__string__format__string__format__du_functor_desc_gather_ended_by_0_0
};

#line 2706 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_stag_ordered_gather_ended_by_0_1[1] = {
  &mercury__string__format__string__format__du_functor_desc_gather_ended_by_0_1
};

#line 2711 "string.format.c"
static const MR_DuPtagLayout mercury__string__format__string__format__du_ptag_ordered_gather_ended_by_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__string__format__string__format__du_stag_ordered_gather_ended_by_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__format__string__format__du_stag_ordered_gather_ended_by_0_1
  }
};

#line 2725 "string.format.c"
static const MR_DuFunctorDescPtr mercury__string__format__string__format__du_name_ordered_gather_ended_by_0[2] = {
  &mercury__string__format__string__format__du_functor_desc_gather_ended_by_0_0,
  &mercury__string__format__string__format__du_functor_desc_gather_ended_by_0_1
};

#line 2731 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_gather_ended_by_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2737 "string.format.c"
const MR_TypeCtorInfo_Struct mercury__string__format__string__format__type_ctor_info_gather_ended_by_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string__format____Unify____gather_ended_by_0_0_10001)),
  ((MR_Box) (mercury__string__format____Compare____gather_ended_by_0_0_10001)),
  (MR_String) "string.format",
  (MR_String) "gather_ended_by",
  {
    mercury__string__format__string__format__du_name_ordered_gather_ended_by_0
  },
  {
    mercury__string__format__string__format__du_ptag_ordered_gather_ended_by_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__format__string__format__functor_number_map_gather_ended_by_0
};

#line 2758 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_int_base_0_0 = {
  (MR_String) "base_octal",
  (MR_Integer) 0
};

#line 2764 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_int_base_0_1 = {
  (MR_String) "base_decimal",
  (MR_Integer) 1
};

#line 2770 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_int_base_0_2 = {
  (MR_String) "base_hex_lc",
  (MR_Integer) 2
};

#line 2776 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_int_base_0_3 = {
  (MR_String) "base_hex_uc",
  (MR_Integer) 3
};

#line 2782 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_int_base_0_4 = {
  (MR_String) "base_hex_p",
  (MR_Integer) 4
};

#line 2788 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_value_ordered_int_base_0[5] = {
  &mercury__string__format__string__format__enum_functor_desc_int_base_0_0,
  &mercury__string__format__string__format__enum_functor_desc_int_base_0_1,
  &mercury__string__format__string__format__enum_functor_desc_int_base_0_2,
  &mercury__string__format__string__format__enum_functor_desc_int_base_0_3,
  &mercury__string__format__string__format__enum_functor_desc_int_base_0_4
};

#line 2797 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_name_ordered_int_base_0[5] = {
  &mercury__string__format__string__format__enum_functor_desc_int_base_0_1,
  &mercury__string__format__string__format__enum_functor_desc_int_base_0_2,
  &mercury__string__format__string__format__enum_functor_desc_int_base_0_4,
  &mercury__string__format__string__format__enum_functor_desc_int_base_0_3,
  &mercury__string__format__string__format__enum_functor_desc_int_base_0_0
};

#line 2806 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_int_base_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 2815 "string.format.c"
const MR_TypeCtorInfo_Struct mercury__string__format__string__format__type_ctor_info_int_base_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__format____Unify____int_base_0_0_10001)),
  ((MR_Box) (mercury__string__format____Compare____int_base_0_0_10001)),
  (MR_String) "string.format",
  (MR_String) "int_base",
  {
    mercury__string__format__string__format__enum_name_ordered_int_base_0
  },
  {
    mercury__string__format__string__format__enum_value_ordered_int_base_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mercury__string__format__string__format__functor_number_map_int_base_0
};

#line 2836 "string.format.c"
const MR_TypeCtorInfo_Struct mercury__string__format__string__format__type_ctor_info_maybe_prec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__string__format____Unify____maybe_prec_0_0_10001)),
  ((MR_Box) (mercury__string__format____Compare____maybe_prec_0_0_10001)),
  (MR_String) "string.format",
  (MR_String) "maybe_prec",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__string__format__maybe__ti_maybe_1builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2857 "string.format.c"
const MR_TypeCtorInfo_Struct mercury__string__format__string__format__type_ctor_info_maybe_width_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__string__format____Unify____maybe_width_0_0_10001)),
  ((MR_Box) (mercury__string__format____Compare____maybe_width_0_0_10001)),
  (MR_String) "string.format",
  (MR_String) "maybe_width",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__string__format__maybe__ti_maybe_1builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2878 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_poly_kind_0_0 = {
  (MR_String) "poly_kind_char",
  (MR_Integer) 0
};

#line 2884 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_poly_kind_0_1 = {
  (MR_String) "poly_kind_str",
  (MR_Integer) 1
};

#line 2890 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_poly_kind_0_2 = {
  (MR_String) "poly_kind_int",
  (MR_Integer) 2
};

#line 2896 "string.format.c"
static const MR_EnumFunctorDesc mercury__string__format__string__format__enum_functor_desc_poly_kind_0_3 = {
  (MR_String) "poly_kind_float",
  (MR_Integer) 3
};

#line 2902 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_value_ordered_poly_kind_0[4] = {
  &mercury__string__format__string__format__enum_functor_desc_poly_kind_0_0,
  &mercury__string__format__string__format__enum_functor_desc_poly_kind_0_1,
  &mercury__string__format__string__format__enum_functor_desc_poly_kind_0_2,
  &mercury__string__format__string__format__enum_functor_desc_poly_kind_0_3
};

#line 2910 "string.format.c"
static const MR_EnumFunctorDescPtr mercury__string__format__string__format__enum_name_ordered_poly_kind_0[4] = {
  &mercury__string__format__string__format__enum_functor_desc_poly_kind_0_0,
  &mercury__string__format__string__format__enum_functor_desc_poly_kind_0_3,
  &mercury__string__format__string__format__enum_functor_desc_poly_kind_0_2,
  &mercury__string__format__string__format__enum_functor_desc_poly_kind_0_1
};

#line 2918 "string.format.c"
static const MR_Integer mercury__string__format__string__format__functor_number_map_poly_kind_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2926 "string.format.c"
const MR_TypeCtorInfo_Struct mercury__string__format__string__format__type_ctor_info_poly_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string__format____Unify____poly_kind_0_0_10001)),
  ((MR_Box) (mercury__string__format____Compare____poly_kind_0_0_10001)),
  (MR_String) "string.format",
  (MR_String) "poly_kind",
  {
    mercury__string__format__string__format__enum_name_ordered_poly_kind_0
  },
  {
    mercury__string__format__string__format__enum_value_ordered_poly_kind_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__string__format__string__format__functor_number_map_poly_kind_0
};

#line 2947 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____flag_hash_0_0_10001(
#line 2950 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 2952 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2)
#line 2954 "string.format.c"
{
#line 2956 "string.format.c"
  {
#line 2958 "string.format.c"
    MR_bool mercury__string__format__succeeded;

#line 2961 "string.format.c"
    {
#line 2963 "string.format.c"
      mercury__string__format__succeeded = mercury__string__format____Unify____flag_hash_0_0(((MR_Word) mercury__string__format__wrapper_arg_1), ((MR_Word) mercury__string__format__wrapper_arg_2));
    }
#line 2966 "string.format.c"
    return mercury__string__format__succeeded;
#line 2968 "string.format.c"
  }
#line 2970 "string.format.c"
}

#line 2973 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____flag_hash_0_0_10001(
#line 2976 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 2978 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 2980 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3)
#line 2982 "string.format.c"
{
#line 2984 "string.format.c"
  {
#line 2986 "string.format.c"
    MR_Word mercury__string__format__conv0_HeadVar__1_1;

#line 2989 "string.format.c"
    {
#line 2991 "string.format.c"
      mercury__string__format____Compare____flag_hash_0_0(&mercury__string__format__conv0_HeadVar__1_1, ((MR_Word) mercury__string__format__wrapper_arg_2), ((MR_Word) mercury__string__format__wrapper_arg_3));
    }
#line 2994 "string.format.c"
    *mercury__string__format__wrapper_arg_1 = ((MR_Box) (mercury__string__format__conv0_HeadVar__1_1));
#line 2996 "string.format.c"
  }
#line 2998 "string.format.c"
}

#line 3001 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____flag_minus_0_0_10001(
#line 3004 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 3006 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2)
#line 3008 "string.format.c"
{
#line 3010 "string.format.c"
  {
#line 3012 "string.format.c"
    MR_bool mercury__string__format__succeeded;

#line 3015 "string.format.c"
    {
#line 3017 "string.format.c"
      mercury__string__format__succeeded = mercury__string__format____Unify____flag_minus_0_0(((MR_Word) mercury__string__format__wrapper_arg_1), ((MR_Word) mercury__string__format__wrapper_arg_2));
    }
#line 3020 "string.format.c"
    return mercury__string__format__succeeded;
#line 3022 "string.format.c"
  }
#line 3024 "string.format.c"
}

#line 3027 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____flag_minus_0_0_10001(
#line 3030 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 3032 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 3034 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3)
#line 3036 "string.format.c"
{
#line 3038 "string.format.c"
  {
#line 3040 "string.format.c"
    MR_Word mercury__string__format__conv0_HeadVar__1_1;

#line 3043 "string.format.c"
    {
#line 3045 "string.format.c"
      mercury__string__format____Compare____flag_minus_0_0(&mercury__string__format__conv0_HeadVar__1_1, ((MR_Word) mercury__string__format__wrapper_arg_2), ((MR_Word) mercury__string__format__wrapper_arg_3));
    }
#line 3048 "string.format.c"
    *mercury__string__format__wrapper_arg_1 = ((MR_Box) (mercury__string__format__conv0_HeadVar__1_1));
#line 3050 "string.format.c"
  }
#line 3052 "string.format.c"
}

#line 3055 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____flag_plus_0_0_10001(
#line 3058 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 3060 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2)
#line 3062 "string.format.c"
{
#line 3064 "string.format.c"
  {
#line 3066 "string.format.c"
    MR_bool mercury__string__format__succeeded;

#line 3069 "string.format.c"
    {
#line 3071 "string.format.c"
      mercury__string__format__succeeded = mercury__string__format____Unify____flag_plus_0_0(((MR_Word) mercury__string__format__wrapper_arg_1), ((MR_Word) mercury__string__format__wrapper_arg_2));
    }
#line 3074 "string.format.c"
    return mercury__string__format__succeeded;
#line 3076 "string.format.c"
  }
#line 3078 "string.format.c"
}

#line 3081 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____flag_plus_0_0_10001(
#line 3084 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 3086 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 3088 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3)
#line 3090 "string.format.c"
{
#line 3092 "string.format.c"
  {
#line 3094 "string.format.c"
    MR_Word mercury__string__format__conv0_HeadVar__1_1;

#line 3097 "string.format.c"
    {
#line 3099 "string.format.c"
      mercury__string__format____Compare____flag_plus_0_0(&mercury__string__format__conv0_HeadVar__1_1, ((MR_Word) mercury__string__format__wrapper_arg_2), ((MR_Word) mercury__string__format__wrapper_arg_3));
    }
#line 3102 "string.format.c"
    *mercury__string__format__wrapper_arg_1 = ((MR_Box) (mercury__string__format__conv0_HeadVar__1_1));
#line 3104 "string.format.c"
  }
#line 3106 "string.format.c"
}

#line 3109 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____flag_space_0_0_10001(
#line 3112 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 3114 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2)
#line 3116 "string.format.c"
{
#line 3118 "string.format.c"
  {
#line 3120 "string.format.c"
    MR_bool mercury__string__format__succeeded;

#line 3123 "string.format.c"
    {
#line 3125 "string.format.c"
      mercury__string__format__succeeded = mercury__string__format____Unify____flag_space_0_0(((MR_Word) mercury__string__format__wrapper_arg_1), ((MR_Word) mercury__string__format__wrapper_arg_2));
    }
#line 3128 "string.format.c"
    return mercury__string__format__succeeded;
#line 3130 "string.format.c"
  }
#line 3132 "string.format.c"
}

#line 3135 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____flag_space_0_0_10001(
#line 3138 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 3140 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 3142 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3)
#line 3144 "string.format.c"
{
#line 3146 "string.format.c"
  {
#line 3148 "string.format.c"
    MR_Word mercury__string__format__conv0_HeadVar__1_1;

#line 3151 "string.format.c"
    {
#line 3153 "string.format.c"
      mercury__string__format____Compare____flag_space_0_0(&mercury__string__format__conv0_HeadVar__1_1, ((MR_Word) mercury__string__format__wrapper_arg_2), ((MR_Word) mercury__string__format__wrapper_arg_3));
    }
#line 3156 "string.format.c"
    *mercury__string__format__wrapper_arg_1 = ((MR_Box) (mercury__string__format__conv0_HeadVar__1_1));
#line 3158 "string.format.c"
  }
#line 3160 "string.format.c"
}

#line 3163 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____flag_zero_0_0_10001(
#line 3166 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 3168 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2)
#line 3170 "string.format.c"
{
#line 3172 "string.format.c"
  {
#line 3174 "string.format.c"
    MR_bool mercury__string__format__succeeded;

#line 3177 "string.format.c"
    {
#line 3179 "string.format.c"
      mercury__string__format__succeeded = mercury__string__format____Unify____flag_zero_0_0(((MR_Word) mercury__string__format__wrapper_arg_1), ((MR_Word) mercury__string__format__wrapper_arg_2));
    }
#line 3182 "string.format.c"
    return mercury__string__format__succeeded;
#line 3184 "string.format.c"
  }
#line 3186 "string.format.c"
}

#line 3189 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____flag_zero_0_0_10001(
#line 3192 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 3194 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 3196 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3)
#line 3198 "string.format.c"
{
#line 3200 "string.format.c"
  {
#line 3202 "string.format.c"
    MR_Word mercury__string__format__conv0_HeadVar__1_1;

#line 3205 "string.format.c"
    {
#line 3207 "string.format.c"
      mercury__string__format____Compare____flag_zero_0_0(&mercury__string__format__conv0_HeadVar__1_1, ((MR_Word) mercury__string__format__wrapper_arg_2), ((MR_Word) mercury__string__format__wrapper_arg_3));
    }
#line 3210 "string.format.c"
    *mercury__string__format__wrapper_arg_1 = ((MR_Box) (mercury__string__format__conv0_HeadVar__1_1));
#line 3212 "string.format.c"
  }
#line 3214 "string.format.c"
}

#line 3217 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____flags_0_0_10001(
#line 3220 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 3222 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2)
#line 3224 "string.format.c"
{
#line 3226 "string.format.c"
  {
#line 3228 "string.format.c"
    MR_bool mercury__string__format__succeeded;

#line 3231 "string.format.c"
    {
#line 3233 "string.format.c"
      mercury__string__format__succeeded = mercury__string__format____Unify____flags_0_0(((MR_Word) mercury__string__format__wrapper_arg_1), ((MR_Word) mercury__string__format__wrapper_arg_2));
    }
#line 3236 "string.format.c"
    return mercury__string__format__succeeded;
#line 3238 "string.format.c"
  }
#line 3240 "string.format.c"
}

#line 3243 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____flags_0_0_10001(
#line 3246 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 3248 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 3250 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3)
#line 3252 "string.format.c"
{
#line 3254 "string.format.c"
  {
#line 3256 "string.format.c"
    MR_Word mercury__string__format__conv0_HeadVar__1_1;

#line 3259 "string.format.c"
    {
#line 3261 "string.format.c"
      mercury__string__format____Compare____flags_0_0(&mercury__string__format__conv0_HeadVar__1_1, ((MR_Word) mercury__string__format__wrapper_arg_2), ((MR_Word) mercury__string__format__wrapper_arg_3));
    }
#line 3264 "string.format.c"
    *mercury__string__format__wrapper_arg_1 = ((MR_Box) (mercury__string__format__conv0_HeadVar__1_1));
#line 3266 "string.format.c"
  }
#line 3268 "string.format.c"
}

#line 3271 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____float_kind_0_0_10001(
#line 3274 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 3276 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2)
#line 3278 "string.format.c"
{
#line 3280 "string.format.c"
  {
#line 3282 "string.format.c"
    MR_bool mercury__string__format__succeeded;

#line 3285 "string.format.c"
    {
#line 3287 "string.format.c"
      mercury__string__format__succeeded = mercury__string__format____Unify____float_kind_0_0(((MR_Word) mercury__string__format__wrapper_arg_1), ((MR_Word) mercury__string__format__wrapper_arg_2));
    }
#line 3290 "string.format.c"
    return mercury__string__format__succeeded;
#line 3292 "string.format.c"
  }
#line 3294 "string.format.c"
}

#line 3297 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____float_kind_0_0_10001(
#line 3300 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 3302 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 3304 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3)
#line 3306 "string.format.c"
{
#line 3308 "string.format.c"
  {
#line 3310 "string.format.c"
    MR_Word mercury__string__format__conv0_HeadVar__1_1;

#line 3313 "string.format.c"
    {
#line 3315 "string.format.c"
      mercury__string__format____Compare____float_kind_0_0(&mercury__string__format__conv0_HeadVar__1_1, ((MR_Word) mercury__string__format__wrapper_arg_2), ((MR_Word) mercury__string__format__wrapper_arg_3));
    }
#line 3318 "string.format.c"
    *mercury__string__format__wrapper_arg_1 = ((MR_Box) (mercury__string__format__conv0_HeadVar__1_1));
#line 3320 "string.format.c"
  }
#line 3322 "string.format.c"
}

#line 3325 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____format_str_component_0_0_10001(
#line 3328 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 3330 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2)
#line 3332 "string.format.c"
{
#line 3334 "string.format.c"
  {
#line 3336 "string.format.c"
    MR_bool mercury__string__format__succeeded;

#line 3339 "string.format.c"
    {
#line 3341 "string.format.c"
      mercury__string__format__succeeded = mercury__string__format____Unify____format_str_component_0_0(((MR_Word) mercury__string__format__wrapper_arg_1), ((MR_Word) mercury__string__format__wrapper_arg_2));
    }
#line 3344 "string.format.c"
    return mercury__string__format__succeeded;
#line 3346 "string.format.c"
  }
#line 3348 "string.format.c"
}

#line 3351 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____format_str_component_0_0_10001(
#line 3354 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 3356 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 3358 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3)
#line 3360 "string.format.c"
{
#line 3362 "string.format.c"
  {
#line 3364 "string.format.c"
    MR_Word mercury__string__format__conv0_HeadVar__1_1;

#line 3367 "string.format.c"
    {
#line 3369 "string.format.c"
      mercury__string__format____Compare____format_str_component_0_0(&mercury__string__format__conv0_HeadVar__1_1, ((MR_Word) mercury__string__format__wrapper_arg_2), ((MR_Word) mercury__string__format__wrapper_arg_3));
    }
#line 3372 "string.format.c"
    *mercury__string__format__wrapper_arg_1 = ((MR_Box) (mercury__string__format__conv0_HeadVar__1_1));
#line 3374 "string.format.c"
  }
#line 3376 "string.format.c"
}

#line 3379 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____format_str_error_0_0_10001(
#line 3382 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 3384 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2)
#line 3386 "string.format.c"
{
#line 3388 "string.format.c"
  {
#line 3390 "string.format.c"
    MR_bool mercury__string__format__succeeded;

#line 3393 "string.format.c"
    {
#line 3395 "string.format.c"
      mercury__string__format__succeeded = mercury__string__format____Unify____format_str_error_0_0(((MR_Word) mercury__string__format__wrapper_arg_1), ((MR_Word) mercury__string__format__wrapper_arg_2));
    }
#line 3398 "string.format.c"
    return mercury__string__format__succeeded;
#line 3400 "string.format.c"
  }
#line 3402 "string.format.c"
}

#line 3405 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____format_str_error_0_0_10001(
#line 3408 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 3410 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 3412 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3)
#line 3414 "string.format.c"
{
#line 3416 "string.format.c"
  {
#line 3418 "string.format.c"
    MR_Word mercury__string__format__conv0_HeadVar__1_1;

#line 3421 "string.format.c"
    {
#line 3423 "string.format.c"
      mercury__string__format____Compare____format_str_error_0_0(&mercury__string__format__conv0_HeadVar__1_1, ((MR_Word) mercury__string__format__wrapper_arg_2), ((MR_Word) mercury__string__format__wrapper_arg_3));
    }
#line 3426 "string.format.c"
    *mercury__string__format__wrapper_arg_1 = ((MR_Box) (mercury__string__format__conv0_HeadVar__1_1));
#line 3428 "string.format.c"
  }
#line 3430 "string.format.c"
}

#line 3433 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____format_str_spec_0_0_10001(
#line 3436 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 3438 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2)
#line 3440 "string.format.c"
{
#line 3442 "string.format.c"
  {
#line 3444 "string.format.c"
    MR_bool mercury__string__format__succeeded;

#line 3447 "string.format.c"
    {
#line 3449 "string.format.c"
      mercury__string__format__succeeded = mercury__string__format____Unify____format_str_spec_0_0(((MR_Word) mercury__string__format__wrapper_arg_1), ((MR_Word) mercury__string__format__wrapper_arg_2));
    }
#line 3452 "string.format.c"
    return mercury__string__format__succeeded;
#line 3454 "string.format.c"
  }
#line 3456 "string.format.c"
}

#line 3459 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____format_str_spec_0_0_10001(
#line 3462 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 3464 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 3466 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3)
#line 3468 "string.format.c"
{
#line 3470 "string.format.c"
  {
#line 3472 "string.format.c"
    MR_Word mercury__string__format__conv0_HeadVar__1_1;

#line 3475 "string.format.c"
    {
#line 3477 "string.format.c"
      mercury__string__format____Compare____format_str_spec_0_0(&mercury__string__format__conv0_HeadVar__1_1, ((MR_Word) mercury__string__format__wrapper_arg_2), ((MR_Word) mercury__string__format__wrapper_arg_3));
    }
#line 3480 "string.format.c"
    *mercury__string__format__wrapper_arg_1 = ((MR_Box) (mercury__string__format__conv0_HeadVar__1_1));
#line 3482 "string.format.c"
  }
#line 3484 "string.format.c"
}

#line 3487 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____gather_ended_by_0_0_10001(
#line 3490 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 3492 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2)
#line 3494 "string.format.c"
{
#line 3496 "string.format.c"
  {
#line 3498 "string.format.c"
    MR_bool mercury__string__format__succeeded;

#line 3501 "string.format.c"
    {
#line 3503 "string.format.c"
      mercury__string__format__succeeded = mercury__string__format____Unify____gather_ended_by_0_0(((MR_Word) mercury__string__format__wrapper_arg_1), ((MR_Word) mercury__string__format__wrapper_arg_2));
    }
#line 3506 "string.format.c"
    return mercury__string__format__succeeded;
#line 3508 "string.format.c"
  }
#line 3510 "string.format.c"
}

#line 3513 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____gather_ended_by_0_0_10001(
#line 3516 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 3518 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 3520 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3)
#line 3522 "string.format.c"
{
#line 3524 "string.format.c"
  {
#line 3526 "string.format.c"
    MR_Word mercury__string__format__conv0_HeadVar__1_1;

#line 3529 "string.format.c"
    {
#line 3531 "string.format.c"
      mercury__string__format____Compare____gather_ended_by_0_0(&mercury__string__format__conv0_HeadVar__1_1, ((MR_Word) mercury__string__format__wrapper_arg_2), ((MR_Word) mercury__string__format__wrapper_arg_3));
    }
#line 3534 "string.format.c"
    *mercury__string__format__wrapper_arg_1 = ((MR_Box) (mercury__string__format__conv0_HeadVar__1_1));
#line 3536 "string.format.c"
  }
#line 3538 "string.format.c"
}

#line 3541 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____int_base_0_0_10001(
#line 3544 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 3546 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2)
#line 3548 "string.format.c"
{
#line 3550 "string.format.c"
  {
#line 3552 "string.format.c"
    MR_bool mercury__string__format__succeeded;

#line 3555 "string.format.c"
    {
#line 3557 "string.format.c"
      mercury__string__format__succeeded = mercury__string__format____Unify____int_base_0_0(((MR_Word) mercury__string__format__wrapper_arg_1), ((MR_Word) mercury__string__format__wrapper_arg_2));
    }
#line 3560 "string.format.c"
    return mercury__string__format__succeeded;
#line 3562 "string.format.c"
  }
#line 3564 "string.format.c"
}

#line 3567 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____int_base_0_0_10001(
#line 3570 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 3572 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 3574 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3)
#line 3576 "string.format.c"
{
#line 3578 "string.format.c"
  {
#line 3580 "string.format.c"
    MR_Word mercury__string__format__conv0_HeadVar__1_1;

#line 3583 "string.format.c"
    {
#line 3585 "string.format.c"
      mercury__string__format____Compare____int_base_0_0(&mercury__string__format__conv0_HeadVar__1_1, ((MR_Word) mercury__string__format__wrapper_arg_2), ((MR_Word) mercury__string__format__wrapper_arg_3));
    }
#line 3588 "string.format.c"
    *mercury__string__format__wrapper_arg_1 = ((MR_Box) (mercury__string__format__conv0_HeadVar__1_1));
#line 3590 "string.format.c"
  }
#line 3592 "string.format.c"
}

#line 3595 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____maybe_prec_0_0_10001(
#line 3598 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 3600 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2)
#line 3602 "string.format.c"
{
#line 3604 "string.format.c"
  {
#line 3606 "string.format.c"
    MR_bool mercury__string__format__succeeded;

#line 3609 "string.format.c"
    {
#line 3611 "string.format.c"
      mercury__string__format__succeeded = mercury__string__format____Unify____maybe_prec_0_0(((MR_Word) mercury__string__format__wrapper_arg_1), ((MR_Word) mercury__string__format__wrapper_arg_2));
    }
#line 3614 "string.format.c"
    return mercury__string__format__succeeded;
#line 3616 "string.format.c"
  }
#line 3618 "string.format.c"
}

#line 3621 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____maybe_prec_0_0_10001(
#line 3624 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 3626 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 3628 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3)
#line 3630 "string.format.c"
{
#line 3632 "string.format.c"
  {
#line 3634 "string.format.c"
    MR_Word mercury__string__format__conv0_HeadVar__1_1;

#line 3637 "string.format.c"
    {
#line 3639 "string.format.c"
      mercury__string__format____Compare____maybe_prec_0_0(&mercury__string__format__conv0_HeadVar__1_1, ((MR_Word) mercury__string__format__wrapper_arg_2), ((MR_Word) mercury__string__format__wrapper_arg_3));
    }
#line 3642 "string.format.c"
    *mercury__string__format__wrapper_arg_1 = ((MR_Box) (mercury__string__format__conv0_HeadVar__1_1));
#line 3644 "string.format.c"
  }
#line 3646 "string.format.c"
}

#line 3649 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____maybe_width_0_0_10001(
#line 3652 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 3654 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2)
#line 3656 "string.format.c"
{
#line 3658 "string.format.c"
  {
#line 3660 "string.format.c"
    MR_bool mercury__string__format__succeeded;

#line 3663 "string.format.c"
    {
#line 3665 "string.format.c"
      mercury__string__format__succeeded = mercury__string__format____Unify____maybe_width_0_0(((MR_Word) mercury__string__format__wrapper_arg_1), ((MR_Word) mercury__string__format__wrapper_arg_2));
    }
#line 3668 "string.format.c"
    return mercury__string__format__succeeded;
#line 3670 "string.format.c"
  }
#line 3672 "string.format.c"
}

#line 3675 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____maybe_width_0_0_10001(
#line 3678 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 3680 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 3682 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3)
#line 3684 "string.format.c"
{
#line 3686 "string.format.c"
  {
#line 3688 "string.format.c"
    MR_Word mercury__string__format__conv0_HeadVar__1_1;

#line 3691 "string.format.c"
    {
#line 3693 "string.format.c"
      mercury__string__format____Compare____maybe_width_0_0(&mercury__string__format__conv0_HeadVar__1_1, ((MR_Word) mercury__string__format__wrapper_arg_2), ((MR_Word) mercury__string__format__wrapper_arg_3));
    }
#line 3696 "string.format.c"
    *mercury__string__format__wrapper_arg_1 = ((MR_Box) (mercury__string__format__conv0_HeadVar__1_1));
#line 3698 "string.format.c"
  }
#line 3700 "string.format.c"
}

#line 3703 "string.format.c"
static MR_bool MR_CALL 
mercury__string__format____Unify____poly_kind_0_0_10001(
#line 3706 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_1,
#line 3708 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2)
#line 3710 "string.format.c"
{
#line 3712 "string.format.c"
  {
#line 3714 "string.format.c"
    MR_bool mercury__string__format__succeeded;

#line 3717 "string.format.c"
    {
#line 3719 "string.format.c"
      mercury__string__format__succeeded = mercury__string__format____Unify____poly_kind_0_0(((MR_Word) mercury__string__format__wrapper_arg_1), ((MR_Word) mercury__string__format__wrapper_arg_2));
    }
#line 3722 "string.format.c"
    return mercury__string__format__succeeded;
#line 3724 "string.format.c"
  }
#line 3726 "string.format.c"
}

#line 3729 "string.format.c"
static void MR_CALL 
mercury__string__format____Compare____poly_kind_0_0_10001(
#line 3732 "string.format.c"
  MR_Box * mercury__string__format__wrapper_arg_1,
#line 3734 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_2,
#line 3736 "string.format.c"
  MR_Box mercury__string__format__wrapper_arg_3)
#line 3738 "string.format.c"
{
#line 3740 "string.format.c"
  {
#line 3742 "string.format.c"
    MR_Word mercury__string__format__conv0_HeadVar__1_1;

#line 3745 "string.format.c"
    {
#line 3747 "string.format.c"
      mercury__string__format____Compare____poly_kind_0_0(&mercury__string__format__conv0_HeadVar__1_1, ((MR_Word) mercury__string__format__wrapper_arg_2), ((MR_Word) mercury__string__format__wrapper_arg_3));
    }
#line 3750 "string.format.c"
    *mercury__string__format__wrapper_arg_1 = ((MR_Box) (mercury__string__format__conv0_HeadVar__1_1));
#line 3752 "string.format.c"
  }
#line 3754 "string.format.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__format__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__string__format__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 491 "string.int0"
static void MR_CALL 
mercury__string__format__next_boundary__ho1__ho9_4_p_in__string_0(
#line 491 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 491 "string.int0"
  MR_Integer mercury__string__format__Cur_7_7,
#line 491 "string.int0"
  MR_Integer * mercury__string__format__NextWordStart_8_8)
#line 491 "string.int0"
{
#line 915 "string.opt"
  while (MR_TRUE)
#line 915 "string.opt"
    {
#line 915 "string.opt"
      /* tailcall optimized into a loop */
#line 915 "string.opt"
      {
#line 915 "string.opt"
        MR_bool mercury__string__format__succeeded;
#line 915 "string.opt"
        MR_Integer mercury__string__format__Next_9_9;
#line 911 "string.opt"
        MR_Char mercury__string__format__Char_10_10;

#line 191 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__next_boundary__ho1__ho9_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__String_6_6 ;
	Index =  mercury__string__format__Cur_7_7 ;
		{
#line 191 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 3825 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__format__Next_9_9  = NextIndex;
	 mercury__string__format__Char_10_10  = Ch;
#line 191 "string.opt"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 911 "string.opt"
        if (mercury__string__format__succeeded)
#line 911 "string.opt"
          {
#line 2144 "string.format.m"
            if ((mercury__string__format__Char_10_10 == (MR_Char) 69))
#line 2145 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 2144 "string.format.m"
            else
#line 2144 "string.format.m"
              if ((mercury__string__format__Char_10_10 == (MR_Char) 101))
#line 2144 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 2144 "string.format.m"
              else
#line 2144 "string.format.m"
                mercury__string__format__succeeded = MR_FALSE;
#line 37 "std_util.opt"
            mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 911 "string.opt"
          }
#line 915 "string.opt"
        if (mercury__string__format__succeeded)
#line 914 "string.opt"
          {
#line 914 "string.opt"
            /* direct tailcall eliminated */
#line 914 "string.opt"
            {
#line 914 "string.opt"
              MR_Integer mercury__string__format__Cur_7__tmp_copy_7 = mercury__string__format__Next_9_9;

#line 914 "string.opt"
              mercury__string__format__Cur_7_7 = mercury__string__format__Cur_7__tmp_copy_7;
#line 914 "string.opt"
            }
#line 914 "string.opt"
            continue;
#line 914 "string.opt"
          }
#line 915 "string.opt"
        else
#line 916 "string.opt"
          *mercury__string__format__NextWordStart_8_8 = mercury__string__format__Cur_7_7;
#line 915 "string.opt"
      }
#line 915 "string.opt"
      break;
#line 915 "string.opt"
    }
#line 491 "string.int0"
}

#line 491 "string.int0"
static void MR_CALL 
mercury__string__format__next_boundary__ho1__ho8_4_p_in__string_0(
#line 491 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 491 "string.int0"
  MR_Integer mercury__string__format__Cur_7_7,
#line 491 "string.int0"
  MR_Integer * mercury__string__format__NextWordStart_8_8)
#line 491 "string.int0"
{
#line 915 "string.opt"
  while (MR_TRUE)
#line 915 "string.opt"
    {
#line 915 "string.opt"
      /* tailcall optimized into a loop */
#line 915 "string.opt"
      {
#line 915 "string.opt"
        MR_bool mercury__string__format__succeeded;
#line 915 "string.opt"
        MR_Integer mercury__string__format__Next_9_9;
#line 911 "string.opt"
        MR_Char mercury__string__format__Char_10_10;

#line 191 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__next_boundary__ho1__ho8_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__String_6_6 ;
	Index =  mercury__string__format__Cur_7_7 ;
		{
#line 191 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 3941 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__format__Next_9_9  = NextIndex;
	 mercury__string__format__Char_10_10  = Ch;
#line 191 "string.opt"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 911 "string.opt"
        if (mercury__string__format__succeeded)
#line 911 "string.opt"
          {
#line 2140 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__Char_10_10 == (MR_Char) 46);
#line 37 "std_util.opt"
            mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 911 "string.opt"
          }
#line 915 "string.opt"
        if (mercury__string__format__succeeded)
#line 914 "string.opt"
          {
#line 914 "string.opt"
            /* direct tailcall eliminated */
#line 914 "string.opt"
            {
#line 914 "string.opt"
              MR_Integer mercury__string__format__Cur_7__tmp_copy_7 = mercury__string__format__Next_9_9;

#line 914 "string.opt"
              mercury__string__format__Cur_7_7 = mercury__string__format__Cur_7__tmp_copy_7;
#line 914 "string.opt"
            }
#line 914 "string.opt"
            continue;
#line 914 "string.opt"
          }
#line 915 "string.opt"
        else
#line 916 "string.opt"
          *mercury__string__format__NextWordStart_8_8 = mercury__string__format__Cur_7_7;
#line 915 "string.opt"
      }
#line 915 "string.opt"
      break;
#line 915 "string.opt"
    }
#line 491 "string.int0"
}

#line 491 "string.int0"
static void MR_CALL 
mercury__string__format__next_boundary__ho7_4_p_in__string_0(
#line 491 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 491 "string.int0"
  MR_Integer mercury__string__format__Cur_7_7,
#line 491 "string.int0"
  MR_Integer * mercury__string__format__NextWordStart_8_8)
#line 491 "string.int0"
{
#line 915 "string.opt"
  while (MR_TRUE)
#line 915 "string.opt"
    {
#line 915 "string.opt"
      /* tailcall optimized into a loop */
#line 915 "string.opt"
      {
#line 915 "string.opt"
        MR_bool mercury__string__format__succeeded;
#line 915 "string.opt"
        MR_Integer mercury__string__format__Next_9_9;
#line 911 "string.opt"
        MR_Char mercury__string__format__Char_10_10;

#line 191 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__next_boundary__ho7_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__String_6_6 ;
	Index =  mercury__string__format__Cur_7_7 ;
		{
#line 191 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4045 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__format__Next_9_9  = NextIndex;
	 mercury__string__format__Char_10_10  = Ch;
#line 191 "string.opt"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 911 "string.opt"
        if (mercury__string__format__succeeded)
#line 2140 "string.format.m"
          mercury__string__format__succeeded = (mercury__string__format__Char_10_10 == (MR_Char) 46);
#line 915 "string.opt"
        if (mercury__string__format__succeeded)
#line 914 "string.opt"
          {
#line 914 "string.opt"
            /* direct tailcall eliminated */
#line 914 "string.opt"
            {
#line 914 "string.opt"
              MR_Integer mercury__string__format__Cur_7__tmp_copy_7 = mercury__string__format__Next_9_9;

#line 914 "string.opt"
              mercury__string__format__Cur_7_7 = mercury__string__format__Cur_7__tmp_copy_7;
#line 914 "string.opt"
            }
#line 914 "string.opt"
            continue;
#line 914 "string.opt"
          }
#line 915 "string.opt"
        else
#line 916 "string.opt"
          *mercury__string__format__NextWordStart_8_8 = mercury__string__format__Cur_7_7;
#line 915 "string.opt"
      }
#line 915 "string.opt"
      break;
#line 915 "string.opt"
    }
#line 491 "string.int0"
}

#line 529 "string.int0"
static void MR_CALL 
mercury__string__format__words_loop__ho6_4_p_in__string_0(
#line 529 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 529 "string.int0"
  MR_Integer mercury__string__format__WordStart_7_7,
#line 529 "string.int0"
  MR_Word * mercury__string__format__Words_8_8)
#line 529 "string.int0"
{
#line 889 "string.opt"
  {
#line 889 "string.opt"
    MR_bool mercury__string__format__succeeded;
#line 889 "string.opt"
    MR_Integer mercury__string__format__WordEnd_9_10;

#line 891 "string.opt"
    {
#line 891 "string.opt"
      mercury__string__format__next_boundary__ho1__ho8_4_p_in__string_0(mercury__string__format__String_6_6, mercury__string__format__WordStart_7_7, &mercury__string__format__WordEnd_9_10);
    }
#line 893 "string.opt"
    mercury__string__format__succeeded = (mercury__string__format__WordEnd_9_10 == mercury__string__format__WordStart_7_7);
#line 896 "string.opt"
    if (mercury__string__format__succeeded)
#line 895 "string.opt"
      *mercury__string__format__Words_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 896 "string.opt"
    else
#line 897 "string.opt"
      {
#line 897 "string.opt"
        MR_String mercury__string__format__Word_10_11;
#line 897 "string.opt"
        MR_Integer mercury__string__format__NextWordStart_11_12;

#line 493 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__words_loop__ho6_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__format__String_6_6 ;
	Start =  mercury__string__format__WordStart_7_7 ;
	End =  mercury__string__format__WordEnd_9_10 ;
		{
#line 493 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 4152 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Word_10_11  = SubString;
#line 493 "string.opt"
}
#line 898 "string.opt"
        {
#line 898 "string.opt"
          mercury__string__format__next_boundary__ho7_4_p_in__string_0(mercury__string__format__String_6_6, mercury__string__format__WordEnd_9_10, &mercury__string__format__NextWordStart_11_12);
        }
#line 900 "string.opt"
        mercury__string__format__succeeded = (mercury__string__format__WordEnd_9_10 == mercury__string__format__NextWordStart_11_12);
#line 904 "string.opt"
        if (mercury__string__format__succeeded)
#line 902 "string.opt"
          {
#line 902 "string.opt"
            MR_Word mercury__string__format__V_14_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 902 "string.opt"
            {
#line 902 "string.opt"
              MR_Word base;
#line 902 "string.opt"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 902 "string.opt"
              *mercury__string__format__Words_8_8 = base;
#line 902 "string.opt"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__Word_10_11));
#line 902 "string.opt"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__V_14_13));
#line 902 "string.opt"
            }
#line 902 "string.opt"
          }
#line 904 "string.opt"
        else
#line 905 "string.opt"
          {
#line 905 "string.opt"
            MR_Word mercury__string__format__Words0_12_14;

#line 905 "string.opt"
            {
#line 905 "string.opt"
              mercury__string__format__words_loop__ho6_4_p_in__string_0(mercury__string__format__String_6_6, mercury__string__format__NextWordStart_11_12, &mercury__string__format__Words0_12_14);
            }
#line 906 "string.opt"
            {
#line 906 "string.opt"
              MR_Word base;
#line 906 "string.opt"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "string.opt"
              *mercury__string__format__Words_8_8 = base;
#line 906 "string.opt"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__Word_10_11));
#line 906 "string.opt"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__Words0_12_14));
#line 906 "string.opt"
            }
#line 905 "string.opt"
          }
#line 897 "string.opt"
      }
#line 889 "string.opt"
  }
#line 529 "string.int0"
}

#line 491 "string.int0"
static void MR_CALL 
mercury__string__format__next_boundary__ho5_4_p_in__string_0(
#line 491 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 491 "string.int0"
  MR_Integer mercury__string__format__Cur_7_7,
#line 491 "string.int0"
  MR_Integer * mercury__string__format__NextWordStart_8_8)
#line 491 "string.int0"
{
#line 915 "string.opt"
  while (MR_TRUE)
#line 915 "string.opt"
    {
#line 915 "string.opt"
      /* tailcall optimized into a loop */
#line 915 "string.opt"
      {
#line 915 "string.opt"
        MR_bool mercury__string__format__succeeded;
#line 915 "string.opt"
        MR_Integer mercury__string__format__Next_9_9;
#line 911 "string.opt"
        MR_Char mercury__string__format__Char_10_10;

#line 191 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__next_boundary__ho5_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__String_6_6 ;
	Index =  mercury__string__format__Cur_7_7 ;
		{
#line 191 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4275 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__format__Next_9_9  = NextIndex;
	 mercury__string__format__Char_10_10  = Ch;
#line 191 "string.opt"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 911 "string.opt"
        if (mercury__string__format__succeeded)
#line 2144 "string.format.m"
          {
#line 2144 "string.format.m"
            if ((mercury__string__format__Char_10_10 == (MR_Char) 69))
#line 2145 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 2144 "string.format.m"
            else
#line 2144 "string.format.m"
              if ((mercury__string__format__Char_10_10 == (MR_Char) 101))
#line 2144 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 2144 "string.format.m"
              else
#line 2144 "string.format.m"
                mercury__string__format__succeeded = MR_FALSE;
#line 2144 "string.format.m"
          }
#line 915 "string.opt"
        if (mercury__string__format__succeeded)
#line 914 "string.opt"
          {
#line 914 "string.opt"
            /* direct tailcall eliminated */
#line 914 "string.opt"
            {
#line 914 "string.opt"
              MR_Integer mercury__string__format__Cur_7__tmp_copy_7 = mercury__string__format__Next_9_9;

#line 914 "string.opt"
              mercury__string__format__Cur_7_7 = mercury__string__format__Cur_7__tmp_copy_7;
#line 914 "string.opt"
            }
#line 914 "string.opt"
            continue;
#line 914 "string.opt"
          }
#line 915 "string.opt"
        else
#line 916 "string.opt"
          *mercury__string__format__NextWordStart_8_8 = mercury__string__format__Cur_7_7;
#line 915 "string.opt"
      }
#line 915 "string.opt"
      break;
#line 915 "string.opt"
    }
#line 491 "string.int0"
}

#line 529 "string.int0"
static void MR_CALL 
mercury__string__format__words_loop__ho4_4_p_in__string_0(
#line 529 "string.int0"
  MR_String mercury__string__format__String_6_6,
#line 529 "string.int0"
  MR_Integer mercury__string__format__WordStart_7_7,
#line 529 "string.int0"
  MR_Word * mercury__string__format__Words_8_8)
#line 529 "string.int0"
{
#line 889 "string.opt"
  {
#line 889 "string.opt"
    MR_bool mercury__string__format__succeeded;
#line 889 "string.opt"
    MR_Integer mercury__string__format__WordEnd_9_10;

#line 891 "string.opt"
    {
#line 891 "string.opt"
      mercury__string__format__next_boundary__ho1__ho9_4_p_in__string_0(mercury__string__format__String_6_6, mercury__string__format__WordStart_7_7, &mercury__string__format__WordEnd_9_10);
    }
#line 893 "string.opt"
    mercury__string__format__succeeded = (mercury__string__format__WordEnd_9_10 == mercury__string__format__WordStart_7_7);
#line 896 "string.opt"
    if (mercury__string__format__succeeded)
#line 895 "string.opt"
      *mercury__string__format__Words_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 896 "string.opt"
    else
#line 897 "string.opt"
      {
#line 897 "string.opt"
        MR_String mercury__string__format__Word_10_11;
#line 897 "string.opt"
        MR_Integer mercury__string__format__NextWordStart_11_12;

#line 493 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__words_loop__ho4_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__format__String_6_6 ;
	Start =  mercury__string__format__WordStart_7_7 ;
	End =  mercury__string__format__WordEnd_9_10 ;
		{
#line 493 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 4398 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Word_10_11  = SubString;
#line 493 "string.opt"
}
#line 898 "string.opt"
        {
#line 898 "string.opt"
          mercury__string__format__next_boundary__ho5_4_p_in__string_0(mercury__string__format__String_6_6, mercury__string__format__WordEnd_9_10, &mercury__string__format__NextWordStart_11_12);
        }
#line 900 "string.opt"
        mercury__string__format__succeeded = (mercury__string__format__WordEnd_9_10 == mercury__string__format__NextWordStart_11_12);
#line 904 "string.opt"
        if (mercury__string__format__succeeded)
#line 902 "string.opt"
          {
#line 902 "string.opt"
            MR_Word mercury__string__format__V_14_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 902 "string.opt"
            {
#line 902 "string.opt"
              MR_Word base;
#line 902 "string.opt"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 902 "string.opt"
              *mercury__string__format__Words_8_8 = base;
#line 902 "string.opt"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__Word_10_11));
#line 902 "string.opt"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__V_14_13));
#line 902 "string.opt"
            }
#line 902 "string.opt"
          }
#line 904 "string.opt"
        else
#line 905 "string.opt"
          {
#line 905 "string.opt"
            MR_Word mercury__string__format__Words0_12_14;

#line 905 "string.opt"
            {
#line 905 "string.opt"
              mercury__string__format__words_loop__ho4_4_p_in__string_0(mercury__string__format__String_6_6, mercury__string__format__NextWordStart_11_12, &mercury__string__format__Words0_12_14);
            }
#line 906 "string.opt"
            {
#line 906 "string.opt"
              MR_Word base;
#line 906 "string.opt"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "string.opt"
              *mercury__string__format__Words_8_8 = base;
#line 906 "string.opt"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__Word_10_11));
#line 906 "string.opt"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__Words0_12_14));
#line 906 "string.opt"
            }
#line 905 "string.opt"
          }
#line 897 "string.opt"
      }
#line 889 "string.opt"
  }
#line 529 "string.int0"
}

#line 114 "string.format.m"
void MR_CALL 
mercury__string__format____Compare____poly_kind_0_0(
#line 114 "string.format.m"
  MR_Word * mercury__string__format__HeadVar__1_1,
#line 114 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2,
#line 114 "string.format.m"
  MR_Word mercury__string__format__HeadVar__3_3)
#line 114 "string.format.m"
{
#line 114 "string.format.m"
  {
#line 114 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 114 "string.format.m"
    MR_Integer mercury__string__format__Cast_HeadVar1_4 = (MR_Integer) mercury__string__format__HeadVar__2_2;
#line 114 "string.format.m"
    MR_Integer mercury__string__format__Cast_HeadVar2_5 = (MR_Integer) mercury__string__format__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__string__format__succeeded = (mercury__string__format__Cast_HeadVar1_4 < mercury__string__format__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__string__format__succeeded = (mercury__string__format__Cast_HeadVar1_4 == mercury__string__format__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 114 "string.format.m"
  }
#line 114 "string.format.m"
}

#line 114 "string.format.m"
MR_bool MR_CALL 
mercury__string__format____Unify____poly_kind_0_0(
#line 114 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_1,
#line 114 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2)
#line 114 "string.format.m"
{
#line 4526 "string.format.c"
  {
#line 4528 "string.format.c"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__HeadVar__2_1 == mercury__string__format__HeadVar__2_2);

#line 4531 "string.format.c"
    return mercury__string__format__succeeded;
#line 4533 "string.format.c"
  }
#line 114 "string.format.m"
}

#line 84 "string.format.m"
void MR_CALL 
mercury__string__format____Compare____maybe_width_0_0(
#line 84 "string.format.m"
  MR_Word * mercury__string__format__HeadVar__1_1,
#line 84 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2,
#line 84 "string.format.m"
  MR_Word mercury__string__format__HeadVar__3_3)
#line 84 "string.format.m"
{
#line 84 "string.format.m"
  {
#line 84 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 84 "string.format.m"
    MR_Word mercury__string__format__TypeInfo_6_6 = (MR_Word) &mercury__string__format_scalar_common_1[0];
#line 84 "string.format.m"
    MR_Word mercury__string__format__Cast_HeadVar1_4 = mercury__string__format__HeadVar__2_2;
#line 84 "string.format.m"
    MR_Word mercury__string__format__Cast_HeadVar2_5 = mercury__string__format__HeadVar__3_3;

#line 84 "string.format.m"
    {
#line 84 "string.format.m"
      mercury__builtin__compare_3_p_0(mercury__string__format__TypeInfo_6_6, mercury__string__format__HeadVar__1_1, ((MR_Box) (mercury__string__format__Cast_HeadVar1_4)), ((MR_Box) (mercury__string__format__Cast_HeadVar2_5)));
#line 84 "string.format.m"
      return;
    }
#line 84 "string.format.m"
  }
#line 84 "string.format.m"
}

#line 84 "string.format.m"
MR_bool MR_CALL 
mercury__string__format____Unify____maybe_width_0_0(
#line 84 "string.format.m"
  MR_Word mercury__string__format__HeadVar__1_1,
#line 84 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2)
#line 84 "string.format.m"
{
#line 84 "string.format.m"
  {
#line 84 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 84 "string.format.m"
    MR_Word mercury__string__format__TypeInfo_5_5 = (MR_Word) &mercury__string__format_scalar_common_1[0];
#line 84 "string.format.m"
    MR_Word mercury__string__format__Cast_HeadVar1_3 = mercury__string__format__HeadVar__1_1;
#line 84 "string.format.m"
    MR_Word mercury__string__format__Cast_HeadVar2_4 = mercury__string__format__HeadVar__2_2;

#line 84 "string.format.m"
    {
#line 84 "string.format.m"
      return mercury__string__format__succeeded = mercury__builtin__unify_2_p_0(mercury__string__format__TypeInfo_5_5, ((MR_Box) (mercury__string__format__Cast_HeadVar1_3)), ((MR_Box) (mercury__string__format__Cast_HeadVar2_4)));
    }
#line 84 "string.format.m"
    return mercury__string__format__succeeded;
#line 84 "string.format.m"
  }
#line 84 "string.format.m"
}

#line 85 "string.format.m"
void MR_CALL 
mercury__string__format____Compare____maybe_prec_0_0(
#line 85 "string.format.m"
  MR_Word * mercury__string__format__HeadVar__1_1,
#line 85 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2,
#line 85 "string.format.m"
  MR_Word mercury__string__format__HeadVar__3_3)
#line 85 "string.format.m"
{
#line 85 "string.format.m"
  {
#line 85 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 85 "string.format.m"
    MR_Word mercury__string__format__TypeInfo_6_6 = (MR_Word) &mercury__string__format_scalar_common_1[0];
#line 85 "string.format.m"
    MR_Word mercury__string__format__Cast_HeadVar1_4 = mercury__string__format__HeadVar__2_2;
#line 85 "string.format.m"
    MR_Word mercury__string__format__Cast_HeadVar2_5 = mercury__string__format__HeadVar__3_3;

#line 85 "string.format.m"
    {
#line 85 "string.format.m"
      mercury__builtin__compare_3_p_0(mercury__string__format__TypeInfo_6_6, mercury__string__format__HeadVar__1_1, ((MR_Box) (mercury__string__format__Cast_HeadVar1_4)), ((MR_Box) (mercury__string__format__Cast_HeadVar2_5)));
#line 85 "string.format.m"
      return;
    }
#line 85 "string.format.m"
  }
#line 85 "string.format.m"
}

#line 85 "string.format.m"
MR_bool MR_CALL 
mercury__string__format____Unify____maybe_prec_0_0(
#line 85 "string.format.m"
  MR_Word mercury__string__format__HeadVar__1_1,
#line 85 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2)
#line 85 "string.format.m"
{
#line 85 "string.format.m"
  {
#line 85 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 85 "string.format.m"
    MR_Word mercury__string__format__TypeInfo_5_5 = (MR_Word) &mercury__string__format_scalar_common_1[0];
#line 85 "string.format.m"
    MR_Word mercury__string__format__Cast_HeadVar1_3 = mercury__string__format__HeadVar__1_1;
#line 85 "string.format.m"
    MR_Word mercury__string__format__Cast_HeadVar2_4 = mercury__string__format__HeadVar__2_2;

#line 85 "string.format.m"
    {
#line 85 "string.format.m"
      return mercury__string__format__succeeded = mercury__builtin__unify_2_p_0(mercury__string__format__TypeInfo_5_5, ((MR_Box) (mercury__string__format__Cast_HeadVar1_3)), ((MR_Box) (mercury__string__format__Cast_HeadVar2_4)));
    }
#line 85 "string.format.m"
    return mercury__string__format__succeeded;
#line 85 "string.format.m"
  }
#line 85 "string.format.m"
}

#line 87 "string.format.m"
void MR_CALL 
mercury__string__format____Compare____int_base_0_0(
#line 87 "string.format.m"
  MR_Word * mercury__string__format__HeadVar__1_1,
#line 87 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2,
#line 87 "string.format.m"
  MR_Word mercury__string__format__HeadVar__3_3)
#line 87 "string.format.m"
{
#line 87 "string.format.m"
  {
#line 87 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 87 "string.format.m"
    MR_Integer mercury__string__format__Cast_HeadVar1_4 = (MR_Integer) mercury__string__format__HeadVar__2_2;
#line 87 "string.format.m"
    MR_Integer mercury__string__format__Cast_HeadVar2_5 = (MR_Integer) mercury__string__format__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__string__format__succeeded = (mercury__string__format__Cast_HeadVar1_4 < mercury__string__format__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__string__format__succeeded = (mercury__string__format__Cast_HeadVar1_4 == mercury__string__format__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 87 "string.format.m"
  }
#line 87 "string.format.m"
}

#line 87 "string.format.m"
MR_bool MR_CALL 
mercury__string__format____Unify____int_base_0_0(
#line 87 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_1,
#line 87 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2)
#line 87 "string.format.m"
{
#line 4726 "string.format.c"
  {
#line 4728 "string.format.c"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__HeadVar__2_1 == mercury__string__format__HeadVar__2_2);

#line 4731 "string.format.c"
    return mercury__string__format__succeeded;
#line 4733 "string.format.c"
  }
#line 87 "string.format.m"
}

#line 367 "string.format.m"
void MR_CALL 
mercury__string__format____Compare____gather_ended_by_0_0(
#line 367 "string.format.m"
  MR_Word * mercury__string__format__HeadVar__1_1,
#line 367 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2,
#line 367 "string.format.m"
  MR_Word mercury__string__format__HeadVar__3_3)
#line 367 "string.format.m"
{
#line 367 "string.format.m"
  {
#line 367 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 367 "string.format.m"
    MR_Integer mercury__string__format__CastX_8 = (MR_Integer) mercury__string__format__HeadVar__2_2;
#line 367 "string.format.m"
    MR_Integer mercury__string__format__CastY_9 = (MR_Integer) mercury__string__format__HeadVar__3_3;

#line 367 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__CastX_8 == mercury__string__format__CastY_9);
#line 367 "string.format.m"
    if (mercury__string__format__succeeded)
#line 4762 "string.format.c"
      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 367 "string.format.m"
    else
#line 367 "string.format.m"
      if ((mercury__string__format__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 367 "string.format.m"
        if ((mercury__string__format__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 367 "string.format.m"
          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 367 "string.format.m"
        else
#line 4774 "string.format.c"
          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 367 "string.format.m"
      else
#line 367 "string.format.m"
        {
#line 367 "string.format.m"
          MR_Word mercury__string__format__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)));

#line 367 "string.format.m"
          if ((mercury__string__format__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4785 "string.format.c"
            *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 367 "string.format.m"
          else
#line 367 "string.format.m"
            {
#line 367 "string.format.m"
              MR_Word mercury__string__format__TypeInfo_10_10 = (MR_Word) &mercury__string__format_scalar_common_1[1];
#line 367 "string.format.m"
              MR_Word mercury__string__format__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)));

#line 367 "string.format.m"
              {
#line 367 "string.format.m"
                mercury__builtin__compare_3_p_0(mercury__string__format__TypeInfo_10_10, mercury__string__format__HeadVar__1_1, ((MR_Box) (mercury__string__format__V_11_11)), ((MR_Box) (mercury__string__format__V_7_7)));
#line 367 "string.format.m"
                return;
              }
#line 367 "string.format.m"
            }
#line 367 "string.format.m"
        }
#line 367 "string.format.m"
  }
#line 367 "string.format.m"
}

#line 367 "string.format.m"
MR_bool MR_CALL 
mercury__string__format____Unify____gather_ended_by_0_0(
#line 367 "string.format.m"
  MR_Word mercury__string__format__HeadVar__1_1,
#line 367 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2)
#line 367 "string.format.m"
{
#line 367 "string.format.m"
  {
#line 367 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 367 "string.format.m"
    MR_Integer mercury__string__format__CastX_7 = (MR_Integer) mercury__string__format__HeadVar__1_1;
#line 367 "string.format.m"
    MR_Integer mercury__string__format__CastY_8 = (MR_Integer) mercury__string__format__HeadVar__2_2;

#line 367 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__CastX_7 == mercury__string__format__CastY_8);
#line 367 "string.format.m"
    if (mercury__string__format__succeeded)
#line 367 "string.format.m"
      mercury__string__format__succeeded = MR_TRUE;
#line 367 "string.format.m"
    else
#line 367 "string.format.m"
      if ((mercury__string__format__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 367 "string.format.m"
        {
#line 367 "string.format.m"
          MR_Integer mercury__string__format__CastX_3 = (MR_Integer) mercury__string__format__HeadVar__1_1;
#line 367 "string.format.m"
          MR_Integer mercury__string__format__CastY_4 = (MR_Integer) mercury__string__format__HeadVar__2_2;

#line 367 "string.format.m"
          mercury__string__format__succeeded = (mercury__string__format__CastY_4 == mercury__string__format__CastX_3);
#line 367 "string.format.m"
        }
#line 367 "string.format.m"
      else
#line 367 "string.format.m"
        {
#line 367 "string.format.m"
          MR_Word mercury__string__format__TypeInfo_9_9;
#line 367 "string.format.m"
          MR_Word mercury__string__format__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)));
#line 367 "string.format.m"
          MR_Word mercury__string__format__V_6_6;

#line 367 "string.format.m"
          mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 367 "string.format.m"
          if (mercury__string__format__succeeded)
#line 367 "string.format.m"
            {
#line 367 "string.format.m"
              mercury__string__format__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)));
#line 4870 "string.format.c"
              mercury__string__format__TypeInfo_9_9 = (MR_Word) &mercury__string__format_scalar_common_1[1];
#line 4872 "string.format.c"
              {
#line 4874 "string.format.c"
                return mercury__string__format__succeeded = mercury__builtin__unify_2_p_0(mercury__string__format__TypeInfo_9_9, ((MR_Box) (mercury__string__format__V_5_5)), ((MR_Box) (mercury__string__format__V_6_6)));
              }
#line 367 "string.format.m"
            }
#line 367 "string.format.m"
        }
#line 367 "string.format.m"
    return mercury__string__format__succeeded;
#line 367 "string.format.m"
  }
#line 367 "string.format.m"
}

#line 102 "string.format.m"
void MR_CALL 
mercury__string__format____Compare____format_str_spec_0_0(
#line 102 "string.format.m"
  MR_Word * mercury__string__format__HeadVar__1_1,
#line 102 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2,
#line 102 "string.format.m"
  MR_Word mercury__string__format__HeadVar__3_3)
#line 102 "string.format.m"
{
#line 102 "string.format.m"
  {
#line 102 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 102 "string.format.m"
    MR_Integer mercury__string__format__CastX_272 = (MR_Integer) mercury__string__format__HeadVar__2_2;
#line 102 "string.format.m"
    MR_Integer mercury__string__format__CastY_273 = (MR_Integer) mercury__string__format__HeadVar__3_3;

#line 102 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__CastX_272 == mercury__string__format__CastY_273);
#line 102 "string.format.m"
    if (mercury__string__format__succeeded)
#line 4912 "string.format.c"
      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 102 "string.format.m"
    else
#line 102 "string.format.m"
      if ((mercury__string__format__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 102 "string.format.m"
        if ((mercury__string__format__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 102 "string.format.m"
          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 102 "string.format.m"
        else
#line 102 "string.format.m"
          if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4926 "string.format.c"
            *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "string.format.m"
          else
#line 102 "string.format.m"
            if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4932 "string.format.c"
              *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "string.format.m"
            else
#line 102 "string.format.m"
              if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4938 "string.format.c"
                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "string.format.m"
              else
#line 102 "string.format.m"
                if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4944 "string.format.c"
                  *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "string.format.m"
                else
#line 4948 "string.format.c"
                  *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "string.format.m"
      else
#line 102 "string.format.m"
        if (((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 102 "string.format.m"
          {
#line 102 "string.format.m"
            MR_Integer mercury__string__format__V_303_303 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__2_2, (MR_Integer) 3)));
#line 102 "string.format.m"
            MR_Word mercury__string__format__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__2_2, (MR_Integer) 2)));
#line 102 "string.format.m"
            MR_Word mercury__string__format__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));
#line 102 "string.format.m"
            MR_Word mercury__string__format__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)));

#line 102 "string.format.m"
            if ((mercury__string__format__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4967 "string.format.c"
              *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "string.format.m"
            else
#line 102 "string.format.m"
              if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 102 "string.format.m"
                {
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)));
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__3_3, (MR_Integer) 1)));
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__3_3, (MR_Integer) 2)));
#line 102 "string.format.m"
                  MR_Integer mercury__string__format__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__3_3, (MR_Integer) 3)));
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_37_37;

#line 102 "string.format.m"
                  {
#line 102 "string.format.m"
                    mercury__string__format____Compare____flags_0_0(&mercury__string__format__V_37_37, mercury__string__format__V_306_306, mercury__string__format__V_33_33);
                  }
#line 4991 "string.format.c"
                  mercury__string__format__succeeded = (mercury__string__format__V_37_37 == (MR_Integer) 0);
#line 102 "string.format.m"
                  mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 102 "string.format.m"
                  if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                    *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_37_37;
#line 102 "string.format.m"
                  else
#line 102 "string.format.m"
                    {
#line 102 "string.format.m"
                      MR_Word mercury__string__format__V_38_38;
#line 102 "string.format.m"
                      MR_Word mercury__string__format__TypeInfo_292_292 = (MR_Word) &mercury__string__format_scalar_common_1[0];

#line 102 "string.format.m"
                      {
#line 102 "string.format.m"
                        mercury__builtin__compare_3_p_0(mercury__string__format__TypeInfo_292_292, &mercury__string__format__V_38_38, ((MR_Box) (mercury__string__format__V_305_305)), ((MR_Box) (mercury__string__format__V_34_34)));
                      }
#line 5013 "string.format.c"
                      mercury__string__format__succeeded = (mercury__string__format__V_38_38 == (MR_Integer) 0);
#line 102 "string.format.m"
                      mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 102 "string.format.m"
                      if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                        *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_38_38;
#line 102 "string.format.m"
                      else
#line 102 "string.format.m"
                        {
#line 102 "string.format.m"
                          MR_Word mercury__string__format__V_39_39;
#line 102 "string.format.m"
                          MR_Word mercury__string__format__TypeInfo_293_293 = (MR_Word) &mercury__string__format_scalar_common_1[0];

#line 102 "string.format.m"
                          {
#line 102 "string.format.m"
                            mercury__builtin__compare_3_p_0(mercury__string__format__TypeInfo_293_293, &mercury__string__format__V_39_39, ((MR_Box) (mercury__string__format__V_304_304)), ((MR_Box) (mercury__string__format__V_35_35)));
                          }
#line 5035 "string.format.c"
                          mercury__string__format__succeeded = (mercury__string__format__V_39_39 == (MR_Integer) 0);
#line 102 "string.format.m"
                          mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 102 "string.format.m"
                          if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                            *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_39_39;
#line 102 "string.format.m"
                          else
#line 69 "private_builtin.opt"
                            {
#line 66 "private_builtin.opt"
                              mercury__string__format__succeeded = (mercury__string__format__V_303_303 < mercury__string__format__V_36_36);
#line 69 "private_builtin.opt"
                              if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                              else
#line 74 "private_builtin.opt"
                                {
#line 71 "private_builtin.opt"
                                  mercury__string__format__succeeded = (mercury__string__format__V_303_303 == mercury__string__format__V_36_36);
#line 74 "private_builtin.opt"
                                  if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                  else
#line 75 "private_builtin.opt"
                                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                }
#line 69 "private_builtin.opt"
                            }
#line 102 "string.format.m"
                        }
#line 102 "string.format.m"
                    }
#line 102 "string.format.m"
                }
#line 102 "string.format.m"
              else
#line 102 "string.format.m"
                if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5081 "string.format.c"
                  *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "string.format.m"
                else
#line 102 "string.format.m"
                  if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5087 "string.format.c"
                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "string.format.m"
                  else
#line 102 "string.format.m"
                    if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5093 "string.format.c"
                      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "string.format.m"
                    else
#line 5097 "string.format.c"
                      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "string.format.m"
          }
#line 102 "string.format.m"
        else
#line 102 "string.format.m"
          if (((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 102 "string.format.m"
            {
#line 102 "string.format.m"
              MR_Integer mercury__string__format__V_311_311 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__2_2, (MR_Integer) 4)));
#line 102 "string.format.m"
              MR_Word mercury__string__format__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__2_2, (MR_Integer) 3)));
#line 102 "string.format.m"
              MR_Word mercury__string__format__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__2_2, (MR_Integer) 2)));
#line 102 "string.format.m"
              MR_Word mercury__string__format__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));
#line 102 "string.format.m"
              MR_Word mercury__string__format__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)));

#line 102 "string.format.m"
              if ((mercury__string__format__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5120 "string.format.c"
                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "string.format.m"
              else
#line 102 "string.format.m"
                if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5126 "string.format.c"
                  *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "string.format.m"
                else
#line 102 "string.format.m"
                  if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 102 "string.format.m"
                    {
#line 102 "string.format.m"
                      MR_Word mercury__string__format__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)));
#line 102 "string.format.m"
                      MR_Word mercury__string__format__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__3_3, (MR_Integer) 1)));
#line 102 "string.format.m"
                      MR_Word mercury__string__format__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__3_3, (MR_Integer) 2)));
#line 102 "string.format.m"
                      MR_Word mercury__string__format__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__3_3, (MR_Integer) 3)));
#line 102 "string.format.m"
                      MR_Integer mercury__string__format__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__3_3, (MR_Integer) 4)));
#line 102 "string.format.m"
                      MR_Word mercury__string__format__V_97_97;

#line 102 "string.format.m"
                      {
#line 102 "string.format.m"
                        mercury__string__format____Compare____flags_0_0(&mercury__string__format__V_97_97, mercury__string__format__V_315_315, mercury__string__format__V_92_92);
                      }
#line 5152 "string.format.c"
                      mercury__string__format__succeeded = (mercury__string__format__V_97_97 == (MR_Integer) 0);
#line 102 "string.format.m"
                      mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 102 "string.format.m"
                      if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                        *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_97_97;
#line 102 "string.format.m"
                      else
#line 102 "string.format.m"
                        {
#line 102 "string.format.m"
                          MR_Word mercury__string__format__V_98_98;
#line 102 "string.format.m"
                          MR_Word mercury__string__format__TypeInfo_287_287 = (MR_Word) &mercury__string__format_scalar_common_1[0];

#line 102 "string.format.m"
                          {
#line 102 "string.format.m"
                            mercury__builtin__compare_3_p_0(mercury__string__format__TypeInfo_287_287, &mercury__string__format__V_98_98, ((MR_Box) (mercury__string__format__V_314_314)), ((MR_Box) (mercury__string__format__V_93_93)));
                          }
#line 5174 "string.format.c"
                          mercury__string__format__succeeded = (mercury__string__format__V_98_98 == (MR_Integer) 0);
#line 102 "string.format.m"
                          mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 102 "string.format.m"
                          if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                            *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_98_98;
#line 102 "string.format.m"
                          else
#line 102 "string.format.m"
                            {
#line 102 "string.format.m"
                              MR_Word mercury__string__format__V_99_99;
#line 102 "string.format.m"
                              MR_Word mercury__string__format__TypeInfo_288_288 = (MR_Word) &mercury__string__format_scalar_common_1[0];

#line 102 "string.format.m"
                              {
#line 102 "string.format.m"
                                mercury__builtin__compare_3_p_0(mercury__string__format__TypeInfo_288_288, &mercury__string__format__V_99_99, ((MR_Box) (mercury__string__format__V_313_313)), ((MR_Box) (mercury__string__format__V_94_94)));
                              }
#line 5196 "string.format.c"
                              mercury__string__format__succeeded = (mercury__string__format__V_99_99 == (MR_Integer) 0);
#line 102 "string.format.m"
                              mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 102 "string.format.m"
                              if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                                *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_99_99;
#line 102 "string.format.m"
                              else
#line 102 "string.format.m"
                                {
#line 102 "string.format.m"
                                  MR_Word mercury__string__format__V_100_100;
#line 102 "string.format.m"
                                  MR_Integer mercury__string__format__V_318_318 = (MR_Integer) mercury__string__format__V_312_312;
#line 102 "string.format.m"
                                  MR_Integer mercury__string__format__V_319_319 = (MR_Integer) mercury__string__format__V_95_95;

#line 66 "private_builtin.opt"
                                  mercury__string__format__succeeded = (mercury__string__format__V_318_318 < mercury__string__format__V_319_319);
#line 69 "private_builtin.opt"
                                  if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                                    mercury__string__format__V_100_100 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                  else
#line 74 "private_builtin.opt"
                                    {
#line 71 "private_builtin.opt"
                                      mercury__string__format__succeeded = (mercury__string__format__V_318_318 == mercury__string__format__V_319_319);
#line 74 "private_builtin.opt"
                                      if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                                        mercury__string__format__V_100_100 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                      else
#line 75 "private_builtin.opt"
                                        mercury__string__format__V_100_100 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                    }
#line 5237 "string.format.c"
                                  mercury__string__format__succeeded = (mercury__string__format__V_100_100 == (MR_Integer) 0);
#line 102 "string.format.m"
                                  mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 102 "string.format.m"
                                  if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                                    *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_100_100;
#line 102 "string.format.m"
                                  else
#line 69 "private_builtin.opt"
                                    {
#line 66 "private_builtin.opt"
                                      mercury__string__format__succeeded = (mercury__string__format__V_311_311 < mercury__string__format__V_96_96);
#line 69 "private_builtin.opt"
                                      if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                                        *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                      else
#line 74 "private_builtin.opt"
                                        {
#line 71 "private_builtin.opt"
                                          mercury__string__format__succeeded = (mercury__string__format__V_311_311 == mercury__string__format__V_96_96);
#line 74 "private_builtin.opt"
                                          if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                                            *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                          else
#line 75 "private_builtin.opt"
                                            *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                        }
#line 69 "private_builtin.opt"
                                    }
#line 102 "string.format.m"
                                }
#line 102 "string.format.m"
                            }
#line 102 "string.format.m"
                        }
#line 102 "string.format.m"
                    }
#line 102 "string.format.m"
                  else
#line 102 "string.format.m"
                    if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5285 "string.format.c"
                      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "string.format.m"
                    else
#line 102 "string.format.m"
                      if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5291 "string.format.c"
                        *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "string.format.m"
                      else
#line 5295 "string.format.c"
                        *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "string.format.m"
            }
#line 102 "string.format.m"
          else
#line 102 "string.format.m"
            if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 102 "string.format.m"
              {
#line 102 "string.format.m"
                MR_Char mercury__string__format__V_295_295 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 3)));
#line 102 "string.format.m"
                MR_Word mercury__string__format__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 2)));
#line 102 "string.format.m"
                MR_Word mercury__string__format__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));

#line 102 "string.format.m"
                if ((mercury__string__format__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5314 "string.format.c"
                  *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "string.format.m"
                else
#line 102 "string.format.m"
                  if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5320 "string.format.c"
                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "string.format.m"
                  else
#line 102 "string.format.m"
                    if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5326 "string.format.c"
                      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "string.format.m"
                    else
#line 102 "string.format.m"
                      if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 102 "string.format.m"
                        {
#line 102 "string.format.m"
                          MR_Word mercury__string__format__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 1)));
#line 102 "string.format.m"
                          MR_Word mercury__string__format__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 2)));
#line 102 "string.format.m"
                          MR_Char mercury__string__format__V_214_214 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 3)));
#line 102 "string.format.m"
                          MR_Word mercury__string__format__V_215_215;

#line 102 "string.format.m"
                          {
#line 102 "string.format.m"
                            mercury__string__format____Compare____flags_0_0(&mercury__string__format__V_215_215, mercury__string__format__V_297_297, mercury__string__format__V_212_212);
                          }
#line 5348 "string.format.c"
                          mercury__string__format__succeeded = (mercury__string__format__V_215_215 == (MR_Integer) 0);
#line 102 "string.format.m"
                          mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 102 "string.format.m"
                          if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                            *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_215_215;
#line 102 "string.format.m"
                          else
#line 102 "string.format.m"
                            {
#line 102 "string.format.m"
                              MR_Word mercury__string__format__V_216_216;
#line 102 "string.format.m"
                              MR_Word mercury__string__format__TypeInfo_279_279 = (MR_Word) &mercury__string__format_scalar_common_1[0];

#line 102 "string.format.m"
                              {
#line 102 "string.format.m"
                                mercury__builtin__compare_3_p_0(mercury__string__format__TypeInfo_279_279, &mercury__string__format__V_216_216, ((MR_Box) (mercury__string__format__V_296_296)), ((MR_Box) (mercury__string__format__V_213_213)));
                              }
#line 5370 "string.format.c"
                              mercury__string__format__succeeded = (mercury__string__format__V_216_216 == (MR_Integer) 0);
#line 102 "string.format.m"
                              mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 102 "string.format.m"
                              if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                                *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_216_216;
#line 102 "string.format.m"
                              else
#line 102 "string.format.m"
                                {
#line 102 "string.format.m"
                                  MR_Integer mercury__string__format__XI_7_323;
#line 102 "string.format.m"
                                  MR_Integer mercury__string__format__YI_8_324;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__format____Compare____format_str_spec_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__format__V_295_295 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 5400 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__XI_7_323  = Int;
#line 66 "char.opt"
}
#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__format____Compare____format_str_spec_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__format__V_214_214 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 5420 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__YI_8_324  = Int;
#line 66 "char.opt"
}
#line 84 "private_builtin.opt"
                                  mercury__string__format__succeeded = (mercury__string__format__XI_7_323 < mercury__string__format__YI_8_324);
#line 87 "private_builtin.opt"
                                  if (mercury__string__format__succeeded)
#line 86 "private_builtin.opt"
                                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 87 "private_builtin.opt"
                                  else
#line 92 "private_builtin.opt"
                                    {
#line 89 "private_builtin.opt"
                                      mercury__string__format__succeeded = (mercury__string__format__XI_7_323 == mercury__string__format__YI_8_324);
#line 92 "private_builtin.opt"
                                      if (mercury__string__format__succeeded)
#line 91 "private_builtin.opt"
                                        *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 92 "private_builtin.opt"
                                      else
#line 93 "private_builtin.opt"
                                        *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 92 "private_builtin.opt"
                                    }
#line 102 "string.format.m"
                                }
#line 102 "string.format.m"
                            }
#line 102 "string.format.m"
                        }
#line 102 "string.format.m"
                      else
#line 102 "string.format.m"
                        if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5459 "string.format.c"
                          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "string.format.m"
                        else
#line 5463 "string.format.c"
                          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "string.format.m"
              }
#line 102 "string.format.m"
            else
#line 102 "string.format.m"
              if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 102 "string.format.m"
                {
#line 102 "string.format.m"
                  MR_Float mercury__string__format__V_298_298 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 5)));
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 4)));
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 3)));
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 2)));
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));

#line 102 "string.format.m"
                  if ((mercury__string__format__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5486 "string.format.c"
                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "string.format.m"
                  else
#line 102 "string.format.m"
                    if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5492 "string.format.c"
                      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "string.format.m"
                    else
#line 102 "string.format.m"
                      if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5498 "string.format.c"
                        *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "string.format.m"
                      else
#line 102 "string.format.m"
                        if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5504 "string.format.c"
                          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "string.format.m"
                        else
#line 102 "string.format.m"
                          if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 102 "string.format.m"
                            {
#line 102 "string.format.m"
                              MR_Word mercury__string__format__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 1)));
#line 102 "string.format.m"
                              MR_Word mercury__string__format__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 2)));
#line 102 "string.format.m"
                              MR_Word mercury__string__format__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 3)));
#line 102 "string.format.m"
                              MR_Word mercury__string__format__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 4)));
#line 102 "string.format.m"
                              MR_Float mercury__string__format__V_161_161 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 5)));
#line 102 "string.format.m"
                              MR_Word mercury__string__format__V_162_162;

#line 102 "string.format.m"
                              {
#line 102 "string.format.m"
                                mercury__string__format____Compare____flags_0_0(&mercury__string__format__V_162_162, mercury__string__format__V_302_302, mercury__string__format__V_157_157);
                              }
#line 5530 "string.format.c"
                              mercury__string__format__succeeded = (mercury__string__format__V_162_162 == (MR_Integer) 0);
#line 102 "string.format.m"
                              mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 102 "string.format.m"
                              if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                                *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_162_162;
#line 102 "string.format.m"
                              else
#line 102 "string.format.m"
                                {
#line 102 "string.format.m"
                                  MR_Word mercury__string__format__V_163_163;
#line 102 "string.format.m"
                                  MR_Word mercury__string__format__TypeInfo_282_282 = (MR_Word) &mercury__string__format_scalar_common_1[0];

#line 102 "string.format.m"
                                  {
#line 102 "string.format.m"
                                    mercury__builtin__compare_3_p_0(mercury__string__format__TypeInfo_282_282, &mercury__string__format__V_163_163, ((MR_Box) (mercury__string__format__V_301_301)), ((MR_Box) (mercury__string__format__V_158_158)));
                                  }
#line 5552 "string.format.c"
                                  mercury__string__format__succeeded = (mercury__string__format__V_163_163 == (MR_Integer) 0);
#line 102 "string.format.m"
                                  mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 102 "string.format.m"
                                  if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                                    *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_163_163;
#line 102 "string.format.m"
                                  else
#line 102 "string.format.m"
                                    {
#line 102 "string.format.m"
                                      MR_Word mercury__string__format__V_164_164;
#line 102 "string.format.m"
                                      MR_Word mercury__string__format__TypeInfo_283_283 = (MR_Word) &mercury__string__format_scalar_common_1[0];

#line 102 "string.format.m"
                                      {
#line 102 "string.format.m"
                                        mercury__builtin__compare_3_p_0(mercury__string__format__TypeInfo_283_283, &mercury__string__format__V_164_164, ((MR_Box) (mercury__string__format__V_300_300)), ((MR_Box) (mercury__string__format__V_159_159)));
                                      }
#line 5574 "string.format.c"
                                      mercury__string__format__succeeded = (mercury__string__format__V_164_164 == (MR_Integer) 0);
#line 102 "string.format.m"
                                      mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 102 "string.format.m"
                                      if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                                        *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_164_164;
#line 102 "string.format.m"
                                      else
#line 102 "string.format.m"
                                        {
#line 102 "string.format.m"
                                          MR_Word mercury__string__format__V_165_165;
#line 102 "string.format.m"
                                          MR_Integer mercury__string__format__V_316_316 = (MR_Integer) mercury__string__format__V_299_299;
#line 102 "string.format.m"
                                          MR_Integer mercury__string__format__V_317_317 = (MR_Integer) mercury__string__format__V_160_160;

#line 66 "private_builtin.opt"
                                          mercury__string__format__succeeded = (mercury__string__format__V_316_316 < mercury__string__format__V_317_317);
#line 69 "private_builtin.opt"
                                          if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                                            mercury__string__format__V_165_165 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                          else
#line 74 "private_builtin.opt"
                                            {
#line 71 "private_builtin.opt"
                                              mercury__string__format__succeeded = (mercury__string__format__V_316_316 == mercury__string__format__V_317_317);
#line 74 "private_builtin.opt"
                                              if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                                                mercury__string__format__V_165_165 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                              else
#line 75 "private_builtin.opt"
                                                mercury__string__format__V_165_165 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                            }
#line 5615 "string.format.c"
                                          mercury__string__format__succeeded = (mercury__string__format__V_165_165 == (MR_Integer) 0);
#line 102 "string.format.m"
                                          mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 102 "string.format.m"
                                          if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                                            *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_165_165;
#line 102 "string.format.m"
                                          else
#line 121 "private_builtin.opt"
                                            {
#line 118 "private_builtin.opt"
                                              mercury__string__format__succeeded = (mercury__string__format__V_298_298 < mercury__string__format__V_161_161);
#line 121 "private_builtin.opt"
                                              if (mercury__string__format__succeeded)
#line 120 "private_builtin.opt"
                                                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
                                              else
#line 126 "private_builtin.opt"
                                                {
#line 123 "private_builtin.opt"
                                                  mercury__string__format__succeeded = (mercury__string__format__V_298_298 > mercury__string__format__V_161_161);
#line 126 "private_builtin.opt"
                                                  if (mercury__string__format__succeeded)
#line 125 "private_builtin.opt"
                                                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
                                                  else
#line 127 "private_builtin.opt"
                                                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
                                                }
#line 121 "private_builtin.opt"
                                            }
#line 102 "string.format.m"
                                        }
#line 102 "string.format.m"
                                    }
#line 102 "string.format.m"
                                }
#line 102 "string.format.m"
                            }
#line 102 "string.format.m"
                          else
#line 5661 "string.format.c"
                            *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "string.format.m"
                }
#line 102 "string.format.m"
              else
#line 102 "string.format.m"
                {
#line 102 "string.format.m"
                  MR_String mercury__string__format__V_307_307 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 4)));
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 3)));
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 2)));
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));

#line 102 "string.format.m"
                  if ((mercury__string__format__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5680 "string.format.c"
                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "string.format.m"
                  else
#line 102 "string.format.m"
                    if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5686 "string.format.c"
                      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "string.format.m"
                    else
#line 102 "string.format.m"
                      if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5692 "string.format.c"
                        *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "string.format.m"
                      else
#line 102 "string.format.m"
                        if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5698 "string.format.c"
                          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "string.format.m"
                        else
#line 102 "string.format.m"
                          if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5704 "string.format.c"
                            *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "string.format.m"
                          else
#line 102 "string.format.m"
                            {
#line 102 "string.format.m"
                              MR_Word mercury__string__format__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 1)));
#line 102 "string.format.m"
                              MR_Word mercury__string__format__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 2)));
#line 102 "string.format.m"
                              MR_Word mercury__string__format__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 3)));
#line 102 "string.format.m"
                              MR_String mercury__string__format__V_268_268 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 4)));
#line 102 "string.format.m"
                              MR_Word mercury__string__format__V_269_269;

#line 102 "string.format.m"
                              {
#line 102 "string.format.m"
                                mercury__string__format____Compare____flags_0_0(&mercury__string__format__V_269_269, mercury__string__format__V_310_310, mercury__string__format__V_265_265);
                              }
#line 5726 "string.format.c"
                              mercury__string__format__succeeded = (mercury__string__format__V_269_269 == (MR_Integer) 0);
#line 102 "string.format.m"
                              mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 102 "string.format.m"
                              if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                                *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_269_269;
#line 102 "string.format.m"
                              else
#line 102 "string.format.m"
                                {
#line 102 "string.format.m"
                                  MR_Word mercury__string__format__V_270_270;
#line 102 "string.format.m"
                                  MR_Word mercury__string__format__TypeInfo_275_275 = (MR_Word) &mercury__string__format_scalar_common_1[0];

#line 102 "string.format.m"
                                  {
#line 102 "string.format.m"
                                    mercury__builtin__compare_3_p_0(mercury__string__format__TypeInfo_275_275, &mercury__string__format__V_270_270, ((MR_Box) (mercury__string__format__V_309_309)), ((MR_Box) (mercury__string__format__V_266_266)));
                                  }
#line 5748 "string.format.c"
                                  mercury__string__format__succeeded = (mercury__string__format__V_270_270 == (MR_Integer) 0);
#line 102 "string.format.m"
                                  mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 102 "string.format.m"
                                  if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                                    *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_270_270;
#line 102 "string.format.m"
                                  else
#line 102 "string.format.m"
                                    {
#line 102 "string.format.m"
                                      MR_Word mercury__string__format__V_271_271;
#line 102 "string.format.m"
                                      MR_Word mercury__string__format__TypeInfo_276_276 = (MR_Word) &mercury__string__format_scalar_common_1[0];

#line 102 "string.format.m"
                                      {
#line 102 "string.format.m"
                                        mercury__builtin__compare_3_p_0(mercury__string__format__TypeInfo_276_276, &mercury__string__format__V_271_271, ((MR_Box) (mercury__string__format__V_308_308)), ((MR_Box) (mercury__string__format__V_267_267)));
                                      }
#line 5770 "string.format.c"
                                      mercury__string__format__succeeded = (mercury__string__format__V_271_271 == (MR_Integer) 0);
#line 102 "string.format.m"
                                      mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 102 "string.format.m"
                                      if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                                        *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_271_271;
#line 102 "string.format.m"
                                      else
#line 102 "string.format.m"
                                        {
#line 102 "string.format.m"
                                          MR_Integer mercury__string__format__Res_7_337;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string__format____Compare____format_str_spec_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__format__V_307_307 ;
	S2 =  mercury__string__format__V_268_268 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 5800 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Res_7_337  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                                          mercury__string__format__succeeded = (mercury__string__format__Res_7_337 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                                          if (mercury__string__format__succeeded)
#line 104 "private_builtin.opt"
                                            *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                                          else
#line 110 "private_builtin.opt"
                                            {
#line 107 "private_builtin.opt"
                                              mercury__string__format__succeeded = (mercury__string__format__Res_7_337 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                                              if (mercury__string__format__succeeded)
#line 109 "private_builtin.opt"
                                                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                                              else
#line 111 "private_builtin.opt"
                                                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                                            }
#line 102 "string.format.m"
                                        }
#line 102 "string.format.m"
                                    }
#line 102 "string.format.m"
                                }
#line 102 "string.format.m"
                            }
#line 102 "string.format.m"
                }
#line 102 "string.format.m"
  }
#line 102 "string.format.m"
}

#line 102 "string.format.m"
MR_bool MR_CALL 
mercury__string__format____Unify____format_str_spec_0_0(
#line 102 "string.format.m"
  MR_Word mercury__string__format__HeadVar__1_1,
#line 102 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2)
#line 102 "string.format.m"
{
#line 102 "string.format.m"
  {
#line 102 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 102 "string.format.m"
    MR_Integer mercury__string__format__CastX_47 = (MR_Integer) mercury__string__format__HeadVar__1_1;
#line 102 "string.format.m"
    MR_Integer mercury__string__format__CastY_48 = (MR_Integer) mercury__string__format__HeadVar__2_2;

#line 102 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__CastX_47 == mercury__string__format__CastY_48);
#line 102 "string.format.m"
    if (mercury__string__format__succeeded)
#line 102 "string.format.m"
      mercury__string__format__succeeded = MR_TRUE;
#line 102 "string.format.m"
    else
#line 102 "string.format.m"
      if ((mercury__string__format__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 102 "string.format.m"
        {
#line 102 "string.format.m"
          MR_Integer mercury__string__format__CastX_3 = (MR_Integer) mercury__string__format__HeadVar__1_1;
#line 102 "string.format.m"
          MR_Integer mercury__string__format__CastY_4 = (MR_Integer) mercury__string__format__HeadVar__2_2;

#line 102 "string.format.m"
          mercury__string__format__succeeded = (mercury__string__format__CastY_4 == mercury__string__format__CastX_3);
#line 102 "string.format.m"
        }
#line 102 "string.format.m"
      else
#line 102 "string.format.m"
        if (((MR_tag((MR_Word) mercury__string__format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 102 "string.format.m"
          {
#line 102 "string.format.m"
            MR_Word mercury__string__format__TypeInfo_52_52;
#line 102 "string.format.m"
            MR_Word mercury__string__format__TypeInfo_53_53;
#line 102 "string.format.m"
            MR_Word mercury__string__format__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)));
#line 102 "string.format.m"
            MR_Word mercury__string__format__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__1_1, (MR_Integer) 1)));
#line 102 "string.format.m"
            MR_Word mercury__string__format__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__1_1, (MR_Integer) 2)));
#line 102 "string.format.m"
            MR_Integer mercury__string__format__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__1_1, (MR_Integer) 3)));
#line 102 "string.format.m"
            MR_Word mercury__string__format__V_9_9;
#line 102 "string.format.m"
            MR_Word mercury__string__format__V_10_10;
#line 102 "string.format.m"
            MR_Word mercury__string__format__V_11_11;
#line 102 "string.format.m"
            MR_Integer mercury__string__format__V_12_12;

#line 102 "string.format.m"
            mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 102 "string.format.m"
            if (mercury__string__format__succeeded)
#line 102 "string.format.m"
              {
#line 102 "string.format.m"
                mercury__string__format__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)));
#line 102 "string.format.m"
                mercury__string__format__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));
#line 102 "string.format.m"
                mercury__string__format__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__2_2, (MR_Integer) 2)));
#line 102 "string.format.m"
                mercury__string__format__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__2_2, (MR_Integer) 3)));
#line 5924 "string.format.c"
                {
#line 5926 "string.format.c"
                  mercury__string__format__succeeded = mercury__string__format____Unify____flags_0_0(mercury__string__format__V_5_5, mercury__string__format__V_9_9);
                }
#line 102 "string.format.m"
                if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                  {
#line 5933 "string.format.c"
                    mercury__string__format__TypeInfo_52_52 = (MR_Word) &mercury__string__format_scalar_common_1[0];
#line 5935 "string.format.c"
                    {
#line 5937 "string.format.c"
                      mercury__string__format__succeeded = mercury__builtin__unify_2_p_0(mercury__string__format__TypeInfo_52_52, ((MR_Box) (mercury__string__format__V_6_6)), ((MR_Box) (mercury__string__format__V_10_10)));
                    }
#line 102 "string.format.m"
                    if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                      {
#line 5944 "string.format.c"
                        mercury__string__format__TypeInfo_53_53 = (MR_Word) &mercury__string__format_scalar_common_1[0];
#line 5946 "string.format.c"
                        {
#line 5948 "string.format.c"
                          mercury__string__format__succeeded = mercury__builtin__unify_2_p_0(mercury__string__format__TypeInfo_53_53, ((MR_Box) (mercury__string__format__V_7_7)), ((MR_Box) (mercury__string__format__V_11_11)));
                        }
#line 102 "string.format.m"
                        if (mercury__string__format__succeeded)
#line 5953 "string.format.c"
                          mercury__string__format__succeeded = (mercury__string__format__V_8_8 == mercury__string__format__V_12_12);
#line 102 "string.format.m"
                      }
#line 102 "string.format.m"
                  }
#line 102 "string.format.m"
              }
#line 102 "string.format.m"
          }
#line 102 "string.format.m"
        else
#line 102 "string.format.m"
          if (((MR_tag((MR_Word) mercury__string__format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 102 "string.format.m"
            {
#line 102 "string.format.m"
              MR_Word mercury__string__format__TypeInfo_56_56;
#line 102 "string.format.m"
              MR_Word mercury__string__format__TypeInfo_57_57;
#line 102 "string.format.m"
              MR_Word mercury__string__format__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)));
#line 102 "string.format.m"
              MR_Word mercury__string__format__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__1_1, (MR_Integer) 1)));
#line 102 "string.format.m"
              MR_Word mercury__string__format__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__1_1, (MR_Integer) 2)));
#line 102 "string.format.m"
              MR_Word mercury__string__format__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__1_1, (MR_Integer) 3)));
#line 102 "string.format.m"
              MR_Integer mercury__string__format__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__1_1, (MR_Integer) 4)));
#line 102 "string.format.m"
              MR_Word mercury__string__format__V_18_18;
#line 102 "string.format.m"
              MR_Word mercury__string__format__V_19_19;
#line 102 "string.format.m"
              MR_Word mercury__string__format__V_20_20;
#line 102 "string.format.m"
              MR_Word mercury__string__format__V_21_21;
#line 102 "string.format.m"
              MR_Integer mercury__string__format__V_22_22;

#line 102 "string.format.m"
              mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 102 "string.format.m"
              if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                {
#line 102 "string.format.m"
                  mercury__string__format__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)));
#line 102 "string.format.m"
                  mercury__string__format__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));
#line 102 "string.format.m"
                  mercury__string__format__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__2_2, (MR_Integer) 2)));
#line 102 "string.format.m"
                  mercury__string__format__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__2_2, (MR_Integer) 3)));
#line 102 "string.format.m"
                  mercury__string__format__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__2_2, (MR_Integer) 4)));
#line 6010 "string.format.c"
                  {
#line 6012 "string.format.c"
                    mercury__string__format__succeeded = mercury__string__format____Unify____flags_0_0(mercury__string__format__V_13_13, mercury__string__format__V_18_18);
                  }
#line 102 "string.format.m"
                  if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                    {
#line 6019 "string.format.c"
                      mercury__string__format__TypeInfo_56_56 = (MR_Word) &mercury__string__format_scalar_common_1[0];
#line 6021 "string.format.c"
                      {
#line 6023 "string.format.c"
                        mercury__string__format__succeeded = mercury__builtin__unify_2_p_0(mercury__string__format__TypeInfo_56_56, ((MR_Box) (mercury__string__format__V_14_14)), ((MR_Box) (mercury__string__format__V_19_19)));
                      }
#line 102 "string.format.m"
                      if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                        {
#line 6030 "string.format.c"
                          mercury__string__format__TypeInfo_57_57 = (MR_Word) &mercury__string__format_scalar_common_1[0];
#line 6032 "string.format.c"
                          {
#line 6034 "string.format.c"
                            mercury__string__format__succeeded = mercury__builtin__unify_2_p_0(mercury__string__format__TypeInfo_57_57, ((MR_Box) (mercury__string__format__V_15_15)), ((MR_Box) (mercury__string__format__V_20_20)));
                          }
#line 102 "string.format.m"
                          if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                            {
#line 6041 "string.format.c"
                              mercury__string__format__succeeded = (mercury__string__format__V_16_16 == mercury__string__format__V_21_21);
#line 102 "string.format.m"
                              if (mercury__string__format__succeeded)
#line 6045 "string.format.c"
                                mercury__string__format__succeeded = (mercury__string__format__V_17_17 == mercury__string__format__V_22_22);
#line 102 "string.format.m"
                            }
#line 102 "string.format.m"
                        }
#line 102 "string.format.m"
                    }
#line 102 "string.format.m"
                }
#line 102 "string.format.m"
            }
#line 102 "string.format.m"
          else
#line 102 "string.format.m"
            if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 102 "string.format.m"
              {
#line 102 "string.format.m"
                MR_Word mercury__string__format__TypeInfo_49_49;
#line 102 "string.format.m"
                MR_Word mercury__string__format__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 1)));
#line 102 "string.format.m"
                MR_Word mercury__string__format__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 2)));
#line 102 "string.format.m"
                MR_Char mercury__string__format__V_35_35 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 3)));
#line 102 "string.format.m"
                MR_Word mercury__string__format__V_36_36;
#line 102 "string.format.m"
                MR_Word mercury__string__format__V_37_37;
#line 102 "string.format.m"
                MR_Char mercury__string__format__V_38_38;

#line 102 "string.format.m"
                mercury__string__format__succeeded = ((((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 102 "string.format.m"
                if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                  {
#line 102 "string.format.m"
                    mercury__string__format__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));
#line 102 "string.format.m"
                    mercury__string__format__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 2)));
#line 102 "string.format.m"
                    mercury__string__format__V_38_38 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 3)));
#line 6090 "string.format.c"
                    {
#line 6092 "string.format.c"
                      mercury__string__format__succeeded = mercury__string__format____Unify____flags_0_0(mercury__string__format__V_33_33, mercury__string__format__V_36_36);
                    }
#line 102 "string.format.m"
                    if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                      {
#line 6099 "string.format.c"
                        mercury__string__format__TypeInfo_49_49 = (MR_Word) &mercury__string__format_scalar_common_1[0];
#line 6101 "string.format.c"
                        {
#line 6103 "string.format.c"
                          mercury__string__format__succeeded = mercury__builtin__unify_2_p_0(mercury__string__format__TypeInfo_49_49, ((MR_Box) (mercury__string__format__V_34_34)), ((MR_Box) (mercury__string__format__V_37_37)));
                        }
#line 102 "string.format.m"
                        if (mercury__string__format__succeeded)
#line 6108 "string.format.c"
                          mercury__string__format__succeeded = (mercury__string__format__V_35_35 == mercury__string__format__V_38_38);
#line 102 "string.format.m"
                      }
#line 102 "string.format.m"
                  }
#line 102 "string.format.m"
              }
#line 102 "string.format.m"
            else
#line 102 "string.format.m"
              if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 102 "string.format.m"
                {
#line 102 "string.format.m"
                  MR_Word mercury__string__format__TypeInfo_50_50;
#line 102 "string.format.m"
                  MR_Word mercury__string__format__TypeInfo_51_51;
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 1)));
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 2)));
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 3)));
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 4)));
#line 102 "string.format.m"
                  MR_Float mercury__string__format__V_27_27 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 5)));
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_28_28;
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_29_29;
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_30_30;
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_31_31;
#line 102 "string.format.m"
                  MR_Float mercury__string__format__V_32_32;

#line 102 "string.format.m"
                  mercury__string__format__succeeded = ((((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 102 "string.format.m"
                  if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                    {
#line 102 "string.format.m"
                      mercury__string__format__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));
#line 102 "string.format.m"
                      mercury__string__format__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 2)));
#line 102 "string.format.m"
                      mercury__string__format__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 3)));
#line 102 "string.format.m"
                      mercury__string__format__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 4)));
#line 102 "string.format.m"
                      mercury__string__format__V_32_32 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 5)));
#line 6163 "string.format.c"
                      {
#line 6165 "string.format.c"
                        mercury__string__format__succeeded = mercury__string__format____Unify____flags_0_0(mercury__string__format__V_23_23, mercury__string__format__V_28_28);
                      }
#line 102 "string.format.m"
                      if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                        {
#line 6172 "string.format.c"
                          mercury__string__format__TypeInfo_50_50 = (MR_Word) &mercury__string__format_scalar_common_1[0];
#line 6174 "string.format.c"
                          {
#line 6176 "string.format.c"
                            mercury__string__format__succeeded = mercury__builtin__unify_2_p_0(mercury__string__format__TypeInfo_50_50, ((MR_Box) (mercury__string__format__V_24_24)), ((MR_Box) (mercury__string__format__V_29_29)));
                          }
#line 102 "string.format.m"
                          if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                            {
#line 6183 "string.format.c"
                              mercury__string__format__TypeInfo_51_51 = (MR_Word) &mercury__string__format_scalar_common_1[0];
#line 6185 "string.format.c"
                              {
#line 6187 "string.format.c"
                                mercury__string__format__succeeded = mercury__builtin__unify_2_p_0(mercury__string__format__TypeInfo_51_51, ((MR_Box) (mercury__string__format__V_25_25)), ((MR_Box) (mercury__string__format__V_30_30)));
                              }
#line 102 "string.format.m"
                              if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                                {
#line 6194 "string.format.c"
                                  mercury__string__format__succeeded = (mercury__string__format__V_26_26 == mercury__string__format__V_31_31);
#line 102 "string.format.m"
                                  if (mercury__string__format__succeeded)
#line 6198 "string.format.c"
                                    mercury__string__format__succeeded = (mercury__string__format__V_27_27 == mercury__string__format__V_32_32);
#line 102 "string.format.m"
                                }
#line 102 "string.format.m"
                            }
#line 102 "string.format.m"
                        }
#line 102 "string.format.m"
                    }
#line 102 "string.format.m"
                }
#line 102 "string.format.m"
              else
#line 102 "string.format.m"
                {
#line 102 "string.format.m"
                  MR_Word mercury__string__format__TypeInfo_54_54;
#line 102 "string.format.m"
                  MR_Word mercury__string__format__TypeInfo_55_55;
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 1)));
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 2)));
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 3)));
#line 102 "string.format.m"
                  MR_String mercury__string__format__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 4)));
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_43_43;
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_44_44;
#line 102 "string.format.m"
                  MR_Word mercury__string__format__V_45_45;
#line 102 "string.format.m"
                  MR_String mercury__string__format__V_46_46;

#line 102 "string.format.m"
                  mercury__string__format__succeeded = ((((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 102 "string.format.m"
                  if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                    {
#line 102 "string.format.m"
                      mercury__string__format__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));
#line 102 "string.format.m"
                      mercury__string__format__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 2)));
#line 102 "string.format.m"
                      mercury__string__format__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 3)));
#line 102 "string.format.m"
                      mercury__string__format__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 4)));
#line 6249 "string.format.c"
                      {
#line 6251 "string.format.c"
                        mercury__string__format__succeeded = mercury__string__format____Unify____flags_0_0(mercury__string__format__V_39_39, mercury__string__format__V_43_43);
                      }
#line 102 "string.format.m"
                      if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                        {
#line 6258 "string.format.c"
                          mercury__string__format__TypeInfo_54_54 = (MR_Word) &mercury__string__format_scalar_common_1[0];
#line 6260 "string.format.c"
                          {
#line 6262 "string.format.c"
                            mercury__string__format__succeeded = mercury__builtin__unify_2_p_0(mercury__string__format__TypeInfo_54_54, ((MR_Box) (mercury__string__format__V_40_40)), ((MR_Box) (mercury__string__format__V_44_44)));
                          }
#line 102 "string.format.m"
                          if (mercury__string__format__succeeded)
#line 102 "string.format.m"
                            {
#line 6269 "string.format.c"
                              mercury__string__format__TypeInfo_55_55 = (MR_Word) &mercury__string__format_scalar_common_1[0];
#line 6271 "string.format.c"
                              {
#line 6273 "string.format.c"
                                mercury__string__format__succeeded = mercury__builtin__unify_2_p_0(mercury__string__format__TypeInfo_55_55, ((MR_Box) (mercury__string__format__V_41_41)), ((MR_Box) (mercury__string__format__V_45_45)));
                              }
#line 102 "string.format.m"
                              if (mercury__string__format__succeeded)
#line 6278 "string.format.c"
                                mercury__string__format__succeeded = (strcmp(mercury__string__format__V_42_42, mercury__string__format__V_46_46) == 0);
#line 102 "string.format.m"
                            }
#line 102 "string.format.m"
                        }
#line 102 "string.format.m"
                    }
#line 102 "string.format.m"
                }
#line 102 "string.format.m"
    return mercury__string__format__succeeded;
#line 102 "string.format.m"
  }
#line 102 "string.format.m"
}

#line 120 "string.format.m"
void MR_CALL 
mercury__string__format____Compare____format_str_error_0_0(
#line 120 "string.format.m"
  MR_Word * mercury__string__format__HeadVar__1_1,
#line 120 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2,
#line 120 "string.format.m"
  MR_Word mercury__string__format__HeadVar__3_3)
#line 120 "string.format.m"
{
#line 120 "string.format.m"
  {
#line 120 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 120 "string.format.m"
    MR_Integer mercury__string__format__CastX_318 = (MR_Integer) mercury__string__format__HeadVar__2_2;
#line 120 "string.format.m"
    MR_Integer mercury__string__format__CastY_319 = (MR_Integer) mercury__string__format__HeadVar__3_3;

#line 120 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__CastX_318 == mercury__string__format__CastY_319);
#line 120 "string.format.m"
    if (mercury__string__format__succeeded)
#line 6319 "string.format.c"
      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 120 "string.format.m"
    else
#line 120 "string.format.m"
      if (((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 120 "string.format.m"
        {
#line 120 "string.format.m"
          MR_Integer mercury__string__format__V_343_343 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));
#line 120 "string.format.m"
          MR_Integer mercury__string__format__V_344_344 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)));

#line 120 "string.format.m"
          if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 120 "string.format.m"
            {
#line 120 "string.format.m"
              MR_Integer mercury__string__format__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)));
#line 120 "string.format.m"
              MR_Integer mercury__string__format__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__3_3, (MR_Integer) 1)));
#line 120 "string.format.m"
              MR_Word mercury__string__format__V_8_8;

#line 66 "private_builtin.opt"
              mercury__string__format__succeeded = (mercury__string__format__V_344_344 < mercury__string__format__V_6_6);
#line 69 "private_builtin.opt"
              if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                mercury__string__format__V_8_8 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
              else
#line 74 "private_builtin.opt"
                {
#line 71 "private_builtin.opt"
                  mercury__string__format__succeeded = (mercury__string__format__V_344_344 == mercury__string__format__V_6_6);
#line 74 "private_builtin.opt"
                  if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                    mercury__string__format__V_8_8 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                  else
#line 75 "private_builtin.opt"
                    mercury__string__format__V_8_8 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                }
#line 6365 "string.format.c"
              mercury__string__format__succeeded = (mercury__string__format__V_8_8 == (MR_Integer) 0);
#line 120 "string.format.m"
              mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 120 "string.format.m"
              if (mercury__string__format__succeeded)
#line 120 "string.format.m"
                *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_8_8;
#line 120 "string.format.m"
              else
#line 69 "private_builtin.opt"
                {
#line 66 "private_builtin.opt"
                  mercury__string__format__succeeded = (mercury__string__format__V_343_343 < mercury__string__format__V_7_7);
#line 69 "private_builtin.opt"
                  if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                  else
#line 74 "private_builtin.opt"
                    {
#line 71 "private_builtin.opt"
                      mercury__string__format__succeeded = (mercury__string__format__V_343_343 == mercury__string__format__V_7_7);
#line 74 "private_builtin.opt"
                      if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                        *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                      else
#line 75 "private_builtin.opt"
                        *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                    }
#line 69 "private_builtin.opt"
                }
#line 120 "string.format.m"
            }
#line 120 "string.format.m"
          else
#line 120 "string.format.m"
            if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6407 "string.format.c"
              *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
            else
#line 120 "string.format.m"
              if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6413 "string.format.c"
                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
              else
#line 120 "string.format.m"
                if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6419 "string.format.c"
                  *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                else
#line 120 "string.format.m"
                  if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6425 "string.format.c"
                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                  else
#line 120 "string.format.m"
                    if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6431 "string.format.c"
                      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                    else
#line 120 "string.format.m"
                      if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6437 "string.format.c"
                        *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                      else
#line 120 "string.format.m"
                        if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6443 "string.format.c"
                          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                        else
#line 6447 "string.format.c"
                          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
        }
#line 120 "string.format.m"
      else
#line 120 "string.format.m"
        if (((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 120 "string.format.m"
          {
#line 120 "string.format.m"
            MR_Char mercury__string__format__V_349_349 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));
#line 120 "string.format.m"
            MR_Integer mercury__string__format__V_350_350 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)));

#line 120 "string.format.m"
            if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6464 "string.format.c"
              *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
            else
#line 120 "string.format.m"
              if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 120 "string.format.m"
                {
#line 120 "string.format.m"
                  MR_Integer mercury__string__format__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)));
#line 120 "string.format.m"
                  MR_Char mercury__string__format__V_47_47 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__3_3, (MR_Integer) 1)));
#line 120 "string.format.m"
                  MR_Word mercury__string__format__V_48_48;

#line 66 "private_builtin.opt"
                  mercury__string__format__succeeded = (mercury__string__format__V_350_350 < mercury__string__format__V_46_46);
#line 69 "private_builtin.opt"
                  if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                    mercury__string__format__V_48_48 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                  else
#line 74 "private_builtin.opt"
                    {
#line 71 "private_builtin.opt"
                      mercury__string__format__succeeded = (mercury__string__format__V_350_350 == mercury__string__format__V_46_46);
#line 74 "private_builtin.opt"
                      if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                        mercury__string__format__V_48_48 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                      else
#line 75 "private_builtin.opt"
                        mercury__string__format__V_48_48 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                    }
#line 6501 "string.format.c"
                  mercury__string__format__succeeded = (mercury__string__format__V_48_48 == (MR_Integer) 0);
#line 120 "string.format.m"
                  mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 120 "string.format.m"
                  if (mercury__string__format__succeeded)
#line 120 "string.format.m"
                    *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_48_48;
#line 120 "string.format.m"
                  else
#line 120 "string.format.m"
                    {
#line 120 "string.format.m"
                      MR_Integer mercury__string__format__XI_7_404;
#line 120 "string.format.m"
                      MR_Integer mercury__string__format__YI_8_405;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__format____Compare____format_str_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__format__V_349_349 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 6531 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__XI_7_404  = Int;
#line 66 "char.opt"
}
#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__format____Compare____format_str_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__format__V_47_47 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 6551 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__YI_8_405  = Int;
#line 66 "char.opt"
}
#line 84 "private_builtin.opt"
                      mercury__string__format__succeeded = (mercury__string__format__XI_7_404 < mercury__string__format__YI_8_405);
#line 87 "private_builtin.opt"
                      if (mercury__string__format__succeeded)
#line 86 "private_builtin.opt"
                        *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 87 "private_builtin.opt"
                      else
#line 92 "private_builtin.opt"
                        {
#line 89 "private_builtin.opt"
                          mercury__string__format__succeeded = (mercury__string__format__XI_7_404 == mercury__string__format__YI_8_405);
#line 92 "private_builtin.opt"
                          if (mercury__string__format__succeeded)
#line 91 "private_builtin.opt"
                            *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 92 "private_builtin.opt"
                          else
#line 93 "private_builtin.opt"
                            *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 92 "private_builtin.opt"
                        }
#line 120 "string.format.m"
                    }
#line 120 "string.format.m"
                }
#line 120 "string.format.m"
              else
#line 120 "string.format.m"
                if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6588 "string.format.c"
                  *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                else
#line 120 "string.format.m"
                  if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6594 "string.format.c"
                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                  else
#line 120 "string.format.m"
                    if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6600 "string.format.c"
                      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                    else
#line 120 "string.format.m"
                      if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6606 "string.format.c"
                        *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                      else
#line 120 "string.format.m"
                        if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6612 "string.format.c"
                          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                        else
#line 120 "string.format.m"
                          if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6618 "string.format.c"
                            *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                          else
#line 6622 "string.format.c"
                            *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
          }
#line 120 "string.format.m"
        else
#line 120 "string.format.m"
          if (((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 120 "string.format.m"
            {
#line 120 "string.format.m"
              MR_Word mercury__string__format__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__2_2, (MR_Integer) 2)));
#line 120 "string.format.m"
              MR_Char mercury__string__format__V_352_352 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));
#line 120 "string.format.m"
              MR_Integer mercury__string__format__V_353_353 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)));

#line 120 "string.format.m"
              if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6641 "string.format.c"
                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
              else
#line 120 "string.format.m"
                if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6647 "string.format.c"
                  *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                else
#line 120 "string.format.m"
                  if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 120 "string.format.m"
                    {
#line 120 "string.format.m"
                      MR_Integer mercury__string__format__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)));
#line 120 "string.format.m"
                      MR_Char mercury__string__format__V_90_90 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__3_3, (MR_Integer) 1)));
#line 120 "string.format.m"
                      MR_Word mercury__string__format__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__3_3, (MR_Integer) 2)));
#line 120 "string.format.m"
                      MR_Word mercury__string__format__V_92_92;

#line 66 "private_builtin.opt"
                      mercury__string__format__succeeded = (mercury__string__format__V_353_353 < mercury__string__format__V_89_89);
#line 69 "private_builtin.opt"
                      if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                        mercury__string__format__V_92_92 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                      else
#line 74 "private_builtin.opt"
                        {
#line 71 "private_builtin.opt"
                          mercury__string__format__succeeded = (mercury__string__format__V_353_353 == mercury__string__format__V_89_89);
#line 74 "private_builtin.opt"
                          if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                            mercury__string__format__V_92_92 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                          else
#line 75 "private_builtin.opt"
                            mercury__string__format__V_92_92 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                        }
#line 6686 "string.format.c"
                      mercury__string__format__succeeded = (mercury__string__format__V_92_92 == (MR_Integer) 0);
#line 120 "string.format.m"
                      mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 120 "string.format.m"
                      if (mercury__string__format__succeeded)
#line 120 "string.format.m"
                        *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_92_92;
#line 120 "string.format.m"
                      else
#line 120 "string.format.m"
                        {
#line 120 "string.format.m"
                          MR_Word mercury__string__format__V_93_93;
#line 120 "string.format.m"
                          MR_Integer mercury__string__format__XI_7_412;
#line 120 "string.format.m"
                          MR_Integer mercury__string__format__YI_8_413;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__format____Compare____format_str_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__format__V_352_352 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 6718 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__XI_7_412  = Int;
#line 66 "char.opt"
}
#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__format____Compare____format_str_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__format__V_90_90 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 6738 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__YI_8_413  = Int;
#line 66 "char.opt"
}
#line 84 "private_builtin.opt"
                          mercury__string__format__succeeded = (mercury__string__format__XI_7_412 < mercury__string__format__YI_8_413);
#line 87 "private_builtin.opt"
                          if (mercury__string__format__succeeded)
#line 86 "private_builtin.opt"
                            mercury__string__format__V_93_93 = (MR_Integer) 1;
#line 87 "private_builtin.opt"
                          else
#line 92 "private_builtin.opt"
                            {
#line 89 "private_builtin.opt"
                              mercury__string__format__succeeded = (mercury__string__format__XI_7_412 == mercury__string__format__YI_8_413);
#line 92 "private_builtin.opt"
                              if (mercury__string__format__succeeded)
#line 91 "private_builtin.opt"
                                mercury__string__format__V_93_93 = (MR_Integer) 0;
#line 92 "private_builtin.opt"
                              else
#line 93 "private_builtin.opt"
                                mercury__string__format__V_93_93 = (MR_Integer) 2;
#line 92 "private_builtin.opt"
                            }
#line 6767 "string.format.c"
                          mercury__string__format__succeeded = (mercury__string__format__V_93_93 == (MR_Integer) 0);
#line 120 "string.format.m"
                          mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 120 "string.format.m"
                          if (mercury__string__format__succeeded)
#line 120 "string.format.m"
                            *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_93_93;
#line 120 "string.format.m"
                          else
#line 120 "string.format.m"
                            {
#line 120 "string.format.m"
                              MR_Integer mercury__string__format__V_358_358 = (MR_Integer) mercury__string__format__V_351_351;
#line 120 "string.format.m"
                              MR_Integer mercury__string__format__V_359_359 = (MR_Integer) mercury__string__format__V_91_91;

#line 66 "private_builtin.opt"
                              mercury__string__format__succeeded = (mercury__string__format__V_358_358 < mercury__string__format__V_359_359);
#line 69 "private_builtin.opt"
                              if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                              else
#line 74 "private_builtin.opt"
                                {
#line 71 "private_builtin.opt"
                                  mercury__string__format__succeeded = (mercury__string__format__V_358_358 == mercury__string__format__V_359_359);
#line 74 "private_builtin.opt"
                                  if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                  else
#line 75 "private_builtin.opt"
                                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                }
#line 120 "string.format.m"
                            }
#line 120 "string.format.m"
                        }
#line 120 "string.format.m"
                    }
#line 120 "string.format.m"
                  else
#line 120 "string.format.m"
                    if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6816 "string.format.c"
                      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                    else
#line 120 "string.format.m"
                      if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6822 "string.format.c"
                        *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                      else
#line 120 "string.format.m"
                        if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6828 "string.format.c"
                          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                        else
#line 120 "string.format.m"
                          if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6834 "string.format.c"
                            *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                          else
#line 120 "string.format.m"
                            if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6840 "string.format.c"
                              *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                            else
#line 6844 "string.format.c"
                              *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
            }
#line 120 "string.format.m"
          else
#line 120 "string.format.m"
            if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 120 "string.format.m"
              {
#line 120 "string.format.m"
                MR_Integer mercury__string__format__V_337_337 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 2)));
#line 120 "string.format.m"
                MR_Integer mercury__string__format__V_338_338 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));

#line 120 "string.format.m"
                if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6861 "string.format.c"
                  *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                else
#line 120 "string.format.m"
                  if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6867 "string.format.c"
                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                  else
#line 120 "string.format.m"
                    if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6873 "string.format.c"
                      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                    else
#line 120 "string.format.m"
                      if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 120 "string.format.m"
                        {
#line 120 "string.format.m"
                          MR_Integer mercury__string__format__V_315_315 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 1)));
#line 120 "string.format.m"
                          MR_Integer mercury__string__format__V_316_316 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 2)));
#line 120 "string.format.m"
                          MR_Word mercury__string__format__V_317_317;

#line 66 "private_builtin.opt"
                          mercury__string__format__succeeded = (mercury__string__format__V_338_338 < mercury__string__format__V_315_315);
#line 69 "private_builtin.opt"
                          if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                            mercury__string__format__V_317_317 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                          else
#line 74 "private_builtin.opt"
                            {
#line 71 "private_builtin.opt"
                              mercury__string__format__succeeded = (mercury__string__format__V_338_338 == mercury__string__format__V_315_315);
#line 74 "private_builtin.opt"
                              if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                                mercury__string__format__V_317_317 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                              else
#line 75 "private_builtin.opt"
                                mercury__string__format__V_317_317 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                            }
#line 6910 "string.format.c"
                          mercury__string__format__succeeded = (mercury__string__format__V_317_317 == (MR_Integer) 0);
#line 120 "string.format.m"
                          mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 120 "string.format.m"
                          if (mercury__string__format__succeeded)
#line 120 "string.format.m"
                            *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_317_317;
#line 120 "string.format.m"
                          else
#line 69 "private_builtin.opt"
                            {
#line 66 "private_builtin.opt"
                              mercury__string__format__succeeded = (mercury__string__format__V_337_337 < mercury__string__format__V_316_316);
#line 69 "private_builtin.opt"
                              if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                              else
#line 74 "private_builtin.opt"
                                {
#line 71 "private_builtin.opt"
                                  mercury__string__format__succeeded = (mercury__string__format__V_337_337 == mercury__string__format__V_316_316);
#line 74 "private_builtin.opt"
                                  if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                  else
#line 75 "private_builtin.opt"
                                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                }
#line 69 "private_builtin.opt"
                            }
#line 120 "string.format.m"
                        }
#line 120 "string.format.m"
                      else
#line 120 "string.format.m"
                        if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6952 "string.format.c"
                          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                        else
#line 120 "string.format.m"
                          if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6958 "string.format.c"
                            *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                          else
#line 120 "string.format.m"
                            if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6964 "string.format.c"
                              *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                            else
#line 120 "string.format.m"
                              if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6970 "string.format.c"
                                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                              else
#line 6974 "string.format.c"
                                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
              }
#line 120 "string.format.m"
            else
#line 120 "string.format.m"
              if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 120 "string.format.m"
                {
#line 120 "string.format.m"
                  MR_Integer mercury__string__format__V_339_339 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));

#line 120 "string.format.m"
                  if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6989 "string.format.c"
                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                  else
#line 120 "string.format.m"
                    if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6995 "string.format.c"
                      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                    else
#line 120 "string.format.m"
                      if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7001 "string.format.c"
                        *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                      else
#line 120 "string.format.m"
                        if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7007 "string.format.c"
                          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                        else
#line 120 "string.format.m"
                          if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 120 "string.format.m"
                            {
#line 120 "string.format.m"
                              MR_Integer mercury__string__format__V_278_278 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 1)));

#line 66 "private_builtin.opt"
                              mercury__string__format__succeeded = (mercury__string__format__V_339_339 < mercury__string__format__V_278_278);
#line 69 "private_builtin.opt"
                              if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                              else
#line 74 "private_builtin.opt"
                                {
#line 71 "private_builtin.opt"
                                  mercury__string__format__succeeded = (mercury__string__format__V_339_339 == mercury__string__format__V_278_278);
#line 74 "private_builtin.opt"
                                  if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                  else
#line 75 "private_builtin.opt"
                                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                }
#line 120 "string.format.m"
                            }
#line 120 "string.format.m"
                          else
#line 120 "string.format.m"
                            if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7046 "string.format.c"
                              *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                            else
#line 120 "string.format.m"
                              if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7052 "string.format.c"
                                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                              else
#line 120 "string.format.m"
                                if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7058 "string.format.c"
                                  *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                                else
#line 7062 "string.format.c"
                                  *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                }
#line 120 "string.format.m"
              else
#line 120 "string.format.m"
                if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 120 "string.format.m"
                  {
#line 120 "string.format.m"
                    MR_Integer mercury__string__format__V_340_340 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));

#line 120 "string.format.m"
                    if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7077 "string.format.c"
                      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                    else
#line 120 "string.format.m"
                      if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7083 "string.format.c"
                        *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                      else
#line 120 "string.format.m"
                        if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7089 "string.format.c"
                          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                        else
#line 120 "string.format.m"
                          if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7095 "string.format.c"
                            *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                          else
#line 120 "string.format.m"
                            if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 7101 "string.format.c"
                              *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                            else
#line 120 "string.format.m"
                              if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 120 "string.format.m"
                                {
#line 120 "string.format.m"
                                  MR_Integer mercury__string__format__V_211_211 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 1)));

#line 66 "private_builtin.opt"
                                  mercury__string__format__succeeded = (mercury__string__format__V_340_340 < mercury__string__format__V_211_211);
#line 69 "private_builtin.opt"
                                  if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                  else
#line 74 "private_builtin.opt"
                                    {
#line 71 "private_builtin.opt"
                                      mercury__string__format__succeeded = (mercury__string__format__V_340_340 == mercury__string__format__V_211_211);
#line 74 "private_builtin.opt"
                                      if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                                        *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                      else
#line 75 "private_builtin.opt"
                                        *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                    }
#line 120 "string.format.m"
                                }
#line 120 "string.format.m"
                              else
#line 120 "string.format.m"
                                if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7140 "string.format.c"
                                  *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                                else
#line 120 "string.format.m"
                                  if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7146 "string.format.c"
                                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                                  else
#line 7150 "string.format.c"
                                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                  }
#line 120 "string.format.m"
                else
#line 120 "string.format.m"
                  if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 120 "string.format.m"
                    {
#line 120 "string.format.m"
                      MR_Char mercury__string__format__V_341_341 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 2)));
#line 120 "string.format.m"
                      MR_Integer mercury__string__format__V_342_342 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));

#line 120 "string.format.m"
                      if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7167 "string.format.c"
                        *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                      else
#line 120 "string.format.m"
                        if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7173 "string.format.c"
                          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                        else
#line 120 "string.format.m"
                          if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7179 "string.format.c"
                            *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                          else
#line 120 "string.format.m"
                            if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7185 "string.format.c"
                              *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                            else
#line 120 "string.format.m"
                              if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 7191 "string.format.c"
                                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                              else
#line 120 "string.format.m"
                                if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7197 "string.format.c"
                                  *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                                else
#line 120 "string.format.m"
                                  if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 120 "string.format.m"
                                    {
#line 120 "string.format.m"
                                      MR_Integer mercury__string__format__V_137_137 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 1)));
#line 120 "string.format.m"
                                      MR_Char mercury__string__format__V_138_138 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 2)));
#line 120 "string.format.m"
                                      MR_Word mercury__string__format__V_139_139;

#line 66 "private_builtin.opt"
                                      mercury__string__format__succeeded = (mercury__string__format__V_342_342 < mercury__string__format__V_137_137);
#line 69 "private_builtin.opt"
                                      if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                                        mercury__string__format__V_139_139 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                      else
#line 74 "private_builtin.opt"
                                        {
#line 71 "private_builtin.opt"
                                          mercury__string__format__succeeded = (mercury__string__format__V_342_342 == mercury__string__format__V_137_137);
#line 74 "private_builtin.opt"
                                          if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                                            mercury__string__format__V_139_139 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                          else
#line 75 "private_builtin.opt"
                                            mercury__string__format__V_139_139 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                        }
#line 7234 "string.format.c"
                                      mercury__string__format__succeeded = (mercury__string__format__V_139_139 == (MR_Integer) 0);
#line 120 "string.format.m"
                                      mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 120 "string.format.m"
                                      if (mercury__string__format__succeeded)
#line 120 "string.format.m"
                                        *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_139_139;
#line 120 "string.format.m"
                                      else
#line 120 "string.format.m"
                                        {
#line 120 "string.format.m"
                                          MR_Integer mercury__string__format__XI_7_378;
#line 120 "string.format.m"
                                          MR_Integer mercury__string__format__YI_8_379;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__format____Compare____format_str_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__format__V_341_341 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 7264 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__XI_7_378  = Int;
#line 66 "char.opt"
}
#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__format____Compare____format_str_error_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__format__V_138_138 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 7284 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__YI_8_379  = Int;
#line 66 "char.opt"
}
#line 84 "private_builtin.opt"
                                          mercury__string__format__succeeded = (mercury__string__format__XI_7_378 < mercury__string__format__YI_8_379);
#line 87 "private_builtin.opt"
                                          if (mercury__string__format__succeeded)
#line 86 "private_builtin.opt"
                                            *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 87 "private_builtin.opt"
                                          else
#line 92 "private_builtin.opt"
                                            {
#line 89 "private_builtin.opt"
                                              mercury__string__format__succeeded = (mercury__string__format__XI_7_378 == mercury__string__format__YI_8_379);
#line 92 "private_builtin.opt"
                                              if (mercury__string__format__succeeded)
#line 91 "private_builtin.opt"
                                                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 92 "private_builtin.opt"
                                              else
#line 93 "private_builtin.opt"
                                                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 92 "private_builtin.opt"
                                            }
#line 120 "string.format.m"
                                        }
#line 120 "string.format.m"
                                    }
#line 120 "string.format.m"
                                  else
#line 120 "string.format.m"
                                    if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7321 "string.format.c"
                                      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                                    else
#line 7325 "string.format.c"
                                      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                    }
#line 120 "string.format.m"
                  else
#line 120 "string.format.m"
                    if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 120 "string.format.m"
                      {
#line 120 "string.format.m"
                        MR_Word mercury__string__format__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 2)));
#line 120 "string.format.m"
                        MR_Integer mercury__string__format__V_346_346 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));

#line 120 "string.format.m"
                        if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7342 "string.format.c"
                          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                        else
#line 120 "string.format.m"
                          if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7348 "string.format.c"
                            *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                          else
#line 120 "string.format.m"
                            if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7354 "string.format.c"
                              *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                            else
#line 120 "string.format.m"
                              if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7360 "string.format.c"
                                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                              else
#line 120 "string.format.m"
                                if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 7366 "string.format.c"
                                  *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                                else
#line 120 "string.format.m"
                                  if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7372 "string.format.c"
                                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                                  else
#line 120 "string.format.m"
                                    if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7378 "string.format.c"
                                      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                                    else
#line 120 "string.format.m"
                                      if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 120 "string.format.m"
                                        {
#line 120 "string.format.m"
                                          MR_Integer mercury__string__format__V_246_246 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 1)));
#line 120 "string.format.m"
                                          MR_Word mercury__string__format__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 2)));
#line 120 "string.format.m"
                                          MR_Word mercury__string__format__V_248_248;

#line 66 "private_builtin.opt"
                                          mercury__string__format__succeeded = (mercury__string__format__V_346_346 < mercury__string__format__V_246_246);
#line 69 "private_builtin.opt"
                                          if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                                            mercury__string__format__V_248_248 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                          else
#line 74 "private_builtin.opt"
                                            {
#line 71 "private_builtin.opt"
                                              mercury__string__format__succeeded = (mercury__string__format__V_346_346 == mercury__string__format__V_246_246);
#line 74 "private_builtin.opt"
                                              if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                                                mercury__string__format__V_248_248 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                              else
#line 75 "private_builtin.opt"
                                                mercury__string__format__V_248_248 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                            }
#line 7415 "string.format.c"
                                          mercury__string__format__succeeded = (mercury__string__format__V_248_248 == (MR_Integer) 0);
#line 120 "string.format.m"
                                          mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 120 "string.format.m"
                                          if (mercury__string__format__succeeded)
#line 120 "string.format.m"
                                            *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_248_248;
#line 120 "string.format.m"
                                          else
#line 120 "string.format.m"
                                            {
#line 120 "string.format.m"
                                              MR_Integer mercury__string__format__V_354_354 = (MR_Integer) mercury__string__format__V_345_345;
#line 120 "string.format.m"
                                              MR_Integer mercury__string__format__V_355_355 = (MR_Integer) mercury__string__format__V_247_247;

#line 66 "private_builtin.opt"
                                              mercury__string__format__succeeded = (mercury__string__format__V_354_354 < mercury__string__format__V_355_355);
#line 69 "private_builtin.opt"
                                              if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                                                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                              else
#line 74 "private_builtin.opt"
                                                {
#line 71 "private_builtin.opt"
                                                  mercury__string__format__succeeded = (mercury__string__format__V_354_354 == mercury__string__format__V_355_355);
#line 74 "private_builtin.opt"
                                                  if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                                                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                  else
#line 75 "private_builtin.opt"
                                                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                }
#line 120 "string.format.m"
                                            }
#line 120 "string.format.m"
                                        }
#line 120 "string.format.m"
                                      else
#line 7460 "string.format.c"
                                        *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                      }
#line 120 "string.format.m"
                    else
#line 120 "string.format.m"
                      {
#line 120 "string.format.m"
                        MR_Word mercury__string__format__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 2)));
#line 120 "string.format.m"
                        MR_Integer mercury__string__format__V_348_348 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));

#line 120 "string.format.m"
                        if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7475 "string.format.c"
                          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                        else
#line 120 "string.format.m"
                          if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7481 "string.format.c"
                            *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                          else
#line 120 "string.format.m"
                            if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7487 "string.format.c"
                              *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                            else
#line 120 "string.format.m"
                              if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7493 "string.format.c"
                                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                              else
#line 120 "string.format.m"
                                if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 7499 "string.format.c"
                                  *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                                else
#line 120 "string.format.m"
                                  if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7505 "string.format.c"
                                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                                  else
#line 120 "string.format.m"
                                    if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7511 "string.format.c"
                                      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 120 "string.format.m"
                                    else
#line 120 "string.format.m"
                                      if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7517 "string.format.c"
                                        *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 120 "string.format.m"
                                      else
#line 120 "string.format.m"
                                        {
#line 120 "string.format.m"
                                          MR_Integer mercury__string__format__V_177_177 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 1)));
#line 120 "string.format.m"
                                          MR_Word mercury__string__format__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__3_3, (MR_Integer) 2)));
#line 120 "string.format.m"
                                          MR_Word mercury__string__format__V_179_179;

#line 66 "private_builtin.opt"
                                          mercury__string__format__succeeded = (mercury__string__format__V_348_348 < mercury__string__format__V_177_177);
#line 69 "private_builtin.opt"
                                          if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                                            mercury__string__format__V_179_179 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                          else
#line 74 "private_builtin.opt"
                                            {
#line 71 "private_builtin.opt"
                                              mercury__string__format__succeeded = (mercury__string__format__V_348_348 == mercury__string__format__V_177_177);
#line 74 "private_builtin.opt"
                                              if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                                                mercury__string__format__V_179_179 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                              else
#line 75 "private_builtin.opt"
                                                mercury__string__format__V_179_179 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                            }
#line 7552 "string.format.c"
                                          mercury__string__format__succeeded = (mercury__string__format__V_179_179 == (MR_Integer) 0);
#line 120 "string.format.m"
                                          mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 120 "string.format.m"
                                          if (mercury__string__format__succeeded)
#line 120 "string.format.m"
                                            *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_179_179;
#line 120 "string.format.m"
                                          else
#line 120 "string.format.m"
                                            {
#line 120 "string.format.m"
                                              MR_Integer mercury__string__format__V_356_356 = (MR_Integer) mercury__string__format__V_347_347;
#line 120 "string.format.m"
                                              MR_Integer mercury__string__format__V_357_357 = (MR_Integer) mercury__string__format__V_178_178;

#line 66 "private_builtin.opt"
                                              mercury__string__format__succeeded = (mercury__string__format__V_356_356 < mercury__string__format__V_357_357);
#line 69 "private_builtin.opt"
                                              if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                                                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                                              else
#line 74 "private_builtin.opt"
                                                {
#line 71 "private_builtin.opt"
                                                  mercury__string__format__succeeded = (mercury__string__format__V_356_356 == mercury__string__format__V_357_357);
#line 74 "private_builtin.opt"
                                                  if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                                                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                                                  else
#line 75 "private_builtin.opt"
                                                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                                                }
#line 120 "string.format.m"
                                            }
#line 120 "string.format.m"
                                        }
#line 120 "string.format.m"
                      }
#line 120 "string.format.m"
  }
#line 120 "string.format.m"
}

#line 120 "string.format.m"
MR_bool MR_CALL 
mercury__string__format____Unify____format_str_error_0_0(
#line 120 "string.format.m"
  MR_Word mercury__string__format__HeadVar__1_1,
#line 120 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2)
#line 120 "string.format.m"
{
#line 120 "string.format.m"
  {
#line 120 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 120 "string.format.m"
    MR_Integer mercury__string__format__CastX_37 = (MR_Integer) mercury__string__format__HeadVar__1_1;
#line 120 "string.format.m"
    MR_Integer mercury__string__format__CastY_38 = (MR_Integer) mercury__string__format__HeadVar__2_2;

#line 120 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__CastX_37 == mercury__string__format__CastY_38);
#line 120 "string.format.m"
    if (mercury__string__format__succeeded)
#line 120 "string.format.m"
      mercury__string__format__succeeded = MR_TRUE;
#line 120 "string.format.m"
    else
#line 120 "string.format.m"
      if (((MR_tag((MR_Word) mercury__string__format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 120 "string.format.m"
        {
#line 120 "string.format.m"
          MR_Integer mercury__string__format__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)));
#line 120 "string.format.m"
          MR_Integer mercury__string__format__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__1_1, (MR_Integer) 1)));
#line 120 "string.format.m"
          MR_Integer mercury__string__format__V_5_5;
#line 120 "string.format.m"
          MR_Integer mercury__string__format__V_6_6;

#line 120 "string.format.m"
          mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 120 "string.format.m"
          if (mercury__string__format__succeeded)
#line 120 "string.format.m"
            {
#line 120 "string.format.m"
              mercury__string__format__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)));
#line 120 "string.format.m"
              mercury__string__format__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));
#line 7651 "string.format.c"
              mercury__string__format__succeeded = (mercury__string__format__V_3_3 == mercury__string__format__V_5_5);
#line 120 "string.format.m"
              if (mercury__string__format__succeeded)
#line 7655 "string.format.c"
                mercury__string__format__succeeded = (mercury__string__format__V_4_4 == mercury__string__format__V_6_6);
#line 120 "string.format.m"
            }
#line 120 "string.format.m"
        }
#line 120 "string.format.m"
      else
#line 120 "string.format.m"
        if (((MR_tag((MR_Word) mercury__string__format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 120 "string.format.m"
          {
#line 120 "string.format.m"
            MR_Integer mercury__string__format__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)));
#line 120 "string.format.m"
            MR_Char mercury__string__format__V_8_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__1_1, (MR_Integer) 1)));
#line 120 "string.format.m"
            MR_Integer mercury__string__format__V_9_9;
#line 120 "string.format.m"
            MR_Char mercury__string__format__V_10_10;

#line 120 "string.format.m"
            mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 120 "string.format.m"
            if (mercury__string__format__succeeded)
#line 120 "string.format.m"
              {
#line 120 "string.format.m"
                mercury__string__format__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)));
#line 120 "string.format.m"
                mercury__string__format__V_10_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));
#line 7686 "string.format.c"
                mercury__string__format__succeeded = (mercury__string__format__V_7_7 == mercury__string__format__V_9_9);
#line 120 "string.format.m"
                if (mercury__string__format__succeeded)
#line 7690 "string.format.c"
                  mercury__string__format__succeeded = (mercury__string__format__V_8_8 == mercury__string__format__V_10_10);
#line 120 "string.format.m"
              }
#line 120 "string.format.m"
          }
#line 120 "string.format.m"
        else
#line 120 "string.format.m"
          if (((MR_tag((MR_Word) mercury__string__format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 120 "string.format.m"
            {
#line 120 "string.format.m"
              MR_Integer mercury__string__format__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)));
#line 120 "string.format.m"
              MR_Char mercury__string__format__V_12_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__1_1, (MR_Integer) 1)));
#line 120 "string.format.m"
              MR_Word mercury__string__format__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__1_1, (MR_Integer) 2)));
#line 120 "string.format.m"
              MR_Integer mercury__string__format__V_14_14;
#line 120 "string.format.m"
              MR_Char mercury__string__format__V_15_15;
#line 120 "string.format.m"
              MR_Word mercury__string__format__V_16_16;

#line 120 "string.format.m"
              mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 120 "string.format.m"
              if (mercury__string__format__succeeded)
#line 120 "string.format.m"
                {
#line 120 "string.format.m"
                  mercury__string__format__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)));
#line 120 "string.format.m"
                  mercury__string__format__V_15_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));
#line 120 "string.format.m"
                  mercury__string__format__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__HeadVar__2_2, (MR_Integer) 2)));
#line 7727 "string.format.c"
                  mercury__string__format__succeeded = (mercury__string__format__V_11_11 == mercury__string__format__V_14_14);
#line 120 "string.format.m"
                  if (mercury__string__format__succeeded)
#line 120 "string.format.m"
                    {
#line 7733 "string.format.c"
                      mercury__string__format__succeeded = (mercury__string__format__V_12_12 == mercury__string__format__V_15_15);
#line 120 "string.format.m"
                      if (mercury__string__format__succeeded)
#line 7737 "string.format.c"
                        mercury__string__format__succeeded = (mercury__string__format__V_13_13 == mercury__string__format__V_16_16);
#line 120 "string.format.m"
                    }
#line 120 "string.format.m"
                }
#line 120 "string.format.m"
            }
#line 120 "string.format.m"
          else
#line 120 "string.format.m"
            if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 120 "string.format.m"
              {
#line 120 "string.format.m"
                MR_Integer mercury__string__format__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 1)));
#line 120 "string.format.m"
                MR_Integer mercury__string__format__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 2)));
#line 120 "string.format.m"
                MR_Integer mercury__string__format__V_35_35;
#line 120 "string.format.m"
                MR_Integer mercury__string__format__V_36_36;

#line 120 "string.format.m"
                mercury__string__format__succeeded = ((((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 120 "string.format.m"
                if (mercury__string__format__succeeded)
#line 120 "string.format.m"
                  {
#line 120 "string.format.m"
                    mercury__string__format__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));
#line 120 "string.format.m"
                    mercury__string__format__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 2)));
#line 7770 "string.format.c"
                    mercury__string__format__succeeded = (mercury__string__format__V_33_33 == mercury__string__format__V_35_35);
#line 120 "string.format.m"
                    if (mercury__string__format__succeeded)
#line 7774 "string.format.c"
                      mercury__string__format__succeeded = (mercury__string__format__V_34_34 == mercury__string__format__V_36_36);
#line 120 "string.format.m"
                  }
#line 120 "string.format.m"
              }
#line 120 "string.format.m"
            else
#line 120 "string.format.m"
              if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 120 "string.format.m"
                {
#line 120 "string.format.m"
                  MR_Integer mercury__string__format__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 1)));
#line 120 "string.format.m"
                  MR_Integer mercury__string__format__V_32_32;

#line 120 "string.format.m"
                  mercury__string__format__succeeded = ((((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 120 "string.format.m"
                  if (mercury__string__format__succeeded)
#line 120 "string.format.m"
                    {
#line 120 "string.format.m"
                      mercury__string__format__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));
#line 7799 "string.format.c"
                      mercury__string__format__succeeded = (mercury__string__format__V_31_31 == mercury__string__format__V_32_32);
#line 120 "string.format.m"
                    }
#line 120 "string.format.m"
                }
#line 120 "string.format.m"
              else
#line 120 "string.format.m"
                if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 120 "string.format.m"
                  {
#line 120 "string.format.m"
                    MR_Integer mercury__string__format__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 1)));
#line 120 "string.format.m"
                    MR_Integer mercury__string__format__V_26_26;

#line 120 "string.format.m"
                    mercury__string__format__succeeded = ((((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 120 "string.format.m"
                    if (mercury__string__format__succeeded)
#line 120 "string.format.m"
                      {
#line 120 "string.format.m"
                        mercury__string__format__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));
#line 7824 "string.format.c"
                        mercury__string__format__succeeded = (mercury__string__format__V_25_25 == mercury__string__format__V_26_26);
#line 120 "string.format.m"
                      }
#line 120 "string.format.m"
                  }
#line 120 "string.format.m"
                else
#line 120 "string.format.m"
                  if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 120 "string.format.m"
                    {
#line 120 "string.format.m"
                      MR_Integer mercury__string__format__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 1)));
#line 120 "string.format.m"
                      MR_Char mercury__string__format__V_18_18 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 2)));
#line 120 "string.format.m"
                      MR_Integer mercury__string__format__V_19_19;
#line 120 "string.format.m"
                      MR_Char mercury__string__format__V_20_20;

#line 120 "string.format.m"
                      mercury__string__format__succeeded = ((((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 120 "string.format.m"
                      if (mercury__string__format__succeeded)
#line 120 "string.format.m"
                        {
#line 120 "string.format.m"
                          mercury__string__format__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));
#line 120 "string.format.m"
                          mercury__string__format__V_20_20 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 2)));
#line 7855 "string.format.c"
                          mercury__string__format__succeeded = (mercury__string__format__V_17_17 == mercury__string__format__V_19_19);
#line 120 "string.format.m"
                          if (mercury__string__format__succeeded)
#line 7859 "string.format.c"
                            mercury__string__format__succeeded = (mercury__string__format__V_18_18 == mercury__string__format__V_20_20);
#line 120 "string.format.m"
                        }
#line 120 "string.format.m"
                    }
#line 120 "string.format.m"
                  else
#line 120 "string.format.m"
                    if (((((MR_tag((MR_Word) mercury__string__format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 120 "string.format.m"
                      {
#line 120 "string.format.m"
                        MR_Integer mercury__string__format__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 1)));
#line 120 "string.format.m"
                        MR_Word mercury__string__format__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 2)));
#line 120 "string.format.m"
                        MR_Integer mercury__string__format__V_29_29;
#line 120 "string.format.m"
                        MR_Word mercury__string__format__V_30_30;

#line 120 "string.format.m"
                        mercury__string__format__succeeded = ((((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 120 "string.format.m"
                        if (mercury__string__format__succeeded)
#line 120 "string.format.m"
                          {
#line 120 "string.format.m"
                            mercury__string__format__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));
#line 120 "string.format.m"
                            mercury__string__format__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 2)));
#line 7890 "string.format.c"
                            mercury__string__format__succeeded = (mercury__string__format__V_27_27 == mercury__string__format__V_29_29);
#line 120 "string.format.m"
                            if (mercury__string__format__succeeded)
#line 7894 "string.format.c"
                              mercury__string__format__succeeded = (mercury__string__format__V_28_28 == mercury__string__format__V_30_30);
#line 120 "string.format.m"
                          }
#line 120 "string.format.m"
                      }
#line 120 "string.format.m"
                    else
#line 120 "string.format.m"
                      {
#line 120 "string.format.m"
                        MR_Integer mercury__string__format__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 1)));
#line 120 "string.format.m"
                        MR_Word mercury__string__format__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__1_1, (MR_Integer) 2)));
#line 120 "string.format.m"
                        MR_Integer mercury__string__format__V_23_23;
#line 120 "string.format.m"
                        MR_Word mercury__string__format__V_24_24;

#line 120 "string.format.m"
                        mercury__string__format__succeeded = ((((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 120 "string.format.m"
                        if (mercury__string__format__succeeded)
#line 120 "string.format.m"
                          {
#line 120 "string.format.m"
                            mercury__string__format__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 1)));
#line 120 "string.format.m"
                            mercury__string__format__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__HeadVar__2_2, (MR_Integer) 2)));
#line 7923 "string.format.c"
                            mercury__string__format__succeeded = (mercury__string__format__V_21_21 == mercury__string__format__V_23_23);
#line 120 "string.format.m"
                            if (mercury__string__format__succeeded)
#line 7927 "string.format.c"
                              mercury__string__format__succeeded = (mercury__string__format__V_22_22 == mercury__string__format__V_24_24);
#line 120 "string.format.m"
                          }
#line 120 "string.format.m"
                      }
#line 120 "string.format.m"
    return mercury__string__format__succeeded;
#line 120 "string.format.m"
  }
#line 120 "string.format.m"
}

#line 110 "string.format.m"
void MR_CALL 
mercury__string__format____Compare____format_str_component_0_0(
#line 110 "string.format.m"
  MR_Word * mercury__string__format__HeadVar__1_1,
#line 110 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2,
#line 110 "string.format.m"
  MR_Word mercury__string__format__HeadVar__3_3)
#line 110 "string.format.m"
{
#line 110 "string.format.m"
  {
#line 110 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 110 "string.format.m"
    MR_Integer mercury__string__format__CastX_12 = (MR_Integer) mercury__string__format__HeadVar__2_2;
#line 110 "string.format.m"
    MR_Integer mercury__string__format__CastY_13 = (MR_Integer) mercury__string__format__HeadVar__3_3;

#line 110 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__CastX_12 == mercury__string__format__CastY_13);
#line 110 "string.format.m"
    if (mercury__string__format__succeeded)
#line 7964 "string.format.c"
      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "string.format.m"
    else
#line 110 "string.format.m"
      if (((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 110 "string.format.m"
        {
#line 110 "string.format.m"
          MR_Word mercury__string__format__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)));

#line 110 "string.format.m"
          if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 110 "string.format.m"
            {
#line 110 "string.format.m"
              MR_Word mercury__string__format__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)));

#line 110 "string.format.m"
              {
#line 110 "string.format.m"
                mercury__string__format____Compare____format_str_spec_0_0(mercury__string__format__HeadVar__1_1, mercury__string__format__V_16_16, mercury__string__format__V_11_11);
#line 110 "string.format.m"
                return;
              }
#line 110 "string.format.m"
            }
#line 110 "string.format.m"
          else
#line 7993 "string.format.c"
            *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "string.format.m"
        }
#line 110 "string.format.m"
      else
#line 110 "string.format.m"
        {
#line 110 "string.format.m"
          MR_String mercury__string__format__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)));

#line 110 "string.format.m"
          if (((MR_tag((MR_Word) mercury__string__format__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8006 "string.format.c"
            *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "string.format.m"
          else
#line 110 "string.format.m"
            {
#line 110 "string.format.m"
              MR_String mercury__string__format__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)));
#line 110 "string.format.m"
              MR_Integer mercury__string__format__Res_7_21;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string__format____Compare____format_str_component_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__format__V_17_17 ;
	S2 =  mercury__string__format__V_5_5 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8032 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Res_7_21  = Res;
#line 134 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
              mercury__string__format__succeeded = (mercury__string__format__Res_7_21 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
              if (mercury__string__format__succeeded)
#line 104 "private_builtin.opt"
                *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
              else
#line 110 "private_builtin.opt"
                {
#line 107 "private_builtin.opt"
                  mercury__string__format__succeeded = (mercury__string__format__Res_7_21 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                  if (mercury__string__format__succeeded)
#line 109 "private_builtin.opt"
                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                  else
#line 111 "private_builtin.opt"
                    *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                }
#line 110 "string.format.m"
            }
#line 110 "string.format.m"
        }
#line 110 "string.format.m"
  }
#line 110 "string.format.m"
}

#line 110 "string.format.m"
MR_bool MR_CALL 
mercury__string__format____Unify____format_str_component_0_0(
#line 110 "string.format.m"
  MR_Word mercury__string__format__HeadVar__1_1,
#line 110 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2)
#line 110 "string.format.m"
{
#line 110 "string.format.m"
  {
#line 110 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 110 "string.format.m"
    MR_Integer mercury__string__format__CastX_7 = (MR_Integer) mercury__string__format__HeadVar__1_1;
#line 110 "string.format.m"
    MR_Integer mercury__string__format__CastY_8 = (MR_Integer) mercury__string__format__HeadVar__2_2;

#line 110 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__CastX_7 == mercury__string__format__CastY_8);
#line 110 "string.format.m"
    if (mercury__string__format__succeeded)
#line 110 "string.format.m"
      mercury__string__format__succeeded = MR_TRUE;
#line 110 "string.format.m"
    else
#line 110 "string.format.m"
      if (((MR_tag((MR_Word) mercury__string__format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 110 "string.format.m"
        {
#line 110 "string.format.m"
          MR_Word mercury__string__format__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)));
#line 110 "string.format.m"
          MR_Word mercury__string__format__V_6_6;

#line 110 "string.format.m"
          mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 110 "string.format.m"
          if (mercury__string__format__succeeded)
#line 110 "string.format.m"
            {
#line 110 "string.format.m"
              mercury__string__format__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)));
#line 8113 "string.format.c"
              {
#line 8115 "string.format.c"
                return mercury__string__format__succeeded = mercury__string__format____Unify____format_str_spec_0_0(mercury__string__format__V_5_5, mercury__string__format__V_6_6);
              }
#line 110 "string.format.m"
            }
#line 110 "string.format.m"
        }
#line 110 "string.format.m"
      else
#line 110 "string.format.m"
        {
#line 110 "string.format.m"
          MR_String mercury__string__format__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)));
#line 110 "string.format.m"
          MR_String mercury__string__format__V_4_4;

#line 110 "string.format.m"
          mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 110 "string.format.m"
          if (mercury__string__format__succeeded)
#line 110 "string.format.m"
            {
#line 110 "string.format.m"
              mercury__string__format__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)));
#line 8139 "string.format.c"
              mercury__string__format__succeeded = (strcmp(mercury__string__format__V_3_3, mercury__string__format__V_4_4) == 0);
#line 110 "string.format.m"
            }
#line 110 "string.format.m"
        }
#line 110 "string.format.m"
    return mercury__string__format__succeeded;
#line 110 "string.format.m"
  }
#line 110 "string.format.m"
}

#line 94 "string.format.m"
void MR_CALL 
mercury__string__format____Compare____float_kind_0_0(
#line 94 "string.format.m"
  MR_Word * mercury__string__format__HeadVar__1_1,
#line 94 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2,
#line 94 "string.format.m"
  MR_Word mercury__string__format__HeadVar__3_3)
#line 94 "string.format.m"
{
#line 94 "string.format.m"
  {
#line 94 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 94 "string.format.m"
    MR_Integer mercury__string__format__Cast_HeadVar1_4 = (MR_Integer) mercury__string__format__HeadVar__2_2;
#line 94 "string.format.m"
    MR_Integer mercury__string__format__Cast_HeadVar2_5 = (MR_Integer) mercury__string__format__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__string__format__succeeded = (mercury__string__format__Cast_HeadVar1_4 < mercury__string__format__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__string__format__succeeded = (mercury__string__format__Cast_HeadVar1_4 == mercury__string__format__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 94 "string.format.m"
  }
#line 94 "string.format.m"
}

#line 94 "string.format.m"
MR_bool MR_CALL 
mercury__string__format____Unify____float_kind_0_0(
#line 94 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_1,
#line 94 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2)
#line 94 "string.format.m"
{
#line 8208 "string.format.c"
  {
#line 8210 "string.format.c"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__HeadVar__2_1 == mercury__string__format__HeadVar__2_2);

#line 8213 "string.format.c"
    return mercury__string__format__succeeded;
#line 8215 "string.format.c"
  }
#line 94 "string.format.m"
}

#line 75 "string.format.m"
void MR_CALL 
mercury__string__format____Compare____flags_0_0(
#line 75 "string.format.m"
  MR_Word * mercury__string__format__HeadVar__1_1,
#line 75 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2,
#line 75 "string.format.m"
  MR_Word mercury__string__format__HeadVar__3_3)
#line 75 "string.format.m"
{
#line 75 "string.format.m"
  {
#line 75 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 75 "string.format.m"
    MR_Integer mercury__string__format__CastX_18 = (MR_Integer) mercury__string__format__HeadVar__2_2;
#line 75 "string.format.m"
    MR_Integer mercury__string__format__CastY_19 = (MR_Integer) mercury__string__format__HeadVar__3_3;

#line 75 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__CastX_18 == mercury__string__format__CastY_19);
#line 75 "string.format.m"
    if (mercury__string__format__succeeded)
#line 8244 "string.format.c"
      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 75 "string.format.m"
    else
#line 75 "string.format.m"
      {
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_14_14;
#line 75 "string.format.m"
        MR_Integer mercury__string__format__V_25_25 = (MR_Integer) mercury__string__format__V_4_4;
#line 75 "string.format.m"
        MR_Integer mercury__string__format__V_26_26 = (MR_Integer) mercury__string__format__V_9_9;

#line 66 "private_builtin.opt"
        mercury__string__format__succeeded = (mercury__string__format__V_25_25 < mercury__string__format__V_26_26);
#line 69 "private_builtin.opt"
        if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
          mercury__string__format__V_14_14 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__string__format__succeeded = (mercury__string__format__V_25_25 == mercury__string__format__V_26_26);
#line 74 "private_builtin.opt"
            if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
              mercury__string__format__V_14_14 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__string__format__V_14_14 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 8299 "string.format.c"
        mercury__string__format__succeeded = (mercury__string__format__V_14_14 == (MR_Integer) 0);
#line 75 "string.format.m"
        mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 75 "string.format.m"
        if (mercury__string__format__succeeded)
#line 75 "string.format.m"
          *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_14_14;
#line 75 "string.format.m"
        else
#line 75 "string.format.m"
          {
#line 75 "string.format.m"
            MR_Word mercury__string__format__V_15_15;
#line 75 "string.format.m"
            MR_Integer mercury__string__format__V_27_27 = (MR_Integer) mercury__string__format__V_5_5;
#line 75 "string.format.m"
            MR_Integer mercury__string__format__V_28_28 = (MR_Integer) mercury__string__format__V_10_10;

#line 66 "private_builtin.opt"
            mercury__string__format__succeeded = (mercury__string__format__V_27_27 < mercury__string__format__V_28_28);
#line 69 "private_builtin.opt"
            if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
              mercury__string__format__V_15_15 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__string__format__succeeded = (mercury__string__format__V_27_27 == mercury__string__format__V_28_28);
#line 74 "private_builtin.opt"
                if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                  mercury__string__format__V_15_15 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__string__format__V_15_15 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 8340 "string.format.c"
            mercury__string__format__succeeded = (mercury__string__format__V_15_15 == (MR_Integer) 0);
#line 75 "string.format.m"
            mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 75 "string.format.m"
            if (mercury__string__format__succeeded)
#line 75 "string.format.m"
              *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_15_15;
#line 75 "string.format.m"
            else
#line 75 "string.format.m"
              {
#line 75 "string.format.m"
                MR_Word mercury__string__format__V_16_16;
#line 75 "string.format.m"
                MR_Integer mercury__string__format__V_29_29 = (MR_Integer) mercury__string__format__V_6_6;
#line 75 "string.format.m"
                MR_Integer mercury__string__format__V_30_30 = (MR_Integer) mercury__string__format__V_11_11;

#line 66 "private_builtin.opt"
                mercury__string__format__succeeded = (mercury__string__format__V_29_29 < mercury__string__format__V_30_30);
#line 69 "private_builtin.opt"
                if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                  mercury__string__format__V_16_16 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                else
#line 74 "private_builtin.opt"
                  {
#line 71 "private_builtin.opt"
                    mercury__string__format__succeeded = (mercury__string__format__V_29_29 == mercury__string__format__V_30_30);
#line 74 "private_builtin.opt"
                    if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                      mercury__string__format__V_16_16 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                    else
#line 75 "private_builtin.opt"
                      mercury__string__format__V_16_16 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                  }
#line 8381 "string.format.c"
                mercury__string__format__succeeded = (mercury__string__format__V_16_16 == (MR_Integer) 0);
#line 75 "string.format.m"
                mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 75 "string.format.m"
                if (mercury__string__format__succeeded)
#line 75 "string.format.m"
                  *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_16_16;
#line 75 "string.format.m"
                else
#line 75 "string.format.m"
                  {
#line 75 "string.format.m"
                    MR_Word mercury__string__format__V_17_17;
#line 75 "string.format.m"
                    MR_Integer mercury__string__format__V_31_31 = (MR_Integer) mercury__string__format__V_7_7;
#line 75 "string.format.m"
                    MR_Integer mercury__string__format__V_32_32 = (MR_Integer) mercury__string__format__V_12_12;

#line 66 "private_builtin.opt"
                    mercury__string__format__succeeded = (mercury__string__format__V_31_31 < mercury__string__format__V_32_32);
#line 69 "private_builtin.opt"
                    if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                      mercury__string__format__V_17_17 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                    else
#line 74 "private_builtin.opt"
                      {
#line 71 "private_builtin.opt"
                        mercury__string__format__succeeded = (mercury__string__format__V_31_31 == mercury__string__format__V_32_32);
#line 74 "private_builtin.opt"
                        if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                          mercury__string__format__V_17_17 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                        else
#line 75 "private_builtin.opt"
                          mercury__string__format__V_17_17 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                      }
#line 8422 "string.format.c"
                    mercury__string__format__succeeded = (mercury__string__format__V_17_17 == (MR_Integer) 0);
#line 75 "string.format.m"
                    mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 75 "string.format.m"
                    if (mercury__string__format__succeeded)
#line 75 "string.format.m"
                      *mercury__string__format__HeadVar__1_1 = mercury__string__format__V_17_17;
#line 75 "string.format.m"
                    else
#line 75 "string.format.m"
                      {
#line 75 "string.format.m"
                        MR_Integer mercury__string__format__V_33_33 = (MR_Integer) mercury__string__format__V_8_8;
#line 75 "string.format.m"
                        MR_Integer mercury__string__format__V_34_34 = (MR_Integer) mercury__string__format__V_13_13;

#line 66 "private_builtin.opt"
                        mercury__string__format__succeeded = (mercury__string__format__V_33_33 < mercury__string__format__V_34_34);
#line 69 "private_builtin.opt"
                        if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
                          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                        else
#line 74 "private_builtin.opt"
                          {
#line 71 "private_builtin.opt"
                            mercury__string__format__succeeded = (mercury__string__format__V_33_33 == mercury__string__format__V_34_34);
#line 74 "private_builtin.opt"
                            if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
                              *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                            else
#line 75 "private_builtin.opt"
                              *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                          }
#line 75 "string.format.m"
                      }
#line 75 "string.format.m"
                  }
#line 75 "string.format.m"
              }
#line 75 "string.format.m"
          }
#line 75 "string.format.m"
      }
#line 75 "string.format.m"
  }
#line 75 "string.format.m"
}

#line 75 "string.format.m"
MR_bool MR_CALL 
mercury__string__format____Unify____flags_0_0(
#line 75 "string.format.m"
  MR_Word mercury__string__format__HeadVar__1_1,
#line 75 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2)
#line 75 "string.format.m"
{
#line 75 "string.format.m"
  {
#line 75 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 75 "string.format.m"
    MR_Integer mercury__string__format__CastX_13 = (MR_Integer) mercury__string__format__HeadVar__1_1;
#line 75 "string.format.m"
    MR_Integer mercury__string__format__CastY_14 = (MR_Integer) mercury__string__format__HeadVar__2_2;

#line 75 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__CastX_13 == mercury__string__format__CastY_14);
#line 75 "string.format.m"
    if (mercury__string__format__succeeded)
#line 75 "string.format.m"
      mercury__string__format__succeeded = MR_TRUE;
#line 75 "string.format.m"
    else
#line 75 "string.format.m"
      {
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 75 "string.format.m"
        MR_Word mercury__string__format__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 8525 "string.format.c"
        mercury__string__format__succeeded = (mercury__string__format__V_3_3 == mercury__string__format__V_8_8);
#line 75 "string.format.m"
        if (mercury__string__format__succeeded)
#line 75 "string.format.m"
          {
#line 8531 "string.format.c"
            mercury__string__format__succeeded = (mercury__string__format__V_4_4 == mercury__string__format__V_9_9);
#line 75 "string.format.m"
            if (mercury__string__format__succeeded)
#line 75 "string.format.m"
              {
#line 8537 "string.format.c"
                mercury__string__format__succeeded = (mercury__string__format__V_5_5 == mercury__string__format__V_10_10);
#line 75 "string.format.m"
                if (mercury__string__format__succeeded)
#line 75 "string.format.m"
                  {
#line 8543 "string.format.c"
                    mercury__string__format__succeeded = (mercury__string__format__V_6_6 == mercury__string__format__V_11_11);
#line 75 "string.format.m"
                    if (mercury__string__format__succeeded)
#line 8547 "string.format.c"
                      mercury__string__format__succeeded = (mercury__string__format__V_7_7 == mercury__string__format__V_12_12);
#line 75 "string.format.m"
                  }
#line 75 "string.format.m"
              }
#line 75 "string.format.m"
          }
#line 75 "string.format.m"
      }
#line 75 "string.format.m"
    return mercury__string__format__succeeded;
#line 75 "string.format.m"
  }
#line 75 "string.format.m"
}

#line 63 "string.format.m"
void MR_CALL 
mercury__string__format____Compare____flag_zero_0_0(
#line 63 "string.format.m"
  MR_Word * mercury__string__format__HeadVar__1_1,
#line 63 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2,
#line 63 "string.format.m"
  MR_Word mercury__string__format__HeadVar__3_3)
#line 63 "string.format.m"
{
#line 63 "string.format.m"
  {
#line 63 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 63 "string.format.m"
    MR_Integer mercury__string__format__Cast_HeadVar1_4 = (MR_Integer) mercury__string__format__HeadVar__2_2;
#line 63 "string.format.m"
    MR_Integer mercury__string__format__Cast_HeadVar2_5 = (MR_Integer) mercury__string__format__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__string__format__succeeded = (mercury__string__format__Cast_HeadVar1_4 < mercury__string__format__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__string__format__succeeded = (mercury__string__format__Cast_HeadVar1_4 == mercury__string__format__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 63 "string.format.m"
  }
#line 63 "string.format.m"
}

#line 63 "string.format.m"
MR_bool MR_CALL 
mercury__string__format____Unify____flag_zero_0_0(
#line 63 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_1,
#line 63 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2)
#line 63 "string.format.m"
{
#line 8620 "string.format.c"
  {
#line 8622 "string.format.c"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__HeadVar__2_1 == mercury__string__format__HeadVar__2_2);

#line 8625 "string.format.c"
    return mercury__string__format__succeeded;
#line 8627 "string.format.c"
  }
#line 63 "string.format.m"
}

#line 59 "string.format.m"
void MR_CALL 
mercury__string__format____Compare____flag_space_0_0(
#line 59 "string.format.m"
  MR_Word * mercury__string__format__HeadVar__1_1,
#line 59 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2,
#line 59 "string.format.m"
  MR_Word mercury__string__format__HeadVar__3_3)
#line 59 "string.format.m"
{
#line 59 "string.format.m"
  {
#line 59 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 59 "string.format.m"
    MR_Integer mercury__string__format__Cast_HeadVar1_4 = (MR_Integer) mercury__string__format__HeadVar__2_2;
#line 59 "string.format.m"
    MR_Integer mercury__string__format__Cast_HeadVar2_5 = (MR_Integer) mercury__string__format__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__string__format__succeeded = (mercury__string__format__Cast_HeadVar1_4 < mercury__string__format__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__string__format__succeeded = (mercury__string__format__Cast_HeadVar1_4 == mercury__string__format__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 59 "string.format.m"
  }
#line 59 "string.format.m"
}

#line 59 "string.format.m"
MR_bool MR_CALL 
mercury__string__format____Unify____flag_space_0_0(
#line 59 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_1,
#line 59 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2)
#line 59 "string.format.m"
{
#line 8688 "string.format.c"
  {
#line 8690 "string.format.c"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__HeadVar__2_1 == mercury__string__format__HeadVar__2_2);

#line 8693 "string.format.c"
    return mercury__string__format__succeeded;
#line 8695 "string.format.c"
  }
#line 59 "string.format.m"
}

#line 71 "string.format.m"
void MR_CALL 
mercury__string__format____Compare____flag_plus_0_0(
#line 71 "string.format.m"
  MR_Word * mercury__string__format__HeadVar__1_1,
#line 71 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2,
#line 71 "string.format.m"
  MR_Word mercury__string__format__HeadVar__3_3)
#line 71 "string.format.m"
{
#line 71 "string.format.m"
  {
#line 71 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 71 "string.format.m"
    MR_Integer mercury__string__format__Cast_HeadVar1_4 = (MR_Integer) mercury__string__format__HeadVar__2_2;
#line 71 "string.format.m"
    MR_Integer mercury__string__format__Cast_HeadVar2_5 = (MR_Integer) mercury__string__format__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__string__format__succeeded = (mercury__string__format__Cast_HeadVar1_4 < mercury__string__format__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__string__format__succeeded = (mercury__string__format__Cast_HeadVar1_4 == mercury__string__format__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 71 "string.format.m"
  }
#line 71 "string.format.m"
}

#line 71 "string.format.m"
MR_bool MR_CALL 
mercury__string__format____Unify____flag_plus_0_0(
#line 71 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_1,
#line 71 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2)
#line 71 "string.format.m"
{
#line 8756 "string.format.c"
  {
#line 8758 "string.format.c"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__HeadVar__2_1 == mercury__string__format__HeadVar__2_2);

#line 8761 "string.format.c"
    return mercury__string__format__succeeded;
#line 8763 "string.format.c"
  }
#line 71 "string.format.m"
}

#line 67 "string.format.m"
void MR_CALL 
mercury__string__format____Compare____flag_minus_0_0(
#line 67 "string.format.m"
  MR_Word * mercury__string__format__HeadVar__1_1,
#line 67 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2,
#line 67 "string.format.m"
  MR_Word mercury__string__format__HeadVar__3_3)
#line 67 "string.format.m"
{
#line 67 "string.format.m"
  {
#line 67 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 67 "string.format.m"
    MR_Integer mercury__string__format__Cast_HeadVar1_4 = (MR_Integer) mercury__string__format__HeadVar__2_2;
#line 67 "string.format.m"
    MR_Integer mercury__string__format__Cast_HeadVar2_5 = (MR_Integer) mercury__string__format__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__string__format__succeeded = (mercury__string__format__Cast_HeadVar1_4 < mercury__string__format__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__string__format__succeeded = (mercury__string__format__Cast_HeadVar1_4 == mercury__string__format__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 67 "string.format.m"
  }
#line 67 "string.format.m"
}

#line 67 "string.format.m"
MR_bool MR_CALL 
mercury__string__format____Unify____flag_minus_0_0(
#line 67 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_1,
#line 67 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2)
#line 67 "string.format.m"
{
#line 8824 "string.format.c"
  {
#line 8826 "string.format.c"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__HeadVar__2_1 == mercury__string__format__HeadVar__2_2);

#line 8829 "string.format.c"
    return mercury__string__format__succeeded;
#line 8831 "string.format.c"
  }
#line 67 "string.format.m"
}

#line 55 "string.format.m"
void MR_CALL 
mercury__string__format____Compare____flag_hash_0_0(
#line 55 "string.format.m"
  MR_Word * mercury__string__format__HeadVar__1_1,
#line 55 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2,
#line 55 "string.format.m"
  MR_Word mercury__string__format__HeadVar__3_3)
#line 55 "string.format.m"
{
#line 55 "string.format.m"
  {
#line 55 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 55 "string.format.m"
    MR_Integer mercury__string__format__Cast_HeadVar1_4 = (MR_Integer) mercury__string__format__HeadVar__2_2;
#line 55 "string.format.m"
    MR_Integer mercury__string__format__Cast_HeadVar2_5 = (MR_Integer) mercury__string__format__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__string__format__succeeded = (mercury__string__format__Cast_HeadVar1_4 < mercury__string__format__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__string__format__succeeded)
#line 68 "private_builtin.opt"
      *mercury__string__format__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__string__format__succeeded = (mercury__string__format__Cast_HeadVar1_4 == mercury__string__format__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__string__format__succeeded)
#line 73 "private_builtin.opt"
          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__string__format__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 55 "string.format.m"
  }
#line 55 "string.format.m"
}

#line 55 "string.format.m"
MR_bool MR_CALL 
mercury__string__format____Unify____flag_hash_0_0(
#line 55 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_1,
#line 55 "string.format.m"
  MR_Word mercury__string__format__HeadVar__2_2)
#line 55 "string.format.m"
{
#line 8892 "string.format.c"
  {
#line 8894 "string.format.c"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__HeadVar__2_1 == mercury__string__format__HeadVar__2_2);

#line 8897 "string.format.c"
    return mercury__string__format__succeeded;
#line 8899 "string.format.c"
  }
#line 55 "string.format.m"
}

#line 2127 "string.format.m"
static void MR_CALL 
mercury__string__format__split_at_decimal_point_3_p_0(
#line 2127 "string.format.m"
  MR_String mercury__string__format__Str_4,
#line 2127 "string.format.m"
  MR_String * mercury__string__format__Mantissa_5,
#line 2127 "string.format.m"
  MR_String * mercury__string__format__Fraction_6)
#line 2127 "string.format.m"
{
#line 2129 "string.format.m"
  {
#line 2129 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 2129 "string.format.m"
    MR_Word mercury__string__format__TypeCtorInfo_13_13;
#line 2129 "string.format.m"
    MR_Word mercury__string__format__MantAndFrac_7;
#line 2129 "string.format.m"
    MR_Integer mercury__string__format__WordStart_7_19;
#line 2131 "string.format.m"
    MR_Box mercury__string__format__conv0_Mantissa_5;
#line 2134 "string.format.m"
    MR_String mercury__string__format__Fraction0_8;
#line 2132 "string.format.m"
    MR_Box mercury__string__format__conv1_Fraction0_8;

#line 509 "string.opt"
    {
#line 509 "string.opt"
      mercury__string__format__next_boundary__ho7_4_p_in__string_0(mercury__string__format__Str_4, (MR_Integer) 0, &mercury__string__format__WordStart_7_19);
    }
#line 510 "string.opt"
    {
#line 510 "string.opt"
      mercury__string__format__words_loop__ho6_4_p_in__string_0(mercury__string__format__Str_4, mercury__string__format__WordStart_7_19, &mercury__string__format__MantAndFrac_7);
    }
#line 8942 "string.format.c"
    mercury__string__format__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2131 "string.format.m"
    {
#line 2131 "string.format.m"
      mercury__list__det_index0_3_p_0(mercury__string__format__TypeCtorInfo_13_13, mercury__string__format__MantAndFrac_7, (MR_Integer) 0, &mercury__string__format__conv0_Mantissa_5);
    }
#line 2131 "string.format.m"
    *mercury__string__format__Mantissa_5 = ((MR_String) mercury__string__format__conv0_Mantissa_5);
#line 2132 "string.format.m"
    {
#line 2132 "string.format.m"
      mercury__string__format__succeeded = mercury__list__index0_3_p_0(mercury__string__format__TypeCtorInfo_13_13, mercury__string__format__MantAndFrac_7, (MR_Integer) 1, &mercury__string__format__conv1_Fraction0_8);
    }
#line 2132 "string.format.m"
    if (mercury__string__format__succeeded)
#line 2132 "string.format.m"
      {
#line 2132 "string.format.m"
        mercury__string__format__Fraction0_8 = ((MR_String) mercury__string__format__conv1_Fraction0_8);
#line 2132 "string.format.m"
        mercury__string__format__succeeded = MR_TRUE;
#line 2132 "string.format.m"
      }
#line 2134 "string.format.m"
    if (mercury__string__format__succeeded)
#line 2133 "string.format.m"
      *mercury__string__format__Fraction_6 = mercury__string__format__Fraction0_8;
#line 2134 "string.format.m"
    else
#line 2135 "string.format.m"
      *mercury__string__format__Fraction_6 = (MR_String) "";
#line 2129 "string.format.m"
  }
#line 2127 "string.format.m"
}

#line 2120 "string.format.m"
static void MR_CALL 
mercury__string__format__split_at_exponent_3_p_0(
#line 2120 "string.format.m"
  MR_String mercury__string__format__Str_4,
#line 2120 "string.format.m"
  MR_String * mercury__string__format__Float_5,
#line 2120 "string.format.m"
  MR_String * mercury__string__format__Exponent_6)
#line 2120 "string.format.m"
{
#line 2122 "string.format.m"
  {
#line 2122 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 2122 "string.format.m"
    MR_Word mercury__string__format__TypeCtorInfo_12_12;
#line 2122 "string.format.m"
    MR_Word mercury__string__format__FloatAndExponent_7;
#line 2122 "string.format.m"
    MR_Integer mercury__string__format__WordStart_7_18;
#line 2124 "string.format.m"
    MR_Box mercury__string__format__conv0_Float_5;
#line 2125 "string.format.m"
    MR_Box mercury__string__format__conv1_Exponent_6;

#line 509 "string.opt"
    {
#line 509 "string.opt"
      mercury__string__format__next_boundary__ho5_4_p_in__string_0(mercury__string__format__Str_4, (MR_Integer) 0, &mercury__string__format__WordStart_7_18);
    }
#line 510 "string.opt"
    {
#line 510 "string.opt"
      mercury__string__format__words_loop__ho4_4_p_in__string_0(mercury__string__format__Str_4, mercury__string__format__WordStart_7_18, &mercury__string__format__FloatAndExponent_7);
    }
#line 9015 "string.format.c"
    mercury__string__format__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2124 "string.format.m"
    {
#line 2124 "string.format.m"
      mercury__list__det_index0_3_p_0(mercury__string__format__TypeCtorInfo_12_12, mercury__string__format__FloatAndExponent_7, (MR_Integer) 0, &mercury__string__format__conv0_Float_5);
    }
#line 2124 "string.format.m"
    *mercury__string__format__Float_5 = ((MR_String) mercury__string__format__conv0_Float_5);
#line 2125 "string.format.m"
    {
#line 2125 "string.format.m"
      mercury__list__det_index0_3_p_0(mercury__string__format__TypeCtorInfo_12_12, mercury__string__format__FloatAndExponent_7, (MR_Integer) 1, &mercury__string__format__conv1_Exponent_6);
    }
#line 2125 "string.format.m"
    *mercury__string__format__Exponent_6 = ((MR_String) mercury__string__format__conv1_Exponent_6);
#line 2122 "string.format.m"
  }
#line 2120 "string.format.m"
}

#line 2073 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__change_precision_2_f_0(
#line 2073 "string.format.m"
  MR_String mercury__string__format__OldFloat_4,
#line 2073 "string.format.m"
  MR_Integer mercury__string__format__Prec_5)
#line 2073 "string.format.m"
{
#line 2075 "string.format.m"
  {
#line 2075 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 2075 "string.format.m"
    MR_String mercury__string__format__NewFloat_6;
#line 2075 "string.format.m"
    MR_String mercury__string__format__MantissaStr_7;
#line 2075 "string.format.m"
    MR_String mercury__string__format__FractionStr_8;
#line 2075 "string.format.m"
    MR_Integer mercury__string__format__FracStrLen_9;
#line 2075 "string.format.m"
    MR_String mercury__string__format__PrecFracStr_10;
#line 2075 "string.format.m"
    MR_String mercury__string__format__PrecMantissaStr_11;
#line 2075 "string.format.m"
    MR_String mercury__string__format__HalfNewFloat_18;

#line 2076 "string.format.m"
    {
#line 2076 "string.format.m"
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__OldFloat_4, &mercury__string__format__MantissaStr_7, &mercury__string__format__FractionStr_8);
    }
#line 250 "string.opt"
    {
#line 250 "string.opt"
      mercury__string__count_codepoints_2_p_0(mercury__string__format__FractionStr_8, &mercury__string__format__FracStrLen_9);
    }
#line 2078 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__Prec_5 > mercury__string__format__FracStrLen_9);
#line 2081 "string.format.m"
    if (mercury__string__format__succeeded)
#line 2079 "string.format.m"
      {
#line 555 "string.opt"
        {
#line 555 "string.opt"
          mercury__string__pad_right_4_p_0(mercury__string__format__FractionStr_8, (MR_Char) 48, mercury__string__format__Prec_5, &mercury__string__format__PrecFracStr_10);
        }
#line 2080 "string.format.m"
        mercury__string__format__PrecMantissaStr_11 = mercury__string__format__MantissaStr_7;
#line 2079 "string.format.m"
      }
#line 2081 "string.format.m"
    else
#line 2113 "string.format.m"
      {
#line 2081 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__Prec_5 < mercury__string__format__FracStrLen_9);
#line 2113 "string.format.m"
        if (mercury__string__format__succeeded)
#line 2082 "string.format.m"
          {
#line 2082 "string.format.m"
            MR_String mercury__string__format__UnroundedFrac_12;
#line 2082 "string.format.m"
            MR_Char mercury__string__format__NextDigit_13;
#line 171 "string.opt"
            MR_Char mercury__string__format__Char0_7_62;
#line 154 "string.opt"
            MR_Integer mercury__string__format__Len_7_67;
#line 2085 "string.format.m"
            MR_Integer mercury__string__format__V_21_21;
#line 2085 "string.format.m"
            MR_Integer mercury__string__format__V_22_22;
#line 2085 "string.format.m"
            MR_Integer mercury__string__format__V_23_23;
#line 2085 "string.format.m"
            MR_Integer mercury__string__format__V_24_24;
#line 2085 "string.format.m"
            MR_Char mercury__string__format__V_25_25;

#line 483 "string.opt"
            {
#line 483 "string.opt"
              mercury__string__between_4_p_0(mercury__string__format__FractionStr_8, (MR_Integer) 0, mercury__string__format__Prec_5, &mercury__string__format__UnroundedFrac_12);
            }
#line 242 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__format__FractionStr_8 ;
		{
#line 242 "string.opt"

    Length = strlen(Str);

#line 9136 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Len_7_67  = Length;
#line 242 "string.opt"
}
#line 762 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__format__Prec_5 ;
	Length =  mercury__string__format__Len_7_67 ;
		{
#line 762 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 9165 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 762 "string.opt"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 154 "string.opt"
            if (mercury__string__format__succeeded)
#line 154 "string.opt"
              {
#line 159 "string.opt"
                {
#line 159 "string.opt"
                  mercury__string__unsafe_index_3_p_0(mercury__string__format__FractionStr_8, mercury__string__format__Prec_5, &mercury__string__format__Char0_7_62);
                }
#line 159 "string.opt"
                mercury__string__format__succeeded = MR_TRUE;
#line 154 "string.opt"
              }
#line 171 "string.opt"
            if (mercury__string__format__succeeded)
#line 170 "string.opt"
              mercury__string__format__NextDigit_13 = mercury__string__format__Char0_7_62;
#line 171 "string.opt"
            else
#line 172 "string.opt"
              {
#line 173 "string.opt"
                {
#line 173 "string.opt"
                  mercury__require__error_1_p_0((MR_String) "string.det_index: index out of range");
                }
#line 172 "string.opt"
              }
#line 2085 "string.format.m"
            mercury__string__format__succeeded = (strcmp(mercury__string__format__UnroundedFrac_12, (MR_String) "") == 0);
#line 2085 "string.format.m"
            mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 2085 "string.format.m"
            if (mercury__string__format__succeeded)
#line 2085 "string.format.m"
              {
#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__format__NextDigit_13 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 9223 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__V_23_23  = Int;
#line 66 "char.opt"
}
#line 2086 "string.format.m"
                mercury__string__format__V_25_25 = (MR_Char) 48;
#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__format__V_25_25 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 9245 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__V_24_24  = Int;
#line 66 "char.opt"
}
#line 2086 "string.format.m"
                mercury__string__format__V_21_21 = (mercury__string__format__V_23_23 - mercury__string__format__V_24_24);
#line 2086 "string.format.m"
                mercury__string__format__V_22_22 = (MR_Integer) 5;
#line 2086 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__V_21_21 >= mercury__string__format__V_22_22);
#line 2085 "string.format.m"
              }
#line 2102 "string.format.m"
            if (mercury__string__format__succeeded)
#line 2088 "string.format.m"
              {
#line 2088 "string.format.m"
                MR_Integer mercury__string__format__NewPrecFrac_14;
#line 2088 "string.format.m"
                MR_String mercury__string__format__NewPrecFracStrNotOK_15;
#line 2088 "string.format.m"
                MR_String mercury__string__format__NewPrecFracStr_16;
#line 2088 "string.format.m"
                MR_Integer mercury__string__format__V_26_26;
#line 2092 "string.format.m"
                MR_Integer mercury__string__format__V_29_29;
#line 2092 "string.format.m"
                MR_Integer mercury__string__format__V_30_30;

#line 680 "string.opt"
                {
#line 680 "string.opt"
                  mercury__string__format__V_26_26 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, mercury__string__format__UnroundedFrac_12);
                }
#line 2088 "string.format.m"
                mercury__string__format__NewPrecFrac_14 = (mercury__string__format__V_26_26 + (MR_Integer) 1);
#line 705 "string.opt"
                {
#line 705 "string.opt"
                  mercury__string__int_to_base_string_3_p_0(mercury__string__format__NewPrecFrac_14, (MR_Integer) 10, &mercury__string__format__NewPrecFracStrNotOK_15);
                }
#line 553 "string.opt"
                {
#line 553 "string.opt"
                  mercury__string__pad_left_4_p_0(mercury__string__format__NewPrecFracStrNotOK_15, (MR_Char) 48, mercury__string__format__Prec_5, &mercury__string__format__NewPrecFracStr_16);
                }
#line 250 "string.opt"
                {
#line 250 "string.opt"
                  mercury__string__count_codepoints_2_p_0(mercury__string__format__NewPrecFracStr_16, &mercury__string__format__V_29_29);
                }
#line 250 "string.opt"
                {
#line 250 "string.opt"
                  mercury__string__count_codepoints_2_p_0(mercury__string__format__UnroundedFrac_12, &mercury__string__format__V_30_30);
                }
#line 2092 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__V_29_29 > mercury__string__format__V_30_30);
#line 2098 "string.format.m"
                if (mercury__string__format__succeeded)
#line 2095 "string.format.m"
                  {
#line 2095 "string.format.m"
                    MR_Integer mercury__string__format__PrecMantissaInt_17;
#line 2095 "string.format.m"
                    MR_Integer mercury__string__format__V_32_32 = ((MR_Integer) 1 + mercury__string__format__Prec_5);
#line 2095 "string.format.m"
                    MR_Integer mercury__string__format__V_34_34;

#line 483 "string.opt"
                    {
#line 483 "string.opt"
                      mercury__string__between_4_p_0(mercury__string__format__NewPrecFracStr_16, (MR_Integer) 1, mercury__string__format__V_32_32, &mercury__string__format__PrecFracStr_10);
                    }
#line 680 "string.opt"
                    {
#line 680 "string.opt"
                      mercury__string__format__V_34_34 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, mercury__string__format__MantissaStr_7);
                    }
#line 2096 "string.format.m"
                    mercury__string__format__PrecMantissaInt_17 = (mercury__string__format__V_34_34 + (MR_Integer) 1);
#line 2097 "string.format.m"
                    {
#line 2097 "string.format.m"
                      mercury__string__format__PrecMantissaStr_11 = mercury__string__int_to_string_1_f_0(mercury__string__format__PrecMantissaInt_17);
                    }
#line 2095 "string.format.m"
                  }
#line 2098 "string.format.m"
                else
#line 2099 "string.format.m"
                  {
#line 2099 "string.format.m"
                    mercury__string__format__PrecFracStr_10 = mercury__string__format__NewPrecFracStr_16;
#line 2100 "string.format.m"
                    mercury__string__format__PrecMantissaStr_11 = mercury__string__format__MantissaStr_7;
#line 2099 "string.format.m"
                  }
#line 2088 "string.format.m"
              }
#line 2102 "string.format.m"
            else
#line 2109 "string.format.m"
              {
#line 2103 "string.format.m"
                MR_Integer mercury__string__format__V_36_36;
#line 2103 "string.format.m"
                MR_Integer mercury__string__format__V_37_37;
#line 2103 "string.format.m"
                MR_Integer mercury__string__format__V_38_38;
#line 2103 "string.format.m"
                MR_Integer mercury__string__format__V_39_39;
#line 2103 "string.format.m"
                MR_Char mercury__string__format__V_40_40;

#line 2103 "string.format.m"
                mercury__string__format__succeeded = (strcmp(mercury__string__format__UnroundedFrac_12, (MR_String) "") == 0);
#line 2103 "string.format.m"
                if (mercury__string__format__succeeded)
#line 2103 "string.format.m"
                  {
#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__format__change_precision_2_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__format__NextDigit_13 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 9382 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__V_38_38  = Int;
#line 66 "char.opt"
}
#line 2104 "string.format.m"
                    mercury__string__format__V_40_40 = (MR_Char) 48;
#line 2104 "string.format.m"
                    {
#line 2104 "string.format.m"
                      mercury__string__format__V_39_39 = mercury__char__to_int_1_f_0(mercury__string__format__V_40_40);
                    }
#line 2104 "string.format.m"
                    mercury__string__format__V_36_36 = (mercury__string__format__V_38_38 - mercury__string__format__V_39_39);
#line 2104 "string.format.m"
                    mercury__string__format__V_37_37 = (MR_Integer) 5;
#line 2104 "string.format.m"
                    mercury__string__format__succeeded = (mercury__string__format__V_36_36 >= mercury__string__format__V_37_37);
#line 2103 "string.format.m"
                  }
#line 2109 "string.format.m"
                if (mercury__string__format__succeeded)
#line 2106 "string.format.m"
                  {
#line 2106 "string.format.m"
                    MR_Integer mercury__string__format__V_41_41;
#line 2106 "string.format.m"
                    MR_Integer mercury__string__format__PrecMantissaInt_44;

#line 2106 "string.format.m"
                    {
#line 2106 "string.format.m"
                      mercury__string__format__V_41_41 = mercury__string__det_to_int_1_f_0(mercury__string__format__MantissaStr_7);
                    }
#line 2106 "string.format.m"
                    mercury__string__format__PrecMantissaInt_44 = (mercury__string__format__V_41_41 + (MR_Integer) 1);
#line 2107 "string.format.m"
                    {
#line 2107 "string.format.m"
                      mercury__string__format__PrecMantissaStr_11 = mercury__string__int_to_string_1_f_0(mercury__string__format__PrecMantissaInt_44);
                    }
#line 2108 "string.format.m"
                    mercury__string__format__PrecFracStr_10 = (MR_String) "";
#line 2106 "string.format.m"
                  }
#line 2109 "string.format.m"
                else
#line 2110 "string.format.m"
                  {
#line 2110 "string.format.m"
                    mercury__string__format__PrecFracStr_10 = mercury__string__format__UnroundedFrac_12;
#line 2111 "string.format.m"
                    mercury__string__format__PrecMantissaStr_11 = mercury__string__format__MantissaStr_7;
#line 2110 "string.format.m"
                  }
#line 2109 "string.format.m"
              }
#line 2082 "string.format.m"
          }
#line 2113 "string.format.m"
        else
#line 2114 "string.format.m"
          {
#line 2114 "string.format.m"
            mercury__string__format__PrecFracStr_10 = mercury__string__format__FractionStr_8;
#line 2115 "string.format.m"
            mercury__string__format__PrecMantissaStr_11 = mercury__string__format__MantissaStr_7;
#line 2114 "string.format.m"
          }
#line 2113 "string.format.m"
      }
#line 2117 "string.format.m"
    {
#line 2117 "string.format.m"
      mercury__string__format__HalfNewFloat_18 = mercury__string__f_43_43_2_f_0(mercury__string__format__PrecMantissaStr_11, (MR_String) ".");
    }
#line 2118 "string.format.m"
    {
#line 2118 "string.format.m"
      return mercury__string__format__NewFloat_6 = mercury__string__f_43_43_2_f_0(mercury__string__format__HalfNewFloat_18, mercury__string__format__PrecFracStr_10);
    }
#line 2075 "string.format.m"
    return mercury__string__format__NewFloat_6;
#line 2075 "string.format.m"
  }
#line 2073 "string.format.m"
}

#line 2040 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__calculate_base_unsafe_2_f_0(
#line 2040 "string.format.m"
  MR_String mercury__string__format__Float_4,
#line 2040 "string.format.m"
  MR_Integer mercury__string__format__Prec_5)
#line 2040 "string.format.m"
{
#line 2042 "string.format.m"
  {
#line 2042 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 2042 "string.format.m"
    MR_String mercury__string__format__Exp_6;
#line 2042 "string.format.m"
    MR_Integer mercury__string__format__Place_7;
#line 2042 "string.format.m"
    MR_String mercury__string__format__MantissaStr_8;
#line 2042 "string.format.m"
    MR_String mercury__string__format__FractionStr_9;
#line 2042 "string.format.m"
    MR_String mercury__string__format__ExpMantissaStr_13;
#line 2042 "string.format.m"
    MR_String mercury__string__format__ExpFractionStr_15;
#line 2042 "string.format.m"
    MR_String mercury__string__format__MantissaAndPoint_17;
#line 2042 "string.format.m"
    MR_String mercury__string__format__UnroundedExpStr_18;
#line 2042 "string.format.m"
    MR_String mercury__string__format__MantissaStr_36;
#line 2042 "string.format.m"
    MR_Integer mercury__string__format__NumZeros_38;
#line 2042 "string.format.m"
    MR_Integer mercury__string__format__V_39_39;
#line 2042 "string.format.m"
    MR_Word mercury__string__format__V_41_41;
#line 2008 "string.format.m"
    MR_String mercury__string__format___FractionStr_37;

#line 2008 "string.format.m"
    {
#line 2008 "string.format.m"
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__Float_4, &mercury__string__format__MantissaStr_36, &mercury__string__format___FractionStr_37);
    }
#line 250 "string.opt"
    {
#line 250 "string.opt"
      mercury__string__count_codepoints_2_p_0(mercury__string__format__MantissaStr_36, &mercury__string__format__V_39_39);
    }
#line 2009 "string.format.m"
    mercury__string__format__NumZeros_38 = (mercury__string__format__V_39_39 - (MR_Integer) 1);
#line 139 "string.opt"
    {
#line 139 "string.opt"
      mercury__string__to_char_list_2_p_0(mercury__string__format__Float_4, &mercury__string__format__V_41_41);
    }
#line 2010 "string.format.m"
    {
#line 2010 "string.format.m"
      mercury__string__format__Place_7 = mercury__string__format__find_non_zero_pos_2_f_0(mercury__string__format__V_41_41, mercury__string__format__NumZeros_38);
    }
#line 2044 "string.format.m"
    {
#line 2044 "string.format.m"
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__Float_4, &mercury__string__format__MantissaStr_8, &mercury__string__format__FractionStr_9);
    }
#line 2045 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__Place_7 < (MR_Integer) 0);
#line 2057 "string.format.m"
    if (mercury__string__format__succeeded)
#line 2046 "string.format.m"
      {
#line 2046 "string.format.m"
        MR_Integer mercury__string__format__DecimalPos_10;
#line 2046 "string.format.m"
        MR_String mercury__string__format__PaddedMantissaStr_11;
#line 2046 "string.format.m"
        MR_Integer mercury__string__format__MantissaInt_12;
#line 2046 "string.format.m"
        MR_String mercury__string__format__PaddedFractionStr_14;
#line 2046 "string.format.m"
        MR_Integer mercury__string__format__V_22_22;
#line 2046 "string.format.m"
        MR_Integer mercury__string__format__V_24_24;
#line 2046 "string.format.m"
        MR_Integer mercury__string__format__V_25_25;

#line 70 "int.opt"
        {
#line 70 "int.opt"
          mercury__int__abs_2_p_0(mercury__string__format__Place_7, &mercury__string__format__DecimalPos_10);
        }
#line 483 "string.opt"
        {
#line 483 "string.opt"
          mercury__string__between_4_p_0(mercury__string__format__FractionStr_9, (MR_Integer) 0, mercury__string__format__DecimalPos_10, &mercury__string__format__PaddedMantissaStr_11);
        }
#line 680 "string.opt"
        {
#line 680 "string.opt"
          mercury__string__format__MantissaInt_12 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, mercury__string__format__PaddedMantissaStr_11);
        }
#line 705 "string.opt"
        {
#line 705 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__string__format__MantissaInt_12, (MR_Integer) 10, &mercury__string__format__ExpMantissaStr_13);
        }
#line 2054 "string.format.m"
        mercury__string__format__V_22_22 = (mercury__string__format__Prec_5 + (MR_Integer) 1);
#line 555 "string.opt"
        {
#line 555 "string.opt"
          mercury__string__pad_right_4_p_0(mercury__string__format__FractionStr_9, (MR_Char) 48, mercury__string__format__V_22_22, &mercury__string__format__PaddedFractionStr_14);
        }
#line 2056 "string.format.m"
        mercury__string__format__V_25_25 = (mercury__string__format__DecimalPos_10 + mercury__string__format__Prec_5);
#line 2056 "string.format.m"
        mercury__string__format__V_24_24 = (mercury__string__format__V_25_25 + (MR_Integer) 1);
#line 483 "string.opt"
        {
#line 483 "string.opt"
          mercury__string__between_4_p_0(mercury__string__format__PaddedFractionStr_14, mercury__string__format__DecimalPos_10, mercury__string__format__V_24_24, &mercury__string__format__ExpFractionStr_15);
        }
#line 2046 "string.format.m"
      }
#line 2057 "string.format.m"
    else
#line 2061 "string.format.m"
      {
#line 2057 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__Place_7 > (MR_Integer) 0);
#line 2061 "string.format.m"
        if (mercury__string__format__succeeded)
#line 2058 "string.format.m"
          {
#line 2058 "string.format.m"
            MR_String mercury__string__format__FirstHalfOfFractionStr_16;
#line 2058 "string.format.m"
            MR_Integer mercury__string__format__V_31_31;

#line 483 "string.opt"
            {
#line 483 "string.opt"
              mercury__string__between_4_p_0(mercury__string__format__MantissaStr_8, (MR_Integer) 0, (MR_Integer) 1, &mercury__string__format__ExpMantissaStr_13);
            }
#line 2059 "string.format.m"
            mercury__string__format__V_31_31 = (mercury__string__format__Place_7 + (MR_Integer) 1);
#line 483 "string.opt"
            {
#line 483 "string.opt"
              mercury__string__between_4_p_0(mercury__string__format__MantissaStr_8, (MR_Integer) 1, mercury__string__format__V_31_31, &mercury__string__format__FirstHalfOfFractionStr_16);
            }
#line 406 "string.opt"
            {
#line 406 "string.opt"
              mercury__string__append_3_p_2(mercury__string__format__FirstHalfOfFractionStr_16, mercury__string__format__FractionStr_9, &mercury__string__format__ExpFractionStr_15);
            }
#line 2058 "string.format.m"
          }
#line 2061 "string.format.m"
        else
#line 2062 "string.format.m"
          {
#line 2062 "string.format.m"
            mercury__string__format__ExpMantissaStr_13 = mercury__string__format__MantissaStr_8;
#line 2063 "string.format.m"
            mercury__string__format__ExpFractionStr_15 = mercury__string__format__FractionStr_9;
#line 2062 "string.format.m"
          }
#line 2061 "string.format.m"
      }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2(mercury__string__format__ExpMantissaStr_13, (MR_String) ".", &mercury__string__format__MantissaAndPoint_17);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2(mercury__string__format__MantissaAndPoint_17, mercury__string__format__ExpFractionStr_15, &mercury__string__format__UnroundedExpStr_18);
    }
#line 2067 "string.format.m"
    {
#line 2067 "string.format.m"
      return mercury__string__format__Exp_6 = mercury__string__format__change_precision_2_f_0(mercury__string__format__UnroundedExpStr_18, mercury__string__format__Prec_5);
    }
#line 2042 "string.format.m"
    return mercury__string__format__Exp_6;
#line 2042 "string.format.m"
  }
#line 2040 "string.format.m"
}

#line 2017 "string.format.m"
static MR_Integer MR_CALL 
mercury__string__format__find_non_zero_pos_2_f_0(
#line 2017 "string.format.m"
  MR_Word mercury__string__format__L_4,
#line 2017 "string.format.m"
  MR_Integer mercury__string__format__CurrentPos_5)
#line 2017 "string.format.m"
{
#line 2021 "string.format.m"
  while (MR_TRUE)
#line 2021 "string.format.m"
    {
#line 2021 "string.format.m"
      /* tailcall optimized into a loop */
#line 2021 "string.format.m"
      {
#line 2021 "string.format.m"
        MR_bool mercury__string__format__succeeded;
#line 2021 "string.format.m"
        MR_Integer mercury__string__format__ActualPos_6;

#line 2021 "string.format.m"
        if ((mercury__string__format__L_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2031 "string.format.m"
          mercury__string__format__ActualPos_6 = (MR_Integer) 0;
#line 2021 "string.format.m"
        else
#line 2021 "string.format.m"
          {
#line 2021 "string.format.m"
            MR_Char mercury__string__format__H_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__L_4, (MR_Integer) 0)));
#line 2021 "string.format.m"
            MR_Word mercury__string__format__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__L_4, (MR_Integer) 1)));

#line 2140 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__H_7 == (MR_Char) 46);
#line 2024 "string.format.m"
            if (mercury__string__format__succeeded)
#line 2023 "string.format.m"
              {
#line 2023 "string.format.m"
                /* direct tailcall eliminated */
#line 2023 "string.format.m"
                {
#line 2023 "string.format.m"
                  MR_Word mercury__string__format__L__tmp_copy_4 = mercury__string__format__T_8;

#line 2023 "string.format.m"
                  mercury__string__format__L_4 = mercury__string__format__L__tmp_copy_4;
#line 2023 "string.format.m"
                }
#line 2023 "string.format.m"
                continue;
#line 2023 "string.format.m"
              }
#line 2024 "string.format.m"
            else
#line 2026 "string.format.m"
              {
#line 2024 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__H_7 == (MR_Char) 48);
#line 2026 "string.format.m"
                if (mercury__string__format__succeeded)
#line 2025 "string.format.m"
                  {
#line 2025 "string.format.m"
                    MR_Integer mercury__string__format__V_9_9 = (mercury__string__format__CurrentPos_5 - (MR_Integer) 1);

#line 2025 "string.format.m"
                    /* direct tailcall eliminated */
#line 2025 "string.format.m"
                    {
#line 2025 "string.format.m"
                      MR_Word mercury__string__format__L__tmp_copy_4 = mercury__string__format__T_8;
#line 2025 "string.format.m"
                      MR_Integer mercury__string__format__CurrentPos__tmp_copy_5 = mercury__string__format__V_9_9;

#line 2025 "string.format.m"
                      mercury__string__format__CurrentPos_5 = mercury__string__format__CurrentPos__tmp_copy_5;
#line 2025 "string.format.m"
                      mercury__string__format__L_4 = mercury__string__format__L__tmp_copy_4;
#line 2025 "string.format.m"
                    }
#line 2025 "string.format.m"
                    continue;
#line 2025 "string.format.m"
                  }
#line 2026 "string.format.m"
                else
#line 2027 "string.format.m"
                  mercury__string__format__ActualPos_6 = mercury__string__format__CurrentPos_5;
#line 2026 "string.format.m"
              }
#line 2021 "string.format.m"
          }
#line 2021 "string.format.m"
        return mercury__string__format__ActualPos_6;
#line 2021 "string.format.m"
      }
#line 2021 "string.format.m"
      break;
#line 2021 "string.format.m"
    }
#line 2017 "string.format.m"
}

#line 1991 "string.format.m"
static MR_Word MR_CALL 
mercury__string__format__remove_zeros_1_f_0(
#line 1991 "string.format.m"
  MR_Word mercury__string__format__CharNum_3)
#line 1991 "string.format.m"
{
#line 1996 "string.format.m"
  while (MR_TRUE)
#line 1996 "string.format.m"
    {
#line 1996 "string.format.m"
      /* tailcall optimized into a loop */
#line 1996 "string.format.m"
      {
#line 1996 "string.format.m"
        MR_bool mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__CharNum_3)) == (MR_mktag((MR_Integer) 1)));
#line 1996 "string.format.m"
        MR_Word mercury__string__format__TrimmedNum_4;
#line 1996 "string.format.m"
        MR_Word mercury__string__format__Rest_5;
#line 1994 "string.format.m"
        MR_Char mercury__string__format__V_6_6;

#line 1994 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1994 "string.format.m"
          {
#line 1994 "string.format.m"
            mercury__string__format__V_6_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__CharNum_3, (MR_Integer) 0)));
#line 1994 "string.format.m"
            mercury__string__format__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__CharNum_3, (MR_Integer) 1)));
#line 1994 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__V_6_6 == (MR_Char) 48);
#line 1994 "string.format.m"
          }
#line 1996 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1995 "string.format.m"
          {
#line 1995 "string.format.m"
            /* direct tailcall eliminated */
#line 1995 "string.format.m"
            {
#line 1995 "string.format.m"
              MR_Word mercury__string__format__CharNum__tmp_copy_3 = mercury__string__format__Rest_5;

#line 1995 "string.format.m"
              mercury__string__format__CharNum_3 = mercury__string__format__CharNum__tmp_copy_3;
#line 1995 "string.format.m"
            }
#line 1995 "string.format.m"
            continue;
#line 1995 "string.format.m"
          }
#line 1996 "string.format.m"
        else
#line 1998 "string.format.m"
          {
#line 1998 "string.format.m"
            MR_Word mercury__string__format__Rest_8;
#line 1996 "string.format.m"
            MR_Char mercury__string__format__V_7_7;

#line 1996 "string.format.m"
            mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__CharNum_3)) == (MR_mktag((MR_Integer) 1)));
#line 1996 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1996 "string.format.m"
              {
#line 1996 "string.format.m"
                mercury__string__format__V_7_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__CharNum_3, (MR_Integer) 0)));
#line 1996 "string.format.m"
                mercury__string__format__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__CharNum_3, (MR_Integer) 1)));
#line 1996 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__V_7_7 == (MR_Char) 46);
#line 1996 "string.format.m"
              }
#line 1998 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1997 "string.format.m"
              mercury__string__format__TrimmedNum_4 = mercury__string__format__Rest_8;
#line 1998 "string.format.m"
            else
#line 1999 "string.format.m"
              mercury__string__format__TrimmedNum_4 = mercury__string__format__CharNum_3;
#line 1998 "string.format.m"
          }
#line 1996 "string.format.m"
        return mercury__string__format__TrimmedNum_4;
#line 1996 "string.format.m"
      }
#line 1996 "string.format.m"
      break;
#line 1996 "string.format.m"
    }
#line 1991 "string.format.m"
}

#line 1979 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__remove_trailing_zeros_1_f_0(
#line 1979 "string.format.m"
  MR_String mercury__string__format__Float_3)
#line 1979 "string.format.m"
{
#line 1981 "string.format.m"
  {
#line 1981 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1981 "string.format.m"
    MR_String mercury__string__format__TrimmedFloat_4;
#line 1981 "string.format.m"
    MR_Word mercury__string__format__TypeCtorInfo_9_9;
#line 1981 "string.format.m"
    MR_Word mercury__string__format__FloatCharList_5;
#line 1981 "string.format.m"
    MR_Word mercury__string__format__FloatCharListRev_6;
#line 1981 "string.format.m"
    MR_Word mercury__string__format__TrimmedFloatRevCharList_7;
#line 1981 "string.format.m"
    MR_Word mercury__string__format__TrimmedFloatCharList_8;

#line 139 "string.opt"
    {
#line 139 "string.opt"
      mercury__string__to_char_list_2_p_0(mercury__string__format__Float_3, &mercury__string__format__FloatCharList_5);
    }
#line 9901 "string.format.c"
    mercury__string__format__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__format__TypeCtorInfo_9_9, mercury__string__format__FloatCharList_5, &mercury__string__format__FloatCharListRev_6);
    }
#line 1984 "string.format.m"
    {
#line 1984 "string.format.m"
      mercury__string__format__TrimmedFloatRevCharList_7 = mercury__string__format__remove_zeros_1_f_0(mercury__string__format__FloatCharListRev_6);
    }
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__format__TypeCtorInfo_9_9, mercury__string__format__TrimmedFloatRevCharList_7, &mercury__string__format__TrimmedFloatCharList_8);
    }
#line 141 "string.opt"
    {
#line 141 "string.opt"
      mercury__string__from_char_list_2_p_0(mercury__string__format__TrimmedFloatCharList_8, &mercury__string__format__TrimmedFloat_4);
    }
#line 1981 "string.format.m"
    return mercury__string__format__TrimmedFloat_4;
#line 1981 "string.format.m"
  }
#line 1979 "string.format.m"
}

#line 1920 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__change_to_e_notation_3_f_0(
#line 1920 "string.format.m"
  MR_String mercury__string__format__Float_5,
#line 1920 "string.format.m"
  MR_Integer mercury__string__format__Prec_6,
#line 1920 "string.format.m"
  MR_String mercury__string__format__E_7)
#line 1920 "string.format.m"
{
#line 1922 "string.format.m"
  {
#line 1922 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1922 "string.format.m"
    MR_String mercury__string__format__ScientificFloat_8;
#line 1922 "string.format.m"
    MR_Integer mercury__string__format__UnsafeExponent_9;
#line 1922 "string.format.m"
    MR_String mercury__string__format__UnsafeBase_10;
#line 1922 "string.format.m"
    MR_String mercury__string__format__MantissaStr_11;
#line 1922 "string.format.m"
    MR_String mercury__string__format__SafeBase_13;
#line 1922 "string.format.m"
    MR_Integer mercury__string__format__SafeExponent_14;
#line 1922 "string.format.m"
    MR_String mercury__string__format__ExponentStr_15;
#line 1922 "string.format.m"
    MR_String mercury__string__format__MantissaStr_46;
#line 1922 "string.format.m"
    MR_Integer mercury__string__format__NumZeros_48;
#line 1922 "string.format.m"
    MR_Integer mercury__string__format__V_49_49;
#line 1922 "string.format.m"
    MR_Word mercury__string__format__V_51_51;
#line 2008 "string.format.m"
    MR_String mercury__string__format___FractionStr_47;
#line 1927 "string.format.m"
    MR_String mercury__string__format___FractionStr_12;
#line 1928 "string.format.m"
    MR_Integer mercury__string__format__V_16_16;

#line 2008 "string.format.m"
    {
#line 2008 "string.format.m"
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__Float_5, &mercury__string__format__MantissaStr_46, &mercury__string__format___FractionStr_47);
    }
#line 250 "string.opt"
    {
#line 250 "string.opt"
      mercury__string__count_codepoints_2_p_0(mercury__string__format__MantissaStr_46, &mercury__string__format__V_49_49);
    }
#line 2009 "string.format.m"
    mercury__string__format__NumZeros_48 = (mercury__string__format__V_49_49 - (MR_Integer) 1);
#line 139 "string.opt"
    {
#line 139 "string.opt"
      mercury__string__to_char_list_2_p_0(mercury__string__format__Float_5, &mercury__string__format__V_51_51);
    }
#line 2010 "string.format.m"
    {
#line 2010 "string.format.m"
      mercury__string__format__UnsafeExponent_9 = mercury__string__format__find_non_zero_pos_2_f_0(mercury__string__format__V_51_51, mercury__string__format__NumZeros_48);
    }
#line 1924 "string.format.m"
    {
#line 1924 "string.format.m"
      mercury__string__format__UnsafeBase_10 = mercury__string__format__calculate_base_unsafe_2_f_0(mercury__string__format__Float_5, mercury__string__format__Prec_6);
    }
#line 1927 "string.format.m"
    {
#line 1927 "string.format.m"
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__UnsafeBase_10, &mercury__string__format__MantissaStr_11, &mercury__string__format___FractionStr_12);
    }
#line 250 "string.opt"
    {
#line 250 "string.opt"
      mercury__string__count_codepoints_2_p_0(mercury__string__format__MantissaStr_11, &mercury__string__format__V_16_16);
    }
#line 1928 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__V_16_16 > (MR_Integer) 1);
#line 1934 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1932 "string.format.m"
      {
#line 1932 "string.format.m"
        MR_String mercury__string__format__V_18_18;

#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2(mercury__string__format__UnsafeBase_10, (MR_String) "0", &mercury__string__format__V_18_18);
        }
#line 1931 "string.format.m"
        {
#line 1931 "string.format.m"
          mercury__string__format__SafeBase_13 = mercury__string__format__calculate_base_unsafe_2_f_0(mercury__string__format__V_18_18, mercury__string__format__Prec_6);
        }
#line 1933 "string.format.m"
        mercury__string__format__SafeExponent_14 = (mercury__string__format__UnsafeExponent_9 + (MR_Integer) 1);
#line 1932 "string.format.m"
      }
#line 1934 "string.format.m"
    else
#line 1935 "string.format.m"
      {
#line 1935 "string.format.m"
        mercury__string__format__SafeBase_13 = mercury__string__format__UnsafeBase_10;
#line 1936 "string.format.m"
        mercury__string__format__SafeExponent_14 = mercury__string__format__UnsafeExponent_9;
#line 1935 "string.format.m"
      }
#line 1939 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__SafeExponent_14 >= (MR_Integer) 0);
#line 1947 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1943 "string.format.m"
      {
#line 1940 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__SafeExponent_14 < (MR_Integer) 10);
#line 1943 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1941 "string.format.m"
          {
#line 1941 "string.format.m"
            MR_Word mercury__string__format__V_23_23;
#line 1941 "string.format.m"
            MR_Word mercury__string__format__V_24_24;
#line 1941 "string.format.m"
            MR_Word mercury__string__format__V_26_26;
#line 1941 "string.format.m"
            MR_String mercury__string__format__V_27_27;
#line 1941 "string.format.m"
            MR_Word mercury__string__format__V_28_28;

#line 705 "string.opt"
            {
#line 705 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__string__format__SafeExponent_14, (MR_Integer) 10, &mercury__string__format__V_27_27);
            }
#line 1942 "string.format.m"
            mercury__string__format__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1942 "string.format.m"
            {
#line 1942 "string.format.m"
              mercury__string__format__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1942 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_26_26, 0) = ((MR_Box) (mercury__string__format__V_27_27));
#line 1942 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_26_26, 1) = ((MR_Box) (mercury__string__format__V_28_28));
#line 1942 "string.format.m"
            }
#line 1942 "string.format.m"
            {
#line 1942 "string.format.m"
              mercury__string__format__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1942 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_24_24, 0) = ((MR_Box) ((MR_String) "+0"));
#line 1942 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_24_24, 1) = ((MR_Box) (mercury__string__format__V_26_26));
#line 1942 "string.format.m"
            }
#line 1942 "string.format.m"
            {
#line 1942 "string.format.m"
              mercury__string__format__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1942 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_23_23, 0) = ((MR_Box) (mercury__string__format__E_7));
#line 1942 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_23_23, 1) = ((MR_Box) (mercury__string__format__V_24_24));
#line 1942 "string.format.m"
            }
#line 1941 "string.format.m"
            {
#line 1941 "string.format.m"
              mercury__string__format__ExponentStr_15 = mercury__string__append_list_1_f_0(mercury__string__format__V_23_23);
            }
#line 1941 "string.format.m"
          }
#line 1943 "string.format.m"
        else
#line 1944 "string.format.m"
          {
#line 1944 "string.format.m"
            MR_Word mercury__string__format__V_29_29;
#line 1944 "string.format.m"
            MR_Word mercury__string__format__V_30_30;
#line 1944 "string.format.m"
            MR_Word mercury__string__format__V_32_32;
#line 1944 "string.format.m"
            MR_String mercury__string__format__V_33_33;
#line 1944 "string.format.m"
            MR_Word mercury__string__format__V_34_34;

#line 705 "string.opt"
            {
#line 705 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__string__format__SafeExponent_14, (MR_Integer) 10, &mercury__string__format__V_33_33);
            }
#line 1945 "string.format.m"
            mercury__string__format__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1945 "string.format.m"
            {
#line 1945 "string.format.m"
              mercury__string__format__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1945 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_32_32, 0) = ((MR_Box) (mercury__string__format__V_33_33));
#line 1945 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_32_32, 1) = ((MR_Box) (mercury__string__format__V_34_34));
#line 1945 "string.format.m"
            }
#line 1945 "string.format.m"
            {
#line 1945 "string.format.m"
              mercury__string__format__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1945 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_30_30, 0) = ((MR_Box) ((MR_String) "+"));
#line 1945 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_30_30, 1) = ((MR_Box) (mercury__string__format__V_32_32));
#line 1945 "string.format.m"
            }
#line 1945 "string.format.m"
            {
#line 1945 "string.format.m"
              mercury__string__format__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1945 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_29_29, 0) = ((MR_Box) (mercury__string__format__E_7));
#line 1945 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_29_29, 1) = ((MR_Box) (mercury__string__format__V_30_30));
#line 1945 "string.format.m"
            }
#line 1944 "string.format.m"
            {
#line 1944 "string.format.m"
              mercury__string__format__ExponentStr_15 = mercury__string__append_list_1_f_0(mercury__string__format__V_29_29);
            }
#line 1944 "string.format.m"
          }
#line 1943 "string.format.m"
      }
#line 1947 "string.format.m"
    else
#line 1951 "string.format.m"
      {
#line 1948 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__SafeExponent_14 > (MR_Integer) -10);
#line 1951 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1949 "string.format.m"
          {
#line 1949 "string.format.m"
            MR_Word mercury__string__format__V_36_36;
#line 1949 "string.format.m"
            MR_Word mercury__string__format__V_37_37;
#line 1949 "string.format.m"
            MR_Word mercury__string__format__V_39_39;
#line 1949 "string.format.m"
            MR_String mercury__string__format__V_40_40;
#line 1949 "string.format.m"
            MR_Integer mercury__string__format__V_41_41;
#line 1949 "string.format.m"
            MR_Word mercury__string__format__V_42_42;

#line 70 "int.opt"
            {
#line 70 "int.opt"
              mercury__int__abs_2_p_0(mercury__string__format__SafeExponent_14, &mercury__string__format__V_41_41);
            }
#line 705 "string.opt"
            {
#line 705 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__string__format__V_41_41, (MR_Integer) 10, &mercury__string__format__V_40_40);
            }
#line 1950 "string.format.m"
            mercury__string__format__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1950 "string.format.m"
            {
#line 1950 "string.format.m"
              mercury__string__format__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1950 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_39_39, 0) = ((MR_Box) (mercury__string__format__V_40_40));
#line 1950 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_39_39, 1) = ((MR_Box) (mercury__string__format__V_42_42));
#line 1950 "string.format.m"
            }
#line 1950 "string.format.m"
            {
#line 1950 "string.format.m"
              mercury__string__format__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1950 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_37_37, 0) = ((MR_Box) ((MR_String) "-0"));
#line 1950 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_37_37, 1) = ((MR_Box) (mercury__string__format__V_39_39));
#line 1950 "string.format.m"
            }
#line 1950 "string.format.m"
            {
#line 1950 "string.format.m"
              mercury__string__format__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1950 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_36_36, 0) = ((MR_Box) (mercury__string__format__E_7));
#line 1950 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__V_36_36, 1) = ((MR_Box) (mercury__string__format__V_37_37));
#line 1950 "string.format.m"
            }
#line 1949 "string.format.m"
            {
#line 1949 "string.format.m"
              mercury__string__format__ExponentStr_15 = mercury__string__append_list_1_f_0(mercury__string__format__V_36_36);
            }
#line 1949 "string.format.m"
          }
#line 1951 "string.format.m"
        else
#line 1952 "string.format.m"
          {
#line 1952 "string.format.m"
            MR_String mercury__string__format__V_43_43;

#line 705 "string.opt"
            {
#line 705 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__string__format__SafeExponent_14, (MR_Integer) 10, &mercury__string__format__V_43_43);
            }
#line 406 "string.opt"
            {
#line 406 "string.opt"
              mercury__string__append_3_p_2(mercury__string__format__E_7, mercury__string__format__V_43_43, &mercury__string__format__ExponentStr_15);
            }
#line 1952 "string.format.m"
          }
#line 1951 "string.format.m"
      }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2(mercury__string__format__SafeBase_13, mercury__string__format__ExponentStr_15, &mercury__string__format__ScientificFloat_8);
    }
#line 1922 "string.format.m"
    return mercury__string__format__ScientificFloat_8;
#line 1922 "string.format.m"
  }
#line 1920 "string.format.m"
}

#line 1864 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__change_to_g_notation_4_f_0(
#line 1864 "string.format.m"
  MR_String mercury__string__format__Float_6,
#line 1864 "string.format.m"
  MR_Integer mercury__string__format__Prec_7,
#line 1864 "string.format.m"
  MR_String mercury__string__format__E_8,
#line 1864 "string.format.m"
  MR_Word mercury__string__format__Flags_9)
#line 1864 "string.format.m"
{
#line 1866 "string.format.m"
  {
#line 1866 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1866 "string.format.m"
    MR_String mercury__string__format__FormattedFloat_10;
#line 1866 "string.format.m"
    MR_Integer mercury__string__format__Exponent_11;
#line 1866 "string.format.m"
    MR_Integer mercury__string__format__UnsafeExponent_61;
#line 1866 "string.format.m"
    MR_String mercury__string__format__UnsafeBase_62;
#line 1866 "string.format.m"
    MR_String mercury__string__format__MantissaStr_63;
#line 1866 "string.format.m"
    MR_String mercury__string__format__MantissaStr_70;
#line 1866 "string.format.m"
    MR_Integer mercury__string__format__NumZeros_72;
#line 1866 "string.format.m"
    MR_Integer mercury__string__format__V_73_73;
#line 1866 "string.format.m"
    MR_Word mercury__string__format__V_75_75;
#line 2008 "string.format.m"
    MR_String mercury__string__format___FractionStr_71;
#line 1967 "string.format.m"
    MR_String mercury__string__format___FractionStr_64;
#line 1968 "string.format.m"
    MR_Integer mercury__string__format__V_65_65;

#line 2008 "string.format.m"
    {
#line 2008 "string.format.m"
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__Float_6, &mercury__string__format__MantissaStr_70, &mercury__string__format___FractionStr_71);
    }
#line 250 "string.opt"
    {
#line 250 "string.opt"
      mercury__string__count_codepoints_2_p_0(mercury__string__format__MantissaStr_70, &mercury__string__format__V_73_73);
    }
#line 2009 "string.format.m"
    mercury__string__format__NumZeros_72 = (mercury__string__format__V_73_73 - (MR_Integer) 1);
#line 139 "string.opt"
    {
#line 139 "string.opt"
      mercury__string__to_char_list_2_p_0(mercury__string__format__Float_6, &mercury__string__format__V_75_75);
    }
#line 2010 "string.format.m"
    {
#line 2010 "string.format.m"
      mercury__string__format__UnsafeExponent_61 = mercury__string__format__find_non_zero_pos_2_f_0(mercury__string__format__V_75_75, mercury__string__format__NumZeros_72);
    }
#line 1964 "string.format.m"
    {
#line 1964 "string.format.m"
      mercury__string__format__UnsafeBase_62 = mercury__string__format__calculate_base_unsafe_2_f_0(mercury__string__format__Float_6, mercury__string__format__Prec_7);
    }
#line 1967 "string.format.m"
    {
#line 1967 "string.format.m"
      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__UnsafeBase_62, &mercury__string__format__MantissaStr_63, &mercury__string__format___FractionStr_64);
    }
#line 250 "string.opt"
    {
#line 250 "string.opt"
      mercury__string__count_codepoints_2_p_0(mercury__string__format__MantissaStr_63, &mercury__string__format__V_65_65);
    }
#line 1968 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__V_65_65 > (MR_Integer) 1);
#line 1972 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1971 "string.format.m"
      {
#line 1971 "string.format.m"
        mercury__string__format__Exponent_11 = (mercury__string__format__UnsafeExponent_61 + (MR_Integer) 1);
#line 1971 "string.format.m"
      }
#line 1972 "string.format.m"
    else
#line 1973 "string.format.m"
      mercury__string__format__Exponent_11 = mercury__string__format__UnsafeExponent_61;
#line 1869 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__Exponent_11 >= (MR_Integer) -4);
#line 1869 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1870 "string.format.m"
      mercury__string__format__succeeded = (mercury__string__format__Exponent_11 < mercury__string__format__Prec_7);
#line 1903 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1895 "string.format.m"
      {
#line 1895 "string.format.m"
        MR_String mercury__string__format__FormattedFloat0_13;
#line 1898 "string.format.m"
        MR_Word mercury__string__format__V_39_39;
#line 1898 "string.format.m"
        MR_Word mercury__string__format__V_50_50;
#line 1898 "string.format.m"
        MR_Word mercury__string__format__V_51_51;
#line 1898 "string.format.m"
        MR_Word mercury__string__format__V_52_52;
#line 1898 "string.format.m"
        MR_Word mercury__string__format__V_53_53;

#line 1880 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__Exponent_11 <= (MR_Integer) 0);
#line 1885 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1882 "string.format.m"
          {
#line 1882 "string.format.m"
            MR_Integer mercury__string__format__DecimalPos_12;
#line 1882 "string.format.m"
            MR_Integer mercury__string__format__V_26_26;
#line 1882 "string.format.m"
            MR_Integer mercury__string__format__V_27_27;
#line 1882 "string.format.m"
            MR_Integer mercury__string__format__V_28_28;
#line 1882 "string.format.m"
            MR_String mercury__string__format__MantissaStr_84;
#line 1882 "string.format.m"
            MR_Integer mercury__string__format__NumZeros_86;
#line 1882 "string.format.m"
            MR_Integer mercury__string__format__V_87_87;
#line 1882 "string.format.m"
            MR_Word mercury__string__format__V_89_89;
#line 2008 "string.format.m"
            MR_String mercury__string__format___FractionStr_85;

#line 2008 "string.format.m"
            {
#line 2008 "string.format.m"
              mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__Float_6, &mercury__string__format__MantissaStr_84, &mercury__string__format___FractionStr_85);
            }
#line 250 "string.opt"
            {
#line 250 "string.opt"
              mercury__string__count_codepoints_2_p_0(mercury__string__format__MantissaStr_84, &mercury__string__format__V_87_87);
            }
#line 2009 "string.format.m"
            mercury__string__format__NumZeros_86 = (mercury__string__format__V_87_87 - (MR_Integer) 1);
#line 139 "string.opt"
            {
#line 139 "string.opt"
              mercury__string__to_char_list_2_p_0(mercury__string__format__Float_6, &mercury__string__format__V_89_89);
            }
#line 2010 "string.format.m"
            {
#line 2010 "string.format.m"
              mercury__string__format__DecimalPos_12 = mercury__string__format__find_non_zero_pos_2_f_0(mercury__string__format__V_89_89, mercury__string__format__NumZeros_86);
            }
#line 70 "int.opt"
            {
#line 70 "int.opt"
              mercury__int__abs_2_p_0(mercury__string__format__DecimalPos_12, &mercury__string__format__V_28_28);
            }
#line 1884 "string.format.m"
            mercury__string__format__V_27_27 = (mercury__string__format__V_28_28 - (MR_Integer) 1);
#line 1884 "string.format.m"
            mercury__string__format__V_26_26 = (mercury__string__format__V_27_27 + mercury__string__format__Prec_7);
#line 1883 "string.format.m"
            {
#line 1883 "string.format.m"
              mercury__string__format__FormattedFloat0_13 = mercury__string__format__change_precision_2_f_0(mercury__string__format__Float_6, mercury__string__format__V_26_26);
            }
#line 1882 "string.format.m"
          }
#line 1885 "string.format.m"
        else
#line 1887 "string.format.m"
          {
#line 1887 "string.format.m"
            MR_String mercury__string__format__ScientificFloat_14;
#line 1887 "string.format.m"
            MR_String mercury__string__format__BaseStr_15;
#line 1887 "string.format.m"
            MR_String mercury__string__format__ExponentStr_16;
#line 1887 "string.format.m"
            MR_Integer mercury__string__format__Exp_17;
#line 1887 "string.format.m"
            MR_String mercury__string__format__MantissaStr_18;
#line 1887 "string.format.m"
            MR_String mercury__string__format__FractionStr_19;
#line 1887 "string.format.m"
            MR_String mercury__string__format__RestMantissaStr_20;
#line 1887 "string.format.m"
            MR_String mercury__string__format__NewFraction_21;
#line 1887 "string.format.m"
            MR_Integer mercury__string__format__V_30_30 = (mercury__string__format__Prec_7 - (MR_Integer) 1);
#line 1887 "string.format.m"
            MR_Integer mercury__string__format__V_34_34;
#line 1887 "string.format.m"
            MR_String mercury__string__format__V_36_36;
#line 1887 "string.format.m"
            MR_String mercury__string__format__V_37_37;

#line 1887 "string.format.m"
            {
#line 1887 "string.format.m"
              mercury__string__format__ScientificFloat_14 = mercury__string__format__change_to_e_notation_3_f_0(mercury__string__format__Float_6, mercury__string__format__V_30_30, (MR_String) "e");
            }
#line 1888 "string.format.m"
            {
#line 1888 "string.format.m"
              mercury__string__format__split_at_exponent_3_p_0(mercury__string__format__ScientificFloat_14, &mercury__string__format__BaseStr_15, &mercury__string__format__ExponentStr_16);
            }
#line 680 "string.opt"
            {
#line 680 "string.opt"
              mercury__string__format__Exp_17 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, mercury__string__format__ExponentStr_16);
            }
#line 1890 "string.format.m"
            {
#line 1890 "string.format.m"
              mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__BaseStr_15, &mercury__string__format__MantissaStr_18, &mercury__string__format__FractionStr_19);
            }
#line 1891 "string.format.m"
            {
#line 1891 "string.format.m"
              mercury__string__format__RestMantissaStr_20 = mercury__string__between_3_f_0(mercury__string__format__FractionStr_19, (MR_Integer) 0, mercury__string__format__Exp_17);
            }
#line 1892 "string.format.m"
            mercury__string__format__V_34_34 = (mercury__string__format__Prec_7 - (MR_Integer) 1);
#line 1892 "string.format.m"
            {
#line 1892 "string.format.m"
              mercury__string__format__NewFraction_21 = mercury__string__between_3_f_0(mercury__string__format__FractionStr_19, mercury__string__format__Exp_17, mercury__string__format__V_34_34);
            }
#line 1894 "string.format.m"
            {
#line 1894 "string.format.m"
              mercury__string__format__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) ".", mercury__string__format__NewFraction_21);
            }
#line 1894 "string.format.m"
            {
#line 1894 "string.format.m"
              mercury__string__format__V_36_36 = mercury__string__f_43_43_2_f_0(mercury__string__format__RestMantissaStr_20, mercury__string__format__V_37_37);
            }
#line 1893 "string.format.m"
            {
#line 1893 "string.format.m"
              mercury__string__format__FormattedFloat0_13 = mercury__string__f_43_43_2_f_0(mercury__string__format__MantissaStr_18, mercury__string__format__V_36_36);
            }
#line 1887 "string.format.m"
          }
#line 1898 "string.format.m"
        mercury__string__format__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1898 "string.format.m"
        mercury__string__format__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1898 "string.format.m"
        mercury__string__format__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1898 "string.format.m"
        mercury__string__format__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1898 "string.format.m"
        mercury__string__format__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1898 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__V_39_39 == (MR_Integer) 1);
#line 1900 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1899 "string.format.m"
          mercury__string__format__FormattedFloat_10 = mercury__string__format__FormattedFloat0_13;
#line 1900 "string.format.m"
        else
#line 1901 "string.format.m"
          {
#line 1901 "string.format.m"
            return mercury__string__format__FormattedFloat_10 = mercury__string__format__remove_trailing_zeros_1_f_0(mercury__string__format__FormattedFloat0_13);
          }
#line 1895 "string.format.m"
      }
#line 1903 "string.format.m"
    else
#line 1906 "string.format.m"
      {
#line 1906 "string.format.m"
        MR_String mercury__string__format__UncheckedFloat_22;
#line 1906 "string.format.m"
        MR_Integer mercury__string__format__V_40_40 = (mercury__string__format__Prec_7 - (MR_Integer) 1);
#line 1909 "string.format.m"
        MR_Word mercury__string__format__V_42_42;
#line 1909 "string.format.m"
        MR_Word mercury__string__format__V_54_54;
#line 1909 "string.format.m"
        MR_Word mercury__string__format__V_55_55;
#line 1909 "string.format.m"
        MR_Word mercury__string__format__V_56_56;
#line 1909 "string.format.m"
        MR_Word mercury__string__format__V_57_57;

#line 1906 "string.format.m"
        {
#line 1906 "string.format.m"
          mercury__string__format__UncheckedFloat_22 = mercury__string__format__change_to_e_notation_3_f_0(mercury__string__format__Float_6, mercury__string__format__V_40_40, mercury__string__format__E_8);
        }
#line 1909 "string.format.m"
        mercury__string__format__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1909 "string.format.m"
        mercury__string__format__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1909 "string.format.m"
        mercury__string__format__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1909 "string.format.m"
        mercury__string__format__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1909 "string.format.m"
        mercury__string__format__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_9, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1909 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__V_42_42 == (MR_Integer) 1);
#line 1911 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1910 "string.format.m"
          mercury__string__format__FormattedFloat_10 = mercury__string__format__UncheckedFloat_22;
#line 1911 "string.format.m"
        else
#line 1912 "string.format.m"
          {
#line 1912 "string.format.m"
            MR_String mercury__string__format__NewBaseStr_23;
#line 1912 "string.format.m"
            MR_String mercury__string__format__V_43_43;
#line 1912 "string.format.m"
            MR_String mercury__string__format__BaseStr_44;
#line 1912 "string.format.m"
            MR_String mercury__string__format__ExponentStr_45;

#line 1912 "string.format.m"
            {
#line 1912 "string.format.m"
              mercury__string__format__split_at_exponent_3_p_0(mercury__string__format__UncheckedFloat_22, &mercury__string__format__BaseStr_44, &mercury__string__format__ExponentStr_45);
            }
#line 1913 "string.format.m"
            {
#line 1913 "string.format.m"
              mercury__string__format__NewBaseStr_23 = mercury__string__format__remove_trailing_zeros_1_f_0(mercury__string__format__BaseStr_44);
            }
#line 1914 "string.format.m"
            {
#line 1914 "string.format.m"
              mercury__string__format__V_43_43 = mercury__string__f_43_43_2_f_0(mercury__string__format__E_8, mercury__string__format__ExponentStr_45);
            }
#line 1914 "string.format.m"
            {
#line 1914 "string.format.m"
              return mercury__string__format__FormattedFloat_10 = mercury__string__f_43_43_2_f_0(mercury__string__format__NewBaseStr_23, mercury__string__format__V_43_43);
            }
#line 1912 "string.format.m"
          }
#line 1906 "string.format.m"
      }
#line 1866 "string.format.m"
    return mercury__string__format__FormattedFloat_10;
#line 1866 "string.format.m"
  }
#line 1864 "string.format.m"
}

#line 1818 "string.format.m"
static void MR_CALL 
mercury__string__format__float_to_string_first_pass_2_p_0(
#line 1818 "string.format.m"
  MR_Float mercury__string__format__FloatVal_1,
#line 1818 "string.format.m"
  MR_String * mercury__string__format__FloatString_2)
#line 1818 "string.format.m"
{
#line 1820 "string.format.m"
  {
#line 1820 "string.format.m"
    MR_bool mercury__string__format__succeeded;

#line 1824 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__float_to_string_first_pass_2_p_0

	MR_Float FloatVal;
	MR_String FloatString;

	FloatVal =  mercury__string__format__FloatVal_1 ;
		{
#line 1824 "string.format.m"
{
    /*
    ** Note any changes here will require the same changes in
    ** string.float_to_string.
    */
    MR_float_to_string(FloatVal, FloatString, MR_ALLOC_ID);
}
#line 10674 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__format__FloatString_2  = FloatString;
#line 1824 "string.format.m"
}
#line 1820 "string.format.m"
  }
#line 1818 "string.format.m"
}

#line 1755 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__convert_float_to_string_1_f_0(
#line 1755 "string.format.m"
  MR_Float mercury__string__format__Float_3)
#line 1755 "string.format.m"
{
#line 1757 "string.format.m"
  {
#line 1757 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1757 "string.format.m"
    MR_String mercury__string__format__String_4;
#line 1757 "string.format.m"
    MR_String mercury__string__format__FloatStr_5;

#line 1824 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__convert_float_to_string_1_f_0

	MR_Float FloatVal;
	MR_String FloatString;

	FloatVal =  mercury__string__format__Float_3 ;
		{
#line 1824 "string.format.m"
{
    /*
    ** Note any changes here will require the same changes in
    ** string.float_to_string.
    */
    MR_float_to_string(FloatVal, FloatString, MR_ALLOC_ID);
}
#line 10719 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__FloatStr_5  = FloatString;
#line 1824 "string.format.m"
}
#line 369 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__convert_float_to_string_1_f_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__FloatStr_5 ;
	Ch =  (MR_Char) 101 ;
		{
#line 369 "string.opt"

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

#line 10750 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 369 "string.opt"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 1763 "string.format.m"
    if (!(mercury__string__format__succeeded))
#line 1763 "string.format.m"
      {
#line 369 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__convert_float_to_string_1_f_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__FloatStr_5 ;
	Ch =  (MR_Char) 69 ;
		{
#line 369 "string.opt"

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

#line 10787 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 369 "string.opt"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 1763 "string.format.m"
      }
#line 1801 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1766 "string.format.m"
      {
#line 1766 "string.format.m"
        MR_Word mercury__string__format__TypeCtorInfo_12_41;
#line 1766 "string.format.m"
        MR_String mercury__string__format__FloatPtStr_6;
#line 1766 "string.format.m"
        MR_String mercury__string__format__ExpStr_7;
#line 1766 "string.format.m"
        MR_String mercury__string__format__MantissaStr_8;
#line 1766 "string.format.m"
        MR_String mercury__string__format__FractionStr_9;
#line 1766 "string.format.m"
        MR_Integer mercury__string__format__ExpInt_10;
#line 1766 "string.format.m"
        MR_Word mercury__string__format__FloatAndExponent_36;
#line 1766 "string.format.m"
        MR_Integer mercury__string__format__WordStart_7_47;
#line 2124 "string.format.m"
        MR_Box mercury__string__format__conv0_FloatPtStr_6;
#line 2125 "string.format.m"
        MR_Box mercury__string__format__conv1_ExpStr_7;

#line 509 "string.opt"
        {
#line 509 "string.opt"
          mercury__string__format__next_boundary__ho5_4_p_in__string_0(mercury__string__format__FloatStr_5, (MR_Integer) 0, &mercury__string__format__WordStart_7_47);
        }
#line 510 "string.opt"
        {
#line 510 "string.opt"
          mercury__string__format__words_loop__ho4_4_p_in__string_0(mercury__string__format__FloatStr_5, mercury__string__format__WordStart_7_47, &mercury__string__format__FloatAndExponent_36);
        }
#line 10833 "string.format.c"
        mercury__string__format__TypeCtorInfo_12_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2124 "string.format.m"
        {
#line 2124 "string.format.m"
          mercury__list__det_index0_3_p_0(mercury__string__format__TypeCtorInfo_12_41, mercury__string__format__FloatAndExponent_36, (MR_Integer) 0, &mercury__string__format__conv0_FloatPtStr_6);
        }
#line 2124 "string.format.m"
        mercury__string__format__FloatPtStr_6 = ((MR_String) mercury__string__format__conv0_FloatPtStr_6);
#line 2125 "string.format.m"
        {
#line 2125 "string.format.m"
          mercury__list__det_index0_3_p_0(mercury__string__format__TypeCtorInfo_12_41, mercury__string__format__FloatAndExponent_36, (MR_Integer) 1, &mercury__string__format__conv1_ExpStr_7);
        }
#line 2125 "string.format.m"
        mercury__string__format__ExpStr_7 = ((MR_String) mercury__string__format__conv1_ExpStr_7);
#line 1767 "string.format.m"
        {
#line 1767 "string.format.m"
          mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__FloatPtStr_6, &mercury__string__format__MantissaStr_8, &mercury__string__format__FractionStr_9);
        }
#line 680 "string.opt"
        {
#line 680 "string.opt"
          mercury__string__format__ExpInt_10 = mercury__string__det_base_string_to_int_2_f_0((MR_Integer) 10, mercury__string__format__ExpStr_7);
        }
#line 1771 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__ExpInt_10 >= (MR_Integer) 0);
#line 1785 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1773 "string.format.m"
          {
#line 1773 "string.format.m"
            MR_String mercury__string__format__PaddedFracStr_12;
#line 1773 "string.format.m"
            MR_String mercury__string__format__MantissaRest_13;
#line 1773 "string.format.m"
            MR_String mercury__string__format__NewFraction_14;
#line 1773 "string.format.m"
            MR_String mercury__string__format__NewMantissa_15;
#line 1773 "string.format.m"
            MR_String mercury__string__format__MantAndPoint_16;

#line 555 "string.opt"
            {
#line 555 "string.opt"
              mercury__string__pad_right_4_p_0(mercury__string__format__FractionStr_9, (MR_Char) 48, mercury__string__format__ExpInt_10, &mercury__string__format__PaddedFracStr_12);
            }
#line 1775 "string.format.m"
            {
#line 1775 "string.format.m"
              mercury__string__split_4_p_0(mercury__string__format__PaddedFracStr_12, mercury__string__format__ExpInt_10, &mercury__string__format__MantissaRest_13, &mercury__string__format__NewFraction_14);
            }
#line 406 "string.opt"
            {
#line 406 "string.opt"
              mercury__string__append_3_p_2(mercury__string__format__MantissaStr_8, mercury__string__format__MantissaRest_13, &mercury__string__format__NewMantissa_15);
            }
#line 406 "string.opt"
            {
#line 406 "string.opt"
              mercury__string__append_3_p_2(mercury__string__format__NewMantissa_15, (MR_String) ".", &mercury__string__format__MantAndPoint_16);
            }
#line 1780 "string.format.m"
            mercury__string__format__succeeded = (strcmp(mercury__string__format__NewFraction_14, (MR_String) "") == 0);
#line 1782 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1781 "string.format.m"
              {
#line 406 "string.opt"
                {
#line 406 "string.opt"
                  mercury__string__append_3_p_2(mercury__string__format__MantAndPoint_16, (MR_String) "0", &mercury__string__format__String_4);
                }
#line 1781 "string.format.m"
              }
#line 1782 "string.format.m"
            else
#line 406 "string.opt"
              {
#line 406 "string.opt"
                mercury__string__append_3_p_2(mercury__string__format__MantAndPoint_16, mercury__string__format__NewFraction_14, &mercury__string__format__String_4);
              }
#line 1773 "string.format.m"
          }
#line 1785 "string.format.m"
        else
#line 1787 "string.format.m"
          {
#line 1787 "string.format.m"
            MR_String mercury__string__format__PaddedMantissaStr_17;
#line 1787 "string.format.m"
            MR_String mercury__string__format__FractionRest_18;
#line 1787 "string.format.m"
            MR_Integer mercury__string__format__V_26_26;
#line 1787 "string.format.m"
            MR_Integer mercury__string__format__V_27_27;
#line 1787 "string.format.m"
            MR_String mercury__string__format__V_29_29;
#line 1787 "string.format.m"
            MR_Integer mercury__string__format__ExtraDigits_30;
#line 1787 "string.format.m"
            MR_String mercury__string__format__NewMantissa_31;
#line 1787 "string.format.m"
            MR_String mercury__string__format__MantAndPoint_32;

#line 70 "int.opt"
            {
#line 70 "int.opt"
              mercury__int__abs_2_p_0(mercury__string__format__ExpInt_10, &mercury__string__format__ExtraDigits_30);
            }
#line 553 "string.opt"
            {
#line 553 "string.opt"
              mercury__string__pad_left_4_p_0(mercury__string__format__MantissaStr_8, (MR_Char) 48, mercury__string__format__ExtraDigits_30, &mercury__string__format__PaddedMantissaStr_17);
            }
#line 242 "string.opt"
{
#define MR_PROC_LABEL mercury__string__format__convert_float_to_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__format__PaddedMantissaStr_17 ;
		{
#line 242 "string.opt"

    Length = strlen(Str);

#line 10962 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__V_27_27  = Length;
#line 242 "string.opt"
}
#line 1791 "string.format.m"
            mercury__string__format__V_26_26 = (mercury__string__format__V_27_27 - mercury__string__format__ExtraDigits_30);
#line 1790 "string.format.m"
            {
#line 1790 "string.format.m"
              mercury__string__split_4_p_0(mercury__string__format__PaddedMantissaStr_17, mercury__string__format__V_26_26, &mercury__string__format__NewMantissa_31, &mercury__string__format__FractionRest_18);
            }
#line 1794 "string.format.m"
            mercury__string__format__succeeded = (strcmp(mercury__string__format__NewMantissa_31, (MR_String) "") == 0);
#line 1796 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1795 "string.format.m"
              mercury__string__format__MantAndPoint_32 = (MR_String) "0.";
#line 1796 "string.format.m"
            else
#line 1797 "string.format.m"
              {
#line 406 "string.opt"
                {
#line 406 "string.opt"
                  mercury__string__append_3_p_2(mercury__string__format__NewMantissa_31, (MR_String) ".", &mercury__string__format__MantAndPoint_32);
                }
#line 1797 "string.format.m"
              }
#line 1799 "string.format.m"
            {
#line 1799 "string.format.m"
              mercury__string__format__V_29_29 = mercury__string__f_43_43_2_f_0(mercury__string__format__FractionRest_18, mercury__string__format__FractionStr_9);
            }
#line 1799 "string.format.m"
            {
#line 1799 "string.format.m"
              return mercury__string__format__String_4 = mercury__string__f_43_43_2_f_0(mercury__string__format__MantAndPoint_32, mercury__string__format__V_29_29);
            }
#line 1787 "string.format.m"
          }
#line 1766 "string.format.m"
      }
#line 1801 "string.format.m"
    else
#line 1802 "string.format.m"
      mercury__string__format__String_4 = mercury__string__format__FloatStr_5;
#line 1757 "string.format.m"
    return mercury__string__format__String_4;
#line 1757 "string.format.m"
  }
#line 1755 "string.format.m"
}

#line 1615 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_int_to_hex_uc_1_f_0(
#line 1615 "string.format.m"
  MR_Integer mercury__string__format__Num_3)
#line 1615 "string.format.m"
{
#line 1651 "string.format.m"
  {
#line 1651 "string.format.m"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__Num_3 > (MR_Integer) 0);
#line 1651 "string.format.m"
    MR_String mercury__string__format__NumStr_4;

#line 1651 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1648 "string.format.m"
      {
#line 1648 "string.format.m"
        MR_String mercury__string__format__FrontDigitsStr_5;
#line 1648 "string.format.m"
        MR_String mercury__string__format__LastDigitStr_6;
#line 1648 "string.format.m"
        MR_Integer mercury__string__format__V_8_8 = (mercury__string__format__Num_3 / (MR_Integer) 16);
#line 1648 "string.format.m"
        MR_Integer mercury__string__format__V_10_10;
#line 1700 "string.format.m"
        MR_String mercury__string__format__HexUCPrime_27;

#line 1648 "string.format.m"
        {
#line 1648 "string.format.m"
          mercury__string__format__FrontDigitsStr_5 = mercury__string__format__abs_int_to_hex_uc_1_f_0(mercury__string__format__V_8_8);
        }
#line 124 "int.opt"
        mercury__string__format__V_10_10 = (mercury__string__format__Num_3 % (MR_Integer) 16);
#line 1730 "string.format.m"
        if ((mercury__string__format__V_10_10 == (MR_Integer) 0))
#line 1730 "string.format.m"
          {
#line 1730 "string.format.m"
            mercury__string__format__HexUCPrime_27 = (MR_String) "0";
#line 1730 "string.format.m"
            mercury__string__format__succeeded = MR_TRUE;
#line 1730 "string.format.m"
          }
#line 1730 "string.format.m"
        else
#line 1730 "string.format.m"
          if ((mercury__string__format__V_10_10 == (MR_Integer) 1))
#line 1731 "string.format.m"
            {
#line 1731 "string.format.m"
              mercury__string__format__HexUCPrime_27 = (MR_String) "1";
#line 1731 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 1731 "string.format.m"
            }
#line 1730 "string.format.m"
          else
#line 1730 "string.format.m"
            if ((mercury__string__format__V_10_10 == (MR_Integer) 2))
#line 1732 "string.format.m"
              {
#line 1732 "string.format.m"
                mercury__string__format__HexUCPrime_27 = (MR_String) "2";
#line 1732 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 1732 "string.format.m"
              }
#line 1730 "string.format.m"
            else
#line 1730 "string.format.m"
              if ((mercury__string__format__V_10_10 == (MR_Integer) 3))
#line 1733 "string.format.m"
                {
#line 1733 "string.format.m"
                  mercury__string__format__HexUCPrime_27 = (MR_String) "3";
#line 1733 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 1733 "string.format.m"
                }
#line 1730 "string.format.m"
              else
#line 1730 "string.format.m"
                if ((mercury__string__format__V_10_10 == (MR_Integer) 4))
#line 1734 "string.format.m"
                  {
#line 1734 "string.format.m"
                    mercury__string__format__HexUCPrime_27 = (MR_String) "4";
#line 1734 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 1734 "string.format.m"
                  }
#line 1730 "string.format.m"
                else
#line 1730 "string.format.m"
                  if ((mercury__string__format__V_10_10 == (MR_Integer) 5))
#line 1735 "string.format.m"
                    {
#line 1735 "string.format.m"
                      mercury__string__format__HexUCPrime_27 = (MR_String) "5";
#line 1735 "string.format.m"
                      mercury__string__format__succeeded = MR_TRUE;
#line 1735 "string.format.m"
                    }
#line 1730 "string.format.m"
                  else
#line 1730 "string.format.m"
                    if ((mercury__string__format__V_10_10 == (MR_Integer) 6))
#line 1736 "string.format.m"
                      {
#line 1736 "string.format.m"
                        mercury__string__format__HexUCPrime_27 = (MR_String) "6";
#line 1736 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 1736 "string.format.m"
                      }
#line 1730 "string.format.m"
                    else
#line 1730 "string.format.m"
                      if ((mercury__string__format__V_10_10 == (MR_Integer) 7))
#line 1737 "string.format.m"
                        {
#line 1737 "string.format.m"
                          mercury__string__format__HexUCPrime_27 = (MR_String) "7";
#line 1737 "string.format.m"
                          mercury__string__format__succeeded = MR_TRUE;
#line 1737 "string.format.m"
                        }
#line 1730 "string.format.m"
                      else
#line 1730 "string.format.m"
                        if ((mercury__string__format__V_10_10 == (MR_Integer) 8))
#line 1738 "string.format.m"
                          {
#line 1738 "string.format.m"
                            mercury__string__format__HexUCPrime_27 = (MR_String) "8";
#line 1738 "string.format.m"
                            mercury__string__format__succeeded = MR_TRUE;
#line 1738 "string.format.m"
                          }
#line 1730 "string.format.m"
                        else
#line 1730 "string.format.m"
                          if ((mercury__string__format__V_10_10 == (MR_Integer) 9))
#line 1739 "string.format.m"
                            {
#line 1739 "string.format.m"
                              mercury__string__format__HexUCPrime_27 = (MR_String) "9";
#line 1739 "string.format.m"
                              mercury__string__format__succeeded = MR_TRUE;
#line 1739 "string.format.m"
                            }
#line 1730 "string.format.m"
                          else
#line 1730 "string.format.m"
                            if ((mercury__string__format__V_10_10 == (MR_Integer) 10))
#line 1740 "string.format.m"
                              {
#line 1740 "string.format.m"
                                mercury__string__format__HexUCPrime_27 = (MR_String) "A";
#line 1740 "string.format.m"
                                mercury__string__format__succeeded = MR_TRUE;
#line 1740 "string.format.m"
                              }
#line 1730 "string.format.m"
                            else
#line 1730 "string.format.m"
                              if ((mercury__string__format__V_10_10 == (MR_Integer) 11))
#line 1741 "string.format.m"
                                {
#line 1741 "string.format.m"
                                  mercury__string__format__HexUCPrime_27 = (MR_String) "B";
#line 1741 "string.format.m"
                                  mercury__string__format__succeeded = MR_TRUE;
#line 1741 "string.format.m"
                                }
#line 1730 "string.format.m"
                              else
#line 1730 "string.format.m"
                                if ((mercury__string__format__V_10_10 == (MR_Integer) 12))
#line 1742 "string.format.m"
                                  {
#line 1742 "string.format.m"
                                    mercury__string__format__HexUCPrime_27 = (MR_String) "C";
#line 1742 "string.format.m"
                                    mercury__string__format__succeeded = MR_TRUE;
#line 1742 "string.format.m"
                                  }
#line 1730 "string.format.m"
                                else
#line 1730 "string.format.m"
                                  if ((mercury__string__format__V_10_10 == (MR_Integer) 13))
#line 1743 "string.format.m"
                                    {
#line 1743 "string.format.m"
                                      mercury__string__format__HexUCPrime_27 = (MR_String) "D";
#line 1743 "string.format.m"
                                      mercury__string__format__succeeded = MR_TRUE;
#line 1743 "string.format.m"
                                    }
#line 1730 "string.format.m"
                                  else
#line 1730 "string.format.m"
                                    if ((mercury__string__format__V_10_10 == (MR_Integer) 14))
#line 1744 "string.format.m"
                                      {
#line 1744 "string.format.m"
                                        mercury__string__format__HexUCPrime_27 = (MR_String) "E";
#line 1744 "string.format.m"
                                        mercury__string__format__succeeded = MR_TRUE;
#line 1744 "string.format.m"
                                      }
#line 1730 "string.format.m"
                                    else
#line 1730 "string.format.m"
                                      if ((mercury__string__format__V_10_10 == (MR_Integer) 15))
#line 1745 "string.format.m"
                                        {
#line 1745 "string.format.m"
                                          mercury__string__format__HexUCPrime_27 = (MR_String) "F";
#line 1745 "string.format.m"
                                          mercury__string__format__succeeded = MR_TRUE;
#line 1745 "string.format.m"
                                        }
#line 1730 "string.format.m"
                                      else
#line 1730 "string.format.m"
                                        mercury__string__format__succeeded = MR_FALSE;
#line 1700 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1699 "string.format.m"
          mercury__string__format__LastDigitStr_6 = mercury__string__format__HexUCPrime_27;
#line 1700 "string.format.m"
        else
#line 1701 "string.format.m"
          {
#line 1701 "string.format.m"
            {
#line 1701 "string.format.m"
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_hex_digit_uc\'/1", (MR_String) "hex_digit failed");
            }
#line 1701 "string.format.m"
          }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_5, mercury__string__format__LastDigitStr_6, &mercury__string__format__NumStr_4);
        }
#line 1648 "string.format.m"
      }
#line 1651 "string.format.m"
    else
#line 1652 "string.format.m"
      mercury__string__format__NumStr_4 = (MR_String) "";
#line 1651 "string.format.m"
    return mercury__string__format__NumStr_4;
#line 1651 "string.format.m"
  }
#line 1615 "string.format.m"
}

#line 1614 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_int_to_hex_lc_1_f_0(
#line 1614 "string.format.m"
  MR_Integer mercury__string__format__Num_3)
#line 1614 "string.format.m"
{
#line 1642 "string.format.m"
  {
#line 1642 "string.format.m"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__Num_3 > (MR_Integer) 0);
#line 1642 "string.format.m"
    MR_String mercury__string__format__NumStr_4;

#line 1642 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1639 "string.format.m"
      {
#line 1639 "string.format.m"
        MR_String mercury__string__format__FrontDigitsStr_5;
#line 1639 "string.format.m"
        MR_String mercury__string__format__LastDigitStr_6;
#line 1639 "string.format.m"
        MR_Integer mercury__string__format__V_8_8 = (mercury__string__format__Num_3 / (MR_Integer) 16);
#line 1639 "string.format.m"
        MR_Integer mercury__string__format__V_10_10;
#line 1693 "string.format.m"
        MR_String mercury__string__format__HexLCPrime_26;

#line 1639 "string.format.m"
        {
#line 1639 "string.format.m"
          mercury__string__format__FrontDigitsStr_5 = mercury__string__format__abs_int_to_hex_lc_1_f_0(mercury__string__format__V_8_8);
        }
#line 124 "int.opt"
        mercury__string__format__V_10_10 = (mercury__string__format__Num_3 % (MR_Integer) 16);
#line 1730 "string.format.m"
        if ((mercury__string__format__V_10_10 == (MR_Integer) 0))
#line 1730 "string.format.m"
          {
#line 1730 "string.format.m"
            mercury__string__format__HexLCPrime_26 = (MR_String) "0";
#line 1730 "string.format.m"
            mercury__string__format__succeeded = MR_TRUE;
#line 1730 "string.format.m"
          }
#line 1730 "string.format.m"
        else
#line 1730 "string.format.m"
          if ((mercury__string__format__V_10_10 == (MR_Integer) 1))
#line 1731 "string.format.m"
            {
#line 1731 "string.format.m"
              mercury__string__format__HexLCPrime_26 = (MR_String) "1";
#line 1731 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 1731 "string.format.m"
            }
#line 1730 "string.format.m"
          else
#line 1730 "string.format.m"
            if ((mercury__string__format__V_10_10 == (MR_Integer) 2))
#line 1732 "string.format.m"
              {
#line 1732 "string.format.m"
                mercury__string__format__HexLCPrime_26 = (MR_String) "2";
#line 1732 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 1732 "string.format.m"
              }
#line 1730 "string.format.m"
            else
#line 1730 "string.format.m"
              if ((mercury__string__format__V_10_10 == (MR_Integer) 3))
#line 1733 "string.format.m"
                {
#line 1733 "string.format.m"
                  mercury__string__format__HexLCPrime_26 = (MR_String) "3";
#line 1733 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 1733 "string.format.m"
                }
#line 1730 "string.format.m"
              else
#line 1730 "string.format.m"
                if ((mercury__string__format__V_10_10 == (MR_Integer) 4))
#line 1734 "string.format.m"
                  {
#line 1734 "string.format.m"
                    mercury__string__format__HexLCPrime_26 = (MR_String) "4";
#line 1734 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 1734 "string.format.m"
                  }
#line 1730 "string.format.m"
                else
#line 1730 "string.format.m"
                  if ((mercury__string__format__V_10_10 == (MR_Integer) 5))
#line 1735 "string.format.m"
                    {
#line 1735 "string.format.m"
                      mercury__string__format__HexLCPrime_26 = (MR_String) "5";
#line 1735 "string.format.m"
                      mercury__string__format__succeeded = MR_TRUE;
#line 1735 "string.format.m"
                    }
#line 1730 "string.format.m"
                  else
#line 1730 "string.format.m"
                    if ((mercury__string__format__V_10_10 == (MR_Integer) 6))
#line 1736 "string.format.m"
                      {
#line 1736 "string.format.m"
                        mercury__string__format__HexLCPrime_26 = (MR_String) "6";
#line 1736 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 1736 "string.format.m"
                      }
#line 1730 "string.format.m"
                    else
#line 1730 "string.format.m"
                      if ((mercury__string__format__V_10_10 == (MR_Integer) 7))
#line 1737 "string.format.m"
                        {
#line 1737 "string.format.m"
                          mercury__string__format__HexLCPrime_26 = (MR_String) "7";
#line 1737 "string.format.m"
                          mercury__string__format__succeeded = MR_TRUE;
#line 1737 "string.format.m"
                        }
#line 1730 "string.format.m"
                      else
#line 1730 "string.format.m"
                        if ((mercury__string__format__V_10_10 == (MR_Integer) 8))
#line 1738 "string.format.m"
                          {
#line 1738 "string.format.m"
                            mercury__string__format__HexLCPrime_26 = (MR_String) "8";
#line 1738 "string.format.m"
                            mercury__string__format__succeeded = MR_TRUE;
#line 1738 "string.format.m"
                          }
#line 1730 "string.format.m"
                        else
#line 1730 "string.format.m"
                          if ((mercury__string__format__V_10_10 == (MR_Integer) 9))
#line 1739 "string.format.m"
                            {
#line 1739 "string.format.m"
                              mercury__string__format__HexLCPrime_26 = (MR_String) "9";
#line 1739 "string.format.m"
                              mercury__string__format__succeeded = MR_TRUE;
#line 1739 "string.format.m"
                            }
#line 1730 "string.format.m"
                          else
#line 1730 "string.format.m"
                            if ((mercury__string__format__V_10_10 == (MR_Integer) 10))
#line 1740 "string.format.m"
                              {
#line 1740 "string.format.m"
                                mercury__string__format__HexLCPrime_26 = (MR_String) "a";
#line 1740 "string.format.m"
                                mercury__string__format__succeeded = MR_TRUE;
#line 1740 "string.format.m"
                              }
#line 1730 "string.format.m"
                            else
#line 1730 "string.format.m"
                              if ((mercury__string__format__V_10_10 == (MR_Integer) 11))
#line 1741 "string.format.m"
                                {
#line 1741 "string.format.m"
                                  mercury__string__format__HexLCPrime_26 = (MR_String) "b";
#line 1741 "string.format.m"
                                  mercury__string__format__succeeded = MR_TRUE;
#line 1741 "string.format.m"
                                }
#line 1730 "string.format.m"
                              else
#line 1730 "string.format.m"
                                if ((mercury__string__format__V_10_10 == (MR_Integer) 12))
#line 1742 "string.format.m"
                                  {
#line 1742 "string.format.m"
                                    mercury__string__format__HexLCPrime_26 = (MR_String) "c";
#line 1742 "string.format.m"
                                    mercury__string__format__succeeded = MR_TRUE;
#line 1742 "string.format.m"
                                  }
#line 1730 "string.format.m"
                                else
#line 1730 "string.format.m"
                                  if ((mercury__string__format__V_10_10 == (MR_Integer) 13))
#line 1743 "string.format.m"
                                    {
#line 1743 "string.format.m"
                                      mercury__string__format__HexLCPrime_26 = (MR_String) "d";
#line 1743 "string.format.m"
                                      mercury__string__format__succeeded = MR_TRUE;
#line 1743 "string.format.m"
                                    }
#line 1730 "string.format.m"
                                  else
#line 1730 "string.format.m"
                                    if ((mercury__string__format__V_10_10 == (MR_Integer) 14))
#line 1744 "string.format.m"
                                      {
#line 1744 "string.format.m"
                                        mercury__string__format__HexLCPrime_26 = (MR_String) "e";
#line 1744 "string.format.m"
                                        mercury__string__format__succeeded = MR_TRUE;
#line 1744 "string.format.m"
                                      }
#line 1730 "string.format.m"
                                    else
#line 1730 "string.format.m"
                                      if ((mercury__string__format__V_10_10 == (MR_Integer) 15))
#line 1745 "string.format.m"
                                        {
#line 1745 "string.format.m"
                                          mercury__string__format__HexLCPrime_26 = (MR_String) "f";
#line 1745 "string.format.m"
                                          mercury__string__format__succeeded = MR_TRUE;
#line 1745 "string.format.m"
                                        }
#line 1730 "string.format.m"
                                      else
#line 1730 "string.format.m"
                                        mercury__string__format__succeeded = MR_FALSE;
#line 1693 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1692 "string.format.m"
          mercury__string__format__LastDigitStr_6 = mercury__string__format__HexLCPrime_26;
#line 1693 "string.format.m"
        else
#line 1694 "string.format.m"
          {
#line 1694 "string.format.m"
            {
#line 1694 "string.format.m"
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_hex_digit_lc\'/1", (MR_String) "hex_digit failed");
            }
#line 1694 "string.format.m"
          }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_5, mercury__string__format__LastDigitStr_6, &mercury__string__format__NumStr_4);
        }
#line 1639 "string.format.m"
      }
#line 1642 "string.format.m"
    else
#line 1643 "string.format.m"
      mercury__string__format__NumStr_4 = (MR_String) "";
#line 1642 "string.format.m"
    return mercury__string__format__NumStr_4;
#line 1642 "string.format.m"
  }
#line 1614 "string.format.m"
}

#line 1613 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_integer_to_hex_uc_1_f_0(
#line 1613 "string.format.m"
  MR_Word mercury__string__format__Num_3)
#line 1613 "string.format.m"
{
#line 1633 "string.format.m"
  {
#line 1633 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1633 "string.format.m"
    MR_String mercury__string__format__NumStr_4;
#line 1628 "string.format.m"
    MR_Word mercury__string__format__V_8_8;
#line 1628 "string.format.m"
    MR_Word mercury__string__format__C_5_19;

#line 58 "integer.opt"
    {
#line 58 "integer.opt"
      mercury__string__format__V_8_8 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 0);
    }
#line 129 "integer.opt"
    {
#line 129 "integer.opt"
      mercury__integer____Compare____integer_0_0(&mercury__string__format__C_5_19, mercury__string__format__Num_3, mercury__string__format__V_8_8);
    }
#line 42 "integer.opt"
    mercury__string__format__succeeded = (mercury__string__format__C_5_19 == (MR_Integer) 2);
#line 1633 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1629 "string.format.m"
      {
#line 1629 "string.format.m"
        MR_Word mercury__string__format__Integer16_5;
#line 1629 "string.format.m"
        MR_String mercury__string__format__FrontDigitsStr_6;
#line 1629 "string.format.m"
        MR_String mercury__string__format__LastDigitStr_7;
#line 1629 "string.format.m"
        MR_Integer mercury__string__format__V_11_11;
#line 1629 "string.format.m"
        MR_Word mercury__string__format__V_12_12;
#line 1629 "string.format.m"
        MR_Integer mercury__string__format__V_13_13;
#line 1629 "string.format.m"
        MR_Word mercury__string__format__V_14_14;
#line 125 "integer.opt"
        MR_Word mercury__string__format___Rem_7_32;
#line 127 "integer.opt"
        MR_Word mercury__string__format___Quot_7_39;
#line 1700 "string.format.m"
        MR_String mercury__string__format__HexUCPrime_43;

#line 58 "integer.opt"
        {
#line 58 "integer.opt"
          mercury__string__format__Integer16_5 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 16);
        }
#line 125 "integer.opt"
        {
#line 125 "integer.opt"
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer16_5, &mercury__string__format__V_12_12, &mercury__string__format___Rem_7_32);
        }
#line 1630 "string.format.m"
        {
#line 1630 "string.format.m"
          mercury__string__format__V_11_11 = mercury__integer__int_1_f_0(mercury__string__format__V_12_12);
        }
#line 1630 "string.format.m"
        {
#line 1630 "string.format.m"
          mercury__string__format__FrontDigitsStr_6 = mercury__string__format__abs_int_to_hex_uc_1_f_0(mercury__string__format__V_11_11);
        }
#line 127 "integer.opt"
        {
#line 127 "integer.opt"
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer16_5, &mercury__string__format___Quot_7_39, &mercury__string__format__V_14_14);
        }
#line 1631 "string.format.m"
        {
#line 1631 "string.format.m"
          mercury__string__format__V_13_13 = mercury__integer__int_1_f_0(mercury__string__format__V_14_14);
        }
#line 1730 "string.format.m"
        if ((mercury__string__format__V_13_13 == (MR_Integer) 0))
#line 1730 "string.format.m"
          {
#line 1730 "string.format.m"
            mercury__string__format__HexUCPrime_43 = (MR_String) "0";
#line 1730 "string.format.m"
            mercury__string__format__succeeded = MR_TRUE;
#line 1730 "string.format.m"
          }
#line 1730 "string.format.m"
        else
#line 1730 "string.format.m"
          if ((mercury__string__format__V_13_13 == (MR_Integer) 1))
#line 1731 "string.format.m"
            {
#line 1731 "string.format.m"
              mercury__string__format__HexUCPrime_43 = (MR_String) "1";
#line 1731 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 1731 "string.format.m"
            }
#line 1730 "string.format.m"
          else
#line 1730 "string.format.m"
            if ((mercury__string__format__V_13_13 == (MR_Integer) 2))
#line 1732 "string.format.m"
              {
#line 1732 "string.format.m"
                mercury__string__format__HexUCPrime_43 = (MR_String) "2";
#line 1732 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 1732 "string.format.m"
              }
#line 1730 "string.format.m"
            else
#line 1730 "string.format.m"
              if ((mercury__string__format__V_13_13 == (MR_Integer) 3))
#line 1733 "string.format.m"
                {
#line 1733 "string.format.m"
                  mercury__string__format__HexUCPrime_43 = (MR_String) "3";
#line 1733 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 1733 "string.format.m"
                }
#line 1730 "string.format.m"
              else
#line 1730 "string.format.m"
                if ((mercury__string__format__V_13_13 == (MR_Integer) 4))
#line 1734 "string.format.m"
                  {
#line 1734 "string.format.m"
                    mercury__string__format__HexUCPrime_43 = (MR_String) "4";
#line 1734 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 1734 "string.format.m"
                  }
#line 1730 "string.format.m"
                else
#line 1730 "string.format.m"
                  if ((mercury__string__format__V_13_13 == (MR_Integer) 5))
#line 1735 "string.format.m"
                    {
#line 1735 "string.format.m"
                      mercury__string__format__HexUCPrime_43 = (MR_String) "5";
#line 1735 "string.format.m"
                      mercury__string__format__succeeded = MR_TRUE;
#line 1735 "string.format.m"
                    }
#line 1730 "string.format.m"
                  else
#line 1730 "string.format.m"
                    if ((mercury__string__format__V_13_13 == (MR_Integer) 6))
#line 1736 "string.format.m"
                      {
#line 1736 "string.format.m"
                        mercury__string__format__HexUCPrime_43 = (MR_String) "6";
#line 1736 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 1736 "string.format.m"
                      }
#line 1730 "string.format.m"
                    else
#line 1730 "string.format.m"
                      if ((mercury__string__format__V_13_13 == (MR_Integer) 7))
#line 1737 "string.format.m"
                        {
#line 1737 "string.format.m"
                          mercury__string__format__HexUCPrime_43 = (MR_String) "7";
#line 1737 "string.format.m"
                          mercury__string__format__succeeded = MR_TRUE;
#line 1737 "string.format.m"
                        }
#line 1730 "string.format.m"
                      else
#line 1730 "string.format.m"
                        if ((mercury__string__format__V_13_13 == (MR_Integer) 8))
#line 1738 "string.format.m"
                          {
#line 1738 "string.format.m"
                            mercury__string__format__HexUCPrime_43 = (MR_String) "8";
#line 1738 "string.format.m"
                            mercury__string__format__succeeded = MR_TRUE;
#line 1738 "string.format.m"
                          }
#line 1730 "string.format.m"
                        else
#line 1730 "string.format.m"
                          if ((mercury__string__format__V_13_13 == (MR_Integer) 9))
#line 1739 "string.format.m"
                            {
#line 1739 "string.format.m"
                              mercury__string__format__HexUCPrime_43 = (MR_String) "9";
#line 1739 "string.format.m"
                              mercury__string__format__succeeded = MR_TRUE;
#line 1739 "string.format.m"
                            }
#line 1730 "string.format.m"
                          else
#line 1730 "string.format.m"
                            if ((mercury__string__format__V_13_13 == (MR_Integer) 10))
#line 1740 "string.format.m"
                              {
#line 1740 "string.format.m"
                                mercury__string__format__HexUCPrime_43 = (MR_String) "A";
#line 1740 "string.format.m"
                                mercury__string__format__succeeded = MR_TRUE;
#line 1740 "string.format.m"
                              }
#line 1730 "string.format.m"
                            else
#line 1730 "string.format.m"
                              if ((mercury__string__format__V_13_13 == (MR_Integer) 11))
#line 1741 "string.format.m"
                                {
#line 1741 "string.format.m"
                                  mercury__string__format__HexUCPrime_43 = (MR_String) "B";
#line 1741 "string.format.m"
                                  mercury__string__format__succeeded = MR_TRUE;
#line 1741 "string.format.m"
                                }
#line 1730 "string.format.m"
                              else
#line 1730 "string.format.m"
                                if ((mercury__string__format__V_13_13 == (MR_Integer) 12))
#line 1742 "string.format.m"
                                  {
#line 1742 "string.format.m"
                                    mercury__string__format__HexUCPrime_43 = (MR_String) "C";
#line 1742 "string.format.m"
                                    mercury__string__format__succeeded = MR_TRUE;
#line 1742 "string.format.m"
                                  }
#line 1730 "string.format.m"
                                else
#line 1730 "string.format.m"
                                  if ((mercury__string__format__V_13_13 == (MR_Integer) 13))
#line 1743 "string.format.m"
                                    {
#line 1743 "string.format.m"
                                      mercury__string__format__HexUCPrime_43 = (MR_String) "D";
#line 1743 "string.format.m"
                                      mercury__string__format__succeeded = MR_TRUE;
#line 1743 "string.format.m"
                                    }
#line 1730 "string.format.m"
                                  else
#line 1730 "string.format.m"
                                    if ((mercury__string__format__V_13_13 == (MR_Integer) 14))
#line 1744 "string.format.m"
                                      {
#line 1744 "string.format.m"
                                        mercury__string__format__HexUCPrime_43 = (MR_String) "E";
#line 1744 "string.format.m"
                                        mercury__string__format__succeeded = MR_TRUE;
#line 1744 "string.format.m"
                                      }
#line 1730 "string.format.m"
                                    else
#line 1730 "string.format.m"
                                      if ((mercury__string__format__V_13_13 == (MR_Integer) 15))
#line 1745 "string.format.m"
                                        {
#line 1745 "string.format.m"
                                          mercury__string__format__HexUCPrime_43 = (MR_String) "F";
#line 1745 "string.format.m"
                                          mercury__string__format__succeeded = MR_TRUE;
#line 1745 "string.format.m"
                                        }
#line 1730 "string.format.m"
                                      else
#line 1730 "string.format.m"
                                        mercury__string__format__succeeded = MR_FALSE;
#line 1700 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1699 "string.format.m"
          mercury__string__format__LastDigitStr_7 = mercury__string__format__HexUCPrime_43;
#line 1700 "string.format.m"
        else
#line 1701 "string.format.m"
          {
#line 1701 "string.format.m"
            {
#line 1701 "string.format.m"
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_hex_digit_uc\'/1", (MR_String) "hex_digit failed");
            }
#line 1701 "string.format.m"
          }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_6, mercury__string__format__LastDigitStr_7, &mercury__string__format__NumStr_4);
        }
#line 1629 "string.format.m"
      }
#line 1633 "string.format.m"
    else
#line 1634 "string.format.m"
      mercury__string__format__NumStr_4 = (MR_String) "";
#line 1633 "string.format.m"
    return mercury__string__format__NumStr_4;
#line 1633 "string.format.m"
  }
#line 1613 "string.format.m"
}

#line 1612 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_integer_to_hex_lc_1_f_0(
#line 1612 "string.format.m"
  MR_Word mercury__string__format__Num_3)
#line 1612 "string.format.m"
{
#line 1623 "string.format.m"
  {
#line 1623 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1623 "string.format.m"
    MR_String mercury__string__format__NumStr_4;
#line 1618 "string.format.m"
    MR_Word mercury__string__format__V_8_8;
#line 1618 "string.format.m"
    MR_Word mercury__string__format__C_5_19;

#line 58 "integer.opt"
    {
#line 58 "integer.opt"
      mercury__string__format__V_8_8 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 0);
    }
#line 129 "integer.opt"
    {
#line 129 "integer.opt"
      mercury__integer____Compare____integer_0_0(&mercury__string__format__C_5_19, mercury__string__format__Num_3, mercury__string__format__V_8_8);
    }
#line 42 "integer.opt"
    mercury__string__format__succeeded = (mercury__string__format__C_5_19 == (MR_Integer) 2);
#line 1623 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1619 "string.format.m"
      {
#line 1619 "string.format.m"
        MR_Word mercury__string__format__Integer16_5;
#line 1619 "string.format.m"
        MR_String mercury__string__format__FrontDigitsStr_6;
#line 1619 "string.format.m"
        MR_String mercury__string__format__LastDigitStr_7;
#line 1619 "string.format.m"
        MR_Integer mercury__string__format__V_11_11;
#line 1619 "string.format.m"
        MR_Word mercury__string__format__V_12_12;
#line 1619 "string.format.m"
        MR_Integer mercury__string__format__V_13_13;
#line 1619 "string.format.m"
        MR_Word mercury__string__format__V_14_14;
#line 125 "integer.opt"
        MR_Word mercury__string__format___Rem_7_32;
#line 127 "integer.opt"
        MR_Word mercury__string__format___Quot_7_39;
#line 1693 "string.format.m"
        MR_String mercury__string__format__HexLCPrime_42;

#line 58 "integer.opt"
        {
#line 58 "integer.opt"
          mercury__string__format__Integer16_5 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 16);
        }
#line 125 "integer.opt"
        {
#line 125 "integer.opt"
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer16_5, &mercury__string__format__V_12_12, &mercury__string__format___Rem_7_32);
        }
#line 1620 "string.format.m"
        {
#line 1620 "string.format.m"
          mercury__string__format__V_11_11 = mercury__integer__int_1_f_0(mercury__string__format__V_12_12);
        }
#line 1620 "string.format.m"
        {
#line 1620 "string.format.m"
          mercury__string__format__FrontDigitsStr_6 = mercury__string__format__abs_int_to_hex_lc_1_f_0(mercury__string__format__V_11_11);
        }
#line 127 "integer.opt"
        {
#line 127 "integer.opt"
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer16_5, &mercury__string__format___Quot_7_39, &mercury__string__format__V_14_14);
        }
#line 1621 "string.format.m"
        {
#line 1621 "string.format.m"
          mercury__string__format__V_13_13 = mercury__integer__int_1_f_0(mercury__string__format__V_14_14);
        }
#line 1730 "string.format.m"
        if ((mercury__string__format__V_13_13 == (MR_Integer) 0))
#line 1730 "string.format.m"
          {
#line 1730 "string.format.m"
            mercury__string__format__HexLCPrime_42 = (MR_String) "0";
#line 1730 "string.format.m"
            mercury__string__format__succeeded = MR_TRUE;
#line 1730 "string.format.m"
          }
#line 1730 "string.format.m"
        else
#line 1730 "string.format.m"
          if ((mercury__string__format__V_13_13 == (MR_Integer) 1))
#line 1731 "string.format.m"
            {
#line 1731 "string.format.m"
              mercury__string__format__HexLCPrime_42 = (MR_String) "1";
#line 1731 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 1731 "string.format.m"
            }
#line 1730 "string.format.m"
          else
#line 1730 "string.format.m"
            if ((mercury__string__format__V_13_13 == (MR_Integer) 2))
#line 1732 "string.format.m"
              {
#line 1732 "string.format.m"
                mercury__string__format__HexLCPrime_42 = (MR_String) "2";
#line 1732 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 1732 "string.format.m"
              }
#line 1730 "string.format.m"
            else
#line 1730 "string.format.m"
              if ((mercury__string__format__V_13_13 == (MR_Integer) 3))
#line 1733 "string.format.m"
                {
#line 1733 "string.format.m"
                  mercury__string__format__HexLCPrime_42 = (MR_String) "3";
#line 1733 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 1733 "string.format.m"
                }
#line 1730 "string.format.m"
              else
#line 1730 "string.format.m"
                if ((mercury__string__format__V_13_13 == (MR_Integer) 4))
#line 1734 "string.format.m"
                  {
#line 1734 "string.format.m"
                    mercury__string__format__HexLCPrime_42 = (MR_String) "4";
#line 1734 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 1734 "string.format.m"
                  }
#line 1730 "string.format.m"
                else
#line 1730 "string.format.m"
                  if ((mercury__string__format__V_13_13 == (MR_Integer) 5))
#line 1735 "string.format.m"
                    {
#line 1735 "string.format.m"
                      mercury__string__format__HexLCPrime_42 = (MR_String) "5";
#line 1735 "string.format.m"
                      mercury__string__format__succeeded = MR_TRUE;
#line 1735 "string.format.m"
                    }
#line 1730 "string.format.m"
                  else
#line 1730 "string.format.m"
                    if ((mercury__string__format__V_13_13 == (MR_Integer) 6))
#line 1736 "string.format.m"
                      {
#line 1736 "string.format.m"
                        mercury__string__format__HexLCPrime_42 = (MR_String) "6";
#line 1736 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 1736 "string.format.m"
                      }
#line 1730 "string.format.m"
                    else
#line 1730 "string.format.m"
                      if ((mercury__string__format__V_13_13 == (MR_Integer) 7))
#line 1737 "string.format.m"
                        {
#line 1737 "string.format.m"
                          mercury__string__format__HexLCPrime_42 = (MR_String) "7";
#line 1737 "string.format.m"
                          mercury__string__format__succeeded = MR_TRUE;
#line 1737 "string.format.m"
                        }
#line 1730 "string.format.m"
                      else
#line 1730 "string.format.m"
                        if ((mercury__string__format__V_13_13 == (MR_Integer) 8))
#line 1738 "string.format.m"
                          {
#line 1738 "string.format.m"
                            mercury__string__format__HexLCPrime_42 = (MR_String) "8";
#line 1738 "string.format.m"
                            mercury__string__format__succeeded = MR_TRUE;
#line 1738 "string.format.m"
                          }
#line 1730 "string.format.m"
                        else
#line 1730 "string.format.m"
                          if ((mercury__string__format__V_13_13 == (MR_Integer) 9))
#line 1739 "string.format.m"
                            {
#line 1739 "string.format.m"
                              mercury__string__format__HexLCPrime_42 = (MR_String) "9";
#line 1739 "string.format.m"
                              mercury__string__format__succeeded = MR_TRUE;
#line 1739 "string.format.m"
                            }
#line 1730 "string.format.m"
                          else
#line 1730 "string.format.m"
                            if ((mercury__string__format__V_13_13 == (MR_Integer) 10))
#line 1740 "string.format.m"
                              {
#line 1740 "string.format.m"
                                mercury__string__format__HexLCPrime_42 = (MR_String) "a";
#line 1740 "string.format.m"
                                mercury__string__format__succeeded = MR_TRUE;
#line 1740 "string.format.m"
                              }
#line 1730 "string.format.m"
                            else
#line 1730 "string.format.m"
                              if ((mercury__string__format__V_13_13 == (MR_Integer) 11))
#line 1741 "string.format.m"
                                {
#line 1741 "string.format.m"
                                  mercury__string__format__HexLCPrime_42 = (MR_String) "b";
#line 1741 "string.format.m"
                                  mercury__string__format__succeeded = MR_TRUE;
#line 1741 "string.format.m"
                                }
#line 1730 "string.format.m"
                              else
#line 1730 "string.format.m"
                                if ((mercury__string__format__V_13_13 == (MR_Integer) 12))
#line 1742 "string.format.m"
                                  {
#line 1742 "string.format.m"
                                    mercury__string__format__HexLCPrime_42 = (MR_String) "c";
#line 1742 "string.format.m"
                                    mercury__string__format__succeeded = MR_TRUE;
#line 1742 "string.format.m"
                                  }
#line 1730 "string.format.m"
                                else
#line 1730 "string.format.m"
                                  if ((mercury__string__format__V_13_13 == (MR_Integer) 13))
#line 1743 "string.format.m"
                                    {
#line 1743 "string.format.m"
                                      mercury__string__format__HexLCPrime_42 = (MR_String) "d";
#line 1743 "string.format.m"
                                      mercury__string__format__succeeded = MR_TRUE;
#line 1743 "string.format.m"
                                    }
#line 1730 "string.format.m"
                                  else
#line 1730 "string.format.m"
                                    if ((mercury__string__format__V_13_13 == (MR_Integer) 14))
#line 1744 "string.format.m"
                                      {
#line 1744 "string.format.m"
                                        mercury__string__format__HexLCPrime_42 = (MR_String) "e";
#line 1744 "string.format.m"
                                        mercury__string__format__succeeded = MR_TRUE;
#line 1744 "string.format.m"
                                      }
#line 1730 "string.format.m"
                                    else
#line 1730 "string.format.m"
                                      if ((mercury__string__format__V_13_13 == (MR_Integer) 15))
#line 1745 "string.format.m"
                                        {
#line 1745 "string.format.m"
                                          mercury__string__format__HexLCPrime_42 = (MR_String) "f";
#line 1745 "string.format.m"
                                          mercury__string__format__succeeded = MR_TRUE;
#line 1745 "string.format.m"
                                        }
#line 1730 "string.format.m"
                                      else
#line 1730 "string.format.m"
                                        mercury__string__format__succeeded = MR_FALSE;
#line 1693 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1692 "string.format.m"
          mercury__string__format__LastDigitStr_7 = mercury__string__format__HexLCPrime_42;
#line 1693 "string.format.m"
        else
#line 1694 "string.format.m"
          {
#line 1694 "string.format.m"
            {
#line 1694 "string.format.m"
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_hex_digit_lc\'/1", (MR_String) "hex_digit failed");
            }
#line 1694 "string.format.m"
          }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_6, mercury__string__format__LastDigitStr_7, &mercury__string__format__NumStr_4);
        }
#line 1619 "string.format.m"
      }
#line 1623 "string.format.m"
    else
#line 1624 "string.format.m"
      mercury__string__format__NumStr_4 = (MR_String) "";
#line 1623 "string.format.m"
    return mercury__string__format__NumStr_4;
#line 1623 "string.format.m"
  }
#line 1612 "string.format.m"
}

#line 1588 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_int_to_decimal_1_f_0(
#line 1588 "string.format.m"
  MR_Integer mercury__string__format__Num_3)
#line 1588 "string.format.m"
{
#line 1605 "string.format.m"
  {
#line 1605 "string.format.m"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__Num_3 > (MR_Integer) 0);
#line 1605 "string.format.m"
    MR_String mercury__string__format__NumStr_4;

#line 1605 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1602 "string.format.m"
      {
#line 1602 "string.format.m"
        MR_String mercury__string__format__FrontDigitsStr_5;
#line 1602 "string.format.m"
        MR_String mercury__string__format__LastDigitStr_6;
#line 1602 "string.format.m"
        MR_Integer mercury__string__format__V_8_8 = (mercury__string__format__Num_3 / (MR_Integer) 10);
#line 1602 "string.format.m"
        MR_Integer mercury__string__format__V_10_10;
#line 1677 "string.format.m"
        MR_String mercury__string__format__DecimalPrime_26;

#line 1602 "string.format.m"
        {
#line 1602 "string.format.m"
          mercury__string__format__FrontDigitsStr_5 = mercury__string__format__abs_int_to_decimal_1_f_0(mercury__string__format__V_8_8);
        }
#line 124 "int.opt"
        mercury__string__format__V_10_10 = (mercury__string__format__Num_3 % (MR_Integer) 10);
#line 1717 "string.format.m"
        if ((mercury__string__format__V_10_10 == (MR_Integer) 0))
#line 1717 "string.format.m"
          {
#line 1717 "string.format.m"
            mercury__string__format__DecimalPrime_26 = (MR_String) "0";
#line 1717 "string.format.m"
            mercury__string__format__succeeded = MR_TRUE;
#line 1717 "string.format.m"
          }
#line 1717 "string.format.m"
        else
#line 1717 "string.format.m"
          if ((mercury__string__format__V_10_10 == (MR_Integer) 1))
#line 1718 "string.format.m"
            {
#line 1718 "string.format.m"
              mercury__string__format__DecimalPrime_26 = (MR_String) "1";
#line 1718 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 1718 "string.format.m"
            }
#line 1717 "string.format.m"
          else
#line 1717 "string.format.m"
            if ((mercury__string__format__V_10_10 == (MR_Integer) 2))
#line 1719 "string.format.m"
              {
#line 1719 "string.format.m"
                mercury__string__format__DecimalPrime_26 = (MR_String) "2";
#line 1719 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 1719 "string.format.m"
              }
#line 1717 "string.format.m"
            else
#line 1717 "string.format.m"
              if ((mercury__string__format__V_10_10 == (MR_Integer) 3))
#line 1720 "string.format.m"
                {
#line 1720 "string.format.m"
                  mercury__string__format__DecimalPrime_26 = (MR_String) "3";
#line 1720 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 1720 "string.format.m"
                }
#line 1717 "string.format.m"
              else
#line 1717 "string.format.m"
                if ((mercury__string__format__V_10_10 == (MR_Integer) 4))
#line 1721 "string.format.m"
                  {
#line 1721 "string.format.m"
                    mercury__string__format__DecimalPrime_26 = (MR_String) "4";
#line 1721 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 1721 "string.format.m"
                  }
#line 1717 "string.format.m"
                else
#line 1717 "string.format.m"
                  if ((mercury__string__format__V_10_10 == (MR_Integer) 5))
#line 1722 "string.format.m"
                    {
#line 1722 "string.format.m"
                      mercury__string__format__DecimalPrime_26 = (MR_String) "5";
#line 1722 "string.format.m"
                      mercury__string__format__succeeded = MR_TRUE;
#line 1722 "string.format.m"
                    }
#line 1717 "string.format.m"
                  else
#line 1717 "string.format.m"
                    if ((mercury__string__format__V_10_10 == (MR_Integer) 6))
#line 1723 "string.format.m"
                      {
#line 1723 "string.format.m"
                        mercury__string__format__DecimalPrime_26 = (MR_String) "6";
#line 1723 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 1723 "string.format.m"
                      }
#line 1717 "string.format.m"
                    else
#line 1717 "string.format.m"
                      if ((mercury__string__format__V_10_10 == (MR_Integer) 7))
#line 1724 "string.format.m"
                        {
#line 1724 "string.format.m"
                          mercury__string__format__DecimalPrime_26 = (MR_String) "7";
#line 1724 "string.format.m"
                          mercury__string__format__succeeded = MR_TRUE;
#line 1724 "string.format.m"
                        }
#line 1717 "string.format.m"
                      else
#line 1717 "string.format.m"
                        if ((mercury__string__format__V_10_10 == (MR_Integer) 8))
#line 1725 "string.format.m"
                          {
#line 1725 "string.format.m"
                            mercury__string__format__DecimalPrime_26 = (MR_String) "8";
#line 1725 "string.format.m"
                            mercury__string__format__succeeded = MR_TRUE;
#line 1725 "string.format.m"
                          }
#line 1717 "string.format.m"
                        else
#line 1717 "string.format.m"
                          if ((mercury__string__format__V_10_10 == (MR_Integer) 9))
#line 1726 "string.format.m"
                            {
#line 1726 "string.format.m"
                              mercury__string__format__DecimalPrime_26 = (MR_String) "9";
#line 1726 "string.format.m"
                              mercury__string__format__succeeded = MR_TRUE;
#line 1726 "string.format.m"
                            }
#line 1717 "string.format.m"
                          else
#line 1717 "string.format.m"
                            mercury__string__format__succeeded = MR_FALSE;
#line 1677 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1676 "string.format.m"
          mercury__string__format__LastDigitStr_6 = mercury__string__format__DecimalPrime_26;
#line 1677 "string.format.m"
        else
#line 1678 "string.format.m"
          {
#line 1678 "string.format.m"
            {
#line 1678 "string.format.m"
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_decimal_digit\'/1", (MR_String) "decimal_digit failed");
            }
#line 1678 "string.format.m"
          }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_5, mercury__string__format__LastDigitStr_6, &mercury__string__format__NumStr_4);
        }
#line 1602 "string.format.m"
      }
#line 1605 "string.format.m"
    else
#line 1606 "string.format.m"
      mercury__string__format__NumStr_4 = (MR_String) "";
#line 1605 "string.format.m"
    return mercury__string__format__NumStr_4;
#line 1605 "string.format.m"
  }
#line 1588 "string.format.m"
}

#line 1587 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_integer_to_decimal_1_f_0(
#line 1587 "string.format.m"
  MR_Word mercury__string__format__Num_3)
#line 1587 "string.format.m"
{
#line 1596 "string.format.m"
  {
#line 1596 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1596 "string.format.m"
    MR_String mercury__string__format__NumStr_4;
#line 1591 "string.format.m"
    MR_Word mercury__string__format__V_8_8;
#line 1591 "string.format.m"
    MR_Word mercury__string__format__C_5_19;

#line 58 "integer.opt"
    {
#line 58 "integer.opt"
      mercury__string__format__V_8_8 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 0);
    }
#line 129 "integer.opt"
    {
#line 129 "integer.opt"
      mercury__integer____Compare____integer_0_0(&mercury__string__format__C_5_19, mercury__string__format__Num_3, mercury__string__format__V_8_8);
    }
#line 42 "integer.opt"
    mercury__string__format__succeeded = (mercury__string__format__C_5_19 == (MR_Integer) 2);
#line 1596 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1592 "string.format.m"
      {
#line 1592 "string.format.m"
        MR_Word mercury__string__format__Integer10_5;
#line 1592 "string.format.m"
        MR_String mercury__string__format__FrontDigitsStr_6;
#line 1592 "string.format.m"
        MR_String mercury__string__format__LastDigitStr_7;
#line 1592 "string.format.m"
        MR_Integer mercury__string__format__V_11_11;
#line 1592 "string.format.m"
        MR_Word mercury__string__format__V_12_12;
#line 1592 "string.format.m"
        MR_Integer mercury__string__format__V_13_13;
#line 1592 "string.format.m"
        MR_Word mercury__string__format__V_14_14;
#line 125 "integer.opt"
        MR_Word mercury__string__format___Rem_7_32;
#line 127 "integer.opt"
        MR_Word mercury__string__format___Quot_7_39;
#line 1677 "string.format.m"
        MR_String mercury__string__format__DecimalPrime_42;

#line 58 "integer.opt"
        {
#line 58 "integer.opt"
          mercury__string__format__Integer10_5 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 10);
        }
#line 125 "integer.opt"
        {
#line 125 "integer.opt"
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer10_5, &mercury__string__format__V_12_12, &mercury__string__format___Rem_7_32);
        }
#line 1593 "string.format.m"
        {
#line 1593 "string.format.m"
          mercury__string__format__V_11_11 = mercury__integer__int_1_f_0(mercury__string__format__V_12_12);
        }
#line 1593 "string.format.m"
        {
#line 1593 "string.format.m"
          mercury__string__format__FrontDigitsStr_6 = mercury__string__format__abs_int_to_decimal_1_f_0(mercury__string__format__V_11_11);
        }
#line 127 "integer.opt"
        {
#line 127 "integer.opt"
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer10_5, &mercury__string__format___Quot_7_39, &mercury__string__format__V_14_14);
        }
#line 1594 "string.format.m"
        {
#line 1594 "string.format.m"
          mercury__string__format__V_13_13 = mercury__integer__int_1_f_0(mercury__string__format__V_14_14);
        }
#line 1717 "string.format.m"
        if ((mercury__string__format__V_13_13 == (MR_Integer) 0))
#line 1717 "string.format.m"
          {
#line 1717 "string.format.m"
            mercury__string__format__DecimalPrime_42 = (MR_String) "0";
#line 1717 "string.format.m"
            mercury__string__format__succeeded = MR_TRUE;
#line 1717 "string.format.m"
          }
#line 1717 "string.format.m"
        else
#line 1717 "string.format.m"
          if ((mercury__string__format__V_13_13 == (MR_Integer) 1))
#line 1718 "string.format.m"
            {
#line 1718 "string.format.m"
              mercury__string__format__DecimalPrime_42 = (MR_String) "1";
#line 1718 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 1718 "string.format.m"
            }
#line 1717 "string.format.m"
          else
#line 1717 "string.format.m"
            if ((mercury__string__format__V_13_13 == (MR_Integer) 2))
#line 1719 "string.format.m"
              {
#line 1719 "string.format.m"
                mercury__string__format__DecimalPrime_42 = (MR_String) "2";
#line 1719 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 1719 "string.format.m"
              }
#line 1717 "string.format.m"
            else
#line 1717 "string.format.m"
              if ((mercury__string__format__V_13_13 == (MR_Integer) 3))
#line 1720 "string.format.m"
                {
#line 1720 "string.format.m"
                  mercury__string__format__DecimalPrime_42 = (MR_String) "3";
#line 1720 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 1720 "string.format.m"
                }
#line 1717 "string.format.m"
              else
#line 1717 "string.format.m"
                if ((mercury__string__format__V_13_13 == (MR_Integer) 4))
#line 1721 "string.format.m"
                  {
#line 1721 "string.format.m"
                    mercury__string__format__DecimalPrime_42 = (MR_String) "4";
#line 1721 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 1721 "string.format.m"
                  }
#line 1717 "string.format.m"
                else
#line 1717 "string.format.m"
                  if ((mercury__string__format__V_13_13 == (MR_Integer) 5))
#line 1722 "string.format.m"
                    {
#line 1722 "string.format.m"
                      mercury__string__format__DecimalPrime_42 = (MR_String) "5";
#line 1722 "string.format.m"
                      mercury__string__format__succeeded = MR_TRUE;
#line 1722 "string.format.m"
                    }
#line 1717 "string.format.m"
                  else
#line 1717 "string.format.m"
                    if ((mercury__string__format__V_13_13 == (MR_Integer) 6))
#line 1723 "string.format.m"
                      {
#line 1723 "string.format.m"
                        mercury__string__format__DecimalPrime_42 = (MR_String) "6";
#line 1723 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 1723 "string.format.m"
                      }
#line 1717 "string.format.m"
                    else
#line 1717 "string.format.m"
                      if ((mercury__string__format__V_13_13 == (MR_Integer) 7))
#line 1724 "string.format.m"
                        {
#line 1724 "string.format.m"
                          mercury__string__format__DecimalPrime_42 = (MR_String) "7";
#line 1724 "string.format.m"
                          mercury__string__format__succeeded = MR_TRUE;
#line 1724 "string.format.m"
                        }
#line 1717 "string.format.m"
                      else
#line 1717 "string.format.m"
                        if ((mercury__string__format__V_13_13 == (MR_Integer) 8))
#line 1725 "string.format.m"
                          {
#line 1725 "string.format.m"
                            mercury__string__format__DecimalPrime_42 = (MR_String) "8";
#line 1725 "string.format.m"
                            mercury__string__format__succeeded = MR_TRUE;
#line 1725 "string.format.m"
                          }
#line 1717 "string.format.m"
                        else
#line 1717 "string.format.m"
                          if ((mercury__string__format__V_13_13 == (MR_Integer) 9))
#line 1726 "string.format.m"
                            {
#line 1726 "string.format.m"
                              mercury__string__format__DecimalPrime_42 = (MR_String) "9";
#line 1726 "string.format.m"
                              mercury__string__format__succeeded = MR_TRUE;
#line 1726 "string.format.m"
                            }
#line 1717 "string.format.m"
                          else
#line 1717 "string.format.m"
                            mercury__string__format__succeeded = MR_FALSE;
#line 1677 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1676 "string.format.m"
          mercury__string__format__LastDigitStr_7 = mercury__string__format__DecimalPrime_42;
#line 1677 "string.format.m"
        else
#line 1678 "string.format.m"
          {
#line 1678 "string.format.m"
            {
#line 1678 "string.format.m"
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_decimal_digit\'/1", (MR_String) "decimal_digit failed");
            }
#line 1678 "string.format.m"
          }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_6, mercury__string__format__LastDigitStr_7, &mercury__string__format__NumStr_4);
        }
#line 1592 "string.format.m"
      }
#line 1596 "string.format.m"
    else
#line 1597 "string.format.m"
      mercury__string__format__NumStr_4 = (MR_String) "";
#line 1596 "string.format.m"
    return mercury__string__format__NumStr_4;
#line 1596 "string.format.m"
  }
#line 1587 "string.format.m"
}

#line 1564 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_int_to_octal_1_f_0(
#line 1564 "string.format.m"
  MR_Integer mercury__string__format__Num_3)
#line 1564 "string.format.m"
{
#line 1581 "string.format.m"
  {
#line 1581 "string.format.m"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__Num_3 > (MR_Integer) 0);
#line 1581 "string.format.m"
    MR_String mercury__string__format__NumStr_4;

#line 1581 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1578 "string.format.m"
      {
#line 1578 "string.format.m"
        MR_String mercury__string__format__FrontDigitsStr_5;
#line 1578 "string.format.m"
        MR_String mercury__string__format__LastDigitStr_6;
#line 1578 "string.format.m"
        MR_Integer mercury__string__format__V_8_8 = (mercury__string__format__Num_3 / (MR_Integer) 8);
#line 1578 "string.format.m"
        MR_Integer mercury__string__format__V_10_10;
#line 1665 "string.format.m"
        MR_String mercury__string__format__OctalPrime_26;

#line 1578 "string.format.m"
        {
#line 1578 "string.format.m"
          mercury__string__format__FrontDigitsStr_5 = mercury__string__format__abs_int_to_octal_1_f_0(mercury__string__format__V_8_8);
        }
#line 124 "int.opt"
        mercury__string__format__V_10_10 = (mercury__string__format__Num_3 % (MR_Integer) 8);
#line 1706 "string.format.m"
        if ((mercury__string__format__V_10_10 == (MR_Integer) 0))
#line 1706 "string.format.m"
          {
#line 1706 "string.format.m"
            mercury__string__format__OctalPrime_26 = (MR_String) "0";
#line 1706 "string.format.m"
            mercury__string__format__succeeded = MR_TRUE;
#line 1706 "string.format.m"
          }
#line 1706 "string.format.m"
        else
#line 1706 "string.format.m"
          if ((mercury__string__format__V_10_10 == (MR_Integer) 1))
#line 1707 "string.format.m"
            {
#line 1707 "string.format.m"
              mercury__string__format__OctalPrime_26 = (MR_String) "1";
#line 1707 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 1707 "string.format.m"
            }
#line 1706 "string.format.m"
          else
#line 1706 "string.format.m"
            if ((mercury__string__format__V_10_10 == (MR_Integer) 2))
#line 1708 "string.format.m"
              {
#line 1708 "string.format.m"
                mercury__string__format__OctalPrime_26 = (MR_String) "2";
#line 1708 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 1708 "string.format.m"
              }
#line 1706 "string.format.m"
            else
#line 1706 "string.format.m"
              if ((mercury__string__format__V_10_10 == (MR_Integer) 3))
#line 1709 "string.format.m"
                {
#line 1709 "string.format.m"
                  mercury__string__format__OctalPrime_26 = (MR_String) "3";
#line 1709 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 1709 "string.format.m"
                }
#line 1706 "string.format.m"
              else
#line 1706 "string.format.m"
                if ((mercury__string__format__V_10_10 == (MR_Integer) 4))
#line 1710 "string.format.m"
                  {
#line 1710 "string.format.m"
                    mercury__string__format__OctalPrime_26 = (MR_String) "4";
#line 1710 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 1710 "string.format.m"
                  }
#line 1706 "string.format.m"
                else
#line 1706 "string.format.m"
                  if ((mercury__string__format__V_10_10 == (MR_Integer) 5))
#line 1711 "string.format.m"
                    {
#line 1711 "string.format.m"
                      mercury__string__format__OctalPrime_26 = (MR_String) "5";
#line 1711 "string.format.m"
                      mercury__string__format__succeeded = MR_TRUE;
#line 1711 "string.format.m"
                    }
#line 1706 "string.format.m"
                  else
#line 1706 "string.format.m"
                    if ((mercury__string__format__V_10_10 == (MR_Integer) 6))
#line 1712 "string.format.m"
                      {
#line 1712 "string.format.m"
                        mercury__string__format__OctalPrime_26 = (MR_String) "6";
#line 1712 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 1712 "string.format.m"
                      }
#line 1706 "string.format.m"
                    else
#line 1706 "string.format.m"
                      if ((mercury__string__format__V_10_10 == (MR_Integer) 7))
#line 1713 "string.format.m"
                        {
#line 1713 "string.format.m"
                          mercury__string__format__OctalPrime_26 = (MR_String) "7";
#line 1713 "string.format.m"
                          mercury__string__format__succeeded = MR_TRUE;
#line 1713 "string.format.m"
                        }
#line 1706 "string.format.m"
                      else
#line 1706 "string.format.m"
                        mercury__string__format__succeeded = MR_FALSE;
#line 1665 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1664 "string.format.m"
          mercury__string__format__LastDigitStr_6 = mercury__string__format__OctalPrime_26;
#line 1665 "string.format.m"
        else
#line 1666 "string.format.m"
          {
#line 1666 "string.format.m"
            {
#line 1666 "string.format.m"
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_octal_digit\'/1", (MR_String) "octal_digit failed");
            }
#line 1666 "string.format.m"
          }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_5, mercury__string__format__LastDigitStr_6, &mercury__string__format__NumStr_4);
        }
#line 1578 "string.format.m"
      }
#line 1581 "string.format.m"
    else
#line 1582 "string.format.m"
      mercury__string__format__NumStr_4 = (MR_String) "";
#line 1581 "string.format.m"
    return mercury__string__format__NumStr_4;
#line 1581 "string.format.m"
  }
#line 1564 "string.format.m"
}

#line 1563 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__abs_integer_to_octal_1_f_0(
#line 1563 "string.format.m"
  MR_Word mercury__string__format__Num_3)
#line 1563 "string.format.m"
{
#line 1572 "string.format.m"
  {
#line 1572 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1572 "string.format.m"
    MR_String mercury__string__format__NumStr_4;
#line 1567 "string.format.m"
    MR_Word mercury__string__format__V_8_8;
#line 1567 "string.format.m"
    MR_Word mercury__string__format__C_5_19;

#line 58 "integer.opt"
    {
#line 58 "integer.opt"
      mercury__string__format__V_8_8 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 0);
    }
#line 129 "integer.opt"
    {
#line 129 "integer.opt"
      mercury__integer____Compare____integer_0_0(&mercury__string__format__C_5_19, mercury__string__format__Num_3, mercury__string__format__V_8_8);
    }
#line 42 "integer.opt"
    mercury__string__format__succeeded = (mercury__string__format__C_5_19 == (MR_Integer) 2);
#line 1572 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1568 "string.format.m"
      {
#line 1568 "string.format.m"
        MR_Word mercury__string__format__Integer8_5;
#line 1568 "string.format.m"
        MR_String mercury__string__format__FrontDigitsStr_6;
#line 1568 "string.format.m"
        MR_String mercury__string__format__LastDigitStr_7;
#line 1568 "string.format.m"
        MR_Integer mercury__string__format__V_11_11;
#line 1568 "string.format.m"
        MR_Word mercury__string__format__V_12_12;
#line 1568 "string.format.m"
        MR_Integer mercury__string__format__V_13_13;
#line 1568 "string.format.m"
        MR_Word mercury__string__format__V_14_14;
#line 125 "integer.opt"
        MR_Word mercury__string__format___Rem_7_32;
#line 127 "integer.opt"
        MR_Word mercury__string__format___Quot_7_39;
#line 1665 "string.format.m"
        MR_String mercury__string__format__OctalPrime_42;

#line 58 "integer.opt"
        {
#line 58 "integer.opt"
          mercury__string__format__Integer8_5 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 8);
        }
#line 125 "integer.opt"
        {
#line 125 "integer.opt"
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer8_5, &mercury__string__format__V_12_12, &mercury__string__format___Rem_7_32);
        }
#line 1569 "string.format.m"
        {
#line 1569 "string.format.m"
          mercury__string__format__V_11_11 = mercury__integer__int_1_f_0(mercury__string__format__V_12_12);
        }
#line 1569 "string.format.m"
        {
#line 1569 "string.format.m"
          mercury__string__format__FrontDigitsStr_6 = mercury__string__format__abs_int_to_octal_1_f_0(mercury__string__format__V_11_11);
        }
#line 127 "integer.opt"
        {
#line 127 "integer.opt"
          mercury__integer__big_quot_rem_4_p_0(mercury__string__format__Num_3, mercury__string__format__Integer8_5, &mercury__string__format___Quot_7_39, &mercury__string__format__V_14_14);
        }
#line 1570 "string.format.m"
        {
#line 1570 "string.format.m"
          mercury__string__format__V_13_13 = mercury__integer__int_1_f_0(mercury__string__format__V_14_14);
        }
#line 1706 "string.format.m"
        if ((mercury__string__format__V_13_13 == (MR_Integer) 0))
#line 1706 "string.format.m"
          {
#line 1706 "string.format.m"
            mercury__string__format__OctalPrime_42 = (MR_String) "0";
#line 1706 "string.format.m"
            mercury__string__format__succeeded = MR_TRUE;
#line 1706 "string.format.m"
          }
#line 1706 "string.format.m"
        else
#line 1706 "string.format.m"
          if ((mercury__string__format__V_13_13 == (MR_Integer) 1))
#line 1707 "string.format.m"
            {
#line 1707 "string.format.m"
              mercury__string__format__OctalPrime_42 = (MR_String) "1";
#line 1707 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 1707 "string.format.m"
            }
#line 1706 "string.format.m"
          else
#line 1706 "string.format.m"
            if ((mercury__string__format__V_13_13 == (MR_Integer) 2))
#line 1708 "string.format.m"
              {
#line 1708 "string.format.m"
                mercury__string__format__OctalPrime_42 = (MR_String) "2";
#line 1708 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 1708 "string.format.m"
              }
#line 1706 "string.format.m"
            else
#line 1706 "string.format.m"
              if ((mercury__string__format__V_13_13 == (MR_Integer) 3))
#line 1709 "string.format.m"
                {
#line 1709 "string.format.m"
                  mercury__string__format__OctalPrime_42 = (MR_String) "3";
#line 1709 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 1709 "string.format.m"
                }
#line 1706 "string.format.m"
              else
#line 1706 "string.format.m"
                if ((mercury__string__format__V_13_13 == (MR_Integer) 4))
#line 1710 "string.format.m"
                  {
#line 1710 "string.format.m"
                    mercury__string__format__OctalPrime_42 = (MR_String) "4";
#line 1710 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 1710 "string.format.m"
                  }
#line 1706 "string.format.m"
                else
#line 1706 "string.format.m"
                  if ((mercury__string__format__V_13_13 == (MR_Integer) 5))
#line 1711 "string.format.m"
                    {
#line 1711 "string.format.m"
                      mercury__string__format__OctalPrime_42 = (MR_String) "5";
#line 1711 "string.format.m"
                      mercury__string__format__succeeded = MR_TRUE;
#line 1711 "string.format.m"
                    }
#line 1706 "string.format.m"
                  else
#line 1706 "string.format.m"
                    if ((mercury__string__format__V_13_13 == (MR_Integer) 6))
#line 1712 "string.format.m"
                      {
#line 1712 "string.format.m"
                        mercury__string__format__OctalPrime_42 = (MR_String) "6";
#line 1712 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 1712 "string.format.m"
                      }
#line 1706 "string.format.m"
                    else
#line 1706 "string.format.m"
                      if ((mercury__string__format__V_13_13 == (MR_Integer) 7))
#line 1713 "string.format.m"
                        {
#line 1713 "string.format.m"
                          mercury__string__format__OctalPrime_42 = (MR_String) "7";
#line 1713 "string.format.m"
                          mercury__string__format__succeeded = MR_TRUE;
#line 1713 "string.format.m"
                        }
#line 1706 "string.format.m"
                      else
#line 1706 "string.format.m"
                        mercury__string__format__succeeded = MR_FALSE;
#line 1665 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1664 "string.format.m"
          mercury__string__format__LastDigitStr_7 = mercury__string__format__OctalPrime_42;
#line 1665 "string.format.m"
        else
#line 1666 "string.format.m"
          {
#line 1666 "string.format.m"
            {
#line 1666 "string.format.m"
              mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_octal_digit\'/1", (MR_String) "octal_digit failed");
            }
#line 1666 "string.format.m"
          }
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_6, mercury__string__format__LastDigitStr_7, &mercury__string__format__NumStr_4);
        }
#line 1568 "string.format.m"
      }
#line 1572 "string.format.m"
    else
#line 1573 "string.format.m"
      mercury__string__format__NumStr_4 = (MR_String) "";
#line 1572 "string.format.m"
    return mercury__string__format__NumStr_4;
#line 1572 "string.format.m"
  }
#line 1563 "string.format.m"
}

#line 1528 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__justify_string_3_f_0(
#line 1528 "string.format.m"
  MR_Word mercury__string__format__Flags_5,
#line 1528 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_6,
#line 1528 "string.format.m"
  MR_String mercury__string__format__Str_7)
#line 1528 "string.format.m"
{
#line 1540 "string.format.m"
  {
#line 1540 "string.format.m"
    MR_bool mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybeWidth_6)) == (MR_mktag((MR_Integer) 1)));
#line 1540 "string.format.m"
    MR_String mercury__string__format__JustifiedStr_8;
#line 1540 "string.format.m"
    MR_Integer mercury__string__format__Width_9;
#line 1532 "string.format.m"
    MR_Integer mercury__string__format__V_10_10;

#line 1532 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1532 "string.format.m"
      {
#line 1532 "string.format.m"
        mercury__string__format__Width_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_6, (MR_Integer) 0)));
#line 250 "string.opt"
        {
#line 250 "string.opt"
          mercury__string__count_codepoints_2_p_0(mercury__string__format__Str_7, &mercury__string__format__V_10_10);
        }
#line 1533 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__Width_9 > mercury__string__format__V_10_10);
#line 1532 "string.format.m"
      }
#line 1540 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1537 "string.format.m"
      {
#line 1535 "string.format.m"
        MR_Word mercury__string__format__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1535 "string.format.m"
        MR_Word mercury__string__format__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_5, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1535 "string.format.m"
        MR_Word mercury__string__format__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1535 "string.format.m"
        MR_Word mercury__string__format__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1535 "string.format.m"
        MR_Word mercury__string__format__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_5, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1535 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__V_11_11 == (MR_Integer) 1);
#line 1537 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1536 "string.format.m"
          {
#line 1536 "string.format.m"
            {
#line 1536 "string.format.m"
              mercury__string__pad_right_4_p_0(mercury__string__format__Str_7, (MR_Char) 32, mercury__string__format__Width_9, &mercury__string__format__JustifiedStr_8);
            }
#line 1536 "string.format.m"
          }
#line 1537 "string.format.m"
        else
#line 1538 "string.format.m"
          {
#line 1538 "string.format.m"
            {
#line 1538 "string.format.m"
              mercury__string__pad_left_4_p_0(mercury__string__format__Str_7, (MR_Char) 32, mercury__string__format__Width_9, &mercury__string__format__JustifiedStr_8);
            }
#line 1538 "string.format.m"
          }
#line 1537 "string.format.m"
      }
#line 1540 "string.format.m"
    else
#line 1541 "string.format.m"
      mercury__string__format__JustifiedStr_8 = mercury__string__format__Str_7;
#line 1540 "string.format.m"
    return mercury__string__format__JustifiedStr_8;
#line 1540 "string.format.m"
  }
#line 1528 "string.format.m"
}

#line 1343 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__format_float_5_f_0(
#line 1343 "string.format.m"
  MR_Word mercury__string__format__Flags_7,
#line 1343 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_8,
#line 1343 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_9,
#line 1343 "string.format.m"
  MR_Word mercury__string__format__Kind_10,
#line 1343 "string.format.m"
  MR_Float mercury__string__format__Float_11)
#line 1343 "string.format.m"
{
#line 1346 "string.format.m"
  {
#line 1346 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1346 "string.format.m"
    MR_String mercury__string__format__String_12;
#line 1346 "string.format.m"
    MR_String mercury__string__format__SignedStr_13;

#line 120 "float.opt"
{
#define MR_PROC_LABEL mercury__string__format__format_float_5_f_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__string__format__Float_11 ;
		{
#line 120 "float.opt"

    SUCCESS_INDICATOR = MR_is_nan(Flt);

#line 13108 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 120 "float.opt"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 1361 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1354 "string.format.m"
      if ((((((mercury__string__format__Kind_10 == (MR_Integer) 0)) || ((mercury__string__format__Kind_10 == (MR_Integer) 2)))) || ((mercury__string__format__Kind_10 == (MR_Integer) 4))))
#line 1353 "string.format.m"
        mercury__string__format__SignedStr_13 = (MR_String) "nan";
#line 1354 "string.format.m"
      else
#line 1359 "string.format.m"
        mercury__string__format__SignedStr_13 = (MR_String) "NAN";
#line 1361 "string.format.m"
    else
#line 1375 "string.format.m"
      {
#line 117 "float.opt"
{
#define MR_PROC_LABEL mercury__string__format__format_float_5_f_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__string__format__Float_11 ;
		{
#line 117 "float.opt"

    SUCCESS_INDICATOR = MR_is_infinite(Flt);

#line 13144 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 117 "float.opt"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 1375 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1368 "string.format.m"
          if ((((((mercury__string__format__Kind_10 == (MR_Integer) 0)) || ((mercury__string__format__Kind_10 == (MR_Integer) 2)))) || ((mercury__string__format__Kind_10 == (MR_Integer) 4))))
#line 1367 "string.format.m"
            {
#line 1367 "string.format.m"
              mercury__string__format__succeeded = (mercury__string__format__Float_11 < ((MR_Float) 0.0000000000000000));
#line 1367 "string.format.m"
              if (mercury__string__format__succeeded)
#line 1367 "string.format.m"
                mercury__string__format__SignedStr_13 = (MR_String) "-infinity";
#line 1367 "string.format.m"
              else
#line 1367 "string.format.m"
                mercury__string__format__SignedStr_13 = (MR_String) "infinity";
#line 1367 "string.format.m"
            }
#line 1368 "string.format.m"
          else
#line 1373 "string.format.m"
            {
#line 1373 "string.format.m"
              mercury__string__format__succeeded = (mercury__string__format__Float_11 < ((MR_Float) 0.0000000000000000));
#line 1373 "string.format.m"
              if (mercury__string__format__succeeded)
#line 1373 "string.format.m"
                mercury__string__format__SignedStr_13 = (MR_String) "-INFINITY";
#line 1373 "string.format.m"
              else
#line 1373 "string.format.m"
                mercury__string__format__SignedStr_13 = (MR_String) "INFINITY";
#line 1373 "string.format.m"
            }
#line 1375 "string.format.m"
        else
#line 1380 "string.format.m"
          {
#line 1380 "string.format.m"
            MR_Float mercury__string__format__AbsFloat_14;
#line 1380 "string.format.m"
            MR_String mercury__string__format__AbsStr_15;
#line 1380 "string.format.m"
            MR_String mercury__string__format__PrecModStr_21;
#line 1380 "string.format.m"
            MR_String mercury__string__format__FieldStr_24;
#line 1380 "string.format.m"
            MR_Word mercury__string__format__ZeroPadded_25;
#line 1438 "string.format.m"
            MR_Integer mercury__string__format__Width_23;
#line 1431 "string.format.m"
            MR_Integer mercury__string__format__V_35_35;
#line 1431 "string.format.m"
            MR_Word mercury__string__format__V_36_36;
#line 1431 "string.format.m"
            MR_Word mercury__string__format__V_56_56;
#line 1433 "string.format.m"
            MR_Word mercury__string__format__V_54_54;
#line 1433 "string.format.m"
            MR_Word mercury__string__format__V_55_55;
#line 1433 "string.format.m"
            MR_Word mercury__string__format__V_57_57;

#line 1380 "string.format.m"
            {
#line 1380 "string.format.m"
              mercury__string__format__AbsFloat_14 = mercury__float__abs_1_f_0(mercury__string__format__Float_11);
            }
#line 1381 "string.format.m"
            {
#line 1381 "string.format.m"
              mercury__string__format__AbsStr_15 = mercury__string__format__convert_float_to_string_1_f_0(mercury__string__format__AbsFloat_14);
            }
#line 1401 "string.format.m"
            if ((mercury__string__format__Kind_10 == (MR_Integer) 0))
#line 1387 "string.format.m"
              {
#line 1387 "string.format.m"
                MR_Integer mercury__string__format__Prec_17;
#line 1387 "string.format.m"
                MR_String mercury__string__format__PrecStr_18;
#line 1393 "string.format.m"
                MR_Word mercury__string__format__V_33_33;
#line 1393 "string.format.m"
                MR_Integer mercury__string__format__V_34_34;
#line 1393 "string.format.m"
                MR_Word mercury__string__format__V_46_46;
#line 1393 "string.format.m"
                MR_Word mercury__string__format__V_47_47;
#line 1393 "string.format.m"
                MR_Word mercury__string__format__V_48_48;
#line 1393 "string.format.m"
                MR_Word mercury__string__format__V_49_49;

#line 1454 "string.format.m"
                if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1458 "string.format.m"
                  mercury__string__format__Prec_17 = (MR_Integer) 6;
#line 1454 "string.format.m"
                else
#line 1454 "string.format.m"
                  mercury__string__format__Prec_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
#line 1389 "string.format.m"
                {
#line 1389 "string.format.m"
                  mercury__string__format__PrecStr_18 = mercury__string__format__change_to_e_notation_3_f_0(mercury__string__format__AbsStr_15, mercury__string__format__Prec_17, (MR_String) "e");
                }
#line 1393 "string.format.m"
                mercury__string__format__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1393 "string.format.m"
                mercury__string__format__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1393 "string.format.m"
                mercury__string__format__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1393 "string.format.m"
                mercury__string__format__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1393 "string.format.m"
                mercury__string__format__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1393 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__V_33_33 == (MR_Integer) 0);
#line 1393 "string.format.m"
                if (mercury__string__format__succeeded)
#line 1393 "string.format.m"
                  {
#line 1394 "string.format.m"
                    mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_9)) == (MR_mktag((MR_Integer) 1)));
#line 1394 "string.format.m"
                    if (mercury__string__format__succeeded)
#line 1394 "string.format.m"
                      {
#line 1394 "string.format.m"
                        mercury__string__format__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
#line 1394 "string.format.m"
                        mercury__string__format__succeeded = (mercury__string__format__V_34_34 == (MR_Integer) 0);
#line 1394 "string.format.m"
                      }
#line 1393 "string.format.m"
                  }
#line 1398 "string.format.m"
                if (mercury__string__format__succeeded)
#line 1396 "string.format.m"
                  {
#line 1396 "string.format.m"
                    MR_String mercury__string__format__BaseStr_19;
#line 1396 "string.format.m"
                    MR_String mercury__string__format__ExponentStr_20;

#line 1396 "string.format.m"
                    {
#line 1396 "string.format.m"
                      mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__PrecStr_18, &mercury__string__format__BaseStr_19, &mercury__string__format__ExponentStr_20);
                    }
#line 1397 "string.format.m"
                    {
#line 1397 "string.format.m"
                      mercury__string__format__PrecModStr_21 = mercury__string__f_43_43_2_f_0(mercury__string__format__BaseStr_19, mercury__string__format__ExponentStr_20);
                    }
#line 1396 "string.format.m"
                  }
#line 1398 "string.format.m"
                else
#line 1399 "string.format.m"
                  mercury__string__format__PrecModStr_21 = mercury__string__format__PrecStr_18;
#line 1387 "string.format.m"
              }
#line 1401 "string.format.m"
            else
#line 1401 "string.format.m"
              if ((mercury__string__format__Kind_10 == (MR_Integer) 1))
#line 1387 "string.format.m"
                {
#line 1387 "string.format.m"
                  MR_Integer mercury__string__format__Prec_83;
#line 1387 "string.format.m"
                  MR_String mercury__string__format__PrecStr_84;
#line 1393 "string.format.m"
                  MR_Word mercury__string__format__V_66_66;
#line 1393 "string.format.m"
                  MR_Integer mercury__string__format__V_67_67;
#line 1393 "string.format.m"
                  MR_Word mercury__string__format__V_62_62;
#line 1393 "string.format.m"
                  MR_Word mercury__string__format__V_63_63;
#line 1393 "string.format.m"
                  MR_Word mercury__string__format__V_64_64;
#line 1393 "string.format.m"
                  MR_Word mercury__string__format__V_65_65;

#line 1454 "string.format.m"
                  if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1458 "string.format.m"
                    mercury__string__format__Prec_83 = (MR_Integer) 6;
#line 1454 "string.format.m"
                  else
#line 1454 "string.format.m"
                    mercury__string__format__Prec_83 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
#line 1389 "string.format.m"
                  {
#line 1389 "string.format.m"
                    mercury__string__format__PrecStr_84 = mercury__string__format__change_to_e_notation_3_f_0(mercury__string__format__AbsStr_15, mercury__string__format__Prec_83, (MR_String) "E");
                  }
#line 1393 "string.format.m"
                  mercury__string__format__V_66_66 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1393 "string.format.m"
                  mercury__string__format__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1393 "string.format.m"
                  mercury__string__format__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1393 "string.format.m"
                  mercury__string__format__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1393 "string.format.m"
                  mercury__string__format__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1393 "string.format.m"
                  mercury__string__format__succeeded = (mercury__string__format__V_66_66 == (MR_Integer) 0);
#line 1393 "string.format.m"
                  if (mercury__string__format__succeeded)
#line 1393 "string.format.m"
                    {
#line 1394 "string.format.m"
                      mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_9)) == (MR_mktag((MR_Integer) 1)));
#line 1394 "string.format.m"
                      if (mercury__string__format__succeeded)
#line 1394 "string.format.m"
                        {
#line 1394 "string.format.m"
                          mercury__string__format__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
#line 1394 "string.format.m"
                          mercury__string__format__succeeded = (mercury__string__format__V_67_67 == (MR_Integer) 0);
#line 1394 "string.format.m"
                        }
#line 1393 "string.format.m"
                    }
#line 1398 "string.format.m"
                  if (mercury__string__format__succeeded)
#line 1396 "string.format.m"
                    {
#line 1396 "string.format.m"
                      MR_String mercury__string__format__BaseStr_72;
#line 1396 "string.format.m"
                      MR_String mercury__string__format__ExponentStr_73;

#line 1396 "string.format.m"
                      {
#line 1396 "string.format.m"
                        mercury__string__format__split_at_decimal_point_3_p_0(mercury__string__format__PrecStr_84, &mercury__string__format__BaseStr_72, &mercury__string__format__ExponentStr_73);
                      }
#line 1397 "string.format.m"
                      {
#line 1397 "string.format.m"
                        mercury__string__format__PrecModStr_21 = mercury__string__f_43_43_2_f_0(mercury__string__format__BaseStr_72, mercury__string__format__ExponentStr_73);
                      }
#line 1396 "string.format.m"
                    }
#line 1398 "string.format.m"
                  else
#line 1399 "string.format.m"
                    mercury__string__format__PrecModStr_21 = mercury__string__format__PrecStr_84;
#line 1387 "string.format.m"
                }
#line 1401 "string.format.m"
              else
#line 1401 "string.format.m"
                if ((mercury__string__format__Kind_10 == (MR_Integer) 4))
#line 1421 "string.format.m"
                  {
#line 1421 "string.format.m"
                    MR_Integer mercury__string__format__Prec_44;

#line 1466 "string.format.m"
                    if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1475 "string.format.m"
                      mercury__string__format__Prec_44 = (MR_Integer) 6;
#line 1466 "string.format.m"
                    else
#line 1466 "string.format.m"
                      {
#line 1466 "string.format.m"
                        MR_Integer mercury__string__format__Prec0_105 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));

#line 1467 "string.format.m"
                        mercury__string__format__succeeded = (mercury__string__format__Prec0_105 == (MR_Integer) 0);
#line 1469 "string.format.m"
                        if (mercury__string__format__succeeded)
#line 1468 "string.format.m"
                          mercury__string__format__Prec_44 = (MR_Integer) 1;
#line 1469 "string.format.m"
                        else
#line 1470 "string.format.m"
                          mercury__string__format__Prec_44 = mercury__string__format__Prec0_105;
#line 1466 "string.format.m"
                      }
#line 1423 "string.format.m"
                    {
#line 1423 "string.format.m"
                      mercury__string__format__PrecModStr_21 = mercury__string__format__change_to_g_notation_4_f_0(mercury__string__format__AbsStr_15, mercury__string__format__Prec_44, (MR_String) "e", mercury__string__format__Flags_7);
                    }
#line 1421 "string.format.m"
                  }
#line 1401 "string.format.m"
                else
#line 1401 "string.format.m"
                  if ((mercury__string__format__Kind_10 == (MR_Integer) 5))
#line 1421 "string.format.m"
                    {
#line 1421 "string.format.m"
                      MR_Integer mercury__string__format__Prec_94;

#line 1466 "string.format.m"
                      if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1475 "string.format.m"
                        mercury__string__format__Prec_94 = (MR_Integer) 6;
#line 1466 "string.format.m"
                      else
#line 1466 "string.format.m"
                        {
#line 1466 "string.format.m"
                          MR_Integer mercury__string__format__Prec0_108 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));

#line 1467 "string.format.m"
                          mercury__string__format__succeeded = (mercury__string__format__Prec0_108 == (MR_Integer) 0);
#line 1469 "string.format.m"
                          if (mercury__string__format__succeeded)
#line 1468 "string.format.m"
                            mercury__string__format__Prec_94 = (MR_Integer) 1;
#line 1469 "string.format.m"
                          else
#line 1470 "string.format.m"
                            mercury__string__format__Prec_94 = mercury__string__format__Prec0_108;
#line 1466 "string.format.m"
                        }
#line 1423 "string.format.m"
                      {
#line 1423 "string.format.m"
                        mercury__string__format__PrecModStr_21 = mercury__string__format__change_to_g_notation_4_f_0(mercury__string__format__AbsStr_15, mercury__string__format__Prec_94, (MR_String) "E", mercury__string__format__Flags_7);
                      }
#line 1421 "string.format.m"
                    }
#line 1401 "string.format.m"
                  else
#line 1404 "string.format.m"
                    {
#line 1404 "string.format.m"
                      MR_Integer mercury__string__format__Prec_41;
#line 1404 "string.format.m"
                      MR_String mercury__string__format__PrecStr_42;
#line 1410 "string.format.m"
                      MR_Word mercury__string__format__V_28_28;
#line 1410 "string.format.m"
                      MR_Integer mercury__string__format__V_29_29;
#line 1410 "string.format.m"
                      MR_Word mercury__string__format__V_50_50;
#line 1410 "string.format.m"
                      MR_Word mercury__string__format__V_51_51;
#line 1410 "string.format.m"
                      MR_Word mercury__string__format__V_52_52;
#line 1410 "string.format.m"
                      MR_Word mercury__string__format__V_53_53;

#line 1454 "string.format.m"
                      if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1458 "string.format.m"
                        mercury__string__format__Prec_41 = (MR_Integer) 6;
#line 1454 "string.format.m"
                      else
#line 1454 "string.format.m"
                        mercury__string__format__Prec_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
#line 1406 "string.format.m"
                      {
#line 1406 "string.format.m"
                        mercury__string__format__PrecStr_42 = mercury__string__format__change_precision_2_f_0(mercury__string__format__AbsStr_15, mercury__string__format__Prec_41);
                      }
#line 1410 "string.format.m"
                      mercury__string__format__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1410 "string.format.m"
                      mercury__string__format__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1410 "string.format.m"
                      mercury__string__format__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1410 "string.format.m"
                      mercury__string__format__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1410 "string.format.m"
                      mercury__string__format__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1410 "string.format.m"
                      mercury__string__format__succeeded = (mercury__string__format__V_28_28 == (MR_Integer) 0);
#line 1410 "string.format.m"
                      if (mercury__string__format__succeeded)
#line 1410 "string.format.m"
                        {
#line 1411 "string.format.m"
                          mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_9)) == (MR_mktag((MR_Integer) 1)));
#line 1411 "string.format.m"
                          if (mercury__string__format__succeeded)
#line 1411 "string.format.m"
                            {
#line 1411 "string.format.m"
                              mercury__string__format__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
#line 1411 "string.format.m"
                              mercury__string__format__succeeded = (mercury__string__format__V_29_29 == (MR_Integer) 0);
#line 1411 "string.format.m"
                            }
#line 1410 "string.format.m"
                        }
#line 1415 "string.format.m"
                      if (mercury__string__format__succeeded)
#line 1413 "string.format.m"
                        {
#line 1413 "string.format.m"
                          MR_Integer mercury__string__format__PrecStrLen_22;
#line 1413 "string.format.m"
                          MR_Integer mercury__string__format__V_31_31;

#line 1413 "string.format.m"
                          {
#line 1413 "string.format.m"
                            mercury__string__format__PrecStrLen_22 = mercury__string__count_codepoints_1_f_0(mercury__string__format__PrecStr_42);
                          }
#line 1414 "string.format.m"
                          mercury__string__format__V_31_31 = (mercury__string__format__PrecStrLen_22 - (MR_Integer) 1);
#line 1414 "string.format.m"
                          {
#line 1414 "string.format.m"
                            mercury__string__format__PrecModStr_21 = mercury__string__between_3_f_0(mercury__string__format__PrecStr_42, (MR_Integer) 0, mercury__string__format__V_31_31);
                          }
#line 1413 "string.format.m"
                        }
#line 1415 "string.format.m"
                      else
#line 1416 "string.format.m"
                        mercury__string__format__PrecModStr_21 = mercury__string__format__PrecStr_42;
#line 1404 "string.format.m"
                    }
#line 1431 "string.format.m"
            mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybeWidth_8)) == (MR_mktag((MR_Integer) 1)));
#line 1431 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1431 "string.format.m"
              {
#line 1431 "string.format.m"
                mercury__string__format__Width_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_8, (MR_Integer) 0)));
#line 1432 "string.format.m"
                {
#line 1432 "string.format.m"
                  mercury__string__format__V_35_35 = mercury__string__count_codepoints_1_f_0(mercury__string__format__PrecModStr_21);
                }
#line 1432 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__Width_23 > mercury__string__format__V_35_35);
#line 1431 "string.format.m"
                if (mercury__string__format__succeeded)
#line 1431 "string.format.m"
                  {
#line 1433 "string.format.m"
                    mercury__string__format__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1433 "string.format.m"
                    mercury__string__format__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1433 "string.format.m"
                    mercury__string__format__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1433 "string.format.m"
                    mercury__string__format__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1433 "string.format.m"
                    mercury__string__format__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1433 "string.format.m"
                    mercury__string__format__succeeded = (mercury__string__format__V_36_36 == (MR_Integer) 1);
#line 1431 "string.format.m"
                    if (mercury__string__format__succeeded)
#line 1434 "string.format.m"
                      mercury__string__format__succeeded = (mercury__string__format__V_56_56 == (MR_Integer) 0);
#line 1431 "string.format.m"
                  }
#line 1431 "string.format.m"
              }
#line 1438 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1436 "string.format.m"
              {
#line 1436 "string.format.m"
                MR_Integer mercury__string__format__V_39_39 = (mercury__string__format__Width_23 - (MR_Integer) 1);

#line 1436 "string.format.m"
                {
#line 1436 "string.format.m"
                  mercury__string__format__FieldStr_24 = mercury__string__pad_left_3_f_0(mercury__string__format__PrecModStr_21, (MR_Char) 48, mercury__string__format__V_39_39);
                }
#line 1437 "string.format.m"
                mercury__string__format__ZeroPadded_25 = (MR_Integer) 1;
#line 1436 "string.format.m"
              }
#line 1438 "string.format.m"
            else
#line 1439 "string.format.m"
              {
#line 1439 "string.format.m"
                mercury__string__format__FieldStr_24 = mercury__string__format__PrecModStr_21;
#line 1440 "string.format.m"
                mercury__string__format__ZeroPadded_25 = (MR_Integer) 0;
#line 1439 "string.format.m"
              }
#line 1512 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__Float_11 < ((MR_Float) 0.0000000000000000));
#line 1514 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1513 "string.format.m"
              {
#line 406 "string.opt"
                {
#line 406 "string.opt"
                  mercury__string__append_3_p_2((MR_String) "-", mercury__string__format__FieldStr_24, &mercury__string__format__SignedStr_13);
                }
#line 1513 "string.format.m"
              }
#line 1514 "string.format.m"
            else
#line 1516 "string.format.m"
              {
#line 1514 "string.format.m"
                MR_Word mercury__string__format__V_116_116 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1514 "string.format.m"
                MR_Word mercury__string__format__V_121_121 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1514 "string.format.m"
                MR_Word mercury__string__format__V_122_122 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1514 "string.format.m"
                MR_Word mercury__string__format__V_123_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1514 "string.format.m"
                MR_Word mercury__string__format__V_124_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 1514 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__V_116_116 == (MR_Integer) 1);
#line 1516 "string.format.m"
                if (mercury__string__format__succeeded)
#line 1515 "string.format.m"
                  {
#line 406 "string.opt"
                    {
#line 406 "string.opt"
                      mercury__string__append_3_p_2((MR_String) "+", mercury__string__format__FieldStr_24, &mercury__string__format__SignedStr_13);
                    }
#line 1515 "string.format.m"
                  }
#line 1516 "string.format.m"
                else
#line 1518 "string.format.m"
                  {
#line 1516 "string.format.m"
                    MR_Word mercury__string__format__V_118_118 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1516 "string.format.m"
                    MR_Word mercury__string__format__V_125_125 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1516 "string.format.m"
                    MR_Word mercury__string__format__V_126_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1516 "string.format.m"
                    MR_Word mercury__string__format__V_127_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1516 "string.format.m"
                    MR_Word mercury__string__format__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1516 "string.format.m"
                    mercury__string__format__succeeded = (mercury__string__format__V_118_118 == (MR_Integer) 1);
#line 1518 "string.format.m"
                    if (mercury__string__format__succeeded)
#line 1517 "string.format.m"
                      {
#line 406 "string.opt"
                        {
#line 406 "string.opt"
                          mercury__string__append_3_p_2((MR_String) " ", mercury__string__format__FieldStr_24, &mercury__string__format__SignedStr_13);
                        }
#line 1517 "string.format.m"
                      }
#line 1518 "string.format.m"
                    else
#line 1522 "string.format.m"
                      if ((mercury__string__format__ZeroPadded_25 == (MR_Integer) 0))
#line 1524 "string.format.m"
                        mercury__string__format__SignedStr_13 = mercury__string__format__FieldStr_24;
#line 1522 "string.format.m"
                      else
#line 1520 "string.format.m"
                        {
#line 406 "string.opt"
                          {
#line 406 "string.opt"
                            mercury__string__append_3_p_2((MR_String) "0", mercury__string__format__FieldStr_24, &mercury__string__format__SignedStr_13);
                          }
#line 1520 "string.format.m"
                        }
#line 1518 "string.format.m"
                  }
#line 1516 "string.format.m"
              }
#line 1380 "string.format.m"
          }
#line 1375 "string.format.m"
      }
#line 1447 "string.format.m"
    {
#line 1447 "string.format.m"
      return mercury__string__format__String_12 = mercury__string__format__justify_string_3_f_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_8, mercury__string__format__SignedStr_13);
    }
#line 1346 "string.format.m"
    return mercury__string__format__String_12;
#line 1346 "string.format.m"
  }
#line 1343 "string.format.m"
}

#line 1201 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__format_unsigned_int_5_f_0(
#line 1201 "string.format.m"
  MR_Word mercury__string__format__Flags_7,
#line 1201 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_8,
#line 1201 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_9,
#line 1201 "string.format.m"
  MR_Word mercury__string__format__Base_10,
#line 1201 "string.format.m"
  MR_Integer mercury__string__format__Int_11)
#line 1201 "string.format.m"
{
#line 1204 "string.format.m"
  {
#line 1204 "string.format.m"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__Int_11 == (MR_Integer) 0);
#line 1204 "string.format.m"
    MR_String mercury__string__format__String_12;
#line 1204 "string.format.m"
    MR_String mercury__string__format__AbsIntStr_13;
#line 1204 "string.format.m"
    MR_Integer mercury__string__format__AbsIntStrLength_16;
#line 1204 "string.format.m"
    MR_String mercury__string__format__PrecStr_18;
#line 1204 "string.format.m"
    MR_String mercury__string__format__PrecModStr_19;
#line 1204 "string.format.m"
    MR_String mercury__string__format__FieldModStr_23;
#line 1268 "string.format.m"
    MR_Integer mercury__string__format__Prec_17;
#line 1274 "string.format.m"
    MR_Word mercury__string__format__V_33_33;
#line 1275 "string.format.m"
    MR_Word mercury__string__format__V_49_49;
#line 1275 "string.format.m"
    MR_Word mercury__string__format__V_50_50;
#line 1275 "string.format.m"
    MR_Word mercury__string__format__V_51_51;
#line 1275 "string.format.m"
    MR_Word mercury__string__format__V_52_52;
#line 1276 "string.format.m"
    MR_String mercury__string__format__V_34_34;
#line 1313 "string.format.m"
    MR_Integer mercury__string__format__Width_20;
#line 1285 "string.format.m"
    MR_Integer mercury__string__format__V_36_36;
#line 1285 "string.format.m"
    MR_Word mercury__string__format__V_37_37;
#line 1285 "string.format.m"
    MR_Word mercury__string__format__V_55_55;
#line 1287 "string.format.m"
    MR_Word mercury__string__format__V_53_53;
#line 1287 "string.format.m"
    MR_Word mercury__string__format__V_54_54;
#line 1287 "string.format.m"
    MR_Word mercury__string__format__V_56_56;

#line 1214 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1211 "string.format.m"
      {
#line 1209 "string.format.m"
        MR_Integer mercury__string__format__V_24_24;

#line 1209 "string.format.m"
        mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_9)) == (MR_mktag((MR_Integer) 1)));
#line 1209 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1209 "string.format.m"
          {
#line 1209 "string.format.m"
            mercury__string__format__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
#line 1209 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__V_24_24 == (MR_Integer) 0);
#line 1209 "string.format.m"
          }
#line 1211 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1210 "string.format.m"
          mercury__string__format__AbsIntStr_13 = (MR_String) "";
#line 1211 "string.format.m"
        else
#line 1212 "string.format.m"
          mercury__string__format__AbsIntStr_13 = (MR_String) "0";
#line 1211 "string.format.m"
      }
#line 1214 "string.format.m"
    else
#line 1240 "string.format.m"
      {
#line 1224 "string.format.m"
        MR_Integer mercury__string__format__V_26_26;

#line 1224 "string.format.m"
        mercury__string__format__succeeded = ((MR_Integer) 0 <= mercury__string__format__Int_11);
#line 1224 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1224 "string.format.m"
          {
#line 1224 "string.format.m"
            mercury__string__format__V_26_26 = (MR_Integer) 32767;
#line 1224 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__Int_11 <= mercury__string__format__V_26_26);
#line 1224 "string.format.m"
          }
#line 1240 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1228 "string.format.m"
          if ((mercury__string__format__Base_10 == (MR_Integer) 1))
#line 1230 "string.format.m"
            {
#line 1230 "string.format.m"
              mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_int_to_decimal_1_f_0(mercury__string__format__Int_11);
            }
#line 1228 "string.format.m"
          else
#line 1228 "string.format.m"
            if ((mercury__string__format__Base_10 == (MR_Integer) 3))
#line 1238 "string.format.m"
              {
#line 1238 "string.format.m"
                mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_int_to_hex_uc_1_f_0(mercury__string__format__Int_11);
              }
#line 1228 "string.format.m"
            else
#line 1228 "string.format.m"
              if ((mercury__string__format__Base_10 == (MR_Integer) 0))
#line 1227 "string.format.m"
                {
#line 1227 "string.format.m"
                  mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_int_to_octal_1_f_0(mercury__string__format__Int_11);
                }
#line 1228 "string.format.m"
              else
#line 1235 "string.format.m"
                {
#line 1235 "string.format.m"
                  mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_int_to_hex_lc_1_f_0(mercury__string__format__Int_11);
                }
#line 1240 "string.format.m"
        else
#line 1241 "string.format.m"
          {
#line 1241 "string.format.m"
            MR_Word mercury__string__format__Div_14;
#line 1241 "string.format.m"
            MR_Word mercury__string__format__UnsignedInteger_15;
#line 1241 "string.format.m"
            MR_Word mercury__string__format__V_27_27;
#line 1241 "string.format.m"
            MR_Word mercury__string__format__V_29_29;
#line 1241 "string.format.m"
            MR_Integer mercury__string__format__V_30_30;
#line 1241 "string.format.m"
            MR_Word mercury__string__format__V_31_31;

#line 58 "integer.opt"
            {
#line 58 "integer.opt"
              mercury__string__format__V_27_27 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 2);
            }
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_5_f_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 13927 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__V_30_30  = Bits;
#line 171 "int.opt"
}
#line 58 "integer.opt"
            {
#line 58 "integer.opt"
              mercury__string__format__V_29_29 = mercury__integer__int_to_integer_1_f_0(mercury__string__format__V_30_30);
            }
#line 1241 "string.format.m"
            {
#line 1241 "string.format.m"
              mercury__string__format__Div_14 = mercury__integer__pow_2_f_0(mercury__string__format__V_27_27, mercury__string__format__V_29_29);
            }
#line 58 "integer.opt"
            {
#line 58 "integer.opt"
              mercury__string__format__V_31_31 = mercury__integer__int_to_integer_1_f_0(mercury__string__format__Int_11);
            }
#line 88 "integer.opt"
            {
#line 88 "integer.opt"
              mercury__string__format__UnsignedInteger_15 = mercury__integer__big_mod_2_f_0(mercury__string__format__V_31_31, mercury__string__format__Div_14);
            }
#line 1246 "string.format.m"
            if ((mercury__string__format__Base_10 == (MR_Integer) 1))
#line 1248 "string.format.m"
              {
#line 1248 "string.format.m"
                mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_integer_to_decimal_1_f_0(mercury__string__format__UnsignedInteger_15);
              }
#line 1246 "string.format.m"
            else
#line 1246 "string.format.m"
              if ((mercury__string__format__Base_10 == (MR_Integer) 3))
#line 1256 "string.format.m"
                {
#line 1256 "string.format.m"
                  mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_integer_to_hex_uc_1_f_0(mercury__string__format__UnsignedInteger_15);
                }
#line 1246 "string.format.m"
              else
#line 1246 "string.format.m"
                if ((mercury__string__format__Base_10 == (MR_Integer) 0))
#line 1245 "string.format.m"
                  {
#line 1245 "string.format.m"
                    mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_integer_to_octal_1_f_0(mercury__string__format__UnsignedInteger_15);
                  }
#line 1246 "string.format.m"
                else
#line 1253 "string.format.m"
                  {
#line 1253 "string.format.m"
                    mercury__string__format__AbsIntStr_13 = mercury__string__format__abs_integer_to_hex_lc_1_f_0(mercury__string__format__UnsignedInteger_15);
                  }
#line 1241 "string.format.m"
          }
#line 1240 "string.format.m"
      }
#line 250 "string.opt"
    {
#line 250 "string.opt"
      mercury__string__count_codepoints_2_p_0(mercury__string__format__AbsIntStr_13, &mercury__string__format__AbsIntStrLength_16);
    }
#line 1264 "string.format.m"
    mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_9)) == (MR_mktag((MR_Integer) 1)));
#line 1264 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1264 "string.format.m"
      {
#line 1264 "string.format.m"
        mercury__string__format__Prec_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));
#line 1265 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__Prec_17 > mercury__string__format__AbsIntStrLength_16);
#line 1264 "string.format.m"
      }
#line 1268 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1267 "string.format.m"
      {
#line 553 "string.opt"
        {
#line 553 "string.opt"
          mercury__string__pad_left_4_p_0(mercury__string__format__AbsIntStr_13, (MR_Char) 48, mercury__string__format__Prec_17, &mercury__string__format__PrecStr_18);
        }
#line 1267 "string.format.m"
      }
#line 1268 "string.format.m"
    else
#line 1269 "string.format.m"
      mercury__string__format__PrecStr_18 = mercury__string__format__AbsIntStr_13;
#line 1274 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__Base_10 == (MR_Integer) 0);
#line 1274 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1274 "string.format.m"
      {
#line 1275 "string.format.m"
        mercury__string__format__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1275 "string.format.m"
        mercury__string__format__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1275 "string.format.m"
        mercury__string__format__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1275 "string.format.m"
        mercury__string__format__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1275 "string.format.m"
        mercury__string__format__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1275 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__V_33_33 == (MR_Integer) 1);
#line 1274 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1274 "string.format.m"
          {
#line 1276 "string.format.m"
            mercury__string__format__V_34_34 = (MR_String) "0";
#line 1276 "string.format.m"
            {
#line 1276 "string.format.m"
              mercury__string__format__succeeded = mercury__string__prefix_2_p_0(mercury__string__format__PrecStr_18, mercury__string__format__V_34_34);
            }
#line 1276 "string.format.m"
            mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 1274 "string.format.m"
          }
#line 1274 "string.format.m"
      }
#line 1279 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1278 "string.format.m"
      {
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2((MR_String) "0", mercury__string__format__PrecStr_18, &mercury__string__format__PrecModStr_19);
        }
#line 1278 "string.format.m"
      }
#line 1279 "string.format.m"
    else
#line 1280 "string.format.m"
      mercury__string__format__PrecModStr_19 = mercury__string__format__PrecStr_18;
#line 1285 "string.format.m"
    mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybeWidth_8)) == (MR_mktag((MR_Integer) 1)));
#line 1285 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1285 "string.format.m"
      {
#line 1285 "string.format.m"
        mercury__string__format__Width_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_8, (MR_Integer) 0)));
#line 250 "string.opt"
        {
#line 250 "string.opt"
          mercury__string__count_codepoints_2_p_0(mercury__string__format__PrecModStr_19, &mercury__string__format__V_36_36);
        }
#line 1286 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__Width_20 > mercury__string__format__V_36_36);
#line 1285 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1285 "string.format.m"
          {
#line 1287 "string.format.m"
            mercury__string__format__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1287 "string.format.m"
            mercury__string__format__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1287 "string.format.m"
            mercury__string__format__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1287 "string.format.m"
            mercury__string__format__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1287 "string.format.m"
            mercury__string__format__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1287 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__V_37_37 == (MR_Integer) 1);
#line 1285 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1285 "string.format.m"
              {
#line 1288 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__V_55_55 == (MR_Integer) 0);
#line 1285 "string.format.m"
                if (mercury__string__format__succeeded)
#line 1289 "string.format.m"
                  mercury__string__format__succeeded = (mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1285 "string.format.m"
              }
#line 1285 "string.format.m"
          }
#line 1285 "string.format.m"
      }
#line 1313 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1309 "string.format.m"
      {
#line 1309 "string.format.m"
        MR_String mercury__string__format__Prefix_21;
#line 1293 "string.format.m"
        MR_Word mercury__string__format__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1293 "string.format.m"
        MR_Word mercury__string__format__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1293 "string.format.m"
        MR_Word mercury__string__format__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1293 "string.format.m"
        MR_Word mercury__string__format__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1293 "string.format.m"
        MR_Word mercury__string__format__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1293 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__V_39_39 == (MR_Integer) 1);
#line 1293 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1297 "string.format.m"
          {
#line 1297 "string.format.m"
            if ((mercury__string__format__Base_10 == (MR_Integer) 2))
#line 1298 "string.format.m"
              {
#line 1299 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__Int_11 == (MR_Integer) 0);
#line 1299 "string.format.m"
                mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 1298 "string.format.m"
                if (mercury__string__format__succeeded)
#line 1298 "string.format.m"
                  {
#line 1300 "string.format.m"
                    mercury__string__format__Prefix_21 = (MR_String) "0x";
#line 1300 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 1298 "string.format.m"
                  }
#line 1298 "string.format.m"
              }
#line 1297 "string.format.m"
            else
#line 1297 "string.format.m"
              if ((mercury__string__format__Base_10 == (MR_Integer) 4))
#line 1296 "string.format.m"
                {
#line 1296 "string.format.m"
                  mercury__string__format__Prefix_21 = (MR_String) "0x";
#line 1296 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 1296 "string.format.m"
                }
#line 1297 "string.format.m"
              else
#line 1297 "string.format.m"
                if ((mercury__string__format__Base_10 == (MR_Integer) 3))
#line 1302 "string.format.m"
                  {
#line 1303 "string.format.m"
                    mercury__string__format__succeeded = (mercury__string__format__Int_11 == (MR_Integer) 0);
#line 1303 "string.format.m"
                    mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 1302 "string.format.m"
                    if (mercury__string__format__succeeded)
#line 1302 "string.format.m"
                      {
#line 1304 "string.format.m"
                        mercury__string__format__Prefix_21 = (MR_String) "0X";
#line 1304 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 1302 "string.format.m"
                      }
#line 1302 "string.format.m"
                  }
#line 1297 "string.format.m"
                else
#line 1297 "string.format.m"
                  mercury__string__format__succeeded = MR_FALSE;
#line 1297 "string.format.m"
          }
#line 1309 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1307 "string.format.m"
          {
#line 1307 "string.format.m"
            MR_String mercury__string__format__FieldStr_22;
#line 1307 "string.format.m"
            MR_Integer mercury__string__format__V_41_41 = (mercury__string__format__Width_20 - (MR_Integer) 2);

#line 553 "string.opt"
            {
#line 553 "string.opt"
              mercury__string__pad_left_4_p_0(mercury__string__format__PrecModStr_19, (MR_Char) 48, mercury__string__format__V_41_41, &mercury__string__format__FieldStr_22);
            }
#line 1308 "string.format.m"
            {
#line 1308 "string.format.m"
              mercury__string__format__FieldModStr_23 = mercury__string__f_43_43_2_f_0(mercury__string__format__Prefix_21, mercury__string__format__FieldStr_22);
            }
#line 1307 "string.format.m"
          }
#line 1309 "string.format.m"
        else
#line 1310 "string.format.m"
          {
#line 1310 "string.format.m"
            {
#line 1310 "string.format.m"
              mercury__string__format__FieldModStr_23 = mercury__string__pad_left_3_f_0(mercury__string__format__PrecModStr_19, (MR_Char) 48, mercury__string__format__Width_20);
            }
#line 1310 "string.format.m"
          }
#line 1309 "string.format.m"
      }
#line 1313 "string.format.m"
    else
#line 1332 "string.format.m"
      {
#line 1332 "string.format.m"
        MR_String mercury__string__format__Prefix_46;
#line 1317 "string.format.m"
        MR_Word mercury__string__format__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1317 "string.format.m"
        MR_Word mercury__string__format__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1317 "string.format.m"
        MR_Word mercury__string__format__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1317 "string.format.m"
        MR_Word mercury__string__format__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1317 "string.format.m"
        MR_Word mercury__string__format__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1317 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__V_44_44 == (MR_Integer) 1);
#line 1317 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1321 "string.format.m"
          {
#line 1321 "string.format.m"
            if ((mercury__string__format__Base_10 == (MR_Integer) 2))
#line 1322 "string.format.m"
              {
#line 1323 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__Int_11 == (MR_Integer) 0);
#line 1323 "string.format.m"
                mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 1322 "string.format.m"
                if (mercury__string__format__succeeded)
#line 1322 "string.format.m"
                  {
#line 1324 "string.format.m"
                    mercury__string__format__Prefix_46 = (MR_String) "0x";
#line 1324 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 1322 "string.format.m"
                  }
#line 1322 "string.format.m"
              }
#line 1321 "string.format.m"
            else
#line 1321 "string.format.m"
              if ((mercury__string__format__Base_10 == (MR_Integer) 4))
#line 1320 "string.format.m"
                {
#line 1320 "string.format.m"
                  mercury__string__format__Prefix_46 = (MR_String) "0x";
#line 1320 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 1320 "string.format.m"
                }
#line 1321 "string.format.m"
              else
#line 1321 "string.format.m"
                if ((mercury__string__format__Base_10 == (MR_Integer) 3))
#line 1326 "string.format.m"
                  {
#line 1327 "string.format.m"
                    mercury__string__format__succeeded = (mercury__string__format__Int_11 == (MR_Integer) 0);
#line 1327 "string.format.m"
                    mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 1326 "string.format.m"
                    if (mercury__string__format__succeeded)
#line 1326 "string.format.m"
                      {
#line 1328 "string.format.m"
                        mercury__string__format__Prefix_46 = (MR_String) "0X";
#line 1328 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 1326 "string.format.m"
                      }
#line 1326 "string.format.m"
                  }
#line 1321 "string.format.m"
                else
#line 1321 "string.format.m"
                  mercury__string__format__succeeded = MR_FALSE;
#line 1321 "string.format.m"
          }
#line 1332 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1331 "string.format.m"
          {
#line 1331 "string.format.m"
            mercury__string__format__FieldModStr_23 = mercury__string__f_43_43_2_f_0(mercury__string__format__Prefix_46, mercury__string__format__PrecModStr_19);
          }
#line 1332 "string.format.m"
        else
#line 1333 "string.format.m"
          mercury__string__format__FieldModStr_23 = mercury__string__format__PrecModStr_19;
#line 1332 "string.format.m"
      }
#line 1337 "string.format.m"
    {
#line 1337 "string.format.m"
      return mercury__string__format__String_12 = mercury__string__format__justify_string_3_f_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_8, mercury__string__format__FieldModStr_23);
    }
#line 1204 "string.format.m"
    return mercury__string__format__String_12;
#line 1204 "string.format.m"
  }
#line 1201 "string.format.m"
}

#line 1134 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__format_signed_int_4_f_0(
#line 1134 "string.format.m"
  MR_Word mercury__string__format__Flags_6,
#line 1134 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_7,
#line 1134 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_8,
#line 1134 "string.format.m"
  MR_Integer mercury__string__format__Int_9)
#line 1134 "string.format.m"
{
#line 1136 "string.format.m"
  {
#line 1136 "string.format.m"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__Int_9 == (MR_Integer) 0);
#line 1136 "string.format.m"
    MR_String mercury__string__format__String_10;
#line 1136 "string.format.m"
    MR_String mercury__string__format__AbsIntStr_11;
#line 1136 "string.format.m"
    MR_Integer mercury__string__format__AbsIntStrLength_14;
#line 1136 "string.format.m"
    MR_String mercury__string__format__PrecStr_16;
#line 1136 "string.format.m"
    MR_String mercury__string__format__FieldStr_18;
#line 1136 "string.format.m"
    MR_Word mercury__string__format__ZeroPadded_19;
#line 1136 "string.format.m"
    MR_String mercury__string__format__SignedStr_20;
#line 1173 "string.format.m"
    MR_Integer mercury__string__format__Prec_15;
#line 1187 "string.format.m"
    MR_Integer mercury__string__format__Width_17;
#line 1179 "string.format.m"
    MR_Integer mercury__string__format__V_26_26;
#line 1179 "string.format.m"
    MR_Word mercury__string__format__V_27_27;
#line 1179 "string.format.m"
    MR_Word mercury__string__format__V_34_34;
#line 1181 "string.format.m"
    MR_Word mercury__string__format__V_32_32;
#line 1181 "string.format.m"
    MR_Word mercury__string__format__V_33_33;
#line 1181 "string.format.m"
    MR_Word mercury__string__format__V_35_35;

#line 1146 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1143 "string.format.m"
      {
#line 1141 "string.format.m"
        MR_Integer mercury__string__format__V_21_21;

#line 1141 "string.format.m"
        mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_8)) == (MR_mktag((MR_Integer) 1)));
#line 1141 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1141 "string.format.m"
          {
#line 1141 "string.format.m"
            mercury__string__format__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_8, (MR_Integer) 0)));
#line 1141 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__V_21_21 == (MR_Integer) 0);
#line 1141 "string.format.m"
          }
#line 1143 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1142 "string.format.m"
          mercury__string__format__AbsIntStr_11 = (MR_String) "";
#line 1143 "string.format.m"
        else
#line 1144 "string.format.m"
          mercury__string__format__AbsIntStr_11 = (MR_String) "0";
#line 1143 "string.format.m"
      }
#line 1146 "string.format.m"
    else
#line 1160 "string.format.m"
      {
#line 1157 "string.format.m"
        MR_Integer mercury__string__format__V_23_23;

#line 1157 "string.format.m"
        mercury__string__format__succeeded = ((MR_Integer) -2147483647 <= mercury__string__format__Int_9);
#line 1157 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1157 "string.format.m"
          {
#line 1157 "string.format.m"
            mercury__string__format__V_23_23 = (MR_Integer) 2147483647;
#line 1157 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__Int_9 <= mercury__string__format__V_23_23);
#line 1157 "string.format.m"
          }
#line 1160 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1158 "string.format.m"
          {
#line 1158 "string.format.m"
            MR_Integer mercury__string__format__AbsInt_12;

#line 70 "int.opt"
            {
#line 70 "int.opt"
              mercury__int__abs_2_p_0(mercury__string__format__Int_9, &mercury__string__format__AbsInt_12);
            }
#line 1159 "string.format.m"
            {
#line 1159 "string.format.m"
              mercury__string__format__AbsIntStr_11 = mercury__string__format__abs_int_to_decimal_1_f_0(mercury__string__format__AbsInt_12);
            }
#line 1158 "string.format.m"
          }
#line 1160 "string.format.m"
        else
#line 1161 "string.format.m"
          {
#line 1161 "string.format.m"
            MR_Word mercury__string__format__AbsInteger_13;
#line 1161 "string.format.m"
            MR_Word mercury__string__format__V_24_24;
#line 1591 "string.format.m"
            MR_Word mercury__string__format__V_51_51;
#line 1591 "string.format.m"
            MR_Word mercury__string__format__C_5_62;

#line 58 "integer.opt"
            {
#line 58 "integer.opt"
              mercury__string__format__V_24_24 = mercury__integer__int_to_integer_1_f_0(mercury__string__format__Int_9);
            }
#line 96 "integer.opt"
            {
#line 96 "integer.opt"
              mercury__string__format__AbsInteger_13 = mercury__integer__big_abs_1_f_0(mercury__string__format__V_24_24);
            }
#line 58 "integer.opt"
            {
#line 58 "integer.opt"
              mercury__string__format__V_51_51 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 0);
            }
#line 129 "integer.opt"
            {
#line 129 "integer.opt"
              mercury__integer____Compare____integer_0_0(&mercury__string__format__C_5_62, mercury__string__format__AbsInteger_13, mercury__string__format__V_51_51);
            }
#line 42 "integer.opt"
            mercury__string__format__succeeded = (mercury__string__format__C_5_62 == (MR_Integer) 2);
#line 1596 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1592 "string.format.m"
              {
#line 1592 "string.format.m"
                MR_Word mercury__string__format__Integer10_48;
#line 1592 "string.format.m"
                MR_String mercury__string__format__FrontDigitsStr_49;
#line 1592 "string.format.m"
                MR_String mercury__string__format__LastDigitStr_50;
#line 1592 "string.format.m"
                MR_Integer mercury__string__format__V_54_54;
#line 1592 "string.format.m"
                MR_Word mercury__string__format__V_55_55;
#line 1592 "string.format.m"
                MR_Integer mercury__string__format__V_56_56;
#line 1592 "string.format.m"
                MR_Word mercury__string__format__V_57_57;
#line 125 "integer.opt"
                MR_Word mercury__string__format___Rem_7_75;
#line 127 "integer.opt"
                MR_Word mercury__string__format___Quot_7_82;
#line 1677 "string.format.m"
                MR_String mercury__string__format__DecimalPrime_85;

#line 58 "integer.opt"
                {
#line 58 "integer.opt"
                  mercury__string__format__Integer10_48 = mercury__integer__int_to_integer_1_f_0((MR_Integer) 10);
                }
#line 125 "integer.opt"
                {
#line 125 "integer.opt"
                  mercury__integer__big_quot_rem_4_p_0(mercury__string__format__AbsInteger_13, mercury__string__format__Integer10_48, &mercury__string__format__V_55_55, &mercury__string__format___Rem_7_75);
                }
#line 1593 "string.format.m"
                {
#line 1593 "string.format.m"
                  mercury__string__format__V_54_54 = mercury__integer__int_1_f_0(mercury__string__format__V_55_55);
                }
#line 1593 "string.format.m"
                {
#line 1593 "string.format.m"
                  mercury__string__format__FrontDigitsStr_49 = mercury__string__format__abs_int_to_decimal_1_f_0(mercury__string__format__V_54_54);
                }
#line 127 "integer.opt"
                {
#line 127 "integer.opt"
                  mercury__integer__big_quot_rem_4_p_0(mercury__string__format__AbsInteger_13, mercury__string__format__Integer10_48, &mercury__string__format___Quot_7_82, &mercury__string__format__V_57_57);
                }
#line 1594 "string.format.m"
                {
#line 1594 "string.format.m"
                  mercury__string__format__V_56_56 = mercury__integer__int_1_f_0(mercury__string__format__V_57_57);
                }
#line 1717 "string.format.m"
                if ((mercury__string__format__V_56_56 == (MR_Integer) 0))
#line 1717 "string.format.m"
                  {
#line 1717 "string.format.m"
                    mercury__string__format__DecimalPrime_85 = (MR_String) "0";
#line 1717 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 1717 "string.format.m"
                  }
#line 1717 "string.format.m"
                else
#line 1717 "string.format.m"
                  if ((mercury__string__format__V_56_56 == (MR_Integer) 1))
#line 1718 "string.format.m"
                    {
#line 1718 "string.format.m"
                      mercury__string__format__DecimalPrime_85 = (MR_String) "1";
#line 1718 "string.format.m"
                      mercury__string__format__succeeded = MR_TRUE;
#line 1718 "string.format.m"
                    }
#line 1717 "string.format.m"
                  else
#line 1717 "string.format.m"
                    if ((mercury__string__format__V_56_56 == (MR_Integer) 2))
#line 1719 "string.format.m"
                      {
#line 1719 "string.format.m"
                        mercury__string__format__DecimalPrime_85 = (MR_String) "2";
#line 1719 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 1719 "string.format.m"
                      }
#line 1717 "string.format.m"
                    else
#line 1717 "string.format.m"
                      if ((mercury__string__format__V_56_56 == (MR_Integer) 3))
#line 1720 "string.format.m"
                        {
#line 1720 "string.format.m"
                          mercury__string__format__DecimalPrime_85 = (MR_String) "3";
#line 1720 "string.format.m"
                          mercury__string__format__succeeded = MR_TRUE;
#line 1720 "string.format.m"
                        }
#line 1717 "string.format.m"
                      else
#line 1717 "string.format.m"
                        if ((mercury__string__format__V_56_56 == (MR_Integer) 4))
#line 1721 "string.format.m"
                          {
#line 1721 "string.format.m"
                            mercury__string__format__DecimalPrime_85 = (MR_String) "4";
#line 1721 "string.format.m"
                            mercury__string__format__succeeded = MR_TRUE;
#line 1721 "string.format.m"
                          }
#line 1717 "string.format.m"
                        else
#line 1717 "string.format.m"
                          if ((mercury__string__format__V_56_56 == (MR_Integer) 5))
#line 1722 "string.format.m"
                            {
#line 1722 "string.format.m"
                              mercury__string__format__DecimalPrime_85 = (MR_String) "5";
#line 1722 "string.format.m"
                              mercury__string__format__succeeded = MR_TRUE;
#line 1722 "string.format.m"
                            }
#line 1717 "string.format.m"
                          else
#line 1717 "string.format.m"
                            if ((mercury__string__format__V_56_56 == (MR_Integer) 6))
#line 1723 "string.format.m"
                              {
#line 1723 "string.format.m"
                                mercury__string__format__DecimalPrime_85 = (MR_String) "6";
#line 1723 "string.format.m"
                                mercury__string__format__succeeded = MR_TRUE;
#line 1723 "string.format.m"
                              }
#line 1717 "string.format.m"
                            else
#line 1717 "string.format.m"
                              if ((mercury__string__format__V_56_56 == (MR_Integer) 7))
#line 1724 "string.format.m"
                                {
#line 1724 "string.format.m"
                                  mercury__string__format__DecimalPrime_85 = (MR_String) "7";
#line 1724 "string.format.m"
                                  mercury__string__format__succeeded = MR_TRUE;
#line 1724 "string.format.m"
                                }
#line 1717 "string.format.m"
                              else
#line 1717 "string.format.m"
                                if ((mercury__string__format__V_56_56 == (MR_Integer) 8))
#line 1725 "string.format.m"
                                  {
#line 1725 "string.format.m"
                                    mercury__string__format__DecimalPrime_85 = (MR_String) "8";
#line 1725 "string.format.m"
                                    mercury__string__format__succeeded = MR_TRUE;
#line 1725 "string.format.m"
                                  }
#line 1717 "string.format.m"
                                else
#line 1717 "string.format.m"
                                  if ((mercury__string__format__V_56_56 == (MR_Integer) 9))
#line 1726 "string.format.m"
                                    {
#line 1726 "string.format.m"
                                      mercury__string__format__DecimalPrime_85 = (MR_String) "9";
#line 1726 "string.format.m"
                                      mercury__string__format__succeeded = MR_TRUE;
#line 1726 "string.format.m"
                                    }
#line 1717 "string.format.m"
                                  else
#line 1717 "string.format.m"
                                    mercury__string__format__succeeded = MR_FALSE;
#line 1677 "string.format.m"
                if (mercury__string__format__succeeded)
#line 1676 "string.format.m"
                  mercury__string__format__LastDigitStr_50 = mercury__string__format__DecimalPrime_85;
#line 1677 "string.format.m"
                else
#line 1678 "string.format.m"
                  {
#line 1678 "string.format.m"
                    {
#line 1678 "string.format.m"
                      mercury__require__unexpected_3_p_0((MR_String) "string.format", (MR_String) "function \140string.format.get_decimal_digit\'/1", (MR_String) "decimal_digit failed");
                    }
#line 1678 "string.format.m"
                  }
#line 406 "string.opt"
                {
#line 406 "string.opt"
                  mercury__string__append_3_p_2(mercury__string__format__FrontDigitsStr_49, mercury__string__format__LastDigitStr_50, &mercury__string__format__AbsIntStr_11);
                }
#line 1592 "string.format.m"
              }
#line 1596 "string.format.m"
            else
#line 1597 "string.format.m"
              mercury__string__format__AbsIntStr_11 = (MR_String) "";
#line 1161 "string.format.m"
          }
#line 1160 "string.format.m"
      }
#line 250 "string.opt"
    {
#line 250 "string.opt"
      mercury__string__count_codepoints_2_p_0(mercury__string__format__AbsIntStr_11, &mercury__string__format__AbsIntStrLength_14);
    }
#line 1169 "string.format.m"
    mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybePrec_8)) == (MR_mktag((MR_Integer) 1)));
#line 1169 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1169 "string.format.m"
      {
#line 1169 "string.format.m"
        mercury__string__format__Prec_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_8, (MR_Integer) 0)));
#line 1170 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__Prec_15 > mercury__string__format__AbsIntStrLength_14);
#line 1169 "string.format.m"
      }
#line 1173 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1172 "string.format.m"
      {
#line 1172 "string.format.m"
        {
#line 1172 "string.format.m"
          mercury__string__format__PrecStr_16 = mercury__string__pad_left_3_f_0(mercury__string__format__AbsIntStr_11, (MR_Char) 48, mercury__string__format__Prec_15);
        }
#line 1172 "string.format.m"
      }
#line 1173 "string.format.m"
    else
#line 1174 "string.format.m"
      mercury__string__format__PrecStr_16 = mercury__string__format__AbsIntStr_11;
#line 1179 "string.format.m"
    mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybeWidth_7)) == (MR_mktag((MR_Integer) 1)));
#line 1179 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1179 "string.format.m"
      {
#line 1179 "string.format.m"
        mercury__string__format__Width_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_7, (MR_Integer) 0)));
#line 250 "string.opt"
        {
#line 250 "string.opt"
          mercury__string__count_codepoints_2_p_0(mercury__string__format__PrecStr_16, &mercury__string__format__V_26_26);
        }
#line 1180 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__Width_17 > mercury__string__format__V_26_26);
#line 1179 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1179 "string.format.m"
          {
#line 1181 "string.format.m"
            mercury__string__format__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1181 "string.format.m"
            mercury__string__format__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1181 "string.format.m"
            mercury__string__format__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1181 "string.format.m"
            mercury__string__format__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1181 "string.format.m"
            mercury__string__format__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1181 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__V_27_27 == (MR_Integer) 1);
#line 1179 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1179 "string.format.m"
              {
#line 1182 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__V_34_34 == (MR_Integer) 0);
#line 1179 "string.format.m"
                if (mercury__string__format__succeeded)
#line 1183 "string.format.m"
                  mercury__string__format__succeeded = (mercury__string__format__MaybePrec_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1179 "string.format.m"
              }
#line 1179 "string.format.m"
          }
#line 1179 "string.format.m"
      }
#line 1187 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1185 "string.format.m"
      {
#line 1185 "string.format.m"
        MR_Integer mercury__string__format__V_30_30 = (mercury__string__format__Width_17 - (MR_Integer) 1);

#line 1185 "string.format.m"
        {
#line 1185 "string.format.m"
          mercury__string__format__FieldStr_18 = mercury__string__pad_left_3_f_0(mercury__string__format__PrecStr_16, (MR_Char) 48, mercury__string__format__V_30_30);
        }
#line 1186 "string.format.m"
        mercury__string__format__ZeroPadded_19 = (MR_Integer) 1;
#line 1185 "string.format.m"
      }
#line 1187 "string.format.m"
    else
#line 1188 "string.format.m"
      {
#line 1188 "string.format.m"
        mercury__string__format__FieldStr_18 = mercury__string__format__PrecStr_16;
#line 1189 "string.format.m"
        mercury__string__format__ZeroPadded_19 = (MR_Integer) 0;
#line 1188 "string.format.m"
      }
#line 1486 "string.format.m"
    mercury__string__format__succeeded = (mercury__string__format__Int_9 < (MR_Integer) 0);
#line 1488 "string.format.m"
    if (mercury__string__format__succeeded)
#line 1487 "string.format.m"
      {
#line 406 "string.opt"
        {
#line 406 "string.opt"
          mercury__string__append_3_p_2((MR_String) "-", mercury__string__format__FieldStr_18, &mercury__string__format__SignedStr_20);
        }
#line 1487 "string.format.m"
      }
#line 1488 "string.format.m"
    else
#line 1490 "string.format.m"
      {
#line 1488 "string.format.m"
        MR_Word mercury__string__format__V_103_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1488 "string.format.m"
        MR_Word mercury__string__format__V_108_108 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1488 "string.format.m"
        MR_Word mercury__string__format__V_109_109 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1488 "string.format.m"
        MR_Word mercury__string__format__V_110_110 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1488 "string.format.m"
        MR_Word mercury__string__format__V_111_111 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 1488 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__V_103_103 == (MR_Integer) 1);
#line 1490 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1489 "string.format.m"
          {
#line 406 "string.opt"
            {
#line 406 "string.opt"
              mercury__string__append_3_p_2((MR_String) "+", mercury__string__format__FieldStr_18, &mercury__string__format__SignedStr_20);
            }
#line 1489 "string.format.m"
          }
#line 1490 "string.format.m"
        else
#line 1492 "string.format.m"
          {
#line 1490 "string.format.m"
            MR_Word mercury__string__format__V_105_105 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1490 "string.format.m"
            MR_Word mercury__string__format__V_112_112 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1490 "string.format.m"
            MR_Word mercury__string__format__V_113_113 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1490 "string.format.m"
            MR_Word mercury__string__format__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1490 "string.format.m"
            MR_Word mercury__string__format__V_115_115 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1490 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__V_105_105 == (MR_Integer) 1);
#line 1492 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1491 "string.format.m"
              {
#line 406 "string.opt"
                {
#line 406 "string.opt"
                  mercury__string__append_3_p_2((MR_String) " ", mercury__string__format__FieldStr_18, &mercury__string__format__SignedStr_20);
                }
#line 1491 "string.format.m"
              }
#line 1492 "string.format.m"
            else
#line 1496 "string.format.m"
              if ((mercury__string__format__ZeroPadded_19 == (MR_Integer) 0))
#line 1498 "string.format.m"
                mercury__string__format__SignedStr_20 = mercury__string__format__FieldStr_18;
#line 1496 "string.format.m"
              else
#line 1494 "string.format.m"
                {
#line 406 "string.opt"
                  {
#line 406 "string.opt"
                    mercury__string__append_3_p_2((MR_String) "0", mercury__string__format__FieldStr_18, &mercury__string__format__SignedStr_20);
                  }
#line 1494 "string.format.m"
                }
#line 1492 "string.format.m"
          }
#line 1490 "string.format.m"
      }
#line 1196 "string.format.m"
    {
#line 1196 "string.format.m"
      return mercury__string__format__String_10 = mercury__string__format__justify_string_3_f_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_7, mercury__string__format__SignedStr_20);
    }
#line 1136 "string.format.m"
    return mercury__string__format__String_10;
#line 1136 "string.format.m"
  }
#line 1134 "string.format.m"
}

#line 1094 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__native_format_char_2_f_0(
#line 1094 "string.format.m"
  MR_String mercury__string__format__FormatStr_1,
#line 1094 "string.format.m"
  MR_Char mercury__string__format__Val_2)
#line 1094 "string.format.m"
{
#line 1096 "string.format.m"
  {
#line 1096 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1096 "string.format.m"
    MR_String mercury__string__format__Str_3;

#line 1100 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__native_format_char_2_f_0

	MR_String FormatStr;
	MR_Char Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_1 ;
	Val =  mercury__string__format__Val_2 ;
		{
#line 1100 "string.format.m"
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}
#line 14941 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Str_3  = Str;
#line 1100 "string.format.m"
}
#line 1096 "string.format.m"
    return mercury__string__format__Str_3;
#line 1096 "string.format.m"
  }
#line 1094 "string.format.m"
}

#line 1074 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__native_format_string_2_f_0(
#line 1074 "string.format.m"
  MR_String mercury__string__format__FormatStr_1,
#line 1074 "string.format.m"
  MR_String mercury__string__format__Val_2)
#line 1074 "string.format.m"
{
#line 1076 "string.format.m"
  {
#line 1076 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1076 "string.format.m"
    MR_String mercury__string__format__Str_3;

#line 1080 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__native_format_string_2_f_0

	MR_String FormatStr;
	MR_String Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_1 ;
	Val =  mercury__string__format__Val_2 ;
		{
#line 1080 "string.format.m"
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}
#line 14988 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Str_3  = Str;
#line 1080 "string.format.m"
}
#line 1076 "string.format.m"
    return mercury__string__format__Str_3;
#line 1076 "string.format.m"
  }
#line 1074 "string.format.m"
}

#line 1054 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__native_format_int_2_f_0(
#line 1054 "string.format.m"
  MR_String mercury__string__format__FormatStr_1,
#line 1054 "string.format.m"
  MR_Integer mercury__string__format__Val_2)
#line 1054 "string.format.m"
{
#line 1056 "string.format.m"
  {
#line 1056 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1056 "string.format.m"
    MR_String mercury__string__format__Str_3;

#line 1060 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__native_format_int_2_f_0

	MR_String FormatStr;
	MR_Integer Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_1 ;
	Val =  mercury__string__format__Val_2 ;
		{
#line 1060 "string.format.m"
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}
#line 15035 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Str_3  = Str;
#line 1060 "string.format.m"
}
#line 1056 "string.format.m"
    return mercury__string__format__Str_3;
#line 1056 "string.format.m"
  }
#line 1054 "string.format.m"
}

#line 1034 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__native_format_float_2_f_0(
#line 1034 "string.format.m"
  MR_String mercury__string__format__FormatStr_1,
#line 1034 "string.format.m"
  MR_Float mercury__string__format__Val_2)
#line 1034 "string.format.m"
{
#line 1036 "string.format.m"
  {
#line 1036 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1036 "string.format.m"
    MR_String mercury__string__format__Str_3;

#line 1040 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__native_format_float_2_f_0

	MR_String FormatStr;
	MR_Float Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_1 ;
	Val =  mercury__string__format__Val_2 ;
		{
#line 1040 "string.format.m"
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, (double) Val);
    MR_restore_transient_hp();
}
#line 15082 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__Str_3  = Str;
#line 1040 "string.format.m"
}
#line 1036 "string.format.m"
    return mercury__string__format__Str_3;
#line 1036 "string.format.m"
  }
#line 1034 "string.format.m"
}

#line 1015 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__int_length_modifer_0_f_0(void)
#line 1015 "string.format.m"
{
#line 1017 "string.format.m"
  {
#line 1017 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 1017 "string.format.m"
    MR_String mercury__string__format__LengthModifier_1;

#line 1021 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__int_length_modifer_0_f_0

	MR_String LengthModifier;

		{
#line 1021 "string.format.m"
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}
#line 15119 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__LengthModifier_1  = LengthModifier;
#line 1021 "string.format.m"
}
#line 1017 "string.format.m"
    return mercury__string__format__LengthModifier_1;
#line 1017 "string.format.m"
  }
#line 1015 "string.format.m"
}

#line 904 "string.format.m"
static MR_bool MR_CALL 
mercury__string__format__using_sprintf_for_string_1_p_0(
#line 904 "string.format.m"
  MR_String mercury__string__format__Str_1)
#line 904 "string.format.m"
{
#line 909 "string.format.m"
  {
#line 909 "string.format.m"
    MR_bool mercury__string__format__succeeded;

#line 913 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__using_sprintf_for_string_1_p_0

	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__Str_1 ;
		{
#line 913 "string.format.m"

    const char *s;

    SUCCESS_INDICATOR = ML_USE_SPRINTF;
    for (s = Str; *s != '\0'; s++) {
        /*
         * sprintf %s specifier is inadequate for multi-byte UTF-8 characters,
         * if there is a field width or precision specified.
         */
        if (!MR_utf8_is_single_byte(*s)) {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
    }

#line 15170 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 913 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 909 "string.format.m"
    return mercury__string__format__succeeded;
#line 909 "string.format.m"
  }
#line 904 "string.format.m"
}

#line 890 "string.format.m"
static MR_bool MR_CALL 
mercury__string__format__using_sprintf_for_char_1_p_0(
#line 890 "string.format.m"
  MR_Char mercury__string__format__Char_1)
#line 890 "string.format.m"
{
#line 895 "string.format.m"
  {
#line 895 "string.format.m"
    MR_bool mercury__string__format__succeeded;

#line 899 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__using_sprintf_for_char_1_p_0

	MR_Char Char;
	MR_bool SUCCESS_INDICATOR;

	Char =  mercury__string__format__Char_1 ;
		{
#line 899 "string.format.m"

    /* sprintf %c specifier is inadequate for multi-byte UTF-8 characters. */
    SUCCESS_INDICATOR = ML_USE_SPRINTF && MR_is_ascii(Char);

#line 15212 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 899 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 895 "string.format.m"
    return mercury__string__format__succeeded;
#line 895 "string.format.m"
  }
#line 890 "string.format.m"
}

#line 866 "string.format.m"
static MR_bool MR_CALL 
mercury__string__format__using_sprintf_0_p_0(void)
#line 866 "string.format.m"
{
#line 868 "string.format.m"
  {
#line 868 "string.format.m"
    MR_bool mercury__string__format__succeeded;

#line 871 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__using_sprintf_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 871 "string.format.m"

    SUCCESS_INDICATOR = ML_USE_SPRINTF;

#line 15249 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 871 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 868 "string.format.m"
    return mercury__string__format__succeeded;
#line 868 "string.format.m"
  }
#line 866 "string.format.m"
}

#line 847 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__make_format_5_f_0(
#line 847 "string.format.m"
  MR_Word mercury__string__format__Flags_7,
#line 847 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_8,
#line 847 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_9,
#line 847 "string.format.m"
  MR_String mercury__string__format__LengthMod_10,
#line 847 "string.format.m"
  MR_String mercury__string__format__Spec_11)
#line 847 "string.format.m"
{
#line 849 "string.format.m"
  {
#line 849 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 849 "string.format.m"
    MR_String mercury__string__format__HeadVar__6_6;

#line 871 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__make_format_5_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 871 "string.format.m"

    SUCCESS_INDICATOR = ML_USE_SPRINTF;

#line 15298 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 871 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 849 "string.format.m"
    if (mercury__string__format__succeeded)
#line 934 "string.format.m"
      {
#line 934 "string.format.m"
        MR_Word mercury__string__format__FlagHash_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 934 "string.format.m"
        MR_Word mercury__string__format__FlagSpace_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 934 "string.format.m"
        MR_Word mercury__string__format__FlagZero_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 934 "string.format.m"
        MR_Word mercury__string__format__FlagMinus_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 934 "string.format.m"
        MR_Word mercury__string__format__FlagPlus_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_7, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 934 "string.format.m"
        MR_String mercury__string__format__FlagHashStr_23;
#line 934 "string.format.m"
        MR_String mercury__string__format__FlagSpaceStr_24;
#line 934 "string.format.m"
        MR_String mercury__string__format__FlagZeroStr_25;
#line 934 "string.format.m"
        MR_String mercury__string__format__FlagMinusStr_26;
#line 934 "string.format.m"
        MR_String mercury__string__format__FlagPlusStr_27;
#line 934 "string.format.m"
        MR_String mercury__string__format__WidthStr_29;
#line 934 "string.format.m"
        MR_String mercury__string__format__PrecPrefixStr_31;
#line 934 "string.format.m"
        MR_String mercury__string__format__PrecStr_32;
#line 934 "string.format.m"
        MR_Word mercury__string__format__V_33_33;
#line 934 "string.format.m"
        MR_Word mercury__string__format__V_35_35;
#line 934 "string.format.m"
        MR_Word mercury__string__format__V_36_36;
#line 934 "string.format.m"
        MR_Word mercury__string__format__V_37_37;
#line 934 "string.format.m"
        MR_Word mercury__string__format__V_38_38;
#line 934 "string.format.m"
        MR_Word mercury__string__format__V_39_39;
#line 934 "string.format.m"
        MR_Word mercury__string__format__V_40_40;
#line 934 "string.format.m"
        MR_Word mercury__string__format__V_41_41;
#line 934 "string.format.m"
        MR_Word mercury__string__format__V_42_42;
#line 934 "string.format.m"
        MR_Word mercury__string__format__V_43_43;
#line 934 "string.format.m"
        MR_Word mercury__string__format__V_44_44;
#line 934 "string.format.m"
        MR_Word mercury__string__format__V_45_45;

#line 937 "string.format.m"
        if ((mercury__string__format__FlagHash_18 == (MR_Integer) 0))
#line 936 "string.format.m"
          mercury__string__format__FlagHashStr_23 = (MR_String) "";
#line 937 "string.format.m"
        else
#line 937 "string.format.m"
          mercury__string__format__FlagHashStr_23 = (MR_String) "#";
#line 940 "string.format.m"
        if ((mercury__string__format__FlagSpace_19 == (MR_Integer) 0))
#line 939 "string.format.m"
          mercury__string__format__FlagSpaceStr_24 = (MR_String) "";
#line 940 "string.format.m"
        else
#line 940 "string.format.m"
          mercury__string__format__FlagSpaceStr_24 = (MR_String) " ";
#line 943 "string.format.m"
        if ((mercury__string__format__FlagZero_20 == (MR_Integer) 0))
#line 942 "string.format.m"
          mercury__string__format__FlagZeroStr_25 = (MR_String) "";
#line 943 "string.format.m"
        else
#line 943 "string.format.m"
          mercury__string__format__FlagZeroStr_25 = (MR_String) "0";
#line 946 "string.format.m"
        if ((mercury__string__format__FlagMinus_21 == (MR_Integer) 0))
#line 945 "string.format.m"
          mercury__string__format__FlagMinusStr_26 = (MR_String) "";
#line 946 "string.format.m"
        else
#line 946 "string.format.m"
          mercury__string__format__FlagMinusStr_26 = (MR_String) "-";
#line 949 "string.format.m"
        if ((mercury__string__format__FlagPlus_22 == (MR_Integer) 0))
#line 948 "string.format.m"
          mercury__string__format__FlagPlusStr_27 = (MR_String) "";
#line 949 "string.format.m"
        else
#line 949 "string.format.m"
          mercury__string__format__FlagPlusStr_27 = (MR_String) "+";
#line 954 "string.format.m"
        if ((mercury__string__format__MaybeWidth_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 956 "string.format.m"
          mercury__string__format__WidthStr_29 = (MR_String) "";
#line 954 "string.format.m"
        else
#line 952 "string.format.m"
          {
#line 952 "string.format.m"
            MR_Integer mercury__string__format__Width_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_8, (MR_Integer) 0)));

#line 705 "string.opt"
            {
#line 705 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__string__format__Width_28, (MR_Integer) 10, &mercury__string__format__WidthStr_29);
            }
#line 952 "string.format.m"
          }
#line 962 "string.format.m"
        if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 963 "string.format.m"
          {
#line 964 "string.format.m"
            mercury__string__format__PrecPrefixStr_31 = (MR_String) "";
#line 965 "string.format.m"
            mercury__string__format__PrecStr_32 = (MR_String) "";
#line 963 "string.format.m"
          }
#line 962 "string.format.m"
        else
#line 959 "string.format.m"
          {
#line 959 "string.format.m"
            MR_Integer mercury__string__format__Prec_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));

#line 960 "string.format.m"
            mercury__string__format__PrecPrefixStr_31 = (MR_String) ".";
#line 705 "string.opt"
            {
#line 705 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__string__format__Prec_30, (MR_Integer) 10, &mercury__string__format__PrecStr_32);
            }
#line 959 "string.format.m"
          }
#line 969 "string.format.m"
        mercury__string__format__V_45_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 969 "string.format.m"
        {
#line 969 "string.format.m"
          mercury__string__format__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_44_44, 0) = ((MR_Box) (mercury__string__format__Spec_11));
#line 969 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_44_44, 1) = ((MR_Box) (mercury__string__format__V_45_45));
#line 969 "string.format.m"
        }
#line 969 "string.format.m"
        {
#line 969 "string.format.m"
          mercury__string__format__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_43_43, 0) = ((MR_Box) (mercury__string__format__LengthMod_10));
#line 969 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_43_43, 1) = ((MR_Box) (mercury__string__format__V_44_44));
#line 969 "string.format.m"
        }
#line 969 "string.format.m"
        {
#line 969 "string.format.m"
          mercury__string__format__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_42_42, 0) = ((MR_Box) (mercury__string__format__PrecStr_32));
#line 969 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_42_42, 1) = ((MR_Box) (mercury__string__format__V_43_43));
#line 969 "string.format.m"
        }
#line 969 "string.format.m"
        {
#line 969 "string.format.m"
          mercury__string__format__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_41_41, 0) = ((MR_Box) (mercury__string__format__PrecPrefixStr_31));
#line 969 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_41_41, 1) = ((MR_Box) (mercury__string__format__V_42_42));
#line 969 "string.format.m"
        }
#line 969 "string.format.m"
        {
#line 969 "string.format.m"
          mercury__string__format__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_40_40, 0) = ((MR_Box) (mercury__string__format__WidthStr_29));
#line 969 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_40_40, 1) = ((MR_Box) (mercury__string__format__V_41_41));
#line 969 "string.format.m"
        }
#line 968 "string.format.m"
        {
#line 968 "string.format.m"
          mercury__string__format__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_39_39, 0) = ((MR_Box) (mercury__string__format__FlagPlusStr_27));
#line 968 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_39_39, 1) = ((MR_Box) (mercury__string__format__V_40_40));
#line 968 "string.format.m"
        }
#line 968 "string.format.m"
        {
#line 968 "string.format.m"
          mercury__string__format__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_38_38, 0) = ((MR_Box) (mercury__string__format__FlagMinusStr_26));
#line 968 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_38_38, 1) = ((MR_Box) (mercury__string__format__V_39_39));
#line 968 "string.format.m"
        }
#line 968 "string.format.m"
        {
#line 968 "string.format.m"
          mercury__string__format__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_37_37, 0) = ((MR_Box) (mercury__string__format__FlagZeroStr_25));
#line 968 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_37_37, 1) = ((MR_Box) (mercury__string__format__V_38_38));
#line 968 "string.format.m"
        }
#line 968 "string.format.m"
        {
#line 968 "string.format.m"
          mercury__string__format__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_36_36, 0) = ((MR_Box) (mercury__string__format__FlagSpaceStr_24));
#line 968 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_36_36, 1) = ((MR_Box) (mercury__string__format__V_37_37));
#line 968 "string.format.m"
        }
#line 968 "string.format.m"
        {
#line 968 "string.format.m"
          mercury__string__format__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_35_35, 0) = ((MR_Box) (mercury__string__format__FlagHashStr_23));
#line 968 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_35_35, 1) = ((MR_Box) (mercury__string__format__V_36_36));
#line 968 "string.format.m"
        }
#line 967 "string.format.m"
        {
#line 967 "string.format.m"
          mercury__string__format__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 967 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_33_33, 0) = ((MR_Box) ((MR_String) "%"));
#line 967 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_33_33, 1) = ((MR_Box) (mercury__string__format__V_35_35));
#line 967 "string.format.m"
        }
#line 967 "string.format.m"
        {
#line 967 "string.format.m"
          return mercury__string__format__HeadVar__6_6 = mercury__string__append_list_1_f_0(mercury__string__format__V_33_33);
        }
#line 934 "string.format.m"
      }
#line 849 "string.format.m"
    else
#line 980 "string.format.m"
      {
#line 980 "string.format.m"
        MR_String mercury__string__format__WidthPrefixStr_63;
#line 980 "string.format.m"
        MR_String mercury__string__format__WidthStr_64;
#line 980 "string.format.m"
        MR_String mercury__string__format__PrecStr_66;
#line 980 "string.format.m"
        MR_String mercury__string__format__Spec_67;
#line 980 "string.format.m"
        MR_Word mercury__string__format__V_68_68;
#line 980 "string.format.m"
        MR_Word mercury__string__format__V_70_70;
#line 980 "string.format.m"
        MR_Word mercury__string__format__V_71_71;
#line 980 "string.format.m"
        MR_Word mercury__string__format__V_72_72;
#line 980 "string.format.m"
        MR_Word mercury__string__format__V_74_74;
#line 980 "string.format.m"
        MR_Word mercury__string__format__V_75_75;
#line 980 "string.format.m"
        MR_Word mercury__string__format__V_76_76;
#line 980 "string.format.m"
        MR_Word mercury__string__format__V_78_78;

#line 985 "string.format.m"
        if ((mercury__string__format__MaybeWidth_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 986 "string.format.m"
          {
#line 987 "string.format.m"
            mercury__string__format__WidthPrefixStr_63 = (MR_String) "";
#line 988 "string.format.m"
            mercury__string__format__WidthStr_64 = (MR_String) "";
#line 986 "string.format.m"
          }
#line 985 "string.format.m"
        else
#line 982 "string.format.m"
          {
#line 982 "string.format.m"
            MR_Integer mercury__string__format__Width_62 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_8, (MR_Integer) 0)));

#line 983 "string.format.m"
            mercury__string__format__WidthPrefixStr_63 = (MR_String) ",";
#line 705 "string.opt"
            {
#line 705 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__string__format__Width_62, (MR_Integer) 10, &mercury__string__format__WidthStr_64);
            }
#line 982 "string.format.m"
          }
#line 993 "string.format.m"
        if ((mercury__string__format__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 995 "string.format.m"
          mercury__string__format__PrecStr_66 = (MR_String) "";
#line 993 "string.format.m"
        else
#line 991 "string.format.m"
          {
#line 991 "string.format.m"
            MR_Integer mercury__string__format__Prec_65 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_9, (MR_Integer) 0)));

#line 705 "string.opt"
            {
#line 705 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__string__format__Prec_65, (MR_Integer) 10, &mercury__string__format__PrecStr_66);
            }
#line 991 "string.format.m"
          }
#line 997 "string.format.m"
        mercury__string__format__succeeded = (strcmp(mercury__string__format__Spec_11, (MR_String) "i") == 0);
#line 999 "string.format.m"
        if (mercury__string__format__succeeded)
#line 998 "string.format.m"
          mercury__string__format__Spec_67 = (MR_String) "d";
#line 999 "string.format.m"
        else
#line 1001 "string.format.m"
          {
#line 999 "string.format.m"
            mercury__string__format__succeeded = (strcmp(mercury__string__format__Spec_11, (MR_String) "f") == 0);
#line 1001 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1000 "string.format.m"
              mercury__string__format__Spec_67 = (MR_String) "e";
#line 1001 "string.format.m"
            else
#line 1002 "string.format.m"
              mercury__string__format__Spec_67 = mercury__string__format__Spec_11;
#line 1001 "string.format.m"
          }
#line 1013 "string.format.m"
        mercury__string__format__V_78_78 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1013 "string.format.m"
        mercury__string__format__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string__format_scalar_common_1[2]);
#line 1010 "string.format.m"
        {
#line 1010 "string.format.m"
          mercury__string__format__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_75_75, 0) = ((MR_Box) (mercury__string__format__PrecStr_66));
#line 1010 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_75_75, 1) = ((MR_Box) (mercury__string__format__V_76_76));
#line 1010 "string.format.m"
        }
#line 1009 "string.format.m"
        {
#line 1009 "string.format.m"
          mercury__string__format__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_74_74, 0) = ((MR_Box) (mercury__string__format__Spec_67));
#line 1009 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_74_74, 1) = ((MR_Box) (mercury__string__format__V_75_75));
#line 1009 "string.format.m"
        }
#line 1008 "string.format.m"
        {
#line 1008 "string.format.m"
          mercury__string__format__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_72_72, 0) = ((MR_Box) ((MR_String) ":"));
#line 1008 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_72_72, 1) = ((MR_Box) (mercury__string__format__V_74_74));
#line 1008 "string.format.m"
        }
#line 1007 "string.format.m"
        {
#line 1007 "string.format.m"
          mercury__string__format__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_71_71, 0) = ((MR_Box) (mercury__string__format__WidthStr_64));
#line 1007 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_71_71, 1) = ((MR_Box) (mercury__string__format__V_72_72));
#line 1007 "string.format.m"
        }
#line 1006 "string.format.m"
        {
#line 1006 "string.format.m"
          mercury__string__format__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_70_70, 0) = ((MR_Box) (mercury__string__format__WidthPrefixStr_63));
#line 1006 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_70_70, 1) = ((MR_Box) (mercury__string__format__V_71_71));
#line 1006 "string.format.m"
        }
#line 1005 "string.format.m"
        {
#line 1005 "string.format.m"
          mercury__string__format__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_68_68, 0) = ((MR_Box) ((MR_String) "{0"));
#line 1005 "string.format.m"
          MR_hl_field(MR_mktag(1), mercury__string__format__V_68_68, 1) = ((MR_Box) (mercury__string__format__V_70_70));
#line 1005 "string.format.m"
        }
#line 1004 "string.format.m"
        {
#line 1004 "string.format.m"
          return mercury__string__format__HeadVar__6_6 = mercury__string__append_list_1_f_0(mercury__string__format__V_68_68);
        }
#line 980 "string.format.m"
      }
#line 849 "string.format.m"
    return mercury__string__format__HeadVar__6_6;
#line 849 "string.format.m"
  }
#line 847 "string.format.m"
}

#line 800 "string.format.m"
static void MR_CALL 
mercury__string__format__format_unsigned_int_component_6_p_0(
#line 800 "string.format.m"
  MR_Word mercury__string__format__Flags_7,
#line 800 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_8,
#line 800 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_9,
#line 800 "string.format.m"
  MR_Word mercury__string__format__Base_10,
#line 800 "string.format.m"
  MR_Integer mercury__string__format__Int_11,
#line 800 "string.format.m"
  MR_String * mercury__string__format__String_12)
#line 800 "string.format.m"
{
#line 816 "string.format.m"
  {
#line 816 "string.format.m"
    MR_bool mercury__string__format__succeeded;

#line 871 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_component_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 871 "string.format.m"

    SUCCESS_INDICATOR = ML_USE_SPRINTF;

#line 15771 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 871 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 816 "string.format.m"
    if (mercury__string__format__succeeded)
#line 812 "string.format.m"
      {
#line 812 "string.format.m"
        MR_String mercury__string__format__SpecChar_13;
#line 812 "string.format.m"
        MR_String mercury__string__format__FormatStr_14;
#line 812 "string.format.m"
        MR_String mercury__string__format__V_15_15;

#line 808 "string.format.m"
        if ((mercury__string__format__Base_10 == (MR_Integer) 1))
#line 808 "string.format.m"
          mercury__string__format__SpecChar_13 = (MR_String) "u";
#line 808 "string.format.m"
        else
#line 808 "string.format.m"
          if ((mercury__string__format__Base_10 == (MR_Integer) 2))
#line 809 "string.format.m"
            mercury__string__format__SpecChar_13 = (MR_String) "x";
#line 808 "string.format.m"
          else
#line 808 "string.format.m"
            if ((mercury__string__format__Base_10 == (MR_Integer) 4))
#line 811 "string.format.m"
              mercury__string__format__SpecChar_13 = (MR_String) "p";
#line 808 "string.format.m"
            else
#line 808 "string.format.m"
              if ((mercury__string__format__Base_10 == (MR_Integer) 3))
#line 810 "string.format.m"
                mercury__string__format__SpecChar_13 = (MR_String) "X";
#line 808 "string.format.m"
              else
#line 807 "string.format.m"
                mercury__string__format__SpecChar_13 = (MR_String) "o";
#line 1021 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_component_6_p_0

	MR_String LengthModifier;

		{
#line 1021 "string.format.m"
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}
#line 15828 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__V_15_15  = LengthModifier;
#line 1021 "string.format.m"
}
#line 813 "string.format.m"
        {
#line 813 "string.format.m"
          mercury__string__format__FormatStr_14 = mercury__string__format__make_format_5_f_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_8, mercury__string__format__MaybePrec_9, mercury__string__format__V_15_15, mercury__string__format__SpecChar_13);
        }
#line 1060 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_unsigned_int_component_6_p_0

	MR_String FormatStr;
	MR_Integer Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_14 ;
	Val =  mercury__string__format__Int_11 ;
		{
#line 1060 "string.format.m"
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}
#line 15857 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__format__String_12  = Str;
#line 1060 "string.format.m"
}
#line 812 "string.format.m"
      }
#line 816 "string.format.m"
    else
#line 817 "string.format.m"
      {
#line 817 "string.format.m"
        *mercury__string__format__String_12 = mercury__string__format__format_unsigned_int_5_f_0(mercury__string__format__Flags_7, mercury__string__format__MaybeWidth_8, mercury__string__format__MaybePrec_9, mercury__string__format__Base_10, mercury__string__format__Int_11);
      }
#line 816 "string.format.m"
  }
#line 800 "string.format.m"
}

#line 766 "string.format.m"
static void MR_CALL 
mercury__string__format__format_string_component_5_p_0(
#line 766 "string.format.m"
  MR_Word mercury__string__format__Flags_6,
#line 766 "string.format.m"
  MR_Word mercury__string__format__MaybeWidth_7,
#line 766 "string.format.m"
  MR_Word mercury__string__format__MaybePrec_8,
#line 766 "string.format.m"
  MR_String mercury__string__format__Str_9,
#line 766 "string.format.m"
  MR_String * mercury__string__format__String_10)
#line 766 "string.format.m"
{
#line 783 "string.format.m"
  {
#line 783 "string.format.m"
    MR_bool mercury__string__format__succeeded;

#line 772 "string.format.m"
    {
#line 773 "string.format.m"
      MR_Word mercury__string__format__V_12_12;
#line 773 "string.format.m"
      MR_Word mercury__string__format__V_13_13;
#line 773 "string.format.m"
      MR_Word mercury__string__format__V_14_14;
#line 773 "string.format.m"
      MR_Word mercury__string__format__V_15_15;
#line 773 "string.format.m"
      MR_Word mercury__string__format__V_16_16;

#line 871 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_string_component_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 871 "string.format.m"

    SUCCESS_INDICATOR = ML_USE_SPRINTF;

#line 15922 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 871 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 772 "string.format.m"
      if (mercury__string__format__succeeded)
#line 772 "string.format.m"
        {
#line 773 "string.format.m"
          mercury__string__format__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 773 "string.format.m"
          mercury__string__format__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 773 "string.format.m"
          mercury__string__format__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 773 "string.format.m"
          mercury__string__format__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 773 "string.format.m"
          mercury__string__format__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 773 "string.format.m"
          mercury__string__format__succeeded = (mercury__string__format__V_12_12 == (MR_Integer) 0);
#line 773 "string.format.m"
          if (mercury__string__format__succeeded)
#line 773 "string.format.m"
            {
#line 773 "string.format.m"
              mercury__string__format__succeeded = (mercury__string__format__V_13_13 == (MR_Integer) 0);
#line 773 "string.format.m"
              if (mercury__string__format__succeeded)
#line 773 "string.format.m"
                {
#line 774 "string.format.m"
                  mercury__string__format__succeeded = (mercury__string__format__V_14_14 == (MR_Integer) 0);
#line 773 "string.format.m"
                  if (mercury__string__format__succeeded)
#line 773 "string.format.m"
                    {
#line 774 "string.format.m"
                      mercury__string__format__succeeded = (mercury__string__format__V_15_15 == (MR_Integer) 0);
#line 773 "string.format.m"
                      if (mercury__string__format__succeeded)
#line 774 "string.format.m"
                        mercury__string__format__succeeded = (mercury__string__format__V_16_16 == (MR_Integer) 0);
#line 773 "string.format.m"
                    }
#line 773 "string.format.m"
                }
#line 773 "string.format.m"
            }
#line 772 "string.format.m"
          if (mercury__string__format__succeeded)
#line 772 "string.format.m"
            {
#line 775 "string.format.m"
              mercury__string__format__succeeded = (mercury__string__format__MaybeWidth_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "string.format.m"
              if (mercury__string__format__succeeded)
#line 776 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__MaybePrec_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "string.format.m"
            }
#line 772 "string.format.m"
        }
#line 772 "string.format.m"
    }
#line 777 "string.format.m"
    if (!(mercury__string__format__succeeded))
#line 909 "string.format.m"
      {
#line 913 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_string_component_5_p_0

	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__format__Str_9 ;
		{
#line 913 "string.format.m"

    const char *s;

    SUCCESS_INDICATOR = ML_USE_SPRINTF;
    for (s = Str; *s != '\0'; s++) {
        /*
         * sprintf %s specifier is inadequate for multi-byte UTF-8 characters,
         * if there is a field width or precision specified.
         */
        if (!MR_utf8_is_single_byte(*s)) {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
    }

#line 16020 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 913 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 909 "string.format.m"
      }
#line 783 "string.format.m"
    if (mercury__string__format__succeeded)
#line 781 "string.format.m"
      {
#line 781 "string.format.m"
        MR_String mercury__string__format__FormatStr_11;

#line 781 "string.format.m"
        {
#line 781 "string.format.m"
          mercury__string__format__FormatStr_11 = mercury__string__format__make_format_5_f_0(mercury__string__format__Flags_6, mercury__string__format__MaybeWidth_7, mercury__string__format__MaybePrec_8, (MR_String) "", (MR_String) "s");
        }
#line 1080 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__format_string_component_5_p_0

	MR_String FormatStr;
	MR_String Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_11 ;
	Val =  mercury__string__format__Str_9 ;
		{
#line 1080 "string.format.m"
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}
#line 16060 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__format__String_10  = Str;
#line 1080 "string.format.m"
}
#line 781 "string.format.m"
      }
#line 783 "string.format.m"
    else
#line 1124 "string.format.m"
      {
#line 1124 "string.format.m"
        MR_String mercury__string__format__PrecStr_30;
#line 1540 "string.format.m"
        MR_Integer mercury__string__format__Width_42;
#line 1532 "string.format.m"
        MR_Integer mercury__string__format__V_43_43;

#line 1128 "string.format.m"
        if ((mercury__string__format__MaybePrec_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1130 "string.format.m"
          mercury__string__format__PrecStr_30 = mercury__string__format__Str_9;
#line 1128 "string.format.m"
        else
#line 1126 "string.format.m"
          {
#line 1126 "string.format.m"
            MR_Integer mercury__string__format__NumChars_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybePrec_8, (MR_Integer) 0)));
#line 469 "string.opt"
            MR_String mercury__string__format___RightString_7_37;

#line 469 "string.opt"
            {
#line 469 "string.opt"
              mercury__string__split_by_codepoint_4_p_0(mercury__string__format__Str_9, mercury__string__format__NumChars_29, &mercury__string__format__PrecStr_30, &mercury__string__format___RightString_7_37);
            }
#line 1126 "string.format.m"
          }
#line 1532 "string.format.m"
        mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybeWidth_7)) == (MR_mktag((MR_Integer) 1)));
#line 1532 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1532 "string.format.m"
          {
#line 1532 "string.format.m"
            mercury__string__format__Width_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_7, (MR_Integer) 0)));
#line 250 "string.opt"
            {
#line 250 "string.opt"
              mercury__string__count_codepoints_2_p_0(mercury__string__format__PrecStr_30, &mercury__string__format__V_43_43);
            }
#line 1533 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__Width_42 > mercury__string__format__V_43_43);
#line 1532 "string.format.m"
          }
#line 1540 "string.format.m"
        if (mercury__string__format__succeeded)
#line 1537 "string.format.m"
          {
#line 1535 "string.format.m"
            MR_Word mercury__string__format__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1535 "string.format.m"
            MR_Word mercury__string__format__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1535 "string.format.m"
            MR_Word mercury__string__format__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1535 "string.format.m"
            MR_Word mercury__string__format__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1535 "string.format.m"
            MR_Word mercury__string__format__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1535 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__V_44_44 == (MR_Integer) 1);
#line 1537 "string.format.m"
            if (mercury__string__format__succeeded)
#line 1536 "string.format.m"
              {
#line 1536 "string.format.m"
                {
#line 1536 "string.format.m"
                  mercury__string__pad_right_4_p_0(mercury__string__format__PrecStr_30, (MR_Char) 32, mercury__string__format__Width_42, mercury__string__format__String_10);
#line 1536 "string.format.m"
                  return;
                }
#line 1536 "string.format.m"
              }
#line 1537 "string.format.m"
            else
#line 1538 "string.format.m"
              {
#line 1538 "string.format.m"
                {
#line 1538 "string.format.m"
                  mercury__string__pad_left_4_p_0(mercury__string__format__PrecStr_30, (MR_Char) 32, mercury__string__format__Width_42, mercury__string__format__String_10);
#line 1538 "string.format.m"
                  return;
                }
#line 1538 "string.format.m"
              }
#line 1537 "string.format.m"
          }
#line 1540 "string.format.m"
        else
#line 1541 "string.format.m"
          *mercury__string__format__String_10 = mercury__string__format__PrecStr_30;
#line 1124 "string.format.m"
      }
#line 783 "string.format.m"
  }
#line 766 "string.format.m"
}

#line 711 "string.format.m"
static void MR_CALL 
mercury__string__format__components_to_strings_2_p_0(
#line 711 "string.format.m"
  MR_Word mercury__string__format__HeadVar__1_1,
#line 711 "string.format.m"
  MR_Word * mercury__string__format__HeadVar__2_2)
#line 711 "string.format.m"
{
#line 714 "string.format.m"
  {
#line 714 "string.format.m"
    MR_bool mercury__string__format__succeeded;

#line 714 "string.format.m"
    if ((mercury__string__format__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 714 "string.format.m"
      *mercury__string__format__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 714 "string.format.m"
    else
#line 715 "string.format.m"
      {
#line 715 "string.format.m"
        MR_Word mercury__string__format__Component_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__1_1, (MR_Integer) 0)));
#line 715 "string.format.m"
        MR_Word mercury__string__format__Components_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__HeadVar__1_1, (MR_Integer) 1)));
#line 715 "string.format.m"
        MR_String mercury__string__format__String_5;
#line 715 "string.format.m"
        MR_Word mercury__string__format__Strings_6;

#line 721 "string.format.m"
        if (((MR_tag((MR_Word) mercury__string__format__Component_3)) == (MR_mktag((MR_Integer) 1))))
#line 723 "string.format.m"
          {
#line 723 "string.format.m"
            MR_Word mercury__string__format__Spec_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__Component_3, (MR_Integer) 0)));

#line 729 "string.format.m"
            if ((mercury__string__format__Spec_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 728 "string.format.m"
              mercury__string__format__String_5 = (MR_String) "%";
#line 729 "string.format.m"
            else
#line 729 "string.format.m"
              if (((MR_tag((MR_Word) mercury__string__format__Spec_11)) == (MR_mktag((MR_Integer) 1))))
#line 731 "string.format.m"
                {
#line 731 "string.format.m"
                  MR_Word mercury__string__format__Flags_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__Spec_11, (MR_Integer) 0)));
#line 731 "string.format.m"
                  MR_Word mercury__string__format__MaybeWidth_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__Spec_11, (MR_Integer) 1)));
#line 731 "string.format.m"
                  MR_Word mercury__string__format__MaybePrec_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__Spec_11, (MR_Integer) 2)));
#line 731 "string.format.m"
                  MR_Integer mercury__string__format__Int_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__Spec_11, (MR_Integer) 3)));

#line 871 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__components_to_strings_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 871 "string.format.m"

    SUCCESS_INDICATOR = ML_USE_SPRINTF;

#line 16241 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 871 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 796 "string.format.m"
                  if (mercury__string__format__succeeded)
#line 794 "string.format.m"
                    {
#line 794 "string.format.m"
                      MR_String mercury__string__format__FormatStr_90;
#line 794 "string.format.m"
                      MR_String mercury__string__format__V_91_91;

#line 1021 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__components_to_strings_2_p_0

	MR_String LengthModifier;

		{
#line 1021 "string.format.m"
{
    MR_make_aligned_string(LengthModifier, MR_INTEGER_LENGTH_MODIFIER);
}
#line 16270 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__V_91_91  = LengthModifier;
#line 1021 "string.format.m"
}
#line 793 "string.format.m"
                      {
#line 793 "string.format.m"
                        mercury__string__format__FormatStr_90 = mercury__string__format__make_format_5_f_0(mercury__string__format__Flags_12, mercury__string__format__MaybeWidth_13, mercury__string__format__MaybePrec_14, mercury__string__format__V_91_91, (MR_String) "d");
                      }
#line 1060 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__components_to_strings_2_p_0

	MR_String FormatStr;
	MR_Integer Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_90 ;
	Val =  mercury__string__format__Int_15 ;
		{
#line 1060 "string.format.m"
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}
#line 16299 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__String_5  = Str;
#line 1060 "string.format.m"
}
#line 794 "string.format.m"
                    }
#line 796 "string.format.m"
                  else
#line 797 "string.format.m"
                    {
#line 797 "string.format.m"
                      mercury__string__format__String_5 = mercury__string__format__format_signed_int_4_f_0(mercury__string__format__Flags_12, mercury__string__format__MaybeWidth_13, mercury__string__format__MaybePrec_14, mercury__string__format__Int_15);
                    }
#line 731 "string.format.m"
                }
#line 729 "string.format.m"
              else
#line 729 "string.format.m"
                if (((MR_tag((MR_Word) mercury__string__format__Spec_11)) == (MR_mktag((MR_Integer) 2))))
#line 735 "string.format.m"
                  {
#line 735 "string.format.m"
                    MR_Word mercury__string__format__Base_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__Spec_11, (MR_Integer) 3)));
#line 735 "string.format.m"
                    MR_Word mercury__string__format__Flags_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__Spec_11, (MR_Integer) 0)));
#line 735 "string.format.m"
                    MR_Word mercury__string__format__MaybeWidth_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__Spec_11, (MR_Integer) 1)));
#line 735 "string.format.m"
                    MR_Word mercury__string__format__MaybePrec_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__Spec_11, (MR_Integer) 2)));
#line 735 "string.format.m"
                    MR_Integer mercury__string__format__Int_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__format__Spec_11, (MR_Integer) 4)));

#line 736 "string.format.m"
                    {
#line 736 "string.format.m"
                      mercury__string__format__format_unsigned_int_component_6_p_0(mercury__string__format__Flags_21, mercury__string__format__MaybeWidth_22, mercury__string__format__MaybePrec_23, mercury__string__format__Base_16, mercury__string__format__Int_24, &mercury__string__format__String_5);
                    }
#line 735 "string.format.m"
                  }
#line 729 "string.format.m"
                else
#line 729 "string.format.m"
                  if (((((MR_tag((MR_Word) mercury__string__format__Spec_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 745 "string.format.m"
                    {
#line 745 "string.format.m"
                      MR_Char mercury__string__format__Char_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_11, (MR_Integer) 3)));
#line 745 "string.format.m"
                      MR_Word mercury__string__format__Flags_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_11, (MR_Integer) 1)));
#line 745 "string.format.m"
                      MR_Word mercury__string__format__MaybeWidth_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_11, (MR_Integer) 2)));

#line 899 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__components_to_strings_2_p_0

	MR_Char Char;
	MR_bool SUCCESS_INDICATOR;

	Char =  mercury__string__format__Char_19 ;
		{
#line 899 "string.format.m"

    /* sprintf %c specifier is inadequate for multi-byte UTF-8 characters. */
    SUCCESS_INDICATOR = ML_USE_SPRINTF && MR_is_ascii(Char);

#line 16368 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 899 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 762 "string.format.m"
                      if (mercury__string__format__succeeded)
#line 760 "string.format.m"
                        {
#line 760 "string.format.m"
                          MR_String mercury__string__format__FormatStr_37;
#line 760 "string.format.m"
                          MR_Word mercury__string__format__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 760 "string.format.m"
                          {
#line 760 "string.format.m"
                            mercury__string__format__FormatStr_37 = mercury__string__format__make_format_5_f_0(mercury__string__format__Flags_28, mercury__string__format__MaybeWidth_29, mercury__string__format__V_38_38, (MR_String) "", (MR_String) "c");
                          }
#line 1100 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__components_to_strings_2_p_0

	MR_String FormatStr;
	MR_Char Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_37 ;
	Val =  mercury__string__format__Char_19 ;
		{
#line 1100 "string.format.m"
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, Val);
    MR_restore_transient_hp();
}
#line 16408 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__String_5  = Str;
#line 1100 "string.format.m"
}
#line 760 "string.format.m"
                        }
#line 762 "string.format.m"
                      else
#line 1116 "string.format.m"
                        {
#line 1116 "string.format.m"
                          MR_String mercury__string__format__CharStr_50;
#line 1116 "string.format.m"
                          MR_Word mercury__string__format__V_5_55;
#line 1116 "string.format.m"
                          MR_Word mercury__string__format__V_6_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1540 "string.format.m"
                          MR_Integer mercury__string__format__Width_61;
#line 1532 "string.format.m"
                          MR_Integer mercury__string__format__V_62_62;

#line 696 "string.opt"
                          {
#line 696 "string.opt"
                            mercury__string__format__V_5_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "string.opt"
                            MR_hl_field(MR_mktag(1), mercury__string__format__V_5_55, 0) = ((MR_Box) (MR_Word) (mercury__string__format__Char_19));
#line 696 "string.opt"
                            MR_hl_field(MR_mktag(1), mercury__string__format__V_5_55, 1) = ((MR_Box) (mercury__string__format__V_6_56));
#line 696 "string.opt"
                          }
#line 698 "string.opt"
                          {
#line 698 "string.opt"
                            mercury__string__to_char_list_2_p_1(&mercury__string__format__CharStr_50, mercury__string__format__V_5_55);
                          }
#line 1532 "string.format.m"
                          mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__MaybeWidth_29)) == (MR_mktag((MR_Integer) 1)));
#line 1532 "string.format.m"
                          if (mercury__string__format__succeeded)
#line 1532 "string.format.m"
                            {
#line 1532 "string.format.m"
                              mercury__string__format__Width_61 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_29, (MR_Integer) 0)));
#line 250 "string.opt"
                              {
#line 250 "string.opt"
                                mercury__string__count_codepoints_2_p_0(mercury__string__format__CharStr_50, &mercury__string__format__V_62_62);
                              }
#line 1533 "string.format.m"
                              mercury__string__format__succeeded = (mercury__string__format__Width_61 > mercury__string__format__V_62_62);
#line 1532 "string.format.m"
                            }
#line 1540 "string.format.m"
                          if (mercury__string__format__succeeded)
#line 1537 "string.format.m"
                            {
#line 1535 "string.format.m"
                              MR_Word mercury__string__format__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_28, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1535 "string.format.m"
                              MR_Word mercury__string__format__V_66_66 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_28, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1535 "string.format.m"
                              MR_Word mercury__string__format__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_28, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1535 "string.format.m"
                              MR_Word mercury__string__format__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_28, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1535 "string.format.m"
                              MR_Word mercury__string__format__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__Flags_28, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1535 "string.format.m"
                              mercury__string__format__succeeded = (mercury__string__format__V_63_63 == (MR_Integer) 1);
#line 1537 "string.format.m"
                              if (mercury__string__format__succeeded)
#line 1536 "string.format.m"
                                {
#line 1536 "string.format.m"
                                  {
#line 1536 "string.format.m"
                                    mercury__string__pad_right_4_p_0(mercury__string__format__CharStr_50, (MR_Char) 32, mercury__string__format__Width_61, &mercury__string__format__String_5);
                                  }
#line 1536 "string.format.m"
                                }
#line 1537 "string.format.m"
                              else
#line 1538 "string.format.m"
                                {
#line 1538 "string.format.m"
                                  {
#line 1538 "string.format.m"
                                    mercury__string__pad_left_4_p_0(mercury__string__format__CharStr_50, (MR_Char) 32, mercury__string__format__Width_61, &mercury__string__format__String_5);
                                  }
#line 1538 "string.format.m"
                                }
#line 1537 "string.format.m"
                            }
#line 1540 "string.format.m"
                          else
#line 1541 "string.format.m"
                            mercury__string__format__String_5 = mercury__string__format__CharStr_50;
#line 1116 "string.format.m"
                        }
#line 745 "string.format.m"
                    }
#line 729 "string.format.m"
                  else
#line 729 "string.format.m"
                    if (((((MR_tag((MR_Word) mercury__string__format__Spec_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 740 "string.format.m"
                      {
#line 740 "string.format.m"
                        MR_Word mercury__string__format__Kind_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_11, (MR_Integer) 4)));
#line 740 "string.format.m"
                        MR_Float mercury__string__format__Float_18 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__string__format__Spec_11, (MR_Integer) 5)));
#line 740 "string.format.m"
                        MR_Word mercury__string__format__Flags_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_11, (MR_Integer) 1)));
#line 740 "string.format.m"
                        MR_Word mercury__string__format__MaybeWidth_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_11, (MR_Integer) 2)));
#line 740 "string.format.m"
                        MR_Word mercury__string__format__MaybePrec_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_11, (MR_Integer) 3)));

#line 131 "float.opt"
{
#define MR_PROC_LABEL mercury__string__format__components_to_strings_2_p_0

	MR_Float Flt;
	MR_bool SUCCESS_INDICATOR;

	Flt =  mercury__string__format__Float_18 ;
		{
#line 131 "float.opt"

    SUCCESS_INDICATOR = MR_is_finite(Flt);

#line 16543 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 131 "float.opt"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 826 "string.format.m"
                        if (mercury__string__format__succeeded)
#line 826 "string.format.m"
                          {
#line 871 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__components_to_strings_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 871 "string.format.m"

    SUCCESS_INDICATOR = ML_USE_SPRINTF;

#line 16567 "string.format.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 871 "string.format.m"
	}
mercury__string__format__succeeded  = SUCCESS_INDICATOR;
}
#line 826 "string.format.m"
                          }
#line 839 "string.format.m"
                        if (mercury__string__format__succeeded)
#line 835 "string.format.m"
                          {
#line 835 "string.format.m"
                            MR_String mercury__string__format__SpecChar_78;
#line 835 "string.format.m"
                            MR_String mercury__string__format__FormatStr_79;

#line 830 "string.format.m"
                            if ((mercury__string__format__Kind_17 == (MR_Integer) 0))
#line 829 "string.format.m"
                              mercury__string__format__SpecChar_78 = (MR_String) "e";
#line 830 "string.format.m"
                            else
#line 830 "string.format.m"
                              if ((mercury__string__format__Kind_17 == (MR_Integer) 1))
#line 830 "string.format.m"
                                mercury__string__format__SpecChar_78 = (MR_String) "E";
#line 830 "string.format.m"
                              else
#line 830 "string.format.m"
                                if ((mercury__string__format__Kind_17 == (MR_Integer) 2))
#line 831 "string.format.m"
                                  mercury__string__format__SpecChar_78 = (MR_String) "f";
#line 830 "string.format.m"
                                else
#line 830 "string.format.m"
                                  if ((mercury__string__format__Kind_17 == (MR_Integer) 3))
#line 832 "string.format.m"
                                    mercury__string__format__SpecChar_78 = (MR_String) "F";
#line 830 "string.format.m"
                                  else
#line 830 "string.format.m"
                                    if ((mercury__string__format__Kind_17 == (MR_Integer) 4))
#line 833 "string.format.m"
                                      mercury__string__format__SpecChar_78 = (MR_String) "g";
#line 830 "string.format.m"
                                    else
#line 834 "string.format.m"
                                      mercury__string__format__SpecChar_78 = (MR_String) "G";
#line 836 "string.format.m"
                            {
#line 836 "string.format.m"
                              mercury__string__format__FormatStr_79 = mercury__string__format__make_format_5_f_0(mercury__string__format__Flags_25, mercury__string__format__MaybeWidth_26, mercury__string__format__MaybePrec_27, (MR_String) "", mercury__string__format__SpecChar_78);
                            }
#line 1040 "string.format.m"
{
#define MR_PROC_LABEL mercury__string__format__components_to_strings_2_p_0

	MR_String FormatStr;
	MR_Float Val;
	MR_String Str;

	FormatStr =  mercury__string__format__FormatStr_79 ;
	Val =  mercury__string__format__Float_18 ;
		{
#line 1040 "string.format.m"
{
    MR_save_transient_hp();
    Str = MR_make_string(MR_ALLOC_ID, FormatStr, (double) Val);
    MR_restore_transient_hp();
}
#line 16641 "string.format.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__format__String_5  = Str;
#line 1040 "string.format.m"
}
#line 835 "string.format.m"
                          }
#line 839 "string.format.m"
                        else
#line 840 "string.format.m"
                          {
#line 840 "string.format.m"
                            mercury__string__format__String_5 = mercury__string__format__format_float_5_f_0(mercury__string__format__Flags_25, mercury__string__format__MaybeWidth_26, mercury__string__format__MaybePrec_27, mercury__string__format__Kind_17, mercury__string__format__Float_18);
                          }
#line 740 "string.format.m"
                      }
#line 729 "string.format.m"
                    else
#line 749 "string.format.m"
                      {
#line 749 "string.format.m"
                        MR_String mercury__string__format__Str_20 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_11, (MR_Integer) 4)));
#line 749 "string.format.m"
                        MR_Word mercury__string__format__Flags_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_11, (MR_Integer) 1)));
#line 749 "string.format.m"
                        MR_Word mercury__string__format__MaybeWidth_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_11, (MR_Integer) 2)));
#line 749 "string.format.m"
                        MR_Word mercury__string__format__MaybePrec_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Spec_11, (MR_Integer) 3)));

#line 750 "string.format.m"
                        {
#line 750 "string.format.m"
                          mercury__string__format__format_string_component_5_p_0(mercury__string__format__Flags_30, mercury__string__format__MaybeWidth_31, mercury__string__format__MaybePrec_32, mercury__string__format__Str_20, &mercury__string__format__String_5);
                        }
#line 749 "string.format.m"
                      }
#line 723 "string.format.m"
          }
#line 721 "string.format.m"
        else
#line 722 "string.format.m"
          mercury__string__format__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__string__format__Component_3, (MR_Integer) 0)));
#line 717 "string.format.m"
        {
#line 717 "string.format.m"
          mercury__string__format__components_to_strings_2_p_0(mercury__string__format__Components_4, &mercury__string__format__Strings_6);
        }
#line 715 "string.format.m"
        {
#line 715 "string.format.m"
          MR_Word base;
#line 715 "string.format.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "string.format.m"
          *mercury__string__format__HeadVar__2_2 = base;
#line 715 "string.format.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__String_5));
#line 715 "string.format.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__Strings_6));
#line 715 "string.format.m"
        }
#line 715 "string.format.m"
      }
#line 714 "string.format.m"
  }
#line 711 "string.format.m"
}

#line 540 "string.format.m"
static void MR_CALL 
mercury__string__format__get_first_spec_10_p_0(
#line 540 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_Chars_0_1,
#line 540 "string.format.m"
  MR_Word * mercury__string__format__STATE_VARIABLE_Chars_2,
#line 540 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_PolyTypes_0_3,
#line 540 "string.format.m"
  MR_Word * mercury__string__format__STATE_VARIABLE_PolyTypes_4,
#line 540 "string.format.m"
  MR_Word mercury__string__format__HeadVar__5_5,
#line 540 "string.format.m"
  MR_Word mercury__string__format__HeadVar__6_6,
#line 540 "string.format.m"
  MR_Word mercury__string__format__HeadVar__7_7,
#line 540 "string.format.m"
  MR_Integer mercury__string__format__SpecNum_8,
#line 540 "string.format.m"
  MR_Word * mercury__string__format__Spec_9,
#line 540 "string.format.m"
  MR_Word * mercury__string__format__Errors_10)
#line 540 "string.format.m"
{
#line 546 "string.format.m"
  {
#line 546 "string.format.m"
    MR_bool mercury__string__format__succeeded;

#line 546 "string.format.m"
    if ((mercury__string__format__STATE_VARIABLE_Chars_0_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 546 "string.format.m"
      {
#line 546 "string.format.m"
        MR_Word mercury__string__format__TypeCtorInfo_134_134;
#line 546 "string.format.m"
        MR_Word mercury__string__format__V_23_23;
#line 546 "string.format.m"
        MR_Integer mercury__string__format__V_24_24;
#line 546 "string.format.m"
        MR_Word mercury__string__format__V_25_25;

#line 548 "string.format.m"
        *mercury__string__format__Spec_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 16756 "string.format.c"
        mercury__string__format__TypeCtorInfo_134_134 = (MR_Word) &mercury__string__string__type_ctor_info_poly_type_0;
#line 549 "string.format.m"
        {
#line 549 "string.format.m"
          mercury__string__format__V_24_24 = mercury__list__length_1_f_0(mercury__string__format__TypeCtorInfo_134_134, mercury__string__format__STATE_VARIABLE_PolyTypes_0_3);
        }
#line 549 "string.format.m"
        {
#line 549 "string.format.m"
          mercury__string__format__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 549 "string.format.m"
          MR_hl_field(MR_mktag(0), mercury__string__format__V_23_23, 0) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 549 "string.format.m"
          MR_hl_field(MR_mktag(0), mercury__string__format__V_23_23, 1) = ((MR_Box) (mercury__string__format__V_24_24));
#line 549 "string.format.m"
        }
#line 549 "string.format.m"
        mercury__string__format__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 549 "string.format.m"
        {
#line 549 "string.format.m"
          MR_Word base;
#line 549 "string.format.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "string.format.m"
          *mercury__string__format__Errors_10 = base;
#line 549 "string.format.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__V_23_23));
#line 549 "string.format.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__V_25_25));
#line 549 "string.format.m"
        }
#line 545 "string.format.m"
        *mercury__string__format__STATE_VARIABLE_PolyTypes_4 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_3;
#line 545 "string.format.m"
        *mercury__string__format__STATE_VARIABLE_Chars_2 = mercury__string__format__STATE_VARIABLE_Chars_0_1;
#line 546 "string.format.m"
      }
#line 546 "string.format.m"
    else
#line 551 "string.format.m"
      {
#line 551 "string.format.m"
        MR_Char mercury__string__format__SpecChar_34 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_Chars_0_1, (MR_Integer) 0)));
#line 705 "string.format.m"
        MR_Word mercury__string__format__SpecPrime_35;
#line 705 "string.format.m"
        MR_Word mercury__string__format__ErrorsPrime_36;
#line 705 "string.format.m"
        MR_Word mercury__string__format__STATE_VARIABLE_PolyTypes_70_70;

#line 552 "string.format.m"
        *mercury__string__format__STATE_VARIABLE_Chars_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_Chars_0_1, (MR_Integer) 1)));
#line 558 "string.format.m"
        if ((mercury__string__format__SpecChar_34 == (MR_Char) 37))
#line 555 "string.format.m"
          {
#line 556 "string.format.m"
            mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "string.format.m"
            mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "string.format.m"
            mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_3;
#line 555 "string.format.m"
            mercury__string__format__succeeded = MR_TRUE;
#line 555 "string.format.m"
          }
#line 558 "string.format.m"
        else
#line 558 "string.format.m"
          if ((mercury__string__format__SpecChar_34 == (MR_Char) 69))
#line 639 "string.format.m"
            {
#line 653 "string.format.m"
              if ((mercury__string__format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 654 "string.format.m"
                {
#line 654 "string.format.m"
                  MR_Word mercury__string__format__V_59_59;
#line 654 "string.format.m"
                  MR_Word mercury__string__format__Error_97;

#line 655 "string.format.m"
                  {
#line 655 "string.format.m"
                    mercury__string__format__Error_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 655 "string.format.m"
                    MR_hl_field(MR_mktag(3), mercury__string__format__Error_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 655 "string.format.m"
                    MR_hl_field(MR_mktag(3), mercury__string__format__Error_97, 1) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 655 "string.format.m"
                    MR_hl_field(MR_mktag(3), mercury__string__format__Error_97, 2) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 655 "string.format.m"
                  }
#line 656 "string.format.m"
                  mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 657 "string.format.m"
                  mercury__string__format__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 657 "string.format.m"
                  {
#line 657 "string.format.m"
                    mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "string.format.m"
                    MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_97));
#line 657 "string.format.m"
                    MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_59_59));
#line 657 "string.format.m"
                  }
#line 657 "string.format.m"
                  mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_3;
#line 654 "string.format.m"
                }
#line 653 "string.format.m"
              else
#line 642 "string.format.m"
                {
#line 642 "string.format.m"
                  MR_Word mercury__string__format__SpecPolyType_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 647 "string.format.m"
                  MR_Float mercury__string__format__Float_42;

#line 642 "string.format.m"
                  mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 643 "string.format.m"
                  mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__SpecPolyType_95)) == (MR_mktag((MR_Integer) 0)));
#line 643 "string.format.m"
                  if (mercury__string__format__succeeded)
#line 643 "string.format.m"
                    {
#line 643 "string.format.m"
                      mercury__string__format__Float_42 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__format__SpecPolyType_95, (MR_Integer) 0)));
#line 644 "string.format.m"
                      {
#line 644 "string.format.m"
                        mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 644 "string.format.m"
                        MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 644 "string.format.m"
                        MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 1) = ((MR_Box) (mercury__string__format__HeadVar__5_5));
#line 644 "string.format.m"
                        MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 2) = ((MR_Box) (mercury__string__format__HeadVar__6_6));
#line 644 "string.format.m"
                        MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 3) = ((MR_Box) (mercury__string__format__HeadVar__7_7));
#line 644 "string.format.m"
                        MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 4) = ((MR_Box) ((MR_Integer) 1));
#line 644 "string.format.m"
                        MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 5) = MR_box_float(mercury__string__format__Float_42);
#line 644 "string.format.m"
                      }
#line 646 "string.format.m"
                      mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "string.format.m"
                    }
#line 643 "string.format.m"
                  else
#line 649 "string.format.m"
                    {
#line 649 "string.format.m"
                      MR_Word mercury__string__format__V_61_61;
#line 649 "string.format.m"
                      MR_Word mercury__string__format__V_62_62;
#line 649 "string.format.m"
                      MR_Word mercury__string__format__Error_93;

#line 649 "string.format.m"
                      {
#line 649 "string.format.m"
                        mercury__string__format__V_61_61 = mercury__string__format__poly_type_to_kind_1_f_0(mercury__string__format__SpecPolyType_95);
                      }
#line 648 "string.format.m"
                      {
#line 648 "string.format.m"
                        mercury__string__format__Error_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 648 "string.format.m"
                        MR_hl_field(MR_mktag(2), mercury__string__format__Error_93, 0) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 648 "string.format.m"
                        MR_hl_field(MR_mktag(2), mercury__string__format__Error_93, 1) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 648 "string.format.m"
                        MR_hl_field(MR_mktag(2), mercury__string__format__Error_93, 2) = ((MR_Box) (mercury__string__format__V_61_61));
#line 648 "string.format.m"
                      }
#line 650 "string.format.m"
                      mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 651 "string.format.m"
                      mercury__string__format__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 651 "string.format.m"
                      {
#line 651 "string.format.m"
                        mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "string.format.m"
                        MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_93));
#line 651 "string.format.m"
                        MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_62_62));
#line 651 "string.format.m"
                      }
#line 649 "string.format.m"
                    }
#line 642 "string.format.m"
                }
#line 639 "string.format.m"
              mercury__string__format__succeeded = MR_TRUE;
#line 639 "string.format.m"
            }
#line 558 "string.format.m"
          else
#line 558 "string.format.m"
            if ((mercury__string__format__SpecChar_34 == (MR_Char) 70))
#line 639 "string.format.m"
              {
#line 653 "string.format.m"
                if ((mercury__string__format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 654 "string.format.m"
                  {
#line 654 "string.format.m"
                    MR_Word mercury__string__format__V_144_144;
#line 654 "string.format.m"
                    MR_Word mercury__string__format__Error_145;

#line 655 "string.format.m"
                    {
#line 655 "string.format.m"
                      mercury__string__format__Error_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 655 "string.format.m"
                      MR_hl_field(MR_mktag(3), mercury__string__format__Error_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 655 "string.format.m"
                      MR_hl_field(MR_mktag(3), mercury__string__format__Error_145, 1) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 655 "string.format.m"
                      MR_hl_field(MR_mktag(3), mercury__string__format__Error_145, 2) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 655 "string.format.m"
                    }
#line 656 "string.format.m"
                    mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 657 "string.format.m"
                    mercury__string__format__V_144_144 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 657 "string.format.m"
                    {
#line 657 "string.format.m"
                      mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "string.format.m"
                      MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_145));
#line 657 "string.format.m"
                      MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_144_144));
#line 657 "string.format.m"
                    }
#line 657 "string.format.m"
                    mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_3;
#line 654 "string.format.m"
                  }
#line 653 "string.format.m"
                else
#line 642 "string.format.m"
                  {
#line 642 "string.format.m"
                    MR_Word mercury__string__format__SpecPolyType_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 647 "string.format.m"
                    MR_Float mercury__string__format__Float_149;

#line 642 "string.format.m"
                    mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 643 "string.format.m"
                    mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__SpecPolyType_157)) == (MR_mktag((MR_Integer) 0)));
#line 643 "string.format.m"
                    if (mercury__string__format__succeeded)
#line 643 "string.format.m"
                      {
#line 643 "string.format.m"
                        mercury__string__format__Float_149 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__format__SpecPolyType_157, (MR_Integer) 0)));
#line 644 "string.format.m"
                        {
#line 644 "string.format.m"
                          mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 644 "string.format.m"
                          MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 644 "string.format.m"
                          MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 1) = ((MR_Box) (mercury__string__format__HeadVar__5_5));
#line 644 "string.format.m"
                          MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 2) = ((MR_Box) (mercury__string__format__HeadVar__6_6));
#line 644 "string.format.m"
                          MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 3) = ((MR_Box) (mercury__string__format__HeadVar__7_7));
#line 644 "string.format.m"
                          MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 4) = ((MR_Box) ((MR_Integer) 3));
#line 644 "string.format.m"
                          MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 5) = MR_box_float(mercury__string__format__Float_149);
#line 644 "string.format.m"
                        }
#line 646 "string.format.m"
                        mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "string.format.m"
                      }
#line 643 "string.format.m"
                    else
#line 649 "string.format.m"
                      {
#line 649 "string.format.m"
                        MR_Word mercury__string__format__V_146_146;
#line 649 "string.format.m"
                        MR_Word mercury__string__format__V_147_147;
#line 649 "string.format.m"
                        MR_Word mercury__string__format__Error_148;

#line 649 "string.format.m"
                        {
#line 649 "string.format.m"
                          mercury__string__format__V_146_146 = mercury__string__format__poly_type_to_kind_1_f_0(mercury__string__format__SpecPolyType_157);
                        }
#line 648 "string.format.m"
                        {
#line 648 "string.format.m"
                          mercury__string__format__Error_148 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 648 "string.format.m"
                          MR_hl_field(MR_mktag(2), mercury__string__format__Error_148, 0) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 648 "string.format.m"
                          MR_hl_field(MR_mktag(2), mercury__string__format__Error_148, 1) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 648 "string.format.m"
                          MR_hl_field(MR_mktag(2), mercury__string__format__Error_148, 2) = ((MR_Box) (mercury__string__format__V_146_146));
#line 648 "string.format.m"
                        }
#line 650 "string.format.m"
                        mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 651 "string.format.m"
                        mercury__string__format__V_147_147 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 651 "string.format.m"
                        {
#line 651 "string.format.m"
                          mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "string.format.m"
                          MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_148));
#line 651 "string.format.m"
                          MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_147_147));
#line 651 "string.format.m"
                        }
#line 649 "string.format.m"
                      }
#line 642 "string.format.m"
                  }
#line 639 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 639 "string.format.m"
              }
#line 558 "string.format.m"
            else
#line 558 "string.format.m"
              if ((mercury__string__format__SpecChar_34 == (MR_Char) 71))
#line 639 "string.format.m"
                {
#line 653 "string.format.m"
                  if ((mercury__string__format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 654 "string.format.m"
                    {
#line 654 "string.format.m"
                      MR_Word mercury__string__format__V_182_182;
#line 654 "string.format.m"
                      MR_Word mercury__string__format__Error_183;

#line 655 "string.format.m"
                      {
#line 655 "string.format.m"
                        mercury__string__format__Error_183 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 655 "string.format.m"
                        MR_hl_field(MR_mktag(3), mercury__string__format__Error_183, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 655 "string.format.m"
                        MR_hl_field(MR_mktag(3), mercury__string__format__Error_183, 1) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 655 "string.format.m"
                        MR_hl_field(MR_mktag(3), mercury__string__format__Error_183, 2) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 655 "string.format.m"
                      }
#line 656 "string.format.m"
                      mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 657 "string.format.m"
                      mercury__string__format__V_182_182 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 657 "string.format.m"
                      {
#line 657 "string.format.m"
                        mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "string.format.m"
                        MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_183));
#line 657 "string.format.m"
                        MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_182_182));
#line 657 "string.format.m"
                      }
#line 657 "string.format.m"
                      mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_3;
#line 654 "string.format.m"
                    }
#line 653 "string.format.m"
                  else
#line 642 "string.format.m"
                    {
#line 642 "string.format.m"
                      MR_Word mercury__string__format__SpecPolyType_195 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 647 "string.format.m"
                      MR_Float mercury__string__format__Float_187;

#line 642 "string.format.m"
                      mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 643 "string.format.m"
                      mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__SpecPolyType_195)) == (MR_mktag((MR_Integer) 0)));
#line 643 "string.format.m"
                      if (mercury__string__format__succeeded)
#line 643 "string.format.m"
                        {
#line 643 "string.format.m"
                          mercury__string__format__Float_187 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__format__SpecPolyType_195, (MR_Integer) 0)));
#line 644 "string.format.m"
                          {
#line 644 "string.format.m"
                            mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 644 "string.format.m"
                            MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 644 "string.format.m"
                            MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 1) = ((MR_Box) (mercury__string__format__HeadVar__5_5));
#line 644 "string.format.m"
                            MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 2) = ((MR_Box) (mercury__string__format__HeadVar__6_6));
#line 644 "string.format.m"
                            MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 3) = ((MR_Box) (mercury__string__format__HeadVar__7_7));
#line 644 "string.format.m"
                            MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 4) = ((MR_Box) ((MR_Integer) 5));
#line 644 "string.format.m"
                            MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 5) = MR_box_float(mercury__string__format__Float_187);
#line 644 "string.format.m"
                          }
#line 646 "string.format.m"
                          mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "string.format.m"
                        }
#line 643 "string.format.m"
                      else
#line 649 "string.format.m"
                        {
#line 649 "string.format.m"
                          MR_Word mercury__string__format__V_184_184;
#line 649 "string.format.m"
                          MR_Word mercury__string__format__V_185_185;
#line 649 "string.format.m"
                          MR_Word mercury__string__format__Error_186;

#line 649 "string.format.m"
                          {
#line 649 "string.format.m"
                            mercury__string__format__V_184_184 = mercury__string__format__poly_type_to_kind_1_f_0(mercury__string__format__SpecPolyType_195);
                          }
#line 648 "string.format.m"
                          {
#line 648 "string.format.m"
                            mercury__string__format__Error_186 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 648 "string.format.m"
                            MR_hl_field(MR_mktag(2), mercury__string__format__Error_186, 0) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 648 "string.format.m"
                            MR_hl_field(MR_mktag(2), mercury__string__format__Error_186, 1) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 648 "string.format.m"
                            MR_hl_field(MR_mktag(2), mercury__string__format__Error_186, 2) = ((MR_Box) (mercury__string__format__V_184_184));
#line 648 "string.format.m"
                          }
#line 650 "string.format.m"
                          mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 651 "string.format.m"
                          mercury__string__format__V_185_185 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 651 "string.format.m"
                          {
#line 651 "string.format.m"
                            mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "string.format.m"
                            MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_186));
#line 651 "string.format.m"
                            MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_185_185));
#line 651 "string.format.m"
                          }
#line 649 "string.format.m"
                        }
#line 642 "string.format.m"
                    }
#line 639 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 639 "string.format.m"
                }
#line 558 "string.format.m"
              else
#line 558 "string.format.m"
                if ((mercury__string__format__SpecChar_34 == (MR_Char) 88))
#line 600 "string.format.m"
                  {
#line 614 "string.format.m"
                    if ((mercury__string__format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "string.format.m"
                      {
#line 615 "string.format.m"
                        MR_Word mercury__string__format__V_65_65;
#line 615 "string.format.m"
                        MR_Word mercury__string__format__Error_83;

#line 616 "string.format.m"
                        {
#line 616 "string.format.m"
                          mercury__string__format__Error_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 616 "string.format.m"
                          MR_hl_field(MR_mktag(3), mercury__string__format__Error_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 616 "string.format.m"
                          MR_hl_field(MR_mktag(3), mercury__string__format__Error_83, 1) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 616 "string.format.m"
                          MR_hl_field(MR_mktag(3), mercury__string__format__Error_83, 2) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 616 "string.format.m"
                        }
#line 617 "string.format.m"
                        mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "string.format.m"
                        mercury__string__format__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "string.format.m"
                        {
#line 618 "string.format.m"
                          mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "string.format.m"
                          MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_83));
#line 618 "string.format.m"
                          MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_65_65));
#line 618 "string.format.m"
                        }
#line 618 "string.format.m"
                        mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_3;
#line 615 "string.format.m"
                      }
#line 614 "string.format.m"
                    else
#line 603 "string.format.m"
                      {
#line 603 "string.format.m"
                        MR_Word mercury__string__format__SpecPolyType_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 608 "string.format.m"
                        MR_Integer mercury__string__format__Int_78;

#line 603 "string.format.m"
                        mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 604 "string.format.m"
                        mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__SpecPolyType_80)) == (MR_mktag((MR_Integer) 1)));
#line 604 "string.format.m"
                        if (mercury__string__format__succeeded)
#line 604 "string.format.m"
                          {
#line 604 "string.format.m"
                            mercury__string__format__Int_78 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__SpecPolyType_80, (MR_Integer) 0)));
#line 605 "string.format.m"
                            {
#line 605 "string.format.m"
                              mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 605 "string.format.m"
                              MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 0) = ((MR_Box) (mercury__string__format__HeadVar__5_5));
#line 605 "string.format.m"
                              MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 1) = ((MR_Box) (mercury__string__format__HeadVar__6_6));
#line 605 "string.format.m"
                              MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 2) = ((MR_Box) (mercury__string__format__HeadVar__7_7));
#line 605 "string.format.m"
                              MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 3) = ((MR_Box) ((MR_Integer) 3));
#line 605 "string.format.m"
                              MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 4) = ((MR_Box) (mercury__string__format__Int_78));
#line 605 "string.format.m"
                            }
#line 607 "string.format.m"
                            mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 604 "string.format.m"
                          }
#line 604 "string.format.m"
                        else
#line 610 "string.format.m"
                          {
#line 610 "string.format.m"
                            MR_Word mercury__string__format__V_67_67;
#line 610 "string.format.m"
                            MR_Word mercury__string__format__V_68_68;
#line 610 "string.format.m"
                            MR_Word mercury__string__format__Error_77;

#line 610 "string.format.m"
                            {
#line 610 "string.format.m"
                              mercury__string__format__V_67_67 = mercury__string__format__poly_type_to_kind_1_f_0(mercury__string__format__SpecPolyType_80);
                            }
#line 609 "string.format.m"
                            {
#line 609 "string.format.m"
                              mercury__string__format__Error_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 609 "string.format.m"
                              MR_hl_field(MR_mktag(2), mercury__string__format__Error_77, 0) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 609 "string.format.m"
                              MR_hl_field(MR_mktag(2), mercury__string__format__Error_77, 1) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 609 "string.format.m"
                              MR_hl_field(MR_mktag(2), mercury__string__format__Error_77, 2) = ((MR_Box) (mercury__string__format__V_67_67));
#line 609 "string.format.m"
                            }
#line 611 "string.format.m"
                            mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "string.format.m"
                            mercury__string__format__V_68_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "string.format.m"
                            {
#line 612 "string.format.m"
                              mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "string.format.m"
                              MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_77));
#line 612 "string.format.m"
                              MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_68_68));
#line 612 "string.format.m"
                            }
#line 610 "string.format.m"
                          }
#line 603 "string.format.m"
                      }
#line 600 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 600 "string.format.m"
                  }
#line 558 "string.format.m"
                else
#line 558 "string.format.m"
                  if ((mercury__string__format__SpecChar_34 == (MR_Char) 99))
#line 674 "string.format.m"
                    {
#line 674 "string.format.m"
                      if ((mercury__string__format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 675 "string.format.m"
                        {
#line 675 "string.format.m"
                          MR_Word mercury__string__format__V_55_55;
#line 675 "string.format.m"
                          MR_Word mercury__string__format__Error_108;

#line 676 "string.format.m"
                          {
#line 676 "string.format.m"
                            mercury__string__format__Error_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 676 "string.format.m"
                            MR_hl_field(MR_mktag(3), mercury__string__format__Error_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 676 "string.format.m"
                            MR_hl_field(MR_mktag(3), mercury__string__format__Error_108, 1) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 676 "string.format.m"
                            MR_hl_field(MR_mktag(3), mercury__string__format__Error_108, 2) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 676 "string.format.m"
                          }
#line 677 "string.format.m"
                          mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 678 "string.format.m"
                          mercury__string__format__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 678 "string.format.m"
                          {
#line 678 "string.format.m"
                            mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "string.format.m"
                            MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_108));
#line 678 "string.format.m"
                            MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_55_55));
#line 678 "string.format.m"
                          }
#line 678 "string.format.m"
                          mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_3;
#line 675 "string.format.m"
                        }
#line 674 "string.format.m"
                      else
#line 663 "string.format.m"
                        {
#line 663 "string.format.m"
                          MR_Word mercury__string__format__SpecPolyType_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 668 "string.format.m"
                          MR_Char mercury__string__format__Char_43;

#line 663 "string.format.m"
                          mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 664 "string.format.m"
                          mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__SpecPolyType_106)) == (MR_mktag((MR_Integer) 3)));
#line 664 "string.format.m"
                          if (mercury__string__format__succeeded)
#line 664 "string.format.m"
                            {
#line 664 "string.format.m"
                              mercury__string__format__Char_43 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__SpecPolyType_106, (MR_Integer) 0)));
#line 666 "string.format.m"
                              {
#line 666 "string.format.m"
                                mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 666 "string.format.m"
                                MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 666 "string.format.m"
                                MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 1) = ((MR_Box) (mercury__string__format__HeadVar__5_5));
#line 666 "string.format.m"
                                MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 2) = ((MR_Box) (mercury__string__format__HeadVar__6_6));
#line 666 "string.format.m"
                                MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 3) = ((MR_Box) (MR_Word) (mercury__string__format__Char_43));
#line 666 "string.format.m"
                              }
#line 667 "string.format.m"
                              mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 664 "string.format.m"
                            }
#line 664 "string.format.m"
                          else
#line 670 "string.format.m"
                            {
#line 670 "string.format.m"
                              MR_Word mercury__string__format__V_57_57;
#line 670 "string.format.m"
                              MR_Word mercury__string__format__V_58_58;
#line 670 "string.format.m"
                              MR_Word mercury__string__format__Error_104;

#line 670 "string.format.m"
                              {
#line 670 "string.format.m"
                                mercury__string__format__V_57_57 = mercury__string__format__poly_type_to_kind_1_f_0(mercury__string__format__SpecPolyType_106);
                              }
#line 669 "string.format.m"
                              {
#line 669 "string.format.m"
                                mercury__string__format__Error_104 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 669 "string.format.m"
                                MR_hl_field(MR_mktag(2), mercury__string__format__Error_104, 0) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 669 "string.format.m"
                                MR_hl_field(MR_mktag(2), mercury__string__format__Error_104, 1) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 669 "string.format.m"
                                MR_hl_field(MR_mktag(2), mercury__string__format__Error_104, 2) = ((MR_Box) (mercury__string__format__V_57_57));
#line 669 "string.format.m"
                              }
#line 671 "string.format.m"
                              mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 672 "string.format.m"
                              mercury__string__format__V_58_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 672 "string.format.m"
                              {
#line 672 "string.format.m"
                                mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "string.format.m"
                                MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_104));
#line 672 "string.format.m"
                                MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_58_58));
#line 672 "string.format.m"
                              }
#line 670 "string.format.m"
                            }
#line 663 "string.format.m"
                        }
#line 674 "string.format.m"
                      mercury__string__format__succeeded = MR_TRUE;
#line 674 "string.format.m"
                    }
#line 558 "string.format.m"
                  else
#line 558 "string.format.m"
                    if ((mercury__string__format__SpecChar_34 == (MR_Char) 101))
#line 639 "string.format.m"
                      {
#line 653 "string.format.m"
                        if ((mercury__string__format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 654 "string.format.m"
                          {
#line 654 "string.format.m"
                            MR_Word mercury__string__format__V_220_220;
#line 654 "string.format.m"
                            MR_Word mercury__string__format__Error_221;

#line 655 "string.format.m"
                            {
#line 655 "string.format.m"
                              mercury__string__format__Error_221 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 655 "string.format.m"
                              MR_hl_field(MR_mktag(3), mercury__string__format__Error_221, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 655 "string.format.m"
                              MR_hl_field(MR_mktag(3), mercury__string__format__Error_221, 1) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 655 "string.format.m"
                              MR_hl_field(MR_mktag(3), mercury__string__format__Error_221, 2) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 655 "string.format.m"
                            }
#line 656 "string.format.m"
                            mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 657 "string.format.m"
                            mercury__string__format__V_220_220 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 657 "string.format.m"
                            {
#line 657 "string.format.m"
                              mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "string.format.m"
                              MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_221));
#line 657 "string.format.m"
                              MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_220_220));
#line 657 "string.format.m"
                            }
#line 657 "string.format.m"
                            mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_3;
#line 654 "string.format.m"
                          }
#line 653 "string.format.m"
                        else
#line 642 "string.format.m"
                          {
#line 642 "string.format.m"
                            MR_Word mercury__string__format__SpecPolyType_233 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 647 "string.format.m"
                            MR_Float mercury__string__format__Float_225;

#line 642 "string.format.m"
                            mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 643 "string.format.m"
                            mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__SpecPolyType_233)) == (MR_mktag((MR_Integer) 0)));
#line 643 "string.format.m"
                            if (mercury__string__format__succeeded)
#line 643 "string.format.m"
                              {
#line 643 "string.format.m"
                                mercury__string__format__Float_225 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__format__SpecPolyType_233, (MR_Integer) 0)));
#line 644 "string.format.m"
                                {
#line 644 "string.format.m"
                                  mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 644 "string.format.m"
                                  MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 644 "string.format.m"
                                  MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 1) = ((MR_Box) (mercury__string__format__HeadVar__5_5));
#line 644 "string.format.m"
                                  MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 2) = ((MR_Box) (mercury__string__format__HeadVar__6_6));
#line 644 "string.format.m"
                                  MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 3) = ((MR_Box) (mercury__string__format__HeadVar__7_7));
#line 644 "string.format.m"
                                  MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 4) = ((MR_Box) ((MR_Integer) 0));
#line 644 "string.format.m"
                                  MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 5) = MR_box_float(mercury__string__format__Float_225);
#line 644 "string.format.m"
                                }
#line 646 "string.format.m"
                                mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "string.format.m"
                              }
#line 643 "string.format.m"
                            else
#line 649 "string.format.m"
                              {
#line 649 "string.format.m"
                                MR_Word mercury__string__format__V_222_222;
#line 649 "string.format.m"
                                MR_Word mercury__string__format__V_223_223;
#line 649 "string.format.m"
                                MR_Word mercury__string__format__Error_224;

#line 649 "string.format.m"
                                {
#line 649 "string.format.m"
                                  mercury__string__format__V_222_222 = mercury__string__format__poly_type_to_kind_1_f_0(mercury__string__format__SpecPolyType_233);
                                }
#line 648 "string.format.m"
                                {
#line 648 "string.format.m"
                                  mercury__string__format__Error_224 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 648 "string.format.m"
                                  MR_hl_field(MR_mktag(2), mercury__string__format__Error_224, 0) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 648 "string.format.m"
                                  MR_hl_field(MR_mktag(2), mercury__string__format__Error_224, 1) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 648 "string.format.m"
                                  MR_hl_field(MR_mktag(2), mercury__string__format__Error_224, 2) = ((MR_Box) (mercury__string__format__V_222_222));
#line 648 "string.format.m"
                                }
#line 650 "string.format.m"
                                mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 651 "string.format.m"
                                mercury__string__format__V_223_223 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 651 "string.format.m"
                                {
#line 651 "string.format.m"
                                  mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "string.format.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_224));
#line 651 "string.format.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_223_223));
#line 651 "string.format.m"
                                }
#line 649 "string.format.m"
                              }
#line 642 "string.format.m"
                          }
#line 639 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 639 "string.format.m"
                      }
#line 558 "string.format.m"
                    else
#line 558 "string.format.m"
                      if ((mercury__string__format__SpecChar_34 == (MR_Char) 102))
#line 639 "string.format.m"
                        {
#line 653 "string.format.m"
                          if ((mercury__string__format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 654 "string.format.m"
                            {
#line 654 "string.format.m"
                              MR_Word mercury__string__format__V_258_258;
#line 654 "string.format.m"
                              MR_Word mercury__string__format__Error_259;

#line 655 "string.format.m"
                              {
#line 655 "string.format.m"
                                mercury__string__format__Error_259 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 655 "string.format.m"
                                MR_hl_field(MR_mktag(3), mercury__string__format__Error_259, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 655 "string.format.m"
                                MR_hl_field(MR_mktag(3), mercury__string__format__Error_259, 1) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 655 "string.format.m"
                                MR_hl_field(MR_mktag(3), mercury__string__format__Error_259, 2) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 655 "string.format.m"
                              }
#line 656 "string.format.m"
                              mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 657 "string.format.m"
                              mercury__string__format__V_258_258 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 657 "string.format.m"
                              {
#line 657 "string.format.m"
                                mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "string.format.m"
                                MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_259));
#line 657 "string.format.m"
                                MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_258_258));
#line 657 "string.format.m"
                              }
#line 657 "string.format.m"
                              mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_3;
#line 654 "string.format.m"
                            }
#line 653 "string.format.m"
                          else
#line 642 "string.format.m"
                            {
#line 642 "string.format.m"
                              MR_Word mercury__string__format__SpecPolyType_271 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 647 "string.format.m"
                              MR_Float mercury__string__format__Float_263;

#line 642 "string.format.m"
                              mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 643 "string.format.m"
                              mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__SpecPolyType_271)) == (MR_mktag((MR_Integer) 0)));
#line 643 "string.format.m"
                              if (mercury__string__format__succeeded)
#line 643 "string.format.m"
                                {
#line 643 "string.format.m"
                                  mercury__string__format__Float_263 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__format__SpecPolyType_271, (MR_Integer) 0)));
#line 644 "string.format.m"
                                  {
#line 644 "string.format.m"
                                    mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 644 "string.format.m"
                                    MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 644 "string.format.m"
                                    MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 1) = ((MR_Box) (mercury__string__format__HeadVar__5_5));
#line 644 "string.format.m"
                                    MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 2) = ((MR_Box) (mercury__string__format__HeadVar__6_6));
#line 644 "string.format.m"
                                    MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 3) = ((MR_Box) (mercury__string__format__HeadVar__7_7));
#line 644 "string.format.m"
                                    MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 4) = ((MR_Box) ((MR_Integer) 2));
#line 644 "string.format.m"
                                    MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 5) = MR_box_float(mercury__string__format__Float_263);
#line 644 "string.format.m"
                                  }
#line 646 "string.format.m"
                                  mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "string.format.m"
                                }
#line 643 "string.format.m"
                              else
#line 649 "string.format.m"
                                {
#line 649 "string.format.m"
                                  MR_Word mercury__string__format__V_260_260;
#line 649 "string.format.m"
                                  MR_Word mercury__string__format__V_261_261;
#line 649 "string.format.m"
                                  MR_Word mercury__string__format__Error_262;

#line 649 "string.format.m"
                                  {
#line 649 "string.format.m"
                                    mercury__string__format__V_260_260 = mercury__string__format__poly_type_to_kind_1_f_0(mercury__string__format__SpecPolyType_271);
                                  }
#line 648 "string.format.m"
                                  {
#line 648 "string.format.m"
                                    mercury__string__format__Error_262 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 648 "string.format.m"
                                    MR_hl_field(MR_mktag(2), mercury__string__format__Error_262, 0) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 648 "string.format.m"
                                    MR_hl_field(MR_mktag(2), mercury__string__format__Error_262, 1) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 648 "string.format.m"
                                    MR_hl_field(MR_mktag(2), mercury__string__format__Error_262, 2) = ((MR_Box) (mercury__string__format__V_260_260));
#line 648 "string.format.m"
                                  }
#line 650 "string.format.m"
                                  mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 651 "string.format.m"
                                  mercury__string__format__V_261_261 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 651 "string.format.m"
                                  {
#line 651 "string.format.m"
                                    mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "string.format.m"
                                    MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_262));
#line 651 "string.format.m"
                                    MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_261_261));
#line 651 "string.format.m"
                                  }
#line 649 "string.format.m"
                                }
#line 642 "string.format.m"
                            }
#line 639 "string.format.m"
                          mercury__string__format__succeeded = MR_TRUE;
#line 639 "string.format.m"
                        }
#line 558 "string.format.m"
                      else
#line 558 "string.format.m"
                        if ((mercury__string__format__SpecChar_34 == (MR_Char) 103))
#line 639 "string.format.m"
                          {
#line 653 "string.format.m"
                            if ((mercury__string__format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 654 "string.format.m"
                              {
#line 654 "string.format.m"
                                MR_Word mercury__string__format__V_296_296;
#line 654 "string.format.m"
                                MR_Word mercury__string__format__Error_297;

#line 655 "string.format.m"
                                {
#line 655 "string.format.m"
                                  mercury__string__format__Error_297 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 655 "string.format.m"
                                  MR_hl_field(MR_mktag(3), mercury__string__format__Error_297, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 655 "string.format.m"
                                  MR_hl_field(MR_mktag(3), mercury__string__format__Error_297, 1) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 655 "string.format.m"
                                  MR_hl_field(MR_mktag(3), mercury__string__format__Error_297, 2) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 655 "string.format.m"
                                }
#line 656 "string.format.m"
                                mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 657 "string.format.m"
                                mercury__string__format__V_296_296 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 657 "string.format.m"
                                {
#line 657 "string.format.m"
                                  mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "string.format.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_297));
#line 657 "string.format.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_296_296));
#line 657 "string.format.m"
                                }
#line 657 "string.format.m"
                                mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_3;
#line 654 "string.format.m"
                              }
#line 653 "string.format.m"
                            else
#line 642 "string.format.m"
                              {
#line 642 "string.format.m"
                                MR_Word mercury__string__format__SpecPolyType_309 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 647 "string.format.m"
                                MR_Float mercury__string__format__Float_301;

#line 642 "string.format.m"
                                mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 643 "string.format.m"
                                mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__SpecPolyType_309)) == (MR_mktag((MR_Integer) 0)));
#line 643 "string.format.m"
                                if (mercury__string__format__succeeded)
#line 643 "string.format.m"
                                  {
#line 643 "string.format.m"
                                    mercury__string__format__Float_301 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__format__SpecPolyType_309, (MR_Integer) 0)));
#line 644 "string.format.m"
                                    {
#line 644 "string.format.m"
                                      mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 644 "string.format.m"
                                      MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 644 "string.format.m"
                                      MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 1) = ((MR_Box) (mercury__string__format__HeadVar__5_5));
#line 644 "string.format.m"
                                      MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 2) = ((MR_Box) (mercury__string__format__HeadVar__6_6));
#line 644 "string.format.m"
                                      MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 3) = ((MR_Box) (mercury__string__format__HeadVar__7_7));
#line 644 "string.format.m"
                                      MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 4) = ((MR_Box) ((MR_Integer) 4));
#line 644 "string.format.m"
                                      MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 5) = MR_box_float(mercury__string__format__Float_301);
#line 644 "string.format.m"
                                    }
#line 646 "string.format.m"
                                    mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "string.format.m"
                                  }
#line 643 "string.format.m"
                                else
#line 649 "string.format.m"
                                  {
#line 649 "string.format.m"
                                    MR_Word mercury__string__format__V_298_298;
#line 649 "string.format.m"
                                    MR_Word mercury__string__format__V_299_299;
#line 649 "string.format.m"
                                    MR_Word mercury__string__format__Error_300;

#line 649 "string.format.m"
                                    {
#line 649 "string.format.m"
                                      mercury__string__format__V_298_298 = mercury__string__format__poly_type_to_kind_1_f_0(mercury__string__format__SpecPolyType_309);
                                    }
#line 648 "string.format.m"
                                    {
#line 648 "string.format.m"
                                      mercury__string__format__Error_300 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 648 "string.format.m"
                                      MR_hl_field(MR_mktag(2), mercury__string__format__Error_300, 0) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 648 "string.format.m"
                                      MR_hl_field(MR_mktag(2), mercury__string__format__Error_300, 1) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 648 "string.format.m"
                                      MR_hl_field(MR_mktag(2), mercury__string__format__Error_300, 2) = ((MR_Box) (mercury__string__format__V_298_298));
#line 648 "string.format.m"
                                    }
#line 650 "string.format.m"
                                    mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 651 "string.format.m"
                                    mercury__string__format__V_299_299 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 651 "string.format.m"
                                    {
#line 651 "string.format.m"
                                      mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "string.format.m"
                                      MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_300));
#line 651 "string.format.m"
                                      MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_299_299));
#line 651 "string.format.m"
                                    }
#line 649 "string.format.m"
                                  }
#line 642 "string.format.m"
                              }
#line 639 "string.format.m"
                            mercury__string__format__succeeded = MR_TRUE;
#line 639 "string.format.m"
                          }
#line 558 "string.format.m"
                        else
#line 558 "string.format.m"
                          if ((mercury__string__format__SpecChar_34 == (MR_Char) 111))
#line 600 "string.format.m"
                            {
#line 614 "string.format.m"
                              if ((mercury__string__format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "string.format.m"
                                {
#line 615 "string.format.m"
                                  MR_Word mercury__string__format__V_334_334;
#line 615 "string.format.m"
                                  MR_Word mercury__string__format__Error_335;

#line 616 "string.format.m"
                                  {
#line 616 "string.format.m"
                                    mercury__string__format__Error_335 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 616 "string.format.m"
                                    MR_hl_field(MR_mktag(3), mercury__string__format__Error_335, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 616 "string.format.m"
                                    MR_hl_field(MR_mktag(3), mercury__string__format__Error_335, 1) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 616 "string.format.m"
                                    MR_hl_field(MR_mktag(3), mercury__string__format__Error_335, 2) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 616 "string.format.m"
                                  }
#line 617 "string.format.m"
                                  mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "string.format.m"
                                  mercury__string__format__V_334_334 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "string.format.m"
                                  {
#line 618 "string.format.m"
                                    mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "string.format.m"
                                    MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_335));
#line 618 "string.format.m"
                                    MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_334_334));
#line 618 "string.format.m"
                                  }
#line 618 "string.format.m"
                                  mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_3;
#line 615 "string.format.m"
                                }
#line 614 "string.format.m"
                              else
#line 603 "string.format.m"
                                {
#line 603 "string.format.m"
                                  MR_Word mercury__string__format__SpecPolyType_347 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 608 "string.format.m"
                                  MR_Integer mercury__string__format__Int_342;

#line 603 "string.format.m"
                                  mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 604 "string.format.m"
                                  mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__SpecPolyType_347)) == (MR_mktag((MR_Integer) 1)));
#line 604 "string.format.m"
                                  if (mercury__string__format__succeeded)
#line 604 "string.format.m"
                                    {
#line 604 "string.format.m"
                                      mercury__string__format__Int_342 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__SpecPolyType_347, (MR_Integer) 0)));
#line 605 "string.format.m"
                                      {
#line 605 "string.format.m"
                                        mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 605 "string.format.m"
                                        MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 0) = ((MR_Box) (mercury__string__format__HeadVar__5_5));
#line 605 "string.format.m"
                                        MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 1) = ((MR_Box) (mercury__string__format__HeadVar__6_6));
#line 605 "string.format.m"
                                        MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 2) = ((MR_Box) (mercury__string__format__HeadVar__7_7));
#line 605 "string.format.m"
                                        MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 3) = ((MR_Box) ((MR_Integer) 0));
#line 605 "string.format.m"
                                        MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 4) = ((MR_Box) (mercury__string__format__Int_342));
#line 605 "string.format.m"
                                      }
#line 607 "string.format.m"
                                      mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 604 "string.format.m"
                                    }
#line 604 "string.format.m"
                                  else
#line 610 "string.format.m"
                                    {
#line 610 "string.format.m"
                                      MR_Word mercury__string__format__V_336_336;
#line 610 "string.format.m"
                                      MR_Word mercury__string__format__V_337_337;
#line 610 "string.format.m"
                                      MR_Word mercury__string__format__Error_338;

#line 610 "string.format.m"
                                      {
#line 610 "string.format.m"
                                        mercury__string__format__V_336_336 = mercury__string__format__poly_type_to_kind_1_f_0(mercury__string__format__SpecPolyType_347);
                                      }
#line 609 "string.format.m"
                                      {
#line 609 "string.format.m"
                                        mercury__string__format__Error_338 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 609 "string.format.m"
                                        MR_hl_field(MR_mktag(2), mercury__string__format__Error_338, 0) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 609 "string.format.m"
                                        MR_hl_field(MR_mktag(2), mercury__string__format__Error_338, 1) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 609 "string.format.m"
                                        MR_hl_field(MR_mktag(2), mercury__string__format__Error_338, 2) = ((MR_Box) (mercury__string__format__V_336_336));
#line 609 "string.format.m"
                                      }
#line 611 "string.format.m"
                                      mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "string.format.m"
                                      mercury__string__format__V_337_337 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "string.format.m"
                                      {
#line 612 "string.format.m"
                                        mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "string.format.m"
                                        MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_338));
#line 612 "string.format.m"
                                        MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_337_337));
#line 612 "string.format.m"
                                      }
#line 610 "string.format.m"
                                    }
#line 603 "string.format.m"
                                }
#line 600 "string.format.m"
                              mercury__string__format__succeeded = MR_TRUE;
#line 600 "string.format.m"
                            }
#line 558 "string.format.m"
                          else
#line 558 "string.format.m"
                            if ((mercury__string__format__SpecChar_34 == (MR_Char) 112))
#line 600 "string.format.m"
                              {
#line 600 "string.format.m"
                                MR_Word mercury__string__format__STATE_VARIABLE_Flags_63_407;
#line 599 "string.format.m"
                                MR_Word mercury__string__format__V_130_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 599 "string.format.m"
                                MR_Word mercury__string__format__V_131_131 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 599 "string.format.m"
                                MR_Word mercury__string__format__V_132_132 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 599 "string.format.m"
                                MR_Word mercury__string__format__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__5_5, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 599 "string.format.m"
                                MR_Word mercury__string__format__V_129_129 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__HeadVar__5_5, (MR_Integer) 0)))) & (MR_Integer) 1);

#line 599 "string.format.m"
                                {
#line 599 "string.format.m"
                                  mercury__string__format__STATE_VARIABLE_Flags_63_407 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 599 "string.format.m"
                                  MR_hl_field(MR_mktag(0), mercury__string__format__STATE_VARIABLE_Flags_63_407, 0) = ((MR_Box) (((MR_Integer) 1 | ((((mercury__string__format__V_130_130 << (MR_Integer) 1)) | ((((mercury__string__format__V_131_131 << (MR_Integer) 2)) | ((((mercury__string__format__V_132_132 << (MR_Integer) 3)) | ((mercury__string__format__V_133_133 << (MR_Integer) 4)))))))))));
#line 599 "string.format.m"
                                }
#line 614 "string.format.m"
                                if ((mercury__string__format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "string.format.m"
                                  {
#line 615 "string.format.m"
                                    MR_Word mercury__string__format__V_371_371;
#line 615 "string.format.m"
                                    MR_Word mercury__string__format__Error_372;

#line 616 "string.format.m"
                                    {
#line 616 "string.format.m"
                                      mercury__string__format__Error_372 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 616 "string.format.m"
                                      MR_hl_field(MR_mktag(3), mercury__string__format__Error_372, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 616 "string.format.m"
                                      MR_hl_field(MR_mktag(3), mercury__string__format__Error_372, 1) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 616 "string.format.m"
                                      MR_hl_field(MR_mktag(3), mercury__string__format__Error_372, 2) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 616 "string.format.m"
                                    }
#line 617 "string.format.m"
                                    mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "string.format.m"
                                    mercury__string__format__V_371_371 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "string.format.m"
                                    {
#line 618 "string.format.m"
                                      mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "string.format.m"
                                      MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_372));
#line 618 "string.format.m"
                                      MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_371_371));
#line 618 "string.format.m"
                                    }
#line 618 "string.format.m"
                                    mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_3;
#line 615 "string.format.m"
                                  }
#line 614 "string.format.m"
                                else
#line 603 "string.format.m"
                                  {
#line 603 "string.format.m"
                                    MR_Word mercury__string__format__SpecPolyType_384 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 608 "string.format.m"
                                    MR_Integer mercury__string__format__Int_379;

#line 603 "string.format.m"
                                    mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 604 "string.format.m"
                                    mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__SpecPolyType_384)) == (MR_mktag((MR_Integer) 1)));
#line 604 "string.format.m"
                                    if (mercury__string__format__succeeded)
#line 604 "string.format.m"
                                      {
#line 604 "string.format.m"
                                        mercury__string__format__Int_379 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__SpecPolyType_384, (MR_Integer) 0)));
#line 605 "string.format.m"
                                        {
#line 605 "string.format.m"
                                          mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 605 "string.format.m"
                                          MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 0) = ((MR_Box) (mercury__string__format__STATE_VARIABLE_Flags_63_407));
#line 605 "string.format.m"
                                          MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 1) = ((MR_Box) (mercury__string__format__HeadVar__6_6));
#line 605 "string.format.m"
                                          MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 2) = ((MR_Box) (mercury__string__format__HeadVar__7_7));
#line 605 "string.format.m"
                                          MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 3) = ((MR_Box) ((MR_Integer) 4));
#line 605 "string.format.m"
                                          MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 4) = ((MR_Box) (mercury__string__format__Int_379));
#line 605 "string.format.m"
                                        }
#line 607 "string.format.m"
                                        mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 604 "string.format.m"
                                      }
#line 604 "string.format.m"
                                    else
#line 610 "string.format.m"
                                      {
#line 610 "string.format.m"
                                        MR_Word mercury__string__format__V_373_373;
#line 610 "string.format.m"
                                        MR_Word mercury__string__format__V_374_374;
#line 610 "string.format.m"
                                        MR_Word mercury__string__format__Error_375;

#line 610 "string.format.m"
                                        {
#line 610 "string.format.m"
                                          mercury__string__format__V_373_373 = mercury__string__format__poly_type_to_kind_1_f_0(mercury__string__format__SpecPolyType_384);
                                        }
#line 609 "string.format.m"
                                        {
#line 609 "string.format.m"
                                          mercury__string__format__Error_375 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 609 "string.format.m"
                                          MR_hl_field(MR_mktag(2), mercury__string__format__Error_375, 0) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 609 "string.format.m"
                                          MR_hl_field(MR_mktag(2), mercury__string__format__Error_375, 1) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 609 "string.format.m"
                                          MR_hl_field(MR_mktag(2), mercury__string__format__Error_375, 2) = ((MR_Box) (mercury__string__format__V_373_373));
#line 609 "string.format.m"
                                        }
#line 611 "string.format.m"
                                        mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "string.format.m"
                                        mercury__string__format__V_374_374 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "string.format.m"
                                        {
#line 612 "string.format.m"
                                          mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "string.format.m"
                                          MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_375));
#line 612 "string.format.m"
                                          MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_374_374));
#line 612 "string.format.m"
                                        }
#line 610 "string.format.m"
                                      }
#line 603 "string.format.m"
                                  }
#line 600 "string.format.m"
                                mercury__string__format__succeeded = MR_TRUE;
#line 600 "string.format.m"
                              }
#line 558 "string.format.m"
                            else
#line 558 "string.format.m"
                              if ((mercury__string__format__SpecChar_34 == (MR_Char) 115))
#line 695 "string.format.m"
                                {
#line 695 "string.format.m"
                                  if ((mercury__string__format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "string.format.m"
                                    {
#line 696 "string.format.m"
                                      MR_Word mercury__string__format__V_51_51;
#line 696 "string.format.m"
                                      MR_Word mercury__string__format__Error_119;

#line 697 "string.format.m"
                                      {
#line 697 "string.format.m"
                                        mercury__string__format__Error_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 697 "string.format.m"
                                        MR_hl_field(MR_mktag(3), mercury__string__format__Error_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 697 "string.format.m"
                                        MR_hl_field(MR_mktag(3), mercury__string__format__Error_119, 1) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 697 "string.format.m"
                                        MR_hl_field(MR_mktag(3), mercury__string__format__Error_119, 2) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 697 "string.format.m"
                                      }
#line 698 "string.format.m"
                                      mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 699 "string.format.m"
                                      mercury__string__format__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 699 "string.format.m"
                                      {
#line 699 "string.format.m"
                                        mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "string.format.m"
                                        MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_119));
#line 699 "string.format.m"
                                        MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_51_51));
#line 699 "string.format.m"
                                      }
#line 699 "string.format.m"
                                      mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_3;
#line 696 "string.format.m"
                                    }
#line 695 "string.format.m"
                                  else
#line 684 "string.format.m"
                                    {
#line 684 "string.format.m"
                                      MR_Word mercury__string__format__SpecPolyType_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 689 "string.format.m"
                                      MR_String mercury__string__format__Str_44;

#line 684 "string.format.m"
                                      mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 685 "string.format.m"
                                      mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__SpecPolyType_117)) == (MR_mktag((MR_Integer) 2)));
#line 685 "string.format.m"
                                      if (mercury__string__format__succeeded)
#line 685 "string.format.m"
                                        {
#line 685 "string.format.m"
                                          mercury__string__format__Str_44 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__format__SpecPolyType_117, (MR_Integer) 0)));
#line 686 "string.format.m"
                                          {
#line 686 "string.format.m"
                                            mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 686 "string.format.m"
                                            MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 686 "string.format.m"
                                            MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 1) = ((MR_Box) (mercury__string__format__HeadVar__5_5));
#line 686 "string.format.m"
                                            MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 2) = ((MR_Box) (mercury__string__format__HeadVar__6_6));
#line 686 "string.format.m"
                                            MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 3) = ((MR_Box) (mercury__string__format__HeadVar__7_7));
#line 686 "string.format.m"
                                            MR_hl_field(MR_mktag(3), mercury__string__format__SpecPrime_35, 4) = ((MR_Box) (mercury__string__format__Str_44));
#line 686 "string.format.m"
                                          }
#line 688 "string.format.m"
                                          mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 685 "string.format.m"
                                        }
#line 685 "string.format.m"
                                      else
#line 691 "string.format.m"
                                        {
#line 691 "string.format.m"
                                          MR_Word mercury__string__format__V_53_53;
#line 691 "string.format.m"
                                          MR_Word mercury__string__format__V_54_54;
#line 691 "string.format.m"
                                          MR_Word mercury__string__format__Error_115;

#line 691 "string.format.m"
                                          {
#line 691 "string.format.m"
                                            mercury__string__format__V_53_53 = mercury__string__format__poly_type_to_kind_1_f_0(mercury__string__format__SpecPolyType_117);
                                          }
#line 690 "string.format.m"
                                          {
#line 690 "string.format.m"
                                            mercury__string__format__Error_115 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 690 "string.format.m"
                                            MR_hl_field(MR_mktag(2), mercury__string__format__Error_115, 0) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 690 "string.format.m"
                                            MR_hl_field(MR_mktag(2), mercury__string__format__Error_115, 1) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 690 "string.format.m"
                                            MR_hl_field(MR_mktag(2), mercury__string__format__Error_115, 2) = ((MR_Box) (mercury__string__format__V_53_53));
#line 690 "string.format.m"
                                          }
#line 692 "string.format.m"
                                          mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 693 "string.format.m"
                                          mercury__string__format__V_54_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 693 "string.format.m"
                                          {
#line 693 "string.format.m"
                                            mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "string.format.m"
                                            MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_115));
#line 693 "string.format.m"
                                            MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_54_54));
#line 693 "string.format.m"
                                          }
#line 691 "string.format.m"
                                        }
#line 684 "string.format.m"
                                    }
#line 695 "string.format.m"
                                  mercury__string__format__succeeded = MR_TRUE;
#line 695 "string.format.m"
                                }
#line 558 "string.format.m"
                              else
#line 558 "string.format.m"
                                if ((mercury__string__format__SpecChar_34 == (MR_Char) 117))
#line 600 "string.format.m"
                                  {
#line 614 "string.format.m"
                                    if ((mercury__string__format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "string.format.m"
                                      {
#line 615 "string.format.m"
                                        MR_Word mercury__string__format__V_408_408;
#line 615 "string.format.m"
                                        MR_Word mercury__string__format__Error_409;

#line 616 "string.format.m"
                                        {
#line 616 "string.format.m"
                                          mercury__string__format__Error_409 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 616 "string.format.m"
                                          MR_hl_field(MR_mktag(3), mercury__string__format__Error_409, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 616 "string.format.m"
                                          MR_hl_field(MR_mktag(3), mercury__string__format__Error_409, 1) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 616 "string.format.m"
                                          MR_hl_field(MR_mktag(3), mercury__string__format__Error_409, 2) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 616 "string.format.m"
                                        }
#line 617 "string.format.m"
                                        mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "string.format.m"
                                        mercury__string__format__V_408_408 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "string.format.m"
                                        {
#line 618 "string.format.m"
                                          mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "string.format.m"
                                          MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_409));
#line 618 "string.format.m"
                                          MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_408_408));
#line 618 "string.format.m"
                                        }
#line 618 "string.format.m"
                                        mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_3;
#line 615 "string.format.m"
                                      }
#line 614 "string.format.m"
                                    else
#line 603 "string.format.m"
                                      {
#line 603 "string.format.m"
                                        MR_Word mercury__string__format__SpecPolyType_421 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 608 "string.format.m"
                                        MR_Integer mercury__string__format__Int_416;

#line 603 "string.format.m"
                                        mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 604 "string.format.m"
                                        mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__SpecPolyType_421)) == (MR_mktag((MR_Integer) 1)));
#line 604 "string.format.m"
                                        if (mercury__string__format__succeeded)
#line 604 "string.format.m"
                                          {
#line 604 "string.format.m"
                                            mercury__string__format__Int_416 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__SpecPolyType_421, (MR_Integer) 0)));
#line 605 "string.format.m"
                                            {
#line 605 "string.format.m"
                                              mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 605 "string.format.m"
                                              MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 0) = ((MR_Box) (mercury__string__format__HeadVar__5_5));
#line 605 "string.format.m"
                                              MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 1) = ((MR_Box) (mercury__string__format__HeadVar__6_6));
#line 605 "string.format.m"
                                              MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 2) = ((MR_Box) (mercury__string__format__HeadVar__7_7));
#line 605 "string.format.m"
                                              MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 3) = ((MR_Box) ((MR_Integer) 1));
#line 605 "string.format.m"
                                              MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 4) = ((MR_Box) (mercury__string__format__Int_416));
#line 605 "string.format.m"
                                            }
#line 607 "string.format.m"
                                            mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 604 "string.format.m"
                                          }
#line 604 "string.format.m"
                                        else
#line 610 "string.format.m"
                                          {
#line 610 "string.format.m"
                                            MR_Word mercury__string__format__V_410_410;
#line 610 "string.format.m"
                                            MR_Word mercury__string__format__V_411_411;
#line 610 "string.format.m"
                                            MR_Word mercury__string__format__Error_412;

#line 610 "string.format.m"
                                            {
#line 610 "string.format.m"
                                              mercury__string__format__V_410_410 = mercury__string__format__poly_type_to_kind_1_f_0(mercury__string__format__SpecPolyType_421);
                                            }
#line 609 "string.format.m"
                                            {
#line 609 "string.format.m"
                                              mercury__string__format__Error_412 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 609 "string.format.m"
                                              MR_hl_field(MR_mktag(2), mercury__string__format__Error_412, 0) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 609 "string.format.m"
                                              MR_hl_field(MR_mktag(2), mercury__string__format__Error_412, 1) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 609 "string.format.m"
                                              MR_hl_field(MR_mktag(2), mercury__string__format__Error_412, 2) = ((MR_Box) (mercury__string__format__V_410_410));
#line 609 "string.format.m"
                                            }
#line 611 "string.format.m"
                                            mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "string.format.m"
                                            mercury__string__format__V_411_411 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "string.format.m"
                                            {
#line 612 "string.format.m"
                                              mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "string.format.m"
                                              MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_412));
#line 612 "string.format.m"
                                              MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_411_411));
#line 612 "string.format.m"
                                            }
#line 610 "string.format.m"
                                          }
#line 603 "string.format.m"
                                      }
#line 600 "string.format.m"
                                    mercury__string__format__succeeded = MR_TRUE;
#line 600 "string.format.m"
                                  }
#line 558 "string.format.m"
                                else
#line 558 "string.format.m"
                                  if ((mercury__string__format__SpecChar_34 == (MR_Char) 120))
#line 600 "string.format.m"
                                    {
#line 614 "string.format.m"
                                      if ((mercury__string__format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "string.format.m"
                                        {
#line 615 "string.format.m"
                                          MR_Word mercury__string__format__V_445_445;
#line 615 "string.format.m"
                                          MR_Word mercury__string__format__Error_446;

#line 616 "string.format.m"
                                          {
#line 616 "string.format.m"
                                            mercury__string__format__Error_446 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 616 "string.format.m"
                                            MR_hl_field(MR_mktag(3), mercury__string__format__Error_446, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 616 "string.format.m"
                                            MR_hl_field(MR_mktag(3), mercury__string__format__Error_446, 1) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 616 "string.format.m"
                                            MR_hl_field(MR_mktag(3), mercury__string__format__Error_446, 2) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 616 "string.format.m"
                                          }
#line 617 "string.format.m"
                                          mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "string.format.m"
                                          mercury__string__format__V_445_445 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "string.format.m"
                                          {
#line 618 "string.format.m"
                                            mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "string.format.m"
                                            MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_446));
#line 618 "string.format.m"
                                            MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_445_445));
#line 618 "string.format.m"
                                          }
#line 618 "string.format.m"
                                          mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_3;
#line 615 "string.format.m"
                                        }
#line 614 "string.format.m"
                                      else
#line 603 "string.format.m"
                                        {
#line 603 "string.format.m"
                                          MR_Word mercury__string__format__SpecPolyType_458 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 608 "string.format.m"
                                          MR_Integer mercury__string__format__Int_453;

#line 603 "string.format.m"
                                          mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 604 "string.format.m"
                                          mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__SpecPolyType_458)) == (MR_mktag((MR_Integer) 1)));
#line 604 "string.format.m"
                                          if (mercury__string__format__succeeded)
#line 604 "string.format.m"
                                            {
#line 604 "string.format.m"
                                              mercury__string__format__Int_453 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__SpecPolyType_458, (MR_Integer) 0)));
#line 605 "string.format.m"
                                              {
#line 605 "string.format.m"
                                                mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 605 "string.format.m"
                                                MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 0) = ((MR_Box) (mercury__string__format__HeadVar__5_5));
#line 605 "string.format.m"
                                                MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 1) = ((MR_Box) (mercury__string__format__HeadVar__6_6));
#line 605 "string.format.m"
                                                MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 2) = ((MR_Box) (mercury__string__format__HeadVar__7_7));
#line 605 "string.format.m"
                                                MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 3) = ((MR_Box) ((MR_Integer) 2));
#line 605 "string.format.m"
                                                MR_hl_field(MR_mktag(2), mercury__string__format__SpecPrime_35, 4) = ((MR_Box) (mercury__string__format__Int_453));
#line 605 "string.format.m"
                                              }
#line 607 "string.format.m"
                                              mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 604 "string.format.m"
                                            }
#line 604 "string.format.m"
                                          else
#line 610 "string.format.m"
                                            {
#line 610 "string.format.m"
                                              MR_Word mercury__string__format__V_447_447;
#line 610 "string.format.m"
                                              MR_Word mercury__string__format__V_448_448;
#line 610 "string.format.m"
                                              MR_Word mercury__string__format__Error_449;

#line 610 "string.format.m"
                                              {
#line 610 "string.format.m"
                                                mercury__string__format__V_447_447 = mercury__string__format__poly_type_to_kind_1_f_0(mercury__string__format__SpecPolyType_458);
                                              }
#line 609 "string.format.m"
                                              {
#line 609 "string.format.m"
                                                mercury__string__format__Error_449 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 609 "string.format.m"
                                                MR_hl_field(MR_mktag(2), mercury__string__format__Error_449, 0) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 609 "string.format.m"
                                                MR_hl_field(MR_mktag(2), mercury__string__format__Error_449, 1) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 609 "string.format.m"
                                                MR_hl_field(MR_mktag(2), mercury__string__format__Error_449, 2) = ((MR_Box) (mercury__string__format__V_447_447));
#line 609 "string.format.m"
                                              }
#line 611 "string.format.m"
                                              mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "string.format.m"
                                              mercury__string__format__V_448_448 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "string.format.m"
                                              {
#line 612 "string.format.m"
                                                mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "string.format.m"
                                                MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_449));
#line 612 "string.format.m"
                                                MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_448_448));
#line 612 "string.format.m"
                                              }
#line 610 "string.format.m"
                                            }
#line 603 "string.format.m"
                                        }
#line 600 "string.format.m"
                                      mercury__string__format__succeeded = MR_TRUE;
#line 600 "string.format.m"
                                    }
#line 558 "string.format.m"
                                  else
#line 558 "string.format.m"
                                    if ((((mercury__string__format__SpecChar_34 == (MR_Char) 100)) || ((mercury__string__format__SpecChar_34 == (MR_Char) 105))))
#line 576 "string.format.m"
                                      {
#line 576 "string.format.m"
                                        if ((mercury__string__format__STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 577 "string.format.m"
                                          {
#line 577 "string.format.m"
                                            MR_Word mercury__string__format__V_69_69;
#line 577 "string.format.m"
                                            MR_Word mercury__string__format__Error_76;

#line 578 "string.format.m"
                                            {
#line 578 "string.format.m"
                                              mercury__string__format__Error_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 578 "string.format.m"
                                              MR_hl_field(MR_mktag(3), mercury__string__format__Error_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 578 "string.format.m"
                                              MR_hl_field(MR_mktag(3), mercury__string__format__Error_76, 1) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 578 "string.format.m"
                                              MR_hl_field(MR_mktag(3), mercury__string__format__Error_76, 2) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 578 "string.format.m"
                                            }
#line 579 "string.format.m"
                                            mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 580 "string.format.m"
                                            mercury__string__format__V_69_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 580 "string.format.m"
                                            {
#line 580 "string.format.m"
                                              mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "string.format.m"
                                              MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_76));
#line 580 "string.format.m"
                                              MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_69_69));
#line 580 "string.format.m"
                                            }
#line 580 "string.format.m"
                                            mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_3;
#line 577 "string.format.m"
                                          }
#line 576 "string.format.m"
                                        else
#line 564 "string.format.m"
                                          {
#line 564 "string.format.m"
                                            MR_Word mercury__string__format__SpecPolyType_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
#line 570 "string.format.m"
                                            MR_Integer mercury__string__format__Int_38;

#line 564 "string.format.m"
                                            mercury__string__format__STATE_VARIABLE_PolyTypes_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
#line 565 "string.format.m"
                                            mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__SpecPolyType_37)) == (MR_mktag((MR_Integer) 1)));
#line 565 "string.format.m"
                                            if (mercury__string__format__succeeded)
#line 565 "string.format.m"
                                              {
#line 565 "string.format.m"
                                                mercury__string__format__Int_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__SpecPolyType_37, (MR_Integer) 0)));
#line 567 "string.format.m"
                                                {
#line 567 "string.format.m"
                                                  mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 567 "string.format.m"
                                                  MR_hl_field(MR_mktag(1), mercury__string__format__SpecPrime_35, 0) = ((MR_Box) (mercury__string__format__HeadVar__5_5));
#line 567 "string.format.m"
                                                  MR_hl_field(MR_mktag(1), mercury__string__format__SpecPrime_35, 1) = ((MR_Box) (mercury__string__format__HeadVar__6_6));
#line 567 "string.format.m"
                                                  MR_hl_field(MR_mktag(1), mercury__string__format__SpecPrime_35, 2) = ((MR_Box) (mercury__string__format__HeadVar__7_7));
#line 567 "string.format.m"
                                                  MR_hl_field(MR_mktag(1), mercury__string__format__SpecPrime_35, 3) = ((MR_Box) (mercury__string__format__Int_38));
#line 567 "string.format.m"
                                                }
#line 569 "string.format.m"
                                                mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 565 "string.format.m"
                                              }
#line 565 "string.format.m"
                                            else
#line 572 "string.format.m"
                                              {
#line 572 "string.format.m"
                                                MR_Word mercury__string__format__Error_39;
#line 572 "string.format.m"
                                                MR_Word mercury__string__format__V_71_71;
#line 572 "string.format.m"
                                                MR_Word mercury__string__format__V_72_72;

#line 572 "string.format.m"
                                                {
#line 572 "string.format.m"
                                                  mercury__string__format__V_71_71 = mercury__string__format__poly_type_to_kind_1_f_0(mercury__string__format__SpecPolyType_37);
                                                }
#line 571 "string.format.m"
                                                {
#line 571 "string.format.m"
                                                  mercury__string__format__Error_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 571 "string.format.m"
                                                  MR_hl_field(MR_mktag(2), mercury__string__format__Error_39, 0) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 571 "string.format.m"
                                                  MR_hl_field(MR_mktag(2), mercury__string__format__Error_39, 1) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 571 "string.format.m"
                                                  MR_hl_field(MR_mktag(2), mercury__string__format__Error_39, 2) = ((MR_Box) (mercury__string__format__V_71_71));
#line 571 "string.format.m"
                                                }
#line 573 "string.format.m"
                                                mercury__string__format__SpecPrime_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 574 "string.format.m"
                                                mercury__string__format__V_72_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 574 "string.format.m"
                                                {
#line 574 "string.format.m"
                                                  mercury__string__format__ErrorsPrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "string.format.m"
                                                  MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 0) = ((MR_Box) (mercury__string__format__Error_39));
#line 574 "string.format.m"
                                                  MR_hl_field(MR_mktag(1), mercury__string__format__ErrorsPrime_36, 1) = ((MR_Box) (mercury__string__format__V_72_72));
#line 574 "string.format.m"
                                                }
#line 572 "string.format.m"
                                              }
#line 564 "string.format.m"
                                          }
#line 576 "string.format.m"
                                        mercury__string__format__succeeded = MR_TRUE;
#line 576 "string.format.m"
                                      }
#line 558 "string.format.m"
                                    else
#line 558 "string.format.m"
                                      mercury__string__format__succeeded = MR_FALSE;
#line 705 "string.format.m"
        if (mercury__string__format__succeeded)
#line 703 "string.format.m"
          {
#line 703 "string.format.m"
            *mercury__string__format__STATE_VARIABLE_PolyTypes_4 = mercury__string__format__STATE_VARIABLE_PolyTypes_70_70;
#line 703 "string.format.m"
            *mercury__string__format__Spec_9 = mercury__string__format__SpecPrime_35;
#line 704 "string.format.m"
            *mercury__string__format__Errors_10 = mercury__string__format__ErrorsPrime_36;
#line 703 "string.format.m"
          }
#line 705 "string.format.m"
        else
#line 706 "string.format.m"
          {
#line 706 "string.format.m"
            MR_Word mercury__string__format__V_73_73;
#line 706 "string.format.m"
            MR_Word mercury__string__format__Error_127;

#line 706 "string.format.m"
            {
#line 706 "string.format.m"
              mercury__string__format__Error_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__Error_127, 0) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 706 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__Error_127, 1) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_34));
#line 706 "string.format.m"
            }
#line 707 "string.format.m"
            *mercury__string__format__Spec_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 708 "string.format.m"
            mercury__string__format__V_73_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 708 "string.format.m"
            {
#line 708 "string.format.m"
              MR_Word base;
#line 708 "string.format.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "string.format.m"
              *mercury__string__format__Errors_10 = base;
#line 708 "string.format.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__Error_127));
#line 708 "string.format.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__V_73_73));
#line 708 "string.format.m"
            }
#line 708 "string.format.m"
            *mercury__string__format__STATE_VARIABLE_PolyTypes_4 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_3;
#line 706 "string.format.m"
          }
#line 551 "string.format.m"
      }
#line 546 "string.format.m"
  }
#line 540 "string.format.m"
}

#line 510 "string.format.m"
static void MR_CALL 
mercury__string__format__get_number_prefix_4_p_0(
#line 510 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_Chars_0_11,
#line 510 "string.format.m"
  MR_Word * mercury__string__format__STATE_VARIABLE_Chars_12,
#line 510 "string.format.m"
  MR_Integer mercury__string__format__N0_6,
#line 510 "string.format.m"
  MR_Integer * mercury__string__format__N_7)
#line 510 "string.format.m"
{
#line 520 "string.format.m"
  while (MR_TRUE)
#line 520 "string.format.m"
    {
#line 520 "string.format.m"
      /* tailcall optimized into a loop */
#line 520 "string.format.m"
      {
#line 520 "string.format.m"
        MR_bool mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__STATE_VARIABLE_Chars_0_11)) == (MR_mktag((MR_Integer) 1)));
#line 520 "string.format.m"
        MR_Integer mercury__string__format__CharValue_9;
#line 520 "string.format.m"
        MR_Word mercury__string__format__STATE_VARIABLE_Chars_13_13;
#line 515 "string.format.m"
        MR_Char mercury__string__format__Char_8;

#line 515 "string.format.m"
        if (mercury__string__format__succeeded)
#line 515 "string.format.m"
          {
#line 515 "string.format.m"
            mercury__string__format__Char_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_Chars_0_11, (MR_Integer) 0)));
#line 515 "string.format.m"
            mercury__string__format__STATE_VARIABLE_Chars_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_Chars_0_11, (MR_Integer) 1)));
#line 516 "string.format.m"
            {
#line 516 "string.format.m"
              mercury__string__format__succeeded = mercury__char__decimal_digit_to_int_2_p_0(mercury__string__format__Char_8, &mercury__string__format__CharValue_9);
            }
#line 515 "string.format.m"
          }
#line 520 "string.format.m"
        if (mercury__string__format__succeeded)
#line 518 "string.format.m"
          {
#line 518 "string.format.m"
            MR_Integer mercury__string__format__N1_10;
#line 518 "string.format.m"
            MR_Integer mercury__string__format__V_14_14 = (mercury__string__format__N0_6 * (MR_Integer) 10);

#line 518 "string.format.m"
            mercury__string__format__N1_10 = (mercury__string__format__V_14_14 + mercury__string__format__CharValue_9);
#line 519 "string.format.m"
            /* direct tailcall eliminated */
#line 519 "string.format.m"
            {
#line 519 "string.format.m"
              MR_Word mercury__string__format__STATE_VARIABLE_Chars_0__tmp_copy_11 = mercury__string__format__STATE_VARIABLE_Chars_13_13;
#line 519 "string.format.m"
              MR_Integer mercury__string__format__N0__tmp_copy_6 = mercury__string__format__N1_10;

#line 519 "string.format.m"
              mercury__string__format__N0_6 = mercury__string__format__N0__tmp_copy_6;
#line 519 "string.format.m"
              mercury__string__format__STATE_VARIABLE_Chars_0_11 = mercury__string__format__STATE_VARIABLE_Chars_0__tmp_copy_11;
#line 519 "string.format.m"
            }
#line 519 "string.format.m"
            continue;
#line 518 "string.format.m"
          }
#line 520 "string.format.m"
        else
#line 521 "string.format.m"
          {
#line 521 "string.format.m"
            *mercury__string__format__N_7 = mercury__string__format__N0_6;
#line 521 "string.format.m"
            *mercury__string__format__STATE_VARIABLE_Chars_12 = mercury__string__format__STATE_VARIABLE_Chars_0_11;
#line 521 "string.format.m"
          }
#line 520 "string.format.m"
      }
#line 520 "string.format.m"
      break;
#line 520 "string.format.m"
    }
#line 510 "string.format.m"
}

#line 468 "string.format.m"
static void MR_CALL 
mercury__string__format__get_optional_prec_7_p_0(
#line 468 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_Chars_0_16,
#line 468 "string.format.m"
  MR_Word * mercury__string__format__STATE_VARIABLE_Chars_17,
#line 468 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_PolyTypes_0_18,
#line 468 "string.format.m"
  MR_Word * mercury__string__format__STATE_VARIABLE_PolyTypes_19,
#line 468 "string.format.m"
  MR_Integer mercury__string__format__SpecNum_10,
#line 468 "string.format.m"
  MR_Word * mercury__string__format__MaybePrec_11,
#line 468 "string.format.m"
  MR_Word * mercury__string__format__Errors_12)
#line 468 "string.format.m"
{
#line 496 "string.format.m"
  {
#line 496 "string.format.m"
    MR_bool mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__STATE_VARIABLE_Chars_0_16)) == (MR_mktag((MR_Integer) 1)));
#line 496 "string.format.m"
    MR_Word mercury__string__format__STATE_VARIABLE_Chars_20_20;
#line 473 "string.format.m"
    MR_Char mercury__string__format__V_21_21;

#line 473 "string.format.m"
    if (mercury__string__format__succeeded)
#line 473 "string.format.m"
      {
#line 473 "string.format.m"
        mercury__string__format__V_21_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_Chars_0_16, (MR_Integer) 0)));
#line 473 "string.format.m"
        mercury__string__format__STATE_VARIABLE_Chars_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_Chars_0_16, (MR_Integer) 1)));
#line 473 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__V_21_21 == (MR_Char) 46);
#line 473 "string.format.m"
      }
#line 496 "string.format.m"
    if (mercury__string__format__succeeded)
#line 490 "string.format.m"
      {
#line 490 "string.format.m"
        MR_Word mercury__string__format__STATE_VARIABLE_Chars_22_22;
#line 474 "string.format.m"
        MR_Char mercury__string__format__V_23_23;

#line 474 "string.format.m"
        mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__STATE_VARIABLE_Chars_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 474 "string.format.m"
        if (mercury__string__format__succeeded)
#line 474 "string.format.m"
          {
#line 474 "string.format.m"
            mercury__string__format__V_23_23 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_Chars_20_20, (MR_Integer) 0)));
#line 474 "string.format.m"
            mercury__string__format__STATE_VARIABLE_Chars_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_Chars_20_20, (MR_Integer) 1)));
#line 474 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__V_23_23 == (MR_Char) 42);
#line 474 "string.format.m"
          }
#line 490 "string.format.m"
        if (mercury__string__format__succeeded)
#line 485 "string.format.m"
          {
#line 485 "string.format.m"
            *mercury__string__format__STATE_VARIABLE_Chars_17 = mercury__string__format__STATE_VARIABLE_Chars_22_22;
#line 485 "string.format.m"
            if ((mercury__string__format__STATE_VARIABLE_PolyTypes_0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "string.format.m"
              {
#line 486 "string.format.m"
                MR_Word mercury__string__format__V_24_24;
#line 486 "string.format.m"
                MR_Word mercury__string__format__V_25_25;

#line 487 "string.format.m"
                *mercury__string__format__MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 488 "string.format.m"
                {
#line 488 "string.format.m"
                  mercury__string__format__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "string.format.m"
                  MR_hl_field(MR_mktag(3), mercury__string__format__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 488 "string.format.m"
                  MR_hl_field(MR_mktag(3), mercury__string__format__V_24_24, 1) = ((MR_Box) (mercury__string__format__SpecNum_10));
#line 488 "string.format.m"
                }
#line 488 "string.format.m"
                mercury__string__format__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 488 "string.format.m"
                {
#line 488 "string.format.m"
                  MR_Word base;
#line 488 "string.format.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "string.format.m"
                  *mercury__string__format__Errors_12 = base;
#line 488 "string.format.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__V_24_24));
#line 488 "string.format.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__V_25_25));
#line 488 "string.format.m"
                }
#line 488 "string.format.m"
                *mercury__string__format__STATE_VARIABLE_PolyTypes_19 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_18;
#line 486 "string.format.m"
              }
#line 485 "string.format.m"
            else
#line 476 "string.format.m"
              {
#line 476 "string.format.m"
                MR_Word mercury__string__format__PolyType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_18, (MR_Integer) 0)));
#line 480 "string.format.m"
                MR_Integer mercury__string__format__PolyPrec_14;

#line 476 "string.format.m"
                *mercury__string__format__STATE_VARIABLE_PolyTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_18, (MR_Integer) 1)));
#line 477 "string.format.m"
                mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__PolyType_13)) == (MR_mktag((MR_Integer) 1)));
#line 477 "string.format.m"
                if (mercury__string__format__succeeded)
#line 477 "string.format.m"
                  {
#line 477 "string.format.m"
                    mercury__string__format__PolyPrec_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__PolyType_13, (MR_Integer) 0)));
#line 478 "string.format.m"
                    {
#line 478 "string.format.m"
                      MR_Word base;
#line 478 "string.format.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 478 "string.format.m"
                      *mercury__string__format__MaybePrec_11 = base;
#line 478 "string.format.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__PolyPrec_14));
#line 478 "string.format.m"
                    }
#line 479 "string.format.m"
                    *mercury__string__format__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 477 "string.format.m"
                  }
#line 477 "string.format.m"
                else
#line 481 "string.format.m"
                  {
#line 481 "string.format.m"
                    MR_Word mercury__string__format__V_27_27;
#line 481 "string.format.m"
                    MR_Word mercury__string__format__V_28_28;
#line 481 "string.format.m"
                    MR_Word mercury__string__format__V_29_29;

#line 481 "string.format.m"
                    *mercury__string__format__MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 301 "string.format.m"
                    if (((MR_tag((MR_Word) mercury__string__format__PolyType_13)) == (MR_mktag((MR_Integer) 3))))
#line 301 "string.format.m"
                      mercury__string__format__V_28_28 = (MR_Integer) 0;
#line 301 "string.format.m"
                    else
#line 301 "string.format.m"
                      if (((MR_tag((MR_Word) mercury__string__format__PolyType_13)) == (MR_mktag((MR_Integer) 0))))
#line 304 "string.format.m"
                        mercury__string__format__V_28_28 = (MR_Integer) 3;
#line 301 "string.format.m"
                      else
#line 301 "string.format.m"
                        if (((MR_tag((MR_Word) mercury__string__format__PolyType_13)) == (MR_mktag((MR_Integer) 1))))
#line 303 "string.format.m"
                          mercury__string__format__V_28_28 = (MR_Integer) 2;
#line 301 "string.format.m"
                        else
#line 302 "string.format.m"
                          mercury__string__format__V_28_28 = (MR_Integer) 1;
#line 482 "string.format.m"
                    {
#line 482 "string.format.m"
                      mercury__string__format__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 482 "string.format.m"
                      MR_hl_field(MR_mktag(3), mercury__string__format__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 482 "string.format.m"
                      MR_hl_field(MR_mktag(3), mercury__string__format__V_27_27, 1) = ((MR_Box) (mercury__string__format__SpecNum_10));
#line 482 "string.format.m"
                      MR_hl_field(MR_mktag(3), mercury__string__format__V_27_27, 2) = ((MR_Box) (mercury__string__format__V_28_28));
#line 482 "string.format.m"
                    }
#line 483 "string.format.m"
                    mercury__string__format__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 483 "string.format.m"
                    {
#line 483 "string.format.m"
                      MR_Word base;
#line 483 "string.format.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "string.format.m"
                      *mercury__string__format__Errors_12 = base;
#line 483 "string.format.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__V_27_27));
#line 483 "string.format.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__V_29_29));
#line 483 "string.format.m"
                    }
#line 481 "string.format.m"
                  }
#line 476 "string.format.m"
              }
#line 485 "string.format.m"
          }
#line 490 "string.format.m"
        else
#line 492 "string.format.m"
          {
#line 492 "string.format.m"
            MR_Integer mercury__string__format__Prec_15;

#line 492 "string.format.m"
            {
#line 492 "string.format.m"
              mercury__string__format__get_number_prefix_4_p_0(mercury__string__format__STATE_VARIABLE_Chars_20_20, mercury__string__format__STATE_VARIABLE_Chars_17, (MR_Integer) 0, &mercury__string__format__Prec_15);
            }
#line 493 "string.format.m"
            {
#line 493 "string.format.m"
              MR_Word base;
#line 493 "string.format.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 493 "string.format.m"
              *mercury__string__format__MaybePrec_11 = base;
#line 493 "string.format.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__Prec_15));
#line 493 "string.format.m"
            }
#line 494 "string.format.m"
            *mercury__string__format__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 494 "string.format.m"
            *mercury__string__format__STATE_VARIABLE_PolyTypes_19 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_18;
#line 492 "string.format.m"
          }
#line 490 "string.format.m"
      }
#line 496 "string.format.m"
    else
#line 497 "string.format.m"
      {
#line 497 "string.format.m"
        *mercury__string__format__MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 498 "string.format.m"
        *mercury__string__format__Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 498 "string.format.m"
        *mercury__string__format__STATE_VARIABLE_PolyTypes_19 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_18;
#line 498 "string.format.m"
        *mercury__string__format__STATE_VARIABLE_Chars_17 = mercury__string__format__STATE_VARIABLE_Chars_0_16;
#line 497 "string.format.m"
      }
#line 496 "string.format.m"
  }
#line 468 "string.format.m"
}

#line 415 "string.format.m"
static void MR_CALL 
mercury__string__format__gather_flag_chars_4_p_0(
#line 415 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_Chars_0_8,
#line 415 "string.format.m"
  MR_Word * mercury__string__format__STATE_VARIABLE_Chars_9,
#line 415 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_Flags_0_10,
#line 415 "string.format.m"
  MR_Word * mercury__string__format__STATE_VARIABLE_Flags_11)
#line 415 "string.format.m"
{
#line 431 "string.format.m"
  while (MR_TRUE)
#line 431 "string.format.m"
    {
#line 431 "string.format.m"
      /* tailcall optimized into a loop */
#line 431 "string.format.m"
      {
#line 431 "string.format.m"
        MR_bool mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__STATE_VARIABLE_Chars_0_8)) == (MR_mktag((MR_Integer) 1)));
#line 431 "string.format.m"
        MR_Word mercury__string__format__STATE_VARIABLE_Chars_12_12;
#line 431 "string.format.m"
        MR_Word mercury__string__format__STATE_VARIABLE_Flags_21_21;
#line 422 "string.format.m"
        MR_Char mercury__string__format__Char_7;
#line 422 "string.format.m"
        MR_Word mercury__string__format__V_50_50;
#line 422 "string.format.m"
        MR_Word mercury__string__format__V_51_51;
#line 422 "string.format.m"
        MR_Word mercury__string__format__V_52_52;
#line 422 "string.format.m"
        MR_Word mercury__string__format__V_53_53;
#line 422 "string.format.m"
        MR_Word mercury__string__format__V_54_54;

#line 422 "string.format.m"
        if (mercury__string__format__succeeded)
#line 422 "string.format.m"
          {
#line 422 "string.format.m"
            mercury__string__format__Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_Chars_0_8, (MR_Integer) 0)));
#line 422 "string.format.m"
            mercury__string__format__STATE_VARIABLE_Chars_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_Chars_0_8, (MR_Integer) 1)));
#line 424 "string.format.m"
            mercury__string__format__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 424 "string.format.m"
            mercury__string__format__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 424 "string.format.m"
            mercury__string__format__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 424 "string.format.m"
            mercury__string__format__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 424 "string.format.m"
            mercury__string__format__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__format__STATE_VARIABLE_Flags_0_10, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 424 "string.format.m"
            if ((mercury__string__format__Char_7 == (MR_Char) 32))
#line 424 "string.format.m"
              {
#line 424 "string.format.m"
                {
#line 424 "string.format.m"
                  mercury__string__format__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 424 "string.format.m"
                  MR_hl_field(MR_mktag(0), mercury__string__format__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) ((mercury__string__format__V_54_54 | (((((MR_Integer) 1 << (MR_Integer) 1)) | ((((mercury__string__format__V_52_52 << (MR_Integer) 2)) | ((((mercury__string__format__V_51_51 << (MR_Integer) 3)) | ((mercury__string__format__V_50_50 << (MR_Integer) 4)))))))))));
#line 424 "string.format.m"
                }
#line 424 "string.format.m"
                mercury__string__format__succeeded = MR_TRUE;
#line 424 "string.format.m"
              }
#line 424 "string.format.m"
            else
#line 424 "string.format.m"
              if ((mercury__string__format__Char_7 == (MR_Char) 35))
#line 423 "string.format.m"
                {
#line 423 "string.format.m"
                  {
#line 423 "string.format.m"
                    mercury__string__format__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 423 "string.format.m"
                    MR_hl_field(MR_mktag(0), mercury__string__format__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) (((MR_Integer) 1 | ((((mercury__string__format__V_53_53 << (MR_Integer) 1)) | ((((mercury__string__format__V_52_52 << (MR_Integer) 2)) | ((((mercury__string__format__V_51_51 << (MR_Integer) 3)) | ((mercury__string__format__V_50_50 << (MR_Integer) 4)))))))))));
#line 423 "string.format.m"
                  }
#line 423 "string.format.m"
                  mercury__string__format__succeeded = MR_TRUE;
#line 423 "string.format.m"
                }
#line 424 "string.format.m"
              else
#line 424 "string.format.m"
                if ((mercury__string__format__Char_7 == (MR_Char) 43))
#line 427 "string.format.m"
                  {
#line 427 "string.format.m"
                    {
#line 427 "string.format.m"
                      mercury__string__format__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 427 "string.format.m"
                      MR_hl_field(MR_mktag(0), mercury__string__format__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) ((mercury__string__format__V_54_54 | ((((mercury__string__format__V_53_53 << (MR_Integer) 1)) | ((((mercury__string__format__V_52_52 << (MR_Integer) 2)) | ((((mercury__string__format__V_51_51 << (MR_Integer) 3)) | (((MR_Integer) 1 << (MR_Integer) 4)))))))))));
#line 427 "string.format.m"
                    }
#line 427 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 427 "string.format.m"
                  }
#line 424 "string.format.m"
                else
#line 424 "string.format.m"
                  if ((mercury__string__format__Char_7 == (MR_Char) 45))
#line 426 "string.format.m"
                    {
#line 426 "string.format.m"
                      {
#line 426 "string.format.m"
                        mercury__string__format__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 426 "string.format.m"
                        MR_hl_field(MR_mktag(0), mercury__string__format__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) ((mercury__string__format__V_54_54 | ((((mercury__string__format__V_53_53 << (MR_Integer) 1)) | ((((mercury__string__format__V_52_52 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | ((mercury__string__format__V_50_50 << (MR_Integer) 4)))))))))));
#line 426 "string.format.m"
                      }
#line 426 "string.format.m"
                      mercury__string__format__succeeded = MR_TRUE;
#line 426 "string.format.m"
                    }
#line 424 "string.format.m"
                  else
#line 424 "string.format.m"
                    if ((mercury__string__format__Char_7 == (MR_Char) 48))
#line 425 "string.format.m"
                      {
#line 425 "string.format.m"
                        {
#line 425 "string.format.m"
                          mercury__string__format__STATE_VARIABLE_Flags_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 425 "string.format.m"
                          MR_hl_field(MR_mktag(0), mercury__string__format__STATE_VARIABLE_Flags_21_21, 0) = ((MR_Box) ((mercury__string__format__V_54_54 | ((((mercury__string__format__V_53_53 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | ((((mercury__string__format__V_51_51 << (MR_Integer) 3)) | ((mercury__string__format__V_50_50 << (MR_Integer) 4)))))))))));
#line 425 "string.format.m"
                        }
#line 425 "string.format.m"
                        mercury__string__format__succeeded = MR_TRUE;
#line 425 "string.format.m"
                      }
#line 424 "string.format.m"
                    else
#line 424 "string.format.m"
                      mercury__string__format__succeeded = MR_FALSE;
#line 422 "string.format.m"
          }
#line 431 "string.format.m"
        if (mercury__string__format__succeeded)
#line 430 "string.format.m"
          {
#line 430 "string.format.m"
            /* direct tailcall eliminated */
#line 430 "string.format.m"
            {
#line 430 "string.format.m"
              MR_Word mercury__string__format__STATE_VARIABLE_Chars_0__tmp_copy_8 = mercury__string__format__STATE_VARIABLE_Chars_12_12;
#line 430 "string.format.m"
              MR_Word mercury__string__format__STATE_VARIABLE_Flags_0__tmp_copy_10 = mercury__string__format__STATE_VARIABLE_Flags_21_21;

#line 430 "string.format.m"
              mercury__string__format__STATE_VARIABLE_Flags_0_10 = mercury__string__format__STATE_VARIABLE_Flags_0__tmp_copy_10;
#line 430 "string.format.m"
              mercury__string__format__STATE_VARIABLE_Chars_0_8 = mercury__string__format__STATE_VARIABLE_Chars_0__tmp_copy_8;
#line 430 "string.format.m"
            }
#line 430 "string.format.m"
            continue;
#line 430 "string.format.m"
          }
#line 431 "string.format.m"
        else
#line 432 "string.format.m"
          {
#line 432 "string.format.m"
            *mercury__string__format__STATE_VARIABLE_Flags_11 = mercury__string__format__STATE_VARIABLE_Flags_0_10;
#line 432 "string.format.m"
            *mercury__string__format__STATE_VARIABLE_Chars_9 = mercury__string__format__STATE_VARIABLE_Chars_0_8;
#line 432 "string.format.m"
          }
#line 431 "string.format.m"
      }
#line 431 "string.format.m"
      break;
#line 431 "string.format.m"
    }
#line 415 "string.format.m"
}

#line 399 "string.format.m"
static void MR_CALL 
mercury__string__format__parse_conversion_specification_7_p_0(
#line 399 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_Chars_0_20,
#line 399 "string.format.m"
  MR_Word * mercury__string__format__STATE_VARIABLE_Chars_21,
#line 399 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_PolyTypes_0_22,
#line 399 "string.format.m"
  MR_Word * mercury__string__format__STATE_VARIABLE_PolyTypes_23,
#line 399 "string.format.m"
  MR_Integer mercury__string__format__SpecNum_10,
#line 399 "string.format.m"
  MR_Word * mercury__string__format__Spec_11,
#line 399 "string.format.m"
  MR_Word * mercury__string__format__Errors_12)
#line 399 "string.format.m"
{
#line 403 "string.format.m"
  {
#line 403 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 403 "string.format.m"
    MR_Word mercury__string__format__TypeCtorInfo_37_37;
#line 403 "string.format.m"
    MR_Word mercury__string__format__Flags0_13 = (MR_Word) &mercury__string__format_scalar_common_5[0];
#line 403 "string.format.m"
    MR_Word mercury__string__format__Flags_14;
#line 403 "string.format.m"
    MR_Word mercury__string__format__MaybeWidth_15;
#line 403 "string.format.m"
    MR_Word mercury__string__format__WidthErrors_16;
#line 403 "string.format.m"
    MR_Word mercury__string__format__MaybePrec_17;
#line 403 "string.format.m"
    MR_Word mercury__string__format__PrecErrors_18;
#line 403 "string.format.m"
    MR_Word mercury__string__format__SpecErrors_19;
#line 403 "string.format.m"
    MR_Word mercury__string__format__STATE_VARIABLE_Chars_29_29;
#line 403 "string.format.m"
    MR_Word mercury__string__format__STATE_VARIABLE_Chars_30_30;
#line 403 "string.format.m"
    MR_Word mercury__string__format__STATE_VARIABLE_PolyTypes_31_31;
#line 403 "string.format.m"
    MR_Word mercury__string__format__STATE_VARIABLE_Chars_32_32;
#line 403 "string.format.m"
    MR_Word mercury__string__format__STATE_VARIABLE_PolyTypes_33_33;
#line 403 "string.format.m"
    MR_Word mercury__string__format__V_36_36;
#line 458 "string.format.m"
    MR_Word mercury__string__format__STATE_VARIABLE_Chars_20_50;
#line 442 "string.format.m"
    MR_Char mercury__string__format__V_51_51;

#line 406 "string.format.m"
    {
#line 406 "string.format.m"
      mercury__string__format__gather_flag_chars_4_p_0(mercury__string__format__STATE_VARIABLE_Chars_0_20, &mercury__string__format__STATE_VARIABLE_Chars_29_29, mercury__string__format__Flags0_13, &mercury__string__format__Flags_14);
    }
#line 442 "string.format.m"
    mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__STATE_VARIABLE_Chars_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 442 "string.format.m"
    if (mercury__string__format__succeeded)
#line 442 "string.format.m"
      {
#line 442 "string.format.m"
        mercury__string__format__V_51_51 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_Chars_29_29, (MR_Integer) 0)));
#line 442 "string.format.m"
        mercury__string__format__STATE_VARIABLE_Chars_20_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_Chars_29_29, (MR_Integer) 1)));
#line 442 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__V_51_51 == (MR_Char) 42);
#line 442 "string.format.m"
      }
#line 458 "string.format.m"
    if (mercury__string__format__succeeded)
#line 453 "string.format.m"
      {
#line 453 "string.format.m"
        mercury__string__format__STATE_VARIABLE_Chars_30_30 = mercury__string__format__STATE_VARIABLE_Chars_20_50;
#line 453 "string.format.m"
        if ((mercury__string__format__STATE_VARIABLE_PolyTypes_0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 454 "string.format.m"
          {
#line 454 "string.format.m"
            MR_Word mercury__string__format__V_52_52;
#line 454 "string.format.m"
            MR_Word mercury__string__format__V_53_53;

#line 455 "string.format.m"
            mercury__string__format__MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 456 "string.format.m"
            {
#line 456 "string.format.m"
              mercury__string__format__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "string.format.m"
              MR_hl_field(MR_mktag(3), mercury__string__format__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 456 "string.format.m"
              MR_hl_field(MR_mktag(3), mercury__string__format__V_52_52, 1) = ((MR_Box) (mercury__string__format__SpecNum_10));
#line 456 "string.format.m"
            }
#line 456 "string.format.m"
            mercury__string__format__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 456 "string.format.m"
            {
#line 456 "string.format.m"
              mercury__string__format__WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__WidthErrors_16, 0) = ((MR_Box) (mercury__string__format__V_52_52));
#line 456 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__WidthErrors_16, 1) = ((MR_Box) (mercury__string__format__V_53_53));
#line 456 "string.format.m"
            }
#line 456 "string.format.m"
            mercury__string__format__STATE_VARIABLE_PolyTypes_31_31 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_22;
#line 454 "string.format.m"
          }
#line 453 "string.format.m"
        else
#line 444 "string.format.m"
          {
#line 444 "string.format.m"
            MR_Word mercury__string__format__PolyType_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_22, (MR_Integer) 0)));
#line 448 "string.format.m"
            MR_Integer mercury__string__format__PolyWidth_48;

#line 444 "string.format.m"
            mercury__string__format__STATE_VARIABLE_PolyTypes_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_PolyTypes_0_22, (MR_Integer) 1)));
#line 445 "string.format.m"
            mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__PolyType_47)) == (MR_mktag((MR_Integer) 1)));
#line 445 "string.format.m"
            if (mercury__string__format__succeeded)
#line 445 "string.format.m"
              {
#line 445 "string.format.m"
                mercury__string__format__PolyWidth_48 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__PolyType_47, (MR_Integer) 0)));
#line 446 "string.format.m"
                {
#line 446 "string.format.m"
                  mercury__string__format__MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 446 "string.format.m"
                  MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_15, 0) = ((MR_Box) (mercury__string__format__PolyWidth_48));
#line 446 "string.format.m"
                }
#line 447 "string.format.m"
                mercury__string__format__WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 445 "string.format.m"
              }
#line 445 "string.format.m"
            else
#line 449 "string.format.m"
              {
#line 449 "string.format.m"
                MR_Word mercury__string__format__V_55_55;
#line 449 "string.format.m"
                MR_Word mercury__string__format__V_56_56;
#line 449 "string.format.m"
                MR_Word mercury__string__format__V_57_57;

#line 449 "string.format.m"
                mercury__string__format__MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 301 "string.format.m"
                if (((MR_tag((MR_Word) mercury__string__format__PolyType_47)) == (MR_mktag((MR_Integer) 3))))
#line 301 "string.format.m"
                  mercury__string__format__V_56_56 = (MR_Integer) 0;
#line 301 "string.format.m"
                else
#line 301 "string.format.m"
                  if (((MR_tag((MR_Word) mercury__string__format__PolyType_47)) == (MR_mktag((MR_Integer) 0))))
#line 304 "string.format.m"
                    mercury__string__format__V_56_56 = (MR_Integer) 3;
#line 301 "string.format.m"
                  else
#line 301 "string.format.m"
                    if (((MR_tag((MR_Word) mercury__string__format__PolyType_47)) == (MR_mktag((MR_Integer) 1))))
#line 303 "string.format.m"
                      mercury__string__format__V_56_56 = (MR_Integer) 2;
#line 301 "string.format.m"
                    else
#line 302 "string.format.m"
                      mercury__string__format__V_56_56 = (MR_Integer) 1;
#line 450 "string.format.m"
                {
#line 450 "string.format.m"
                  mercury__string__format__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 450 "string.format.m"
                  MR_hl_field(MR_mktag(3), mercury__string__format__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 450 "string.format.m"
                  MR_hl_field(MR_mktag(3), mercury__string__format__V_55_55, 1) = ((MR_Box) (mercury__string__format__SpecNum_10));
#line 450 "string.format.m"
                  MR_hl_field(MR_mktag(3), mercury__string__format__V_55_55, 2) = ((MR_Box) (mercury__string__format__V_56_56));
#line 450 "string.format.m"
                }
#line 451 "string.format.m"
                mercury__string__format__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 451 "string.format.m"
                {
#line 451 "string.format.m"
                  mercury__string__format__WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "string.format.m"
                  MR_hl_field(MR_mktag(1), mercury__string__format__WidthErrors_16, 0) = ((MR_Box) (mercury__string__format__V_55_55));
#line 451 "string.format.m"
                  MR_hl_field(MR_mktag(1), mercury__string__format__WidthErrors_16, 1) = ((MR_Box) (mercury__string__format__V_57_57));
#line 451 "string.format.m"
                }
#line 449 "string.format.m"
              }
#line 444 "string.format.m"
          }
#line 453 "string.format.m"
      }
#line 458 "string.format.m"
    else
#line 461 "string.format.m"
      {
#line 461 "string.format.m"
        MR_Integer mercury__string__format__Width_49;
#line 461 "string.format.m"
        MR_Word mercury__string__format__STATE_VARIABLE_Chars_28_58;
#line 504 "string.format.m"
        MR_Char mercury__string__format__Char_68;
#line 504 "string.format.m"
        MR_Integer mercury__string__format__CharValue_69;
#line 504 "string.format.m"
        MR_Word mercury__string__format__STATE_VARIABLE_Chars_10_70;

#line 505 "string.format.m"
        mercury__string__format__succeeded = ((MR_tag((MR_Word) mercury__string__format__STATE_VARIABLE_Chars_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 505 "string.format.m"
        if (mercury__string__format__succeeded)
#line 505 "string.format.m"
          {
#line 505 "string.format.m"
            mercury__string__format__Char_68 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_Chars_29_29, (MR_Integer) 0)));
#line 505 "string.format.m"
            mercury__string__format__STATE_VARIABLE_Chars_10_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__STATE_VARIABLE_Chars_29_29, (MR_Integer) 1)));
#line 506 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__Char_68 == (MR_Char) 48);
#line 506 "string.format.m"
            mercury__string__format__succeeded = !(mercury__string__format__succeeded);
#line 504 "string.format.m"
            if (mercury__string__format__succeeded)
#line 504 "string.format.m"
              {
#line 507 "string.format.m"
                {
#line 507 "string.format.m"
                  mercury__string__format__succeeded = mercury__char__decimal_digit_to_int_2_p_0(mercury__string__format__Char_68, &mercury__string__format__CharValue_69);
                }
#line 504 "string.format.m"
                if (mercury__string__format__succeeded)
#line 504 "string.format.m"
                  {
#line 508 "string.format.m"
                    {
#line 508 "string.format.m"
                      mercury__string__format__get_number_prefix_4_p_0(mercury__string__format__STATE_VARIABLE_Chars_10_70, &mercury__string__format__STATE_VARIABLE_Chars_28_58, mercury__string__format__CharValue_69, &mercury__string__format__Width_49);
                    }
#line 508 "string.format.m"
                    mercury__string__format__succeeded = MR_TRUE;
#line 504 "string.format.m"
                  }
#line 504 "string.format.m"
              }
#line 505 "string.format.m"
          }
#line 461 "string.format.m"
        if (mercury__string__format__succeeded)
#line 459 "string.format.m"
          {
#line 459 "string.format.m"
            mercury__string__format__STATE_VARIABLE_Chars_30_30 = mercury__string__format__STATE_VARIABLE_Chars_28_58;
#line 459 "string.format.m"
            {
#line 459 "string.format.m"
              mercury__string__format__MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 459 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__MaybeWidth_15, 0) = ((MR_Box) (mercury__string__format__Width_49));
#line 459 "string.format.m"
            }
#line 460 "string.format.m"
            mercury__string__format__WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 459 "string.format.m"
          }
#line 461 "string.format.m"
        else
#line 462 "string.format.m"
          {
#line 462 "string.format.m"
            mercury__string__format__MaybeWidth_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 463 "string.format.m"
            mercury__string__format__WidthErrors_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 463 "string.format.m"
            mercury__string__format__STATE_VARIABLE_Chars_30_30 = mercury__string__format__STATE_VARIABLE_Chars_29_29;
#line 462 "string.format.m"
          }
#line 463 "string.format.m"
        mercury__string__format__STATE_VARIABLE_PolyTypes_31_31 = mercury__string__format__STATE_VARIABLE_PolyTypes_0_22;
#line 461 "string.format.m"
      }
#line 408 "string.format.m"
    {
#line 408 "string.format.m"
      mercury__string__format__get_optional_prec_7_p_0(mercury__string__format__STATE_VARIABLE_Chars_30_30, &mercury__string__format__STATE_VARIABLE_Chars_32_32, mercury__string__format__STATE_VARIABLE_PolyTypes_31_31, &mercury__string__format__STATE_VARIABLE_PolyTypes_33_33, mercury__string__format__SpecNum_10, &mercury__string__format__MaybePrec_17, &mercury__string__format__PrecErrors_18);
    }
#line 409 "string.format.m"
    {
#line 409 "string.format.m"
      mercury__string__format__get_first_spec_10_p_0(mercury__string__format__STATE_VARIABLE_Chars_32_32, mercury__string__format__STATE_VARIABLE_Chars_21, mercury__string__format__STATE_VARIABLE_PolyTypes_33_33, mercury__string__format__STATE_VARIABLE_PolyTypes_23, mercury__string__format__Flags_14, mercury__string__format__MaybeWidth_15, mercury__string__format__MaybePrec_17, mercury__string__format__SpecNum_10, mercury__string__format__Spec_11, &mercury__string__format__SpecErrors_19);
    }
#line 19655 "string.format.c"
    mercury__string__format__TypeCtorInfo_37_37 = (MR_Word) &mercury__string__format__string__format__type_ctor_info_format_str_error_0;
#line 46 "list.opt"
    {
#line 46 "list.opt"
      mercury__list__append_3_p_1(mercury__string__format__TypeCtorInfo_37_37, mercury__string__format__PrecErrors_18, mercury__string__format__SpecErrors_19, &mercury__string__format__V_36_36);
    }
#line 46 "list.opt"
    {
#line 46 "list.opt"
      mercury__list__append_3_p_1(mercury__string__format__TypeCtorInfo_37_37, mercury__string__format__WidthErrors_16, mercury__string__format__V_36_36, mercury__string__format__Errors_12);
#line 46 "list.opt"
      return;
    }
#line 403 "string.format.m"
  }
#line 399 "string.format.m"
}

#line 373 "string.format.m"
static void MR_CALL 
mercury__string__format__gather_non_percent_chars_3_p_0(
#line 373 "string.format.m"
  MR_Word mercury__string__format__Chars_4,
#line 373 "string.format.m"
  MR_Word * mercury__string__format__NonConversionSpecChars_5,
#line 373 "string.format.m"
  MR_Word * mercury__string__format__GatherEndedBy_6)
#line 373 "string.format.m"
{
#line 378 "string.format.m"
  {
#line 378 "string.format.m"
    MR_bool mercury__string__format__succeeded;

#line 378 "string.format.m"
    if ((mercury__string__format__Chars_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 389 "string.format.m"
      {
#line 390 "string.format.m"
        *mercury__string__format__NonConversionSpecChars_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 391 "string.format.m"
        *mercury__string__format__GatherEndedBy_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 389 "string.format.m"
      }
#line 378 "string.format.m"
    else
#line 378 "string.format.m"
      {
#line 378 "string.format.m"
        MR_Char mercury__string__format__HeadChar_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__Chars_4, (MR_Integer) 0)));
#line 378 "string.format.m"
        MR_Word mercury__string__format__TailChars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__Chars_4, (MR_Integer) 1)));

#line 379 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__HeadChar_7 == (MR_Char) 37);
#line 383 "string.format.m"
        if (mercury__string__format__succeeded)
#line 380 "string.format.m"
          {
#line 380 "string.format.m"
            *mercury__string__format__NonConversionSpecChars_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 382 "string.format.m"
            {
#line 382 "string.format.m"
              MR_Word base;
#line 382 "string.format.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 382 "string.format.m"
              *mercury__string__format__GatherEndedBy_6 = base;
#line 382 "string.format.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__TailChars_8));
#line 382 "string.format.m"
            }
#line 380 "string.format.m"
          }
#line 383 "string.format.m"
        else
#line 385 "string.format.m"
          {
#line 385 "string.format.m"
            MR_Word mercury__string__format__TailNonConversionSpecChars_9;

#line 384 "string.format.m"
            {
#line 384 "string.format.m"
              mercury__string__format__gather_non_percent_chars_3_p_0(mercury__string__format__TailChars_8, &mercury__string__format__TailNonConversionSpecChars_9, mercury__string__format__GatherEndedBy_6);
            }
#line 386 "string.format.m"
            {
#line 386 "string.format.m"
              MR_Word base;
#line 386 "string.format.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "string.format.m"
              *mercury__string__format__NonConversionSpecChars_5 = base;
#line 386 "string.format.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__format__HeadChar_7));
#line 386 "string.format.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__TailNonConversionSpecChars_9));
#line 386 "string.format.m"
            }
#line 385 "string.format.m"
          }
#line 378 "string.format.m"
      }
#line 378 "string.format.m"
  }
#line 373 "string.format.m"
}

#line 321 "string.format.m"
static void MR_CALL 
mercury__string__format__format_string_to_components_5_p_0(
#line 321 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_Chars_0_28,
#line 321 "string.format.m"
  MR_Word mercury__string__format__STATE_VARIABLE_PolyTypes_0_29,
#line 321 "string.format.m"
  MR_Integer mercury__string__format__SpecNum_8,
#line 321 "string.format.m"
  MR_Word * mercury__string__format__Components_9,
#line 321 "string.format.m"
  MR_Word * mercury__string__format__Errors_10)
#line 321 "string.format.m"
{
#line 326 "string.format.m"
  {
#line 326 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 326 "string.format.m"
    MR_Word mercury__string__format__NonConversionSpecChars_11;
#line 326 "string.format.m"
    MR_Word mercury__string__format__GatherEndedBy_12;
#line 326 "string.format.m"
    MR_Word mercury__string__format__Components0_13;

#line 327 "string.format.m"
    {
#line 327 "string.format.m"
      mercury__string__format__gather_non_percent_chars_3_p_0(mercury__string__format__STATE_VARIABLE_Chars_0_28, &mercury__string__format__NonConversionSpecChars_11, &mercury__string__format__GatherEndedBy_12);
    }
#line 339 "string.format.m"
    if ((mercury__string__format__GatherEndedBy_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 329 "string.format.m"
      {
#line 330 "string.format.m"
        mercury__string__format__Components0_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 334 "string.format.m"
        if ((mercury__string__format__STATE_VARIABLE_PolyTypes_0_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "string.format.m"
          *mercury__string__format__Errors_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 334 "string.format.m"
        else
#line 335 "string.format.m"
          {
#line 335 "string.format.m"
            MR_Word mercury__string__format__TypeCtorInfo_39_39 = (MR_Word) &mercury__string__string__type_ctor_info_poly_type_0;
#line 335 "string.format.m"
            MR_Word mercury__string__format__Error_16;
#line 335 "string.format.m"
            MR_Integer mercury__string__format__V_35_35;
#line 335 "string.format.m"
            MR_Word mercury__string__format__V_36_36;

#line 78 "list.opt"
            {
#line 78 "list.opt"
              mercury__list__length_2_3_p_0(mercury__string__format__TypeCtorInfo_39_39, mercury__string__format__STATE_VARIABLE_PolyTypes_0_29, (MR_Integer) 0, &mercury__string__format__V_35_35);
            }
#line 336 "string.format.m"
            {
#line 336 "string.format.m"
              mercury__string__format__Error_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 336 "string.format.m"
              MR_hl_field(MR_mktag(3), mercury__string__format__Error_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 336 "string.format.m"
              MR_hl_field(MR_mktag(3), mercury__string__format__Error_16, 1) = ((MR_Box) (mercury__string__format__SpecNum_8));
#line 336 "string.format.m"
              MR_hl_field(MR_mktag(3), mercury__string__format__Error_16, 2) = ((MR_Box) (mercury__string__format__V_35_35));
#line 336 "string.format.m"
            }
#line 337 "string.format.m"
            mercury__string__format__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 337 "string.format.m"
            {
#line 337 "string.format.m"
              MR_Word base;
#line 337 "string.format.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "string.format.m"
              *mercury__string__format__Errors_10 = base;
#line 337 "string.format.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__Error_16));
#line 337 "string.format.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__V_36_36));
#line 337 "string.format.m"
            }
#line 335 "string.format.m"
          }
#line 329 "string.format.m"
      }
#line 339 "string.format.m"
    else
#line 340 "string.format.m"
      {
#line 340 "string.format.m"
        MR_Word mercury__string__format__Spec_17;
#line 340 "string.format.m"
        MR_Word mercury__string__format__SpecErrors_18;
#line 340 "string.format.m"
        MR_Word mercury__string__format__ComponentsTail_19;
#line 340 "string.format.m"
        MR_Word mercury__string__format__ErrorsTail_20;
#line 340 "string.format.m"
        MR_Word mercury__string__format__STATE_VARIABLE_Chars_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__GatherEndedBy_12, (MR_Integer) 0)));
#line 340 "string.format.m"
        MR_Integer mercury__string__format__V_33_33;
#line 340 "string.format.m"
        MR_Word mercury__string__format__STATE_VARIABLE_Chars_31_37;
#line 340 "string.format.m"
        MR_Word mercury__string__format__STATE_VARIABLE_PolyTypes_32_38;

#line 341 "string.format.m"
        {
#line 341 "string.format.m"
          mercury__string__format__parse_conversion_specification_7_p_0(mercury__string__format__STATE_VARIABLE_Chars_30_30, &mercury__string__format__STATE_VARIABLE_Chars_31_37, mercury__string__format__STATE_VARIABLE_PolyTypes_0_29, &mercury__string__format__STATE_VARIABLE_PolyTypes_32_38, mercury__string__format__SpecNum_8, &mercury__string__format__Spec_17, &mercury__string__format__SpecErrors_18);
        }
#line 343 "string.format.m"
        mercury__string__format__V_33_33 = (mercury__string__format__SpecNum_8 + (MR_Integer) 1);
#line 343 "string.format.m"
        {
#line 343 "string.format.m"
          mercury__string__format__format_string_to_components_5_p_0(mercury__string__format__STATE_VARIABLE_Chars_31_37, mercury__string__format__STATE_VARIABLE_PolyTypes_32_38, mercury__string__format__V_33_33, &mercury__string__format__ComponentsTail_19, &mercury__string__format__ErrorsTail_20);
        }
#line 350 "string.format.m"
        if ((mercury__string__format__SpecErrors_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 346 "string.format.m"
          {
#line 346 "string.format.m"
            MR_Word mercury__string__format__ConvComponent_21;

#line 347 "string.format.m"
            {
#line 347 "string.format.m"
              mercury__string__format__ConvComponent_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 347 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__ConvComponent_21, 0) = ((MR_Box) (mercury__string__format__Spec_17));
#line 347 "string.format.m"
            }
#line 348 "string.format.m"
            {
#line 348 "string.format.m"
              mercury__string__format__Components0_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__Components0_13, 0) = ((MR_Box) (mercury__string__format__ConvComponent_21));
#line 348 "string.format.m"
              MR_hl_field(MR_mktag(1), mercury__string__format__Components0_13, 1) = ((MR_Box) (mercury__string__format__ComponentsTail_19));
#line 348 "string.format.m"
            }
#line 349 "string.format.m"
            *mercury__string__format__Errors_10 = mercury__string__format__ErrorsTail_20;
#line 346 "string.format.m"
          }
#line 350 "string.format.m"
        else
#line 351 "string.format.m"
          {
#line 351 "string.format.m"
            MR_Word mercury__string__format__TypeCtorInfo_40_40;

#line 352 "string.format.m"
            mercury__string__format__Components0_13 = mercury__string__format__ComponentsTail_19;
#line 19928 "string.format.c"
            mercury__string__format__TypeCtorInfo_40_40 = (MR_Word) &mercury__string__format__string__format__type_ctor_info_format_str_error_0;
#line 46 "list.opt"
            {
#line 46 "list.opt"
              mercury__list__append_3_p_1(mercury__string__format__TypeCtorInfo_40_40, mercury__string__format__SpecErrors_18, mercury__string__format__ErrorsTail_20, mercury__string__format__Errors_10);
            }
#line 351 "string.format.m"
          }
#line 340 "string.format.m"
      }
#line 359 "string.format.m"
    if ((mercury__string__format__NonConversionSpecChars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 358 "string.format.m"
      *mercury__string__format__Components_9 = mercury__string__format__Components0_13;
#line 359 "string.format.m"
    else
#line 360 "string.format.m"
      {
#line 360 "string.format.m"
        MR_String mercury__string__format__NonConversionSpecString_26;
#line 360 "string.format.m"
        MR_Word mercury__string__format__StringComponent_27;

#line 141 "string.opt"
        {
#line 141 "string.opt"
          mercury__string__from_char_list_2_p_0(mercury__string__format__NonConversionSpecChars_11, &mercury__string__format__NonConversionSpecString_26);
        }
#line 363 "string.format.m"
        {
#line 363 "string.format.m"
          mercury__string__format__StringComponent_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 363 "string.format.m"
          MR_hl_field(MR_mktag(0), mercury__string__format__StringComponent_27, 0) = ((MR_Box) (mercury__string__format__NonConversionSpecString_26));
#line 363 "string.format.m"
        }
#line 364 "string.format.m"
        {
#line 364 "string.format.m"
          MR_Word base;
#line 364 "string.format.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "string.format.m"
          *mercury__string__format__Components_9 = base;
#line 364 "string.format.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__format__StringComponent_27));
#line 364 "string.format.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__format__Components0_13));
#line 364 "string.format.m"
        }
#line 360 "string.format.m"
      }
#line 326 "string.format.m"
  }
#line 321 "string.format.m"
}

#line 299 "string.format.m"
static MR_Word MR_CALL 
mercury__string__format__poly_type_to_kind_1_f_0(
#line 299 "string.format.m"
  MR_Word mercury__string__format__HeadVar__1_1)
#line 299 "string.format.m"
{
#line 301 "string.format.m"
  {
#line 301 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 301 "string.format.m"
    MR_Word mercury__string__format__HeadVar__2_2;

#line 301 "string.format.m"
    if (((MR_tag((MR_Word) mercury__string__format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 301 "string.format.m"
      mercury__string__format__HeadVar__2_2 = (MR_Integer) 0;
#line 301 "string.format.m"
    else
#line 301 "string.format.m"
      if (((MR_tag((MR_Word) mercury__string__format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 304 "string.format.m"
        mercury__string__format__HeadVar__2_2 = (MR_Integer) 3;
#line 301 "string.format.m"
      else
#line 301 "string.format.m"
        if (((MR_tag((MR_Word) mercury__string__format__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 303 "string.format.m"
          mercury__string__format__HeadVar__2_2 = (MR_Integer) 2;
#line 301 "string.format.m"
        else
#line 302 "string.format.m"
          mercury__string__format__HeadVar__2_2 = (MR_Integer) 1;
#line 301 "string.format.m"
    return mercury__string__format__HeadVar__2_2;
#line 301 "string.format.m"
  }
#line 299 "string.format.m"
}

#line 287 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__specifier_char_1_f_0(
#line 287 "string.format.m"
  MR_Char mercury__string__format__SpecChar_3)
#line 287 "string.format.m"
{
#line 289 "string.format.m"
  {
#line 289 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 289 "string.format.m"
    MR_String mercury__string__format__HeadVar__2_2;
#line 289 "string.format.m"
    MR_String mercury__string__format__V_5_5;
#line 289 "string.format.m"
    MR_String mercury__string__format__V_6_6;
#line 289 "string.format.m"
    MR_Word mercury__string__format__V_5_12;
#line 289 "string.format.m"
    MR_Word mercury__string__format__V_6_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 696 "string.opt"
    {
#line 696 "string.opt"
      mercury__string__format__V_5_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "string.opt"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_5_12, 0) = ((MR_Box) (MR_Word) (mercury__string__format__SpecChar_3));
#line 696 "string.opt"
      MR_hl_field(MR_mktag(1), mercury__string__format__V_5_12, 1) = ((MR_Box) (mercury__string__format__V_6_13));
#line 696 "string.opt"
    }
#line 698 "string.opt"
    {
#line 698 "string.opt"
      mercury__string__to_char_list_2_p_1(&mercury__string__format__V_6_6, mercury__string__format__V_5_12);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2(mercury__string__format__V_6_6, (MR_String) "\'", &mercury__string__format__V_5_5);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2((MR_String) "specifier character \140", mercury__string__format__V_5_5, &mercury__string__format__HeadVar__2_2);
    }
#line 289 "string.format.m"
    return mercury__string__format__HeadVar__2_2;
#line 289 "string.format.m"
  }
#line 287 "string.format.m"
}

#line 260 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__nth_1_f_0(
#line 260 "string.format.m"
  MR_Integer mercury__string__format__N_3)
#line 260 "string.format.m"
{
#line 265 "string.format.m"
  {
#line 265 "string.format.m"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__N_3 == (MR_Integer) 1);
#line 265 "string.format.m"
    MR_String mercury__string__format__NStr_4;

#line 265 "string.format.m"
    if (mercury__string__format__succeeded)
#line 264 "string.format.m"
      mercury__string__format__NStr_4 = (MR_String) "first";
#line 265 "string.format.m"
    else
#line 267 "string.format.m"
      {
#line 265 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__N_3 == (MR_Integer) 2);
#line 267 "string.format.m"
        if (mercury__string__format__succeeded)
#line 266 "string.format.m"
          mercury__string__format__NStr_4 = (MR_String) "second";
#line 267 "string.format.m"
        else
#line 269 "string.format.m"
          {
#line 267 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__N_3 == (MR_Integer) 3);
#line 269 "string.format.m"
            if (mercury__string__format__succeeded)
#line 268 "string.format.m"
              mercury__string__format__NStr_4 = (MR_String) "third";
#line 269 "string.format.m"
            else
#line 271 "string.format.m"
              {
#line 269 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__N_3 == (MR_Integer) 4);
#line 271 "string.format.m"
                if (mercury__string__format__succeeded)
#line 270 "string.format.m"
                  mercury__string__format__NStr_4 = (MR_String) "fourth";
#line 271 "string.format.m"
                else
#line 273 "string.format.m"
                  {
#line 271 "string.format.m"
                    mercury__string__format__succeeded = (mercury__string__format__N_3 == (MR_Integer) 5);
#line 273 "string.format.m"
                    if (mercury__string__format__succeeded)
#line 272 "string.format.m"
                      mercury__string__format__NStr_4 = (MR_String) "fifth";
#line 273 "string.format.m"
                    else
#line 275 "string.format.m"
                      {
#line 273 "string.format.m"
                        mercury__string__format__succeeded = (mercury__string__format__N_3 == (MR_Integer) 6);
#line 275 "string.format.m"
                        if (mercury__string__format__succeeded)
#line 274 "string.format.m"
                          mercury__string__format__NStr_4 = (MR_String) "sixth";
#line 275 "string.format.m"
                        else
#line 277 "string.format.m"
                          {
#line 275 "string.format.m"
                            mercury__string__format__succeeded = (mercury__string__format__N_3 == (MR_Integer) 7);
#line 277 "string.format.m"
                            if (mercury__string__format__succeeded)
#line 276 "string.format.m"
                              mercury__string__format__NStr_4 = (MR_String) "seventh";
#line 277 "string.format.m"
                            else
#line 279 "string.format.m"
                              {
#line 277 "string.format.m"
                                mercury__string__format__succeeded = (mercury__string__format__N_3 == (MR_Integer) 8);
#line 279 "string.format.m"
                                if (mercury__string__format__succeeded)
#line 278 "string.format.m"
                                  mercury__string__format__NStr_4 = (MR_String) "eighth";
#line 279 "string.format.m"
                                else
#line 281 "string.format.m"
                                  {
#line 279 "string.format.m"
                                    mercury__string__format__succeeded = (mercury__string__format__N_3 == (MR_Integer) 9);
#line 281 "string.format.m"
                                    if (mercury__string__format__succeeded)
#line 280 "string.format.m"
                                      mercury__string__format__NStr_4 = (MR_String) "ninth";
#line 281 "string.format.m"
                                    else
#line 283 "string.format.m"
                                      {
#line 281 "string.format.m"
                                        mercury__string__format__succeeded = (mercury__string__format__N_3 == (MR_Integer) 10);
#line 283 "string.format.m"
                                        if (mercury__string__format__succeeded)
#line 282 "string.format.m"
                                          mercury__string__format__NStr_4 = (MR_String) "tenth";
#line 283 "string.format.m"
                                        else
#line 284 "string.format.m"
                                          {
#line 284 "string.format.m"
                                            MR_String mercury__string__format__V_5_5;

#line 705 "string.opt"
                                            {
#line 705 "string.opt"
                                              mercury__string__int_to_base_string_3_p_0(mercury__string__format__N_3, (MR_Integer) 10, &mercury__string__format__V_5_5);
                                            }
#line 406 "string.opt"
                                            {
#line 406 "string.opt"
                                              mercury__string__append_3_p_2(mercury__string__format__V_5_5, (MR_String) "th", &mercury__string__format__NStr_4);
                                            }
#line 284 "string.format.m"
                                          }
#line 283 "string.format.m"
                                      }
#line 281 "string.format.m"
                                  }
#line 279 "string.format.m"
                              }
#line 277 "string.format.m"
                          }
#line 275 "string.format.m"
                      }
#line 273 "string.format.m"
                  }
#line 271 "string.format.m"
              }
#line 269 "string.format.m"
          }
#line 267 "string.format.m"
      }
#line 265 "string.format.m"
    return mercury__string__format__NStr_4;
#line 265 "string.format.m"
  }
#line 260 "string.format.m"
}

#line 255 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__nth_specifier_1_f_0(
#line 255 "string.format.m"
  MR_Integer mercury__string__format__SpecNum_3)
#line 255 "string.format.m"
{
#line 257 "string.format.m"
  {
#line 257 "string.format.m"
    MR_bool mercury__string__format__succeeded = (mercury__string__format__SpecNum_3 == (MR_Integer) 1);
#line 257 "string.format.m"
    MR_String mercury__string__format__HeadVar__2_2;
#line 257 "string.format.m"
    MR_String mercury__string__format__V_5_5;
#line 257 "string.format.m"
    MR_String mercury__string__format__V_6_6;

#line 265 "string.format.m"
    if (mercury__string__format__succeeded)
#line 264 "string.format.m"
      mercury__string__format__V_6_6 = (MR_String) "first";
#line 265 "string.format.m"
    else
#line 267 "string.format.m"
      {
#line 265 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__SpecNum_3 == (MR_Integer) 2);
#line 267 "string.format.m"
        if (mercury__string__format__succeeded)
#line 266 "string.format.m"
          mercury__string__format__V_6_6 = (MR_String) "second";
#line 267 "string.format.m"
        else
#line 269 "string.format.m"
          {
#line 267 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__SpecNum_3 == (MR_Integer) 3);
#line 269 "string.format.m"
            if (mercury__string__format__succeeded)
#line 268 "string.format.m"
              mercury__string__format__V_6_6 = (MR_String) "third";
#line 269 "string.format.m"
            else
#line 271 "string.format.m"
              {
#line 269 "string.format.m"
                mercury__string__format__succeeded = (mercury__string__format__SpecNum_3 == (MR_Integer) 4);
#line 271 "string.format.m"
                if (mercury__string__format__succeeded)
#line 270 "string.format.m"
                  mercury__string__format__V_6_6 = (MR_String) "fourth";
#line 271 "string.format.m"
                else
#line 273 "string.format.m"
                  {
#line 271 "string.format.m"
                    mercury__string__format__succeeded = (mercury__string__format__SpecNum_3 == (MR_Integer) 5);
#line 273 "string.format.m"
                    if (mercury__string__format__succeeded)
#line 272 "string.format.m"
                      mercury__string__format__V_6_6 = (MR_String) "fifth";
#line 273 "string.format.m"
                    else
#line 275 "string.format.m"
                      {
#line 273 "string.format.m"
                        mercury__string__format__succeeded = (mercury__string__format__SpecNum_3 == (MR_Integer) 6);
#line 275 "string.format.m"
                        if (mercury__string__format__succeeded)
#line 274 "string.format.m"
                          mercury__string__format__V_6_6 = (MR_String) "sixth";
#line 275 "string.format.m"
                        else
#line 277 "string.format.m"
                          {
#line 275 "string.format.m"
                            mercury__string__format__succeeded = (mercury__string__format__SpecNum_3 == (MR_Integer) 7);
#line 277 "string.format.m"
                            if (mercury__string__format__succeeded)
#line 276 "string.format.m"
                              mercury__string__format__V_6_6 = (MR_String) "seventh";
#line 277 "string.format.m"
                            else
#line 279 "string.format.m"
                              {
#line 277 "string.format.m"
                                mercury__string__format__succeeded = (mercury__string__format__SpecNum_3 == (MR_Integer) 8);
#line 279 "string.format.m"
                                if (mercury__string__format__succeeded)
#line 278 "string.format.m"
                                  mercury__string__format__V_6_6 = (MR_String) "eighth";
#line 279 "string.format.m"
                                else
#line 281 "string.format.m"
                                  {
#line 279 "string.format.m"
                                    mercury__string__format__succeeded = (mercury__string__format__SpecNum_3 == (MR_Integer) 9);
#line 281 "string.format.m"
                                    if (mercury__string__format__succeeded)
#line 280 "string.format.m"
                                      mercury__string__format__V_6_6 = (MR_String) "ninth";
#line 281 "string.format.m"
                                    else
#line 283 "string.format.m"
                                      {
#line 281 "string.format.m"
                                        mercury__string__format__succeeded = (mercury__string__format__SpecNum_3 == (MR_Integer) 10);
#line 283 "string.format.m"
                                        if (mercury__string__format__succeeded)
#line 282 "string.format.m"
                                          mercury__string__format__V_6_6 = (MR_String) "tenth";
#line 283 "string.format.m"
                                        else
#line 284 "string.format.m"
                                          {
#line 284 "string.format.m"
                                            MR_String mercury__string__format__V_10_10;

#line 705 "string.opt"
                                            {
#line 705 "string.opt"
                                              mercury__string__int_to_base_string_3_p_0(mercury__string__format__SpecNum_3, (MR_Integer) 10, &mercury__string__format__V_10_10);
                                            }
#line 406 "string.opt"
                                            {
#line 406 "string.opt"
                                              mercury__string__append_3_p_2(mercury__string__format__V_10_10, (MR_String) "th", &mercury__string__format__V_6_6);
                                            }
#line 284 "string.format.m"
                                          }
#line 283 "string.format.m"
                                      }
#line 281 "string.format.m"
                                  }
#line 279 "string.format.m"
                              }
#line 277 "string.format.m"
                          }
#line 275 "string.format.m"
                      }
#line 273 "string.format.m"
                  }
#line 271 "string.format.m"
              }
#line 269 "string.format.m"
          }
#line 267 "string.format.m"
      }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2(mercury__string__format__V_6_6, (MR_String) " conversion specifier", &mercury__string__format__V_5_5);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2((MR_String) "The ", mercury__string__format__V_5_5, &mercury__string__format__HeadVar__2_2);
    }
#line 257 "string.format.m"
    return mercury__string__format__HeadVar__2_2;
#line 257 "string.format.m"
  }
#line 255 "string.format.m"
}

#line 186 "string.format.m"
static MR_String MR_CALL 
mercury__string__format__format_str_error_to_msg_1_f_0(
#line 186 "string.format.m"
  MR_Word mercury__string__format__Error_3)
#line 186 "string.format.m"
{
#line 190 "string.format.m"
  {
#line 190 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 190 "string.format.m"
    MR_String mercury__string__format__Msg_4;

#line 190 "string.format.m"
    if (((MR_tag((MR_Word) mercury__string__format__Error_3)) == (MR_mktag((MR_Integer) 0))))
#line 190 "string.format.m"
      {
#line 190 "string.format.m"
        MR_Integer mercury__string__format__SpecNum_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__format__Error_3, (MR_Integer) 0)));
#line 190 "string.format.m"
        MR_Integer mercury__string__format__NumExtraPolyTypes_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__format__Error_3, (MR_Integer) 1)));
#line 190 "string.format.m"
        MR_String mercury__string__format__Msg0_7;
#line 190 "string.format.m"
        MR_String mercury__string__format__V_71_71;

#line 191 "string.format.m"
        {
#line 191 "string.format.m"
          mercury__string__format__V_71_71 = mercury__string__format__nth_specifier_1_f_0(mercury__string__format__SpecNum_5);
        }
#line 191 "string.format.m"
        {
#line 191 "string.format.m"
          mercury__string__format__Msg0_7 = mercury__string__f_43_43_2_f_0(mercury__string__format__V_71_71, (MR_String) " is missing");
        }
#line 192 "string.format.m"
        mercury__string__format__succeeded = (mercury__string__format__NumExtraPolyTypes_6 == (MR_Integer) 0);
#line 194 "string.format.m"
        if (mercury__string__format__succeeded)
#line 193 "string.format.m"
          {
#line 193 "string.format.m"
            {
#line 193 "string.format.m"
              return mercury__string__format__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__format__Msg0_7, (MR_String) ", along with its input.");
            }
#line 193 "string.format.m"
          }
#line 194 "string.format.m"
        else
#line 196 "string.format.m"
          {
#line 194 "string.format.m"
            mercury__string__format__succeeded = (mercury__string__format__NumExtraPolyTypes_6 == (MR_Integer) 1);
#line 196 "string.format.m"
            if (mercury__string__format__succeeded)
#line 195 "string.format.m"
              {
#line 195 "string.format.m"
                {
#line 195 "string.format.m"
                  return mercury__string__format__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__format__Msg0_7, (MR_String) ".");
                }
#line 195 "string.format.m"
              }
#line 196 "string.format.m"
            else
#line 197 "string.format.m"
              {
#line 197 "string.format.m"
                MR_String mercury__string__format__V_75_75;
#line 197 "string.format.m"
                MR_String mercury__string__format__V_77_77;
#line 197 "string.format.m"
                MR_String mercury__string__format__V_78_78;
#line 197 "string.format.m"
                MR_Integer mercury__string__format__V_79_79 = (mercury__string__format__NumExtraPolyTypes_6 - (MR_Integer) 1);

#line 198 "string.format.m"
                {
#line 198 "string.format.m"
                  mercury__string__format__V_78_78 = mercury__string__int_to_string_1_f_0(mercury__string__format__V_79_79);
                }
#line 199 "string.format.m"
                {
#line 199 "string.format.m"
                  mercury__string__format__V_77_77 = mercury__string__f_43_43_2_f_0(mercury__string__format__V_78_78, (MR_String) " extra inputs.");
                }
#line 198 "string.format.m"
                {
#line 198 "string.format.m"
                  mercury__string__format__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) ", and there are ", mercury__string__format__V_77_77);
                }
#line 197 "string.format.m"
                {
#line 197 "string.format.m"
                  return mercury__string__format__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__format__Msg0_7, mercury__string__format__V_75_75);
                }
#line 197 "string.format.m"
              }
#line 196 "string.format.m"
          }
#line 190 "string.format.m"
      }
#line 190 "string.format.m"
    else
#line 190 "string.format.m"
      if (((MR_tag((MR_Word) mercury__string__format__Error_3)) == (MR_mktag((MR_Integer) 1))))
#line 202 "string.format.m"
        {
#line 202 "string.format.m"
          MR_Char mercury__string__format__SpecChar_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__Error_3, (MR_Integer) 1)));
#line 202 "string.format.m"
          MR_String mercury__string__format__V_65_65;
#line 202 "string.format.m"
          MR_String mercury__string__format__V_66_66;
#line 202 "string.format.m"
          MR_String mercury__string__format__V_68_68;
#line 202 "string.format.m"
          MR_String mercury__string__format__V_69_69;
#line 202 "string.format.m"
          MR_Integer mercury__string__format__SpecNum_82 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__format__Error_3, (MR_Integer) 0)));

#line 203 "string.format.m"
          {
#line 203 "string.format.m"
            mercury__string__format__V_65_65 = mercury__string__format__nth_specifier_1_f_0(mercury__string__format__SpecNum_82);
          }
#line 204 "string.format.m"
          {
#line 204 "string.format.m"
            mercury__string__format__V_69_69 = mercury__string__format__specifier_char_1_f_0(mercury__string__format__SpecChar_8);
          }
#line 204 "string.format.m"
          {
#line 204 "string.format.m"
            mercury__string__format__V_68_68 = mercury__string__f_43_43_2_f_0(mercury__string__format__V_69_69, (MR_String) ".");
          }
#line 204 "string.format.m"
          {
#line 204 "string.format.m"
            mercury__string__format__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) " uses the unknown ", mercury__string__format__V_68_68);
          }
#line 203 "string.format.m"
          {
#line 203 "string.format.m"
            return mercury__string__format__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__format__V_65_65, mercury__string__format__V_66_66);
          }
#line 202 "string.format.m"
        }
#line 190 "string.format.m"
      else
#line 190 "string.format.m"
        if (((MR_tag((MR_Word) mercury__string__format__Error_3)) == (MR_mktag((MR_Integer) 2))))
#line 206 "string.format.m"
          {
#line 206 "string.format.m"
            MR_Word mercury__string__format__PolyKind_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__Error_3, (MR_Integer) 2)));
#line 206 "string.format.m"
            MR_String mercury__string__format__V_55_55;
#line 206 "string.format.m"
            MR_String mercury__string__format__V_56_56;
#line 206 "string.format.m"
            MR_String mercury__string__format__V_58_58;
#line 206 "string.format.m"
            MR_String mercury__string__format__V_59_59;
#line 206 "string.format.m"
            MR_String mercury__string__format__V_60_60;
#line 206 "string.format.m"
            MR_String mercury__string__format__V_62_62;
#line 206 "string.format.m"
            MR_String mercury__string__format__V_63_63;
#line 206 "string.format.m"
            MR_Integer mercury__string__format__SpecNum_83 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__string__format__Error_3, (MR_Integer) 0)));
#line 206 "string.format.m"
            MR_Char mercury__string__format__SpecChar_84 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(2), mercury__string__format__Error_3, (MR_Integer) 1)));

#line 207 "string.format.m"
            {
#line 207 "string.format.m"
              mercury__string__format__V_55_55 = mercury__string__format__nth_specifier_1_f_0(mercury__string__format__SpecNum_83);
            }
#line 208 "string.format.m"
            {
#line 208 "string.format.m"
              mercury__string__format__V_59_59 = mercury__string__format__specifier_char_1_f_0(mercury__string__format__SpecChar_84);
            }
#line 294 "string.format.m"
            if ((mercury__string__format__PolyKind_9 == (MR_Integer) 0))
#line 294 "string.format.m"
              mercury__string__format__V_63_63 = (MR_String) "a character";
#line 294 "string.format.m"
            else
#line 294 "string.format.m"
              if ((mercury__string__format__PolyKind_9 == (MR_Integer) 3))
#line 297 "string.format.m"
                mercury__string__format__V_63_63 = (MR_String) "a float";
#line 294 "string.format.m"
              else
#line 294 "string.format.m"
                if ((mercury__string__format__PolyKind_9 == (MR_Integer) 2))
#line 296 "string.format.m"
                  mercury__string__format__V_63_63 = (MR_String) "an integer";
#line 294 "string.format.m"
                else
#line 295 "string.format.m"
                  mercury__string__format__V_63_63 = (MR_String) "a string";
#line 210 "string.format.m"
            {
#line 210 "string.format.m"
              mercury__string__format__V_62_62 = mercury__string__f_43_43_2_f_0(mercury__string__format__V_63_63, (MR_String) ".");
            }
#line 210 "string.format.m"
            {
#line 210 "string.format.m"
              mercury__string__format__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) ", but the corresponding input is ", mercury__string__format__V_62_62);
            }
#line 209 "string.format.m"
            {
#line 209 "string.format.m"
              mercury__string__format__V_58_58 = mercury__string__f_43_43_2_f_0(mercury__string__format__V_59_59, mercury__string__format__V_60_60);
            }
#line 208 "string.format.m"
            {
#line 208 "string.format.m"
              mercury__string__format__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) " uses the ", mercury__string__format__V_58_58);
            }
#line 207 "string.format.m"
            {
#line 207 "string.format.m"
              return mercury__string__format__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__format__V_55_55, mercury__string__format__V_56_56);
            }
#line 206 "string.format.m"
          }
#line 190 "string.format.m"
        else
#line 190 "string.format.m"
          if (((((MR_tag((MR_Word) mercury__string__format__Error_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Error_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 239 "string.format.m"
            {
#line 239 "string.format.m"
              MR_String mercury__string__format__Extra_10;
#line 239 "string.format.m"
              MR_String mercury__string__format__V_12_12;
#line 239 "string.format.m"
              MR_String mercury__string__format__V_13_13;
#line 239 "string.format.m"
              MR_Integer mercury__string__format__SpecNum_93 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__Error_3, (MR_Integer) 1)));
#line 239 "string.format.m"
              MR_Integer mercury__string__format__NumExtraPolyTypes_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__Error_3, (MR_Integer) 2)));
#line 239 "string.format.m"
              MR_String mercury__string__format__Msg0_95;

#line 240 "string.format.m"
              mercury__string__format__succeeded = (mercury__string__format__SpecNum_93 == (MR_Integer) 1);
#line 243 "string.format.m"
              if (mercury__string__format__succeeded)
#line 242 "string.format.m"
                mercury__string__format__Extra_10 = (MR_String) "";
#line 243 "string.format.m"
              else
#line 244 "string.format.m"
                mercury__string__format__Extra_10 = (MR_String) "extra ";
#line 246 "string.format.m"
              {
#line 246 "string.format.m"
                mercury__string__format__V_13_13 = mercury__string__format__nth_1_f_0(mercury__string__format__SpecNum_93);
              }
#line 246 "string.format.m"
              {
#line 246 "string.format.m"
                mercury__string__format__V_12_12 = mercury__string__f_43_43_2_f_0(mercury__string__format__V_13_13, (MR_String) " conversion specifier,");
              }
#line 246 "string.format.m"
              {
#line 246 "string.format.m"
                mercury__string__format__Msg0_95 = mercury__string__f_43_43_2_f_0((MR_String) "There is no ", mercury__string__format__V_12_12);
              }
#line 247 "string.format.m"
              mercury__string__format__succeeded = (mercury__string__format__NumExtraPolyTypes_94 == (MR_Integer) 1);
#line 249 "string.format.m"
              if (mercury__string__format__succeeded)
#line 248 "string.format.m"
                {
#line 248 "string.format.m"
                  MR_String mercury__string__format__V_15_15;
#line 248 "string.format.m"
                  MR_String mercury__string__format__V_17_17;

#line 248 "string.format.m"
                  {
#line 248 "string.format.m"
                    mercury__string__format__V_17_17 = mercury__string__f_43_43_2_f_0(mercury__string__format__Extra_10, (MR_String) "input.");
                  }
#line 248 "string.format.m"
                  {
#line 248 "string.format.m"
                    mercury__string__format__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) " but there is an ", mercury__string__format__V_17_17);
                  }
#line 248 "string.format.m"
                  {
#line 248 "string.format.m"
                    return mercury__string__format__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__format__Msg0_95, mercury__string__format__V_15_15);
                  }
#line 248 "string.format.m"
                }
#line 249 "string.format.m"
              else
#line 250 "string.format.m"
                {
#line 250 "string.format.m"
                  MR_String mercury__string__format__V_19_19;
#line 250 "string.format.m"
                  MR_String mercury__string__format__V_21_21;
#line 250 "string.format.m"
                  MR_String mercury__string__format__V_22_22;
#line 250 "string.format.m"
                  MR_String mercury__string__format__V_23_23;

#line 251 "string.format.m"
                  {
#line 251 "string.format.m"
                    mercury__string__format__V_22_22 = mercury__string__int_to_string_1_f_0(mercury__string__format__NumExtraPolyTypes_94);
                  }
#line 251 "string.format.m"
                  {
#line 251 "string.format.m"
                    mercury__string__format__V_23_23 = mercury__string__f_43_43_2_f_0(mercury__string__format__Extra_10, (MR_String) "inputs.");
                  }
#line 251 "string.format.m"
                  {
#line 251 "string.format.m"
                    mercury__string__format__V_21_21 = mercury__string__f_43_43_2_f_0(mercury__string__format__V_22_22, mercury__string__format__V_23_23);
                  }
#line 250 "string.format.m"
                  {
#line 250 "string.format.m"
                    mercury__string__format__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) " but there are ", mercury__string__format__V_21_21);
                  }
#line 250 "string.format.m"
                  {
#line 250 "string.format.m"
                    return mercury__string__format__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__format__Msg0_95, mercury__string__format__V_19_19);
                  }
#line 250 "string.format.m"
                }
#line 239 "string.format.m"
            }
#line 190 "string.format.m"
          else
#line 190 "string.format.m"
            if (((((MR_tag((MR_Word) mercury__string__format__Error_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Error_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 234 "string.format.m"
              {
#line 234 "string.format.m"
                MR_String mercury__string__format__V_25_25;
#line 234 "string.format.m"
                MR_Integer mercury__string__format__SpecNum_92 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__Error_3, (MR_Integer) 1)));

#line 235 "string.format.m"
                {
#line 235 "string.format.m"
                  mercury__string__format__V_25_25 = mercury__string__format__nth_specifier_1_f_0(mercury__string__format__SpecNum_92);
                }
#line 236 "string.format.m"
                {
#line 236 "string.format.m"
                  return mercury__string__format__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__format__V_25_25, (MR_String) " says the precision is a runtime input, but there is no next input.");
                }
#line 234 "string.format.m"
              }
#line 190 "string.format.m"
            else
#line 190 "string.format.m"
              if (((((MR_tag((MR_Word) mercury__string__format__Error_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Error_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 223 "string.format.m"
                {
#line 223 "string.format.m"
                  MR_String mercury__string__format__V_37_37;
#line 223 "string.format.m"
                  MR_Integer mercury__string__format__SpecNum_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__Error_3, (MR_Integer) 1)));

#line 224 "string.format.m"
                  {
#line 224 "string.format.m"
                    mercury__string__format__V_37_37 = mercury__string__format__nth_specifier_1_f_0(mercury__string__format__SpecNum_89);
                  }
#line 225 "string.format.m"
                  {
#line 225 "string.format.m"
                    return mercury__string__format__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__format__V_37_37, (MR_String) " says the width is a runtime input, but there is no next input.");
                  }
#line 223 "string.format.m"
                }
#line 190 "string.format.m"
              else
#line 190 "string.format.m"
                if (((((MR_tag((MR_Word) mercury__string__format__Error_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Error_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 212 "string.format.m"
                  {
#line 212 "string.format.m"
                    MR_String mercury__string__format__V_49_49;
#line 212 "string.format.m"
                    MR_String mercury__string__format__V_50_50;
#line 212 "string.format.m"
                    MR_String mercury__string__format__V_52_52;
#line 212 "string.format.m"
                    MR_String mercury__string__format__V_53_53;
#line 212 "string.format.m"
                    MR_Integer mercury__string__format__SpecNum_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__Error_3, (MR_Integer) 1)));
#line 212 "string.format.m"
                    MR_Char mercury__string__format__SpecChar_86 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Error_3, (MR_Integer) 2)));

#line 213 "string.format.m"
                    {
#line 213 "string.format.m"
                      mercury__string__format__V_49_49 = mercury__string__format__nth_specifier_1_f_0(mercury__string__format__SpecNum_85);
                    }
#line 214 "string.format.m"
                    {
#line 214 "string.format.m"
                      mercury__string__format__V_53_53 = mercury__string__format__specifier_char_1_f_0(mercury__string__format__SpecChar_86);
                    }
#line 215 "string.format.m"
                    {
#line 215 "string.format.m"
                      mercury__string__format__V_52_52 = mercury__string__f_43_43_2_f_0(mercury__string__format__V_53_53, (MR_String) ", is missing its input.");
                    }
#line 214 "string.format.m"
                    {
#line 214 "string.format.m"
                      mercury__string__format__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) ", which uses ", mercury__string__format__V_52_52);
                    }
#line 214 "string.format.m"
                    {
#line 214 "string.format.m"
                      return mercury__string__format__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__format__V_49_49, mercury__string__format__V_50_50);
                    }
#line 212 "string.format.m"
                  }
#line 190 "string.format.m"
                else
#line 190 "string.format.m"
                  if (((((MR_tag((MR_Word) mercury__string__format__Error_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Error_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 228 "string.format.m"
                    {
#line 228 "string.format.m"
                      MR_String mercury__string__format__V_29_29;
#line 228 "string.format.m"
                      MR_String mercury__string__format__V_30_30;
#line 228 "string.format.m"
                      MR_String mercury__string__format__V_32_32;
#line 228 "string.format.m"
                      MR_String mercury__string__format__V_34_34;
#line 228 "string.format.m"
                      MR_String mercury__string__format__V_35_35;
#line 228 "string.format.m"
                      MR_Integer mercury__string__format__SpecNum_90 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__Error_3, (MR_Integer) 1)));
#line 228 "string.format.m"
                      MR_Word mercury__string__format__PolyKind_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Error_3, (MR_Integer) 2)));

#line 229 "string.format.m"
                      {
#line 229 "string.format.m"
                        mercury__string__format__V_29_29 = mercury__string__format__nth_specifier_1_f_0(mercury__string__format__SpecNum_90);
                      }
#line 294 "string.format.m"
                      if ((mercury__string__format__PolyKind_91 == (MR_Integer) 0))
#line 294 "string.format.m"
                        mercury__string__format__V_35_35 = (MR_String) "a character";
#line 294 "string.format.m"
                      else
#line 294 "string.format.m"
                        if ((mercury__string__format__PolyKind_91 == (MR_Integer) 3))
#line 297 "string.format.m"
                          mercury__string__format__V_35_35 = (MR_String) "a float";
#line 294 "string.format.m"
                        else
#line 294 "string.format.m"
                          if ((mercury__string__format__PolyKind_91 == (MR_Integer) 2))
#line 296 "string.format.m"
                            mercury__string__format__V_35_35 = (MR_String) "an integer";
#line 294 "string.format.m"
                          else
#line 295 "string.format.m"
                            mercury__string__format__V_35_35 = (MR_String) "a string";
#line 232 "string.format.m"
                      {
#line 232 "string.format.m"
                        mercury__string__format__V_34_34 = mercury__string__f_43_43_2_f_0(mercury__string__format__V_35_35, (MR_String) ", not an integer.");
                      }
#line 231 "string.format.m"
                      {
#line 231 "string.format.m"
                        mercury__string__format__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) " but the next input is ", mercury__string__format__V_34_34);
                      }
#line 231 "string.format.m"
                      {
#line 231 "string.format.m"
                        mercury__string__format__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) " says the precision is a runtime input,", mercury__string__format__V_32_32);
                      }
#line 230 "string.format.m"
                      {
#line 230 "string.format.m"
                        return mercury__string__format__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__format__V_29_29, mercury__string__format__V_30_30);
                      }
#line 228 "string.format.m"
                    }
#line 190 "string.format.m"
                  else
#line 217 "string.format.m"
                    {
#line 217 "string.format.m"
                      MR_String mercury__string__format__V_41_41;
#line 217 "string.format.m"
                      MR_String mercury__string__format__V_42_42;
#line 217 "string.format.m"
                      MR_String mercury__string__format__V_44_44;
#line 217 "string.format.m"
                      MR_String mercury__string__format__V_46_46;
#line 217 "string.format.m"
                      MR_String mercury__string__format__V_47_47;
#line 217 "string.format.m"
                      MR_Integer mercury__string__format__SpecNum_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__string__format__Error_3, (MR_Integer) 1)));
#line 217 "string.format.m"
                      MR_Word mercury__string__format__PolyKind_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__format__Error_3, (MR_Integer) 2)));

#line 218 "string.format.m"
                      {
#line 218 "string.format.m"
                        mercury__string__format__V_41_41 = mercury__string__format__nth_specifier_1_f_0(mercury__string__format__SpecNum_87);
                      }
#line 294 "string.format.m"
                      if ((mercury__string__format__PolyKind_88 == (MR_Integer) 0))
#line 294 "string.format.m"
                        mercury__string__format__V_47_47 = (MR_String) "a character";
#line 294 "string.format.m"
                      else
#line 294 "string.format.m"
                        if ((mercury__string__format__PolyKind_88 == (MR_Integer) 3))
#line 297 "string.format.m"
                          mercury__string__format__V_47_47 = (MR_String) "a float";
#line 294 "string.format.m"
                        else
#line 294 "string.format.m"
                          if ((mercury__string__format__PolyKind_88 == (MR_Integer) 2))
#line 296 "string.format.m"
                            mercury__string__format__V_47_47 = (MR_String) "an integer";
#line 294 "string.format.m"
                          else
#line 295 "string.format.m"
                            mercury__string__format__V_47_47 = (MR_String) "a string";
#line 221 "string.format.m"
                      {
#line 221 "string.format.m"
                        mercury__string__format__V_46_46 = mercury__string__f_43_43_2_f_0(mercury__string__format__V_47_47, (MR_String) ", not an integer.");
                      }
#line 220 "string.format.m"
                      {
#line 220 "string.format.m"
                        mercury__string__format__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) " but the next input is ", mercury__string__format__V_46_46);
                      }
#line 220 "string.format.m"
                      {
#line 220 "string.format.m"
                        mercury__string__format__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) " says the width is a runtime input,", mercury__string__format__V_44_44);
                      }
#line 219 "string.format.m"
                      {
#line 219 "string.format.m"
                        return mercury__string__format__Msg_4 = mercury__string__f_43_43_2_f_0(mercury__string__format__V_41_41, mercury__string__format__V_42_42);
                      }
#line 217 "string.format.m"
                    }
#line 190 "string.format.m"
    return mercury__string__format__Msg_4;
#line 190 "string.format.m"
  }
#line 186 "string.format.m"
}

#line 23 "string.format.m"
void MR_CALL 
mercury__string__format__format_impl_3_p_0(
#line 23 "string.format.m"
  MR_String mercury__string__format__FormatString_4,
#line 23 "string.format.m"
  MR_Word mercury__string__format__PolyList_5,
#line 23 "string.format.m"
  MR_String * mercury__string__format__String_6)
#line 23 "string.format.m"
{
#line 159 "string.format.m"
  {
#line 159 "string.format.m"
    MR_bool mercury__string__format__succeeded;
#line 159 "string.format.m"
    MR_Word mercury__string__format__Chars_7;
#line 159 "string.format.m"
    MR_Word mercury__string__format__Components_8;
#line 159 "string.format.m"
    MR_Word mercury__string__format__Errors_9;

#line 139 "string.opt"
    {
#line 139 "string.opt"
      mercury__string__to_char_list_2_p_0(mercury__string__format__FormatString_4, &mercury__string__format__Chars_7);
    }
#line 167 "string.format.m"
    {
#line 167 "string.format.m"
      mercury__string__format__format_string_to_components_5_p_0(mercury__string__format__Chars_7, mercury__string__format__PolyList_5, (MR_Integer) 1, &mercury__string__format__Components_8, &mercury__string__format__Errors_9);
    }
#line 172 "string.format.m"
    if ((mercury__string__format__Errors_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 169 "string.format.m"
      {
#line 169 "string.format.m"
        MR_Word mercury__string__format__ComponentStrs_10;

#line 170 "string.format.m"
        {
#line 170 "string.format.m"
          mercury__string__format__components_to_strings_2_p_0(mercury__string__format__Components_8, &mercury__string__format__ComponentStrs_10);
        }
#line 171 "string.format.m"
        {
#line 171 "string.format.m"
          *mercury__string__format__String_6 = mercury__string__append_list_1_f_0(mercury__string__format__ComponentStrs_10);
        }
#line 169 "string.format.m"
      }
#line 172 "string.format.m"
    else
#line 173 "string.format.m"
      {
#line 173 "string.format.m"
        MR_Word mercury__string__format__HeadError_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__Errors_9, (MR_Integer) 0)));
#line 173 "string.format.m"
        MR_String mercury__string__format__Msg_13;
#line 173 "string.format.m"
        MR_Word mercury__string__format__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__format__Errors_9, (MR_Integer) 1)));

#line 182 "string.format.m"
        {
#line 182 "string.format.m"
          mercury__string__format__Msg_13 = mercury__string__format__format_str_error_to_msg_1_f_0(mercury__string__format__HeadError_11);
        }
#line 183 "string.format.m"
        {
#line 183 "string.format.m"
          mercury__require__error_2_p_0((MR_String) "string.format", mercury__string__format__Msg_13);
#line 183 "string.format.m"
          return;
        }
#line 173 "string.format.m"
      }
#line 159 "string.format.m"
  }
#line 23 "string.format.m"
}

void mercury__string__format__init(void)
{
}

void mercury__string__format__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__string__format__string__format__type_ctor_info_flag_hash_0);
	MR_register_type_ctor_info(&mercury__string__format__string__format__type_ctor_info_flag_minus_0);
	MR_register_type_ctor_info(&mercury__string__format__string__format__type_ctor_info_flag_plus_0);
	MR_register_type_ctor_info(&mercury__string__format__string__format__type_ctor_info_flag_space_0);
	MR_register_type_ctor_info(&mercury__string__format__string__format__type_ctor_info_flag_zero_0);
	MR_register_type_ctor_info(&mercury__string__format__string__format__type_ctor_info_flags_0);
	MR_register_type_ctor_info(&mercury__string__format__string__format__type_ctor_info_float_kind_0);
	MR_register_type_ctor_info(&mercury__string__format__string__format__type_ctor_info_format_str_component_0);
	MR_register_type_ctor_info(&mercury__string__format__string__format__type_ctor_info_format_str_error_0);
	MR_register_type_ctor_info(&mercury__string__format__string__format__type_ctor_info_format_str_spec_0);
	MR_register_type_ctor_info(&mercury__string__format__string__format__type_ctor_info_gather_ended_by_0);
	MR_register_type_ctor_info(&mercury__string__format__string__format__type_ctor_info_int_base_0);
	MR_register_type_ctor_info(&mercury__string__format__string__format__type_ctor_info_maybe_prec_0);
	MR_register_type_ctor_info(&mercury__string__format__string__format__type_ctor_info_maybe_width_0);
	MR_register_type_ctor_info(&mercury__string__format__string__format__type_ctor_info_poly_kind_0);
}

void mercury__string__format__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module string.format. */
